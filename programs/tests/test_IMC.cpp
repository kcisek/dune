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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 11ec9a970e6a79185be50a9a1030e939                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.583362013413);
    msg.setSource(13698U);
    msg.setSourceEntity(81U);
    msg.setDestination(38289U);
    msg.setDestinationEntity(106U);
    msg.state = 67U;
    msg.flags = 251U;
    msg.description.assign("EAHHYWIDOBDXZZTLQDJUKLCSQYKGUEYPAUQFPLFPHVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.294200831556);
    msg.setSource(12094U);
    msg.setSourceEntity(27U);
    msg.setDestination(17245U);
    msg.setDestinationEntity(230U);
    msg.state = 174U;
    msg.flags = 38U;
    msg.description.assign("GHYDHAVPXKIHXSBTYYRWVPWTUVJETYMIRSNSXFYSAWRFFKKGSJCOTMBQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.0452590208686);
    msg.setSource(51284U);
    msg.setSourceEntity(4U);
    msg.setDestination(39942U);
    msg.setDestinationEntity(63U);
    msg.state = 182U;
    msg.flags = 225U;
    msg.description.assign("EFEJCKNUYSQHXTCADKYHACIXGRVERROJEHOZWUXJZYPMQXNLCUUBIJNHGLSFUJQVCQZASAMEOECWOEYODWKMZTCIANYCPBNQLRFALDURSXTRMUZQBKFITSIGKQWHWOLPIMRSHNFWBBBGFIBCOMSTUHGODFWBGDTVDHPPQTPJZYAVPVRULBFY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.188017464767);
    msg.setSource(64037U);
    msg.setSourceEntity(200U);
    msg.setDestination(7077U);
    msg.setDestinationEntity(110U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.445044145127);
    msg.setSource(64074U);
    msg.setSourceEntity(117U);
    msg.setDestination(61321U);
    msg.setDestinationEntity(158U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.384220037459);
    msg.setSource(32654U);
    msg.setSourceEntity(69U);
    msg.setDestination(13290U);
    msg.setDestinationEntity(195U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.209365488278);
    msg.setSource(56860U);
    msg.setSourceEntity(117U);
    msg.setDestination(43420U);
    msg.setDestinationEntity(60U);
    msg.id = 111U;
    msg.label.assign("JFDZQTLGCTOUBEDUIAHYU");
    msg.component.assign("OAXJBKWETPXDMRMSNIXAHZJHVJKKOZAFLOMNIUQFQKCPWRYQXYSVJNEILDBPWZESWPSWAMDRRHILBGVLAFKHHOCHEIPWBKUSEOGRDKOTOJVELGYTCGJGAMLBVMLWGJBMNSJDSCNUFQNUYGFTMVYMQQBTFIVAIXSEGOPXHKEURCRDGYNHXDIZQPXBXOWAYKD");
    msg.act_time = 58892U;
    msg.deact_time = 2719U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.999137811879);
    msg.setSource(44892U);
    msg.setSourceEntity(99U);
    msg.setDestination(16217U);
    msg.setDestinationEntity(39U);
    msg.id = 187U;
    msg.label.assign("VWYGQLMRDIEESWQTNOIABJHTFHEDDAUUZSENZVYVSCQRFFSZARGPILYRTMVHLBPDRODMXBDIUWJLMKGKFQONXPMTSECMYFSRBZZWWLXGHIOVGHEXACZBEPMMBLRDVXXCKWJGIQNKCZWPQPYZJANFXJYGYPFBISDKODMPSXOVTHOWJEKGZCVT");
    msg.component.assign("IRRNWHDWNGQKSRRUAZCHCAXQJLAHOIESZFRXCDBEPMKMHVVEDJNOTWTQXGTNZCFLAUTIFWZNELPVIFKCMYYCRZGVFEXVBTAYBYPHYOTALKHEVNODIGGGPUSQXUKNULZSPMSFTIRWVUBNYQLZKBQKGCCJPPFKBTIPEOQXPJ");
    msg.act_time = 64955U;
    msg.deact_time = 22031U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.920744363436);
    msg.setSource(62956U);
    msg.setSourceEntity(18U);
    msg.setDestination(9152U);
    msg.setDestinationEntity(105U);
    msg.id = 235U;
    msg.label.assign("DQKQZKTNYLLHNPUIUOAMVSSMIXTDRYLIAOOGBZQRBHSAOGFBWDXFMLLDEYVAYHBIXVYSRYUHJAFUOMZENFHPNLCELCTXQTHSQUGPDAPCNRTCAOKCKDLWSJDPY");
    msg.component.assign("DBVXFTAMGPNJFU");
    msg.act_time = 8149U;
    msg.deact_time = 63201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.244814483374);
    msg.setSource(2156U);
    msg.setSourceEntity(237U);
    msg.setDestination(2645U);
    msg.setDestinationEntity(165U);
    msg.id = 3U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.110257298654);
    msg.setSource(11979U);
    msg.setSourceEntity(17U);
    msg.setDestination(47375U);
    msg.setDestinationEntity(110U);
    msg.id = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.276497262323);
    msg.setSource(23399U);
    msg.setSourceEntity(124U);
    msg.setDestination(25224U);
    msg.setDestinationEntity(227U);
    msg.id = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.786795339039);
    msg.setSource(38075U);
    msg.setSourceEntity(194U);
    msg.setDestination(51432U);
    msg.setDestinationEntity(184U);
    msg.op = 77U;
    msg.list.assign("TSFIMNPYKOXRJFBBQDMWLMOAVECPZUCBSVHBRMUDDXHGCEVPTGTFDLRMIDAGVNIWARCYPIZIEZRQOXSQZMIQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.192759897561);
    msg.setSource(5978U);
    msg.setSourceEntity(233U);
    msg.setDestination(3772U);
    msg.setDestinationEntity(51U);
    msg.op = 135U;
    msg.list.assign("WSBSLNREBAGNJEJNIQBDARZLOTYGDHG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.544453423241);
    msg.setSource(43130U);
    msg.setSourceEntity(172U);
    msg.setDestination(43743U);
    msg.setDestinationEntity(160U);
    msg.op = 39U;
    msg.list.assign("FSQIKRNISOHEJCTXYKRKKHZIFPHAORWNNKUCMDCPDVWFGVGIVVSJMABVGSMMNGWJMQUYCVFYEWUULCDLCHTRZHMTUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.2181227899);
    msg.setSource(20371U);
    msg.setSourceEntity(131U);
    msg.setDestination(26364U);
    msg.setDestinationEntity(104U);
    msg.value = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.852927919291);
    msg.setSource(62045U);
    msg.setSourceEntity(109U);
    msg.setDestination(39121U);
    msg.setDestinationEntity(209U);
    msg.value = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.61783200923);
    msg.setSource(35488U);
    msg.setSourceEntity(15U);
    msg.setDestination(31750U);
    msg.setDestinationEntity(86U);
    msg.value = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.655773604407);
    msg.setSource(58776U);
    msg.setSourceEntity(178U);
    msg.setDestination(58558U);
    msg.setDestinationEntity(196U);
    msg.consumer.assign("VWBOSNNGDFJEWNGQAIAHJWBXUKSDYPCDSQGVPDHOMMZMQIKELJRYNHPAOVGBYLSDINEFNMBSHGRELSHZTPDGNTTRIJCRTQXDKJVIPFVZYWVNEJULEQBUSNPVQIICGXLDQCBPZKTXMSGGKDTOUZPWKRGYTJUXLFEIICHZQFJPYCANXRFRHZVUOITROBJMCLCUTQAYCQMHWXLKAZOFEZLHPOAFBSKLVYKEXZERFMTUSDFOO");
    msg.message_id = 17096U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.656746731289);
    msg.setSource(49346U);
    msg.setSourceEntity(60U);
    msg.setDestination(55687U);
    msg.setDestinationEntity(140U);
    msg.consumer.assign("XUFNKPERWLHRUXONVSSEUJGAENIKPXFTGJRYSVRWPFYCOFLZMVOQLCDSQTQF");
    msg.message_id = 54684U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.035725058957);
    msg.setSource(49114U);
    msg.setSourceEntity(139U);
    msg.setDestination(62393U);
    msg.setDestinationEntity(34U);
    msg.consumer.assign("WCRWQBILUIXLRTJUYYCNSBOKTJAAKMUSNOTYUQRBIIUFHFXDWYEDVZXHQOKWDGQANKOITJMLPRMKFRVSSGXEZRSNGLPGZLYMTZPGEWYVGIQJBHOEXTOTCANDJVHITIBZNXQYCKVOREGRCPXFLHAAABEEVZPCFFFMBSVDHUXQMASQMMFVMZCNGLWWHJZROJXSUNBKWPKPWJPFNAZCNCJTVZQOJBUWUIFVGYHBORL");
    msg.message_id = 38704U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.568595363565);
    msg.setSource(861U);
    msg.setSourceEntity(164U);
    msg.setDestination(50974U);
    msg.setDestinationEntity(36U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.277442639679);
    msg.setSource(22475U);
    msg.setSourceEntity(203U);
    msg.setDestination(20028U);
    msg.setDestinationEntity(66U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.434217602683);
    msg.setSource(32355U);
    msg.setSourceEntity(24U);
    msg.setDestination(57896U);
    msg.setDestinationEntity(159U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.509767626148);
    msg.setSource(64958U);
    msg.setSourceEntity(124U);
    msg.setDestination(56505U);
    msg.setDestinationEntity(186U);
    msg.op = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.336522280191);
    msg.setSource(30127U);
    msg.setSourceEntity(57U);
    msg.setDestination(21284U);
    msg.setDestinationEntity(195U);
    msg.op = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.381820058084);
    msg.setSource(53481U);
    msg.setSourceEntity(87U);
    msg.setDestination(51971U);
    msg.setDestinationEntity(203U);
    msg.op = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.0720566064571);
    msg.setSource(55894U);
    msg.setSourceEntity(213U);
    msg.setDestination(7042U);
    msg.setDestinationEntity(90U);
    msg.total_steps = 99U;
    msg.step_number = 22U;
    msg.step.assign("MZQXNOESWOHXCAFHGIVORUVTAQAPHURWTZYHWJHVLITDXEGSGIXMGRKTUHRANXYAOAYQVBEFKRKEYPTSICSPRUWNXEEAQMNITAZLZPGWFQUPDOYVCXQHNJYQBRKKUHBDZFTVFTCBIULLADSTOWHJBZRRQBUDMJEAUJSOOYIBXLMODGFMJZKDPMGINRNDLZZWXXSFFSTFMSZLPBIVKNDJPECJDCLP");
    msg.flags = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.355302187914);
    msg.setSource(54209U);
    msg.setSourceEntity(156U);
    msg.setDestination(10351U);
    msg.setDestinationEntity(174U);
    msg.total_steps = 137U;
    msg.step_number = 254U;
    msg.step.assign("NQRZDBREJTAMEPSUNVUZQODDLJZLGLEDZFPQYWRJEWIGOPHLESTONSQLKWDHCRKPTRMQVBAIIHLWAGQYJPPMGWUOCYNXKVGRMISQQCDCYIMABFHCGOXBTMXEHAWCFUQFKULMZBKLFHGHSRACBKVJFXEXCJCESHMYU");
    msg.flags = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.29652905988);
    msg.setSource(57262U);
    msg.setSourceEntity(192U);
    msg.setDestination(59019U);
    msg.setDestinationEntity(86U);
    msg.total_steps = 147U;
    msg.step_number = 216U;
    msg.step.assign("IIWTGYBQXJQERKPZRNBWJSEXCHGJZQHYORRVJSLVY");
    msg.flags = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.14265824352);
    msg.setSource(47727U);
    msg.setSourceEntity(19U);
    msg.setDestination(13433U);
    msg.setDestinationEntity(177U);
    msg.state = 2U;
    msg.error.assign("NBCJWKSCLMPWPUXGLRWDAQASNHIBDYMLPQTLJPCSFTSLCZHWQAFBVMFDBHJIEGIVGHHQKBIKIELZKLNMEJQTIBCOMFEOQOYFRKFANXTZCKGPMUULOVORPVQTSCJHIROSKTZAODGHTFAVDNTNXYULNUGWGEARXBPEGTFKJWJXNWLYRHIBOXRJZBMPDNATXKSEGEVXXSDJZCXZYDWUQNEIZJFV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.471306358794);
    msg.setSource(43364U);
    msg.setSourceEntity(31U);
    msg.setDestination(24552U);
    msg.setDestinationEntity(12U);
    msg.state = 128U;
    msg.error.assign("IPNGUBHVBCBFQACZYQRLJYVJYSBIRELVWTWHECIDAUHJVYTRORSJGKSQDGDRXWUKOSNSYFJXYQWVGCTYCSMHDTWIBOGEEMUSUNCETGCPMQCFEPLFKPNVWHYGPVWNIVCZUDFHLFIXCOVWZAEBLOKPMPFEAYERHLLQATQSRXFNJWLDTFZFJOXYRZGOKQBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.153689176052);
    msg.setSource(44268U);
    msg.setSourceEntity(180U);
    msg.setDestination(65155U);
    msg.setDestinationEntity(16U);
    msg.state = 107U;
    msg.error.assign("COQTCOGEUFTPZUHUAHWAJHWJCLSWVYXLWNVQSXCWQCBFRYEPIJKVBQSYIPAFYZMLRZMHAHIGXSCXFPHMMTTERANRITAMYOIMYFFHKOSNSLCJBZRIQFH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.593616913499);
    msg.setSource(4731U);
    msg.setSourceEntity(189U);
    msg.setDestination(64554U);
    msg.setDestinationEntity(69U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.632421310279);
    msg.setSource(28608U);
    msg.setSourceEntity(87U);
    msg.setDestination(54032U);
    msg.setDestinationEntity(190U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.0956823496217);
    msg.setSource(59530U);
    msg.setSourceEntity(157U);
    msg.setDestination(51322U);
    msg.setDestinationEntity(89U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.780183104936);
    msg.setSource(56082U);
    msg.setSourceEntity(83U);
    msg.setDestination(33730U);
    msg.setDestinationEntity(36U);
    msg.op = 131U;
    msg.speed_min = 0.397834472141;
    msg.speed_max = 0.105595740969;
    msg.long_accel = 0.936127025567;
    msg.alt_max_msl = 0.266364224568;
    msg.dive_fraction_max = 0.310142247846;
    msg.climb_fraction_max = 0.229623874915;
    msg.bank_max = 0.0211914257945;
    msg.p_max = 0.126336515153;
    msg.pitch_min = 0.547117481259;
    msg.pitch_max = 0.252097513311;
    msg.q_max = 0.384507892933;
    msg.g_min = 0.171436004824;
    msg.g_max = 0.981521055467;
    msg.g_lat_max = 0.557386729613;
    msg.rpm_min = 0.670889084858;
    msg.rpm_max = 0.131424081095;
    msg.rpm_rate_max = 0.420408014538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.918072589241);
    msg.setSource(46827U);
    msg.setSourceEntity(217U);
    msg.setDestination(10644U);
    msg.setDestinationEntity(205U);
    msg.op = 205U;
    msg.speed_min = 0.231335516067;
    msg.speed_max = 0.40519168684;
    msg.long_accel = 0.417329041118;
    msg.alt_max_msl = 0.000596632976902;
    msg.dive_fraction_max = 0.284442873744;
    msg.climb_fraction_max = 0.0936877036931;
    msg.bank_max = 0.526071253959;
    msg.p_max = 0.605327209845;
    msg.pitch_min = 0.9994199589;
    msg.pitch_max = 0.825110505011;
    msg.q_max = 0.188201087043;
    msg.g_min = 0.163154630563;
    msg.g_max = 0.253061174818;
    msg.g_lat_max = 0.0958914166641;
    msg.rpm_min = 0.949434660391;
    msg.rpm_max = 0.146850557156;
    msg.rpm_rate_max = 0.323768060906;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.382467200005);
    msg.setSource(27589U);
    msg.setSourceEntity(200U);
    msg.setDestination(16012U);
    msg.setDestinationEntity(188U);
    msg.op = 41U;
    msg.speed_min = 0.433983338652;
    msg.speed_max = 0.724650388844;
    msg.long_accel = 0.437916750941;
    msg.alt_max_msl = 0.0664731598182;
    msg.dive_fraction_max = 0.733251730165;
    msg.climb_fraction_max = 0.397513002;
    msg.bank_max = 0.497443550166;
    msg.p_max = 0.678767897046;
    msg.pitch_min = 0.141281797038;
    msg.pitch_max = 0.380323222129;
    msg.q_max = 0.9009073457;
    msg.g_min = 0.291339309088;
    msg.g_max = 0.0126114306222;
    msg.g_lat_max = 0.724670904152;
    msg.rpm_min = 0.885934162171;
    msg.rpm_max = 0.0262014361733;
    msg.rpm_rate_max = 0.233252514663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.671135460008);
    msg.setSource(51159U);
    msg.setSourceEntity(40U);
    msg.setDestination(26201U);
    msg.setDestinationEntity(171U);
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TOLBVOAGLOSUHFFLDVKIB");
    tmp_msg_0.feature_type = 33U;
    tmp_msg_0.rgb_red = 13U;
    tmp_msg_0.rgb_green = 186U;
    tmp_msg_0.rgb_blue = 243U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.721254841868;
    tmp_tmp_msg_0_0.lon = 0.82641248185;
    tmp_tmp_msg_0_0.alt = 0.0451407171268;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.325368234668);
    msg.setSource(48146U);
    msg.setSourceEntity(34U);
    msg.setDestination(55168U);
    msg.setDestinationEntity(35U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.52835126629);
    msg.setSource(11090U);
    msg.setSourceEntity(225U);
    msg.setDestination(17688U);
    msg.setDestinationEntity(243U);
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.715205233691;
    tmp_msg_0.ay_cmd = 0.820025286121;
    tmp_msg_0.az_cmd = 0.569441474136;
    tmp_msg_0.ax_des = 0.327593682329;
    tmp_msg_0.ay_des = 0.131866371049;
    tmp_msg_0.az_des = 0.40420897326;
    tmp_msg_0.virt_err_x = 0.922328905334;
    tmp_msg_0.virt_err_y = 0.426929357296;
    tmp_msg_0.virt_err_z = 0.983342265507;
    tmp_msg_0.surf_fdbk_x = 0.500892434518;
    tmp_msg_0.surf_fdbk_y = 0.549883305083;
    tmp_msg_0.surf_fdbk_z = 0.386017513959;
    tmp_msg_0.surf_unkn_x = 0.80472268936;
    tmp_msg_0.surf_unkn_y = 0.919216541139;
    tmp_msg_0.surf_unkn_z = 0.301106219144;
    tmp_msg_0.ss_x = 0.750305272877;
    tmp_msg_0.ss_y = 0.640655535404;
    tmp_msg_0.ss_z = 0.746891121299;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.798973661526);
    msg.setSource(32575U);
    msg.setSourceEntity(43U);
    msg.setDestination(42461U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.304958198255;
    msg.lon = 0.0866068109126;
    msg.height = 0.625166690346;
    msg.x = 0.440040979261;
    msg.y = 0.882674239245;
    msg.z = 0.112521326126;
    msg.phi = 0.0123288774939;
    msg.theta = 0.622230615075;
    msg.psi = 0.424321202637;
    msg.u = 0.936647962373;
    msg.v = 0.316818401356;
    msg.w = 0.479553372945;
    msg.p = 0.449538777709;
    msg.q = 0.379707161129;
    msg.r = 0.938652360349;
    msg.svx = 0.544171550951;
    msg.svy = 0.899479360828;
    msg.svz = 0.692445866074;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.624294513192);
    msg.setSource(15563U);
    msg.setSourceEntity(163U);
    msg.setDestination(23663U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.431127310468;
    msg.lon = 0.855432319262;
    msg.height = 0.556072699928;
    msg.x = 0.096503335026;
    msg.y = 0.788992371948;
    msg.z = 0.766800976183;
    msg.phi = 0.138614208091;
    msg.theta = 0.593603212609;
    msg.psi = 0.290307417465;
    msg.u = 0.258626795874;
    msg.v = 0.909877921594;
    msg.w = 0.188317199831;
    msg.p = 0.767173531485;
    msg.q = 0.937728777303;
    msg.r = 0.853770844679;
    msg.svx = 0.679686995079;
    msg.svy = 0.356728644133;
    msg.svz = 0.389191485732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.119326669021);
    msg.setSource(63850U);
    msg.setSourceEntity(243U);
    msg.setDestination(46884U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.570954156229;
    msg.lon = 0.123118391009;
    msg.height = 0.315311598154;
    msg.x = 0.591153878908;
    msg.y = 0.234618976705;
    msg.z = 0.296953683032;
    msg.phi = 0.740432549805;
    msg.theta = 0.976959096322;
    msg.psi = 0.267547831832;
    msg.u = 0.376843881476;
    msg.v = 0.629854847944;
    msg.w = 0.654074148282;
    msg.p = 0.0316497014199;
    msg.q = 0.652467788473;
    msg.r = 0.397670013799;
    msg.svx = 0.13182884345;
    msg.svy = 0.724721098187;
    msg.svz = 0.370897440846;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.153979064557);
    msg.setSource(22023U);
    msg.setSourceEntity(28U);
    msg.setDestination(44728U);
    msg.setDestinationEntity(214U);
    msg.op = 176U;
    msg.entities.assign("WTKUJVCQQPJCWONQAINLNCYYQGGDLHLKOJVINGRIZCCQOOSBFMVWKJPELADRHZAUGOKHEVEHFIMSZREWDGEJUIIVELBLPUTSRXSBLSGIVQREMZVBXPLMIGSWQENZBBLXFEWUYFDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.43456074158);
    msg.setSource(49624U);
    msg.setSourceEntity(60U);
    msg.setDestination(12525U);
    msg.setDestinationEntity(202U);
    msg.op = 241U;
    msg.entities.assign("YZUXFBHIAPRSVHSXUIVCEADVSGRHRJRDKIRSZWQKMTTDWBONAFONLXUNBJEKLQTPJXQAZDCLYWYVEKFOGATNYEFRFYSEMNXWLKMNAMQEGABBAIFGRDPQOSLRYUMKIHUGTPIWFPLQSQSVACNNHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.46354958724);
    msg.setSource(58743U);
    msg.setSourceEntity(245U);
    msg.setDestination(38861U);
    msg.setDestinationEntity(5U);
    msg.op = 126U;
    msg.entities.assign("BTQOQTNLMIJXFXISGYDEXKJSOTRGAEUPKKOGPVICJLAZGQDMAFZWMCOCKEBQITHOQQKARWAGRAUKYWUESPVHBYVVKNNWUUMBJBWWBHJXSVTPTHENWDXSFFJUIHVFWMKYLOSIXVZYDAPIIRPBUVWHDUCQLPULMYMXZYNVCNBLQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.346768490702);
    msg.setSource(17710U);
    msg.setSourceEntity(134U);
    msg.setDestination(48823U);
    msg.setDestinationEntity(145U);
    msg.type = 55U;
    msg.speed = 49464U;
    const char tmp_msg_0[] = {125, 122, -24, -73, 90, 40, -124, -102, 13, 9, 63, 61, 115, -18, 33, -38, 61, -55, 13, -127, -71, -29, -99, 52, -79, -58, -55, 77, -92, 68, -32, 33, 2, 79, 44, 3, 31, 77, 7, 88, -105, 83, -61, -14, -114, 31, -76, 30, 91, -62, -77, -95, -51, -36, 17, -82, -70, 32, -117, 104, -128, -108, -93, -22, -100, -121, -102, -82, -22, 56, 30, 78, -84, -29, 110, -121, 19, -88, 4, 28, -126, 80, -4, -80, 3, -64, -94, -119, 89, -86, 100, -51, -126, -44, 80, -59, 122, 122, 2, -84, -120, -104, -39, -23, 27, -104, -32, 80, 55, 41, -3, -39, -89, 75, 31, 88, -86, -47, 124, 46, 112, 100, 115, -16, 123, -15, 93, -46, -93, -83, -101, 93, 74, -76, -121, 26, -83, 87, 99, -40, -50, 85, -32, -107, -19, 122, -51, 36, -2, -25, 52, -85, -104, -9, -39, 6, 114, 92, 93, 47, 106, -107, -41, -50, 7, 66, 36, -71, -77, -52, 26, 40, 77, 15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.353874992102);
    msg.setSource(64303U);
    msg.setSourceEntity(150U);
    msg.setDestination(28194U);
    msg.setDestinationEntity(4U);
    msg.type = 121U;
    msg.speed = 9537U;
    const char tmp_msg_0[] = {-128, -125, 15, 86, -62, 47, 31, -79, -4, -89, -112, -7, 69, -55, -115, -118, 16, -30, -7, 107, 16, -111, -81, 79, -61, -13, 110, 81, 82, 5, -124, -56, -11, 101, -71, -19, 13, 28, 120, 28, -12, 98, 115, -64, -18, -12, 31, 65, 89, -122, -59, 76, -30, 77, 107, -97, -98, 88, 35, 61, -64, 86, 13, -75, -9, -10, 2, -51, -107, 15, 55, 19, 76, -89, -120, 41, -88, 92, 111, -50, -114, -103, 5, 65, 14, 116, -117, 34, 66, 63, -82, 77, -18, 125, 14, -36, -22, 126, 111, 46, -17, 25, 83, -65, 12, -42, 0, -60, 100, -120, -71, -4, -61, -82, -119, 94, -56, 97, 38, 22, 41, -24, 0, -16, -38, -105, 104, -61, 78, -86, 96, 1, -102, -20, 78, 61, 38, 110, 84, -121, -11, 125, 121, -41, -65, -117, -108, 125, 65, 110, -128, 8, -16, -40, -125, -91, -66, -126, 79, -112, 124, -49, 12, -120, -51, -125, -96, -75, -30, 110, 65, -5, 49, -13, 79, -68, 17, -107, -25, 24, 23, -84, -120, 63, -28, 102, 12, 73, 75, 62, -103, 48, 115, -20, -107, -67, -10, -71, 8, -36, 70, 110, -103, 54, -91, -102, -45, -71, -87, 97, 44, -25, 84, -75, -34, 37, 46, 0, 60, 74, -84, 108, -23, 79, 89, 119, 25, 114, -75, 121, 8, 88, 68, 27, 54, -114, -83, 56, 14, 30, 93, 37, -73, 116, -49, 81, 70};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.473227991572);
    msg.setSource(16330U);
    msg.setSourceEntity(230U);
    msg.setDestination(50989U);
    msg.setDestinationEntity(244U);
    msg.type = 71U;
    msg.speed = 51686U;
    const char tmp_msg_0[] = {-41, -77, -37, -17, -92, -13, 122, 57, -69, -105, -48, -68, 107, -38, -110, 111, -30, 89, 54, -44, -105, -126, -49, -109, -47, -36, -29, 26, -37, 30, -119, 34, -25, 124, 74, 67, -56, -121, 9, -20, 44, -54, -123, 45, -27, -112, 89, 101, 75, 106, 12, 9, -86, -126, 118, 86, 84, 27, 98, 20, 84, -32};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.940626021508);
    msg.setSource(28402U);
    msg.setSourceEntity(133U);
    msg.setDestination(58851U);
    msg.setDestinationEntity(137U);
    msg.op = 31U;
    msg.tas2acc_pgain = 0.482582317426;
    msg.bank2p_pgain = 0.663602741777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.791449843674);
    msg.setSource(43227U);
    msg.setSourceEntity(236U);
    msg.setDestination(51089U);
    msg.setDestinationEntity(86U);
    msg.op = 194U;
    msg.tas2acc_pgain = 0.992578395826;
    msg.bank2p_pgain = 0.989534438389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.48082494823);
    msg.setSource(20024U);
    msg.setSourceEntity(241U);
    msg.setDestination(3736U);
    msg.setDestinationEntity(31U);
    msg.op = 35U;
    msg.tas2acc_pgain = 0.0344731294399;
    msg.bank2p_pgain = 0.335588457031;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.266537434176);
    msg.setSource(29028U);
    msg.setSourceEntity(103U);
    msg.setDestination(43903U);
    msg.setDestinationEntity(80U);
    msg.available = 706682242U;
    msg.value = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.477684362292);
    msg.setSource(47692U);
    msg.setSourceEntity(116U);
    msg.setDestination(9055U);
    msg.setDestinationEntity(199U);
    msg.available = 287675195U;
    msg.value = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.627437595872);
    msg.setSource(3450U);
    msg.setSourceEntity(56U);
    msg.setDestination(9823U);
    msg.setDestinationEntity(113U);
    msg.available = 2150925701U;
    msg.value = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.523417855153);
    msg.setSource(20600U);
    msg.setSourceEntity(242U);
    msg.setDestination(62123U);
    msg.setDestinationEntity(245U);
    msg.op = 164U;
    msg.snapshot.assign("NUCTKEUVQEZIWMRHNJJXRVAOWBPONEKMGHXSOEEAWOMEWCFKYHIHDYGRCBXHWLBQZPNLIWTSGAQIWJGHQTKFQZZMCAAPDYUJEDYNYBLZPXCBYHXURXEGBQXFVJFIDXNTUGBRCVAZDQVVMDBYKJUTLGSLUIMIDHTRFTTAWNPPIRZUYTMUVDXWAPGUOSADXZJSHSFFKLILKHPOJNCZS");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("SSDAICFPQTWAILNCVCIAQYFTUZGUCKVOJWSZZLEZHQRFOMUBBADHITIJCHCDGTBLNLVNJXYPWCLRMVBVQNEDYSEXPXNGPSFHBUJFOQMKNYVB");
    tmp_msg_0.service_type = 207U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.884016392689);
    msg.setSource(42094U);
    msg.setSourceEntity(123U);
    msg.setDestination(41700U);
    msg.setDestinationEntity(238U);
    msg.op = 104U;
    msg.snapshot.assign("DBEOFPPKGGWMAXGQZYAMADVXHSHRUAIPKKZREIDJUADBVMUERCIYZHJWHKTJHXRKOWSCNLYCAVSYBAVCUXONKUJNMLXCZDOJZTNSGBJNZRTPHJEWCQYBNRBRSYPWMTGOXMQONFABISPVPYHLWDHQLTHOWYYETIPZBBKOVENZOXLCGQEVVMFBFQ");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("FMJOKTBPBTWBJTLQLZFDNNIJXKKPCXUDDCKQAAEQNIVGJDPYZTAHNDPUDQIMZCMTDTEXHOQFBPHPFAQSWWPZNLFLARZYDAZRSPLBGHBEWWFYNOCERMTPSEIJOWYEN");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.952114866842);
    msg.setSource(2041U);
    msg.setSourceEntity(201U);
    msg.setDestination(6121U);
    msg.setDestinationEntity(239U);
    msg.op = 140U;
    msg.snapshot.assign("LQHKWXKJFFMFHMGYEPBOFWYJHHDZKBXNUUBVWQOWKBFKVGOEUQALGZOUPJJETNUQXWYDIMZEBRTZDTQDIITAMNGUAYQLDIYIPOVCPDNBXTLRKYUTXWARVPQNWQELXGATOOBJSDGNPBUEVEDCMICKSQVCTPDHMSGAKTHWHZCZSHYYAVJSJG");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 29U;
    tmp_msg_0.value = 0.839662174521;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.278836065798);
    msg.setSource(22530U);
    msg.setSourceEntity(211U);
    msg.setDestination(8105U);
    msg.setDestinationEntity(80U);
    msg.op = 117U;
    msg.name.assign("WCHBCRUJAEBNYRWOZOXJTWUTJXVGOVQVKIZGFGNKHITWIGQYEMMTPCPPRDHCLGOHYDFLJGXYCVPBHNDAFOSVPMMMJEDJHFLBWZUIYESSNUIVMISDCYVZEXYUZGGFUOSLXZUZALDHQPETJEBIYUZTKFKPQKYNFRHFPBRQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.965928141879);
    msg.setSource(48159U);
    msg.setSourceEntity(64U);
    msg.setDestination(54380U);
    msg.setDestinationEntity(83U);
    msg.op = 26U;
    msg.name.assign("RBLIPCECLIKQFWNOQDONVJQQFRXEOUAZZJZMVHFCCULTZYJIEQBBMNVHMNICYDOXXZKYEROZNCAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.0999409053816);
    msg.setSource(63068U);
    msg.setSourceEntity(175U);
    msg.setDestination(8017U);
    msg.setDestinationEntity(2U);
    msg.op = 174U;
    msg.name.assign("KTEZHFTYYLEZMKGIJUNQHVHZPSBQJGFBUVZFXCOADRQXMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.652550050337);
    msg.setSource(64230U);
    msg.setSourceEntity(14U);
    msg.setDestination(62997U);
    msg.setDestinationEntity(204U);
    msg.type = 139U;
    msg.htime = 0.384124182437;
    msg.context.assign("LXMCWTDGQGIYKIMFRQ");
    msg.text.assign("PWNWFXTGKNUTOPSTJCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.741412908739);
    msg.setSource(37824U);
    msg.setSourceEntity(23U);
    msg.setDestination(33789U);
    msg.setDestinationEntity(162U);
    msg.type = 236U;
    msg.htime = 0.660394323965;
    msg.context.assign("BXHHIQPGQBPRCQGGOGQMHULITOOJAXIEDDXVXBNNYUZYAMHWWTEPDDYPAAJLMKJQBHJTNXCKXVUCMNZRFLCTLGVMUNIPHRTKKAZJAVNSABVCKXTBCLWKEFRCFGVNMHJZLJYMTNHQYVOVDOPIOZXBFENLNPSYEDHJCTYQMEXUKZWWSFEGIKZOFSUSRPYXJES");
    msg.text.assign("CZBLAQSAAOMDXVSDIZVEKVCJBNEFLTYJLOVJDTUBPFKRBLJCNQNFNAOIWAXPGQEGZMHKESRWTNZABXSIQDEQIXBCOLRKSUYWACHWTTYGPHHMFGFIJZKNHXIRIHMKJHAKTENZDKUMCPWRNULWPASXFNGQDREPVGXTYEPCKPPVDLXUSRTQXMFIJUSLOVYQTXJZSZUTOCWLFHYYMGOUHVGGGMQBLCBSPIIBHQUODJONMKVRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.253483520186);
    msg.setSource(37621U);
    msg.setSourceEntity(85U);
    msg.setDestination(34414U);
    msg.setDestinationEntity(245U);
    msg.type = 78U;
    msg.htime = 0.111171620443;
    msg.context.assign("TYZOKQKKAFBFWSMTCNUYYBHUYODSJLLSEGGXNDYEECUSFVHXJFNWXTIHZVDTXQPAWGPWDTCUMHJCDLENXJIPHUBBZHTAXFSWABFVGKZDUYFOVQRKPSLASDOKCAGCEEPNWZYRORLRBBLDTJKEMQBQW");
    msg.text.assign("PGWXOPOYLVHBIEVIYBBUEQKJBSKEFJXJMUXIZDJLYYLBWAAYHIGUKTZNEDNLMQLYZZWXRZSKRUCNUSCJDTCDPXTZJHHGHIDIGUOXGFOVFFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.366329387295);
    msg.setSource(31533U);
    msg.setSourceEntity(8U);
    msg.setDestination(58006U);
    msg.setDestinationEntity(86U);
    msg.command = 172U;
    msg.htime = 0.888449033976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.819358333579);
    msg.setSource(29751U);
    msg.setSourceEntity(114U);
    msg.setDestination(9567U);
    msg.setDestinationEntity(207U);
    msg.command = 8U;
    msg.htime = 0.226491009633;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 146U;
    tmp_msg_0.htime = 0.796684474814;
    tmp_msg_0.context.assign("IYMPFWJAYXRJYXTWSTJBVRPNNWYRWNNDXZSQCLVNEBMIESALGPPMRFVPTAXACPRQCNJIHGABHEPYRLDEFDSFNOGYKJEKQGGTFHSLOWAEKXYMRZEYVHJUDFWBIUTVULYXVZRFMBSSONIVAFBDKKFMEDMJQPCOUEHBBKJKCBQTZHPZODULTFQGUJZTLJHNWGXBQZVZKDSPTOZGUQEIOIWDUMOCAQXCLMGWCUGA");
    tmp_msg_0.text.assign("AUEALEAUVILXNYZFRXGKSDGZJZUHOIZZWCXXXAHHXDHBPRWQUICRZWIENZOUYPRZVBNMPBFGJMKJYTCWSMMQTKVYIVLHQQGEDFDTOWAMOPFJLOAXAKUVUZJRVCQNXWKGDAFJEYEYPMKJAFHGMRPQEIWCSLBDMURRBISUYQEJUGWWSBVBTZFKJOOCVPDFKSQIP");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.361970995091);
    msg.setSource(11097U);
    msg.setSourceEntity(144U);
    msg.setDestination(13695U);
    msg.setDestinationEntity(90U);
    msg.command = 235U;
    msg.htime = 0.489593175543;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.773074047795);
    msg.setSource(36663U);
    msg.setSourceEntity(173U);
    msg.setDestination(29158U);
    msg.setDestinationEntity(218U);
    msg.op = 172U;
    msg.file.assign("PIPTZMTNKSZOOXANYZVYPCQZTXJQXQFZUTYSIJJWCJRNNWANAUSEORPBDWCMRSBFHHLMWGDPDRYOIHXXLZAQJVUEUMWKXFPMQVUCOBILBRZEYUCRGGIFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.19808233991);
    msg.setSource(61073U);
    msg.setSourceEntity(173U);
    msg.setDestination(52863U);
    msg.setDestinationEntity(75U);
    msg.op = 85U;
    msg.file.assign("YBWIEQUBMHZBRZVVCCZGXJNNUGLLAZHWKQMTCHDVMJWKASVIYOPILACVJGZFVLROGKZKSYENSHKWJMHWIFUXBDVASYDELANMZDZGXKQBICAUWXGRDMBDSX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.910690703542);
    msg.setSource(30966U);
    msg.setSourceEntity(84U);
    msg.setDestination(49042U);
    msg.setDestinationEntity(12U);
    msg.op = 74U;
    msg.file.assign("ZGODOBTBLTGPQQXIOCIWHDWRGGVTBYM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.526604963145);
    msg.setSource(45857U);
    msg.setSourceEntity(18U);
    msg.setDestination(37716U);
    msg.setDestinationEntity(254U);
    msg.op = 20U;
    msg.clock = 0.0599585611078;
    msg.tz = -8;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.125967039897);
    msg.setSource(12961U);
    msg.setSourceEntity(220U);
    msg.setDestination(51330U);
    msg.setDestinationEntity(237U);
    msg.op = 115U;
    msg.clock = 0.251042373185;
    msg.tz = 59;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.517850927724);
    msg.setSource(6806U);
    msg.setSourceEntity(187U);
    msg.setDestination(4376U);
    msg.setDestinationEntity(49U);
    msg.op = 27U;
    msg.clock = 0.729376715888;
    msg.tz = 102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.821557155994);
    msg.setSource(52499U);
    msg.setSourceEntity(192U);
    msg.setDestination(4394U);
    msg.setDestinationEntity(195U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.432090251233);
    msg.setSource(14570U);
    msg.setSourceEntity(214U);
    msg.setDestination(9031U);
    msg.setDestinationEntity(105U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.0288203649255);
    msg.setSource(20226U);
    msg.setSourceEntity(122U);
    msg.setDestination(54812U);
    msg.setDestinationEntity(236U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.117440283387);
    msg.setSource(34678U);
    msg.setSourceEntity(89U);
    msg.setDestination(12192U);
    msg.setDestinationEntity(33U);
    msg.sys_name.assign("TUUWQOCJIFLNHGJTYOUIDXXLSXLILHVXMENFUARWTTUUCTEGPZYYDESTVTYBWKGARKLKLDMIJMDVAJONQWMFAAVXECFBERVGHZIOSBJGXYLMNYURHJBIPKFEMJSPNPGKKGEVHFDQWXWZEVCRAPRCXPIOANNNSPRBAQKUBVLOONBPBUPLFWIJUDKQYEZQOCFJQMDVS");
    msg.sys_type = 219U;
    msg.owner = 24846U;
    msg.lat = 0.0662021956254;
    msg.lon = 0.297402857492;
    msg.height = 0.474536792441;
    msg.services.assign("PTONYHIYBYNQOQWKBMNAZOIBXHQEJUJYIKQTGDLIRONXKNOCEAAULBZJFJTDBMKKWPVZFAJZLEXDDKVMXHDUXVQWSSCDNKINGSHQPZUSJWOTIRVLUZSLFFWENFZVVDEXRHIKBICCOCPMUPLGXMYWJFVMGMASOHUFLXSXWSETRFLUWUZPBYVSBHPYUR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.522196115172);
    msg.setSource(12946U);
    msg.setSourceEntity(118U);
    msg.setDestination(1822U);
    msg.setDestinationEntity(33U);
    msg.sys_name.assign("CSYEHHKKXRNDKPZBFYMXKBZCCBFNWNTXVESPSDRXACUQXPGWMUSIPJYELKPKUNRLCLQMKTEAGFJGPWJKZTAPHLVQJHKTUZURBUPNQIIXXIBTJCOBLJCMQHTZHZFRVDOSMMADVSIYOGWHCZTTLWSVYBQQIZODAANROEQORMEOOYFXWJ");
    msg.sys_type = 68U;
    msg.owner = 32387U;
    msg.lat = 0.206006463469;
    msg.lon = 0.309035913621;
    msg.height = 0.578066643714;
    msg.services.assign("GWIQIOATPLJLJWOHDFXMVBCYYQSFJQZNKVINAHWVYZOGIZHMZCYHUXBACMCTWQEPIPDDMSFIYJKAGNIHYQRJLLAUBEBETYTNBAYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.515940919155);
    msg.setSource(16091U);
    msg.setSourceEntity(156U);
    msg.setDestination(52802U);
    msg.setDestinationEntity(36U);
    msg.sys_name.assign("RXPXCYBPETALBTCCKJSOOUQRACNRPZHNVEVNHJEZZPKQFXFKSIHGHVBJTPYGZRXOXUFTVADCYDLLKAFESTZHVDGFMKEGECMGBIHWYALWFJGDHMTNUDUJVIRHPZOKMAUEUTJJOOLW");
    msg.sys_type = 136U;
    msg.owner = 53278U;
    msg.lat = 0.60797437826;
    msg.lon = 0.307103501307;
    msg.height = 0.90452227363;
    msg.services.assign("NVYELRFQNIFANQXHJUZKFUHEMHTPZKCDWDSCPCZNBVEELTLKRUXHYXNMTQOTLTOJAJLMOFLMIFURSYOFBYYSWIFZPVUOALHCAIBGLHVXKGCTDCYYRMLPUJKMIDBAESHDREGYXXEZNHCTRMVUWUCGEAWDVOQSIBPNQXGGKAOKVKPCIXKSGPCWBJWYIBSIEDARLJKZVVADZBUQDBTMJERQPQIWYNMJOGZGTUPQSV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.144330036856);
    msg.setSource(47313U);
    msg.setSourceEntity(161U);
    msg.setDestination(19342U);
    msg.setDestinationEntity(248U);
    msg.service.assign("HJYMUQOGIURHSLFYXVNAUMJSQGKALJVKVVUANROTBVCWCHUSISUDBPFQCQGUXBENCWFDEMGNDPOXVIDWGMEKWFPKJQCAEBNSFSOJXLPGPUMJCHELTTVICHWDUI");
    msg.service_type = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.65287948054);
    msg.setSource(7234U);
    msg.setSourceEntity(126U);
    msg.setDestination(36089U);
    msg.setDestinationEntity(126U);
    msg.service.assign("HNDCQOXMQSQEFAUDPIEXSZZMMPRZLYDWFAGNUWEKTICJGEEBHCULGBLGIJWOLFWZAKFCNBVUVXAQHJVLVHYJNBOFQARQEIXAVAZUFKRBJYJZPJXROPDQTUKZOTLAGUHJQHKCMYDI");
    msg.service_type = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.66296709385);
    msg.setSource(42213U);
    msg.setSourceEntity(78U);
    msg.setDestination(62738U);
    msg.setDestinationEntity(99U);
    msg.service.assign("ZRWZXMLFSOKBKBNEJGMEGUDVJQDLOAJMXFWNAIZDLXTOCNVRDNPZLLTTVBRLQTSIRCWEAFYBQWAHOAUVTKHQKUSJJRANMPDSVCKJZNWEBHCOPOGDPEQ");
    msg.service_type = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.768571559197);
    msg.setSource(33559U);
    msg.setSourceEntity(72U);
    msg.setDestination(63531U);
    msg.setDestinationEntity(180U);
    msg.value = 0.30466021524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.0710187193668);
    msg.setSource(48794U);
    msg.setSourceEntity(211U);
    msg.setDestination(12923U);
    msg.setDestinationEntity(138U);
    msg.value = 0.761166285664;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.846216339606);
    msg.setSource(32046U);
    msg.setSourceEntity(133U);
    msg.setDestination(61327U);
    msg.setDestinationEntity(244U);
    msg.value = 0.0503556767265;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.0785851467819);
    msg.setSource(303U);
    msg.setSourceEntity(50U);
    msg.setDestination(37708U);
    msg.setDestinationEntity(90U);
    msg.value = 0.927374471534;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.995821624342);
    msg.setSource(6764U);
    msg.setSourceEntity(98U);
    msg.setDestination(62310U);
    msg.setDestinationEntity(96U);
    msg.value = 0.389977288829;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.59176765092);
    msg.setSource(36049U);
    msg.setSourceEntity(231U);
    msg.setDestination(64001U);
    msg.setDestinationEntity(10U);
    msg.value = 0.638795306998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.862787381217);
    msg.setSource(36407U);
    msg.setSourceEntity(159U);
    msg.setDestination(61229U);
    msg.setDestinationEntity(156U);
    msg.value = 0.425962020719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.638677215411);
    msg.setSource(12801U);
    msg.setSourceEntity(143U);
    msg.setDestination(24308U);
    msg.setDestinationEntity(55U);
    msg.value = 0.545353773671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.336476430019);
    msg.setSource(14533U);
    msg.setSourceEntity(203U);
    msg.setDestination(61713U);
    msg.setDestinationEntity(8U);
    msg.value = 0.920942849269;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.888897034406);
    msg.setSource(17417U);
    msg.setSourceEntity(80U);
    msg.setDestination(61501U);
    msg.setDestinationEntity(50U);
    msg.number.assign("XLHLUZGJIUURDQOTKRWGXLDNPYKATRQIBHD");
    msg.timeout = 28422U;
    msg.contents.assign("FYKHJAIJCJEXLXXPWQLDVKREAGDSNMVEOQYEBBZKFSAUOAPQTKJGDQCCUEQTYRKDRZVUFQJGQGSVUCLWZWSOXYDKOWYBHHMJMBISJOAUZSLJLDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.77196546302);
    msg.setSource(64029U);
    msg.setSourceEntity(33U);
    msg.setDestination(60899U);
    msg.setDestinationEntity(121U);
    msg.number.assign("VWJZQOIDHFUUNCAKCZWNPVFZUYYWRZWAO");
    msg.timeout = 40274U;
    msg.contents.assign("EGYZNGXXMSBUPQEFIHRSD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.601796097974);
    msg.setSource(56354U);
    msg.setSourceEntity(192U);
    msg.setDestination(32181U);
    msg.setDestinationEntity(220U);
    msg.number.assign("RIMHUMCXUOZSRYMLKZGQQJWOGCNOTPGQTKPHKLYBYLIUITKULKSRALBRYSOPIZJEMUCFXNIFAEHNYTUZDDZNJKFTIXOGQJRBBWBLTHQIAMGMLEBADCEYSQKTQJW");
    msg.timeout = 19718U;
    msg.contents.assign("REMVBVTYSIVMHN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.150961249143);
    msg.setSource(33199U);
    msg.setSourceEntity(137U);
    msg.setDestination(15337U);
    msg.setDestinationEntity(136U);
    msg.seq = 3401413727U;
    msg.destination.assign("MMTYJTHJPNAMBIKYBORMOSDAHUEZEDDLGNSDZSEAEQPQYGHHBMVLCWTDSMFXLHFVUJOPPHXINTENSFLRZKBTVPUAYPSCVODAMZTOQJLQAGCGGIVLNWTYLXOGCAKBWMXJMLFYJPLTQQTVYBIOMNREPAZEUFDXZRZFPXWYDCNHIOIBEEGFEVOWQUKSRHWJKSKIVWWCRGSIGAUVXQD");
    msg.timeout = 27620U;
    const char tmp_msg_0[] = {-120, 95, 124, 32, -66, -8, -111, 19, 93, 17, -84, -48, -7, 6, 10, 12, -12, -61, 94, -61, 15, -67, -7, -125, 91, -118, 116, 0, -99, 91, 15, 39, -119, 59, 72, -9, -39, 36, -100, 62, 17, -53, -94, -41, -104, 92, 57, -84, -45, -26, 126, -94, -6, -64, -71, -28, -95, 57, 56, 79, -16, 25, -107, 40, -95, 59, -122, 29, -90, 95, 96, 16, 57, 60, 41, 16, 35, -66, 49, 105, -36, 6, 76, -84, 111, 20, 87, -53, -97, -26, 30, 35, 75, 60, -91, 45, -31, 103, 102, 93, -91, 93, -115, 121, 111, 27, 120, 122, 106, 51, 115, -94, 123, 97, -45, -44, -62, -126, -40, 49, -128, -56, 62, -14, 104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.578654233608);
    msg.setSource(34862U);
    msg.setSourceEntity(140U);
    msg.setDestination(53968U);
    msg.setDestinationEntity(192U);
    msg.seq = 305344031U;
    msg.destination.assign("CLPYNEDHRUYSOUPVSOFTYJOLUXOVNDJKSLWDIODVUXPPXAZGGIUTXLYAFFLMTATCRPXRAQTTSOVRHMJWKICZDGNNBRJEVKAFLIRWZNOPESDLEVSKQMBJMIFVVAMSQHYPGZDMTJEEKNLKCXEKHMSHNWBTFTYGVBWWVCBPZXNNIGURHGOZTQMYIGABYJUDQZFZQZHXWJKBXDAQRDAWIQYSEUNQOFCCYCIRIAWKEFFLBMLMPSHJCKHXEJUQWHZPGC");
    msg.timeout = 55494U;
    const char tmp_msg_0[] = {78, -16, 47, 19, -77, -47, -110, -4, -66, 32, -104, 13, -79, -115, 97, -50, 93, 47, 57, 10, -35, 120, 31, 36, -29, 3, -71, -92, -10, 15, 111, -118, 23, 23, -76, -16, 122, -38, 3, -121, -71, 57, 28, 114, 12, 50, 30, 112, -30, 119, 70, 29, 42, 62, 115, -45, 56, 91, 58, 15, 101, 10, 1, 108, 6, 105, -15, -116, -104, 8, 77, 104, 93, 117, -88, 28, 47, 119, -19, -62, 44, 70};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.432891968061);
    msg.setSource(11469U);
    msg.setSourceEntity(58U);
    msg.setDestination(65061U);
    msg.setDestinationEntity(183U);
    msg.seq = 2072198352U;
    msg.destination.assign("GZJWHAFXIBWRQKOWYIQNCNSWSAGUCJRIIAURSYBKURHSYHWZWUZXXLLDSZNCGUOTYBFXMYEDGDGTMIMJFYNOCVATRKLNRICMFXAXKDGUZFZTRKVCUEJJSNDEEJSIAQBKOUINQSAVIDD");
    msg.timeout = 19774U;
    const char tmp_msg_0[] = {-71, -56, 117, 1, -66, -47, 2, -27, 76, -70, -36, -14, -24, -12, -118, -107, -93, -77, 26, 35, 82, -2, 32, 66, 22, -106, 17, -29, 28, 35, 27, -77, -121, 118, -77, -64, -109, 24, -99, 79, 58, 104, -49, -91, 72, -89, 74, -126, -4, -10, 42, 36, 74, 16, -71, -75, -74, 57, -39, 16, -15, 115, 104, 34, 69, 19, 72, -10, -1, 66, 108, -116, 88, 74, 105, 13, 115, 100, 34, 100, -4, 36, -71, -61, 125, -120, 91, -102, -41, 125, 3, -46, -52, -117, 85, 34, 54, 43, -35, -28, 26, -58, 66, -6, 64, -128, -7, 23, -91, -19, 16, -108, -91, 41, -61, -67, 82, 81, 76, 58, -6, -91, 116, -61, -127, 13, 2, 75, 18, 124, 53, -109, -115, 98, 67, 58, -96, 98, 4, 119, 13, -17, -94, -108, 58, -32, -68, 106, 102, 67, 46, 18, -56, -12, -59, 17, 118, 106, -86, 91, -89, -15, -77, 79, -28, -77, 100, -80, 85, 27, -61, 37, -118, -4, -73, -128, 31, 23, 19, -93, -57, 52, 39, -30, -15, -65, 12, 121, 120, 82, -61, -64, -8, 39, 124, 7, -13};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.0895415801217);
    msg.setSource(26062U);
    msg.setSourceEntity(44U);
    msg.setDestination(6041U);
    msg.setDestinationEntity(203U);
    msg.source.assign("SPDXDSQEVLMJRHZMJGCDIERDJSQGKDMIQWNWBVOHOYBTMCNNQHKMIMHJ");
    const char tmp_msg_0[] = {-113, -75, -57, -63, -123, 103, -96, -18, -63, 17, -64, -26, 41, 23, -4, 46, -51, -8, 120, 80, 56, -29, -50, -90, -25, -47, -23, -17, 126, -27, 6, 79, 12, 42, -17, -128, -21, 98, -63, -109, 16, -119, -37, 100, -74, 7, 20, -49, 65, 118, -42, 62, -22, 99, 77, 119, 96, -14, -38, 38, -58, 69, -75, 58, 50, -59, -88, -57, 83, -82, -88, 91, -49, -8, -101, 93, -101, 106, 99, 81, -124, -19, 41, 79, 121, -87, -45, -13, 34, 125, 126, 113, -120, -127, -112, -108, 58, 62, -38, -74, -14, 106, 66, -72, 35, -65, -106, -60, 62, 19, -89, 113, -92};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.263826845648);
    msg.setSource(55894U);
    msg.setSourceEntity(88U);
    msg.setDestination(12093U);
    msg.setDestinationEntity(179U);
    msg.source.assign("SOPABEUWDRWMUVNGEVJTTQJHQQYZFKNWGPBOSLBVIRBVMUKBLZAMDAHWIWEPMGXWPYYFKLHRBITSSSSVYTJRXLVALBIHNCOZXKEPGE");
    const char tmp_msg_0[] = {50, 39, 26, 48, 95, 21, 30, -29, -126, 49, -87, -61, -13, -83, -35, 5, 100, -95, -96, -1, 56, 63, -2, 116, 34, 76, 11, -24, -114, -16, 70, -84, 45, -78, 67, 55, 62, -93, -101, 68, 33, 105, -7, 125, -9, -107, -97, -114, -20, 112, -20, -12, 33, -86, 22, 90, -42, -66, -30, 15, -14, -7, 68, 45, -25, -128, 32, 10, -65, 95, 16, 43, -33, 63, 48, 59, -31, 35, -22, 19, -26, -67, 106, -84, -119, 52, 101, 84, -112, -55, 99, 68, 125, -104, 54, 18, -48, 55, -74, 21, -33, -121, -121, 115, 65, -42, -70, -107, 11, 29, -64, 22, 49, 9, -111, -43, -40, 28, -15, 96, 49, 0, -13, 63, -79, 117, 71, 38, 5, 26, 77, 50, -34, 26, 118, 53, -7, -95, 114, 71, -8, 12, 21, 23, 34, -23, 8, -75, -52, 53, 87, -108, 90, 53, -99, 34, -84, -75, -24, 41, -91, -73, 13, -102};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.468430321749);
    msg.setSource(51931U);
    msg.setSourceEntity(113U);
    msg.setDestination(58560U);
    msg.setDestinationEntity(168U);
    msg.source.assign("XRTMGEKQPMG");
    const char tmp_msg_0[] = {84, -24, 43, 123, 4, 62, 11, 123, 84, -46, -9, 77, -96, -54, 59, -84, -39, 115, -5, 28, 3, 69, 110, 82, 3, 71, -102, -77, 2, -7, -20, -30, -99, -124, 70, -9, -27, 68, 124, 50, 104, 66, -17, -64, -78, -92, -60, -121, 110, 91, -119, 108, 77, -7, -38, -78, 104, 92, 116, -15, 125, 65, -63, -50, 108, 62, 86, 52, 36, -13, -88, 7, -122, 96, 1, -112, 31, 85, 83, 22, 44, 61, 105, -127, -81, 108, -1, 113, 35, 125, -42, 89, 19, 22, 120, -95, 49, -47, -91, -69, 88, -51, -109, -17, 3, 25, 1, 3, -54, -80, -59, -64, -41, 63, 25};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.0329409157745);
    msg.setSource(57963U);
    msg.setSourceEntity(61U);
    msg.setDestination(62843U);
    msg.setDestinationEntity(64U);
    msg.seq = 1013433802U;
    msg.state = 225U;
    msg.error.assign("UTQTYCKGJYGLUKXVQMQAYEWSEHJSBMQGHXZROMWPWDKKTAXWVNMCUUWIJLWLQWHKRVRDZUTGGEAACB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.893981534146);
    msg.setSource(14707U);
    msg.setSourceEntity(160U);
    msg.setDestination(52226U);
    msg.setDestinationEntity(145U);
    msg.seq = 916150456U;
    msg.state = 20U;
    msg.error.assign("ZRRKGNPQDYTBOMCPKOCBZKGPOOFUCFEZHUHRISOWAWCWUENNTIDRLSXEEIQMUIUGXYPVSUNXRLAIVKOPLHZXDEIOAMNMTNIJXSCZBBVQXAPLBLNAGYRKTFWLTNKKZLZVSDFUGQTWARMFYZXIDZCKDHNMROGRDQWGBOJMHFHALSJGVCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.00297337465838);
    msg.setSource(37337U);
    msg.setSourceEntity(31U);
    msg.setDestination(36452U);
    msg.setDestinationEntity(99U);
    msg.seq = 136506191U;
    msg.state = 1U;
    msg.error.assign("RSLLHQUJOJWEXDKASGXDAIUATFHYZJEJDYQKRYZKJOWPHLZOUHTHRXWHOGXIGCIJHHICQTGCNVZFWHGKZPWMXRRWGCNFXSMUNINBHTEKMSXCBVBROBITPJAGJWRYPFNTDRQOPIURVZSLFVEMFFJDVLUYGEMYBLBQMRWDYMWAYZNMEUDPZGUWVKTEBFNYCVQVFPESNLIEQIZQSKDBMVXLCTLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.0314006599896);
    msg.setSource(51521U);
    msg.setSourceEntity(223U);
    msg.setDestination(9012U);
    msg.setDestinationEntity(106U);
    msg.origin.assign("CNGOJEHUAYVPKVUHRSMHCEFPTDMAHNSWESULXZATXKKFRDZGYVWAXUCEAKQCEPQZCALJNHBVUJIWCEVW");
    msg.text.assign("DUBSIJTCQKFFZRHGADYAZKJULWQJTLUENNIYHPHPRFZYVVGCEEHWRMEUASYCNXMTJZCMTTZISETGBBOATHOQKBCMFPSMDSLZKWACHRTNXEFDSXRLNQFJCEMXKNQONPREOSXDUPOWLVXZKXDULIEUIIJJXVJXZFVYBLQVGKGNOHYB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.712337658656);
    msg.setSource(44988U);
    msg.setSourceEntity(149U);
    msg.setDestination(58881U);
    msg.setDestinationEntity(0U);
    msg.origin.assign("FHGEXCVTEGWUZXOMQBGRDNLDVBFIAAXCKYSJPVODAKEROUAPOFSGOLAYBKNTYIZNOIFWNDTOGYXSTBSPGTPYVMDRTPCP");
    msg.text.assign("PWEDYXTMEGFXMGDFGQBYOJTYUZKSIYHOKXUJQIABRBTZGBXJTRANPXVRKCBVLWKTNFAJLFLAVFVHZNZYGBCSMQXTEPODSLBSDSCVRRQVQWOTUJSPIKRWYDAAYCKZHXARNNFUGNHWRCOBTEBNHABVUNEUEMIKOUQQCIZIEJZWPDJCOKHDPGJDFPULGNGXIFECKMPQOUVLIAEAXLOREWMIGPJKWLTMLYMJPSHRMZCSMFZYOHCHLVYQXDIZWVQDS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.257266834604);
    msg.setSource(2738U);
    msg.setSourceEntity(34U);
    msg.setDestination(31908U);
    msg.setDestinationEntity(233U);
    msg.origin.assign("AYFMLSCONNEJUVXXKFSYZABMWETWNOTVKJCFBMTVWJMTJZOXPJMCNZNBIYLYRHSPWHASROVEBUUDMFEPGVNGYERNJTEBVGNGNXDIBSRKYSCUPESMXVHXAVYKGFPKBUDGWAQQLFQR");
    msg.text.assign("LJVYOQNEPTVPBWTLNNM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.237012620679);
    msg.setSource(35398U);
    msg.setSourceEntity(9U);
    msg.setDestination(53U);
    msg.setDestinationEntity(75U);
    msg.origin.assign("XQDUMRIBJROCQVKZMGFFTNPHWSRHGECKSPAPTEG");
    msg.htime = 0.420136097293;
    msg.lat = 0.117373134813;
    msg.lon = 0.933407134946;
    const char tmp_msg_0[] = {49, 64, -112, 63, 110, -91, 94, -5, 26, 20, 79, 26, -51, 76, -124, 32, -113, -109, -10, -94, -87, -32, 71, -8, -57, -42, 111, 17, -24, -52, -37, -12, 19, -56, 52, 46, -113, -27, -26, 86, 68, -86, -20, 121, 81, 31, -79, 90, -124, 70, -128, -115, 110, -85, 38, 13, 30, 50, 76, 98, 88, 3, -92, -39, 62, 57, 70, 63, -63, -113, -33, 107, -45, -114, 10, 32, -70, -37, 2, -60, -52, -128, 108, -110, -60, 75, 43, 90, -71, 123, 87, -125, -90, -8, 17, 19, -62, -53, -45, -117, 78, 20, -18, -98, -46, -60, -3, -122, -115, -78, -95, 53, 8, 14, 87, -9, 88, -53, 103, 47, 98, -91, 71, 95, -114, -29, -66, 106, -91, -37, -128, -92, 29, 48, -76, 29, -38, -30, 62, 20, 12, -85, 88, 53, -109, 123, -127, -107, 56, 15, -19, 94, -123, 4, -14, 101, 0, -59, -22, -75, 27, -58, 14, -52, -104, 96, -100, 124, -46, 52, -48, -29, -29, -47, -116, 73, -124, -88, 37, 111, 37, -100, -42, 14, -16, 22, 122, 42, 14, -106, -106, -61, -102, 26, 4, -15, 30, 81, 69, -87, -57, -82, -78, 22, 100, -58, -85, -18, -16, 21, -95, -23, -48, -28, -38, -26, 84, -104, -4, -35, -17, 46, 104, 126, 54, -15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.705562910461);
    msg.setSource(45912U);
    msg.setSourceEntity(125U);
    msg.setDestination(29835U);
    msg.setDestinationEntity(35U);
    msg.origin.assign("RPPJFDLOXHJ");
    msg.htime = 0.80531776996;
    msg.lat = 0.932376456373;
    msg.lon = 0.639285808358;
    const char tmp_msg_0[] = {-31, -35, 61, -6, -89, 100, -102, 67, 47, 126, -93, -75, -86, -58, -60, -65, 70, 65, 36, -61, -58, -53, -107, -93, 44, -81, 70, 25, 57, -106, 9, -122, -9, 26, 1, -26, 7, 122, -47, 92, -65, 67, -46, 98, 86, 96, 0, -108, 40, -128, -44, -25, -67, 45, -124, -127, 94, -58, 81, -65, 87, 83, 27, -86, -77, -111, 74, 33, -4, -40, -54, -42, -31, -83, 99, 92, 101, -24, -43, -87, -86, -68, 108, -30, 5, -26, -62, 18, -111, -53, 26, 12, 111, 101, -39, 40, 102, -110, 103, 22, -71, -122, 89, -22, -102, -124, -104, -24, 71, 21, 75, 65, -103, -5, -5, 64, 89, -126, -5, -17, 42, 18, -38, 107, -66, 118, 32, -1, 124, -100, 94, -55, 4, 12, 31, 94, -4, -31, -41, -31, -108, -84, -128, 37, -6, 123, -61, -66, -27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.39939670999);
    msg.setSource(58078U);
    msg.setSourceEntity(12U);
    msg.setDestination(26187U);
    msg.setDestinationEntity(151U);
    msg.origin.assign("DVVHFOCXOMDMGTCXGAWATXYTXHFVPVZAXIHRDTVGNBHNNAPBZPLGUSFAWAZFGQCUHSERCDCBLIKNRCAFMDIMWPWZIWVLZDUOEJNYGFJYWBQUVKTSLMHIIPGLKUJKRRUBKROQQTOVSDNLYOABFAMCYQXKCZDKEKQLOQYZVJGRAHIOCEFMYFTGWQTLTNPELXBQJEJWIBSYPDPPOXW");
    msg.htime = 0.530995701623;
    msg.lat = 0.791840217868;
    msg.lon = 0.477912882235;
    const char tmp_msg_0[] = {-13, 28, -101, 50, 29, 88, -101, -65, 123, 39, 65, -85, -107, -1, -5, -17, -15, -76, -115, 79, 72, -30, 108, -6, 102, 43, -56, -10, 33, -80, 77, -102, -36, -29, -93, 105, -25, -114, -33, -81, -3, 43, 1, -109, -33, -34, -115, 121, -107, 1, 97, 120, 16, -60, 46, 81, -118, -66, 124, -86, 58, 43, 62, 117, -14, 98, -60, -88, 91, -6, -95, 36, 0, 82, -127, -82, -1, -110, -57, -73, 63, -76, 68, 115, 47, -116, -57, 112, -82, -120, -14, -121, 39, -38, -73, 43, 111, 45, -111, 124, -21, 70, -18, -59, 24, -84, 113, 10, -17, -119, -90, -48, 100, 102, -117, 95, 19, 104, -124, 32, 117, -128, -63, 62, -113, 35, 122, 57, 2, -81, -48, 52, 52, -110, -30, -68, 70, -25, 77, 0, 46, 33, -19, -79, 23, -115, 86, -121, -39, 67, 45, -117, 82, 125, -14, -52, 28, -69, -10, 88, 92, -52, 9, -102, 60, 0, -5, 49, 61, -67, 105, 53, 73, 1, 107, 22, 81, 59, -31, -39, -7, 33, -40, -40, 43, 38, 124, 100, -105, 33, -25, 105, 56, 51, -107, 94, -72, -82, -120, -107, 109, -39, 87, 37, -14, -20, 61, -82, -105, -9, 25, 88, 5, -42, 70, 99, 3, -69, -105, 117, 80, 28, -121, 7, -23, 3, -6, -103, 94, -117, 22, -103, 116, -88, 95, -9, -62, -39, 80, -23, 70};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.041678557987);
    msg.setSource(25409U);
    msg.setSourceEntity(203U);
    msg.setDestination(61189U);
    msg.setDestinationEntity(65U);
    msg.req_id = 2406U;
    msg.ttl = 34958U;
    msg.destination.assign("VDPPOTGGJKOJLWRFOSFDVLMNMVQYTD");
    const char tmp_msg_0[] = {-113, -25, 82, -49, 116, 55, 6, -74, -28, 79, -110, 91, 83, 69, -72, -24, 85, -21, -29, 9, -50, 102, -41, 31, -41, 18, 28, -121, -84, 23, 72, 119, -50, 18, 24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.24925357929);
    msg.setSource(36273U);
    msg.setSourceEntity(224U);
    msg.setDestination(33674U);
    msg.setDestinationEntity(67U);
    msg.req_id = 64342U;
    msg.ttl = 15322U;
    msg.destination.assign("GVMWLCJNLYXFHYBXXPIZJODNENHTSGHNPMBHPHLCCVFRTKNVEGMXMKYYFX");
    const char tmp_msg_0[] = {61, 94, -45, -24, 85, -99, -80, -101, -69, -28, -90, -15, 93, 66, 23, 41, -122, 41, -79, -99, 12, 121, 87, 110, 125, 11, 118, 93, 11, 112, 102, 52, -51, 124, -123, -55, -32, 27, 61, -113, -34, 29, 71, -59, -65, -55, 3, -91, 65, -78, -52, 61, -128, 43, 7, 94, -122, 11, -1, 61, 68, -62, -13, 70, 64, -120, 60, -6, 110, 24, 61, -122, 51, -107, 38, 92, 36, 44, -8, 114, 10, -37, -67, -61, -90, 21, -85, -53, 50, 23, -31, 34, -78, 111, 102, -94, -54, 71, -41, -50, -60, 32, 20, 62, -40, 101, -3, -17, -22, -121, 71, 83, -47, 27, -63, -69, -63, -25, -57, 1, 46, 17, -113, 27, 110, -1, 13, -3, 31, 98, 79, -48, -49, -40, 40, 107, 116, 33, 85, -79, -70, 33, -3, 20, 40, 98, 62, -124, 55, -4, 111, -108, 99, -126, -2, 53, 69, -84, -107, 126, -74, -100, 58, 1, 13, 81, 7, 5, 77, -33, -122, -85, 85, 22, -19, 104, -100, 51, 34, -59, -57, -112, 61, 54, -39, 123, 12, -8, -124, 120, -9, -71, 87, -64, -71, 85, -42, 21, 106, -20, -8, -24, 71};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.647031179652);
    msg.setSource(50754U);
    msg.setSourceEntity(85U);
    msg.setDestination(7062U);
    msg.setDestinationEntity(21U);
    msg.req_id = 40435U;
    msg.ttl = 53520U;
    msg.destination.assign("DXODKCVVBCFZUQKVMZUXTYDVRXWLAVGSTSGONDMYSUATEKDMYHPVNWPEWKFIJMCIGXECGQSLREGJLPZTXPLJRRVXOMCLIRUIQRUKSGPIJUBCHNLPCHFAS");
    const char tmp_msg_0[] = {16, -37, 69, 31, 11, 11, -91, 14, -117, -48, -36, 35, 111, 38, 63, 125, 126, 51, -126, 123, 67, -71, -45, -85, 72, 21, -94, -123, -67, -74, 32, 33, 97, 126, 124, -97, -24, -78, -100, 82, -1, -5, 0, 35, 87, 45, 101, 62, -83, 83, -69, 76, 105, -30, -93, 93, 75, -117, 6, 61, 54, -61, -4, 52, 49, -111, -7, -22, 118, -105, -110, -4, -124, 33, -26, 60, 5, 3, -93, 101, 1, -109, 94, -1, -82, -33, 105, 22, 38, -56, 120, -76, 25, -39, -14, 124, -87, -92, 7, 43, 47, 108, 117, 115, -71, 94, 7, -31, 35, 60, -25, 84, 61, -74, 23, -7, -72, 22, 5, -44, 36, -122, -27, -89, -32, 104, -74, -105, -47, -128, 120, -120, 13, 66, -61, 36, 2, 42, -17, -89, -1, 54, 36, 112, 125, 41, 91, -49, 42, 35, -62, 37, 39, -60, 14, 53, 90, -28, -37, -28, 91, -103, 22, -57, 102, 46, 33, 55, 57, -14, -44, -127, 53, -43, 57, -87, 34, -37, -74, -10, -15, 0, 77, 67, -45, 126, -21, -65, -115, -111, 116, 36, 22, 23, 76, 23, -93, -7, 85, -107, 123, -42, -6, 93, -16, -126, -40, -11, 79, 27, 4, 84, 18, -108, 7, 64, -39, 80, 100, -20, 29, 37, 55, -11, 125, 71, -1, 78, 62, -13, 107, 4, -53, -89, -30, -94, -66, 8, 98, 68, 98, 51, 72, 89, -38};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.920520667951);
    msg.setSource(6353U);
    msg.setSourceEntity(152U);
    msg.setDestination(6757U);
    msg.setDestinationEntity(230U);
    msg.req_id = 60680U;
    msg.status = 23U;
    msg.text.assign("QSOADZGJVBDDCSNBFYVYWLYJFZKBHYP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.622508334191);
    msg.setSource(31649U);
    msg.setSourceEntity(254U);
    msg.setDestination(51982U);
    msg.setDestinationEntity(80U);
    msg.req_id = 31679U;
    msg.status = 234U;
    msg.text.assign("UQBNTAGDFABUZYJKOLUCTHHSBCJVLHDOZLFBKPZUJMGQKLDKVFLEIIUAKCCBHVIDZXIDVXVAGVIBOMOIXLVFEPYWTEMSMRYPTGZVTWSHEWEWTJZRWFCBDUAWXPURMSNDPXSFYPYQJHQNKSDZXNNSKEFNBURPNVOETAIXRZODAPMARKBBCTMKWWOGISXQJYPMHQYNUCNLSIDMGECQCLTHFAACXQRNZQPGOJYXYHGGIFUTWJJQKFYMLLR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.449049864078);
    msg.setSource(62451U);
    msg.setSourceEntity(254U);
    msg.setDestination(28552U);
    msg.setDestinationEntity(161U);
    msg.req_id = 11576U;
    msg.status = 220U;
    msg.text.assign("OZSAIZDMBUMEWIFBENWHXKAZSCXJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.144894870406);
    msg.setSource(61916U);
    msg.setSourceEntity(16U);
    msg.setDestination(11446U);
    msg.setDestinationEntity(105U);
    msg.group_name.assign("HQMWSVFYQYHFWXZLBMHUQEPNAJCNHIXZRODIYZMASGQTBD");
    msg.links = 307717941U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.19565766451);
    msg.setSource(11746U);
    msg.setSourceEntity(87U);
    msg.setDestination(64236U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("GISGYUPTOVNCTKQQZHQJSUBIWNUZSPKJOFTKAYDUAKFPHXHMOLZIZMQGEQHYXMNUPKG");
    msg.links = 1599905661U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.482365516106);
    msg.setSource(58081U);
    msg.setSourceEntity(55U);
    msg.setDestination(22074U);
    msg.setDestinationEntity(89U);
    msg.group_name.assign("XRZPMDKNBVPPAOTXAOJRFVVKAXSPPSHWHNRLCTSMKBMSUIPOTGUCXEJIPHNJHDIVHRLUOYRNEDZTSWJKACKKLUVNVMJQFFHGDMKIZZHADIFDQGFBFUYDDNKQLWMRESVRTBENTAOCGJGSLYAHQFLBZYYC");
    msg.links = 2900184817U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.410123744681);
    msg.setSource(37405U);
    msg.setSourceEntity(39U);
    msg.setDestination(28363U);
    msg.setDestinationEntity(162U);
    msg.groupname.assign("ZOETQTQKLVCSUWQMOPVTBSOTXGFWEAYGRVFBDZKHLIKQZXVRGESRPNPBNGHFACHLAMXCOAQRGNVUJMWFIEMQMHXQKQRNJJHIJDKOOZDADIFXEORDUJFWST");
    msg.action = 207U;
    msg.grouplist.assign("BUUMDEWKWVZESYCQWUNUKPNTLCLGIBIRNQMAAWNGOEHOVTVVAXETRNCWBKHJEABZVHDYWQHMLMYQSDOYBSUKKFZUSMTLGQCUKTKOMSWXMPJIFXZHCZOTZFUJEYRQIKJLDMFHRAVGTHASYJDGVWOXXNALRRGPPIKJRDXSNZQACQOHDNMBDPEXQUCJXLVXNZOOLGQADVMIJCYRRBESFRLLCPOSU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.621480206075);
    msg.setSource(38907U);
    msg.setSourceEntity(27U);
    msg.setDestination(31975U);
    msg.setDestinationEntity(19U);
    msg.groupname.assign("ASIDMZRKGTQBAZTLUKLRHHYDSDSRWNQHEJQMGYBOJDLMCSPAWRPYSGZBWYNGCAKFZBWVWDOXKPTJQXGDOEUODFDEBNFSCLYQVFRAUGWMGPNAFZSXAFOIXWCZVGIMEVCFLNBCHVLBPHIQUTQTJEBEXDJOVJXCMYQLQPKMNEPOIPYMBFUJHUUAXAIODHTKTHGEFEAQBLYHZWEMSUFLUJSGI");
    msg.action = 201U;
    msg.grouplist.assign("OTJZUBOAZRLZARTQZRKYVOMDDNEXTJRQUTKHSSHXEXCIGEPGAPAELINHKWUSRRLWVOGNHRCBVHVLENVCNNVOWTNMTGKRQIDQMJJCGCOOHWRZYEZWNG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.543056245113);
    msg.setSource(15337U);
    msg.setSourceEntity(128U);
    msg.setDestination(29472U);
    msg.setDestinationEntity(13U);
    msg.groupname.assign("YKWDZPTDBIIAQJIVKKCJZMISNHOO");
    msg.action = 215U;
    msg.grouplist.assign("LATCFOBYMHVJMAMRTCKOFQBGSKXQNNHZXTFQSSLAMUIDQINRMJWOUPXCDDPDRYCCIGVZUXQBWGGJLYVTEOKQZPDGQUASCFTYXVHBRVHKHWBFMWQEPLPRGPXOSKTHKD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.673477864247);
    msg.setSource(64756U);
    msg.setSourceEntity(227U);
    msg.setDestination(62499U);
    msg.setDestinationEntity(132U);
    msg.id = 92U;
    msg.range = 0.511207459351;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.821010196604);
    msg.setSource(7351U);
    msg.setSourceEntity(55U);
    msg.setDestination(16266U);
    msg.setDestinationEntity(241U);
    msg.id = 37U;
    msg.range = 0.856894465268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.200708163624);
    msg.setSource(9217U);
    msg.setSourceEntity(201U);
    msg.setDestination(4598U);
    msg.setDestinationEntity(248U);
    msg.id = 177U;
    msg.range = 0.328172044731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.914650894637);
    msg.setSource(13389U);
    msg.setSourceEntity(71U);
    msg.setDestination(64886U);
    msg.setDestinationEntity(176U);
    msg.beacon.assign("FGAWZSSXUWZOGTQRMPAAPTSDJQLJVTVIF");
    msg.lat = 0.213426260282;
    msg.lon = 0.751752803745;
    msg.depth = 0.981572198119;
    msg.query_channel = 15U;
    msg.reply_channel = 13U;
    msg.transponder_delay = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.259062158119);
    msg.setSource(47091U);
    msg.setSourceEntity(72U);
    msg.setDestination(1266U);
    msg.setDestinationEntity(117U);
    msg.beacon.assign("RYIQDKVXYGHHFWJQEUJTLJGCQFMZQPLKVNMUGHEXMZUAPJERCZAFOIHBUOAWRXLLICEMKLZGFKTLDISOUWEZZWNMOCOWKCHSKXZFWXIVGLQTXRVDYUESLHNGHPTOJVBYCCADHCXAIEAXQWQNPPNPPESOJDLIRTQBGUMMYMDTUODSYHFMXAJABYKNPVZKIBUKFVUNFYJPWABS");
    msg.lat = 0.554732872208;
    msg.lon = 0.428399348932;
    msg.depth = 0.686738661469;
    msg.query_channel = 81U;
    msg.reply_channel = 214U;
    msg.transponder_delay = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.877777280828);
    msg.setSource(53217U);
    msg.setSourceEntity(93U);
    msg.setDestination(38175U);
    msg.setDestinationEntity(32U);
    msg.beacon.assign("BKDYRAUKYCKDOCAIGMUKFCVGPMLVBUHFCFKMNIGTAZDTPHZTXMLTAPSNQYXWUAQQRXWGNTKKZJLWTOYNPODLMHPQGZBATFDYKLADQXSLWRWIQIOVIJRUOCERTQVKGBSRJXJGS");
    msg.lat = 0.996163343368;
    msg.lon = 0.441310543147;
    msg.depth = 0.668332087216;
    msg.query_channel = 169U;
    msg.reply_channel = 119U;
    msg.transponder_delay = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.885981926644);
    msg.setSource(11136U);
    msg.setSourceEntity(147U);
    msg.setDestination(26215U);
    msg.setDestinationEntity(199U);
    msg.op = 9U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LECJZXMIMLPBHYQA");
    tmp_msg_0.lat = 0.161968290513;
    tmp_msg_0.lon = 0.291408481667;
    tmp_msg_0.depth = 0.749433175481;
    tmp_msg_0.query_channel = 177U;
    tmp_msg_0.reply_channel = 188U;
    tmp_msg_0.transponder_delay = 216U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.810858690954);
    msg.setSource(14038U);
    msg.setSourceEntity(196U);
    msg.setDestination(47725U);
    msg.setDestinationEntity(21U);
    msg.op = 165U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CIHGTFMTLWRPNVYOOUKNDBUCRVERBDTEHGVWQLXFHDSDYKYHYIBTAMLBEPSZAKUOFXJJFGDIPAWHYFSHRERXCSLPGQENXJGWQZUARMUSFWIAOKQQCUDKTOVAAQGJYTVHHDXOQLMKSTZZFLRRNOBEAOPETQJDCNYENRPJNYTSLYHVKSDZMUIZUXZOCZJIELWCBYSVMXRQKLVBIVBVAGNJNKXOFSFBDCXZJJNHGMPXWUAQLIMGIWCPEBPMIM");
    tmp_msg_0.lat = 0.320906337583;
    tmp_msg_0.lon = 0.634094313852;
    tmp_msg_0.depth = 0.247838790359;
    tmp_msg_0.query_channel = 10U;
    tmp_msg_0.reply_channel = 93U;
    tmp_msg_0.transponder_delay = 252U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.518236421828);
    msg.setSource(37933U);
    msg.setSourceEntity(201U);
    msg.setDestination(4839U);
    msg.setDestinationEntity(181U);
    msg.op = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.766713600476);
    msg.setSource(23273U);
    msg.setSourceEntity(57U);
    msg.setDestination(41454U);
    msg.setDestinationEntity(140U);
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 63578U;
    tmp_msg_0.control_ent = 252U;
    tmp_msg_0.timeout = 0.960669445562;
    tmp_msg_0.loiter_radius = 0.160904468596;
    tmp_msg_0.altitude_interval = 0.216969219947;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.840032980999);
    msg.setSource(61111U);
    msg.setSourceEntity(238U);
    msg.setDestination(23776U);
    msg.setDestinationEntity(175U);
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PHNSIVMQPIZRTFJUBINAMFFSFJHJVTLBBLRIADHAEUXSPQGCQRAVUXMMVOAXMUNDBUKRDHKRRLGLZIJVDAYQLCDYAMUXOVYTPTKZTQNWDEHWZHPMVWXUBJNDATSHFEGQTVXNQYBOVNXKVUBSEXWIWNFFWYAPZPMROJIKYKZWHSYLT");
    tmp_msg_0.predicate.assign("VFUGNGJFTMHTAACRXEWHRSHRSLMPKZIBBTPUKBOZKMRTOIIPTWZIERLRSYQGPOXXXKJTGFMHMIMLOPFWBMCGOSWEIRFCWJZAJNWBIESHMAAQSTZUDVRPRLONCQZSMOZBAPYUNYBXNLUYNDQWMVEKDOIGCJFZGDRCWPELVQQTYXVHVHBSCJLFJGBXENKUSVKQTZEYFFCJPDUJVLDJYDYOUHXXKVQDLIGNBONSEKWYCAFHUALUTWDYQNKQXDHEPV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZNHEVXSDRSDERRCKMVUQCDYCENCXLLRXVXSJPCGKFZYBKOOAFLLDBTJKYCDJFDWXKHOBRZIAZVWVHIUBXY");
    tmp_tmp_msg_0_0.attr_type = 52U;
    tmp_tmp_msg_0_0.min.assign("ZAKBSNVMWTUFHQLRSRPPINIZJSAIKAJPARIZCYVYEKCZSFIRGNCYPODLKDJMASQGDEAKDBWYMGWXHKPJYBJHHIQMUUJMLLCFGQGEBWOWVPZXHSOKBMYFRCYHNGWUXGTUNVLYGODBCHFCFKVMVRJG");
    tmp_tmp_msg_0_0.max.assign("BUQKLFUMJKEWMTIPHDFKPXRWXBKEUZUFAGRTLSCCPMSHQYNSLVEHFIDRDLGAGPAQJCVYBZRBRNXEZDJZDWAGZQLYRFHIVAMKSGUMIIZEPNNZQKZOOQQMOCUVLYDSDGKAWBL");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.58594701575);
    msg.setSource(35189U);
    msg.setSourceEntity(196U);
    msg.setDestination(32656U);
    msg.setDestinationEntity(28U);
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.921049507178;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.419637489586);
    msg.setSource(60017U);
    msg.setSourceEntity(78U);
    msg.setDestination(51535U);
    msg.setDestinationEntity(178U);
    msg.op = 37U;
    msg.system.assign("VJLMMPVGGPCYDFEGUCOJIGYHHMBABBWNUHPZPPQPOCHXKWJQFILRDJCNQNSOKWPZGSWVTFSNHBURUXGWHPFMCXWYMKBIVRKQXQABEETNASDVXLZSXARNYSFQFZOCEVUOIXCJHBLWCYKJMKCDIXTRFAIZQCLYTATHLGDWZBSVMLEUKQZRYDEOIOGNIQTLV");
    msg.range = 0.517174611598;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 48U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.293817253794;
    tmp_tmp_msg_0_0.speed_units = 116U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.73368497423;
    tmp_tmp_msg_0_1.z_units = 34U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.416209489377;
    tmp_msg_0.lon = 0.230154907663;
    tmp_msg_0.radius = 0.656668337117;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.66311411059);
    msg.setSource(22937U);
    msg.setSourceEntity(229U);
    msg.setDestination(38644U);
    msg.setDestinationEntity(209U);
    msg.op = 222U;
    msg.system.assign("VZRCDXMFOWLWRMWZFGIFJLQBEIUNAAQBCOVAELQK");
    msg.range = 0.0530840903913;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 36U;
    tmp_msg_0.mnames.assign("ZIOXYOYWZCWYOBVIFOABHGHKJFXRUBGRBSMGLSBDZKEBUTWYBLQPCHHZKMG");
    tmp_msg_0.ecount = 103U;
    tmp_msg_0.enames.assign("XPIVRFJJDJNPQNKBXSUZFZNBXZLTMRHOSAXKLKDFAZAPOOYOPTIEOTIPDWGYUBHMVLGIEMCKHSJDEJTZTRIXMICHVAFZDWSUKNQCWRCDO");
    tmp_msg_0.ccount = 149U;
    tmp_msg_0.cnames.assign("ZKWBXXCYKKULTFXTEQMOWOAIARUAQYPQKOUSNLYMSJVZEITGJEOZFJOFTPUENXMXIRJFEDSFZIULXJWQUSKXOTHPBTKVURGYZJBDZDHIMQYMPMSKIHVPSKJWDMNPYBVDIVDMALTMSJXOIWHCPLSWVKFATZLGJAWRCGV");
    tmp_msg_0.last_error.assign("ECLJCBGYDUUJRBLIGZDOULNENJQOEXKFHMXRSBAUFBESCADXRDMTZTWKTQUXPSKTFCAYMYHBHLYUXMZOPOMDSONIPLVYJNQJMKJFBLDZABQXRTPWHGCNGMHAZVOWIIQGACNWDVRLDTCSEWARQDOWSPVKCNGHSXTFZPIRRCQFMPFPTIYOXFVIZJTTOZYNZSZJLNKAIKFXSGH");
    tmp_msg_0.last_error_time = 0.518180447602;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.681094790462);
    msg.setSource(14418U);
    msg.setSourceEntity(175U);
    msg.setDestination(38474U);
    msg.setDestinationEntity(129U);
    msg.op = 2U;
    msg.system.assign("APNMKLLFRJYWGDOFIBUDONIX");
    msg.range = 0.147357580227;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 211U;
    tmp_msg_0.range = 0.951118510687;
    tmp_msg_0.acceptance = 236U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.47286134018);
    msg.setSource(50628U);
    msg.setSourceEntity(30U);
    msg.setDestination(36041U);
    msg.setDestinationEntity(213U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.937770037907);
    msg.setSource(8546U);
    msg.setSourceEntity(86U);
    msg.setDestination(1557U);
    msg.setDestinationEntity(55U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.0819732638356);
    msg.setSource(6515U);
    msg.setSourceEntity(42U);
    msg.setDestination(52390U);
    msg.setDestinationEntity(32U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.205744733311);
    msg.setSource(62093U);
    msg.setSourceEntity(18U);
    msg.setDestination(55929U);
    msg.setDestinationEntity(85U);
    msg.list.assign("QVJWRQBAKOITUVMDZWFAILPYPVJMRWKRDFWZIPQNXGEQSRSDFSQTSDHVBEUOINXAJMNIJTRHVUMIWAFPPCWHHGZNOQOAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.555368692824);
    msg.setSource(14455U);
    msg.setSourceEntity(201U);
    msg.setDestination(2307U);
    msg.setDestinationEntity(144U);
    msg.list.assign("QARGIKUWCVLXAFDDDRFDHUAJJPAQFYZTXPOFZVYTJECRWYGMCGNNSPPEBLWRTYGDBNLLZESRIOTDJPNWJSRYADUXFSVZUOGMRIJLLYODHRUGUOGGKWTCHASFSQCHOLMFNNKNVQLOHIFAMHDMYWCQKIGTETEFKTMBEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.689420837157);
    msg.setSource(1111U);
    msg.setSourceEntity(36U);
    msg.setDestination(46718U);
    msg.setDestinationEntity(38U);
    msg.list.assign("SIHHWYFODTZPZJBOAAXVIFJFOGSWEEDGZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.189820657223);
    msg.setSource(27250U);
    msg.setSourceEntity(11U);
    msg.setDestination(33707U);
    msg.setDestinationEntity(42U);
    msg.value = 2559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.578024534493);
    msg.setSource(20652U);
    msg.setSourceEntity(82U);
    msg.setDestination(56489U);
    msg.setDestinationEntity(148U);
    msg.value = 25778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.6667450514);
    msg.setSource(58103U);
    msg.setSourceEntity(130U);
    msg.setDestination(41118U);
    msg.setDestinationEntity(245U);
    msg.value = 15343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.986891335452);
    msg.setSource(62704U);
    msg.setSourceEntity(15U);
    msg.setDestination(12394U);
    msg.setDestinationEntity(224U);
    msg.value = 0.233959007867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.812307715676);
    msg.setSource(60542U);
    msg.setSourceEntity(149U);
    msg.setDestination(53599U);
    msg.setDestinationEntity(190U);
    msg.value = 0.465375146414;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.362663223264);
    msg.setSource(5196U);
    msg.setSourceEntity(84U);
    msg.setDestination(11234U);
    msg.setDestinationEntity(28U);
    msg.value = 0.62541906454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.779376638641);
    msg.setSource(13249U);
    msg.setSourceEntity(230U);
    msg.setDestination(43060U);
    msg.setDestinationEntity(154U);
    msg.value = 0.779857306409;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.799205847685);
    msg.setSource(51759U);
    msg.setSourceEntity(38U);
    msg.setDestination(55405U);
    msg.setDestinationEntity(209U);
    msg.value = 0.564463805215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.171160039024);
    msg.setSource(4236U);
    msg.setSourceEntity(55U);
    msg.setDestination(14435U);
    msg.setDestinationEntity(203U);
    msg.value = 0.556329772391;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.0320912569221);
    msg.setSource(52590U);
    msg.setSourceEntity(194U);
    msg.setDestination(41214U);
    msg.setDestinationEntity(253U);
    msg.validity = 4190U;
    msg.type = 22U;
    msg.utc_year = 47410U;
    msg.utc_month = 136U;
    msg.utc_day = 219U;
    msg.utc_time = 0.868511116845;
    msg.lat = 0.814181464477;
    msg.lon = 0.139724167725;
    msg.height = 0.746042944478;
    msg.satellites = 240U;
    msg.cog = 0.764216819429;
    msg.sog = 0.272637964704;
    msg.hdop = 0.372887018111;
    msg.vdop = 0.448251253291;
    msg.hacc = 0.718468292657;
    msg.vacc = 0.732788625196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.0308005685934);
    msg.setSource(3683U);
    msg.setSourceEntity(179U);
    msg.setDestination(42088U);
    msg.setDestinationEntity(253U);
    msg.validity = 40698U;
    msg.type = 122U;
    msg.utc_year = 15123U;
    msg.utc_month = 176U;
    msg.utc_day = 37U;
    msg.utc_time = 0.417066576021;
    msg.lat = 0.546624730064;
    msg.lon = 0.320024638028;
    msg.height = 0.0928441613593;
    msg.satellites = 23U;
    msg.cog = 0.265295894967;
    msg.sog = 0.74541086114;
    msg.hdop = 0.720256469918;
    msg.vdop = 0.383424037443;
    msg.hacc = 0.412806182898;
    msg.vacc = 0.514624058138;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.789076387544);
    msg.setSource(39415U);
    msg.setSourceEntity(191U);
    msg.setDestination(43088U);
    msg.setDestinationEntity(242U);
    msg.validity = 25495U;
    msg.type = 91U;
    msg.utc_year = 15549U;
    msg.utc_month = 98U;
    msg.utc_day = 138U;
    msg.utc_time = 0.227270616061;
    msg.lat = 0.0438485532994;
    msg.lon = 0.419976491787;
    msg.height = 0.207880506132;
    msg.satellites = 228U;
    msg.cog = 0.281888945526;
    msg.sog = 0.191437455561;
    msg.hdop = 0.854576529298;
    msg.vdop = 0.796764622457;
    msg.hacc = 0.448851158563;
    msg.vacc = 0.959326904109;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.626915579436);
    msg.setSource(8464U);
    msg.setSourceEntity(180U);
    msg.setDestination(53262U);
    msg.setDestinationEntity(193U);
    msg.time = 0.879619052018;
    msg.phi = 0.289226660653;
    msg.theta = 0.855312820466;
    msg.psi = 0.255353621205;
    msg.psi_magnetic = 0.872412595377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.0162513249017);
    msg.setSource(10416U);
    msg.setSourceEntity(195U);
    msg.setDestination(20460U);
    msg.setDestinationEntity(68U);
    msg.time = 0.56585888018;
    msg.phi = 0.188081171085;
    msg.theta = 0.515717619146;
    msg.psi = 0.979734366951;
    msg.psi_magnetic = 0.200325953137;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.95364212614);
    msg.setSource(27923U);
    msg.setSourceEntity(138U);
    msg.setDestination(23377U);
    msg.setDestinationEntity(31U);
    msg.time = 0.512609451383;
    msg.phi = 0.918323665288;
    msg.theta = 0.91689645852;
    msg.psi = 0.604693091558;
    msg.psi_magnetic = 0.917647519719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.596593319282);
    msg.setSource(23607U);
    msg.setSourceEntity(231U);
    msg.setDestination(37775U);
    msg.setDestinationEntity(33U);
    msg.time = 0.56441314878;
    msg.x = 0.532201910138;
    msg.y = 0.0965648834819;
    msg.z = 0.257963887927;
    msg.timestep = 0.382239296705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.99837483443);
    msg.setSource(28138U);
    msg.setSourceEntity(116U);
    msg.setDestination(6710U);
    msg.setDestinationEntity(137U);
    msg.time = 0.554561216983;
    msg.x = 0.583392235203;
    msg.y = 0.93112522259;
    msg.z = 0.0392636560196;
    msg.timestep = 0.800107321252;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.0498502614516);
    msg.setSource(7300U);
    msg.setSourceEntity(235U);
    msg.setDestination(55751U);
    msg.setDestinationEntity(57U);
    msg.time = 0.0353571281584;
    msg.x = 0.252266334407;
    msg.y = 0.97928402648;
    msg.z = 0.0400123183624;
    msg.timestep = 0.158517503798;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.185040950551);
    msg.setSource(5526U);
    msg.setSourceEntity(73U);
    msg.setDestination(5839U);
    msg.setDestinationEntity(148U);
    msg.time = 0.397831747176;
    msg.x = 0.131727113149;
    msg.y = 0.692111804501;
    msg.z = 0.779628612626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.194779451578);
    msg.setSource(55248U);
    msg.setSourceEntity(27U);
    msg.setDestination(36197U);
    msg.setDestinationEntity(251U);
    msg.time = 0.607556271864;
    msg.x = 0.651585468091;
    msg.y = 0.653042836048;
    msg.z = 0.889032952527;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.602322865403);
    msg.setSource(55241U);
    msg.setSourceEntity(227U);
    msg.setDestination(14547U);
    msg.setDestinationEntity(16U);
    msg.time = 0.983962145718;
    msg.x = 0.776084399809;
    msg.y = 0.781407359145;
    msg.z = 0.572753248392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.327579656802);
    msg.setSource(15327U);
    msg.setSourceEntity(205U);
    msg.setDestination(45584U);
    msg.setDestinationEntity(134U);
    msg.time = 0.0373478737018;
    msg.x = 0.908612400426;
    msg.y = 0.150822706963;
    msg.z = 0.976992542232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.958965222008);
    msg.setSource(25145U);
    msg.setSourceEntity(235U);
    msg.setDestination(30972U);
    msg.setDestinationEntity(176U);
    msg.time = 0.298687421664;
    msg.x = 0.92529092401;
    msg.y = 0.282953743638;
    msg.z = 0.50940953841;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.224203102714);
    msg.setSource(65287U);
    msg.setSourceEntity(201U);
    msg.setDestination(43570U);
    msg.setDestinationEntity(183U);
    msg.time = 0.115469645215;
    msg.x = 0.862373962367;
    msg.y = 0.83196142147;
    msg.z = 0.587339658652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.601070081395);
    msg.setSource(10755U);
    msg.setSourceEntity(156U);
    msg.setDestination(19980U);
    msg.setDestinationEntity(21U);
    msg.time = 0.523293221284;
    msg.x = 0.661202060226;
    msg.y = 0.956519554761;
    msg.z = 0.93469792927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.765906608305);
    msg.setSource(5807U);
    msg.setSourceEntity(202U);
    msg.setDestination(9316U);
    msg.setDestinationEntity(104U);
    msg.time = 0.0131442003495;
    msg.x = 0.120859456212;
    msg.y = 0.258325669214;
    msg.z = 0.264599145707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.815403877871);
    msg.setSource(30244U);
    msg.setSourceEntity(181U);
    msg.setDestination(64038U);
    msg.setDestinationEntity(17U);
    msg.time = 0.523476691881;
    msg.x = 0.169977756203;
    msg.y = 0.475996279507;
    msg.z = 0.27439665993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.00889822392138);
    msg.setSource(13396U);
    msg.setSourceEntity(240U);
    msg.setDestination(42383U);
    msg.setDestinationEntity(218U);
    msg.validity = 129U;
    msg.x = 0.22203482126;
    msg.y = 0.479227144017;
    msg.z = 0.0129959371881;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.274117860234);
    msg.setSource(14462U);
    msg.setSourceEntity(106U);
    msg.setDestination(32973U);
    msg.setDestinationEntity(252U);
    msg.validity = 125U;
    msg.x = 0.0112992431355;
    msg.y = 0.337615754048;
    msg.z = 0.325331777325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.367585128415);
    msg.setSource(36852U);
    msg.setSourceEntity(45U);
    msg.setDestination(15863U);
    msg.setDestinationEntity(164U);
    msg.validity = 42U;
    msg.x = 0.12676972376;
    msg.y = 0.832204929847;
    msg.z = 0.332355243253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.254841279932);
    msg.setSource(42773U);
    msg.setSourceEntity(142U);
    msg.setDestination(36318U);
    msg.setDestinationEntity(206U);
    msg.validity = 239U;
    msg.x = 0.27983707587;
    msg.y = 0.343899961681;
    msg.z = 0.16597023302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.417927881008);
    msg.setSource(39575U);
    msg.setSourceEntity(46U);
    msg.setDestination(65451U);
    msg.setDestinationEntity(128U);
    msg.validity = 105U;
    msg.x = 0.287745413265;
    msg.y = 0.0721425717048;
    msg.z = 0.426592599336;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.706868623122);
    msg.setSource(21601U);
    msg.setSourceEntity(101U);
    msg.setDestination(43524U);
    msg.setDestinationEntity(178U);
    msg.validity = 207U;
    msg.x = 0.964561253818;
    msg.y = 0.0113019707117;
    msg.z = 0.618663073707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.868720272883);
    msg.setSource(45667U);
    msg.setSourceEntity(32U);
    msg.setDestination(42969U);
    msg.setDestinationEntity(104U);
    msg.time = 0.658286854328;
    msg.x = 0.246857246384;
    msg.y = 0.590281731008;
    msg.z = 0.466330445174;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.903667964912);
    msg.setSource(18254U);
    msg.setSourceEntity(34U);
    msg.setDestination(54723U);
    msg.setDestinationEntity(15U);
    msg.time = 0.50837801571;
    msg.x = 0.840355589637;
    msg.y = 0.167066558645;
    msg.z = 0.130225588861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.251581458448);
    msg.setSource(62439U);
    msg.setSourceEntity(87U);
    msg.setDestination(44190U);
    msg.setDestinationEntity(47U);
    msg.time = 0.724154227427;
    msg.x = 0.0565840736283;
    msg.y = 0.750432194291;
    msg.z = 0.594399689602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.249162429168);
    msg.setSource(11144U);
    msg.setSourceEntity(230U);
    msg.setDestination(64954U);
    msg.setDestinationEntity(213U);
    msg.validity = 130U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.442547609516;
    tmp_msg_0.beam_height = 0.458033534519;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.711669019635;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.0540357386091);
    msg.setSource(51410U);
    msg.setSourceEntity(184U);
    msg.setDestination(46549U);
    msg.setDestinationEntity(221U);
    msg.validity = 228U;
    msg.value = 0.568035849001;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.819451462523);
    msg.setSource(50664U);
    msg.setSourceEntity(223U);
    msg.setDestination(51064U);
    msg.setDestinationEntity(210U);
    msg.validity = 56U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.922368415746;
    tmp_msg_0.y = 0.24776409226;
    tmp_msg_0.z = 0.119029704959;
    tmp_msg_0.phi = 0.370696242612;
    tmp_msg_0.theta = 0.489060576124;
    tmp_msg_0.psi = 0.0491013400171;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.773111100957;
    tmp_msg_1.beam_height = 0.925776962795;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.518657101054;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.347894652739);
    msg.setSource(15172U);
    msg.setSourceEntity(118U);
    msg.setDestination(64218U);
    msg.setDestinationEntity(105U);
    msg.value = 0.403692055129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.912657785624);
    msg.setSource(51506U);
    msg.setSourceEntity(92U);
    msg.setDestination(20555U);
    msg.setDestinationEntity(158U);
    msg.value = 0.00545263396837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.446349552933);
    msg.setSource(44546U);
    msg.setSourceEntity(232U);
    msg.setDestination(24249U);
    msg.setDestinationEntity(198U);
    msg.value = 0.182854262973;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.423297928396);
    msg.setSource(43638U);
    msg.setSourceEntity(168U);
    msg.setDestination(36537U);
    msg.setDestinationEntity(6U);
    msg.value = 0.747716490739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.972027341343);
    msg.setSource(56767U);
    msg.setSourceEntity(95U);
    msg.setDestination(4734U);
    msg.setDestinationEntity(44U);
    msg.value = 0.612131548466;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.0780519290546);
    msg.setSource(11367U);
    msg.setSourceEntity(82U);
    msg.setDestination(31374U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0492151579202;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.721722048372);
    msg.setSource(2902U);
    msg.setSourceEntity(112U);
    msg.setDestination(1333U);
    msg.setDestinationEntity(226U);
    msg.value = 0.572786554433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.0649990651191);
    msg.setSource(58268U);
    msg.setSourceEntity(37U);
    msg.setDestination(4442U);
    msg.setDestinationEntity(34U);
    msg.value = 0.860784400625;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.403417412491);
    msg.setSource(15134U);
    msg.setSourceEntity(81U);
    msg.setDestination(5449U);
    msg.setDestinationEntity(226U);
    msg.value = 0.309276811336;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.200402959684);
    msg.setSource(16542U);
    msg.setSourceEntity(51U);
    msg.setDestination(47316U);
    msg.setDestinationEntity(16U);
    msg.value = 0.446811987718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.136070593252);
    msg.setSource(32853U);
    msg.setSourceEntity(81U);
    msg.setDestination(4557U);
    msg.setDestinationEntity(5U);
    msg.value = 0.500306363346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.351108269914);
    msg.setSource(47430U);
    msg.setSourceEntity(105U);
    msg.setDestination(27183U);
    msg.setDestinationEntity(182U);
    msg.value = 0.656410717172;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.206087422947);
    msg.setSource(29829U);
    msg.setSourceEntity(157U);
    msg.setDestination(39551U);
    msg.setDestinationEntity(46U);
    msg.value = 0.601294113658;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.501458810961);
    msg.setSource(3028U);
    msg.setSourceEntity(153U);
    msg.setDestination(49926U);
    msg.setDestinationEntity(22U);
    msg.value = 0.591742159576;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.47523276073);
    msg.setSource(16151U);
    msg.setSourceEntity(226U);
    msg.setDestination(17792U);
    msg.setDestinationEntity(226U);
    msg.value = 0.774539434834;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.839229262446);
    msg.setSource(38703U);
    msg.setSourceEntity(128U);
    msg.setDestination(28239U);
    msg.setDestinationEntity(43U);
    msg.value = 0.914471803086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.578017889971);
    msg.setSource(61981U);
    msg.setSourceEntity(122U);
    msg.setDestination(19871U);
    msg.setDestinationEntity(32U);
    msg.value = 0.829938905623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.747345321751);
    msg.setSource(41784U);
    msg.setSourceEntity(26U);
    msg.setDestination(18485U);
    msg.setDestinationEntity(184U);
    msg.value = 0.661397311895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.69096895979);
    msg.setSource(30166U);
    msg.setSourceEntity(79U);
    msg.setDestination(12974U);
    msg.setDestinationEntity(38U);
    msg.value = 0.845167583495;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.293314322943);
    msg.setSource(6477U);
    msg.setSourceEntity(62U);
    msg.setDestination(5952U);
    msg.setDestinationEntity(64U);
    msg.value = 0.322536721956;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.306250650984);
    msg.setSource(55125U);
    msg.setSourceEntity(161U);
    msg.setDestination(19903U);
    msg.setDestinationEntity(131U);
    msg.value = 0.912131139404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.803226485766);
    msg.setSource(20956U);
    msg.setSourceEntity(196U);
    msg.setDestination(913U);
    msg.setDestinationEntity(186U);
    msg.value = 0.498321538363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.587585737015);
    msg.setSource(65378U);
    msg.setSourceEntity(34U);
    msg.setDestination(25516U);
    msg.setDestinationEntity(8U);
    msg.value = 0.43416299548;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.425953371196);
    msg.setSource(23853U);
    msg.setSourceEntity(211U);
    msg.setDestination(51747U);
    msg.setDestinationEntity(33U);
    msg.value = 0.818864369629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.20061610932);
    msg.setSource(61487U);
    msg.setSourceEntity(172U);
    msg.setDestination(23080U);
    msg.setDestinationEntity(34U);
    msg.direction = 0.167355392398;
    msg.speed = 0.819803430554;
    msg.turbulence = 0.400372904499;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.569022657339);
    msg.setSource(54511U);
    msg.setSourceEntity(207U);
    msg.setDestination(23630U);
    msg.setDestinationEntity(116U);
    msg.direction = 0.648748791974;
    msg.speed = 0.62109627532;
    msg.turbulence = 0.117127757729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.193974696393);
    msg.setSource(10498U);
    msg.setSourceEntity(53U);
    msg.setDestination(23958U);
    msg.setDestinationEntity(14U);
    msg.direction = 0.392173870903;
    msg.speed = 0.761553546439;
    msg.turbulence = 0.98661434555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.277248374333);
    msg.setSource(49099U);
    msg.setSourceEntity(78U);
    msg.setDestination(10699U);
    msg.setDestinationEntity(201U);
    msg.value = 0.415337222748;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.404375317344);
    msg.setSource(29798U);
    msg.setSourceEntity(97U);
    msg.setDestination(17348U);
    msg.setDestinationEntity(226U);
    msg.value = 0.741475892525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.182751252921);
    msg.setSource(21864U);
    msg.setSourceEntity(117U);
    msg.setDestination(51526U);
    msg.setDestinationEntity(243U);
    msg.value = 0.351698372663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.838298281601);
    msg.setSource(5581U);
    msg.setSourceEntity(89U);
    msg.setDestination(58874U);
    msg.setDestinationEntity(101U);
    msg.value.assign("QWYXKKWMNCDCXBHBSUAPRVTACOYOOJCMHZTATIZTRPEBHMQQZFQKFYXUPXOUPFQCWUZAFJWUNFTFOWSAMDMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.610186182617);
    msg.setSource(19939U);
    msg.setSourceEntity(84U);
    msg.setDestination(48779U);
    msg.setDestinationEntity(136U);
    msg.value.assign("IIMXTQNTWJFVYROVXBCLFNRFEAHBBDRNPUMWLWOSZRVWJJQGNIPDW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.53388394645);
    msg.setSource(34784U);
    msg.setSourceEntity(88U);
    msg.setDestination(37811U);
    msg.setDestinationEntity(52U);
    msg.value.assign("FFSCFYSZNJGOEDBVVOXLQCXRJDFWIMTFVVDKJUJWHZCIUBWATWIKJOQZKMTRAAQHXCSEDYORPHNMFLCOJQEDAGIYWAHLZXXZOQXPTSYQSRWWALTSCVLQUPBPHPOFRDZPPXRYIUFXBMKRINNDIKVGBUHYOBEJOM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.81783284827);
    msg.setSource(54845U);
    msg.setSourceEntity(111U);
    msg.setDestination(34189U);
    msg.setDestinationEntity(156U);
    const char tmp_msg_0[] = {59, 56, 90, -30, 87, 76, 56, -73, 52, 105, 90, -12, -79, 100, 122, 86, 70, -68, 119, 124, -36, 63, 54, -126, 121, -99, -36, -17, 70, 44, -25, -16, -33, -13, -58, -121, -44, 98, 27, -89, 29, -28, 84, 91, 119, 78, 69, -70, 47, -56, 61, 95, -27, -83, -97, 24, 103, 117, -19, 55, 0, 89, -54, -63, 81, -47, -114, -110, -101, 84, -119, 22, -71, -73, 95, -58, 88, 79, -37, 111, -82, -41, 98, 60, 126, 16, -37, 14, 17, 83, -2, 4, 72, 1, -32, -33, 60, 44, 67, -97, -69, 98, -121, -87, -108, -116, 3, 119, -1, 78, -44, 8, 55, -85, -27, 31, 108, -17, 0, 31, 68, -108, -105, 109, 10, 66, -40, 35, 72, -70, -49, -9, -100, 58, -25, -108, -125, -125};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.548765220701);
    msg.setSource(23391U);
    msg.setSourceEntity(186U);
    msg.setDestination(56347U);
    msg.setDestinationEntity(232U);
    const char tmp_msg_0[] = {77, -39, 61, 5, 107, 3, 55, 10, 80, 70, 80, -60, 62, 17, 47, -29, -102, 64, 10, 68, -94, -64, -97, 104, -127, 81, 20, -28, -72, -65, 47, -17, -119, 50, 70, -27, 51, -14, -121, 69, 112, 119, 12, 124, 75, 30, -3, 8, -10, 100, -56, 105, 81, -26, 86, 81, -117, 1, -122, 100, -121, -25, 84, -51, 14, 81, 110, 113, 6, -58, 17, 36, 70, 106, -117, -109, -30, 100, -38, -62, -38, -99, 71, 81, -62, -98};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.56434440548);
    msg.setSource(52995U);
    msg.setSourceEntity(251U);
    msg.setDestination(56788U);
    msg.setDestinationEntity(153U);
    const char tmp_msg_0[] = {69, -92, -125, 44, -82, -20, -64, 124, -114, 20, 98, 124, 75, 119, 99, -24, -23, -111, 93, 125, 96, -113, -49, 37, -95, 55, 122, 29, 105, -91, -80, 12, -17, -126, -116, 114, 69, -66, 35, 106, 21, 111, -9, -36, 46, 20, 79, -128, 47, -57, -40, 74, -16, 98, 73, -34, -71, 90, 91, -28, -4, 97, -68, -47, 17, 72, 66, 112, -75, -56, -30, 3, 15, 117, 74, -41, -89, -103, 92, -97, -35, 88, -1, 44, -69, -42, 65, 113, 99, -44, 28, 41, -39, -78, -75, -16, -54, -71, -9, -57, 21, 89, -128, 125, 36, 11, 92, 32, -56, -23, 46, 61, 9, -113, -30, -40, 77, -71, 98, 59, -73, 104, 116, 63, 109, -90, -47, -99, -99, 60, -127, -43, 32, -56, -80, 65, -7, -81, -9, 31, -81, -22, -74, -39, 42, 32, -28, -7, 58, -66, -24, 58, -121, 38, 109, -90, -32, 5};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.467450241297);
    msg.setSource(41892U);
    msg.setSourceEntity(189U);
    msg.setDestination(37000U);
    msg.setDestinationEntity(20U);
    msg.type = 7U;
    msg.frequency = 1760705125U;
    msg.min_range = 40209U;
    msg.max_range = 15353U;
    msg.bits_per_point = 53U;
    msg.scale_factor = 0.643029669203;
    const char tmp_msg_0[] = {-10, -66, -68, -90, -76, -100, 20, -66, 60, 74, 112, 20, 87, 90, 45, 124, 93, 48, 114, 64, 78, -11, -38, 91, 4, 48, -40, 95, -95, -102, -105, 86, 45, -30, -120, -41, -10, 116, 8, -40, 17, -45, -16, -42, 117, -47, -123, 53, -49, 10, 35, 2, -37, -15, -79, 100, -128, 110, -108, 57, 79, -31, -8, -98, -91, -20, 22, 85, 14, 89, 4, 6, 85, 110, 99, 106, -60, -127, 32, 18, -88, 71, -84, 42, -42, 33, 96, -106, 58, -38, 122, 2, -112, -22, -62, -14, -121, -44, 67, 97, 36, 45, -44, 12, -63, -31, 73, 62, 74, -15, 6, -117, 28, -78, 12, -42, 73, 99, -92, 51, -111, -113, 85, 12, -61, -122, -30, -49, 63, 100, 43, -82, -73, -12, 47, 50, -11, 92, -37, 97, 119, -25, 19, -87, -105, -18, 9, 31, 95, 103, 101, -20, 116, 28, -44, 121, 97, -31, -81, -95, -124, 44, -45, -90, 70, -109, -43, -121, 17, -91, -126, 115, 29, -59, 11, -94, 11, -70, -103, 18, 96, 82, 71, 50, -32, 75, -66, 31, 72, 102, -94, -81, 111, 120, -22, -52, -123, -36, -62, 17, -18, 47, -3, 60, -2, 119, 95, -5, 48, -77, 14, 3, 88, -92, -127, -60, -88, 124, -12, 25, -105, -71, -15, -43};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.290443742245);
    msg.setSource(61516U);
    msg.setSourceEntity(228U);
    msg.setDestination(27128U);
    msg.setDestinationEntity(88U);
    msg.type = 106U;
    msg.frequency = 3217067495U;
    msg.min_range = 52840U;
    msg.max_range = 41296U;
    msg.bits_per_point = 103U;
    msg.scale_factor = 0.417368096914;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.30341572515;
    tmp_msg_0.beam_height = 0.697499996283;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-94, 18, 43, 7, -25, -75, 35, 114, 44, -121, 30, -121, 63, 72, 123, -89, 66, -126, -109, 78, -35, 59, 97, 17, 33, -37, 93, -109, 82, -87, -83, -89, -52, 23, -111, -114, 55, -18, -31, -126, -8, 125, 86, 60, -8, -40, 101, -122, 49, -10, -104, 124, -12, 79, -49, -93, 106, -72, 80, 54, 116, -96, 17, 24, -95, -110, -82, 0, -78, 119, 35, 82, -89, -56, 0, 104, 51, 81, 108, -19, 92, 12, 5, 16, -125, 98, -51, 116, -113, -21, 94, 38, -9, 70, -116, -58, 60, 60, -50, -78, -96, 65, -69, -46, -59, -87, 104, 8, 109, -29, 120, 55, 112, 39, -48, 25, 122, 61, 81, -48, -54, 98, 51, 90, 15};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.973941214361);
    msg.setSource(8892U);
    msg.setSourceEntity(236U);
    msg.setDestination(23458U);
    msg.setDestinationEntity(86U);
    msg.type = 183U;
    msg.frequency = 2441440239U;
    msg.min_range = 60198U;
    msg.max_range = 22336U;
    msg.bits_per_point = 186U;
    msg.scale_factor = 0.953736076825;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.328541278813;
    tmp_msg_0.beam_height = 0.474531539511;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-48, -67, -42, 13, 117, 117, 93, -72, 112, 116, 114, 34, -54, 97, -43, -123, 111, -10, -58, -107, -23, 67, -49, 59, 125, 43, 18, -24, 33, 70, -98};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.398415997738);
    msg.setSource(25482U);
    msg.setSourceEntity(149U);
    msg.setDestination(57901U);
    msg.setDestinationEntity(185U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.287164228003);
    msg.setSource(40513U);
    msg.setSourceEntity(194U);
    msg.setDestination(25159U);
    msg.setDestinationEntity(38U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.3239086785);
    msg.setSource(12793U);
    msg.setSourceEntity(175U);
    msg.setDestination(27513U);
    msg.setDestinationEntity(179U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.739699974773);
    msg.setSource(49118U);
    msg.setSourceEntity(150U);
    msg.setDestination(27234U);
    msg.setDestinationEntity(127U);
    msg.op = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.676409984624);
    msg.setSource(6272U);
    msg.setSourceEntity(107U);
    msg.setDestination(51721U);
    msg.setDestinationEntity(15U);
    msg.op = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.32911176775);
    msg.setSource(678U);
    msg.setSourceEntity(148U);
    msg.setDestination(9735U);
    msg.setDestinationEntity(18U);
    msg.op = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.60316444425);
    msg.setSource(34762U);
    msg.setSourceEntity(19U);
    msg.setDestination(43364U);
    msg.setDestinationEntity(210U);
    msg.value = 0.525556371898;
    msg.confidence = 0.935373699882;
    msg.opmodes.assign("CCBUNIAYKCJYDSVZYPLQNOFQHAUPBXTWCMVTTNKIBCVPIVYPJPITOCSLNHEDODQVGZYASFZRZUEDVWKMZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.695008051599);
    msg.setSource(23208U);
    msg.setSourceEntity(201U);
    msg.setDestination(7981U);
    msg.setDestinationEntity(85U);
    msg.value = 0.656205997114;
    msg.confidence = 0.543338378724;
    msg.opmodes.assign("CMJMORNUSZGIFLRYJXXWBIAPEOEINHHOOBGAPUITKKBQRJCEXZRZLJGOYCVKWMWPQDWYBMVZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.183331411368);
    msg.setSource(44208U);
    msg.setSourceEntity(24U);
    msg.setDestination(23253U);
    msg.setDestinationEntity(108U);
    msg.value = 0.087556867318;
    msg.confidence = 0.622166670736;
    msg.opmodes.assign("JMRZAJTNOUVDUADDBPKEMNKJNPRIKXVWBYUACVHZVUQTKETMBHRABSHMAHOKJGUXDQTBBKZLMGTYEGRZFQSPVFJQDZNUICOCCIOYWFVLQFGOJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.572452614231);
    msg.setSource(36339U);
    msg.setSourceEntity(221U);
    msg.setDestination(62108U);
    msg.setDestinationEntity(83U);
    msg.itow = 1068039159U;
    msg.lat = 0.861324178649;
    msg.lon = 0.366631535124;
    msg.height_ell = 0.0162740382833;
    msg.height_sea = 0.535239909775;
    msg.hacc = 0.857645760024;
    msg.vacc = 0.0834303844861;
    msg.vel_n = 0.71520511311;
    msg.vel_e = 0.0686572716568;
    msg.vel_d = 0.0526466416919;
    msg.speed = 0.799041872065;
    msg.gspeed = 0.339080372754;
    msg.heading = 0.147300003873;
    msg.sacc = 0.565499717816;
    msg.cacc = 0.211624827221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.957164902724);
    msg.setSource(12709U);
    msg.setSourceEntity(23U);
    msg.setDestination(11712U);
    msg.setDestinationEntity(42U);
    msg.itow = 695771461U;
    msg.lat = 0.225008442318;
    msg.lon = 0.702834501461;
    msg.height_ell = 0.18668800785;
    msg.height_sea = 0.66140259089;
    msg.hacc = 0.734553746595;
    msg.vacc = 0.242725039592;
    msg.vel_n = 0.427982902997;
    msg.vel_e = 0.227676908103;
    msg.vel_d = 0.567641467512;
    msg.speed = 0.745203210855;
    msg.gspeed = 0.871283150291;
    msg.heading = 0.258881556851;
    msg.sacc = 0.335350254539;
    msg.cacc = 0.0174008555917;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.587769976024);
    msg.setSource(15169U);
    msg.setSourceEntity(28U);
    msg.setDestination(60199U);
    msg.setDestinationEntity(147U);
    msg.itow = 4242310473U;
    msg.lat = 0.697636487894;
    msg.lon = 0.772152595502;
    msg.height_ell = 0.00740050345848;
    msg.height_sea = 0.223256196127;
    msg.hacc = 0.879246602238;
    msg.vacc = 0.413803872275;
    msg.vel_n = 0.626252013932;
    msg.vel_e = 0.0777070423265;
    msg.vel_d = 0.645662062902;
    msg.speed = 0.875498146737;
    msg.gspeed = 0.57827415026;
    msg.heading = 0.299943928761;
    msg.sacc = 0.414953397189;
    msg.cacc = 0.000429283344224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.991754935036);
    msg.setSource(42037U);
    msg.setSourceEntity(63U);
    msg.setDestination(33990U);
    msg.setDestinationEntity(138U);
    msg.id = 77U;
    msg.value = 0.226172690642;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.296511538691);
    msg.setSource(46472U);
    msg.setSourceEntity(182U);
    msg.setDestination(35843U);
    msg.setDestinationEntity(16U);
    msg.id = 148U;
    msg.value = 0.140833794884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.591857363401);
    msg.setSource(63366U);
    msg.setSourceEntity(28U);
    msg.setDestination(26519U);
    msg.setDestinationEntity(129U);
    msg.id = 65U;
    msg.value = 0.102448855776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.992791486209);
    msg.setSource(9368U);
    msg.setSourceEntity(221U);
    msg.setDestination(26348U);
    msg.setDestinationEntity(31U);
    msg.x = 0.86081462726;
    msg.y = 0.811228300197;
    msg.z = 0.550927959649;
    msg.phi = 0.388435566882;
    msg.theta = 0.219266775556;
    msg.psi = 0.254479459071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.293196477157);
    msg.setSource(14714U);
    msg.setSourceEntity(40U);
    msg.setDestination(5391U);
    msg.setDestinationEntity(44U);
    msg.x = 0.387021991044;
    msg.y = 0.812107244987;
    msg.z = 0.288277438778;
    msg.phi = 0.0285485818853;
    msg.theta = 0.880632888598;
    msg.psi = 0.0333787394884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.177322811398);
    msg.setSource(13444U);
    msg.setSourceEntity(169U);
    msg.setDestination(5576U);
    msg.setDestinationEntity(169U);
    msg.x = 0.237495540708;
    msg.y = 0.561757590272;
    msg.z = 0.239788506432;
    msg.phi = 0.190426396723;
    msg.theta = 0.100847280194;
    msg.psi = 0.263209036731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.165727830191);
    msg.setSource(24814U);
    msg.setSourceEntity(168U);
    msg.setDestination(12764U);
    msg.setDestinationEntity(209U);
    msg.beam_width = 0.728812301945;
    msg.beam_height = 0.53355196525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.690368681948);
    msg.setSource(32539U);
    msg.setSourceEntity(99U);
    msg.setDestination(20285U);
    msg.setDestinationEntity(47U);
    msg.beam_width = 0.974427027414;
    msg.beam_height = 0.120925559039;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.730442738628);
    msg.setSource(24022U);
    msg.setSourceEntity(54U);
    msg.setDestination(35942U);
    msg.setDestinationEntity(208U);
    msg.beam_width = 0.213581314135;
    msg.beam_height = 0.671314415873;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.630785085867);
    msg.setSource(49746U);
    msg.setSourceEntity(84U);
    msg.setDestination(9942U);
    msg.setDestinationEntity(84U);
    msg.sane = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.997214642638);
    msg.setSource(62469U);
    msg.setSourceEntity(84U);
    msg.setDestination(4429U);
    msg.setDestinationEntity(140U);
    msg.sane = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.384960560148);
    msg.setSource(4761U);
    msg.setSourceEntity(206U);
    msg.setDestination(12111U);
    msg.setDestinationEntity(12U);
    msg.sane = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.053756406145);
    msg.setSource(8137U);
    msg.setSourceEntity(4U);
    msg.setDestination(63906U);
    msg.setDestinationEntity(180U);
    msg.value = 0.972010671915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.455491172645);
    msg.setSource(23126U);
    msg.setSourceEntity(44U);
    msg.setDestination(12095U);
    msg.setDestinationEntity(197U);
    msg.value = 0.249706130725;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.455650401298);
    msg.setSource(34346U);
    msg.setSourceEntity(241U);
    msg.setDestination(33144U);
    msg.setDestinationEntity(30U);
    msg.value = 0.741110530458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.676765076345);
    msg.setSource(51159U);
    msg.setSourceEntity(188U);
    msg.setDestination(266U);
    msg.setDestinationEntity(137U);
    msg.value = 0.643256563211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.551581589583);
    msg.setSource(64459U);
    msg.setSourceEntity(38U);
    msg.setDestination(3417U);
    msg.setDestinationEntity(159U);
    msg.value = 0.851063817936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.537252473767);
    msg.setSource(33389U);
    msg.setSourceEntity(243U);
    msg.setDestination(38649U);
    msg.setDestinationEntity(93U);
    msg.value = 0.420484464497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.10233391755);
    msg.setSource(49819U);
    msg.setSourceEntity(14U);
    msg.setDestination(50976U);
    msg.setDestinationEntity(27U);
    msg.value = 0.0904761555922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.621020624417);
    msg.setSource(62328U);
    msg.setSourceEntity(46U);
    msg.setDestination(47396U);
    msg.setDestinationEntity(71U);
    msg.value = 0.376837932182;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.443713110857);
    msg.setSource(44987U);
    msg.setSourceEntity(179U);
    msg.setDestination(47602U);
    msg.setDestinationEntity(46U);
    msg.value = 0.431969965682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.85803513572);
    msg.setSource(37444U);
    msg.setSourceEntity(94U);
    msg.setDestination(27387U);
    msg.setDestinationEntity(24U);
    msg.value = 0.588352083368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.728491465963);
    msg.setSource(17398U);
    msg.setSourceEntity(218U);
    msg.setDestination(63988U);
    msg.setDestinationEntity(236U);
    msg.value = 0.0377377107874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.809223883333);
    msg.setSource(34731U);
    msg.setSourceEntity(200U);
    msg.setDestination(8420U);
    msg.setDestinationEntity(247U);
    msg.value = 0.721689883178;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.706265015063);
    msg.setSource(42699U);
    msg.setSourceEntity(152U);
    msg.setDestination(35054U);
    msg.setDestinationEntity(93U);
    msg.value = 0.494783642671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.922727014894);
    msg.setSource(45309U);
    msg.setSourceEntity(155U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(212U);
    msg.value = 0.55827373631;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.506465652983);
    msg.setSource(43313U);
    msg.setSourceEntity(203U);
    msg.setDestination(5414U);
    msg.setDestinationEntity(71U);
    msg.value = 0.0874591912211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.473478448877);
    msg.setSource(8063U);
    msg.setSourceEntity(163U);
    msg.setDestination(63376U);
    msg.setDestinationEntity(215U);
    msg.id = 214U;
    msg.zoom = 238U;
    msg.action = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.233102717537);
    msg.setSource(15577U);
    msg.setSourceEntity(231U);
    msg.setDestination(49719U);
    msg.setDestinationEntity(132U);
    msg.id = 31U;
    msg.zoom = 35U;
    msg.action = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.100750351848);
    msg.setSource(13040U);
    msg.setSourceEntity(20U);
    msg.setDestination(20661U);
    msg.setDestinationEntity(6U);
    msg.id = 149U;
    msg.zoom = 108U;
    msg.action = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.159808524709);
    msg.setSource(56847U);
    msg.setSourceEntity(53U);
    msg.setDestination(11648U);
    msg.setDestinationEntity(224U);
    msg.id = 120U;
    msg.value = 0.293997668492;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.133674173025);
    msg.setSource(24169U);
    msg.setSourceEntity(118U);
    msg.setDestination(16870U);
    msg.setDestinationEntity(125U);
    msg.id = 99U;
    msg.value = 0.357515205112;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.809782771041);
    msg.setSource(62531U);
    msg.setSourceEntity(212U);
    msg.setDestination(46834U);
    msg.setDestinationEntity(71U);
    msg.id = 249U;
    msg.value = 0.528818297364;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.230693268165);
    msg.setSource(64764U);
    msg.setSourceEntity(4U);
    msg.setDestination(27228U);
    msg.setDestinationEntity(162U);
    msg.id = 78U;
    msg.value = 0.789531552792;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.153628157065);
    msg.setSource(52452U);
    msg.setSourceEntity(64U);
    msg.setDestination(9712U);
    msg.setDestinationEntity(101U);
    msg.id = 149U;
    msg.value = 0.627793818818;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.287671268206);
    msg.setSource(32585U);
    msg.setSourceEntity(199U);
    msg.setDestination(58544U);
    msg.setDestinationEntity(209U);
    msg.id = 112U;
    msg.value = 0.922078551667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.27492286843);
    msg.setSource(1040U);
    msg.setSourceEntity(21U);
    msg.setDestination(16393U);
    msg.setDestinationEntity(188U);
    msg.id = 231U;
    msg.angle = 0.620934490378;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.63938694676);
    msg.setSource(51140U);
    msg.setSourceEntity(209U);
    msg.setDestination(3225U);
    msg.setDestinationEntity(160U);
    msg.id = 10U;
    msg.angle = 0.683187194703;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.515452453055);
    msg.setSource(53051U);
    msg.setSourceEntity(138U);
    msg.setDestination(38551U);
    msg.setDestinationEntity(185U);
    msg.id = 167U;
    msg.angle = 0.368892258471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.44285215575);
    msg.setSource(50742U);
    msg.setSourceEntity(50U);
    msg.setDestination(2901U);
    msg.setDestinationEntity(220U);
    msg.op = 19U;
    msg.actions.assign("JWDANOMTIPDXIFEKKWDQJRUCDNORYHLHPRVPWHJEQDAWCGQOFVPKWJRSABGJZUFAFCNKJRKYASGUXPOXMYEFQBFLHUXNXRETQBBNASQUNWDDMXSVOTRULVAALCWHNLBZAVYKGJLSMIGFYPIBYTCZGHRDVLXHUSEASMTMOVKEIGIWCDZGTVTITSLIUQRYKLMHLRNUPZKJZZGBQEZXDJQP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.269967496206);
    msg.setSource(45638U);
    msg.setSourceEntity(111U);
    msg.setDestination(4263U);
    msg.setDestinationEntity(179U);
    msg.op = 132U;
    msg.actions.assign("JSDWTMYIBJDNTEUXYXKTAGBKFVXAXJNEEAOXPCJQHXJOIWLJZYKSDEAZIYJAHFYLOUNPRKCRCERHKQVYPVUNHQMMCFZONERIFWHSVMWMTGSDJKAWRGSQEVSFLRBBBBGWOORIWLUTQLQTDWNAKWKRDSCAXLMCCDTQLGZOZPQHHRAUBXNIICLOTPQPVKFGMOWPITNZHBBNEOYCL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.856846047142);
    msg.setSource(48308U);
    msg.setSourceEntity(96U);
    msg.setDestination(50643U);
    msg.setDestinationEntity(7U);
    msg.op = 150U;
    msg.actions.assign("HSMGBVEQAAPEKBGRMMVWDIAEHHKIXDDPGTDGUYLZJCJMJNZEXEWLYHITXSNTSYMMOKPYPHSVFJCWJMNVDQARQECENRAZTLDKYDPTGZYCZPQGNHBQFTNOSGRZZUFXOPHYBHJZORBNXADIOKRAFCSVOBRZIVTKCLOHAVMQFOGXVRASKSFMWBYLLEFIFXLSCERUZWGHOBQNCXJDEUITYOXICUVKBUPCSBFWJGYJRLIUTPUUQTKDVMQPWWUAXKLNQL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.717708803651);
    msg.setSource(22229U);
    msg.setSourceEntity(169U);
    msg.setDestination(19362U);
    msg.setDestinationEntity(32U);
    msg.actions.assign("ZEHJSPRFMQRXKQUPLWBSLDGRPMCBHEODCERXQDTYJEZKTILJPTDJWUFBGGRNYGUWCYLQYVMBOTZSRVWYUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.571042816853);
    msg.setSource(2717U);
    msg.setSourceEntity(5U);
    msg.setDestination(1209U);
    msg.setDestinationEntity(201U);
    msg.actions.assign("JLELXNWVAEUILZJBXPKOHQGPLBAGRCBNHRLSRGGLHKMPPSVDMDGVFAYMTORKBPPPQCVFJYLZVEZQMTIGEZBSKOGPDYAIKXFOBJWAIRCENDTYHCCRXIBSOFMWTQCFBLHTMTVRWOEUZNVQBXQYHSWZACNWNJMPCXYUXJVSLUDUKBTSKVJWTFGUYUZCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.0138770734246);
    msg.setSource(25861U);
    msg.setSourceEntity(34U);
    msg.setDestination(9819U);
    msg.setDestinationEntity(38U);
    msg.actions.assign("TITZLPPUKEFQWRORBRPJBBPELLHPELUXGRFTAVDWJIBLKNSHEYDMVCJALVJNPIQYDQVWYYUBGMFINTUOSKTMFJMPIOHXDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.361669844794);
    msg.setSource(58041U);
    msg.setSourceEntity(37U);
    msg.setDestination(59000U);
    msg.setDestinationEntity(195U);
    msg.button = 252U;
    msg.value = 222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.602894583836);
    msg.setSource(7002U);
    msg.setSourceEntity(250U);
    msg.setDestination(900U);
    msg.setDestinationEntity(19U);
    msg.button = 204U;
    msg.value = 215U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.488866596276);
    msg.setSource(29098U);
    msg.setSourceEntity(164U);
    msg.setDestination(7958U);
    msg.setDestinationEntity(14U);
    msg.button = 179U;
    msg.value = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.368323064069);
    msg.setSource(30709U);
    msg.setSourceEntity(108U);
    msg.setDestination(27191U);
    msg.setDestinationEntity(199U);
    msg.op = 218U;
    msg.text.assign("TJNKTFXXXTGSJOZAAUAGBRLYKNWILUHKLNQWEXEQVXNGQCYVVXMAZCLEICONQKVOLKPXAQJTUIUDWDVPWEKCIZJDDUOKSIYKGEJZWAUHWRELROVMXSHNYFUHCJHZBSVTPVGHNTIPYGBPPLLOHMLZDMFGYRGWZQIERCCFE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.627388833315);
    msg.setSource(25971U);
    msg.setSourceEntity(241U);
    msg.setDestination(6775U);
    msg.setDestinationEntity(39U);
    msg.op = 172U;
    msg.text.assign("ZCMIXAOUOHNFJAVMSAJXPVFTDZCTYRKLIFLTCRZGNFJVNFSTPRKGTAPLTLOJKKMKBPIYOIIWHQMRFFUUWQXZJDUYO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.368925067368);
    msg.setSource(5460U);
    msg.setSourceEntity(145U);
    msg.setDestination(49976U);
    msg.setDestinationEntity(0U);
    msg.op = 6U;
    msg.text.assign("KSQCLSGMRRLDJOQLIMRGDGRRVXAVGZGAZHZWSHAUSIDDIWJMFGRR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.489008419072);
    msg.setSource(22897U);
    msg.setSourceEntity(66U);
    msg.setDestination(26990U);
    msg.setDestinationEntity(9U);
    msg.op = 39U;
    msg.time_remain = 0.642281411101;
    msg.sched_time = 0.219800588493;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.0638795098529);
    msg.setSource(39504U);
    msg.setSourceEntity(25U);
    msg.setDestination(18916U);
    msg.setDestinationEntity(189U);
    msg.op = 140U;
    msg.time_remain = 0.507390335878;
    msg.sched_time = 0.168721088886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.627957556897);
    msg.setSource(63973U);
    msg.setSourceEntity(225U);
    msg.setDestination(4914U);
    msg.setDestinationEntity(6U);
    msg.op = 163U;
    msg.time_remain = 0.246668359183;
    msg.sched_time = 0.231864987036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.715412782216);
    msg.setSource(39590U);
    msg.setSourceEntity(44U);
    msg.setDestination(33952U);
    msg.setDestinationEntity(186U);
    msg.name.assign("JYBHVQHJBDSQPIAIVWQBNJHVTGNSKESSCLQBHYIXPCEDCYYXZRTGTJDAFZJITOEVYNNHCTUXQFPDJSSWKHMXIJNFATUUZEAOWPNDZDGKKPFMETRNSADHEXTBTUOKLOZPVWNWVZYQXFVE");
    msg.op = 40U;
    msg.sched_time = 0.287634212894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.356942379984);
    msg.setSource(45828U);
    msg.setSourceEntity(142U);
    msg.setDestination(7685U);
    msg.setDestinationEntity(169U);
    msg.name.assign("JPYVWLDASIABSNEBJFHCOUZAAXIWEDXGUCOAHCTCIEEROQZDYCUGBQCQNKSQAWWPMPGHJSLMIZETLVTSHROYXZJKONVALUFEJOULPFWBXBGJWXZTCUBONUKSYKBFMLBHXVOGDYDDJYZWRWQLKCZSUBIVXRNVWIHSPMYEI");
    msg.op = 39U;
    msg.sched_time = 0.0103363793568;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.975326160071);
    msg.setSource(53604U);
    msg.setSourceEntity(53U);
    msg.setDestination(41536U);
    msg.setDestinationEntity(28U);
    msg.name.assign("JLYPFTYCGBCACSXPEMKYUESFQGMWIELBNBPTOZLSVHRWNAASVVEGPMWMSAZZXPFFLIAVWQCQUUAZVFRLNOUNNBJIPGIHJMLTUDBVFMH");
    msg.op = 180U;
    msg.sched_time = 0.528394176565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.653925245648);
    msg.setSource(20023U);
    msg.setSourceEntity(195U);
    msg.setDestination(47855U);
    msg.setDestinationEntity(61U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.119132670437);
    msg.setSource(48104U);
    msg.setSourceEntity(166U);
    msg.setDestination(62007U);
    msg.setDestinationEntity(222U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.765900278761);
    msg.setSource(45359U);
    msg.setSourceEntity(192U);
    msg.setDestination(57394U);
    msg.setDestinationEntity(89U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.308011893814);
    msg.setSource(63484U);
    msg.setSourceEntity(101U);
    msg.setDestination(36868U);
    msg.setDestinationEntity(93U);
    msg.name.assign("BXJQUFOEHPE");
    msg.state = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.851206952019);
    msg.setSource(62202U);
    msg.setSourceEntity(53U);
    msg.setDestination(3619U);
    msg.setDestinationEntity(206U);
    msg.name.assign("VWZSQBEXYMBALQULYYTI");
    msg.state = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.518102116329);
    msg.setSource(11555U);
    msg.setSourceEntity(224U);
    msg.setDestination(15895U);
    msg.setDestinationEntity(249U);
    msg.name.assign("IEHUIDQFJSWNQLGCLYNFJKUARCZIETACNKTZSXSKZU");
    msg.state = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.0758202488037);
    msg.setSource(57896U);
    msg.setSourceEntity(68U);
    msg.setDestination(5513U);
    msg.setDestinationEntity(220U);
    msg.name.assign("FFGKQLRRYZKZGBWHANHZXSDVLVGVOZDKWWEOSTWHAZF");
    msg.value = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.0654450917457);
    msg.setSource(52782U);
    msg.setSourceEntity(231U);
    msg.setDestination(12199U);
    msg.setDestinationEntity(235U);
    msg.name.assign("DQYJDABVTCIFFAMDZPPZDQFDOLIGBKAMGOKPQMHTABIXJKUVUMCVYVHKILTHHUDEWYXUSUKXSBPBJEMWNVJQZXQXNYZTPSICWAGGMSINFBN");
    msg.value = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.532203450522);
    msg.setSource(54417U);
    msg.setSourceEntity(130U);
    msg.setDestination(19355U);
    msg.setDestinationEntity(146U);
    msg.name.assign("VVMTTGBRDQQERUQEIRGXUHJLHQHSMBIZYFWAJKAXKHIODLTPGTEEYDBIBKISOWYOPQFRVFWGSHURDNEJJWBMPMEMDPTFZRMSNXNVYCCZJZGUDGAPCHBQMDYFBXIONIELOFTRQQVKHJZWKHNKPGDCRFNYWOZCAJJXALLOASVOKVAZURSWVTXBTCKGCCTCIUKFZYAWGSBSPPFJONVSHPUFL");
    msg.value = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.655487756853);
    msg.setSource(58776U);
    msg.setSourceEntity(182U);
    msg.setDestination(63786U);
    msg.setDestinationEntity(147U);
    msg.name.assign("ZXBDQCMZERQTFHBRSBCUJHXNOOQZCQPBAKMHHOWJAOPRWGYBJTIVHXUUCZCZWSRMVYKDNYIGLFLVDLVDFBSNBLVDJMSNEFXIHLZOUJDRPPROKQEBNSLGYIGVMYANPOAWKOTIQPCYWONMGLOUMAHGATFUKYSWNEFDKKQWGMDXCZNQKKXPVWFZSSLYGYUPESPZJRDAXHXIFWEUVJTQIRTBMRFJQWLUIVTXAHHMCJYDE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.763070482567);
    msg.setSource(24647U);
    msg.setSourceEntity(120U);
    msg.setDestination(29181U);
    msg.setDestinationEntity(220U);
    msg.name.assign("ERCUQIKSZEPCNWPLEFECIRTRNYZDTXBBFFWWRNJZAYKFBJVNDVXQAOUSUZEICGFTWOPIYDWHJKCMQDUPLCLDVMXKXXJMRSRQOQSDXZIQMGQTAFPTJLMINYKIAHDEISKWLQDANIPLK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.788031239176);
    msg.setSource(27426U);
    msg.setSourceEntity(240U);
    msg.setDestination(59051U);
    msg.setDestinationEntity(26U);
    msg.name.assign("LBKAWXSQKVNTSORZZRNYGIZWJYEVTUCCFZVLQBEPDGSQFBQLIGNMYIWKTJMHERWJJDUSUFXOITFKJXCRRIGCNUOCJRGJDKZYKIZNOUMHCXYLDMEUCUAGINYKXGBZLNNXVPRUZEHIVBWNBOHHADHMIABNZYVOPKSDCBFUXQFGHSRPVAKPVWXWQSLCDVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.751224792855);
    msg.setSource(49740U);
    msg.setSourceEntity(50U);
    msg.setDestination(28999U);
    msg.setDestinationEntity(147U);
    msg.name.assign("PZWHXWSRWIBUNSOSXFKXGULBECOCLYKYHZIVNPLWNCQSGLJMHEDPDAQGXFVYDKHVBYUECXTOXRESMFEYBJAUNNORKCLZBFVYZFNLWPJOYTFDWIWMARGFHRGXUQWFUNTSIKTGERFARTPSXWIZJTVYMKLEJGVKEMBKRXDIKJHPWZLLSZXZCJUMPRGDBTCITCJLQGTQQUVPRHGZNONQMAJMHQVOFBDSNUZVOEDQPKCOHDHOSIBAVQ");
    msg.value = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.743215836792);
    msg.setSource(24295U);
    msg.setSourceEntity(235U);
    msg.setDestination(28397U);
    msg.setDestinationEntity(213U);
    msg.name.assign("POSRKNHBQABNFTJPHMIFSQPAJDHULTWNNIADGTECRAWEHLERTNKVBCIWXBUIVANSHUVSYGGZTAMJNNSWOZASVACBGLFJXQWALMKQHCMCXACRJFDXMQRIUVGPFMYISRGICTPRXOCLETWVHNB");
    msg.value = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.569401253876);
    msg.setSource(19535U);
    msg.setSourceEntity(136U);
    msg.setDestination(8847U);
    msg.setDestinationEntity(129U);
    msg.name.assign("KTHQPYLYQAWLZLZMSWXLIQUIP");
    msg.value = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.514302492333);
    msg.setSource(53608U);
    msg.setSourceEntity(239U);
    msg.setDestination(21165U);
    msg.setDestinationEntity(136U);
    msg.id = 165U;
    msg.period = 526274055U;
    msg.duty_cycle = 2990938527U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.615550597221);
    msg.setSource(20334U);
    msg.setSourceEntity(29U);
    msg.setDestination(45770U);
    msg.setDestinationEntity(189U);
    msg.id = 5U;
    msg.period = 882316128U;
    msg.duty_cycle = 2782726043U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.587036009509);
    msg.setSource(24001U);
    msg.setSourceEntity(65U);
    msg.setDestination(36160U);
    msg.setDestinationEntity(21U);
    msg.id = 152U;
    msg.period = 501615593U;
    msg.duty_cycle = 3569669829U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.296012742093);
    msg.setSource(13194U);
    msg.setSourceEntity(239U);
    msg.setDestination(64004U);
    msg.setDestinationEntity(226U);
    msg.id = 194U;
    msg.period = 4072452494U;
    msg.duty_cycle = 2468524066U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.299200108192);
    msg.setSource(54696U);
    msg.setSourceEntity(4U);
    msg.setDestination(293U);
    msg.setDestinationEntity(40U);
    msg.id = 227U;
    msg.period = 1213829045U;
    msg.duty_cycle = 1829798284U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.963266056252);
    msg.setSource(36257U);
    msg.setSourceEntity(8U);
    msg.setDestination(9207U);
    msg.setDestinationEntity(180U);
    msg.id = 63U;
    msg.period = 2855762408U;
    msg.duty_cycle = 830232179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.577374644137);
    msg.setSource(17788U);
    msg.setSourceEntity(90U);
    msg.setDestination(17260U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.770913922701;
    msg.lon = 0.024323197163;
    msg.height = 0.977482315372;
    msg.x = 0.535224429083;
    msg.y = 0.28111927889;
    msg.z = 0.480096308733;
    msg.phi = 0.482928567651;
    msg.theta = 0.061119955813;
    msg.psi = 0.0110566271077;
    msg.u = 0.228047531482;
    msg.v = 0.732972008291;
    msg.w = 0.0631917418717;
    msg.vx = 0.623393881459;
    msg.vy = 0.197582550265;
    msg.vz = 0.855557127492;
    msg.p = 0.25619238772;
    msg.q = 0.42911097385;
    msg.r = 0.655482605997;
    msg.depth = 0.941102514486;
    msg.alt = 0.285551629154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.930356182684);
    msg.setSource(8422U);
    msg.setSourceEntity(228U);
    msg.setDestination(12235U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.322694255023;
    msg.lon = 0.85120809103;
    msg.height = 0.843663562272;
    msg.x = 0.579884810188;
    msg.y = 0.677526403134;
    msg.z = 0.122952857207;
    msg.phi = 0.0392233323774;
    msg.theta = 0.840686472895;
    msg.psi = 0.822867625918;
    msg.u = 0.810876793798;
    msg.v = 0.826256595072;
    msg.w = 0.847996280538;
    msg.vx = 0.228930227162;
    msg.vy = 0.849107039451;
    msg.vz = 0.458531760763;
    msg.p = 0.395406143736;
    msg.q = 0.419371461237;
    msg.r = 0.128687055104;
    msg.depth = 0.207624555421;
    msg.alt = 0.576435474406;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.689732268561);
    msg.setSource(64621U);
    msg.setSourceEntity(158U);
    msg.setDestination(63501U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.737176662685;
    msg.lon = 0.412262125696;
    msg.height = 0.594727678262;
    msg.x = 0.693045790981;
    msg.y = 0.242758920737;
    msg.z = 0.0647430266084;
    msg.phi = 0.703619105566;
    msg.theta = 0.659733042578;
    msg.psi = 0.652124930846;
    msg.u = 0.431035000576;
    msg.v = 0.927889332892;
    msg.w = 0.379447799668;
    msg.vx = 0.969142398538;
    msg.vy = 0.38015803413;
    msg.vz = 0.977285393242;
    msg.p = 0.946568249537;
    msg.q = 0.265403905821;
    msg.r = 0.346397776465;
    msg.depth = 0.17415569314;
    msg.alt = 0.634190833619;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.421520361808);
    msg.setSource(8671U);
    msg.setSourceEntity(223U);
    msg.setDestination(65361U);
    msg.setDestinationEntity(218U);
    msg.x = 0.677615998038;
    msg.y = 0.37303202103;
    msg.z = 0.371832317428;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.452425015253);
    msg.setSource(6428U);
    msg.setSourceEntity(188U);
    msg.setDestination(22085U);
    msg.setDestinationEntity(94U);
    msg.x = 0.743508697798;
    msg.y = 0.14405322533;
    msg.z = 0.180009361517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.793539153495);
    msg.setSource(33326U);
    msg.setSourceEntity(18U);
    msg.setDestination(65332U);
    msg.setDestinationEntity(71U);
    msg.x = 0.417254198702;
    msg.y = 0.483268023364;
    msg.z = 0.20728270818;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.502134494589);
    msg.setSource(50731U);
    msg.setSourceEntity(62U);
    msg.setDestination(26983U);
    msg.setDestinationEntity(120U);
    msg.value = 0.826775006151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.459734265565);
    msg.setSource(47603U);
    msg.setSourceEntity(60U);
    msg.setDestination(22038U);
    msg.setDestinationEntity(214U);
    msg.value = 0.587667525923;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.456930137903);
    msg.setSource(8363U);
    msg.setSourceEntity(21U);
    msg.setDestination(31894U);
    msg.setDestinationEntity(167U);
    msg.value = 0.0582542989254;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.223418119509);
    msg.setSource(19499U);
    msg.setSourceEntity(191U);
    msg.setDestination(3309U);
    msg.setDestinationEntity(143U);
    msg.value = 0.839451297264;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.565948947674);
    msg.setSource(45364U);
    msg.setSourceEntity(44U);
    msg.setDestination(59424U);
    msg.setDestinationEntity(222U);
    msg.value = 0.140935506616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.939132334685);
    msg.setSource(18935U);
    msg.setSourceEntity(5U);
    msg.setDestination(44836U);
    msg.setDestinationEntity(223U);
    msg.value = 0.472818472444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.820169407319);
    msg.setSource(7204U);
    msg.setSourceEntity(86U);
    msg.setDestination(12158U);
    msg.setDestinationEntity(213U);
    msg.x = 0.598049066842;
    msg.y = 0.865459747354;
    msg.z = 0.47980020617;
    msg.phi = 0.851338098187;
    msg.theta = 0.704869815825;
    msg.psi = 0.455656189452;
    msg.p = 0.457974043822;
    msg.q = 0.31107798806;
    msg.r = 0.372685495282;
    msg.u = 0.0368350746648;
    msg.v = 0.139216661406;
    msg.w = 0.660257460552;
    msg.bias_psi = 0.620021670898;
    msg.bias_r = 0.0688277424233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.0299061994221);
    msg.setSource(53667U);
    msg.setSourceEntity(111U);
    msg.setDestination(59414U);
    msg.setDestinationEntity(187U);
    msg.x = 0.377945271056;
    msg.y = 0.290067659647;
    msg.z = 0.0817521808682;
    msg.phi = 0.209857932972;
    msg.theta = 0.571333539715;
    msg.psi = 0.207535680841;
    msg.p = 0.403458294004;
    msg.q = 0.108244435666;
    msg.r = 0.604371603414;
    msg.u = 0.450993155092;
    msg.v = 0.643103490916;
    msg.w = 0.993755141262;
    msg.bias_psi = 0.436041646802;
    msg.bias_r = 0.0511725242997;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.378745253282);
    msg.setSource(10415U);
    msg.setSourceEntity(118U);
    msg.setDestination(54603U);
    msg.setDestinationEntity(3U);
    msg.x = 0.0730296102573;
    msg.y = 0.454272395454;
    msg.z = 0.55002386783;
    msg.phi = 0.263478811539;
    msg.theta = 0.289053073261;
    msg.psi = 0.315556913173;
    msg.p = 0.844603432693;
    msg.q = 0.211700916705;
    msg.r = 0.508393253853;
    msg.u = 0.746690759241;
    msg.v = 0.0781228295541;
    msg.w = 0.706330983001;
    msg.bias_psi = 0.782814232829;
    msg.bias_r = 0.0757849034468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.250978787849);
    msg.setSource(13944U);
    msg.setSourceEntity(235U);
    msg.setDestination(30628U);
    msg.setDestinationEntity(93U);
    msg.bias_psi = 0.27926535778;
    msg.bias_r = 0.515651633674;
    msg.cog = 0.616936100764;
    msg.cyaw = 0.175415989947;
    msg.lbl_rej_level = 0.0653944344118;
    msg.gps_rej_level = 0.295134820035;
    msg.custom_x = 0.657472226823;
    msg.custom_y = 0.891024415524;
    msg.custom_z = 0.0639283067378;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.109943856867);
    msg.setSource(24210U);
    msg.setSourceEntity(18U);
    msg.setDestination(28887U);
    msg.setDestinationEntity(148U);
    msg.bias_psi = 0.599838365282;
    msg.bias_r = 0.981442840963;
    msg.cog = 0.0798459530406;
    msg.cyaw = 0.80220280805;
    msg.lbl_rej_level = 0.477776204819;
    msg.gps_rej_level = 0.480238078287;
    msg.custom_x = 0.442782577956;
    msg.custom_y = 0.863646660082;
    msg.custom_z = 0.298422182194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.980676155029);
    msg.setSource(50843U);
    msg.setSourceEntity(52U);
    msg.setDestination(10998U);
    msg.setDestinationEntity(167U);
    msg.bias_psi = 0.0927182509854;
    msg.bias_r = 0.328507735368;
    msg.cog = 0.463971608256;
    msg.cyaw = 0.59151542224;
    msg.lbl_rej_level = 0.777929213004;
    msg.gps_rej_level = 0.567043130222;
    msg.custom_x = 0.919971151181;
    msg.custom_y = 0.335077497884;
    msg.custom_z = 0.698060751473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.373857379669);
    msg.setSource(63731U);
    msg.setSourceEntity(24U);
    msg.setDestination(7145U);
    msg.setDestinationEntity(95U);
    msg.utc_time = 0.404052078914;
    msg.reason = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.377281416259);
    msg.setSource(20519U);
    msg.setSourceEntity(63U);
    msg.setDestination(56551U);
    msg.setDestinationEntity(64U);
    msg.utc_time = 0.0989360194972;
    msg.reason = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.0603968736813);
    msg.setSource(57967U);
    msg.setSourceEntity(224U);
    msg.setDestination(22327U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.848740341184;
    msg.reason = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.144602062242);
    msg.setSource(26351U);
    msg.setSourceEntity(141U);
    msg.setDestination(17849U);
    msg.setDestinationEntity(80U);
    msg.id = 110U;
    msg.range = 0.530858890914;
    msg.acceptance = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.122567690161);
    msg.setSource(1775U);
    msg.setSourceEntity(109U);
    msg.setDestination(7220U);
    msg.setDestinationEntity(83U);
    msg.id = 45U;
    msg.range = 0.103837397733;
    msg.acceptance = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.639535719934);
    msg.setSource(322U);
    msg.setSourceEntity(135U);
    msg.setDestination(45125U);
    msg.setDestinationEntity(208U);
    msg.id = 191U;
    msg.range = 0.95715263771;
    msg.acceptance = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.193632700455);
    msg.setSource(65511U);
    msg.setSourceEntity(150U);
    msg.setDestination(35793U);
    msg.setDestinationEntity(106U);
    msg.type = 176U;
    msg.reason = 37U;
    msg.value = 0.139287241009;
    msg.timestep = 0.209020086931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.286026075215);
    msg.setSource(31180U);
    msg.setSourceEntity(58U);
    msg.setDestination(62120U);
    msg.setDestinationEntity(112U);
    msg.type = 211U;
    msg.reason = 6U;
    msg.value = 0.0311247310966;
    msg.timestep = 0.652312752528;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.248769791477);
    msg.setSource(5504U);
    msg.setSourceEntity(167U);
    msg.setDestination(25985U);
    msg.setDestinationEntity(1U);
    msg.type = 62U;
    msg.reason = 74U;
    msg.value = 0.547873633031;
    msg.timestep = 0.166783772251;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.999815504312);
    msg.setSource(31025U);
    msg.setSourceEntity(63U);
    msg.setDestination(4285U);
    msg.setDestinationEntity(93U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XFAPZUKQIJGREZMONHITJRDPQUSFAYBVRAMRRCEVKALLINGCMHZHRJPVHLNVBGTUAMWLWFMKSFKKIDYTCYVYNBBEZROOXTCQQTAHPGCQCBWDWYZQHWOJAZVOLYFSPEUPIHAYUXMLLJDGSJLDSPVGOPKCXZKAXIZAQBCOBNNEM");
    tmp_msg_0.lat = 0.522953609849;
    tmp_msg_0.lon = 0.265318452562;
    tmp_msg_0.depth = 0.83540757894;
    tmp_msg_0.query_channel = 186U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 11U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.61466849299;
    msg.y = 0.954840640061;
    msg.var_x = 0.250483149187;
    msg.var_y = 0.441952374924;
    msg.distance = 0.684978062508;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.0661401645515);
    msg.setSource(42529U);
    msg.setSourceEntity(162U);
    msg.setDestination(48594U);
    msg.setDestinationEntity(191U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DUMOVQECBJNXGSGMCBSSDHCWEZSCYXVZNKOFJJYPPTSACRMUPEBWDYJVDPMOYMKHNKTMUUHMXOUIETGHIJWOXFHFTTVNTCHRKKDBPVQN");
    tmp_msg_0.lat = 0.852746161991;
    tmp_msg_0.lon = 0.38619446151;
    tmp_msg_0.depth = 0.613036100921;
    tmp_msg_0.query_channel = 2U;
    tmp_msg_0.reply_channel = 238U;
    tmp_msg_0.transponder_delay = 225U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.347383949124;
    msg.y = 0.489779686849;
    msg.var_x = 0.823841466268;
    msg.var_y = 0.520318862287;
    msg.distance = 0.904618449055;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.630298291832);
    msg.setSource(25255U);
    msg.setSourceEntity(216U);
    msg.setDestination(57671U);
    msg.setDestinationEntity(119U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VDQOOFDFNJNTRYASBMPUFUYOCV");
    tmp_msg_0.lat = 0.685596164802;
    tmp_msg_0.lon = 0.949119374447;
    tmp_msg_0.depth = 0.0851500429675;
    tmp_msg_0.query_channel = 179U;
    tmp_msg_0.reply_channel = 195U;
    tmp_msg_0.transponder_delay = 175U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.439511074085;
    msg.y = 0.104989414801;
    msg.var_x = 0.659374125822;
    msg.var_y = 0.167278053317;
    msg.distance = 0.313375118496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.943786819725);
    msg.setSource(43787U);
    msg.setSourceEntity(93U);
    msg.setDestination(967U);
    msg.setDestinationEntity(177U);
    msg.state = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.564782740812);
    msg.setSource(484U);
    msg.setSourceEntity(181U);
    msg.setDestination(8599U);
    msg.setDestinationEntity(48U);
    msg.state = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.328270771333);
    msg.setSource(24412U);
    msg.setSourceEntity(26U);
    msg.setDestination(57984U);
    msg.setDestinationEntity(93U);
    msg.state = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.852195363652);
    msg.setSource(43516U);
    msg.setSourceEntity(118U);
    msg.setDestination(42442U);
    msg.setDestinationEntity(95U);
    msg.x = 0.764766980539;
    msg.y = 0.846919713176;
    msg.z = 0.805974282491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.760032261262);
    msg.setSource(26023U);
    msg.setSourceEntity(75U);
    msg.setDestination(20190U);
    msg.setDestinationEntity(219U);
    msg.x = 0.676937486452;
    msg.y = 0.235892550439;
    msg.z = 0.469369761727;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.298251325985);
    msg.setSource(30864U);
    msg.setSourceEntity(235U);
    msg.setDestination(406U);
    msg.setDestinationEntity(31U);
    msg.x = 0.0967242659533;
    msg.y = 0.732039937122;
    msg.z = 0.982740221226;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.798950211538);
    msg.setSource(14132U);
    msg.setSourceEntity(133U);
    msg.setDestination(7673U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0281758282976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.692472210465);
    msg.setSource(20509U);
    msg.setSourceEntity(157U);
    msg.setDestination(20929U);
    msg.setDestinationEntity(66U);
    msg.value = 0.440494240872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.0900726919702);
    msg.setSource(12909U);
    msg.setSourceEntity(54U);
    msg.setDestination(35852U);
    msg.setDestinationEntity(233U);
    msg.value = 0.302074179297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.227745717381);
    msg.setSource(35720U);
    msg.setSourceEntity(43U);
    msg.setDestination(52118U);
    msg.setDestinationEntity(91U);
    msg.value = 0.182043668385;
    msg.z_units = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.0678546466057);
    msg.setSource(43418U);
    msg.setSourceEntity(1U);
    msg.setDestination(52649U);
    msg.setDestinationEntity(69U);
    msg.value = 0.525052342457;
    msg.z_units = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.681608636546);
    msg.setSource(37954U);
    msg.setSourceEntity(46U);
    msg.setDestination(29094U);
    msg.setDestinationEntity(7U);
    msg.value = 0.332917004486;
    msg.z_units = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.984930437497);
    msg.setSource(19774U);
    msg.setSourceEntity(43U);
    msg.setDestination(8112U);
    msg.setDestinationEntity(112U);
    msg.value = 0.0798139715276;
    msg.speed_units = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.418286683674);
    msg.setSource(11671U);
    msg.setSourceEntity(95U);
    msg.setDestination(41082U);
    msg.setDestinationEntity(125U);
    msg.value = 0.313426455708;
    msg.speed_units = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.702280742575);
    msg.setSource(17143U);
    msg.setSourceEntity(38U);
    msg.setDestination(21506U);
    msg.setDestinationEntity(29U);
    msg.value = 0.631819499708;
    msg.speed_units = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.491984353746);
    msg.setSource(63078U);
    msg.setSourceEntity(77U);
    msg.setDestination(30095U);
    msg.setDestinationEntity(75U);
    msg.value = 0.777711803895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.537179600395);
    msg.setSource(16700U);
    msg.setSourceEntity(97U);
    msg.setDestination(34217U);
    msg.setDestinationEntity(12U);
    msg.value = 0.358800603622;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.552575633864);
    msg.setSource(59855U);
    msg.setSourceEntity(27U);
    msg.setDestination(65403U);
    msg.setDestinationEntity(106U);
    msg.value = 0.693161745604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.11455190868);
    msg.setSource(61041U);
    msg.setSourceEntity(76U);
    msg.setDestination(2699U);
    msg.setDestinationEntity(24U);
    msg.value = 0.699836102211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.57090766355);
    msg.setSource(55926U);
    msg.setSourceEntity(104U);
    msg.setDestination(14896U);
    msg.setDestinationEntity(233U);
    msg.value = 0.466584838613;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.298647895485);
    msg.setSource(58228U);
    msg.setSourceEntity(203U);
    msg.setDestination(31025U);
    msg.setDestinationEntity(197U);
    msg.value = 0.615517310446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.236548343055);
    msg.setSource(893U);
    msg.setSourceEntity(109U);
    msg.setDestination(19233U);
    msg.setDestinationEntity(33U);
    msg.value = 0.989066456965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.213649630309);
    msg.setSource(18726U);
    msg.setSourceEntity(226U);
    msg.setDestination(63499U);
    msg.setDestinationEntity(91U);
    msg.value = 0.919398039368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.975672781173);
    msg.setSource(14796U);
    msg.setSourceEntity(103U);
    msg.setDestination(36968U);
    msg.setDestinationEntity(73U);
    msg.value = 0.263883015154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.854625856365);
    msg.setSource(47762U);
    msg.setSourceEntity(134U);
    msg.setDestination(48053U);
    msg.setDestinationEntity(170U);
    msg.path_ref = 1105312873U;
    msg.start_lat = 0.490006131683;
    msg.start_lon = 0.470245091277;
    msg.start_z = 0.0705177905705;
    msg.start_z_units = 8U;
    msg.end_lat = 0.0190606505787;
    msg.end_lon = 0.986290793196;
    msg.end_z = 0.912101985874;
    msg.end_z_units = 71U;
    msg.speed = 0.992571377525;
    msg.speed_units = 95U;
    msg.lradius = 0.427458950268;
    msg.flags = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.983019208156);
    msg.setSource(44430U);
    msg.setSourceEntity(197U);
    msg.setDestination(57848U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 1065246441U;
    msg.start_lat = 0.533315890549;
    msg.start_lon = 0.602483017155;
    msg.start_z = 0.647779734449;
    msg.start_z_units = 221U;
    msg.end_lat = 0.490910359642;
    msg.end_lon = 0.530444424276;
    msg.end_z = 0.733007653904;
    msg.end_z_units = 129U;
    msg.speed = 0.729184050071;
    msg.speed_units = 217U;
    msg.lradius = 0.507749984847;
    msg.flags = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.953116650075);
    msg.setSource(21556U);
    msg.setSourceEntity(234U);
    msg.setDestination(62148U);
    msg.setDestinationEntity(99U);
    msg.path_ref = 3067922529U;
    msg.start_lat = 0.598866145796;
    msg.start_lon = 0.749282889889;
    msg.start_z = 0.930432706198;
    msg.start_z_units = 78U;
    msg.end_lat = 0.621414138264;
    msg.end_lon = 0.513011801672;
    msg.end_z = 0.178823337867;
    msg.end_z_units = 219U;
    msg.speed = 0.394890472756;
    msg.speed_units = 143U;
    msg.lradius = 0.606760175495;
    msg.flags = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.04104689623);
    msg.setSource(63815U);
    msg.setSourceEntity(43U);
    msg.setDestination(28073U);
    msg.setDestinationEntity(3U);
    msg.x = 0.038962592402;
    msg.y = 0.115710152891;
    msg.z = 0.42677060662;
    msg.k = 0.204200302033;
    msg.m = 0.100371852354;
    msg.n = 0.666592995377;
    msg.flags = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.0354131782147);
    msg.setSource(16891U);
    msg.setSourceEntity(245U);
    msg.setDestination(11126U);
    msg.setDestinationEntity(241U);
    msg.x = 0.516562327542;
    msg.y = 0.911365160135;
    msg.z = 0.134561179303;
    msg.k = 0.899468895089;
    msg.m = 0.289518384238;
    msg.n = 0.5964447675;
    msg.flags = 200U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.373438975142);
    msg.setSource(1001U);
    msg.setSourceEntity(80U);
    msg.setDestination(34904U);
    msg.setDestinationEntity(42U);
    msg.x = 0.95759885968;
    msg.y = 0.0650569002245;
    msg.z = 0.81889806395;
    msg.k = 0.374261582704;
    msg.m = 0.315329050008;
    msg.n = 0.532158123581;
    msg.flags = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.741999675537);
    msg.setSource(36041U);
    msg.setSourceEntity(38U);
    msg.setDestination(3844U);
    msg.setDestinationEntity(13U);
    msg.value = 0.0173239935922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.415876432175);
    msg.setSource(56849U);
    msg.setSourceEntity(245U);
    msg.setDestination(26590U);
    msg.setDestinationEntity(236U);
    msg.value = 0.180853731608;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.299469273703);
    msg.setSource(44936U);
    msg.setSourceEntity(192U);
    msg.setDestination(59190U);
    msg.setDestinationEntity(84U);
    msg.value = 0.637913136033;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.00539133162454);
    msg.setSource(21281U);
    msg.setSourceEntity(65U);
    msg.setDestination(4575U);
    msg.setDestinationEntity(218U);
    msg.u = 0.783169733313;
    msg.v = 0.802663240664;
    msg.w = 0.957260174964;
    msg.p = 0.556282061002;
    msg.q = 0.849678181394;
    msg.r = 0.67583293208;
    msg.flags = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.68731736111);
    msg.setSource(50109U);
    msg.setSourceEntity(138U);
    msg.setDestination(15067U);
    msg.setDestinationEntity(48U);
    msg.u = 0.835260183482;
    msg.v = 0.664608447252;
    msg.w = 0.0694085494832;
    msg.p = 0.870498148934;
    msg.q = 0.854005332602;
    msg.r = 0.800238897305;
    msg.flags = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.823571893637);
    msg.setSource(29945U);
    msg.setSourceEntity(107U);
    msg.setDestination(12016U);
    msg.setDestinationEntity(23U);
    msg.u = 0.163344601246;
    msg.v = 0.44471609703;
    msg.w = 0.329412399707;
    msg.p = 0.389857670427;
    msg.q = 0.56087439103;
    msg.r = 0.754872580788;
    msg.flags = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.0868500393409);
    msg.setSource(22404U);
    msg.setSourceEntity(228U);
    msg.setDestination(44958U);
    msg.setDestinationEntity(104U);
    msg.path_ref = 1464036436U;
    msg.start_lat = 0.7006902488;
    msg.start_lon = 0.751861102128;
    msg.start_z = 0.146105665324;
    msg.start_z_units = 8U;
    msg.end_lat = 0.397157858658;
    msg.end_lon = 0.825377492484;
    msg.end_z = 0.563312670936;
    msg.end_z_units = 187U;
    msg.lradius = 0.462145364889;
    msg.flags = 86U;
    msg.x = 0.123391581757;
    msg.y = 0.207267508477;
    msg.z = 0.0920709328831;
    msg.vx = 0.0422306681566;
    msg.vy = 0.756567131827;
    msg.vz = 0.473670539824;
    msg.course_error = 0.0758543809501;
    msg.eta = 4832U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.454068847651);
    msg.setSource(9107U);
    msg.setSourceEntity(211U);
    msg.setDestination(18786U);
    msg.setDestinationEntity(190U);
    msg.path_ref = 4250292078U;
    msg.start_lat = 0.233649079418;
    msg.start_lon = 0.573479319961;
    msg.start_z = 0.536225795323;
    msg.start_z_units = 16U;
    msg.end_lat = 0.975890108523;
    msg.end_lon = 0.291715149462;
    msg.end_z = 0.10217356151;
    msg.end_z_units = 218U;
    msg.lradius = 0.23972568876;
    msg.flags = 236U;
    msg.x = 0.0696437821079;
    msg.y = 0.381165657324;
    msg.z = 0.302264052216;
    msg.vx = 0.490651152195;
    msg.vy = 0.100174074629;
    msg.vz = 0.0512504138871;
    msg.course_error = 0.245894421395;
    msg.eta = 53778U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.418910078747);
    msg.setSource(43652U);
    msg.setSourceEntity(249U);
    msg.setDestination(14027U);
    msg.setDestinationEntity(168U);
    msg.path_ref = 1867552010U;
    msg.start_lat = 0.528479018333;
    msg.start_lon = 0.920822677415;
    msg.start_z = 0.0942294446149;
    msg.start_z_units = 11U;
    msg.end_lat = 0.740214946576;
    msg.end_lon = 0.0966085705463;
    msg.end_z = 0.344578047988;
    msg.end_z_units = 155U;
    msg.lradius = 0.621392267957;
    msg.flags = 92U;
    msg.x = 0.105423150593;
    msg.y = 0.0132250207044;
    msg.z = 0.514717912115;
    msg.vx = 0.480073577596;
    msg.vy = 0.898001591032;
    msg.vz = 0.749593116741;
    msg.course_error = 0.869065681338;
    msg.eta = 16823U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.150799587469);
    msg.setSource(41345U);
    msg.setSourceEntity(31U);
    msg.setDestination(48807U);
    msg.setDestinationEntity(193U);
    msg.k = 0.145232964795;
    msg.m = 0.986031287159;
    msg.n = 0.600687384985;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.590902882645);
    msg.setSource(33411U);
    msg.setSourceEntity(193U);
    msg.setDestination(64738U);
    msg.setDestinationEntity(220U);
    msg.k = 0.979286099065;
    msg.m = 0.795706835935;
    msg.n = 0.806369357969;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.760056904342);
    msg.setSource(21304U);
    msg.setSourceEntity(83U);
    msg.setDestination(3592U);
    msg.setDestinationEntity(116U);
    msg.k = 0.0204632226121;
    msg.m = 0.544954087913;
    msg.n = 0.170074725149;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.642059140241);
    msg.setSource(28465U);
    msg.setSourceEntity(197U);
    msg.setDestination(56914U);
    msg.setDestinationEntity(8U);
    msg.p = 0.27352134301;
    msg.i = 0.634547287215;
    msg.d = 0.622907642299;
    msg.a = 0.0718118836318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.109487096397);
    msg.setSource(29930U);
    msg.setSourceEntity(113U);
    msg.setDestination(48454U);
    msg.setDestinationEntity(206U);
    msg.p = 0.215980469115;
    msg.i = 0.177228176548;
    msg.d = 0.361871224009;
    msg.a = 0.600071885713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.994085022762);
    msg.setSource(50209U);
    msg.setSourceEntity(152U);
    msg.setDestination(25086U);
    msg.setDestinationEntity(248U);
    msg.p = 0.262120488699;
    msg.i = 0.80622577518;
    msg.d = 0.714119274716;
    msg.a = 0.232200113292;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.651029940302);
    msg.setSource(45148U);
    msg.setSourceEntity(139U);
    msg.setDestination(62192U);
    msg.setDestinationEntity(42U);
    msg.op = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.915655962377);
    msg.setSource(57273U);
    msg.setSourceEntity(227U);
    msg.setDestination(46196U);
    msg.setDestinationEntity(197U);
    msg.op = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.132360394458);
    msg.setSource(7038U);
    msg.setSourceEntity(22U);
    msg.setDestination(1911U);
    msg.setDestinationEntity(68U);
    msg.op = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.805586966292);
    msg.setSource(61296U);
    msg.setSourceEntity(123U);
    msg.setDestination(40176U);
    msg.setDestinationEntity(149U);
    msg.timeout = 10547U;
    msg.lat = 0.925792143684;
    msg.lon = 0.628811364963;
    msg.z = 0.660348097484;
    msg.z_units = 35U;
    msg.speed = 0.921656560158;
    msg.speed_units = 70U;
    msg.roll = 0.0468781969128;
    msg.pitch = 0.479658403671;
    msg.yaw = 0.623005293981;
    msg.custom.assign("ZCJGNRFBOWCSKKHGCLILOGYXKVTUOULBGKHVYEATXIZWROURLBCVPGSNSVIXYWPAAQMRWENSFMHAFTFATKNEKZONNXSWAGVCQEWYEATT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.226981112017);
    msg.setSource(13842U);
    msg.setSourceEntity(13U);
    msg.setDestination(24026U);
    msg.setDestinationEntity(158U);
    msg.timeout = 27601U;
    msg.lat = 0.986631152295;
    msg.lon = 0.933297838563;
    msg.z = 0.940642994205;
    msg.z_units = 168U;
    msg.speed = 0.121248941536;
    msg.speed_units = 82U;
    msg.roll = 0.403690448797;
    msg.pitch = 0.00731145268563;
    msg.yaw = 0.805279194591;
    msg.custom.assign("LPGMUFUEIDSKLEIVXTUUASVRTYBPVXCHAIUIQRLZNWVGGDCPBBPVJIHNQENHSBPRZTTQDUMPZPFBSXJRFROSKSCQMGDSJZHMNZAAOWDFFGZMLNZEV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.645713572832);
    msg.setSource(57717U);
    msg.setSourceEntity(10U);
    msg.setDestination(17498U);
    msg.setDestinationEntity(251U);
    msg.timeout = 28607U;
    msg.lat = 0.508472327082;
    msg.lon = 0.600497220396;
    msg.z = 0.33008771149;
    msg.z_units = 12U;
    msg.speed = 0.505120683888;
    msg.speed_units = 74U;
    msg.roll = 0.0811987888808;
    msg.pitch = 0.343139289488;
    msg.yaw = 0.037759064549;
    msg.custom.assign("IWFCTZQTHEDKLYUZZCGCNNLLLKEGCIVCZKMDNGJIKITEREWFADAIAJJJSCAXTRTVFUMMQOYBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.493724860189);
    msg.setSource(56792U);
    msg.setSourceEntity(26U);
    msg.setDestination(57554U);
    msg.setDestinationEntity(48U);
    msg.timeout = 49372U;
    msg.lat = 0.846594608032;
    msg.lon = 0.342421032225;
    msg.z = 0.875394675927;
    msg.z_units = 212U;
    msg.speed = 0.424051504889;
    msg.speed_units = 127U;
    msg.duration = 1845U;
    msg.radius = 0.260280635426;
    msg.flags = 148U;
    msg.custom.assign("GUGSHRWMPEQPRJLHMZCADHACMTYYXTCKVUZMUIGIASCQPMTWDFODSMWJBDZWFXXANOBCMIPWFJKSAOHAENRUHBJBUOYEWMKPHVQLZJSRELEXFFDJYHIPUQRYOODUEMXNDXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.492659934225);
    msg.setSource(38920U);
    msg.setSourceEntity(80U);
    msg.setDestination(8370U);
    msg.setDestinationEntity(247U);
    msg.timeout = 7637U;
    msg.lat = 0.539548700827;
    msg.lon = 0.531138522019;
    msg.z = 0.0375300854398;
    msg.z_units = 226U;
    msg.speed = 0.811713964055;
    msg.speed_units = 10U;
    msg.duration = 6756U;
    msg.radius = 0.741587615051;
    msg.flags = 151U;
    msg.custom.assign("USPNBQDEHAOGTBOGWNWFAUKMDQEAKATVPEHRMCQNVTUDVAKEKDIJHAUHNGGGHRRBXIXLZXSJEQULWMKFCFFVNTDTTMUFQJVAQDGRHSOAAJEDINGFBVFRQVWWRCHCJSIUEXQWNXXBXWMULZHIYYORZLTZXTCNSCYMBYZPCFEJSPZJFLOOCJJHGGPLIINPODKX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.0183470742661);
    msg.setSource(56550U);
    msg.setSourceEntity(18U);
    msg.setDestination(49177U);
    msg.setDestinationEntity(184U);
    msg.timeout = 62031U;
    msg.lat = 0.916370827049;
    msg.lon = 0.181012023676;
    msg.z = 0.756874443175;
    msg.z_units = 226U;
    msg.speed = 0.72222939871;
    msg.speed_units = 249U;
    msg.duration = 3063U;
    msg.radius = 0.558093781092;
    msg.flags = 43U;
    msg.custom.assign("KZVZMPSVRKQATVPMZXKSNEZIGWAERNCHGQQXFMCVFXPIHJZMYWSXFQTUOHOKJVMCDWSXMOXBNDMHUULAVEJYGIOQLIMRCNJCGUTAIBSJUDUGLPWCCYLGJEBJTTKWXPRSYYBNLCOYPRLNTBFGDZNKQADZLMHDHIWOSOGAPWZBNZYAXQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.827072681709);
    msg.setSource(59087U);
    msg.setSourceEntity(26U);
    msg.setDestination(387U);
    msg.setDestinationEntity(105U);
    msg.custom.assign("EPWNVJMJVJSAZJMCZNEDVDWMSDZFIKVOSNAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.107543623902);
    msg.setSource(16583U);
    msg.setSourceEntity(6U);
    msg.setDestination(13027U);
    msg.setDestinationEntity(70U);
    msg.custom.assign("CCGYLXWDVQABSXQCPUSQUVIYSUCAWVKMFOOHFSSIRLCRFXDGRMGJMONUEPBEFYNXEUWKKMPYFXPVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.977350607284);
    msg.setSource(38578U);
    msg.setSourceEntity(125U);
    msg.setDestination(44500U);
    msg.setDestinationEntity(145U);
    msg.custom.assign("NUGRPHTCADOETPTTCWSOULEPKIKETZQGQLVCDJGXYXYBKDJJJMJFZAJQDYKTFEKEBNJVLWQGULEXFCYBFHJDDLYWHCAOMIMNPXSAZAHSOB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.574136418284);
    msg.setSource(38240U);
    msg.setSourceEntity(115U);
    msg.setDestination(24115U);
    msg.setDestinationEntity(180U);
    msg.timeout = 5113U;
    msg.lat = 0.468177877848;
    msg.lon = 0.511867878945;
    msg.z = 0.0204602136861;
    msg.z_units = 81U;
    msg.duration = 19986U;
    msg.speed = 0.625100059897;
    msg.speed_units = 2U;
    msg.type = 166U;
    msg.radius = 0.770041881607;
    msg.length = 0.53814376241;
    msg.bearing = 0.0300593534168;
    msg.direction = 27U;
    msg.custom.assign("PWMHIRUXZQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.975302368997);
    msg.setSource(13436U);
    msg.setSourceEntity(153U);
    msg.setDestination(5604U);
    msg.setDestinationEntity(108U);
    msg.timeout = 40137U;
    msg.lat = 0.724616052451;
    msg.lon = 0.931954381857;
    msg.z = 0.48291150543;
    msg.z_units = 98U;
    msg.duration = 29231U;
    msg.speed = 0.698765677054;
    msg.speed_units = 201U;
    msg.type = 109U;
    msg.radius = 0.231231041728;
    msg.length = 0.843718443329;
    msg.bearing = 0.44370012429;
    msg.direction = 225U;
    msg.custom.assign("UFYFWLZHOCXUNVKNVOKKXWVXUVKAYTCJVKWTSYVEIIVILNMUGPCBRNGHTVGABZDRNNPFJIDANCWLNDZSAHDZCMZLBMITVGXDOYEGSCRRYGUOOEEBRDKZFPYNMWAGBPYIOLJTYOCXESLBAPRUMTSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.352903317712);
    msg.setSource(2008U);
    msg.setSourceEntity(172U);
    msg.setDestination(40923U);
    msg.setDestinationEntity(39U);
    msg.timeout = 50992U;
    msg.lat = 0.832563766422;
    msg.lon = 0.401903220531;
    msg.z = 0.587068900649;
    msg.z_units = 99U;
    msg.duration = 21345U;
    msg.speed = 0.483373501351;
    msg.speed_units = 137U;
    msg.type = 122U;
    msg.radius = 0.7787836088;
    msg.length = 0.730468773469;
    msg.bearing = 0.922729922971;
    msg.direction = 55U;
    msg.custom.assign("ETFUWJVQVUTPOTKJZVKOWAHRCFYWREQQWRFEXRBWBAHMCADVNFKLISSUGGESHULLLIOQDKIAZETQLFYTANZZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.157576039223);
    msg.setSource(21315U);
    msg.setSourceEntity(208U);
    msg.setDestination(64140U);
    msg.setDestinationEntity(249U);
    msg.duration = 57311U;
    msg.custom.assign("BXEGEYMLRQPORLTYSKBYXGPLPFQFAAOXDWCKFYGJTWXHHCJGVTHURCEUDXMMDSKQSGXJUHIIOYALDNWDKOHZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.268374309639);
    msg.setSource(60495U);
    msg.setSourceEntity(196U);
    msg.setDestination(22501U);
    msg.setDestinationEntity(116U);
    msg.duration = 10527U;
    msg.custom.assign("SDKMWPOCVDSLRBNVWHXCMIJVHKRCOGBFONXTEVWSHLKYSHAXZRQVWLRWLTJJNZPKVKJNGCLXKSIOKNSZTJYWVBGEAQSQYHPJONKAPCQHEYUEEUDDGPRQUJULSYMQDOXIMNCBIZNYMJBQWCNRTETUCLGDYGZEHYFFABUVPBORUGFXMTHMAETSTOXFBOATPJGAFFBUAVZZA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.863577574132);
    msg.setSource(16550U);
    msg.setSourceEntity(28U);
    msg.setDestination(40445U);
    msg.setDestinationEntity(85U);
    msg.duration = 2051U;
    msg.custom.assign("CSCUVUAMEFYFKFCYBOJHLBFHCKXOTEXGQQBQLAHWJRZQGWOSYKQPCWIHDASPVXNQRHLAYBEXJBPSFEGWCDNEGKRZLDPTLBRVEOASTWHOLUZNZIJQAMGVBHKUJDBBMYHWEFRKFHGOIDLCNOLVIPJZXXQMVWABTGINRCSDSTRPOIJZSTMKVLYUMGMNMDTSIRTIYFZJJUCZXTZDZURRQGFSQAMXUJYVPKNEPNUAVPVEWNNOTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.978462404864);
    msg.setSource(6032U);
    msg.setSourceEntity(51U);
    msg.setDestination(42895U);
    msg.setDestinationEntity(184U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4160007383U;
    tmp_msg_0.start_lat = 0.323502394284;
    tmp_msg_0.start_lon = 0.569003179236;
    tmp_msg_0.start_z = 0.231024506139;
    tmp_msg_0.start_z_units = 237U;
    tmp_msg_0.end_lat = 0.785531303663;
    tmp_msg_0.end_lon = 0.193829387082;
    tmp_msg_0.end_z = 0.445854514088;
    tmp_msg_0.end_z_units = 154U;
    tmp_msg_0.speed = 0.229798456926;
    tmp_msg_0.speed_units = 98U;
    tmp_msg_0.lradius = 0.439232660647;
    tmp_msg_0.flags = 32U;
    msg.control.set(tmp_msg_0);
    msg.duration = 25375U;
    msg.custom.assign("HZPTNRYLWMPYIKKFXDRMEOTWGEREVDDIFYLXZLRFJBHMSATDRMOIVFEUNTRGHVCSTRQSHIAYBJWQZYQLVEEAQJDMOCNKCHXAMPGJYHEPBGNIUZWOUWJACQGJIDWKEFSBCZMGPXYIPFMUNVOANXCTVLQWSPTUQTCDAUYHIAJVZNSEKOSWDRPQNMSTUV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.504692528761);
    msg.setSource(31151U);
    msg.setSourceEntity(160U);
    msg.setDestination(43551U);
    msg.setDestinationEntity(81U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 617041930U;
    tmp_msg_0.start_lat = 0.602393158362;
    tmp_msg_0.start_lon = 0.356205528688;
    tmp_msg_0.start_z = 0.0912638369583;
    tmp_msg_0.start_z_units = 150U;
    tmp_msg_0.end_lat = 0.210083715601;
    tmp_msg_0.end_lon = 0.950681463059;
    tmp_msg_0.end_z = 0.380106583237;
    tmp_msg_0.end_z_units = 148U;
    tmp_msg_0.speed = 0.451948819837;
    tmp_msg_0.speed_units = 19U;
    tmp_msg_0.lradius = 0.773811583635;
    tmp_msg_0.flags = 141U;
    msg.control.set(tmp_msg_0);
    msg.duration = 1289U;
    msg.custom.assign("LYQNBCZTOBNTIL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.578438459992);
    msg.setSource(6436U);
    msg.setSourceEntity(7U);
    msg.setDestination(26298U);
    msg.setDestinationEntity(222U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.66527518061;
    tmp_msg_0.z_units = 188U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17544U;
    msg.custom.assign("BENUSNBBYCCTMGTVHAOORUANZUUJWYDHHJAFVZTLWLCQAVWOHBXXURIHGRJVDAAFGLMDRHDBZXYFKPXBIOXOYTKOKKERBBWCACQXMUOJUDQHIREESYISKOMVNOGNPZUUIZJYXHCKVFQKQGIHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.909713982731);
    msg.setSource(37188U);
    msg.setSourceEntity(228U);
    msg.setDestination(59029U);
    msg.setDestinationEntity(36U);
    msg.timeout = 19834U;
    msg.lat = 0.456318025327;
    msg.lon = 0.082989894428;
    msg.z = 0.546736069782;
    msg.z_units = 78U;
    msg.speed = 0.743498234172;
    msg.speed_units = 70U;
    msg.bearing = 0.964848678278;
    msg.cross_angle = 0.609792908148;
    msg.width = 0.352553332058;
    msg.length = 0.915359616098;
    msg.hstep = 0.613993364917;
    msg.coff = 240U;
    msg.alternation = 117U;
    msg.flags = 37U;
    msg.custom.assign("PUMQGFGAYOOXCLUCFLJCHGEYJSIVYTKASESZQTWHZQWWERKLNFXUMUAVEISEZLFDTVSGBYJNQEFBPRFUEFIAKWLFHPJRBCZISWCVZUOJAXNHZTMYLNZDNEBQYGDCNAVBHWQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.535064880815);
    msg.setSource(56012U);
    msg.setSourceEntity(150U);
    msg.setDestination(64759U);
    msg.setDestinationEntity(71U);
    msg.timeout = 20234U;
    msg.lat = 0.717260550479;
    msg.lon = 0.931873241211;
    msg.z = 0.373322236732;
    msg.z_units = 165U;
    msg.speed = 0.0887164550452;
    msg.speed_units = 28U;
    msg.bearing = 0.974885445037;
    msg.cross_angle = 0.277097797528;
    msg.width = 0.846542459315;
    msg.length = 0.995623746151;
    msg.hstep = 0.229804327761;
    msg.coff = 122U;
    msg.alternation = 246U;
    msg.flags = 113U;
    msg.custom.assign("MLTBRJDDCNAABUJUKDYIJHWGQI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.401601770809);
    msg.setSource(42928U);
    msg.setSourceEntity(66U);
    msg.setDestination(37283U);
    msg.setDestinationEntity(102U);
    msg.timeout = 19988U;
    msg.lat = 0.831191936469;
    msg.lon = 0.950707364849;
    msg.z = 0.375412156119;
    msg.z_units = 79U;
    msg.speed = 0.156375591324;
    msg.speed_units = 23U;
    msg.bearing = 0.957562978403;
    msg.cross_angle = 0.548325038467;
    msg.width = 0.97413649074;
    msg.length = 0.0503612623417;
    msg.hstep = 0.411910027744;
    msg.coff = 127U;
    msg.alternation = 76U;
    msg.flags = 214U;
    msg.custom.assign("KTVZEZGBMOYFSNXRVSBECJZVQDDAOHCY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.463551786594);
    msg.setSource(65312U);
    msg.setSourceEntity(254U);
    msg.setDestination(61245U);
    msg.setDestinationEntity(54U);
    msg.timeout = 14633U;
    msg.lat = 0.887051950661;
    msg.lon = 0.791284701655;
    msg.z = 0.872712464339;
    msg.z_units = 113U;
    msg.speed = 0.797543108431;
    msg.speed_units = 233U;
    msg.custom.assign("FZBSIFSDSFLRHIOHMGFSXYJZGDKLCJQDVTICRLZNPBIAJHZSAKSYMTURGQFEOUDGPTDRABIXWRLSVVVJBMPYBMZXPMFEEZYTBWQWKYMIUFGJGZZSKDVDUXLLHJMVNJNATENLCCRBIWYADCYEODAZCPKAGWQQWHZCCSLRWUOUTTIQXODBFWHEKUOKRBOTXVJABJAYENXNCRENVPAEMSXMGVKWRPPLTFUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.812184145822);
    msg.setSource(30281U);
    msg.setSourceEntity(3U);
    msg.setDestination(13409U);
    msg.setDestinationEntity(112U);
    msg.timeout = 53755U;
    msg.lat = 0.424505615371;
    msg.lon = 0.159671936273;
    msg.z = 0.628509492924;
    msg.z_units = 135U;
    msg.speed = 0.483990208651;
    msg.speed_units = 39U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.526227201201;
    tmp_msg_0.y = 0.138475655271;
    tmp_msg_0.z = 0.654447829043;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WGTSNNLVCCUFTZDCJMFOYFGBQDQWQOKBQWYFXLUAHRUIPN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.921544319751);
    msg.setSource(26961U);
    msg.setSourceEntity(23U);
    msg.setDestination(57255U);
    msg.setDestinationEntity(205U);
    msg.timeout = 25911U;
    msg.lat = 0.088724705814;
    msg.lon = 0.5825571565;
    msg.z = 0.462764954474;
    msg.z_units = 229U;
    msg.speed = 0.358847823862;
    msg.speed_units = 169U;
    msg.custom.assign("QSEROWLLSNKVMDVWGKSPXNCWKDBFKAVYMIAPJOSCUGOFNCHHZHXSRYUODPFHAKEXGLEKHGCZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.900528834799);
    msg.setSource(60602U);
    msg.setSourceEntity(131U);
    msg.setDestination(56941U);
    msg.setDestinationEntity(197U);
    msg.x = 0.944534244575;
    msg.y = 0.985874525611;
    msg.z = 0.146378712146;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.735195320672);
    msg.setSource(57207U);
    msg.setSourceEntity(178U);
    msg.setDestination(12876U);
    msg.setDestinationEntity(32U);
    msg.x = 0.65996499192;
    msg.y = 0.482868696184;
    msg.z = 0.245904682445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.891291690338);
    msg.setSource(3958U);
    msg.setSourceEntity(100U);
    msg.setDestination(26496U);
    msg.setDestinationEntity(6U);
    msg.x = 0.557750129513;
    msg.y = 0.541184967522;
    msg.z = 0.356567749713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.664473665556);
    msg.setSource(25286U);
    msg.setSourceEntity(236U);
    msg.setDestination(7554U);
    msg.setDestinationEntity(141U);
    msg.timeout = 48019U;
    msg.lat = 0.583221974373;
    msg.lon = 0.511638750107;
    msg.z = 0.822505351076;
    msg.z_units = 10U;
    msg.amplitude = 0.769162082055;
    msg.pitch = 0.243907121075;
    msg.speed = 0.395955526447;
    msg.speed_units = 124U;
    msg.custom.assign("MZEXXGXYDACRFRCBVRAUBLEBXSZTLWRYIPAEGBTIQGGBMPOWAVPCTIKTGSEKYOFOLPKHCPRFJKCLEVQWIZQVYWDECGUPWSCNXXNEPQGMTHYBIGCANBYFJNFKZHMYQSPWMZAJLOMQEDXMRWDNJPJATDGSURZFUSNJLNIUWQZCIOKDQDXGUTBKVQYBOHFOIJOMOUMSXOSUYZNSNFFCFJUZVHLRALIAWHRKIATRJHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.96731628428);
    msg.setSource(35748U);
    msg.setSourceEntity(63U);
    msg.setDestination(51438U);
    msg.setDestinationEntity(3U);
    msg.timeout = 63388U;
    msg.lat = 0.696253622142;
    msg.lon = 0.480146397815;
    msg.z = 0.442011053602;
    msg.z_units = 246U;
    msg.amplitude = 0.190448231493;
    msg.pitch = 0.0429395549472;
    msg.speed = 0.0717702648685;
    msg.speed_units = 56U;
    msg.custom.assign("DJHYQDRMDBIIENCKAYYHPQNPFDKDWJEISOXGBERJNYBRMSYVSIUVFHOIGZDMCVHUOVIWONOHFMSPKZTCQAUZBUUCGTOGKWIHLDSLBCWPFOLRCUASEWPZHSVZVNKMYMPRGRUCRJZSTGKEZQEUDEABBEXLQQOVRFXJCXFTJLWPYVURQIHQJTSIKKBGSANQZYNX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.205028543354);
    msg.setSource(12433U);
    msg.setSourceEntity(89U);
    msg.setDestination(5877U);
    msg.setDestinationEntity(220U);
    msg.timeout = 47170U;
    msg.lat = 0.411090338397;
    msg.lon = 0.997042223341;
    msg.z = 0.321376980601;
    msg.z_units = 186U;
    msg.amplitude = 0.744789813557;
    msg.pitch = 0.850347692829;
    msg.speed = 0.790614467222;
    msg.speed_units = 175U;
    msg.custom.assign("PXJZPNBINBSXYGTGKHRSILDODDQWNVVJERFNYPLRZMOYJWDIMLADJUAAMRVNK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.871429862889);
    msg.setSource(60527U);
    msg.setSourceEntity(13U);
    msg.setDestination(50367U);
    msg.setDestinationEntity(94U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.0992930072746);
    msg.setSource(21297U);
    msg.setSourceEntity(69U);
    msg.setDestination(25721U);
    msg.setDestinationEntity(211U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.00281121359485);
    msg.setSource(39818U);
    msg.setSourceEntity(226U);
    msg.setDestination(63138U);
    msg.setDestinationEntity(70U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.303301439493);
    msg.setSource(52103U);
    msg.setSourceEntity(247U);
    msg.setDestination(51391U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.263989439619;
    msg.lon = 0.792763832428;
    msg.z = 0.934902676543;
    msg.z_units = 94U;
    msg.radius = 0.953501576946;
    msg.duration = 48049U;
    msg.speed = 0.720322298331;
    msg.speed_units = 56U;
    msg.custom.assign("ZFPXNKBIPXFVLXVUGGCBCRVEWXTSFER");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.0306385226585);
    msg.setSource(60811U);
    msg.setSourceEntity(40U);
    msg.setDestination(14088U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.219072959722;
    msg.lon = 0.827662105072;
    msg.z = 0.868409418193;
    msg.z_units = 164U;
    msg.radius = 0.328793969214;
    msg.duration = 291U;
    msg.speed = 0.247644140036;
    msg.speed_units = 52U;
    msg.custom.assign("YZKCGXWTIBZANYATPWJZPSQAZRXOKUYDZLWTWXJPUGGNUUCHHHFRNMYHHVSMXZMTASTPVUSJOJTDOFEQHLIKZNVJKGEIODTWBUTYFJNTZIJHAIHYNLQEBGBEAQYMLSFGPWDGFFZMYQBDNRVVRJVUPOMEBIVWVFCIPCBIGGCFABDLWOLILKUEJRDSUXCEDLOSQPFQPSCLKNOKTZXDORLFQNBCXKMAMWXRNHOECQPWAKCRERVAMXIEXDS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.513433142724);
    msg.setSource(48475U);
    msg.setSourceEntity(29U);
    msg.setDestination(3009U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.266649072116;
    msg.lon = 0.463855081699;
    msg.z = 0.500222885096;
    msg.z_units = 155U;
    msg.radius = 0.301682692845;
    msg.duration = 30461U;
    msg.speed = 0.615788479098;
    msg.speed_units = 133U;
    msg.custom.assign("MRIUZGOXWKPJQMVSKEHTRPDSDZQYFYBWFGXNBPFLDRHOQMUJNUMLCUHFSFCNGQEYAVISVAHENRLJEFJZBSTHKUMOGPZKYKQS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.525949702497);
    msg.setSource(32800U);
    msg.setSourceEntity(220U);
    msg.setDestination(28438U);
    msg.setDestinationEntity(215U);
    msg.timeout = 48814U;
    msg.flags = 200U;
    msg.lat = 0.797988322496;
    msg.lon = 0.224756458554;
    msg.start_z = 0.669102021039;
    msg.start_z_units = 231U;
    msg.end_z = 0.15765944649;
    msg.end_z_units = 133U;
    msg.radius = 0.78065022642;
    msg.speed = 0.974222461972;
    msg.speed_units = 2U;
    msg.custom.assign("RRXLTCZIRZQLKCOOIPWHTSUGYNCNKTQPIUGXULFEBCPRJNLQXHARKDYMHTSZGLKIAKUPCUYTXAOJSGPIFJNCFCYFEWPWMJJIVRKABFSKGTNSHIDEFELYVNJSIVWBJOMOBZYVDZJVMXHMERWAIHYGAETDCQVHZWTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.328019844364);
    msg.setSource(54336U);
    msg.setSourceEntity(78U);
    msg.setDestination(42346U);
    msg.setDestinationEntity(130U);
    msg.timeout = 45561U;
    msg.flags = 133U;
    msg.lat = 0.84669900669;
    msg.lon = 0.24153768467;
    msg.start_z = 0.173360316601;
    msg.start_z_units = 241U;
    msg.end_z = 0.492599925867;
    msg.end_z_units = 179U;
    msg.radius = 0.264221220529;
    msg.speed = 0.892507217966;
    msg.speed_units = 27U;
    msg.custom.assign("UBAMLIHPCZOZTJDEIZVSUYDGBIDTXYIMDTOCUPIVDAKPJDRXTZOIRUTGJXIHZWFMTHOYWKKAKFEQNPWHLBTUFRPLQGVVXUKCCBRWARALDMLBXFRGJAEQDETQPPCHHGXGAHVSWQDJVBWPFSFYJYBKNAEYSNGJYGXKNLUMQFIXZFCGKEF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.028370940265);
    msg.setSource(54844U);
    msg.setSourceEntity(83U);
    msg.setDestination(42859U);
    msg.setDestinationEntity(184U);
    msg.timeout = 14672U;
    msg.flags = 225U;
    msg.lat = 0.595907231973;
    msg.lon = 0.961590951835;
    msg.start_z = 0.0455553917423;
    msg.start_z_units = 129U;
    msg.end_z = 0.958392287504;
    msg.end_z_units = 78U;
    msg.radius = 0.407704864198;
    msg.speed = 0.221721425546;
    msg.speed_units = 163U;
    msg.custom.assign("UBSQDHTJQNUKEJLTZAGNZYWZWNDPUUWKMAEORKZHPHTKMVIVMFVUKCO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.333910125173);
    msg.setSource(62382U);
    msg.setSourceEntity(174U);
    msg.setDestination(56239U);
    msg.setDestinationEntity(185U);
    msg.timeout = 57245U;
    msg.lat = 0.225784521899;
    msg.lon = 0.499570192099;
    msg.z = 0.752117758665;
    msg.z_units = 5U;
    msg.speed = 0.542244860439;
    msg.speed_units = 14U;
    msg.custom.assign("BBURWMNHFOVORMHABLLEOXPCEWEWMPFSQTOIXECHOAXNLBCTQIWGHZRFYQBKZJIUWAODUIMFCNSEEKGPNRLLTJJXIPTYPYQCUZEBUTJGGHQBVVFXVUNXFNJJMWKYCVLXZLJJZVWZLDMKSIPMZCRYPRKKSZPIYNSNAQDKALOOHRFRKXCIFVRTFPNEGNEMHDGTWWSCUZQUSADFVQTBAVYPQIAHRWSDTAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.988577495606);
    msg.setSource(45630U);
    msg.setSourceEntity(20U);
    msg.setDestination(7591U);
    msg.setDestinationEntity(115U);
    msg.timeout = 39040U;
    msg.lat = 0.295440482996;
    msg.lon = 0.917112781726;
    msg.z = 0.688959129213;
    msg.z_units = 220U;
    msg.speed = 0.188009654912;
    msg.speed_units = 141U;
    msg.custom.assign("ZZHPAOJWMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.985350919663);
    msg.setSource(14105U);
    msg.setSourceEntity(19U);
    msg.setDestination(63368U);
    msg.setDestinationEntity(232U);
    msg.timeout = 36779U;
    msg.lat = 0.289024144289;
    msg.lon = 0.0296308193247;
    msg.z = 0.162168627121;
    msg.z_units = 184U;
    msg.speed = 0.298366739674;
    msg.speed_units = 17U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.145682772256;
    tmp_msg_0.y = 0.142008457625;
    tmp_msg_0.z = 0.142590662654;
    tmp_msg_0.t = 0.0589391790959;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FQGKWIPJYLOBSTVEYSLWFSMLTVJYTEJXAAKAWTOXMCRUCCAADNSMXQSHEMODZEBHTRGZINZLLZINHWIJJNJTQXTDTKCYXMEBROYYRIQOBVVZLPIUGYQLEOFPUGECQLOZKRNMNNDFUUJPRBAB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.0641693201619);
    msg.setSource(58229U);
    msg.setSourceEntity(175U);
    msg.setDestination(58336U);
    msg.setDestinationEntity(95U);
    msg.x = 0.933993120821;
    msg.y = 0.794657415959;
    msg.z = 0.481642403359;
    msg.t = 0.579267081303;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.549751475729);
    msg.setSource(27916U);
    msg.setSourceEntity(102U);
    msg.setDestination(43544U);
    msg.setDestinationEntity(2U);
    msg.x = 0.780275643263;
    msg.y = 0.161668101507;
    msg.z = 0.758216922426;
    msg.t = 0.0532799096065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.551172004843);
    msg.setSource(16521U);
    msg.setSourceEntity(119U);
    msg.setDestination(20427U);
    msg.setDestinationEntity(68U);
    msg.x = 0.523311454923;
    msg.y = 0.407891703556;
    msg.z = 0.0687090171939;
    msg.t = 0.807067158772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.687723213509);
    msg.setSource(24527U);
    msg.setSourceEntity(189U);
    msg.setDestination(64448U);
    msg.setDestinationEntity(60U);
    msg.timeout = 28816U;
    msg.name.assign("AOQQRFOEDHTUAIWVYNNXXQDRCLUEQFUGJOWBEOLUYTTVTQPOYFWOJMFUYNMLIIIZELTKVTKWNWNMWQWHDAIQGLPZJPNIEQXRSBPGMLMZGCPAFXBCYZYFHCJRILHXCZUXRUUBGHQANHSKDOMVMRPANVYFHDEVPYIIEJFNCOPTAIRJDPQYESJWSKGGDTXHJLCZSDHYJUDXBZVGBHAOKZLTGBFFPSRX");
    msg.custom.assign("KECKHLGYAMUUYEZBTRZZBEDNPAHNPSNFEYXEWFCHBJUCBBRZJKZPAXWUKYAQUDMRAHVEOGSTVDMDQDNBWQEGAYJKDPUDOMTNIJQCILXJNMFYCVZSPRXFXQRIOIUEVJHRVQFNOIXDSAOGXCPXSHNTXBVSDVWLCOWKLFUYPTGMWKHSGHJUGIDABFYNFMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.694559327131);
    msg.setSource(49778U);
    msg.setSourceEntity(195U);
    msg.setDestination(26749U);
    msg.setDestinationEntity(130U);
    msg.timeout = 12795U;
    msg.name.assign("OKXHDLDTRXEACPRKSXLSFPUBBTZNETTDHEIAOOEIGWAUNLFAPJIONWFWUNIJRYYBJYX");
    msg.custom.assign("IGAYIZXULCMGUTNXSNJBCVSSOWTZQHLYQLXNOVHGCHQEGJYSDBCWIYZTPKBEPALBBQKCSMLOJAMHDDLWKZBCW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.092315738148);
    msg.setSource(20291U);
    msg.setSourceEntity(205U);
    msg.setDestination(34452U);
    msg.setDestinationEntity(21U);
    msg.timeout = 14325U;
    msg.name.assign("CUDCRLLUXRJCHACHHSXWGPYZUSVTYTERIJCPXYIVBHOTOBJDGNTNGZKGHDETBAOJSXOVMWCQHIUZFLEAVFNCMEQIRQRVKSNUMJNUSNWPJOEWFSZMTPZDAHCTQPLMFWDORFUSSGGWEREGDBCZFOUOUFPYVATXWKLOIZFBGBAVMQBVVANENQISLKRAZKPBDXHWZEXAUKKWMHXYWZKBQYQIILCMEXBPLDJFVNRITYSLGM");
    msg.custom.assign("PZXLKHZTBIUFBROVRLFPWNEADODKWXFCCBSWJBTUFKOOBRISOZFKNTUDAVVDIJZFNEIIETTWJCTHNQDNLZWJHVAALUXYHIMMMBGSUPOUQQAFFEMKEMGCKPLSELZHQROCJUWGYUTCORICVWQSRYDANQRSBXGXIOWVYFEINPBXHYAFHRGEKUUCARTYQXJCXGGYPLZVMJKWVBQPTYIDZSMWMSQEKXVDLGJMOJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.792871036787);
    msg.setSource(53952U);
    msg.setSourceEntity(9U);
    msg.setDestination(18857U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.0867167835453;
    msg.lon = 0.204794593305;
    msg.z = 0.290744949118;
    msg.z_units = 76U;
    msg.speed = 0.936239452319;
    msg.speed_units = 84U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.714991700771;
    tmp_msg_0.y = 0.837394398188;
    tmp_msg_0.z = 0.809740095045;
    tmp_msg_0.t = 0.206926229782;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.72536940137;
    msg.custom.assign("YAYUJVKLDTHNGRFPGWWRBQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.880679631453);
    msg.setSource(45354U);
    msg.setSourceEntity(121U);
    msg.setDestination(7141U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.318511862899;
    msg.lon = 0.311089172706;
    msg.z = 0.0061515725827;
    msg.z_units = 63U;
    msg.speed = 0.46196891808;
    msg.speed_units = 179U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28187U;
    tmp_msg_0.off_x = 0.0462783988647;
    tmp_msg_0.off_y = 0.25231887062;
    tmp_msg_0.off_z = 0.246073382849;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.582489983571;
    msg.custom.assign("NKWKIEOPGQSDDFNOEDFKMOPZQQUAQAIQHCCTXLYPKVNGALYLYHLXERGXEIGPWHKWPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.991084507844);
    msg.setSource(64956U);
    msg.setSourceEntity(245U);
    msg.setDestination(61115U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.0342029149184;
    msg.lon = 0.497270552478;
    msg.z = 0.543732482712;
    msg.z_units = 143U;
    msg.speed = 0.614534394715;
    msg.speed_units = 136U;
    msg.start_time = 0.89281405482;
    msg.custom.assign("GZODYIPBRJEOAWDMIACILHMJNEHYKMXQPFMUZWBHZCRAWAGOVBTOCGPLLOFJIVISHOKGLROPRDRZIYSRKKUQXFEFPTNLDICMNTHBGQJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.488484410734);
    msg.setSource(47434U);
    msg.setSourceEntity(197U);
    msg.setDestination(44465U);
    msg.setDestinationEntity(181U);
    msg.vid = 9835U;
    msg.off_x = 0.251690490158;
    msg.off_y = 0.00631735060633;
    msg.off_z = 0.266590847796;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.0933363106149);
    msg.setSource(50720U);
    msg.setSourceEntity(152U);
    msg.setDestination(19004U);
    msg.setDestinationEntity(213U);
    msg.vid = 59421U;
    msg.off_x = 0.241857449423;
    msg.off_y = 0.832527424559;
    msg.off_z = 0.668760094712;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.543372231433);
    msg.setSource(27423U);
    msg.setSourceEntity(186U);
    msg.setDestination(37080U);
    msg.setDestinationEntity(211U);
    msg.vid = 2645U;
    msg.off_x = 0.926453399762;
    msg.off_y = 0.479578246354;
    msg.off_z = 0.360519043587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.217029035727);
    msg.setSource(14915U);
    msg.setSourceEntity(52U);
    msg.setDestination(35276U);
    msg.setDestinationEntity(107U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.245124782224);
    msg.setSource(48281U);
    msg.setSourceEntity(37U);
    msg.setDestination(54582U);
    msg.setDestinationEntity(7U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.0212288614313);
    msg.setSource(32040U);
    msg.setSourceEntity(130U);
    msg.setDestination(43076U);
    msg.setDestinationEntity(171U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.0921964842546);
    msg.setSource(42296U);
    msg.setSourceEntity(219U);
    msg.setDestination(12703U);
    msg.setDestinationEntity(194U);
    msg.mid = 16944U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.843091700222);
    msg.setSource(37557U);
    msg.setSourceEntity(217U);
    msg.setDestination(60811U);
    msg.setDestinationEntity(56U);
    msg.mid = 4922U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.352861359841);
    msg.setSource(61918U);
    msg.setSourceEntity(39U);
    msg.setDestination(51603U);
    msg.setDestinationEntity(181U);
    msg.mid = 49378U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.153418191678);
    msg.setSource(6101U);
    msg.setSourceEntity(24U);
    msg.setDestination(7655U);
    msg.setDestinationEntity(205U);
    msg.state = 12U;
    msg.eta = 15684U;
    msg.info.assign("SXVYICFAOBSTCPFNXJCWXMGHXVQBZMEWVDEKTSFTOZVIQTITR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.321955651626);
    msg.setSource(17462U);
    msg.setSourceEntity(70U);
    msg.setDestination(40405U);
    msg.setDestinationEntity(173U);
    msg.state = 70U;
    msg.eta = 39156U;
    msg.info.assign("PIBCMPTXSUXFVVGGRPXHPZMLHBJDWLHMOEAGCVKCIBLXIGLQJBVXEFDACQSDBFRYBOVZAZZCNYKAHSIUMNLNOIAGTANKMDYNSBTCLLWUPFFDEQKDRUYVBJOICBQDRJDZIQTZTWFAQRKEMYYNSPJNURSMXZTAGOZUEEZVXVWANHQSRIOYCUYLQEOVKRINWQESHTAFMGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.59580582784);
    msg.setSource(28768U);
    msg.setSourceEntity(215U);
    msg.setDestination(60744U);
    msg.setDestinationEntity(229U);
    msg.state = 80U;
    msg.eta = 55038U;
    msg.info.assign("BQWELOSOLTLKMWUNMKTHQQTGSQBQBXAJJWCZUFKMKIJUFNYTXSREZTAMTQGZLVRGYVTCWCXWOFIADXURXKMAZJHQXPEBSJEBCLXRLBFEVVVLFDVGRBKDHINMCNUSRDVVSFNJUHAIDFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.243440160052);
    msg.setSource(63333U);
    msg.setSourceEntity(191U);
    msg.setDestination(32863U);
    msg.setDestinationEntity(100U);
    msg.system = 35218U;
    msg.duration = 64920U;
    msg.speed = 0.90826565382;
    msg.speed_units = 81U;
    msg.x = 0.382137679268;
    msg.y = 0.939201334907;
    msg.z = 0.240721477775;
    msg.z_units = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.884647732083);
    msg.setSource(32124U);
    msg.setSourceEntity(2U);
    msg.setDestination(59738U);
    msg.setDestinationEntity(55U);
    msg.system = 17233U;
    msg.duration = 25411U;
    msg.speed = 0.976241578288;
    msg.speed_units = 81U;
    msg.x = 0.605613631869;
    msg.y = 0.861838778146;
    msg.z = 0.824443019016;
    msg.z_units = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.380344820933);
    msg.setSource(34483U);
    msg.setSourceEntity(192U);
    msg.setDestination(21257U);
    msg.setDestinationEntity(31U);
    msg.system = 40501U;
    msg.duration = 23429U;
    msg.speed = 0.152780317533;
    msg.speed_units = 154U;
    msg.x = 0.0495705996892;
    msg.y = 0.498360645285;
    msg.z = 0.0521854687374;
    msg.z_units = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.560504992401);
    msg.setSource(867U);
    msg.setSourceEntity(201U);
    msg.setDestination(17838U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.756127835238;
    msg.lon = 0.0485952486335;
    msg.speed = 0.0609020607491;
    msg.speed_units = 42U;
    msg.duration = 32781U;
    msg.sys_a = 47415U;
    msg.sys_b = 26931U;
    msg.move_threshold = 0.95635314972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.994071227328);
    msg.setSource(28013U);
    msg.setSourceEntity(142U);
    msg.setDestination(32683U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.452684531884;
    msg.lon = 0.405889070812;
    msg.speed = 0.980287178365;
    msg.speed_units = 160U;
    msg.duration = 13603U;
    msg.sys_a = 59250U;
    msg.sys_b = 38960U;
    msg.move_threshold = 0.722178356379;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.422796206495);
    msg.setSource(849U);
    msg.setSourceEntity(83U);
    msg.setDestination(63537U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.733516978672;
    msg.lon = 0.465325287226;
    msg.speed = 0.0606112977202;
    msg.speed_units = 68U;
    msg.duration = 20622U;
    msg.sys_a = 42098U;
    msg.sys_b = 64309U;
    msg.move_threshold = 0.112412963275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.903624985617);
    msg.setSource(29626U);
    msg.setSourceEntity(67U);
    msg.setDestination(39247U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.716517167091;
    msg.lon = 0.489293673616;
    msg.z = 0.264436011916;
    msg.z_units = 253U;
    msg.speed = 0.0819030687935;
    msg.speed_units = 1U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.405876523052;
    tmp_msg_0.lon = 0.854724945773;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JOJSXQMSTKHOIZQSJBWUSPKNLHYYKUMFVGPBTRDOCQDWFJUGYHGJZFRZHDKSWQBJRKALRMEOXBPFARDWWIQACTKZISDVTNXZQNFMZZMYYTEUJXSRTVFNXBPANFDACGAWTUXPMEXHAJLEVQQYUEUWYCM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.909832840242);
    msg.setSource(5376U);
    msg.setSourceEntity(55U);
    msg.setDestination(63966U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.640074528676;
    msg.lon = 0.125849751985;
    msg.z = 0.268225850195;
    msg.z_units = 175U;
    msg.speed = 0.543535484077;
    msg.speed_units = 87U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.472994217585;
    tmp_msg_0.lon = 0.0916312561811;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HUOYAFPZYARTNMKPLSXEPJDNINGGJTOHTSZDMNWFBMYPQDHXBJETRYIVLKNVBSUIEVYHJZUTIOKPPAOVDIRWBPPGZHIVNLUSZAGJLWGQBFYXXOUYJIZRRKPDHGOWCDUCWBHZHBUXFEGBEOTGJWAUORSALTQM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.736622770498);
    msg.setSource(22598U);
    msg.setSourceEntity(227U);
    msg.setDestination(37224U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.726609266631;
    msg.lon = 0.405205369005;
    msg.z = 0.119772776188;
    msg.z_units = 29U;
    msg.speed = 0.553172781101;
    msg.speed_units = 37U;
    msg.custom.assign("QTCRSFCWGMVPUABWTMDXMPVNEQIHILZBCNIESQPSJPHMOVIJUXKALNQKYHBIJZUHWYR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.832110007912);
    msg.setSource(19184U);
    msg.setSourceEntity(40U);
    msg.setDestination(5603U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.325183724183;
    msg.lon = 0.127265360309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.0580553981237);
    msg.setSource(2097U);
    msg.setSourceEntity(133U);
    msg.setDestination(34116U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.943005534365;
    msg.lon = 0.201368053144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.137980472225);
    msg.setSource(7088U);
    msg.setSourceEntity(152U);
    msg.setDestination(28083U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.942565269358;
    msg.lon = 0.54734626611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.502618239196);
    msg.setSource(59609U);
    msg.setSourceEntity(102U);
    msg.setDestination(59067U);
    msg.setDestinationEntity(73U);
    msg.timeout = 37U;
    msg.lat = 0.268156033052;
    msg.lon = 0.913367761421;
    msg.z = 0.0113264418768;
    msg.z_units = 33U;
    msg.pitch = 0.929916056805;
    msg.amplitude = 0.380936192122;
    msg.duration = 45641U;
    msg.speed = 0.826822850051;
    msg.speed_units = 107U;
    msg.radius = 0.118712295021;
    msg.direction = 231U;
    msg.custom.assign("EXIWQVKICSSPBWTZWUPJVQIFCADTNRMAQKGXLPXMOUKARHOQDSNEMJPYDPLKAVZVMFHYPWHVD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.925432562224);
    msg.setSource(47648U);
    msg.setSourceEntity(13U);
    msg.setDestination(34952U);
    msg.setDestinationEntity(95U);
    msg.timeout = 36231U;
    msg.lat = 0.0392459512241;
    msg.lon = 0.421557169087;
    msg.z = 0.992884731197;
    msg.z_units = 157U;
    msg.pitch = 0.906441413184;
    msg.amplitude = 0.118209541118;
    msg.duration = 2885U;
    msg.speed = 0.848287083072;
    msg.speed_units = 122U;
    msg.radius = 0.57348439705;
    msg.direction = 232U;
    msg.custom.assign("WBCGXJAYLVPMDYHNVHFTNGJFROBRZEPCDDBNAESLKUNGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.732190320612);
    msg.setSource(39795U);
    msg.setSourceEntity(76U);
    msg.setDestination(36452U);
    msg.setDestinationEntity(153U);
    msg.timeout = 22558U;
    msg.lat = 0.724858360665;
    msg.lon = 0.296866717144;
    msg.z = 0.31097918401;
    msg.z_units = 152U;
    msg.pitch = 0.60239911585;
    msg.amplitude = 0.833660425192;
    msg.duration = 64667U;
    msg.speed = 0.811518465359;
    msg.speed_units = 185U;
    msg.radius = 0.776642771795;
    msg.direction = 95U;
    msg.custom.assign("HSAIWKWDQEIVYH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.934821363241);
    msg.setSource(5297U);
    msg.setSourceEntity(71U);
    msg.setDestination(11960U);
    msg.setDestinationEntity(80U);
    msg.formation_name.assign("UFIQZSRSPRHKCLWJAEJAFDMAFHKFCITLPDNFCPKDDDGGXPHCSNKWVDZDXBTRYTOWNZXQSPPFGJOJGPXVYPYLDQOMDGLNJMLBOMNNXAQYQUYFQLAZUARHMMWTCWBSLQITPWKZDOBVRKABUHEBXBTGUKRNTYISAZIMCBVMEXEWRCHJEVJGYUNHVFPZGFHJEBL");
    msg.reference_frame = 16U;
    msg.custom.assign("NOIJWVBRKIRGSZSVYITJGUQYLPYLLQDGBHNWWLUPXDMJEGSIMYXUEBQFWQUHRYLYGGSRGHBLAWOJFAMMFENQTHBWIDT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.903579872651);
    msg.setSource(58596U);
    msg.setSourceEntity(26U);
    msg.setDestination(23077U);
    msg.setDestinationEntity(44U);
    msg.formation_name.assign("RDGWSIPZBQNX");
    msg.reference_frame = 197U;
    msg.custom.assign("CSUPWMOWVTIWQOQTWQBDYLAEMLBCXWOHDSNDPQJFRLBRFSXNNKWUFWIXSGINGLJYSJAAPFBYPFNKUPIKOUMTGYEGOXIVQYEIHIHKVTWLQGPXHGHZKDJCBLSLHRUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.405676410895);
    msg.setSource(6949U);
    msg.setSourceEntity(225U);
    msg.setDestination(12971U);
    msg.setDestinationEntity(228U);
    msg.formation_name.assign("SERXQOZKTVIDVQEMFSJJSSZORBSGKRAQBUWYOCLHOUPNQ");
    msg.reference_frame = 237U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49149U;
    tmp_msg_0.off_x = 0.213099912082;
    tmp_msg_0.off_y = 0.59269780038;
    tmp_msg_0.off_z = 0.981844534256;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WAJPJPQBSSYBLLZORSCWXADHMTJSPDTASHPRWCNTOTAYNZNVXMRAVCKZZDVLSNITMIEUUIGVXEPACDIUDGFYBUHBABIJKQWXRPRGGQGECOHFWZJHPCGBOXYWJJFKIYTOXSNHMQQXIQANEZAEOOLVKYLKUHTMMNCXMISRUZEZBDUIMIDFMCHRUSNGVFDBWQXFUTSPZBLWOVTLYFKJUKOROYRLVLRKELJHDEMFNGWYTPYFG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.86397741941);
    msg.setSource(45118U);
    msg.setSourceEntity(188U);
    msg.setDestination(33175U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("EQPOLBEXUBAJEOBQYETFYSGXZHSCYVANZNALQPIFCYKXCEOJNDCDRMWJNLRVLRRVZBVSURUJPQTHKJHDMUUNUZHVIWQWVPEISTUCQBKXNZHFSAOCNGHRLMOTTYNYMHSAGOBMZBTGRDEJUTJSMWYCLFDGHRNCDSMFIKBVHLGGLKTPRWEZPIXMOLHGNTFXUFI");
    msg.formation_name.assign("LXOQNNDJKCZHGMWASQDXIJXKVYSVVBDJXFYWLGLUSBJHEUXOUQTUWFMRUIRAPOVPUOZPSPBGXQOYRAEDCZGUFFNVLCUFDMESPYABVZCHITMEBLI");
    msg.plan_id.assign("KZHIBXKQRRHGGCJVNKPQCEIYAMGPTHOXLBQTZDLAEODCCNDVWQUOFVYJMBGBDUYSNJWOJUQHSOGLSOZCOVLHHJFRUFZSTPFMCXUISQDLETZKEXEEGHVAWCHSMACUGTKXJNFNYANIVRRFFWWMUHTRXEBIJWRIKTAYALTDTYLZCQVVPXRNPEQGVDIPKLZJSCYJWXLHQBFYIROWSNMKXYBLWEF");
    msg.description.assign("VWHEPRTBSIGSFRNWDGQQJQHZCDTFPZSCVMAINBNSQLYLXJTUXCOXXHETKDFFZVKPFIBEFVICPZWVBWHFSOPAGKIRRWAYKWFGIJGLDJWCBHRHCGBFKEYDKXCYLONOVZRKSUQGYTLBIXBOZJXZTEMJBVUOXUIVNGIQKNSMDKMQLPOCLVS");
    msg.leader_speed = 0.356233183539;
    msg.leader_bank_lim = 0.930000767327;
    msg.pos_sim_err_lim = 0.889299713636;
    msg.pos_sim_err_wrn = 0.408524569811;
    msg.pos_sim_err_timeout = 38129U;
    msg.converg_max = 0.346307030693;
    msg.converg_timeout = 17931U;
    msg.comms_timeout = 65366U;
    msg.turb_lim = 0.716873020447;
    msg.custom.assign("AYWCGQBDEXDVSNUCVQIAPKWZFTAPNEVMXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.832057730501);
    msg.setSource(11618U);
    msg.setSourceEntity(247U);
    msg.setDestination(40118U);
    msg.setDestinationEntity(141U);
    msg.group_name.assign("XAKKSGDZYMPQQVVKGQGAQWCEIQLHXLOHMFEEOJOWMICXZERIXNKMEABRWTYGSKFURUFNTMDXVJSHKGHZABYASUBHOINVBLIJUKRBPJNXLTPDROYFWHYWTSHTDRVAFSSBRDWXBJCQWDNLIJTZGNZCCZZNRZGDLOYFSGCQGDKEZVUCDLQOTGIBRMUQKYVMQXTPOPVAAPEBLWEFFVJPMOAOAEYSBPCXTECPMYYJVNNCXZTJWIRHLNDLPUUUK");
    msg.formation_name.assign("YQKGVMGSECJGRMPLVCIECQOCYWBDHERMWFOOIPXRWFWAQXGOKLFJDREOYNGLYUUZFIACOWGEFKSKQGHKMVJTCIZPWREZDAEXKYFKXJXUUUTDLZMSUQMQIOEWVSQTRNFXDHJCPUNBBSSZBNEUYWLNTTBQHZAHDNTIGIJGVLHTNJXKVPDXATJUHDBNCCZICQSBRWALOGZFLKLVDNTOIXMMBQAAALBZPSNYJEJKSXPBSODFRPPTAHRVR");
    msg.plan_id.assign("DHCPBFNGXJSZVMGHAQWRUBORPZUBUCNHJCDVQEELEZHPMPUGIYUKIQAIMQJRMWTGCBIXZFGXKWIIJVOSFPVWKKFLVYSRARZZTGNHFSWCGRYOLQNLOJWHRNBHXGYBQMJNJOBKTDQAZXXNPRDSAXIFJMFHVKMHKWVJLDEFNYDXASTOIBZJUURETKTCEIZFXMHDPPLDNOGSSEWWALOGYPWODF");
    msg.description.assign("IYRHFMHYQZHADYNIIVKHOSOKZKGJELQFMAVHEUFFDGLBMQOZT");
    msg.leader_speed = 0.616789175215;
    msg.leader_bank_lim = 0.18612185851;
    msg.pos_sim_err_lim = 0.426302512654;
    msg.pos_sim_err_wrn = 0.15138241921;
    msg.pos_sim_err_timeout = 50749U;
    msg.converg_max = 0.958197363026;
    msg.converg_timeout = 17749U;
    msg.comms_timeout = 60778U;
    msg.turb_lim = 0.889060534964;
    msg.custom.assign("TCGEZUJWXLCAKEKLGKGBLUYKNUQDBEDTUSMIDLZWJABZROHMGSIVQBAECPCQJWZOBUROHONUDJCASSPAGHAUYHWTMIYFGOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.386207603085);
    msg.setSource(60816U);
    msg.setSourceEntity(162U);
    msg.setDestination(4075U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("BUNSFPIHVATHHCAROPVGENWBSVJPWWKAHEJAJXCSWKIYOYEFBUMDSDQFODPFGYMFPZBJLAZDQLNIBIGLNKQLCEMMSPYJYFLEVLEQHIRMBPUUYWCGDZMCWMEFNUCHTDTQRKMZSJNXDABLGXVNWKSKEHKARLQTZSHXCARQLKUTJKXXOGGCRTF");
    msg.formation_name.assign("SCMZZPJZEJZWSHCNWRTTQWIZBXKTKFKPCNADOFYGUNBRXSXPKGBMLEAWGHIKUJZC");
    msg.plan_id.assign("LIDOGEFCJNSOYWABRCGJBDENDMXHUIIXUSHBCMYXHUTVACVVCHDSJHOHMQALJIYSFLXWZUEXXAFMPVCFKWXCVDYADRCFLWNQQTKNWWPGOOSJUUFTRZTZBEVDKWWNNFQJMTWXFT");
    msg.description.assign("LHSHZVHVZUSJSYWMFMEMJAXOOPCVCNBVVKWYDFIXQBRTQGHUPQFFRSRWSTLPWHDPJXTHTKEVNMSKACUHPJIWDWPGBTKGZPEDUBXRAASLDUMFZQICDOZWMVCICL");
    msg.leader_speed = 0.586863847885;
    msg.leader_bank_lim = 0.0923259582721;
    msg.pos_sim_err_lim = 0.751826554955;
    msg.pos_sim_err_wrn = 0.278622425842;
    msg.pos_sim_err_timeout = 61825U;
    msg.converg_max = 0.590294544055;
    msg.converg_timeout = 2925U;
    msg.comms_timeout = 8831U;
    msg.turb_lim = 0.915100777844;
    msg.custom.assign("IYPKNKZOLPKGDGTGOJBTVALSSMMONQVWPAUDFOPCWYPENKBIZTYLQSHVZFIICKLBMZNVNJSLRJWNLBKOITMHGNHNUDSNCXRKVDPABQQHRPIETCFONEGPQLSUBAYQWJTJCIHYMWOFRIDBGQEHXYVADVMXYVUEHKFWQJGEBURSAEMEZDUOFSLCCUZCTQQRREWFLDOAYLYKZFCBIJXUVUSWJXXFPADHUJTVTMBXWAHZRRRD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.424733553932);
    msg.setSource(13477U);
    msg.setSourceEntity(119U);
    msg.setDestination(33408U);
    msg.setDestinationEntity(19U);
    msg.control_src = 38794U;
    msg.control_ent = 4U;
    msg.timeout = 0.554592610595;
    msg.loiter_radius = 0.758266903067;
    msg.altitude_interval = 0.366453357694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.902847485165);
    msg.setSource(51503U);
    msg.setSourceEntity(80U);
    msg.setDestination(18314U);
    msg.setDestinationEntity(251U);
    msg.control_src = 64665U;
    msg.control_ent = 190U;
    msg.timeout = 0.0954470051428;
    msg.loiter_radius = 0.223406911399;
    msg.altitude_interval = 0.224381480026;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.855516586548);
    msg.setSource(84U);
    msg.setSourceEntity(212U);
    msg.setDestination(31407U);
    msg.setDestinationEntity(76U);
    msg.control_src = 56071U;
    msg.control_ent = 232U;
    msg.timeout = 0.609001512092;
    msg.loiter_radius = 0.805643358325;
    msg.altitude_interval = 0.233197020733;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.235170410671);
    msg.setSource(15025U);
    msg.setSourceEntity(174U);
    msg.setDestination(42535U);
    msg.setDestinationEntity(245U);
    msg.flags = 241U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.163351859805;
    tmp_msg_0.speed_units = 100U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.591939355499;
    tmp_msg_1.z_units = 161U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.934005229785;
    msg.lon = 0.772433316171;
    msg.radius = 0.275018582853;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.20181357633);
    msg.setSource(2706U);
    msg.setSourceEntity(151U);
    msg.setDestination(1396U);
    msg.setDestinationEntity(197U);
    msg.flags = 99U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0700704174875;
    tmp_msg_0.speed_units = 229U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.757499199588;
    tmp_msg_1.z_units = 173U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.278932062271;
    msg.lon = 0.966181523799;
    msg.radius = 0.476019261373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.599688421311);
    msg.setSource(13621U);
    msg.setSourceEntity(198U);
    msg.setDestination(51071U);
    msg.setDestinationEntity(79U);
    msg.flags = 159U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0789888224933;
    tmp_msg_0.speed_units = 185U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0814211867447;
    tmp_msg_1.z_units = 250U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.100354407521;
    msg.lon = 0.448590855247;
    msg.radius = 0.50402118798;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.375756777265);
    msg.setSource(41631U);
    msg.setSourceEntity(59U);
    msg.setDestination(61066U);
    msg.setDestinationEntity(56U);
    msg.control_src = 8067U;
    msg.control_ent = 140U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 250U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.739061627796;
    tmp_tmp_msg_0_0.speed_units = 34U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.479452853825;
    tmp_tmp_msg_0_1.z_units = 155U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.11753925976;
    tmp_msg_0.lon = 0.175458238301;
    tmp_msg_0.radius = 0.94184901805;
    msg.reference.set(tmp_msg_0);
    msg.state = 245U;
    msg.proximity = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.663294491133);
    msg.setSource(49525U);
    msg.setSourceEntity(70U);
    msg.setDestination(52891U);
    msg.setDestinationEntity(200U);
    msg.control_src = 62202U;
    msg.control_ent = 36U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 206U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.323857075512;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0670987604023;
    tmp_tmp_msg_0_1.z_units = 188U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.381362294808;
    tmp_msg_0.lon = 0.244322039091;
    tmp_msg_0.radius = 0.46770813418;
    msg.reference.set(tmp_msg_0);
    msg.state = 62U;
    msg.proximity = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.436909911978);
    msg.setSource(5601U);
    msg.setSourceEntity(200U);
    msg.setDestination(20087U);
    msg.setDestinationEntity(231U);
    msg.control_src = 40998U;
    msg.control_ent = 122U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 141U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.855673837506;
    tmp_tmp_msg_0_0.speed_units = 136U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.679124556997;
    tmp_tmp_msg_0_1.z_units = 138U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.222372160189;
    tmp_msg_0.lon = 0.0203586693134;
    tmp_msg_0.radius = 0.193041951303;
    msg.reference.set(tmp_msg_0);
    msg.state = 109U;
    msg.proximity = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.894446334938);
    msg.setSource(38096U);
    msg.setSourceEntity(82U);
    msg.setDestination(45956U);
    msg.setDestinationEntity(19U);
    msg.ax_cmd = 0.717734443092;
    msg.ay_cmd = 0.122377512812;
    msg.az_cmd = 0.293931388638;
    msg.ax_des = 0.449566215798;
    msg.ay_des = 0.441665456042;
    msg.az_des = 0.0714624005512;
    msg.virt_err_x = 0.325706240204;
    msg.virt_err_y = 0.265893425214;
    msg.virt_err_z = 0.366104272128;
    msg.surf_fdbk_x = 0.103627625213;
    msg.surf_fdbk_y = 0.0444558804609;
    msg.surf_fdbk_z = 0.678906753;
    msg.surf_unkn_x = 0.640812172481;
    msg.surf_unkn_y = 0.777664172485;
    msg.surf_unkn_z = 0.112802368677;
    msg.ss_x = 0.784993934289;
    msg.ss_y = 0.237706074052;
    msg.ss_z = 0.159419180738;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JFVXABNUAPFLBOAZXHVUQOZFSHXKFQGALMMFMXGVJXQDVCTJAVFXBSIYWYKDHLWTJTTTQZYTGVCSLMWCUHILEBDDUZPARCRVWXPOZYAGECICYKENNRVGRIIIJISYLBBIPKFLKFY");
    tmp_msg_0.dist = 0.446840272883;
    tmp_msg_0.err = 0.14437297492;
    tmp_msg_0.ctrl_imp = 0.215400864584;
    tmp_msg_0.rel_dir_x = 0.79701199704;
    tmp_msg_0.rel_dir_y = 0.0764904880253;
    tmp_msg_0.rel_dir_z = 0.245040747709;
    tmp_msg_0.err_x = 0.652776039222;
    tmp_msg_0.err_y = 0.362890672375;
    tmp_msg_0.err_z = 0.661185694706;
    tmp_msg_0.rf_err_x = 0.953890819443;
    tmp_msg_0.rf_err_y = 0.477401493373;
    tmp_msg_0.rf_err_z = 0.598697927196;
    tmp_msg_0.rf_err_vx = 0.743789690733;
    tmp_msg_0.rf_err_vy = 0.0776495646774;
    tmp_msg_0.rf_err_vz = 0.892359243169;
    tmp_msg_0.ss_x = 0.616788954625;
    tmp_msg_0.ss_y = 0.0352758715182;
    tmp_msg_0.ss_z = 0.356495567334;
    tmp_msg_0.virt_err_x = 0.607521656855;
    tmp_msg_0.virt_err_y = 0.802813863171;
    tmp_msg_0.virt_err_z = 0.360513104379;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.678924148868);
    msg.setSource(12636U);
    msg.setSourceEntity(49U);
    msg.setDestination(22557U);
    msg.setDestinationEntity(194U);
    msg.ax_cmd = 0.687981494159;
    msg.ay_cmd = 0.132615393996;
    msg.az_cmd = 0.531479522006;
    msg.ax_des = 0.366665314373;
    msg.ay_des = 0.264355212087;
    msg.az_des = 0.187402348508;
    msg.virt_err_x = 0.230547732566;
    msg.virt_err_y = 0.00341130692018;
    msg.virt_err_z = 0.428052551377;
    msg.surf_fdbk_x = 0.775990281964;
    msg.surf_fdbk_y = 0.96463752332;
    msg.surf_fdbk_z = 0.230156194108;
    msg.surf_unkn_x = 0.168202723201;
    msg.surf_unkn_y = 0.734145489823;
    msg.surf_unkn_z = 0.0830450468581;
    msg.ss_x = 0.283882200448;
    msg.ss_y = 0.327443632963;
    msg.ss_z = 0.258528449379;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.0433294239136);
    msg.setSource(40780U);
    msg.setSourceEntity(162U);
    msg.setDestination(6085U);
    msg.setDestinationEntity(237U);
    msg.ax_cmd = 0.397060446738;
    msg.ay_cmd = 0.890124619032;
    msg.az_cmd = 0.0951149478237;
    msg.ax_des = 0.211014893714;
    msg.ay_des = 0.47386753674;
    msg.az_des = 0.307482808718;
    msg.virt_err_x = 0.905276776269;
    msg.virt_err_y = 0.00798655131375;
    msg.virt_err_z = 0.638798069347;
    msg.surf_fdbk_x = 0.762997146164;
    msg.surf_fdbk_y = 0.842857661467;
    msg.surf_fdbk_z = 0.877341171735;
    msg.surf_unkn_x = 0.965532520457;
    msg.surf_unkn_y = 0.47538476375;
    msg.surf_unkn_z = 0.873511484725;
    msg.ss_x = 0.789403390524;
    msg.ss_y = 0.58308554478;
    msg.ss_z = 0.716807940722;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VXWTMGEYDLDXPFISMDYORQNQFPTYQVUPWCHOEKCYIVDSAKKLQOBODFCZFVLGKDRZSPFQTACEANVMNTYCYNRBVSQLKPNIOTEAJGAMIKVHDAZZGTKSKHZBNJ");
    tmp_msg_0.dist = 0.0346239711641;
    tmp_msg_0.err = 0.121418420206;
    tmp_msg_0.ctrl_imp = 0.455151795319;
    tmp_msg_0.rel_dir_x = 0.165587505628;
    tmp_msg_0.rel_dir_y = 0.664523997977;
    tmp_msg_0.rel_dir_z = 0.26376243185;
    tmp_msg_0.err_x = 0.535123478399;
    tmp_msg_0.err_y = 0.902899322936;
    tmp_msg_0.err_z = 0.730644332054;
    tmp_msg_0.rf_err_x = 0.292437665709;
    tmp_msg_0.rf_err_y = 0.460388862535;
    tmp_msg_0.rf_err_z = 0.878181063226;
    tmp_msg_0.rf_err_vx = 0.131720796035;
    tmp_msg_0.rf_err_vy = 0.51209720429;
    tmp_msg_0.rf_err_vz = 0.674280434312;
    tmp_msg_0.ss_x = 0.537141606993;
    tmp_msg_0.ss_y = 0.780674193188;
    tmp_msg_0.ss_z = 0.654579307294;
    tmp_msg_0.virt_err_x = 0.643895737054;
    tmp_msg_0.virt_err_y = 0.423666485036;
    tmp_msg_0.virt_err_z = 0.822652807706;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.547169017949);
    msg.setSource(50524U);
    msg.setSourceEntity(53U);
    msg.setDestination(5731U);
    msg.setDestinationEntity(62U);
    msg.s_id.assign("CPKDETCOUYAWNIDSNGFOQFNXMJSIDZYOHGVVQLXJJLFDUDKEYZXAPRISZTWBRYNKZVOHBWBXODZWZKREMHEQUSCUZTZKAOHSIWJYFMWTRICKOACNGFWSJGULCMZJXENTMRHJALTPDHKQUOVPJXCWJDVPHYVMIHRXSGTGNTXLCB");
    msg.dist = 0.0427188322497;
    msg.err = 0.689268801994;
    msg.ctrl_imp = 0.403575418102;
    msg.rel_dir_x = 0.643451077544;
    msg.rel_dir_y = 0.923250833494;
    msg.rel_dir_z = 0.637882173864;
    msg.err_x = 0.14960646962;
    msg.err_y = 0.501732874947;
    msg.err_z = 0.883811134972;
    msg.rf_err_x = 0.503425485996;
    msg.rf_err_y = 0.279530150729;
    msg.rf_err_z = 0.884743498828;
    msg.rf_err_vx = 0.892220541923;
    msg.rf_err_vy = 0.127814475965;
    msg.rf_err_vz = 0.459580370918;
    msg.ss_x = 0.0232414452175;
    msg.ss_y = 0.974281994705;
    msg.ss_z = 0.265290556625;
    msg.virt_err_x = 0.117358521972;
    msg.virt_err_y = 0.128060931216;
    msg.virt_err_z = 0.48818052853;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.738628363072);
    msg.setSource(16060U);
    msg.setSourceEntity(166U);
    msg.setDestination(1812U);
    msg.setDestinationEntity(3U);
    msg.s_id.assign("TKANFCDEZJNEIMFBNVYKRXLLURRIDFYDPJNPKBSQYVTLKLBPGHSOEFCRHKHOAGTQNTZJEQBPLVSCFUY");
    msg.dist = 0.0561770928939;
    msg.err = 0.648033039364;
    msg.ctrl_imp = 0.691700663781;
    msg.rel_dir_x = 0.973029550929;
    msg.rel_dir_y = 0.713204797097;
    msg.rel_dir_z = 0.959614629291;
    msg.err_x = 0.414600384384;
    msg.err_y = 0.165707670324;
    msg.err_z = 0.843447213294;
    msg.rf_err_x = 0.165513222213;
    msg.rf_err_y = 0.931988189658;
    msg.rf_err_z = 0.0821799936735;
    msg.rf_err_vx = 0.0508174278232;
    msg.rf_err_vy = 0.805678806574;
    msg.rf_err_vz = 0.22818807551;
    msg.ss_x = 0.499883287537;
    msg.ss_y = 0.110649046003;
    msg.ss_z = 0.683572073852;
    msg.virt_err_x = 0.941369885863;
    msg.virt_err_y = 0.33615630879;
    msg.virt_err_z = 0.25770733797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.483289373279);
    msg.setSource(45905U);
    msg.setSourceEntity(64U);
    msg.setDestination(54209U);
    msg.setDestinationEntity(73U);
    msg.s_id.assign("MAMKCTTPRJGGNFVLENS");
    msg.dist = 0.310903090386;
    msg.err = 0.711849879208;
    msg.ctrl_imp = 0.77699015763;
    msg.rel_dir_x = 0.385254802461;
    msg.rel_dir_y = 0.741066512974;
    msg.rel_dir_z = 0.146316015025;
    msg.err_x = 0.191039910821;
    msg.err_y = 0.629904790772;
    msg.err_z = 0.0129509234618;
    msg.rf_err_x = 0.685488341302;
    msg.rf_err_y = 0.0266265005736;
    msg.rf_err_z = 0.872841654668;
    msg.rf_err_vx = 0.932576858422;
    msg.rf_err_vy = 0.935714241153;
    msg.rf_err_vz = 0.696716077301;
    msg.ss_x = 0.782877157652;
    msg.ss_y = 0.856607118346;
    msg.ss_z = 0.894834630646;
    msg.virt_err_x = 0.663012017561;
    msg.virt_err_y = 0.219059444598;
    msg.virt_err_z = 0.660273309891;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.747513789705);
    msg.setSource(52160U);
    msg.setSourceEntity(207U);
    msg.setDestination(41657U);
    msg.setDestinationEntity(166U);
    msg.timeout = 35860U;
    msg.rpm = 0.669686590934;
    msg.direction = 32U;
    msg.custom.assign("CBEFBWPICNVXIAYBRBELALGDREUKTPUFSIPPLUCCPDPRNXJSPTJTTHHBDMHUENOGKWOJZVMIRANKXVEYJQAVKNMTYDVMVMLFZCZLZMEZBJBAVCHOGNQCQLAEIZQOOWTYHUZLOSJDYGZYEWOPJUASPCXQDXLSXYAXDLJWNTMGRRWYG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.666727633314);
    msg.setSource(53261U);
    msg.setSourceEntity(154U);
    msg.setDestination(8183U);
    msg.setDestinationEntity(40U);
    msg.timeout = 46394U;
    msg.rpm = 0.379360423827;
    msg.direction = 198U;
    msg.custom.assign("SKSBMGSZEJEMAJDFDETJXOGIOHNDOYYDTJWVWXEERUMJEXEQGXKINPNGCSICQIPPLGXBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.0870984606671);
    msg.setSource(50761U);
    msg.setSourceEntity(81U);
    msg.setDestination(45345U);
    msg.setDestinationEntity(218U);
    msg.timeout = 19102U;
    msg.rpm = 0.587340857847;
    msg.direction = 226U;
    msg.custom.assign("LJUFSQWCVDTNXYTJVNJBFFNTTIDQHRIMFETKHAHZUWMAUWVINLEKLWYHUCREAKCDSYVXZYOYPYMRPUPHXWZXXJNNOWKQHBRVPHQOAGGZXQCSKLQKVGBIGACVYVABXRXVRDBDEBSFOJSBAOKRPCMIDSHBJDDOOIISKFTUSNTLCGBJJZIRZRGASLPOENMQCHXEDKCVUTALQOEWXGYRL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.855314465117);
    msg.setSource(18334U);
    msg.setSourceEntity(10U);
    msg.setDestination(22237U);
    msg.setDestinationEntity(2U);
    msg.formation_name.assign("IDOVMJYHHBAEKMTNCLKFRSUOEYWVOGZBJGJASMXJAWLQJJHGKHYQIUGHMBUDEAAIXPBGNVLHIWPWWDGXURTEXVUGLDIBEWPPVRDSNTNSTRLYYFVURHIEYCZSCSPTKXDRFUFQUZMEQESCDNXXKYFAZRTFMJWKLUYZGKZNMAOSANHPNJOQKHPBZWNBSLIQFJCDCXVBPCOMPQCLQEVTKOXMARJQKWBAFTSHUTYGPOFICDQFLVDTWOI");
    msg.type = 23U;
    msg.op = 69U;
    msg.group_name.assign("HMBDTUKLOWGQMIERXJRGJNEQZDLZIPYOWBDMHJLZEHTCPBUKASYMSXBNLNCQWAVXWDQAHHKUOCCFINDLTGUNWXPODAWFEYKFFQE");
    msg.plan_id.assign("EFIBZMSXAWHNUPTZBBVCWRIYBUDEIWYZWBAZYNWWPGLNKJFYVKBTADILOGSGOGCQJRCBPFHQTJZSQDSWZSFOJJLEHSOPRRJUETRDFZHUKXYPFAXPMWFZLMXSAQKMRCQKQSPKPDUIAHNGYXRXH");
    msg.description.assign("XYLDHKDUJKFJQSIZUNGHYTFBZJAXUUKJMVRKJEEXIAHOKGX");
    msg.reference_frame = 136U;
    msg.leader_bank_lim = 0.88746985376;
    msg.leader_speed_min = 0.197376168187;
    msg.leader_speed_max = 0.339179417388;
    msg.leader_alt_min = 0.838159063319;
    msg.leader_alt_max = 0.0622800384824;
    msg.pos_sim_err_lim = 0.897380089496;
    msg.pos_sim_err_wrn = 0.307799817245;
    msg.pos_sim_err_timeout = 27347U;
    msg.converg_max = 0.840343373542;
    msg.converg_timeout = 62927U;
    msg.comms_timeout = 7457U;
    msg.turb_lim = 0.604573623595;
    msg.custom.assign("EZTTCKFPIMJADFNWVVSJFQZCHMNKGYFUWFAJPKMCQUNMIUZAGTYKOYULGYKJXELZVYSINBDOJUDEVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.290544071523);
    msg.setSource(37069U);
    msg.setSourceEntity(231U);
    msg.setDestination(57132U);
    msg.setDestinationEntity(194U);
    msg.formation_name.assign("LGCCCDJAQYULCYRATUSMOHOUXSVKKHSTVRAYNYELMTIGPWTGXRFVCSZCIAUWWLYOODGISQMHFTLGDFAJJUZNDRRKEBNNHHQWLJBPQYFRIGDNXDJBPKBKSMNMGXXPTOHQMMOVFIZKROXPVEDBDYWKCTBZVAUQEBIDSEGQBZAXOWJVPKJUZVWEMFLVBPUQILOXOLZCNSXEPPAFPFYJWIQJJCGERIQTNHSNXVRSHUEAIWWTLHY");
    msg.type = 141U;
    msg.op = 68U;
    msg.group_name.assign("AHBJOSZCLBKPVSHIGVXQIURPIRKUMSCJOFGTPQEFCZVTUTQKPDXSTCBAXWONXRGPKSXBARGJSWLKYNRDLQVZYFGDXYKOIW");
    msg.plan_id.assign("JFNJJJVQPUMXUFDHYCXZTTZGKAKINLESCIXUXWRRYFAKWINUIISNCRSIGNGRRSNIFVMBOYSFXHDOHUPCWDVONOWEAUCZXESAEOUKRZMJYMBNKFEYQHEYYWLYVBTZVLTHQNJPFXHWAVWWSGKVTHAWOKRXCMOJQSOUDZOSGHBKFXEZPQJLGZMJHPCLDLQHTIMZERAQXPYTEPBDVSYPMKITUZJVBAKIDBRBEGAQB");
    msg.description.assign("DZLDXAFMNJFOIIXTWMPLVAQPOUBVFFHGCKDNRXORTUFYYYLDJQSIQBTGCTPESTBKRWTKMRYI");
    msg.reference_frame = 54U;
    msg.leader_bank_lim = 0.479573360074;
    msg.leader_speed_min = 0.779779387513;
    msg.leader_speed_max = 0.0051730387093;
    msg.leader_alt_min = 0.706188250093;
    msg.leader_alt_max = 0.667106749542;
    msg.pos_sim_err_lim = 0.354239667742;
    msg.pos_sim_err_wrn = 0.320137371403;
    msg.pos_sim_err_timeout = 13200U;
    msg.converg_max = 0.786361846275;
    msg.converg_timeout = 2942U;
    msg.comms_timeout = 31370U;
    msg.turb_lim = 0.0980287780917;
    msg.custom.assign("KLKQRUFCTYXSCJCNVREQGKKGZRBWGIOUOJVFEWBYOTSCGEXXNWNLOTDOXNNZZTHKQCQZBXGVYGPKYEANULQXIWHAEMBKXDDECVHMMOWHPZBRAIWUEPVMRSIJTIJYNGPWMZHUPNRZSDNHTGKJAKSJYBTLYUYYPUWFQPBYJLHPQVEGMDJBIUHWCMWXEIDQCNTFZAXOTLIELPPODZOSIVOQAIDJXFSVMBULFLDVHT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.105571097824);
    msg.setSource(63739U);
    msg.setSourceEntity(234U);
    msg.setDestination(37519U);
    msg.setDestinationEntity(233U);
    msg.formation_name.assign("IZRPNVPFBFYIZQLVLIPKHOVAOQYMZCCATTAJNSZSYDOVNPAAUTWVQIBNMWBEEMNSO");
    msg.type = 49U;
    msg.op = 97U;
    msg.group_name.assign("DWEIGJMHZQUZTTQTPLTXBKJECISKHUSNGTBQAURNIPLYDANCYSUHWFZIBTBSNWYDIZCVFCBOQMVWXGRHFNVWGNUMLZRBRHQFNFGAPYAPYUJZTXMAXBHOPAQEFESDLVZILSMPQROMGLARUVFXAODLQYOKZEKPRVKRFJCO");
    msg.plan_id.assign("ZFIEHFVZECOPZOFIIEUSPQGYXBMLQCRGKBZPRVBHVUMLYBNTVHCRRGSSTMUDXFANCANNCAQUCYJPAKVMXXLTYYDEUXVPNQHQHRWXLCJMXEKQMEKRLTWOGGWHJMUODDCTYPZFTWKGKMZHUNPCJBNFKBOODOADSJGWFIVVZBWSSFZZAPGDWASFDIGRAIVWMKVJKGSLBLJYXXDISMQLTJXCETFTNOSETAJWYLULIOENIRNHJQ");
    msg.description.assign("IALENKFLJDGKIGSJJFBTODBAXWCRIIQBJCBDKRPEUXFVTPEPJWDVGXCOGGPIQQURTAKAZHJISRXPA");
    msg.reference_frame = 4U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60204U;
    tmp_msg_0.off_x = 0.861436722419;
    tmp_msg_0.off_y = 0.927826810896;
    tmp_msg_0.off_z = 0.775936261056;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.247300678924;
    msg.leader_speed_min = 0.180551492224;
    msg.leader_speed_max = 0.31503791455;
    msg.leader_alt_min = 0.0427157353306;
    msg.leader_alt_max = 0.538665064551;
    msg.pos_sim_err_lim = 0.245763449055;
    msg.pos_sim_err_wrn = 0.72561124371;
    msg.pos_sim_err_timeout = 34555U;
    msg.converg_max = 0.343896951616;
    msg.converg_timeout = 53569U;
    msg.comms_timeout = 57034U;
    msg.turb_lim = 0.355045131961;
    msg.custom.assign("THPKVIUPOAIHJDXPJWTQRODHQFVGRNHOARSGSQNWZLMNYVZPKINCQROGVEBKBXCJGJRDSPDCDBIUAULCHBJMNYBOCOPRYGCUXCDSGOLFWTIZMUQXFPHLKEFTTZRBKLPZJGNHVDCMQKMSPDJHSWVAZTNMHOGIOXUMIAKTSVZVQWELFQWDLRDWXKYYEYGFIFEAQLYLVJFCUMWIIETRXRVSMXZWUXOSUFEBTEUGKNZABMSHJCEKLANEXAFY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.0802040261314);
    msg.setSource(17556U);
    msg.setSourceEntity(26U);
    msg.setDestination(33027U);
    msg.setDestinationEntity(101U);
    msg.timeout = 8424U;
    msg.lat = 0.489460496741;
    msg.lon = 0.328988323529;
    msg.z = 0.672792033905;
    msg.z_units = 132U;
    msg.speed = 0.57326040274;
    msg.speed_units = 16U;
    msg.custom.assign("PTWIZUXRMHNOEYCICJIQLFXHMXVWLMENKBKAPEFKSYDPWLSQUWPDROHCVSAIVEYSTTPNUVXAPRPDUQQZHYZBZOTICQBCTHEPVWWGMGJPHRUXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.324255620923);
    msg.setSource(42501U);
    msg.setSourceEntity(196U);
    msg.setDestination(63776U);
    msg.setDestinationEntity(192U);
    msg.timeout = 32106U;
    msg.lat = 0.867803541683;
    msg.lon = 0.432612122248;
    msg.z = 0.127531616223;
    msg.z_units = 167U;
    msg.speed = 0.942668470084;
    msg.speed_units = 167U;
    msg.custom.assign("CRPSTKZHNVCSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.51514977744);
    msg.setSource(11145U);
    msg.setSourceEntity(249U);
    msg.setDestination(21016U);
    msg.setDestinationEntity(236U);
    msg.timeout = 63962U;
    msg.lat = 0.546223568823;
    msg.lon = 0.474052480187;
    msg.z = 0.804699235451;
    msg.z_units = 168U;
    msg.speed = 0.954620896745;
    msg.speed_units = 39U;
    msg.custom.assign("YGSNJWMAECQSXGXLMLKIRTVCZFQFXWZBBPQLHVHSFLPREPWIVYKNYZQDOJKUCAJDIKDFRAEVAWITYUTPFXQDAIEZGMIHPNUAQHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.409910629382);
    msg.setSource(29978U);
    msg.setSourceEntity(84U);
    msg.setDestination(64248U);
    msg.setDestinationEntity(143U);
    msg.op_mode = 190U;
    msg.error_count = 183U;
    msg.error_ents.assign("EDFSKQGFXQSXJJBZKLZHNBOGEZXCWHKHBGCQEWJJGRDOYUIEXWGPYFAYGAYWHZJHGZEMMFGVWOBSWPKREOHOLZTLUPFBRFZPMNDNQCIEZSLNICMIMRKEVPPTMSLZCTNYQVRMTBXAFQHSVHQWLUUUDTAAOWFPPFBLBOQIXVARYAMXTKJBADANTTMSYOPKNCUZCTCRXVADNQRPXYKDVLCUHOFNVIWLOMNWYLQSX");
    msg.maneuver_type = 59581U;
    msg.maneuver_stime = 0.676536434999;
    msg.maneuver_eta = 21882U;
    msg.control_loops = 2772756498U;
    msg.flags = 62U;
    msg.last_error.assign("BINLUKHAMYBACBORRURVIXHAYXSJLMNEPHUBVGECJSIARKOQFXDHKULXGOBSYCGWOTNXTRAYQUSZPQEWOTPDWSTSYQLYDGCJSHQFMCZFSYWLFMMZRINVMEXIREHEXGGHAOUOVXZDVJJSHWSGCOFDGLTBAVYHTEB");
    msg.last_error_time = 0.376028950887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.919760157664);
    msg.setSource(49585U);
    msg.setSourceEntity(24U);
    msg.setDestination(20341U);
    msg.setDestinationEntity(113U);
    msg.op_mode = 234U;
    msg.error_count = 78U;
    msg.error_ents.assign("MDHGXFIKWNSWFPUERURROAKZHJNMCDWUJOAXBETEMDSTFLWYSYFCOXNTSGEFEMLVHTRUZYAPMXTPQLUJPGVUXZURNQYYPINUNQJXDHAOTAJLYQRXHSDOMTIKTZVCELT");
    msg.maneuver_type = 20792U;
    msg.maneuver_stime = 0.632046262338;
    msg.maneuver_eta = 23050U;
    msg.control_loops = 1432593975U;
    msg.flags = 133U;
    msg.last_error.assign("XMLHBXGGOYNFMVAOWEPRQMVAVEECIXVTKVWRHSHGOEGAMVZCBLDJZTFPJXVYWEBHNCNTSKRBKOJUDLSCBXWINCIIOUHROPDVECBPLSLWTMYMTUDGRJYHINPSKQEZKHQFPFAYOQGZFRXRBTDIYJPFVXWCKATSGNSNMWOBCDDAYTMQRLLJVSNPAHZYZFXKQGCOTZDXAAQZS");
    msg.last_error_time = 0.169948620831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.686530571655);
    msg.setSource(21227U);
    msg.setSourceEntity(54U);
    msg.setDestination(58731U);
    msg.setDestinationEntity(138U);
    msg.op_mode = 142U;
    msg.error_count = 250U;
    msg.error_ents.assign("CBEQCVHSQNFDCJZZBLOKEVQWTJTOBBSDUVXFJOWRYUNISXKXUMSJZRGLMHXUCXEDQMOIOWIFJLIPUQWWZJMKRYPFWHALBTTNQVAHBBDRPZYJUIRJQBDLVYTFHVOMQNKVSVOUOXCGGRNEEKHTHSF");
    msg.maneuver_type = 50096U;
    msg.maneuver_stime = 0.848523095453;
    msg.maneuver_eta = 30750U;
    msg.control_loops = 1319743321U;
    msg.flags = 133U;
    msg.last_error.assign("IJMINLJOFBZPENWNZAWRNAKOLYNWAYHVVYRJYRGTVHIHBCVMHNLPQWTSRNGYQBTRLLKTCZRXVUYJPQOSHAOMBFBXOUZSUKHQSUOYQSGVCDAWYXSMIQBKSGHMPETCVWDIZEYHHDCDBDMZGAXKCF");
    msg.last_error_time = 0.658783597908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.39183389278);
    msg.setSource(9847U);
    msg.setSourceEntity(41U);
    msg.setDestination(46870U);
    msg.setDestinationEntity(35U);
    msg.type = 51U;
    msg.request_id = 41851U;
    msg.command = 133U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 59904U;
    tmp_msg_0.lat = 0.835638004745;
    tmp_msg_0.lon = 0.738202025869;
    tmp_msg_0.z = 0.408991320125;
    tmp_msg_0.z_units = 182U;
    tmp_msg_0.pitch = 0.0319688557232;
    tmp_msg_0.amplitude = 0.339713141519;
    tmp_msg_0.duration = 21789U;
    tmp_msg_0.speed = 0.634481785671;
    tmp_msg_0.speed_units = 24U;
    tmp_msg_0.radius = 0.267220712671;
    tmp_msg_0.direction = 130U;
    tmp_msg_0.custom.assign("NNLUZRVOOXELBXBYHNPRKJQSJVRAWIDPRCFDIBTNKUAQEOSWHMIELPTLTKTHOVFUTHMLNNYEWWKUYZRLSGMFMLDMYKDGZGZHBVXHUWIGPXRXVKTDFOPESQTGKIJWBPQZAVBLQCVSMELSBRAEZUAAJDPEMOUEYWVTSSQGFQWMMCAOBVICKNXAREWVLYJBRGCHFSNYTJQCSPFYHODRGGWFCUJTZPYAXUJDXC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41477U;
    msg.info.assign("AQIOMOKFZXSQLEPBTRXQDVRHJNXJKHWYJCEWITRWWNVPUFTSGFVNLYTJPGGNCHSJOPMVHTFBATAUYXISJLUKZMFFYUNKVDYZITUHYKWEQUFPGDHLQHAKNPEWXDHDXVOBLQYRWIQBSAIJBMPEIKOASDCZWZRXCANNZNQVGJBIXZJUYBAXERSBLUSRGEFXGGQCYRJKOCVCUMEYAKWVOFGOMSDMUMIAMPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.828994048131);
    msg.setSource(6904U);
    msg.setSourceEntity(179U);
    msg.setDestination(63109U);
    msg.setDestinationEntity(197U);
    msg.type = 230U;
    msg.request_id = 22997U;
    msg.command = 180U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 57248U;
    tmp_msg_0.lat = 0.979380843474;
    tmp_msg_0.lon = 0.904695567188;
    tmp_msg_0.z = 0.830992149759;
    tmp_msg_0.z_units = 139U;
    tmp_msg_0.duration = 64845U;
    tmp_msg_0.speed = 0.609876302058;
    tmp_msg_0.speed_units = 136U;
    tmp_msg_0.type = 102U;
    tmp_msg_0.radius = 0.0521386163422;
    tmp_msg_0.length = 0.806841284514;
    tmp_msg_0.bearing = 0.828502379343;
    tmp_msg_0.direction = 173U;
    tmp_msg_0.custom.assign("PKONMHLUSUCHVJEYAGBLQLEKORKGCMCQXNJLAMUHDVBOMFVZTFYUXXRPVOASZUHKGGEUIBABBXXBFJDIQWDEEVTRSJDYKRBNBRYSBTWIRYSUTSRNGQXCOGBPAGK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55128U;
    msg.info.assign("BPLYEVLIWRZXWUZCJRWDITYKVADUTEIGMGPNLLVKTHJQMAXGJYBCOFGOJGRMMDOEXLZIRBRTDCJLKL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.932452327571);
    msg.setSource(48178U);
    msg.setSourceEntity(123U);
    msg.setDestination(4542U);
    msg.setDestinationEntity(120U);
    msg.type = 182U;
    msg.request_id = 47530U;
    msg.command = 102U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 37355U;
    tmp_msg_0.lat = 0.988697080143;
    tmp_msg_0.lon = 0.378049631843;
    tmp_msg_0.z = 0.996426074127;
    tmp_msg_0.z_units = 15U;
    tmp_msg_0.amplitude = 0.398400790841;
    tmp_msg_0.pitch = 0.184068202614;
    tmp_msg_0.speed = 0.847159439395;
    tmp_msg_0.speed_units = 125U;
    tmp_msg_0.custom.assign("TJHCVSFWKWIDZFYWXURJUIHQRUHIKYLVLSYXZLKQTEXHCFBONCIQGJAYORZNLPIBOKFQKLVUVNEDUDDHNCEFSMNBXVRBUKOJOFDBCAKRTHACPTYXDAZPWZICMMRAEEXNAMDCPQEPOUBZJEHSRZSHNGAIQQELOFMMZFS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27263U;
    msg.info.assign("WZZXJBHXTUHMRHRZPEIBTSFHKEXNQKCMFQMLAKRNGNDEQXWBTDKIRCLCYGKOBOAGHIPAKRBYWEIFRDPBKDHGXNHQYGXSPOOFLPTBYNOEPTNLPLYWDVTNYZRLUUUIFZMMFPJHLDUVFYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.462109591055);
    msg.setSource(1416U);
    msg.setSourceEntity(223U);
    msg.setDestination(10711U);
    msg.setDestinationEntity(76U);
    msg.command = 95U;
    msg.entities.assign("YOKROAREPOJNJLZIUUGNAHCIKCAJAQSWJDTNVBHDLKCXZD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.10785091152);
    msg.setSource(9001U);
    msg.setSourceEntity(97U);
    msg.setDestination(16178U);
    msg.setDestinationEntity(80U);
    msg.command = 122U;
    msg.entities.assign("MSKIWQJMEIMTZCJWXZUAPWLTZOFCDZOWGOFAJOHKUJOAQIUXJTREZMSJLYYRTCYRGRHUPZRDBXYCJBHIGELOXNTLUOLLZPXTNVDSIZDWUVIVPPAJEEENGKLNRSXSIUKFJCMRQKCOQRGPKNYHMGVSTXATQVBDNXBLYGFWYEWSDDPYIAEMQHHIVLBDHVWRBPSAAQBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.546564708198);
    msg.setSource(32433U);
    msg.setSourceEntity(164U);
    msg.setDestination(15002U);
    msg.setDestinationEntity(180U);
    msg.command = 222U;
    msg.entities.assign("WDLDHAPTNWZSPZMLZVNRKXNIVGSKSEVGBDXIFDYTQKGMYUVEHNIBFFFPUDINATZZEMADDXOLCLAWEXCWAOJSJYFCZMYSJHUZJVQOPQGJRADMLONCBUKMJRTJCQPSINVEGRWUEHLBIVKPVXRKLJTKTSAPCGXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.230021828689);
    msg.setSource(32796U);
    msg.setSourceEntity(105U);
    msg.setDestination(16215U);
    msg.setDestinationEntity(152U);
    msg.mcount = 32U;
    msg.mnames.assign("BECGDJMHDKLCYSUZAMOJVNWNPCFDVRMORBFYSIOULHQA");
    msg.ecount = 51U;
    msg.enames.assign("NKXSNLRPDEGBSBOGIGLWAAHGQIQQBVSJBSTKUTCEAIZZJIUEACPFOQIROTFTB");
    msg.ccount = 147U;
    msg.cnames.assign("HAJZTQTLNHZEVARCJSRVCTQORRTJZHACVDKOXAWFYUFYCTMGLXFSCMLXWTGOCBZMXTWPFIKEIIVJVWNTJPYDCOSGQAIEHIRDSXXDYQHLBBLNMWYKIUAPPLSSANWNXOPDLPBNBFZRUZYMTNWOHKJHCSLYPXWMSPDUZMKQNPTIKBUAKDJENBLYGHWOJABDQMYMSPEFRLCDJQFIZGVYUAFQEZRHEQSBUGFR");
    msg.last_error.assign("SXPQPJRUVFVWQBSRAMQKNEFYTPYSETZAHWHWDUBLZXLLEXZGKJESJSUIISAXTVSBYWMWKKJBVKEAFYUOLZRTPHWSHHXBIDPAIHCVRLZNMOUNZEUAODEQLIQVQHBICZKYXCCJIIFVCSMVGDPOOVGHMTHPGDHJROWIJINKBXYJZNEMJSOMQUQGBGBONTGAMQOMDGUATDFXANAFFNYPY");
    msg.last_error_time = 0.33036000709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.0553024101601);
    msg.setSource(3469U);
    msg.setSourceEntity(118U);
    msg.setDestination(35528U);
    msg.setDestinationEntity(100U);
    msg.mcount = 233U;
    msg.mnames.assign("IZQVBUIMLMVWSMTRAPMGGHARUGXYZZWSRBSZVKBNDAEREVYWCPOJUHLNBNILYKEFJXHNXFTIWJUBBVDCUAJAGIPJBSFRZYPUPZSUX");
    msg.ecount = 142U;
    msg.enames.assign("SZJXUQNFIJMGXAETQHRHPDFKKEWWUMNMNZWUY");
    msg.ccount = 168U;
    msg.cnames.assign("SZLCYLQAMDKBQABOGWVJEQPNYKASLWMARFCGLRYVNLNJAHLICYYOGWNUYAEZNTSXJTRAMBSRUKJNKXGQQTWTVXHSUYXJUMVCKCFFSXHTMWDFJWZAKWOXQEIGNMVNLZHCFMNRQPPCPJITRGH");
    msg.last_error.assign("PRIRXNPSMOTA");
    msg.last_error_time = 0.994469749441;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.0819972612675);
    msg.setSource(35806U);
    msg.setSourceEntity(36U);
    msg.setDestination(1825U);
    msg.setDestinationEntity(32U);
    msg.mcount = 105U;
    msg.mnames.assign("KGNYXXLYIFOYPOLTNVVCIPQDNSTDKBOWQOTTOEBVGLVRVDGUKSUBXAAGMVJXTJILPVPQAXRLDHPJAQCEQBYDLFTYAIQFUYKHZCNEMMUOKMKBFDEDKMQSRIWCBNLZWHWUEYAHIVHXPSQWEFXOKNBUNRFCRBMZALCEIVGGZXXQUZZCNEGMMEFJSPRRGHZRYHMJFR");
    msg.ecount = 111U;
    msg.enames.assign("NDNLPMOMAJGUGIMKGBPIETBVOUGYUZUTSSTLFIEPPHNMXYLTDPEZIKBQGOCRSHBLMPCZOWGTINPCNAQBAEUKIXLOEDSYFWSJPOAWQHXKLFZULATVFCRFWJCUACNWRJFEKMMETYGRVKXSWYT");
    msg.ccount = 149U;
    msg.cnames.assign("UANPSNHJQJDOCKEVLFOMIAGFRKWUXELWRVBNSLMMVFXRZWQCRDJPWRZLBYQBNICYCRYTAPRBCKQBSFMZQEXTPRBELAVHDXWHZSXLUMVCZYGKNTTNAKURXEAQAFJZENHDNJHMQOGKGQAICTVLFYIOMKDIJAHEGTXBDWTZGHGVAKNC");
    msg.last_error.assign("NONZTBGZTAPTGSVTBVGIKZLJHUJWBKVOBRWQRNDEKGYADFSPZPDUBIFTVPKFVTJDOMAOHXFGFMLWWQQJUAEWXCBOTDADBUGHZARWIHUHJJDXERLSLYXIL");
    msg.last_error_time = 0.1129209771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.00821875272115);
    msg.setSource(22741U);
    msg.setSourceEntity(65U);
    msg.setDestination(50055U);
    msg.setDestinationEntity(11U);
    msg.mask = 177U;
    msg.max_depth = 0.833285539198;
    msg.min_altitude = 0.622986773938;
    msg.max_altitude = 0.962646624877;
    msg.min_speed = 0.42687683786;
    msg.max_speed = 0.824902270695;
    msg.max_vrate = 0.60651771117;
    msg.lat = 0.313630353592;
    msg.lon = 0.755186428217;
    msg.orientation = 0.594743348622;
    msg.width = 5.72934208709e-06;
    msg.length = 0.0297871092864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.520984836667);
    msg.setSource(57357U);
    msg.setSourceEntity(195U);
    msg.setDestination(31702U);
    msg.setDestinationEntity(112U);
    msg.mask = 18U;
    msg.max_depth = 0.443640688047;
    msg.min_altitude = 0.804951885144;
    msg.max_altitude = 0.342172602297;
    msg.min_speed = 0.853643422839;
    msg.max_speed = 0.169143864768;
    msg.max_vrate = 0.868393069513;
    msg.lat = 0.992804747623;
    msg.lon = 0.823487462589;
    msg.orientation = 0.452575000868;
    msg.width = 0.537708104249;
    msg.length = 0.875842051087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.847855307102);
    msg.setSource(48028U);
    msg.setSourceEntity(130U);
    msg.setDestination(36266U);
    msg.setDestinationEntity(18U);
    msg.mask = 9U;
    msg.max_depth = 0.656755303817;
    msg.min_altitude = 0.0614261354211;
    msg.max_altitude = 0.701159222602;
    msg.min_speed = 0.57369110233;
    msg.max_speed = 0.557813209722;
    msg.max_vrate = 0.911211266954;
    msg.lat = 0.899124025571;
    msg.lon = 0.426594676726;
    msg.orientation = 0.345120683626;
    msg.width = 0.464665069249;
    msg.length = 0.950559817436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.558334078845);
    msg.setSource(44301U);
    msg.setSourceEntity(141U);
    msg.setDestination(2383U);
    msg.setDestinationEntity(37U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.793091042789);
    msg.setSource(20221U);
    msg.setSourceEntity(21U);
    msg.setDestination(24734U);
    msg.setDestinationEntity(203U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.642760229306);
    msg.setSource(19873U);
    msg.setSourceEntity(144U);
    msg.setDestination(44751U);
    msg.setDestinationEntity(211U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.117492238358);
    msg.setSource(62777U);
    msg.setSourceEntity(150U);
    msg.setDestination(19707U);
    msg.setDestinationEntity(162U);
    msg.duration = 46643U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.180237501208);
    msg.setSource(51283U);
    msg.setSourceEntity(169U);
    msg.setDestination(38557U);
    msg.setDestinationEntity(152U);
    msg.duration = 23212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.359605381654);
    msg.setSource(14522U);
    msg.setSourceEntity(39U);
    msg.setDestination(40432U);
    msg.setDestinationEntity(164U);
    msg.duration = 40309U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.938329017912);
    msg.setSource(23760U);
    msg.setSourceEntity(51U);
    msg.setDestination(40739U);
    msg.setDestinationEntity(47U);
    msg.enable = 224U;
    msg.mask = 3069881452U;
    msg.scope_ref = 1020598762U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.54599620937);
    msg.setSource(26513U);
    msg.setSourceEntity(64U);
    msg.setDestination(21070U);
    msg.setDestinationEntity(231U);
    msg.enable = 93U;
    msg.mask = 3881911029U;
    msg.scope_ref = 3359782680U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.633446696064);
    msg.setSource(53844U);
    msg.setSourceEntity(72U);
    msg.setDestination(19437U);
    msg.setDestinationEntity(235U);
    msg.enable = 165U;
    msg.mask = 3869269303U;
    msg.scope_ref = 3622808824U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.89239327583);
    msg.setSource(62630U);
    msg.setSourceEntity(205U);
    msg.setDestination(34886U);
    msg.setDestinationEntity(75U);
    msg.medium = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.891990120742);
    msg.setSource(31721U);
    msg.setSourceEntity(51U);
    msg.setDestination(26994U);
    msg.setDestinationEntity(110U);
    msg.medium = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.46684473417);
    msg.setSource(15559U);
    msg.setSourceEntity(243U);
    msg.setDestination(24007U);
    msg.setDestinationEntity(79U);
    msg.medium = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.957054887592);
    msg.setSource(56775U);
    msg.setSourceEntity(55U);
    msg.setDestination(25180U);
    msg.setDestinationEntity(5U);
    msg.value = 0.423913833052;
    msg.type = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.155768873318);
    msg.setSource(29169U);
    msg.setSourceEntity(218U);
    msg.setDestination(22287U);
    msg.setDestinationEntity(14U);
    msg.value = 0.658221408558;
    msg.type = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.941750087786);
    msg.setSource(4750U);
    msg.setSourceEntity(86U);
    msg.setDestination(34528U);
    msg.setDestinationEntity(156U);
    msg.value = 0.702073212148;
    msg.type = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.727194872718);
    msg.setSource(46621U);
    msg.setSourceEntity(201U);
    msg.setDestination(13531U);
    msg.setDestinationEntity(144U);
    msg.possimerr = 0.489365104161;
    msg.converg = 0.831553449898;
    msg.turbulence = 0.799315597053;
    msg.possimmon = 147U;
    msg.commmon = 98U;
    msg.convergmon = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.589122836029);
    msg.setSource(36221U);
    msg.setSourceEntity(143U);
    msg.setDestination(31211U);
    msg.setDestinationEntity(126U);
    msg.possimerr = 0.157469232995;
    msg.converg = 0.595525787936;
    msg.turbulence = 0.175315118819;
    msg.possimmon = 83U;
    msg.commmon = 184U;
    msg.convergmon = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.96851861562);
    msg.setSource(31690U);
    msg.setSourceEntity(253U);
    msg.setDestination(53554U);
    msg.setDestinationEntity(121U);
    msg.possimerr = 0.836933427988;
    msg.converg = 0.46788688091;
    msg.turbulence = 0.325745156527;
    msg.possimmon = 25U;
    msg.commmon = 206U;
    msg.convergmon = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.755331673201);
    msg.setSource(43626U);
    msg.setSourceEntity(117U);
    msg.setDestination(44154U);
    msg.setDestinationEntity(99U);
    msg.autonomy = 67U;
    msg.mode.assign("JVIPERLYXJKJVTJYKYWYIZRRBMGXFDCUSNQBWNEFVCCSNXGEWIOZWIABQDWMDPDSVQKDATPSKEINRFYQUHMCRMYHGBVFVLPLGJZUDKCDYZIWPITJQZSNEJBRBTRXUXQFMTBLJGHMKUDXYTOUSGTOJAQLPXMMNHXHKCFOTWYRFRZIACMXAGAWKCHLVNZTGEZUHQAHQCFZNNSCJEPTXAPFLUVVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.869439808066);
    msg.setSource(35608U);
    msg.setSourceEntity(184U);
    msg.setDestination(33884U);
    msg.setDestinationEntity(1U);
    msg.autonomy = 237U;
    msg.mode.assign("LEEYAOCYZXQVDLJOMYBDTCUIONVHUCGUJWXSYUUDQOGRFJPYUZVSQPHHWTMTDNENELBESZLFQHTOHCGDPFLSTCNHFHDNQVVQM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.0886314285713);
    msg.setSource(35524U);
    msg.setSourceEntity(109U);
    msg.setDestination(30647U);
    msg.setDestinationEntity(66U);
    msg.autonomy = 146U;
    msg.mode.assign("CMCRUBKDYJBGKKMQPRCDDLJEFWXSJPHOYXYSAIHPNIWL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.0575336009626);
    msg.setSource(38874U);
    msg.setSourceEntity(176U);
    msg.setDestination(41986U);
    msg.setDestinationEntity(33U);
    msg.type = 147U;
    msg.op = 206U;
    msg.possimerr = 0.315060269838;
    msg.converg = 0.0377735712935;
    msg.turbulence = 0.881687006489;
    msg.possimmon = 66U;
    msg.commmon = 195U;
    msg.convergmon = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.418980036068);
    msg.setSource(65214U);
    msg.setSourceEntity(209U);
    msg.setDestination(57478U);
    msg.setDestinationEntity(106U);
    msg.type = 59U;
    msg.op = 253U;
    msg.possimerr = 0.0091132376078;
    msg.converg = 0.588407845464;
    msg.turbulence = 0.916268537574;
    msg.possimmon = 73U;
    msg.commmon = 60U;
    msg.convergmon = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.308682397932);
    msg.setSource(9182U);
    msg.setSourceEntity(250U);
    msg.setDestination(45388U);
    msg.setDestinationEntity(241U);
    msg.type = 0U;
    msg.op = 77U;
    msg.possimerr = 0.67652141916;
    msg.converg = 0.011566414371;
    msg.turbulence = 0.566600810095;
    msg.possimmon = 71U;
    msg.commmon = 157U;
    msg.convergmon = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.156416292122);
    msg.setSource(29904U);
    msg.setSourceEntity(90U);
    msg.setDestination(60460U);
    msg.setDestinationEntity(223U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.752130340399);
    msg.setSource(29151U);
    msg.setSourceEntity(66U);
    msg.setDestination(56707U);
    msg.setDestinationEntity(229U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.208139615304);
    msg.setSource(61276U);
    msg.setSourceEntity(129U);
    msg.setDestination(53862U);
    msg.setDestinationEntity(25U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.652052439942);
    msg.setSource(716U);
    msg.setSourceEntity(35U);
    msg.setDestination(18307U);
    msg.setDestinationEntity(156U);
    msg.plan_id.assign("VRXOBVOJEAJLNZFPHPWBNXTWSQZPGFYYIZCAEEHXHDKHDIVVRWFUQSPJMJWRSESCVTQXSUMY");
    msg.description.assign("QFKNEKRLEZFRBQKJNDWVEDBVMWAOAUWQFUVJJNCGRUCGOGPMPOWOORDWOZDVMPXGAUIQKFLTSGKJTXTITIFRCEYBNDXLASDNLQWIXBZQUGCCTTQCLGIVZSNUXEYQVSEZKPBHERILSSQTYBBCXW");
    msg.vnamespace.assign("CJXOBLGLUWHUKCTNZYSJZFEEKDBVPRETAICBTWCSOMJWIMOEEHGFHVUKAYWOBJVFQGMVZFXEAFUVWFEBSBLADVUOVASDYCYPTPRCTUWHICRBUZLSIIDSNOXQDJHVNJDZTHQVXQVQMGFBNPICJGKBETGNKKLZSDEPOIHXPPOUGSTDTNFLYAXMUWOAIOYRLKFQMRKNXMLJEZIQKIZHTXSPAYRLAN");
    msg.start_man_id.assign("WKFNCOBUVLMYSIACMFWK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SWSJCYBHHAFNFSCXXYBGZGBQAVXIVHNJXICSDQGOOBQVZFARPBX");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 23268U;
    tmp_tmp_msg_0_0.lat = 0.176486860375;
    tmp_tmp_msg_0_0.lon = 0.417886277252;
    tmp_tmp_msg_0_0.z = 0.479803094891;
    tmp_tmp_msg_0_0.z_units = 162U;
    tmp_tmp_msg_0_0.duration = 20105U;
    tmp_tmp_msg_0_0.speed = 0.033186167403;
    tmp_tmp_msg_0_0.speed_units = 240U;
    tmp_tmp_msg_0_0.type = 235U;
    tmp_tmp_msg_0_0.radius = 0.46233753039;
    tmp_tmp_msg_0_0.length = 0.648369085416;
    tmp_tmp_msg_0_0.bearing = 0.621786687227;
    tmp_tmp_msg_0_0.direction = 250U;
    tmp_tmp_msg_0_0.custom.assign("FRUVKBZWITBMQJSFTNFHXAQYFQXCZGZDWOAPRJWYRTIBOVAFEFSQEWUKKRHPYFUWHAIIQGQFUYKCPPQAMMELLLWXCBPCTPWHJVJBSOTLZCHGYWQGJJPMOJOPSGFLCTRJDYBKIEULFMCCDWGRETSXOSBLDYUOZCKGMDRZD");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::IridiumTxStatus tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 1473U;
    tmp_tmp_msg_0_1.status = 252U;
    tmp_tmp_msg_0_1.text.assign("LPFAEEGSFCZTAHGHIBYMMLWVKFCKKTOHRGXYQJNAFPXYFWSZPLNRHMUZJLYMSCXLTFIDFJDRXLPWJIRPVKNKNDXSVDQGMIPJPKEJVEIT");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::DesiredHeading tmp_msg_1;
    tmp_msg_1.value = 0.254941655468;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrexPlan tmp_msg_2;
    tmp_msg_2.reactor.assign("HTEBZOEMJVZISKQQUJHFIDALPZNMQSVEHJUFOXTGIPXMBRIGEXIKWOXMJCFJRNECHATSWYGSXHGYDI");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.620087796277);
    msg.setSource(57493U);
    msg.setSourceEntity(144U);
    msg.setDestination(31214U);
    msg.setDestinationEntity(183U);
    msg.plan_id.assign("MNWCPDYLHXAXFWSRGHGIULALSQLZXWGHQZRFCQWBKGJUBEIWFMTKMPLMGQIOUIDADTQVVYEBOXAMGOCVFPKFFUTQTPVZAWNUJDCMQUBLJGQSRETIYVDVWKQJHVLGTYBCJNBHCPAMNXONWBTKYNACXMZFOHTNEKMIXZSVNSRCSFJ");
    msg.description.assign("VZOZBLJQUFSDVATYMQPZNYGTFONHXDWBVDHXGLTXRFDZVJSVLWILTSVSAUDFXTWFKPOEHSKSAUWTIZEKUZPYKGXPUEVLERWSDQXOGZQFNYTKSOJQYBCYRHIHB");
    msg.vnamespace.assign("UIVWZWZETUQENJSWUCQHUYERPVLMFGRKBDQJCMNUSUXZKMZMBAHWSVCFZLKCDHOWLPTOROQTMEURPNKBFAZXXDTIGGATVGKYIBSJRAMJIVVUSPYACMERHV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GRIOIQUSXHNBCCKBRASRIQQBADCTBGNUANOLYDLVPFJFXWISCYVJHHNQYRYXSALDOJBITZNJVCUPRLEZV");
    tmp_msg_0.value.assign("MSLCFWRPAZLTDJQYAWOPAC");
    tmp_msg_0.type = 55U;
    tmp_msg_0.access = 5U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CUXXJUDQUWKMGGTNHWEEUFZIPUBMTSALJTDARWMQVQRPQPIRICLBFKEBKNVQLAGKSWOZQIWYJRJEPVFJVBOXSADGVLSFKYCXEVKDYQKFDICIQPRBRORSESEMHZHCZPCNOOAYJGAVWFIIPVPGGSCSVWDNLRCUTLZTVACQHRNXYNJUZZYX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("VXPDAVXYMULAJUCZIMMTJOCEZFIHTJBIEEDRSSABRHOUQOKFFFYHIRQOVUQJDTNYTSQBLGWNZPCTBNLHGFDIEOCEHOAIWLAMKWUYJXFAKQCGCKNKQY");
    IMC::LowLevelControl tmp_tmp_msg_1_0;
    IMC::DesiredRoll tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.970209393875;
    tmp_tmp_msg_1_0.control.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.duration = 30176U;
    tmp_tmp_msg_1_0.custom.assign("OKGSQWORWPLQUCKRTMDRIKQEYCEAPFP");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::EntityInfo tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id = 22U;
    tmp_tmp_msg_1_1.label.assign("ODKEDVGWLQKIIHLCKMGNQROWINMGDBKEHXLOPROLBXXSBXDJGXCNIWQJZZIMFJFUADCHFHIRRKOESXHOTMOFAPKSUVYRGEYJPMJJCVMFBFXHPTARVEZEP");
    tmp_tmp_msg_1_1.component.assign("LRZTEJJLABETKICZSMAKKPZPUDFAWZRHOEKPRQSWDHBHMYQMNVGWBNMREITZGVZCXQPXTVVPDOELBPCBXWNWKHPFQROVYSKXIKFDGQKIRNBULYSUNCQLJECBHAANOIJGDWLWDTEHOZZFCHVNSWAHGOVBFBSCUOQIEXRTQIZACYSYJTAJILUSDKGKXDXSJFDCVFPYIRXDLYXPUUVUG");
    tmp_tmp_msg_1_1.act_time = 39380U;
    tmp_tmp_msg_1_1.deact_time = 25232U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("MSIGCUYXTZZNNTJBMSIFMCRIJQV");
    tmp_msg_2.dest_man.assign("XGDIFWNVRBIOQFSXQFOQQJHWHMFAWBYSFABTAPKNHXOMOZUAQDJTBKDUBKFLYWMHCQILFYMGVGPHRFERRWPNQFRUYKVZAILZTXWXGYDMGVQYERSTMJYNPDZSTAPBITRQSYOJGOHEKMOEJCULYZPSLBMREKUGLAPSOWXSLEUCVPWBXUZZVKLWXHVRPEHAHCNCMVNLNWZDJQOTDDAENVKTYBGILEKECZP");
    tmp_msg_2.conditions.assign("GPWPNQCKAMPQOLUCKZCLDOKEZNYJBCPSHAZSMCTXBTWNMRQVPJXZYAMBOFARUZFUNLLNFTCLJPGGBDKPEOFT");
    IMC::ParametersXml tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.locale.assign("OYGNUUYWISIJTRSYHSFTNZBBTLTFBPGNIUMRGXGXAKRLHRUUCFPRUYGJONCCGWBMTJYSNUNGOFFPYRHHCFJMNLHPTPWZIQEAZNXOOEOTIQZKLFZTKDEKVSXMVKOFCWHQWVDAERL");
    const char tmp_tmp_tmp_msg_2_0_0[] = {-124, 33, 39, 95, 60, 98, -13, -54, -92, -2, -80, -95, 52, -11, 5, -62, -95, 64, -102, -66, 4, 109, -86, 65, -9, 52, 40, -7, -90, 124, 94, 39, 46, 115, 118, -123, -84, -38, 31, -54, 72, 24, -68, 102, -22, 120, -23, 36, 35, -53, 78, -49, -77, -69, 14, -54, -104, 108, 116, -36, -86, 5, 60, 74, 43, -93, -1, 95, -106, -50, 8, 23, -91, -122, 35, 103, -76, 71, -34, 53, -105, -27, 7, -42, -30, 6, 56, -77, 98, -94, -107, -121, -80, -111, -122, -11, -88, -115, -123, -67, 70, -16, 51, 13, 84, -123, -53, 104, 98, 35, 101, 15, 65, 72, -38, 15, 100, 96, 120, 122, 98, 122, -113, -49, 11, -20, -84, 36, -66, -32, -19, -59, 89, 13, 11, 50, -32, -70, 24, -22, 111, 77, 54, -57, 40, -76, 114, 121, 54, 124, 104, -126, 22, 115, -12, -68, 123, 12, 65, -113, 48, -36, 74, -59, -110, 102, 49, 95, -81, -98, 26, 2, 24, -108, 83, 106, 37, 41, 56, -12, 15, -127, -69, -30, 55, 101, -45, -121, -55, 48, 16, 31, 112, -39, -59, -100, -77, -85, 123, -72, 104, 4, -17, 11, 123, 21, 37, -24, -94, 88, -55, -72, 55, 45, 125, 74, -100, 42, 26, 15, 36, 126, 17, -57, 114, 17, -69, 106, -34, -50, -13, -117, 115, 79, 100, -96, -128, 37, -17, 121, -28, -102, -51, -8, 69, 113, -2, -56, 47, -49, -74, 113, 118};
    tmp_tmp_msg_2_0.config.assign(tmp_tmp_tmp_msg_2_0_0, tmp_tmp_tmp_msg_2_0_0 + sizeof(tmp_tmp_tmp_msg_2_0_0));
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::SetPWM tmp_msg_3;
    tmp_msg_3.id = 103U;
    tmp_msg_3.period = 1891281439U;
    tmp_msg_3.duty_cycle = 4154597283U;
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.327466041197);
    msg.setSource(39381U);
    msg.setSourceEntity(183U);
    msg.setDestination(28452U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("EZTUEBEPRHASSDHEVJLDUTAMPNMZZUERFJJHOPQXWSYYKZFOWUQQHFMTWRXADBHDPBQ");
    msg.description.assign("IUZXGWMKSKDDVWJYUJCZVQAKFLSEUFHPPEGROICTUYEWPFNSMDOSAKHBRXMRBJLJFBXKDOSZVQCCFJKREAGKFDYHTASFLXYTBOURWNLEVGRSRUNNTYALQMLEWXUQAALAIPBOHPQAIJKTDVMNODWWGM");
    msg.vnamespace.assign("OADDVJICCBUWEEZBKVISTMZOXUGCNFSQKIOPKGITGMUZQYMRFHZCXVFAGTKRXPRQELIASLUZTICYWPLEBVJXGZNVQFABMIOGWMCSTTHBXHNCBNWWCJQOQOUEGRZPJKFYDFPKLVHUNSLERANIWJXLWWJPZHEYDYRRGCLDJJBBOETBDHQAGQNSUWMTA");
    msg.start_man_id.assign("KKDKAQNEUQCFSJ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ITMGONFBVNUZEYNFZXFKWTCXMSHIBKFPJAAOGGEEBMPRLXLQXWXFVCEBICAPFNAZELYQOVVCPQBWCNFFXUOSRSCDXMIDOUHLJUTJDTWHAINQZGWEUJWPYVATUKTGMSTGAJDYACWX");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 45663U;
    tmp_tmp_msg_0_0.lat = 0.833727282158;
    tmp_tmp_msg_0_0.lon = 0.300683396868;
    tmp_tmp_msg_0_0.z = 0.866630417769;
    tmp_tmp_msg_0_0.z_units = 231U;
    tmp_tmp_msg_0_0.amplitude = 0.884951444275;
    tmp_tmp_msg_0_0.pitch = 0.286230438336;
    tmp_tmp_msg_0_0.speed = 0.567784120365;
    tmp_tmp_msg_0_0.speed_units = 201U;
    tmp_tmp_msg_0_0.custom.assign("SVDCGEMYUPKUWRFQTDBNKKYYTSGEFZSIQLXSFHLEGEFMGVCUABXQVFWHZLZSUHMCNPVZDIPSKKCMGHPPNSLRQSRVFDPBKKWTRLIGIJAZLBHOFCADBVQQEBYCBOSEVGJUUIEANFCJTLAWUMFBTJTCYRVIAQWPLQPVREWGJIGOANWZLDCNTXAIBJMXAUZSHMXODDUYJGNXYTNRAQKWNXITZWPDMOXJOHKJHERZYFOM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::RemoteState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.687114167043;
    tmp_tmp_msg_0_1.lon = 0.993117100996;
    tmp_tmp_msg_0_1.depth = 18U;
    tmp_tmp_msg_0_1.speed = 0.239766324552;
    tmp_tmp_msg_0_1.psi = 0.185818209941;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::RhodamineDye tmp_msg_1;
    tmp_msg_1.value = 0.341245858613;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.877299288128);
    msg.setSource(13821U);
    msg.setSourceEntity(12U);
    msg.setDestination(19951U);
    msg.setDestinationEntity(150U);
    msg.maneuver_id.assign("WZJGQKNFKVHXLXHRFBRBFYPRXXRNTUMSMARFUWEIITWWDFTQEERASDBRQQYCIUBUMYFLOLAVSJDYCBCQQMHVQSMODLKTBSCONIYSZUJDYSAGTZ");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 10258U;
    tmp_msg_0.lat = 0.120650104041;
    tmp_msg_0.lon = 0.840074104084;
    tmp_msg_0.z = 0.142312230421;
    tmp_msg_0.z_units = 219U;
    tmp_msg_0.speed = 0.714079883604;
    tmp_msg_0.speed_units = 69U;
    tmp_msg_0.custom.assign("FAWGRROMWLTCPVHWNTROIFBZFPKQTEGVHUGFIMJNGBBXUKKJZULNKZZDVQYBECDSRKOVHYHWTAOTPUVLXJICOZABDMUWYNWELEFTOWRJECHBDMEMIQSRRJIPJRNANYXYXIEKZCGVXLDYPYSLQIQQ");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.748999922744);
    msg.setSource(21603U);
    msg.setSourceEntity(35U);
    msg.setDestination(12728U);
    msg.setDestinationEntity(39U);
    msg.maneuver_id.assign("FWBVALXESMAESYMRKATUVNRINFVMJZYIQEKDLFFSLERGWMKRZWOBICNZUDWRMVQITYKTVNSPRQJQZCGZNTNFXOHWVBRXYAYUBPNYCFMGHVECSJOYXXRDWEBK");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 56109U;
    tmp_msg_0.lat = 0.141365378747;
    tmp_msg_0.lon = 0.170677315457;
    tmp_msg_0.z = 0.539294152641;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.speed = 0.803269049425;
    tmp_msg_0.speed_units = 59U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.682696396575;
    tmp_tmp_msg_0_0.y = 0.956623959694;
    tmp_tmp_msg_0_0.z = 0.183928479427;
    tmp_tmp_msg_0_0.t = 0.983157007685;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("DKWNUBSRHZIXKTXYIEISSMTVWMYRUUYVFRCYKFLNWAVPCKQJIRGCZNPXGZBMVTXPFOJUSDEEOXCDYTOLDCLDAWPRFZJCGGSKDBAQSOLWQMRUSBQTHETRKWBQDJGHNZRXUGIGUDGFPCQEVYACAASJPU");
    msg.data.set(tmp_msg_0);
    IMC::FuelLevel tmp_msg_1;
    tmp_msg_1.value = 0.310431187617;
    tmp_msg_1.confidence = 0.317839979962;
    tmp_msg_1.opmodes.assign("UGRDGUOYSBSAINYQPNPHQGZVWSDYEPSQOTFPXTTYDKDFMLAEGJKAQYIVCLZVKAGCEGNFPTJHKSJBUUDUSTVLDESXRFCYUIPYORUYSYELLWHWM");
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.036564886343);
    msg.setSource(13171U);
    msg.setSourceEntity(251U);
    msg.setDestination(36951U);
    msg.setDestinationEntity(220U);
    msg.maneuver_id.assign("DRJFRAKVCLSBSXYQUWRN");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.888395551487;
    tmp_tmp_msg_0_0.speed_units = 17U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 17044U;
    tmp_msg_0.custom.assign("FIQPJHSAAXWNJNGUISTEUTYTUWYYHHXUUCJSATESULWIDPHMBRERVGKLNHLAJADHDXTEFPGZWLLOPBFAOZCIIQIMOWZDSKNLLMZWZYNGGPOSSFCQQCFXSJCVAYJRYRWZLMPZOBGOQVUPUQKPVDBIMRBTEWGZXHBKNFCVGNHVBYEKCUOJCGDDWUFFHLRNZFCMNMNDOPVDOPEIBXLTXZHXKQVMKAVAYYQFGXWIRMAKSYXROQSIRKCVTJ");
    msg.data.set(tmp_msg_0);
    IMC::EntityParameter tmp_msg_1;
    tmp_msg_1.name.assign("PLAEWQYCXUDJFGNHPCWBVEIVCAOJRULTUIXAURXHPMDBFXAECMMIOQHWVEKCPIGSESZVLLKHHRSZAGBSJCGAHYLVNIBVBHTNFYTZZRZNMHLVFXTGAVR");
    tmp_msg_1.value.assign("XQEZOREPGJDUCGKRIANPJWGGIXFAIRFHPUKIWSYZZNFBMEJYHMJCYDUCZCJAJELOUQDVQFQSDHEWNJLHVBNMQWXOEPWUNPBRKHAWOVVSTHLBTIZRSYMDWPBRVHUTGEWMMKWCLAMSJKLJIADYZCXDTQLONDCZHXHRNTMTKXIA");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.711446863925);
    msg.setSource(45958U);
    msg.setSourceEntity(116U);
    msg.setDestination(60727U);
    msg.setDestinationEntity(233U);
    msg.source_man.assign("PGTATGFKSCJKCOISDQWMPHYSGQTQEQBRJIPDISFHCJKTETGDWSCXMSHXXULLMJKSCVVGOTUNMMNKREIIUNWPDXHTQIEGLBOAZBUZNLWTHLGMOEAFDSPRXLXVMBCQACEUAQGZICAZBRYHZUHNWCFKVYAJLXPQJNUR");
    msg.dest_man.assign("HCYDENPHMDFRHHUPGCJNAWQSNPIURCVWSKXLQPASMHCTAJEEMZYKWVAZKZWZPGLNKVNIJSKUIITSEBCS");
    msg.conditions.assign("QVBDYKZYXXNUQRCBDTOOIHESCMSFNSAVD");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 249U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.560338920207);
    msg.setSource(48673U);
    msg.setSourceEntity(140U);
    msg.setDestination(37986U);
    msg.setDestinationEntity(171U);
    msg.source_man.assign("IAUYKNPCJRBHHRIBGDHCKMKHCBUEEJLWJTZZ");
    msg.dest_man.assign("ICAWHXXHMAXQRPBNXOMAK");
    msg.conditions.assign("MEFQCKWSGKLQBJWSWLFIYOIBNOULQKHFPHKTIUTGCXMZCYJZMPVFCXQIUNZWPCLBRFZQUIASMRSYVXRAAPNKLNXVLMTRPFMBJTOVDCMJGDHPAEVKMTRFDUFHHOYXJWULUOOSPBEYNXEZCBAGHRBIYTWAGFRGBMERONSDIONY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.862101768428);
    msg.setSource(8812U);
    msg.setSourceEntity(146U);
    msg.setDestination(62179U);
    msg.setDestinationEntity(181U);
    msg.source_man.assign("WUJEEHIVXMKLMORYUCIIKXVHMXOTLGLBZFYQUTOMATABOKNQDJFBYSDDNCXZGMPLFIFBOACGSXRRVZFWOUWJLKJUGBPEITOVFSYKVCCHRHWBMQXHTRWEPOYMPMVJBLZDSTCINCFEQGIRXSJPNGMBKKTZDSZSOJAAVPBCADISDLQZYTASTLNEUEGPZDWDAJGIWSN");
    msg.dest_man.assign("VUYKTHQZHIOCSKBMHRJKTXXYSUFEKJXFTVQOKJGURXQMZQXYBISZFOWLHXFMPFXTIJADEPUMDOLEBTZKCHGPBCHCEZTUGRNRSWIWSMLTFDVKXYAIXF");
    msg.conditions.assign("HDXINGEBRKSUKAWTEKPEPBHDSBCLOVZQDRMXVFTLAGTPOBMHFZSEVAZKHPHIGVWQZLICFKQCNZONFXDBSTWWUYSLQW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DQMIXWKGMBBPEOFGHFPFCNVIXSUYDSBECJT");
    tmp_msg_0.value.assign("WTVUUYDKFQYIIQHEFJLJRUDFBRDCWMUVOQWHEPAJRCLXRXZNBCAIKQOFMXBGZEPCCTSHJUNHQHLLKPIJFMWVNYOZQHOCDRIDEEHGNNZUYQBKXI");
    tmp_msg_0.type = 72U;
    tmp_msg_0.access = 74U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.981298724879);
    msg.setSource(25273U);
    msg.setSourceEntity(215U);
    msg.setDestination(46026U);
    msg.setDestinationEntity(55U);
    msg.command = 210U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TREVUFCNLNKTUMEFKBRYDRQDUDJGLCHUOSDTTAWXPZRYBHZXETRGCNJTDWAQZIPFMVTPHOJSHJEHXSTMMWAOFJQUPADEXKKUKINACZYFEWUVBZGMIHBEWDKDCGKAABVWDQKALYNOBFMPIGLLIFRHQMSBPCXQOZUICQJYBIOUYRCWTVNGVJLBGWLXJRPZWIASHVCONMKSYVYSXIGPZELKPOFZXLNQSQPZUYXRGEINVTJFHJYRONALBMQFDVXSM");
    tmp_msg_0.description.assign("LXQRPNTMAHXZIAAKUKNTSFGQFWNUULHDQJSGDFOONTQTORKLBSCYXCSUTQKOUTCBSNHZWSWATVMUARVZBRIPEMODOGKBHYHXTXRCHTZPLIUEZHGMEEYDILJJDSJYKYAKMGXCGZPRKGCMQCDNPWLRNDVUIOFPNJQLPCQQBNDJIPZOJGXVZMHIVSCGUZVPHWJDEYABVMELL");
    tmp_msg_0.vnamespace.assign("KEGQGYUZAYYPSRSJJWBQMDNEXFEQOXW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RGVTTIMOSYGCZZWDQCEXROULYGDYTJWMDCGZUCQFRHUASUGFJBIMMLSIIGNCDAHPDPTREULOHPCSVOMXAIRBYJFTFYIWYJSMBAEFSILXNREXQCYSWONUKUBHJZVTADOJNUVHBKQEWVPLSTZHPKFZJNJOZGT");
    tmp_tmp_msg_0_0.value.assign("FIEKLZMLBYFYOREOLHDHKQUUXDFWEZUMTJTFRACOETHB");
    tmp_tmp_msg_0_0.type = 92U;
    tmp_tmp_msg_0_0.access = 67U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XIFGGYBJEKQMQQPWMKRDJDRQHHHCNKUMMMPUQMGNDOHSAMVLACTKLJUEFGFNRZZTTRZHUXAOHXXRAUJESAXBBSYARYFEVZGNVCFLMCIBCPVKFTDMUPGPZOFJLIHGBTFBLLJLDDJWFVVKWWSVCIOSSOLQCLV");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FFMJVANNMNLDAAEYKPHUOTBYINFUTRKXHHJJMEZJBMDQRPEXGXBYUNWCPZDOPSUPQSIPTGOPZMTYYZXFSEHKGQZLJXD");
    tmp_tmp_msg_0_1.dest_man.assign("WQPYZRZMGREDXAFFJYPDLNVOSZMUADIWHZTRCXCRYGVKHTCFUZRJSPBQNFOZQTDEVMTPBNMJHLHWABLHL");
    tmp_tmp_msg_0_1.conditions.assign("KRNEFRLLQXWSDEMKDSVZGOGUMMQHJBCVPWFQVZTMVUMTKWBXUCEWVNGMXAENJVYRKYNZHUYBLDWNFZVSDOGCCFHEOHJZEJSIPOABHMTQPZWFBDEYLGPJKRBLSNFLORUHAJASAGOMJQUSBQIYCPYRTHT");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.944824589605;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.221644347626;
    tmp_tmp_tmp_msg_0_1_0.z = 0.338487667549;
    tmp_tmp_tmp_msg_0_1_0.z_units = 15U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.645879718035;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 106U;
    tmp_tmp_tmp_msg_0_1_0.start_time = 0.990720886053;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("YJQKZZTNMZRVTWDDUPOIZBBKBFHMQPOKIMHDCQNGWBGAXEFLRFZGXKQTNDWKTPYAGDIYFRHBMVUAPFJWDLNCUEVCUTZOLRYQCGZQLRXNOJDAAHLJLHJSFECRAJURXH");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::QueryPowerChannelState tmp_tmp_msg_0_2;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.944437897667);
    msg.setSource(11512U);
    msg.setSourceEntity(36U);
    msg.setDestination(7169U);
    msg.setDestinationEntity(237U);
    msg.command = 78U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BCIYRVHYLVESFXFICAENYNSUZDGVDQSUZGOEXLCAUTCCOZMQISOTQWHUQLGMBVXGTLIEKIZDSLBPUAELSBNAIBRJ");
    tmp_msg_0.description.assign("RAMBMXVSWBPNEUOAYNCRKQZRHMSIYQBYYVXEKHRQZAGVGHFZGNPIXXJVIDSTIQPKNCBZLLADVOQMQMPJFCDJGZHHZGWTPQTUDZMKLBICWHIYJQNRGLSNDACLCRNFEJRUDXKUFBSUSKAMIEOWYJOKUGRQYLXQWKMLFHXETJILOHWVELVOVFYAXUSERUJPMIDCTJCVFIEYDXHTRBMWNUGDANDKYTPCPLAOVSZBWFTFEWBGHEATKXZPPGC");
    tmp_msg_0.vnamespace.assign("DLWUUSTIRFNAMVHDKDGZIGXXXFKGFSALSWHRCUEIYCASCQFDEZVJWEVKYIQWOPMMIBJOPBKPTJBYRGSCFZGZHENLTAPRGKXEFTBHFUVURZEDBVCNOHCJYEAQSLU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QXWUUGFJHVBVDXNCABSEJIVTNGWNHBISODVANBGLTTWHHZUQFBREAURKEVCFULMJMHMAGGOAQUQJZMYXPJTBZVHNJCTSCYZDOJDRSPMLEUMNIVIWZZAYENWDPRLFJCPJKEIONXKREDSTVILXOUHOLGSVYQRWMPIBKWFGVYRTWCZOAISHTNYKIEPXMDXAIPLOZCLKFYFCGFPFDGESFOOUWYEDL");
    tmp_tmp_msg_0_0.value.assign("KIAEIGYKWPTADDJJTFGUUTWUHLLJPFFIATWXXRBSODWXGPDYQFLJFGVSSYGRKCBQMIORXHPBJEXTMAHGPZOHMCSJJOTRHKECVDPTZCMUXSCEATSELRZPDDMNLUCFQIOAZITXMOWLRLBVNQKKSGQFEQQRYNVDCUUCJIVQNCEOGNQYYPSOUXSWOKBABZXKFYVOARUZIZEHCFAGNDLBMEDVKPTQLVWYZ");
    tmp_tmp_msg_0_0.type = 206U;
    tmp_tmp_msg_0_0.access = 205U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JNNMXULQZAGIZUMUKKPKABNLGYBTPTOWOJSEPXTVHEORQXZGELALCJINXTSWFDIGDCHLYDXDFBSHBJGIECRYEFFGYOZOKHCMOKYWRDDAQUNVXCCIPCMNXTFSDVQLRXKGIEAQHOIMPGHQJBRYVOWJQAJMTKKFIDYHHLBSAKQDYVSENRWQXMUCZNIOYBVSJTRTSERAFRWLSZCKXQHPIZFFEOUGTGLWBRCZPYAAZUJDWLZTMSMUV");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.171879305183);
    msg.setSource(46503U);
    msg.setSourceEntity(16U);
    msg.setDestination(40012U);
    msg.setDestinationEntity(204U);
    msg.command = 134U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VWHMHXXPLIGCIKEQMUHSQQJZWKZMFHROIQNGGZWEWBKVLF");
    tmp_msg_0.description.assign("MYJTTRLRKZDBJIHHTZJNOAVPRCRPOUNLOGHBDJSHDRKUETXYVNEUUBXVTBMKBYKWQTFGQZKGUKGLJVKPNVRERPMTHGMIYTDXBOKMOYT");
    tmp_msg_0.vnamespace.assign("DVLFEMKXSFLRSJFYTCZCIZHCWIQTJLOPENOYLKXOYNBCQYAMOFUWTCBJDSKIAJKRCWLEFUSBRDQRTWAPSJFNZTWPUYZDGLLYJYBFBAAXJUQSKSQFIPIIBZHEGQMKCKXDXNMMHUHJCTMTGDIWREAGVYVHAFMVTJOEYEUHFWWSXBKMGURNKGXD");
    tmp_msg_0.start_man_id.assign("NMCRFZWEXPHAQEJMGUKVDEEIZAQWMZDCPBPAOCWTDFYUAUWBLYTLSDPUBPRMIVAGAWXDIYALZJVJJJXCIMQGXFYHKNTPRFUSRVIPBTEAJLSVRWJMGGKUSGBDKOVSHHFYKDWXTFZMVOXTZHICMOXIYQEANCLFWQETYWCGLBEJKKTCQTEOUSSFXOOHZHLLVRPFIHDHQNJKSNWOYQIVOLGMBPHBXGLYINSZPM");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("DIDSJHDTZGOREQBVYCIRGFNYTOHASOZADMWZSGXTEJFYBWRDBZNCUFZDHKOQPFFODICJWNMBIJZENAHGKVATAFCBXHYCRILRESVGSKBRNVQBWKQAXFHGCHHBKEOYHFW");
    tmp_tmp_msg_0_0.dest_man.assign("CVUAOHFQCFBYXJZPJKGASYDSITULLFTMSLZYPMDNMURXLCKXRQWNMOXHJFVESUROFVRTAPPRVWEWBJVGXTKQQBAYUNVEUIYNSTXNLNTHBKIMOTRSGCO");
    tmp_tmp_msg_0_0.conditions.assign("EOKHPWSVCKANGKIDIQOQHHLFPISDZXFFTJKDXDBKMTQRGEXYTRLWQZVYGJYNCAZUUYMOERMUIAFLVBWTYSYPNAWWPPMSHZXBTHEBDQVWCF");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::Reference tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.flags = 254U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.372470620854;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 185U;
    tmp_tmp_msg_0_1.speed.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.406243377102;
    tmp_tmp_tmp_msg_0_1_1.z_units = 190U;
    tmp_tmp_msg_0_1.z.set(tmp_tmp_tmp_msg_0_1_1);
    tmp_tmp_msg_0_1.lat = 0.453060643245;
    tmp_tmp_msg_0_1.lon = 0.281260424537;
    tmp_tmp_msg_0_1.radius = 0.846101273875;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::RSSI tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.255442323242;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.979600993213);
    msg.setSource(59061U);
    msg.setSourceEntity(96U);
    msg.setDestination(10316U);
    msg.setDestinationEntity(74U);
    msg.state = 190U;
    msg.plan_id.assign("RVXDLCGCRUBVWTENMGLMFAZZBHTESDKZJUIYUQQHCPNBKSPLZLXNKXKHMURFGQIRMPZZXOPHRLNRUYQKBTSNYLHNMXELIBAIKAZIXGFSFHQLAISAPXOQIOOFAQTTSHBCRUYGSOJLWVKFWFIYBKYLWONDPAYUOEYEDEJTWCBEVHWZWDCCNVVXQJISBGNYDVRZAFDJQXMDPFCR");
    msg.comm_level = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.502706915538);
    msg.setSource(30773U);
    msg.setSourceEntity(144U);
    msg.setDestination(40520U);
    msg.setDestinationEntity(71U);
    msg.state = 134U;
    msg.plan_id.assign("OONFNWLQCMUQBFDDZZCYLTHEAKFCPLGTCVGXBAHIMQNMUMDHYMMESTJCFMIUJALGVPRDYXVQLSENKZSQGRWEJIRAQAETQTXTZRFRWIXENOTEPXVUDPTBONURDIZHHCURHJJGWLONABWHHBPWDJSQKXYAWJKFVBDCYVHZABPSUYGVMRCZQPLOWMEIKQLVGYLXPSSXZBZGTVKSKOHKREOIZKSDGIUAYM");
    msg.comm_level = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.905083692313);
    msg.setSource(58469U);
    msg.setSourceEntity(75U);
    msg.setDestination(53615U);
    msg.setDestinationEntity(225U);
    msg.state = 85U;
    msg.plan_id.assign("ZVXROSLMHAUTZXYAHHWKTGCIMXGYLEXFWGKSMPPTBGENNLQIOLNDXYDYCXRGPJBUQQBIWSNCHENLXHKCOFPYFTIVJYR");
    msg.comm_level = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.564278250047);
    msg.setSource(61395U);
    msg.setSourceEntity(243U);
    msg.setDestination(28812U);
    msg.setDestinationEntity(224U);
    msg.type = 201U;
    msg.op = 103U;
    msg.request_id = 17736U;
    msg.plan_id.assign("CCIXKYODAKSPWBHRRETWEWDQLGUMJQQJGXJKLSOTSFHUGDAPHVFEZHSXNYLYQBFSZYPCHSUOLBUXOTEGAIQBTBLTGDFZGIDNTGCKAKHQPYOZTF");
    IMC::Pulse tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AEJWYKEDFTQOWMKAPUTSIYFVEWBYHNIXARIHMDQPKEKKFKTUOZOLZPJRNZYFOCXGJMJNCMPQNGRCMGXPBLKJPBRDKBLQRHQRNZSTKGOACVAHY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.265699705304);
    msg.setSource(54492U);
    msg.setSourceEntity(80U);
    msg.setDestination(26074U);
    msg.setDestinationEntity(101U);
    msg.type = 37U;
    msg.op = 5U;
    msg.request_id = 4059U;
    msg.plan_id.assign("LBRVVDXIRUQ");
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.716099785151;
    tmp_msg_0.lon = 0.621313265007;
    tmp_msg_0.height = 0.903862842449;
    tmp_msg_0.x = 0.937086338722;
    tmp_msg_0.y = 0.581728649886;
    tmp_msg_0.z = 0.905882551462;
    tmp_msg_0.phi = 0.152259073115;
    tmp_msg_0.theta = 0.773469510133;
    tmp_msg_0.psi = 0.685448412641;
    tmp_msg_0.u = 0.798492331534;
    tmp_msg_0.v = 0.263851356033;
    tmp_msg_0.w = 0.862831121949;
    tmp_msg_0.p = 0.558198643817;
    tmp_msg_0.q = 0.860440246423;
    tmp_msg_0.r = 0.451213197291;
    tmp_msg_0.svx = 0.0133492490367;
    tmp_msg_0.svy = 0.194640035976;
    tmp_msg_0.svz = 0.804612575933;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SACTQFODJGDMTAEDLOJBGGSBHPPQDJTIQDIGUFFPFZPATCNKEEXMSFENWMCMFWHLXKASVKZSJLPGZUBDYIELXLGWYTUUZFWRZCQONRWMX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.0408205970226);
    msg.setSource(912U);
    msg.setSourceEntity(187U);
    msg.setDestination(27518U);
    msg.setDestinationEntity(241U);
    msg.type = 68U;
    msg.op = 225U;
    msg.request_id = 21821U;
    msg.plan_id.assign("AARQZVEXZFZZSUJFJRZTYEFMKTSPOAYBOKCJATGWKOUKHABSOHYABKMCIUYIDEGEPRTELCXXATYFENTUOTCWXPXUUPDKMIVCCWYURGGFHFJBOPZDLHJLOCNFJIQDPFUNURSQDMYVQKNRVWLSIFGQFOYSKMIILSNMPMQHZTEBMZBVIWDCZIHPSLTRLCGPLCNVOENXQABYQBXLVXEDRJXRMKHVWJVHJ");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.600314168143;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FQKIJGRAAHQFGBMPODGAWQHXSBYKMTRZPWWLWRLLEASNVQXZKYNQHSCPRCPVIDOEZYIUGQZUXPKJYICIMLMEJUKUELQORVREVAHQHUBUDDPCTZP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.424010079468);
    msg.setSource(47834U);
    msg.setSourceEntity(235U);
    msg.setDestination(16302U);
    msg.setDestinationEntity(0U);
    msg.plan_count = 36774U;
    msg.plan_size = 4105378163U;
    msg.change_time = 0.96513074806;
    msg.change_sid = 9740U;
    msg.change_sname.assign("LJELXGPTPQPCEFPIXKJDCRYKDGIXOUPRCUTHLJPQKWVAQNWJAUWNEZBPHMBAERZHBXCSYUIINUKKRVMQCVWSXCWIBYHIGGDYALOOVMNSOKAGLXGMHRTAKSWHXLOMDIYNCKTRWXVFQJLYJCJZPTPFOTAZQERWFHAZVVAYMWAVESRSZJFUHOGBQTEGUCIRLOBDSQNPFNKMUWEQFEIKMTDS");
    const char tmp_msg_0[] = {-99, 25, 68, -117, 67, 24, 60, 103, 109, 91, -105, -80, -21, -82, -107, -84, -118, -33, 45, -25, 13, 29, 105, -87, -26, -83, 117, -105, -76, 74, 10, -95, -82, 45, -17, 34, 45, 70, -30, 14, 64, -63, 6, 65, -39, 57, -65, 109, -46, 80, 14, -10, 49, -99, 31, -78, -113, -69, 100, -124, -69, -70, 47, 5, 83, -61, 78, -124, 29, -118, -99, -79, -9, 94, 87, 59, 15, -19, -106, 83, -24, 101, -5, 47, 21, 60, -107, 51, -14, -4, 99, 58, 66, -89, 52, 18, 62, 56, -61, 81, -39, 97, -60, 25, 17, -85, -35, 7, -36, -105, -64, -76, -119, -77, 88, -17, -16, 124, -33, 104, -61, 124, 76, 55, 17, -18, -30, 125, -97, -86, 13, -116, 82, -27, 96, 86, -98, -65, 67, -75, 111, 75, -63, 64, 30, 65, 113, 46, -66, 79, -85, 108, 76, -72, 73, -11, 106, 47, 4, -91, -116, -20, -73, -26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.448098051812);
    msg.setSource(34833U);
    msg.setSourceEntity(61U);
    msg.setDestination(7495U);
    msg.setDestinationEntity(93U);
    msg.plan_count = 32550U;
    msg.plan_size = 660475736U;
    msg.change_time = 0.0269284849105;
    msg.change_sid = 6693U;
    msg.change_sname.assign("GHXIXBDXSJFZZBSKVEANVZSSLCJSCFFPZLROZRKWTEWBUJVGBYVUIDOZWOCGTPMTONLEWIGIRYKSHMEKTGHRQRQDHVRSEQVJFDIGMXLKNTINZXIUDPQABCAXFZWONKQWDWANOZKJUHMFVMSPJEPXCHVNJO");
    const char tmp_msg_0[] = {57, 70, 126, 24, -114, 41, 40, -64, -87, 93, 96, 55, -30, 87, 42, -66, 67, 10, 51, 81, 75, 10, -79, 61, -59, -44, 111, 114, 30, 76, 85, -7, -51, -92, 88, 116, -92, -17, -95, -22, 19, 4, 47, -126, 75, -12, -99, 101, 55, 66, 85, -36, 83, -114, -11, -115, 34, -31, 108, 45, 79, -11, -113, 96, 61, 56, -33, -80, 42, -98, -68, -104, -88, -105, -18, -115, -121, 54, 98, -44, -32, -33, -115, -93, -114, -78, 14, 69, 21, -94, -56, -34, -127, -68, -50, -59, -23, -48, -15, -110, 37, -29, 122, -31, -1, -103, -92, 91, 48, 32, 115, 2, -52, 2, -40, -93, -79, -26, -89, 96, 24, 109, 52, 19, -119, 103, -16, -55, 96, 99, 47, 95, 122, 13, -28, 1, 18, 67, 65, 99, 9, 86, -85, -79, -88};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.0792400535952);
    msg.setSource(34949U);
    msg.setSourceEntity(223U);
    msg.setDestination(200U);
    msg.setDestinationEntity(213U);
    msg.plan_count = 7251U;
    msg.plan_size = 1527388424U;
    msg.change_time = 0.46740956048;
    msg.change_sid = 15029U;
    msg.change_sname.assign("CYSNEVBCLHJGRUHGQKKQBZVMTOEBXWVPPGHYOVJBNWMQBHLSAENAULPEXWUBWLZIIARMOEOXROCFXLKVSMXDUFSVBEZDIIQQEPRDFZFYZOLMMOUZNAKCZ");
    const char tmp_msg_0[] = {-65, -77, -25, 102, -26, 57, 102, -100, -82, 66, 9, 116, -11, -64, -91, 93, -127, -97, -120, 65, 67, 110, 47, -30, 106, -6, -30, -114, -28, -58, 99, 24, -7, 51};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OULUKDOJUFDEFKIJDJTYKOYBBYDSMGZJFQXGMGEMAEVUXHKSWTKXEYCRQNJRESXJPHPMUKQPBTWGEROMDRNHBKJGLMCRFGCYNGQXULSZFHJHAYWZICIAHZPFMESLZIQGBSAKOBHFFGERA");
    tmp_msg_1.plan_size = 60466U;
    tmp_msg_1.change_time = 0.899848732246;
    tmp_msg_1.change_sid = 24601U;
    tmp_msg_1.change_sname.assign("MBKCJPVKIVOQIJBCHFDRFCZNHKPTZVAUSFQJXPSKEHTCGUYEPSXHZKTKVBIKXLYDIOBRSLTOIXDJBZHAUCWMTKLMQJWHAXPRJXIFHNJSHMUDUYGLELDKRAEANMCQCQGZGNWNUUNEFWGBIJBZPPMZETWVWVWLEJVGNAOWMOPRDYQXNXFAHRTUZYCJFTFEAEYGLBLOOXZPWM");
    const char tmp_tmp_msg_1_0[] = {-38, -26, 37, -85, -119, -44, -9, -24, -39, 92, -56, 126, 8, -13, -42, 86, -123, 24, 5, -10, -46, -53, 111, -44, -100, -104, -67, 8, 30, 48, -40, 47, -77, -47, -71, 125, 97, -10, -38, -39, 34, -61, -120, 33, 12, -46, 26, -115, -14, -94, -81, 66, -9, 26, -66, -13, 65, 99, 82, 53, 42, 94, -98, 41, 77, -119, 74, -50, -11, 17, 123, 91, 125, -30, -33, 9, -29, 23, -100, 108, -45, 19, 114, -69, 72, -23, 96, -52, -56, -108, 58, -100, -117, 84, -48, -124, -24, -103, 2, -4, -115, -53, -109, 109, 32, 17, -63, 96, 73, 38, 1, -37, -63, -99, 53, 97, 115, 97, 35, 54, -127, 114, 110, 77, 73, 24, 9, 84, 73, 87, -11, -121, 60, -16, -30, -51, -92, 124, -84, 7, -117, 115, 26, -75, -13, 15, -19, 65, 98, 91, -86, 27, -44, -56, -100, 58, -94, -105, 90, -1, -31, 48, -106, -127, 16, -76, -45, -83, 57, 1, 110, 18, 63, 28, -46, 31, 69, -19, -102, 16, 57, -23, 5, 25, 84, 97, -37, 0, 58, -115, 89, -102, -70, 29, 75, -71, -82, 126, -98, 28, -76, 80, 58, -111, -91, -89, 118, -9, 101, -20, 96, -78, 113, -41, -5, 72, 20, 115};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.956704678216);
    msg.setSource(38861U);
    msg.setSourceEntity(6U);
    msg.setDestination(54961U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("QZLLEHAGEFOHBRYCIYVS");
    msg.plan_size = 26659U;
    msg.change_time = 0.46983280919;
    msg.change_sid = 144U;
    msg.change_sname.assign("UZFUDLQXFWDXBRETTXRRQOTASZESMWFCFFANYDOQKJCTACVFQGEAHCSTKGEM");
    const char tmp_msg_0[] = {62, -100, -110, 117, -63, -37, -100, 0, -35, -60, 4, -88, 52, 91, -45, 2, 94, -117, 95, -63, -119, -94, -37, 25, 126, -33, 85, -26, -128, -83, 89, -29, 31, 36, -56, 58, -124, -101, -118, -35, 23, -78, 62, 21, 116, 92, 83, -1, -17, 43, -45, 114, 50, -61, 37, 61, -115, 105, 93, 95, 116, 86, -56, -66, 75, 97, 8, 72, 102, -48, 46, -87, 100, -100, -74, 126, 88, 100, -118, -53, 104, -106, 113, -9, 79, -117, -86, -100, -43, 33, -128, -86, 66, -105, 2};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.250680559696);
    msg.setSource(10617U);
    msg.setSourceEntity(103U);
    msg.setDestination(36000U);
    msg.setDestinationEntity(5U);
    msg.plan_id.assign("ZLWYNXCCDQRHZIGOQYJNWLGYBKCSYLWTQDFLAQWYMJKJYFOFRHZTRPZGPXIAJETMSDSKFSJAUHMKQFZFFOXERNEKUTAXMJZAZBGRVDFNEVXIOKHWMSVLOTTWQUUIGNURCLHXMIMPQLRJABXOUYSBWWDZVHFDBNMEPMKEDEUSIYQBYBUICCKEPFRXAODSNTBEGTCNVPVIJBNVUARXNC");
    msg.plan_size = 61005U;
    msg.change_time = 0.000905278146901;
    msg.change_sid = 24230U;
    msg.change_sname.assign("UTUFMOACEPTLRQBGZDEJWTOMNHKYUBHJDEWGGERFMYNAJXQWBTBGVGRNRYRXYAISENJGLYKPOQARCGCHBTUZWPLIWUIPDVGWIRPHJSYNXQOWHQOJMHKSIIEMFSDGSIZLFTWCVJBKX");
    const char tmp_msg_0[] = {15, 62, 33, 121, 115, -40, -55, -95, -20, 3, 61, -85, 103, -125, -59, 86, 44, -31, 18, -103, 125, 16, 96, -79, -84, 32, -9};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.528346330196);
    msg.setSource(8371U);
    msg.setSourceEntity(246U);
    msg.setDestination(49448U);
    msg.setDestinationEntity(37U);
    msg.plan_id.assign("GSQBQVGFZNKPGSBZCGSMKIQHKCOPVQFAOLPRPFFKHADXWIDDQXDVWTKAPGAEARJWFGMZNWFOIXJTZVLBFJBTMEKYUOCLAYWRYZOTBSZYILVMVNQPCMMBNHSLGQHDZIUMMCJUNRBXWHAUXQNRRIYPPELHUFDKLTBDECYWDOEUONF");
    msg.plan_size = 52321U;
    msg.change_time = 0.753953378893;
    msg.change_sid = 10833U;
    msg.change_sname.assign("WUJSBCSKIUVCKIGWJJRLVLFMYTYQCXOFUOGSMWZGNEBTAEKSZWODDURNOQRYBBEPCZXSNPVGMUUPAGCFAZHAOLCLHAERCRTJMHPWPJURMFCGPIWQANIQOJEQRNRHMQAUBZGADCDKZTJWPFWDLCYMNMDZHNXKWTTOPIXIFKJVSBTQAPOPVDTLIXXGLFEJDMJEVVQHOYHVKTBSFZVK");
    const char tmp_msg_0[] = {43, 39, -58, 50, 77, -11, -109, -88, 24, -23, -17, -26, -14, 84, 16, -97, 42, 29, 110, -127, -54, -103, 18, -3, 58, 28, 57, 124, -37, -53, -61, -27, 49, 87, 15, -67, 61, 120, -23, 66, 75, -28, 122, 0, -99, 87, 111, 44, -127, -24, -117, 83, 24, -103, 7, -69, 107, 59, -58, -16, -100, 102, 49, -96, -95, -23, 65, 86, -30, -2, 12, 107, -3, -66, 7, 9, 113, 48, 88, -57, 2, -97, -87, -17, 2, -74, -95, -30, -30, -95, -1, -20, 26, 123, 102, 45, -109, -29, 21, -125, -9, 71, 51, 34, 109, -25, 3, -74, -6, 91, 42, -35, -122, -3, -94, -120, 121, -114, 0, 58, 56, -77, -38, -7, 33, -30, -95, 96, 111, 117, -89, 41, -50, -48, -45, -75, 123, -32, 12, -78, -71, 4, 112, 34, 69, -81, 115, -24, -7, -9, 87, 6, 0, -93, -82, 104, -73, -52, 115, -100, 79, 102, -64, 38, -4, 53, 55, -8, -45, 65, -29, -70, 116, -16, 84, -38, 5, -88, -103, 0, 70, 42, 77, 16, 92, -96, -25, -95, 122, 110, 55, -1, 97, -48, -98, -48, -69, 25, -24, 61, 72, 84, -47, -81, -88};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.0797712922539);
    msg.setSource(10165U);
    msg.setSourceEntity(198U);
    msg.setDestination(42652U);
    msg.setDestinationEntity(103U);
    msg.type = 117U;
    msg.op = 142U;
    msg.request_id = 35579U;
    msg.plan_id.assign("TCGBHXQYFAATJVQIWPFYQDOTDXFQPXPSUJRNMXIDAWMWIWEVALQJIPDMOXRX");
    msg.flags = 31917U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.571003708431;
    tmp_msg_0.lon = 0.728934213316;
    tmp_msg_0.z = 0.769343950643;
    tmp_msg_0.z_units = 50U;
    tmp_msg_0.speed = 0.929829369219;
    tmp_msg_0.speed_units = 62U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.00981356614605;
    tmp_tmp_msg_0_0.lon = 0.480903786924;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("LYGDHLMNDCYQRCGMUCRAVFBMZVPFRNGTOTIFQRXCBNFJZICYBCLOWIYUGQAVAMHNAXEDFAUQKLSEETIOJSERKVWKIXBNFUJJSZJEPZKIPWAGCTKSBCNNRGDKFLDIWZTKEMOPVJGWDXPSILXWXCRKUWFUNYJQKWNBVYVRMLXTSZLQBSWTOTXOVMHGEHJRZKBIOPZWHDTPUTDHGUNBYAEQM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WUVGKPFJJYXIDHPIFBNDER");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.712967572723);
    msg.setSource(14327U);
    msg.setSourceEntity(113U);
    msg.setDestination(48454U);
    msg.setDestinationEntity(178U);
    msg.type = 139U;
    msg.op = 181U;
    msg.request_id = 34290U;
    msg.plan_id.assign("TYOQKBLZSQFJRIRZURNLRBYDTFRPGQEMRWRIPHMZVDJHOKEDHOGVIZLYVKGLNYWKAIPHJTWPOFZMYIXRONSVBYBGUBVMFOAXKMJPJSENGUCDNHDCVLCXTUAZAUEOOQQLPCGIUJFPEMMVJYXUPBWOIHFFCXESDTAXEVMCZQGLKYUKDWDJZESCSWIQAAGULTSSANGFFRXHNBTB");
    msg.flags = 40442U;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 243U;
    tmp_msg_0.value = 0.29306141298;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MLFHFKUNHFQBZJMWNQZIBIQPNYWWTHCVLCCCWPZQQDCDCKAZBXMYUWNKAJKXAGBDHWNWHYOPEDLOHPUASERDGINYFOHELILDRLATLBVVSSSYVOSVJMSJDZUFZXKVAITUIZPSLUFWBEYERXIMQKAPJZRNGMGXEREOJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.607795037807);
    msg.setSource(60888U);
    msg.setSourceEntity(216U);
    msg.setDestination(46212U);
    msg.setDestinationEntity(206U);
    msg.type = 21U;
    msg.op = 7U;
    msg.request_id = 44079U;
    msg.plan_id.assign("EDBIWMEUYPCHQOO");
    msg.flags = 19829U;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 31904U;
    tmp_msg_0.value = 120U;
    tmp_msg_0.error.assign("WRQVNGOWGEMRSQNPKMVIBUWPGCRUASTHCHQSZKQVLQNRZYKJJOIFDBVMWULTBDEIUTQSYOGSWVZWHPWYRVIKAFLHTNYNTNECZIOYTGURMBOIKXDDHKDLCVTQZPYSFAINMUDWLRRXEZYERMKMHTPXNCUHONFZKEEBUNZGXOHECQUJLMSOFQXALJHMFAUJBXXBTJBSOXFFLVE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AIBWKXYLOJGNBXNHMSWJGGCPLKWPLNEFSLATSFONXZYOSARNXHHBUXFOQTZDYLHAIQZQGTIZOFITZGRDFEUEHYNULELVGVKBPRQAPVYMQMFOXR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.145932507276);
    msg.setSource(3481U);
    msg.setSourceEntity(158U);
    msg.setDestination(58948U);
    msg.setDestinationEntity(190U);
    msg.state = 36U;
    msg.plan_id.assign("OVIWGEHQWRCGMTGROUHKXLXBQLINSQTFPBVCXAHRJMGFELOQNSVHYKWPNCAJOUSITVTAFFRVGDWSHBXKBNQWHAFPZPLJDCUFUYDQLLIBPKDECNIBIMGHXQIZA");
    msg.plan_eta = 670941527;
    msg.plan_progress = 0.189831997147;
    msg.man_id.assign("DXFBGAUFUCYLGEJSGCFEAAWLDRBXZHCVRVGTYGETCBJRHBAMBIOEPDRVXJHMKIXIQXUZIHQALZBWQ");
    msg.man_type = 32629U;
    msg.man_eta = 449045949;
    msg.last_outcome = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.221795302101);
    msg.setSource(60331U);
    msg.setSourceEntity(144U);
    msg.setDestination(5919U);
    msg.setDestinationEntity(92U);
    msg.state = 123U;
    msg.plan_id.assign("GTNIWUEVIBXULMPTBKMMCZWDBBPHQGDLHYXMTDOAISJUNCRVCMSDGANMHXUAECLAYJELELFSDARVQZNYIUGTQUXNLQWUZJTAKTVSWWNIBKXRQZOJANZDWFWFWUROTYEFWRKUQDYURJILXSFVMLJHNEBSAHNGSJYCJKRRBXGYOVKCZPHPVOQMGCQTFTASHOHQVRPPGJVNXJOMXOEFPBKDLHYZKCLTYEFDAGQOFP");
    msg.plan_eta = -2109324402;
    msg.plan_progress = 0.96381535697;
    msg.man_id.assign("DSQDPBSXQIVJAVRBFUSPFKCOAEHWSQGMGZCCTCWKQQZXTLDFLCCKXLYYGCMPOOLEVNXEJEOJRHFWIJAMTUIEZEGTGDAZLLWNXZPSDTKFIPFVPUUAGNHCXZRGHQVTBTEQWPBYQWVYOXYFXLMOMTWDLVVAFBYBHYNRMWLCIRBOMRPHTDNGINGIUSUZAQBWEOHHDOHAXSKXKDTJKCJFEJZRSUIINOVMAEQNUPKIJRUSPVDWZBGYJBAKNRHFU");
    msg.man_type = 62311U;
    msg.man_eta = -795694587;
    msg.last_outcome = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.613858343191);
    msg.setSource(4207U);
    msg.setSourceEntity(28U);
    msg.setDestination(30318U);
    msg.setDestinationEntity(115U);
    msg.state = 27U;
    msg.plan_id.assign("QDEOQQAWAKAHRWXNDQIVZGAJXMOKQSOHFBMPKBQBBPYGYBTUKNLXCFAWEGFMHZBCGPWZTZUSNTULCDUVOKHBEFUCDIMPIHJRMWEUOAEYNRWPTLXRDRI");
    msg.plan_eta = -615025549;
    msg.plan_progress = 0.345118927392;
    msg.man_id.assign("YGALFPYNTCUTQFSHCBIUXORMKCVRLFPEQAEBCZDZGMXVSROAYEMXJJWMMHJPDRXVYMULZERKEWQPFPUITPRFGZXAGVKGDRASNZACTBXHQZNHUWQNRHFBZXNIBFBPBLIAYGVKVYUJGUNDEJBJRUQNVBJVSMDXUPJNFIISDOWOAKPMOSQOHGTOZVHKOLAJKXLFVSTXDHHOKYCWTDIKAPCICTKSLTFULHQWMLYEQLCYDGGMBTWRWQOSWSJEZWIEZ");
    msg.man_type = 39612U;
    msg.man_eta = -1300150326;
    msg.last_outcome = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.515880723207);
    msg.setSource(2475U);
    msg.setSourceEntity(90U);
    msg.setDestination(11052U);
    msg.setDestinationEntity(144U);
    msg.name.assign("MJGCVISUWNKABETLKSDWIZDDDVPMDTKUYYMHMOWFUOPQSETOOIQCJGHANPQNBJARNTZPJLKODNWYXOVGHNGOGCDYMZVTZNSQYJBFO");
    msg.value.assign("QCPSZQHSVAKIZZOFPYRFYWORUOCURBMGYLQSKEMPDTUBVGLLIUCUQWPIEMDSBJNZDLXYWRBMKECZGPPVVHKONEWMMUZQHHTECTKGGAFNRICCWJHSALYMTOWJLNJDRRFYBYWDQQVVRLHJZNDJMPHTLQBWSZGMBLFJPNGYDQXAGKTBSXEGTVYKJHPXKEXTOQJNNYVDHFUROODJAWVFWUUKFSOVEITOIXN");
    msg.type = 148U;
    msg.access = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.426883716087);
    msg.setSource(49656U);
    msg.setSourceEntity(227U);
    msg.setDestination(16546U);
    msg.setDestinationEntity(155U);
    msg.name.assign("SMKJYGMTWNGUYIZSPQQEHZZFWTIMUZOVVEGKLHCXRWRJACYDZAGLOVUBDRXUOLIDFVNYLQDSRUAJSKRAIKMYFQHNLTWCIMXBCPHHNDPTGFOACOFRPXW");
    msg.value.assign("AIMYUWMDQBFBZMVOXWMLGTAUPGJKJCMKDDLKEEKBWNEKDKIPWPZKAOEYOVEFYRFPQNZUIWQMYCRQIASIYRNRLKRTONLCDUJJSEZVQQPGQBTGOXVXLBSHRHTBHPLHCCPFNUYOIGAEHGCHYU");
    msg.type = 75U;
    msg.access = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.244897372074);
    msg.setSource(58077U);
    msg.setSourceEntity(183U);
    msg.setDestination(33244U);
    msg.setDestinationEntity(87U);
    msg.name.assign("HKBMGGRVLVPQFZBZRXFSALESYAOAJLWDMORKMSXGVVVUPQOTAZQUXJONTOCNEVOJZCKLQGJEWMXC");
    msg.value.assign("FLTQLELSWKMKVVPLUOLXOEHCPAHMWQSVWWZZPFKEZIYMUNYJDGMEXTILVYZEZQYULAGFVNHKBWMYCVBTUBHRFKCIHTETBWAINSJTJIOV");
    msg.type = 194U;
    msg.access = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.345146088363);
    msg.setSource(34974U);
    msg.setSourceEntity(40U);
    msg.setDestination(30339U);
    msg.setDestinationEntity(153U);
    msg.cmd = 37U;
    msg.op = 243U;
    msg.plan_id.assign("NSKPGHSDBECESNBXXFEMEMGCYDLHFIGNCPHHAVDH");
    msg.params.assign("JMKBZEXAZQRZCFYUILLFJLALESHAUVMEBFOPQVHPSTWGRDAJWRNCESQUMRXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.781410071128);
    msg.setSource(12905U);
    msg.setSourceEntity(115U);
    msg.setDestination(28339U);
    msg.setDestinationEntity(16U);
    msg.cmd = 208U;
    msg.op = 23U;
    msg.plan_id.assign("QDHBOSALABNTFCIHGYGWUKOKQITUBCMTYNMC");
    msg.params.assign("SBKUAVDIEJHWCASNVLRMQQNOVINTGKAUVTBFWURLJGDFCZSUOSNWMMKIIBCGPRAPMLMRZIKAZYQPFELRSGZTLAGMOQKMQBHLXUYIJCYFADNPLBBKADUESIWSRTKEHUKTXUQBGFTRIXCUTZXQRZWCWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.373502623669);
    msg.setSource(22093U);
    msg.setSourceEntity(151U);
    msg.setDestination(43275U);
    msg.setDestinationEntity(147U);
    msg.cmd = 5U;
    msg.op = 48U;
    msg.plan_id.assign("MPNJGRMDBLZENRVGDIZUWOLRHESHGXBIXCZIVJSHZSLCAQQTGPYRXUKWIRFJAJFWSVFWDXHJRXBAHQMFLHXLMWPNJNQLCCSYDQOCIDBFYYNUXW");
    msg.params.assign("CVBTVMGTHWKQJEHYEAXPUJPIAZATSABPFGIARGUFRFHJLJIVJGIUNWYDGOYTFHL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.478524512639);
    msg.setSource(6979U);
    msg.setSourceEntity(231U);
    msg.setDestination(2973U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("VSOSAVUKSTVCRQNSQUHEJIHMNARIUWLKTC");
    msg.op = 98U;
    msg.lat = 0.504723081113;
    msg.lon = 0.490749810595;
    msg.height = 0.251578167773;
    msg.x = 0.0196549693864;
    msg.y = 0.21301154103;
    msg.z = 0.189018968722;
    msg.phi = 0.865456943249;
    msg.theta = 0.331553873642;
    msg.psi = 0.337521104173;
    msg.vx = 0.649437357103;
    msg.vy = 0.458535700505;
    msg.vz = 0.491724480327;
    msg.p = 0.767194652324;
    msg.q = 0.742349130466;
    msg.r = 0.335899833251;
    msg.svx = 0.426906083445;
    msg.svy = 0.324882696405;
    msg.svz = 0.27567015936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.971628158891);
    msg.setSource(32526U);
    msg.setSourceEntity(90U);
    msg.setDestination(37165U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("YYIXZZLODRIBZRQNLFFHAKHJYJTLXARRPETSUUIRKSZBDZICPZHOKJSJQGBANJOSDFKLGEWXXSQEOREOVGHYLPZMLAQGXYWPJNESTWMOBWGLLDAKNFBCGBTNMTMUBAUDHMEHPQOGFDEBKMDAWGTKRRNSYXOIHLOY");
    msg.op = 215U;
    msg.lat = 0.607727937503;
    msg.lon = 0.840129858214;
    msg.height = 0.373615977798;
    msg.x = 0.0353776642783;
    msg.y = 0.626886245815;
    msg.z = 0.0538949408707;
    msg.phi = 0.734074822022;
    msg.theta = 0.256942910948;
    msg.psi = 0.389994907523;
    msg.vx = 0.301080780247;
    msg.vy = 0.659805316019;
    msg.vz = 0.568843082609;
    msg.p = 0.052305210564;
    msg.q = 0.916293329237;
    msg.r = 0.651540271237;
    msg.svx = 0.575286459116;
    msg.svy = 0.0053322510907;
    msg.svz = 0.106655459972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.361684007145);
    msg.setSource(9306U);
    msg.setSourceEntity(249U);
    msg.setDestination(62677U);
    msg.setDestinationEntity(176U);
    msg.group_name.assign("QMBZXTBTLWMEEVWWNOXYMFHABSVVQXSINKOWCJZLPEUR");
    msg.op = 195U;
    msg.lat = 0.953556041023;
    msg.lon = 0.730821361298;
    msg.height = 0.326672633345;
    msg.x = 0.870586747011;
    msg.y = 0.857538020615;
    msg.z = 0.586391651493;
    msg.phi = 0.322277889695;
    msg.theta = 0.710475677528;
    msg.psi = 0.845712234721;
    msg.vx = 0.861682770183;
    msg.vy = 0.540366371033;
    msg.vz = 0.56088232297;
    msg.p = 0.956230871155;
    msg.q = 0.994094615802;
    msg.r = 0.0277509091923;
    msg.svx = 0.578570140817;
    msg.svy = 0.537467783094;
    msg.svz = 0.417205899373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.741665431647);
    msg.setSource(10870U);
    msg.setSourceEntity(252U);
    msg.setDestination(61389U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("CJVFIPKGPDYQOZLNAJTATZPCWXGFBTKUPHKBVXOBELAQRZQKMNDPSHHQKALXCYSQXCWORJMUZBJAPGVILLPKMPNVSFMHINVISSDAFGMUQTFGVYFHNDYNARQPIRTIMEJONEUVHRTNRVABKIRUQXWLJCZCLJYHWUSYFYIESXCHZKYWWVMGUXFYJRBC");
    msg.type = 227U;
    msg.properties = 57U;
    msg.durations.assign("EOIIEPJZAJDGSKUNFBWXUUJCKZHAILQSEDBBDETSDTMWKFHNVCCUHCONGBLMYVBGMUBHAZRSNNHGHXJVYSQHIWFFKXPZZWELULABBMINDRYWVDXHTYNPTFUKMIRUPNSKXGR");
    msg.distances.assign("ODWSBPHAFTTVICUYAIODQEMERFLNREUNRTKTBNOYPKNUYCETUXSWMCTYZYDPAAMUGDAGRLCZIMEHQCQQIXNJLIXZKPAYMFXDOISKJXEHBOXBSILVGTBUAKLHV");
    msg.actions.assign("UNKSHUHZOFFHIDFHTBOCDFOSSAKAAVZENPHYYKLPJKGHXSCKFTFDRGCARXYEDXTXZWOJTWQUXCOZWEQCX");
    msg.fuel.assign("FNJBQOIEZNSAOWASIVMVHZOKLTBKTWWJEBUKZXWVXGPGQPVZAEVBNTIQGRLYVDAIWSKWDURLPMKSNRYYICAFSURTLQXWALCGCJNFMMOYHMKZCHEIQJYXFVUUJOKFDBNBA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.632773982987);
    msg.setSource(62322U);
    msg.setSourceEntity(222U);
    msg.setDestination(5284U);
    msg.setDestinationEntity(137U);
    msg.plan_id.assign("BYEDGWYRTVIUJAHXAANLTENNDVHKJQNOBCCWBILFBOSGPUCQSVZLXLXYRZDRVAIDNTDODPJNRPZBMFUXTKFKJAFKAZMQPVIYLNROUSABIPKJOVYFTYCHEJLWBDZQFLXQEQGWDRKTEUECEKIGSJUFJRLX");
    msg.type = 217U;
    msg.properties = 58U;
    msg.durations.assign("GVMPEWVNJHHFRCINDIGMXOOWFOAIMVJRSBYSKQMWVKAAUNHHZRRHAAOGUEGOTAWXZAVPTXJFRASSOBPUZLSDWFFOBDHYXYTOICLONXWDFWUKQLNJTECEYDQLSACYQDCCTVDZDHJPLNKRIIUNB");
    msg.distances.assign("LWPVYASMWGUCTYFZMICOLISOTXEMUUJQRFXOSBPDCRHJVZJIOYNYSWDQDDXMGDXKYQEAQWULQCJHFYRWRALZKJNPTHWTSCXOAJSXRHIMIPNLVBSLWRVUQPBQABKBKJFEIZFMTIKAWGVKCVUZSRYONDEDDEENOUUELHOVAIGZCLINEQBJNYZVYNZFEFBWAFTZKWBTQGHAPJVOGPQHTJNNHVGMSPPLRYTADDHXCMK");
    msg.actions.assign("HSCIKAYVURZCSLWCXYBQGVEQTHBAZXGIDUTJITIKPMKLCPQMDWNUXRZLOORSBQDQHYTMWNHGVGBKHRJBVATMUCEGRRUFMPOJTJQCONKUSWVNOBDKPGSXITIPJGPKAMMNBADEUCFTOJIHCTCXFSRXAIJZSYVZEQCEYNVAXZNAHOFYHLDHPJSLFPOXFPFNMXTKWURFNQZDBJIW");
    msg.fuel.assign("PNYULSFBBJZGRBGZLFCPHEHZDPSUBBOMHDVBWUDAXBVWFWOLSLSXYGCTVJVOXAAFVSIRKWXRLYTTATEPKHTPNXUTCGXTRCMANIUKQFXFMSMLFJIEJYRZBCBYTFAEQUULUHHDTIHWPOKJCJQMZLDGIYKATLQRKGDDRSEMQYIJPNWNPFCQCNWWEOSYOHQCEZMKREMIIAKROYSMISXVIEJPVZAHXDJWNWOQNDOOMVGQNKHPGVZCYUGUQEZFRJAB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.513043735108);
    msg.setSource(61575U);
    msg.setSourceEntity(110U);
    msg.setDestination(34632U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("OLKNOWREQFVQDZONZHCQROBWAMTVHLUMKXWKJTKPGGYXMEASDXDEUZIXIUHKBRNGLAZVVHRQOEJPWGIOQJDCZWU");
    msg.type = 206U;
    msg.properties = 109U;
    msg.durations.assign("MIYZQTDSLXOVQWUAEPKHRZJZZIAYWUQNMKJEAWYWCNDAOBKHJPVRCGHLEJZEULOISIUCIKOUNHCBRMTRPKUOKEYMGKPONXZBDAAGHTTUMKEJGNFLWKGASYPVYSTATGVFGCFBNLBTQTPLTXMOUBIUHJQ");
    msg.distances.assign("PRUMUBSHTKABRYYJNKLVZDWYXILSPGYDQZTHHOBOUPEUQLJXHDIQRZTPJNNLNANMQEQJHYNPNJCBMBETHHQQTZWYENRLVZLMWXVFIOMWVOKKGKUHHRWBIQLHONADRIASWEXXFSZACZGJFGWCBFKMCDXFAGVWJMGCXSOYFACYYAOIFSBTRSZEEPSXTICUBBPC");
    msg.actions.assign("TTKYQMZUNKQPVKXQNOASXMWJBMRICBKYSYSIFKZDBYDTDAPSEOHYVKOMQLCVUAZBKEFUKJCAJY");
    msg.fuel.assign("OGHFOPKEKYJORIDDJCDUKLSVNTXWSAFHQKFWFXATHILLKYEKCCVNHNBFYSWWFAZPBYPQLHFELNUDQLUWYIUUQZVNQOYTDCCQQJIIXZSMMCDHUZSTJUBJLLCRECWPNEZNPJBCVLFLGADETWNRHOGFBVDUDSPSPMAVSGMIDUVPERKAXRVRTMGBMTGJZEGOWJMARBXYSOEYMITARPPQBTRACIXIKUVKHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.600744276877);
    msg.setSource(9666U);
    msg.setSourceEntity(102U);
    msg.setDestination(6690U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.997106175855;
    msg.lon = 0.0848525160643;
    msg.depth = 0.894810357698;
    msg.roll = 0.751970816974;
    msg.pitch = 0.824381098003;
    msg.yaw = 0.777847000146;
    msg.rcp_time = 0.180918929168;
    msg.sid.assign("VPWFBXAFQBJIJHXYNIYUURGTKETPCGOUYMRTNCGVDVQGMPHRESRAIRHXVCOTMYMRA");
    msg.s_type = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.945345895901);
    msg.setSource(43087U);
    msg.setSourceEntity(106U);
    msg.setDestination(23032U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.197511693181;
    msg.lon = 0.221895892529;
    msg.depth = 0.542971938654;
    msg.roll = 0.950130273528;
    msg.pitch = 0.16419255679;
    msg.yaw = 0.334586769394;
    msg.rcp_time = 0.416262732388;
    msg.sid.assign("LMUZNVYIUWKQQLQPPEBTXDZAVPWCIRHGAETFOTELFUCOEJDGVWLTPJIZQKERYRNUMHKPMXDFDQGRGWISXSZBHVONMOJRLAFHXRSVTRZGNCWYADPXNJTCXSHTOIOXJWZRCXXSJZLVGBNQWABHJOMBIDYBCAKKSBCTZEONQSREMNVHKYQKCWKDJGCPSPPDLOBZUHUWDYICIJXB");
    msg.s_type = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.374932558294);
    msg.setSource(9744U);
    msg.setSourceEntity(244U);
    msg.setDestination(13141U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.0204596572869;
    msg.lon = 0.429981277874;
    msg.depth = 0.568340066696;
    msg.roll = 0.337615317077;
    msg.pitch = 0.799408671874;
    msg.yaw = 0.934018277953;
    msg.rcp_time = 0.918582679559;
    msg.sid.assign("JPERSDALJUXQNBOUTEKMIJVDEOVVKXIJNJPMNBYMWIXYDHVKNPITZFDJZKEZAFJBCSXCMZVBHPLOWSDYVQAJGRXGVXSWMRFPQPUTKLEYFYVLLZHKFUSJAEOOYVFSODGGYHZQOLUOLCAGSQEMSCBJIWIRWAGTIBGVSNAIZORYHWCMNIANUKXZXMEHRRQMC");
    msg.s_type = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.00870132478839);
    msg.setSource(11685U);
    msg.setSourceEntity(80U);
    msg.setDestination(29314U);
    msg.setDestinationEntity(239U);
    msg.id.assign("DGWBTAGRWHQPPCYBZCTEOIZOQHXITSZFKGGPJYMVXMEVZSZCOPANWAOAIWEJEDIFAZSQUAALHJANFDIMPQROXUSBNIVUDXHHOMEBDLLKPVBDIKBERKBGFQPWLRYAUDWCYSVGWTQHLTNUJPNHVISZBUQMVFOWMJETCJXJUXBPJKVVXGMZKXYZMRYLKXLYANWSTDUGREMLGMPTODDHGVFUOQFBITNCYXZJFRERCLLNFCJCCSUWKNK");
    msg.sensor_class.assign("IIFGTQMRPFLBERXVVTJOFCPROBKMUGAZDZVX");
    msg.lat = 0.0701978079065;
    msg.lon = 0.843624144513;
    msg.alt = 0.153138824642;
    msg.heading = 0.687695963708;
    msg.data.assign("EKPAURFXAIZMRGZOGBARFRJRQJUJEMIEFNAPXNGOWOZJSSQSLDUGTGLTFUETVUVJDUJOXLNQNPYYHLBUQMFJBIFGYZXCYLFNVIBML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.731618974976);
    msg.setSource(56347U);
    msg.setSourceEntity(44U);
    msg.setDestination(35508U);
    msg.setDestinationEntity(224U);
    msg.id.assign("BZDZEAJQXTFNQCLVMCADDINZJJLBQDTOTABEKLGHFAOALKCTYKDXMWLXRTYPAUFZFDKCPRRJSMIWQXWKYTNMNLSMQIVCAHITFYKBAXNXFUG");
    msg.sensor_class.assign("UXGFPYYVHCKVIZKMJZIBMDUFTMJYHZIQAWQFQIJZUJHXC");
    msg.lat = 0.74506382372;
    msg.lon = 0.660197787611;
    msg.alt = 0.24072740657;
    msg.heading = 0.284469596502;
    msg.data.assign("QUZJMDQVVVZZCOKKGWSNQHJAHKTKUCAZSGAIMYRJOQAYNGSLMEDPUSMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.601430882334);
    msg.setSource(40466U);
    msg.setSourceEntity(99U);
    msg.setDestination(55987U);
    msg.setDestinationEntity(45U);
    msg.id.assign("ZBVSELLZONTQRAYGEUZDOOVLUMWMPLTMLFYAIXINTTJIVHTXYDXQZFKHPSTFMIULDXRMSYVOFBJOMQROPTALBXYQNFWLHRGBPKUQAGGPFUZCCVGDSQWNWYBKWRQHIOTAKJEHGJCEJXJLPEVNHXKEMGY");
    msg.sensor_class.assign("ISWFZRXGQMAAOTICJSILVLTXSEILOBMJCJFHEPHHCEDIAFEOBAXVUBDXVVO");
    msg.lat = 0.315722580005;
    msg.lon = 0.456711580044;
    msg.alt = 0.290094243708;
    msg.heading = 0.529807124225;
    msg.data.assign("IJLNMANQUTMKBTZEUTABIUJTISRUFLSWQGEYNHAVBRPEEMECMQVLQOCGJDVHECTWADVUQNYXCFSJYUXINOCOISTLKMITKQHSGAHXZVLHYJGMYRSLSXOCIFHDLJMGGAFDHNCJOURXHNFEBNPPWRWMNPTGUPEFSVKQGFSLIYZWXEZRZMCAFMXWKZKBPHDCYPUFRBVYRBQEWOZKWZLOPOWQHDKJSVBVZYXUXR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.610455085037);
    msg.setSource(57186U);
    msg.setSourceEntity(196U);
    msg.setDestination(51979U);
    msg.setDestinationEntity(250U);
    msg.id.assign("ISVBVPUBOGZGENALBIJPRZVJFOKPNRFVYJGHNKXWRSPCACFDOCIHYTQLNEAESMEOTHKPAIRKYVCXMSKFMGILWTWJOGMQSTAYXHQMAJMYZBBUFZDDDDQFUCJZABFKOXUREPIXOIPQPAAKWNEUBCRXOZLQEWKJYDMKFVNDMCJDWHE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DIEQUTFMOOOXTQMAVJWYHZRLGT");
    tmp_msg_0.feature_type = 171U;
    tmp_msg_0.rgb_red = 114U;
    tmp_msg_0.rgb_green = 54U;
    tmp_msg_0.rgb_blue = 199U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.814767962648;
    tmp_tmp_msg_0_0.lon = 0.413431966467;
    tmp_tmp_msg_0_0.alt = 0.00263579381945;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.355480853892);
    msg.setSource(57345U);
    msg.setSourceEntity(143U);
    msg.setDestination(25694U);
    msg.setDestinationEntity(156U);
    msg.id.assign("IKWGHEDSYBJZWVYFLUUXVEGMPNJSXYXKEELGUGJOJHQCJREQIVEKNSFZTKUTXOOVYSAZNFXDIPLRCCOZYGEPTBMSCXAQPAQWWWIPKNUNMDZBWACTJKVRMZEEJRGYRXFZVRAFIEHNRMVFLHBUZPLIQSVADQBDMUNYQVDDHAHKFCHMTDCFYLODPYXQLTUJIBHCTGOBIFRKBQRTZXSAKRHWSMKIGDTXNUTAQWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.358354612389);
    msg.setSource(31766U);
    msg.setSourceEntity(81U);
    msg.setDestination(50218U);
    msg.setDestinationEntity(167U);
    msg.id.assign("DHRDTTCKCCFSYCTNBAQZMPYYOURWKFIFPVDVAHDFXSBEEDMVWNJYPUOBBZDVGWKDCLBAUSLCBDNURKROGISLIBMZSJPBCONZWPETJSJEKZXPYOFOJCXAXWRPDANGLIXMIGHWESMIHVLGTMZTHUSSTGAHBAKFXHRKQRMNGYYPOUEJLLQOVFCUAQMCQJQVQEKRDAKXNTKXEHVYWZQNWLE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.861800741888);
    msg.setSource(41530U);
    msg.setSourceEntity(88U);
    msg.setDestination(39759U);
    msg.setDestinationEntity(86U);
    msg.id.assign("MGERGIUQTVGHPFYINDZCATEZDTJEZZKBMONWQAHVJRMLACVMKKVYBBYQQMIWNFJWZBACXABLSJEQZDYWXLQEGHIFGHOYTOORUFDYPFONNDJFTYUGFXBATRXNSIUHGGTUZNJPGDQHARLWMMCVEKXLCESIMPDFNECNKHSXSVCHJJINRL");
    msg.feature_type = 155U;
    msg.rgb_red = 106U;
    msg.rgb_green = 78U;
    msg.rgb_blue = 135U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.577979684501;
    tmp_msg_0.lon = 0.397573890959;
    tmp_msg_0.alt = 0.515107376026;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.0199064304782);
    msg.setSource(62660U);
    msg.setSourceEntity(113U);
    msg.setDestination(16208U);
    msg.setDestinationEntity(201U);
    msg.id.assign("QFCMPECALVEJDKBEFTXNIWBWPTWHTUYVQRVXQAYTFDUMLQYIJCDITDXYFCLSRQRATKKNMLFLJOHQDFOGJZJXFWAMSNINGRZDHYRSGBNIOWSMALGUCSJQEAHRPIIUXKJJLRUEMLSUXBBVZFHJWUXYWNGHTUZSQVCCNOKOZSOYABKZTJZPCKMEIZHWDXYADZBVEB");
    msg.feature_type = 225U;
    msg.rgb_red = 7U;
    msg.rgb_green = 61U;
    msg.rgb_blue = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.728472805545);
    msg.setSource(49616U);
    msg.setSourceEntity(161U);
    msg.setDestination(62034U);
    msg.setDestinationEntity(47U);
    msg.id.assign("SGKSDPJAWIEQMPJUIXHCMYHFGTMXATVKAKDJGQOWASIHKHGVOMGDNNOBYZYUUMLMOGDFFZFNHUBCDQYZFWBIXEWTXYHRFRUOQNMIRRQPLXYSNXTPPWKUINGQBMERGSLSLLNXFDPEPYNHAQA");
    msg.feature_type = 189U;
    msg.rgb_red = 135U;
    msg.rgb_green = 91U;
    msg.rgb_blue = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.184214289889);
    msg.setSource(61249U);
    msg.setSourceEntity(146U);
    msg.setDestination(15563U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.636366103887;
    msg.lon = 0.826136701402;
    msg.alt = 0.597401608945;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.0846667061794);
    msg.setSource(12325U);
    msg.setSourceEntity(59U);
    msg.setDestination(52875U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.0973660926932;
    msg.lon = 0.727574549087;
    msg.alt = 0.837663820336;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.258504834187);
    msg.setSource(64929U);
    msg.setSourceEntity(234U);
    msg.setDestination(25357U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.548663856791;
    msg.lon = 0.823106303776;
    msg.alt = 0.933597126133;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.879009801277);
    msg.setSource(13096U);
    msg.setSourceEntity(149U);
    msg.setDestination(50064U);
    msg.setDestinationEntity(246U);
    msg.type = 237U;
    msg.id.assign("COKYEVOJVKXRLMIDDHUFESMVKWTMPVWGZGSFNTNBSYEDRWADFNIKIVXDXCTYBNSQLHZRPGDEBZZXFTEZKGELIYQGESVSBWQBAZELRQGWCCENFAMQGKG");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 597624301U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.160574695837);
    msg.setSource(50711U);
    msg.setSourceEntity(85U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(245U);
    msg.type = 197U;
    msg.id.assign("RJFWAAFBGPJMNKVLZSF");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YPTYZNARYLRVSOXCNSVVDWBKUZMLCYWYWMPWIRSOVBXOGHIWRJFAMTLOTPMCYBKALXUTGKPHGYRTSTEOBLHAZGLKXFKBKBDPOXNNDUVPGUKVGGRMUMHVHLIHJOAVJTUIZIQZWBTAWZHXJUDVZAZLP");
    tmp_msg_0.lat = 0.790993805308;
    tmp_msg_0.lon = 0.598155238656;
    tmp_msg_0.depth = 0.862907595031;
    tmp_msg_0.query_channel = 152U;
    tmp_msg_0.reply_channel = 125U;
    tmp_msg_0.transponder_delay = 151U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.344452126982);
    msg.setSource(20494U);
    msg.setSourceEntity(36U);
    msg.setDestination(1606U);
    msg.setDestinationEntity(252U);
    msg.type = 193U;
    msg.id.assign("KSRFUQCASIUDFZVAOJFHLNFHHKPWVDKECIOVQKANLEPYNFWSLCACWTPCBNNVIEORQSJODSLUJYXAJNMKYNJZVQMNLIYZJUEZXABTYQPTMDJSHXKIPGMIFMTD");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 203U;
    tmp_msg_0.error_count = 143U;
    tmp_msg_0.error_ents.assign("SMFUMSCGQDUZUZZUYRNYRCVMDJVQKXJPXBGESROSAMBTPSDXNLZPVVTJKCHYHTSROELBBKHPPTWWHMJXVCPXKIUDTKMQAMSEWZBOEAYAFGVYCPETAYRNNCVZBUKHLALRZHMVWPUDJTNZZUNBPLXHBFSFOAIWRDQCQCGV");
    tmp_msg_0.maneuver_type = 16459U;
    tmp_msg_0.maneuver_stime = 0.571105981319;
    tmp_msg_0.maneuver_eta = 32320U;
    tmp_msg_0.control_loops = 2262797066U;
    tmp_msg_0.flags = 162U;
    tmp_msg_0.last_error.assign("YWNLRQWBRLJKUVBJGVCIDCPMMVOXJYGKQUEXWZETKSAZDOMBDBHZVDSPANBQIYGDYHHWMVPLOKBUNRATTAJRPQTFQJXXCEDKNIHQLYRKLRQIYGDEUPJQCFFDNEGHLBVJNNMXLSCNXXKYEA");
    tmp_msg_0.last_error_time = 0.861392004342;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.823575640948);
    msg.setSource(37614U);
    msg.setSourceEntity(111U);
    msg.setDestination(32245U);
    msg.setDestinationEntity(136U);
    msg.localname.assign("FVQMIKTBHBHXOVTPZDSDKCVPAPCZQTEFXOSBEKWTLUHMPVCYYVXOSEFWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.901686339511);
    msg.setSource(43895U);
    msg.setSourceEntity(245U);
    msg.setDestination(44446U);
    msg.setDestinationEntity(141U);
    msg.localname.assign("QCDUNWLHJQVYOTWJZXBKJFYQRZEHBKZRMOWDYQSOILYLVUPS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AYPYHVRBSUJYGBEGCXPFVAWNQTHXIOHFFEEAMMWAECDJMABWBHSLJOVXFBYHKLFTPLSROCBFPRKKGWQIMIPVUGXOQLZZWVDSSDHDISVGXPSCSQ");
    tmp_msg_0.sys_type = 241U;
    tmp_msg_0.owner = 49895U;
    tmp_msg_0.lat = 0.21306676349;
    tmp_msg_0.lon = 0.313091917332;
    tmp_msg_0.height = 0.248861698847;
    tmp_msg_0.services.assign("PDENXTVTMOFTXEG");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.967713378138);
    msg.setSource(44167U);
    msg.setSourceEntity(160U);
    msg.setDestination(55442U);
    msg.setDestinationEntity(35U);
    msg.localname.assign("GDZFLHPQGKEPMJHQSHIGRBPKFGLONECNWWBYTEFLIPJRKSZKOSOHDLHKRZWVWEVIUMCXCKDFPJPQANBBGRUJHMIAQPIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.947726534191);
    msg.setSource(40784U);
    msg.setSourceEntity(219U);
    msg.setDestination(63088U);
    msg.setDestinationEntity(173U);
    msg.timeline.assign("OVFLHODMNINOUXRWAWVSGETQSFNIJBHAENBTWRXSADHEQKGJZZFGRFRZYPYSIASVXLETKGIQFUMTNHZILFOQCWWEDLIYQCELUUZYCADPVEQWHQGHPBRKUMRESCLCZCNDKVZOYFBTPDHLZUWDCIBLMPYTIBKJVMGNKAFCXAPJVSWUTUTFVDMRSPPTSULRXYCJYOLDHQVGN");
    msg.predicate.assign("CANCBWQNRLNXXAVGLYYIUMPPVSKFABPQZMKLFGHJOUPCNJVMPJCMZIXNQVJTONVUTSBGLSXGQRDBUNPCDEIXZWWOFSRHDHRUOYUKM");
    msg.attributes.assign("MNZRGSLETXRVWQCITHBGSCXQOLVYVZOXJOWKHUEDPQKVHHPVNJXTUEGKUJXOFDAEHLVCCNABKQSSDWZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.355288828494);
    msg.setSource(30413U);
    msg.setSourceEntity(49U);
    msg.setDestination(64601U);
    msg.setDestinationEntity(183U);
    msg.timeline.assign("WWIMPNGUSPTBGEDRSLGXOPXHNYNQZOKQWSXCOKIEJBJYBMUSUWBIXUIAFWGLPICLGFTIHUDLVHWSOJJDMIPHADWZLOSAMNPVTGYZINUQZRPQMZGBRSEJAQWDJMFLGMOUJCVHHRFAMK");
    msg.predicate.assign("OIBAVKGWBLWATQCQEWEGOULWYZNNGFCSCKJSONHOUOTTELUYBTBPKDIHXJZVPRQCWKJBJBRUIEMAPAI");
    msg.attributes.assign("NFYYOIYPECDUJVJMFGFLDQAMKGKLAQBWBSIGMBIOABJRIAPDKZGVKPAQURN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.513326295229);
    msg.setSource(25620U);
    msg.setSourceEntity(11U);
    msg.setDestination(18925U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("TGFJBHFJCGMEUMLADTFGGKVIFPKZLYMRWMSRUCIVHIVSHZXAXKUPKCVYYPSPEUNOXCOSRFKWZYHUDHRMJJRCVJKFZOPATYWBDJAVIIUJDXHIJHNOHFLVTBKECRBZWSZXQNGMFBNNYTQQQNDBHTGRPGXWYNLZTXOLUPTALRAYMWCJBNQZDXSE");
    msg.predicate.assign("GRAQEGZEKOAZJDSOTYOTDPVHQWJWMLBRYAZEQASYKFENRLCYLUGMDVITSGUXZAWTRBFQCIVVSSFVTDHBXKIDNLFNHRBMITYWKDQZUMORMXPUCJALBSZNEQAPNWKHXVJBKGOCNXBYPYQOMEUXDUPFNZX");
    msg.attributes.assign("KFTVFYWIQCUFQBMUU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.489994426176);
    msg.setSource(16929U);
    msg.setSourceEntity(56U);
    msg.setDestination(29280U);
    msg.setDestinationEntity(19U);
    msg.command = 24U;
    msg.goal_id.assign("OCWYZQYTCKAZOXPSBKESZHZOWMUMTRW");
    msg.goal_xml.assign("MJTPDTUMWQEFUNYCNVRQUSCEJODVYAZHNSQNCZJLFJNKAJWACFCRWGDXILMTMQLFOBMKIYUJWXATADPFKEBUZXQVOPDGUAKGGMFVHBYQUNOOIUOHWAPPBELDPDDTZNOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.943992059187);
    msg.setSource(27913U);
    msg.setSourceEntity(127U);
    msg.setDestination(65016U);
    msg.setDestinationEntity(119U);
    msg.command = 206U;
    msg.goal_id.assign("CSAGDNUMJYEKUMMVQCILBMWWYYHNSNEWUGZHIKKAJBLQVOBULOTIYRVHHZZJJNTAPJMDCALDZPXNTLLKLWXOUTQX");
    msg.goal_xml.assign("RGYZRKBQVCIDRZGKYLVFLYSIDJCIXNMSUVTGFPVLDAQXFKEXSHCAZLMJOKWAWQDNAAKVEDSUGZLSFOHYTVSJPHQWECNNAASFXGWMYVMBTSFQTTHETTHMZPBII");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.550298687373);
    msg.setSource(26845U);
    msg.setSourceEntity(85U);
    msg.setDestination(63050U);
    msg.setDestinationEntity(181U);
    msg.command = 35U;
    msg.goal_id.assign("IXBWASEXIRBUNONHNWTBIFLHOZEPVXQTRMQMOYEIBOAZURDMRTPKJCUZQLKKKPUJXKWHAWHZCZGECVUHXBTQSQQGTYNMNBCUESFPPJFVEAAMYLKCNSHXWEGAPDZJLFQFHTQBUAGLGTYXHIVGGVVOLQDNDSEUCZZFHDSRASCLGOJMRDQWITNYKFAUAEVHBUWWYBMOJIPSICYRKOPIDWKFTLSOM");
    msg.goal_xml.assign("EFJHBGLSBHSEMDNNAPPWUDGLXETCBCTWJRTTKGADKEQYSFWVWRAFYDLTVBLZZYTSZHHCPUFFQAKFBKEMNJTIPMBCIRQSIVROKNCHYIMZROFXASXRKRXOPWTMWJZIYXBPJKYUMDPAMUJYZAVZNHYGXHOXSIEMNDQBUJGGI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.0362754279129);
    msg.setSource(63316U);
    msg.setSourceEntity(212U);
    msg.setDestination(45540U);
    msg.setDestinationEntity(12U);
    msg.op = 5U;
    msg.goal_id.assign("QUVTYQALWXKGUNJAJHEXXKHFLAKNWULJMUDNBCLSSSZVSOTGVQXNNBDFNYLMJOSFKPSHTVZXYXCQZXHEGZCPYXPDLABXHWDPVNKOFFSGMRJLJIWOJYGLOYTKZRCEQTYULTCMUTTBUIWIPBVEAJHIOARWERNLMPKREOAMAZCPFKIPDQFZSRTQEDFIVBUVDYVBMWNHZAMRFITGUYUSNGOBICEFRGEHJKYAKSWQBCPERWZRMG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QTVSNGAJSHRVNEVICLZKUFJTHOADMOIUYNULTOXQYIJOIPFNFRSXPHQFAGSXDUFIXKPOLRQAVDRMWSAZXAKJPNQHVZMPKXXRMMSBBDBYZDNPBLPATIYWEUJOETQODRLUFENCDRZVEOGZUYWGMFBOPFWTVSFVKIHQLTEAIWGLRKNYGWDTCHZSBGCWYHBFLCLPMIXGDMCJLIAEUUKEUVEHJKTPAQMHQGCCWTZKJSRYNSXBDVQNCREYJMWXCKY");
    tmp_msg_0.predicate.assign("WSWQMRCGSCDBRDRULNZMUYGXRIUFENAHTJVFNQCVYGKSGJHLHSMKKSMEUACDQJILMYONEJDOXBCMQAPYJTUVFDINIPEAIBWJKFVAXTQAQIOVWTBGLVAYGKTYZYRNEYDEUIRTTSPLHHRXGGXJUPRMLGJWAYVNBRWHOTVXUXBBGTQSVVKMDSJOFJYXSWQDC");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.207128873665);
    msg.setSource(39863U);
    msg.setSourceEntity(252U);
    msg.setDestination(2145U);
    msg.setDestinationEntity(157U);
    msg.op = 254U;
    msg.goal_id.assign("NKBZZLPUZBYOVAYHAAXIHZBGLNEXRLXHJMMFWLNDCGNOAIDYOMRPGINJYMAHQHASDQZPSLTSWWSNZCDJETMABUHDFQYDXDMSNQKBCTGKJOZQHFEBUGPYRYPSMFTDLGPLZWFLFECSIDVXXNXEVAWFMJTWQEBJCXCWJPOQKYORQOKJRVZULXRGWQGTAUVQTXPPVTKKFTVJIGDOU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YCKWMRKTXOKIQJKYNFXSUYAWLAEPAVULBSRHVVFPYGONEDZHAUDIWDMGQAEMETEKYZNONCDKWZLNTMABJIQSQRAXNFWEUKUIWQZVVIAZPQYUCCBRFEOPMVGORMBIVKBTJNUHNWCLBJDOOWRZVVJPJIHNAIUXSTGTCMJLLODWGGFSFSYMXQBHZDCEXQMBLPHPGURCTGXPJLZMPTLJZIDXPB");
    tmp_msg_0.predicate.assign("IFMHJHYDBCQNHXXVXSKVUBTEUSFNANBALVLSMETJGPLCWNHXYNRPAHPANFSMFWITKVGLGJKFPQEYHDYUVNXJJLIICDQNRFOSQOZIMZKPCHSJFSVLUUIMYFRNYEMTIJOIBWFRGQYHTTGAWROAJCSVOMSEXZPKXVORKALTKZYZTDDWVYFTWBEWBCGIBJMBEAAMGDG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LNWNDXSZITXMVBABHZOGRKMJJLTVKQUBSPOADRTGICRHUSQGJATYVDJNCIYFMMLLBHTEQFSWCNTRQPIFEUQPFYYJRPUWMYDXEZMLVXOEBACADRNEIKSHFCDPHHWXZMOMFTHEUMXGJEKBVCIFWJRZZYJBGQYFGOVRTC");
    tmp_tmp_msg_0_0.attr_type = 65U;
    tmp_tmp_msg_0_0.min.assign("DAVUDLCXINRAOEGEZCQKREZIARDPRGEAGBAGAUWADKLOCOOVFYZUJNXGVQ");
    tmp_tmp_msg_0_0.max.assign("ILFGYQLIYCYOCTFEMXFJHDUAHIZPVLAYPMHTWQAUZPGIQFJVLIQSBNOQZAXCCONTJWPHPORESGGSMMMIAQUEUEWPKJDVPMZQNJIUYTJXEREOZYDFCRZNKVCDX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.851862775608);
    msg.setSource(16662U);
    msg.setSourceEntity(220U);
    msg.setDestination(45935U);
    msg.setDestinationEntity(76U);
    msg.op = 240U;
    msg.goal_id.assign("EMVLOZTUYONQCWRGLJPQFVVQDUSTIPDTHJHRMWITVMOUDHQDNSJZMAYYXY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LMHEBGOFLJPAUUGZJHULIWWYGJCDISKQEJEVLOTZBUJBHVQNSVDNMLRGOTSNJCQCKBAUMBGORGCLSBAXZPKEXNKUJOXDZNNUAGOVPLEAOOIAYHFMQEHRGMYBTITNYHMRYSFVHKAZBGSMCWBDIRZAFNSYPWPTKZMEPXHITYEYQ");
    tmp_msg_0.predicate.assign("FXVIZZBKTBQJPNRVOHBWJYLPIHDVPIIVNOLHWJLWBDKXRNBIESJCYQFIXBFOMPLLXGYGFSSNMDRERTVGOFJGPPOURYCUANJMCCLBZYZIZDWLDTLI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PCUKYOXHFIOQQVTOXURAZYFMEEVMBXPXTICPFUTRWWWMEIQFNQEOHZPRTZRZACBPSDNYGNWDCCQCROGSYRYSFJDLOTGWFZZAKOKVDANUGJXYNRFLMGNKWLKDWYTYNMRQUHLHEBSSUEEHMKVIBAVZLJMLSGPIRFLDVWALCIPOZXADIQZJOKEBTTFCXYD");
    tmp_tmp_msg_0_0.attr_type = 59U;
    tmp_tmp_msg_0_0.min.assign("HAGRQWJTQQOMIVQSJEXZDSDZQOCZMYEBJOLZIPRJTVFBUYMQAOIZGKTTCBMLMIXGKLCYKUSWWDPDDGWVLYEFQSSAEYSKTPABAUDFECFJLNCLWLVUPCARJJKPXVTXKITPXFFJBMITWV");
    tmp_tmp_msg_0_0.max.assign("NJIBFIXZNPHOWRWSSKLWHOJSUXXLTUDQSAPGFXRGAHIUZLGPTZPBFWQDOQPEIOWRPZBNMASZNSWXOOYQXVIENTDROGHDYKZEJLZCDJKKUAYESRTUVKPVYXMLYQPSEEXWSQDNJMRIOGHBHCIQANCYOZXKVVYRKKCDIUBFCZOMDGATYGFWNFVTMHIAWCCCJQTMFKGBJRBWLBPYVTHKVLSLGMNJFUHLCLPDJVEFUUVRQDBGABJYHQANZTEUIX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.750077137952);
    msg.setSource(22488U);
    msg.setSourceEntity(126U);
    msg.setDestination(5681U);
    msg.setDestinationEntity(221U);
    msg.name.assign("YEMYWVWTSPGHLQJKNVJSVSEROIGKIWXZIIQZFIWQRODXSXMEBGAVWWHOXSKYASXBLJDTHNREKAOEOHJJVDTCUMDKFCFSDYAEYYMBLCPACIEHDMRTFJZFCCYGXEQEPFZZTUASJLLNXLJOCUBQZPOXNBULPTMDEURLCCKIWRFLGWVCOWAPQKTRBZ");
    msg.attr_type = 25U;
    msg.min.assign("HZPLCMUPMIBODGUKINABCXNMXIMQYGLGYNJKHJKRGELNEYVWRIEBALJHVUXUCLBDTKCARQQGLKPCYGYZACPNPNCOFJAIOQEHDFNFRGTYDBOVWBRWERUZCXSPWLHDSWXMFDKPYBKEOZJAHTTSMHLZRTVKJCASXJTSPSKXOYVOUE");
    msg.max.assign("PMADAPKGYRPIIPGFLNLKFFRNYWURKZBVKDCLJCUFADYJAKHEVBHPFOSQZLFEROXWUMICFKSB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.854786676834);
    msg.setSource(22509U);
    msg.setSourceEntity(141U);
    msg.setDestination(28036U);
    msg.setDestinationEntity(241U);
    msg.name.assign("CMIQNUHJDDKOQRXGZATXOQKJICNBGYZWPWFHZMMGLIYXMUSTDHMPHBSVFPRGZBVZENLSEDPQKZJADFLFMOIWKZVRNXELCUJJUQJVQQRPDTFFBJKRGWONTRHGHOTEQXQKQJVRXBRCLAEDVOYAIUGLIYEBUHNGFWXBAEPNNMSFYKXSVMZWSYLVYZAPOWYBTRVUHLOCWESLBIDCTWKOIDDWSAJXGFBYHRPMCTMKFUGPCAZE");
    msg.attr_type = 60U;
    msg.min.assign("QDJNNAUZUBMAEUMLCFBZBXFKSZAHFLCLGHDFDPNJYMX");
    msg.max.assign("SIOCBZWNLGIEKJAMQOWXWFWATEUGYKHMDJUUWOMYKVNCYDMTALDVHZVTVKXIXFUZBZECOPTHLGGCAMFQPFMKXTOYWZAJLIQDTGAHXBXBSEEGETAOZJJNQSUJWHVVLBQGUMOIDGFXFKHRRLSKJAIUMLJQKYIYGQPFNBYSEWDOWTCNVVPRDXZEHYQENDRJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.511669596119);
    msg.setSource(7102U);
    msg.setSourceEntity(196U);
    msg.setDestination(14727U);
    msg.setDestinationEntity(247U);
    msg.name.assign("DOVSRATQYCBEFOGSUMQLDIOMKXHPHKUGTZUZPNBEFEONLIJCXNEIFNAGGDNWYWOGQVVJMCACNPOXJCXUWVMEIUKHHHZAKLUJAQBVWVFTXLKZKVSGYCJVDWMYPLSOXBLUXWLCGQDIVBJZURFIZFE");
    msg.attr_type = 121U;
    msg.min.assign("QTDBVEUKLMZPXERMDIYZSPNBFAPJPHJIPRCWFADXLQBLYSEGGCAGWVUXJUWAAXCJHAFOVFUODSRPZIWDGZHUKXHZEOBJRVNCJQLVMEDRGOKYLVWGCITYFIQSSOQUIFTYQNNTXLKHZMQERIIYBAWWHLLANJUNXDRJYTKLSBJXZAEKOCHMPDOQYWITEUFKGIEYUKSFVZQKYOCM");
    msg.max.assign("HPQBFJKAJGNMVCGWJJALTPCYGSQSCDRGAPDJHEMVHUNKDASNVZJYXUVCNWLZBSOQUKTLFIOWYBCXZWVNVSYBPGUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.299682367722);
    msg.setSource(31212U);
    msg.setSourceEntity(195U);
    msg.setDestination(60934U);
    msg.setDestinationEntity(114U);
    msg.timeline.assign("XPKTCPNZADJIGCRHJWLVQNXNKDFHCMKRJMGOOYW");
    msg.predicate.assign("MAIEZVYUBGQJRFLHPCFROCNNEIJCKXNEAGSKAIPIBPGTKVMGZEGATIJYWQQQFJDSHHKLBLVHLUCRBKLEGRRHIDVSLDFXZDROUTTVDLWRBCYPMVOOJPPSWWAXIUFCQAXMXSHEXNYKOABNCVNVFSSWQUOTUQQURDXZWKPJTWPZCHPIXAGBOS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LHPGCWKMZYFKBZLRXEJVQKERTTEIPDXOOFLNRLEAVFPMAQGKOFANEFPPHIJERTYTKMQVQHWIVAKVSDVAZNAXUBUMMNGCPTJGWHWGBWHDQSTOVZNR");
    tmp_msg_0.attr_type = 79U;
    tmp_msg_0.min.assign("CHBFTCMLUVNDVIMLHSTTJESBLTFSAOWJLPTBLQHHDBHLYZEFQMJUJANFEUWPITRQEPUGNZWBFFRKMIPMOGRZAHNJZOHXBUUENWDYLRCVNXSZVCFIWDEGIAIHPNMWDYASGSVNPXOYKQRYGKAXQACQVZERQCBNUCNPALYQKKPOZSJMIOSTOIFADUYJKQFYVLEWMBCXWYDGEXCOROHSBVLADSBFJUHXWXPGMITUKTDGPXYQZ");
    tmp_msg_0.max.assign("RIOGBUKBUJPQYRCPAGKHFIXRCVDSMBPNUUJGFJQRFBUDZDWYCKAZNPZDLQMDVLONIBLQROXXHIGWLAAIOOXNSGIMFHWTPSQKTMXYJYBTQYAEEETIVRSDPVDKMKHMASUQ");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.0340512191563);
    msg.setSource(31509U);
    msg.setSourceEntity(42U);
    msg.setDestination(10775U);
    msg.setDestinationEntity(122U);
    msg.timeline.assign("GCKERDOSXUXKDNPKMHWXTHMEZFPQJYDFCBLWVTEYIUYTZTTPCDVXQBIQFDNXWYEGIBHWWNQFAUVYNAQVWBZIHNWKGPGYCUHOPSFAGVUZHCJULGAJDGGILPYXHKQFPXWROPBFDLEKCHLJLKJNRAHLMYBJAOKAKRZJGSMYTNXNSRBTUOJTSUIRESQSHLQBFSMDOZWEBCMTEIRDOORXNJIACTSMMMZUJCQXVQIAGZFVAFVLDKINVERLVUOPWRBC");
    msg.predicate.assign("CVMFYOQESZIBOPIUHZMMGWDWUUOCKXUZWLZPKPRSWXSSRIJRBVAVJGSPVPTLLXHDHGYQQPSKTVHIFSGUNAVWGRCFKWMLFECXXJFXFAYLLCQOLXULWJEFVPVQNBMEEDXBYFIRSOAMLTDCKO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PVZXDWVQSFKZRPSHBDNYQQFNAUOTTOJHMWZZXGOJLBIVBSRNWVJYIDBLFRIRCDNHSOYCOEQTNVWSFCCJXLUHOCVVOEMHTNLDCIOPZUIIOKHAVNJFXRGMMMESNIKBVUTZPLDKGAUEAJBUZCCRGHGEB");
    tmp_msg_0.attr_type = 235U;
    tmp_msg_0.min.assign("MXZXVRIEHGJLWGIFLDEPKRZTYOOZYBUXSPXMOVRNDODBLLWJLWQNNJZYAROQJJRYULKSHIHLVTJCGVDQIGSMGCGYSQPTCHIGEIVOZUXFNFNYBLCVRQKMOTDKEDULWEDCPHSUWJJSTEPRHJDAOSNPHCBKWQNMEBFAQAXUJRZBIVVTCZSUFKTBRCCYXMXYPTXHTPLFTKVHEUBYAMDAWAMGQZFIKEHKBWFAUCS");
    tmp_msg_0.max.assign("LCHKWHBHEWDPISQCIDPAXVAJZGBVBOJPQEJGOGMGXLFPXDSDHJJANQOYCRPYMZDMNXNOTXHZADCRLLROCCJKMKICJEUYNUTSAPFHUUGLUWUDBIERSATUOTOKBHTZYDHJELVEZBA");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.714998813673);
    msg.setSource(47076U);
    msg.setSourceEntity(203U);
    msg.setDestination(61946U);
    msg.setDestinationEntity(187U);
    msg.timeline.assign("YBZMQSNILBBOHWIXDMEUYTUSPEINCAYFYKIZPDTPHXJIXASTDFJSJFONGVUVCQIZGSCQRZKVLZSLMXBKXBDHRIWQWATLOCROOHUZKFRWWZKPAXUFXJBQVDAVAGKGJBMOHOFKVWDDEUSLIOYKAHGQJCPC");
    msg.predicate.assign("OXHHKNWISFDIBWLYFOARDVCERKWWCQMJJEFEOGPTEBSRMBMJETPIDQHGYIMHMUFHJCBRVMTNPOBXRXGLEJNOOPQYVYOZKUPVRUSZXCQRYVOMBMANBUIWWDUZVXVIFJNKSYJA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HRVKQVABOOCWUMZZVIURGNIFNBZECNDTEXNJXEKBUMZBDYWURREUTTDOVTFOFMIRYKDU");
    tmp_msg_0.attr_type = 147U;
    tmp_msg_0.min.assign("JPOPOFICQNMIIVNHZPXUGPUWBQENVVMYTZSWPVFSYTNDLSJUYPUBZYDGOZVNQFCUYAKPOARBJXWTOQRMFCXRHIHGPWXWERFBSJVGDGLYNECKDBOSDEISHCKPMXHMMUIBRNHAVUFZCJBRZJQATBISLDLAYUXR");
    tmp_msg_0.max.assign("BWDHDVESUWOILXTQLYQECPVAVSGKMTKQLDAGAPEARAJBUHCDEKYYOOYNDKYVFBSLYCVZPVX");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.272866083246);
    msg.setSource(13570U);
    msg.setSourceEntity(90U);
    msg.setDestination(40957U);
    msg.setDestinationEntity(175U);
    msg.reactor.assign("KZHHMLHGMMCNHDBLEKWROLUEUMDBCFUQKFAAOXTWIWBGTFCBJLLPZHXQLQGRRNVHCVEPNDYIIGRSHIULCJDPNJNCYRPPHKEEQZMLXGUROORLGYUGTCE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.431058371197);
    msg.setSource(15283U);
    msg.setSourceEntity(118U);
    msg.setDestination(17696U);
    msg.setDestinationEntity(64U);
    msg.reactor.assign("NBZVDSRBMQGAGGIPHTBXNMZALQBDYUWOYKHGWNPFVVNSYOHEGSMCPSUMTLILXYXEJBHYWADWEWSRCQTNFOFOUKRRVDZSBKAQCLYETIDUAAFBZYVYKDLJGJDXEQCUPPZPECRHNVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.42835492747);
    msg.setSource(10533U);
    msg.setSourceEntity(102U);
    msg.setDestination(5895U);
    msg.setDestinationEntity(244U);
    msg.reactor.assign("CKNGJQFZROYGLOCCHJVIHMZHQVHCJSKSTUVSZMBINDEXUUKHWMNDCGTSTQRQKKNNAWIPKONKEEIUGNFNVBMXTVTDFLYEJXVDSYRRFUYVWWSWXGIEOSEZIXROUPKVMIBFIKAAUYLMTQUXZOOVDLLZKFGTPLJAEPPXXBJRMZJBRJTADHMZAXRPAWSGQSNTQESRLYBDIYADTMOMYBPDEXLOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.531328866917);
    msg.setSource(52962U);
    msg.setSourceEntity(63U);
    msg.setDestination(49894U);
    msg.setDestinationEntity(240U);
    msg.topic.assign("KCLAAFXLJMQUXIZCULVXJHGHXWXZJOZZWEUOKMGBRQRHAXZCKXUCJFDIQTSDVDEZBWASZFMIKKSBREIME");
    msg.data.assign("BPWOHFQXUPMFOWDVQHEPFYJBMFZYCSBPLCKROTSRYMGZHUKQXRJUNVWGNUTEYOWTYJFIQWDWNVKIFVZVXULGQEAASCLCEXWUPRRAHMKJIIXYKDLDXPISZGINELIFZAJQQVMHRGSYSSLNJTJUFTGIACKGOUHODBEANGZZKBPPCRSADJRKPHXJZBCGDSMNXVDRMVBSDCGXQZENKQAHHTCBQEAXLOOYWIUJWOBWYZLKBOEETAUYLMCHVRLTTDVIF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.476023635636);
    msg.setSource(50356U);
    msg.setSourceEntity(210U);
    msg.setDestination(52996U);
    msg.setDestinationEntity(147U);
    msg.topic.assign("OMYQLAHSQKATBHZGNKVZUBWWAIGLTGFDWHBGSFKVUWLDLASZOGPLUNIPZYPGNKPPJUKGQLDYHBJTRWOOOKIJHXQYPZAIPVMVMRMBDDTSXBVOUFGSFRAQWRTVMHULXVJZYCSWXMASTKCCMUMTTAEDUFNDSWRHXGEYMDX");
    msg.data.assign("YAJLFHQCTHZKVKYDLPULEQRTAHUPIDKWJAWLQEJFGUCHUKIICZBVHVLLPPLKGURXYGWUXSKZJBOSBPEHCEGROCADFHMMMMTQXBCUMMFFEIBOFYJODPGKVBTNNPNUDOEYGHCVWISUZZWXERARYOYBKRGZLDSTH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.205046073181);
    msg.setSource(49715U);
    msg.setSourceEntity(81U);
    msg.setDestination(47719U);
    msg.setDestinationEntity(208U);
    msg.topic.assign("ANBFGVJWLSGXCHOJJCDDZZVLWOAZTMHOMT");
    msg.data.assign("CRBPVGIJYLIJKWKFVFEDVXHMZIGPTIWYJBMUYCWPATNKQJGDHWKSMQEBCYSQSLRQPSYBTAGXRXAJEQTJNXCLNZLOBKMETXVIOCWTNNDZZYYPFFCBDXLLOUGMVQPVEMQUHASALDKNGPWLGMMZACSLFHMWAUQNEDABHUCSOIKIOZUKZJYGTAIFBKDENV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.175859480798);
    msg.setSource(37549U);
    msg.setSourceEntity(119U);
    msg.setDestination(28126U);
    msg.setDestinationEntity(81U);
    msg.frameid = 139U;
    const char tmp_msg_0[] = {-2, 14, -78, 92, 23, 24, -12, 123, 18, -90, -77, 83, 83, 120, 29, 0, -8, 66, 21, 51, -117, -96, -125, 86, -70, 20, -125, -1, -39, -70, -77, 62, -105, 0, -6, 9, 59, 43, 52, -80, -92, -52, -39, -35, 12, 20, -15, -29, 48, -120, 50, 110, 71, 17, 46, -47, -44, 58, -47, 18, -90, -71, 21, -51, 3, 120, 43, 47, -84, 101, -89, 29, -94, 88, -78, 3, -57, -11, -32, 54, -112, -105, -49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.727475405785);
    msg.setSource(65337U);
    msg.setSourceEntity(157U);
    msg.setDestination(38757U);
    msg.setDestinationEntity(161U);
    msg.frameid = 156U;
    const char tmp_msg_0[] = {40, -58, -81, 41, 46, 69, -20, -104, 79, 21, -59, -117, -65, 43, -38, -27, 91, 11, 65, -113, -91, 36, -76, -31, -102, -67, -127, -51, -53, 64, 29, -71, 90, -11, -56, 51, -64, -56, -116, -2, 34, 90, 36, -19, -26, -100, 26, -69, 44, 32, -12, -98, -17, -23, -2, 93, 39, -73, -39, -5, -92, 90, -29, -120, 65, 64, 1, 21, 10, -17, -82, -16, 35, 88, -19, 52, -17, 21, -86, 42, -38, 120, 122, 89, -119, 42, 7, 115, 17, 90, 65, 67, 92, 28, 76, -119, 15, 9, 88, -115, 101, -110, -61, 74, 63, 111, -46, 58, 18, -122, 78, -110, 91, 12, -2, 81, 17, 50, -66, -122, -30, 0, -85, 76, 60, -120, 64, -18, 55, 19, 98, -116, 12, 49, -41, -122, -69, 11, 68, 63, -47, -19, 45, 81, -120, 1, -63, -19, 63, 64, -53, 19, -1, 70, 46, -57, -18, -66, -96, -34, 105, 17, 79, 2, 95, -75, -110, -122, -35, -80, 6, -122, -24, -75, 97, 121, -98, 123, 122, 97, 57, -71, -25, -90, -115, 27, -46, 53, 117, 51, -43, -117, 109, -122, 105, 18, 31, 37, -7, -109, -90, 108, 1, -19, 102, -17, -107, -120, 54, -91, 109, 119, 45, 89, 25, -75, -9, 3, -104, 75, 8, -78, 74, 65, -54, 23, -99, -108, -63};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.564254452189);
    msg.setSource(40178U);
    msg.setSourceEntity(32U);
    msg.setDestination(10803U);
    msg.setDestinationEntity(219U);
    msg.frameid = 241U;
    const char tmp_msg_0[] = {-59, 44, 103, 42, -124, 88, -115, 49, -114, -35, 62, -86, 49, -8, 82, 125, -50, 99, -25, 106, -3, -58, -46, -9, -1, -5, -35, -2, 42, -5, 39, -72, 119, 29, -65, -57, 90, 89, -120, 28, -20, -81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.191730586988);
    msg.setSource(13050U);
    msg.setSourceEntity(213U);
    msg.setDestination(33894U);
    msg.setDestinationEntity(189U);
    msg.fps = 129U;
    msg.quality = 2U;
    msg.reps = 33U;
    msg.tsize = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.891603244954);
    msg.setSource(3710U);
    msg.setSourceEntity(24U);
    msg.setDestination(18294U);
    msg.setDestinationEntity(29U);
    msg.fps = 172U;
    msg.quality = 171U;
    msg.reps = 175U;
    msg.tsize = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.602805897131);
    msg.setSource(53596U);
    msg.setSourceEntity(228U);
    msg.setDestination(58309U);
    msg.setDestinationEntity(220U);
    msg.fps = 125U;
    msg.quality = 184U;
    msg.reps = 151U;
    msg.tsize = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.941103127545);
    msg.setSource(56008U);
    msg.setSourceEntity(91U);
    msg.setDestination(27547U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.553707635101;
    msg.lon = 0.999321644668;
    msg.depth = 154U;
    msg.speed = 0.0956567891314;
    msg.psi = 0.866697596661;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.312301842576);
    msg.setSource(14599U);
    msg.setSourceEntity(42U);
    msg.setDestination(48195U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.951579322857;
    msg.lon = 0.504549767906;
    msg.depth = 200U;
    msg.speed = 0.0166617034002;
    msg.psi = 0.343493497905;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.632015429442);
    msg.setSource(60494U);
    msg.setSourceEntity(202U);
    msg.setDestination(11794U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.312000428476;
    msg.lon = 0.503075611174;
    msg.depth = 140U;
    msg.speed = 0.915501714921;
    msg.psi = 0.806536794432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.780580365227);
    msg.setSource(25262U);
    msg.setSourceEntity(104U);
    msg.setDestination(56031U);
    msg.setDestinationEntity(91U);
    msg.label.assign("VWHDAINJGKWVPDTTMRCLWBXKEZULNQSNBKCVSXTBKGFYJHSBYQDYLQMFCGHLOJXEINJYPTGPBSVCXSEBYMTLPOOGDEFQWXPGDHJAZBJKARFZQJFJIOLSLFDIOUFDXNITEVYLVEITACFZHKKYSGLCQUCPJPDBCXMXMOMNCREIRRPJUSQAMZKR");
    msg.lat = 0.369946446661;
    msg.lon = 0.136291687873;
    msg.z = 0.84317440878;
    msg.z_units = 64U;
    msg.cog = 0.333745333344;
    msg.sog = 0.863392996348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.799006643741);
    msg.setSource(5931U);
    msg.setSourceEntity(72U);
    msg.setDestination(9698U);
    msg.setDestinationEntity(20U);
    msg.label.assign("PYOWINYWGGACXBDWLDXJAAWLQTUNU");
    msg.lat = 0.857312756989;
    msg.lon = 0.547991127099;
    msg.z = 0.854676384948;
    msg.z_units = 50U;
    msg.cog = 0.0969255400526;
    msg.sog = 0.145817440013;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.642564547884);
    msg.setSource(15350U);
    msg.setSourceEntity(244U);
    msg.setDestination(46983U);
    msg.setDestinationEntity(171U);
    msg.label.assign("VDRQAKSQMOCULICSGKIFFPBFKLYGLTNPCQSNNUEUOGQUKADHUXZYMFPVXRXIRRYBSJTTEIRTJVJBMIEWLLTMVKHERJFXTGBJYTKPDFROEZZFQHNWFXUWXIOOJMNNZWOANEYBGQ");
    msg.lat = 0.83549567247;
    msg.lon = 0.0458680265877;
    msg.z = 0.114139423852;
    msg.z_units = 77U;
    msg.cog = 0.738851853689;
    msg.sog = 0.0249138561226;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.351365526086);
    msg.setSource(32959U);
    msg.setSourceEntity(69U);
    msg.setDestination(25364U);
    msg.setDestinationEntity(75U);
    msg.name.assign("EUKJSRCKMYLUQEVKSXUEJSRPNIOWYZXIQFPZOPQXGHZDLVJXMHPMKGPDZVASAFZORHDKSJPWVYDKQQGLIYRTTBIFPARBIPRTKEQFKBUECTCVUZPOUNLCCBYLLGASAEWIODEYBXHSNUFTZHO");
    msg.value.assign("KRXXYUJSCIHFMJQHGJKAULSWZPIDIAYKMBIXBSWSKKRVJQUCOCSWFGOMVCRAJPUZXVOVFXHTVFOZNRPLDXPFYTIYRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.102822556172);
    msg.setSource(64193U);
    msg.setSourceEntity(132U);
    msg.setDestination(37705U);
    msg.setDestinationEntity(66U);
    msg.name.assign("YMMTCWYOAJZWDYAWVDOXLQOXLRRWNNTLDJUKXJNWZCUUNNDAGAQHETBMJGQWKVGZLRZYCFZDOKIDKIUHVYN");
    msg.value.assign("YKRVUFOYDFYXUMHCFUKVMNKOSTZPRLDLYBMXQRZHSFHBOXVXPEBHPUXGPZRYNEXUOMLANUNOJGHDIVQIEVSJCRHVMWSEBHJFRATDMIWRAEKPCDMRWQKBUWOJBGLPPKNLCSWJWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.213817656599);
    msg.setSource(46696U);
    msg.setSourceEntity(82U);
    msg.setDestination(29155U);
    msg.setDestinationEntity(202U);
    msg.name.assign("JYRTIWGNYBCIBOMIDKISKTPNGRWJDTTTSYOXTRIGMKBGAPJRZNMUNTAQXTICYXZIFAOEFIUOUJPVIQQNBDEVADFKHBLQBVATLECNSDZXXAHXQLDRUSQCXSOJFYDFCZSIWVYRRGAABMCLORHBCVVZWJXWEJBFUQRTEZXUOSWEQCAWMLJGQHKHKVWMVSKEUKDCNHGWNVUKDEAEVMCZPMLZHLZNZYLPPBKP");
    msg.value.assign("BPHVONBEBQLYADHYACYLRMOYKRVBXUSSMXYBTUZTSGWXHDBSFUGNQMYLAVTUZWTQDTRJKCLGGPHXSROTFCDAPLKBGBUPXDKDMGGUOCTWCJRYORNPQTNVISFSZOIZVYKNBMXRXZHDNDMFEJGWJTMCJOJVQFXFPSDWEJUUBACZXZPOQCIUIVYDWKYRAWKQFNAHXLIWQKLPGSENMRVHNLMEHSZRJPHEA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.679486868578);
    msg.setSource(50419U);
    msg.setSourceEntity(181U);
    msg.setDestination(608U);
    msg.setDestinationEntity(196U);
    msg.name.assign("DAPIMMQTRFCGWYHZTTDGYYISZTKXWWCZAJPFLUOELIXWZBJRETFXJQEPNBSPOGSKXUHGLCVMWFVROZGBEQLNZVFQPFIHHWSBVKBLRNQPHHWEKWDQYKOANYXUGLJMLIDHSUOFTYDMBOFZJKWIRAHQRXVTDISIGLJDMUJNYKNPOURIVAODYPNUUMYQYNABCLNGUJCERXEDKZMWCEXCMHHFJVBZAXVCMOCDCVQSKPJZNBOIKGPGRSTSLE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.576326171938);
    msg.setSource(1644U);
    msg.setSourceEntity(211U);
    msg.setDestination(63315U);
    msg.setDestinationEntity(36U);
    msg.name.assign("FDAIETFWUPIHNFGUGVMHQXPTPXZFPYQBXBBYCIGCHKULFAYDGAEKKRMPEQTQXJZIMUFNCBNNWVUBBOWEPMJIFSMXZHDCQQMSMGAHOODWKDUOSVERCOFMTSLUEAMTDVWXICLYVZFWEEXZSWQSHSSXLTNJBPNTXHRGLNJVQYOARUZCRUVOFVJZYRDWILDEKJCGJYAHIZLAYUKRDBXAOGZBJTTLJCVLQIKOYORPLWTCZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DBATTSXGWL");
    tmp_msg_0.value.assign("VYOIBXBKZWGSSORYKAOUERWYYNSFUSBZXUFFJCCJPLRJCTRYOXLBUOYQW");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.487150575963);
    msg.setSource(8166U);
    msg.setSourceEntity(181U);
    msg.setDestination(5850U);
    msg.setDestinationEntity(189U);
    msg.name.assign("MJUAQZBBVPQZKZESRDTWAQESWDOEGTHEDPRVELBCWGKAYBNYXZKTXJSRLOLAZOCMFPDIXFYGWJFLOSYPRTJWIIKHTWILJVDHVVDUEZBPQIKGDRGKBEULSHPARZMBNKQVYZPCKJHUQJTBLLYKQFMMNDSNCEAYFHPTGQCXAGISRLOHXTTOGDFVSRXNCHVUXFGBUSJKMQCOZHOIBMVWNHAUVJEYWCNZRFXEICCPAMAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.593539534753);
    msg.setSource(33521U);
    msg.setSourceEntity(244U);
    msg.setDestination(55431U);
    msg.setDestinationEntity(221U);
    msg.name.assign("XIUGJDEKDIBBSQUEVTCOXUQENMZSCWWEHPDRTGNPQROQPKUROVV");
    msg.visibility.assign("HDINSYODVFQNTLLPBEYQNLXMWCKEIUCGBDWWTPGUSRZLQJEHTJSTZDMOWUZSIXYFJBIEWAQSKZYAURJGCBPDVBFHESXVHSUXRWYQINYNHXTGAVRQCOVQNTHJPXJSLFZOVLMFOUOLFXMFDVQYRKHPCBTTSGMXFFVEZHZRNGCWFNUQKCAJAUPJKBJWPAMBEEOMYZKP");
    msg.scope.assign("QDWGJYGCHBPUADPQLLDWSHVEPQOQTZLKWWWPXCITYVJSRKYNDYVYSNRNRJVHJFKJJFAKNAAWBEMOEIPUDNMJNCPBSBRENQUPCSXRRCOWATOOBZFBLCXHFDOXRURXUMMISGETRYIKECIQAGPCLGUHXSYCAVGZZGLIIAUSJEDXAOXDGITHDCNBKLYTRSHLPMVTMNAKXJKWUIDSBNZVOVFLKTIFLFWQVPFFWZTJKGFMZQMQBUHZHVBXEOMTHMOZGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.616270105781);
    msg.setSource(64655U);
    msg.setSourceEntity(96U);
    msg.setDestination(12194U);
    msg.setDestinationEntity(36U);
    msg.name.assign("XTJYESSYJOLNKZAAPTTHZQKRVNMUDHRUGRUDTSQBWHBHINSADLTWBBYWVGVZKVSCOFNMBFNHJABGGMWXFMOOECNRDXOSCZZCMXKPPWDYFESMVHLEQ");
    msg.visibility.assign("BSHESZNTNTVLRKAZZFXWJPWPKJBDGGMQLBMVDAHANVJBMCLPMCFUYAROQTGNZRPSFPJQWRAXHWMOXIDECWFXJZUVEIVLGMTTQCSXFRIPIMZHCEVNPDLWNZQUHHNQFHBNATLMTULJBVOXPXUJEICYSNOVXWVER");
    msg.scope.assign("YSPIZWNDBUEFINWJTBZJEWVYYAUCJKBMGOLEKXLOMCPDAVNHTHZTJPTQNBDYWUHFNKYURXKYNHJEXIRRVKOIQFNLFERPAKVECSMHZCZGOINEDZMWFHOVTPQDBJCWPFOWXLYBMGHBUQQTOOSCKOMHROTZUZCZSDDGAUPXUSMSRISVHATEVVYJDIGWQDRWMCRULVHKNFPJGFRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.422636135491);
    msg.setSource(23257U);
    msg.setSourceEntity(151U);
    msg.setDestination(26921U);
    msg.setDestinationEntity(113U);
    msg.name.assign("CXUKFNUHGSHKKOQQVDWAEVRXJIVONTQECVJLMULMXIPBVZNDCCVLSFFEHSSLXDAFCVMBOWDFCSUEGNRKRJHIRAQB");
    msg.visibility.assign("IVWXMBOXANPVOFDVRDYZJMPEWDGPXWTJTDYSKQSNM");
    msg.scope.assign("KYAMVTHDUMZDYUTGCPLRHZRREXFVBA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.0978445848477);
    msg.setSource(21222U);
    msg.setSourceEntity(121U);
    msg.setDestination(37222U);
    msg.setDestinationEntity(139U);
    msg.name.assign("QISGDTDUJWCCBTCWOABBIDGJDMUVPHPAZKPJIWQVOWEXLRMSOGOCXBISBWKPJABAGMROPPYDCUQXDRSQPQDLANVNJRKTNTXTLMYMHSKYHLEXIQJICVNSKCA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.315541891379);
    msg.setSource(23655U);
    msg.setSourceEntity(221U);
    msg.setDestination(62817U);
    msg.setDestinationEntity(224U);
    msg.name.assign("LBMTIXHYELFXWAGSYRBHMMUXASSPUNPGPROQCDWXYCHTVJBLSXFBEQEVJKBKABXQAYUDETLVDMYIGAWWQJONIOTPKFPXQSSBMROHJJZDKFGSHINZHLIGRMVXQHCPSRETPEKQFGUAYNCTOKFNRNZFBSWXGUJMNAUTYQIJNENIFVLVNTMQDFKZUUHIHZQLKVDWGZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JXBPVREKNMYJHKBKFOLMVCTGFOIAZIZHGPKFZHEAGFBVCSHZPSWMWGZMFUXWPXVTXJZVMHICRMKEGNAOHFDLMSQWDEACAEWXEFABEEDKQLRDYFPGQZKOCTUZIVNXJBWVKBRYOLYOOSYQQXWYQDTDDHYPYDCKLAZHUVTALRGBUUOUNGNRPUZSXPSM");
    tmp_msg_0.value.assign("AXCLTTIPEELKVPHTKRBVCQHNBGOKCRAQVNNZORPHJWQIXSCFDGZUHZCTFVDUEWFKRYYIBNNED");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.207808965153);
    msg.setSource(55405U);
    msg.setSourceEntity(0U);
    msg.setDestination(12212U);
    msg.setDestinationEntity(73U);
    msg.name.assign("WNMNWHAFTGGPITYILENORZMGHOBOTDRMMMSASBGPDYNTKQRNEKOMQTIDIXKRRVARFLWWGDZCIRYIPHBPYUYXVSEIZCCSUHNDQUZWSAQFSJDGSFFZKFKKBFKWVLVWAUUWBLEFYNIJCLVATNQMYQXOOEJJEUPWXHQJACDEXZLJOJDHLXVZVHAXBJHKQLBOGXUGZKSYCPOJCXHINAPLTXAGBITCEEQHSUVGVTYFUWFRDBDMUCLVOZEMJPPMRNSK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.110820387308);
    msg.setSource(51153U);
    msg.setSourceEntity(8U);
    msg.setDestination(44170U);
    msg.setDestinationEntity(134U);
    msg.name.assign("UHOHVLSYJORNAVEPIOICTYQJIYVDTVYGIAQKRFQOJHBEGCNVGWZIDRPVQHEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.776343595041);
    msg.setSource(5895U);
    msg.setSourceEntity(71U);
    msg.setDestination(15618U);
    msg.setDestinationEntity(70U);
    msg.name.assign("INDMQSAFVFOYHHDFNKPXAKJFGZSEHRISRXAIUVJNCJJJQPWBXENMLGBRSVBRZLKDRROZMPKLTTMQTHCEGDBLJFOUVWJIIEERTELTXQYXGVZQYPUEMONUMVDWAWDNOCVQOANZYHGUPPCGUHJNFKHSSVIKTTKIFLABTACBFZOFYXUPZYDDBGKMOEXCFUJBYSUZGROZBMWUNSIYCRXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.136769975924);
    msg.setSource(45162U);
    msg.setSourceEntity(221U);
    msg.setDestination(56468U);
    msg.setDestinationEntity(130U);
    msg.name.assign("TDXTYLUGTMMZTYUIJGCGSBQVNTWWXPJKSLZKSAPKTYFWSUDJKCNUOYVGRAOQFZLWWLKQCRANKYNNGAIFYOGEAXNRFSMZRHMLWPCSICFWPKVUEEOVPEWHHQBGMENVXJEROEBDOLATSYZWBRSHJZSDZAOVQZFNPTMCVHVXRCCMULSIMJXQDDDHFPQNJIUPVJTPMJFEBRJUKAQIUGCNYTQYHIBIBDERLWXDVBHEOBBXRKLP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.0707997474582);
    msg.setSource(20709U);
    msg.setSourceEntity(127U);
    msg.setDestination(36734U);
    msg.setDestinationEntity(115U);
    msg.timeout = 2415038418U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.444697230286);
    msg.setSource(13375U);
    msg.setSourceEntity(182U);
    msg.setDestination(26004U);
    msg.setDestinationEntity(102U);
    msg.timeout = 631030019U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.584830392089);
    msg.setSource(30358U);
    msg.setSourceEntity(216U);
    msg.setDestination(18318U);
    msg.setDestinationEntity(212U);
    msg.timeout = 4260975917U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.467335398931);
    msg.setSource(19774U);
    msg.setSourceEntity(82U);
    msg.setDestination(30202U);
    msg.setDestinationEntity(142U);
    msg.sessid = 2426602410U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.0656351628841);
    msg.setSource(54632U);
    msg.setSourceEntity(4U);
    msg.setDestination(29482U);
    msg.setDestinationEntity(226U);
    msg.sessid = 3116490895U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.654675618318);
    msg.setSource(47251U);
    msg.setSourceEntity(58U);
    msg.setDestination(38595U);
    msg.setDestinationEntity(188U);
    msg.sessid = 2229621763U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.993257777509);
    msg.setSource(49880U);
    msg.setSourceEntity(215U);
    msg.setDestination(63369U);
    msg.setDestinationEntity(221U);
    msg.sessid = 2591319335U;
    msg.messages.assign("PNILYCTJIN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.722437745694);
    msg.setSource(59083U);
    msg.setSourceEntity(75U);
    msg.setDestination(40240U);
    msg.setDestinationEntity(234U);
    msg.sessid = 2813126066U;
    msg.messages.assign("DECPXMDZCJTWJAYPDRKCDDGPLVTGEFGKUPKVMHCTQLBNEIXAMSURFHIKBHXAABCRKUWGOYUFQVWYSJLRGRISBOMWUNEGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.173383024362);
    msg.setSource(13197U);
    msg.setSourceEntity(131U);
    msg.setDestination(22600U);
    msg.setDestinationEntity(232U);
    msg.sessid = 2471356385U;
    msg.messages.assign("ANIRGUMGCSNDDARQCDNMDASLBOYCAPCXKKJMHLURUXZDBEKTLGDIVABVVLQXDHXYUBHYQVYCIRIASQNEVRIXNIFBMXTUPOIJFBDYWOELGCQZOOTWJZCVLWEJHWOERXISQVIJZYLFNHLZAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.797742586935);
    msg.setSource(56091U);
    msg.setSourceEntity(35U);
    msg.setDestination(61281U);
    msg.setDestinationEntity(169U);
    msg.sessid = 2412167624U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.524430972136);
    msg.setSource(33589U);
    msg.setSourceEntity(75U);
    msg.setDestination(36695U);
    msg.setDestinationEntity(69U);
    msg.sessid = 3330461850U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.312041874421);
    msg.setSource(26312U);
    msg.setSourceEntity(181U);
    msg.setDestination(252U);
    msg.setDestinationEntity(223U);
    msg.sessid = 3865884026U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.683177942529);
    msg.setSource(39237U);
    msg.setSourceEntity(161U);
    msg.setDestination(60874U);
    msg.setDestinationEntity(180U);
    msg.sessid = 3865684942U;
    msg.status = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.946054495792);
    msg.setSource(15799U);
    msg.setSourceEntity(214U);
    msg.setDestination(36197U);
    msg.setDestinationEntity(215U);
    msg.sessid = 4013580788U;
    msg.status = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.162839207432);
    msg.setSource(34279U);
    msg.setSourceEntity(70U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(162U);
    msg.sessid = 3369338007U;
    msg.status = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.756657050604);
    msg.setSource(26796U);
    msg.setSourceEntity(107U);
    msg.setDestination(34314U);
    msg.setDestinationEntity(157U);
    msg.name.assign("HXNSHKKYIYTSGKBIGFMXNZJFDYPKOMZYJKMXSTUOGVEOBKORSWAZEUNPDIHIXGMREACOVQOZQHJKMMGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.0797402703253);
    msg.setSource(51921U);
    msg.setSourceEntity(238U);
    msg.setDestination(3838U);
    msg.setDestinationEntity(182U);
    msg.name.assign("MOUKQIGNLEZWIVHLXMPGWSLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.413954006568);
    msg.setSource(48656U);
    msg.setSourceEntity(50U);
    msg.setDestination(62226U);
    msg.setDestinationEntity(190U);
    msg.name.assign("UFFCXSQGEPLZUGVSJOCAJSVRYEWTAKECUYWPJMLUUWNBUAJIHRXHAWPPYPDKYZFITBEYQXBLWNVJFPMSCRVYXVECCKDHWNWZMHSTKUQZZOXZPGHZRDMTFTQNCDLCEWJOAXMEXNGQGUQROINMDMSYQHIKVSQJBTMIGUOKDXQAVNOGTARF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.00869214653558);
    msg.setSource(42108U);
    msg.setSourceEntity(54U);
    msg.setDestination(11395U);
    msg.setDestinationEntity(114U);
    msg.name.assign("VYUIIHNJWMGTYCLZMAUWOISAQMTMCGVVTXPDFPSUCOJWQBGWUVARPDXOERZCWZQBTLIJTFKBOZDUZXJBYBLSYBUVOEKYEPQZLJRMKNHRQVEZQZLNITKHHTNUAHCINGRNAGYDFVKTIOVDVGPETSOOACFSBZMXUQZYSEXFSFGDMNNWPRMEBRPDNKLAIKFALXXALJMFMGWKNQGCPXDQRIJGRKPXASWVTLOEJUYJQDURHWBEFIKXOWSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.261904415899);
    msg.setSource(5102U);
    msg.setSourceEntity(15U);
    msg.setDestination(29915U);
    msg.setDestinationEntity(97U);
    msg.name.assign("ZFVPXLUKHXVRIUZGYD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.858983749647);
    msg.setSource(40037U);
    msg.setSourceEntity(83U);
    msg.setDestination(27923U);
    msg.setDestinationEntity(163U);
    msg.name.assign("COMANKZSKGCJASIRELIFJTJAEBKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.609581872079);
    msg.setSource(62552U);
    msg.setSourceEntity(207U);
    msg.setDestination(23705U);
    msg.setDestinationEntity(88U);
    msg.type = 34U;
    msg.error.assign("FUSNTMIYLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.177346462279);
    msg.setSource(6488U);
    msg.setSourceEntity(147U);
    msg.setDestination(55596U);
    msg.setDestinationEntity(97U);
    msg.type = 34U;
    msg.error.assign("SDVSRNTGUGYNAPZWOLRLCJYQYMJUEBZNHRUSKTCFAVIMAIJONLXMJGYUKNRIYHGMXVBUTQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.3988925563);
    msg.setSource(41528U);
    msg.setSourceEntity(1U);
    msg.setDestination(24726U);
    msg.setDestinationEntity(168U);
    msg.type = 116U;
    msg.error.assign("RLFLSNZDNFIYYATMZHGHGIVTPSWDXCSOBDJIISWSSKXFVRHBKBJJZYYYIDEOTUCUKDJELWTZJVZEXROVPNUTKUQUCEIYRRPTXATWIVEYBQOVUGSTZMGOKHXQKHXCFBFCPLWXJDIDQINWPLRARWPAPNATDGJQUZIMEOYMPKNZFROFEBZYPJCOVWAACCXQBZQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.653327869468);
    msg.setSource(48240U);
    msg.setSourceEntity(244U);
    msg.setDestination(18859U);
    msg.setDestinationEntity(234U);
    msg.seq = 25478U;
    msg.sys_dst.assign("YXOTHYRXLPPJOVBQJVDVRBKOIYVWPQAWYZDBOMJHNVGPGRPQIMFSZTHAGSNCGUFQEISEZMKMWMWKLYJPFRANJFDSTDTSLPKHNESMADTEFYIVBHQXHXTYLGOAZKSDAKKGDCUBDAKHCUUJGUVBYUUZMXIRIURBJWCEOHYBQORLL");
    msg.flags = 235U;
    const char tmp_msg_0[] = {-53, -41, 118, -43, 21, 58, -15, -77, -4, -21, -53, 69, 10, -55, 118, 119, 66, 90, 102, 116, 3, 95, -11, 45, 77, -26, -91, -86, -15, -7, -82, 119, 39, 70, -53, 88, 104, 121, 78, -52, -95, 7, -61, -56, 80, -113, 55, 102, 44, 93, 25, 92, -87, -67, 83, 27, 74, 108, 42, -116, 75, 82, -39, -48, -94, 58, 101, 70, 11, 103, 25, -94, -19, -89, 36, 124, -88, 113, -104, 104, 41, 107, -46, 16, 121, 25, -39, 47, -31, 101, -124, 79, -48, -15, -27, 109, 123, 122, -49, 83, 97, -73, -105, 7, 62, -107, -98, 53, -85, -114, -114, 115, -79, -21, 61, -22, -1, 116, -30, 121, 25, -85, 88, 34, -7, -10, -52, -18, 77, 120, -80, 65, -82, 1, -20, 92, 126, 103, -72, 15, 80, -11, 31, 105, 42, 62, -27, -99, -13, 110, 80, 2, -1, -109, 101, -106, -84, -63, -16, -18, 28, -87, -34, 41, 121, 110, -98, -17, -105, 47, 84, 116, -82, -111, 82, -64, -111, -74, 107, 105, -46, -88, -47, 40, 43, -124, 53, -72, 6, -128, 17, -29, 123, 24, -95, -78, -96, 81, -119, 112, -57, -53, -27, 106, -85, 111, -44, -104, -12, 113};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.893031475124);
    msg.setSource(23579U);
    msg.setSourceEntity(248U);
    msg.setDestination(40917U);
    msg.setDestinationEntity(23U);
    msg.seq = 16418U;
    msg.sys_dst.assign("QHFBFOVAYCLGCUZNRLPFMBKODTVJUHVEKVXLNICDUJLAMIHEYDGQKSUJLRBAOHZESAIPTRNIEOXXJLSXPXDEUPVGNJNBACNTUQWWYHVCDYQBFCGFQFSKDLKGDKXTRHRGMSNMYMRQOBRAUMBGWOTIIFZPIPMHJXVWARBIR");
    msg.flags = 11U;
    const char tmp_msg_0[] = {-104, -95, 1, 21, -34, -73, -108, 14, -106, -32, 122, -26, -94, 43, -76, -81, 59, 32, -1, -120, -63, -58, 30, 7, -115, -58, 39, -7, 87, 26, -77, 53, 82, -80, 73, 55, 28, -123, -50, -4, 93, -106, -38, 103, -39, -14, 118, -122, 84, -102, -108, -54, 13, 59, 124, -62, -31, 4, 115, -5, 98, -72, -105, 61, -114, -19, -96, 92, -113, 87, 30, -24, 3, 14, 59, -54, -110, 110, -42, -103, 80, -94, 113, 34, 9, -110, 27, 2, 59, 80, 47, -57, -84, -122, 7, -19, -128, -102, 114, -102, -84, 38, -10, -89, -30, 91, -68, 72, -100, 34, -26, -89, 102, 67, 59, 85, -73, -63, -76, -20, 21, -93, -72, 46, -63, -17, 13, 118, 107, -90, -18, 121, 96, 9, -48, -55, -78, -89, -1, 34, 93, -60, 50, -94, -15, 52, 6, 3, -77, 92, 24, 30, -55, 25, -49, -109, -39, -11, 93, 20, 81, 86, -121, 19, 5, 99, 5, -114, 112, -64, -14, -70, -127, 2, -30, -104, 46, -35, -114, -120, 24, -10, 70, -112, 108, 70, 74, 72, -79, -110, -80, -102, -31, 24, 42, -69, 112, -87, -121, -78, 64, -52, -3, 110, 114, -124, 30, 7, 38, -54, 19, -8, 39, 55, 126, 55, 89, 99};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.946299485504);
    msg.setSource(59779U);
    msg.setSourceEntity(124U);
    msg.setDestination(36805U);
    msg.setDestinationEntity(20U);
    msg.seq = 38127U;
    msg.sys_dst.assign("LIMDWBRTDUPBTPMWYWXPRHPBFWAILTLQARXVVKJJWWSRXZATTFXGHFNGUJFOMBOKSGERYIRULGGWOSUCZCJMYXPUNFBZVRTAQENGHLEYKAEFLVB");
    msg.flags = 15U;
    const char tmp_msg_0[] = {-12, -74, -55, 106, -39, -39, -37, 66, -76, -40, -66, 37, 4, -20, 33, -115, -115, 115, -64, -46, 9, -42, 30, 125, 66, 36, -94, 70, -126, 56, 119, -54, -12, 84, 105, -103, -30, 47, 24, 14, -34, -8, -125, -27, -85, 114, -117, 111, 78, 1, 4, 67, 72, 115, -109, 20, -98, 86, -67, -20, 95, -92, 103, -40, 48, 99, 1, 79, 125, 2, -2, -38, 107, -46, -70, 126, 124, -100, -112, 64, -62, 49, 89, -11, -42, -78, -25, 118, 83, -20, -60, -18, 43, 4, 89, -62, -32, -64, 104, 122, -119, 125, 110, -6, -26, 122, 24, 89, 10, -92, 16, -9, -13, 69, 115, -16, -47, 6, -108, 62, -68, -61, -2, 59, 110, -73, 21, -35, 42, 103, 101, -2, -64, -39, -45};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.848399540064);
    msg.setSource(58196U);
    msg.setSourceEntity(58U);
    msg.setDestination(14821U);
    msg.setDestinationEntity(211U);
    msg.sys_src.assign("IJTDGMGLUREMHUAKAFRDGTBSOTPCRMCJXWVDAXBSSOYJFRJZCEYPNDIDMKZIHPCNHKSQJBVLAYCFQKMFEAHCUSHZPVZECWJKBOBIBQZRALIYRYSQLUYMINKHGVIWBJGUADXPARYPRTWYLENTIKWUEMOVFXZOLSKUZOXNP");
    msg.sys_dst.assign("JSLXYSAWOLTWOJATYUGOZASPXXIUKLMLF");
    msg.flags = 140U;
    const char tmp_msg_0[] = {-50, 97, 21, -48, 73, 50, -111, -19, 117, -100, 59, -79, -25, 22, 74, 13, 61, -26, 109, -83, -69, -3, 117, 126, 90, -23, 67, -106, 35, 67, -55, 71, -13, -106, -101, 25, -123, 48, -90, -89, -114, 41, 18, -106, 49, -108, 123, 50, 32, -7, -76, -53, -20, 93, 65, 83, 22, -28, -86, 36, 107, -84, -41, 75, 8, -41, -121, 60, 42, 1, 10, -16, -22, 85, -52, 96, 74, -24, -13, 46, 31, 79, -124, -23, 54, 67, -3, -97, 41, -75, 75, 73, -112, -15, 108, -30, -115, -91, 13, 119, -34, 67, 22, 61, 67, 99, 27, 11, -46, -94, -77, -57, -17, 34, -111, -9, -63, -13, 32, -89, -41, 8, -2, -77, 121, 66, -114, -34, 21, -53, 40, -16, 23, -72, 73, 78, -8, -116, -19, -49, 67, 60, -23, 112, -62, 45, -64, -24, -87, -114, 17, 8, -76, -107, -47, -40, -107, -86, -69, -1, -13, 3, -85, -109, 35, -79, 90, -11, 2};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.247808242864);
    msg.setSource(22732U);
    msg.setSourceEntity(94U);
    msg.setDestination(58500U);
    msg.setDestinationEntity(173U);
    msg.sys_src.assign("BBOIQGTZJXBGSPZUCCIHJHIWMUGKAESREAZQZLSMLNQDZPRIESKCZLGYQKWJMCGMIBKUOIIDNGFGAZJXAXBRIPVTVAEYOJDCFTDHPDAXBKQOCJYQWYMVBUMHMKWBYOHEOLXKFYNDRLVVP");
    msg.sys_dst.assign("GPYKIVHUGYHREFAPUZJOUJQKNESIKMNGDYNENLQVRAEPPFLKWOCFDTQWXPXBSCIUMDEGTIAFKNLBV");
    msg.flags = 97U;
    const char tmp_msg_0[] = {62, 120, -54, 66, 38, -119, 17, -95, -88, -15, 3, -50, -123, 2, -101, -105, 110, 121, 15, -82, -45, -48, 44, 64, -1, 51, 73, 55, 9, 13, -51, -39, 119, -82, 80, 87, -75, 47, 65, -98, -52, 69, -34, -107, -86, 44, 123, 57, -76, 94, 87, 35, 39, -2, -89, 8, -119, 100, -22, 48, 72, -102, 54, -15, -48, -91, -9, -41, -111, -4, -2, 105, 98, -117, -118, 28, -93, -113, 65, -13, -70, -122, -38, 30, -34, 98, -7, -36, 14, -103, 13, -37, 25, 49, -17, -114, 91, 25, -65, 40, 80, -6, 85, -22, -90, 17, 44, -33, -115, -11, -126, -59, 6, -42, -101, 32, -45, 21, -33, -79, 28, 20, -113, -28, -18, -52, -123, -39, -7, -111, 100, -35, 100, 29, 49, -52, -1, -117, -117, 9, -125, 38, 105, 87, 71, 90, -32, 106, 31, -32, 21, 22, -36, 17, 77, -66, -61, -72, 82, -39, -85, -106, 94, -99, -69, -68, -123, 104, 88, -66, -81, 81, -70, -78, -79, -113, 5, 105, -12, -91, 45, 5, 35, 23, -111, -31, -19, 64, -82, 15, 43, -28, 43, -128, 105, -74, 105, -25, 1, -5, -67, 97, -100, -81, 9, 31, 46};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.268418343908);
    msg.setSource(39362U);
    msg.setSourceEntity(192U);
    msg.setDestination(10521U);
    msg.setDestinationEntity(238U);
    msg.sys_src.assign("BURDUVYNVHKIOSSOBXFHFPVPRSMIXKDREKKJUCKYTHONAEDOEHUEZUMEBAPJYOKSFACEYBFHHLCWMDBTVDJCTBDPALJVMEGZCYIODNLPFBTAQYHNQRTOJQGCSJDXGBFDWZAICARHURFWWJIROLUNIEQZNNLNUQPJGKBINGCWWGJXPXYQVEVAZTOKQGKAAWWIYWVRZUXCCISLRPPXIYHQMQYMUMGF");
    msg.sys_dst.assign("TQJWZYHGRLUUTBJJC");
    msg.flags = 80U;
    const char tmp_msg_0[] = {-47, -19, -5, 20, 96, 87, -35, 83, -115, -34, -99, 39, 45, -32, -18, 5, 72, -55, -57, 42, -115, 105, -107, -115, 36, -66, -2, 82, -103, -124, 101, -43, -19, 6, -122, 45, 35, -107, 62, 8, -21, 102, 29, -127, -44, -101, -40, -54, -23, 37, -90, -29, -77, -1, 117, -17, 122, 124, 21, -93, 43, -60, -122, -74, -126, -128, 103, -47, 61, 81, 36, -99, 14, -71, -73, 36, 71, 82, -105, -44, -5, 25, 125, 119, -104, -120, -18, 39, 116, 25, -8, 112, 83, 119, -76, -16, 28, 92, -53, -125, -2, -1, -74, 28, 36, 23, -36, -75, 105, -74, -107, -29, 61, 76, -75, -67, 126, -88, -74, 30, -48, 11, -56, -78};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.922946646649);
    msg.setSource(48270U);
    msg.setSourceEntity(185U);
    msg.setDestination(10359U);
    msg.setDestinationEntity(212U);
    msg.seq = 17876U;
    msg.value = 146U;
    msg.error.assign("DMLTZINYDAYJUHEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.534226803197);
    msg.setSource(6051U);
    msg.setSourceEntity(80U);
    msg.setDestination(16406U);
    msg.setDestinationEntity(133U);
    msg.seq = 40913U;
    msg.value = 168U;
    msg.error.assign("MXFJNCVSKCQPTGUXLBUIHWCDXDCNKJUFHIVZRDBOPPELAWXWIBRUPWHJTEAOJQQOPBLXMEYBMBCPIHYHNFWJVTMZIRQNZVMBYASNURDEEQGLSBMHKAZWZJPAMIYIDZLOUYSLKQKASTBXUUGMNCJDFHFVXXKEVQTTGQOFCFQCKTPTRAPDLLZNVGCGWNHUUEQYSEHVNORRWRWZEZXRIDJTYMGHEYSJFLKNGOVFDYOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.340921193241);
    msg.setSource(9765U);
    msg.setSourceEntity(212U);
    msg.setDestination(62904U);
    msg.setDestinationEntity(87U);
    msg.seq = 30717U;
    msg.value = 121U;
    msg.error.assign("JZCGSZDRHKXTAMSDQHJEEGPPHHBCJMXBLGMHFIFCZONDRJVYYBAAEJUNKLPSDYEMQUYEGNWMWFPHWDRNQAOUAKPSSKCMAWPTPNYOUBPRUVALKLKUJRZNWVBRTLLHEJAFGNLIDZAQIASLHIWXV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.00770790685746);
    msg.setSource(30519U);
    msg.setSourceEntity(193U);
    msg.setDestination(63516U);
    msg.setDestinationEntity(204U);
    msg.seq = 51706U;
    msg.sys.assign("QAIGFXAQMMOYSFPUCVACIBMNLUDVFVNYCPBKOOTVZDLZHKGVWJIGUGEHLHFXNLKXUXEMYWOHSGFRGWTQGIBYCPTYQKNJZIBNDUYJZGHSIQUKZWCQKTXBDMMHZXDZERXRDWXCTIFNWSRRFHBVWWMRJDYTOTG");
    msg.value = 0.258800072737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.0089986700845);
    msg.setSource(15236U);
    msg.setSourceEntity(1U);
    msg.setDestination(15527U);
    msg.setDestinationEntity(226U);
    msg.seq = 45150U;
    msg.sys.assign("STLOGESRSORLVAWRTNDWXBGHDQHGVDETBUKPMSBMXZIZCCRNEBWYYWRQOTNMPXPNWWSYGEQKCIVNABZDSTLXJGHUZPUFAVSKMDVMJQJDWILIFIIWRYFKABUNPGCZTSXUOABMXHOZCSDJHZBOAJPPEFGUVHBOU");
    msg.value = 0.934666123263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.692825096547);
    msg.setSource(2630U);
    msg.setSourceEntity(180U);
    msg.setDestination(59811U);
    msg.setDestinationEntity(59U);
    msg.seq = 47102U;
    msg.sys.assign("YHAPOYDHRLIRAWBONRQIMCUTOAJZNHXYPUGZM");
    msg.value = 0.64849771275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.830603314126);
    msg.setSource(29391U);
    msg.setSourceEntity(80U);
    msg.setDestination(11461U);
    msg.setDestinationEntity(248U);
    msg.action = 96U;
    msg.longain = 0.646947867255;
    msg.latgain = 0.376358666744;
    msg.bondthick = 3911932470U;
    msg.leadgain = 0.651292010874;
    msg.deconflgain = 0.771583272737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.397509632338);
    msg.setSource(19838U);
    msg.setSourceEntity(57U);
    msg.setDestination(40623U);
    msg.setDestinationEntity(224U);
    msg.action = 133U;
    msg.longain = 0.642224023073;
    msg.latgain = 0.768767835679;
    msg.bondthick = 1123453761U;
    msg.leadgain = 0.507247430667;
    msg.deconflgain = 0.672449243172;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.109206979948);
    msg.setSource(42503U);
    msg.setSourceEntity(46U);
    msg.setDestination(27323U);
    msg.setDestinationEntity(201U);
    msg.action = 104U;
    msg.longain = 0.00639716131084;
    msg.latgain = 0.941631803444;
    msg.bondthick = 1526620447U;
    msg.leadgain = 0.717953557782;
    msg.deconflgain = 0.289480347894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.507736005162);
    msg.setSource(37665U);
    msg.setSourceEntity(46U);
    msg.setDestination(12870U);
    msg.setDestinationEntity(27U);
    msg.err_mean = 0.674006128136;
    msg.dist_min_abs = 0.424702505369;
    msg.dist_min_mean = 0.922507396629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.26134303678);
    msg.setSource(16210U);
    msg.setSourceEntity(147U);
    msg.setDestination(62797U);
    msg.setDestinationEntity(71U);
    msg.err_mean = 0.517266301746;
    msg.dist_min_abs = 0.382158346665;
    msg.dist_min_mean = 0.320682214337;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.412081508083);
    msg.setSource(23830U);
    msg.setSourceEntity(19U);
    msg.setDestination(51863U);
    msg.setDestinationEntity(215U);
    msg.err_mean = 0.491397714328;
    msg.dist_min_abs = 0.634305012812;
    msg.dist_min_mean = 0.842526953969;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.43071285898);
    msg.setSource(8090U);
    msg.setSourceEntity(171U);
    msg.setDestination(25040U);
    msg.setDestinationEntity(91U);
    msg.action = 97U;
    msg.lon_gain = 0.160779166318;
    msg.lat_gain = 0.918139322367;
    msg.bond_thick = 0.814348965867;
    msg.lead_gain = 0.140719644659;
    msg.deconfl_gain = 0.895350674977;
    msg.accel_switch_gain = 0.222283526786;
    msg.safe_dist = 0.158125705509;
    msg.deconflict_offset = 0.577586700082;
    msg.accel_safe_margin = 0.892525251889;
    msg.accel_lim_x = 0.431567830663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.367433111155);
    msg.setSource(30671U);
    msg.setSourceEntity(63U);
    msg.setDestination(8474U);
    msg.setDestinationEntity(50U);
    msg.action = 32U;
    msg.lon_gain = 0.452788399278;
    msg.lat_gain = 0.142216384749;
    msg.bond_thick = 0.827397878233;
    msg.lead_gain = 0.466489321759;
    msg.deconfl_gain = 0.275642246484;
    msg.accel_switch_gain = 0.500261721446;
    msg.safe_dist = 0.880976647102;
    msg.deconflict_offset = 0.573020260967;
    msg.accel_safe_margin = 0.166406266912;
    msg.accel_lim_x = 0.137797410711;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.0668730798539);
    msg.setSource(27488U);
    msg.setSourceEntity(221U);
    msg.setDestination(47395U);
    msg.setDestinationEntity(100U);
    msg.action = 180U;
    msg.lon_gain = 0.320296414076;
    msg.lat_gain = 0.262666330489;
    msg.bond_thick = 0.018013085572;
    msg.lead_gain = 0.680859614047;
    msg.deconfl_gain = 0.157387131768;
    msg.accel_switch_gain = 0.551867554914;
    msg.safe_dist = 0.592964833005;
    msg.deconflict_offset = 0.576214208598;
    msg.accel_safe_margin = 0.341191920164;
    msg.accel_lim_x = 0.757349428068;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.429486691637);
    msg.setSource(7316U);
    msg.setSourceEntity(48U);
    msg.setDestination(54776U);
    msg.setDestinationEntity(158U);
    msg.type = 20U;
    msg.op = 19U;
    msg.err_mean = 0.00378871803291;
    msg.dist_min_abs = 0.966555990894;
    msg.dist_min_mean = 0.608344965896;
    msg.roll_rate_mean = 0.094618216894;
    msg.time = 0.468528223925;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 188U;
    tmp_msg_0.lon_gain = 0.630301294717;
    tmp_msg_0.lat_gain = 0.527099109823;
    tmp_msg_0.bond_thick = 0.772635295183;
    tmp_msg_0.lead_gain = 0.285813276948;
    tmp_msg_0.deconfl_gain = 0.82146501268;
    tmp_msg_0.accel_switch_gain = 0.955924259454;
    tmp_msg_0.safe_dist = 0.447507809167;
    tmp_msg_0.deconflict_offset = 0.0819520200894;
    tmp_msg_0.accel_safe_margin = 0.441009657443;
    tmp_msg_0.accel_lim_x = 0.87292609837;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.0524506900002);
    msg.setSource(21537U);
    msg.setSourceEntity(70U);
    msg.setDestination(30808U);
    msg.setDestinationEntity(222U);
    msg.type = 39U;
    msg.op = 98U;
    msg.err_mean = 0.196959807044;
    msg.dist_min_abs = 0.078198536225;
    msg.dist_min_mean = 0.787228609561;
    msg.roll_rate_mean = 0.115042814461;
    msg.time = 0.312846931616;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 204U;
    tmp_msg_0.lon_gain = 0.27375269928;
    tmp_msg_0.lat_gain = 0.534497978379;
    tmp_msg_0.bond_thick = 0.386970780338;
    tmp_msg_0.lead_gain = 0.913631650928;
    tmp_msg_0.deconfl_gain = 0.217607473618;
    tmp_msg_0.accel_switch_gain = 0.163634640969;
    tmp_msg_0.safe_dist = 0.282323230373;
    tmp_msg_0.deconflict_offset = 0.203763446999;
    tmp_msg_0.accel_safe_margin = 0.125766233615;
    tmp_msg_0.accel_lim_x = 0.636925126108;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.612808017761);
    msg.setSource(22723U);
    msg.setSourceEntity(154U);
    msg.setDestination(53195U);
    msg.setDestinationEntity(228U);
    msg.type = 214U;
    msg.op = 248U;
    msg.err_mean = 0.310616185449;
    msg.dist_min_abs = 0.990011053927;
    msg.dist_min_mean = 0.21330574814;
    msg.roll_rate_mean = 0.429417244247;
    msg.time = 0.891630820645;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 37U;
    tmp_msg_0.lon_gain = 0.733491202378;
    tmp_msg_0.lat_gain = 0.835460786747;
    tmp_msg_0.bond_thick = 0.964865128055;
    tmp_msg_0.lead_gain = 0.517375798847;
    tmp_msg_0.deconfl_gain = 0.408965240122;
    tmp_msg_0.accel_switch_gain = 0.642513997795;
    tmp_msg_0.safe_dist = 0.523159558563;
    tmp_msg_0.deconflict_offset = 0.626130651944;
    tmp_msg_0.accel_safe_margin = 0.931367118415;
    tmp_msg_0.accel_lim_x = 0.304264132326;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.578365859092);
    msg.setSource(32938U);
    msg.setSourceEntity(40U);
    msg.setDestination(10377U);
    msg.setDestinationEntity(25U);
    msg.uid = 147U;
    msg.frag_number = 168U;
    msg.num_frags = 158U;
    const char tmp_msg_0[] = {-48, -93, -70, 45, -65, -122, -102, 119, 20, 57, 54, 63, -62, 6, -38, -37, -32, 80, 124, 44, 68, 32, -125, -54, 103, 55, -39, -59, 88, 46, -95, 88, -76, -57, -40, 34, 46, -90, 58, -11, 1, 36, -17, -96, -111, -120, 102, 50, -104, 37, 126, -61, 2, 87, 74, 71, 45, -42, -118, 36, 1, -4, 0, -100, -78, -2, 53, -110, 32, 106, 15, -4, -31, -97, 50, 125, -91, -128, 87, -107, -69, -43, -70, -59, 58, 64, -46, 101, -94, 2, -61, 97, 51, 42, -5, -68, 14, -61, 4, 81, 54, 109, -67, 62, -57, 6, 80, 15, -10, -47, -108, 21, 37, 82, -121, 111, 93, 7, -61, -99, 43, -87, -128, 30, -104, 53, 37, 27, 38, 65, 7, 84, 81, -8, 121, 44, -20, -80, -77, -25};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.402137681818);
    msg.setSource(22319U);
    msg.setSourceEntity(29U);
    msg.setDestination(31198U);
    msg.setDestinationEntity(68U);
    msg.uid = 162U;
    msg.frag_number = 93U;
    msg.num_frags = 245U;
    const char tmp_msg_0[] = {75, 103, 99, -23, 23, 80, 8, -46, -60, -96, 99, 29, -71, 119, -65, 81, -69, 110, 104, 18, 114, -112, 117, -83, -39, 48, -126, -50, 126, 120, -5, -86, -119, 101, 49, -116, 76, -45, -18, -48, -40, 3, 30, -34, 37, -22, 105, -106, 29, 21, -37, 41, -88, -105, -109, 10};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.730841145934);
    msg.setSource(41916U);
    msg.setSourceEntity(157U);
    msg.setDestination(45737U);
    msg.setDestinationEntity(145U);
    msg.uid = 8U;
    msg.frag_number = 114U;
    msg.num_frags = 200U;
    const char tmp_msg_0[] = {91, -54, 63, 82, 112, 54, -91, -27, 10, -45, 7, -49, 58, -20, -95, 62, -30, 116, 86, -59, 78, 98, 101, 71, 123, 115, 124, 113, 76, 41, -109, -83, 15, -32, -71, -2, -21, 68, 54, -18, -37, -1, -128, 59, 104, 115, -95, -63, 38, -2, 98, 3, 32, 108, 32, -38, -78, 101, 55, -7, 68, 80, -86, 45, 83, -55, -31, -116, 37, 24, 61, -111, -33, 84, -89, -67, 88, -10, -14, 66, -60, -117, -44, 116, 39, -120, -100, 39, 86, -5, -37, -82, -51, 89, -24, 85, -61, -102, -72, 52, -14, 87, -56, 28, 112, 21, -97, -96, -8, -46, 63};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.350489813215);
    msg.setSource(63956U);
    msg.setSourceEntity(178U);
    msg.setDestination(62219U);
    msg.setDestinationEntity(235U);
    msg.content_type.assign("WKWUSVJJXSZRDVZYYIIFMRYUUXMLAFQRMHELTEHIAQSHSDATYKVFOSFVGHLVIBNNGPDIYTXQMUPVLTZTZJPNOHXVLEOFQRWCPKIGCF");
    const char tmp_msg_0[] = {18, 89, -19, 82, -36, -102, -13, -39, 24, -53, -15, 16, -35, 89, -62, -75, -70, -65, 20, 74, -39, -41, -41, -81, 1, -62, -64, -4, 84, 110, -126, 122, -61, 8, -113, 48, -18, -121, -8, -82, -126, 24, 27, -71, 50, 121, 117, -106, 14, 117, 82, 30, 91, -56, 62, 24, 45, 53, 122, -98, -111, -128, 86, -110, -66, 116, 105, -114, 15, -49, 73, -2, -21, -76, 40, 87, 124, 87, 49, 120, 54, -123, 103, -36, -100, 16, 90, -22, -29, -89, -78, 24, 1, -98, 28, -113, 44, -2, 112, 103, -40, 41, -64, 50, -91, -45, 96, 119, 16, 75, 1, 72, 36, 81, 40, -40, 51, 20, -88, 21, -2, 113, -36, -56, 115, -109, 87, 124, -2, -82, 85, -79, 21, -105, 6, -88, 24, -29, -59, 84, 102, -35, -22, -84, 50, 108, 94, -64, -96, 56, 12, 82, -51, 61, 71, -23, 63, -47, 11};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.739550594238);
    msg.setSource(45334U);
    msg.setSourceEntity(100U);
    msg.setDestination(27544U);
    msg.setDestinationEntity(249U);
    msg.content_type.assign("SWEIJEBPIAVUQFANVTXPGQMSNGQDIFKDJANQAWBXVZRWSBKVSMQZEITORHBDVOMCCSLTPBWUDIFTBHUFEPYURPYNGFEMTSRZTGQGDYBRVWBQFWLXRCCZLGTMCJFHFYPWLDTRGTGDLUZMUUODAJLWJCSOKEODMMXOYEKSQYUJZJNHQKWIXVVYXRCARNGARBQKLHFIMYIHDZICTHKAEBKZJHZNGWNPLUXALZNSYEYNJL");
    const char tmp_msg_0[] = {105, 113, 41, -97, 125, 22, 111, 26, 100, 21, -65, 33, -49, 85, -94, -104, -84, 80, -65, 13, -1, -65, 108, 93, -108, 101, 82, 32, -105, 113, 45, -6, -50, -106, -58, 29, -49, -48, -37, 118, -25, -119, 73, -23, -25, 57, -91, 13, -88, -80, 83, 103, -80, 117, 19, 126, 44, 69, 86, 87, -32, -51, 11, 114, 42, -97, -49, -118, 11, 24, -24, -67, -87, -106, -51, 104, 72, 78, 110, 38, -33, 104, 86, -57, 79, 57, 16, 30, 32, 6, -111, -35, 107, 57, -72, -69, 106, 59, 2, 64, 36, 42, 23, -42, 52, -72, 88, 37, -36};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.928630290277);
    msg.setSource(300U);
    msg.setSourceEntity(95U);
    msg.setDestination(60079U);
    msg.setDestinationEntity(121U);
    msg.content_type.assign("IHCARUNYBETFLRQYJLJGMQNOHVGCVNQATTYMGWSMLKPWCJSKUYKPPKCPJQAPHOJAMXJKTZRKGWYNQUUUFHQEUDFDCLDLDUIZBXIREYNSDFS");
    const char tmp_msg_0[] = {70, 49, -47, 54, -66, -111, 87, 56, 68, 41, 2, 61, -111, 72, -78, 20, -106, -46, 31, -19, -7, -92, 72, 24, 116, -26, -12, 68, -8, 103, 23, -90, -67, 42, -21, -61, 120, -48, 123, -30, -33, 102, -109, 17, -110, 29, 71, -92, -58, -28, 110, 100, -46, -87, -33, 44, -105, -34, -102, -37, 75, 5, -32, 88, 123, 117, -101, 35, 69};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.408922312968);
    msg.setSource(22046U);
    msg.setSourceEntity(25U);
    msg.setDestination(64683U);
    msg.setDestinationEntity(162U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.379076320944);
    msg.setSource(37907U);
    msg.setSourceEntity(107U);
    msg.setDestination(20059U);
    msg.setDestinationEntity(250U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.40448786066);
    msg.setSource(4840U);
    msg.setSourceEntity(85U);
    msg.setDestination(48449U);
    msg.setDestinationEntity(199U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.392991406268);
    msg.setSource(30850U);
    msg.setSourceEntity(228U);
    msg.setDestination(27421U);
    msg.setDestinationEntity(243U);
    msg.target = 54146U;
    msg.bearing = 0.625814942725;
    msg.elevation = 0.376103731087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.724141916847);
    msg.setSource(27154U);
    msg.setSourceEntity(181U);
    msg.setDestination(2670U);
    msg.setDestinationEntity(107U);
    msg.target = 3582U;
    msg.bearing = 0.931693715922;
    msg.elevation = 0.621112860226;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.636496908067);
    msg.setSource(61345U);
    msg.setSourceEntity(140U);
    msg.setDestination(37896U);
    msg.setDestinationEntity(126U);
    msg.target = 34972U;
    msg.bearing = 0.0634692439834;
    msg.elevation = 0.779522107079;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.724870528892);
    msg.setSource(48784U);
    msg.setSourceEntity(38U);
    msg.setDestination(20695U);
    msg.setDestinationEntity(6U);
    msg.target = 52243U;
    msg.x = 0.855030786067;
    msg.y = 0.917655948691;
    msg.z = 0.294065244717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.902439993692);
    msg.setSource(23646U);
    msg.setSourceEntity(132U);
    msg.setDestination(41384U);
    msg.setDestinationEntity(49U);
    msg.target = 50245U;
    msg.x = 0.483334715209;
    msg.y = 0.267415055761;
    msg.z = 0.812135099284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.794415867886);
    msg.setSource(23228U);
    msg.setSourceEntity(93U);
    msg.setDestination(5504U);
    msg.setDestinationEntity(109U);
    msg.target = 7306U;
    msg.x = 0.60266111477;
    msg.y = 0.0225683842344;
    msg.z = 0.711142019896;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.0633935381173);
    msg.setSource(46484U);
    msg.setSourceEntity(32U);
    msg.setDestination(27518U);
    msg.setDestinationEntity(0U);
    msg.target = 22570U;
    msg.lat = 0.474093077533;
    msg.lon = 0.00417521520298;
    msg.z_units = 242U;
    msg.z = 0.759913281335;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.384354170007);
    msg.setSource(29887U);
    msg.setSourceEntity(197U);
    msg.setDestination(32456U);
    msg.setDestinationEntity(77U);
    msg.target = 8937U;
    msg.lat = 0.447147354371;
    msg.lon = 0.302565880707;
    msg.z_units = 43U;
    msg.z = 0.507396487454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.961059812299);
    msg.setSource(8923U);
    msg.setSourceEntity(34U);
    msg.setDestination(41254U);
    msg.setDestinationEntity(183U);
    msg.target = 21757U;
    msg.lat = 0.0327231251509;
    msg.lon = 0.309899907183;
    msg.z_units = 72U;
    msg.z = 0.41448679656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.343842700617);
    msg.setSource(10714U);
    msg.setSourceEntity(44U);
    msg.setDestination(38008U);
    msg.setDestinationEntity(40U);
    msg.locale.assign("ZIETIWVNOIVPOQWGFAYQ");
    const char tmp_msg_0[] = {98, -18, 102, 81, -62, -110, 97, 103, 20, -101, -64, 40, 104, -50, 20, -39, -99, -93, -8, -100, 57, -103, 93, -4, -116, 76, 16, 19, -115, 41, -111, 57, 47, -111, -109, -52, 51, -116, 11, 70, -64, 103, 11, -71, 103, -71, 54, 125, -15, -55, 36, -22, 58, -53, 33, -121, 14, 65, 6, -94, 83, 44, 97, -69, 68, -78, 116, -65, -45, -123, -54, -35, 95, -56, 21, -65, 39, 60, 41, 60, 84, 23, 29, 22, -118, -12, 1, 99, 81, 42, 94, 79, -25, 121, -9, 30, -56, -124, -100, 11, 82, -119, -115, -16, 104, 14, 47, 96, -99, -33, -57, 110, 94, 102, -70, -33, -50, -107, 107, -76, 120, 16, 101, -14, 95, 12, -30, 23, 22, 6, 22, 66, 124, 53, -59, -108, 97, -75, -117, 33, 10, -11, -11};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.770755465296);
    msg.setSource(16518U);
    msg.setSourceEntity(167U);
    msg.setDestination(15040U);
    msg.setDestinationEntity(149U);
    msg.locale.assign("ELENRIBPHPSOTBUMHQAEFCBGHNSURIY");
    const char tmp_msg_0[] = {41, 3, 98, 85, 60, -92, -124, -57, 77, 54, -25, 123, -88, -9, -41, 67, 18, -63, 48, -73, 40, -114, 89, 64, -84, 119, 54, 110, -122, 98, 103, 46, 61, -76, 99, 57, -68, 30, -7, -59, 10, -28, 118, 93, -126, -44, 11, -14, 98, 90, -33, -89, 61, -16, -108, 52, -47, 105, 117, -65, 40, 74, -31, 104, 55, 65, 72, 99, -33, -12, 114, -12, -65, -22, 109, 102, -2, 108, -12, -119, -21, 122, -117, 23, 44, 71, 6, 21, 98, 9, -107, 34, 24, 85, 26, -39, -102, -87, -53, 22, 53, -3, -6, -127, 82, -6, 109, -101, 108, -50, -87, 103, 49, -71, -123, -107, -68, -11, -114, 108, -100, -43, 14, 57, -18, 87, 71, 100, 32, -10, -24, -28, 30, 34, 42, -112, 109, -102, -8, 108, -65, -114, 12, -60, -127, -81, 72, -64, -54, -77, -62, -45, -113, 116, 106, 98, 78, 56, 28, -78, -81, 92, -27, -62, 93, 13, -101, 20, 42, 47, 35, 43, 83, -63, 84, 107, 62, 105, 25, -81, 81, -14, -21, -42, 102, 113, -79, -99, 18, 118, -61, 49, -101, 30, -14, -29, -76, -9, -72, -77, 13, 62, 108, -117, 27, 106, 75, -91, 99, -31, 28, -15, 108, -19};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.374179810768);
    msg.setSource(62195U);
    msg.setSourceEntity(219U);
    msg.setDestination(53042U);
    msg.setDestinationEntity(5U);
    msg.locale.assign("ECIABAAWKTPHFBHZQMLXTIGOOQKPGYMXUWXZRJDEMNCDGDTWPUWRVDGHBHRTEYDNQTMYMWASICIRUZZUKCGELCQMGUVEEJFCOWUTLZQKPBHFNWFAON");
    const char tmp_msg_0[] = {-86, -17, -13, 91, -122, 44, -21, 20, -24, -67, -33, -95, -101, -68, 74, 70, -104, 29, 124, 21, -104, 71, 122, 126, 49, -88, 98, -68, 44, 32, 126, -59, 69, -8, -113, 64, 28, -13, -93, -54, -90, -87, 101, 72, -13, -110, -92, -126, -48, -34, -91, -10, -90, 88, -53, 110, -20, -127, -105, 58, -49, -10, -111, -17, 73, 38, 38, 40, 73, -12, 117, -69, 47, -85, -72, 25, -18, -65, -70, 28, -78, -99, -101, -80, -23, -62, 56, 60, 51, 59, 94, -31, 12, -94, -60, 5, -4, 35, -63, -25, -82, -26, -86, -88, 77, -86, -87, 1, 35, -90, 34, -20, 109, 105, -72, -26, 43, -128, 35, 8, 53, -46, 6, 23, -80, 31, 5, 93, -44, -39, -89, 61, 75, -101, -127, 36, 108, -123, 74, 33, 65, -81, -65, 104, 14, 21, -70, -92, 36, 89, 14, -26, -125, -72, 73, -108, -29, 17, 83, -65, -89, -92, -6, 49, 102, -107, 27, -103, -61, 40, -104, -30, -102, -29, 41, -12, -92, 102, -49, -34, -56, 0, 89, -113, 55, -4, 96, 93, -62, 88, -92, -64, 64, 105, 110, -96, -26, 102, 51, -55, -18, -123, 48};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.880810931857);
    msg.setSource(53466U);
    msg.setSourceEntity(8U);
    msg.setDestination(25810U);
    msg.setDestinationEntity(19U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.601225897914);
    msg.setSource(57731U);
    msg.setSourceEntity(154U);
    msg.setDestination(58680U);
    msg.setDestinationEntity(122U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.291120862345);
    msg.setSource(7381U);
    msg.setSourceEntity(68U);
    msg.setDestination(39384U);
    msg.setDestinationEntity(11U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
