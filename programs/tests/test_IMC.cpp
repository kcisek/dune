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
// IMC XML MD5: 4631fbae2e9f14ef8e52f3a1d74d2813                            *
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
    msg.setTimeStamp(0.589473870637665);
    msg.setSource(24922U);
    msg.setSourceEntity(143U);
    msg.setDestination(4764U);
    msg.setDestinationEntity(189U);
    msg.state = 186U;
    msg.flags = 117U;
    msg.description.assign("FXHDKZNXPRIVBTIFECRJSPYIZDQPJGHYTOEEMQDVVXSBMPAHQXNFHAYBMNAHEHYHXREVUGXKGGLOFXRCRQGTBLLWMFMQTKOKJTDDDJZZSGESMPZZTSQZQKVLEYTNSWCFLWAXXKQUHUWPUCCGHVCJZTBSSNYNWSNFCTAITFNJFRUPACMBGBIWYKWICOULMUQVRRXOQKVYOBLLPODMUMIJS");

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
    msg.setTimeStamp(0.4039856429256846);
    msg.setSource(61091U);
    msg.setSourceEntity(59U);
    msg.setDestination(2485U);
    msg.setDestinationEntity(2U);
    msg.state = 4U;
    msg.flags = 77U;
    msg.description.assign("QHGCVYFXJISZGNFWJQYGEUBICOILBCDHDLPNDKQBAPPNWTMLFLRHRSXXNOVRSMGXYFZEYFFPQDPDVGMZHOLLDPVYZJZTX");

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
    msg.setTimeStamp(0.017075693992865904);
    msg.setSource(59768U);
    msg.setSourceEntity(102U);
    msg.setDestination(33826U);
    msg.setDestinationEntity(185U);
    msg.state = 198U;
    msg.flags = 101U;
    msg.description.assign("ZGLXSFNXFIXDMMVOMKHYMUFUWKIVWEIKV");

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
    msg.setTimeStamp(0.2967012736268285);
    msg.setSource(38519U);
    msg.setSourceEntity(40U);
    msg.setDestination(28600U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.6490030332324878);
    msg.setSource(41892U);
    msg.setSourceEntity(41U);
    msg.setDestination(55988U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.5483696435731705);
    msg.setSource(32563U);
    msg.setSourceEntity(217U);
    msg.setDestination(22855U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.9276114852081192);
    msg.setSource(61096U);
    msg.setSourceEntity(166U);
    msg.setDestination(39633U);
    msg.setDestinationEntity(157U);
    msg.id = 163U;
    msg.label.assign("XJGGYJCYFYLXMJIIOHREUAQSKTCXARHHWPVYRHPZTKVCVBOQPYLEPKQDJFCLVTWGWECWGLNPRQNGKSUZOZAPZIXESOYCZSZSCXPVFMMULFNRYIACLVOYQJPRJFDKUTG");
    msg.component.assign("YWCHXNNMBERHDURGPCFTPQAZDPYVMUXAUBWLLADSSEKZXIZFURWSJZFABWCTIOUTTDLNAHJYGHCNHJLUFBPRLQWFYQ");
    msg.act_time = 63360U;
    msg.deact_time = 10781U;

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
    msg.setTimeStamp(0.9152758521885923);
    msg.setSource(21226U);
    msg.setSourceEntity(72U);
    msg.setDestination(49684U);
    msg.setDestinationEntity(10U);
    msg.id = 12U;
    msg.label.assign("OINFKEKIUICTOXYHHAYTPRAQVGOLGIZHKZAFUGAUSMFTCWPNJHDUZZPCQORNYXKTQOBJPJWCPANLYDBRAYTZOSHBSCCLBQEYSRQNUIJJOJHZMCBHLXMLFGVXERKSWXPDUFHTNNYCLMTAVSFRWDKQMVEDNEWVNMXXLRWXHKXRAUOBJFEYCIUZAYVPGEDSDEQDTRSCJIVFQUDFILPG");
    msg.component.assign("VJUYXIJWXMP");
    msg.act_time = 53363U;
    msg.deact_time = 23640U;

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
    msg.setTimeStamp(0.9122655373363809);
    msg.setSource(9017U);
    msg.setSourceEntity(19U);
    msg.setDestination(2499U);
    msg.setDestinationEntity(17U);
    msg.id = 130U;
    msg.label.assign("SPQBMKACWXHDVGVFLSKNVWGKBHFQQLCNCSMODXHDYBXHTNIPYPDYEESZUXPJURRMZJPSXVUZUJSJHSZYLHOMMGQJ");
    msg.component.assign("IIOTVEOJJTFRKCZMKYALFESSBLKLNCXLBLAHQXOPSQKENYPBCMOUZACTMOYJUOGGWERVIQFLRYFBPYPTNSNPKNVADMLCCYFUNTILRXWEEHQUKDIQITXXPJGWGUDEZECSVAYJBTTDQSUAGHMZOIQIBYNMJIUXSMQFNGGNZMGAFHKUAJXGVOZRVRZVESDZWFXTRNFROPFQELUVHJKBQLDBPAMBUDRYDXYWVXHDWVKZTJWIWGHOWDWCSHJPCCRKM");
    msg.act_time = 27033U;
    msg.deact_time = 19857U;

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
    msg.setTimeStamp(0.9770699714333746);
    msg.setSource(37111U);
    msg.setSourceEntity(129U);
    msg.setDestination(33540U);
    msg.setDestinationEntity(102U);
    msg.id = 206U;

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
    msg.setTimeStamp(0.43987100555866554);
    msg.setSource(8595U);
    msg.setSourceEntity(245U);
    msg.setDestination(5250U);
    msg.setDestinationEntity(189U);
    msg.id = 196U;

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
    msg.setTimeStamp(0.8642536126740751);
    msg.setSource(15710U);
    msg.setSourceEntity(196U);
    msg.setDestination(25481U);
    msg.setDestinationEntity(216U);
    msg.id = 177U;

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
    msg.setTimeStamp(0.12491975521543908);
    msg.setSource(30170U);
    msg.setSourceEntity(63U);
    msg.setDestination(16161U);
    msg.setDestinationEntity(81U);
    msg.op = 146U;
    msg.list.assign("ZWIODOMMVCAAQRAFUTYTUDHBLINFEJDQYQVWWKYUZSVNCKZNOGXEMIBAEGPQFRPFOZALFBKICEHCQCCVPBKWBIKUDYDZRXULWCSFSBHEGVEQTLZVNVWHGKVRJRINHPMYTXAMKISAHPOCJXEDJFHOXGYHGEGHRDPPIVLTJKRCJLXWJJQYFXNNYTPFWMOAELNBMSUIZTKTGTVOSWDNBBGMQLDUZXLILQRWESCSSZORPKJGB");

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
    msg.setTimeStamp(0.9305528766656129);
    msg.setSource(34284U);
    msg.setSourceEntity(161U);
    msg.setDestination(49857U);
    msg.setDestinationEntity(106U);
    msg.op = 130U;
    msg.list.assign("SJPRZBSOAWIHGCTXCZYEJCYTVNXGLCBPPZIBSGJAEATLJHXYFMRRFPUFFNBHWRQHUGIKTUZJODQSMMJOQOLUUZPYARDKZHZQXKWVYEUVUNTEONKSDPCVRNDLLEWGXIAZKJMSCZUQVWEDMYTUYIISTJNBHVIZHVRTMOLRXBSMFEDAPBQPWVLDCWFXMXYKPPXFKOGWELDSFKGHOMKINIYONJWNXLVRAOAHVBM");

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
    msg.setTimeStamp(0.40179292330310534);
    msg.setSource(54923U);
    msg.setSourceEntity(42U);
    msg.setDestination(60971U);
    msg.setDestinationEntity(231U);
    msg.op = 166U;
    msg.list.assign("VRIRPYKSHHQTDNWMPLUSIKNRGBXTSZTDEEBGLWIJGSZGSXUYUXYPCBDMORSACDMXZQOVJPEHBFUOKORHLKYVQRQOHETFLFMOQCHVMOHLCQPLDDOMGFFNPYQTRUWGOSAPKEKSRTNFJEWJZDXJGJNNXAPMPYKILWFVDZWCMCEZEJLIMZSIFWBGHDFGXAXEJLBCZICBUJNQTWARRAOFVTBUAVHY");

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
    msg.setTimeStamp(0.7410206551918544);
    msg.setSource(47325U);
    msg.setSourceEntity(235U);
    msg.setDestination(24409U);
    msg.setDestinationEntity(87U);
    msg.value = 89U;

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
    msg.setTimeStamp(0.19933425037122487);
    msg.setSource(14445U);
    msg.setSourceEntity(28U);
    msg.setDestination(20349U);
    msg.setDestinationEntity(39U);
    msg.value = 88U;

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
    msg.setTimeStamp(0.8371081981661809);
    msg.setSource(49556U);
    msg.setSourceEntity(124U);
    msg.setDestination(33755U);
    msg.setDestinationEntity(6U);
    msg.value = 250U;

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
    msg.setTimeStamp(0.45627690129656584);
    msg.setSource(12749U);
    msg.setSourceEntity(122U);
    msg.setDestination(19770U);
    msg.setDestinationEntity(148U);
    msg.consumer.assign("BSDDFWGDPFLBWTQYN");
    msg.message_id = 41664U;

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
    msg.setTimeStamp(0.20909101454883106);
    msg.setSource(18085U);
    msg.setSourceEntity(95U);
    msg.setDestination(30330U);
    msg.setDestinationEntity(126U);
    msg.consumer.assign("AKDNQZIBUEQXLVJJNYPAINSYGVUMQYLMESKYACCTRRBZMDIEUBWPLQHSFESKUUKRGDPXWGBGXKMEDDFGQTXHNUERPWYMUAHREWPXQLFAXGXYFVEAZXHBKOPNCTXCKYZPZHRQICYZVOTQKIFXTLLMOMWJNSAMJUSBSIFDIBJSDLTTRGZFJIOFVJKQHCZATIOACFCUEVNYOFVBZBLWBDWNVGNECJISVSDDLGWTRQOZHRWRLNHGWAOPJYPHP");
    msg.message_id = 9367U;

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
    msg.setTimeStamp(0.31895749001796636);
    msg.setSource(7267U);
    msg.setSourceEntity(195U);
    msg.setDestination(40342U);
    msg.setDestinationEntity(8U);
    msg.consumer.assign("GYFOWXJTODRKVDDALFGCIFJLMIAJDZXAWJTDQYVBDTSHPRVPVPFNQSWDBHXMVMJHUUBHXTDKBUKIRYJIAPZDYGROWUMRTNMZSMVYFWKHTCEOVIXSYEWHQJNEZAJBSZNVUXKOXHLFNSGPFOQUWUCJMAAXEOHCCMSRBNFIGG");
    msg.message_id = 33476U;

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
    msg.setTimeStamp(0.90248807758732);
    msg.setSource(3988U);
    msg.setSourceEntity(50U);
    msg.setDestination(55596U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.7265406796174063);
    msg.setSource(32993U);
    msg.setSourceEntity(133U);
    msg.setDestination(35429U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.5905884769237523);
    msg.setSource(18347U);
    msg.setSourceEntity(220U);
    msg.setDestination(37925U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.4917264158418856);
    msg.setSource(53821U);
    msg.setSourceEntity(248U);
    msg.setDestination(2871U);
    msg.setDestinationEntity(76U);
    msg.op = 128U;

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
    msg.setTimeStamp(0.7766454224378216);
    msg.setSource(11638U);
    msg.setSourceEntity(56U);
    msg.setDestination(11243U);
    msg.setDestinationEntity(133U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.2948251038652627);
    msg.setSource(52699U);
    msg.setSourceEntity(169U);
    msg.setDestination(53020U);
    msg.setDestinationEntity(107U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.6811457399079327);
    msg.setSource(37913U);
    msg.setSourceEntity(137U);
    msg.setDestination(10608U);
    msg.setDestinationEntity(206U);
    msg.total_steps = 232U;
    msg.step_number = 224U;
    msg.step.assign("YOCRVLDWHWMVJXWFNQXMKPPCBZWSQHUUGEYCGFIRLGLIAINCSDWYDBDLGJDYXRZTSHXOGQPUGNYXFKTVQDXBTMWHDHSOLKNETMJBCQZEUPMOPZQSRHIWDYJORJCOGJHLMRKQJUACABCFNSZLVNKNVVLPTPSTUIKYDOFBHNTMJIUMMBTUGOKAOZFWESZPJTNVYEARSRPZWWKQIQDIVEGIOEZYKRAZXFGQV");
    msg.flags = 77U;

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
    msg.setTimeStamp(0.37611826495155154);
    msg.setSource(49110U);
    msg.setSourceEntity(139U);
    msg.setDestination(51470U);
    msg.setDestinationEntity(172U);
    msg.total_steps = 65U;
    msg.step_number = 172U;
    msg.step.assign("OXONECLKCTCKUDBFPFAJSVEVMDELFOX");
    msg.flags = 57U;

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
    msg.setTimeStamp(0.7577523619520256);
    msg.setSource(63508U);
    msg.setSourceEntity(87U);
    msg.setDestination(37592U);
    msg.setDestinationEntity(85U);
    msg.total_steps = 251U;
    msg.step_number = 67U;
    msg.step.assign("XVMVKJSZDPBJIXFHEPFOXTQATWGKXZLZEWBKFYEHZAOQUUPOGDEOMGQNCTRSIKCVTUYWFAECBOZKYGWPPEOPBAXIIFHMJLD");
    msg.flags = 43U;

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
    msg.setTimeStamp(0.02974068917976458);
    msg.setSource(21677U);
    msg.setSourceEntity(229U);
    msg.setDestination(54493U);
    msg.setDestinationEntity(1U);
    msg.state = 121U;
    msg.error.assign("ZWAOTTQJLVJQHASZQQIVNDIHRREMDNBISREPORKJQCFBVYJYJBZJUKPFDLRMZECOXIBXTHGFMTWEVPACYEZQNMSNLDODTKCUYJAKCILNIKOPXRWBCMTTVNXBSBLHEZFADMUWGLSMRHBKFHPXLQUXNUXZLYGJXLJPUVYAZIOLQOWPMSIMIOCGEQUBEVUVPWYHRFUKWHWEXGF");

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
    msg.setTimeStamp(0.6890825883773828);
    msg.setSource(7950U);
    msg.setSourceEntity(225U);
    msg.setDestination(61588U);
    msg.setDestinationEntity(113U);
    msg.state = 20U;
    msg.error.assign("AAQLPCZMAFTNVYQZDCNJCEOLKWVTEHGPXLJDRJAONWLADVBFZAETZTFQACBRDDDWXCSPSZSJFXWHXVKIMIUEJHONVWUFWMGYVRPHKQRQSTTIMPLBXBGDTCKUVLYCRAGIMYTTFBOHENJCBGHYSZUJLIRGNOMKLULFNYQWZQUOPYSFILKYEHPHDFYZSRQEKSORMBMWBXJOAFPTDIEWKGSCHRWGPPUUEAXXNZRUJEMVCJ");

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
    msg.setTimeStamp(0.2386712116813886);
    msg.setSource(19322U);
    msg.setSourceEntity(4U);
    msg.setDestination(18446U);
    msg.setDestinationEntity(196U);
    msg.state = 209U;
    msg.error.assign("EVELLDAJUUQPSMKNFVKVTBXHIYDZCRKPAQFSOXPQXSCKBBRNKYCKISZOCBG");

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
    msg.setTimeStamp(0.7486458803087728);
    msg.setSource(33284U);
    msg.setSourceEntity(125U);
    msg.setDestination(64459U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.4356562723927847);
    msg.setSource(54521U);
    msg.setSourceEntity(210U);
    msg.setDestination(53984U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.26246646985990807);
    msg.setSource(59727U);
    msg.setSourceEntity(70U);
    msg.setDestination(38297U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.5236234585756592);
    msg.setSource(49015U);
    msg.setSourceEntity(251U);
    msg.setDestination(18503U);
    msg.setDestinationEntity(98U);
    msg.op = 243U;
    msg.speed_min = 0.9246550302106313;
    msg.speed_max = 0.9022255359940405;
    msg.long_accel = 0.8511271189911942;
    msg.alt_max_msl = 0.38155117814566164;
    msg.dive_fraction_max = 0.835549687074192;
    msg.climb_fraction_max = 0.21181973448969482;
    msg.bank_max = 0.7203777640078517;
    msg.p_max = 0.2991573765940513;
    msg.pitch_min = 0.6291043633072273;
    msg.pitch_max = 0.3759223372819531;
    msg.q_max = 0.8058157028105523;
    msg.g_min = 0.6755033118252168;
    msg.g_max = 0.17107680128456326;
    msg.g_lat_max = 0.9874675118408928;
    msg.rpm_min = 0.6862572021305064;
    msg.rpm_max = 0.05223765170360417;
    msg.rpm_rate_max = 0.8237491915987752;

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
    msg.setTimeStamp(0.6235425917670743);
    msg.setSource(54870U);
    msg.setSourceEntity(111U);
    msg.setDestination(62656U);
    msg.setDestinationEntity(16U);
    msg.op = 20U;
    msg.speed_min = 0.10258285592360916;
    msg.speed_max = 0.45716042209620267;
    msg.long_accel = 0.7903180935791145;
    msg.alt_max_msl = 0.5032093087999014;
    msg.dive_fraction_max = 0.25799944294994037;
    msg.climb_fraction_max = 0.862731304429537;
    msg.bank_max = 0.8389499700334464;
    msg.p_max = 0.506283969859704;
    msg.pitch_min = 0.15965585952965455;
    msg.pitch_max = 0.46084635579899325;
    msg.q_max = 0.3377706748887167;
    msg.g_min = 0.7195142322702441;
    msg.g_max = 0.6752560136937718;
    msg.g_lat_max = 0.6385087628786731;
    msg.rpm_min = 0.7839744256347158;
    msg.rpm_max = 0.6013249327177965;
    msg.rpm_rate_max = 0.023439544664695444;

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
    msg.setTimeStamp(0.12644814381243596);
    msg.setSource(56987U);
    msg.setSourceEntity(230U);
    msg.setDestination(4423U);
    msg.setDestinationEntity(246U);
    msg.op = 183U;
    msg.speed_min = 0.21558174848222256;
    msg.speed_max = 0.636793804626245;
    msg.long_accel = 0.3147532801287486;
    msg.alt_max_msl = 0.20318308735086543;
    msg.dive_fraction_max = 0.483386234536028;
    msg.climb_fraction_max = 0.5597622380460388;
    msg.bank_max = 0.12308104720903035;
    msg.p_max = 0.6449963781587372;
    msg.pitch_min = 0.6115786147526151;
    msg.pitch_max = 0.5347887052116768;
    msg.q_max = 0.5984953424614351;
    msg.g_min = 0.6989578973598997;
    msg.g_max = 0.6366496052545295;
    msg.g_lat_max = 0.6792577828475022;
    msg.rpm_min = 0.22860952432362847;
    msg.rpm_max = 0.8461210834317684;
    msg.rpm_rate_max = 0.28563291193924645;

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
    msg.setTimeStamp(0.015532891594237874);
    msg.setSource(29874U);
    msg.setSourceEntity(16U);
    msg.setDestination(16889U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.4909239262365035);
    msg.setSource(9180U);
    msg.setSourceEntity(140U);
    msg.setDestination(51398U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.21388387456931823);
    msg.setSource(14229U);
    msg.setSourceEntity(216U);
    msg.setDestination(55103U);
    msg.setDestinationEntity(3U);
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 231U;
    tmp_msg_0.file.assign("GTOBMHZFULXKFAEOGSEYAPJUELVXRYJEGSRADAJUJYXTZDPLFBVZLYGRDBSTSPPICOWLQMIKTTZNXMCJHKQSWKOADAZHFMWN");
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
    msg.setTimeStamp(0.5047310997235993);
    msg.setSource(1173U);
    msg.setSourceEntity(243U);
    msg.setDestination(51450U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.43759928402905535;
    msg.lon = 0.9414238146910735;
    msg.height = 0.5261440309307962;
    msg.x = 0.23103509074469009;
    msg.y = 0.11380208050832374;
    msg.z = 0.1742951053942613;
    msg.phi = 0.6974887964339253;
    msg.theta = 0.9529329159235365;
    msg.psi = 0.6906097971534716;
    msg.u = 0.7986672259869192;
    msg.v = 0.4758477309433058;
    msg.w = 0.500380034950127;
    msg.p = 0.31627722985422113;
    msg.q = 0.9986954464264498;
    msg.r = 0.7018534747837195;
    msg.svx = 0.44642172388508927;
    msg.svy = 0.16402917810594397;
    msg.svz = 0.6749856371301733;

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
    msg.setTimeStamp(0.13875159306083196);
    msg.setSource(4942U);
    msg.setSourceEntity(236U);
    msg.setDestination(63544U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.5311046067980866;
    msg.lon = 0.22271815489289915;
    msg.height = 0.2557351969466507;
    msg.x = 0.7454008359464886;
    msg.y = 0.07330438634636094;
    msg.z = 0.13716585028852013;
    msg.phi = 0.5810570220326154;
    msg.theta = 0.43705965086551024;
    msg.psi = 0.43785444321272937;
    msg.u = 0.6246656310620365;
    msg.v = 0.7372698489634842;
    msg.w = 0.3506604846101532;
    msg.p = 0.2698670073308067;
    msg.q = 0.03370509493335905;
    msg.r = 0.2382253303706171;
    msg.svx = 0.8298750479143244;
    msg.svy = 0.5936203841275479;
    msg.svz = 0.840725063230677;

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
    msg.setTimeStamp(0.9781245203394416);
    msg.setSource(26663U);
    msg.setSourceEntity(177U);
    msg.setDestination(36527U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.7565392632545267;
    msg.lon = 0.6977608114360689;
    msg.height = 0.1068707312882432;
    msg.x = 0.679192631172185;
    msg.y = 0.7905885364043507;
    msg.z = 0.09196068972921134;
    msg.phi = 0.4533584694323902;
    msg.theta = 0.49908010967749317;
    msg.psi = 0.1073323388089068;
    msg.u = 0.06779962364149028;
    msg.v = 0.4175093819806577;
    msg.w = 0.7935207768119196;
    msg.p = 0.9962166502180578;
    msg.q = 0.11437872804231497;
    msg.r = 0.6336255909733817;
    msg.svx = 0.09130039288281744;
    msg.svy = 0.13395506741485874;
    msg.svz = 0.7489187151687224;

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
    msg.setTimeStamp(0.5418739353210652);
    msg.setSource(318U);
    msg.setSourceEntity(64U);
    msg.setDestination(4365U);
    msg.setDestinationEntity(193U);
    msg.op = 200U;
    msg.entities.assign("XUNPZQPQHKYQCEXMOUCOKHDEDSKPVXRGVPAQQDPMMAINSULGWQOOWYJWZDBIERFOSDDDFOVFVKQQSMXGLUYQDCNUJWBZPSGZSFUKKGZTERXFYOTIIUUIALMICERSNLFGBCGNKWBNSTURNJHMICDOFRXTALKVYAXJSWWBBRFTCTTZLSQUEBJGYAJIRHEORZHIHHBIJAYYMG");

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
    msg.setTimeStamp(0.27662153651137156);
    msg.setSource(52005U);
    msg.setSourceEntity(34U);
    msg.setDestination(12550U);
    msg.setDestinationEntity(105U);
    msg.op = 8U;
    msg.entities.assign("WFBSFRCGJWAMQTGYEVYZMVRCVMBRDSFXMLTBZFYSSJDEBTDNNUFDEPXKZXZKZYDPEZNHEUIRLMMACHGRRPLIQINHAQLCVNBXWLMTOQKGOPCRVDQFXHCQKHSJYWLAIPDJEJOHAQTSUGAUTSQGMHAKTZSRSGZJHKVAEJPQFZVOOPYJXPNJELBCDOEZCLBYLRGIMTHWVRNXHWVTBAYUOBUUFPOCKDQUTINKINFWIXKSLGDVYGBUYAWWEWIO");

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
    msg.setTimeStamp(0.30749865648536856);
    msg.setSource(25291U);
    msg.setSourceEntity(149U);
    msg.setDestination(38200U);
    msg.setDestinationEntity(31U);
    msg.op = 153U;
    msg.entities.assign("TFUMCXUEWFLHMDGENHKZSRLKDTDBRASSFADUSMBOZMLOVXTRJEUKPSSWXQRZPWFQNYSDKUGQZQSBUVCYRRVWYIIVCTDUWCATIXSYPNJKVXEDFKZJLJVGZWBWHVNYAOBTUJJIBPBRQYULPIDCGPWACRLCTXUEBKHEZVFLKXLNXJG");

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
    msg.setTimeStamp(0.5369249964697513);
    msg.setSource(8943U);
    msg.setSourceEntity(1U);
    msg.setDestination(15294U);
    msg.setDestinationEntity(133U);
    msg.type = 215U;
    msg.speed = 58198U;
    const char tmp_msg_0[] = {-111, -124, -1, 42, 58, -16, -70, -34, 60, -114, -58, 69, -123, 82, -10, -126, -84, -8, -48, 69, 94, -123, -83, 59, -108, 78, -4, 63, -91, -56, 91, 10, -7, -28, 120, -80, 36, -13, -28, -47, 39, 56, 67, 81, -4, 71, -49, 114, -56, -44, -9, -105, -45, 11, -26, -20, 82, -76, 116, -110, 118, -121, -34, 30, 45, -113, -77, -87, 126, 17, -98, -15, -53, 68, 89, -93, 73, -49, 91, -101, 89, -111, 69, 90, 29, -1, 41, 5, 28, 3, 57, 43, 64, -86, 91, -61, -85, 112, -36, 37, 10, 35, 55, -5, 106, -64, 109, -126, 24, 55, 87, -83, 71, -8, -2, 105, -125, 57, 35, -81, -42, -4, -26, 120, -21, 45, -26, -52, -30, -65, 21, -121, 16, 77, -33, -97, -11, 40, 56, -83, 79, 67, -34, 22, -52, 19, -85, -100, 7, -64, -3, 35, 42, 95, 13, 113, -31, 115, -77, 9, 121, 26, -68, 100, -56, -71, 59, -20, 118, 103, 15, 35, 53, -99, -104, -74, 95, 14, 25, 85, -76, 59, -112, -28, 56, -19, -61};
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
    msg.setTimeStamp(0.3938710795311263);
    msg.setSource(40541U);
    msg.setSourceEntity(69U);
    msg.setDestination(24660U);
    msg.setDestinationEntity(174U);
    msg.type = 150U;
    msg.speed = 2453U;
    const char tmp_msg_0[] = {70, -46, -113, -110, -40, 69, -43, -57, 33, 87, 120, -85, -32, -51, 70, -73};
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
    msg.setTimeStamp(0.5748392079055956);
    msg.setSource(60060U);
    msg.setSourceEntity(120U);
    msg.setDestination(44549U);
    msg.setDestinationEntity(145U);
    msg.type = 232U;
    msg.speed = 1277U;
    const char tmp_msg_0[] = {122, -55, 101, 25, 124, -7, -105, -20, -121, -69, 113, -116, 43, 48, -52, 116, -46, 93, 57, 120, 40, 72, 116, -50, 35, 39, 8, 126, 11, 22, 23, 89, -68, -120, 30, -72, 73, 43, 89};
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
    msg.setTimeStamp(0.7582757016378365);
    msg.setSource(55941U);
    msg.setSourceEntity(205U);
    msg.setDestination(32650U);
    msg.setDestinationEntity(157U);
    msg.op = 91U;
    msg.tas2acc_pgain = 0.12090778466043961;
    msg.bank2p_pgain = 0.31983274380018145;

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
    msg.setTimeStamp(0.6487549336648193);
    msg.setSource(2431U);
    msg.setSourceEntity(118U);
    msg.setDestination(9398U);
    msg.setDestinationEntity(132U);
    msg.op = 134U;
    msg.tas2acc_pgain = 0.1525297657680763;
    msg.bank2p_pgain = 0.843552135479767;

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
    msg.setTimeStamp(0.05825272846563012);
    msg.setSource(45164U);
    msg.setSourceEntity(188U);
    msg.setDestination(30084U);
    msg.setDestinationEntity(19U);
    msg.op = 37U;
    msg.tas2acc_pgain = 0.7811873955881845;
    msg.bank2p_pgain = 0.7810818211315844;

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
    msg.setTimeStamp(0.8103416938916946);
    msg.setSource(48235U);
    msg.setSourceEntity(248U);
    msg.setDestination(19153U);
    msg.setDestinationEntity(99U);
    msg.available = 2992582125U;
    msg.value = 2U;

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
    msg.setTimeStamp(0.0007815737422430802);
    msg.setSource(37890U);
    msg.setSourceEntity(64U);
    msg.setDestination(11058U);
    msg.setDestinationEntity(109U);
    msg.available = 1165359659U;
    msg.value = 43U;

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
    msg.setTimeStamp(0.14039326187021706);
    msg.setSource(44300U);
    msg.setSourceEntity(232U);
    msg.setDestination(20654U);
    msg.setDestinationEntity(34U);
    msg.available = 1703240547U;
    msg.value = 98U;

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
    msg.setTimeStamp(0.3099828842409632);
    msg.setSource(14422U);
    msg.setSourceEntity(215U);
    msg.setDestination(62341U);
    msg.setDestinationEntity(46U);
    msg.op = 157U;
    msg.snapshot.assign("LKFTIGCBGEZQXNTALCSOIJXHXZUYZTHDYBGRENCNZCDNSAYYVXTNCYHNNMFXTGR");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("DPNGUYLSDMZSYBKSASMAGVBWZWXZXYZLOTZLYMVGOUJHFCTVLEWKWAFBOYBMZVMFZIFSMCXNZTMDFKHHEQAKRDFTL");
    tmp_msg_0.timeout = 48928U;
    tmp_msg_0.contents.assign("OEEIDFLIKAVGUWWQJQTJYLMBEKMUWVRPIDMBGOOEFYFZYNAYTAQH");
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
    msg.setTimeStamp(0.07818585693042424);
    msg.setSource(59558U);
    msg.setSourceEntity(174U);
    msg.setDestination(24765U);
    msg.setDestinationEntity(100U);
    msg.op = 170U;
    msg.snapshot.assign("HQLXDXMOPWBGLNWL");
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.11257165888814968;
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
    msg.setTimeStamp(0.7897557373070114);
    msg.setSource(2780U);
    msg.setSourceEntity(190U);
    msg.setDestination(15423U);
    msg.setDestinationEntity(17U);
    msg.op = 169U;
    msg.snapshot.assign("PLFGTLWQNMNXWVGASVMUUZQDAEEOSGAEFOIJVZAMEUHJRWRALAFDNBPKWFDLDDIJWQBMNDYYQTEXJRMBHBYTIXLKM");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("MMSLWPYXNNWIGOPRBDGUDGHSGAWLLYATRUUOLCMNBDAQBJOQGQVOKDCISZYRGMLESCYJRTHMQYKFJSLFHYTOKWXTPLJCENMCQEDBJYOZVUBQJJNZIJWTOPA");
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
    msg.setTimeStamp(0.7121728895755793);
    msg.setSource(21575U);
    msg.setSourceEntity(172U);
    msg.setDestination(9505U);
    msg.setDestinationEntity(163U);
    msg.op = 24U;
    msg.name.assign("GITVYRLPIARKTDFMHLXUYBRINEAJQYPJHDPFHAPALZUOLNZEWNLXTQGVTVFYNVQSKYIROWDBQDEXNSWHHRMXKAZPRIZRTLMAEMGCBWOUNCGUWHBWVWVTFFCPLSKBPCCYDSRZQKXFPOOOZIXOFMEUCUUQSCRDAAFZOMNLPKJDQEZQI");

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
    msg.setTimeStamp(0.7167101413485611);
    msg.setSource(30740U);
    msg.setSourceEntity(160U);
    msg.setDestination(32144U);
    msg.setDestinationEntity(91U);
    msg.op = 41U;
    msg.name.assign("MEIOBMVFAZSSRSWCANDKMPX");

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
    msg.setTimeStamp(0.6033886215954238);
    msg.setSource(4983U);
    msg.setSourceEntity(80U);
    msg.setDestination(5897U);
    msg.setDestinationEntity(37U);
    msg.op = 250U;
    msg.name.assign("ZREKAGDBUMOVEYCUGFHGZXQIDRSFEZEYDFXMLYGMNNUPJDOHCZFSHIZTYSSRW");

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
    msg.setTimeStamp(0.4826115616877089);
    msg.setSource(34054U);
    msg.setSourceEntity(86U);
    msg.setDestination(59752U);
    msg.setDestinationEntity(94U);
    msg.type = 110U;
    msg.htime = 0.1358846904797697;
    msg.context.assign("MTEBOQKHJCJINWVYZQWLJXLBWGCIWFKSMEGJDSHCQMAKFGDTOAZIYXIBCONKHAHUCDBEATXAPQQOFLFSIPFBNFRHDCLUAEJIDUYTKEZTSAJDSRIYIXRKVZBRUMBEWZXTISYAF");
    msg.text.assign("JUYDGEZKZTWXSEADRYSNLCKMXAVMZZXHLARTUPPJMNJPKGXOYRIWBEZXLPNRHVHWQXIMDVIUKLIMWPFSKGVCHHTYXBKAJHRQIOFWABNMEESLJXGPZWN");

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
    msg.setTimeStamp(0.0011214327829104365);
    msg.setSource(21252U);
    msg.setSourceEntity(155U);
    msg.setDestination(38747U);
    msg.setDestinationEntity(178U);
    msg.type = 153U;
    msg.htime = 0.6663301488795343;
    msg.context.assign("PHCBMDUEMTTV");
    msg.text.assign("QQVMNDOZXCCGFYOXAIVNPTZKKWLVUNDSFXHKISIBGADKRDHZWWKQWPBVOPTZOKCAPT");

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
    msg.setTimeStamp(0.6038598750506939);
    msg.setSource(12326U);
    msg.setSourceEntity(141U);
    msg.setDestination(11169U);
    msg.setDestinationEntity(128U);
    msg.type = 55U;
    msg.htime = 0.33293067032543544;
    msg.context.assign("WCDJAQWDOKEVPFCGYOUGJUTZBXVXVJOQUFBVFDBLYACHEZYLLSDGIHMCVTLARTTNBIPOAOBPGQSLKKZOGBPSQGVWWHDRXMSDPNRKMNZNISTNRMMIUGDJJFZNFXFTWMRASTVEHTABBKZKCPRRXTZMEAVHWWRPJVXQOOCGYKFXPGMRIEYMS");
    msg.text.assign("HPSPMJBDFGYHAZLRAFYGWGWUWQNYLSOEVRMOLGHONBTLAZAIXPTISJQEERKSSZNXGTKWQXUVYCWKPORPMBVPQGEZWYKJWAREJFQGONDDFCLCNGTOKIDASMZDJZUBWVPMCNLACCRRFJIJFRUIHJQATPHJOSIDKVDNKQQIHYZXVZDVGUUAUYNVDMVIHENPRSBGEEMHTYAORCXFFXBFXNWTLBCDIETHQJCTKXLUFLZKUQSYOMLW");

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
    msg.setTimeStamp(0.36741314883649645);
    msg.setSource(43841U);
    msg.setSourceEntity(144U);
    msg.setDestination(28724U);
    msg.setDestinationEntity(26U);
    msg.command = 241U;
    msg.htime = 0.49083214299688116;

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
    msg.setTimeStamp(0.03238101200679677);
    msg.setSource(28960U);
    msg.setSourceEntity(47U);
    msg.setDestination(23560U);
    msg.setDestinationEntity(222U);
    msg.command = 180U;
    msg.htime = 0.9364919065002324;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 137U;
    tmp_msg_0.htime = 0.10515353204365274;
    tmp_msg_0.context.assign("QGITEFTYSVLYYPJEHWRCGLHRIDOLHVORXREFEFDTVOOQBNZRMQTMPJUZUKRPICOMIRRZHBKPWNNLBHGAOXGHLCDBZZQEFJIDVIGNSKCBQXUVBJFMSAGDEYXOADAQ");
    tmp_msg_0.text.assign("EZHLLNFCWVHBYMLJAGUVVXCWTFJORLZKFZOVODXYUUABISLUWRLWGNDMCIZHPDTMMLHKVMLQFJKRVYQCGKWIDXUBFONKXMDAUTJMDJOAGBUNCYHQISIWZFSFNNIQFSBGNKNRPGELIATDQKZYSLEJUAPMTTYTOJTSBVZEBIEOKQBVJNRAX");
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
    msg.setTimeStamp(0.3269440746499146);
    msg.setSource(16759U);
    msg.setSourceEntity(5U);
    msg.setDestination(51412U);
    msg.setDestinationEntity(241U);
    msg.command = 229U;
    msg.htime = 0.4627369745044433;

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
    msg.setTimeStamp(0.4045050571943043);
    msg.setSource(12620U);
    msg.setSourceEntity(145U);
    msg.setDestination(23122U);
    msg.setDestinationEntity(82U);
    msg.op = 40U;
    msg.file.assign("GLLYXZPIZTVXSJRMJDXLNPAOPJCVV");

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
    msg.setTimeStamp(0.9349210492214689);
    msg.setSource(943U);
    msg.setSourceEntity(67U);
    msg.setDestination(25671U);
    msg.setDestinationEntity(152U);
    msg.op = 191U;
    msg.file.assign("OSRNUDOLKOHSBYZWXWMDKTOSRMEORJZAOVRLCUKMFTBZLNMAEPYWLQKXCMYGVTKTNEWCJBZLPARVBNBZFLATANEGSZESVIUTHKYPEDZJQWJQUQCBCKGCYHSXGTIAPNROZDVGCUJMTXXIJMBYUDJWTWKGBNCKFSIKQIMTPDQVEZEXJFDWEQYJFFHIBRXULCOHVPEALUJVVGXDAA");

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
    msg.setTimeStamp(0.5826031269005831);
    msg.setSource(9284U);
    msg.setSourceEntity(212U);
    msg.setDestination(54553U);
    msg.setDestinationEntity(177U);
    msg.op = 60U;
    msg.file.assign("JTYHDWTHJOANBCVDJMJSBAVKLSLFCTSQRISYAZPJDKIXKZIXWAGQANXTTHRUULPABZEPNNJZNADOJQQFHBTNHPRZFORWOAQXIUASVYECFYCEKGYVGXJTVFKTSUUSLCNLTGMQDZKOQWRNECUYTYLFQCMEELGPVJFWMKLCAHFEOPJEPOQWYVGMWRYGDPUHGZBPLNKOFMKWXIXIUWCBDVULIMDCHZEXMSDMEHFMUIOZYNVGSQBKXDHRPORSRIBZWV");

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
    msg.setTimeStamp(0.9347036595406606);
    msg.setSource(5268U);
    msg.setSourceEntity(222U);
    msg.setDestination(14309U);
    msg.setDestinationEntity(49U);
    msg.op = 201U;
    msg.clock = 0.6019357291847598;
    msg.tz = -117;

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
    msg.setTimeStamp(0.9822048343809162);
    msg.setSource(37677U);
    msg.setSourceEntity(17U);
    msg.setDestination(43384U);
    msg.setDestinationEntity(94U);
    msg.op = 135U;
    msg.clock = 0.5388048253908454;
    msg.tz = 19;

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
    msg.setTimeStamp(0.5440518950893151);
    msg.setSource(43366U);
    msg.setSourceEntity(150U);
    msg.setDestination(45296U);
    msg.setDestinationEntity(251U);
    msg.op = 129U;
    msg.clock = 0.8516354061086671;
    msg.tz = -90;

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
    msg.setTimeStamp(0.9911476626526946);
    msg.setSource(58058U);
    msg.setSourceEntity(17U);
    msg.setDestination(62646U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.06512313407409775);
    msg.setSource(32591U);
    msg.setSourceEntity(169U);
    msg.setDestination(21072U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.8492307216657206);
    msg.setSource(12837U);
    msg.setSourceEntity(227U);
    msg.setDestination(16568U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.6515993484854382);
    msg.setSource(8909U);
    msg.setSourceEntity(85U);
    msg.setDestination(50474U);
    msg.setDestinationEntity(26U);
    msg.sys_name.assign("OEOUHMEGCXCRKDMAJASLGTDOLGUGLODKWHKZKYHXEYVLBJQUVLTCRASSTCDICNKUIDYINQGOPQRTNZEQOFMOFYMXLWPSZMIINVIPWJWKJRWQQBJFAINGYATXWVRQVBJWEESOTNVPZBHNNCTUFEMCFPHXIPYAQJHVNZMWTCSXPIYZYQGKSNVBARHHBAUUTZLJXBUJKDCSWRGPIRGSXVFPXLLDZF");
    msg.sys_type = 215U;
    msg.owner = 35478U;
    msg.lat = 0.2097443578334368;
    msg.lon = 0.7765221837123663;
    msg.height = 0.5270781416310801;
    msg.services.assign("SMMQYISMGYPTNXYSVJRSPWUWLAMHUOKAAPQCDBDISJQIEZXITOTJSXACHVLADZZGCMZCHONGVDRJFCYHNPJIEHABZQMDNKDPQZREGYCYBWGXQUOMAWUHKFRALNWVMXXTFYAUJBFEKTVSPGQTGCGORNXFVEXNIDTTBERWBHTEKHIVXCLSDOYLZDWUEFGWQLBBXIMCUPFHNPKOHPZJRLMYFSBOFRJKKEALQEGZUNWIRIBWLDOOVSQRJZUK");

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
    msg.setTimeStamp(0.5971730484094471);
    msg.setSource(28870U);
    msg.setSourceEntity(127U);
    msg.setDestination(19642U);
    msg.setDestinationEntity(117U);
    msg.sys_name.assign("DLMVSGFQKRPHBXTNRKDGGUAIQCCMXFAOSJGLMPMCVIRHDXWTCPOYCFBHCSVOQYRUNUPDHMKUUKBJSUYZWTZSPKKIWZPWORIXCSNOVNGVSFDURGLHEDTVJIZEDAZWDBJL");
    msg.sys_type = 54U;
    msg.owner = 37722U;
    msg.lat = 0.32474765315376053;
    msg.lon = 0.6749607483681545;
    msg.height = 0.5613524033661744;
    msg.services.assign("JQJEVJGYYOPOOMAEMSBKARXXLBNTPSWGPRNZRTMHIXINROWBZHNGCLDFCTGDRYRDFBUWDQZUWNSUWHSYWAEPNGKBGEXBEWLFHZTYIEWKUMYVSPJCNMCVTGHVFAAKRJTDVUXMCFCQXEALHLGSTPYSYFFTDLBCLIPAKQZAOXRZLCUBIZAPMDOIHVJKIZQQKLDARIT");

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
    msg.setTimeStamp(0.19495357204337227);
    msg.setSource(23335U);
    msg.setSourceEntity(33U);
    msg.setDestination(14139U);
    msg.setDestinationEntity(112U);
    msg.sys_name.assign("YOJQZMOZDHJMDZONTQVYKTGPUATQNYIVJZFUUPIBXUFKHWDZBTIEZKYYNVECGCLGJUBOTLKWREHQXNANBQFIWNWPMXBLFMIMERPYAFPTIILSGUMEKFFVRZSNDZCRSKXR");
    msg.sys_type = 209U;
    msg.owner = 48779U;
    msg.lat = 0.16799472060475606;
    msg.lon = 0.9166317855500326;
    msg.height = 0.6877385101673361;
    msg.services.assign("VPDNOEAZAMJHOILDKSSVSGTUSERBWDKRCDPUGQCGEXQLPKFOTZEKLQGRTWIACVBEMZZLYMYRODQHYKCWNPBYIHTFKUABWBMJFWQOJUUNPDNGDNOBGZXUTVAIKINJMDZHWFVSRZBNEIPLFZAQACMWQUPYKCUMYXOFRXEJ");

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
    msg.setTimeStamp(0.5426318428833343);
    msg.setSource(45244U);
    msg.setSourceEntity(231U);
    msg.setDestination(36896U);
    msg.setDestinationEntity(235U);
    msg.service.assign("VMXDUMRAOJKKFVHTHIVYHGKSQIBHTMPDCLQXIRATWYIGWOTNHZCLGNXCZGSZRYPHJVLWUIKOZKTCPPOESFMMZMVYLZONFOHCBJPNSEJZBASZATDNQCYRSXWSQBKWGEIGVDLPKQDRFHM");
    msg.service_type = 190U;

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
    msg.setTimeStamp(0.15635087736709785);
    msg.setSource(60343U);
    msg.setSourceEntity(10U);
    msg.setDestination(22208U);
    msg.setDestinationEntity(211U);
    msg.service.assign("KAZYQPPKOAKLFQTUBPABCPLRCEFXQUFEZTTGQDYPOUBRIGVEHHPMZVKNOTIRBBBFMHEGTXXLEQVVYSHOLERKJHOUWAZWRPTYOTJGUPDWZVWDQYHIVBJAGJKKDMBLHLGDVIXLRZSFZIBHQGQMGNSNWCONKRLRRIUAGHWNIDXHDQLXXFNPJMKIKCCXVYNSMSCCZAYEIZNVJSUZPAFSYNSWCYOJLSBJAWMOMFDJTWSD");
    msg.service_type = 124U;

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
    msg.setTimeStamp(0.6137397428561143);
    msg.setSource(52699U);
    msg.setSourceEntity(236U);
    msg.setDestination(48869U);
    msg.setDestinationEntity(35U);
    msg.service.assign("JEHHKMAWVOJRNXBAIPICCREXACFBBNICWXPHMDWHNQSKLJGABEPZKMGQMQVITDQKMZRZQWYWBJJOOGFRCZOFTLXKSUOLSKTLYUGQEWLUUAPQSBTEOROPEVLVONXGHGJYLPCICTSZ");
    msg.service_type = 29U;

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
    msg.setTimeStamp(0.9746195775224169);
    msg.setSource(25424U);
    msg.setSourceEntity(198U);
    msg.setDestination(46490U);
    msg.setDestinationEntity(70U);
    msg.value = 0.17204855592181856;

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
    msg.setTimeStamp(0.42028663506020103);
    msg.setSource(45103U);
    msg.setSourceEntity(12U);
    msg.setDestination(55017U);
    msg.setDestinationEntity(238U);
    msg.value = 0.2305594059824294;

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
    msg.setTimeStamp(0.4427299210176451);
    msg.setSource(34416U);
    msg.setSourceEntity(210U);
    msg.setDestination(6521U);
    msg.setDestinationEntity(229U);
    msg.value = 0.7986641502909733;

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
    msg.setTimeStamp(0.25753979163282936);
    msg.setSource(11004U);
    msg.setSourceEntity(61U);
    msg.setDestination(57271U);
    msg.setDestinationEntity(40U);
    msg.value = 0.9610977002153884;

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
    msg.setTimeStamp(0.4677988112038066);
    msg.setSource(42273U);
    msg.setSourceEntity(221U);
    msg.setDestination(34446U);
    msg.setDestinationEntity(167U);
    msg.value = 0.2707314291319167;

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
    msg.setTimeStamp(0.5014492826833331);
    msg.setSource(41329U);
    msg.setSourceEntity(146U);
    msg.setDestination(61806U);
    msg.setDestinationEntity(247U);
    msg.value = 0.5259081777796412;

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
    msg.setTimeStamp(0.5798169395875895);
    msg.setSource(2344U);
    msg.setSourceEntity(154U);
    msg.setDestination(1195U);
    msg.setDestinationEntity(91U);
    msg.value = 0.783353225713341;

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
    msg.setTimeStamp(0.2053166099715551);
    msg.setSource(23247U);
    msg.setSourceEntity(6U);
    msg.setDestination(31515U);
    msg.setDestinationEntity(49U);
    msg.value = 0.4747738944216161;

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
    msg.setTimeStamp(0.7049870262923198);
    msg.setSource(46155U);
    msg.setSourceEntity(111U);
    msg.setDestination(53177U);
    msg.setDestinationEntity(7U);
    msg.value = 0.1094467987481682;

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
    msg.setTimeStamp(0.06064084475727116);
    msg.setSource(49987U);
    msg.setSourceEntity(211U);
    msg.setDestination(58092U);
    msg.setDestinationEntity(25U);
    msg.number.assign("GWRPSTNCZOLPXHQOCMYNTBZXKOSHYUWQNSDCZDMYMCAAMVBHKUQLNPIIOFHDVBMPXFCACBLJTAYJOUGXBUIWVWYHKRNLWKEQAAXNJWSXFERMJGRGSTUNHLFMMODETQIEWAITZFCQKELYZYHEFXUWJKSYXOIIDGVNLMUPPKLRDHGDBNVLJAQTKWKQGFCIXRRDVJB");
    msg.timeout = 24854U;
    msg.contents.assign("USMAZTNPVRAGSNPKRLBQBUBJFTWBATLHFZTQHPOSYFIBWPZCBQJPNNIOXYDGVGLXBEDKZLWFUIFKCGRMFMJYWRSCQWUOKNAQTOMMSRGUHVIVHHUENVWGMDOGCOHUDUOINWVKMYESQOVZVATLDFVQEJPBTHACYCQSGLKTSHIDXQBJNYPZ");

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
    msg.setTimeStamp(0.37758697417238707);
    msg.setSource(28345U);
    msg.setSourceEntity(124U);
    msg.setDestination(50815U);
    msg.setDestinationEntity(32U);
    msg.number.assign("BAMUUFSMUVCEX");
    msg.timeout = 33001U;
    msg.contents.assign("EFWUWUDTUKJFTSTBNILECHPRIMRGSWGGLPXQCXYLQUXHGKZFOMUZWMMGKPJCCPVEWHQKEYOIQABGUKRBICIMNHAEDVPHSWDOAKVAVEOMGKAPKZNRQCYMQULOVYNJORLFRLVCJQIFJANYDXFFDGTDJJXJCW");

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
    msg.setTimeStamp(0.17309128013873332);
    msg.setSource(60695U);
    msg.setSourceEntity(40U);
    msg.setDestination(13531U);
    msg.setDestinationEntity(128U);
    msg.number.assign("BEWDZGIOMMKPFAVQRDEUVVCMTXALGIGRHNICTGQDXJLSBOJMULZVPLYFIKBHQTUWGNUXCZMFOTLW");
    msg.timeout = 47398U;
    msg.contents.assign("YEJFKQNHAXTMGXEMSVAEMQYYFIFPFAESDKXPKCHBJSH");

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
    msg.setTimeStamp(0.5114898861532344);
    msg.setSource(17968U);
    msg.setSourceEntity(163U);
    msg.setDestination(36794U);
    msg.setDestinationEntity(40U);
    msg.seq = 2387193078U;
    msg.destination.assign("IDCLBSFCYYLTWZJRVVLCETCUJDXQYLLTBTIKBLVZUFCVWOOKVAXJXCMIQPSKOYWJEKXEAXMZVMYHLPVAWYGTPGXAXAMZHHJZDSIPJMRUBIGTNHNFWBYJUUDBCODIFEEBFHEZPUOPTSHZGFWPMOANKWMIGPQSWRLORFAYODCCQRSSUBEDGZQGLZEGMHGQKSNNYKJJDFEKSLRJSXENUVOHVQTTRWRPDZFNFUT");
    msg.timeout = 24149U;
    const char tmp_msg_0[] = {14, -7, -19, -17, -119, -81, -97, -20, 39, 36, 103, -55, 20, 119, 123, -2, -109, 7, -15, -36, 4, -95, -114, 46, -15, 116, -36, 78, -46, -67, -56, 74, -49, 107, -35, 77, 41, 124, -90, -29, -8, -114, -121, -126, -88, -99, 60, 49, -99, 49, 82, -102, 45, -20, 51, -1, -82, -49, 67, -124, 68, -119, -83, -85, 32, 75, 122, 80, -67, -20, 119, 5, -89, 10, -14, 116, -68, -120, -33, 17, 6, -47, 29, -6, 40, -113, 71, -24, 126, -66, -83, 73, -96, -51, 24, -82, -72, -40, -10, 70, 108, 101, 60, 122, -61, 6, -49, 20, 33, -75, 2, -100, -85, -14, 52, -80, 14, -78, -32, -24, -62, 53, -68, 77, 100, -52, -5, -71, 50, -47, -95, 49, -118, -40, 39, 98, 66, 54, 9, -33, 32, -22, -18, 113, -37, 87, 1, -48, 123, 1, 17, 114, -8, 52};
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
    msg.setTimeStamp(0.257313128446235);
    msg.setSource(34243U);
    msg.setSourceEntity(206U);
    msg.setDestination(29040U);
    msg.setDestinationEntity(138U);
    msg.seq = 3939967764U;
    msg.destination.assign("FRONNLSMIDMZBAKEDJLVGRSEGYOHXAWOVFVFPTSQYGYMAVIXLSYLCMPNJUSGUDTRLQKYZJWGXIBMSFJQBOBVHTBZILUTIPYQCXRRMQECYWAIOPJQPVVDUUUEVBOZFUCZPXPFBZCRULGHPDWJYGIEZNTKCWASUCXZBNOXXJXHYTEJUFTDLYKCNKAHKGINAHPFSNWVRIHDWVJAQTEWFCCQNE");
    msg.timeout = 9169U;
    const char tmp_msg_0[] = {-117, 80, 61, -57, 41, 78, 123, -93, -119, 76, -95, 31, 95, -29, -27, -16, 14, -91, 63, 71, -61, -43, -1, 9, 1, -111, 80, 28, 68, 72, 57, -37, 95, 20, 59, -87, -109, 63, -111, 76, -125, 115, 31, 122};
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
    msg.setTimeStamp(0.3033195180868423);
    msg.setSource(57126U);
    msg.setSourceEntity(117U);
    msg.setDestination(751U);
    msg.setDestinationEntity(60U);
    msg.seq = 1499758704U;
    msg.destination.assign("WTZODQBLLQPSHHQUHXAVYVBWWNSEPMBEFLIGUQFJICDRIMFAZMXKUSGWAMGKMZOTFLZOAJYKIYQSTDNOSGIEKTMXXKNSHKUMRRGTXCJDNTVCNPVJWVUUULLUOYPPTQCHYIBTTXRVOIZLZVTEHZFKJBYLAFEEPFJIEGGIKOLQPIDNEBBDQMQWARWDKNFWJOU");
    msg.timeout = 54070U;
    const char tmp_msg_0[] = {-66, -91, -53, 113, -50, 44, 108, -108, 48, 75, -96, -123, -45, -21, -104, 5, -3, -121, 5, 83, 71, -39, -13, 13, -67, -95, 49, -115, -86, -47, 100, 23, 4, -64, -58, -30, 55, -77, 26, 20, -110, -9, 114, 20, 98, 96, -73, 23, 61, -111};
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
    msg.setTimeStamp(0.032415111185609136);
    msg.setSource(3653U);
    msg.setSourceEntity(207U);
    msg.setDestination(24327U);
    msg.setDestinationEntity(175U);
    msg.source.assign("QCVOJVKKBAUECGFQNTXQTWKIMMNQZHCEXZSZA");
    const char tmp_msg_0[] = {-31, -18, -38, 85, -63, -84, 79, 22, 22, -7, -73, -34, -51, 2, -39, 125, -17, -103, 53, 51, 44, -54, 118, 47, -47, -48, -30, -35, -95, -120, 55, 120, 54, 107, 107, -120, -90, 74, -122, -85, -22, -63, 100, 95, 90, -12, -46, 26, 92, 72, -128, -92, -15, -2, -44, 21, 5, -57, -70, 42, -114, -94, -5, -76, 106, -78, -114, 24, -37, 36, -36, -120, -12, -11, 18, 76, 19, -53, -3, -33, 74, -38, 77, -95, -47, -38, 1, 56, -25, 29, -52, 106, 45, -66, -12, 117, 109, -123, -81, 85, -126, 22, 81, 63, -16, 118, 109, -27, -79, -112, -111, 77, 56, 9, -23, 33, 118, -8, -125, 21, 55, 3, 32, -51, 48, 74, -123, -63, 65, 95, 57, 124, -105, 56, -17, 58, -50, 29, 91, 75, -80, -64, 39, 64, 84, 5, -122, 91, -119, 103, 3, -46, -90, -119, 14, 116, 42, 10, -22, 3, -33, -2, 52, -5, 61, 97, -42, 58, 51, -118, 90, 68, 89, -34, 101, -37, 22, 106, -8, -23, 114, -84, 21, 77, -123, -115, -56, 1, 23, -15, -40, -17, 91, 9, 19, -101, 52, 16, -116, -36, -37, 5, -35, 38, 71, -71, 60, -46};
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
    msg.setTimeStamp(0.8293157510993783);
    msg.setSource(57153U);
    msg.setSourceEntity(118U);
    msg.setDestination(50587U);
    msg.setDestinationEntity(72U);
    msg.source.assign("DVEUFAUACZVMYHOEQYSTSJDMKHOBNLTINPCTLDXSSQMDVMOMGLTBYGWUYYNCEWZQDTGHINDYIHRKFKPCLWZGPVAQBORJCUCGPIDROWGZLKZJSRXJJRNKRQCHDVAT");
    const char tmp_msg_0[] = {90, -117, -82, 16, 24, -81, -86, -53, -27, -80, 6, 38, 87, -45, 31, 80, -42, 21, 66, -39, 77, -109, 53, 99, 110, 74, -123, -116, -18, 101, -12, -89, 115, -69, -104, -124, -11, -122, 34, -75, 5, -122, 73, 76, -53, -47, -92, -112, 62, -25, -22, -44, 81, -12, 38, -46, -25, -52, -20, -107, -36, -43, 38, 46, -41, -119, 95, 90, -43, -104, 83, 30, -9, -108, 7, 62, -78, 19, -92, -17, -63, 22, 104, 67, -120, -98, -63, 81, -123, -42, -73, 27, -39, -67, 59, 61, 92, 9, 9, -49, -70, -46, 84, 77, 8, -67, -93, 14, 39, 1, -48, 1, 68, -50, -4, 8, -71, 105, 78, 53, -24, 2, -89, -23, 116, -67, -65, 106, -29, -76, -45, 35, -30, -65, 86, 11, 6, 53, 72, -41, 8, 42, 7, -7, 25, 51, 16, -51, -112, -58, 100, 41, 109, -41, -65, -128, -106, 83, -121, 9, 38, -15, -111, -78, 109, 26, -43, -12, -119, -114, 44, -52, -52, -41, -77, 89, 17, 113, -65, -83, -13, 15, -127, 116, 44, 76, 95, 76, -55, 60, -112, -72, 17, 34, -3, -121, -98, -113, -12, 90, -47, -3, 107, 73, -120, -79, 76, 111, 2, -53, -46, -109, 41, -121, -29, -99, -118, -127, 71, -16, 114, 63, -98, -5, 38};
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
    msg.setTimeStamp(0.2915391745008079);
    msg.setSource(37772U);
    msg.setSourceEntity(177U);
    msg.setDestination(55606U);
    msg.setDestinationEntity(55U);
    msg.source.assign("XQFEDOXLMBUGXHUINMLENOIKITBLUYPZKSVZWMRGGLDEZGDBVQTPYOEYRPVQLDIETWBZORUQXZVEWSLDJWVIMUNSJXGZCOWFHMKYDSGKKYSQSASGMYVLQKKVYUABMMNZXJOXFNZHJCTHVUWFJHJOHJKSELRDJPEQNHWEDAPACKNTPFATGFRHIDNFCLFVQYQRCPOOOAITWYIAITRXJUBKPSAJUTQDYLGAWMCPCGRZBBNEMZPFCTXHRFC");
    const char tmp_msg_0[] = {125, -71, 41, 99, 113, 50, 123, 77, 102, 23, -39, 112, 69, -79, 87, 22, 64, 47, -26, -27, -122, 110, -60, -106, 30, 78, -20, 40, -88, 47, 102, 117, 62, 115, -104, -83, -46, 119, 121, -54, 27, 100, 123, -55, 17, 70, -21, -110, -46, -14, -112, 104, -64, 72, 65, 45, -87, -29, 56, -32, -29, 93, -107, -33, -70, 83, -63, 122, 82, -71, 64, -2, -118, 8, 36, -44, -80, -110, 63, 118, -90, -116, 115, -15, 12, -109, 87, 67, 39, 112, 102, 91, -93, 56, 104, 102, -119, -120};
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
    msg.setTimeStamp(0.5928353027457054);
    msg.setSource(5860U);
    msg.setSourceEntity(156U);
    msg.setDestination(11828U);
    msg.setDestinationEntity(195U);
    msg.seq = 1307588599U;
    msg.state = 91U;
    msg.error.assign("MNVWNJOMIBISFHMWSIWASJPJAORXVNAOAXJQMJOACCOMVTUTCHKKHLPCZARYQODAPJEIPGVQFITYYBLZIPGDDUOFKUFZLXGEPQZWCISZJEMZXQRGXGQJUW");

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
    msg.setTimeStamp(0.1271547083298885);
    msg.setSource(39591U);
    msg.setSourceEntity(52U);
    msg.setDestination(20328U);
    msg.setDestinationEntity(6U);
    msg.seq = 380033783U;
    msg.state = 238U;
    msg.error.assign("BIIAMFSZGOUWHTZUBYMKYPWVGFRDCHBCJGLIQRRESFSEMTCQQKEOJMLBAEMWJGKOOMGHPXIAPBKVMUQUQDANHZHSXEMGWVHEKJXHPLVDDVDOHICNNBGOKBZNTOZRNYCFKKKTUCCLUOSMLYWUVIRAAITXSJLWWEDXJDIQSYOPWRQVTUX");

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
    msg.setTimeStamp(0.9149749072001891);
    msg.setSource(51596U);
    msg.setSourceEntity(63U);
    msg.setDestination(29069U);
    msg.setDestinationEntity(189U);
    msg.seq = 247118124U;
    msg.state = 229U;
    msg.error.assign("JQGWRVVEHOPQXJGHNEYPXNEMLOBYXFKCSIZABAISFREXZJRSWOTKIAYZDONSGVZGMAEHEJTVLSRRQQFWBLSZHHWAKGFINMFHTGMMLUCCHUGEUIPTDJUIXRAIJGKTJEZZSKFQOFSOGOYNIYCXQLQQOQPCDJXLJNKPTYNCVTNLRCNDOUP");

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
    msg.setTimeStamp(0.09362654836641715);
    msg.setSource(4707U);
    msg.setSourceEntity(170U);
    msg.setDestination(1401U);
    msg.setDestinationEntity(248U);
    msg.origin.assign("RKATNFAMEIODNOAQHVWYKXTPQVEWTCZUKCJOFAZSNQZNFJSHHSHCMWTZIUNQQMJBADRQDEXMDIGKOVTLKBNCWZRSVEFLQXZDMUEBZBXJGTUEUSTTVQRFCEELHSYKRNWMHPCYTHWIIMMUYVSHJCNDXGXYDGRGRARFYPXYGLIBIPUGPZAVICRCBOFBPAONPQDJPPFLZOUPWJLMKWELXUAKOWDKGVYOIQFRAIBDSMULSWKXNOGBYJLHZFHLEYBTJG");
    msg.text.assign("DFVIWHHYMAMKSHRCUOGZUEBWDJWWKOQNSYHQGQLZLENBVPXVFUGUDZTYWSWCPFPATWSAYEPGPXJENIHBAEZLGDAZPNUUTSOOMFJSURETMXOIBGKJAHSIFZGYBJZLMLVMHNWARCFRBMQVQWLBRINAILYOVTTVIDUELLTVCKJDDJBCKNTEERVNXYMJRGFLPCHJWRFMYPH");

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
    msg.setTimeStamp(0.5431296064955133);
    msg.setSource(33987U);
    msg.setSourceEntity(53U);
    msg.setDestination(61608U);
    msg.setDestinationEntity(105U);
    msg.origin.assign("DEDPNNMNOJWVVWFSKGNUSJNYAGIHMPIVPUXICYHTSCCQXKFLUFODZLLDPEITAFRFIYFTWBRCJIVWOYWSGSDUU");
    msg.text.assign("GOMMWDDQRFVCRULYEABLPXVJNLHAQEBTNOTEBGJGVMINIBGQZQNVDKYBRJZKHULOLFU");

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
    msg.setTimeStamp(0.5535941279090039);
    msg.setSource(34872U);
    msg.setSourceEntity(182U);
    msg.setDestination(15170U);
    msg.setDestinationEntity(54U);
    msg.origin.assign("BEFCJPVZZIBFINNHUDVSDXBVMOUBGHGAWUVPJVUJGITAAWEHHVNQFUIOPHLFOFJXZRYXRUNQBADIRKLM");
    msg.text.assign("NNDMHGXFYAMMDSQXDELNVIXYCAIFLAPCCFJEUBUVNMMGBCGYFJSKOZKSIRQJJHDRZAMYNJRDLSEZNLVLRYUCSJKEZULIUXJHMDTSHPLTIQAFKWJYLOHIFTC");

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
    msg.setTimeStamp(0.7227972770400363);
    msg.setSource(58092U);
    msg.setSourceEntity(4U);
    msg.setDestination(38598U);
    msg.setDestinationEntity(251U);
    msg.origin.assign("WEVVXKPOBFENQAAABLFGPCKWNYMHEVZBFCNAEJUSYADSTKWFDTXPDOTFBNHQZXLNWIKVQYMVMHSIHOBCIDLLYEDTIJGQAUOZQJKFTLEUH");
    msg.htime = 0.4210099412273769;
    msg.lat = 0.06089023292119233;
    msg.lon = 0.7049159786462815;
    const char tmp_msg_0[] = {3, 112, 126, 29, -125, 17, 75, 85, 86, -80, 4, -20, 58, -30, 59, -13, -110, 35, 97, -43, -92, 36, -117, -31, -7, -86, -88, 118, -47};
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
    msg.setTimeStamp(0.18217453503558512);
    msg.setSource(48387U);
    msg.setSourceEntity(118U);
    msg.setDestination(50651U);
    msg.setDestinationEntity(20U);
    msg.origin.assign("ORSYRTFUJJMTLSTWCRMCYAINMVVNAVKSOXIVXTBQWYFHOXHVOIAPNXFYUOFHEGFQDGMQEBUUTMUKBYLNP");
    msg.htime = 0.606367436828064;
    msg.lat = 0.8034713696447423;
    msg.lon = 0.3697595957704457;
    const char tmp_msg_0[] = {73, 59, 59, -103, 92, -94, -72, 91, 18, 44};
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
    msg.setTimeStamp(0.6926243869888775);
    msg.setSource(36862U);
    msg.setSourceEntity(73U);
    msg.setDestination(40266U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("VLHDOFNVFQFPUUVDMCEQTEIMXOWAXIGMBZNLYGHCZZWBQCWVMXJERBIURMQBQDURRIFFOFDMETCZZXSLPBEHKIW");
    msg.htime = 0.6243298806094917;
    msg.lat = 0.6292295512272362;
    msg.lon = 0.5340336989140693;
    const char tmp_msg_0[] = {42, 1, -115, -59, 19, -15, 94, -41, -116, 96, 91, 103, 9, -101, 108, -118, 104, -86, -69, -30, -91, 32, -5, 38, -61, 29, 32, 50, 43, 102, -55, 3, 112, 98, -85, -10, -29, -49, -81, 120, -63, -110, -37, -56, -37, -34, -91, 12, 48, -96, 24, -88, 112, -120, 35, -20, 5, -66, 107, 21, 73, 38, 74, -78, -52, 108, -110, -118, 36, 117, 111, 93, -6, 70, 65, -65, -51, 102, 94, 44, 89, 94, 94, -31, -70, 87, 66, 44, -53, 116, 104, 103, -42, -84, 94, -104, 116, -122, 15, 100, -119, -112, 101, -57, -83, 59, -111, 69, 125, 71, -120, 108, 65, 88, -73, 43, -25, -78, 28, 111, 87, -12, -39, -118, 25, -53, -48, -88, -23, -85, -57, -42, -46, 63, 125, 63, -73, -81, 88, 89, 48, 59, -1, -48, 83, -24, -76, 66, 118, 84, -46, 58, -45, -57, -44, -27, 9};
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
    msg.setTimeStamp(0.6091488306179501);
    msg.setSource(41927U);
    msg.setSourceEntity(194U);
    msg.setDestination(931U);
    msg.setDestinationEntity(146U);
    msg.req_id = 8032U;
    msg.ttl = 38879U;
    msg.destination.assign("XBBJDWNNOXRAHAJIQHYOUZAPLZPUKYNMGZQQPFLYSMOFSWYZTRBW");
    const char tmp_msg_0[] = {-115, -59, 8, 87, 23, -112, 125, -2, 108, -125, -87, -31, -111, 3, 115, 117, 4, 84, 105, -39, -36, -75, -60, 115, 119, -125, -51, -106, -31, 79, -22, -100, -25, -23, -128, 26, -54, -65, -58, -51, -77, -114, -122, 112, 31, -97, 38, -121, -32, -46, -28, -126, 108, -60, -91, -50, 69, 95, 20, 3, 62, -92, -45, 117, 80, -61, -58, -36, -117, -42, 93, -122, -93, 54, 11, 93, -28, -91, -27, -86, 112, -105, 18, 99, 44, 37, 6, -99, -126, -89, -32, 90, -120, 42, 90, 45, 48, -85, 33, -48, 105, -94, 75, -16, -33, -61, 41, -53, -3, -40, 0, 65, 89, -5, 20, -39, -88, 11, 22, -127, -60, 37, -102, 60, -20, -124, -12, -2, 58, -82, 54, -54, 118, 4, -41, 110, -90, -38, -103, 101, -81, 97, 65, -2, 99, 92, -35, -60, 78, 12, 45, -3, -88, -71, -124, 8, 34, -5, -4, 36, 4, 115, 35, -77, -81, 3, 71, -104, -117, 51, -56, -125, 92, -54, 79, -49, -4, 10, 69, 89, 3, 71, 82, -47, -90, 3, 87, -125, -106, 60, -80, 96, 8, -75, 8, -62, 102, 16, 46, -63, -19, -29, 99, -49, -42, 13, -9, -21, -125, -58, -109, 100, -92, 87, 19, -113, -5, -73, -75, -99, -56, -86, 39, -31, 76, -126, -22, -9, 45, 100, 125};
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
    msg.setTimeStamp(0.30967363158630345);
    msg.setSource(37680U);
    msg.setSourceEntity(176U);
    msg.setDestination(14349U);
    msg.setDestinationEntity(76U);
    msg.req_id = 22650U;
    msg.ttl = 34814U;
    msg.destination.assign("DIWFOFLBQEHCWVOHWAYYNCWOVDFMAWIUDGLTNDIDBHQTKCHRKNOKHTQODVRHBMOZGAJMOKBZPSHFONPYGBGWUVGKGEQLBUCRRULMTVDQQHVSMTJPGLNZZDEDTBIZEPFXTXUOVYJPDSZJIRINZRQLMACIAAISYSYXCICEQFHJM");
    const char tmp_msg_0[] = {-128, 36, -64, -128, -48, 55, 29, 123, -112, 85, 59, 28, -103, -107, -34, 10, 96, 67, -127, -119, -54, -25};
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
    msg.setTimeStamp(0.2524675869148173);
    msg.setSource(42889U);
    msg.setSourceEntity(215U);
    msg.setDestination(50961U);
    msg.setDestinationEntity(175U);
    msg.req_id = 44685U;
    msg.ttl = 47922U;
    msg.destination.assign("VWBMNEGHEOTUJAZMYSRKDAHRZXFAJNLKRCZYCAGVRTYUIAUFNSLPXGOCOOLLLHBEZIFVVLNAQKBDFTJMZJBWNSFPDVIDKZEMBYYCOVTQMLRGHHXYOLXCYPQGSDGXIAPUFHDSLQTTJDEQQTTCBKEMENWIFTOMQGKPJULPOOBMOURWWPRRYBHCSJIZHHBIKKNGXUXVZUMHRCKFZJJCAGFTBESUMZQPIUDSW");
    const char tmp_msg_0[] = {-81, -69, -49, 59, -9, -116, -45, 97, 52, 59, -52, -89, -67, -43, -125, 86, 30, -73, 3, -90, 58, -37, -109, -125, 72, 43, 4, 112, 14, -66, 47, -65, 55, 61, 22, 48, -121, -72};
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
    msg.setTimeStamp(0.5003064106676547);
    msg.setSource(25591U);
    msg.setSourceEntity(23U);
    msg.setDestination(16007U);
    msg.setDestinationEntity(92U);
    msg.req_id = 10642U;
    msg.status = 235U;
    msg.text.assign("KJXVEQINGIBFDKGGOGUOOTPXVBLRCQMXYWESNTBQYHZRVAWOXHMADLKTWQGBXAUSYJDFULDIAQWSNUVNGDICMCOIQPUPPJUQFMWDZHZUEZTFETYPKUWJKHERPDDFMLURSFSXJCUEYLZNBESRTACRZYSGGFSBWYLZMKIXWBTNIGAJSJVHIHVOFLIBAKQOWNMBONHZFIZNNPVRZVKXAVJSCXOXTRCOHMPPCKGDJPHCDM");

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
    msg.setTimeStamp(0.8939099204800235);
    msg.setSource(20530U);
    msg.setSourceEntity(34U);
    msg.setDestination(4983U);
    msg.setDestinationEntity(184U);
    msg.req_id = 35163U;
    msg.status = 82U;
    msg.text.assign("AGUHLMXUQXXAZNLGFGSQJZJITWZNKIEHKEGFRRJPWAEWYGVQTVLHGMVUYXPJRHGCXKCRZCEYCPZSIWYRLTJYMNIBQDDUAKIWP");

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
    msg.setTimeStamp(0.6690536660934511);
    msg.setSource(2329U);
    msg.setSourceEntity(234U);
    msg.setDestination(51489U);
    msg.setDestinationEntity(4U);
    msg.req_id = 40932U;
    msg.status = 181U;
    msg.text.assign("DVSVCDYMBVPFJYNBALSBPZRMKQBPWGPGPJWBDRHWCTINWHNZALUUICAKAKXESOTYWOLHKHWLKBIXQOIAZZMLGUQWNDXRUFNTXQCYJOTQXOKIRNOUJSGJERGVYWFPNKZVAQYJTEXONGFCTNUMRJBRXLHTCFIHJBEEGPBLWJEPEPHUV");

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
    msg.setTimeStamp(0.7017748444623289);
    msg.setSource(30370U);
    msg.setSourceEntity(160U);
    msg.setDestination(48700U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("HFRVIMUTHAGPELXQTZRCTDAVAFCJFBJLBWWYAQKFWGLPJMRIYXCISOJSJOPAMPPNZUDMTZCDFSBABQSJXIRHSKNLIGYFIDPTYMKLUKXOEINYCDBUKVYXIRVUGPMMDGNAXJHXGOFEIYHOMBXEKNXCQTWLEVUOZDTHCBHRVRGHTNVQWHELQSCAASUWRTEGDC");
    msg.links = 656272467U;

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
    msg.setTimeStamp(0.6515043562208451);
    msg.setSource(29246U);
    msg.setSourceEntity(76U);
    msg.setDestination(19524U);
    msg.setDestinationEntity(247U);
    msg.group_name.assign("RAAWIIZUYYOSHDSBNNYGCECWYPMQZJXOWIUTLUEXNDDKHWUTDVNWJQROEMVKJXJURXVYHPLKEMGVSCBMHDODDGGVLWWNFASGOMVILALPBBKQQZKWNIEQTHJTSIE");
    msg.links = 2256319857U;

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
    msg.setTimeStamp(0.9594847864270633);
    msg.setSource(9733U);
    msg.setSourceEntity(3U);
    msg.setDestination(15296U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("PXSUDIGNNZDKUCTGZXLBITMMBTJDZKKXLAYZQIFJVBFCLNUVVCRAGIBBOSAWOXDGVYFNTQAWTMKWPSSNFHHWHCNFDVZOXYTTUCYFSUGERMVMPGVOKAFALCXHSOPUJHIRLEDARVNHYECMMSOGRGNBHBKREWXDORJYZRXWJUTZEDKPGQJUJEFXPQQEQQQPBBVYOHSXUIESOLVW");
    msg.links = 3287801375U;

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
    msg.setTimeStamp(0.20253790982048714);
    msg.setSource(9605U);
    msg.setSourceEntity(137U);
    msg.setDestination(59083U);
    msg.setDestinationEntity(146U);
    msg.groupname.assign("BHULBXLMAXWSPTCHBXGHNWYASKDUFQJFBPSSFPMRYQJFKMQQMV");
    msg.action = 166U;
    msg.grouplist.assign("ULZFZFIHRUSCAJWMUYJPOEKWOPWNDAETSSSOKALKJSJYOYIBBYUVJYQOLUOENPCRVNTJWXRDGHPIGCMEAVPBASNHXGOZFISRRXGRKNJQYEFMFQMLJLGBGKEHNPEDAIMOUTRQNDPXVADMBECZZNTMRVMWDUIXXTCXKQUOBQCBLKHYYDLBXCLGFAVGWUHBVPPTVQZHTEMSINQKLJRXDHGMPYAIKTFTQNKODDE");

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
    msg.setTimeStamp(0.26734057150774804);
    msg.setSource(15282U);
    msg.setSourceEntity(1U);
    msg.setDestination(22991U);
    msg.setDestinationEntity(173U);
    msg.groupname.assign("XVNKPKZCWOROKQRMCQLJTSYMEPNGRDXPXDJKHEFFUYAZDZHYXSJMUYMZOKACBBUDCPENOFSZKMQAGWHVNIBWEYBYWJQLUGWOPJTACZCUQYFBSNHOHBTTPJFJLNRCFVVRLPSHDXXLKBYDKAWIDNTNWLWAPYQBAFZHSHMFGKDTDVVWVTVWZERLEMJVIOSOISTOEIMGUJMLQCGEOULITUPSXUGVQKCR");
    msg.action = 250U;
    msg.grouplist.assign("DBSBPCYWYXOLHFDCFSSHKZPGLSDEWSIYXCPGOCAIAGNJMCBJAMRWNUUBBEVYJFXQZOOHQKUOSVEUTIOJETHPHVWARSABNHQWNNKDFQSDFPDCERNMDRACBTQBLZUHRJDLDTRVBMMTCTRIIWGANFDZKQRXWXQQLLVEWYOS");

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
    msg.setTimeStamp(0.3872451394867873);
    msg.setSource(6016U);
    msg.setSourceEntity(27U);
    msg.setDestination(39990U);
    msg.setDestinationEntity(26U);
    msg.groupname.assign("QZHZUXFJBTOAWHPNTQPDCFSTGORCPLIZEVGQRSPGBOIRIKPVDSFAFVAWIHADFKQUSCXVTQIGTCFWGYEYCPOBJOHNRJHCOJLWMEMDXLTEVKBXNPAHBFEYJSRMFAMJERHKNOUUUYNJMTPJFQMZDVJIXWBKUXOZMACZJEVSWXQXWYVW");
    msg.action = 251U;
    msg.grouplist.assign("PHHQPUEBYPVAUSGMFXYNOLWBYILJHWRYCIXVWLGPLBDWSLNJIVVADAUGEBAWRGWISEZQXGRJFXYDQGMNJFQPJUJEFQTJRDURLOFOBIQZXGVKTLPLV");

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
    msg.setTimeStamp(0.8504184725398619);
    msg.setSource(57853U);
    msg.setSourceEntity(9U);
    msg.setDestination(18707U);
    msg.setDestinationEntity(200U);
    msg.id = 46U;
    msg.range = 0.24160966653797367;

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
    msg.setTimeStamp(0.9349332240186485);
    msg.setSource(57016U);
    msg.setSourceEntity(124U);
    msg.setDestination(58584U);
    msg.setDestinationEntity(234U);
    msg.id = 8U;
    msg.range = 0.2688982802608628;

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
    msg.setTimeStamp(0.5792531344973305);
    msg.setSource(17686U);
    msg.setSourceEntity(115U);
    msg.setDestination(12936U);
    msg.setDestinationEntity(133U);
    msg.id = 117U;
    msg.range = 0.28644324595586734;

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
    msg.setTimeStamp(0.3863583861336476);
    msg.setSource(9492U);
    msg.setSourceEntity(194U);
    msg.setDestination(4406U);
    msg.setDestinationEntity(185U);
    msg.beacon.assign("UDVEYDNUVPYPQXJTZZBXIAIFEKENEXGOYOTGKIQSZSMKKUMPSRVILOEVZDVWRISPTWDOLYUGLFUMYSITEGATWFQBOWRLZCNSTGJBUMAZMGBQFLAFMPGSNEICNPPTFSWALKHNOHNXTTGZROLYC");
    msg.lat = 0.691170923832815;
    msg.lon = 0.12628404438490648;
    msg.depth = 0.8384376560760988;
    msg.query_channel = 51U;
    msg.reply_channel = 211U;
    msg.transponder_delay = 191U;

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
    msg.setTimeStamp(0.9518317663240492);
    msg.setSource(25046U);
    msg.setSourceEntity(34U);
    msg.setDestination(2775U);
    msg.setDestinationEntity(222U);
    msg.beacon.assign("TWDBFPDGIMG");
    msg.lat = 0.01638737594135209;
    msg.lon = 0.2722127767066518;
    msg.depth = 0.8068675739314952;
    msg.query_channel = 173U;
    msg.reply_channel = 24U;
    msg.transponder_delay = 22U;

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
    msg.setTimeStamp(0.012533784257087066);
    msg.setSource(64249U);
    msg.setSourceEntity(121U);
    msg.setDestination(5854U);
    msg.setDestinationEntity(231U);
    msg.beacon.assign("BTUJLUPMNQJNGIGIZKBKOCGZVUAIDNEWDQHGAWRHZQDOCTAYESYITAYMDHHFYUXBVPCONOCMVFHPVDFJKFSMCGAVKPCOOVIGNTTMHQPIHNLYSDRXVPPUWXYEIHBMEZORTLASMFOYENWDKWRGJWSPFNXXLKGEUTKMIQAJREJISWRBHJFEVLSLZLBIJQXVZPUZAFASYOBCSZPBUCUREDKGLRQUCOTGQKLKNFJTEDWAQJNYCMLBXYSXRZMRWT");
    msg.lat = 0.2748267371104627;
    msg.lon = 0.7542592472589992;
    msg.depth = 0.6921875254849864;
    msg.query_channel = 167U;
    msg.reply_channel = 151U;
    msg.transponder_delay = 216U;

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
    msg.setTimeStamp(0.3152012636292205);
    msg.setSource(58065U);
    msg.setSourceEntity(182U);
    msg.setDestination(7206U);
    msg.setDestinationEntity(29U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.9034903680108552);
    msg.setSource(27597U);
    msg.setSourceEntity(26U);
    msg.setDestination(11936U);
    msg.setDestinationEntity(159U);
    msg.op = 40U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LJMOGBEQUJQXEFYYJDMFQDTZOSTEISXLYEWTJLAIQOPIYCNGGHCDCSUHZOMGUBMPIPRPYMRNCSLTSEUXLAWGYMAWVXGHBLRQZIZDTYHWCMZQBDNDGCKKKVQXIWBGKCXXXVPPJJBAZTVLHIPOHJUVAVNOOWRAKYVBJFOFTMBHWQSAFDUGUIHAUPYZQECVENSSJKTUZLJFIYERTEVNMFKKCRVLNLPOAEDFKTFHRNADDZRRBFHPQ");
    tmp_msg_0.lat = 0.5423544897198779;
    tmp_msg_0.lon = 0.8203639144952241;
    tmp_msg_0.depth = 0.9602516127553228;
    tmp_msg_0.query_channel = 167U;
    tmp_msg_0.reply_channel = 237U;
    tmp_msg_0.transponder_delay = 166U;
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
    msg.setTimeStamp(0.8121931739439142);
    msg.setSource(41291U);
    msg.setSourceEntity(13U);
    msg.setDestination(53785U);
    msg.setDestinationEntity(122U);
    msg.op = 133U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HDILZYKVDPCVQWNENKCOBTQFKKJMZOYAAZGXTQTQHBYILFZYQWWNCYNWFBJMRXSBMKFWAGIVAIVZMDNJFZBOESRDHKUUMZUVUUEAPSUB");
    tmp_msg_0.lat = 0.08667650524023429;
    tmp_msg_0.lon = 0.9558463728378642;
    tmp_msg_0.depth = 0.2218370169917503;
    tmp_msg_0.query_channel = 189U;
    tmp_msg_0.reply_channel = 138U;
    tmp_msg_0.transponder_delay = 63U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7105588038635728);
    msg.setSource(17843U);
    msg.setSourceEntity(124U);
    msg.setDestination(65082U);
    msg.setDestinationEntity(72U);
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2513458300885685;
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
    msg.setTimeStamp(0.9049037258435177);
    msg.setSource(23880U);
    msg.setSourceEntity(206U);
    msg.setDestination(27593U);
    msg.setDestinationEntity(176U);
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.020127901321844166;
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
    msg.setTimeStamp(0.9547387343063807);
    msg.setSource(59990U);
    msg.setSourceEntity(126U);
    msg.setDestination(47623U);
    msg.setDestinationEntity(200U);
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("RXPLXMBMIPIYALHYSRIWLWDLXCOYYHYHOZFERAGQPLOROQHJBTLGQENMRUGWJUCCFENYOAZWFSMIKJQNMMDCGWVFAKXQKOENBMSVKKNJFPKQMTLTZCJZXJUYIDAOBGQWEVTKTDZJKFVYGUWIHVNSTTHXRDSLHRXUGP");
    tmp_msg_0.value = 225U;
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
    msg.setTimeStamp(0.5779136934812104);
    msg.setSource(29510U);
    msg.setSourceEntity(73U);
    msg.setDestination(41838U);
    msg.setDestinationEntity(30U);
    msg.op = 249U;
    msg.system.assign("VRNTSLVJXGHRRALDBKZXOIITMKEJUELOYFNGBUAEHUHYKNPSUNQCGSYAETPTSVVVERJEVULFZIWKFZVYRFUTKBDQYMHGLVWIGGFCHMOWPDDLJKBCBMKQKORYPAULIZZREXAPMMLMIDDWCXSPMCXVHQYHHSHFDWU");
    msg.range = 0.9005148582752346;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 26877U;
    tmp_msg_0.name.assign("VYXPPQJEMYPWHUVTQOCMQLKLKHLBSHTOFFGXKJHXPIZKODVBQQOAMBHLATVFLKJUWIMUBYZORPLAXQSXAZOQBHUNFEUUDMCGFRSAZARTIEKOYCECSDYKELSJSFWAVSTZEDJNDTJPJCUKUIIIFFTHQMVTGRCHJATWRHKXRBXGSBMJCIMEMZYVEPLGGRKRDGOPZWNRNYIPXZDD");
    tmp_msg_0.custom.assign("ZJGAFUKGLJYIVVJVWRSUZVWCMZOXYPYLMUPQTLZLRUJCXGTDFXREEEARNSGOIXWCFOYYTQHBNLRXEQUCHOMDWTJPRFVCAHHJVEXCFIHXAKDSSIIBVODPPBEDXTVEZ");
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
    msg.setTimeStamp(0.5736970153048236);
    msg.setSource(26276U);
    msg.setSourceEntity(73U);
    msg.setDestination(61567U);
    msg.setDestinationEntity(85U);
    msg.op = 80U;
    msg.system.assign("ORFLIEWUYNJEKQNKMCORWCIUTVCCZMRJOYSKGFXXJDSZPTSZZMNUWIZMLNAMIAPULJXTAWGLPEYWQGSDDPYOUQWGFDYCZTQNPGLNYEPXEJTEHCBBHOT");
    msg.range = 0.3950206787606909;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3647537868919827;
    tmp_msg_0.y = 0.9345834312530739;
    tmp_msg_0.z = 0.30175856772529075;
    tmp_msg_0.phi = 0.42006926009504286;
    tmp_msg_0.theta = 0.3684191190620638;
    tmp_msg_0.psi = 0.1434678208893505;
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
    msg.setTimeStamp(0.13387282221574814);
    msg.setSource(6049U);
    msg.setSourceEntity(157U);
    msg.setDestination(52374U);
    msg.setDestinationEntity(184U);
    msg.op = 27U;
    msg.system.assign("NIMRQWLLHUZJRGLXAMEMMTSNOXSTMHRQOORJKQLPBEFXBGAWVAKFVIRRXONNSUJBCJCPVNCDDGCXRHZVTDXFHJMKBODBUHVWBPRIWYJIPSEESIWSQYNFAXFELSUGHZGWXCYNLCOKBAPTVGOYZEPQPQKOOTZCJXLKCFPQWYMYIDALFFNSFHMJWMVCCUGLZUOYYIZS");
    msg.range = 0.4713898380064975;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 5U;
    tmp_msg_0.op = 60U;
    tmp_msg_0.plan_id.assign("FPVIBMHEPGJNCRJSSPJRWDVBJOMITNHKDHSHLKABWFKVADAYSPAXUCYIZUNKCYSFJJOKNLPXXQYXODTRDQHGLGPVKUHGCRZZFRCEASEFZGMXBBQFNBZGHBRRTWHUMMIQPVZWTQOQEXIAGTXDIENDBUYBPHFTBIISFJFKTQCNSYJWROPEJALEYLQOPDNYJLUTIQSSKYWGMCMYDQOAVXCLWRCKAUZHXGTNLWXMOMVEDUOCTVILVEOGLARZKNWZ");
    tmp_msg_0.params.assign("TFGSQIWFNVBGXWPDMCHVRHTIYYIRVVFTYF");
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
    msg.setTimeStamp(0.9263188608447472);
    msg.setSource(31692U);
    msg.setSourceEntity(43U);
    msg.setDestination(64118U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.9815755504988722);
    msg.setSource(61849U);
    msg.setSourceEntity(39U);
    msg.setDestination(51374U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.6413701660004288);
    msg.setSource(64197U);
    msg.setSourceEntity(1U);
    msg.setDestination(4007U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.9817591668421999);
    msg.setSource(60239U);
    msg.setSourceEntity(97U);
    msg.setDestination(26652U);
    msg.setDestinationEntity(51U);
    msg.list.assign("JFTAAJWBQWYRKXMSCBWOHTOEXYISUMXIFSFRWPUVTVAYXDRKCMINZOOKZDLXGUGMTIB");

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
    msg.setTimeStamp(0.9858512593940064);
    msg.setSource(13232U);
    msg.setSourceEntity(162U);
    msg.setDestination(27140U);
    msg.setDestinationEntity(244U);
    msg.list.assign("ZJAKICDLFTRXUNUZVKVNHEGRPHQVWKDMNTVDAISPKHPMFSELUXCQCQBDQUPOOHTTVTPZAVGDL");

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
    msg.setTimeStamp(0.2551869692774593);
    msg.setSource(58973U);
    msg.setSourceEntity(197U);
    msg.setDestination(4735U);
    msg.setDestinationEntity(134U);
    msg.list.assign("VUKBLBARKYFGPYGJAAZWJZUNAJWUMATCOQMTCIFHDWGCKLLEDFHQGXJFPIKMBNUTJVZJGSUFYEMXVHOITTNISSUMXXTZXWJQODWLSJFSEHOXQPFR");

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
    msg.setTimeStamp(0.4011275839393701);
    msg.setSource(45308U);
    msg.setSourceEntity(99U);
    msg.setDestination(61424U);
    msg.setDestinationEntity(106U);
    msg.value = 12237;

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
    msg.setTimeStamp(0.805724015107732);
    msg.setSource(56866U);
    msg.setSourceEntity(14U);
    msg.setDestination(58573U);
    msg.setDestinationEntity(117U);
    msg.value = 20573;

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
    msg.setTimeStamp(0.3550471487687057);
    msg.setSource(52804U);
    msg.setSourceEntity(49U);
    msg.setDestination(22084U);
    msg.setDestinationEntity(85U);
    msg.value = 4369;

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
    msg.setTimeStamp(0.08525164049099299);
    msg.setSource(63408U);
    msg.setSourceEntity(143U);
    msg.setDestination(9534U);
    msg.setDestinationEntity(78U);
    msg.value = 0.18530570259571466;

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
    msg.setTimeStamp(0.3325944523594593);
    msg.setSource(487U);
    msg.setSourceEntity(222U);
    msg.setDestination(50734U);
    msg.setDestinationEntity(20U);
    msg.value = 0.35488182953444536;

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
    msg.setTimeStamp(0.12229781163702225);
    msg.setSource(49839U);
    msg.setSourceEntity(108U);
    msg.setDestination(14548U);
    msg.setDestinationEntity(54U);
    msg.value = 0.6990371346446046;

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
    msg.setTimeStamp(0.8483962608655173);
    msg.setSource(51549U);
    msg.setSourceEntity(122U);
    msg.setDestination(17642U);
    msg.setDestinationEntity(29U);
    msg.value = 0.7063106140661666;

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
    msg.setTimeStamp(0.37818774446463255);
    msg.setSource(28582U);
    msg.setSourceEntity(54U);
    msg.setDestination(42732U);
    msg.setDestinationEntity(147U);
    msg.value = 0.8384703852985075;

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
    msg.setTimeStamp(0.33530299829803956);
    msg.setSource(28832U);
    msg.setSourceEntity(81U);
    msg.setDestination(37519U);
    msg.setDestinationEntity(102U);
    msg.value = 0.3811037866112409;

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
    msg.setTimeStamp(0.7776739209049365);
    msg.setSource(33182U);
    msg.setSourceEntity(13U);
    msg.setDestination(39125U);
    msg.setDestinationEntity(91U);
    msg.validity = 28926U;
    msg.type = 50U;
    msg.utc_year = 259U;
    msg.utc_month = 194U;
    msg.utc_day = 101U;
    msg.utc_time = 0.9145582866984814;
    msg.lat = 0.20208972924925994;
    msg.lon = 0.46180986824111525;
    msg.height = 0.49148256907650756;
    msg.satellites = 0U;
    msg.cog = 0.3040316168630619;
    msg.sog = 0.798919967195012;
    msg.hdop = 0.7528624019874546;
    msg.vdop = 0.16988970790755809;
    msg.hacc = 0.14186165295841768;
    msg.vacc = 0.008418119102825972;

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
    msg.setTimeStamp(0.19401992565235393);
    msg.setSource(12227U);
    msg.setSourceEntity(73U);
    msg.setDestination(2926U);
    msg.setDestinationEntity(160U);
    msg.validity = 1295U;
    msg.type = 54U;
    msg.utc_year = 49845U;
    msg.utc_month = 251U;
    msg.utc_day = 6U;
    msg.utc_time = 0.4075691966592174;
    msg.lat = 0.7933530620193382;
    msg.lon = 0.7039652729866661;
    msg.height = 0.7024454644440782;
    msg.satellites = 2U;
    msg.cog = 0.9533766257580292;
    msg.sog = 0.653036112185659;
    msg.hdop = 0.9765478442635509;
    msg.vdop = 0.04525300089013007;
    msg.hacc = 0.6619804129814475;
    msg.vacc = 0.024631544913737535;

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
    msg.setTimeStamp(0.5381007730312004);
    msg.setSource(14216U);
    msg.setSourceEntity(175U);
    msg.setDestination(52091U);
    msg.setDestinationEntity(208U);
    msg.validity = 5768U;
    msg.type = 250U;
    msg.utc_year = 61633U;
    msg.utc_month = 171U;
    msg.utc_day = 252U;
    msg.utc_time = 0.3414219949415447;
    msg.lat = 0.4304081250849686;
    msg.lon = 0.9882761611213854;
    msg.height = 0.8998487875818793;
    msg.satellites = 101U;
    msg.cog = 0.355122638136804;
    msg.sog = 0.8283950048764915;
    msg.hdop = 0.663291025589276;
    msg.vdop = 0.08892622223891955;
    msg.hacc = 0.6744903441306332;
    msg.vacc = 0.032352079116718224;

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
    msg.setTimeStamp(0.006323107537466233);
    msg.setSource(5108U);
    msg.setSourceEntity(149U);
    msg.setDestination(59123U);
    msg.setDestinationEntity(4U);
    msg.time = 0.12004395058085804;
    msg.phi = 0.24294117774006596;
    msg.theta = 0.4297116356389372;
    msg.psi = 0.2945925424653205;
    msg.psi_magnetic = 0.02790302012741741;

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
    msg.setTimeStamp(0.662863590257575);
    msg.setSource(45451U);
    msg.setSourceEntity(91U);
    msg.setDestination(18057U);
    msg.setDestinationEntity(165U);
    msg.time = 0.453691867940502;
    msg.phi = 0.1681247175917414;
    msg.theta = 0.9413059186623388;
    msg.psi = 0.05644866775218893;
    msg.psi_magnetic = 0.7561252674882575;

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
    msg.setTimeStamp(0.1400785070640267);
    msg.setSource(25566U);
    msg.setSourceEntity(19U);
    msg.setDestination(53676U);
    msg.setDestinationEntity(14U);
    msg.time = 0.02856613471957592;
    msg.phi = 0.11260503044426284;
    msg.theta = 0.04309652284815835;
    msg.psi = 0.4909849619615694;
    msg.psi_magnetic = 0.7326025284768144;

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
    msg.setTimeStamp(0.14029079345881212);
    msg.setSource(25807U);
    msg.setSourceEntity(203U);
    msg.setDestination(28853U);
    msg.setDestinationEntity(244U);
    msg.time = 0.005042743725381049;
    msg.x = 0.9290918257013429;
    msg.y = 0.12374702257005243;
    msg.z = 0.2848738364936997;
    msg.timestep = 0.8108144970458422;

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
    msg.setTimeStamp(0.09556426098971194);
    msg.setSource(63578U);
    msg.setSourceEntity(117U);
    msg.setDestination(13132U);
    msg.setDestinationEntity(204U);
    msg.time = 0.44203202123705876;
    msg.x = 0.4622231893815515;
    msg.y = 0.9121965101581956;
    msg.z = 0.19651301672127752;
    msg.timestep = 0.3371523718476165;

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
    msg.setTimeStamp(0.008726506572157566);
    msg.setSource(27134U);
    msg.setSourceEntity(130U);
    msg.setDestination(55537U);
    msg.setDestinationEntity(143U);
    msg.time = 0.8157891473130343;
    msg.x = 0.34217579573675017;
    msg.y = 0.7258040421456268;
    msg.z = 0.5772678210505151;
    msg.timestep = 0.8000753471444564;

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
    msg.setTimeStamp(0.4307333261385323);
    msg.setSource(59192U);
    msg.setSourceEntity(217U);
    msg.setDestination(9993U);
    msg.setDestinationEntity(98U);
    msg.time = 0.894642940515684;
    msg.x = 0.6579018324275072;
    msg.y = 0.8234491464444467;
    msg.z = 0.5309715005696782;

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
    msg.setTimeStamp(0.5533071049368911);
    msg.setSource(64698U);
    msg.setSourceEntity(131U);
    msg.setDestination(59857U);
    msg.setDestinationEntity(193U);
    msg.time = 0.6131535213706035;
    msg.x = 0.09506054865581803;
    msg.y = 0.3993278733070944;
    msg.z = 0.19428897140502754;

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
    msg.setTimeStamp(0.792428698790853);
    msg.setSource(33910U);
    msg.setSourceEntity(184U);
    msg.setDestination(21788U);
    msg.setDestinationEntity(187U);
    msg.time = 0.5527959458375349;
    msg.x = 0.10171258648946735;
    msg.y = 0.5519745124118572;
    msg.z = 0.016627979515008717;

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
    msg.setTimeStamp(0.4317933670762354);
    msg.setSource(23676U);
    msg.setSourceEntity(5U);
    msg.setDestination(59740U);
    msg.setDestinationEntity(105U);
    msg.time = 0.6592497456823454;
    msg.x = 0.5635392849386681;
    msg.y = 0.48285690545299276;
    msg.z = 0.15746588113399584;

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
    msg.setTimeStamp(0.3532147314669998);
    msg.setSource(8275U);
    msg.setSourceEntity(46U);
    msg.setDestination(55003U);
    msg.setDestinationEntity(133U);
    msg.time = 0.3505483085578003;
    msg.x = 0.8513617177926771;
    msg.y = 0.7239356519783389;
    msg.z = 0.3432878618710342;

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
    msg.setTimeStamp(0.10565417401319332);
    msg.setSource(8503U);
    msg.setSourceEntity(138U);
    msg.setDestination(4439U);
    msg.setDestinationEntity(226U);
    msg.time = 0.8785757831244404;
    msg.x = 0.5473262822455466;
    msg.y = 0.6258339931567214;
    msg.z = 0.7761928523990874;

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
    msg.setTimeStamp(0.009595238110444493);
    msg.setSource(15325U);
    msg.setSourceEntity(169U);
    msg.setDestination(48959U);
    msg.setDestinationEntity(155U);
    msg.time = 0.9688298648315513;
    msg.x = 0.8168711998778432;
    msg.y = 0.32941336696506573;
    msg.z = 0.651154048113321;

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
    msg.setTimeStamp(0.7077280702671842);
    msg.setSource(1875U);
    msg.setSourceEntity(46U);
    msg.setDestination(39135U);
    msg.setDestinationEntity(86U);
    msg.time = 0.06400367035636167;
    msg.x = 0.3756910883236849;
    msg.y = 0.8201064244254508;
    msg.z = 0.5181986186783307;

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
    msg.setTimeStamp(0.495922017023957);
    msg.setSource(29027U);
    msg.setSourceEntity(89U);
    msg.setDestination(6032U);
    msg.setDestinationEntity(236U);
    msg.time = 0.5732500176145919;
    msg.x = 0.8330995789374064;
    msg.y = 0.86408890173816;
    msg.z = 0.24280701927455317;

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
    msg.setTimeStamp(0.3981291646673225);
    msg.setSource(62580U);
    msg.setSourceEntity(173U);
    msg.setDestination(8829U);
    msg.setDestinationEntity(100U);
    msg.validity = 183U;
    msg.x = 0.27974053441393343;
    msg.y = 0.9359367996315939;
    msg.z = 0.0751483980850376;

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
    msg.setTimeStamp(0.6334649486269659);
    msg.setSource(54369U);
    msg.setSourceEntity(22U);
    msg.setDestination(35075U);
    msg.setDestinationEntity(227U);
    msg.validity = 80U;
    msg.x = 0.5013301604826497;
    msg.y = 0.24595357774917237;
    msg.z = 0.2554834346488495;

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
    msg.setTimeStamp(0.9876272855959356);
    msg.setSource(16188U);
    msg.setSourceEntity(100U);
    msg.setDestination(20670U);
    msg.setDestinationEntity(85U);
    msg.validity = 174U;
    msg.x = 0.9935167619149248;
    msg.y = 0.44044541978341056;
    msg.z = 0.7853761099636757;

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
    msg.setTimeStamp(0.8026681508039661);
    msg.setSource(5901U);
    msg.setSourceEntity(32U);
    msg.setDestination(60632U);
    msg.setDestinationEntity(96U);
    msg.validity = 131U;
    msg.x = 0.45233759022467046;
    msg.y = 0.026789877296359843;
    msg.z = 0.01615329792489162;

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
    msg.setTimeStamp(0.47534307033307743);
    msg.setSource(26288U);
    msg.setSourceEntity(213U);
    msg.setDestination(34277U);
    msg.setDestinationEntity(74U);
    msg.validity = 164U;
    msg.x = 0.4725150740740962;
    msg.y = 0.6518503829130793;
    msg.z = 0.032923030982014434;

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
    msg.setTimeStamp(0.47401819492105557);
    msg.setSource(53672U);
    msg.setSourceEntity(170U);
    msg.setDestination(12467U);
    msg.setDestinationEntity(119U);
    msg.validity = 204U;
    msg.x = 0.8630024135628959;
    msg.y = 0.476614746028888;
    msg.z = 0.3454537769363283;

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
    msg.setTimeStamp(0.9354357612414835);
    msg.setSource(9941U);
    msg.setSourceEntity(71U);
    msg.setDestination(58838U);
    msg.setDestinationEntity(77U);
    msg.time = 0.2926849713878058;
    msg.x = 0.808560283602468;
    msg.y = 0.7911675492776511;
    msg.z = 0.7342075789562023;

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
    msg.setTimeStamp(0.33510920901251173);
    msg.setSource(43807U);
    msg.setSourceEntity(32U);
    msg.setDestination(2674U);
    msg.setDestinationEntity(235U);
    msg.time = 0.017979141725753767;
    msg.x = 0.0731820984060938;
    msg.y = 0.08770845388700466;
    msg.z = 0.027569426698857757;

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
    msg.setTimeStamp(0.815350370184614);
    msg.setSource(32419U);
    msg.setSourceEntity(185U);
    msg.setDestination(42072U);
    msg.setDestinationEntity(33U);
    msg.time = 0.40522935371584534;
    msg.x = 0.5213169463139347;
    msg.y = 0.487243078499923;
    msg.z = 0.6507431921270068;

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
    msg.setTimeStamp(0.8099391074264298);
    msg.setSource(46975U);
    msg.setSourceEntity(122U);
    msg.setDestination(54771U);
    msg.setDestinationEntity(193U);
    msg.validity = 209U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.31768401610213004;
    tmp_msg_0.y = 0.5507025664732704;
    tmp_msg_0.z = 0.021116552437980718;
    tmp_msg_0.phi = 0.8522444665215603;
    tmp_msg_0.theta = 0.8509924920643566;
    tmp_msg_0.psi = 0.6065801433749214;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.014641688257674645;
    tmp_msg_1.beam_height = 0.7785992856928674;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.10935333400694236;

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
    msg.setTimeStamp(0.4053923009769672);
    msg.setSource(26382U);
    msg.setSourceEntity(205U);
    msg.setDestination(37449U);
    msg.setDestinationEntity(5U);
    msg.validity = 4U;
    msg.value = 0.8746009269933961;

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
    msg.setTimeStamp(0.4501580806682861);
    msg.setSource(49622U);
    msg.setSourceEntity(32U);
    msg.setDestination(31028U);
    msg.setDestinationEntity(120U);
    msg.validity = 9U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3193489581208615;
    tmp_msg_0.y = 0.6104130804565793;
    tmp_msg_0.z = 0.6439070646596284;
    tmp_msg_0.phi = 0.6948763991734248;
    tmp_msg_0.theta = 0.9772226428102274;
    tmp_msg_0.psi = 0.8243645046626085;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.019795429389920405;
    tmp_msg_1.beam_height = 0.6131723460441733;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.810562374657563;

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
    msg.setTimeStamp(0.9217057326069829);
    msg.setSource(15310U);
    msg.setSourceEntity(48U);
    msg.setDestination(17063U);
    msg.setDestinationEntity(64U);
    msg.value = 0.5462240575016646;

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
    msg.setTimeStamp(0.4554435576151351);
    msg.setSource(28500U);
    msg.setSourceEntity(205U);
    msg.setDestination(14207U);
    msg.setDestinationEntity(253U);
    msg.value = 0.4484059437972727;

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
    msg.setTimeStamp(0.9050491468514105);
    msg.setSource(39962U);
    msg.setSourceEntity(204U);
    msg.setDestination(37302U);
    msg.setDestinationEntity(202U);
    msg.value = 0.2366690400265533;

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
    msg.setTimeStamp(0.5177774436073731);
    msg.setSource(65136U);
    msg.setSourceEntity(128U);
    msg.setDestination(43301U);
    msg.setDestinationEntity(193U);
    msg.value = 0.8924808180790236;

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
    msg.setTimeStamp(0.5069418507137818);
    msg.setSource(61122U);
    msg.setSourceEntity(138U);
    msg.setDestination(30128U);
    msg.setDestinationEntity(136U);
    msg.value = 0.18756425722046466;

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
    msg.setTimeStamp(0.6423156504098987);
    msg.setSource(22660U);
    msg.setSourceEntity(49U);
    msg.setDestination(31309U);
    msg.setDestinationEntity(113U);
    msg.value = 0.17898818930239457;

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
    msg.setTimeStamp(0.3428023569351655);
    msg.setSource(38460U);
    msg.setSourceEntity(10U);
    msg.setDestination(13957U);
    msg.setDestinationEntity(225U);
    msg.value = 0.39570311377132006;

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
    msg.setTimeStamp(0.09228509950926633);
    msg.setSource(5974U);
    msg.setSourceEntity(108U);
    msg.setDestination(17899U);
    msg.setDestinationEntity(76U);
    msg.value = 0.684480401184198;

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
    msg.setTimeStamp(0.3536112726014924);
    msg.setSource(55411U);
    msg.setSourceEntity(84U);
    msg.setDestination(2942U);
    msg.setDestinationEntity(121U);
    msg.value = 0.23638484282439765;

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
    msg.setTimeStamp(0.11424889371171654);
    msg.setSource(48036U);
    msg.setSourceEntity(67U);
    msg.setDestination(6974U);
    msg.setDestinationEntity(153U);
    msg.value = 0.19693788990731986;

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
    msg.setTimeStamp(0.7556255602388929);
    msg.setSource(19752U);
    msg.setSourceEntity(90U);
    msg.setDestination(30030U);
    msg.setDestinationEntity(62U);
    msg.value = 0.8684147295559754;

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
    msg.setTimeStamp(0.8466787324981975);
    msg.setSource(12524U);
    msg.setSourceEntity(86U);
    msg.setDestination(224U);
    msg.setDestinationEntity(127U);
    msg.value = 0.3762586691768357;

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
    msg.setTimeStamp(0.23461793538564824);
    msg.setSource(36248U);
    msg.setSourceEntity(33U);
    msg.setDestination(9924U);
    msg.setDestinationEntity(122U);
    msg.value = 0.7509365148047287;

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
    msg.setTimeStamp(0.30962206869646525);
    msg.setSource(56131U);
    msg.setSourceEntity(195U);
    msg.setDestination(44065U);
    msg.setDestinationEntity(63U);
    msg.value = 0.374798805410161;

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
    msg.setTimeStamp(0.0772413844558063);
    msg.setSource(23563U);
    msg.setSourceEntity(3U);
    msg.setDestination(48286U);
    msg.setDestinationEntity(37U);
    msg.value = 0.4829023599753467;

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
    msg.setTimeStamp(0.7324136062122392);
    msg.setSource(136U);
    msg.setSourceEntity(147U);
    msg.setDestination(60114U);
    msg.setDestinationEntity(186U);
    msg.value = 0.8373242216080844;

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
    msg.setTimeStamp(0.37916372264698595);
    msg.setSource(51690U);
    msg.setSourceEntity(246U);
    msg.setDestination(22776U);
    msg.setDestinationEntity(89U);
    msg.value = 0.20229321129690458;

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
    msg.setTimeStamp(0.901934456810876);
    msg.setSource(50281U);
    msg.setSourceEntity(129U);
    msg.setDestination(37623U);
    msg.setDestinationEntity(4U);
    msg.value = 0.3696949648308123;

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
    msg.setTimeStamp(0.1800623340213251);
    msg.setSource(62458U);
    msg.setSourceEntity(71U);
    msg.setDestination(48162U);
    msg.setDestinationEntity(22U);
    msg.value = 0.6463821354866724;

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
    msg.setTimeStamp(0.4145931181057626);
    msg.setSource(47781U);
    msg.setSourceEntity(79U);
    msg.setDestination(50799U);
    msg.setDestinationEntity(223U);
    msg.value = 0.21462725098260127;

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
    msg.setTimeStamp(0.47729377575259635);
    msg.setSource(28939U);
    msg.setSourceEntity(35U);
    msg.setDestination(23568U);
    msg.setDestinationEntity(83U);
    msg.value = 0.4282802294240756;

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
    msg.setTimeStamp(0.9793330043552548);
    msg.setSource(5456U);
    msg.setSourceEntity(9U);
    msg.setDestination(23050U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6675054532438128;

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
    msg.setTimeStamp(0.3105688887489526);
    msg.setSource(1345U);
    msg.setSourceEntity(69U);
    msg.setDestination(40482U);
    msg.setDestinationEntity(63U);
    msg.value = 0.7207515275410094;

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
    msg.setTimeStamp(0.9741531690613299);
    msg.setSource(26142U);
    msg.setSourceEntity(25U);
    msg.setDestination(63499U);
    msg.setDestinationEntity(186U);
    msg.value = 0.40237862682560677;

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
    msg.setTimeStamp(0.7053621916511755);
    msg.setSource(38834U);
    msg.setSourceEntity(199U);
    msg.setDestination(64482U);
    msg.setDestinationEntity(125U);
    msg.direction = 0.5789025242778192;
    msg.speed = 0.8535826882535286;
    msg.turbulence = 0.8342283404115569;

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
    msg.setTimeStamp(0.28939119153404513);
    msg.setSource(41602U);
    msg.setSourceEntity(160U);
    msg.setDestination(55076U);
    msg.setDestinationEntity(82U);
    msg.direction = 0.7499498813225262;
    msg.speed = 0.7849712009187119;
    msg.turbulence = 0.05993480022082831;

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
    msg.setTimeStamp(0.16265364347657518);
    msg.setSource(5984U);
    msg.setSourceEntity(43U);
    msg.setDestination(12794U);
    msg.setDestinationEntity(216U);
    msg.direction = 0.06458088986711175;
    msg.speed = 0.19963186799725108;
    msg.turbulence = 0.7210682471138529;

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
    msg.setTimeStamp(0.5038426922151571);
    msg.setSource(48440U);
    msg.setSourceEntity(29U);
    msg.setDestination(27567U);
    msg.setDestinationEntity(160U);
    msg.value = 0.14144723524649383;

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
    msg.setTimeStamp(0.41207366024580827);
    msg.setSource(19770U);
    msg.setSourceEntity(193U);
    msg.setDestination(24864U);
    msg.setDestinationEntity(156U);
    msg.value = 0.2813010237326836;

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
    msg.setTimeStamp(0.44358397636290525);
    msg.setSource(64980U);
    msg.setSourceEntity(60U);
    msg.setDestination(18498U);
    msg.setDestinationEntity(5U);
    msg.value = 0.5943303035911467;

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
    msg.setTimeStamp(0.9269084006017028);
    msg.setSource(25870U);
    msg.setSourceEntity(12U);
    msg.setDestination(52904U);
    msg.setDestinationEntity(135U);
    msg.value.assign("REYICBNZKBBVDJCZBXEFILKKGRQLCVTFIBEXUUOAKSAXMCGFCCWZE");

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
    msg.setTimeStamp(0.9501720544650567);
    msg.setSource(35509U);
    msg.setSourceEntity(35U);
    msg.setDestination(29676U);
    msg.setDestinationEntity(165U);
    msg.value.assign("VWDIDSFRMYRCDURWZJVZJDIJEKXTOTRFFFMLODQGYTXDQANHVEPQNESIKZAFCUBFMTYMPHACJLHNCPDUHMUZXBWLPWHWDPVDXVIPKTLVPWAJLGHWGGDRMCINFYYREVEJEQSZELUKMHNHBENJZGYYJXROIYNXGOXFTPBHUTIGABENAITNKRB");

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
    msg.setTimeStamp(0.805129054249913);
    msg.setSource(57317U);
    msg.setSourceEntity(49U);
    msg.setDestination(21341U);
    msg.setDestinationEntity(83U);
    msg.value.assign("HLUYLGDSLBEXRNPXIMAPNDPBGDHGTSPSFUCYOAXMWCQZUJYNRICAQPTNCDVJNPZFOEISAWLJQOMRSATWBIHSEAXRWWDKKJKHFFXUOKLONYCDUDKJHOAYTVPSZCHMSZOPGTZVSJQRMDFYFYWTEXITNBEPLEQCKMRQGRXBFWJZMRUVLRQMKNJVDYNHFCHUPCSETKGBKTOXYZHFZVLQAEDBUEUQRE");

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
    msg.setTimeStamp(0.3624051266504239);
    msg.setSource(28431U);
    msg.setSourceEntity(231U);
    msg.setDestination(20745U);
    msg.setDestinationEntity(200U);
    const char tmp_msg_0[] = {42, 38, 38, 31, -70, -126, -31, 110, 118, -109, 113, 85, 9, -110, 82, 110, -52, -121, 95, -31, -27, 52, -128, -54, -91, 6, -68, 32, -58, 76, -16, -35, 87, -20, -5, -54, -46, 98, 85, 48, 109, -107, -89, -28, 91, 100, -112, -84, -57, -128, 27, 121, -3, -100, 3, -6, 4, -100, 16, -87, -69, -37, 0, 57, 25, -17, 70, -102, 110};
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
    msg.setTimeStamp(0.6177690507193089);
    msg.setSource(29101U);
    msg.setSourceEntity(124U);
    msg.setDestination(60617U);
    msg.setDestinationEntity(1U);
    const char tmp_msg_0[] = {56, 74, -47, -90, -124, -46, -63, -64, 118, 7, 66, 69, -112, -121, 83, 46, -116, -96, -53, -92, 113, -85, 105, -1, -94, -45, 60, -102, 125, -109, -70, 93, 45, -17, -94, -57, 54, 5, 35, -63, 41, -127, -118, -89, -24, -56, 27, -82, 80, 19, 15, 54, -44, 5, -95, 115, 123, 111, -17, 52, -71, 14, -104, 36, 34, 17, 59, -60, -112, -59, -13, -37, -43, 31, -92, -84, -36, -34, 88, 111, -57, 20, 16, 124, -9, 113, 55, -13, -26, -3, 36, -98, -27, 119, -108, 11, 53, -37, -58, -119, 14, 63, 37, 67, 60, 82, -89, -16, -112, 71, 2, 68, 14, -70, 119, -99, 23, -110, 66, -128, -76, 35, -113, -63, 70, -83, 118, 89, -112, -123, -112, -9, 48, 41, -37, -94, 42, 69, 24, -48, 69, -102, 90, -37, -44, -115, 14, 37, 96, -63, 8, -52, -113, -64, 103, 55, 108, 9, 113, 113, -101, 6, 85, 96, -38, -118, 106, 55, 81, -29, -63, 59, 99, 35, -16, 47, 15, -18, 50, -44, 3, -49, 69, -5, -83, 99, 117, 21, -65, -21, 109, -80, -56, -12, -115, 105, 44, -56, -24, -99, -12, -34, 1, 35, 10, -64, 117, -75, 38, -107, -64, -29, 80, -116, -21, 75, 80, -43, -19, -124, 28, -34, -16, 12, -115, -30, -74, 6, -89, 118, 36, 28, 2, 70, -62, -89, 105, -63};
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
    msg.setTimeStamp(0.1417863261619282);
    msg.setSource(44923U);
    msg.setSourceEntity(251U);
    msg.setDestination(13068U);
    msg.setDestinationEntity(248U);
    const char tmp_msg_0[] = {-67, -119, 99, 68, -103, -43, 13, -19, -97, 54, 97, -62, -99, -57, -70, 38, -63, -81, -5, -100, 98, 125, -70, 68, 62, -75, -44, -70, 19, 49, -58, 113, -108, 99, -68, 117, -49, 78, 87, 48, -10, 24, -125, 21, -50, 7, 71, 71, -108, -103, -13, -19, 33, -5, -57, 104, 24, 44, -14, -101, 75, 76, -95, -79, 78, 126, -116, 12, 10, -26, -51, -74, -57, -97, 63, 98, 42, 36, 112, 58, 50, -99, 48, -117, 93, 33, 18, -33, -85, -112, 64, 81};
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
    msg.setTimeStamp(0.4587637286874253);
    msg.setSource(9698U);
    msg.setSourceEntity(240U);
    msg.setDestination(8444U);
    msg.setDestinationEntity(172U);
    msg.type = 186U;
    msg.frequency = 601700055U;
    msg.min_range = 64157U;
    msg.max_range = 2667U;
    msg.bits_per_point = 200U;
    msg.scale_factor = 0.7925453940160531;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3859283325277396;
    tmp_msg_0.beam_height = 0.9085631410629625;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-71, -98, -102, -106, 15, -104, 21, 113, -50, 107, -22, 123, -16, 36, -94, -5, 110, -44, -75, 107, -103, -15, 25, 40, 7, 64, 46, 87, 14, 92, 117, 84, -116, 94, -14, 30, 68, -56, 39, -75, -82, -114, 102, 90, 102, -117, 98, -4, -40, -86, -111, 50, -114, 62, 72, 42, -48, 93, 63, 11, 27, -14, 66, 124, 10, 35, 58, -23, -67, 112, 20, 11, 118, -31, 27, 41, -86, 75, -55, 111, -47, 64, 121, -46, 105, -5, -81, -78, 66, 46, -38, -96, -43, 15, -87, -10, 92, -65, -40, -107, 65, -6, 20, -83, 37, 116, 76, -97, 103, 43, -57, -104, 14, -37, 74, 110, 67, 126, -8, -120, 26, 87, -64, -114, -43, 105, -22, 115, 126, 72, -56, 18, -27, 104, -114, 34, -21, 1, -10, -21, 32, 112, 3, 33, 5, 46, -123, -56, 50, 111, 48, 27, -44, 11, 52, 16, 82, -79, 40, -58, 107, -35, 38, -99, -106, 68, -125, 50, -30, 5, -112, -123, 24, -13, 63, -79, 18, -37, -125, -76, 104, 111, -49, -46, 100, -17, -65, -12, -77, -56, -59, -65, 102, 113, 109, 109, 120, -14, -60, -101, -125, -81, -58, -97, 110, 82, 48, -101, -29, -35, -48, 20, -42, 7, 67, 40, 97, -13, 48, -120, -107, -73, -68};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.47328575400648065);
    msg.setSource(52877U);
    msg.setSourceEntity(215U);
    msg.setDestination(26309U);
    msg.setDestinationEntity(152U);
    msg.type = 158U;
    msg.frequency = 204582010U;
    msg.min_range = 50071U;
    msg.max_range = 56198U;
    msg.bits_per_point = 88U;
    msg.scale_factor = 0.8610454547808709;
    const char tmp_msg_0[] = {23, 94, -30, 25, 112, 4, 67, -32, -85, -18, -101, -48, 103, 3, 88};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.6433428098833917);
    msg.setSource(40901U);
    msg.setSourceEntity(171U);
    msg.setDestination(53424U);
    msg.setDestinationEntity(42U);
    msg.type = 254U;
    msg.frequency = 2427432674U;
    msg.min_range = 17811U;
    msg.max_range = 55188U;
    msg.bits_per_point = 139U;
    msg.scale_factor = 0.8342444752993895;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8543865858033295;
    tmp_msg_0.beam_height = 0.5261430596918527;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-120, 11, -49, -122, 75, 68, 89, -104, 42, -47, 54, 9, 124, 1, -65, 89, -61, 75, 2, -9, -69, 94, 25, -73, -34, -87, 89, -20, -109, -118, -97, -115, 29, 8, 39, 9, -112, -15, 107, -123, 26, 1, -89, -87, 76, -48, -85, 95, -72, -126, -13, 88, 25, -56, 113, -78, 16, -90, -93, 27, 29, 113, -91, -104, -125, 33, -93, 73};
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
    msg.setTimeStamp(0.9195858722624353);
    msg.setSource(34833U);
    msg.setSourceEntity(157U);
    msg.setDestination(17891U);
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
    msg.setTimeStamp(0.8359453975409534);
    msg.setSource(46915U);
    msg.setSourceEntity(58U);
    msg.setDestination(41816U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.9227561574828663);
    msg.setSource(38195U);
    msg.setSourceEntity(45U);
    msg.setDestination(58862U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.6505413534668537);
    msg.setSource(7990U);
    msg.setSourceEntity(156U);
    msg.setDestination(22204U);
    msg.setDestinationEntity(112U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.1821592679225692);
    msg.setSource(22079U);
    msg.setSourceEntity(237U);
    msg.setDestination(442U);
    msg.setDestinationEntity(52U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.08338656594669269);
    msg.setSource(48474U);
    msg.setSourceEntity(248U);
    msg.setDestination(4226U);
    msg.setDestinationEntity(58U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.8966380510016208);
    msg.setSource(9782U);
    msg.setSourceEntity(12U);
    msg.setDestination(43105U);
    msg.setDestinationEntity(96U);
    msg.value = 0.3625702294355573;
    msg.confidence = 0.9268738584539037;
    msg.opmodes.assign("MWSKPGCVOZWUPXNSPBCCRFXILUEXKBJNPPNYHNHLUXZMLIPDQCANFOCQOMHYDZQUOKLYBEHQYKHBWYGDABQFSCJXMNGMJIMYTYIRNABGQREUJDOGGTTXIWDEBZFYDHLNHAZTQSPJLLDTBPBOAKHFNTLXRZYCZVXSVUXOKMSVUQUMUFCJZSXPRZWEWSEIV");

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
    msg.setTimeStamp(0.32855467527463433);
    msg.setSource(35813U);
    msg.setSourceEntity(233U);
    msg.setDestination(23804U);
    msg.setDestinationEntity(158U);
    msg.value = 0.14573695977443224;
    msg.confidence = 0.7978704227445256;
    msg.opmodes.assign("LAPONIDYAPTCGYKUXWLRCRCHVRYAJSPFBJKXUWESVGXFYTTLOQKKDYDOMGDIBFLFSHFKIVUGNRFLOWYQOQVARMAMZOPRXCOWEUKAZCMLZQAEWBPRNVUCWJAHQVDCQLFBRXYNSMPZPIIONDZCBGYEFMEWIMSSDBXJJTTYEOPLABGWU");

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
    msg.setTimeStamp(0.35873545386499206);
    msg.setSource(34932U);
    msg.setSourceEntity(188U);
    msg.setDestination(59011U);
    msg.setDestinationEntity(49U);
    msg.value = 0.41636561613775624;
    msg.confidence = 0.9069479845352538;
    msg.opmodes.assign("ORDUPVFCAGEPMITFJFLUD");

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
    msg.setTimeStamp(0.670407613303552);
    msg.setSource(11759U);
    msg.setSourceEntity(124U);
    msg.setDestination(6156U);
    msg.setDestinationEntity(13U);
    msg.itow = 2226851300U;
    msg.lat = 0.443222648311706;
    msg.lon = 0.9344564885401232;
    msg.height_ell = 0.027964006295523536;
    msg.height_sea = 0.6982463217827997;
    msg.hacc = 0.7953873563160938;
    msg.vacc = 0.1635787558448757;
    msg.vel_n = 0.15330097335398607;
    msg.vel_e = 0.39317098949950846;
    msg.vel_d = 0.2081977246374671;
    msg.speed = 0.4289471106070091;
    msg.gspeed = 0.73608338374512;
    msg.heading = 0.4131983869357587;
    msg.sacc = 0.9442772205865468;
    msg.cacc = 0.3055538236144676;

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
    msg.setTimeStamp(0.35487268106598524);
    msg.setSource(48988U);
    msg.setSourceEntity(21U);
    msg.setDestination(29198U);
    msg.setDestinationEntity(243U);
    msg.itow = 578197712U;
    msg.lat = 0.8791776522659168;
    msg.lon = 0.17897143817358407;
    msg.height_ell = 0.9492377293099472;
    msg.height_sea = 0.4821230782401287;
    msg.hacc = 0.5819593918975025;
    msg.vacc = 0.17606727142327783;
    msg.vel_n = 0.3087052204623836;
    msg.vel_e = 0.6962262001379469;
    msg.vel_d = 0.5525704629902959;
    msg.speed = 0.6349383582031024;
    msg.gspeed = 0.5037885773015024;
    msg.heading = 0.46663013608510495;
    msg.sacc = 0.23490942693362304;
    msg.cacc = 0.41023870345410873;

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
    msg.setTimeStamp(0.0018433851568377957);
    msg.setSource(25264U);
    msg.setSourceEntity(77U);
    msg.setDestination(23190U);
    msg.setDestinationEntity(241U);
    msg.itow = 2654628290U;
    msg.lat = 0.24258014945946538;
    msg.lon = 0.07246258659024063;
    msg.height_ell = 0.2948381910554285;
    msg.height_sea = 0.21047902897918935;
    msg.hacc = 0.18552463353956639;
    msg.vacc = 0.4876297902068989;
    msg.vel_n = 0.14359574156893706;
    msg.vel_e = 0.08167767139939641;
    msg.vel_d = 0.9227875063371914;
    msg.speed = 0.5288745954159249;
    msg.gspeed = 0.5370032307144225;
    msg.heading = 0.7608492468909208;
    msg.sacc = 0.040155738327172785;
    msg.cacc = 0.8419461684914146;

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
    msg.setTimeStamp(0.890039813222507);
    msg.setSource(50972U);
    msg.setSourceEntity(37U);
    msg.setDestination(59982U);
    msg.setDestinationEntity(137U);
    msg.id = 167U;
    msg.value = 0.5396146975528111;

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
    msg.setTimeStamp(0.664510982244776);
    msg.setSource(15705U);
    msg.setSourceEntity(35U);
    msg.setDestination(31160U);
    msg.setDestinationEntity(252U);
    msg.id = 190U;
    msg.value = 0.6568757395160904;

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
    msg.setTimeStamp(0.5203107030650057);
    msg.setSource(2272U);
    msg.setSourceEntity(95U);
    msg.setDestination(31371U);
    msg.setDestinationEntity(130U);
    msg.id = 227U;
    msg.value = 0.9170402301092948;

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
    msg.setTimeStamp(0.7312359237655907);
    msg.setSource(2835U);
    msg.setSourceEntity(103U);
    msg.setDestination(31021U);
    msg.setDestinationEntity(18U);
    msg.x = 0.13316844987906962;
    msg.y = 0.045330814671510455;
    msg.z = 0.6144781541009299;
    msg.phi = 0.1587322964578427;
    msg.theta = 0.49731057317548255;
    msg.psi = 0.379116345986354;

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
    msg.setTimeStamp(0.5738183718590374);
    msg.setSource(30868U);
    msg.setSourceEntity(115U);
    msg.setDestination(2343U);
    msg.setDestinationEntity(180U);
    msg.x = 0.9758430576522724;
    msg.y = 0.12920674074778093;
    msg.z = 0.36435570172804543;
    msg.phi = 0.1417352400927968;
    msg.theta = 0.3146023258754157;
    msg.psi = 0.39123701689545687;

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
    msg.setTimeStamp(0.1908597054968496);
    msg.setSource(33468U);
    msg.setSourceEntity(4U);
    msg.setDestination(50436U);
    msg.setDestinationEntity(118U);
    msg.x = 0.9345506781386826;
    msg.y = 0.8212155247618841;
    msg.z = 0.9045398074667956;
    msg.phi = 0.5245142303917804;
    msg.theta = 0.9237510191621658;
    msg.psi = 0.34881679411980926;

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
    msg.setTimeStamp(0.5964235391445735);
    msg.setSource(32838U);
    msg.setSourceEntity(54U);
    msg.setDestination(49741U);
    msg.setDestinationEntity(101U);
    msg.beam_width = 0.3226564433529896;
    msg.beam_height = 0.8006811773817908;

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
    msg.setTimeStamp(0.25087353620645547);
    msg.setSource(16811U);
    msg.setSourceEntity(73U);
    msg.setDestination(23422U);
    msg.setDestinationEntity(197U);
    msg.beam_width = 0.8525421982589658;
    msg.beam_height = 0.19949330620018402;

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
    msg.setTimeStamp(0.64381051074788);
    msg.setSource(2058U);
    msg.setSourceEntity(126U);
    msg.setDestination(24646U);
    msg.setDestinationEntity(131U);
    msg.beam_width = 0.7963362879881872;
    msg.beam_height = 0.4243698971001537;

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
    msg.setTimeStamp(0.901939244357128);
    msg.setSource(55922U);
    msg.setSourceEntity(208U);
    msg.setDestination(37404U);
    msg.setDestinationEntity(123U);
    msg.sane = 59U;

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
    msg.setTimeStamp(0.2477901226104774);
    msg.setSource(18906U);
    msg.setSourceEntity(109U);
    msg.setDestination(62224U);
    msg.setDestinationEntity(100U);
    msg.sane = 179U;

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
    msg.setTimeStamp(0.34247953442670265);
    msg.setSource(56993U);
    msg.setSourceEntity(180U);
    msg.setDestination(61628U);
    msg.setDestinationEntity(116U);
    msg.sane = 80U;

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
    msg.setTimeStamp(0.05290328703933844);
    msg.setSource(813U);
    msg.setSourceEntity(104U);
    msg.setDestination(11105U);
    msg.setDestinationEntity(245U);
    msg.value = 0.24955216056425567;

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
    msg.setTimeStamp(0.614290264856912);
    msg.setSource(45481U);
    msg.setSourceEntity(33U);
    msg.setDestination(63958U);
    msg.setDestinationEntity(18U);
    msg.value = 0.8569368303955665;

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
    msg.setTimeStamp(0.2009085766657005);
    msg.setSource(3777U);
    msg.setSourceEntity(0U);
    msg.setDestination(52852U);
    msg.setDestinationEntity(13U);
    msg.value = 0.7938853794967544;

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
    msg.setTimeStamp(0.8718524021843588);
    msg.setSource(11864U);
    msg.setSourceEntity(220U);
    msg.setDestination(54842U);
    msg.setDestinationEntity(232U);
    msg.value = 0.652370511801687;

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
    msg.setTimeStamp(0.3690285487926662);
    msg.setSource(36203U);
    msg.setSourceEntity(125U);
    msg.setDestination(46460U);
    msg.setDestinationEntity(116U);
    msg.value = 0.9994665528829307;

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
    msg.setTimeStamp(0.4709174729702994);
    msg.setSource(51779U);
    msg.setSourceEntity(252U);
    msg.setDestination(19143U);
    msg.setDestinationEntity(97U);
    msg.value = 0.005749074456351533;

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
    msg.setTimeStamp(0.2522667382820908);
    msg.setSource(61945U);
    msg.setSourceEntity(139U);
    msg.setDestination(37372U);
    msg.setDestinationEntity(159U);
    msg.value = 0.11441419112881512;

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
    msg.setTimeStamp(0.2957178509163009);
    msg.setSource(48237U);
    msg.setSourceEntity(41U);
    msg.setDestination(38841U);
    msg.setDestinationEntity(201U);
    msg.value = 0.40941877932106174;

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
    msg.setTimeStamp(0.32301326537964825);
    msg.setSource(15827U);
    msg.setSourceEntity(112U);
    msg.setDestination(2029U);
    msg.setDestinationEntity(253U);
    msg.value = 0.964749375532757;

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
    msg.setTimeStamp(0.8770753642397967);
    msg.setSource(10710U);
    msg.setSourceEntity(169U);
    msg.setDestination(60934U);
    msg.setDestinationEntity(218U);
    msg.value = 0.9785131137028071;

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
    msg.setTimeStamp(0.40245639325900984);
    msg.setSource(35972U);
    msg.setSourceEntity(9U);
    msg.setDestination(39579U);
    msg.setDestinationEntity(30U);
    msg.value = 0.6418854684945626;

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
    msg.setTimeStamp(0.6083561147065811);
    msg.setSource(3104U);
    msg.setSourceEntity(76U);
    msg.setDestination(57291U);
    msg.setDestinationEntity(42U);
    msg.value = 0.6132790586822892;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.7314499685459519);
    msg.setSource(15419U);
    msg.setSourceEntity(247U);
    msg.setDestination(37068U);
    msg.setDestinationEntity(63U);
    msg.id = 104U;
    msg.zoom = 135U;
    msg.action = 184U;

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
    msg.setTimeStamp(0.9416739946960853);
    msg.setSource(11247U);
    msg.setSourceEntity(188U);
    msg.setDestination(58465U);
    msg.setDestinationEntity(7U);
    msg.id = 178U;
    msg.zoom = 26U;
    msg.action = 165U;

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
    msg.setTimeStamp(0.9199871670583085);
    msg.setSource(5147U);
    msg.setSourceEntity(119U);
    msg.setDestination(3435U);
    msg.setDestinationEntity(1U);
    msg.id = 154U;
    msg.zoom = 42U;
    msg.action = 45U;

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
    msg.setTimeStamp(0.3617132051259122);
    msg.setSource(43781U);
    msg.setSourceEntity(92U);
    msg.setDestination(59966U);
    msg.setDestinationEntity(49U);
    msg.id = 122U;
    msg.value = 0.06610219241631721;

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
    msg.setTimeStamp(0.34336701762613);
    msg.setSource(25259U);
    msg.setSourceEntity(9U);
    msg.setDestination(62290U);
    msg.setDestinationEntity(200U);
    msg.id = 134U;
    msg.value = 0.4193431219041217;

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
    msg.setTimeStamp(0.7779022041546015);
    msg.setSource(35753U);
    msg.setSourceEntity(157U);
    msg.setDestination(18588U);
    msg.setDestinationEntity(47U);
    msg.id = 35U;
    msg.value = 0.6101574492900916;

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
    msg.setTimeStamp(0.9666596337554224);
    msg.setSource(48085U);
    msg.setSourceEntity(39U);
    msg.setDestination(32886U);
    msg.setDestinationEntity(253U);
    msg.id = 107U;
    msg.value = 0.7290966361359004;

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
    msg.setTimeStamp(0.5919528312788407);
    msg.setSource(3552U);
    msg.setSourceEntity(229U);
    msg.setDestination(41615U);
    msg.setDestinationEntity(221U);
    msg.id = 128U;
    msg.value = 0.41994959731853343;

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
    msg.setTimeStamp(0.04047403181655995);
    msg.setSource(3093U);
    msg.setSourceEntity(38U);
    msg.setDestination(28606U);
    msg.setDestinationEntity(214U);
    msg.id = 125U;
    msg.value = 0.5443972738014577;

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
    msg.setTimeStamp(0.4436777278345617);
    msg.setSource(29824U);
    msg.setSourceEntity(5U);
    msg.setDestination(16881U);
    msg.setDestinationEntity(26U);
    msg.id = 57U;
    msg.angle = 0.35579628029082166;

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
    msg.setTimeStamp(0.34416332633421);
    msg.setSource(46370U);
    msg.setSourceEntity(252U);
    msg.setDestination(16966U);
    msg.setDestinationEntity(141U);
    msg.id = 35U;
    msg.angle = 0.5879653353291742;

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
    msg.setTimeStamp(0.6375384027460433);
    msg.setSource(5936U);
    msg.setSourceEntity(67U);
    msg.setDestination(45504U);
    msg.setDestinationEntity(221U);
    msg.id = 248U;
    msg.angle = 0.6890018076574161;

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
    msg.setTimeStamp(0.5419696808740913);
    msg.setSource(44332U);
    msg.setSourceEntity(176U);
    msg.setDestination(30492U);
    msg.setDestinationEntity(183U);
    msg.op = 244U;
    msg.actions.assign("FMXJPFQVUUMQOFUEWAXZIRWRSBASXIYQDCVESYGRJVJLZPOLLJYXIHXKNKRUPKCOTCOTZVNPHTVURTIGJHFAVBQBHTMRNKJHRSOKDXWYVNTLHBAKAZDDUOEGIMSWRKMFIRFGCNSUA");

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
    msg.setTimeStamp(0.10659727734029611);
    msg.setSource(45663U);
    msg.setSourceEntity(25U);
    msg.setDestination(49252U);
    msg.setDestinationEntity(79U);
    msg.op = 112U;
    msg.actions.assign("PHTZNKOQPLGCQOFBIXCZAHWCGNIEKCTHUXDZILBKSAQMCEULFYQLVCRNDZUOONTVBWQMAFQTZVLNZJESVFXZVYGTUYBFTVWWJBHZHLJGFVSMROJFOLKEQGABLWSWWSEIYCASDVHNJMLDDKGBURHHHPHDQQ");

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
    msg.setTimeStamp(0.020168317438919225);
    msg.setSource(30378U);
    msg.setSourceEntity(74U);
    msg.setDestination(64699U);
    msg.setDestinationEntity(29U);
    msg.op = 30U;
    msg.actions.assign("IAUPAGCMEPOVRCVHWVSATFZCUGQULXFMHJSKZHIYEGPEYOXMTORDSNZTWZNTQACZTULAEMYZIJWRDJGLWPIFQGEMES");

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
    msg.setTimeStamp(0.7471151041319432);
    msg.setSource(42413U);
    msg.setSourceEntity(139U);
    msg.setDestination(19742U);
    msg.setDestinationEntity(206U);
    msg.actions.assign("GWIJTMJLHBIUX");

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
    msg.setTimeStamp(0.4560898784349309);
    msg.setSource(51463U);
    msg.setSourceEntity(181U);
    msg.setDestination(30041U);
    msg.setDestinationEntity(7U);
    msg.actions.assign("RXKOBLPNLOBZTWFZZPDLKAUPFNXDKGUWMQJELLUGRTPALAMVCXHGUHUWUOTCXSMDXYQFZYWHBFMFTXECLNSJFJEREJONKEEYNYVCIHJPQXARHIOEIRQECQGJMUDIMTGZVIRHEHNQHZLWWOVBBYUITOLVQNMHGKVRVWYZBZCAVQSPSSIGKSSMODSDZXCPDHAIYQYCX");

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
    msg.setTimeStamp(0.30826627366728965);
    msg.setSource(9358U);
    msg.setSourceEntity(37U);
    msg.setDestination(64932U);
    msg.setDestinationEntity(199U);
    msg.actions.assign("SNISILBQINGNHIHSUQYODCVFAUPFZQVWBHLYRMDKIJBZDTSIFXPNCSFZXORKQJCGJUNAQFB");

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
    msg.setTimeStamp(0.2389932431119992);
    msg.setSource(5311U);
    msg.setSourceEntity(39U);
    msg.setDestination(5978U);
    msg.setDestinationEntity(220U);
    msg.button = 227U;
    msg.value = 87U;

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
    msg.setTimeStamp(0.4503641153202065);
    msg.setSource(2553U);
    msg.setSourceEntity(104U);
    msg.setDestination(57216U);
    msg.setDestinationEntity(243U);
    msg.button = 230U;
    msg.value = 235U;

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
    msg.setTimeStamp(0.5445532496368503);
    msg.setSource(14734U);
    msg.setSourceEntity(189U);
    msg.setDestination(13600U);
    msg.setDestinationEntity(189U);
    msg.button = 65U;
    msg.value = 129U;

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
    msg.setTimeStamp(0.10939816016962511);
    msg.setSource(3630U);
    msg.setSourceEntity(52U);
    msg.setDestination(38434U);
    msg.setDestinationEntity(77U);
    msg.op = 79U;
    msg.text.assign("SUVSPSFDLNTSFYRTOMQKOWKCINRSVBSVORIDZAEA");

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
    msg.setTimeStamp(0.7520375257401699);
    msg.setSource(50841U);
    msg.setSourceEntity(62U);
    msg.setDestination(30102U);
    msg.setDestinationEntity(169U);
    msg.op = 120U;
    msg.text.assign("PZNPERJUQTRHLNBUIAQXAKOMGAKUJUIFWFSOEBXSYIFYHEGQIBLSLKSOCSNVNKHDZZYGKTLVRDONYPMBXDJCHTRPFWHWFSPJNMRUKSQTZVHEOORHFGKIUBVVGKAYX");

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
    msg.setTimeStamp(0.8681400160902608);
    msg.setSource(7050U);
    msg.setSourceEntity(59U);
    msg.setDestination(25415U);
    msg.setDestinationEntity(214U);
    msg.op = 220U;
    msg.text.assign("CDNRNYWAVEXQMWXVWTZKBUTSXWMOSPQKARQJHRRZYSBTHBKMSEUUPXQTVILBQIRPOTBWFVLNOJLHUDNSMNWFGGVZOGTBVWPJOYKYBEDCRNOLJHCMICZXKZIDBWJEDTEAKQFOMJRRLSFCEPPVYUJVFSLBHGEP");

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
    msg.setTimeStamp(0.7268057226850135);
    msg.setSource(63869U);
    msg.setSourceEntity(178U);
    msg.setDestination(9996U);
    msg.setDestinationEntity(24U);
    msg.op = 146U;
    msg.time_remain = 0.9990054902828914;
    msg.sched_time = 0.9514838916934859;

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
    msg.setTimeStamp(0.18114619034861923);
    msg.setSource(33426U);
    msg.setSourceEntity(213U);
    msg.setDestination(60470U);
    msg.setDestinationEntity(21U);
    msg.op = 210U;
    msg.time_remain = 0.14904966323665847;
    msg.sched_time = 0.11938924968147913;

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
    msg.setTimeStamp(0.05371045037766797);
    msg.setSource(8837U);
    msg.setSourceEntity(182U);
    msg.setDestination(382U);
    msg.setDestinationEntity(176U);
    msg.op = 196U;
    msg.time_remain = 0.3021753824753167;
    msg.sched_time = 0.4688616884489083;

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
    msg.setTimeStamp(0.953447876487603);
    msg.setSource(18571U);
    msg.setSourceEntity(149U);
    msg.setDestination(62201U);
    msg.setDestinationEntity(67U);
    msg.name.assign("OZVZKZXBIMIFNVVFEXXXODJOYPIFCMRWHOZOZMDNTRXEKPPJFKHEQBSJLGIVGEYEAUNJFSDGGWPDMPIUPDWKLXDBVWMAARETRYWXDMHOYAEZSTKUGGHLTFLLEWQYPJYVWNMNMBFTIZCMYEXVPSUNKMPBYOACWSHQJFAIQSSJENROBLZKTGHJRBGDFALNQZCWB");
    msg.op = 68U;
    msg.sched_time = 0.4405698960986393;

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
    msg.setTimeStamp(0.5149067333217946);
    msg.setSource(22835U);
    msg.setSourceEntity(174U);
    msg.setDestination(56289U);
    msg.setDestinationEntity(219U);
    msg.name.assign("KILKEUSJDQCWOSEXTJJCIGWUHHTAVPHVRXBZIJBQENGNHIFKKPCOWJCUMWDVJZYOMWTQWLMPZBUWMFLHBURXRVTDGZXMUZURMXTYZSBNGJHETLFELAZTIMLKAVSKPVQTEQXYSXOJYWCYSCNLONOFFZIRGSYGCSUAEWVMVEN");
    msg.op = 83U;
    msg.sched_time = 0.39838422384408334;

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
    msg.setTimeStamp(0.7281242076892029);
    msg.setSource(61649U);
    msg.setSourceEntity(18U);
    msg.setDestination(34179U);
    msg.setDestinationEntity(102U);
    msg.name.assign("AUUPQZIUKEZAPDSWWMPSTYQHPAIXUGVLXSWEEJTNVVORMNPDWPNEKGUARMEOEJPFTPIWTNOBCHBUOYGMZOXJLDCYIRUDMZAFQCRFODXIVHMSCQHRYRPIYMSKZDJWKKCLJQBJELVTFOZNIFVYYHQHGUAOYKDASNIRTNTEFPFBCDMXGKB");
    msg.op = 222U;
    msg.sched_time = 0.9059041133434237;

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
    msg.setTimeStamp(0.19986733028344572);
    msg.setSource(26590U);
    msg.setSourceEntity(77U);
    msg.setDestination(43994U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.8963656340643019);
    msg.setSource(23446U);
    msg.setSourceEntity(212U);
    msg.setDestination(56235U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.6975650356905547);
    msg.setSource(53961U);
    msg.setSourceEntity(134U);
    msg.setDestination(27406U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.5557673771609501);
    msg.setSource(4227U);
    msg.setSourceEntity(227U);
    msg.setDestination(11964U);
    msg.setDestinationEntity(27U);
    msg.name.assign("ELBPFYXZTQAOJFUEXENKUGNGMISFNJLECULTAOLQAHQTZWHXEFJPHKHGLKFJBBCZPZXPTRNCZPBKYPWDVBYJOTNINHADACBBYYUDBOXZSSERVPMARSPEGVYQLIXOJJOPFVFKOYICVLSNWHWNMVERTGXGJRZNWDGZSYRAUHVWMDQVWZTHK");
    msg.state = 53U;

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
    msg.setTimeStamp(0.2085291586848539);
    msg.setSource(56350U);
    msg.setSourceEntity(10U);
    msg.setDestination(33067U);
    msg.setDestinationEntity(126U);
    msg.name.assign("NROHRRGJDOJMZHQEDSWGVECZKAWB");
    msg.state = 218U;

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
    msg.setTimeStamp(0.2625201394732789);
    msg.setSource(60036U);
    msg.setSourceEntity(196U);
    msg.setDestination(26998U);
    msg.setDestinationEntity(110U);
    msg.name.assign("QOIQNSRMGNNIAAMXQWQBMIKOFYSLUPNZPUWWMACRPXOTRWEHVTFMZKGTSTPBWNFXBAJIUSDHSJOFFNUFEVYGGHVYGHQGQOZKGWRZZCGPXDYLVXECJWDQVFOTHNPUJKBYNRKDMQXWVUDKURLBOMETXMRPCFEXCYAECHTSIZYCZYCOLWJJNXERRQHQPTXRSKBGKAZLFYHPSGODZAICDBLHZMSNAJPFEJDWJTKIVLVD");
    msg.state = 107U;

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
    msg.setTimeStamp(0.3488979819651463);
    msg.setSource(41781U);
    msg.setSourceEntity(1U);
    msg.setDestination(45127U);
    msg.setDestinationEntity(2U);
    msg.name.assign("IAPMIFRAAWRLHSYTVXUWGLTCOMDJHQAAETETKOBSXQBXCENAYICUZTUJAGNEHPJLSUPHDNOFHVPZNDYOWBN");
    msg.value = 117U;

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
    msg.setTimeStamp(0.04221662124036174);
    msg.setSource(855U);
    msg.setSourceEntity(163U);
    msg.setDestination(60059U);
    msg.setDestinationEntity(25U);
    msg.name.assign("XETRMAMJCICXYEFTHOPHFXAONLHXAXJHVUQLRKSDBZWDNEOPJVGRGNBRCBOMAHXRAKNSG");
    msg.value = 13U;

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
    msg.setTimeStamp(0.5635124418848153);
    msg.setSource(4287U);
    msg.setSourceEntity(24U);
    msg.setDestination(28650U);
    msg.setDestinationEntity(250U);
    msg.name.assign("MSSAIUHSOOYSZJVHFOVJFWQUNQTVVOEHWJZYXQKECGLWZUARRJJYZQCERDZWNDXUZWNUPQCJBGTCBBARHAPSRTUTCDFMGWIBXLAVLEGPPOKGXWRFKEMAFLOBOTGTKXNIEZMYKWLLGSYFMIYKCMTJZQXUIPL");
    msg.value = 35U;

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
    msg.setTimeStamp(0.8039063152333582);
    msg.setSource(16382U);
    msg.setSourceEntity(0U);
    msg.setDestination(41993U);
    msg.setDestinationEntity(242U);
    msg.name.assign("KKSOQKRCIMWOLDXCZVAOOFBNZGNVJJBQEECYPMHIEHNAOVRKUXVHSPXZYVJBGGIWOJODHMPFHABGRYCQJXBOIABXYVSXMKYWUNDCUSAERTDJYHPQOJA");

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
    msg.setTimeStamp(0.18988791107542569);
    msg.setSource(4625U);
    msg.setSourceEntity(242U);
    msg.setDestination(19468U);
    msg.setDestinationEntity(153U);
    msg.name.assign("WDCRWXIIGTDEKZRGKDCRINBWYSAQEROJSNWPHYOGKVYOFAGWARRKOXRTNBVGBMGIUQUILMOCJSOFNHVMDYNHBVCDUJCHYJSBEOZFLBJYGUWCKJXVFFGSSPXXIDEULKSBHQSHEOMENVZVNAMHXGITLGQAPQKHZPCMYWYFVKTJQJMEUEICXNSPCPEP");

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
    msg.setTimeStamp(0.1393576444448994);
    msg.setSource(52694U);
    msg.setSourceEntity(52U);
    msg.setDestination(15485U);
    msg.setDestinationEntity(243U);
    msg.name.assign("FYNJIBIHEMYILBPABHBUQPNQZOVUFCTRXEXGZCAPDLRQONHGZMYWCMCHZLZQLYIZCVVQGBTBRTOYXWHYHOEHMDWCNCEQFBYEJMTKYINKCLIDIDFGISPEXKXFZRZVPJUMJNUXNWNEGLUVJUVSXAGHSTZIEAATSOAEDMDKSFSNSUUJWDWQVJNGWDOAPWMWLTEKURQKKRXLAKJRBHSZQRKUWPTKGOCOGHXYMFBVTJGFSSQPTPVAYXLMPCIAOBR");

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
    msg.setTimeStamp(0.29049131791878247);
    msg.setSource(61637U);
    msg.setSourceEntity(8U);
    msg.setDestination(20346U);
    msg.setDestinationEntity(175U);
    msg.name.assign("GWNELMNDSTIUJCUHLRPCLPVJVAFRQWXLTVPEFDFDGXEDUHMYGZAUTFVUPBAIONWVPIWBGRTGJBRKEUAMFZOJWYVKSOEMJMDVQIMEDOKTIYKQORZPROZNGAULQLUBHEHHQQBIQKNLFEXYSHXOPIQJYQPYSORKLLCHJBXWSGNEHSWGRUKKRWXTWCDJDNMSMZXTCFCFSISCXP");
    msg.value = 19U;

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
    msg.setTimeStamp(0.5233180265201974);
    msg.setSource(30632U);
    msg.setSourceEntity(141U);
    msg.setDestination(12128U);
    msg.setDestinationEntity(198U);
    msg.name.assign("EEOYMZKTNJPJDTKQBUZLQIQIEBLMGETRXOGBDNUXMXIDFLAOYTOJEJQHTOJIXVKCVVHXBZWSDNUHXRVLRFUFJICGQDSFJWICSWUIYHEURBWCVRXINTOPFMNMQZWDMSPEJXYYSRU");
    msg.value = 14U;

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
    msg.setTimeStamp(0.9616630492050628);
    msg.setSource(24994U);
    msg.setSourceEntity(129U);
    msg.setDestination(14433U);
    msg.setDestinationEntity(80U);
    msg.name.assign("SYLCHZKWFCTQLENZARJESYTPRUNDXBEWZDDEWGPVJFNMYWKBANGSXWOIVKRBJGVFRJCYOVJDIEWTGU");
    msg.value = 224U;

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
    msg.setTimeStamp(0.6313736153801135);
    msg.setSource(16465U);
    msg.setSourceEntity(81U);
    msg.setDestination(4746U);
    msg.setDestinationEntity(129U);
    msg.id = 215U;
    msg.period = 2237572554U;
    msg.duty_cycle = 4086434816U;

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
    msg.setTimeStamp(0.3099033185008768);
    msg.setSource(53418U);
    msg.setSourceEntity(209U);
    msg.setDestination(35329U);
    msg.setDestinationEntity(182U);
    msg.id = 212U;
    msg.period = 4269187052U;
    msg.duty_cycle = 2834724362U;

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
    msg.setTimeStamp(0.7380997639257852);
    msg.setSource(55232U);
    msg.setSourceEntity(104U);
    msg.setDestination(18581U);
    msg.setDestinationEntity(233U);
    msg.id = 213U;
    msg.period = 859382914U;
    msg.duty_cycle = 776398627U;

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
    msg.setTimeStamp(0.263504250871088);
    msg.setSource(866U);
    msg.setSourceEntity(37U);
    msg.setDestination(39457U);
    msg.setDestinationEntity(158U);
    msg.id = 215U;
    msg.period = 2207588651U;
    msg.duty_cycle = 1258277076U;

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
    msg.setTimeStamp(0.6543235999572296);
    msg.setSource(51625U);
    msg.setSourceEntity(163U);
    msg.setDestination(18297U);
    msg.setDestinationEntity(126U);
    msg.id = 174U;
    msg.period = 2885679511U;
    msg.duty_cycle = 506136183U;

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
    msg.setTimeStamp(0.22944731313616362);
    msg.setSource(59504U);
    msg.setSourceEntity(181U);
    msg.setDestination(29358U);
    msg.setDestinationEntity(227U);
    msg.id = 245U;
    msg.period = 1073682907U;
    msg.duty_cycle = 2035889069U;

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
    msg.setTimeStamp(0.26514416792008555);
    msg.setSource(18992U);
    msg.setSourceEntity(43U);
    msg.setDestination(57016U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.9433087369627424;
    msg.lon = 0.01486241220560347;
    msg.height = 0.1455296491252448;
    msg.x = 0.22315803235331888;
    msg.y = 0.18064446911086218;
    msg.z = 0.6255375054670839;
    msg.phi = 0.8604489804030796;
    msg.theta = 0.360954904520165;
    msg.psi = 0.3522708911091267;
    msg.u = 0.6203322768200462;
    msg.v = 0.6050894023176275;
    msg.w = 0.0759077086237191;
    msg.vx = 0.10184073919086134;
    msg.vy = 0.8822102371026027;
    msg.vz = 0.5149358822401378;
    msg.p = 0.07889410298984434;
    msg.q = 0.6664229682198838;
    msg.r = 0.5181373914382512;
    msg.depth = 0.9876213614005892;
    msg.alt = 0.5455366969139199;

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
    msg.setTimeStamp(0.24912136541383068);
    msg.setSource(42342U);
    msg.setSourceEntity(72U);
    msg.setDestination(23652U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.8868882423523281;
    msg.lon = 0.12694095578697362;
    msg.height = 0.6066255441422004;
    msg.x = 0.1713396751832229;
    msg.y = 0.35625272759305715;
    msg.z = 0.31924605906725023;
    msg.phi = 0.34002468481376336;
    msg.theta = 0.4455223627792677;
    msg.psi = 0.9720561568698373;
    msg.u = 0.1639397066771764;
    msg.v = 0.12537601255160524;
    msg.w = 0.8566075687997752;
    msg.vx = 0.1722189474199286;
    msg.vy = 0.251997274486667;
    msg.vz = 0.38424506507675327;
    msg.p = 0.23838621236130864;
    msg.q = 0.0522778499634553;
    msg.r = 0.12139472576322807;
    msg.depth = 0.9058604199774518;
    msg.alt = 0.16739172421751214;

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
    msg.setTimeStamp(0.17080371318537924);
    msg.setSource(45347U);
    msg.setSourceEntity(58U);
    msg.setDestination(55635U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.5817056283027803;
    msg.lon = 0.3067801788378235;
    msg.height = 0.9718842967833747;
    msg.x = 0.9781768226131086;
    msg.y = 0.9403451222635653;
    msg.z = 0.9298162445518189;
    msg.phi = 0.43649429922504046;
    msg.theta = 0.2958827637115866;
    msg.psi = 0.8246987105553406;
    msg.u = 0.758439495571157;
    msg.v = 0.5114422167399567;
    msg.w = 0.9094207698003576;
    msg.vx = 0.5746842667841048;
    msg.vy = 0.8074946278628451;
    msg.vz = 0.4458885848545149;
    msg.p = 0.5365691540448186;
    msg.q = 0.9817918804790672;
    msg.r = 0.5939806750723043;
    msg.depth = 0.17034702674421764;
    msg.alt = 0.3416132545521072;

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
    msg.setTimeStamp(0.5611747861090786);
    msg.setSource(10995U);
    msg.setSourceEntity(141U);
    msg.setDestination(10579U);
    msg.setDestinationEntity(51U);
    msg.x = 0.6482119018905512;
    msg.y = 0.8347474336827014;
    msg.z = 0.9426832469589568;

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
    msg.setTimeStamp(0.91932423597687);
    msg.setSource(64652U);
    msg.setSourceEntity(177U);
    msg.setDestination(394U);
    msg.setDestinationEntity(203U);
    msg.x = 0.15548465063193173;
    msg.y = 0.18974109158989683;
    msg.z = 0.5785861542245655;

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
    msg.setTimeStamp(0.49801475102086);
    msg.setSource(44275U);
    msg.setSourceEntity(209U);
    msg.setDestination(8275U);
    msg.setDestinationEntity(235U);
    msg.x = 0.9341007759014517;
    msg.y = 0.23094930239370748;
    msg.z = 0.22945886653916026;

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
    msg.setTimeStamp(0.37782018750404844);
    msg.setSource(23576U);
    msg.setSourceEntity(70U);
    msg.setDestination(54930U);
    msg.setDestinationEntity(105U);
    msg.value = 0.1768261089359242;

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
    msg.setTimeStamp(0.22352219549674335);
    msg.setSource(56921U);
    msg.setSourceEntity(203U);
    msg.setDestination(20265U);
    msg.setDestinationEntity(9U);
    msg.value = 0.9593992301626473;

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
    msg.setTimeStamp(0.6811042202845937);
    msg.setSource(53746U);
    msg.setSourceEntity(70U);
    msg.setDestination(55395U);
    msg.setDestinationEntity(235U);
    msg.value = 0.006327084480406975;

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
    msg.setTimeStamp(0.5055294513672413);
    msg.setSource(29499U);
    msg.setSourceEntity(225U);
    msg.setDestination(5278U);
    msg.setDestinationEntity(8U);
    msg.value = 0.8131425176827476;

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
    msg.setTimeStamp(0.4294378638563767);
    msg.setSource(15512U);
    msg.setSourceEntity(221U);
    msg.setDestination(33095U);
    msg.setDestinationEntity(33U);
    msg.value = 0.5970437213863345;

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
    msg.setTimeStamp(0.806071196616211);
    msg.setSource(55461U);
    msg.setSourceEntity(218U);
    msg.setDestination(14519U);
    msg.setDestinationEntity(125U);
    msg.value = 0.01031476011596999;

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
    msg.setTimeStamp(0.06555224878181332);
    msg.setSource(31922U);
    msg.setSourceEntity(171U);
    msg.setDestination(37387U);
    msg.setDestinationEntity(201U);
    msg.x = 0.9760245574177138;
    msg.y = 0.8757639079211434;
    msg.z = 0.603623486083936;
    msg.phi = 0.6243146290880469;
    msg.theta = 0.3509072053314838;
    msg.psi = 0.07804027757891285;
    msg.p = 0.9928558220016167;
    msg.q = 0.1286057041492058;
    msg.r = 0.7119739557032101;
    msg.u = 0.7304605357813043;
    msg.v = 0.7453654485357006;
    msg.w = 0.29132132712777115;
    msg.bias_psi = 0.8510015244256359;
    msg.bias_r = 0.7594650287567292;

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
    msg.setTimeStamp(0.08986262949380774);
    msg.setSource(62911U);
    msg.setSourceEntity(252U);
    msg.setDestination(17821U);
    msg.setDestinationEntity(48U);
    msg.x = 0.8502492283364094;
    msg.y = 0.49125610385491925;
    msg.z = 0.41199273761523936;
    msg.phi = 0.27122173227110746;
    msg.theta = 0.14953898413216626;
    msg.psi = 0.21586595526453878;
    msg.p = 0.8250050927476484;
    msg.q = 0.6159546767461979;
    msg.r = 0.36764836491364516;
    msg.u = 0.038953619634839676;
    msg.v = 0.466415030273451;
    msg.w = 0.05814017547682648;
    msg.bias_psi = 0.18298468651929456;
    msg.bias_r = 0.5152988248139321;

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
    msg.setTimeStamp(0.6818722096624464);
    msg.setSource(5653U);
    msg.setSourceEntity(196U);
    msg.setDestination(61333U);
    msg.setDestinationEntity(168U);
    msg.x = 0.8866611793679817;
    msg.y = 0.3412056374019775;
    msg.z = 0.864964226366114;
    msg.phi = 0.6963482354132381;
    msg.theta = 0.9671977987511287;
    msg.psi = 0.8865342762825822;
    msg.p = 0.5396647613908946;
    msg.q = 0.8547667592864059;
    msg.r = 0.039830146167468716;
    msg.u = 0.19429500695356894;
    msg.v = 0.7837512987182949;
    msg.w = 0.13673568642187317;
    msg.bias_psi = 0.0413460632628504;
    msg.bias_r = 0.17024327821576224;

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
    msg.setTimeStamp(0.15756983458969376);
    msg.setSource(6688U);
    msg.setSourceEntity(143U);
    msg.setDestination(31408U);
    msg.setDestinationEntity(203U);
    msg.bias_psi = 0.2656300686647354;
    msg.bias_r = 0.4729231667237409;
    msg.cog = 0.14749966201949405;
    msg.cyaw = 0.814511892658625;
    msg.lbl_rej_level = 0.3894657831841025;
    msg.gps_rej_level = 0.7238614827457117;
    msg.custom_x = 0.6786971737471242;
    msg.custom_y = 0.46421753347365224;
    msg.custom_z = 0.455355485348765;

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
    msg.setTimeStamp(0.25290545388048224);
    msg.setSource(49211U);
    msg.setSourceEntity(89U);
    msg.setDestination(56577U);
    msg.setDestinationEntity(133U);
    msg.bias_psi = 0.8128091981477576;
    msg.bias_r = 0.8415894609323344;
    msg.cog = 0.899655088068935;
    msg.cyaw = 0.48685889399053583;
    msg.lbl_rej_level = 0.7364003138869021;
    msg.gps_rej_level = 0.0999723613500677;
    msg.custom_x = 0.02843479608897148;
    msg.custom_y = 0.18599127330010812;
    msg.custom_z = 0.5971245871994666;

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
    msg.setTimeStamp(0.30879683572342054);
    msg.setSource(28599U);
    msg.setSourceEntity(154U);
    msg.setDestination(28308U);
    msg.setDestinationEntity(99U);
    msg.bias_psi = 0.17997255921614919;
    msg.bias_r = 0.773779208861385;
    msg.cog = 0.09303447220519334;
    msg.cyaw = 0.13933648092444384;
    msg.lbl_rej_level = 0.8309523167846095;
    msg.gps_rej_level = 0.8253779481649114;
    msg.custom_x = 0.2567650031584414;
    msg.custom_y = 0.33187298489134165;
    msg.custom_z = 0.6346573928320832;

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
    msg.setTimeStamp(0.11746787204064413);
    msg.setSource(21130U);
    msg.setSourceEntity(52U);
    msg.setDestination(21798U);
    msg.setDestinationEntity(236U);
    msg.utc_time = 0.5110377817482634;
    msg.reason = 236U;

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
    msg.setTimeStamp(0.5846819133601996);
    msg.setSource(29468U);
    msg.setSourceEntity(40U);
    msg.setDestination(9814U);
    msg.setDestinationEntity(64U);
    msg.utc_time = 0.1093012104022707;
    msg.reason = 194U;

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
    msg.setTimeStamp(0.6563512240938515);
    msg.setSource(9047U);
    msg.setSourceEntity(89U);
    msg.setDestination(34121U);
    msg.setDestinationEntity(150U);
    msg.utc_time = 0.464919143773456;
    msg.reason = 134U;

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
    msg.setTimeStamp(0.5428069189973616);
    msg.setSource(31486U);
    msg.setSourceEntity(11U);
    msg.setDestination(54426U);
    msg.setDestinationEntity(238U);
    msg.id = 49U;
    msg.range = 0.986128861713578;
    msg.acceptance = 145U;

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
    msg.setTimeStamp(0.21482279582936437);
    msg.setSource(17103U);
    msg.setSourceEntity(181U);
    msg.setDestination(35689U);
    msg.setDestinationEntity(215U);
    msg.id = 31U;
    msg.range = 0.6628710256079859;
    msg.acceptance = 66U;

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
    msg.setTimeStamp(0.3918983777501154);
    msg.setSource(24350U);
    msg.setSourceEntity(127U);
    msg.setDestination(23910U);
    msg.setDestinationEntity(4U);
    msg.id = 4U;
    msg.range = 0.3092797959408884;
    msg.acceptance = 213U;

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
    msg.setTimeStamp(0.051765464991328614);
    msg.setSource(9597U);
    msg.setSourceEntity(225U);
    msg.setDestination(26606U);
    msg.setDestinationEntity(223U);
    msg.type = 133U;
    msg.reason = 197U;
    msg.value = 0.6908060274864642;
    msg.timestep = 0.03337948742137531;

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
    msg.setTimeStamp(0.5055971096445394);
    msg.setSource(56327U);
    msg.setSourceEntity(29U);
    msg.setDestination(45082U);
    msg.setDestinationEntity(163U);
    msg.type = 216U;
    msg.reason = 230U;
    msg.value = 0.5399648282061636;
    msg.timestep = 0.45957267075090036;

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
    msg.setTimeStamp(0.6193469201237449);
    msg.setSource(39122U);
    msg.setSourceEntity(128U);
    msg.setDestination(33862U);
    msg.setDestinationEntity(210U);
    msg.type = 93U;
    msg.reason = 2U;
    msg.value = 0.1428882859296008;
    msg.timestep = 0.05742463435241907;

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
    msg.setTimeStamp(0.8945463273140529);
    msg.setSource(16274U);
    msg.setSourceEntity(202U);
    msg.setDestination(51294U);
    msg.setDestinationEntity(160U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XTMUSHDLPAMACQDXVNMIJJHEYLYCONDKFLNPNYQAIWVOJ");
    tmp_msg_0.lat = 0.018534648223719974;
    tmp_msg_0.lon = 0.7546211936624413;
    tmp_msg_0.depth = 0.2732090279912469;
    tmp_msg_0.query_channel = 164U;
    tmp_msg_0.reply_channel = 98U;
    tmp_msg_0.transponder_delay = 73U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8827358614227384;
    msg.y = 0.17836554169408592;
    msg.var_x = 0.02020528248447806;
    msg.var_y = 0.7814583031459867;
    msg.distance = 0.5637470058009241;

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
    msg.setTimeStamp(0.09207108302101419);
    msg.setSource(26142U);
    msg.setSourceEntity(38U);
    msg.setDestination(27033U);
    msg.setDestinationEntity(145U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TJAEIAHBFKQTWRJPTMBFHZGWOQFMWSLGXUAHLILQKNKHXEOSBTMFIJYZVYHRMQRSPMXZLIWKXMUEKAILUKQBCTYLUNQMBPDHOIOYLDDESEMTBDFEB");
    tmp_msg_0.lat = 0.8199702007372881;
    tmp_msg_0.lon = 0.4898848479417115;
    tmp_msg_0.depth = 0.6254506870542146;
    tmp_msg_0.query_channel = 3U;
    tmp_msg_0.reply_channel = 125U;
    tmp_msg_0.transponder_delay = 72U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9674579044328788;
    msg.y = 0.674949306709057;
    msg.var_x = 0.8094567035387524;
    msg.var_y = 0.6436369063542536;
    msg.distance = 0.7771330930302299;

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
    msg.setTimeStamp(0.017071900937516205);
    msg.setSource(14681U);
    msg.setSourceEntity(190U);
    msg.setDestination(36608U);
    msg.setDestinationEntity(22U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LCJRLHAFDRGORLZCOWZUHHSYUQAVVPEWCIBUVPLNBWALOGIWYBVXJPNKINXKJSIIXPPEOSEZJCTFRTVMQBAGVGNOLYOFBXKVCKWDWYCAPVCYXKIKTLSYMURZZJWDHMJAKNFRCEDUCPINCHNKMURONKEEUUXFPBHXPILXAEIFHADOOQTQSFLZQREIWSTHKJUVMXRWT");
    tmp_msg_0.lat = 0.12302456768785808;
    tmp_msg_0.lon = 0.30059844299633154;
    tmp_msg_0.depth = 0.31717299303933655;
    tmp_msg_0.query_channel = 33U;
    tmp_msg_0.reply_channel = 183U;
    tmp_msg_0.transponder_delay = 22U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.85305821716681;
    msg.y = 0.8235212756875532;
    msg.var_x = 0.4881794276778214;
    msg.var_y = 0.3441554581444267;
    msg.distance = 0.5238252462448292;

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
    msg.setTimeStamp(0.6318793637717454);
    msg.setSource(10837U);
    msg.setSourceEntity(165U);
    msg.setDestination(20997U);
    msg.setDestinationEntity(8U);
    msg.state = 86U;

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
    msg.setTimeStamp(0.4106612784725029);
    msg.setSource(57406U);
    msg.setSourceEntity(198U);
    msg.setDestination(47830U);
    msg.setDestinationEntity(46U);
    msg.state = 77U;

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
    msg.setTimeStamp(0.18705120673920617);
    msg.setSource(18367U);
    msg.setSourceEntity(142U);
    msg.setDestination(13820U);
    msg.setDestinationEntity(98U);
    msg.state = 51U;

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
    msg.setTimeStamp(0.6886391030765305);
    msg.setSource(42232U);
    msg.setSourceEntity(102U);
    msg.setDestination(42355U);
    msg.setDestinationEntity(185U);
    msg.x = 0.5752490374670277;
    msg.y = 0.8776283790566249;
    msg.z = 0.6859799565655881;

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
    msg.setTimeStamp(0.3191498094057573);
    msg.setSource(26547U);
    msg.setSourceEntity(105U);
    msg.setDestination(53447U);
    msg.setDestinationEntity(162U);
    msg.x = 0.8556197652940283;
    msg.y = 0.34334990421964207;
    msg.z = 0.5626405339962524;

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
    msg.setTimeStamp(0.37205489102319766);
    msg.setSource(45531U);
    msg.setSourceEntity(31U);
    msg.setDestination(44505U);
    msg.setDestinationEntity(107U);
    msg.x = 0.18539180550538514;
    msg.y = 0.13194696805298767;
    msg.z = 0.7063273833869919;

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
    msg.setTimeStamp(0.6777847599581491);
    msg.setSource(30637U);
    msg.setSourceEntity(133U);
    msg.setDestination(31552U);
    msg.setDestinationEntity(181U);
    msg.value = 0.09329096735481512;

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
    msg.setTimeStamp(0.41529685343651734);
    msg.setSource(1247U);
    msg.setSourceEntity(105U);
    msg.setDestination(17601U);
    msg.setDestinationEntity(243U);
    msg.value = 0.45610316239485904;

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
    msg.setTimeStamp(0.7979742344814241);
    msg.setSource(41344U);
    msg.setSourceEntity(191U);
    msg.setDestination(55493U);
    msg.setDestinationEntity(49U);
    msg.value = 0.5439715679239716;

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
    msg.setTimeStamp(0.4334544377032462);
    msg.setSource(46767U);
    msg.setSourceEntity(4U);
    msg.setDestination(11806U);
    msg.setDestinationEntity(95U);
    msg.value = 0.7776456818035957;
    msg.z_units = 199U;

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
    msg.setTimeStamp(0.2985770231462177);
    msg.setSource(3623U);
    msg.setSourceEntity(252U);
    msg.setDestination(33176U);
    msg.setDestinationEntity(175U);
    msg.value = 0.26892130027956773;
    msg.z_units = 141U;

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
    msg.setTimeStamp(0.9670019436301297);
    msg.setSource(1460U);
    msg.setSourceEntity(166U);
    msg.setDestination(23093U);
    msg.setDestinationEntity(61U);
    msg.value = 0.5937865763124301;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.809663092529418);
    msg.setSource(56145U);
    msg.setSourceEntity(93U);
    msg.setDestination(20065U);
    msg.setDestinationEntity(79U);
    msg.value = 0.8927875131263798;
    msg.speed_units = 204U;

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
    msg.setTimeStamp(0.8666578320951241);
    msg.setSource(32419U);
    msg.setSourceEntity(169U);
    msg.setDestination(15442U);
    msg.setDestinationEntity(206U);
    msg.value = 0.03374111557533399;
    msg.speed_units = 196U;

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
    msg.setTimeStamp(0.23984234082121003);
    msg.setSource(8602U);
    msg.setSourceEntity(120U);
    msg.setDestination(41969U);
    msg.setDestinationEntity(222U);
    msg.value = 0.9820711505708424;
    msg.speed_units = 24U;

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
    msg.setTimeStamp(0.8580296443662041);
    msg.setSource(28977U);
    msg.setSourceEntity(237U);
    msg.setDestination(4018U);
    msg.setDestinationEntity(206U);
    msg.value = 0.5279262420337306;

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
    msg.setTimeStamp(0.01342461646804749);
    msg.setSource(37740U);
    msg.setSourceEntity(204U);
    msg.setDestination(14250U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5994090636994587;

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
    msg.setTimeStamp(0.13807060747870636);
    msg.setSource(50218U);
    msg.setSourceEntity(124U);
    msg.setDestination(871U);
    msg.setDestinationEntity(56U);
    msg.value = 0.9976170512944673;

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
    msg.setTimeStamp(0.4012402928045786);
    msg.setSource(12338U);
    msg.setSourceEntity(184U);
    msg.setDestination(54266U);
    msg.setDestinationEntity(60U);
    msg.value = 0.151765532292366;

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
    msg.setTimeStamp(0.10825624539524048);
    msg.setSource(48491U);
    msg.setSourceEntity(137U);
    msg.setDestination(35030U);
    msg.setDestinationEntity(28U);
    msg.value = 0.10548870753799156;

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
    msg.setTimeStamp(0.8684303020679442);
    msg.setSource(16023U);
    msg.setSourceEntity(149U);
    msg.setDestination(49453U);
    msg.setDestinationEntity(201U);
    msg.value = 0.03246405618658199;

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
    msg.setTimeStamp(0.43826285735200665);
    msg.setSource(18221U);
    msg.setSourceEntity(103U);
    msg.setDestination(50812U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9780492960132926;

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
    msg.setTimeStamp(0.9387047320508303);
    msg.setSource(38772U);
    msg.setSourceEntity(29U);
    msg.setDestination(54998U);
    msg.setDestinationEntity(192U);
    msg.value = 0.381632460580854;

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
    msg.setTimeStamp(0.04996967941211117);
    msg.setSource(8868U);
    msg.setSourceEntity(76U);
    msg.setDestination(53363U);
    msg.setDestinationEntity(17U);
    msg.value = 0.7734134605954524;

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
    msg.setTimeStamp(0.5100442519737806);
    msg.setSource(14178U);
    msg.setSourceEntity(123U);
    msg.setDestination(54306U);
    msg.setDestinationEntity(177U);
    msg.path_ref = 3806146300U;
    msg.start_lat = 0.9647462596990984;
    msg.start_lon = 0.5206247189263802;
    msg.start_z = 0.13724991702213818;
    msg.start_z_units = 224U;
    msg.end_lat = 0.014796261838065927;
    msg.end_lon = 0.9797848452937559;
    msg.end_z = 0.23457308541759414;
    msg.end_z_units = 198U;
    msg.speed = 0.7083649498842485;
    msg.speed_units = 214U;
    msg.lradius = 0.9030943991153245;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.9619728641077433);
    msg.setSource(46546U);
    msg.setSourceEntity(71U);
    msg.setDestination(47401U);
    msg.setDestinationEntity(70U);
    msg.path_ref = 3424677316U;
    msg.start_lat = 0.38026670287665254;
    msg.start_lon = 0.5855412685315158;
    msg.start_z = 0.8599806967625341;
    msg.start_z_units = 0U;
    msg.end_lat = 0.09207921909444661;
    msg.end_lon = 0.21506234843028804;
    msg.end_z = 0.20950794696785124;
    msg.end_z_units = 48U;
    msg.speed = 0.7919951860064778;
    msg.speed_units = 87U;
    msg.lradius = 0.20074051468433607;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.531113810756479);
    msg.setSource(37344U);
    msg.setSourceEntity(217U);
    msg.setDestination(43331U);
    msg.setDestinationEntity(20U);
    msg.path_ref = 280846264U;
    msg.start_lat = 0.6030627474303066;
    msg.start_lon = 0.9312234208173314;
    msg.start_z = 0.045275579430056556;
    msg.start_z_units = 25U;
    msg.end_lat = 0.4594170187321168;
    msg.end_lon = 0.11470399165680112;
    msg.end_z = 0.8863709261949313;
    msg.end_z_units = 138U;
    msg.speed = 0.4285789359060831;
    msg.speed_units = 58U;
    msg.lradius = 0.8663162004837627;
    msg.flags = 252U;

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
    msg.setTimeStamp(0.35260796453576637);
    msg.setSource(15108U);
    msg.setSourceEntity(94U);
    msg.setDestination(22558U);
    msg.setDestinationEntity(27U);
    msg.x = 0.3013755837445954;
    msg.y = 0.6496296057753477;
    msg.z = 0.5948852196608106;
    msg.k = 0.03333620921720959;
    msg.m = 0.49442106681196873;
    msg.n = 0.04805304746034855;
    msg.flags = 173U;

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
    msg.setTimeStamp(0.8032284084180862);
    msg.setSource(53558U);
    msg.setSourceEntity(74U);
    msg.setDestination(63110U);
    msg.setDestinationEntity(24U);
    msg.x = 0.662395111148479;
    msg.y = 0.2327319100602785;
    msg.z = 0.8293520382606057;
    msg.k = 0.45714217792456646;
    msg.m = 0.08101789020108208;
    msg.n = 0.10114480924922498;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.05224065583316184);
    msg.setSource(46709U);
    msg.setSourceEntity(77U);
    msg.setDestination(4157U);
    msg.setDestinationEntity(46U);
    msg.x = 0.9565939522922866;
    msg.y = 0.37468047329334697;
    msg.z = 0.9841715742766942;
    msg.k = 0.8267026934051735;
    msg.m = 0.8590267025870849;
    msg.n = 0.6094831963518951;
    msg.flags = 150U;

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
    msg.setTimeStamp(0.8859480522920833);
    msg.setSource(41411U);
    msg.setSourceEntity(138U);
    msg.setDestination(26040U);
    msg.setDestinationEntity(124U);
    msg.value = 0.11171328944853598;

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
    msg.setTimeStamp(0.5155583165716623);
    msg.setSource(121U);
    msg.setSourceEntity(214U);
    msg.setDestination(43477U);
    msg.setDestinationEntity(6U);
    msg.value = 0.5502356830065056;

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
    msg.setTimeStamp(0.452984724868557);
    msg.setSource(4010U);
    msg.setSourceEntity(226U);
    msg.setDestination(6001U);
    msg.setDestinationEntity(35U);
    msg.value = 0.07558380667688336;

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
    msg.setTimeStamp(0.6555364103366672);
    msg.setSource(58528U);
    msg.setSourceEntity(160U);
    msg.setDestination(62841U);
    msg.setDestinationEntity(125U);
    msg.u = 0.8153783039538605;
    msg.v = 0.09104512139131216;
    msg.w = 0.22407332131681523;
    msg.p = 0.780653243468181;
    msg.q = 0.4182600990016174;
    msg.r = 0.1412383722911318;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.4500607948485946);
    msg.setSource(27461U);
    msg.setSourceEntity(158U);
    msg.setDestination(7763U);
    msg.setDestinationEntity(172U);
    msg.u = 0.6864627625517435;
    msg.v = 0.8167251282484881;
    msg.w = 0.40699790701150973;
    msg.p = 0.6401695887030299;
    msg.q = 0.29113848433872647;
    msg.r = 0.27100755576063906;
    msg.flags = 65U;

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
    msg.setTimeStamp(0.3786067645784499);
    msg.setSource(7694U);
    msg.setSourceEntity(193U);
    msg.setDestination(13542U);
    msg.setDestinationEntity(178U);
    msg.u = 0.43658923673030103;
    msg.v = 0.5259871698204902;
    msg.w = 0.9674085912700114;
    msg.p = 0.28419166294183584;
    msg.q = 0.1917668918023573;
    msg.r = 0.6283618615417297;
    msg.flags = 131U;

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
    msg.setTimeStamp(0.19625148175907814);
    msg.setSource(16221U);
    msg.setSourceEntity(234U);
    msg.setDestination(49811U);
    msg.setDestinationEntity(232U);
    msg.path_ref = 304879653U;
    msg.start_lat = 0.23064712187597358;
    msg.start_lon = 0.9066333489140211;
    msg.start_z = 0.3212630251108022;
    msg.start_z_units = 183U;
    msg.end_lat = 0.716334518899337;
    msg.end_lon = 0.5069600949639993;
    msg.end_z = 0.010713255428520196;
    msg.end_z_units = 199U;
    msg.lradius = 0.5678274325678128;
    msg.flags = 102U;
    msg.x = 0.15049694274971925;
    msg.y = 0.6311828426953161;
    msg.z = 0.6153694898816039;
    msg.vx = 0.07643424546185418;
    msg.vy = 0.5371235863473574;
    msg.vz = 0.1859262561254963;
    msg.course_error = 0.461434711636599;
    msg.eta = 12534U;

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
    msg.setTimeStamp(0.4510618101182371);
    msg.setSource(35620U);
    msg.setSourceEntity(147U);
    msg.setDestination(58153U);
    msg.setDestinationEntity(157U);
    msg.path_ref = 1859697326U;
    msg.start_lat = 0.9146372307050694;
    msg.start_lon = 0.7814550629983268;
    msg.start_z = 0.8985771785756265;
    msg.start_z_units = 179U;
    msg.end_lat = 0.27203476418108175;
    msg.end_lon = 0.9715399928837453;
    msg.end_z = 0.9741836232025127;
    msg.end_z_units = 193U;
    msg.lradius = 0.6506740064244223;
    msg.flags = 221U;
    msg.x = 0.29092608035720546;
    msg.y = 0.5489655453515078;
    msg.z = 0.06937436400409924;
    msg.vx = 0.8543448790119852;
    msg.vy = 0.09673980556488637;
    msg.vz = 0.1798437705408622;
    msg.course_error = 0.9382122573069518;
    msg.eta = 57621U;

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
    msg.setTimeStamp(0.03764219390196255);
    msg.setSource(65437U);
    msg.setSourceEntity(138U);
    msg.setDestination(11968U);
    msg.setDestinationEntity(183U);
    msg.path_ref = 1410337553U;
    msg.start_lat = 0.7776209223276827;
    msg.start_lon = 0.9557248149028672;
    msg.start_z = 0.3230267422805503;
    msg.start_z_units = 240U;
    msg.end_lat = 0.7924849478615299;
    msg.end_lon = 0.8823570828896347;
    msg.end_z = 0.6202531615654016;
    msg.end_z_units = 24U;
    msg.lradius = 0.10583594000083973;
    msg.flags = 102U;
    msg.x = 0.45317042757362724;
    msg.y = 0.08128618404202237;
    msg.z = 0.15306193019251135;
    msg.vx = 0.3397189650148331;
    msg.vy = 0.4601332781349108;
    msg.vz = 0.9788508311688567;
    msg.course_error = 0.6598714568382293;
    msg.eta = 32277U;

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
    msg.setTimeStamp(0.8466799462628595);
    msg.setSource(41577U);
    msg.setSourceEntity(55U);
    msg.setDestination(25635U);
    msg.setDestinationEntity(34U);
    msg.k = 0.03078577966213203;
    msg.m = 0.8822590075896479;
    msg.n = 0.7424456607227891;

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
    msg.setTimeStamp(0.13657904788581);
    msg.setSource(50373U);
    msg.setSourceEntity(235U);
    msg.setDestination(34032U);
    msg.setDestinationEntity(210U);
    msg.k = 0.8458259593946826;
    msg.m = 0.9709993219534655;
    msg.n = 0.24783061159308672;

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
    msg.setTimeStamp(0.3559591383513454);
    msg.setSource(48062U);
    msg.setSourceEntity(22U);
    msg.setDestination(3664U);
    msg.setDestinationEntity(206U);
    msg.k = 0.11613580939467694;
    msg.m = 0.8583643627470533;
    msg.n = 0.9229427366218923;

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
    msg.setTimeStamp(0.16540355117099248);
    msg.setSource(48107U);
    msg.setSourceEntity(250U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(5U);
    msg.p = 0.8616821699858356;
    msg.i = 0.7606001421296393;
    msg.d = 0.5025132105388483;
    msg.a = 0.6860576451789614;

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
    msg.setTimeStamp(0.4560683524511807);
    msg.setSource(48382U);
    msg.setSourceEntity(123U);
    msg.setDestination(57073U);
    msg.setDestinationEntity(231U);
    msg.p = 0.6779243483539528;
    msg.i = 0.5374190636324121;
    msg.d = 0.4748536915110396;
    msg.a = 0.642977521604545;

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
    msg.setTimeStamp(0.9729684086498938);
    msg.setSource(58163U);
    msg.setSourceEntity(127U);
    msg.setDestination(60928U);
    msg.setDestinationEntity(65U);
    msg.p = 0.19977987554146603;
    msg.i = 0.37179260118075963;
    msg.d = 0.8493899759322577;
    msg.a = 0.2362541731015778;

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
    msg.setTimeStamp(0.5518005686472585);
    msg.setSource(22133U);
    msg.setSourceEntity(128U);
    msg.setDestination(53155U);
    msg.setDestinationEntity(165U);
    msg.op = 141U;

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
    msg.setTimeStamp(0.11901563847632979);
    msg.setSource(39488U);
    msg.setSourceEntity(220U);
    msg.setDestination(52131U);
    msg.setDestinationEntity(80U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.8156709285676361);
    msg.setSource(18357U);
    msg.setSourceEntity(31U);
    msg.setDestination(20219U);
    msg.setDestinationEntity(247U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.48701566428856813);
    msg.setSource(13741U);
    msg.setSourceEntity(130U);
    msg.setDestination(41968U);
    msg.setDestinationEntity(81U);
    msg.timeout = 47204U;
    msg.lat = 0.622291155055482;
    msg.lon = 0.8525080098905828;
    msg.z = 0.9675558714084118;
    msg.z_units = 36U;
    msg.speed = 0.8770768732130557;
    msg.speed_units = 155U;
    msg.roll = 0.3977810085700666;
    msg.pitch = 0.025451542754950762;
    msg.yaw = 0.09662516192824167;
    msg.custom.assign("GIURIZWPMSVQTKHBKWCRFMXDXFLBHZFEEPISMJYTHOWBGCSDOTQHAIPRCPLRDDIUKGMIWTNCVTJVZKCGGHUBETDTABWZBYZLUTKLUQJSVRZNCWHKWOZBXIRJDYWMDHTNXEXBWOZYYQXKFORHNSFFHGUQUMKGLCFORX");

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
    msg.setTimeStamp(0.6684405059507037);
    msg.setSource(3772U);
    msg.setSourceEntity(44U);
    msg.setDestination(35505U);
    msg.setDestinationEntity(93U);
    msg.timeout = 57470U;
    msg.lat = 0.261158793170408;
    msg.lon = 0.19091072899780903;
    msg.z = 0.12855781077626505;
    msg.z_units = 79U;
    msg.speed = 0.33380870305293564;
    msg.speed_units = 122U;
    msg.roll = 0.7926822725611814;
    msg.pitch = 0.7652159617770555;
    msg.yaw = 0.6975918663875887;
    msg.custom.assign("SRNSRFVHUOHGQVRIEHXJEVEYENUFZVSICOWOKWMPRHWAOGGCVVKPTUQBTYOXGIVIZQFLDHCTGZUWPBEWAJXFYZIINNFTXSAKWAFCOTVBQTTRDORZXTDQCQDSPAXELFCKUMPPIFNTGPSMVCSKLMDA");

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
    msg.setTimeStamp(0.6479791831845175);
    msg.setSource(47539U);
    msg.setSourceEntity(181U);
    msg.setDestination(42864U);
    msg.setDestinationEntity(46U);
    msg.timeout = 36204U;
    msg.lat = 0.059357892102052445;
    msg.lon = 0.22839607190386757;
    msg.z = 0.7131485465538604;
    msg.z_units = 196U;
    msg.speed = 0.00466986622461163;
    msg.speed_units = 174U;
    msg.roll = 0.13907500322995214;
    msg.pitch = 0.9263638588077351;
    msg.yaw = 0.6495786334307476;
    msg.custom.assign("RELUQBZHTPQOEGVRSBULTUIZPWEACJYLHFHHGQUOVYBAQNPFTNCJHWEFDPWWTBYNQXDWBWJYZRGVMWMVLZINVKURAKPCSSDIRZESDCVJFNQXCRSVBZIMDCCODOKGIXOFHFUEQYXJBWHXMAUYUJPENPONYWGTNKSKDMSVZHKZCOLGQJEUXDGQGYBARLCIOWZTRPYDPALAOSBBFHEGICSTSLAXMYMXVTTNMFFRQXKHZKPDLI");

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
    msg.setTimeStamp(0.1506190419901915);
    msg.setSource(30820U);
    msg.setSourceEntity(104U);
    msg.setDestination(49872U);
    msg.setDestinationEntity(3U);
    msg.timeout = 43297U;
    msg.lat = 0.008844629503149681;
    msg.lon = 0.014968029382386061;
    msg.z = 0.6309848911211624;
    msg.z_units = 217U;
    msg.speed = 0.5421426094588458;
    msg.speed_units = 1U;
    msg.duration = 5318U;
    msg.radius = 0.8859326189213111;
    msg.flags = 141U;
    msg.custom.assign("PACGGFSNEVOGVQKTHLWPLECKYYFOJGMBMLEOYNEKKXQIVOZYPXKBBJIZLJHUXRMFQDLJZQDYTBYHWYLHNISFHEWDDVURCXFSZNFCOHSIMLCNPQVDYMDRXAKTQABXMWHTEGVQZGCELPHNANXWPHZZQBQPRCUUAXPWINFVNFANTSCFAXOEYLLTTHTTFBIORAJRRIWJJAZUOKSGWUTSIKSWJUVMDDMKG");

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
    msg.setTimeStamp(0.2005692685268522);
    msg.setSource(39789U);
    msg.setSourceEntity(119U);
    msg.setDestination(1119U);
    msg.setDestinationEntity(26U);
    msg.timeout = 56975U;
    msg.lat = 0.5289341777011077;
    msg.lon = 0.21510598897279176;
    msg.z = 0.14458517505823076;
    msg.z_units = 156U;
    msg.speed = 0.5772013690983727;
    msg.speed_units = 88U;
    msg.duration = 4259U;
    msg.radius = 0.6541560956151157;
    msg.flags = 71U;
    msg.custom.assign("KQIMJTNJYUVAOJMPDKKV");

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
    msg.setTimeStamp(0.4734447509101889);
    msg.setSource(26930U);
    msg.setSourceEntity(120U);
    msg.setDestination(60422U);
    msg.setDestinationEntity(161U);
    msg.timeout = 45094U;
    msg.lat = 0.6981903522108796;
    msg.lon = 0.8014383029373334;
    msg.z = 0.4866543816006219;
    msg.z_units = 164U;
    msg.speed = 0.056066664874125594;
    msg.speed_units = 59U;
    msg.duration = 32867U;
    msg.radius = 0.5449653488026537;
    msg.flags = 141U;
    msg.custom.assign("GZCCOYZLDINEEGKLLHDYEYJZUIBYUUQYIAVJSLUOMPXVCTZRHQWAEDMPBGMACYWZJNAEMKJGIZOJFXYVRJPRRVIIBJPSTCKUSPNITAZGACKMFFGWDFHYHPTWHADFZWUDWBHUNX");

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
    msg.setTimeStamp(0.8478087602042722);
    msg.setSource(27402U);
    msg.setSourceEntity(246U);
    msg.setDestination(38914U);
    msg.setDestinationEntity(229U);
    msg.custom.assign("ALSFGCTRDQGBXOQVAETYRGCZUYSFYDEINQHYPRPOVJNZQDIKPFRHVIZTVRWOGPHWQRDYNKCHZVUXBCNCGMIZSNBWTAONCNLMYBNBZJTYUHKQWJUNWLZDBTBFTQIJAHMGDPSWXHLFEQLIRLLPQJMSOTUEJHSITRXBDETMBRVXUJZDXWYCCAUGWPYZUHLZYKXAFKOHEDPVCPPIDVL");

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
    msg.setTimeStamp(0.11276988671472443);
    msg.setSource(62921U);
    msg.setSourceEntity(151U);
    msg.setDestination(12273U);
    msg.setDestinationEntity(163U);
    msg.custom.assign("WXPJHOIMUQLZCHNRTJRUWJFPKZDCZVNOYRZEPDVMONPMULTXEXEBFFAQRMFTRKVLYBFJXNEOEKKMBFKTQPNIAVSUQYLTRHYIQJRRYLJBPTCJQFCIHIGXSVZMGSOWZWSIKIYZYSGTNMEIGIGSWOGVXDVJUQEUEMCBZXXGNULKAHIYRVVWKATDWLKWKSYALGHPOAUTYBGWFLACMOHCVFJTRNPNPSBDZQ");

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
    msg.setTimeStamp(0.2292500545053915);
    msg.setSource(48498U);
    msg.setSourceEntity(249U);
    msg.setDestination(52384U);
    msg.setDestinationEntity(236U);
    msg.custom.assign("DAJXQQDMXHTQZWBGGORFLEJEASTBCSSFLVVYWEJPGKITSQUSBKCIWYADWNGNXAPZJZBYCEYOMWYIWSEOENXKBKMLBAKZMPBCRBHVDDNGQNOFQLKUPFLVMQMRMDTFCKYHOCTRIUCTXVYXCXZVQIYAVUUJQEKIROEGGABLJRPEDWPWHJNRGLUSPNGOFXSRRPFZOLWJHUNX");

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
    msg.setTimeStamp(0.47911010277016364);
    msg.setSource(46132U);
    msg.setSourceEntity(229U);
    msg.setDestination(54755U);
    msg.setDestinationEntity(236U);
    msg.timeout = 15539U;
    msg.lat = 0.08137236745313181;
    msg.lon = 0.43425234459524964;
    msg.z = 0.7299995394816993;
    msg.z_units = 134U;
    msg.duration = 47656U;
    msg.speed = 0.6782002330125785;
    msg.speed_units = 106U;
    msg.type = 227U;
    msg.radius = 0.6387432848184557;
    msg.length = 0.9822440466828366;
    msg.bearing = 0.7774095669980476;
    msg.direction = 248U;
    msg.custom.assign("KFNYRPCRZGSHQWKIVTDIUKCKMWCGMZIYDURQYQHYFTFYKQHOULDNLGXWXHUILBSCFCTRONHFSMFGAUHVIACOHPBMWWCGEPSJZEPJHNEJVVKBIDKTTGWZOEPMTMPAIYBGRXCDQHXAZPVYUCWWLWNZBDRKXDBYYLLJFVLNZLXAPQTQLFZQNSZJBASKNVVUVBD");

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
    msg.setTimeStamp(0.38311273414883784);
    msg.setSource(41971U);
    msg.setSourceEntity(232U);
    msg.setDestination(37501U);
    msg.setDestinationEntity(116U);
    msg.timeout = 53566U;
    msg.lat = 0.19455152431743306;
    msg.lon = 0.5748437694868153;
    msg.z = 0.9303583083569581;
    msg.z_units = 106U;
    msg.duration = 28997U;
    msg.speed = 0.18060390194595444;
    msg.speed_units = 56U;
    msg.type = 204U;
    msg.radius = 0.8752892374753165;
    msg.length = 0.16469216503860762;
    msg.bearing = 0.7466865736060838;
    msg.direction = 27U;
    msg.custom.assign("GEHCSABZSJLGNZEAWKTOKBZMQUZOUOJXDVDQRXGPKYLINXAJSHMNRRNPVAXESRVCUQAPRMCXNYGDTDIFVOWKGQLXIFMIJNWJUBBOPQYLECOMUALWUBGMDBIRNHHIWZYYFCEWVELTKMCHSFKFVPZPHZSJCQBLZWTHKFOMINDPUSYCUUVLWUERLQDVSCSFDEXRJHEIPTITNXQRYAFOEOGXJRVVJBAQSTFZWTHYWDQMKB");

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
    msg.setTimeStamp(0.823982415882546);
    msg.setSource(3438U);
    msg.setSourceEntity(168U);
    msg.setDestination(10297U);
    msg.setDestinationEntity(230U);
    msg.timeout = 16738U;
    msg.lat = 0.31770843579678754;
    msg.lon = 0.0961230546521501;
    msg.z = 0.04191895917495625;
    msg.z_units = 149U;
    msg.duration = 5411U;
    msg.speed = 0.2680684178847639;
    msg.speed_units = 117U;
    msg.type = 151U;
    msg.radius = 0.7529318298684291;
    msg.length = 0.9321223901974346;
    msg.bearing = 0.4399486889617831;
    msg.direction = 164U;
    msg.custom.assign("XZBPSSGKARDICTSAWVERRDHZJLOPEWOZSMQSFIMPX");

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
    msg.setTimeStamp(0.6517337203326147);
    msg.setSource(65438U);
    msg.setSourceEntity(254U);
    msg.setDestination(23528U);
    msg.setDestinationEntity(194U);
    msg.duration = 12137U;
    msg.custom.assign("LJZHVLNJJLXENLJPGZKGSYXSLBXQVAICGEFBUIUTPSVPDYSJZQHDUYZFORCMIBSQOHZNZBKEVJSCHPMXLRGEYANYMFARUKVGDTARXMREVNZCADTKHWDPVORZNKPYSBLXRADGWWVMNIIBPQRCZYTWQ");

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
    msg.setTimeStamp(0.6350807627758804);
    msg.setSource(33348U);
    msg.setSourceEntity(39U);
    msg.setDestination(50899U);
    msg.setDestinationEntity(202U);
    msg.duration = 58986U;
    msg.custom.assign("HAJLRXRQASIJKQZAWDFYNCHDFPGVXNLJNJGPPDXFMISOKSFHEDLLSUJMTYUQOYTUNMQQNFKTBNS");

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
    msg.setTimeStamp(0.38972463258655554);
    msg.setSource(22278U);
    msg.setSourceEntity(116U);
    msg.setDestination(60642U);
    msg.setDestinationEntity(91U);
    msg.duration = 12108U;
    msg.custom.assign("DSYZIZRBSQXLCXZQQGHDAOLVJJYUKPYCMKKYTTSKVKTGHPOTGWOWDEAHAJCTPJBULZPVQCIZAMRGTPDCEDIHGNUVQVJDFBVWXIVEKXJFZXFCFMFHMRGSEIVXPNWDVNHJWODGGIRXWXUMSCVALKFLBOMSWPBBZKRJCNGBRIMNYKBTEULJBANSFTOQINTEAWEEQHHTNXRCZQUSNJOQLRPW");

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
    msg.setTimeStamp(0.4234020240418179);
    msg.setSource(20936U);
    msg.setSourceEntity(10U);
    msg.setDestination(20498U);
    msg.setDestinationEntity(178U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.8935453658429551;
    tmp_msg_0.z_units = 215U;
    msg.control.set(tmp_msg_0);
    msg.duration = 62254U;
    msg.custom.assign("DHBXVEKAOXCRGZKDITAVJTUBWDWJVEBCLAVHGWFAWIQPZMUGEPFTMXNKUPLYDYIFOOHOEYDPDURZKQMSAIKHNZLCGJPHKYYTUVBSLVRGBIQSSTIBLESUOYPDAPAQFO");

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
    msg.setTimeStamp(0.08924824257656694);
    msg.setSource(21239U);
    msg.setSourceEntity(71U);
    msg.setDestination(23914U);
    msg.setDestinationEntity(187U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 649984556U;
    tmp_msg_0.start_lat = 0.5059979708599794;
    tmp_msg_0.start_lon = 0.0728291407209316;
    tmp_msg_0.start_z = 0.15493965846885271;
    tmp_msg_0.start_z_units = 191U;
    tmp_msg_0.end_lat = 0.8632760848608394;
    tmp_msg_0.end_lon = 0.1378040046858986;
    tmp_msg_0.end_z = 0.026390449406123118;
    tmp_msg_0.end_z_units = 132U;
    tmp_msg_0.speed = 0.267801553032323;
    tmp_msg_0.speed_units = 50U;
    tmp_msg_0.lradius = 0.7409558451465645;
    tmp_msg_0.flags = 221U;
    msg.control.set(tmp_msg_0);
    msg.duration = 55856U;
    msg.custom.assign("SKMOJEAUTPHVTRPHABHJSBTFZDEUYSKPCYDPUTYOIAWGNHDTHRIWQYVMIAOZQQZWIIJVAHCXFVXFMGBVQGDYYDNOAUKLCBIKOCRVEFMSJXQNXULGXCDNBNOSCDADZYZQJKYGXLJWXVRYWILEJCBLFNAHOGKQEQNTLREJKLMMPCIAGYOTSFGDKPBQPRJAFWEEUICRZEHNHDZQTIKMV");

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
    msg.setTimeStamp(0.735789242548127);
    msg.setSource(51280U);
    msg.setSourceEntity(80U);
    msg.setDestination(32805U);
    msg.setDestinationEntity(238U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.08880588006173884;
    tmp_msg_0.speed_units = 178U;
    msg.control.set(tmp_msg_0);
    msg.duration = 5043U;
    msg.custom.assign("NLLFEAYRQKXRATFQ");

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
    msg.setTimeStamp(0.009551453300305268);
    msg.setSource(29283U);
    msg.setSourceEntity(241U);
    msg.setDestination(20677U);
    msg.setDestinationEntity(59U);
    msg.timeout = 52260U;
    msg.lat = 0.7438299643151064;
    msg.lon = 0.5560727134128508;
    msg.z = 0.770499633730972;
    msg.z_units = 67U;
    msg.speed = 0.4912655520064585;
    msg.speed_units = 219U;
    msg.bearing = 0.9697003050459904;
    msg.cross_angle = 0.149953884175285;
    msg.width = 0.21995160713041284;
    msg.length = 0.539828729825449;
    msg.hstep = 0.5246955831209293;
    msg.coff = 150U;
    msg.alternation = 91U;
    msg.flags = 231U;
    msg.custom.assign("QWACJOCIBRZLQHVWERKFGAWSDMSFLDVURBMYDBVFABCHYYOIKTLSBIOCUXGKOULXMVQAOPNOIMKPTFHYXWUCRYVXVXMSBOTKVBQZPIRJYLNUFGNMJTTSRLVTUNKFWZPITJCJHLXEMOLPGPCXJPRDLUWNEZAVPCBEQFOANCEDEGJNZXANYKID");

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
    msg.setTimeStamp(0.3760348136395252);
    msg.setSource(56213U);
    msg.setSourceEntity(246U);
    msg.setDestination(9290U);
    msg.setDestinationEntity(194U);
    msg.timeout = 33138U;
    msg.lat = 0.049341825321591815;
    msg.lon = 0.712729339810787;
    msg.z = 0.513580639757752;
    msg.z_units = 114U;
    msg.speed = 0.9028629086216704;
    msg.speed_units = 106U;
    msg.bearing = 0.7041686772567056;
    msg.cross_angle = 0.3431196192805801;
    msg.width = 0.9911568331798408;
    msg.length = 0.9969563122312413;
    msg.hstep = 0.376521159301099;
    msg.coff = 21U;
    msg.alternation = 19U;
    msg.flags = 41U;
    msg.custom.assign("IIPYMIZNFDBXTLDQE");

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
    msg.setTimeStamp(0.9190483152997768);
    msg.setSource(29974U);
    msg.setSourceEntity(235U);
    msg.setDestination(21999U);
    msg.setDestinationEntity(81U);
    msg.timeout = 48041U;
    msg.lat = 0.29428277022098936;
    msg.lon = 0.00014900389030392258;
    msg.z = 0.11517489706854733;
    msg.z_units = 138U;
    msg.speed = 0.538824626636214;
    msg.speed_units = 152U;
    msg.bearing = 0.9226005226315105;
    msg.cross_angle = 0.8001886699990779;
    msg.width = 0.1705986921142948;
    msg.length = 0.38518331334955536;
    msg.hstep = 0.29149755115218423;
    msg.coff = 17U;
    msg.alternation = 56U;
    msg.flags = 195U;
    msg.custom.assign("YNWEJQFMLJQVUHDAEZDEBPXRENDSSFBWWTBTZBRYVBYCZTZIKSVGMPKLXFBYCXGSNQXMHSPEVMEQVUZNULFZKBDTMCIJEWUHYHNPVRINNCJGDUCMDYAAMMWTIUAHXRRXOUEUYFGROQNGAXOJKLLTPRZHINKWFPFIPLQQSJOUWKSLAGOJEWALNCVSCXHXACROYGQSDKIKDIZTLGOYTUCFIFQBSEYPOVWB");

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
    msg.setTimeStamp(0.9520612037218144);
    msg.setSource(360U);
    msg.setSourceEntity(116U);
    msg.setDestination(7768U);
    msg.setDestinationEntity(45U);
    msg.timeout = 30143U;
    msg.lat = 0.4270699289504306;
    msg.lon = 0.16197734841164702;
    msg.z = 0.7920645869791338;
    msg.z_units = 251U;
    msg.speed = 0.6434532377715761;
    msg.speed_units = 166U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.863204336749594;
    tmp_msg_0.y = 0.8434912287751622;
    tmp_msg_0.z = 0.5505439226076996;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NXKWAHDMYWPYGUTDAMGLMUWWTJCPNNNWWZHHLZTVDQPASVRYTXOZZJXNNMNCSBDDCVHSERZFHTZJDUTAENTSPEUQYGQXQIBTYVXMVRKHHJHPTVGDYRRIYBGKYZCAWFOLCWEWKOXAIAELODIMZJHJBENKGGEQOMRICPCOFPMJBMPSFRGBWBKIDALIMSLUVBOBXSAEJLSNGFEFKQQZSDQJFPYOALFKVCKUUFICFHEBCURUTKJILVRQXR");

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
    msg.setTimeStamp(0.8403111306764488);
    msg.setSource(46601U);
    msg.setSourceEntity(29U);
    msg.setDestination(54405U);
    msg.setDestinationEntity(97U);
    msg.timeout = 53241U;
    msg.lat = 0.9511465211351846;
    msg.lon = 0.5225399247844809;
    msg.z = 0.9675065400592769;
    msg.z_units = 130U;
    msg.speed = 0.9823836173154884;
    msg.speed_units = 29U;
    msg.custom.assign("OXZSRUJOOGDFOAVRDAADXTWHILSNRWHBZTEXVEKDSJYGABXSJXFLWUMQFHTAKRKEVLAPEBULHJFVBIMZMWWMBSGHYELRUDNNKJITREVAYQAPOTEYSPBCFLCUJYLSQOWTZOXZPVYXXZGJCPFUZYKPQSCLYNINRCIO");

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
    msg.setTimeStamp(0.11673246390143832);
    msg.setSource(38863U);
    msg.setSourceEntity(114U);
    msg.setDestination(20121U);
    msg.setDestinationEntity(174U);
    msg.timeout = 60279U;
    msg.lat = 0.7793736993726817;
    msg.lon = 0.5715346704322435;
    msg.z = 0.11001667494358147;
    msg.z_units = 236U;
    msg.speed = 0.46345623090875;
    msg.speed_units = 202U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6284730613549441;
    tmp_msg_0.y = 0.34948836257698446;
    tmp_msg_0.z = 0.4550367001254686;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZBHXLSHSBREPPKAZGTGTULCCQUJRKRCBIWGMSUJVADHPZLTERAFAPWQELJNOYFQMINAUKUSCOCKVMQLNDLXHEFTQLTAYNXVIRCJFHXNSGWGNUNDPKBJPLMZTUMWCXPIBYPIDFKORURJMHSEFRBYGMOCGMIKSHIWDXLCQFSAXXZWTGYDKGWQOHNSJVZIZHVOSAN");

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
    msg.setTimeStamp(0.7800489066927556);
    msg.setSource(8455U);
    msg.setSourceEntity(236U);
    msg.setDestination(34459U);
    msg.setDestinationEntity(188U);
    msg.x = 0.6844189334546815;
    msg.y = 0.004866522877023494;
    msg.z = 0.6547918750327534;

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
    msg.setTimeStamp(0.09620895791601536);
    msg.setSource(51269U);
    msg.setSourceEntity(148U);
    msg.setDestination(37774U);
    msg.setDestinationEntity(104U);
    msg.x = 0.552361972513635;
    msg.y = 0.8799681741843864;
    msg.z = 0.17413840183800167;

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
    msg.setTimeStamp(0.5699533923069128);
    msg.setSource(809U);
    msg.setSourceEntity(167U);
    msg.setDestination(42413U);
    msg.setDestinationEntity(32U);
    msg.x = 0.17152004300996948;
    msg.y = 0.88056930035897;
    msg.z = 0.750911112999511;

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
    msg.setTimeStamp(0.7574248739234081);
    msg.setSource(37579U);
    msg.setSourceEntity(171U);
    msg.setDestination(47941U);
    msg.setDestinationEntity(0U);
    msg.timeout = 23891U;
    msg.lat = 0.5142172968103486;
    msg.lon = 0.6594572117169325;
    msg.z = 0.43391914098899786;
    msg.z_units = 6U;
    msg.amplitude = 0.9637538715096005;
    msg.pitch = 0.9558428179448554;
    msg.speed = 0.06594110853512958;
    msg.speed_units = 31U;
    msg.custom.assign("GJRWXHUBHSTMLVSWEXDGEHSBGUAGSTMMYLNYNSBQPJALZZOVAYJVQALWPLKJWRVTMQOIGJONQRYWZZACGKRBRIVFSFKITDYIKGFNJYGIKTKZCBPAEVXVIDCJFNTRPUBUNOMUXWYCUZJYNOMQEDRQCHKFYBLURVDFFFMRUEZDQCIPFLFCHHOBMQKJHJTIXEGSHEAWTAEKMARUHWMXOLCAWQPCHLTNDSUOXYDXZNSNCII");

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
    msg.setTimeStamp(0.4008942454669704);
    msg.setSource(58710U);
    msg.setSourceEntity(191U);
    msg.setDestination(42216U);
    msg.setDestinationEntity(73U);
    msg.timeout = 26532U;
    msg.lat = 0.9674182937333018;
    msg.lon = 0.5904138476486513;
    msg.z = 0.3628335161323507;
    msg.z_units = 141U;
    msg.amplitude = 0.4456060413816917;
    msg.pitch = 0.739706293430862;
    msg.speed = 0.7994615054701536;
    msg.speed_units = 187U;
    msg.custom.assign("UDFMAWRLWMFHRXOIPWYPVHVUTPYBIWTOQNTQD");

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
    msg.setTimeStamp(0.6989801193840152);
    msg.setSource(40274U);
    msg.setSourceEntity(46U);
    msg.setDestination(38036U);
    msg.setDestinationEntity(183U);
    msg.timeout = 50546U;
    msg.lat = 0.7337526972786551;
    msg.lon = 0.8438116401871772;
    msg.z = 0.18243212126308161;
    msg.z_units = 137U;
    msg.amplitude = 0.2837754378253704;
    msg.pitch = 0.609273238842496;
    msg.speed = 0.6417471820167479;
    msg.speed_units = 149U;
    msg.custom.assign("GAJGPMUQVBDLPWAEOHMNUKCPXARDYEUGBWIIWCLCRUMUYAVLRHYJFVRXSFYTIXAZXUBZZEQSLAOGGXHFFRITDHGPMHXNFBKDSSWCBAMPKKGTYLZEUNTVJKXETTTZDAHBSSMWOGZOOXALRLZVWDGQJIDVCFPQECQICUXINNQUQOWYWZDWOMZOYNBPNFKIFPYFYMVQP");

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
    msg.setTimeStamp(0.9709102182819329);
    msg.setSource(49947U);
    msg.setSourceEntity(121U);
    msg.setDestination(26537U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.03664602428005692);
    msg.setSource(47399U);
    msg.setSourceEntity(151U);
    msg.setDestination(17106U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.6751065276777879);
    msg.setSource(51464U);
    msg.setSourceEntity(83U);
    msg.setDestination(8920U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.6576200232363268);
    msg.setSource(42328U);
    msg.setSourceEntity(84U);
    msg.setDestination(56716U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.3965620457527298;
    msg.lon = 0.9163447761706474;
    msg.z = 0.18628601388920418;
    msg.z_units = 12U;
    msg.radius = 0.3152423776781489;
    msg.duration = 16611U;
    msg.speed = 0.46145070583322545;
    msg.speed_units = 212U;
    msg.custom.assign("YVIGHEHKUQWWCAHKLVWSLSNYEBOJGFSAPHZJOMGBGFNQGXBNXUTZGDNBKORNIRBDPPBENIFQYQMJFTFKSWLCRLIADTLQXQCDFOMRXUFKOZHHLLJRBOLMAZGFZPLUGCZGPJASYEFHADGZTECJXKXUMQWUMVPKPXUCSZBJYL");

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
    msg.setTimeStamp(0.90064756133995);
    msg.setSource(21991U);
    msg.setSourceEntity(27U);
    msg.setDestination(61981U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.9957598513309279;
    msg.lon = 0.3872108810903482;
    msg.z = 0.6027151652039187;
    msg.z_units = 83U;
    msg.radius = 0.32565537366709696;
    msg.duration = 21015U;
    msg.speed = 0.5327655761685101;
    msg.speed_units = 221U;
    msg.custom.assign("AJXHPUNKGROFJWLNDZSPYMQCFLZEBLSYNRHVJGLCBZKFICMWTDOZDXKKUPFDRIJBQSCPAQGSOVCUTEVMFGTCEQDCXLOJHXUVITHIQYDTMQPNYTDBXZWNONRRAASJTNEXJBVMURNVBQRPNBIEYSBJUHQSTJOBAICXIEOHSKJQAPWHNAOGYE");

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
    msg.setTimeStamp(0.21024767626557173);
    msg.setSource(51816U);
    msg.setSourceEntity(86U);
    msg.setDestination(8723U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.1530628849886997;
    msg.lon = 0.9927637440660327;
    msg.z = 0.4519457513228402;
    msg.z_units = 230U;
    msg.radius = 0.29220371837393566;
    msg.duration = 44585U;
    msg.speed = 0.7542019476354701;
    msg.speed_units = 152U;
    msg.custom.assign("FPGPAZOXDQIFCIGNASWYKUNYVLZIHGTDDVHBNXHEPUKGSLFACMVKMQOJAZXBOKFUEAKSULMSJIFQENPYVWLKORMVFOHSUEVGNJUMPCYM");

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
    msg.setTimeStamp(0.488080120741179);
    msg.setSource(59018U);
    msg.setSourceEntity(248U);
    msg.setDestination(12033U);
    msg.setDestinationEntity(156U);
    msg.timeout = 54456U;
    msg.flags = 116U;
    msg.lat = 0.8326896219797965;
    msg.lon = 0.028336874336781115;
    msg.start_z = 0.3160406544241928;
    msg.start_z_units = 90U;
    msg.end_z = 0.5966680547953443;
    msg.end_z_units = 243U;
    msg.radius = 0.7619270843117969;
    msg.speed = 0.9937998536969183;
    msg.speed_units = 99U;
    msg.custom.assign("BIHCURBHMDXXESUUKFZYGDWJEQHVTXNRFMAIBYBRLOIRQFEPETWDLEZWZXPIUVHYMTPMIKLCZEGFREZJTKOAGAEAJKTNAHPJLFGYXLCXBTYHCVQDFDOLCONTSRHCBBYZQRPQUPFMJSZIVYDOTSBQVMASJGNLWJMADARUPIFVQWWIAYCPOYNQHKUVHSORKGLREXOCXVSWNXZXTGCZBZVULTGSHMQACPWVGPNDMJKWNMYEI");

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
    msg.setTimeStamp(0.49232358056013503);
    msg.setSource(41825U);
    msg.setSourceEntity(181U);
    msg.setDestination(15993U);
    msg.setDestinationEntity(229U);
    msg.timeout = 30199U;
    msg.flags = 23U;
    msg.lat = 0.22151547602750987;
    msg.lon = 0.06273407718454327;
    msg.start_z = 0.014531251914257526;
    msg.start_z_units = 143U;
    msg.end_z = 0.7770291506298278;
    msg.end_z_units = 114U;
    msg.radius = 0.27419608306297116;
    msg.speed = 0.28980142382552765;
    msg.speed_units = 1U;
    msg.custom.assign("CNAVTRNYIIOYBWTVMZANVSIYFEWBSMZRWQPHXLKKUWHLKZSFCVJRCEJBEXFXARKOLTNYQPUQHEQFMTRLWYUJUBOBXSKWYMHOFRWRNJKXSHNQUTODPDALRKIJPJLVOZHTZCJPGPKAOXBTEDULXYYQGHZJQCGETCHFINYERQVG");

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
    msg.setTimeStamp(0.6226341583771059);
    msg.setSource(151U);
    msg.setSourceEntity(213U);
    msg.setDestination(39153U);
    msg.setDestinationEntity(193U);
    msg.timeout = 44868U;
    msg.flags = 98U;
    msg.lat = 0.7827200960902595;
    msg.lon = 0.7492128670032274;
    msg.start_z = 0.27902916397264044;
    msg.start_z_units = 97U;
    msg.end_z = 0.5926473446996999;
    msg.end_z_units = 137U;
    msg.radius = 0.6839605822745449;
    msg.speed = 0.9103745497368082;
    msg.speed_units = 217U;
    msg.custom.assign("HMLUJPAQXCETAHJSJQUXSWOCVFPGLRO");

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
    msg.setTimeStamp(0.5274611027438572);
    msg.setSource(2439U);
    msg.setSourceEntity(147U);
    msg.setDestination(17712U);
    msg.setDestinationEntity(28U);
    msg.timeout = 57903U;
    msg.lat = 0.989032743531782;
    msg.lon = 0.9077215422105465;
    msg.z = 0.8391762517216927;
    msg.z_units = 196U;
    msg.speed = 0.2623071645401446;
    msg.speed_units = 99U;
    msg.custom.assign("IJIJEAYJRIMDDQTGDPVVLSHEFWWAXULOXWUYOISIUPXWWFXQAVFCWUHYJQYLQLVZEAZPXWNKAIOAJOTECNJORBZUTROKP");

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
    msg.setTimeStamp(0.30867926170966653);
    msg.setSource(33660U);
    msg.setSourceEntity(228U);
    msg.setDestination(64554U);
    msg.setDestinationEntity(151U);
    msg.timeout = 14735U;
    msg.lat = 0.6999652459768451;
    msg.lon = 0.3841536326571524;
    msg.z = 0.1805733808742559;
    msg.z_units = 134U;
    msg.speed = 0.7718318444478666;
    msg.speed_units = 132U;
    msg.custom.assign("WSMPOOWSNSNWRBKOQPHXSTOMZSBLKQEUFDDMURVXBHTCBXHJHAEONHSYYXXTUEKRLOTYDMZGOEPLJBDGBRQIEZUCCJWCZUSJKYKBAARFDUEWEIOENABLJYLQFRGJXGGVXDSAKYLIBKPICVRAZ");

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
    msg.setTimeStamp(0.7827684076673783);
    msg.setSource(5426U);
    msg.setSourceEntity(168U);
    msg.setDestination(29716U);
    msg.setDestinationEntity(11U);
    msg.timeout = 28735U;
    msg.lat = 0.48071415744991874;
    msg.lon = 0.4629958082022648;
    msg.z = 0.2327151341737156;
    msg.z_units = 117U;
    msg.speed = 0.3535623062686335;
    msg.speed_units = 217U;
    msg.custom.assign("GLEKDOGIQVNOQNFTZIXLNJZPVFAQPTXMTDRFHYLDHEIFGQVUZYGPBIKBQOSTTNDJGFDRZMYSAQWMUMYZKXIPCMKVZPEYUCWMDHEPIHUSSHYWEWMAYHGAWNWXOWWCEIACARCOOJPLPOZEURDBVKKJUQHJIBLRNPPSTEBIBALSDAXHRSLMVABAYNWUYRJFBLRNCQJVVXQCFXCERSRZLTKKYZNSXOEDTOTXGZQTIGGXKUBGUJMCBJWHF");

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
    msg.setTimeStamp(0.6639457262756693);
    msg.setSource(44538U);
    msg.setSourceEntity(142U);
    msg.setDestination(19635U);
    msg.setDestinationEntity(149U);
    msg.x = 0.9345442920411264;
    msg.y = 0.14942761477150568;
    msg.z = 0.4392722584530977;
    msg.t = 0.6394174358462713;

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
    msg.setTimeStamp(0.4550730087743349);
    msg.setSource(20488U);
    msg.setSourceEntity(225U);
    msg.setDestination(35882U);
    msg.setDestinationEntity(29U);
    msg.x = 0.4004307860045506;
    msg.y = 0.4859602135787442;
    msg.z = 0.18431893094325447;
    msg.t = 0.317315573301827;

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
    msg.setTimeStamp(0.5714777225171485);
    msg.setSource(13828U);
    msg.setSourceEntity(53U);
    msg.setDestination(36409U);
    msg.setDestinationEntity(12U);
    msg.x = 0.40957243967857637;
    msg.y = 0.8729136534240578;
    msg.z = 0.23699517403683978;
    msg.t = 0.1084942835473508;

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
    msg.setTimeStamp(0.8741553818697536);
    msg.setSource(59081U);
    msg.setSourceEntity(75U);
    msg.setDestination(1558U);
    msg.setDestinationEntity(70U);
    msg.timeout = 19806U;
    msg.name.assign("QTJXAGLUMRQCHGMOQOMKTWFHUFQSCLIAKAEBIWATTGVGKLGSDFFWEBDASYJNQTFUHRKVPXVZOPDXSZBEIHTLLXFQIDNVNJLMLURPXEZMGESPVZOASVPMGDRSBTJZUWPAWCUAQVFYYTINMHVCIDEUCJRHONISUJKOLJRJKJFNDCBXYNDIORDMZXGBMMRWCLPQHYXBWHPCEZVH");
    msg.custom.assign("PFYEJKJAYKNNRTCAGHXIGBSQPOXPRTEBHQPBXFHITULSSWYEXFJUMBLAWJMHUHMLUZRGHIBLLVREGEYKGSAMHFWZUNDOKLTYOAOPFIEJZDHEXECIQZWZWDRXUDYOPQBCCSVTTEICXVNDBQFZSMKXKIADRZJADVRUIMOTZGJSF");

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
    msg.setTimeStamp(0.46807269443800603);
    msg.setSource(3681U);
    msg.setSourceEntity(70U);
    msg.setDestination(46242U);
    msg.setDestinationEntity(111U);
    msg.timeout = 16676U;
    msg.name.assign("MSMAJNRCFT");
    msg.custom.assign("GDOYEZRRVRGVGZISJAXAUUEIOYHZQLMZZDXMCMECAJVYWMQONILSPNZNVPQUVQVVGUROEOYLODCPQNPQLJZNDLILMWTHASROHBSMDDRBIKXRBNPOIEEKBQWHAGBZZFCTAGFHJBNBXNKHFPATSSUXBYTKSVZFKAOWU");

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
    msg.setTimeStamp(0.48660864238391877);
    msg.setSource(44322U);
    msg.setSourceEntity(158U);
    msg.setDestination(37326U);
    msg.setDestinationEntity(148U);
    msg.timeout = 43752U;
    msg.name.assign("EJLPAGROXNFWVQHJSQNFQQPYEPMAV");
    msg.custom.assign("LGTLQZYLHALWGVOTMFMZAAETSYARAHUAMJBKECG");

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
    msg.setTimeStamp(0.37727632259183874);
    msg.setSource(15326U);
    msg.setSourceEntity(78U);
    msg.setDestination(11833U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.44694649122902985;
    msg.lon = 0.23487019249659769;
    msg.z = 0.16793401597996516;
    msg.z_units = 225U;
    msg.speed = 0.5789528688148033;
    msg.speed_units = 192U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8563942533613392;
    tmp_msg_0.y = 0.5294967746859787;
    tmp_msg_0.z = 0.8106228683233127;
    tmp_msg_0.t = 0.43913434825124065;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.39931901645011414;
    msg.custom.assign("RCSBFZQAVXOYLDIKICOHESRIOVWXUQCKNQBFJGSLXNLWVZRNOWHDJETZJZPFLBUUGDGBMDCETZOUQQSSHFCYJMEEYXXYLMGSMASGYABZBUVHTEYWDIHAMBSFJWYCGCHRHVXEEDJJGUDFZWKDKRLCRWISRPNOJYIVXYPIPKLZUFPIUXUVNMHCOTNRGETYAXAPJAFBT");

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
    msg.setTimeStamp(0.34781291856994556);
    msg.setSource(12267U);
    msg.setSourceEntity(34U);
    msg.setDestination(62114U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.8635753617317509;
    msg.lon = 0.8433835673495292;
    msg.z = 0.020921394808779303;
    msg.z_units = 20U;
    msg.speed = 0.7226974035024982;
    msg.speed_units = 147U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.07236495214410188;
    tmp_msg_0.y = 0.03306410639648172;
    tmp_msg_0.z = 0.597836539085005;
    tmp_msg_0.t = 0.5215639626782322;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7052968478627912;
    msg.custom.assign("CSNPQHRPEXAICRZRMYEAKFVMG");

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
    msg.setTimeStamp(0.562881266903992);
    msg.setSource(35981U);
    msg.setSourceEntity(128U);
    msg.setDestination(49722U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.3320260067637597;
    msg.lon = 0.23684332609452108;
    msg.z = 0.33340184498193337;
    msg.z_units = 174U;
    msg.speed = 0.4949652625267029;
    msg.speed_units = 93U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.1568297763025598;
    tmp_msg_0.y = 0.07915437526573088;
    tmp_msg_0.z = 0.8559977858984689;
    tmp_msg_0.t = 0.3068038736466464;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.3746105690551249;
    msg.custom.assign("DJVZYCLUIANZAGSLIXZLGZRHFSLUZXZIKQWXACKCPYEMGKFPV");

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
    msg.setTimeStamp(0.3864268943031509);
    msg.setSource(19964U);
    msg.setSourceEntity(117U);
    msg.setDestination(34227U);
    msg.setDestinationEntity(15U);
    msg.vid = 1369U;
    msg.off_x = 0.8079478432499405;
    msg.off_y = 0.7463326086663226;
    msg.off_z = 0.01785178798577436;

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
    msg.setTimeStamp(0.17514001238356613);
    msg.setSource(9371U);
    msg.setSourceEntity(175U);
    msg.setDestination(35190U);
    msg.setDestinationEntity(173U);
    msg.vid = 30747U;
    msg.off_x = 0.03292255510989761;
    msg.off_y = 0.23779323260367635;
    msg.off_z = 0.8092436690454943;

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
    msg.setTimeStamp(0.036543547239085594);
    msg.setSource(30473U);
    msg.setSourceEntity(160U);
    msg.setDestination(18809U);
    msg.setDestinationEntity(164U);
    msg.vid = 19496U;
    msg.off_x = 0.46261865853669215;
    msg.off_y = 0.8999485839703564;
    msg.off_z = 0.27846319123916974;

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
    msg.setTimeStamp(0.27254504307479566);
    msg.setSource(40098U);
    msg.setSourceEntity(182U);
    msg.setDestination(23983U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.2861572290405957);
    msg.setSource(5253U);
    msg.setSourceEntity(193U);
    msg.setDestination(50970U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.2360393447213558);
    msg.setSource(60204U);
    msg.setSourceEntity(23U);
    msg.setDestination(44104U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.42705762731709895);
    msg.setSource(59309U);
    msg.setSourceEntity(132U);
    msg.setDestination(4U);
    msg.setDestinationEntity(222U);
    msg.mid = 51394U;

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
    msg.setTimeStamp(0.2953972305295126);
    msg.setSource(56973U);
    msg.setSourceEntity(141U);
    msg.setDestination(20276U);
    msg.setDestinationEntity(94U);
    msg.mid = 29649U;

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
    msg.setTimeStamp(0.2615730316694659);
    msg.setSource(36883U);
    msg.setSourceEntity(36U);
    msg.setDestination(42218U);
    msg.setDestinationEntity(247U);
    msg.mid = 6770U;

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
    msg.setTimeStamp(0.9193690975810127);
    msg.setSource(19567U);
    msg.setSourceEntity(238U);
    msg.setDestination(3158U);
    msg.setDestinationEntity(195U);
    msg.state = 227U;
    msg.eta = 36664U;
    msg.info.assign("GQUSNCYIEZWQXEJRDSJEKVWINRCPXQPMJWMYHTTKIGOTSDBLBGHVCNXBFSPKBRCAJORVTGXXIAGTMFROEXWKOLLWEDFQK");

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
    msg.setTimeStamp(0.8507934753799714);
    msg.setSource(14850U);
    msg.setSourceEntity(226U);
    msg.setDestination(28837U);
    msg.setDestinationEntity(203U);
    msg.state = 16U;
    msg.eta = 49325U;
    msg.info.assign("DRIMCZTSFZTITNFGOBVHBCOPYSQMPXNSPCXAIIWGACZGEOESLPEHBEANYDBLUVYRBPTDABOKZEIETLCWFAPWJCOVLDLKKJYZJKYKZHHOQNZQFYWLICIMGAHNNUXLUOLRXJZHVWQJWAXMUVNNPFQHNBDEJBSVRQUTUOTD");

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
    msg.setTimeStamp(0.29793959443651563);
    msg.setSource(18222U);
    msg.setSourceEntity(49U);
    msg.setDestination(38899U);
    msg.setDestinationEntity(183U);
    msg.state = 209U;
    msg.eta = 30301U;
    msg.info.assign("JRJSOAXNYLICRWNXHUTQDQZYIGCRZOBJZXRBLIKHPSHENTKOUGTAPBBEDCUVBLJKVCOLSSMGGWWXSAMFNVQCDDHTPUEBHOSMYBHJMKFTVULZMEIOPPDRAGPDYNTLLLTDUJQGYQXWZJDTRJWHGTVVUERYOWOXILQEVVZEYGRPDMSXAHCHNXYTNFSNQACONJHPPUXVEWQKUBANAFSKAQMIRDYLKKRXIFICCKCFKMZFGQMSBJ");

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
    msg.setTimeStamp(0.19441273799612258);
    msg.setSource(38246U);
    msg.setSourceEntity(104U);
    msg.setDestination(5347U);
    msg.setDestinationEntity(25U);
    msg.system = 62772U;
    msg.duration = 60583U;
    msg.speed = 0.34363967006947815;
    msg.speed_units = 28U;
    msg.x = 0.08229530531108942;
    msg.y = 0.7053285640289975;
    msg.z = 0.4229695014481646;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.19415229049525728);
    msg.setSource(64305U);
    msg.setSourceEntity(79U);
    msg.setDestination(13407U);
    msg.setDestinationEntity(180U);
    msg.system = 25458U;
    msg.duration = 16195U;
    msg.speed = 0.03880769579115706;
    msg.speed_units = 37U;
    msg.x = 0.61805731426472;
    msg.y = 0.6840707191483573;
    msg.z = 0.46201807720013777;
    msg.z_units = 214U;

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
    msg.setTimeStamp(0.710829334668179);
    msg.setSource(63723U);
    msg.setSourceEntity(113U);
    msg.setDestination(33716U);
    msg.setDestinationEntity(36U);
    msg.system = 8335U;
    msg.duration = 43377U;
    msg.speed = 0.7850308991323708;
    msg.speed_units = 50U;
    msg.x = 0.1245759236151579;
    msg.y = 0.3005697019965561;
    msg.z = 0.04122298987333317;
    msg.z_units = 181U;

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
    msg.setTimeStamp(0.4676163058721339);
    msg.setSource(52111U);
    msg.setSourceEntity(81U);
    msg.setDestination(46793U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.8381711320229193;
    msg.lon = 0.5123940108412393;
    msg.speed = 0.9788490710836603;
    msg.speed_units = 165U;
    msg.duration = 24278U;
    msg.sys_a = 10104U;
    msg.sys_b = 61060U;
    msg.move_threshold = 0.07462862299182182;

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
    msg.setTimeStamp(0.5434727784033647);
    msg.setSource(13250U);
    msg.setSourceEntity(20U);
    msg.setDestination(19667U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.4700834388807239;
    msg.lon = 0.5168067040501368;
    msg.speed = 0.43555687370531493;
    msg.speed_units = 241U;
    msg.duration = 59793U;
    msg.sys_a = 50997U;
    msg.sys_b = 10931U;
    msg.move_threshold = 0.1391122506568716;

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
    msg.setTimeStamp(0.32991057523248);
    msg.setSource(61203U);
    msg.setSourceEntity(154U);
    msg.setDestination(49921U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.2839149236245676;
    msg.lon = 0.6550579725267689;
    msg.speed = 0.5806073293267842;
    msg.speed_units = 195U;
    msg.duration = 6582U;
    msg.sys_a = 9694U;
    msg.sys_b = 14633U;
    msg.move_threshold = 0.13874251370167234;

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
    msg.setTimeStamp(0.2860324109090222);
    msg.setSource(2878U);
    msg.setSourceEntity(75U);
    msg.setDestination(1697U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.002797525874294937;
    msg.lon = 0.41993812972636213;
    msg.z = 0.5245721839284736;
    msg.z_units = 95U;
    msg.speed = 0.7184089547675423;
    msg.speed_units = 88U;
    msg.custom.assign("JXDNASCDZYTCYISSCIKEQGVBRUZEVXNDWFZKTX");

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
    msg.setTimeStamp(0.21720797153008464);
    msg.setSource(17577U);
    msg.setSourceEntity(185U);
    msg.setDestination(65125U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.21721725353498955;
    msg.lon = 0.49895016834458206;
    msg.z = 0.7245676949325219;
    msg.z_units = 43U;
    msg.speed = 0.19047522102497783;
    msg.speed_units = 249U;
    msg.custom.assign("MVMLDDVDXGJLTOAAGZCJSYBVBKJNWQVIGWCZYUXWMONOTHYHYVJBDFTNQJTFVVOZBUKNGHIEPALSQAY");

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
    msg.setTimeStamp(0.6300021567775337);
    msg.setSource(41599U);
    msg.setSourceEntity(134U);
    msg.setDestination(59790U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.8892945935735674;
    msg.lon = 0.5319907346200476;
    msg.z = 0.41766237260737316;
    msg.z_units = 116U;
    msg.speed = 0.41944070463496674;
    msg.speed_units = 98U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.19838799307845745;
    tmp_msg_0.lon = 0.15732165128414288;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JAQSCUFAHXAMFOLSEB");

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
    msg.setTimeStamp(0.6312034290077034);
    msg.setSource(50992U);
    msg.setSourceEntity(86U);
    msg.setDestination(5541U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.3188479964461923;
    msg.lon = 0.8633014300572851;

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
    msg.setTimeStamp(0.13970319439839274);
    msg.setSource(37004U);
    msg.setSourceEntity(27U);
    msg.setDestination(8320U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.21333011923382295;
    msg.lon = 0.09325984881260296;

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
    msg.setTimeStamp(0.8589562320431389);
    msg.setSource(43039U);
    msg.setSourceEntity(182U);
    msg.setDestination(14868U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.5613905017028994;
    msg.lon = 0.7294994454831774;

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
    msg.setTimeStamp(0.36444906803804744);
    msg.setSource(10048U);
    msg.setSourceEntity(244U);
    msg.setDestination(20511U);
    msg.setDestinationEntity(171U);
    msg.timeout = 43934U;
    msg.lat = 0.7829019628105791;
    msg.lon = 0.36150262385952103;
    msg.z = 0.9798678155532617;
    msg.z_units = 241U;
    msg.pitch = 0.07912453749207249;
    msg.amplitude = 0.8585661435038056;
    msg.duration = 17252U;
    msg.speed = 0.38160282368061726;
    msg.speed_units = 243U;
    msg.radius = 0.5406906351034616;
    msg.direction = 26U;
    msg.custom.assign("JIIOBMSJLCXFZNTHYKKBUEMHIPLRXCJNRHDCWLESUHQZIVWUCCVXITYKPWFDGEIJATWBVHL");

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
    msg.setTimeStamp(0.21703667949325145);
    msg.setSource(34771U);
    msg.setSourceEntity(188U);
    msg.setDestination(48657U);
    msg.setDestinationEntity(16U);
    msg.timeout = 56657U;
    msg.lat = 0.048747246293038504;
    msg.lon = 0.45825447107387174;
    msg.z = 0.21882108971314163;
    msg.z_units = 15U;
    msg.pitch = 0.4705428518081225;
    msg.amplitude = 0.8858178794812376;
    msg.duration = 23049U;
    msg.speed = 0.46997644756063317;
    msg.speed_units = 217U;
    msg.radius = 0.2738767878269175;
    msg.direction = 240U;
    msg.custom.assign("QWMLDRHATEWJEVRITUVLFGBTDQVPZUWPRCXS");

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
    msg.setTimeStamp(0.9038262106466767);
    msg.setSource(45584U);
    msg.setSourceEntity(38U);
    msg.setDestination(53421U);
    msg.setDestinationEntity(32U);
    msg.timeout = 48983U;
    msg.lat = 0.5256108578501407;
    msg.lon = 0.1694226122231942;
    msg.z = 0.7593080235311721;
    msg.z_units = 196U;
    msg.pitch = 0.5421885419045716;
    msg.amplitude = 0.2983089786364187;
    msg.duration = 45110U;
    msg.speed = 0.4122327247988272;
    msg.speed_units = 65U;
    msg.radius = 0.36605646426513005;
    msg.direction = 122U;
    msg.custom.assign("CXAVXHMTZNLSBYQSFPQYLXQGBUMROTLPOQQSRGVJHEMOIEELYJOKRNMRBCDFFQJTMZVXGDZCAYBISGVCHUHPHCXHIDDJSWRAUHNYSGNEADOLDPKFSWVRCGGWBCJJFBKZMOPQLFWMWOJHLVUTPWWASFKBZPTJPODKUJKREVXUUPECUZBLHUYVQD");

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
    msg.setTimeStamp(0.9603373780743579);
    msg.setSource(27022U);
    msg.setSourceEntity(138U);
    msg.setDestination(55013U);
    msg.setDestinationEntity(99U);
    msg.formation_name.assign("GCYDXWSQSNZEDNPKKUPHJRXNBONETHAUIZYFZBGMAIUOUWECYIGMOVTJUWHBIMLPOWLYWGCFUQFHTARNGCHPTFGRCKXSHPDQWYNSESEAPNUHTUJLJGIYZDYFAABOOFZYTTLNDBCPSALEVSIMUIEXNCWVCVQYJSYHVGW");
    msg.reference_frame = 229U;
    msg.custom.assign("LTZQUGXJXYILBNCUTROXJZDEATAWKVKIELZTSOTGRRYMMWRPXNAZBFQWTGIUBPNOFDIXUJLARDOKIFC");

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
    msg.setTimeStamp(0.8006485141952945);
    msg.setSource(10167U);
    msg.setSourceEntity(173U);
    msg.setDestination(48386U);
    msg.setDestinationEntity(137U);
    msg.formation_name.assign("PLYUEMYXTBSGNGUEGYBDFYGDHUNHHXUUVMCLXRYDZQFHQPIQAFPADNLJGWOJJECWKIFTISENQHOSMTZRMIDCKWJVQTDRGLHMATHHTOOVPKOSCMBMEHQXPNSFMVBAIPLUXEDCKSMYLR");
    msg.reference_frame = 149U;
    msg.custom.assign("DZBJWMIEIADTBLYOPMJWHSYKBXRHCUPCGMAEOQXAPUOVXLYUCWPNLLQQPZMKSDKEPERTJOHALIFHKHNYDFFRCZBWKFTJOLQIKWHKVFYKCHOQTT");

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
    msg.setTimeStamp(0.5297821843971141);
    msg.setSource(21445U);
    msg.setSourceEntity(92U);
    msg.setDestination(19242U);
    msg.setDestinationEntity(229U);
    msg.formation_name.assign("FOPTSXHVQYLPMZSRPBFCZKHLXOSYMEIIAHEYFTCTRLNQNEZGYPWMJPQXKK");
    msg.reference_frame = 80U;
    msg.custom.assign("RXCGVIMTRXVFHDQQNFOMYKWXRJOUWANOTDWGAQYJXWOEPMXUETSNUFKEZFIRYACVIPRYBKKDVUHPXMXVIVQBFPVDYKYQCSLTDPLZIQXFWHCWZ");

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
    msg.setTimeStamp(0.05530382102363063);
    msg.setSource(41793U);
    msg.setSourceEntity(16U);
    msg.setDestination(36560U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("PNLUXNEXZJEJDXNWSVDRBTMHSCZONEOKLIOMNUGYJXIUUWWZRBSWYERDZLVQAGZGTTYIYLFDKZGNOEMPACWCEPXICUBOGVBFJFANWAZOVLAPKVAMNFORJSFZWHKMCHRLTJISISKGDHUNSDOECXYZGMLOKKUPHZQQQERAAVOJMVXQVUBVITYGYPSISAGFYSKUHFWFQACTKCTCBBPRMQTFFBHBXWYKQJYPHHTHDIJPRMGDXVCMEIULELDX");
    msg.formation_name.assign("WIGQHJBITTJXVUKTQVHIIXRTXFEIHMANJPBOKNW");
    msg.plan_id.assign("KFIBFEVJYIDFGCHZORGDEIQRXS");
    msg.description.assign("OJFCNUQVEYWNKTBFJMVYNTQXPYCUQJIBFSRKXYBFWMGDPIXKSJZ");
    msg.leader_speed = 0.11181933250439546;
    msg.leader_bank_lim = 0.255794812149138;
    msg.pos_sim_err_lim = 0.6991286718969416;
    msg.pos_sim_err_wrn = 0.0865981570209261;
    msg.pos_sim_err_timeout = 61392U;
    msg.converg_max = 0.8081337008799553;
    msg.converg_timeout = 50600U;
    msg.comms_timeout = 12010U;
    msg.turb_lim = 0.061621830164944824;
    msg.custom.assign("HLRAXAJJTFHXCZDNEQKOCOTCUREGRMNXVSPDATIICEFSNBZSSUJWLGCGFZTLZJEYNNCQWOZWTMXHELGTDEBRLJWMILKOZPTERIRBUDGTOVMPXNFDJEHKAAWVONODPIXMBWUFUFSYYNVQFKKTHVHPZUDHIBYRPYGNUBZKDAEEMCRFSIDSMIYWQMXVXSOMYWYAVRAFVCXPRJYQVGHJBAQPAOJQBIUQQCSYINBVL");

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
    msg.setTimeStamp(0.9012855232373234);
    msg.setSource(43106U);
    msg.setSourceEntity(82U);
    msg.setDestination(49655U);
    msg.setDestinationEntity(42U);
    msg.group_name.assign("SQZVMNZVROBCNHAFPWYYCTILPHCDMEXAGUIUAQMYSIFQKROATAHEEZYEFPKOLUBHFIYWZWQSILXZOLBUUTZITVJUUSTKJBRXDKDFJTDDCILRNNGEKZQGCJKBSZXYAKHWJOLDAYGGNPKBNQFCMXINMBYSUKWDAMGYZBHNXGTEFINOGAMAVGIVEECMRMPDOVXHPQWSXOVQQJTHLVXRTFZJWGH");
    msg.formation_name.assign("SFNKSKLZVMJXJCXZNRWK");
    msg.plan_id.assign("PZLHZKHGPAOEZCCBJCMKXKFNVOQJSSRZWOKUCXEIRWPIDQUIQHSJNODUPALVGAHNYQHDFGDFBHBJTCUGVFNYYFYPXOTKFCPWXBKSWMBTYE");
    msg.description.assign("BWXIACGZBAZQLAWVSXPWZMYPLKMBKNGJLSXDKDJYKRZHOYCNLKVWTOSYZXJQLMJAIZNQROLIFPYFTLAEVHNSWUHUIZGZFLDVEWKENKFRJMNREXPNQSGCBGWNIUOXWIRCALSQATCVPOHRZQTOHHVKDUHJQRSDMGGMZETXVMYOI");
    msg.leader_speed = 0.6576169558246453;
    msg.leader_bank_lim = 0.45609174532303864;
    msg.pos_sim_err_lim = 0.9915686067146442;
    msg.pos_sim_err_wrn = 0.7552897897201573;
    msg.pos_sim_err_timeout = 61213U;
    msg.converg_max = 0.7927894701645242;
    msg.converg_timeout = 59564U;
    msg.comms_timeout = 8501U;
    msg.turb_lim = 0.915953510472497;
    msg.custom.assign("DXMCQKUEWMDAPYXXKUKDKRIYXJASVMBJIGGNZZHBKJGFLEVPZQYUYPSYVGFLCMTEZSTZXILGXQHXLBPBQKDRNAUWVTPEOPAZRGNVSEBTFNLCBMITKMWHRVHKQQRJTURJHSVJWSDXRXZAUZLOAOSHIJIOVCCEDYLADTNIOFAUYGACHPWUMIWJNENLHOHFUJTPGASMWSFQKOOCRYIXJIPBVTUQWWYBPSRHFDZFCTBDGFOQWNO");

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
    msg.setTimeStamp(0.2175888672012829);
    msg.setSource(54636U);
    msg.setSourceEntity(35U);
    msg.setDestination(2082U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("ODVKVGACQNSYHBYSVHVTNSWGETQJIJLMOWGCUPYGMMXCQGLFFNMEZWKIFWCKLGUBRZNIQFAXALYLISBPZPRQKVBBJHTFGKGOOYEOWBDWOBWERPKXDKFWARLNVDNZUSWPZKIGUVZJBJERRCAERPDZBUCOMTHZYTMUOOXRIJVQXYEFYNCDDEPXTAEU");
    msg.formation_name.assign("DDXQCQBCVAXGCXYBGGYGATCYNENTBLLQLIDPACVWSDTNSQATSHPTEYEBHKVWNJHESSTKLTMJIJDFQEOPUUXTRZSEGKAOGINRPUMRPZWOFCUHNYLPHBZIVIOOKQIBEVRGALHWPVKLJFKBIXBYTWMACSZQWCOUSEMIXMJWXNOKRVLVUEKDRIPNFRTKZVUDAKHF");
    msg.plan_id.assign("AAQLWXWXNOGDGIJSSCRDEAHBXKBOMRWNSXEYZJLLWBQOKWLJJCZHNZTITWDYYDRPPRJQYVGBKNAXHHEZRBFQZUXKVZBDEYOYHSVMAWUZOSUATMKNUVDNEESGJMMSWYFZDHUCGMQPRKOLIHAVYKPGIUVTDCQITCOLHPEIFTNFUUMMPJZXCRVFJVILRTPXOJKTCRUBAIETUK");
    msg.description.assign("XWJWNDFGUYJCASSXDEMUIMFWYTPMSGQFCBSBVYMZHMGSNATVXSHWGIAFFPORTRQSPDFTUDEWQSNCKYWZVDOLCVVICKNUBQERHZRQZUTYJEIAVDSJAYLOTAOOIYTLLRHBWVHHLCZTNIIEKE");
    msg.leader_speed = 0.40040351947297326;
    msg.leader_bank_lim = 0.28050660044966746;
    msg.pos_sim_err_lim = 0.545874877162223;
    msg.pos_sim_err_wrn = 0.5200533229074067;
    msg.pos_sim_err_timeout = 10527U;
    msg.converg_max = 0.7331471309701593;
    msg.converg_timeout = 53908U;
    msg.comms_timeout = 5640U;
    msg.turb_lim = 0.09931854872090506;
    msg.custom.assign("QRTZXXAUMMJLLJQNXUBTWGPJKLSOOEBQOKGLDQPDXGAOSSPRTHBSURHNGIZBANHDHYRVKRLWZVYDOYOCSXVGE");

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
    msg.setTimeStamp(0.04385213858416526);
    msg.setSource(51677U);
    msg.setSourceEntity(201U);
    msg.setDestination(11213U);
    msg.setDestinationEntity(102U);
    msg.control_src = 25165U;
    msg.control_ent = 5U;
    msg.timeout = 0.18317456650065622;
    msg.loiter_radius = 0.8467168330556571;
    msg.altitude_interval = 0.04661004141946945;

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
    msg.setTimeStamp(0.7924309968882982);
    msg.setSource(5510U);
    msg.setSourceEntity(101U);
    msg.setDestination(37946U);
    msg.setDestinationEntity(145U);
    msg.control_src = 52439U;
    msg.control_ent = 221U;
    msg.timeout = 0.1966312692906702;
    msg.loiter_radius = 0.3274238644134231;
    msg.altitude_interval = 0.7348182966484329;

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
    msg.setTimeStamp(0.9919358936428394);
    msg.setSource(43994U);
    msg.setSourceEntity(149U);
    msg.setDestination(28548U);
    msg.setDestinationEntity(228U);
    msg.control_src = 11480U;
    msg.control_ent = 79U;
    msg.timeout = 0.5309146345121637;
    msg.loiter_radius = 0.3654293011860241;
    msg.altitude_interval = 0.2527833988593635;

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
    msg.setTimeStamp(0.20735391558053295);
    msg.setSource(27210U);
    msg.setSourceEntity(134U);
    msg.setDestination(42725U);
    msg.setDestinationEntity(14U);
    msg.flags = 202U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.07161883536184055;
    tmp_msg_0.speed_units = 36U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7022473233941714;
    tmp_msg_1.z_units = 47U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8202059288674081;
    msg.lon = 0.22050720234831378;
    msg.radius = 0.14552334942376421;

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
    msg.setTimeStamp(0.4267054919391008);
    msg.setSource(15944U);
    msg.setSourceEntity(99U);
    msg.setDestination(36255U);
    msg.setDestinationEntity(222U);
    msg.flags = 171U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2905963007573643;
    tmp_msg_0.speed_units = 190U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6782929373542066;
    tmp_msg_1.z_units = 194U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.820341837750011;
    msg.lon = 0.6312031170940064;
    msg.radius = 0.9763651399079578;

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
    msg.setTimeStamp(0.5173081705999163);
    msg.setSource(61505U);
    msg.setSourceEntity(221U);
    msg.setDestination(8025U);
    msg.setDestinationEntity(194U);
    msg.flags = 216U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4113586099429386;
    tmp_msg_0.speed_units = 37U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.18787794801520363;
    tmp_msg_1.z_units = 69U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4061968773758663;
    msg.lon = 0.7318130652972508;
    msg.radius = 0.7406498331396443;

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
    msg.setTimeStamp(0.31952359870849845);
    msg.setSource(37919U);
    msg.setSourceEntity(13U);
    msg.setDestination(61075U);
    msg.setDestinationEntity(169U);
    msg.control_src = 53176U;
    msg.control_ent = 83U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 166U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.47857363186963064;
    tmp_tmp_msg_0_0.speed_units = 71U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4382075448978625;
    tmp_tmp_msg_0_1.z_units = 24U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.1913797370763326;
    tmp_msg_0.lon = 0.21443888079730766;
    tmp_msg_0.radius = 0.547483716166377;
    msg.reference.set(tmp_msg_0);
    msg.state = 253U;
    msg.proximity = 152U;

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
    msg.setTimeStamp(0.6897766495872285);
    msg.setSource(353U);
    msg.setSourceEntity(23U);
    msg.setDestination(50596U);
    msg.setDestinationEntity(147U);
    msg.control_src = 2859U;
    msg.control_ent = 217U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 0U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9674886711823821;
    tmp_tmp_msg_0_0.speed_units = 169U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9618929137156486;
    tmp_tmp_msg_0_1.z_units = 67U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.1361342200914445;
    tmp_msg_0.lon = 0.6470058158172834;
    tmp_msg_0.radius = 0.8679761289066027;
    msg.reference.set(tmp_msg_0);
    msg.state = 212U;
    msg.proximity = 59U;

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
    msg.setTimeStamp(0.2956554231181324);
    msg.setSource(27589U);
    msg.setSourceEntity(140U);
    msg.setDestination(44977U);
    msg.setDestinationEntity(104U);
    msg.control_src = 60873U;
    msg.control_ent = 204U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 222U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9300624502024364;
    tmp_tmp_msg_0_0.speed_units = 109U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6477104785730824;
    tmp_tmp_msg_0_1.z_units = 45U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.017586717888515957;
    tmp_msg_0.lon = 0.4246086667221505;
    tmp_msg_0.radius = 0.15375057003600934;
    msg.reference.set(tmp_msg_0);
    msg.state = 148U;
    msg.proximity = 187U;

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
    msg.setTimeStamp(0.07063291538248173);
    msg.setSource(29103U);
    msg.setSourceEntity(106U);
    msg.setDestination(56336U);
    msg.setDestinationEntity(196U);
    msg.ax_cmd = 0.1647190328100384;
    msg.ay_cmd = 0.5206623871502911;
    msg.az_cmd = 0.3865862601066469;
    msg.ax_des = 0.2674341680281048;
    msg.ay_des = 0.20892252920205745;
    msg.az_des = 0.4849211192448101;
    msg.virt_err_x = 0.7843771305879446;
    msg.virt_err_y = 0.039366784479033856;
    msg.virt_err_z = 0.4350156451123034;
    msg.surf_fdbk_x = 0.22217665051265145;
    msg.surf_fdbk_y = 0.2721907087486336;
    msg.surf_fdbk_z = 0.7086554715664782;
    msg.surf_unkn_x = 0.8907854342676685;
    msg.surf_unkn_y = 0.8285615580015334;
    msg.surf_unkn_z = 0.5717870460728338;
    msg.ss_x = 0.7940534878747737;
    msg.ss_y = 0.9526896018600802;
    msg.ss_z = 0.05695621846073151;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LUPEQNRAETIFVJWLNHEQOYVYJKHLEGEVIUMYILJKVKHANXGNARGFYXZZTHKMPZUSBTIQDVYQMKPWDOTQYOZVUTRSIDUGWGAPYISBRHZWGTAEHRLJTEROQGRTDHPZSWZCLDJELIWALNNNVJZUIWZYBXP");
    tmp_msg_0.dist = 0.9248723550176907;
    tmp_msg_0.err = 0.18444484368263647;
    tmp_msg_0.ctrl_imp = 0.5606683696312554;
    tmp_msg_0.rel_dir_x = 0.007967688809084716;
    tmp_msg_0.rel_dir_y = 0.09127152816827222;
    tmp_msg_0.rel_dir_z = 0.0775428187121816;
    tmp_msg_0.err_x = 0.054041465968650004;
    tmp_msg_0.err_y = 0.8710905831920347;
    tmp_msg_0.err_z = 0.13177394669798148;
    tmp_msg_0.rf_err_x = 0.04935390852862387;
    tmp_msg_0.rf_err_y = 0.9622378754635513;
    tmp_msg_0.rf_err_z = 0.5287876709017172;
    tmp_msg_0.rf_err_vx = 0.7964236774332719;
    tmp_msg_0.rf_err_vy = 0.12630295793056778;
    tmp_msg_0.rf_err_vz = 0.9907152672765476;
    tmp_msg_0.ss_x = 0.1526395060757778;
    tmp_msg_0.ss_y = 0.9058464579474514;
    tmp_msg_0.ss_z = 0.6292833028316642;
    tmp_msg_0.virt_err_x = 0.7454003937565786;
    tmp_msg_0.virt_err_y = 0.09235585437751048;
    tmp_msg_0.virt_err_z = 0.7698849908655597;
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
    msg.setTimeStamp(0.6809658263189438);
    msg.setSource(22745U);
    msg.setSourceEntity(213U);
    msg.setDestination(58383U);
    msg.setDestinationEntity(78U);
    msg.ax_cmd = 0.3721310210266455;
    msg.ay_cmd = 0.8378341100342154;
    msg.az_cmd = 0.8099635601080056;
    msg.ax_des = 0.7407236527473507;
    msg.ay_des = 0.35339120898845167;
    msg.az_des = 0.7440910796711926;
    msg.virt_err_x = 0.5187694146979583;
    msg.virt_err_y = 0.2272791111287601;
    msg.virt_err_z = 0.2421811753273605;
    msg.surf_fdbk_x = 0.4743765037185641;
    msg.surf_fdbk_y = 0.45007591119307777;
    msg.surf_fdbk_z = 0.41838800181064095;
    msg.surf_unkn_x = 0.5640253249511578;
    msg.surf_unkn_y = 0.5705144826912689;
    msg.surf_unkn_z = 0.30891612869093743;
    msg.ss_x = 0.45336848007448904;
    msg.ss_y = 0.8016674252170917;
    msg.ss_z = 0.11383480656655132;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UDGTCVYDFBOJ");
    tmp_msg_0.dist = 0.6870234215750501;
    tmp_msg_0.err = 0.6914078638495669;
    tmp_msg_0.ctrl_imp = 0.9435372124292372;
    tmp_msg_0.rel_dir_x = 0.6095981936839309;
    tmp_msg_0.rel_dir_y = 0.277549000570123;
    tmp_msg_0.rel_dir_z = 0.34895905178223585;
    tmp_msg_0.err_x = 0.1254164312417957;
    tmp_msg_0.err_y = 0.36125185447445307;
    tmp_msg_0.err_z = 0.04871996366873865;
    tmp_msg_0.rf_err_x = 0.6681459860208434;
    tmp_msg_0.rf_err_y = 0.7808257076026898;
    tmp_msg_0.rf_err_z = 0.937470699722398;
    tmp_msg_0.rf_err_vx = 0.935297531784474;
    tmp_msg_0.rf_err_vy = 0.7004406811169073;
    tmp_msg_0.rf_err_vz = 0.10295807788384792;
    tmp_msg_0.ss_x = 0.894824085889372;
    tmp_msg_0.ss_y = 0.5422429052230049;
    tmp_msg_0.ss_z = 0.8274311297060081;
    tmp_msg_0.virt_err_x = 0.02104715757206943;
    tmp_msg_0.virt_err_y = 0.8456434185007633;
    tmp_msg_0.virt_err_z = 0.7573180087513319;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.3852797963332346);
    msg.setSource(53299U);
    msg.setSourceEntity(105U);
    msg.setDestination(2549U);
    msg.setDestinationEntity(141U);
    msg.ax_cmd = 0.6008122850179592;
    msg.ay_cmd = 0.44247312575032127;
    msg.az_cmd = 0.898860824363844;
    msg.ax_des = 0.7070066774735959;
    msg.ay_des = 0.14407823332095115;
    msg.az_des = 0.48583584968766247;
    msg.virt_err_x = 0.37538960793492615;
    msg.virt_err_y = 0.7187014694494468;
    msg.virt_err_z = 0.7649760160145938;
    msg.surf_fdbk_x = 0.4556950340092061;
    msg.surf_fdbk_y = 0.3229492091868549;
    msg.surf_fdbk_z = 0.11181081445500152;
    msg.surf_unkn_x = 0.9956452483249848;
    msg.surf_unkn_y = 0.5526087701292338;
    msg.surf_unkn_z = 0.26470897383866965;
    msg.ss_x = 0.9757535261874738;
    msg.ss_y = 0.5920507134063611;
    msg.ss_z = 0.9410986654407884;

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
    msg.setTimeStamp(0.5782214313737978);
    msg.setSource(6793U);
    msg.setSourceEntity(214U);
    msg.setDestination(11263U);
    msg.setDestinationEntity(220U);
    msg.s_id.assign("COJTDHBAMJRLAWNCYGESGSQFQPOAXWQIBHUOAFOTYGLDIGVHTUMYIJPEGSTZX");
    msg.dist = 0.09113776408963203;
    msg.err = 0.9289667309528591;
    msg.ctrl_imp = 0.721048310209779;
    msg.rel_dir_x = 0.9310269970629543;
    msg.rel_dir_y = 0.9012821687921745;
    msg.rel_dir_z = 0.3738484603254889;
    msg.err_x = 0.17045455090858364;
    msg.err_y = 0.9501850650743844;
    msg.err_z = 0.8436768215311437;
    msg.rf_err_x = 0.8647809805422734;
    msg.rf_err_y = 0.45122732605885096;
    msg.rf_err_z = 0.4799154286637535;
    msg.rf_err_vx = 0.18238641273143852;
    msg.rf_err_vy = 0.4776207612159532;
    msg.rf_err_vz = 0.5376284831570487;
    msg.ss_x = 0.6774196627520529;
    msg.ss_y = 0.9747244402830175;
    msg.ss_z = 0.17944873903097602;
    msg.virt_err_x = 0.3802003872412191;
    msg.virt_err_y = 0.7254304066201432;
    msg.virt_err_z = 0.5333026203440401;

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
    msg.setTimeStamp(0.6657103699723993);
    msg.setSource(48437U);
    msg.setSourceEntity(89U);
    msg.setDestination(24608U);
    msg.setDestinationEntity(7U);
    msg.s_id.assign("HCYJEHDCYZBVRDRXONZBFPMLTEIIXMEOZCIOLPWHFKEPCADLPTJYCKAUFFWXLQAXVUYLYIZQFGUCQXORJXWKRDTKVMUSRUKND");
    msg.dist = 0.7006308115510596;
    msg.err = 0.7591326350976737;
    msg.ctrl_imp = 0.536816012011081;
    msg.rel_dir_x = 0.0908329650884605;
    msg.rel_dir_y = 0.3840856480992365;
    msg.rel_dir_z = 0.4722783927362768;
    msg.err_x = 0.8645077147668938;
    msg.err_y = 0.8853780720135525;
    msg.err_z = 0.8788044040887019;
    msg.rf_err_x = 0.33178976027655727;
    msg.rf_err_y = 0.4493242851875606;
    msg.rf_err_z = 0.12775846113867695;
    msg.rf_err_vx = 0.8010678807616656;
    msg.rf_err_vy = 0.7953683410256981;
    msg.rf_err_vz = 0.06781412909280704;
    msg.ss_x = 0.4410223833597108;
    msg.ss_y = 0.061494429203905465;
    msg.ss_z = 0.4751776027857654;
    msg.virt_err_x = 0.17857913665841374;
    msg.virt_err_y = 0.7197676867875145;
    msg.virt_err_z = 0.693004330340297;

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
    msg.setTimeStamp(0.2271562993862154);
    msg.setSource(34175U);
    msg.setSourceEntity(177U);
    msg.setDestination(24807U);
    msg.setDestinationEntity(37U);
    msg.s_id.assign("XHHFNGIMHTUIWWOBZOLLFPRXJTEXPLGKUVUFGJOGJNECYGLNQZEUBSWRULJAWDYBBMTAHCXNPJYNFQORDRICKZJQNELYMOOSGXKUJEQREVWWRITVVBEKXKDYVPJSVMUXMAQYASTYFBZVSYVKVQHCCLJNTAHMOCOHDSSZQTFFCFCPWNIEHKGFQDHQZWNIPXCMPMZVGEAPAYOGTPLTZIBMAODWKSCMBRFGBZRKUNB");
    msg.dist = 0.6483936802825012;
    msg.err = 0.06901342410136191;
    msg.ctrl_imp = 0.4820149898123638;
    msg.rel_dir_x = 0.6571780654822672;
    msg.rel_dir_y = 0.21549719583507387;
    msg.rel_dir_z = 0.6835220484187553;
    msg.err_x = 0.4111997612477072;
    msg.err_y = 0.4842399726933273;
    msg.err_z = 0.46304426953917943;
    msg.rf_err_x = 0.24231709660105782;
    msg.rf_err_y = 0.4208691520208018;
    msg.rf_err_z = 0.798065461627215;
    msg.rf_err_vx = 0.08407416389240518;
    msg.rf_err_vy = 0.7575274696079117;
    msg.rf_err_vz = 0.28786857384638886;
    msg.ss_x = 0.6176014520669841;
    msg.ss_y = 0.7228427765871743;
    msg.ss_z = 0.2780195087376355;
    msg.virt_err_x = 0.3263794025290331;
    msg.virt_err_y = 0.6720704115826097;
    msg.virt_err_z = 0.9261940888191507;

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
    msg.setTimeStamp(0.5542858260304129);
    msg.setSource(49567U);
    msg.setSourceEntity(158U);
    msg.setDestination(26887U);
    msg.setDestinationEntity(44U);
    msg.timeout = 25751U;
    msg.rpm = 0.7806903370571376;
    msg.direction = 190U;
    msg.custom.assign("EBVOEOJKICESNGMNAJVTBMZXQVTFRDLAUCZWPYLHYHZLRMHWPQUFWQXKUZVCVGDCWRZRIKZGAXMNSJTMSWONDFHNTLJOGBRGLIOKSBSPYFDDGBDJYYCEFSERTWELFSSIIYOIATNVKCQTUUVPDRJQVMFWBDOFOWCPZTXKRNWAINAXZABKRLMAPXEKPCKMMI");

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
    msg.setTimeStamp(0.06774925027682366);
    msg.setSource(30162U);
    msg.setSourceEntity(252U);
    msg.setDestination(54463U);
    msg.setDestinationEntity(54U);
    msg.timeout = 6815U;
    msg.rpm = 0.47656898069875586;
    msg.direction = 211U;
    msg.custom.assign("AXJGJDURSMNXNXUQSYMPTLFIWQVHVKQATQFQIAZCVMPUKHDCAPMCHIKGKJNRCYSBXXWJSJFHKKLGKRVOPJYMUBLQVYBDCDEGHLTJNXYIGIUBSEORIZEBVOBAJONJARVZZCFWSGBSQNRCPOMZUOVLMHAWXYRZRWLAEHNAEOVMEBFYTZRKVLNDYQUSNDEWPDXDIWPZKXECGSSTNTBBIFDFEJFPRLUXUQMOZAWKWYITHU");

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
    msg.setTimeStamp(0.1707736130448695);
    msg.setSource(27454U);
    msg.setSourceEntity(250U);
    msg.setDestination(58977U);
    msg.setDestinationEntity(22U);
    msg.timeout = 38053U;
    msg.rpm = 0.17291472313057143;
    msg.direction = 60U;
    msg.custom.assign("JDEYQONKJEFAIGQLJDFSWPICYJCAIZSKBIYEGWMKSOFYORVHELIAWQCTRDIIQHXBYVOROQJUPGTELBBHJQUWVAEMPAWUHQCMLHJMMW");

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
    msg.setTimeStamp(0.4120619309242146);
    msg.setSource(8159U);
    msg.setSourceEntity(79U);
    msg.setDestination(34020U);
    msg.setDestinationEntity(103U);
    msg.formation_name.assign("ENXODMGTGGRBYAAAPLBXTYXWJYZVKANXHRYDINDLNEQRIREQQTKRAJHULSAHXFDOJLGNLKTKEFJLSIWZPGZMBVZLPCCOJXOBDWVGTAPKJQZMVFPXIMLTHYBUY");
    msg.type = 50U;
    msg.op = 162U;
    msg.group_name.assign("XQNCPYKUXEOGQARIRILJRGOBLCNYISKIVTKDGMZZMSLYEYVTBWBXPAFFTMIAHBISGLYCDHNDDCFBIVKQQCKHVVSAHYEFHGRBJWCOPZWZLEHIMHQWQTBJULTAKPFQR");
    msg.plan_id.assign("KITZPXLCJUQLTKVWKENSILQDSHGBFWOJKDUYJKOVHN");
    msg.description.assign("AFDAJXRTDASRHENTJSCXQUXVUZWCJGEJRRLQBHGCKIBKXEBAH");
    msg.reference_frame = 51U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25967U;
    tmp_msg_0.off_x = 0.8851473102760563;
    tmp_msg_0.off_y = 0.13329422972397664;
    tmp_msg_0.off_z = 0.9321643770632506;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.2250721368302009;
    msg.leader_speed_min = 0.589310286334825;
    msg.leader_speed_max = 0.741879194042543;
    msg.leader_alt_min = 0.8124757752727751;
    msg.leader_alt_max = 0.6342985061735363;
    msg.pos_sim_err_lim = 0.2459968172928444;
    msg.pos_sim_err_wrn = 0.04997222224708231;
    msg.pos_sim_err_timeout = 230U;
    msg.converg_max = 0.024385035639644115;
    msg.converg_timeout = 6693U;
    msg.comms_timeout = 59866U;
    msg.turb_lim = 0.4487260373474953;
    msg.custom.assign("NOYQWBUSLAGILYAUELJNJHHYNUOHJHLLSWQXTAOOOBZFBECFYKQUUBSEHXPLMRWBXZXSCQAMZECDBDXZVZIAODSXKYGRKMAPVSUFDGCQWYZOMJPNNUIWELFJGEICWGLMPSAHACSXRXVEWBOYKJ");

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
    msg.setTimeStamp(0.6407577655535186);
    msg.setSource(41444U);
    msg.setSourceEntity(121U);
    msg.setDestination(51974U);
    msg.setDestinationEntity(246U);
    msg.formation_name.assign("TWUJSBPYJBRUZNARSVXXAXVUWMMYIZYASKBETYLZYJMMLJGPTISKZQYDIGOEEFUVWHRMHVFEQYZOESLZLAHTVQJXIPOGDCIRHFMEWUPCROENIKDXGHBJBSRCAJLBAIWKTTKCGFDNJMPQWFKVRIAZFJVHLOVLKZOUNSCPTDUEEIFGODTDRZHYACQFLKQCGVBDSNIYCQQPQRJOWVHBTKXDXLRXHSSWNF");
    msg.type = 130U;
    msg.op = 0U;
    msg.group_name.assign("GAJYYTLSUVLDONTPJNXEAVLSRCCRVGWIZBILAZWBVPPBVMQZMJLECQXSWARRWYGRQFJYKOGOZFHSWYUISGBAVXERHJEKYTGPXWVCZJSIPPUDTJXBMINKHSGKHFBOKQBBOONQRYWJMNMADHXCRAKHTQBMXCFAICHHFVPQWVNWKGDUDGZ");
    msg.plan_id.assign("HIOMPSYPQEJUQLLVWXYQUGZWEZJVQSEGXFJPQKDSPCIKGQAPGSQUSNWHSZRRDEAONHQFY");
    msg.description.assign("VRTNWFUODXWREQYNBCPWIWWHLFLAPMCDTDRCFUSOERSHZXWSOLEJBYITVPZMVKNNBRAQZJGYE");
    msg.reference_frame = 241U;
    msg.leader_bank_lim = 0.3573543573479676;
    msg.leader_speed_min = 0.3261423482435779;
    msg.leader_speed_max = 0.36274794652057596;
    msg.leader_alt_min = 0.65707440812547;
    msg.leader_alt_max = 0.3708470937097079;
    msg.pos_sim_err_lim = 0.8270774638143839;
    msg.pos_sim_err_wrn = 0.2703316332058395;
    msg.pos_sim_err_timeout = 23771U;
    msg.converg_max = 0.8665118900816835;
    msg.converg_timeout = 50936U;
    msg.comms_timeout = 41265U;
    msg.turb_lim = 0.5149224833594118;
    msg.custom.assign("TMGAIVJEAKDQUMG");

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
    msg.setTimeStamp(0.8021703620372992);
    msg.setSource(5536U);
    msg.setSourceEntity(92U);
    msg.setDestination(18416U);
    msg.setDestinationEntity(72U);
    msg.formation_name.assign("USRTHPGYQZPAWJEYJJEWKBMYCTKACJKSZGCVMYBDZOJORZFWP");
    msg.type = 22U;
    msg.op = 247U;
    msg.group_name.assign("YPIDXHPYIXUGGZSGHMEQBKQKAJURTHON");
    msg.plan_id.assign("TILSHRNVWUVQUMTGTJILYHOIQMZZZENEDOGBPMSFBJDYAWTMYCWXQBXNEQIFZNBNOKL");
    msg.description.assign("SWYNWZQNXGPHBGZNJLHOBMUAMVQOKADNRTHUXCGDEZEKUJF");
    msg.reference_frame = 19U;
    msg.leader_bank_lim = 0.851566979109371;
    msg.leader_speed_min = 0.8979840339947738;
    msg.leader_speed_max = 0.9395773698338793;
    msg.leader_alt_min = 0.33210066763134416;
    msg.leader_alt_max = 0.26649573386564307;
    msg.pos_sim_err_lim = 0.8389065824298625;
    msg.pos_sim_err_wrn = 0.34253919582033077;
    msg.pos_sim_err_timeout = 1254U;
    msg.converg_max = 0.10867917200166877;
    msg.converg_timeout = 16018U;
    msg.comms_timeout = 37504U;
    msg.turb_lim = 0.4957147591278158;
    msg.custom.assign("DONXRIGYLBOVDHMVFKWBOJYXWOSLJVJLJNTJINZGYKAGREZTPCKPXFIWPESUQBGZMCVYTIQSRCDIHHKRRNPDAHYFQFIQWWBSOOZXCJUZQJMQONIMPSYEUFQDZQUMBDALXDEGCJZIOAPCTRWVEZYILXGKSKFGFHSKNUVBNWWTFKCPRVHPBEXZHLYVMPJXTXIHALMPXOQARVYGRTFCEERSUFHOJSKTWBABAMQDBNECUDDGZLGLSMUEWAHNVLCMAY");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.9415963038386596);
    msg.setSource(16178U);
    msg.setSourceEntity(56U);
    msg.setDestination(36525U);
    msg.setDestinationEntity(54U);
    msg.op_mode = 188U;
    msg.error_count = 207U;
    msg.error_ents.assign("XIXHVPDYZFQVJDMEVNXOMXQSBNTXWGTPCQXMTFOR");
    msg.maneuver_type = 13596U;
    msg.maneuver_stime = 0.1381186664122711;
    msg.maneuver_eta = 26898U;
    msg.control_loops = 1403691191U;
    msg.flags = 79U;
    msg.last_error.assign("OOHJMVBXBBCSHNYLSUYACFJDBAPDNDFKVIKGMSGQDAGRUFEYILNMPINKLLWKQVMXUWGINTRWXKBTZRYBTRSWCRZULTVOOUJECNHRSVCCHLAJXWBSAFPMQWSOMEROXYFPZOENXPZPIOUGLMHEXTDQJEFVC");
    msg.last_error_time = 0.42155620916327075;

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
    msg.setTimeStamp(0.28398112143933796);
    msg.setSource(12593U);
    msg.setSourceEntity(131U);
    msg.setDestination(28528U);
    msg.setDestinationEntity(115U);
    msg.op_mode = 178U;
    msg.error_count = 245U;
    msg.error_ents.assign("JYFXZNJXRXTDYRPCQHXOABRMAOJQBVWPDPMFZCOTCPIEMVNKULIEUOZJWYPESGBTULMHSSEPYUZQA");
    msg.maneuver_type = 46061U;
    msg.maneuver_stime = 0.5929051753172169;
    msg.maneuver_eta = 52867U;
    msg.control_loops = 815618658U;
    msg.flags = 77U;
    msg.last_error.assign("FOHHQMXNJNJVXQPQGWLHEMSTYGVBHOKJPPQGBQHJWQUMIQJFKAIZRFMUZXRTXPBIUSLUVPLJSWNLFIGWVRPREYWVEOYIMMDCOCDQCEWNAYKOGUSRTJFSKYQTPADUZFKXDMGEPLUMHXWZBNADEBSEMAFSPRRVV");
    msg.last_error_time = 0.09434689295077336;

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
    msg.setTimeStamp(0.5446098156045176);
    msg.setSource(61593U);
    msg.setSourceEntity(11U);
    msg.setDestination(32075U);
    msg.setDestinationEntity(209U);
    msg.op_mode = 108U;
    msg.error_count = 42U;
    msg.error_ents.assign("CRCJTZOUUGPVKTYDMJWDMLGIRWVFFAPXQUXNTMUYTQCKIRPOBOAZNYHJDYCQHTMYLHFNLKRKURWHMCNDXESEWUITEVBO");
    msg.maneuver_type = 18713U;
    msg.maneuver_stime = 0.8496804140347003;
    msg.maneuver_eta = 5283U;
    msg.control_loops = 230535470U;
    msg.flags = 79U;
    msg.last_error.assign("WSVBFDCEMYJTDSBBBHIAUKAVJUWKWRPDPKUEMWHJOIOKXTULKJWSFDLXRTFNKMXVFD");
    msg.last_error_time = 0.3634091410874658;

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
    msg.setTimeStamp(0.5293677400947832);
    msg.setSource(37448U);
    msg.setSourceEntity(94U);
    msg.setDestination(61235U);
    msg.setDestinationEntity(177U);
    msg.type = 44U;
    msg.request_id = 20712U;
    msg.command = 125U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("NFTRYUNSNWAFSYQWSTHQTDRTGJUYBAGRBXPZJBILKEYKJUHXLYJHJLMXGPIHMSSACFHYTUAXSLUGBRNLHKJFVZAESKLHQC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 48481U;
    msg.info.assign("PVZPMJIYFKSYEWORBXSCDVTNBRKTBLLOEIQIXDWOHRQUGHFSBHULWCCFFJOFMGXEDSJRSIRCGIDMGJLSZRWBLMGXZJKHAQYIEGXLRSACNHVGUEOBYLJWYLEVWYKPNUTXHISUVRZFFBV");

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
    msg.setTimeStamp(0.6059712512114044);
    msg.setSource(13268U);
    msg.setSourceEntity(178U);
    msg.setDestination(4994U);
    msg.setDestinationEntity(150U);
    msg.type = 151U;
    msg.request_id = 15347U;
    msg.command = 218U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 4759U;
    tmp_msg_0.custom.assign("VSLDAZHTUALNYLGWGUBQRANSMRTXUDPPKKYAVDPYDFMOGAYRPNRCLRFLKUJGOREKUHOYOZSLXVSEBQUMGNZKHCOFZUIXCUDWTIJBCISSDSPJIDOVSEQICHOCTECZVWJATRFGBFBHNDPXTVGTNBAJELXMNHDWAPEZGIWQOTJHEMNBZGQQGFIEPUZFMYCWQLSVUAZTHFXMRBHRBWJSWKQLIAXRJOHVXDWKEYOCNFMLJPQIKMBYTEPYZWJKVM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 23980U;
    msg.info.assign("JJKRMQRHIBHZTLJTIXJEUWTXUSQKCYUMYLQSHOGYIKSJJLNNFYORWKMZGCNDVFLDBFWXYJVOHPZZDAAAATAZEBKYEPATICRZPYRELCGIVCLRMFHQYYFGZMQQJFBFEMVAWKIZAHHMEGVSIDULNBFVQXKNHBXGDQRUQSWUNSXWAPDNDBVOSNPDTUEMITNXXBCWWITSKXIOCCPLEDGAPNPODHWKTTSLBJBOZOJFORZPGY");

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
    msg.setTimeStamp(0.7524691016682393);
    msg.setSource(45854U);
    msg.setSourceEntity(214U);
    msg.setDestination(43089U);
    msg.setDestinationEntity(94U);
    msg.type = 199U;
    msg.request_id = 49117U;
    msg.command = 169U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 42011U;
    tmp_msg_0.lat = 0.435119887610399;
    tmp_msg_0.lon = 0.8119965977657021;
    tmp_msg_0.z = 0.32471929836582114;
    tmp_msg_0.z_units = 92U;
    tmp_msg_0.speed = 0.8682540951577206;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.bearing = 0.988874857523644;
    tmp_msg_0.cross_angle = 0.9785988167031282;
    tmp_msg_0.width = 0.990838403729191;
    tmp_msg_0.length = 0.5232716828213037;
    tmp_msg_0.hstep = 0.002602441676592626;
    tmp_msg_0.coff = 35U;
    tmp_msg_0.alternation = 4U;
    tmp_msg_0.flags = 8U;
    tmp_msg_0.custom.assign("TJOHOXIBXZERVFDHFIBWHFJCEWASLVNMEPOKBULRWTBUHXRIFQHOZPSDIJPOPWBKUPOBWFKGTHARQCSKQYGCQSBZNXSAWWEFITUSZTEDWHVLRQXAPQYJAOEUTLIJEDDRFHYWQDGIBGKMTCMUBKQTGJCJLXUNWVZQVFGMXQKSSOAEJNLXHTXIRYMNZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5790U;
    msg.info.assign("PDKMTSTNSQGXBLNHDIWGJTNFLJKYTFTZEYOOKEGFVHISVTPCIGSKYQOLZHWMPIRZULQLCFYDSQCWKXIRXUAURNDFEZBRXBUCHUIVOIHHMARLJIFNTZGVTAHOVLSMBASOLRXWMNZNGGYZ");

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
    msg.setTimeStamp(0.2413613839620874);
    msg.setSource(3916U);
    msg.setSourceEntity(40U);
    msg.setDestination(13048U);
    msg.setDestinationEntity(19U);
    msg.command = 232U;
    msg.entities.assign("CUDQOLGHYHSHLXBOFKUIELHHPXNBDRVSNGAM");

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
    msg.setTimeStamp(0.07786854465168758);
    msg.setSource(44628U);
    msg.setSourceEntity(143U);
    msg.setDestination(16130U);
    msg.setDestinationEntity(18U);
    msg.command = 16U;
    msg.entities.assign("YIEXVRTQQTMZELIBQKSOWKNVJCKDBZNGZNLPXDZTGJNQRSPQYVOEFUYPWKVDSCEGFDZGXZKAEMJF");

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
    msg.setTimeStamp(0.3699037350879857);
    msg.setSource(61764U);
    msg.setSourceEntity(190U);
    msg.setDestination(8797U);
    msg.setDestinationEntity(63U);
    msg.command = 67U;
    msg.entities.assign("OBUJZQSBMQFZYMRGFXMIUPLTGHCCGLBPJVWODENLBDEIGXVQKJSACPLFVVZEBXNU");

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
    msg.setTimeStamp(0.3752515740735074);
    msg.setSource(61315U);
    msg.setSourceEntity(193U);
    msg.setDestination(26888U);
    msg.setDestinationEntity(28U);
    msg.mcount = 65U;
    msg.mnames.assign("HGJYWRGIMUUXGTGYLPKWZJKEPNVQYVAVKLNHTTBFOQKIKLQEIRSJBDPBUAFWZILMPCDHLMRUVNBDWORPEUNJST");
    msg.ecount = 249U;
    msg.enames.assign("MGJBAVDPZHYAUBFTSFXGKPYLPTJNSFVTEECTNPDOUUVHQBMDTPFWUUCBTEYNQHHIMNEOAQBYXOYQZDPZGSQUMALMSHHGVFMJGZJWDEIDBICTRPXPNWGRHKLSQXJVCAKYVLOSJEKRICFHXCVKBINLIECRNSUEMQYNPLGLFDB");
    msg.ccount = 118U;
    msg.cnames.assign("ZNXCLMMQEXNPPBRKPBTUAKZNDWAKQIDBJDBMFO");
    msg.last_error.assign("XXSYWZVPCHANWLFSOTRIJVWDOCXGBJYSERJJRILUKILBMIJRGHBSCIBKCJNZJCMMHKSDNYFVPLAHOLMXRVFIHBKNTIYERRMFWDVSKDGONVTWXABAQRUPTS");
    msg.last_error_time = 0.8183934804034987;

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
    msg.setTimeStamp(0.27908747832863157);
    msg.setSource(53602U);
    msg.setSourceEntity(8U);
    msg.setDestination(63288U);
    msg.setDestinationEntity(214U);
    msg.mcount = 64U;
    msg.mnames.assign("KQKYZKCYHGZWVGETMREMVNOBXUIOMIDXHTAKGYWTYALJEVIAQJKBPJDHREFXMHYVIHBIOHAMLVRYUPDZKFFWOJOZURSAMZXUNQQSNLBDPSJTIEDXYDGDFNCWPXKYDLQBUKOGRZESTAFXTWGLHNIRZPVJLEGQWLZSFYPBGMZKL");
    msg.ecount = 243U;
    msg.enames.assign("RJLQUYLGGIVQUHIPDTPDVSRMWATYLZKUXWAVFIVCGEYOBZHQXKMAXEQOBBRDRJVJUVKGKDBKVNCFMRSDTLIOASZ");
    msg.ccount = 217U;
    msg.cnames.assign("XPQMXNCKXREGAHISIRNLKKECJVIOHBIDVTSYTLYNCWSCLIRLTODYQWALFGXRCGVCMDHGZQMHWPWOUYVOIVBLMPOZDJJVOPTZAFRRJQDDRZEZMGERXKYQFAWFMYMEFTNCJBEUAQTHQNAUIKAFVTSKMCBFKPVSDSGQUPGKHZLHKYONUOWQXDVVHMJUAYGYXSIKNPUHGLLAEENJUHUDJFSBGDUBYQZPIPZWPLTESCNJFWXBWRBXZOAB");
    msg.last_error.assign("LJISSFHCLXSUWOUNLGXWUAJFFKUVWZFLZXATUBNILZMNDTTBQUYDAQOOWLPIGESQWHPEPOJCRXPYDLKOPOASNRBSXWEGMPXXNCJIHBEDHV");
    msg.last_error_time = 0.9660964179648834;

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
    msg.setTimeStamp(0.04241917006310536);
    msg.setSource(37339U);
    msg.setSourceEntity(176U);
    msg.setDestination(43120U);
    msg.setDestinationEntity(0U);
    msg.mcount = 21U;
    msg.mnames.assign("PGZTEMSEJNOIIQJNOOBLHRCFCTUOUBEGVAUSSRUJHINQYITHYIEDTLPXVKHFASKXXDQGNAVMOVSDPFIMECCGUWRALXPWTRGZUKQDTZOCXSFPKXYWKZYFDUJARFPYGBWGBJJFYPYVQWLSYDFIZEMCNKLIWIOEBDQAJBOGRUNCHA");
    msg.ecount = 206U;
    msg.enames.assign("KFQWCZSFKCVFSRTEIWOZPECMLBOEYFSZNVRWEAYPOGMQBMVXWGJGKUANNNULMUJJHGOZHMBNHLRGDYQTPKBDITDOCGIAVALOKUSOHLQXSGCIVXXFDRSWMUAMHQZRFFTGXYHLBJVBVTUWXJDJTHFZPSRESNNPCTOWPPYHMPLUJMKQCIZBXJKMNXKDBSXLJGNRTQTHRYVEVWALPIHIZESUFYTNR");
    msg.ccount = 127U;
    msg.cnames.assign("AXCFEYBUBQXBGRSQFEOQWZIJDZDYLBEYMUMZGSZRSMOOHVQICFJQITKBMEDVLWEVAAFPJFJTHKLUIGSRJOLBUWKMVMKAKQRVNNLDVDSPFXRCGRUGPJHKBYITXBCTSRHACGEPDCOAYAHPNOVNSZMHTVIGFJCDNNYKCNDTQAPZPZJLXSNIXKVWZOBPNBWVHTJWLCOAQHITNGESDYFEKERIQDAFMFUYECXMOZKXLYRUYRQUHOTUMUT");
    msg.last_error.assign("AYMAWSIQZDIXKDGDSWDFEWAZLUBWTBROOUHTWFIW");
    msg.last_error_time = 0.4298973013562629;

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
    msg.setTimeStamp(0.6572573765003956);
    msg.setSource(65278U);
    msg.setSourceEntity(57U);
    msg.setDestination(53491U);
    msg.setDestinationEntity(149U);
    msg.mask = 64U;
    msg.max_depth = 0.6536950073514632;
    msg.min_altitude = 0.31992475564776446;
    msg.max_altitude = 0.7948414813578445;
    msg.min_speed = 0.6911784821285046;
    msg.max_speed = 0.4176499604320467;
    msg.max_vrate = 0.7620392808342269;
    msg.lat = 0.220541319566258;
    msg.lon = 0.7570251895557408;
    msg.orientation = 0.8017392559499579;
    msg.width = 0.6631190271863918;
    msg.length = 0.7558353584178414;

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
    msg.setTimeStamp(0.4386465051904186);
    msg.setSource(34609U);
    msg.setSourceEntity(52U);
    msg.setDestination(24202U);
    msg.setDestinationEntity(233U);
    msg.mask = 41U;
    msg.max_depth = 0.24059970971297961;
    msg.min_altitude = 0.9201217612548379;
    msg.max_altitude = 0.9674702709644836;
    msg.min_speed = 0.863473367696239;
    msg.max_speed = 0.607599902943539;
    msg.max_vrate = 0.9617441020729657;
    msg.lat = 0.8862148958668117;
    msg.lon = 0.604603571274913;
    msg.orientation = 0.23421595049462984;
    msg.width = 0.15034975366076508;
    msg.length = 0.6247066117628937;

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
    msg.setTimeStamp(0.18330576203255677);
    msg.setSource(61057U);
    msg.setSourceEntity(148U);
    msg.setDestination(7425U);
    msg.setDestinationEntity(213U);
    msg.mask = 43U;
    msg.max_depth = 0.6561686596961397;
    msg.min_altitude = 0.3968836884131586;
    msg.max_altitude = 0.5880653514850112;
    msg.min_speed = 0.152787266762067;
    msg.max_speed = 0.3327269501748549;
    msg.max_vrate = 0.5967753887425078;
    msg.lat = 0.2588614570665071;
    msg.lon = 0.8511468776530774;
    msg.orientation = 0.8540913811786556;
    msg.width = 0.09003032468561045;
    msg.length = 0.7576244299848759;

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
    msg.setTimeStamp(0.814760299361751);
    msg.setSource(6485U);
    msg.setSourceEntity(62U);
    msg.setDestination(4338U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.5243557998772572);
    msg.setSource(45932U);
    msg.setSourceEntity(215U);
    msg.setDestination(23814U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.8496358851338429);
    msg.setSource(23268U);
    msg.setSourceEntity(160U);
    msg.setDestination(1100U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.6498817170105604);
    msg.setSource(28996U);
    msg.setSourceEntity(106U);
    msg.setDestination(57067U);
    msg.setDestinationEntity(26U);
    msg.duration = 25184U;

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
    msg.setTimeStamp(0.9555818053113285);
    msg.setSource(24615U);
    msg.setSourceEntity(25U);
    msg.setDestination(7946U);
    msg.setDestinationEntity(55U);
    msg.duration = 36968U;

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
    msg.setTimeStamp(0.4925213812631639);
    msg.setSource(52910U);
    msg.setSourceEntity(112U);
    msg.setDestination(65192U);
    msg.setDestinationEntity(197U);
    msg.duration = 30838U;

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
    msg.setTimeStamp(0.9951295127910944);
    msg.setSource(1768U);
    msg.setSourceEntity(95U);
    msg.setDestination(51925U);
    msg.setDestinationEntity(93U);
    msg.enable = 161U;
    msg.mask = 3469677965U;
    msg.scope_ref = 2189681114U;

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
    msg.setTimeStamp(0.1490704967761033);
    msg.setSource(17188U);
    msg.setSourceEntity(137U);
    msg.setDestination(46490U);
    msg.setDestinationEntity(80U);
    msg.enable = 157U;
    msg.mask = 4105065128U;
    msg.scope_ref = 1514173114U;

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
    msg.setTimeStamp(0.25917422932202927);
    msg.setSource(18319U);
    msg.setSourceEntity(167U);
    msg.setDestination(27765U);
    msg.setDestinationEntity(50U);
    msg.enable = 81U;
    msg.mask = 626754433U;
    msg.scope_ref = 4291872113U;

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
    msg.setTimeStamp(0.6038280234085209);
    msg.setSource(12174U);
    msg.setSourceEntity(176U);
    msg.setDestination(41987U);
    msg.setDestinationEntity(98U);
    msg.medium = 221U;

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
    msg.setTimeStamp(0.8979203797429733);
    msg.setSource(36748U);
    msg.setSourceEntity(179U);
    msg.setDestination(10519U);
    msg.setDestinationEntity(114U);
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
    msg.setTimeStamp(0.20951436270341028);
    msg.setSource(53430U);
    msg.setSourceEntity(205U);
    msg.setDestination(12998U);
    msg.setDestinationEntity(242U);
    msg.medium = 236U;

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
    msg.setTimeStamp(0.2990604278327097);
    msg.setSource(17699U);
    msg.setSourceEntity(40U);
    msg.setDestination(9022U);
    msg.setDestinationEntity(92U);
    msg.value = 0.3126492914502098;
    msg.type = 230U;

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
    msg.setTimeStamp(0.6371738991750353);
    msg.setSource(60155U);
    msg.setSourceEntity(109U);
    msg.setDestination(64664U);
    msg.setDestinationEntity(119U);
    msg.value = 0.973707892763986;
    msg.type = 229U;

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
    msg.setTimeStamp(0.33200758036696054);
    msg.setSource(6132U);
    msg.setSourceEntity(188U);
    msg.setDestination(619U);
    msg.setDestinationEntity(243U);
    msg.value = 0.26521976319484986;
    msg.type = 233U;

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
    msg.setTimeStamp(0.9578284343104094);
    msg.setSource(7626U);
    msg.setSourceEntity(197U);
    msg.setDestination(64929U);
    msg.setDestinationEntity(224U);
    msg.possimerr = 0.9208815066016894;
    msg.converg = 0.5928135272870094;
    msg.turbulence = 0.586093067694872;
    msg.possimmon = 134U;
    msg.commmon = 26U;
    msg.convergmon = 116U;

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
    msg.setTimeStamp(0.46839162040927784);
    msg.setSource(57672U);
    msg.setSourceEntity(97U);
    msg.setDestination(48760U);
    msg.setDestinationEntity(126U);
    msg.possimerr = 0.257964463402642;
    msg.converg = 0.8949344497627931;
    msg.turbulence = 0.1572727108874893;
    msg.possimmon = 47U;
    msg.commmon = 140U;
    msg.convergmon = 64U;

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
    msg.setTimeStamp(0.24612195104681256);
    msg.setSource(11105U);
    msg.setSourceEntity(23U);
    msg.setDestination(52361U);
    msg.setDestinationEntity(225U);
    msg.possimerr = 0.7033685351549344;
    msg.converg = 0.5159869930146295;
    msg.turbulence = 0.11608117360456038;
    msg.possimmon = 141U;
    msg.commmon = 178U;
    msg.convergmon = 244U;

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
    msg.setTimeStamp(0.006697575282721746);
    msg.setSource(33888U);
    msg.setSourceEntity(9U);
    msg.setDestination(16211U);
    msg.setDestinationEntity(119U);
    msg.autonomy = 202U;
    msg.mode.assign("VOVYYBNSAGLQYFBAWQKJRKSOFTPYCFAVSFNCRGCBESKNYXELRMUCWUHZRCLPXDGFKYAMXQUIPDTLQBRWFEQHPVSZBKBISELCDVPMHNTRWGLKNAQFIHMUJPVBUHWLJTTIPZYHEIXOUDMLKRSCEZBWMTVHGAFWDLXOXQRYGHHZEWPZNIJUBTTQCFKYJZZDOQGKSYOED");

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
    msg.setTimeStamp(0.727383338244175);
    msg.setSource(51594U);
    msg.setSourceEntity(9U);
    msg.setDestination(61771U);
    msg.setDestinationEntity(235U);
    msg.autonomy = 244U;
    msg.mode.assign("PUJUMTCYDKNQJZEDQUOPSVZMGPBAZYPWRXDNAPTQUHWFLBIXJFYNOGAH");

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
    msg.setTimeStamp(0.43953692534353217);
    msg.setSource(29054U);
    msg.setSourceEntity(44U);
    msg.setDestination(35043U);
    msg.setDestinationEntity(244U);
    msg.autonomy = 17U;
    msg.mode.assign("NGHRDFJHOCJZWSGRJGNXHERIMVHJUAFL");

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
    msg.setTimeStamp(0.1311589402497111);
    msg.setSource(20936U);
    msg.setSourceEntity(176U);
    msg.setDestination(395U);
    msg.setDestinationEntity(75U);
    msg.type = 247U;
    msg.op = 90U;
    msg.possimerr = 0.3501434070340267;
    msg.converg = 0.7025799673604257;
    msg.turbulence = 0.9094569548614249;
    msg.possimmon = 251U;
    msg.commmon = 175U;
    msg.convergmon = 148U;

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
    msg.setTimeStamp(0.04303830319927893);
    msg.setSource(9621U);
    msg.setSourceEntity(180U);
    msg.setDestination(14240U);
    msg.setDestinationEntity(146U);
    msg.type = 170U;
    msg.op = 96U;
    msg.possimerr = 0.6451912896035262;
    msg.converg = 0.9000622958967222;
    msg.turbulence = 0.7210695112673;
    msg.possimmon = 195U;
    msg.commmon = 190U;
    msg.convergmon = 213U;

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
    msg.setTimeStamp(0.4390028339842028);
    msg.setSource(24783U);
    msg.setSourceEntity(53U);
    msg.setDestination(61327U);
    msg.setDestinationEntity(243U);
    msg.type = 77U;
    msg.op = 234U;
    msg.possimerr = 0.3869577211001973;
    msg.converg = 0.6515459988459577;
    msg.turbulence = 0.8639986163881707;
    msg.possimmon = 14U;
    msg.commmon = 215U;
    msg.convergmon = 140U;

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
    msg.setTimeStamp(0.6756090977051962);
    msg.setSource(49907U);
    msg.setSourceEntity(35U);
    msg.setDestination(1580U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.9218493636425821);
    msg.setSource(49046U);
    msg.setSourceEntity(80U);
    msg.setDestination(57553U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.4304258746103006);
    msg.setSource(41433U);
    msg.setSourceEntity(55U);
    msg.setDestination(60339U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.17847315717860468);
    msg.setSource(24350U);
    msg.setSourceEntity(186U);
    msg.setDestination(59273U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("KGJMAWCQFZBUXESJUETEBWARLVZHYKRVUMYSVHVPNJZBHEDAARTUUIDUOWLNXZFMDFLCFBCTERWWGNYKGTCROX");
    msg.description.assign("WGDZNMVQQIZTDNUHAQSBGGZGTLEWZGBLLTMWOLRKMGUADQCCURECAYJVHKOHAMHJNPOFWYEXWBXNJHBTKXQV");
    msg.vnamespace.assign("MNMKNGYWKNFLPKLIOTOWAVIBGLRUGNSLRSTQUQSXDSXCQKKHMPWUVOTWPEOBDKACJFNEVYBOWDCZBYUHJRHGDJIMZXGJNLKYTJHBHGLZSJF");
    msg.start_man_id.assign("IBEFTOCNCMXQCTOODMWGLBKPFUQAMGNPOMGGRMOQDNYDVNURYLZYUOAJGLEZZZNUEABVDUHJBKCPFKGLMCEHSSQPGOIBJTWKJYVSPVWQFYWOFDSGMLIAVLAJZWYPQESKYDLPE");
    IMC::QueryEntityActivationState tmp_msg_0;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7011262744538063);
    msg.setSource(19788U);
    msg.setSourceEntity(191U);
    msg.setDestination(35558U);
    msg.setDestinationEntity(141U);
    msg.plan_id.assign("WLIEXDLNCUZPQMFBBMSEUYASHDKNBNSMAYELRPNSITZHVKVEZTQQDXVONMKCFRHCDCVHFXLOCEQDSFPZKTNQJKWYVNEPBKCUZTBEFJNPQJHZYLJXZPRGBZJLCOJKWQWRVMOQRTTACPXDRGOTGUPMGFDHPCXFMGGXWGXTXYEJYLQAIAJMASIUIWLIUIHVJWZEKLRUUJAIWVARSBNMTBMWZHBGGXSODYGNLHUO");
    msg.description.assign("XAVUDIJZREYZMVKQGBZNZUMCQSWWHSNPRTIEEDLNSGAUYRJRQDQFKRAJLXLYCUFQIABWLEWJMPNWWFUEBAKBZAKFTUZKTHBCLOPNTSCHUNLCKDFVKSHSMCIYOGPMBJQSDTRWEPDVDNTOOIAXJXLFJ");
    msg.vnamespace.assign("MFIYJJIPQGKDQNDVOFFHMVBALGGVLUABNKHOHDQPQFMVNUEEPACWVRHZBNAUJHWXTMZGONPPBYAKUBYQTFCCYQAGXKPYKIFKEHJYGHETLKF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WYZGPCLSNYEGEJHNEMVGDORHDHJQWVHHURZOLGLIEVJXXCCRCROTVNXIAXPSFZJTMARJBSKKXYMNF");
    tmp_msg_0.value.assign("WTGDOJWQSEXGBOXTCUBXKOQNVKUBLAHYHEJJFBWKKVEURBDYKQXWIGSUIVPDZXQPWUQKVSMTTJCFXWLYRECWIVMAMLCQUXKWCYSEFRMTKUEPWTGBIUOAILFORRGPUG");
    tmp_msg_0.type = 163U;
    tmp_msg_0.access = 206U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YBCLKABVEJVLVPYIYLLNZOZBPIYVBGWXUBUCMGZEKKIZBR");

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
    msg.setTimeStamp(0.6453051126990468);
    msg.setSource(17736U);
    msg.setSourceEntity(235U);
    msg.setDestination(29145U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("NLJFEDDGKPHXFNYUDJNGOWUDKIFJHILUBFUKFHYCZSAJRXNLEYK");
    msg.description.assign("ATWYAXAEAHDMDTPDKJDTEMUJGDYMCYWQSVBEKVLDFCLCMVGUTQIQCRZRWFOPXPTELINIQZFLJDGTCMFUCNHAEVRQAGHJCHULKRZOPGLPXMJUYOPHJDAZASZKHBVXYXOSHWSNCXUFZOXFFIZIUBPNBNRYYRVPUWUIJJKICBGFBW");
    msg.vnamespace.assign("KIESDZZXALXOPJHNITAHYOOSAOMNOSZSAEQZSJCRGBRGMZUVRFRPRERXXUNYRXWZQCDDMBPIFPMUDWISFDKODUNTANFHHBTBEUVKHIRGKSXM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IAESMFTBLFNEPZHLXZSPOQRLSQMCOZAGLNUSNDPKKYCR");
    tmp_msg_0.value.assign("CWZHOMSMLCZIBHBUCSHASBOEYUDBISNVXOYMYQTDKONDTISAYTZQZVDKMSZPLMARQRNCRMXRPYMHJEFTGUEOQKEPFFXYCRVEUEDFMGHRQXSQNG");
    tmp_msg_0.type = 5U;
    tmp_msg_0.access = 184U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RWJQLIHOPPDBUFEWISJOBWVICJSEO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("TJRZHMYKSUZIOVPCYONJOGWJZQICTDCVUKQHXUKUDGXHDAJMKFCKETHCNNOTYBWSLRYFIXFVTIDYMLZVGLUGPDNQRFFDOZRSPEYLBPTADJQEIKQYWEGVTQRCPXPJSKAWPGXNSVLOOAMFMVBBVGAMDZHAOLUKJFKZKYWYSNHQGR");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 27195U;
    tmp_tmp_msg_1_0.name.assign("XAETQZBHANPDWKONKRYGNJEJBJVEWBBQUIDZNXCWRZPPUOXOSIAZVYGECTVIMXYULHMDSAGQNHLSQLAXOGKSEZZOHFTYPBETIUXMRDWJDQSOICYRDWIZTLLXFYIRMBJKEVCKPNGYPPLHKVLPXNVTNWUODHXVHLWRQSOJMPCADQBFUOZVCGMCSTRCGTECFRPFKNUZQQVBSMR");
    tmp_tmp_msg_1_0.custom.assign("XMFIIAHAJONXTWHESGAOELRKBDYRKFQTXJHEVXNWGCVJLMPMVQGARVFASYZMEOWYDHYDZMTPBZBQNZPIERAVCPXLVHWFBLEYSKQKWSKCBHNDLEPBCNXJHCRSFLPDTYWZQLRTWUGVAISUESPFJIZVZKUROQUBPTTDUKCUJGWMDJFMCEFDLHVOABGZYRMCSHIOVRBNAZXYQUUTPENSITMINKRGGYCKOFODJUJYGUXXPWINMQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ControlLoops tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.enable = 210U;
    tmp_tmp_msg_1_1.mask = 1347116648U;
    tmp_tmp_msg_1_1.scope_ref = 286100584U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.7832086781123664);
    msg.setSource(55482U);
    msg.setSourceEntity(208U);
    msg.setDestination(50679U);
    msg.setDestinationEntity(55U);
    msg.maneuver_id.assign("GHGPKEYFYTNVQBVEQWDCFEWSJHXWEZXXWMYYCTXROUOFJMJVIQYNZUQLUWILOHESPFGJNHUBAKFKXNHAADGQTEJHKVOKIUIJGUOZCESPVAFDLZWHXPOVUSENRCNVZIVKNSNBMRDRTRNRMSKTZIJMJSFRPMXTWVQOJBHHLBCLQBFCBDSQS");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 47394U;
    tmp_msg_0.control_ent = 185U;
    tmp_msg_0.timeout = 0.2619280578940998;
    tmp_msg_0.loiter_radius = 0.03255069965329849;
    tmp_msg_0.altitude_interval = 0.6338379860321228;
    msg.data.set(tmp_msg_0);
    IMC::PlanStatistics tmp_msg_1;
    tmp_msg_1.plan_id.assign("TOLXQEBFVKAIPXPLDWJLCDDJUREAQEOODGKDGFEEEIMUKNYONPGMKDYEKIBLSXYZSHPDXGJMDWHPTDFZTPRAOVBZGCISIWWQJCHZKSTXGFJUYFSTYVHQQJMWBRPPZQNMJDGIEKUVTWJGBLFAVSXUPWXUJRHAYIWZHIYNTOQKUNQ");
    tmp_msg_1.type = 22U;
    tmp_msg_1.properties = 178U;
    tmp_msg_1.durations.assign("OAWFJEQKRKNMPBXGQBIPOBGBSG");
    tmp_msg_1.distances.assign("KIURGUZQHDJDOZSQXPPJOECALQOLAXZPFYCJJAVEDZQUVBVLBBYMXXGKMAVVCLYWQIZNEBSZWIYEJGCXMYXNFHELDPYWSNYJEPKAXVOIOAJDTFXLUMVCOTXSFYJLBDTLQWJMCXYIWCEAJMBHKRBEIGTGDFTHHIGUARBNTZCFTRKNFZHMTHCPSRLAIZRWOWNPQHFPKHUBEMCVVDSTFQOGNPRZUQDKWGGRSDNUKWGEUBRM");
    tmp_msg_1.actions.assign("ZOFFWKIFTTEOLRNNMKVBSYLVMHNAHSWAUXHATTJVGAJRWNLANFGXEOEYGIJDTUHPIYMRQLXUFUQHXQYAKCQSEXIUDSZGRCQJCCQKVWFWUYMYITDFRDIJXIRJRSEAGVKTVDITVSABHZVSOGBSCZXQWLDLGEMEJBDZBWPIOBPJMQEPKBVICZWPYOHFGKQAULM");
    tmp_msg_1.fuel.assign("SFLBSNJIIVOVDGYEXPGNXBUMVPRNHUDCZWJWCNIIIMFKLCHQCSKRHDMHFEPJHWBWWULOAJDFVEHYYELGTPMQYUXYVJBOVHND");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleFormation tmp_msg_2;
    tmp_msg_2.lat = 0.02796373434488808;
    tmp_msg_2.lon = 0.7127503233415554;
    tmp_msg_2.z = 0.797690807590499;
    tmp_msg_2.z_units = 139U;
    tmp_msg_2.speed = 0.30012124378320526;
    tmp_msg_2.speed_units = 131U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.vid = 14489U;
    tmp_tmp_msg_2_0.off_x = 0.7796291640146256;
    tmp_tmp_msg_2_0.off_y = 0.9220761437970534;
    tmp_tmp_msg_2_0.off_z = 0.7703903980236639;
    tmp_msg_2.participants.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.start_time = 0.3613910206082278;
    tmp_msg_2.custom.assign("BSIQRWDZOFXGHHNVGHIMAOWUNEQGDCSTFDPQAILDCFELWLYZBSDIUZSVFYARPTOSRMEUUNLKIRRXIJAJZQTAZUGPXCRLBDKQNUFYEDHBGOSPPWILDPMNNOJVWPBJMBCXXTRLBNJPUHGZEKTACOODZCTNJVOWYNEZL");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.4649734957923475);
    msg.setSource(50705U);
    msg.setSourceEntity(132U);
    msg.setDestination(52951U);
    msg.setDestinationEntity(94U);
    msg.maneuver_id.assign("HUMMUYYDQYYMDBCIJSEWUUITAIIKBEDHFMOBGNTQTEHWVALWIIHXYZHAQHKZITOWWXNEGRCZZYBCBPRSOIJZPCOTOWDFLVUOWCCAELXXPSQXOMUWAYVMJLHFACCWNJNZPNMOSHUKWTRBQKCJNKTLKFQJYGHXPMFLSDNRLXVNGEBGVRGAUJFMLEKTABEOBSZVBRDJVIJISRL");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.07469458135210816;
    tmp_msg_0.lon = 0.9573839995329811;
    tmp_msg_0.z = 0.48307850707294575;
    tmp_msg_0.z_units = 173U;
    tmp_msg_0.speed = 0.6726673676541106;
    tmp_msg_0.speed_units = 202U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8514683725383162;
    tmp_tmp_msg_0_0.y = 0.5769422605901483;
    tmp_tmp_msg_0_0.z = 0.2668968345439735;
    tmp_tmp_msg_0_0.t = 0.3209593536861616;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.5193727887298538;
    tmp_msg_0.custom.assign("KJQVKWVMFHWX");
    msg.data.set(tmp_msg_0);
    IMC::FormCtrlParam tmp_msg_1;
    tmp_msg_1.action = 225U;
    tmp_msg_1.longain = 0.8256115472043566;
    tmp_msg_1.latgain = 0.8003547538227892;
    tmp_msg_1.bondthick = 3532808827U;
    tmp_msg_1.leadgain = 0.9745431826303657;
    tmp_msg_1.deconflgain = 0.9465291343328059;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::FormationControlParams tmp_msg_2;
    tmp_msg_2.action = 189U;
    tmp_msg_2.lon_gain = 0.36247119170388686;
    tmp_msg_2.lat_gain = 0.6945620991423936;
    tmp_msg_2.bond_thick = 0.0333298385350036;
    tmp_msg_2.lead_gain = 0.26836625658397295;
    tmp_msg_2.deconfl_gain = 0.21777772113547733;
    tmp_msg_2.accel_switch_gain = 0.5015121996305918;
    tmp_msg_2.safe_dist = 0.6650816460773423;
    tmp_msg_2.deconflict_offset = 0.23275964370573976;
    tmp_msg_2.accel_safe_margin = 0.42161520929797425;
    tmp_msg_2.accel_lim_x = 0.8241813909687804;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.6382092691263208);
    msg.setSource(8700U);
    msg.setSourceEntity(145U);
    msg.setDestination(62187U);
    msg.setDestinationEntity(132U);
    msg.maneuver_id.assign("LARTXTVPCTIQSVXWUELCIKTZTJUVKBPLRSQYZIQGZPSNDAJBSGLOHZNQWNNEPRHACQURUZQQMGUCJ");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 59423U;
    tmp_msg_0.lat = 0.8957463901213691;
    tmp_msg_0.lon = 0.5618711783082103;
    tmp_msg_0.z = 0.2693789735782035;
    tmp_msg_0.z_units = 100U;
    tmp_msg_0.speed = 0.03123035171291688;
    tmp_msg_0.speed_units = 103U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.31152238199126914;
    tmp_tmp_msg_0_0.y = 0.4712568280000696;
    tmp_tmp_msg_0_0.z = 0.8223309417899457;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("GCDVBOXZHETKPSZOIVWYYRPAFNHDYFRESCTE");
    msg.data.set(tmp_msg_0);
    IMC::VehicleLinks tmp_msg_1;
    tmp_msg_1.localname.assign("OKGUDVCPGWNJMZLVYCHYBRAZQWRRFYOALOPYBDGUTLQDTSERMUBAUTJGYTFJDKNKKEIKWIOSUQXWRZPHFVIQBXMPVHEKDYXSAQTGXXLQJJWDAZXBLRXUCKXCNGSEOHBIQNEIDGMHPYWMQTYVLZMUOWXPEETGDNJFPCPSIPZNBCFVNGLANQFRUEZJAXACQDGHEZCFSOASBIFYSSMUJNHHKZSZJFKWPYRRNKLTTIITUMVML");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.3486681610113602);
    msg.setSource(20021U);
    msg.setSourceEntity(29U);
    msg.setDestination(52683U);
    msg.setDestinationEntity(122U);
    msg.source_man.assign("KFYTTKVWSMLRHKFRPBUYQXMHNLGDPIAUGXJTQCCYDUTDYYBGFWNQEOPHUKFMFIVUNXJPLIMVMCKRBGYIJTOEFCNGNNLZEBDITHHXIVCUMYSRQEDEOLACPHGLUVLJOQDBNBROKBIJXYIVWVDVZNPEDUAGZ");
    msg.dest_man.assign("UFBLLSOEKLGSUZCLDRASEJPQYQUXQTSOIVJAGEXLVRNNODIEPBDUCAFIDJMRUDIHKBMZLHDM");
    msg.conditions.assign("ZRMPBIMTZLYBAVKQJTAKGWIZYRBTQQCNKFRJCBHUDURUIQKYPCVUEHWZIFNKTAFFZIXHFNBQPZX");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("EZPBNJPUQHODGLRNLPWFYSUAUXLFVYXJRCITLZBQBIAAKVOVYXUEZNMZXLMQWDWAYXRGRJWRIJCWUHVWCTPWGUTYMOXZQUMQDTPXEKCWHEJGSMTSJOCIJNYNDVWBGUDYCKZXAOSTFLYAFRNSHAJOLLCVMIQKQTEEMQOTSOHBCUIBPFEFTNGIES");
    tmp_msg_0.value = 203U;
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
    msg.setTimeStamp(0.49389067651906193);
    msg.setSource(19329U);
    msg.setSourceEntity(80U);
    msg.setDestination(23797U);
    msg.setDestinationEntity(132U);
    msg.source_man.assign("MPTJLYSTYKUHEAFOXJBNUBXZMWGMXJMFNHCKKACYQCBDXGTQSICYBWVCIUOYLDFVAIXDKNYYRVIKZJGYEJGBAOQTBHO");
    msg.dest_man.assign("NWLAQYRAZOJUWBVAHFDXULKNJAVDCBNSSZDXQAUIIDPFCOITXPPBGNBLGRHIOPJCEVAUOSJQEPDXVNKZDFNCXSKLBYXLGEXXYRDGKHQTSYTNHKMRYHEHGLFZSPWTWUXRQFUAYPMSMIEVICOTQMIWSBT");
    msg.conditions.assign("NCIOOMLYXDYOKDENDZNTSSVZBTBBGJHPFWJILVPASAGEWUWIKRPXQPXAEPTUNJHTCOFQAHQHVYPRNKHZEW");

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
    msg.setTimeStamp(0.7223712442477401);
    msg.setSource(20678U);
    msg.setSourceEntity(86U);
    msg.setDestination(24152U);
    msg.setDestinationEntity(8U);
    msg.source_man.assign("UFXBCCEDZEDOTDQPLEGPVTWSWMQBQWMLMDGINCKLWZVRVBRDOFEAVYTACIUJNPUJBDKRTGMXLRUYUTVUOLGQRRQWLCMNSMMECQYFQILNNAUWOHWOLJMKW");
    msg.dest_man.assign("KJZSLTRVGMLOZAQUGOUXEOMDKVMQORKDJMNHCPDAVNRAXJCWMYLWQTLKKRUQYDPJXSUXNRP");
    msg.conditions.assign("GKGRGDJRVVSVARFLRPNZDQLEGGPHDRRKUXAIYSKQILPI");
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9550447222731199;
    tmp_msg_0.lon = 0.156240493291655;
    tmp_msg_0.alt = 0.5395091265752672;
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
    msg.setTimeStamp(0.6312129219574791);
    msg.setSource(3173U);
    msg.setSourceEntity(92U);
    msg.setDestination(38990U);
    msg.setDestinationEntity(0U);
    msg.command = 241U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PMVTBTADITSBGJQRPZBNHTCGQFCCFPPMIUQKBLJYVRBNVDW");
    tmp_msg_0.description.assign("UAADKHUVMPWDDEZMGGUAIMJBUHPSHYRZUVLAHJNIVRSTENLAMIWXDFBBWPCORLEBXGXNFKZLJZBOIPFWEENFZICEJVQLWTRHFMWODIIMGYEFIPBGWEEUVPVSNJYCVFCZPOTWLCDSKUQVTYLQLSQGQPYBOJRXRWXFMLUMBHJBSJYZPXQEHK");
    tmp_msg_0.vnamespace.assign("NXVXCJHMFRAEDDGOYUDWBOXFTXAISTKUVDQCBEIANLUGEYERZTQFPXGTVYLZUHKWBCLHDKLOUPCPDBAYZFJQZFJQBHFAVFNDWMETJVL");
    tmp_msg_0.start_man_id.assign("ZJVHJQDJDVVXZUXUFUBIHBMELORDPIIHSJHMQVZLAEGWJQZEVEPYYNXTVRTQHTZTAKXNGHLAQUOKCTLBXJSDN");
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
    msg.setTimeStamp(0.27551852114409503);
    msg.setSource(40842U);
    msg.setSourceEntity(107U);
    msg.setDestination(64465U);
    msg.setDestinationEntity(152U);
    msg.command = 204U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IGZDBLDKVDIDUEOSVCSOECYIMYHKRKXADESFJJZXBSBHTHBHUAVDCMSJCVCUCMOMGZY");
    tmp_msg_0.description.assign("CTOZNIQYTQBMDVJUCFLCFKWWKURTGBWAQZFTJANGMDLMXGLHHKMDBQPKFBKYLIHVETURRQOYOUTYKUOEYXNONICUTAIASRRIZMJSZHJBVVHWIJFMRH");
    tmp_msg_0.vnamespace.assign("ZWINTYEDZVFOLEPIGKCTGMCKNCQNFUACUCBJJNYEFXDNPQADXBGFWKURUAVXNTBYQWILWVAWMIZMLMLMJADJQOOYUVVRBMTPXKEXBSLRJPZCQYHWEDAFGGWMSVFYXRWOQJZDRGKZQTDMSBRL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JMALTRPLEGDOOAHWBDVKBLONRBFVOQFPKTZDULCSJKK");
    tmp_tmp_msg_0_0.value.assign("GFXCBTCBZOUVHEUUGMXUFQXQEQAIAPYUYUDGJXDQBKSZMXPHOEYIVDMDIPZTZXBFCRYSPMSNAZXJLZGPFXEPVQNKBYITDLONQHKQHKSJOZBMNGOWFYQAAZKGVFTTITLKVITASLXMKAROGCKVYYOSUIAQNMLVDT");
    tmp_tmp_msg_0_0.type = 10U;
    tmp_tmp_msg_0_0.access = 3U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CGUSVJKBYFRXXFFOHVHIXJFNAJQWBHJDBECUYDWWEGIMKDHSWETYLYILKZLVBMLMNXXQATRNTTJNTSUHGIRHCFSRRRQTVUQNOZBSXUFIMMUDZWTRRCVZOJWLQIDBEEFKBEQLCCUVRKMSJMXWLPEIMVWPOOZRYAPOYA");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ZWJPFLMHMUQSNYSGFPHWCEQVKKJNWPCXWMBGWXKXPYXICTCZSTRAIOQRJACFRFODOHCAMKWDFWYNHRLXQGABNDVEJADMPLVLWLVWPPTGJADHXEWNYARCNYDTLBHKGYMOPHBTDGTQKMRKFZIXZEKDRIREORTKCNYMJXLKVOUBUMEOZSEUUFUVJOIUYGSUCNLSZVISVVBIINLBJGYPXUJVHRIXEDFBNAGGLQOAFUQZC");
    tmp_tmp_msg_0_1.dest_man.assign("GWWNRDKQTJRQLWJNYWFVXPTSNAFQIZVNPTOSFGOPXIUYDQAZKPBNOMAFYKGPNBKGWVBSUEJBNDZRFUTLBIJWPEBMAZVXCIYDETMJPNEWZWBCSIXJGAYPBHOMVYYJHS");
    tmp_tmp_msg_0_1.conditions.assign("XJDYGDZPCDRXLQUCKKXOHJWCLCLZUWR");
    IMC::StopManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::FollowTrajectory tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 51837U;
    tmp_tmp_msg_0_2.lat = 0.5146325862112565;
    tmp_tmp_msg_0_2.lon = 0.30286059098029916;
    tmp_tmp_msg_0_2.z = 0.8278202614068463;
    tmp_tmp_msg_0_2.z_units = 120U;
    tmp_tmp_msg_0_2.speed = 0.28476827017850215;
    tmp_tmp_msg_0_2.speed_units = 31U;
    tmp_tmp_msg_0_2.custom.assign("IGMMOBJXCDFABUMLHWLTWOXZFNNQPUFREHWGJKRBDVZGYIDBSJXJFAHUVOFPIEUYKBRXHDQGYXZILOAMPFQMEIAPBQKMQZZCVZTTQUVKAYVWPUMRJTHCUCUSNWJEKTIPXVQOCBIBJWCGSLKESLNMGCXYLENHVSYRDJDGPECKZLSTDNMODVRLRHXORNYOYHPVGXNNUAIINGKTEZJWRTJSPRCLCSQFKYWDTEYHVUDGT");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::AcousticSystemsQuery tmp_tmp_msg_0_3;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.6608227212416575);
    msg.setSource(10866U);
    msg.setSourceEntity(19U);
    msg.setDestination(64091U);
    msg.setDestinationEntity(250U);
    msg.command = 11U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WRWLGCWKOZZRBZINVKYTIPKDSSBAEYBZQYDNQHPTQDNIYTYLNWOLLQVTVODIHHUQUFFELUTJGCVNJHGPFOXGCASSREDFGRXZMDWIVXMLLMYPPRSWJ");
    tmp_msg_0.description.assign("ZOROIOKMNATLEMSHBFAGUWPHYCEOADIAGKJBXFSIEDKVSNLUVQCYFILHUQKQAPMITLGJLYTCBSUFH");
    tmp_msg_0.vnamespace.assign("KTJHCPFZSQFGDLEMOHFGRIJOSSEOEGWRFRZMWKLHBUHLWDPAJAJARQXEZTBKBEUSYGEYKVEMFJGNNUBCVZBUJNMXQPMIPGTJPDBITCNYSCOVWZOYEDBIBWQMTCAIGWMGLKVCOYUKIUTKQRXBSXGMNAHLKLKDTZHRYYFQUFPORWVKNXPWHDVLZPWTAAHSCXEFXCOGPREUJMYWC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CZCVGRMWCRNYGUWYJBTPFYSGDPXZPLCGTNCQYOMBIAXCWRPZPJVLSOFBIOYOHIOAMETWUSMCNSFKVTVBDIAESMRVRHAEKSNIUDEDDLWZUUZQYIHLNEAKZZRGP");
    tmp_tmp_msg_0_0.value.assign("RXBJJLCTAROZYZBSGVINKQPXEKUXUEIKVMEARZGRTHBJYZVGYUCVGGUDXJPOHQWWPFTTRDGNKDFPTITSPVXLHLVBZCSESLIKYPUEYCCWZEQRBHXLOENSYUVTXSPJSLOWIBFJNFAXOOINCBYEVAMHOBSNWHGBCYW");
    tmp_tmp_msg_0_0.type = 182U;
    tmp_tmp_msg_0_0.access = 120U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DKZEEHYTBFGOTMGMAQFVQRAWNLVSCVZPVRXBFMPOIJIDZGUESDYVLARAWNXJPBOXMISEYZQBEGFNJUBJMLFIUTXJUOUEAQXRWVHDHTCZQYFM");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("UTCJPHGKLYFPFSPNOAWOHNWWFIDQWKHULIWOZYRJOWDQUTUHDKXCCRWABJNEBILXXDLCSVAQAYSADJILOMFBZSLCTHNNTBEVNCQQLXRSPWUXBMGEAMQWJFCOJUFGIQSVZSXWCRHBVCZZLJNMPOQZMGHAPUTYHBRTQTPYFYIGVKABVTYSRVDIPNKYGGPPBDMUJXIRGEZ");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("LZHJVMHFXYNBJFLJCXXVDCJUDUMPGRORWYBOVNXMQYWSXATECZXYLFSBOCSGAWZIMFIUORDEYEQNLPKBNEREDVFQOJLPPQWZRCFCNADVGHSKJMQJWAIZPEWSBPAPTMKEVZMGGGNJUUREXSNVNQLOPKZIHDIWJQLFVXRDKTCASLRAZBTHKVOIHKKTYBLYKEDYMSUMEBVTQFASFRUQZGIDCIOKGIULJGONIUWAUOZCNWDPGBXRTH");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("LTEIQVMXAPFDZGLNFFRSJCMWTDVDDRFUEUXVMSWRLUHNRCAKJGUEKTDHDMJBOUVYYPCRFHCBPOXQRHYSKIJSNQSGKOVHKEZYKGCXFWQIZPOIZSWBZQHRBSPVBKDWBFVXLLSAJGMRLYFITKDACCMIGGQBPOGNZ");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("TZRBTUQGQMZZFPJZCIIJVASPGSQDKYIDSZNANMYXKRGSVKCHEWRVCUHNEBXMPETLYNFUSJOGHZDAKGEFBYPUQLDYAUTXXPWDNYBCDAOLOUKRMTBDBQTDJIULYBKXRTQLFWZUVJCACMVWVNUHWPBUHGWPYWQV");
    tmp_tmp_tmp_msg_0_1_0.description.assign("DQTKZVGSZNMPTVSFEDTOLCWNJLIHHYBDVTAKMERWJUQRBFMJTVLPIYLCTHAZWPRDJSTKCXGMHFOOFBIYRDYQADZBZBEDUGXZXNSKFJCQJRAWJGGXF");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.0057815672968651866;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.15111179534057517;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.7996841196833258;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.7279391548885098;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 41203U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.2430947057486006;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 12723U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 41153U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.973982694586834;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BGKFDCAHACLGNHZUQIUIDVOEOIQAMRVYJDYXPXWQDKZPSQLAZRTIRFDTKGYYVPUYXZUYGFYCDZPLBHUHTPQFMOKQJRMOCHDEEKJLWBZEOHBZDUSKPRCTNAKRLOALNMBVZISXEGJHJDO");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LogBookEntry tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.type = 109U;
    tmp_tmp_tmp_msg_0_1_1.htime = 0.30944152901409294;
    tmp_tmp_tmp_msg_0_1_1.context.assign("CHGJAOCTNSLPIBTHJEAH");
    tmp_tmp_tmp_msg_0_1_1.text.assign("JQMARDAWLGDHQSAZMQGXNFUXIKGHCMGIEDZREURVVDBOUPNLJECOQIIEPFTXZMDZGVQNHAYWDTJZIDUDNFFBHKRSCWIDLSACMAYCFOCXQACTGTLKCVAYQZLKNKZGKIUISWRTSLREQBPPPZKSMOQLPJMOTKNOBYKGINWHXUNFEUOYFBCERGQUWBWVLVEXHLIHBATPWTTOKCVBJ");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::SystemGroup tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.groupname.assign("JYNEINKKQILGFTUIYKRRGWFQVJEQDTQTFZQXOXMERTZFYAKSBZPWBIBGUYOSPAZCMTCFIEEZPDPCYYRRNXJPOLUYIHFIHWAHSGUFJGNEMTNTRVAMOCRDLPMPYZJLVUFMNVUKLJXJLWIBWRGABSKIPJUWUMUSPWODKBGVAHCGQOATMBSPIXDFAERLARCFLNVOHHVMTXYH");
    tmp_tmp_msg_0_2.action = 61U;
    tmp_tmp_msg_0_2.grouplist.assign("VTGGAPOQSGYANTZAOZKEQYNTKNWOYACQJSMBARJHPPHBKFIKLEQNRVOBILRXENXNOUFHYOZZHANCYXRDRXJQCCFVZGVUUYLGIFDWTQZHZLDXWCFEMREFSPVUJRSUCVTSKDOIBKBUMPYRSOEGJXSQDMTBGKTGQCHTKJYUJOBXCVIPNWTKWRYXWMGXOZD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Reference tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.flags = 71U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.value = 0.8982288265700867;
    tmp_tmp_tmp_msg_0_3_0.speed_units = 72U;
    tmp_tmp_msg_0_3.speed.set(tmp_tmp_tmp_msg_0_3_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_3_1;
    tmp_tmp_tmp_msg_0_3_1.value = 0.08633426958282953;
    tmp_tmp_tmp_msg_0_3_1.z_units = 12U;
    tmp_tmp_msg_0_3.z.set(tmp_tmp_tmp_msg_0_3_1);
    tmp_tmp_msg_0_3.lat = 0.5317999245866256;
    tmp_tmp_msg_0_3.lon = 0.45564443018986234;
    tmp_tmp_msg_0_3.radius = 0.4248428394784114;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.4041006266982312);
    msg.setSource(30434U);
    msg.setSourceEntity(112U);
    msg.setDestination(42077U);
    msg.setDestinationEntity(66U);
    msg.state = 185U;
    msg.plan_id.assign("HFDTNDPIBDKNDAGGOZWPZBNMYSXVSVQVJUGWEAZHGJQPQEGZBHEDPGLJXDRURPVTYIMMFSQJPEKRKZPWFCXCCGPRUWNWAFMLBAQXPQXWMGXTUYIAVNGYEPVWEGACCBTIHJCUHTKFYKEZLZZKXFOBUQCINFKBAYSHOMRBYRIHLIMQKOOYLOSZXIHURQTWOVHXWJSYEFYJUSCJHUVJSUNNALNLRMIXEWLOKNRDBZTM");
    msg.comm_level = 109U;

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
    msg.setTimeStamp(0.8675778037125801);
    msg.setSource(13246U);
    msg.setSourceEntity(254U);
    msg.setDestination(27377U);
    msg.setDestinationEntity(43U);
    msg.state = 38U;
    msg.plan_id.assign("PSRCJBVHPEMPDVQNOMHLYGNONZFOCTOKPMTLADNCPRBMFIQNDTHMPDWAWBMXSCHDRTLANUOILPJVCKSRJTDAWSHMKSAUVTVOWJYFYRSKZXICIQKSYXOXFWTXYUFGIBGJLTEGYBCQUPQVEKDQJGIUNGTEXGUIF");
    msg.comm_level = 124U;

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
    msg.setTimeStamp(0.4317702997811529);
    msg.setSource(44184U);
    msg.setSourceEntity(233U);
    msg.setDestination(6847U);
    msg.setDestinationEntity(230U);
    msg.state = 91U;
    msg.plan_id.assign("AYTDKFYFANYWOSJFLKDLIOJAT");
    msg.comm_level = 59U;

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
    msg.setTimeStamp(0.36715464941791);
    msg.setSource(40981U);
    msg.setSourceEntity(8U);
    msg.setDestination(13761U);
    msg.setDestinationEntity(114U);
    msg.type = 91U;
    msg.op = 50U;
    msg.request_id = 16725U;
    msg.plan_id.assign("TTVQNFCSGTCPEMBGMEQBQDLRBVAUBPHWYVWWUILLFJKMYXBLDTOSXBMDQZFJCVJZIVYDPIMXMFSCWPPGHKIAESIJHNFZOHBQLBTRKJWZTQRRYPOYLKUNYGPHPWDDLIXORKRHGOLDWCESZKAXXBFZSYRYNUOHHMUKQGXNWERVMXQWUCLVANZEIZOTDFFVGGRUHIWAOVNRNZJXCPABTCNKHSXAYSI");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 213U;
    tmp_msg_0.eta = 23837U;
    tmp_msg_0.info.assign("BGBTYZESYHXCWEIFYF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GJQHPOQCPYXPT");

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
    msg.setTimeStamp(0.15380240444860993);
    msg.setSource(15489U);
    msg.setSourceEntity(153U);
    msg.setDestination(37667U);
    msg.setDestinationEntity(153U);
    msg.type = 216U;
    msg.op = 128U;
    msg.request_id = 26097U;
    msg.plan_id.assign("HVYLSQPGNQIYKZTPTPTXFUDNFPTWABTWKEEHMVFEXLMOPQAURYYKDZRQDWEHFXOGNPKLSSONABKPTAWRECLBBOQZCSQMCDNXDHNCZHDDFTYZUSUURNVLMSVRODIIUIRBLEWYTAVWQXVZHYZGNGIVELYWLSBKRZAXYBPHKU");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 186U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.491528926890065;
    tmp_tmp_msg_0_0.speed_units = 238U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.33525735559877934;
    tmp_tmp_msg_0_1.z_units = 126U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5353252303653162;
    tmp_msg_0.lon = 0.3373432682749522;
    tmp_msg_0.radius = 0.7104960065526833;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JSVXDBCVQCWBVGPHMRKWJHVDLNUAQCMBOYIONGHPVMRHMRDCZSQOOVSDLKXMBHIAIHAHFZXSZFYRMWRCNGYEXMKSRPLIJGZTBLBGVNWTEPTDIMEX");

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
    msg.setTimeStamp(0.55939157819564);
    msg.setSource(7288U);
    msg.setSourceEntity(37U);
    msg.setDestination(55679U);
    msg.setDestinationEntity(19U);
    msg.type = 36U;
    msg.op = 188U;
    msg.request_id = 49598U;
    msg.plan_id.assign("JUIJNYNXPRVKKSSZRAHGQVSFLFYWZTDFUCDURAZQSDMPEPBEVKNVBBRPPAHEDILLAKPKJFTDKZGGAMGLQYQOHVHIYKMCXPJIPWAXUDUZAYFKGHXGTDCLRKFZCZCQHRMILIUMMFNNCWMPNSYMMOTGYQDBHVCNOQRZBR");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.9485177610755834;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QGQKULYBNORXSXXLGYCPWVPZSZHNBLAITYFZYOOVINWNJHAYDSCVPJMSBBEQATTFHKIEGZEDQAVQVBFLKECIEJQOWLSIZVRWCNXCMPPBFRYCGNOTLGWMGCEHNMUISUARXEBDDFTJGWCKLMGV");

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
    msg.setTimeStamp(0.698671194403938);
    msg.setSource(19982U);
    msg.setSourceEntity(58U);
    msg.setDestination(40027U);
    msg.setDestinationEntity(87U);
    msg.plan_count = 965U;
    msg.plan_size = 123384678U;
    msg.change_time = 0.1182472116173996;
    msg.change_sid = 47421U;
    msg.change_sname.assign("ISBSZSHYSRAEJPQMCKTYRTVLMCJVZKNTYEQHWQXYGGVLUNUXXE");
    const char tmp_msg_0[] = {-11, 56, 125, -54, 99, 65, -17, 40, 76, -43, 120, -112, -95, -10, 98, -57, 122, 60, -47, -86, -38, -50, -99, 3, 115, 24, -26, 60, -41, -68, 77, 27, 114, 55, 9, -74, 97, -54, -95, -101, -118, 123, 79, -46, -85, 96, -33, -121, -84, 117, -20, -63, 81, 38, -71, 93, 57, 27, 93, -37, 43, -88, -73, -69, -68, -19, 58, -61, -53, -62, 123, 46, -6, 69, 50, 11, 46, -106, -33, 97, 23, 18, 98, 85, 124, 59, -74, 66, 103, -121, 72, -69, -52, -19, 85, 88, 125, 78, 12, -59, -38, 105, -31, -88, -121, -127, -3, 109, -39, 1, -125, 115, 31, -68, 112, -127, 119, 122, -51, 8, -81, 41, -123, 29, 122, 43, 41, 102, -118, -10, 67, 47, -84, 99, -64, -100, -39, 69, -114, -86, 107, -70, -49, -50, -32, -45, 110, 106, -71, -37, 106, -88, 76, -123, 32, 85, 69, 2, -68, -93, -32, 70};
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
    msg.setTimeStamp(0.8556712999175744);
    msg.setSource(19769U);
    msg.setSourceEntity(140U);
    msg.setDestination(50781U);
    msg.setDestinationEntity(126U);
    msg.plan_count = 47133U;
    msg.plan_size = 1154360100U;
    msg.change_time = 0.4861270129630545;
    msg.change_sid = 9087U;
    msg.change_sname.assign("DLBUKRDDBCNZDSAJIBTGLNUTJIRDPAFOBRANQGPFFLKFXUPSSDZGNINTANCWHQGNFVWYEX");
    const char tmp_msg_0[] = {37, 45, 86, 43, -118, 111, -62, -44, 0, 47, 123, 117, -30, 123, 72, -58, -103, 50, 70, -24, 26, -127, -117, -38, 54, -81, -23, -34, 91, -103, -35, -20, -97, 17, -111, -24, -43, 37, -40, 106, -96, 126, 69, 38, 29, 4, 106, -115, -79, 73, 57, 56, 103, 115, 79, -29, 66, -68, -30, 97, 18, 54, 126, -4, -2, 14, 23, -100, 115, -65, -7, -108, 81, 113, 10, -105, -12, 26, -74, -33, -99, -46, 20, 111, 93, -83, 79, -96, 40, -112, 11, -97, -128, 57, -27, -114, 75, 96, -109, -121, 27, 90, 116, -115, 114, -120, -84, -37, -64, 71, -71, -91, -18, 30, -109, 74, -21, -9, -116, 42, 106, -29, 33, 1, 92, 70, 72, 44, 124, 99, -64, 42, -54, 3, 6, -45, -53, 2, 103, -33, -99, 60, -62, 114, 8, 97, -18, 65, 93, -60, 21, -71, -34, 10, -125, 0, -96, -55, -14, 111, -110, -13, -128, -44, 46, -103, 80, 25, 38, -58, 22, 106, 52, -80, 87, 72, 4, -52, -79, 123, 15, 108, -4, 126, -53, 79, 64, 65, 44, 69, 66, -117, 21, 58, -43, -91, 67};
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
    msg.setTimeStamp(0.06315608324712585);
    msg.setSource(2648U);
    msg.setSourceEntity(211U);
    msg.setDestination(4287U);
    msg.setDestinationEntity(98U);
    msg.plan_count = 446U;
    msg.plan_size = 1900806191U;
    msg.change_time = 0.3877052902661968;
    msg.change_sid = 10396U;
    msg.change_sname.assign("WKRHTXZOXKHSFZFUYAUYDIPVXLLUNMYXRHRUODEODYVWWBRVOETVMSLRARSAMTPBHEZKIIFCUOSDPIWBKHIJRGNIKGUNJNEOPTGQDJJGGQXXTZYPZCJMWQVFDJHSGQDBOFFBYVWAMXQIWYTH");
    const char tmp_msg_0[] = {-53, -27, 89, -78, -31, -64, -39, -126, -50, 24, -31, 37, -92, -74, 30, 66, -50, -49, -60, 8, 67, -43, 57, -26, -11, -32, 21, -68, 44, 60, 68, 121, -63, 43, -15, -95, -80, 19, -92, -47, -113, -87, 79, 69, -42, 124, 40, 48, 42, -45, 19, 99, -125, -60, 48, 45, -101, -2, 73, 80, 52, -87, -100, -69, 73, 112, 47, 109, -43, -8, -35, -23, -6, -60, -83, 107, 15, -56, 109, -55, -23, -111, -116, 26, -41, 119, -15, 3, 73, 8, 4, -53, -36, -98, -47, 115, -123, -36, -109, -110, 92, -23, 22, 59, -26, -23, 39, -95, -5, 71, -99, -94, -39, -87, 118, -90, 103, -44, 41, -55, 97, 91, -51, 45, -11, -38, -66, -69, -106, 31, -65, 41, -81, -41, 40, -118, -36, -116, 70, -43, -56, -62, 121, 37, 88, 19, 126, -111, -83, -6, 116, 39, 101, 32, 126, -107, -32, -39, -69, -65, -63, 85, 74, -20, 62, 51, 90, 93, -17, 44, -81, 116, 8, 38, 51, 94, -96, 68, 107, 21, 5, -51, 49, -21, 67, -109, -70, 5, 92, -115, 40, 65, 58, 36, -32, 5, -51, -11, -117, 28, -88, 6, 11, 48, 87, 99, 110, 45, -71, -36, -64, 98, 77, 42, -43, 85, 15, 52, 57, 27, 58, -57, 40, -104, 54, -128, -83, 117, 26, -75, 53, -42, -93, -64, -18, -102, 66, 61, 94, 27, -94, -85, 114, -31, 19, -110, 42, 18, 63, -6, 120};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JDHNELFNZEXRRSRXRUTNSBMSDVWSHQGINLGCIZRKCUHDFJWGABFIDGMAREZOBCDVDAIDRVYEQTVMWCULXXQYPFZCEHSZWVXLCHEALEQPOODRXAMVUXYPNIPRUUWJFYVWSBBPTZKMTAGWOKBEHAZZKMHOQGYWRFFHGJSWKMTPFGBYXLHPQYFPJIKNQMNAXNVSVKKJVLTYITIUDHQAGUZOTISPDIKGFXYJUOSBCZMO");
    tmp_msg_1.plan_size = 28669U;
    tmp_msg_1.change_time = 0.5081062422141448;
    tmp_msg_1.change_sid = 48948U;
    tmp_msg_1.change_sname.assign("XRAKOLMQWMMBTIKPKIUYVWHMGLTNFRXUZJZLLMYYAUXHRHTUASGFNGIGKHWKYWCIBQBSYBTHCSEDEOPRISSGYLVQJZCGPAKCUAXSWQPOIGCMUWZIPXNFODHPYYMDJVEQEGLDENRIU");
    const char tmp_tmp_msg_1_0[] = {42, 62, 11, 77, -84, 106, 1, -38, 85, 103, -58, 110, 3, -123, -41, 66, -115, 42, 69, 119, 89, -95, -96, 60, -13, 96, 52, 52, 91, 8, 33, -11, 104, -75, 114, -116, 115, -2, -23, -71, -99, -30, -83, -38, -84, -75, 89, 108, 4, 110, 105, -126, -72, -43, 52, 120, 10, -5};
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
    msg.setTimeStamp(0.2057900006290938);
    msg.setSource(53254U);
    msg.setSourceEntity(251U);
    msg.setDestination(10452U);
    msg.setDestinationEntity(144U);
    msg.plan_id.assign("FCZXBDPOSFQISNEQAQ");
    msg.plan_size = 9917U;
    msg.change_time = 0.9009460854207472;
    msg.change_sid = 55685U;
    msg.change_sname.assign("KJATUUQXHQGYMUZWFZZOBFIBVGJXGPCCXSRRCSOFGREGAVEYYKZZQUANNELOIQPYCUQYURHAVUGBHWWNVDHFANIWOEKFWLMQTCJWNOGTPZXADMMECZDSEKOKVEOGRRPZXVSCBWVTTLYIQMMLMDAHFDSRTPNPLIOLUHWSVHSJUEXBTYJMAPDJSBIENCZECRAKOZAJDYKBUYPGJDY");
    const char tmp_msg_0[] = {111, -23, -78, 122, 94, 68, -5, 75, -33, -1, 120, -106, -116, 46, -49, 117, -75, -5, 56, -13, -58, 71, 111, 88, 106, 25, 3, -103, -72, -76, 4, 122, 83, 54, -84, -33, -69, 16, 32, 3, 116, 89, 108, 62, 26, -61, 99, 69, -118, -37, -70, 24, -31, -94, -70, -91, -80, 36, 36, 87, 33, 67, -64, -90, -20, -17, 64, 99, 58, 125, -14, 108, 78, 50, -18, 104, -65, -35, -62, 47, -57, 70, -67, 75, 98, -3, 9, 100, 22, -111, 44, 59, -53, -4, 123, -104, -125, -55, 68, -94, 92, 50, -102, -66, 51, 21, -29, -101, -108, -93, 75, 113, 64, -107, -38, -88, 126, -98, 100, 121, 42, -27, 83, -81, -116, -111, 31, -18, -20, -44, 46, -73, -105, 34, 3, 42, 106, -79, 23, -50, -22, 91, 102, 60, -57, -28, 69, -76, 102, 12, -100, -99, 99, 54, 24, -74, 119, -106, 60, 66, -89, 13, 105, -90, 6};
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
    msg.setTimeStamp(0.9891828422277863);
    msg.setSource(61543U);
    msg.setSourceEntity(253U);
    msg.setDestination(45764U);
    msg.setDestinationEntity(76U);
    msg.plan_id.assign("YOROFCKFGYYKMIHJVWOQWBDQDAKUHCWIYWIDGHBSNZXPCEXPFBGTKAKJRWORPRMLKSIEPOSFOBTRNEPPRDGNIFDXWBCHMCULXOAZGSHFLTVTQWWPT");
    msg.plan_size = 14415U;
    msg.change_time = 0.959504210902839;
    msg.change_sid = 14160U;
    msg.change_sname.assign("MFSVMUBDCJJNROCBBRXDZAKLPRVTLASHFOZOUJKGVETIQEDLVSOTZHGCWYXHBYMFZIXXXHMGXWZAEYNGVOIWQYZLQHJKESLPFNXPXZXHROJSYKUAZMTSLIJBDRHIBPWWBHAEMURMEUQTGFCQVJNQBTVJFNH");
    const char tmp_msg_0[] = {11, -45, -92, -61, 43, -29, 53, 62, -32, -44, -25, 36, 107, -66, 101, 116, 57, -24, 1, -117, -63, 53, -18, -68, 25, -65, -1, -63, -41, -58, 85, 117, -6, -115, 126, -33, 114, 51, -69, -105, -49, 81, -45, 109, 36, 105, -15, -117, -124, -59, -18, 38, -99, -103, 114, -66, 118, -75, -39, -32, 113, -114, -80, 118, 9, -57, -12, -64, -119, -62, -49, 102, 74, -65};
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
    msg.setTimeStamp(0.4623864467067864);
    msg.setSource(11028U);
    msg.setSourceEntity(146U);
    msg.setDestination(51820U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("NYQTWZHWMCFRAPROFGOZCLYPPUGAFNHHVIJDQEDXCUGUBCTGWZNMLFIOZNZKRZTPEJENVUWKVYELLPMH");
    msg.plan_size = 30002U;
    msg.change_time = 0.29856662248488264;
    msg.change_sid = 23993U;
    msg.change_sname.assign("FRCOVQTYMIZIVFGUXSRGGOBWZUQXKHIOPGI");
    const char tmp_msg_0[] = {101, 14, -105, -73, 30, -35, 70, 76, -2, 11, 73, 63, -5, -36, 117, 25, -128, -36, 55, 102, -46, -94, 79, 3, 31, 104, -69, -7, -17, -43, -32, -87, 6, 70, 55, -70, 95, -87, 24, -15, -122, -67, 74, -56, -35, -68, -104, 125, 28, -91, 23, -45, 77, 9, 41, 11, -97, 98, -110, -58, 74, 11, -19, -38, -121, -85, -55, -46, -18, -72, -3, -119, -47, 108, 62, -33, 18, 37, 46, -85, 54, 42, 116, -59, 102, -105, 80, 72, -21, -43, -55, -18, 76, 81, 100, 89, -17, -70, -65, 39, -83, 57, -25, 47, -26, -26, -128, 31, 77, 110, 64, -114, -128, 18, -2, 14, 105, 93, -19, 29, 109, -35, 46, -60, -99, 66, -18, -5, -53, -66, -58, -115, -37, 45, 99, -112, -114, -48, 50, -100, 72, -92, 113, -41, -67, -13, 25, 6, -55, 110, -89, 3, -94, -84, 86, 76, 118, 93, -42, 119, 51, -61, -71, 116, -89, 124, -115, 42, 93, -102, 59, 34, 105, 110, 20, -18, -10, -53, 2, -127, 100, 57, 87, -42, -34, 88, -128, -99, -126, 55, 91, -57, -39, 4, 8, -11, -109, -45, 95, 112, -12, 88, -82, 103, 84, 42, 95, -110, -59, -15, -71, -19, 114, -66, 30, -29, -59, 57, 3, -65, -108, -38, 31, -109};
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
    msg.setTimeStamp(0.47325344559644833);
    msg.setSource(38300U);
    msg.setSourceEntity(191U);
    msg.setDestination(64267U);
    msg.setDestinationEntity(131U);
    msg.type = 206U;
    msg.op = 3U;
    msg.request_id = 46251U;
    msg.plan_id.assign("QYQAJKKLTQNEFXDKMCKX");
    msg.flags = 12485U;
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 158U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TYDBQCESPVLAXRADDVCCWFPKJJMATOLYKAYXJPNBVGEJGMJYWFYMIKYYBJDLN");

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
    msg.setTimeStamp(0.1880905688094323);
    msg.setSource(15828U);
    msg.setSourceEntity(163U);
    msg.setDestination(55129U);
    msg.setDestinationEntity(166U);
    msg.type = 155U;
    msg.op = 156U;
    msg.request_id = 13023U;
    msg.plan_id.assign("TYEZZUPGOUSPEQLTTYJKFRPWQRGVILZIDGPEMQWFLUVJACRYDWMHFTGOZNESUNRXKIBVQRGROLXIANJLETXZNBNDDHHHQXXWSNSABAIACHGBESGZFYZBLIJWCPGPJKYVNYHMMOJFIEAVUBKRMOGVMZEUAWFTLLYTDDPUWEYGXCZUVDICXKITHOSMVOCDFURKYFTHDHRBBKESQXSVPOQQVR");
    msg.flags = 48518U;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3982057413U;
    tmp_msg_0.start_lat = 0.48247609158499616;
    tmp_msg_0.start_lon = 0.10135270013000064;
    tmp_msg_0.start_z = 0.793122155590834;
    tmp_msg_0.start_z_units = 145U;
    tmp_msg_0.end_lat = 0.35503396512641605;
    tmp_msg_0.end_lon = 0.5383867046323056;
    tmp_msg_0.end_z = 0.06720238499602016;
    tmp_msg_0.end_z_units = 102U;
    tmp_msg_0.speed = 0.057715470781880884;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.lradius = 0.7714395645360299;
    tmp_msg_0.flags = 135U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XJLCHBVOMQHGWLTHKLFSNFAKPESDXKUGQUUAAIYMSDNNNBXVSQHOHRTGHSZNKTCVETOFQSJAIZRZJOCIZAGHKYBLYKLWMZNIYTCDFJVBUZXQZDMYCVIPKBRNPEQXIRELZGGPVCNBWGWEDASPBGMDKMUSHGYOJELILQMHNCRFXGITDFXJIEBKTLEWWRTOYWJJYDSXBRVQUZ");

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
    msg.setTimeStamp(0.9632947016654521);
    msg.setSource(51969U);
    msg.setSourceEntity(170U);
    msg.setDestination(14610U);
    msg.setDestinationEntity(252U);
    msg.type = 242U;
    msg.op = 60U;
    msg.request_id = 5857U;
    msg.plan_id.assign("AGARVLXCUKILCOWCKPDJYFVMUXVTILDWNWXDEDFPDKIYPDEOJKKHPTMEMCNYLUNOUZMCSFHUOJHJHQRMTJUOJIURJQMARWLSPKUEQQNBGOZQCXNFIKLLIVDYNVWHBJFQUBWIOTZHVHBVFVDOVERBSGTQSMXOV");
    msg.flags = 39594U;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 233U;
    tmp_msg_0.entities.assign("EQCOCIQWWNAQEKNVGNOHIUAIRISAGCJBKYQEUYHBHNMQJNRRCOZXWSALPZMHJEMPDMBFDFZYEZXXNMIEVTHNROXWKPCZYICOLGOGLHMQSRFGWERPTWJBCMNVXEFAGSMHPJFCJIRUGKTHDLYPWWONVQUTCZGUTRILVXOLKJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JMNGNQJNUWWYOBRXHPARWCFHFDMKNSMGCTGXDEKFNAFTSPKIFIOQDXPIBASENJBELLQCRGHZWXXPZVUUVIVORPXZKXFHJYVKLNLTGABOQCESLSBPIJWJCQVGDQSMHHYJVEEBKELJRWAXHPEEAMYWN");

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
    msg.setTimeStamp(0.28430173050762186);
    msg.setSource(29411U);
    msg.setSourceEntity(251U);
    msg.setDestination(51753U);
    msg.setDestinationEntity(111U);
    msg.state = 228U;
    msg.plan_id.assign("LSVANCFYBCFNYRYKHZIWUTYGRIZUZMCJOLUXULTVUFRJDZXUNZCAWIIOSSBMDJZVLGIIBCHNAABOUDVMZMAEJJXTEZQWMRCJPFWFBQYHQERNWFTCKOMONFSXGYXQXLVOCBEISKPDHHTAWJJDNAMWAUMIPUBYRGFVSHNOKIWTBN");
    msg.plan_eta = -1305135120;
    msg.plan_progress = 0.019259463101739205;
    msg.man_id.assign("EBHEOORNKIMKYNCATOFBGTPUCQSULBSENYHCRHNQTCZTOHFRMXBTUUZRWDJQASYGOLBVQTXXJYLZRMWAMFWXQJRWIUWINWRUMGDNVKPWKPVFEDMDGVTPIIFOQZMSDSZLHTEIQREWJYZJIWJB");
    msg.man_type = 44387U;
    msg.man_eta = 447279954;
    msg.last_outcome = 96U;

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
    msg.setTimeStamp(0.18764286856323076);
    msg.setSource(24105U);
    msg.setSourceEntity(173U);
    msg.setDestination(51423U);
    msg.setDestinationEntity(248U);
    msg.state = 45U;
    msg.plan_id.assign("CBBPJQXIUNUIOFBKUSUVGOXKEFYPWBQEGOOIPJTZBJZQCEBTUGRSDVBAVIIHZAVUWCKLUOTAGGAFQVSPOSYCGCJELYGNKKWLLYJNLXEXAIPRWBXHYXLZTCVEIFDEOMJDWMWKRESYOOQUDIEDTTUZKNRHNTYRQARHKJNPQTPNZVIQWMMNHVTZVYJALXAFN");
    msg.plan_eta = 1085585030;
    msg.plan_progress = 0.42288857718172934;
    msg.man_id.assign("UQJZUHSDPQLGAYYHPEMBNNLOBSFCNULEURLFXZSTIXBRMETNFEJHHGAAXDCXJGYDIJFYVTCSZQQUDIUN");
    msg.man_type = 60023U;
    msg.man_eta = 632761246;
    msg.last_outcome = 221U;

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
    msg.setTimeStamp(0.5449047799525931);
    msg.setSource(42334U);
    msg.setSourceEntity(44U);
    msg.setDestination(6159U);
    msg.setDestinationEntity(249U);
    msg.state = 232U;
    msg.plan_id.assign("HMFPWJQNMBAHSTAFXDQOETQVEJBCOXOLSYNCDLWDBHOOQMVTBFFVFPNPVYRGGEXRZRXZTLBWHKUAGKHEUJFHKPGZVNYQPJSIRXDUDXEQSWEYGLYCCOPAYAITSCLTITDZMRCILMNNGJVPKXFLFWOKEJDIRWEICWTIVXUZHASEZZJYRRZSWBWGKJNUMQLRGMMVIFCDAHOZAUPSPCXBDVUOOLYINNIMUWTLK");
    msg.plan_eta = 53320650;
    msg.plan_progress = 0.11722960966197282;
    msg.man_id.assign("VFTYVLJNBMVQBGZERVWNZWDLKAPYQJJYPHCRGMOBECUQVEFCNJLNEKIFFSECUTWFJOCNQOVBJFSKECHAHHIWGXEEUDLDUPUUQPBNNADBLYKAKWTZLXVXZTMLKIPJRSSPINJJUHEQYFFOOZPDXASVMUKGHMBADOYTQDYRWIBGPCXGXSIMJQWUWXKKRLDMATZDTHAYNRTVLSNCIXFZTODORXCMH");
    msg.man_type = 53060U;
    msg.man_eta = -527857932;
    msg.last_outcome = 24U;

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
    msg.setTimeStamp(0.7129601400842493);
    msg.setSource(23861U);
    msg.setSourceEntity(216U);
    msg.setDestination(18226U);
    msg.setDestinationEntity(212U);
    msg.name.assign("TAKIOJQQKSCYDMEOFDZLUJRQSFKLGYTHBNIKPIAAEQJMW");
    msg.value.assign("WLZVRJEMQGLVYCFAUEZIELNLHCXELOCKQDGRX");
    msg.type = 212U;
    msg.access = 43U;

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
    msg.setTimeStamp(0.48270484176690487);
    msg.setSource(62607U);
    msg.setSourceEntity(74U);
    msg.setDestination(9031U);
    msg.setDestinationEntity(125U);
    msg.name.assign("QNPZBWKHMFTIWLTHGQBLNNQUXXDSQPCTMDVMREAAEFPSHFSTFVILXFXAGJXOOXVJOKDMBVUNPSRBAUCDHHEEPYLNWOZFWYBLQJSLETOCMBHNRZXSKYWGZFIDCAWG");
    msg.value.assign("ZLMPUIKLCQANYHGPGSJEXWNYNNPXJHJBVRJVINANSVKCGQKLKUKSUDMXXYDBHIDDFAUEZJYCAEMFMQFWGWTBDONRGOXDQPKVCOSBVJKQVLMZRGYIFRCFBZFMECEAVUARMSHHONEHNOBWEJTQQDFXOKTPRZZHOLOCRJFCJWYYMPTBOUAXZQYONDPRGSFWSLUYGTTLIZESVEXMWQIWAVQSRWJFUKDIILPCZRHYLTHGHTEBAP");
    msg.type = 185U;
    msg.access = 103U;

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
    msg.setTimeStamp(0.974913560745251);
    msg.setSource(34757U);
    msg.setSourceEntity(70U);
    msg.setDestination(59141U);
    msg.setDestinationEntity(56U);
    msg.name.assign("DAZWHPRZDOMQUVRBASXRLOCZNCHGSADWBCOJDOLQHEIICHSPZLTUEKALMPDCWTKEDHIMMVHUHOM");
    msg.value.assign("NABNWRISSPNLSULQBFCZRNSJFORWWGBMEFMLYACNFWWLFVOEWOPWTPCADQGMIXHGOMLCAKXHXPIJPYDCIZZKUIPDCWBZMWYYEBXLERJJHBRARKGYYVMCOQOUKNRDMXAJLXFLZDDAITNDCRCCHZITLKVPVSSZNGUHGQITGUKOJKIUFUZVYRJHQWUFBFBYHTDMR");
    msg.type = 26U;
    msg.access = 238U;

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
    msg.setTimeStamp(0.5757134982669398);
    msg.setSource(26950U);
    msg.setSourceEntity(104U);
    msg.setDestination(46471U);
    msg.setDestinationEntity(242U);
    msg.cmd = 173U;
    msg.op = 163U;
    msg.plan_id.assign("ILRLDQKUQPVVJADPNDFHCZEPICVYRLRQOZSZPIVHZMPZHWTMAMNTIHAYBENAHFAUNYAELWRKJMXVDSKRKUVWMFRFRYKJSKTUVCWDTTUIFCYOKPFQ");
    msg.params.assign("BMMMFCVAANZEEVJOUNKPDRSALHIYJSOWZKJCTIPMGUCVKMAVWALUDZFBBMDEBLAFOTDGYRYKMUJORQTFYXQSSHVFJYNVWTBRLZQXKJISUIYJYAHTAQHBENPPSQJHCXPNAXLTZUIBYBQDJXZCUUZIQGUNSWMXFKCNGEVOVRDEIAHHYHQDSXWDMOESRZWDLPEWLGCKHFPRLOCFIV");

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
    msg.setTimeStamp(0.7677043865284143);
    msg.setSource(1041U);
    msg.setSourceEntity(188U);
    msg.setDestination(41087U);
    msg.setDestinationEntity(215U);
    msg.cmd = 181U;
    msg.op = 72U;
    msg.plan_id.assign("HEEGWVYJZJDFWDMTNAPOMQITTRAUGNZRZPYWOIQOFYLDQXDHQTIIHABXHLFZLFHTKDKVAGMUUNNMGDHJCEKZFYFMIRVQPHSJSFC");
    msg.params.assign("DEEUYZPHMHWKWTWISFPIUTTCVVLJNMBUHBEIFOKVULBVIOJUHXCQXMHRGSXLJQUAHGGIWMQXDDPABXILYGNEUOUGJXWRIGABNADGBZNPQKYQLIXCPEAKYFROPJKCJZFNWSMZCDOVPRKHFSMQZAVMATSUKSIJOFYDRCLLHEZTSLJVOZVTHXVFTRQNBDQSYJNCNPYITWYNMGCKZDKZWESFOJEOFPAFSQGWKZRROMYCBPHLBA");

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
    msg.setTimeStamp(0.3022089318458986);
    msg.setSource(34015U);
    msg.setSourceEntity(83U);
    msg.setDestination(6004U);
    msg.setDestinationEntity(82U);
    msg.cmd = 67U;
    msg.op = 40U;
    msg.plan_id.assign("FHNFLEVALJXARZMTAYHNLMIAXTKOJWEPOVPQYWJMASJZLXKTFFNWAHSANSQYGMNEIUOPAUDXFJUVCXFGUBLSMDUSFLBRSKBOHEMITDIDRYKKMZWSKCTBVHDDBQPZPWGOPBPQCRLSNUCTQFWOPDPSTTDZYCHMXPOVBYBGICULZJOYERVCEBGMOXHVTRYN");
    msg.params.assign("ADLFSYLIKKGXOCTIUIKVRGNOLXSBOYUYQWUYTYGXUVEYPLAMNWAEDAUDVROQJPJVKJZGROIQWRMWDWZNGFFXULOCVRFXJEVIQAKPSCBBGRSXFHWKTAMBCF");

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
    msg.setTimeStamp(0.9514110454757502);
    msg.setSource(24175U);
    msg.setSourceEntity(179U);
    msg.setDestination(11638U);
    msg.setDestinationEntity(64U);
    msg.group_name.assign("GNYCJOFZMVOIYZCATNSSUPJKMEIRHRPIXKOYASQVWLLCYEWBTJKFDNMALHYVOSZIOPFRMGZDETTNXLMGQLKHBJLCHSHNDJWQPDZWGSNCYUIZGQEZTNUYHRWZTHUUCFTRDHAHVWFRRBZFKRTUABCQYQXDKLKYIINCXJFEBAXOQPKESIMUBNQBFGRKFEVFWMMDX");
    msg.op = 6U;
    msg.lat = 0.3418268097579181;
    msg.lon = 0.9413353276147075;
    msg.height = 0.42442775791478937;
    msg.x = 0.5324124144407247;
    msg.y = 0.18440589041346078;
    msg.z = 0.4371981512354204;
    msg.phi = 0.7404266393315919;
    msg.theta = 0.29643273309361795;
    msg.psi = 0.9869117832054928;
    msg.vx = 0.49396332005033394;
    msg.vy = 0.21537027847551693;
    msg.vz = 0.10309917107791011;
    msg.p = 0.6005301197903052;
    msg.q = 0.06769230186164732;
    msg.r = 0.9305844263639055;
    msg.svx = 0.8456566347315921;
    msg.svy = 0.5224944436103492;
    msg.svz = 0.5693273732349854;

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
    msg.setTimeStamp(0.08618060800830463);
    msg.setSource(34837U);
    msg.setSourceEntity(139U);
    msg.setDestination(5193U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("XZOETGETCPZFMXIMZZXJPWCVLDADAHHEEZYSORBKPOPKNKOTZCJLMUAZNMUXXHCEBYSUNLONHDOLJHITNZZOATDCWXVPXBGDQDBRUIJSDVIIAJGIYJFVEDVPBRUKXFCQEVQJDRKRSHTLDWUV");
    msg.op = 143U;
    msg.lat = 0.8343012905286002;
    msg.lon = 0.12133268825206833;
    msg.height = 0.6067528296110789;
    msg.x = 0.162763873733061;
    msg.y = 0.6414779480113079;
    msg.z = 0.8046243197695869;
    msg.phi = 0.36874811982378075;
    msg.theta = 0.768944221268629;
    msg.psi = 0.6212360251753046;
    msg.vx = 0.18664604560730114;
    msg.vy = 0.5482648170747995;
    msg.vz = 0.8975604176568698;
    msg.p = 0.421297482620677;
    msg.q = 0.7327150946976868;
    msg.r = 0.874328077636811;
    msg.svx = 0.6550907168246901;
    msg.svy = 0.09179727545479288;
    msg.svz = 0.06082086581909296;

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
    msg.setTimeStamp(0.3553816173284836);
    msg.setSource(24195U);
    msg.setSourceEntity(45U);
    msg.setDestination(48211U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("JDQEJQHKNFTENNWVIPVXNQSOTSAAGUIPAZFSSUGQBTGLXDXMDHTVIKEMLFEWRFPKTWEZDVRDCLNHQLOGFZHXAURXWEGTQNUPZEWPGGCYIGHMINVAZLLRXKGKJWICRKUTZDWFUJTVHJCBFLOMSNWRJFYMQOJWRBSMCOAZEBLYXHBJGVYSVAPCXUYOESPHBYFEYHCU");
    msg.op = 136U;
    msg.lat = 0.21298469648938634;
    msg.lon = 0.05711195266826741;
    msg.height = 0.008138359371182569;
    msg.x = 0.9305998308683562;
    msg.y = 0.6037776798827615;
    msg.z = 0.6874762680838772;
    msg.phi = 0.9036887933215318;
    msg.theta = 0.11936001542449892;
    msg.psi = 0.8792906009809649;
    msg.vx = 0.6826605516375794;
    msg.vy = 0.437466310016554;
    msg.vz = 0.22788247624818436;
    msg.p = 0.4074307739806792;
    msg.q = 0.3597804238985324;
    msg.r = 0.6551727786836712;
    msg.svx = 0.8510449155506763;
    msg.svy = 0.049500062127832756;
    msg.svz = 0.6530120097290517;

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
    msg.setTimeStamp(0.6405543379984657);
    msg.setSource(22253U);
    msg.setSourceEntity(251U);
    msg.setDestination(64210U);
    msg.setDestinationEntity(25U);
    msg.plan_id.assign("RJHHAJDPOVAGRGXVDWGXSUFHBIKTASWQRJBSLPJZLYWSEMYZFBICBQYMBKONAFGJXKZTBSLUUNITLELUCCMAFLIADUMPFUJEQCYMZLWOPXVJOYOXLIBCEFZWEXMXIRHZUQTOIHKYKDKLHVADQTNIFUDQWBENORQQHZVVJNIWAZEPZYPRDMNSUFPCNTUNGJWMXKQPEBTYQVHWVGSIECFEJVZO");
    msg.type = 135U;
    msg.properties = 32U;
    msg.durations.assign("QAVTYXLWIGFUMRFCHBJXKMJPEGSYTLGAJMVVKXVPTRDFAQHZXZXIFWTNDDUCGNEWLEWJGKJCWTCTKBJYPCXMFPXEFZNISCPKUEUEHFBEMSYGNIDUWKLVPYUZMRQMLAJBEGROWLNMBATUXFDBOLBQBAHYVTRICARPZWDYRVCIKQUYDIGTONPGS");
    msg.distances.assign("WJKBFGYPHDSFLMLUSSNJRAZPKCJGWXAHMPEEFTOWUAEIWQKAOVRISIHQWQFIURPHMTRLPKPYVKRAGZSYOMYZ");
    msg.actions.assign("XDPSAZCYEIIWOPJPOZLZHNKCFVLCGESUBVNBCBKHZFGYVUARFBRUSVDRXASAOOFNNSTLRGVCXJNFZOIIIVKBCTMXQGZHWHNYVWHJTGQUXCDTOUMOPTHWFDPTPWPOERNSYJJUQWZILVXCWMSSVGQUTRIXUQXLJYKATEKSDDLBUQWY");
    msg.fuel.assign("VADODDBUJKYGRWKMUVQXCBHTVDASHWZOUTXHBNWVGFOBSIBYTGGZPSFBHRFGLOQYSDKXBDYZPMKPYJRSCTIZOCGTVPBUEJKQSMZQUNJYNTHAUUJTGRMSGRARILCMHOIPNNADLANTDGRJKANXPQUIDBZQCSXXXXJFHCLRMWPVEWNDEOJHHIATPVMGFLWUNWEOKMZFVWLMNVHKKESBCZPZCEQCUIMALQFKFQEYETOWRJFOEJVYLRQYYIWPSAIEL");

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
    msg.setTimeStamp(0.4310321718149238);
    msg.setSource(4155U);
    msg.setSourceEntity(248U);
    msg.setDestination(48015U);
    msg.setDestinationEntity(76U);
    msg.plan_id.assign("IPSLJBRSOKNZGPBCIXEVUISSVMGKNFMLRQRXNMJAZYOTFHUKAVXRQXCACLBJDNDANMWIAFHWXOOF");
    msg.type = 164U;
    msg.properties = 44U;
    msg.durations.assign("SPAMYGJLZZMJGVVZZQKUTMHPOYRWUPQQWMVXCEWKRQRFBSHMXXJTHEDPXFQVCLATOIUKMBTYPITVDSJCNXGIICJJCLJFMKVDSRCZIUYSWOBCBNHWIKZDOGGJAMUEJVRU");
    msg.distances.assign("XUKVRZAYGYYDGVXUTUMPLFWOGYMDQKECNFTGNSRCATVYAOMZQNJRIWXCZFINEIQDWONHMEWKLGDVEFSKZBXBFZSCBKBVJEFCMLKGSKPOXIWNCQEMQGKJXUUDTXSBPVJKTPIAQSIMFTOVAZTANXRULLEGHUHTY");
    msg.actions.assign("YLOFSVLPSCMQEOAZAVZVSVEOQPDAKESY");
    msg.fuel.assign("YQOKGODKTQZRRXVCAXGWSCUHUIUNVDZFKIDBEPRFZNUHOINIRJMXTWPPBAMSEOEFKALAKVMLWKSTQQVTPJTSMVATDABLBSPYXMYCAFEYSLQLSHHPWVLXMMPYZOMXYFPDBNLMUYJWHXKZRHHUWIAPWVTEIDKDIGRBUSANIPFCDERNTJWGDJVBSGYSYURIOZEQGXMJBJNFFLQVYGCNJAIJORWHUWEGOZQCBRELCFBXZCXHETN");

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
    msg.setTimeStamp(0.4488048491020711);
    msg.setSource(2804U);
    msg.setSourceEntity(212U);
    msg.setDestination(28508U);
    msg.setDestinationEntity(82U);
    msg.plan_id.assign("CVKRUTLRFTPKKHRLLOOWGBVBLRNLXGVAWXSRXBINPJIZYBRIZAMOESPLAEVRSTSJWLOKEHCDJROCPWBWIXWYWDTLPQPNOUCDBXNQTYTFWSDDFTOUPHMZBHYQUQADFDCUVVGGYHJQZFCCMQNIKRKIGZSVANHRFXPNHHAQVMIDGXCYBKAVLLYUTAUIEETJYDXMFZXSSVEAYHJZJGUKEEOM");
    msg.type = 11U;
    msg.properties = 156U;
    msg.durations.assign("SSJREQGGKDYMNDESVCBLGKDOWVRPOKLNUSEJGYMJMNXUEDUTDEWORLPLNXQBXABMVEDUAMZHCOBNHLSRBEVWT");
    msg.distances.assign("YAOFCTQSWNJMGBQOKLKOAPYOWMQXCQUENAJUMNGHPBDQNHADUOQDEDCCFBKNDCYPVPFXVUIRXNQECGVYETJGUZBWVDTIB");
    msg.actions.assign("IRBKYOXUFZCGTNRTBNCQNLTIYEZXPNPBSHHYMJZSWHERVRQQSBHAWMFJHYHJSKOYAOLYBVLXSTGVVKQGDKRBSLWGMBDHLIPYJWFVOSFEPXUVMZEPNPYMDACUENIDWFEFUXIGINZGJCWUCKTBTJULPSXRXWVTTYFCPRJADITZXGQQXKNEBCEJIJ");
    msg.fuel.assign("RLRYUVILPKOBWCXWPOBRMZASTIKYECFUZUCVFULIUKZGSXLVKQCVLDWNYGFETMGQPUATFEZMLQWFPTRNCWSUHWEPXZMQDAJEIJPAZBGRVHKGERELOIBTYECYMRMNSIZVCJNDIYGTTAJB");

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
    msg.setTimeStamp(0.17507704245185596);
    msg.setSource(23517U);
    msg.setSourceEntity(56U);
    msg.setDestination(1553U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.24650570417817308;
    msg.lon = 0.32928282082617544;
    msg.depth = 0.8006259987454873;
    msg.roll = 0.1386778204133604;
    msg.pitch = 0.9858811024767707;
    msg.yaw = 0.8390458541289697;
    msg.rcp_time = 0.690992193109972;
    msg.sid.assign("KNTYLNVMDHLMBBDABLTOBIYUQG");
    msg.s_type = 243U;

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
    msg.setTimeStamp(0.07043943056096802);
    msg.setSource(36604U);
    msg.setSourceEntity(61U);
    msg.setDestination(3000U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.07275902574359194;
    msg.lon = 0.2796348238659775;
    msg.depth = 0.6238417286873488;
    msg.roll = 0.4040657528215026;
    msg.pitch = 0.07751589053346208;
    msg.yaw = 0.21370606776234136;
    msg.rcp_time = 0.9813662262831632;
    msg.sid.assign("CDAVEZCSGJWDIEKLWWIFIBFXSZMNAHLVAQSISOVQWFALFNUTKYGNCVRCZYPEBUKDMMVXUSSDALYATZENEWOVKYARXZNMPYBFXMOOZGWQEGECDMTEPHHMLSCAPNMRXBOBVKYXWWPTBLCRJWQ");
    msg.s_type = 242U;

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
    msg.setTimeStamp(0.26505639635146383);
    msg.setSource(42229U);
    msg.setSourceEntity(179U);
    msg.setDestination(23447U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.5987606594899727;
    msg.lon = 0.8994091130570405;
    msg.depth = 0.8977709346482844;
    msg.roll = 0.021445463009547416;
    msg.pitch = 0.8869698002373959;
    msg.yaw = 0.27420161421638056;
    msg.rcp_time = 0.9726083740111392;
    msg.sid.assign("NBWYKQESCJVMCAIARSPYCYQNOFXOWACWEFIWRPUAUMLTOCNMRHIIBDEFDQDCONQJIVJFRAZEKGJGSUSTXUBTDIDMPHP");
    msg.s_type = 140U;

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
    msg.setTimeStamp(0.8946663101071595);
    msg.setSource(58499U);
    msg.setSourceEntity(164U);
    msg.setDestination(15665U);
    msg.setDestinationEntity(90U);
    msg.id.assign("WEQIGIOZCTXJYVCCYEVSVMAJDBVRQBSBAXPKLNEMXECOPOOVLDNAWFWKRGOUTLLYXEUGFABXPZJFSDWJYGKACSTMCSQQ");
    msg.sensor_class.assign("BOMJRZJNADREPYRPUJDDNKASUTTYXPLXEQGNQQWJTVIM");
    msg.lat = 0.7185149882379247;
    msg.lon = 0.8104275748572279;
    msg.alt = 0.9979526814368784;
    msg.heading = 0.03006835527321028;
    msg.data.assign("DFGWGBIXZMRFIYZGMMRPKAYAJIJQEWRMSRYISFKBKLJEGKP");

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
    msg.setTimeStamp(0.9048519883863276);
    msg.setSource(8309U);
    msg.setSourceEntity(230U);
    msg.setDestination(32109U);
    msg.setDestinationEntity(25U);
    msg.id.assign("UMSZAGNIDWIZBZDMHNNUMOFXJEXWBGHZXZIRHPVFFOFJLMJBTBYTSHKWPEDXBSWWUBHJNSTAVSELGJZYHEQDX");
    msg.sensor_class.assign("BAOZKXQRSWUGXAZXRJOKTYMCUUCQRCIOZFBFHPAVPAEIAYYSLYJBRFWBKNSADFMVJLSGCGTFVDALFQWOWEPHUGUMVLEVVWQWQYSLEPENNHPZTVMRYVDKILTRCBFHPQTUI");
    msg.lat = 0.34332741354310425;
    msg.lon = 0.6401231059963639;
    msg.alt = 0.30591903510502194;
    msg.heading = 0.7200999567291735;
    msg.data.assign("BGPDAPGHJSXLTCGPIZQZXHQAQKNZBETYFYEXHQISNWJPWQYUWLPPUVTMSVNHNYSUUZIMMQSSAYKGFWXRQBKRUUJZBWBQQRTWPLEUYTCXZOFGHDLOCJXHZIKVDTRSVLDRWGEKDFMEHSOLOFPMYFTDOWRCZIFJQGOTARGFVTRXHOFYYIUAKHOAVWAKAEJCIHLDEUJFTAZDRJBJUMNXDLCZVMXEWVGKNBECIMNIVONRGAENXKLB");

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
    msg.setTimeStamp(0.22991277129747856);
    msg.setSource(57235U);
    msg.setSourceEntity(88U);
    msg.setDestination(42373U);
    msg.setDestinationEntity(5U);
    msg.id.assign("HPWDBLZIFJCGOMWXQIKKIORAZAMDVXHDPFXUYUJXMZFWHCKPHBDZHKGETQTNIDOCXAKAQUDHOQLEFDFIMMWEBINS");
    msg.sensor_class.assign("WUZZKCSCJEXPFAMWYQFBYBTGIPXYNLYFOMZAVHUVIYOLFXUATAOFKHMQJESHSSWCJSVVEAXKGYTE");
    msg.lat = 0.6489336444498761;
    msg.lon = 0.5276549826622616;
    msg.alt = 0.39166639109244983;
    msg.heading = 0.22061271407655525;
    msg.data.assign("VSLDGIZLUFMSXRDBYQZDQWECPIGSJQWXNOWEBPVCFYXOUGDQNVJYYNQVJUIOTMWTMHGKRYRTAHNVGMECOLHMZZBGBS");

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
    msg.setTimeStamp(0.3931459802601097);
    msg.setSource(51267U);
    msg.setSourceEntity(112U);
    msg.setDestination(25446U);
    msg.setDestinationEntity(122U);
    msg.id.assign("JBCWEIIZOJGEWTAQGCLELFPYADMCNNGRHUZRIIIJJTNKTGWIVGOUPRKJRWUOUBHOTGXHESUXYMIVFVWAWJROXQTMRJDCWECNJMQFVYCBCHLPSSBKABULOJFFL");

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
    msg.setTimeStamp(0.817208812430988);
    msg.setSource(45197U);
    msg.setSourceEntity(49U);
    msg.setDestination(9505U);
    msg.setDestinationEntity(125U);
    msg.id.assign("IVKCNIMAWMQLBLRPCYMUQWPNZWVURKVPGVXHJURTDDYNHQVBCWTFXXQJFWLLMZZTGXDSLAKINSXYIWRSXRMXTPCIJGEBEI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ERFOVDOSOSWHRRYFX");
    tmp_msg_0.feature_type = 225U;
    tmp_msg_0.rgb_red = 252U;
    tmp_msg_0.rgb_green = 132U;
    tmp_msg_0.rgb_blue = 147U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6682799028136913;
    tmp_tmp_msg_0_0.lon = 0.4345758503821465;
    tmp_tmp_msg_0_0.alt = 0.9528251199359346;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.4899105183132838);
    msg.setSource(55895U);
    msg.setSourceEntity(128U);
    msg.setDestination(19329U);
    msg.setDestinationEntity(153U);
    msg.id.assign("GVFFOXBKCITPICOSPRTQHUYJNNHICVHUZPASFXKCHNHSWXKVENEDYAWGSCNXJJTWLFDBKTIMSZRJBLQQYPXEOQVVNMKGBZJGT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GFPSIHJJXFQSEAYDCABRUZTSIZJWSMGWQYAHVFORHCQMECOYFGSAMZENWYHPZXEZIIJXBOXIVQNABWSCVYMBATTDKDQHETYVXPBKAUZFWPQOXBSZTOPPBQUVNYDXIHDXNLGRRVVAMFXQOLWORGDFYCBKUWMRNNEWRHRKFKCCQJIARXVKCNEGTKJLLEEGSIOSZUJGWHALJYCTBHNBTGUYQWLZIHRGCLKTLENMFKDZUNDULV");
    tmp_msg_0.feature_type = 52U;
    tmp_msg_0.rgb_red = 159U;
    tmp_msg_0.rgb_green = 90U;
    tmp_msg_0.rgb_blue = 156U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.16133162110521915;
    tmp_tmp_msg_0_0.lon = 0.5001245417859101;
    tmp_tmp_msg_0_0.alt = 0.03841230530191153;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.744497951115401);
    msg.setSource(20291U);
    msg.setSourceEntity(88U);
    msg.setDestination(8066U);
    msg.setDestinationEntity(170U);
    msg.id.assign("TGRUQVQDTCBWUFRXHGGIKAYUHMVSPWUVYDQRPDFABLHDDCGMOECGALKYEVDSYEJCLRJQOEIXEYNMOCAUSVOKLNFMHNFKISHHQBAFTFHPYRYXBZLCSAQNPHNYTVTLSIJJKELWGQXOMUDZIWXHZNPIKJUIGUBLMYVKMJFCBDBZFCVOIJGVNEGHPBWKREMRWUSQXJZKONEWQOCZNPDRRTLMBATTPOGUIZYCIJBWTXVSXAWAOZAXQMPDXPF");
    msg.feature_type = 218U;
    msg.rgb_red = 59U;
    msg.rgb_green = 127U;
    msg.rgb_blue = 95U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6982958638495856;
    tmp_msg_0.lon = 0.17671944890601;
    tmp_msg_0.alt = 0.3894714613959698;
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
    msg.setTimeStamp(0.18101329299037028);
    msg.setSource(18261U);
    msg.setSourceEntity(182U);
    msg.setDestination(29556U);
    msg.setDestinationEntity(89U);
    msg.id.assign("PGVLBGEUOTEIOPUYBZSKVWAYRXJSXWSPAXRGAJCBNUESHFCROJAJDQRPDPTILYITLAIKVMESUEFNBIMEIYNBMZWFQHERZUQKEFSDMUDJNPQUGHBYHTSEVRUDZ");
    msg.feature_type = 125U;
    msg.rgb_red = 180U;
    msg.rgb_green = 219U;
    msg.rgb_blue = 6U;

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
    msg.setTimeStamp(0.709404420690989);
    msg.setSource(41000U);
    msg.setSourceEntity(229U);
    msg.setDestination(59169U);
    msg.setDestinationEntity(16U);
    msg.id.assign("UJJUTPXLGPRNULBPKFJDRGPKXNZQGSJRBUQRZWXDFANNHDOTPHHHAFUXEFDJOQCYKEQVTCPYJOEQSCZGWAFECFXUVWQXBRRHTEAAZSWCRGVWJM");
    msg.feature_type = 202U;
    msg.rgb_red = 17U;
    msg.rgb_green = 250U;
    msg.rgb_blue = 192U;

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
    msg.setTimeStamp(0.8729855535251075);
    msg.setSource(54085U);
    msg.setSourceEntity(102U);
    msg.setDestination(26633U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.6048663002039076;
    msg.lon = 0.988335972487481;
    msg.alt = 0.01851377910700991;

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
    msg.setTimeStamp(0.7050774225094402);
    msg.setSource(59197U);
    msg.setSourceEntity(17U);
    msg.setDestination(33295U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.13010628061545504;
    msg.lon = 0.015530817836460376;
    msg.alt = 0.39887037308177853;

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
    msg.setTimeStamp(0.47911234772797184);
    msg.setSource(63655U);
    msg.setSourceEntity(116U);
    msg.setDestination(19140U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.2568143679074498;
    msg.lon = 0.7168332433014971;
    msg.alt = 0.6078392961384;

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
    msg.setTimeStamp(0.11992278931811651);
    msg.setSource(61602U);
    msg.setSourceEntity(43U);
    msg.setDestination(58270U);
    msg.setDestinationEntity(79U);
    msg.type = 20U;
    msg.id.assign("AIFWHIBWXFRLITKMNTOPGXQWKNLRRLOXNTNBPKMQKHZDUWREDOYZNMFHTVESUCESOCRTYCPYOBQWEPRZFGXPHSLLCKUMDEBYV");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.3020573437801537;
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
    msg.setTimeStamp(0.6419407145929024);
    msg.setSource(44957U);
    msg.setSourceEntity(236U);
    msg.setDestination(25707U);
    msg.setDestinationEntity(117U);
    msg.type = 170U;
    msg.id.assign("HFBJVVAEFINRHIWDRKXNEXKE");
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 16U;
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
    msg.setTimeStamp(0.4893824803769463);
    msg.setSource(56211U);
    msg.setSourceEntity(250U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(148U);
    msg.type = 107U;
    msg.id.assign("VEXSPBKTULIVVUQUOLGYQGNPEBDBEJSLNTWTWPQVRDRRNZJSXBCASNCVDFGEXKGVXRIADXUHTKZMRZOMHDOUGHKYVFDKIUWCWRVGQXYLXWOHACHPIM");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.9561969851068741;
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
    msg.setTimeStamp(0.5839635828238703);
    msg.setSource(40434U);
    msg.setSourceEntity(246U);
    msg.setDestination(57879U);
    msg.setDestinationEntity(45U);
    msg.localname.assign("JQYRLYDYWOANWQZSHHBVWWVXRKXEGNIMGSUJXGBUVEXICSOUOTYCARTSQDUOEVUMSDFXCJPZWLPBVPDJBLYELBBIJZBNRNKHRMOQRLYWL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MUWIIBOEWGAWFXPGLCOGCYKOJUBBNPGDIXJUXJEFLDXMGJDNQUNFHHFUCHSTXYRNEWBKZAQOUWXDXLULGNCDCYASIDHHZNUGSBAVICEFUJSVXPZIBYNRTNSYSVQMQJSZNZCWZKRMLOOVHVMTTPQKDFBSDRZERMHZLDAEAKOXM");
    tmp_msg_0.sys_type = 175U;
    tmp_msg_0.owner = 9755U;
    tmp_msg_0.lat = 0.8150191130643445;
    tmp_msg_0.lon = 0.08075962156782412;
    tmp_msg_0.height = 0.7585066352174928;
    tmp_msg_0.services.assign("BVLNZRYBVLLMHOHYQHBMAVPTZKIJDQNITKPOGUTVDHGXJKSGAJLMXIXNPNQPYIFDHHZOZENABRPKEEBMVJWCCDMYCFCJDKGLMFGMTMGZUYVWLTSDIHJGTQKPYPZFUEZDWMHUAXWNRPHENK");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.632205191672318);
    msg.setSource(49826U);
    msg.setSourceEntity(197U);
    msg.setDestination(19693U);
    msg.setDestinationEntity(131U);
    msg.localname.assign("FJCHSIECBFGZMQXUKGWJALANOOIXVASXZITKSLVFRLYRBJSWEYAVBBUJCZZPAMDWMGFWJVCQWUFHBNCTXZTTDQXBVDPKSDIIJZNHNERYGYFQEXJERQACBHGMXMTGXARIUNJCVRPSPMDWHWKXKUTMSTYOFZIJSCONHSGLKRTGWNRPJNWRKZAQNTUOIPBCNKIIOUCDOYYLZK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CWKVKJKBXHEUXFQOWEUDMBCTBHZUEBMBXAKSGREILOSHXDLQVAIZQAPGVQRUYZNRGHOJUGLDKMSMKOYNWGRIGOY");
    tmp_msg_0.sys_type = 219U;
    tmp_msg_0.owner = 32207U;
    tmp_msg_0.lat = 0.6039045664566531;
    tmp_msg_0.lon = 0.8669229493842897;
    tmp_msg_0.height = 0.7923615160338843;
    tmp_msg_0.services.assign("PXYMYHBKRBJJVFRAFOMZAZPPQLLJLTMICYWCDXFHPQUBHYKPDWDMZVWLPUEVHEXERHDWRBFOJPISJVCCKKBNZGNNMPYCHLFKKXFQDQYOLBWHGGWFUXWBRNQOYTXSERICVOSANNIQFDEAXTOCDUZVAZIEJIQYIDVASTLUTOZLEGJUMYXIJBNYPEOVNZTGJPRFKICAWMKGKQUMWTNQB");
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
    msg.setTimeStamp(0.025098438460135708);
    msg.setSource(14924U);
    msg.setSourceEntity(91U);
    msg.setDestination(49326U);
    msg.setDestinationEntity(92U);
    msg.localname.assign("GZYHBGNRUDMVSJIFASUKXJAXRSGZOYOGRKLTIHPDIWVQBBOIDWSWAHZZCCJPYKTOCJPPLQXGMBPUEENBHOUCCDQDEETMWFJZRPMGQJCLPNVVWHSBNTCYOHGISWXYEQXDRSSXTXCNDAHLUFUSEXKGILBVJFVDIDZUFCEQVNHMRGLIWZLBENTFQHRMXVNAVML");

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
    msg.setTimeStamp(0.11683868934358721);
    msg.setSource(11954U);
    msg.setSourceEntity(249U);
    msg.setDestination(28902U);
    msg.setDestinationEntity(92U);
    msg.timeline.assign("VPCGXNUGRYIJVBBXQLTHQCFOFGWGZBDXRNDLCZQNQMWWSRVRSUWBNFNOGPOZAUHPCQRYLFMADETFXIITPPEJIYTJETBMEQLOSZXXLAHJIYYZGCYUOURCFQWARZBMUKHLYEPVDBBBNJKQRNJPGMRSKFIJVHWNFUUGTOHKKWDDOZXEPOXSEONGVUYMICITFZLSHXJKKVQK");
    msg.predicate.assign("OXNSEYUAVSMIDDMHLUSBZLBNLGVBWTMHRHTMZJJRPQZEQLWIAMTJGVZELBMAQDZGJZTSTLSQUNNQPJOWLHLFWAQBXGGXORAJRFJZHNFCOCPUSNUXBHAKEXYKKWRUCKGXCEDRKMAIQCWPHCZFOCUCJIJYFEPGYQMGHWEYPFBLDVDIGVENWLVETGANTMFKSBPAHNKDSURXBRPKIYKWYDIUEADVYWPOFI");
    msg.attributes.assign("DAYQAZEJACJRDCAGFGZPZSGPDTATMPWLPKJGPGOKOBBQLJSMSAYQCJEVMZAHQLDHZEFIHSNNUIWLLOMBIYIHGWUQIWFOXMCOZWVIXIEYTIDEJWPZAXLURJBLIHBNWSQOVUBDEHNTBRTTLMKRNLXOBFNBDQJCKO");

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
    msg.setTimeStamp(0.1881566698427407);
    msg.setSource(56099U);
    msg.setSourceEntity(162U);
    msg.setDestination(42254U);
    msg.setDestinationEntity(186U);
    msg.timeline.assign("JBUWZJFFARLQJSMNVAOUWFNCTAKLOMNTNLBKBOTEIJQFQLXKOMZCELCGDDKPYOHMHDPZJTUVIWEXCPWIOBPDQSMXUIZVBOPUYGMWLDSLVSRPLNDHMNAUXRUQUTALOXJ");
    msg.predicate.assign("DPMYEIIGCQVDOFHPXIFDEJBVQGSBLDAWIRNDXCWKOPCAECCUHMNFOWRRNMTZJYAPN");
    msg.attributes.assign("ACUGOEHAZPQIZZTQSRTKJHDQVQRFGLTFXVGNPBFWILCPAHYMOMRRGTVBEIWZPBPGMWJLJYAGFWONYSAWPBMJUBUCSITBFMYEMARYHYWQGICYAWVSAAOZTIEHNLZECGLQFZSSDHULFFTBPNGHROCIWSCZXNRKQQEBMKBVIJNOKKXOJXOR");

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
    msg.setTimeStamp(0.49962045798389065);
    msg.setSource(26695U);
    msg.setSourceEntity(210U);
    msg.setDestination(13055U);
    msg.setDestinationEntity(155U);
    msg.timeline.assign("NNRNTUMPVEQTCAIXOPFXJHWSLPNTDUHMQKQFBFSEKZSRLIRYZHCYBAIXALGVHYXDDJXUVQOUWPCXJJDGKTMQW");
    msg.predicate.assign("NKQTNPZCMJTWRKVZLHHRSBBY");
    msg.attributes.assign("IJHGELEAMFRRHDXXLICLYDWVJZRTWOICQXOGASZGXVFMNIUVPCWYBZXDUYBCWBMPVSSMYXPMGXZOHTYFSBTOT");

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
    msg.setTimeStamp(0.218315738163115);
    msg.setSource(60101U);
    msg.setSourceEntity(159U);
    msg.setDestination(42992U);
    msg.setDestinationEntity(56U);
    msg.command = 100U;
    msg.goal_id.assign("DJIUQKTHQTZHPSGYROOMIEYPZRGITTSWTVXCWJPLKCBIGRBVEMUJCFXWQLABDJOOHMIDMXACQGHQKAPDFFSEVORWRDFVEDPNYR");
    msg.goal_xml.assign("QKIZPRXOCBGOVQSBEXLFWLDAYCBWLBFICTLVWTMQMINAMWTIAJSVZUIFKZJYVTSGOJYHSWDEHKAUUUFAXCEPMVTCYZPEMTURMPFLXUUZXDFBUYDSXGPSSTXCZKSHHKGNHJYOECPGPOMNIFRRWTDJERARLGQIQRRNEBGJNVYACYVOOHJOFQWEZRQQGGDCFHVKTKBIBNXOANKUEWDAZLWLLHDXRNJDBSIWIBVQNFEYKMPKZJAQYXV");

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
    msg.setTimeStamp(0.34228813996271634);
    msg.setSource(48989U);
    msg.setSourceEntity(63U);
    msg.setDestination(63208U);
    msg.setDestinationEntity(98U);
    msg.command = 49U;
    msg.goal_id.assign("JBRADYQFGWAPDDWPHNCWFKAPQBWAKGVVPPYVCNGFDIMXSLBGJXACTQFEMCXAUSZFSOZNFQYJUBLUVOUTXCLPHDHUYWMUHNLIYOJRCYWVKZZKXCVJNXVSOYRLAGZWQRIWJBLYEINCSJADTJBLMUCMQXIIUNEHFTKNMNSUTSKKVIDSOQCZHGOTFATZHVKAEEBRTQGELMYPEJLZNKVR");
    msg.goal_xml.assign("VGJQXPSHWRJAMEOAKDZJCJIPLOXPGQJZ");

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
    msg.setTimeStamp(0.34846563002463793);
    msg.setSource(2780U);
    msg.setSourceEntity(170U);
    msg.setDestination(40568U);
    msg.setDestinationEntity(142U);
    msg.command = 122U;
    msg.goal_id.assign("XNZKDGXGEGKYSILHOFXLPJSOEYLICQFTZUPWFJKWIWJEFPAYJH");
    msg.goal_xml.assign("KUIYUWLVGFXYDGEWVRUFLNETXDOGUTYCVJTSBLBCPNBCZZLIKOMBLBYCCRJOONU");

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
    msg.setTimeStamp(0.17737887422040577);
    msg.setSource(62837U);
    msg.setSourceEntity(125U);
    msg.setDestination(14129U);
    msg.setDestinationEntity(9U);
    msg.op = 42U;
    msg.goal_id.assign("ZHRRYKPDCUMDTHQOAEBGHUBVDTADWILLSOUZVWZSAJPDNTXPEPXGCATJFHQOILRMGZWJSRKCUJENYMDEBUYCKLBNUVTUJZQPBGXNKOMPBROOCZSSKIILOLXSWRIYIYWFWZLMVNDDCFPAZQBYHSJSEBEXKPSKBTGWVHZEWGQUEQYSHADPKYRDXLAZFTWRHEOTJKJFMMQLAGBHKPYVIGNXF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TWRCPPROGGAWIUYGXXDTFZXJKMIEGDLKSJTILTKKLQNDBRXQCVYCHBCTYLHFGWZLRUYBQJNXGIMORSWMEMPRF");
    tmp_msg_0.predicate.assign("WWHJYVCTNCKERVBUPFSADFLXTULHYPZWXSZJZGRBTWFGEGXSXIMQLGEGAMVCRSFPKQGITJVJLIXIRRRPDMDCGLHDZXJMLIQZENPKPUBIESTDFCFBJHLZCYMNQNXFANAMFGKRMKKUROOOAJKCYDWQRYHNPHCUHOSZQBIGUDELKMUKNJQEHLBLZIVBPYOUSQCVXXWHYUBPFRMWFGMWKAVAQIOYZYZDSEAETAQVOHVDJT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MQMVPJALMUFIBJJSLPPZLKAQESXFBUZDQPWQYQCJRODNG");
    tmp_tmp_msg_0_0.attr_type = 210U;
    tmp_tmp_msg_0_0.min.assign("GHAFVGUAPCEVWIIYBSSHELJQVYFYUBTCPRNZWQRZJYUQMWMCXXJQJRVFRXWLDVLEVLQCWACJTRJUNYGBYZNPAJKXLSCARBPMJYQW");
    tmp_tmp_msg_0_0.max.assign("QZDCKKMGETFHIGBHMQUBCKZFMWZOQNULAGSRDNYVVW");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8291722886341285);
    msg.setSource(62882U);
    msg.setSourceEntity(150U);
    msg.setDestination(65083U);
    msg.setDestinationEntity(78U);
    msg.op = 36U;
    msg.goal_id.assign("OFWUSXMCXYQTBMGVLVFQPONJTJHMONYXSCEMAZQLTSYZLGUYOLZNXPRPBPOCWKHKWBUAAXTWDKWSFEGAY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SOUIDEAXCGBYSLHGVEUKIHWTDJLVFLPMPVCAJNSMVCIKOJPFAJCIWBKFTCRYIEZLZXSODMHCDZCXORZKAVVBUGVLYULQHQLEKRMOQMSSSBPYQLTCAONABPWJFNWRRDBDDCXMBZQHAXVQZFWORNHKTCGFYJOZNFOKTJSSWREZUGFPGPMIAGTYUTENBGNKZJDGPMUUXXBHRLAIXPHDTRNWQWX");
    tmp_msg_0.predicate.assign("RHSERXDMYOTXRFMNOKUVBFSCIYGDGKSBKXLMKIWRERHXJTWPVLEOARUTYZXQRXVEOHNVDESJZEQBAPMNDWQAFIAKQBY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NYPODHRIBRSJLJIACUAKWZQOSQEVQOWQZWZTRMGPBIYATVMKIEEHXFEVREXXPHOCLQSDSCRWDYKSDIQIRXJIWUWZTGHQDHLQLFUAMEDPHXASDBKRJLMGJIMUSNZMFAECGATTBMCWXQPKNIGHYOMQUFYLKRKUSCVNZITGBOFVRZHCOXFKWTEBYTFVJJZCBPNNUMXFKDBFNVJSDYOYYPPHXJVAVLNVAZXDPOGFELMGJSTGPLERKWNU");
    tmp_tmp_msg_0_0.attr_type = 108U;
    tmp_tmp_msg_0_0.min.assign("JQFAYZEHWZUIUNFGBTHJAHHXCTYUANJTVLVCUNBDQBVYRWCGSQJQIMXDWAAXYZNPXTKCECBFOSKTWYKMKIJKXBUPDVAJOVGGHSXFEDYLOBEIVILZEPOWNGHRFUGBYQQHDQDTSXKXKMZZYAJWLYHDP");
    tmp_tmp_msg_0_0.max.assign("AONVYXZPJKLDJZDWVRTKNCETTFLWRCCYLIVAMWWDOPHEYNEIKZCJP");
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
    msg.setTimeStamp(0.8603865762394781);
    msg.setSource(51391U);
    msg.setSourceEntity(151U);
    msg.setDestination(5268U);
    msg.setDestinationEntity(206U);
    msg.op = 195U;
    msg.goal_id.assign("XOGRDRKCAJQNZNWFDFUFDBADZOWLZEFFMYHRRBNXJWZJAKWHBQYZUCXKACXNBJQFABCUIDJLVEBPORQKLFRFBTWTBSESSHHYMITSZYCZONJWMMAIEHJOLCILLVODY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QRIHWGWAPYBHYRVRRJTGXEANZKUZCDDLGKOAUKNXEYAZPVQMUNPSWJQQDNDDGOBXGSQQCTEKIRMYESEENILQIOVVTXTSQIOZHDNSYRTUCKBWCKCV");
    tmp_msg_0.predicate.assign("GBXCPVEOFOQCRNTXISDRPVCXHMKFUQQZTHNYPIKKEYHOTMNEADALETPNADSIJQNZIJLMDDHZANZSGRZOOGOTRVIXLPOPLLJHVGCJPTWOYZJFXHREMWFHNNCDQQJSLTTYXRISS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BJCFVFXDBHPHUGAKRIBELASNBRPRZONZWLCCVCNSEMOPJEDAVQKTDIOKEHHFGLIZNHQCPFTLJBQDLXROL");
    tmp_tmp_msg_0_0.attr_type = 56U;
    tmp_tmp_msg_0_0.min.assign("DTHJWGXNCJXESRKPKMLMHTHEPAMCBOSGJBKRAWGPDGIZUYNEAFPDMEOFQNJIYXNWJVLAKMREGHTQNSJPXJAXVJAORQUMKRCHQDDLYCVTUQWLKUKHUZHF");
    tmp_tmp_msg_0_0.max.assign("XMGKFGHBORUZGKKAQMAANIPXVMCIBXXLNTEHVMPIHBYSYBBJDWHTNLNDFVSJZYZTQTFDYOSCGWPLINWKOFYABXNROCTXKKURWQXPEHVUJNWCOFIGSOZDPMVIETRVGZHEZTSEFHDUMDYS");
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
    msg.setTimeStamp(0.34269728327260063);
    msg.setSource(58013U);
    msg.setSourceEntity(10U);
    msg.setDestination(51780U);
    msg.setDestinationEntity(175U);
    msg.name.assign("ZBGZSBTGQRADSGEFTKXQYPWSZDBAUVBWQZYJRXMNYEQHCZPZNMRWPSTHBUPHWIFMTNNFBYLMNXNCABLJFAIVTSKEKVLHDOPSFEYVPRTCFXIKEDFFXVVHDQYHXVONXXZKKEGDPRKISUPMGGEFORHERAJEUTAMNHLQIPARQFTOVCXBAUACAJVJIOSLOJWKJROGIQLUZYDI");
    msg.attr_type = 234U;
    msg.min.assign("GKCQUVPAWLKCDMWGHOYYQVOILCJRNJVCUABRFGLGIRWKUNSWMUWNKBPLJQTUPIHPCMSAQNYOWFHNZATYJAJAYFGAGYEGVKESZSHMRORQUPVGDHREHOFPBJFSCRLILTQWTWFNFCXNNZBHXKDGMYYBMTUAYHSDVKIBDJSEQTLQAUEETQVKIOFXWOIZDFLJOFEKENDYVBZCCIERXXTUSOURDISAMWZPBJXLMZNSODTGXHCILQXVVPJZPZBXTHZ");
    msg.max.assign("SALNRMYRJSEQLEJUAGXTIYNRHFLSHTVZRAPVBKZRWQLKIXJVWNEWXPOOOUETJDCOCFILZPACEUEIXTVDAHKOEJCSOLLZTPSURYDARRUPKBMVWXWMDYHTNJQPPPKTAPKVINVUCZKYQNERWGWOIBFJSIZRGFBQZJDHNHUXSXZCYJNJWTHFMVKDKQSHIGCEDHTUYQX");

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
    msg.setTimeStamp(0.4978039383457784);
    msg.setSource(22234U);
    msg.setSourceEntity(33U);
    msg.setDestination(47109U);
    msg.setDestinationEntity(203U);
    msg.name.assign("SANXFEWGBS");
    msg.attr_type = 62U;
    msg.min.assign("LSUDHSYFMBIAOTNYDWXRODFRKVMGNLKTBGZBJLUFWLBGKSCBWYMOPFSUPALHHXVERELNCYOSTWQSHGCIXVHZYJCNIJOTNPMVMDIPUNYTTPXCUSOXAUERMGXQBCVVWSILAAEAKUOUDBVAKNKWPQFJTENNMGHWSZPYLGLAREPQFBDEKCZCKXZTTSYJ");
    msg.max.assign("XLMWFDHGWBGNTYAKBDAQJTBHPHBJHDVNLWIYLWONTERFUNQUYIPYUMBBKZEBPYFOXOQKDJQDKQKKXRHRXPOFARAOKNEWSMIGICRCFCDZMAJNYIHVVTLUNJYFMASESFBEJCAUYVFPVGWCWZMSYOVNUJXFRVPBQOTZYTHMPCQZXWZLEIOLTMVPHCTSPQIZBHFTRKPLDARXZXXJQCVSNAKWSIJJSMKEGISUGCROXDUZZMTHECULGA");

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
    msg.setTimeStamp(0.37346452979836);
    msg.setSource(1873U);
    msg.setSourceEntity(22U);
    msg.setDestination(27477U);
    msg.setDestinationEntity(91U);
    msg.name.assign("SIEQPLDQARXUMICYAHBVQJCVKIOMBMTHRVUNNNDOWCXEZYGYTBKRUYOOYILIXMTTARBDOJUHZYVGG");
    msg.attr_type = 132U;
    msg.min.assign("GTALCJNEODRMNHVFIZWVOFBTOEHPGFKPKMNVRFLKVUWKDJJNLVXOAFXRTFQMIOAENIKFLAMPVMPGSKBRKPZNAHWBUWYGXASW");
    msg.max.assign("PZPIUUBASSOYVCFDLUGINGNDFKHQRRZKYIXSNURRHAQOBPIVMWGMPEVCJOYTCZXGGQHWDCIIBJZATLBNQCAFETWWSEJDHVODNZKKUMXEWENYHGSLFMIIUFHWCJCTVQEPKLMYEDWGMASVOBUVTYRYABJJDYSQEKOUGCAPHJBJAYKOLYTEKDAXNTLJXSSXBDPBRMUPXPZMHMWZJT");

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
    msg.setTimeStamp(0.8873671347841455);
    msg.setSource(23676U);
    msg.setSourceEntity(116U);
    msg.setDestination(13899U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("LDJIHJMQWGNGVXCJGQLYMTXAEAZPHEAFOFYXDDDPSLLPZNEMQMTBTHXVHZSRYWVDRZKSEEPKVCYRJQZANCEQIWWSVPKBCFXPVYBIUJIMFLASLONPMSQLBBMRHKMWOIQHGKKBUUSICYBHZPKNGGQKNUDQWHUCALBGXOFXJCYTHYOFIKZWJUJFNCYNTRRXDDUVAY");
    msg.predicate.assign("GCTRZYKRSJOUDBVBMSTBLVFTXQKIVZLRVWLGXWXPFFMLNHMZZQDZHVOHDQBHLBEBFVNSERNACYPWIJNENKCDUJZOQYOVIUSUDENQLADJPVXKKFLAZNFGQJFYTXDMQLKCYG");

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
    msg.setTimeStamp(0.820115115246818);
    msg.setSource(43887U);
    msg.setSourceEntity(145U);
    msg.setDestination(56251U);
    msg.setDestinationEntity(41U);
    msg.timeline.assign("TUMFAUPAZGVUTOMUHUGMKDWXOWPJAUYRTWOXUTTMZVGNZHLPYYKHEROPVEEDGRLYQVJQEWEMKPDBMRZWMYBPXJYLVBVCZWDOZKVKIUBCHBYZESIEGDLPQTBJPLAVQISFQWSAAVFNTOCPZENNRXGEFIIWXCAGSONAHPBRFIJFQSHKHJLOLLODSHFMCJONDYGIABIMXDHCNKUNZMSXXTECRTWFJBUZRCGJYCNGVKIQQRDKFCJASLL");
    msg.predicate.assign("CRDLCAGQFTAFOWKRZZLFGSQYEHYQVTRRVZHOPNABBIDVDZVJGMIEAEGCVHUNTPBUDORPVKLPSKXKWYWMNKTHETWPMVCWAKPGFLMXNUXLJAAFCRQUNYGNBCOJBAWLPBUSJQULSXYXPEUADNHUTEPFZISGXMTDDOTGMIPQZFVWBQOZRIHXIILOZCLLASCXICHKEQWKDFRMXNBIJOFQDMT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZIPXRTZFRUQJBQEOCPERJKPMX");
    tmp_msg_0.attr_type = 13U;
    tmp_msg_0.min.assign("TOSUBYIQKTCCWVRQSKMACUNJMULSTFZKUZGXYNRJAMNEVUEZITYDSJVXSIXYPOWQTROKTAZOPJXMBZVDLGDJBVLEUBGHPKJIWGMCIWRZHQGAFMI");
    tmp_msg_0.max.assign("SBFEAOQKTTCLPZOAUDJYNCZWIHC");
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
    msg.setTimeStamp(0.2310267458458657);
    msg.setSource(18830U);
    msg.setSourceEntity(189U);
    msg.setDestination(60448U);
    msg.setDestinationEntity(241U);
    msg.timeline.assign("CXKTWUJUHFNDVBXIIJVWEGSNLOMSLYEHXEGMIKIZRNZZKX");
    msg.predicate.assign("IZFXPDGISZNZLRZLTMKEZTMTRMQCQSXIMYGOCVQLHCGWVZROGVYTJKYHSOYCDBFEQFNMMEKLYIJCRKUSOFXFBGTPPNXLIUVEWHDJYCAVICDBAANIHSVFWQUPKHXKQKGTFUALKXSIEHLRDUWDXSJUFPNKCXJNOIQP");

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
    msg.setTimeStamp(0.9126496705944735);
    msg.setSource(9946U);
    msg.setSourceEntity(95U);
    msg.setDestination(832U);
    msg.setDestinationEntity(148U);
    msg.reactor.assign("YZGCJOFGRPCLGPPOEXNET");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OBIXRZSZJAHVCQTNWKBBLUNKJJYKKZJMGVDFNFLXSWZJCGQPNIIAFSSIAADHSTGUCIFBHWOHVERVDRZEVMBBNGWOFLZYOLVTXLQREPPTIXIJAVTJHXHUVRFNQLKAUOCLMGBSPLSEZDUUMDEH");
    tmp_msg_0.predicate.assign("YDPXFJOYZNFCAKFSJNOJKWAIGMOGTSRBWYTQWCMERVRHBNIVFMUVEQTLGCGEPAPTDSTACRMWQDZIFSSNYJQUQNKIMPYXZSQHEMLDPFJCSRGZKPUWDKIXNGTRLFKKLLDCFNOKUQKERLHIRXLGBRUABJZHOGSJTDFHHIBNHWUEPAPUFLVIDAXVYQBLQEWRAUIXBMDXGCZSZBCEUDWOEIQAXOYOVVYZZNPBPSVCHWWTYHYC");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7138314971509803);
    msg.setSource(55415U);
    msg.setSourceEntity(53U);
    msg.setDestination(45845U);
    msg.setDestinationEntity(68U);
    msg.reactor.assign("ZQXUQQASJOEJRRLNYZUUKKYKFRJOSATTDNGELGODDDMEMGQWUEWCCHFXGVJAIHKGKTIOOVNBPKTFISWXXJJGYSTVAOYPYVSRMRCLVCWCGOMPFNOMUXZS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BOYYWPDAIEXIVAYTMHJCEWCDENTFKISYDJDYWPYZHDCYCHXNUTRJEUHSGABTHTOQLSOECXFNJVOQDNTDJKHQNQBKCSTTWIUZGREWMUKJUQRFVRSSGPGUFIGOYAKSQXBCWWRCQZOHPDMFDGR");
    tmp_msg_0.predicate.assign("VZJACOCAMKUTWWSHMUNSFOOLNXKFGBEOJBQQSYCEMMLPTOATPKPGMKTQULJRBLVUDZZLYMNXSDFBOBQWPTAXQJICAZLHIKHKMPVYFNEUUQDSIGVONFNXAZBCCZKRFBFWXQJJJPWQWPNGLLEYIHENSLT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ENGJPCEGHKLRULTSZYDJLGNBGHWYWZZEIMPNXWPFHXKZNLJOTBSVOWSUUWDYFQJFWBFAIUXMQEGVSIFUVIRJZGLDPSVUBGEALXIPDIELQZTTPUWX");
    tmp_tmp_msg_0_0.attr_type = 150U;
    tmp_tmp_msg_0_0.min.assign("UTNRQIPEOMUJKBIEAAZBVIBMAMNDVLYJQCMNNOOHSORXYKSIJAVRFYBVTYFFNPCVIRQUTKGHHWUZNUSNTKQWOJJTLZCDWVFXGHRKUBJDOMGJOSGOQLYFMVSVTSDLQIKHD");
    tmp_tmp_msg_0_0.max.assign("BNZCHUJNYYTDQREKMQOPULAHPOIVYYP");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7502115525905934);
    msg.setSource(19236U);
    msg.setSourceEntity(200U);
    msg.setDestination(54182U);
    msg.setDestinationEntity(180U);
    msg.reactor.assign("SAUUVZSFHDIZTNYGHEXVMXEPGDKLKIFYIDX");

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
    msg.setTimeStamp(0.1682054387481341);
    msg.setSource(12801U);
    msg.setSourceEntity(143U);
    msg.setDestination(42552U);
    msg.setDestinationEntity(92U);
    msg.topic.assign("JHJVVENCUMBXJRSWUOIYKXDGHMUTJDMLYXFDYRIGMPZBEULCSMHBQKMJFHBYLICDTFLGZTJWZWNV");
    msg.data.assign("LRTRUYKYDAPGBHUMLENYOWXKVQHHVQWJVPICZAOADIBTOIEMUJQYPJFUDPCNDWCGMLBIEGIWHRZFEAIDSXSAMAGKFIDFCCLNVYTDHKSRKLPZARZMJOWZFPSPCLVFGVGFUYUURBTLZSBYQJFEPNOCMXXBMTOYJJKROVZYNQAMAHTHDHUFSXZXVOYIQNDOXTRBCNAKGGTTBXXSQQEENWPGISFKWLCDRZKOUHGIUTNLNBPCBSJERM");

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
    msg.setTimeStamp(0.6583907360743794);
    msg.setSource(43223U);
    msg.setSourceEntity(100U);
    msg.setDestination(62201U);
    msg.setDestinationEntity(119U);
    msg.topic.assign("LREUGGRHPWHZZJFYXBSBLXUGCEBP");
    msg.data.assign("ZXXGEFHXRYVQXESCGZLBEIIPYPFCTUQYMAPWFCHQYMOZTESDHCWQFRUMCKBLNJWANOUHMDYDBZXQIVMOCFHSFZPHPNZULDLRNEDCGSCSHAUTWRQLNAQEFZKXUZVITZJGPBSTJVSJOBYWUKIRGKMKONKOJTYEDFAMVTWLVHVDRUBPBAGTAZPOWAHEAJTSPKJPWILOHBSEKMRNNLYJOVCWFITQRKIAKNVIJXDUCDSVGXYRGRJMUBGYDEXFQXBQ");

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
    msg.setTimeStamp(0.7220843303628897);
    msg.setSource(46705U);
    msg.setSourceEntity(235U);
    msg.setDestination(28258U);
    msg.setDestinationEntity(242U);
    msg.topic.assign("QVTXGEECOKCSKMWPGQXTAVGGOTBANVRWPYARJSVKQSRGZQJSYJNUEMZEEJPZDWXHOPXAUXDYUISFYTHTBRNGILJEFPVAOTZMCZSQMKINRNONUKRDDJMKPWGZHAFPUNRBCHVIVQFLFXWDFFMULOL");
    msg.data.assign("YCXQWRDINHBCVKDRMIIIGBHMXJLIWOGEUUMLOWUFBROYXASLNNMBKSPZCIHHGENIWYAOTYTLEOKUOSLKILVFVHOYWZLNJTADWUBEGCEEFEBQQKDVGPCZAPQBHGWZZTAFRPMKSPSMDRJJMWSUABLKOISBRYZXXPPCJLOPOAJQNGLYUVEZQDKRDFPSYRHXFHJ");

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
    msg.setTimeStamp(0.4032780662844381);
    msg.setSource(52921U);
    msg.setSourceEntity(45U);
    msg.setDestination(31614U);
    msg.setDestinationEntity(150U);
    msg.frameid = 3U;
    const char tmp_msg_0[] = {50, -1, 68, 68, -32, 45, 22, 86, -90, 63, 72, -7, 70, -103, 118, 77, 123, 123, 37, 37};
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
    msg.setTimeStamp(0.900207816636848);
    msg.setSource(52290U);
    msg.setSourceEntity(95U);
    msg.setDestination(64795U);
    msg.setDestinationEntity(129U);
    msg.frameid = 74U;
    const char tmp_msg_0[] = {-29, 26, 103, 98, 4, -55, -116, -117, 41, -48, 47, -105, -68, 42, 39, -13, -35, -65, -76, -128, 21, 77, -75, -10, 86, 29, -49, 53, -85, 74, 122, 95, 55, -98, -19, 82, -53, -90, -77, -105, 26, -7, 36, -90, 34, 84, 83, -52, -59, 8, 60, -29, -55, -42, 77, -93, 2, 20, -22, 115, 63, -112, -124, 73, -36, -74, -111, 51, -81, -50, 3, -114, 48, -54, -40, -123, -7, 27, -23, 83, -41, 67, -119, 2, 64, -43, -116, 67, 122, -66, -31, -7, 113, 37, -65, 112, -63, -77, 61, 42, -56, 54, -92, -54, -120, -61, -58, -83, 101, 79, 77, -10, 84, 60, 22, 74, -117, 19, -103, 7, -69, 124, -115, 58, -112, -84, -14, 50, 117, -81, 28, 108, 26, -10, 6, 126, 123, 39, 38, 29, 58, -105, 47, 37, 91, 30, -72, -39, 102, -8, 88, -97, -75, 14, -21, 117, 45, -42, 76, -58, 46, -73, 22, 37, 37, -59, 22, -107, 14, -106, -21, 121, 11, 73, 106, 107, 5, -18, -126, -85, 3, -1, -60, -85, 97, 111, 44, 126, 16, 12, 20, -39, 89, -66, 119, -51, 114, -72, 79, 98, -59, -43, -15, 21, 41, 12, -76, -120, 85, -22, 53, -100, -117, 77, 120, 37, 12, -120, -28, -1, 17};
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
    msg.setTimeStamp(0.7715137167853474);
    msg.setSource(34926U);
    msg.setSourceEntity(116U);
    msg.setDestination(35908U);
    msg.setDestinationEntity(80U);
    msg.frameid = 224U;
    const char tmp_msg_0[] = {99, -59, -103, -75, -87, 15, 67, 81, -117, 5, 59, -40, 17, -15, 29, -57, -88, 74, -38, -61, -50, 98, 4, -56, 53, -43, -40, -28, 114, -37, -100, -44, -24, -83, -46, -40, -27, -23, -23, 114, 125, 112, 32, 123, 115, 5, -128, 106, 6, 4, -49, 119, -63, -81, 120, -61, -14, -86, 63, -95, 91, 27, 34, -114, -36, 47, 33, 68, 41, 45, 71, 62, -75, -86, 27, 115, -60, -50, 74, 20, -110, 106, 64, -119, -3, -56, 99, 122, 93, -120, 14, 69, -80, 13, -52, 80, -46, 106, 29, 117, 70, 82, 122, -72, 115, 25, -79, -23, -108, -25, 108, 20, 78, -1, -108, -80, 3, -100, -66, -109, 108, -77, 117, 103, 30, -104, -79, 74, 94, -46, -81, -80, -96, 75, 24, -110, 80, 71, -20, -18, 126, -120, -29, -35, 107, 47, -34, 90, -69, 86, 29, 60, -29, 57, 80, 91, 56, -59, -2, 27, 80, -1, 98, -38, 7, -42, -83, -103, 61, -53, 101, -90, -5, 8, 14, 54, 79, 81, -105, -3, -12, 94, 61, 71, 62, -90, -122, -40, -107, -61, 113, 74, -18, -7, 2, 98, 10, 43, 67, -7, -121, 97, -117, 91, 5, -93, 52, 95, -68, -88, -64, 89, -15, -3, -99, -49, 15, -11, 49, -118, -50, 88, -30, -74, 52, 96, -63, 21, -101, 93, -125, 9, 76, 63, -33, -18, -125, 25, 89, -22, 122, -118, 110, 70, 20};
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
    msg.setTimeStamp(0.5981727211417133);
    msg.setSource(50278U);
    msg.setSourceEntity(79U);
    msg.setDestination(30229U);
    msg.setDestinationEntity(142U);
    msg.fps = 37U;
    msg.quality = 3U;
    msg.reps = 166U;
    msg.tsize = 31U;

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
    msg.setTimeStamp(0.31311813743101835);
    msg.setSource(41013U);
    msg.setSourceEntity(45U);
    msg.setDestination(50393U);
    msg.setDestinationEntity(222U);
    msg.fps = 191U;
    msg.quality = 17U;
    msg.reps = 124U;
    msg.tsize = 23U;

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
    msg.setTimeStamp(0.3692110796836884);
    msg.setSource(13346U);
    msg.setSourceEntity(249U);
    msg.setDestination(21058U);
    msg.setDestinationEntity(139U);
    msg.fps = 118U;
    msg.quality = 132U;
    msg.reps = 135U;
    msg.tsize = 114U;

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
    msg.setTimeStamp(0.08112664548603543);
    msg.setSource(36945U);
    msg.setSourceEntity(205U);
    msg.setDestination(56064U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.49655174393199775;
    msg.lon = 0.6468881815311831;
    msg.depth = 94U;
    msg.speed = 0.9759073046410844;
    msg.psi = 0.4379926789566667;

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
    msg.setTimeStamp(0.03195271168062841);
    msg.setSource(16284U);
    msg.setSourceEntity(40U);
    msg.setDestination(51727U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.28235950909191165;
    msg.lon = 0.7411688035842251;
    msg.depth = 195U;
    msg.speed = 0.8168911892516969;
    msg.psi = 0.03790408439896287;

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
    msg.setTimeStamp(0.5262995669063221);
    msg.setSource(42157U);
    msg.setSourceEntity(22U);
    msg.setDestination(10550U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.6189247077758911;
    msg.lon = 0.8589279326305779;
    msg.depth = 116U;
    msg.speed = 0.7514785831198222;
    msg.psi = 0.8630016893446547;

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
    msg.setTimeStamp(0.24742978040808727);
    msg.setSource(43307U);
    msg.setSourceEntity(110U);
    msg.setDestination(64397U);
    msg.setDestinationEntity(165U);
    msg.label.assign("EJISGHRUVYOETJTUPSPWYXLRKJQLFBONFNJKRUHJCPMABIBMHGTEKFZFQOSUPGNKKGWHLPBXTAXFSLHIAAWPNCJYFZMOTUBCWWXWCPPSVZCED");
    msg.lat = 0.3406559686274273;
    msg.lon = 0.00035057115490744195;
    msg.z = 0.8219878123748474;
    msg.z_units = 75U;
    msg.cog = 0.23627826138082875;
    msg.sog = 0.9348075761916649;

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
    msg.setTimeStamp(0.6878631665652393);
    msg.setSource(35801U);
    msg.setSourceEntity(137U);
    msg.setDestination(38241U);
    msg.setDestinationEntity(139U);
    msg.label.assign("WLJITCMQINLKZSPOFZMXFSPROTKIQWHASSPJOIEABDPBTGUYWYXYTZFHHXWCFUBMBRDJTZUOCDPVXDDNPOSQJKPMILXNFKUKMGBDZZCPSQHWCVVKYZYFTOOJQNAFLGRIUEVMLZNHDJBKWME");
    msg.lat = 0.059544938107585876;
    msg.lon = 0.968723352526775;
    msg.z = 0.08825513200889512;
    msg.z_units = 234U;
    msg.cog = 0.670885229716432;
    msg.sog = 0.8004685576230327;

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
    msg.setTimeStamp(0.33896271048093174);
    msg.setSource(46138U);
    msg.setSourceEntity(21U);
    msg.setDestination(23302U);
    msg.setDestinationEntity(64U);
    msg.label.assign("QUASPNBJZHPELVHWTHHNIOJPYFKQCKQMVLTZKWTEWNFSFAMABTDYLEJKUJUVRBMYYOMIKEFTGJWBDCIANHVZSPCOWLXBOZZNGXOQADSFTBMMUBNXIWJDEUIHRORZIZHJHYDSGXAXEYRSUGQPZCSOYGWTIQWPPMPPMUAHIFFWVLLUUGHMCKOKKLCVXSZGNQREJXAZSCDBNSXVECFVROBFGEFCKCNXIDXQWTYQJYYORTJRNPVELGR");
    msg.lat = 0.28266891903180036;
    msg.lon = 0.9485287034485905;
    msg.z = 0.9205578469476592;
    msg.z_units = 98U;
    msg.cog = 0.6830611690815129;
    msg.sog = 0.8544747353792327;

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
    msg.setTimeStamp(0.1256506740825285);
    msg.setSource(55244U);
    msg.setSourceEntity(124U);
    msg.setDestination(17119U);
    msg.setDestinationEntity(61U);
    msg.name.assign("RKNBXGNVIJXORJZFSLHGQYSERAV");
    msg.value.assign("XIRKLYGPJAMGBGPKPIEVWIWGSTBTXDSBWMQSWPYRMVTJKQMJNOCDNEANGDDDREMRKCDZJEZURDAJESXZIKIJUQZNDLBGMBLYVVEBORZTKUJYFCOGEYYMCQIEBAULMSZHZERKDUJXLZNCUAFTBSWHUQTVUVRLTSEPVOOWHLGTOANJVUFJSHYLCFXWPAGAWNWFF");

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
    msg.setTimeStamp(0.8162358498503168);
    msg.setSource(25135U);
    msg.setSourceEntity(119U);
    msg.setDestination(49008U);
    msg.setDestinationEntity(156U);
    msg.name.assign("XSFYILPMXTNMCPGNTFHIENVHWFKZBJTNZCNLWNRUHDUFNQWIFPPZBUYMJPVMEBTJDKXGVLZFRAUREYPYCMNLTODYOWDTCKJQ");
    msg.value.assign("XROHRQXQJKNONDFCDAAKFIEBIEQDWGRIGUBURAJVCCLNXMDXOUQFNKWMDBPOZGIITITQRVJCPNYYZZUJWYEJKFFUFHVLBFLWMVXYRUWSXNWTEHMGJRLTIDIHYTAYZLHAUSOAXQHOOECOMRPMHEKRLXSWLEBKTZEGCMLWUAVVWKABBINASAPBFVRJKZNMJCYULYJGJSTGXEDZBNVPWTSVPHYIFPLZGOQDSYUPHVSNDSEOQQBMDCTHXQPPS");

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
    msg.setTimeStamp(0.9522233381494757);
    msg.setSource(58652U);
    msg.setSourceEntity(251U);
    msg.setDestination(13570U);
    msg.setDestinationEntity(137U);
    msg.name.assign("PHYYQKEEHXPJVLNCOORCPQYLKMKMAGZEFFZYLREPIPHLKICFJURXHUSZZCGVXNTRPWTTLTEOWUUMKPOVCSZINQRHRVETXENTZYRAIGXDVMJBDJAYYVXIFQRPUWAISAMFFJHFSHQNMNVBSIAQO");
    msg.value.assign("GCKMFREZQYECUMHIIVBXINNKBMQOQRPUZFOAJNGPSJAPIVOIXYTCWUQOAN");

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
    msg.setTimeStamp(0.6814568289578208);
    msg.setSource(33401U);
    msg.setSourceEntity(27U);
    msg.setDestination(19435U);
    msg.setDestinationEntity(217U);
    msg.name.assign("RPGJXRCUDCIQDSDPHAQTZIZD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ELCPOSGCUTPRRAPDYRIMMRILHABLT");
    tmp_msg_0.value.assign("ELSFXGPYJEHIZSLFCGVOAOUCONCGAJYNQUWGIBFKKFSVPUJODNRDVNXNIAGWEVAXADTMWTDRRGOZRXLKPOEANTITSSKLKRYHQGUPFLLROAIQVQXXHRZQWBKZKZDFWBMVYEJMJUEYCBXLNCMAOPSHPETETNZYGCNRFAVLEYRBMQ");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7275475289696997);
    msg.setSource(32812U);
    msg.setSourceEntity(96U);
    msg.setDestination(47709U);
    msg.setDestinationEntity(153U);
    msg.name.assign("NIGTGKZBMJHFFPGLUGONSZVQWKJCLAPWUDPELAEQBPRXYTQCRONTBVITCIUIQXPCSDNTXORTZFVHWTDCEWCXBJFYRHFOCIHMCLURNTDRBOHZGEYVWJMNYBVGPWNJPLSVFAHVVHNEQIDMYVELUMRZDUHEKJXGIRCUGBBUWSKGXBSQFGYWAEAJLOWMFPSZXTMAZMAHYQZROQSWIKDDBKSXXOKUQLQDKSDZYP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FAZIJCZPCTYRCATAEPOSDPVGXOYPITKNJTVEFWXZFGZWVZUHDDKEHAZLYGAQIBYQZLLHVFSFSKKXOICXCCSHGPYUFLRMNJKMVXOBZCNVHJWQMWUSSCKGLUNARMOUBTRJTOQ");
    tmp_msg_0.value.assign("TMDZPOAEFUFPYDPVDDKMJUHLB");
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
    msg.setTimeStamp(0.17896681458385277);
    msg.setSource(1218U);
    msg.setSourceEntity(245U);
    msg.setDestination(13355U);
    msg.setDestinationEntity(41U);
    msg.name.assign("KKWRQFIPUJUEYABGIIYOFHUEPDIHJMDTVVVLWNOPECDQMRBYRRLU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EXMQTNAXUBENTJHRFJQSSHVUNEBGYWTHBVOOALKMBWWUGYGFOLTRTOGXDGADYOVIJXH");
    tmp_msg_0.value.assign("ANMHSXSLRVDQYLQIFBXTZVZXIKZBH");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5977241629570971);
    msg.setSource(47498U);
    msg.setSourceEntity(131U);
    msg.setDestination(52205U);
    msg.setDestinationEntity(81U);
    msg.name.assign("RHIYCSVQHMKNFGJIZZNWGQDQECEPOQZYEYCKSGJNTWDLPVWCTMCZXYGVDXWVSFJDRCMVKTBZIYJRPSKNNLBKDVTKZTODUHSZFRAHXILQHGIMYRAWMAJJRBUWHBBLMBWFACFXOEKUWQLUBUXEEFSUQYMLFFDYZITXMVFTTWABJNOAINVWROLAASGOYNHOLBUIJQSICJ");
    msg.visibility.assign("PBLNKQDYSTJNBVOPGPPXMECNPWXQHVIQSJFAOTBHJLWDOUSGNDHZSLMPVQZTMGCUTWDNGTCAZSYMRPYFRKHJDWMFMOTUCHVGRRLCNKZKVKVWLIIXODVDCJVZYANOBPZXBIFMZGLRMQOIVTEDQBQH");
    msg.scope.assign("DYQBOSFMPTZBUEXFRXGKWSQHFVAVFJOLNUHPRHJNKRZUXFEKEEPKGNYJVWIQKCKDWSUZGBQLXNXCHSDZYARGXSWYHDIUMWNLDJBUKTIJDBFPPFMHLZGQJIPMHOYRSTIDVCAAUTNRWPFQAMTZEQBDISXEORJJKYTIRSYXLYDNQSMEFLIQOTBTTOGZLUBVASAUELEHNGYCTJLDRQFVAVBAWLOEPMPICMNNUYMRMKCCVCJCXWPGZW");

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
    msg.setTimeStamp(0.8016697835673249);
    msg.setSource(6705U);
    msg.setSourceEntity(214U);
    msg.setDestination(23892U);
    msg.setDestinationEntity(229U);
    msg.name.assign("PWDLXEFLCCPFCMEZAVIPIVRNJGKTTVMUDYADRYXCMSBGYZAHRZUCMUSD");
    msg.visibility.assign("GDRBIMJLMWXEHJWMZXWYXFLKPMYFPRGYHBAJEWRPVFEFUEFTOTZNEXCMYXZQJQKSTLKBRULOOUUDFYAABYHHGRQVLCKDNUUUHVEHSBNBCNHJYZSPLOPQVJGSERAADBVKEGKLZVLTPKWRXSZWNVPXWFINCSSDKSAAZVOLKIIPCWPXAOFDMFZTARCXQDEBUCJCUHGGXQYIQGYKBTGWOZJTTIWUBOGCRVIYDSFJCNNSQMMHADIEJZPIRTNNQV");
    msg.scope.assign("FXWHWYCICAYKPTRBQDZDPXXADUEMDBYJCYJUZGELTMCYNFYJUUPP");

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
    msg.setTimeStamp(0.09115578274125125);
    msg.setSource(14210U);
    msg.setSourceEntity(99U);
    msg.setDestination(44317U);
    msg.setDestinationEntity(5U);
    msg.name.assign("BNFHFLFTGISMJJVVZRNSUXYPUDASJBHWCCVHOEHZGZPCBSRRBJVYBXXALAEEIQAOETADYOSBHOUWKINSCGZAOQFLTKROZRCIEWPAFXLWQKKAOBNRZEDXJFGIJIGGVQMSLISDTFKKGEDDXPTMLILWWAETOSHXNWTULVBPYYOHZWNZZHVTGUMJPUUFMNKPGJVQVDEQJBWYXCNDMGNIAYMHCRKRQXRVYM");
    msg.visibility.assign("FGMVXDTLJBDXCHETKTJMTZIUDKCWOGGUZDJHAHDUPGJVWXDCIQGDAOMTVYRCYPHXRGQAMQSMCQLUNASERNAEOSVQCGRIZZCJVLPRRYIVQNZLRSHUZPFZXKVCWLUNQNFYBYWGKWTLMMOAYEXOBFJQOFMPWNYUIYEDKLTBPNXRWYWFJKGMKASOPHFESUOFAWBARISEBBLSQZTHVDIZXWTBPSPIOGHHHOJJPYXRDULVIFZQKIAK");
    msg.scope.assign("AEDCDWPFMVGTPKZKJJOVSTSWHGAYNLMRBPESBPWCOIFEFWUCHUHLGOLJIVTKZIDZIZKHDTXRAJOZLXYYAJHEYFIRJDMNLCVAHADHFFTSJRXPMGKGBRFFQFWCDQTMNWMWYOCUUHRAPMAMWULKRNEJIQUSCPNSYYHNHXEBQGCXLUYILZZADWSQQIVVSPQRBMRKDBATUQBBKPVUKJUCJTGXPSOVNOZNGEGGEILRCWZXOKLOEFDVT");

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
    msg.setTimeStamp(0.9097294438374042);
    msg.setSource(39879U);
    msg.setSourceEntity(37U);
    msg.setDestination(24975U);
    msg.setDestinationEntity(151U);
    msg.name.assign("VLBBSGSUDHFFHYFGEVIWZMSIPYRAAFQRIEWVMQFKPOCBFOBEFHBSMWG");

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
    msg.setTimeStamp(0.5550155075737105);
    msg.setSource(38758U);
    msg.setSourceEntity(248U);
    msg.setDestination(15514U);
    msg.setDestinationEntity(219U);
    msg.name.assign("MFOCAGFIONZPSTDQICEFJCALXFWEMDJLHOPHGNURODHWEGAZWLVJZBWYSYNUCQWYYEJXMDKMPQECAQQFIOLRJNHXVVNIKEZFQIZVZRUGXUDFTMGTDNYYPKBKIIXQHCUBBHGFBWUOCKXNEWTJNAHBHAPIRZVNFKELDMEOXRKUAGTRVLPCTYXSQWVIHBNSYSMDOZRJ");

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
    msg.setTimeStamp(0.73527483475929);
    msg.setSource(61922U);
    msg.setSourceEntity(168U);
    msg.setDestination(28924U);
    msg.setDestinationEntity(28U);
    msg.name.assign("KJKCRWWQFGPEGJKZONHHHDVPCGICUSIFEPZSDVCMJEKTFJSYADNXEQLAUPALEHWFFBWHKRGCYBY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IMGFTEJLFSWVIRXYPCOKMLKUWWZBUTMCVGICQOJJKTNXQEIDLCIPYGWSDFNSTANUZXMJWWPBGSCJBBQZIWDZZGLXQOBAHGAUXDERXNKHHHMJKXAGZTOKHDVZDHOAXPOLMCLQN");
    tmp_msg_0.value.assign("HYDQMOFRILPZWBDSOEFSVJOQTLORLMKNAGAVGELNXSNHBRSONADJIBYWTRQLNIVPTMLWVKSXMTGOE");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.00529977148509464);
    msg.setSource(42809U);
    msg.setSourceEntity(223U);
    msg.setDestination(56805U);
    msg.setDestinationEntity(178U);
    msg.name.assign("CGFDNETNUOMMROJDZVSUNTBRLQOKRIFJPFTHEVQIHWVPJIWYTBTACZDJYKXGGERAIXTMUNGARPEFLFSBDNEPSRUHJULIRSASGMMWKEOKXZFFAPEZQALBEZKYEJPCHUOUZTESDKTLUKCGJSQQZWSIKHTHDILSZBGVYBRJAXBICWQNBGRXHCSWYGWYVCICBKCDJCQMXNOMOKOXYNHMTBVLVPLFOYQQXRUDPAIAWMHVWNYZWZY");

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
    msg.setTimeStamp(0.500016468483381);
    msg.setSource(44265U);
    msg.setSourceEntity(33U);
    msg.setDestination(35693U);
    msg.setDestinationEntity(94U);
    msg.name.assign("VIAIQOANYMBUHXLDVQHAQTPCFQEKYZMUPFDOWYMCGELWXTKRRWVIROMANIGDGBJQVLFPCCJZKYBIQDCJEYBKQGVPROKOHLIZUGTCEPCUFZKPJSSGMSTZXOLHAETNWSOWXTULMXCYUJZDIEFXTGUBDQYRPEHCFYDYXOZD");

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
    msg.setTimeStamp(0.24049013823808718);
    msg.setSource(16452U);
    msg.setSourceEntity(226U);
    msg.setDestination(63755U);
    msg.setDestinationEntity(139U);
    msg.name.assign("SHRTKHCFWNUIWFWORIVCXIMABUPXKXJMZEPOJTZLHSDABYEVQUDWAGUXFVMZURNGOLESWZPLOMUPGCXHMHMBMJQUFEUBEZUZCBVEDGFGQJOQHPFJIBLVNLPEZYRQLQDWPYRCXKKCCCZYFFNRIYTJUNQMPDLKIZOEHSWLKSNIOTTEAGCYAO");

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
    msg.setTimeStamp(0.4753178219397518);
    msg.setSource(22311U);
    msg.setSourceEntity(201U);
    msg.setDestination(9859U);
    msg.setDestinationEntity(223U);
    msg.timeout = 3130114174U;

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
    msg.setTimeStamp(0.33863304762308577);
    msg.setSource(36266U);
    msg.setSourceEntity(189U);
    msg.setDestination(35358U);
    msg.setDestinationEntity(197U);
    msg.timeout = 2701860658U;

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
    msg.setTimeStamp(0.3438645815570257);
    msg.setSource(23934U);
    msg.setSourceEntity(26U);
    msg.setDestination(30827U);
    msg.setDestinationEntity(91U);
    msg.timeout = 1088501361U;

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
    msg.setTimeStamp(0.7938665375729446);
    msg.setSource(25261U);
    msg.setSourceEntity(100U);
    msg.setDestination(23931U);
    msg.setDestinationEntity(178U);
    msg.sessid = 9324866U;

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
    msg.setTimeStamp(0.864955862886794);
    msg.setSource(53891U);
    msg.setSourceEntity(240U);
    msg.setDestination(58611U);
    msg.setDestinationEntity(197U);
    msg.sessid = 2005779492U;

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
    msg.setTimeStamp(0.34872325178823727);
    msg.setSource(37132U);
    msg.setSourceEntity(140U);
    msg.setDestination(5442U);
    msg.setDestinationEntity(103U);
    msg.sessid = 2450101414U;

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
    msg.setTimeStamp(0.058226153519877255);
    msg.setSource(1568U);
    msg.setSourceEntity(159U);
    msg.setDestination(11037U);
    msg.setDestinationEntity(25U);
    msg.sessid = 268161832U;
    msg.messages.assign("QEGZEZGMKUYVOGWVWKBSWFNFINEBNZBTUJZCSWRABZBSYUUTORRHAXEVDKWSQNGIBTSDLERGZLCYXYWOGGFMHUZSYZDPNRD");

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
    msg.setTimeStamp(0.13241301949539275);
    msg.setSource(54091U);
    msg.setSourceEntity(138U);
    msg.setDestination(51677U);
    msg.setDestinationEntity(97U);
    msg.sessid = 214525220U;
    msg.messages.assign("SBOYPEZHNZXWHGVPEURFQWQXCONFLFYHRIFBACQQTHRCFDNTOPOYJEJOWIURSBWADARAZLAUNIWNTUGKVSLNOONQAHJXMGYDASKEK");

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
    msg.setTimeStamp(0.9351146468686815);
    msg.setSource(10791U);
    msg.setSourceEntity(73U);
    msg.setDestination(63502U);
    msg.setDestinationEntity(218U);
    msg.sessid = 2080984593U;
    msg.messages.assign("NUMZVKVEQIPOBSFMLAOCAETOWKNGRVNJTQWUEYEUFRFQCTZGEHIIHUEDUYIRGFRVFAAJDWSPRINPOYCSGRECYXYAPCUSXHTLTPZHLBWNHKNUXXXWBPFQLSZLMTXPHTDIRWDZQCWUJHUGVHIQJ");

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
    msg.setTimeStamp(0.49292492220006945);
    msg.setSource(49845U);
    msg.setSourceEntity(189U);
    msg.setDestination(3913U);
    msg.setDestinationEntity(109U);
    msg.sessid = 1126328815U;

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
    msg.setTimeStamp(0.5453705718643587);
    msg.setSource(45738U);
    msg.setSourceEntity(113U);
    msg.setDestination(28478U);
    msg.setDestinationEntity(69U);
    msg.sessid = 2154251222U;

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
    msg.setTimeStamp(0.873375877278985);
    msg.setSource(35977U);
    msg.setSourceEntity(60U);
    msg.setDestination(54468U);
    msg.setDestinationEntity(175U);
    msg.sessid = 3171109661U;

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
    msg.setTimeStamp(0.14141519339341713);
    msg.setSource(64036U);
    msg.setSourceEntity(112U);
    msg.setDestination(44102U);
    msg.setDestinationEntity(166U);
    msg.sessid = 431653610U;
    msg.status = 200U;

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
    msg.setTimeStamp(0.009669373385188917);
    msg.setSource(5095U);
    msg.setSourceEntity(227U);
    msg.setDestination(33093U);
    msg.setDestinationEntity(199U);
    msg.sessid = 3469865011U;
    msg.status = 83U;

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
    msg.setTimeStamp(0.8268516742924548);
    msg.setSource(5141U);
    msg.setSourceEntity(162U);
    msg.setDestination(60601U);
    msg.setDestinationEntity(227U);
    msg.sessid = 4026199075U;
    msg.status = 17U;

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
    msg.setTimeStamp(0.4512164902167972);
    msg.setSource(2560U);
    msg.setSourceEntity(87U);
    msg.setDestination(38682U);
    msg.setDestinationEntity(186U);
    msg.name.assign("INHNAIQXXTNPFXGCGBQXZHTKPZUOJXRIEROERVUXLNGXQPYJSUJSBFEPFOATWMJPOTHZWTVYTMKDCUIKWFPROLLDLFHNSEBMKJXUSAVHBVAMHAWGQIRIGDQABBSRRQLLVIZRTWANIMYCQPXDJNHOCQDQJVWICBGKCZDUFLLZNBHVNSYTBSZRZLJOYOSWCWAGKHDEAAYCPRHCMYTUOFPIEMEJGTMYSWVQXDEZEBFFKDYUJGDSUCOVYPEMLVGZK");

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
    msg.setTimeStamp(0.6624944047251822);
    msg.setSource(29985U);
    msg.setSourceEntity(122U);
    msg.setDestination(30391U);
    msg.setDestinationEntity(72U);
    msg.name.assign("PCADITATSMQCEYMNPIKDNMACOFOBINBIIAXZTBRBLJQKDNVZFGGKZTOTMXFFUOJMSXVUWOLVJZVJUECCKWHXDJGUFLBVXFRHDGFVPTMMKLXDSLMAWZXIHRRNQVYHLELGEVBUULVWZECNAORPYGBOHMSZECCIZWTQUXYIUYSTARQQTOYPYKEJRQKWGGEECZSHQDNABRPHWHZDYCSJNHTRJUHOLYNPOFPSMLSKKYWGBWDIUX");

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
    msg.setTimeStamp(0.19223606228946288);
    msg.setSource(24323U);
    msg.setSourceEntity(134U);
    msg.setDestination(6569U);
    msg.setDestinationEntity(241U);
    msg.name.assign("RXDFYFKEJPWOKJDFRATIIPMPVBNOZPCLIHSZUESKDDEGTOHGXBETZPPYYJSZRDLMKOFNMHVMSQRFVFYUDKJIPN");

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
    msg.setTimeStamp(0.7098769946058938);
    msg.setSource(28551U);
    msg.setSourceEntity(245U);
    msg.setDestination(3230U);
    msg.setDestinationEntity(74U);
    msg.name.assign("VOUHAUBLRMSNYBCWESQAGFOJZDZOYHNEABXSWWZNOXTGYQJGHZKSQIQMAOEZMPIVHDVKWFHAMCBJNLQUJXTPHTXRKLCPN");

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
    msg.setTimeStamp(0.9020038127167925);
    msg.setSource(16380U);
    msg.setSourceEntity(131U);
    msg.setDestination(6442U);
    msg.setDestinationEntity(67U);
    msg.name.assign("AHBGVMLOSKDFQTGTZWYNMWIXZPRPQIKDVIUDGHKTKRAPEHXZNYTNLMXANCQEMPBAHVCYTECUYFBBBMFEYAWOVQZKFYNWGTYLUFCGDPEVSKDKWKJ");

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
    msg.setTimeStamp(0.5470455310554276);
    msg.setSource(65512U);
    msg.setSourceEntity(112U);
    msg.setDestination(30025U);
    msg.setDestinationEntity(142U);
    msg.name.assign("JMAFJWLPGUWICNLTNISRBQSSKQBGAOXVHFNQUGJPOLDADEMWVPYBUFUWZEHSLNYPZAPRZAOGDSLESZRRUEXJROFKLGHITMBDLEHQYGHIKXRF");

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
    msg.setTimeStamp(0.41529107033846535);
    msg.setSource(40922U);
    msg.setSourceEntity(106U);
    msg.setDestination(20247U);
    msg.setDestinationEntity(116U);
    msg.type = 179U;
    msg.error.assign("TRBFZYVEPPVEDPMUXXAPDBUCQNIEUTORQGPKCIZIBIJCHORDSQMXPWFOSSZVKREGWKAPGHJKDXJPYFCPJVEDMAWUYDGFTXLYCVNJNTTBWCRGLLMCQSBZNOHEGAYIIATMXBAMSZDMIUWIBQGEZFLQRNTYBURISDBKSTCZSLVFRZQSBXEUQWKGARS");

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
    msg.setTimeStamp(0.5920375453883124);
    msg.setSource(31052U);
    msg.setSourceEntity(99U);
    msg.setDestination(8212U);
    msg.setDestinationEntity(20U);
    msg.type = 125U;
    msg.error.assign("XMENMUKOGIRLNJCHDGADYANQLEFAYVCQMTXZVIKHVW");

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
    msg.setTimeStamp(0.830045541979638);
    msg.setSource(37827U);
    msg.setSourceEntity(170U);
    msg.setDestination(6049U);
    msg.setDestinationEntity(14U);
    msg.type = 37U;
    msg.error.assign("DVTNUZAKFIA");

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
    msg.setTimeStamp(0.6811228608694979);
    msg.setSource(53700U);
    msg.setSourceEntity(46U);
    msg.setDestination(23967U);
    msg.setDestinationEntity(129U);
    msg.seq = 2276U;
    msg.sys_dst.assign("YYAMVVSKMWRWEIIQRIQPQTNJCWARVERIXZXPCAYQUAXTHUEIOOUDGCANYPFBTSQENPRWKWHLUBBPHLNNTLAXYZSGCLNKWJMIOXFUKBCCBLJUYGFKFRMZUGBBKELVTNELZTAKXIAQFDMVOEJPGSOSFDFOESNKXBDT");
    msg.flags = 88U;
    const char tmp_msg_0[] = {55, 115, -37, -60, 126, -27, 126, 83, -122, 89, -112, -121, -94, 76, -111, -5, 32, -38, 107, -109, 75, -12, -43, -10, 63, 48, -107, -44, -29, 125, -3, 36, 106, -89, -67, -24, -24, 95, 64, 4, 45, 79, -53, 114, 19, -58, -120, -68, 21, -49, -89, -128, 88, -118, 51, -70, -56, -51, 115, -53, -22, 27, -10, -34, 89, 108, -36, -114, -99, 67, -41, 108, -61, 104, -27, 81, -95, -18, 46, 109, -120, 27, 35, 51, -73, -125, -69, -7, 38, 18, 26, -27, 77, -4, -79, -12, 35, 20, -116, 115, -77, 121, 64, -62, -125, 45, 123, -89, 57, -82, 96, 61, 44, 106, 30, 125, -53, 83, -74, 0, 43, 25, -100, -62, -31, -7, -63, -6, 17, -128, 77, 87, -109, 44, 23, 111, -42, -56, -26, 30, 20, -121, 48, 107, -50, 16, 24, -55, 33, 0, -5, -34, 41, -123, 94, -6, 6, -51, -8, -106, -41, -107, -28, -54, 108, -14, 63};
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
    msg.setTimeStamp(0.28785486689607964);
    msg.setSource(59943U);
    msg.setSourceEntity(230U);
    msg.setDestination(14593U);
    msg.setDestinationEntity(35U);
    msg.seq = 61683U;
    msg.sys_dst.assign("KQKBOCYQUJNLATCYYWRWGUQQYIVJCBUJNVXUEHESLIMOPGEXXCRGQFMRFMMMKVOUEERZKNJSVZNTGPSBPDZFMKXSWQJYVUWXWNUTXFLAURVCTKQCSGLGMVKSOPRSDHDWBJDGRPAHIZJOBHINDBEITIIVOHAODXDQOTLEDVBMNWTEFOSKARHIZAMPFFGMJZTYJHAASLYAFWPH");
    msg.flags = 131U;
    const char tmp_msg_0[] = {-48, 36, -14, 51, -51, 15, 88, -82, 50, 13, -56, -122, -27, -22, 48, 103, 81, 74, -8, 95, -108, -84, 0, -95, 42, 110, -48, -49, -78, -107, -7, 42, 54, -56, 91, 77, 118, 64, 32, -52, -84, 94, -11, -47, 47, 72, -97, 72, -47, 16, 48, -66, -69, 109, 107, 107, -67, 28, 52, -56, 49, -21, -94, 73, 80, 74, -105, -124, 80, 22, -75, -21, -91, -118, -104, 20, 113, -42, 109, -45, -67, -79, -3, 23, -74, 100, -3, 28, 65, 10, -103};
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
    msg.setTimeStamp(0.9342087333504142);
    msg.setSource(35733U);
    msg.setSourceEntity(163U);
    msg.setDestination(54236U);
    msg.setDestinationEntity(212U);
    msg.seq = 7353U;
    msg.sys_dst.assign("YLSENCGKMBXQMXAZPDSVWFNWLIZTGTMZAQGZ");
    msg.flags = 89U;
    const char tmp_msg_0[] = {-32, 59, -52, -41, 95, 19, -34, -84, 93, 84, 48, 64, 72, -55, -116, -106, 61, 6, 74, -98, 29, 51, -100, 112, 116, 40, -44, -48, 69, -87, -66, 12, -78, -47, -67, 15, -81, 79, -126, 61, 85, 1, 1, -31, -43, 19, 54, 31, -127, -104, -72, 114, -104, -113, -107, 45, 111, 24, 61, 44, 35, 33, -63, -80, -63, 41, 45, -5, -31, -20, -46, -44, 10, 20, 33, 78, 80, -126, 21, -47, 47, 27, -126, 7, 73, -6, -80, -72, -20, -122, 83, -104, -76, 101, 118, 49, 105, 88, -7, -97, 69, 93, -70, 103, -82, -90, 68, -61, -17, 67, -96, 16, -98, 8, -11, -72};
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
    msg.setTimeStamp(0.15389962937136226);
    msg.setSource(9710U);
    msg.setSourceEntity(18U);
    msg.setDestination(4886U);
    msg.setDestinationEntity(164U);
    msg.sys_src.assign("SBVVUCLAAOFPYWKMXMOSXVCRQZJFHCUEWTOTAGCPNSRPRWOLNOPVKKUBXIMNGZZRWTQEHGSHCCBJVIKZYPNGWHQOBSVREFAIAUNEFCDPXRUANEWUHQTFDEPGJKKDSZFR");
    msg.sys_dst.assign("TPGMSDNGPTVZSCJUMUOVUTNHRKOYDSEFWUQFYNEONLLCWFXMIEKAXGANQCJYRVIQDBLWLTETLJFGTWYCIARLBOOHGDMITQIXNQVRCQDSEBXCKFVPRJZLWSHGUWZIIPZFXBRZGQKYJBPBJJGXEDIVLUEGIAEQXJHQPRSCO");
    msg.flags = 49U;
    const char tmp_msg_0[] = {59, -77, -25, -80, 116, -46, -11, -56, 55, -66, 43, -75, -80, -13, 43, 48, 124, 87, -20, -9, -39, -22, -45, 105, 68, -102, 63, 51, 43, 58, 49, 104, 101, 54, 55, 48, 121, -36, 104, 77, 97, -50, -72, -12, -24, -38, -115, 115, -95, 90, 31, 97, 90, -118, -2, -28, -94, -91, 44, -81, 55, 36, 47, 53, 96, 94, 40, -50, -15, -117, 50, 60, -113, 98, -112, 85, 11, -107, -88, 117, -23, 122, 12, 67, -78, 34, -5, -122, -124, 91, -47, -46, -7, -68, -104, 96, 11, -12, -2, 7, 116, 53, 34, 77, -72, 109, 63, 92, 74, -125, -32, 23, 67, 77, 104, -4, -91, 78, -52, -100, -66, 79, -23, 105, 42, -6, -63, 11, -114, -110, -86};
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
    msg.setTimeStamp(0.6329143353236404);
    msg.setSource(62097U);
    msg.setSourceEntity(246U);
    msg.setDestination(25347U);
    msg.setDestinationEntity(98U);
    msg.sys_src.assign("BOGUXORWRHAZSXEEADJOWKFAJXPCWYYLRAZSXLKILTOMTAINMDGHYKGJAFYGBOVWLLPNWRXFLDCQTTESHGHJZDZICLXQLUTVEETVHDCOWVQTMNUZGBKNUKYQ");
    msg.sys_dst.assign("HPDLOPLDJDBGJGKZYNWFLTLCVXXXWUNJSPABHRGVCIQRRDZIVFPXAYQXLMZERWZFPBMUJSAOVIRUIQYCTARZCMNVFYRKOLGUHIRAOIQJBYAITLWDERCDVLDIGUJTFAMEEBXFWSYNZVUZSUHHBCPNEKZBNWSCGSZWKYQJLKGOHOSFVNHVXOTSDFOYAQBJMWADUPIF");
    msg.flags = 221U;
    const char tmp_msg_0[] = {-59, 60, 80, 37, 53, -63, 17, -52, -111, 74, 49, -98, 106, 16, 4, -26, 22, -91, 58, 11, 83, 19, -32, -53, 65, -114, 61, 30, 81, -55, 101, 58, 119, -90, 73, -26, 3, 63, 72, -78, -6, 68, -60, 125, 8, 108, -50, 22, 23, 123, -47, 1, 87, 30, -45, -65, -75, 65, -57, 35, -57, 54, -90, 81, 39, 72, -108, -106, 16, -105, 88, 4, -122, 40, -42, -80, 58, -127, 76, -106, -34, 98, 3, -80, 65, 115, -120, -49, 92, 26, 91, -118, 50, -77, 74, -21, 42, -100, 68, -19, -18, 33, 24, -74, -76, 57, -66, -97, 106, 16, 52, -94, -27, -56, -37, -41, 109, -88, 36, -14, 124, -58, 83, 90, 56, 28, -81, -95, -34, -2, 99, 58, -108, -15};
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
    msg.setTimeStamp(0.1908781441543821);
    msg.setSource(5210U);
    msg.setSourceEntity(237U);
    msg.setDestination(33816U);
    msg.setDestinationEntity(118U);
    msg.sys_src.assign("KNLXONMXACRILOJUSLDOPOZZENWZAFIAFQNPMXFJJZCIMHVYPOOXZGQTQYWYQDX");
    msg.sys_dst.assign("XFPJFYCAVXGPORKNGQCODRHMVDXHYWKFDVTEJACBVRUFTQDTDEJKOTECWPRQPZIDEFDLLNPEIBOZQWYQKSSYHGYESYSPAHFZOIEASWSMUTFSKOFGLLAIBRFXYAJGKNGTLTVLVDLWKIZMHUBBALNMOMWQCJVPEXPYRTZANCKF");
    msg.flags = 214U;
    const char tmp_msg_0[] = {-102, -92, -5, 83, -75, -26, 123, -26, 72, -28, 14, 78, -101, 105, -86, -111, 99, -97, -21, -118, 13, -36, 121, -18, -58, 68, 10, 46, 99, -32, 7, 122, -60, 91, -127, -78, -33, -12, -88, -64, -43, -79, 112, 109, 90, 95, 44, 80, 22, 63, -65, 124, -16, 95, -18, 106, -66, -3, 116, -4, -11, -59, -35, -27, 6, -57, 99, 116, -49, 62, -79, 69, -63, 107, -65, 119, 112, 34};
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
    msg.setTimeStamp(0.22858274668441303);
    msg.setSource(19372U);
    msg.setSourceEntity(94U);
    msg.setDestination(18141U);
    msg.setDestinationEntity(53U);
    msg.seq = 61216U;
    msg.value = 32U;
    msg.error.assign("AMUJWBHGKQONTKBTIWFVYCNGGDOESFXLHCOPJAOYDYXSQZXTYCBPGRVCJLUQAGIGBISUTZMDWZMCKTQMKOLTVILNUUUKRHWPVCAZNDSIVOEHWUCIWSQYNKPAVXRPRBYFSMPSFUBXVOFYVTNPFDEEFABJKETEKBXHFAVIWAUZIN");

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
    msg.setTimeStamp(0.19235729255098488);
    msg.setSource(20874U);
    msg.setSourceEntity(62U);
    msg.setDestination(718U);
    msg.setDestinationEntity(164U);
    msg.seq = 48156U;
    msg.value = 154U;
    msg.error.assign("TAZIAZNOLOZOWXNLSMCQLKFXIJIKGRJDY");

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
    msg.setTimeStamp(0.6316074205620004);
    msg.setSource(7618U);
    msg.setSourceEntity(79U);
    msg.setDestination(43605U);
    msg.setDestinationEntity(215U);
    msg.seq = 56729U;
    msg.value = 206U;
    msg.error.assign("DBWLCWPOWPWBNJTVLTOJYLUJMSCKBINBKQAZICLYEGDIWPNQJODQWXDNLOHQRILROFAELDHZFPSBFRNDEBBZPCIORUGFKUKVJHTGGVTDJNETXYUARKD");

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
    msg.setTimeStamp(0.6820944516131855);
    msg.setSource(20598U);
    msg.setSourceEntity(229U);
    msg.setDestination(43375U);
    msg.setDestinationEntity(238U);
    msg.seq = 8771U;
    msg.sys.assign("IOMWYTRDIJRPBXTOCNAVMUZTQXWQWTIXZZUZIPNTRDCKUBVYSOABJDDKTFPNSVYFXRIYWBXUANLR");
    msg.value = 0.7575416833339991;

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
    msg.setTimeStamp(0.8789780272599289);
    msg.setSource(7874U);
    msg.setSourceEntity(25U);
    msg.setDestination(12906U);
    msg.setDestinationEntity(45U);
    msg.seq = 28376U;
    msg.sys.assign("OZHXPGINTJXVFDQUYPEKHZIOIBBOWPTULHNAOSJHFGKYNULUKGRGCCBVQZGQMACMDEKRGMYMUHTFYMOLOMHUZLLDJSEQPEXNDNFQR");
    msg.value = 0.6994098889503969;

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
    msg.setTimeStamp(0.5971188567960553);
    msg.setSource(14008U);
    msg.setSourceEntity(238U);
    msg.setDestination(63410U);
    msg.setDestinationEntity(151U);
    msg.seq = 38895U;
    msg.sys.assign("ICOKJVVIELROYAHUWEHQBPBRFWJNMRIFXLVFYVGHRAEGYQWKAXDMQVOJSZG");
    msg.value = 0.689492971591694;

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
    msg.setTimeStamp(0.026916746259893154);
    msg.setSource(51074U);
    msg.setSourceEntity(100U);
    msg.setDestination(18270U);
    msg.setDestinationEntity(90U);
    msg.action = 95U;
    msg.longain = 0.932748282818534;
    msg.latgain = 0.5764179856336281;
    msg.bondthick = 1276027114U;
    msg.leadgain = 0.8135547718529801;
    msg.deconflgain = 0.8372613804714775;

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
    msg.setTimeStamp(0.38345549009056223);
    msg.setSource(1585U);
    msg.setSourceEntity(244U);
    msg.setDestination(16837U);
    msg.setDestinationEntity(57U);
    msg.action = 229U;
    msg.longain = 0.8518452866407441;
    msg.latgain = 0.9067947231064811;
    msg.bondthick = 2111867038U;
    msg.leadgain = 0.6459810880716202;
    msg.deconflgain = 0.8465596604405219;

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
    msg.setTimeStamp(0.3522179437396824);
    msg.setSource(17269U);
    msg.setSourceEntity(211U);
    msg.setDestination(44468U);
    msg.setDestinationEntity(112U);
    msg.action = 203U;
    msg.longain = 0.9605377752250971;
    msg.latgain = 0.7724310426634067;
    msg.bondthick = 4098107590U;
    msg.leadgain = 0.536599014370814;
    msg.deconflgain = 0.39672754214001926;

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
    msg.setTimeStamp(0.9292049225504957);
    msg.setSource(17422U);
    msg.setSourceEntity(119U);
    msg.setDestination(20572U);
    msg.setDestinationEntity(213U);
    msg.err_mean = 0.7617391864325505;
    msg.dist_min_abs = 0.7658624193300999;
    msg.dist_min_mean = 0.08223646964875386;

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
    msg.setTimeStamp(0.34944070657708737);
    msg.setSource(62871U);
    msg.setSourceEntity(158U);
    msg.setDestination(39036U);
    msg.setDestinationEntity(235U);
    msg.err_mean = 0.5978554511232681;
    msg.dist_min_abs = 0.7767430487402621;
    msg.dist_min_mean = 0.2502675365532405;

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
    msg.setTimeStamp(0.4041066435659397);
    msg.setSource(4146U);
    msg.setSourceEntity(189U);
    msg.setDestination(29638U);
    msg.setDestinationEntity(181U);
    msg.err_mean = 0.49778870693537636;
    msg.dist_min_abs = 0.4163197537598139;
    msg.dist_min_mean = 0.24647552001047135;

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
    msg.setTimeStamp(0.12165555212452839);
    msg.setSource(41401U);
    msg.setSourceEntity(133U);
    msg.setDestination(20982U);
    msg.setDestinationEntity(249U);
    msg.action = 207U;
    msg.lon_gain = 0.9464102763178657;
    msg.lat_gain = 0.21815501234909906;
    msg.bond_thick = 0.39273628492003554;
    msg.lead_gain = 0.03844287523212708;
    msg.deconfl_gain = 0.7444500552001918;
    msg.accel_switch_gain = 0.216972623644065;
    msg.safe_dist = 0.5163522214685708;
    msg.deconflict_offset = 0.15656811516355984;
    msg.accel_safe_margin = 0.8520123791112187;
    msg.accel_lim_x = 0.7685879040299406;

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
    msg.setTimeStamp(0.635052525037001);
    msg.setSource(38514U);
    msg.setSourceEntity(205U);
    msg.setDestination(17691U);
    msg.setDestinationEntity(130U);
    msg.action = 67U;
    msg.lon_gain = 0.40710268207872813;
    msg.lat_gain = 0.6932545784668217;
    msg.bond_thick = 0.6208549281422916;
    msg.lead_gain = 0.5316835942493243;
    msg.deconfl_gain = 0.12474227739072419;
    msg.accel_switch_gain = 0.898949726661789;
    msg.safe_dist = 0.8323135591270752;
    msg.deconflict_offset = 0.5388737663577909;
    msg.accel_safe_margin = 0.442522417351661;
    msg.accel_lim_x = 0.2758209300523493;

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
    msg.setTimeStamp(0.6190612459009253);
    msg.setSource(51619U);
    msg.setSourceEntity(35U);
    msg.setDestination(968U);
    msg.setDestinationEntity(88U);
    msg.action = 220U;
    msg.lon_gain = 0.25670453093294077;
    msg.lat_gain = 0.6685075531342435;
    msg.bond_thick = 0.5001350648304571;
    msg.lead_gain = 0.8233982120964658;
    msg.deconfl_gain = 0.6698268759864578;
    msg.accel_switch_gain = 0.7981262639116462;
    msg.safe_dist = 0.9039930259823717;
    msg.deconflict_offset = 0.14180234726968155;
    msg.accel_safe_margin = 0.4138964438131789;
    msg.accel_lim_x = 0.1049988982860719;

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
    msg.setTimeStamp(0.46240756235605185);
    msg.setSource(8924U);
    msg.setSourceEntity(72U);
    msg.setDestination(62275U);
    msg.setDestinationEntity(242U);
    msg.type = 89U;
    msg.op = 142U;
    msg.err_mean = 0.24964713593209342;
    msg.dist_min_abs = 0.6040007536188368;
    msg.dist_min_mean = 0.9913233339153721;
    msg.roll_rate_mean = 0.1400008579310974;
    msg.time = 0.7021252001871078;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 119U;
    tmp_msg_0.lon_gain = 0.6809343836805947;
    tmp_msg_0.lat_gain = 0.45574446725935025;
    tmp_msg_0.bond_thick = 0.21384147240599016;
    tmp_msg_0.lead_gain = 0.30989662729258116;
    tmp_msg_0.deconfl_gain = 0.5724281991342814;
    tmp_msg_0.accel_switch_gain = 0.1920785915893063;
    tmp_msg_0.safe_dist = 0.5075185633294874;
    tmp_msg_0.deconflict_offset = 0.23710470874627643;
    tmp_msg_0.accel_safe_margin = 0.3941344223756472;
    tmp_msg_0.accel_lim_x = 0.7589280827372427;
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
    msg.setTimeStamp(0.34313669772768995);
    msg.setSource(57198U);
    msg.setSourceEntity(97U);
    msg.setDestination(6768U);
    msg.setDestinationEntity(248U);
    msg.type = 145U;
    msg.op = 27U;
    msg.err_mean = 0.984654723457087;
    msg.dist_min_abs = 0.2535037182048615;
    msg.dist_min_mean = 0.4300834843215178;
    msg.roll_rate_mean = 0.04532560566802668;
    msg.time = 0.6171759260210581;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 145U;
    tmp_msg_0.lon_gain = 0.8577441162298016;
    tmp_msg_0.lat_gain = 0.9254952853751817;
    tmp_msg_0.bond_thick = 0.24151922183302577;
    tmp_msg_0.lead_gain = 0.5493605478976058;
    tmp_msg_0.deconfl_gain = 0.7736527098444109;
    tmp_msg_0.accel_switch_gain = 0.6909835653814312;
    tmp_msg_0.safe_dist = 0.5696132740506483;
    tmp_msg_0.deconflict_offset = 0.9366280623838185;
    tmp_msg_0.accel_safe_margin = 0.06561000608520196;
    tmp_msg_0.accel_lim_x = 0.9651934670503115;
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
    msg.setTimeStamp(0.8514350468969243);
    msg.setSource(64198U);
    msg.setSourceEntity(9U);
    msg.setDestination(52742U);
    msg.setDestinationEntity(14U);
    msg.type = 96U;
    msg.op = 53U;
    msg.err_mean = 0.06829057819646378;
    msg.dist_min_abs = 0.036857673098768085;
    msg.dist_min_mean = 0.1163124063336286;
    msg.roll_rate_mean = 0.016677669325012245;
    msg.time = 0.9631347132638692;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 85U;
    tmp_msg_0.lon_gain = 0.7125124237362945;
    tmp_msg_0.lat_gain = 0.3589718269769707;
    tmp_msg_0.bond_thick = 0.28911281474517625;
    tmp_msg_0.lead_gain = 0.20030527583239222;
    tmp_msg_0.deconfl_gain = 0.8183289363087731;
    tmp_msg_0.accel_switch_gain = 0.7460758671226293;
    tmp_msg_0.safe_dist = 0.8293102361368407;
    tmp_msg_0.deconflict_offset = 0.7018566559550659;
    tmp_msg_0.accel_safe_margin = 0.024835020820076936;
    tmp_msg_0.accel_lim_x = 0.5746302285159622;
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
    msg.setTimeStamp(0.6032154840117713);
    msg.setSource(8278U);
    msg.setSourceEntity(209U);
    msg.setDestination(6573U);
    msg.setDestinationEntity(10U);
    msg.uid = 86U;
    msg.frag_number = 185U;
    msg.num_frags = 48U;
    const char tmp_msg_0[] = {-121, 112, -10, 28, -109, 68, -81, -19, -43, 24, 3, 98, -93, -10, 23, 72, -127, 36, -110, -17, 72, 2, 122, -92, 3, 69, 28, -127, -107, -5, 6, 34, -33, -27, 37, -62, -27, 7, -50, -44, 94, 70, 113, 1, -110, 92, 121};
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
    msg.setTimeStamp(0.04420740456772687);
    msg.setSource(51536U);
    msg.setSourceEntity(111U);
    msg.setDestination(45265U);
    msg.setDestinationEntity(252U);
    msg.uid = 80U;
    msg.frag_number = 169U;
    msg.num_frags = 253U;
    const char tmp_msg_0[] = {65, 116, 14, -18, 89, 114, 66, 38, -83, 125, 86, 62, 13, -19, -53, -98, 118, 97, -31, -43, -69, -125, -45, -40, 55, -54, 105, 47, -9, -95, 95, 87, -80, 17, -44, -60, -15, -45, -18, 92, -94, 62, 96, -10, 67, -3, 12, 30, -58, -87, -16, -116, 4, 86, 97, -72, -38, 5, -55, 61, 120, 14, -52, -88, -127, -56, -78, -30, -91, -50, -16, 68, 115, 21, -60, 12, 34, 7, 121, -33, -74, -32, 29, -38, 60, 79, 32, -99, 113, 41, -57, 112, 65, -108, -112, 26, 83, 34, -16, 102, 36, 47, 5, -63, 92, 1, -72, -102, -8, 76, 1, 29, 31, -58, 61, 15, 79, 91, -78, 62, 93, 55, -11, -111, 31, -108, -14, 2, -128, -6, -35, -127, -62, -97, 46, -64, 54, 34, 96, 10, -24, 30, -93, -112, 22, -4, 8, 31, -87, -113, 13, -114, -58, -84, -3, -57, -10, -28, -9, 75, -87, 26, 76, 87, -128, -105, -114, 43, 9, 78, 126, -2, 22, -53, -86, 105, -43, 118, -51, -67, -106, 41, -67, -23, -47, -61, -50, 9, -41, -39, -49, 70, 23, -58, 5, 78, 77, 75, 8, -29};
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
    msg.setTimeStamp(0.1555083831480385);
    msg.setSource(9302U);
    msg.setSourceEntity(115U);
    msg.setDestination(44729U);
    msg.setDestinationEntity(206U);
    msg.uid = 179U;
    msg.frag_number = 73U;
    msg.num_frags = 150U;
    const char tmp_msg_0[] = {41, -46, -41, 87, -13, -110, -94, -33, -119, -83, -90, -97, -2, -69, -85, -46, 95, 91, -67, -13, 60, -62, 116, -66, -36, -112, -114, 106, 75, 35, 90, 121, 116, 74, -53, 38, 12, 84, 26, 124, -103, -115, 85, -110, -118, -124, -6, 16, 108, 120, -12, -7, 0, -54, -64, 82, -108, 61, 31, -73, -55, 58, -66, -114, 86, -46, 45, 124, 1, -79, 36, 76, -78, -91, 4, -90, 68, 21, -102, -87, -105, -112, 26, 63, 91, -65, 84, -50, -78, -106, 82, 64, -9, -2, -117, 117, 31, 64, -3, 84, -67, -81, 120, 29, 74, -70, -19, 79, 67, -60, -97, -59, -88, 79, 92, 58, -14, 90, 120, 74, 51, 66, 14, 87, 121, -32, 94, 92, 108, 79, 90, 113, -79, -83, -94, -71, -95, -70, -81, -20, 54, 17, -97, 56, 35, -96, -111, 52, -43, 12, -108, 7, 102, 20, -22, -11, -56, -16, -1, 93, 79, -106, 2, 2, 40, 28, 39, -71, -95, -100, -41, 35, -40, -12, -42, 30, -26, -105, 36, 41, -114, 56, 0, -117, -23, -95, -45, 43, 81, 29, -103, -97, 54, 7, -104, -46, -73, 40, 52, -8};
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
    msg.setTimeStamp(0.3055859418925253);
    msg.setSource(58243U);
    msg.setSourceEntity(173U);
    msg.setDestination(12235U);
    msg.setDestinationEntity(235U);
    msg.content_type.assign("OWELYKMICCCBQUPBQEOLKFTRZGPZKOQYZEMIJAYASWCNSSSCUSSDNBAHLPMKGIIDAVTLBPGKQBDOEKHYQQGHXNTJPUZOGIRSFWMFMJDGTGPLQOWJZSJJFAVVXECUTHWTLGVWFUHMDASNRPCQROUVIZECYUTCDIOGJUMIKXIOXXJYWBQVXBZXRNWAERXFAADHMHFFRRBMZWVZXEVHJNBJYNEURLZFIQKDPDTLTYCNP");
    const char tmp_msg_0[] = {-54, -67, 92, 29, 45, 77, 46, 40, -1, -97, 63, 58, 82, -52, -108, 30, -19, 22, 67, -113, 68, -38, -105, -20, 35, 125, -18, 27, 0, -120, 57, 76, 101, 15, -43, 88, -75, 87, -59, 24, -1, 39, -120, -32, -36, 77, 105, 7, -9, 56, 84, -31, -125, 46, 82, 5, 99, 6, -6, -62, 30, -118, 66, 56, 48, -33, 75, -123, -15, -69, 96, -39, -75, -63, 93, -52, 14, 63, 3, -38, 101, 99, -106, -111, -49, -91, -76, 11, 106, 51, 0, 10, -109, 89, -56, 74, -100, 15, 98, 19, -108, 40, -18, 64, -120, -10, -62, -7, -73, -72, -40, 106, -59, 119, 37, -47, 72, -108, -40, 33, 81, 43, -17, 108, -9, -65, 0, 45, -116, -34, -30, 53, 66, -31, 13, -104, -88, -94, -58, 58, -109, -115, -91, 25, -66, 89, -12, -21, 40, -63, 120, -126, 108, 90, -2, 58, 55, 60, -32, 86, -76, 21, -65, -99, -21};
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
    msg.setTimeStamp(0.013089462139723618);
    msg.setSource(4205U);
    msg.setSourceEntity(116U);
    msg.setDestination(40537U);
    msg.setDestinationEntity(156U);
    msg.content_type.assign("IECNHOWPTARZGSFCTGPSXHVRXWJTCSMQBVBIZENKGHYCROFCWWZUMYPDIKYYOYJLOUOIAKHGAISKALBFZQFMENZBLMAAAYXDBBPDGCEHM");
    const char tmp_msg_0[] = {60, -28, -28, 87, 0, -108, -58, -19, 99, 60, 88, -14, -23, 9, 7, -72, 120, -104, -46, -49, 117, 34, -55, -116, -62, -61, 117, -113, -60, 102, -4, -117, -28, 94, 122, 126, -4, 84, -35, 123, 63, -81, 40, -12, 38, 90, -60, -6, 89, -57, -117, -79, 113, 103, 99, 58, 37, 96, 76, 121, -107, -102, 63, 121, -37, -102, 46, -26, -74, -53, -25, -86, 86, -105, 44, 4, -63, 41, -121, 18, 84, 117, 90, 98, -48, -19, -33, -72, 42, 72, 30, 54, 110, -15, 72, -61, -60, -35, 78, -42, -6, 111, 41, -28, -82, 60, -119, 99, 110, 66, -53, 69, -20, -89, -9, 121, -9, -8, -27, 52, -44, -91, 42, -27, -39, 17, 96, 117, -61, -71, 125, 45, -64, -49, -92, 34, -94, -19, -57, -125, 33, 48, -11, -59, 5, -34, -61, -18, -46, 56, -14, 79, -13, -30, -124, -73, 40, -94, 9, 45, 95, -116, 35, 31, 118, -80, 1, 118, 99, -105, 16, 68, 123, -67, -45, 109, -87, 58, -99, -84, -106, -52, -18, -65, 18, -64, -80, 64, 101, -49, 18, 102, 30};
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
    msg.setTimeStamp(0.1033969273276577);
    msg.setSource(27825U);
    msg.setSourceEntity(126U);
    msg.setDestination(48808U);
    msg.setDestinationEntity(231U);
    msg.content_type.assign("NXPZMEQRRQOINTVBZIYLYVJGUKNHSMNDGITDXBZTQVYMTHOTZSMWKAMYOCEIUKKFSRJDVMAPPLGBHJRAJSEDDRIISBX");
    const char tmp_msg_0[] = {96, 0, -74, 12, -78, -34, 79, 1, -26, -15, -35, 4, 15, 9, -115, -35, 126, 26, -6, -112, -119, -93, 41, -94, -30, 112, 18, -52, 55, -100, -84, 93, -78, -29, -110, -122, 97, 124, -98, -38, -76, -65, -71, 9, -66, 16, 109, 20, -93, 19, 67, 57, -6, -15, 123, 118, -26, -9, 125, -106, -19, -117, -103, 43, -78, -48, -58, 110, -112, -4, 35, -48, -39, 126, -53, -32, 72, 0, 68, 5, 74, 42, 125, 84, -68, 52, -61, 79, 35, -50, -61, 76, -65, 75, 37, -19, -67, -22, 98, -124, 2, 118, -53, -91, 96, 76, -29, -24, 37, -41, -44, 98, 8, -111, -117, -70, 94, -56, -33, -17, 17, -98, -14, 116, -126, 16, -32, 49, 77, -93, 111, 46, 43, 32, 106, -65, 118, -37, 64, 123, -9, -99, -15, 13, -103, 26, 77, 108, -98, 44, 79, 120, -126, 121, 94, -42, -7, 76, -58, 10, 60, 54, 95, 102, -36, 17, 93, -14, 94, -40, 123, -80, -112, -55, -66, -58, -87, 38, 43, 99, 30, -97, 37, -82, 74, -33, -80, 52, 122, 74, 89, -102, 77, -104, 20, 124, -108, -1, -9, -105, -63, -74, -57, 81, 26, -116, -24, -14, -55, -66, 16, -70, -59, 99, 9, -4, 34, 83, -49, 86, -34, 59, -23, 11, 97, -36, -126, 82, -82, 113, -111, -70, 11, -103, 87, -76, 107, -120, -126, -1, -83, -88, 38, -79, 40};
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
    msg.setTimeStamp(0.9373040204549159);
    msg.setSource(24793U);
    msg.setSourceEntity(228U);
    msg.setDestination(11770U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.4985163649337979);
    msg.setSource(3762U);
    msg.setSourceEntity(126U);
    msg.setDestination(8375U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.3159533430505205);
    msg.setSource(30584U);
    msg.setSourceEntity(250U);
    msg.setDestination(10986U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.5879912288147703);
    msg.setSource(415U);
    msg.setSourceEntity(213U);
    msg.setDestination(29289U);
    msg.setDestinationEntity(165U);
    msg.target = 13224U;
    msg.bearing = 0.12026877615234532;
    msg.elevation = 0.3305343416898213;

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
    msg.setTimeStamp(0.9377510176698846);
    msg.setSource(65114U);
    msg.setSourceEntity(224U);
    msg.setDestination(36083U);
    msg.setDestinationEntity(89U);
    msg.target = 26332U;
    msg.bearing = 0.758421731277788;
    msg.elevation = 0.5146229035617724;

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
    msg.setTimeStamp(0.21994629331447524);
    msg.setSource(9092U);
    msg.setSourceEntity(33U);
    msg.setDestination(9499U);
    msg.setDestinationEntity(128U);
    msg.target = 62932U;
    msg.bearing = 0.3091267875818481;
    msg.elevation = 0.28348354015279265;

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
    msg.setTimeStamp(0.9266554480856547);
    msg.setSource(59187U);
    msg.setSourceEntity(198U);
    msg.setDestination(55363U);
    msg.setDestinationEntity(245U);
    msg.target = 35224U;
    msg.x = 0.5349225560841512;
    msg.y = 0.6073264640736263;
    msg.z = 0.5592445977588573;

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
    msg.setTimeStamp(0.1555803041957481);
    msg.setSource(60066U);
    msg.setSourceEntity(184U);
    msg.setDestination(12705U);
    msg.setDestinationEntity(111U);
    msg.target = 41747U;
    msg.x = 0.619876886153603;
    msg.y = 0.5646899455370611;
    msg.z = 0.9284541263622972;

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
    msg.setTimeStamp(0.21504091003157055);
    msg.setSource(7963U);
    msg.setSourceEntity(0U);
    msg.setDestination(25949U);
    msg.setDestinationEntity(151U);
    msg.target = 59867U;
    msg.x = 0.6894435943866211;
    msg.y = 0.8614844563825858;
    msg.z = 0.7862665825651483;

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
    msg.setTimeStamp(0.5294808025822131);
    msg.setSource(38293U);
    msg.setSourceEntity(134U);
    msg.setDestination(8689U);
    msg.setDestinationEntity(154U);
    msg.target = 60270U;
    msg.lat = 0.8603386581541879;
    msg.lon = 0.06564809770352487;
    msg.z_units = 240U;
    msg.z = 0.4040728698617744;

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
    msg.setTimeStamp(0.15855974976743337);
    msg.setSource(22857U);
    msg.setSourceEntity(127U);
    msg.setDestination(56004U);
    msg.setDestinationEntity(80U);
    msg.target = 5804U;
    msg.lat = 0.1172995422778198;
    msg.lon = 0.18599459361208992;
    msg.z_units = 167U;
    msg.z = 0.7593039693451424;

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
    msg.setTimeStamp(0.8279121519780851);
    msg.setSource(2923U);
    msg.setSourceEntity(35U);
    msg.setDestination(17151U);
    msg.setDestinationEntity(131U);
    msg.target = 35353U;
    msg.lat = 0.3757078079767433;
    msg.lon = 0.6677558818321666;
    msg.z_units = 61U;
    msg.z = 0.2382937487288651;

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
    msg.setTimeStamp(0.9722973472994075);
    msg.setSource(45532U);
    msg.setSourceEntity(146U);
    msg.setDestination(55434U);
    msg.setDestinationEntity(30U);
    msg.locale.assign("LFDHCMKRRZBKKWXWZNIUKRSCAAOUGRIPVTOUMXGUBUCHHTFWOBCEHTYSGEXEQZGUHBFRILWYGVPYWNIJTFWBRSYBXLXPIAAEFMUTJPLFEVTLSLPISDVESDZUBZQAQWFYMXEVDYYRRESBKMFEIQFOVCHYZHLGXIXPPOCIVAKLJKDG");
    const char tmp_msg_0[] = {-73, 2, -17, 44, 33, 103, -96, 108, -120, 38, 64, 2, -16, -50, 86, -76, -39, 69, 15, 94, -70, 116, -64, -84, -121, -110, -10, -35, 80, 55, -53, -67, 96, -110, 7, 26, -30, -122, 9, 70, 26, 23, 21, 95, -127, -120, 67, -57, 30, -64, 109, -84, -6, 114, -1, -37, -67, 80, 56, -33, -26, 92, 87, -35, -28, 107, 10, 6, 21, -17, 51, -70, -73, 44, -64, -22, 67, -26, -96, -98, 33, 33, -47, -35, 6, -73, 108, 48, -37, 19, -79, -99, -80, -39, -63, 28, 119, 119, -13, 22, 75, -16, 11, 110, -48, 121, 55, 5, -37, -71, -93, -83, -14, 16, 74, -20, -6, -36, 119, 52, -8, -128, 118, 60, -6, -1, 97, -7, -16, 29, -49, 73, -41, -51, 66, 98, -9, 71, -31, 87, -5, -67, -98, -95, -49, 32, -51, 76, -116, 92, -17, -67, -34, 77, 32, 88, 110, -60, 5, 102, -123, -5, 15, 2, -18, -11, 70, 98, -83, -93, 107, 63, 42, 38, -7, -84, 81, -111, -25, -72, 31, -111, 60, 66, -74, -64, 103, -81, 41, -115, 111, 101, 53, 43, -3, 124, -125, 22, -18, -8, 117, 86, -4, -52, 10, 45, 51, -128, 46, 7, -64, 4, -30, -30, -56, 18, 1, 106, -88, -123, 24, 78, 69, 4, -41, 11, 46};
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
    msg.setTimeStamp(0.7739393303432353);
    msg.setSource(32210U);
    msg.setSourceEntity(14U);
    msg.setDestination(9872U);
    msg.setDestinationEntity(70U);
    msg.locale.assign("YOPBGSOCCWEMSZIEQTIPWSQIUTXAAVRTSRKMONVKXHRTIURHYLCBPNXHTJIIQJGWSWHZWDCPMVFOXMDZPGYOISLVLOFCIXUUJHDNYHMBRWTQJOXDHZVYBUPAMCNSVBRVFLLOQCJSAXENFNVFAFATMBUFBUZERSDOJQGKKIEGZHKFKLDTKNUPYUQMGEJZCGLYFPLXRAHQWZD");
    const char tmp_msg_0[] = {88, -77, 108, 11, -57, 57, 59, 54, 0, 103, 56, -49, 77, -21, 80, -31, -8, 4, -27, -82, 27, 24, -3, -63, 110, 75, -15, 31, -70, 41, -68, -90, 73, -77, -54, 105, 89, -26, -70, -39, -23, -30, -20, 68, -62, 88, 46, 125, 26, 90, -3, -65, 15, 60, 43, 120, 116, 28, -91, 124, -88, -128, 118, -43, 122, 64, 22, 48, 33, -101, 125, -56, -6, 100, 37, 94, 66, 84, 92, 33, -19, -2, -99, -50, 108, -32, 78, 100, -122, 76, -95, -46, -78, -109, -119, -71, -11, 124, 32, -19, 61, 52, 58, -103, -35, 26, 117, 42, 118, -47, 63, 90, 26, -19, -84, 91, -95, -110, -63, 108, 48, -8, 45, 17, 105, -30, -128, 104, -113, -73, 102, 94, -5, -67, -6, 118, 81, 17, -88, -44, 21, -73, 54, 14, -127, 62, 20, -61, -115, -25, -13, 40, 67, 46, -7, 1, 89, -111, -108, -90, -86, 15, 52, -75, 58, -97, 117, 75, -89, 90, -123, 44, 55, -20, 123, -65};
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
    msg.setTimeStamp(0.38438870904489975);
    msg.setSource(42398U);
    msg.setSourceEntity(49U);
    msg.setDestination(13811U);
    msg.setDestinationEntity(95U);
    msg.locale.assign("ROOVBUZDLKSFRYJOYDIIVTETFWSIAANEDRTDYGCVCQQOKRJSXUMRPHNWCBRVNGXPHYRITGIVCBUMJXDPFSWKERXWHRUJTSFEPCMTMFJBBGWVGIXXRWHSWKKETULCZECPHYHGZXFLXODNJKOMZBZBYZBTLGLTAXSFGEHYQFLPQAUINVOYTVSPKSHDYHDMZLFWJKMQIZNPZPESJEUFWABQNUCUO");
    const char tmp_msg_0[] = {70, 15, -7, 111, 6, -96, 51, -116, -113, -73, 87, -38, -15, 83, -25, 116, -50, 22, -60, 107, -28, 50, -90, 4, -36, -11, 100, 26, -72, -78, -1, 100, -16, -91, -94, 109, -18, 68, 25, -54, 67, -121, -84, -108, 49, -94, 108, -58, -96, -108, -79, -29, -99, -128, -66, -114, -53, -5, 101, -4, -99, -12, -62, 56, -66, 44, -24, 30, -122, 123, -79, -23, 80, -50, 20, 67, 80, -61, -59, 96, -29, 101, 100, 19, 113, -105, 54, 35, 20, -36, -36, 80, 92, -38, 39, 19, -89, -56, -70, 31, -40, 66, 65, 14, 47, 102, 81, -116, 121, 52, -79, 58, -85, 25, -126, 58, -43, 54, 120, 85, 17, 11, -1, -67, -79, -88, -76, -31, 126, -3, -113, 88, 65, 105, 82, 34, -44, 4, 77, 28, -91, -5, -7, 73, -91, -127, -116, -52, 118, 52, 111, -114, -93, -59, -95, -71, 38, 66, -124, 52, 83, 118, 39, 88, 103, -28, -5, -121, -52, -91, -63, 42, 36, -37, -76, -52};
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
    msg.setTimeStamp(0.3415068773009684);
    msg.setSource(52929U);
    msg.setSourceEntity(87U);
    msg.setDestination(21179U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.4447801519930823);
    msg.setSource(30929U);
    msg.setSourceEntity(201U);
    msg.setDestination(43983U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.8547700694031908);
    msg.setSource(18649U);
    msg.setSourceEntity(90U);
    msg.setDestination(6248U);
    msg.setDestinationEntity(111U);

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

  {
    IMC::ParserOutput msg;
    msg.setTimeStamp(0.6745882871249136);
    msg.setSource(43493U);
    msg.setSourceEntity(102U);
    msg.setDestination(52618U);
    msg.setDestinationEntity(101U);
    msg.result.assign("QUABRRFYFILICSAEVQMYQIVEDHAVXORNRYAORCSHMEWDEBWMZPKTZSJHJPUHRWQWABPOQGHRJASONGZCJYGIAQ");
    msg.source_entity.assign("HLWOWOYTUQDSFMJEMRTXZRTFVIAWDDHCGFVQPKRJIQNAEZUHGCNXAILGBJPPUSTWNFBHHREMIUKUPOADLTMKXTWZQVCBQCIKDLGXTGAVWMCLNFSYCZXTBRWJKJJLVWDPSRRYDYUANFCOLZNDPIYSEJPUTGBDUHKBEPXFKERBEKHZCYFIGMXIUEOSSBYHOTKJVFGNILSSOHSYJBMMKQOVVXQQHCULYNEPZXGGZZANMAEJYVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParserOutput #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParserOutput msg;
    msg.setTimeStamp(0.9112064006833364);
    msg.setSource(14279U);
    msg.setSourceEntity(136U);
    msg.setDestination(55199U);
    msg.setDestinationEntity(21U);
    msg.result.assign("JHSZGNYDOOZMYDVVWWRHMGTUQTQJDCWVSNXWMCFNCKYILHRKQMYNFQXIOISTTEZPEBXCDCUAFZPYXYMDHVUIKEHADZNPRQDOMCMWBCZYNUBJDQTTJKNCSLFFOLNKJRSAEUYNIGRWGRSOXPXKFSGTYXBEXZSPIWUAQIGAURWUQIBJJJPQCEGBAVUWALQERAUBLSFHIP");
    msg.source_entity.assign("QFTHVOTQFJXJZUPTKLIQYBLRWJHQTGQCFMHWEDMJEABCOKUOVDUEXAARXAMKTYXNYROZTXMUYRIFATWBAPIENVRAQCLBKDEPTHQGBJYQEZVMLCSVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParserOutput #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParserOutput msg;
    msg.setTimeStamp(0.5557576331890449);
    msg.setSource(50763U);
    msg.setSourceEntity(36U);
    msg.setDestination(62778U);
    msg.setDestinationEntity(226U);
    msg.result.assign("ETIDVKEKQXYYZPFRWNPGJPOCOZOYASOIYXUDRLTIZCCMVSAATXHCGEINSUMFYKXUFQMUWDVGFDBVPLOPHGOQVFRMKQEJRWPJLXVPFSVALSBJCNUZGWSWKK");
    msg.source_entity.assign("WKPQMMQOZVXCQGDOVRTCGZBXZGSTYEULGQLFYGCLEVRSLHKUCNCRFATUWJZRDRNTZTHVWNPYPSNEHDTJXQGYPKUKFDDXBEHUEGWUXYNUIRRMCIBVCDDBBM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParserOutput #2", msg == *msg_d);
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
