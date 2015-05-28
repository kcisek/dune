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

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  //! Device driver for the Inmarsat modem sensor.
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

    //! Display fields.
    static const int c_display_fields = 0;
    //! Minimum number of calibration output
    //! characters to validate process.
    static const int c_min_chars = 10;

    struct Task: public DUNE::Tasks::Task
    {
      //! Internal read buffer.
      static const unsigned c_bfr_size = 128;
      //! Serial port.
      SerialPort* m_uart;
      //! Temperature.
      IMC::Temperature m_temp;
      //! Internal read buffer.
      char m_bfr[c_bfr_size];
      //! Read timestamp.
      double m_tstamp;
      //! Task arguments.
      Arguments m_args;
      //! Watchdog.
      Counter<double> m_wdog;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_tstamp(0)
      {
        // Retrieve config values.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");

        param("Data Timeout", m_args.data_tout)
        .defaultValue("0.5")
        .minimumValue("0.2")
        .units(Units::Second)
        .description("Number of seconds without data before reporting an error");

        param("Data Rate", m_args.data_rate)
        .defaultValue("40")
        .minimumValue("-50")
        .maximumValue("40")
        .description("Sensor data rate");

      }

      //! Release allocated resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(true);
        m_uart->flush();
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {

        /*while (!stopping())
        {
          if (setParameter("R", "Output rate", m_args.data_rate))
            break;
        }*/

        while (!stopping())
        {
          if (setParameter("AT", "Display", c_display_fields))
            break;
        }
        
        //SkyWave-Proprietary Extended Commands
        while (!stopping())
        {
          if (setParameter("CRC", "Error Detection", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("EVMON", "Event Log Monitor", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("EVNT", "Event Log Get", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("EVSTR", "Event Stream", 0))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("EXIT", "Exit Command", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("GPS", "Get GPS Information", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("MGFG", "To-Mobile Message Get", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("MGFM", "To-Mobile Message Rx Retrieved", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("MGFN", "To-Mobile Message New", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("MGFS", "To-Mobile Message State", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("MGRC", "From-Mobile Message Cancel", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("MGRS", "From-Mobile Message State", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("MGRT", "From-Mobile Message Send", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("OFF", "Prepare for shutdown", 0))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("SREG", "View all S Registers", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("SYSL", "View Syslog", 0))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("TRK", "GPS Tracking", c_display_fields))
            break;
        }
        
        while (!stopping())
        {
          if (setParameter("UTC", "Display UTC Date and Time", 0))
            break;
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        m_wdog.reset();
      }

      //! Update %Task parameters.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.data_tout))
          m_wdog.setTop(m_args.data_tout);
      }

      //! Read a string from the serial port,
      //! @return amount of bytes actually read.
      int
      readString(void)
      {
        consumeMessages();

        if (!Poll::poll(*m_uart, 1.0))
          return 0;

        return m_uart->readString(m_bfr, c_bfr_size);
      }

      //! Define a given parameter in the device.
      //! @param[in] command input command.
      //! @param[in] label label of the parameter.
      //! @param[in] value value of the parameter.
      //! @return true if successful, false otherwise.
      bool
      setParameter(const char* command, const char* label, int value)
      {
        Counter<double> timer(2);
        int min_value = 0;
        int max_value = 0;
        int cur_value = 0;

        m_uart->writeString("\x1b");
        m_uart->writeString(command);

        std::string format = String::str("%s (%%d..%%d)=%%d\r\n", label);

        while (!stopping() && !timer.overflow())
        {
          if (readString() <= 0)
            continue;

          if (std::sscanf(m_bfr, format.c_str(), &min_value, &max_value, &cur_value) == 3)
          {
            if (cur_value != value)
            {
              std::string value_str = String::str("%d\r\n", value);
              m_uart->writeString(value_str.c_str());
            }
            else
            {
              m_uart->writeString("\x1b");
            }

            debug("%s '%s' %s %d", "parameter", command, "configured to", value);
            return true;
          }
        }

        return false;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (m_wdog.overflow())
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);

          consumeMessages();


          int rv = readString();
          if (rv <= 0)
            continue;

          unsigned rcsum = 0;
          unsigned ccsum = XORChecksum::compute((uint8_t*)m_bfr + 1, rv - 1 - 5);
          
          std::sscanf(m_bfr, "$AT%lf*%02X\r\n",
                       &m_temp.value, &rcsum);
                                
          if (rcsum != ccsum)
            continue;

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_wdog.reset();
        }
      }
    };
  }
}

DUNE_TASK
