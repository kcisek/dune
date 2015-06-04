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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"

namespace Transports
{
  //! Task for the Inmarsat modem.
  namespace Inmarsat
  {
  using DUNE_NAMESPACES;
  
  //! %Task arguments.
  struct Arguments
  {
    std::string uart_dev;
    unsigned uart_baud;
    double data_tout;
    int data_rate;
  };

  struct Task: public DUNE::Tasks::Task
  {
    //! Serial port.
    SerialPort* m_uart;
    //! Driver.
    Driver* m_driver;
    //! Read timestamp.
    double m_tstamp;
    //! Task arguments.
    Arguments m_args;
    
    //! Constructor.
    //! @param[in] name task name.
    //! @param[in] ctx context.
    Task(const std::string& name, Tasks::Context& ctx):
      DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_driver(NULL),
        m_tstamp(0)
    {
      // Retrieve config values.
      param("Serial Port - Device", m_args.uart_dev)
      .defaultValue("")
      .description("Serial port device used to communicate with the modem");

      param("Serial Port - Baud Rate", m_args.uart_baud)
      .defaultValue("9600")
      .description("Serial port baud rate");
    }
    
    ~Task(void)
    {
      onResourceRelease();
    }

    //! Update internal state with new parameter values.
    void
    onUpdateParameters(void)
    {
      inf("chamado o onUpdateParameters");
    }

    //! Reserve entity identifiers.
    void
    onEntityReservation(void)
    {
      inf("chamado o OnEntityReservation");
    }

    //! Resolve entity names.
    void
    onEntityResolution(void)
    {
      inf("chamado o onEntityResolution");
    }

    //! Acquire resources.
    void
    onResourceAcquisition(void)
    {
      inf("chamado o onResourceAcquisition");
      try
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_driver = new Driver(this, m_uart);
        inf("m_driver is initialize");
        m_driver->initialize();
      }
      catch (std::runtime_error& e)
      {
         std::cerr << e.what() << std::endl;
      }
    }

    //! Initialize resources.
    void
    onResourceInitialization(void)
    {
      inf("chamado o onResourceInitialization");
    }

    //! Release resources.
    void
    onResourceRelease(void)
    {
      inf("chamado o onResourceRelease");
      if (m_driver)
      {
        delete m_driver;
        m_driver = NULL;
      }
      Memory::clear(m_uart);
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
