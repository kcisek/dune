//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  //! This task dispatches system state information to a UDP address/port.
  //!
  //! @author José Braga
  namespace StateUDP
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      // IPv4 Address.
      Address addr;
      // UDP Port.
      uint16_t port;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      // Task arguments.
      Arguments m_args;
      // UDP Socket.
      UDPSocket* m_sock;
      // State
      IMC::EstimatedState m_state;
      // Uncertainty
      IMC::NavigationUncertainty m_unc;
      // Sound speed
      float m_sound;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_sock(NULL)
      {
        param("Destination UDP Address", m_args.addr)
        .defaultValue("127.0.0.1")
        .description("IP address of remote system");

        param("Destination UDP Port", m_args.port)
        .defaultValue("6022")
        .minimumValue("0")
        .maximumValue("65535")
        .description("UDP port of remote system");

        // Default sound speed value.
        m_sound = 1500.0;

        bind<IMC::EstimatedState>(this);
        bind<IMC::NavigationUncertainty>(this);
        bind<IMC::SoundSpeed>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (isActive())
        {
          if (paramChanged(m_args.addr))
            throw RestartNeeded(DTR("restarting to change IPv4 address"), 1);

          if (paramChanged(m_args.port))
            throw RestartNeeded(DTR("restarting to change UDP port"), 1);
        }
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_sock);
      }

      void
      onResourceAcquisition(void)
      {
        m_sock = new UDPSocket;
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        requestDeactivation();
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (!isActive())
        {
          requestActivation();
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        m_state = *msg;
      }

      void
      consume(const IMC::NavigationUncertainty* msg)
      {
        m_unc = *msg;
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if (msg->value > 0)
          m_sound = msg->value;
      }

      void
      task(void)
      {
        // Wait for estimated state.
        if (!isActive())
          return;

        double lat, lon;
        Coordinates::toWGS84(m_state, lat, lon);

        // Format:
        // time=value (utc since epoch),latitude=value (decimal degree),longitude=value (decimal degree),
        // depth=value (m),heading=value (degree from north),speed=value (m/s),
        // latitude-std=value (decimal degree),longitude-std=value(decimal degree)"
        std::string state = String::str("time=%f,latitude=%f,longitude=%f,depth=%0.2f,altitude=%0.2f,heading=%0.2f,speed=%0.1f,x-std=%0.2f,y-std=%0.2f,sound=%0.1f",
                                        m_state.getTimeStamp(), Angles::degrees(lat), Angles::degrees(lon),
                                        m_state.depth, m_state.alt, Angles::degrees(m_state.psi), m_state.u, m_unc.x, m_unc.y, m_sound);

        // Send to remote system.
        try
        {
          std::vector<uint8_t> bfr(state.begin(), state.end());
          m_sock->write((const uint8_t*)&bfr[0], bfr.size(), m_args.addr, m_args.port);

          // Log string.
          IMC::DevDataText log;
          log.value = state;
          dispatch(log);
          spew("sending \"%s\"", state.c_str());
        }
        catch (...)
        { }
      }
    };
  }
}

DUNE_TASK
