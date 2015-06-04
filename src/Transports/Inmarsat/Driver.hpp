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
// Author: Mauro Brandão                                                    *
//***************************************************************************

#ifndef TRANSPORTS_INMARSAT_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_INMARSAT_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <sstream>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  //! Device driver for the Inmarsat modem.
  namespace Inmarsat
  {
    using DUNE_NAMESPACES;

    //! Default AT command timeout.
    static const double c_timeout = 5.0;

    class Driver: public HayesModem
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] handle I/O handle.
      Driver(Tasks::Task* task, SerialPort* uart):
        HayesModem(task, uart)
      { }

      //! Destructor.
      ~Driver(void)
      { }

      //! Reset device.
      void
      sendReset(void)
      {
        //sendAT("Z0");
      }

      void
      getRSSI(void)
      {

      }
      
      private:
      
      void
      sendInitialization(void)
      {
        // Get hardware
        sendAT("");
        expectOK();
      }

      void
      expectOK(void)
      {
        std::string rv = readLine();
        if (rv != "OK")
          throw UnexpectedReply("OK", rv);
        else
          std::cout << rv << std::endl;
      }
    };
  }
}

#endif
