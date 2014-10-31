//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Eduardo Marques                                                  *
// Author: Paulo Dias (plan actions addition)                               *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Plan.hpp"
#include "MementoHandler.hpp"
#include "DataBaseInteraction.hpp"
#include "CCUInteraction.hpp"
#include "VehicleInteraction.hpp"

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

    //! Timeout for the vehicle command reply.
    const double c_vc_reply_timeout = 2.5;
    //! Timeout for the vehicle state
    const double c_vs_timeout = 2.5;
    //! Activation maneuver time factor
    const float c_activ_factor = 1.5f;
    //! Minimum activation maneuver time
    const float c_activ_min = 15.0f;
    //! Plan engine state descriptions
    const char* c_state_desc[] = {DTR_RT("NONE"), DTR_RT("BOOT"), DTR_RT("READY"),
                                  DTR_RT("STOPPING"), DTR_RT("START_ACTIV"),
                                  DTR_RT("ACTIVATING"), DTR_RT("START_EXEC"),
                                  DTR_RT("EXECUTING"), DTR_RT("BLOCKED")};
    //! Plan control state description
    const char* c_pcs_desc[] = {DTR_RT("BLOCKED"), DTR_RT("READY"),
                                DTR_RT("INITIALIZING"), DTR_RT("EXECUTING")};
    //! Message to print when no plan is running
    const char* c_no_plan_running = DTR("no plan is running, request ignored");
    //! Message to print when plan is loaded
    const char* c_plan_loaded = DTR("plan loaded");

    enum EngineState
    {
      //! Invalid state
      ST_NONE = 0,
      //! Starts in boot waiting for DB
      ST_BOOT = 1,
      //! Becomes ready to await commands
      ST_READY,
      //! Stopping a plan
      ST_STOPPING,
      //! Starting activation
      ST_START_ACTIV,
      //! Activating
      ST_ACTIVATING,
      //! Starting execution
      ST_START_EXEC,
      //! Executing
      ST_EXECUTING,
      //! Blocked
      ST_BLOCKED
    };

    struct Arguments
    {
      //! Whether or not to compute plan's progress
      bool progress;
      //! Whether or not to compute fuel prediction
      bool fpredict;
      //! State report period
      float speriod;
      //! Abort when a payload fails to activate
      bool actfail_abort;
      //! Perform station keeping while activating
      bool sk_activ;
      //! Radius for the station keeping
      float sk_radius;
      //! Speed in RPM for the station keeping
      float sk_rpm;
      //! Entity label of the IMU
      std::string label_imu;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Pointer to Plan class
      Plan* m_plan;
      //! Plan control interface
      IMC::PlanControlState m_pcs;
      //! PlanSpecification message
      IMC::PlanSpecification m_spec;
      //! List of supported maneuvers.
      std::set<uint16_t> m_supported_maneuvers;
      //! Database interaction
      DataBaseInteraction* m_db;
      //! CCU interaction
      CCUInteraction* m_ccu;
      //! Vehicle interaction
      VehicleInteraction* m_vein;
      //! Misc.
      IMC::LoggingControl m_lc;
      IMC::EstimatedState m_state;
      //! ManeuverControlState message
      IMC::ManeuverControlState m_mcs;
      //! Timer counter for state report period
      Time::Counter<float> m_report_timer;
      //! Map of component names to entityinfo
      std::map<std::string, IMC::EntityInfo> m_cinfo;
      //! Source entity of the IMU
      unsigned m_eid_imu;
      //! IMU is enabled or not
      bool m_imu_enabled;
      //! Plan reference for everytime we are about to start a new plan
      uint32_t m_plan_ref;
      //! Object that will handle the memento messages
      MementoHandler m_mh;
      //! State of the state machine
      EngineState m_sm;
      //! Next state for the machine
      EngineState m_next_sm;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_plan(NULL),
        m_db(NULL),
        m_ccu(NULL),
        m_vein(NULL),
        m_imu_enabled(false),
        m_plan_ref(0),
        m_sm(ST_BOOT),
        m_next_sm(ST_NONE)
      {
        param("Compute Progress", m_args.progress)
        .defaultValue("false")
        .description("True if plan progress should be computed");

        param("Fuel Prediction", m_args.fpredict)
        .defaultValue("true")
        .description("True if plan's fuel prediction should be computed");

        param("State Report Frequency", m_args.speriod)
        .defaultValue("3.0")
        .units(Units::Hertz)
        .description("Frequency of plan control state");

        param("Abort On Failed Activation", m_args.actfail_abort)
        .defaultValue("false")
        .description("Abort when a payload fails to activate");

        param("StationKeeping While Activating", m_args.sk_activ)
        .defaultValue("false")
        .description("Perform station keeping while activating");

        param("StationKeeping Speed in RPM", m_args.sk_rpm)
        .defaultValue("1600")
        .units(Units::RPM)
        .description("Speed in RPM for the station keeping");

        param("StationKeeping Radius", m_args.sk_radius)
        .defaultValue("20")
        .units(Units::Meter)
        .description("Radius for the station keeping");

        param("IMU Entity Label", m_args.label_imu)
        .defaultValue("IMU")
        .description("Entity label of the IMU for fuel prediction");

        bind<IMC::PlanControl>(this);
        bind<IMC::PlanDB>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::ManeuverControlState>(this);
        bind<IMC::PowerOperation>(this);
        bind<IMC::RegisterManeuver>(this);
        bind<IMC::VehicleCommand>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::EntityInfo>(this);
        bind<IMC::EntityActivationState>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::Memento>(this);
      }

      void
      onEntityResolution(void)
      {
        try
        {
          m_eid_imu = resolveEntity(m_args.label_imu);
        }
        catch (...)
        {
          m_eid_imu = 0;
        }
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.speriod))
          m_args.speriod = 1.0 / m_args.speriod;

        if ((m_plan != NULL) && (paramChanged(m_args.progress)))
          throw RestartNeeded(DTR("restarting to relaunch plan parser"), 0, false);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_plan);
        Memory::clear(m_db);
        Memory::clear(m_ccu);
        Memory::clear(m_vein);
      }

      void
      onResourceAcquisition(void)
      {
        m_plan = new Plan(&m_spec, m_args.progress, m_args.fpredict,
                          this, &m_ctx.config);

        m_db = new DataBaseInteraction(this, m_ctx.dir_db / "Plan.db");
        m_ccu = new CCUInteraction(this);
        m_vein = new VehicleInteraction(this, c_vc_reply_timeout, c_vs_timeout);
      }

      void
      onResourceInitialization(void)
      {
        m_report_timer.setTop(m_args.speriod);
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_state = *msg;
      }

      void
      consume(const IMC::ManeuverControlState* msg)
      {
        m_mcs = *msg;

        if (msg->state == IMC::ManeuverControlState::MCS_DONE)
        {
          m_plan->maneuverDone();

          if (m_plan->isDone())
          {
            std::string comp = DTR("plan completed");
            m_pcs.last_outcome = IMC::PlanControlState::LPO_SUCCESS;
            onSuccess(comp, true);
            setState(ST_STOPPING, ST_READY);
          }
          else
          {
            IMC::PlanManeuver* pman = m_plan->loadNextManeuver();
            startManeuver(pman);
          }
        }

        m_pcs.man_eta = msg->eta;
      }

      void
      consume(const IMC::PowerOperation* po)
      {
        if (po->getDestination() != getSystemId())
          return;

        switch (po->op)
        {
          case IMC::PowerOperation::POP_PWR_DOWN_IP:
            m_db->close();
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_POWER_DOWN);
            break;
          case IMC::PowerOperation::POP_PWR_DOWN_ABORTED:
            m_db->open();
            break;
          default:
            break;
        }
      }

      void
      consume(const IMC::RegisterManeuver* msg)
      {
        m_supported_maneuvers.insert(msg->mid);
      }

      void
      consume(const IMC::EntityInfo* msg)
      {
        m_cinfo.insert(std::pair<std::string, IMC::EntityInfo>(msg->label, *msg));
      }

      void
      consume(const IMC::PlanDB* pdb)
      {
        m_db->onPlanDB(pdb);
      }

      void
      consume(const IMC::EntityActivationState* msg)
      {
        if (msg->getSourceEntity() == m_eid_imu)
        {
          if (msg->state == IMC::EntityActivationState::EAS_ACTIVE)
            m_imu_enabled = true;
          else
            m_imu_enabled = false;
        }

        if (m_plan == NULL)
          return;

        std::string id;

        try
        {
          id = resolveEntity(msg->getSourceEntity());
        }
        catch (...)
        {
          return;
        }

        if (!m_plan->onEntityActivationState(id, msg))
        {
          std::string error = String::str(DTR("failed to activate %s: %s"),
                                          id.c_str(), msg->error.c_str());

          if (m_args.actfail_abort)
          {
            onFailure(error);

            // stop activation if any is running
            if (m_sm == ST_ACTIVATING)
            {
              setState(ST_STOPPING, ST_READY);
            }
          }
          else
          {
            err("%s", error.c_str());
          }
        }
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        if (m_plan == NULL)
          return;

        m_plan->onFuelLevel(msg);
      }

      void
      consume(const IMC::Memento* msg)
      {
        IMC::PlanMemento pmem;
        if (!m_mh.processMemento(msg, pmem))
          return;

        // send PlanMemento to PlanDB
        m_db->sendToDB(IMC::PlanDB::DBDT_MEMENTO, msg->id, msg);
      }

      void
      consume(const IMC::VehicleCommand* vc)
      {
        if (!m_vein->parseReply(vc))
          return;

        if (m_vein->replyError())
        {
          switch (m_sm)
          {
            case ST_START_ACTIV:
            case ST_START_EXEC:
              onFailure(m_vein->info());
              setState(ST_STOPPING, ST_READY);
              break;
            case ST_STOPPING:
              break;
            default:
              debug("not pending reply");
              return;
          }

          err("%s", m_vein->info().c_str());
          return;
        }

        switch (m_sm)
        {
          case ST_STOPPING:
            m_plan->planStopped();
            changeLog("");

            m_pcs.man_id.clear();
            m_pcs.man_type = 0xFFFF;
            m_pcs.plan_progress = -1.0;
            m_pcs.plan_eta = 0;

            setState(m_next_sm);
            break;
          case ST_START_ACTIV:
            setState(ST_ACTIVATING);
            break;
          case ST_START_EXEC:
            setState(ST_EXECUTING);
            onProgress(m_vein->info());

            if (m_plan != NULL)
              war(DTR("executing maneuver: %s"), m_plan->getManeuverId().c_str());
            break;
          default:
            debug("should not be pending reply");
            break;
        }
      }

      void
      consume(const IMC::VehicleState* vs)
      {
        if (m_sm == ST_BOOT)
          return;

        m_vein->onVehicleState(vs);

        switch (vs->op_mode)
        {
          case IMC::VehicleState::VS_SERVICE:
            onVehicleService(vs);
            break;
          case IMC::VehicleState::VS_ERROR:
          case IMC::VehicleState::VS_BOOT:
            onVehicleError(vs);
            break;
        }
      }

      void
      onVehicleService(const IMC::VehicleState* vs)
      {
        switch (m_sm)
        {
          case ST_ACTIVATING:
          case ST_EXECUTING:
            err("%s", vs->last_error.c_str());
            onFailure(vs->last_error);
            setState(ST_STOPPING, ST_READY);
            break;
          default:
            break;
        }
      }

      void
      onVehicleError(const IMC::VehicleState* vs)
      {
        std::string err_ents = DTR("vehicle errors: ") + vs->error_ents;
        std::string edesc = vs->last_error_time < 0 ? err_ents : vs->last_error;

        switch (m_sm)
        {
          case ST_ACTIVATING:
          case ST_EXECUTING:
            onFailure(edesc);
            setState(ST_STOPPING, ST_READY);
            break;
          default:
            break;
        }
      }

      void
      consume(const IMC::PlanControl* pc)
      {
        m_ccu->onPlanControl(pc);

        updateCCURequests();
      }

      //! Update CCU requests
      void
      updateCCURequests(void)
      {
        if (m_vein->pendingReply())
          return;

        const IMC::PlanControl* req = m_ccu->getRequest();

        if (req != NULL)
        {
          if (processRequest(req))
            m_ccu->processedRequest();
        }
      }

      //! Process plancontrol requests
      //! @param[in] pc pointer to plancontrol message
      //! @return false if request wasn't processed
      bool
      processRequest(const IMC::PlanControl* pc)
      {
        inf(DTR("request -- %s (%s)"),
            DTR(c_op_desc[pc->op]),
            pc->plan_id.c_str());

        switch (m_sm)
        {
          case ST_BOOT:
            onFailure(DTR("engine not %s, saved request"),
                      c_pcs_desc[IMC::PlanControlState::PCS_READY]);
            return false;
          case ST_BLOCKED:
            onFailure("%s", c_pcs_desc[m_pcs.state]);
            return true;
          default:
            break;
        }

        switch (pc->op)
        {
          case IMC::PlanControl::PC_START:
            if (!startPlan(pc->plan_id, pc->arg.isNull() ? 0 : pc->arg.get()))
              return false;
            else
              return true;
          case IMC::PlanControl::PC_STOP:
            stopPlan(ST_READY);
            return true;
          case IMC::PlanControl::PC_LOAD:
            loadPlan(pc->plan_id, pc->arg.isNull() ? 0 : pc->arg.get(), false);
            return true;
          case IMC::PlanControl::PC_GET:
            getPlan();
            return true;
          default:
            onFailure(DTR("plan control operation not supported"));
            return true;
        }
      }

      //! Load a plan into the vehicle
      //! @param[in] plan_id name of the plan
      //! @param[in] arg argument which may either be a maneuver or a plan specification
      //! @param[in] plan_startup true if a plan will start right after
      //! @return true if plan is successfully loaded
      bool
      loadPlan(const std::string& plan_id, const IMC::Message* arg,
               bool plan_startup = false)
      {
        if (m_sm != ST_READY)
        {
          onFailure(DTR("cannot load plan now"));
          return false;
        }

        std::string info;
        if (!parseArg(plan_id, arg, info))
          return false;

        IMC::PlanStatistics ps;

        if (!parsePlan(plan_startup, ps))
          return false;

        // reply with statistics
        if (plan_startup)
          onProgress(c_plan_loaded, false, &ps);
        else
          onSuccess(c_plan_loaded, true, &ps);

        return true;
      }

      //! Get current plan
      void
      getPlan(void)
      {
        switch (m_sm)
        {
          case ST_ACTIVATING:
          case ST_EXECUTING:
            onSuccess(&m_spec);
            break;
          default:
            onFailure(c_no_plan_running);
            break;
        }
      }

      //! Stop current plan being executed
      //! @param[in] next the next state for the state machine
      void
      stopPlan(EngineState next)
      {
        switch (m_sm)
        {
          case ST_ACTIVATING:
          case ST_EXECUTING:
            setState(ST_STOPPING, next);
            break;
          default:
            onFailure(c_no_plan_running);
            break;
        }
      }

      //! Parse a given plan
      //! @param[in] plan_startup true if the plan is starting up
      //! @param[out] ps reference to PlanStatistics message
      //! @return true if was able to parse the plan
      inline bool
      parsePlan(bool plan_startup, IMC::PlanStatistics& ps)
      {
        try
        {
          m_plan->parse(&m_supported_maneuvers, m_cinfo,
                        ps, m_imu_enabled, &m_state);
        }
        catch (Plan::ParseError& pe)
        {
          onFailure(pe.what());
          m_plan->clear();
          return false;
        }

        // if a plan is not gonna start after this, clear plan object
        if (!plan_startup)
          m_plan->clear();

        return true;
      }

      //! Handle plan specification argument
      //! @param[in] arg pointer to arg message
      //! @param[out] info string with the error in case of failure
      //! @return false if unable to get the spec
      bool
      handleArgSpecification(const IMC::Message* arg, std::string& info)
      {
        (void)info;

        const IMC::PlanSpecification* given_plan;
        given_plan = static_cast<const IMC::PlanSpecification*>(arg);

        m_spec = *given_plan;
        m_spec.setSourceEntity(getEntityId());

        m_db->sendToDB(IMC::PlanDB::DBDT_PLAN, m_spec.plan_id, &m_spec);

        return true;
      }

      //! Handle plan memento argument
      //! @param[in] arg pointer to arg message
      //! @param[out] info string with the error in case of failure
      //! @return false if unable to get the memento
      bool
      handleArgMemento(const IMC::Message* arg, std::string& info)
      {
        const IMC::PlanMemento* pmem = static_cast<const IMC::PlanMemento*>(arg);

        // clear spec
        m_spec.clear();

        if (!m_db->searchInDB(pmem->plan_id, m_spec, info))
        {
          onFailure(info);
          return false;
        }

        m_spec.setSourceEntity(getEntityId());
        m_spec.start_man_id = pmem->maneuver_id;

        // Insert memento information
        IMC::MessageList<IMC::PlanManeuver>::const_iterator itr;
        itr = m_spec.maneuvers.begin();
        for (; itr != m_spec.maneuvers.end(); ++itr)
        {
          if (*itr == NULL)
          {
            continue;
          }

          if ((*itr)->maneuver_id == pmem->maneuver_id)
          {
            if ((*itr)->data.isNull())
            {
              info = (*itr)->maneuver_id + DTR("actual maneuver not specified");
              return false;
            }

            IMC::Maneuver* ptr = static_cast<IMC::Maneuver*>((*itr)->data.get());
            ptr->memento = pmem->memento;
            war(DTR("resuming with memento: %s"), pmem->id.c_str());

            m_db->sendToDB(IMC::PlanDB::DBDT_MEMENTO, pmem->id, pmem);
            return true;
          }
        }

        info = DTR("could not find resume maneuver: ") + pmem->maneuver_id;
        return false;
      }

      //! Handle quick plan
      //! @param[in] id name of the plan
      //! @param[in] arg pointer to message
      //! @param[out] info string with the error message, if any
      //! @return error occurred while handling quick plan
      bool
      handleQuickPlan(const std::string& id, const IMC::Message* arg, std::string& info)
      {
        // Quick plan
        IMC::PlanManeuver spec_man;
        const IMC::Maneuver* man = static_cast<const IMC::Maneuver*>(arg);

        if (!man)
        {
          info = DTR("undefined maneuver or plan");
          return false;
        }

        spec_man.maneuver_id = arg->getName();
        spec_man.data.set(*man);
        m_spec.clear();
        m_spec.maneuvers.setParent(&m_spec);
        m_spec.plan_id = id;
        m_spec.start_man_id = arg->getName();
        m_spec.maneuvers.push_back(spec_man);

        m_db->sendToDB(IMC::PlanDB::DBDT_PLAN, m_spec.plan_id, &m_spec);

        return true;
      }

      //! Get the PlanSpecification from IMC::Message
      //! @param[in] id ID of the plan or memento
      //! @param[in] arg pointer to arg message
      //! @param[out] info string with the error message, if any
      //! @return false if unable to get the spec
      bool
      parseArg(const std::string& id, const IMC::Message* arg, std::string& info)
      {
        if (arg)
        {
          if (arg->getId() == DUNE_IMC_PLANSPECIFICATION)
            return handleArgSpecification(arg, info);
          else if (arg->getId() == DUNE_IMC_PLANMEMENTO)
            return handleArgMemento(arg, info);
          else // has to be maneuver
            return handleQuickPlan(id, arg, info);
        }
        else
        {
          // Search DB
          m_spec.clear();

          if (!m_db->searchInDB(id, m_spec, info))
          {
            // try to look for a memento with the same name in db
            PlanMemento pmem;
            if (m_db->searchInDB(id, pmem, info))
              return parseArg(id, &pmem, info);

            onFailure(info);
            return false;
          }
        }

        return true;
      }

      //! Start a given plan
      //! @param[in] plan_id name of the plan to execute
      //! @param[in] spec plan specification message if any
      //! @return false if must stop maneuvering first
      bool
      startPlan(const std::string& plan_id, const IMC::Message* spec)
      {
        if (m_sm != ST_READY)
        {
          setState(ST_STOPPING, ST_READY);
          return false;
        }

        if (!loadPlan(plan_id, spec, true))
          return true;

        changeLog(plan_id);

        // Flag the plan as starting
        m_plan->planStarted();

        dispatch(m_spec);

        // Increment plan reference
        ++m_plan_ref;
        // Add to memento handler
        m_mh.add(m_plan_ref, m_spec);

        float activ_time = (uint16_t)m_plan->getEstimatedActivationTime();
        if (activ_time)
        {
          startActivation(activ_time);
        }
        else
        {
          IMC::PlanManeuver* pman = m_plan->loadStartManeuver();
          startManeuver(pman);
        }

        return true;
      }

      //! Send a request to start activation procedures
      //! @param[in] activ_time time needed for activation
      void
      startActivation(float activ_time)
      {
        IMC::Message* m = 0;

        IMC::StationKeeping sk;
        IMC::IdleManeuver idle;

        float maneuver_time = activ_time * c_activ_factor;
        maneuver_time = std::max(maneuver_time, c_activ_min);

        if (m_args.sk_activ)
        {
          Coordinates::toWGS84(m_state, sk.lat, sk.lon);
          sk.z_units = IMC::Z_DEPTH;
          sk.z = 0;
          sk.radius = m_args.sk_radius;
          sk.speed_units = IMC::SUNITS_RPM;
          sk.speed = m_args.sk_rpm;
          sk.duration = maneuver_time;
          m = static_cast<IMC::Message*>(&sk);
        }
        else
        {
          idle.duration = maneuver_time;
          m = static_cast<IMC::Message*>(&idle);
        }

        m_plan->activationStarted();

        m_vein->request(IMC::VehicleCommand::VC_EXEC_MANEUVER, m);
        setState(ST_START_ACTIV);
        return;
      }

      //! Start a maneuver by name
      //! @param[in] pman pointer to plan maneuver message
      void
      startManeuver(IMC::PlanManeuver* pman)
      {
        if (pman == NULL)
        {
          onFailure(m_plan->getCurrentId() + DTR(": invalid maneuver ID"));
          return;
        }

        IMC::Maneuver* man = pman->data.get();

        if (man)
        {
          man = static_cast<IMC::Maneuver*>(pman->data.get());
          man->plan_ref = m_plan_ref;

          m_pcs.man_id = man->id;
          m_pcs.man_type = man->getId();
        }

        m_vein->request(IMC::VehicleCommand::VC_EXEC_MANEUVER, man);
        m_plan->maneuverStarted(pman->maneuver_id);

        setState(ST_START_EXEC);
      }

      //! Generic answer function
      //! @param[in] type type of reply (same field as plan control message)
      //! @param[in] msg text message to send
      //! @param[in] print true if the message should be printed to output
      //! @param[in] arg pointer to argument IMC message
      inline void
      genericAnswer(IMC::PlanControl::TypeEnum type, const std::string& msg,
                    bool print = true, const IMC::Message* arg = NULL)
      {
        m_ccu->answer(type, msg, print, arg);
      }

      //! Answer to the reply with a failure message
      //! @param[in] errmsg text error message to send
      //! @param[in] print true if the message should be printed to output
      void
      onFailure(const std::string& errmsg, bool print = true)
      {
        m_pcs.last_outcome = IMC::PlanControlState::LPO_FAILURE;

        genericAnswer(IMC::PlanControl::PC_FAILURE, errmsg, print);
      }

      //! Answer to the reply with a success message
      //! @param[in] msg text message to send
      //! @param[in] print true if the message should be printed to output
      //! @param[in] arg pointer to argument IMC message
      inline void
      onSuccess(const std::string& msg = DTR("OK"), bool print = true,
                const IMC::Message* arg = NULL)
      {
        genericAnswer(IMC::PlanControl::PC_SUCCESS, msg, print, arg);
      }

      //! Answer to the reply with a success message
      //! @param[in] arg pointer to message to set in arg
      inline void
      onSuccess(const IMC::Message* arg)
      {
        genericAnswer(IMC::PlanControl::PC_SUCCESS, DTR("OK"), true, arg);
      }

      //! Answer to the reply with an in progress message
      //! @param[in] arg pointer to message to set in arg
      //! @param[in] msg text message to send
      //! @param[in] print true if the message should be printed to output
      inline void
      onProgress(const std::string& msg = DTR("OK"), bool print = false,
                 const IMC::Message* arg = NULL)
      {
        m_ccu->answer(IMC::PlanControl::PC_IN_PROGRESS, msg, print, arg);
      }

      //! Set task's initial state
      void
      setInitialState(void)
      {
        m_pcs.state = IMC::PlanControlState::PCS_BLOCKED;
        m_pcs.plan_id.clear();
        m_pcs.man_id.clear();
        m_pcs.man_type = 0xFFFF;
        m_pcs.plan_progress = -1.0;
        m_pcs.plan_eta = 0;
        m_pcs.last_outcome = IMC::PlanControlState::LPO_NONE;
        dispatch(m_pcs);
      }

      //! Report progress
      void
      reportProgress(void)
      {
        // Must be executing or activating to be able to compute progress
        if (m_plan == NULL)
          return;

        switch (m_sm)
        {
          case ST_ACTIVATING:
          case ST_EXECUTING:
            m_pcs.plan_progress = m_plan->updateProgress(&m_mcs);
            m_pcs.plan_eta = (int32_t)m_plan->getETA();
            break;
          default:
            break;
        }
      }

      void
      onMain(void)
      {
        setInitialState();

        while (!stopping())
        {
          if (m_report_timer.overflow())
          {
            if (m_args.progress)
              reportProgress();

            dispatch(m_pcs);

            m_report_timer.reset();
          }

          // got requests to process
          updateCCURequests();

          runStateMachine();

          waitForMessages(1.0);
          continue;
        }
      }

      void
      runStateMachine(void)
      {
        switch (m_sm)
        {
          case ST_BLOCKED:
            if (m_db->isOpen() && !m_vein->stateTimeout())
            {
              setState(ST_READY);
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }
            break;
          case ST_READY:
            if (m_vein->stateTimeout())
            {
              setState(ST_BLOCKED);
              setEntityState(IMC::EntityState::ESTA_ERROR, DTR("vehicle state timeout"));
            }

            if (m_db->inError())
            {
              setState(ST_BLOCKED);
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_DB_ERROR);
            }
            break;
          case ST_BOOT:
            if (m_db->isOpen() && !m_vein->stateTimeout())
            {
              setState(ST_READY);
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }
            break;
          case ST_ACTIVATING:
            // update activation status
            if (m_plan == NULL)
              return;

            m_plan->updateActivation();

            if (m_plan->isActivationDone())
            {
              IMC::PlanManeuver* pman = m_plan->loadStartManeuver();
              startManeuver(pman);
            }
            else if (m_plan->hasActivationFailed())
            {
              onFailure(m_plan->getActivationInfo());
              setState(ST_STOPPING, ST_READY);
              err("%s", m_plan->getActivationInfo().c_str());
            }
            break;
          case ST_START_ACTIV:
          case ST_START_EXEC:
            if (m_vein->replyTimeout())
            {
              // handle reply timeout
              m_vein->clearReply();

              err(DTR("vehicle reply timeout"));

              // Popping all requests
              m_ccu->clear();

              war(DTR("cleared all requests"));
            }
            break;
          default:
            break;
        }
      }

      void
      setState(EngineState target_sm, EngineState next_sm = ST_NONE)
      {
        if (target_sm == m_sm)
        {
          m_next_sm = next_sm;
          return;
        }

        switch (target_sm)
        {
          case ST_STOPPING:
            // stop maneuvering
            m_vein->request(IMC::VehicleCommand::VC_STOP_MANEUVER);
            break;
          case ST_READY:
            break;
          case ST_ACTIVATING:
          case ST_EXECUTING:
            m_pcs.plan_id = m_spec.plan_id;
            break;
          default:
            break;
        }

        war("switching from %s to %s, next is %s",
            c_state_desc[m_sm], c_state_desc[target_sm], c_state_desc[next_sm]);

        m_sm = target_sm;
        m_next_sm = next_sm;

        updatePCS();
      }

      void
      updatePCS(void)
      {
        unsigned temp = m_pcs.state;

        switch (m_sm)
        {
          case ST_NONE:
          case ST_BOOT:
          case ST_BLOCKED:
            m_pcs.state = IMC::PlanControlState::PCS_BLOCKED;
            break;
          case ST_READY:
            m_pcs.state = IMC::PlanControlState::PCS_READY;
            break;
          case ST_ACTIVATING:
          case ST_START_ACTIV:
            m_pcs.state = IMC::PlanControlState::PCS_INITIALIZING;
            break;
          case ST_START_EXEC:
          case ST_EXECUTING:
            m_pcs.state = IMC::PlanControlState::PCS_EXECUTING;
            break;
          case ST_STOPPING:
            // keep previous state
            break;
        }

        if (temp != m_pcs.state)
        {
          war(DTR("engine is %s"), c_pcs_desc[m_pcs.state]);
          dispatch(m_pcs);
        }
      }

      void
      changeLog(const std::string& name)
      {
        m_lc.op = IMC::LoggingControl::COP_REQUEST_START;
        m_lc.name = name;
        dispatch(m_lc);
      }
    };
  }
}

DUNE_TASK
