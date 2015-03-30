//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// ProViewer SDK headers.
#include <bvt_sdk.h>

namespace Sensors
{
  namespace ProViewer
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! IPv4 address.
      Address addr;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Sonar handle.
      BVTSonar m_sonar;
      //! Head handle.
      BVTHead m_head;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_sonar(NULL),
        m_head(NULL)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("IPv4 Address", m_args.addr)
        .defaultValue("192.168.0.5")
        .description("IP address of the sonar");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {

      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {

      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {

      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {

      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      bool
      connect(void)
      {
        m_sonar = BVTSonar_Create();
        if (BVTSonar_Open(m_sonar, "NET", m_args.addr.c_str()) != BVT_SUCCESS)
          goto cleanup_sonar;

        if (BVTSonar_GetHead(m_sonar, 0, &m_head) != BVT_SUCCESS)
          goto cleanup_sonar;

      cleanup_head:
        BVTHead_Destroy(m_head);
        m_head = NULL;

      cleanup_sonar:
        BVTSonar_Destroy(m_sonar);
        m_sonar = NULL;
      }

      void
      disconnect(void)
      {
        BVTHead_Destroy(m_head);
        m_head = NULL;

        BVTSonar_Destroy(m_sonar);
        m_sonar = NULL;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
