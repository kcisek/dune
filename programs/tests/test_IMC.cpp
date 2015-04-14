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
// IMC XML MD5: 056f74d7c9d645b96bb2dec99fe07fbd                            *
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
    msg.setTimeStamp(0.5540215729504525);
    msg.setSource(1661U);
    msg.setSourceEntity(133U);
    msg.setDestination(30735U);
    msg.setDestinationEntity(237U);
    msg.state = 27U;
    msg.flags = 86U;
    msg.description.assign("LGNODKAPFOPLBSMRPNJYIKLLRUWHCMBJDEHQTQTQKWXMIYGDVSCZHTFALJXQLIRFEKYUHAIOZEGCYSAFJKUGHBPCPNEDXHAGSSYVTNUMPEDPRFCJYWVPWRNWGUAZXNJYFWVXEEDBXKFCKIGDVIQZWQNMMEFUWSOXXHOZAKIBAEYOUWJBXC");

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
    msg.setTimeStamp(0.7953348231587573);
    msg.setSource(17801U);
    msg.setSourceEntity(120U);
    msg.setDestination(42240U);
    msg.setDestinationEntity(0U);
    msg.state = 239U;
    msg.flags = 201U;
    msg.description.assign("MKYYKICICJDYEWKZMKSHQGQNWZJIBBSXTIQSUFPCECCZOLGAYRNSCOUWVADZXAQURSVXLSNEGNUEWKLJJVM");

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
    msg.setTimeStamp(0.1900106992243683);
    msg.setSource(41770U);
    msg.setSourceEntity(51U);
    msg.setDestination(14055U);
    msg.setDestinationEntity(128U);
    msg.state = 230U;
    msg.flags = 6U;
    msg.description.assign("MZKRMFTPRKLRMGDYBTWXJEPFUHALUQOQZQQZOCSGICLAJXCJWLQZTZHBYRDQWUDEFEKPWFPVXGMPNZABUHIXTCTVKEPKZTSFZYSCEYNNSVRRDGPLQHOVOOBWXKXKBCLGFIDHCXGMXJOCEYRDISVJYNLJMBHLGDEDKWKJJFULTUSMOUY");

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
    msg.setTimeStamp(0.5006313976342068);
    msg.setSource(31586U);
    msg.setSourceEntity(179U);
    msg.setDestination(15302U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.4393540701078158);
    msg.setSource(30101U);
    msg.setSourceEntity(4U);
    msg.setDestination(56557U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.028903213897184088);
    msg.setSource(2797U);
    msg.setSourceEntity(14U);
    msg.setDestination(25647U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.9588167519479766);
    msg.setSource(12603U);
    msg.setSourceEntity(117U);
    msg.setDestination(64206U);
    msg.setDestinationEntity(37U);
    msg.id = 74U;
    msg.label.assign("EDFEBHBJRIYCZXPMLZCCDZIUMFZWBQKEDIOOVEANELURBLVLLRIFUBWIXXOKMVARHUNOAVNAOBDPLYGHDNGXUWXVGINXBJKHWYHRSYHFCDZWHTSNFHQBPJJPHAPLQJRTGQZQBOKQZGGTNOU");
    msg.component.assign("NYREGEDDIEQKITNGDXRRSUFRUQZWGGFFRAZHIAFPSJYINHAPZAXNEYKKQKSWTMGFOYSIMXFELULLNFBKXHDZVD");
    msg.act_time = 24426U;
    msg.deact_time = 1336U;

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
    msg.setTimeStamp(0.3453084899133644);
    msg.setSource(25763U);
    msg.setSourceEntity(219U);
    msg.setDestination(64033U);
    msg.setDestinationEntity(232U);
    msg.id = 154U;
    msg.label.assign("KWPDYDRSVWVZCXIUWSNENRFDNVJVLTHJKRYZUAXJSKXBSSLNTEUYORGTLRKCIAHGXBIPQWJSNAOJHZVEOZZFYBFGZCNNXHNQLDLAKCWGDXQLZQZUTCJEUIBDFJMQSPMNOBOOMTFHIAIDFVFYUBWKQT");
    msg.component.assign("MPHWOAYFNOMNSQEEBWUMULHADSRPVSECBAXLGNKMOCKQVSKKOPFCPIJNWLFUBFSRETKNAWCMDVTUZNCOZRQWRRHFZSDPEDIQHYNXUCGFKHJUUXMFLQQJYNBKAZI");
    msg.act_time = 22737U;
    msg.deact_time = 6328U;

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
    msg.setTimeStamp(0.09201487354589744);
    msg.setSource(47558U);
    msg.setSourceEntity(175U);
    msg.setDestination(63745U);
    msg.setDestinationEntity(146U);
    msg.id = 95U;
    msg.label.assign("BBWYESMAKOSPZLHWYFNYHYNIVTTJBCMXVNECGEBSXGCRIPEUWEPLLDRCFOQEZQXZSCCFWJOJRQLHAZBUDVGHJBUIOHHDGIKNDZQNRWPVLEJAFGPAKRXUHGWYRDWJIPMZXLNUSNMIPCLZRGWLRUUEAQYSKVVQTEDITNTACVTQILKXYMMOQYTPTVXPBTXRKLQGBTCSIXDKGOQMWASUBVOBNYFYX");
    msg.component.assign("RSZWHLPVIIBFZGUPIRXVATXIKEMZTVCHJDFXPIRFQBTOLANMHMYO");
    msg.act_time = 35132U;
    msg.deact_time = 34686U;

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
    msg.setTimeStamp(0.6605043704331126);
    msg.setSource(14881U);
    msg.setSourceEntity(233U);
    msg.setDestination(35839U);
    msg.setDestinationEntity(235U);
    msg.id = 221U;

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
    msg.setTimeStamp(0.08632301389397246);
    msg.setSource(31438U);
    msg.setSourceEntity(205U);
    msg.setDestination(4178U);
    msg.setDestinationEntity(182U);
    msg.id = 41U;

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
    msg.setTimeStamp(0.9469597008033513);
    msg.setSource(3939U);
    msg.setSourceEntity(65U);
    msg.setDestination(55084U);
    msg.setDestinationEntity(177U);
    msg.id = 234U;

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
    msg.setTimeStamp(0.25551198534560504);
    msg.setSource(61214U);
    msg.setSourceEntity(126U);
    msg.setDestination(61811U);
    msg.setDestinationEntity(154U);
    msg.op = 196U;
    msg.list.assign("DHFZBSNTKITYGRVNVNMMWOJUKMYKUEOBSQYLBN");

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
    msg.setTimeStamp(0.7941696980325816);
    msg.setSource(13396U);
    msg.setSourceEntity(145U);
    msg.setDestination(9859U);
    msg.setDestinationEntity(141U);
    msg.op = 28U;
    msg.list.assign("EZNSEKBDXMBDPEJSHBLQOBSUEIBOVXMVXPPGWYKXQSAZWPGWJAJVRHGNYITJUEZCLAUEUSMRZNZLCVUMHIQWIMXVCXOOUISIFHFDGC");

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
    msg.setTimeStamp(0.9251277958620643);
    msg.setSource(24300U);
    msg.setSourceEntity(165U);
    msg.setDestination(46209U);
    msg.setDestinationEntity(188U);
    msg.op = 100U;
    msg.list.assign("WOKXDACLPKHWCZVVFNLBKFJAUKBBWOCAOGMKZIHBGJDMOHMKRVXOOPYGTNJPVPZXJUPMGMWCMITAZISBVNAQWCFOXYIFZCWUORGZVPNHDRJFSHKFYANRMZTLSXYCNQEGPLRHYUPDZWDTRRMYLYIBJIGNRTTMXFKBQCXVWTPLBSRGQWFBXSKEYVGRCQIBHQTEDZAEA");

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
    msg.setTimeStamp(0.028750985504141013);
    msg.setSource(34197U);
    msg.setSourceEntity(153U);
    msg.setDestination(58073U);
    msg.setDestinationEntity(72U);
    msg.value = 85U;

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
    msg.setTimeStamp(0.292178194986058);
    msg.setSource(35804U);
    msg.setSourceEntity(180U);
    msg.setDestination(39194U);
    msg.setDestinationEntity(180U);
    msg.value = 183U;

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
    msg.setTimeStamp(0.20387511869393216);
    msg.setSource(34378U);
    msg.setSourceEntity(79U);
    msg.setDestination(32784U);
    msg.setDestinationEntity(151U);
    msg.value = 38U;

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
    msg.setTimeStamp(0.885788785603667);
    msg.setSource(29308U);
    msg.setSourceEntity(171U);
    msg.setDestination(17229U);
    msg.setDestinationEntity(189U);
    msg.consumer.assign("LRDBVHRKYATBWZTCNQPJZOETGFWYXLGASQTLXDOHEUBI");
    msg.message_id = 2787U;

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
    msg.setTimeStamp(0.6303171128981268);
    msg.setSource(43093U);
    msg.setSourceEntity(250U);
    msg.setDestination(45169U);
    msg.setDestinationEntity(203U);
    msg.consumer.assign("MBSZRETLUKXMVUGXQFQYFSJB");
    msg.message_id = 4083U;

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
    msg.setTimeStamp(0.14159235490959554);
    msg.setSource(63688U);
    msg.setSourceEntity(22U);
    msg.setDestination(13920U);
    msg.setDestinationEntity(223U);
    msg.consumer.assign("NEJRNIFDXPRMXWYOKGMOPZHVCQPTJHBYIJGEXOAYZTDFUWJMHNJCXEPBJNVFAPMLOZPBDLL");
    msg.message_id = 3955U;

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
    msg.setTimeStamp(0.8961507968239175);
    msg.setSource(14934U);
    msg.setSourceEntity(227U);
    msg.setDestination(9994U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.710437146386962);
    msg.setSource(46493U);
    msg.setSourceEntity(134U);
    msg.setDestination(59876U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.4725179309402677);
    msg.setSource(50640U);
    msg.setSourceEntity(71U);
    msg.setDestination(41049U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.6202944881934169);
    msg.setSource(12597U);
    msg.setSourceEntity(136U);
    msg.setDestination(19406U);
    msg.setDestinationEntity(9U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.6688091004867844);
    msg.setSource(52302U);
    msg.setSourceEntity(94U);
    msg.setDestination(39971U);
    msg.setDestinationEntity(233U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.9701204084358974);
    msg.setSource(58134U);
    msg.setSourceEntity(26U);
    msg.setDestination(9951U);
    msg.setDestinationEntity(203U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.8021681149036793);
    msg.setSource(17543U);
    msg.setSourceEntity(117U);
    msg.setDestination(25005U);
    msg.setDestinationEntity(126U);
    msg.total_steps = 22U;
    msg.step_number = 187U;
    msg.step.assign("JXDPITFBXHUALELYIQSLVETZNKFVREUXPWPMPULCFYVMIKEGLRHELKSTFSOPYBSTJEOGAENDDIZLWNJVWJQRSMNQNPXQRIJZWRXBHRATOSKZKDWHVHQGVNFGZRZSTXQCDAINVUPKVBABJAYDXYOQBYPRXOMVBSIMTLHWDIKQFIMZUE");
    msg.flags = 39U;

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
    msg.setTimeStamp(0.7514594041808274);
    msg.setSource(23697U);
    msg.setSourceEntity(189U);
    msg.setDestination(34442U);
    msg.setDestinationEntity(115U);
    msg.total_steps = 207U;
    msg.step_number = 239U;
    msg.step.assign("OBDYIWKROEJVLZARUWHSFKRTMGUGZTFPKUQHKECEZCABOOPNLCDHRXQYVNOAWLGVTYPUIAGQTBCIRFBCLVJNHDKVKEDOWUIFAMPGATNLDXEJSIZMHOVPPMDIJELMYBCZRSIKQGXQNHOTMNFXJAWEVVBDIBFKSCYGUWHCDJFGBXQFKZVZQH");
    msg.flags = 226U;

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
    msg.setTimeStamp(0.4339391102959522);
    msg.setSource(51672U);
    msg.setSourceEntity(162U);
    msg.setDestination(35975U);
    msg.setDestinationEntity(155U);
    msg.total_steps = 130U;
    msg.step_number = 236U;
    msg.step.assign("UGMVMDIKNLWJMEVVVMQRJVWJNPHPSDLSAIFUFIMMRIJKXHKADBZTUQRKHBSHHWULQJZYLBROZHGECXYIQEVYCSOEOFMITMHTAQIEGAN");
    msg.flags = 230U;

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
    msg.setTimeStamp(0.5545336567977784);
    msg.setSource(58751U);
    msg.setSourceEntity(120U);
    msg.setDestination(58076U);
    msg.setDestinationEntity(155U);
    msg.state = 223U;
    msg.error.assign("WCLPHQZTBBDOXEYKPVWYJLACTBLCQBBZHAMJWMHBLZVYYEVOHJUMDFUEKCKSZGABICUTYOGWUUAGRMJXGADGBXFNCGEKHPIVRFCTNHSYOPPQZKGVZXCSRILBZJJROPEKFWEQLOROREZJNQPORIZWSDYPBTIDAUYWMKXQMIHNNTSIVYHMDFXFOXCEUKIRUADAFGHVCNMFUSDKEVDLPZJGXNLTYJAWXFWFMISTQ");

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
    msg.setTimeStamp(0.5257900342999745);
    msg.setSource(3714U);
    msg.setSourceEntity(24U);
    msg.setDestination(22904U);
    msg.setDestinationEntity(166U);
    msg.state = 98U;
    msg.error.assign("TKUSLEVIQKYMDALQXPRENEPKDYJASQGAOFLEPMZQOUSSEWSQTHWPCBPERZAPIDV");

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
    msg.setTimeStamp(0.05135231305873689);
    msg.setSource(47362U);
    msg.setSourceEntity(181U);
    msg.setDestination(21906U);
    msg.setDestinationEntity(120U);
    msg.state = 227U;
    msg.error.assign("TRTBJDIBWOAEKNVTZKEWKYZAGDHTXOJQVAZSNAQCLRQCJLUSIZKOQPKGMDNUWXMFPYLYMKGYAUXVDSBHHGIZRSJYZVLBDEFPPAUWNHSNXSHTMVUIRYMAIYIZVNNLFXFVEWEWWSURBEYLRVZM");

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
    msg.setTimeStamp(0.32876463356630725);
    msg.setSource(49697U);
    msg.setSourceEntity(7U);
    msg.setDestination(13894U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.1034011263432768);
    msg.setSource(15481U);
    msg.setSourceEntity(80U);
    msg.setDestination(52648U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.1332454731263807);
    msg.setSource(11770U);
    msg.setSourceEntity(88U);
    msg.setDestination(25916U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.5774259241302806);
    msg.setSource(11155U);
    msg.setSourceEntity(78U);
    msg.setDestination(62602U);
    msg.setDestinationEntity(81U);
    msg.op = 29U;
    msg.speed_min = 0.02154664418197194;
    msg.speed_max = 0.7209858092645537;
    msg.long_accel = 0.5862907979576069;
    msg.alt_max_msl = 0.9236411726838475;
    msg.dive_fraction_max = 0.8960175986881183;
    msg.climb_fraction_max = 0.9435142621185599;
    msg.bank_max = 0.07482881870554836;
    msg.p_max = 0.020504883230412774;
    msg.pitch_min = 0.31792480081385865;
    msg.pitch_max = 0.6065262184433684;
    msg.q_max = 0.26590165952393763;
    msg.g_min = 0.7573100339900944;
    msg.g_max = 0.8641437207307774;
    msg.g_lat_max = 0.7778603012773504;
    msg.rpm_min = 0.1643925774955577;
    msg.rpm_max = 0.997897834146399;
    msg.rpm_rate_max = 0.047950737237654306;

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
    msg.setTimeStamp(0.5773525295769361);
    msg.setSource(27718U);
    msg.setSourceEntity(219U);
    msg.setDestination(12007U);
    msg.setDestinationEntity(69U);
    msg.op = 102U;
    msg.speed_min = 0.09535047535877339;
    msg.speed_max = 0.9907473134297273;
    msg.long_accel = 0.033347388431742786;
    msg.alt_max_msl = 0.05426710987133687;
    msg.dive_fraction_max = 0.7822529135852091;
    msg.climb_fraction_max = 0.9320364085862178;
    msg.bank_max = 0.4026451783907615;
    msg.p_max = 0.15631931828323942;
    msg.pitch_min = 0.2604363952960532;
    msg.pitch_max = 0.3835498635753317;
    msg.q_max = 0.7197677914913723;
    msg.g_min = 0.6267302558404857;
    msg.g_max = 0.7714505424800349;
    msg.g_lat_max = 0.7424881475009829;
    msg.rpm_min = 0.8625530820638626;
    msg.rpm_max = 0.03950038591144289;
    msg.rpm_rate_max = 0.41525512403774567;

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
    msg.setTimeStamp(0.39812754627596747);
    msg.setSource(47257U);
    msg.setSourceEntity(54U);
    msg.setDestination(54978U);
    msg.setDestinationEntity(147U);
    msg.op = 214U;
    msg.speed_min = 0.8731543731024982;
    msg.speed_max = 0.1902060674192314;
    msg.long_accel = 0.506415096583399;
    msg.alt_max_msl = 0.3396140414945876;
    msg.dive_fraction_max = 0.18600139889868805;
    msg.climb_fraction_max = 0.623757710824818;
    msg.bank_max = 0.8130441680267935;
    msg.p_max = 0.2529399743055143;
    msg.pitch_min = 0.6389188829849839;
    msg.pitch_max = 0.7138183078993885;
    msg.q_max = 0.6583597549249707;
    msg.g_min = 0.41514670485131866;
    msg.g_max = 0.8977862621019977;
    msg.g_lat_max = 0.25946620944991194;
    msg.rpm_min = 0.2984105161728392;
    msg.rpm_max = 0.6835241984974155;
    msg.rpm_rate_max = 0.1866181163101246;

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
    msg.setTimeStamp(0.2520379410699378);
    msg.setSource(44503U);
    msg.setSourceEntity(17U);
    msg.setDestination(14744U);
    msg.setDestinationEntity(129U);
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7155890230570403;
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
    msg.setTimeStamp(0.23465331142981238);
    msg.setSource(47977U);
    msg.setSourceEntity(205U);
    msg.setDestination(39004U);
    msg.setDestinationEntity(67U);
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("NDDCNUAPZXNLELYXGPKYXPCWIAHHJMMNUXRBVVIWSQRJFLKZFWTSYAXBCEAGDMTPUCIBOBGFYYKWDNBERFEQUPDODWLCOWFJIGDANTTRTSHPOZRVIOXVQLQGZYXENAGCBDPHSKCYRWTIRLJFQAHEKENKBLSNJSIYZIXZKDXJCMEGKZMVUKPMVFELVYMJUAO");
    tmp_msg_0.service_type = 58U;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8555262861509725);
    msg.setSource(2852U);
    msg.setSourceEntity(2U);
    msg.setDestination(22424U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.24231643607598474);
    msg.setSource(19645U);
    msg.setSourceEntity(24U);
    msg.setDestination(33195U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.1596028206445771;
    msg.lon = 0.030348896444467255;
    msg.height = 0.6578826651995168;
    msg.x = 0.9757054464188191;
    msg.y = 0.43242049582229625;
    msg.z = 0.39454662006900165;
    msg.phi = 0.5089168716336865;
    msg.theta = 0.7695411336160263;
    msg.psi = 0.9332734751353496;
    msg.u = 0.7817819290851687;
    msg.v = 0.46522159318116074;
    msg.w = 0.6685905233261162;
    msg.p = 0.3743585884987607;
    msg.q = 0.1793560642017935;
    msg.r = 0.17077082217516326;
    msg.svx = 0.629525084751451;
    msg.svy = 0.47969155549799836;
    msg.svz = 0.27058251607396755;

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
    msg.setTimeStamp(0.7633046362994946);
    msg.setSource(41508U);
    msg.setSourceEntity(69U);
    msg.setDestination(22457U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.12622256874450877;
    msg.lon = 0.5717909977998857;
    msg.height = 0.4374675970916069;
    msg.x = 0.17025168985982164;
    msg.y = 0.1477541812722566;
    msg.z = 0.5536841984479652;
    msg.phi = 0.43160483948690753;
    msg.theta = 0.14067708659187816;
    msg.psi = 0.1149720867451316;
    msg.u = 0.031184132970868084;
    msg.v = 0.023255662836753177;
    msg.w = 0.20855964498705382;
    msg.p = 0.45430136213176675;
    msg.q = 0.14375196936294643;
    msg.r = 0.31333579744483664;
    msg.svx = 0.7214985242961551;
    msg.svy = 0.9429177299402668;
    msg.svz = 0.9060384275597456;

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
    msg.setTimeStamp(0.2863179434450579);
    msg.setSource(15297U);
    msg.setSourceEntity(68U);
    msg.setDestination(35593U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.4805290931910988;
    msg.lon = 0.49772970165165653;
    msg.height = 0.8474387572080899;
    msg.x = 0.974645543380552;
    msg.y = 0.34774158714916914;
    msg.z = 0.32261545670183445;
    msg.phi = 0.26574897964885724;
    msg.theta = 0.8298589744525153;
    msg.psi = 0.5580841472541469;
    msg.u = 0.7428807698109015;
    msg.v = 0.7399849525589562;
    msg.w = 0.005828202322374465;
    msg.p = 0.8617606322887957;
    msg.q = 0.5147462211087657;
    msg.r = 0.1927473648840171;
    msg.svx = 0.6836325269062271;
    msg.svy = 0.7225025823401885;
    msg.svz = 0.33741450998415323;

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
    msg.setTimeStamp(0.7066572244799104);
    msg.setSource(32981U);
    msg.setSourceEntity(121U);
    msg.setDestination(42758U);
    msg.setDestinationEntity(134U);
    msg.op = 43U;
    msg.entities.assign("OXFSNKXSYQIUBAXQGAPIXMNKXTDVZEWYPWWCLSZCLDOLMPOJIBGYZQZZRFEKPGSZTPSXCUSWQAWTVUNWIYBYGBOGFUXVBHBIQMNYUNLBLAKWJFI");

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
    msg.setTimeStamp(0.654163967150843);
    msg.setSource(42003U);
    msg.setSourceEntity(93U);
    msg.setDestination(45836U);
    msg.setDestinationEntity(59U);
    msg.op = 105U;
    msg.entities.assign("GZVJOOGACHTDMGIUOLIAZMYKZPKXSWBWTWNKF");

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
    msg.setTimeStamp(0.043069184618346745);
    msg.setSource(38354U);
    msg.setSourceEntity(102U);
    msg.setDestination(35728U);
    msg.setDestinationEntity(41U);
    msg.op = 46U;
    msg.entities.assign("AENBTAZZCXAVUJNXEGNUCJPWKEZSBPFTIMMTKBAIELCVWBPDIDOMHHHLTAGPJHUZMWVBQONWSPCJWWTPQVCQYSKTRZPAY");

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
    msg.setTimeStamp(0.5588568931581611);
    msg.setSource(4918U);
    msg.setSourceEntity(136U);
    msg.setDestination(14838U);
    msg.setDestinationEntity(155U);
    msg.type = 214U;
    msg.speed = 12961U;
    const char tmp_msg_0[] = {21, 65, 58, 30, 64, -114, 28, 49, 4, -39, -87, -104, 13, -54, -35, 72, -26, -56, -89, -81, 107, -70, 40, 84, 90, -93, -119, 103, 26, -121, 57, 84, -54, 28, 48, 3, 26, 35, 68, -32, -11, 74, -8, 111, -91, -37, 108, 85, -44, -51, 89, 26, -90, 109, 60, 102, -79, -59, -67, 79, 91, -101, -48, 79, 41, 47, -29, -62, 26, 89, 105, 97, 77, 91, -56, -47, 73, -91, 101, 110, -66, 119, -100, 1, -43, 22, 15, -24, 122, 98, 20, 101, -41, 22, 97, 117, 93, -28, -19, 57, -93, 126, -82, 6, -59, 97, -3, -9, 110, 82, 49, -28, -30, -128, -29, -13, 4, -9, -26, 87, -85, -54, -123, 38, 83, 36, 32, 72, -76, -123, -14, -3, 73, 33, 119, 96, -78, 25, 118, -24, -77, -72, -9, 50, 96, -128, 10, -67, 20, 4, -115, -75, -11, 55, 5, -5, -128, -124, 100, -14, 49, -94, -9, 83, 20, 100, -66, -106, -89, 106, 19, 19, -93, 8, 31, -66, 82, -114, 119, 7, -76, 35, 67, 88, -118, 77, -88};
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
    msg.setTimeStamp(0.42779471082435916);
    msg.setSource(59989U);
    msg.setSourceEntity(98U);
    msg.setDestination(7825U);
    msg.setDestinationEntity(139U);
    msg.type = 123U;
    msg.speed = 12575U;
    const char tmp_msg_0[] = {26, 30, 22, 73, 19, -18, -15, -113, -44, -76, -127, -126, -45, 98, 28, 6, -121, -57, -105, 2, -25, -100, 51, 103, 66, -125, -34, 96, 30, 29, 124, 51, 123, -111, 51, 43, 12, 72, -100, -76, -110, 68, -107, 113, -81, -29, -122, 111, 69, 27, 87, -79, -2, -59, -119, -65, 40, -57, -2, -98, -72, 63, -116, -81, 119, 82, -66, 26, -19, 21, -16, -32, 111, 97, 10, 2, -20, -25, -120, 32, -34, 76, 22, 66, 80, 64, -95, -83, -121, -69, -6, -78, 68, 69, -26, 83, -16, -11, -7, 72, 65, 20, 86, -105, 39, 96, -69, 25, 99, 24, -90, -54, -87, 36, 32, 18, 44, 119, 62, 92, 27, 49, -4, 47, -97, -82, -70, 31, -95, -79, 76, -77, -16, 11, -77, 14, 56, -8, 124, 21, 93, -17, -63, -100, -44, 83, 31, 105, 113, -28, -124, 114};
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
    msg.setTimeStamp(0.03049688740671075);
    msg.setSource(59716U);
    msg.setSourceEntity(208U);
    msg.setDestination(19930U);
    msg.setDestinationEntity(1U);
    msg.type = 234U;
    msg.speed = 12919U;
    const char tmp_msg_0[] = {-27, 15, 27, 35, 125, 44, 45, 37, -29, -59, -8, 60, 53, 9, 61, -97, -14, -14, 117, 25, -123, 111, 18, -14, 37, -100, -117, 121, -19, 68, -23, 75, 104, 98, -116, 61, -1, 18, -110, -113, -21, 77, 104, -83, -80, 17, -71, 125, 41, 71, 118, 83, 50, -10, 68, -66, 6, -23, 86, 126, 94, -46, 28, 85, -1, 0, 6, 73, 118, 30, 22, 0, -102, -95, -101, -119, 30, -78, 101, 31, 90, 103, -50, 11, -90, 121, 95, 56, -49, -47, 1, 50, -70, -93, -46, -120, 29, -47, 98, 119, -31, -104, -84, 7, 92, 15, 66, -36, -116, -2, -112, -55, -101, -61, -38, -92, -116, -60, -70, 46, 43, -5, -115, -49};
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
    msg.setTimeStamp(0.8980538254475121);
    msg.setSource(33830U);
    msg.setSourceEntity(170U);
    msg.setDestination(30010U);
    msg.setDestinationEntity(179U);
    msg.op = 220U;
    msg.tas2acc_pgain = 0.6632167737185176;
    msg.bank2p_pgain = 0.04553637110675446;

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
    msg.setTimeStamp(0.9649150740201038);
    msg.setSource(24308U);
    msg.setSourceEntity(113U);
    msg.setDestination(7486U);
    msg.setDestinationEntity(200U);
    msg.op = 223U;
    msg.tas2acc_pgain = 0.34215192054526633;
    msg.bank2p_pgain = 0.03784879280190245;

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
    msg.setTimeStamp(0.1715878891451048);
    msg.setSource(23233U);
    msg.setSourceEntity(49U);
    msg.setDestination(53023U);
    msg.setDestinationEntity(22U);
    msg.op = 135U;
    msg.tas2acc_pgain = 0.4805077741598577;
    msg.bank2p_pgain = 0.46336338649613307;

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
    msg.setTimeStamp(0.32990320848896526);
    msg.setSource(50400U);
    msg.setSourceEntity(93U);
    msg.setDestination(32924U);
    msg.setDestinationEntity(136U);
    msg.available = 3563057283U;
    msg.value = 62U;

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
    msg.setTimeStamp(0.841905409704414);
    msg.setSource(11214U);
    msg.setSourceEntity(45U);
    msg.setDestination(12793U);
    msg.setDestinationEntity(221U);
    msg.available = 3794924762U;
    msg.value = 123U;

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
    msg.setTimeStamp(0.07474232097403621);
    msg.setSource(28198U);
    msg.setSourceEntity(59U);
    msg.setDestination(38315U);
    msg.setDestinationEntity(117U);
    msg.available = 3795464409U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.5801974811948972);
    msg.setSource(18442U);
    msg.setSourceEntity(56U);
    msg.setDestination(17334U);
    msg.setDestinationEntity(234U);
    msg.op = 74U;
    msg.snapshot.assign("JBWKWRBYXLEIFPCAHSBKZYPZFCXUPKXHCFROQEKCMPYTQEONGVUJNBVWVYOWTBMMEREITFSLMQBFQIAOSGUNKDXAWZOSOVXUECYGWLUCVTQDMASCOBXZQFUHFVLSSHAEONYAJADQNMJCSGDL");
    IMC::AcousticMessage tmp_msg_0;
    IMC::Formation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.formation_name.assign("TMXSOAMRAFWQTSUXSFKUNEHVESUNKMTVXXD");
    tmp_tmp_msg_0_0.type = 134U;
    tmp_tmp_msg_0_0.op = 42U;
    tmp_tmp_msg_0_0.group_name.assign("ETZAGHJFZHEOSHOVXVAVDFJLPGNDTUGLKBYWXPIGBWHMEVTJZIWNTSPFHVLQEOAFCMZTNHKUQJBMJRSPDLGXXPQOADXKZBQGAWKQGZGZYVQZLCFVLCSQJYNBJZOWSWYUDQPJHEXTNUYEUYKCQBHCR");
    tmp_tmp_msg_0_0.plan_id.assign("UJGLEUDAXGHMQCHZDJCWBIJWBNPTJGDEWPFQSOPKIOUHWCDGVPZFVPMIGYRROYJVMSQAJYOAKECFYEJXVSQNMTVIYVQWZZQWKGNTBKMLUNQILNJXNAAEPZKCSMSROFPUJVDZKXDHELIZBEZRHAAYAKNDVKGXBBURPEGMMSSW");
    tmp_tmp_msg_0_0.description.assign("LTBZKJRVJKWLANZCRPHSVCRTHZLXKNSAUEIITCKMAWURXFLCQPGDCALS");
    tmp_tmp_msg_0_0.reference_frame = 13U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vid = 47881U;
    tmp_tmp_tmp_msg_0_0_0.off_x = 0.6498985065642379;
    tmp_tmp_tmp_msg_0_0_0.off_y = 0.810977189209082;
    tmp_tmp_tmp_msg_0_0_0.off_z = 0.14882191455948968;
    tmp_tmp_msg_0_0.participants.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.leader_bank_lim = 0.6066302641634982;
    tmp_tmp_msg_0_0.leader_speed_min = 0.17461169621027783;
    tmp_tmp_msg_0_0.leader_speed_max = 0.6391657273497049;
    tmp_tmp_msg_0_0.leader_alt_min = 0.2835762557283711;
    tmp_tmp_msg_0_0.leader_alt_max = 0.9588813473163198;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.4373932862906823;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.9273975597105857;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 51073U;
    tmp_tmp_msg_0_0.converg_max = 0.6319117490410823;
    tmp_tmp_msg_0_0.converg_timeout = 55734U;
    tmp_tmp_msg_0_0.comms_timeout = 16419U;
    tmp_tmp_msg_0_0.turb_lim = 0.7218069187279229;
    tmp_tmp_msg_0_0.custom.assign("DBSQVEIZAGGNVFLDMXAWDBRLZMYEOAOZSHXXEWARIYVRCZEQDQBZHXTMUJRUMRZXOQNJFKYUNRLYLTCKMEPSAWMGLKFCLHNCIRSKXIJAGGQQUOGVNVBWCLVFUGHYVSXGBEVHDKTUWZDLPPUXTCRBUWMKOHJKIWPTLEJQNYAKXUBQGPBNVMCTKJTKSIIFWHPFLOPPUAZPSTCANDSZYFFBDJPSZJJYYHHNHQMNYFXIATWIRQMVOW");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8697000090876341);
    msg.setSource(5370U);
    msg.setSourceEntity(161U);
    msg.setDestination(13015U);
    msg.setDestinationEntity(137U);
    msg.op = 126U;
    msg.snapshot.assign("FJRRVHKGZWWQAAXDIICVKNNIEGEEEAPDEYUAZSSTQPKQHRZFQVYBTTTURZRGYCQMCKFVMXIUBWDHZZYXMJUYRMVULEVIFOXJDEHBDATBXKPUFAGMPVJFOTJDGBEURWOWLJBHMUNCGMOMIICXFGRNSXVHBOTGSVAGSNHREQPQCJPOJELZXFSNBWSQOLQIPITUXJJLSMNYRNLZCZHMDOHSOCGWYPFAFNKAW");
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 230U;
    tmp_msg_0.name.assign("OBOVDFUFBDIBHXMKCHZVHAYPTERFLYWQZZQOSPDTRUSJCPPUYFTWUVWIDCGSKPBQRYUGSFRVCPXQCFUHILGAQRNLEKCCNBFGEGVOZWKNZLSCTQAXWLDYNARQPKKEKUCAKYJNTAVRWJAUFJTIJHHTJXKNWTOXGIXDJANYIHMSLMZIRSBDYITMWIVUCXLGKVW");
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
    msg.setTimeStamp(0.024528095705831587);
    msg.setSource(59817U);
    msg.setSourceEntity(145U);
    msg.setDestination(40898U);
    msg.setDestinationEntity(82U);
    msg.op = 63U;
    msg.snapshot.assign("AOKDZVIEBIACRCKMMYXDZQCOXZYJAUCPYNFHUBZZJRUTMYDRXUUQQLGFLONIPYBEJCBMGAHXILKJSIVYPPDPMFWQXSIWVPNGSSUQTXBAATLMOWOILJTNSQTDRTZXGEGTYULUZEDVFCQVRDMWNAZPAEJRODQEFGWJQTHSVEBSVIDUYCEHSGKOWKWFB");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 133U;
    tmp_msg_0.mode.assign("ZTSXOZVIRRQYRZSXJHKHHPTEPFNXZWDJBEQLNATXMLXWCSCUGZPVYMOHZQXDJEOBCMQSEHKZNIOYMROBYGWDWVFNKAFQJAIHSALXEIGKVIOMMWGUPMYEIPQBZETL");
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
    msg.setTimeStamp(0.4944134353830836);
    msg.setSource(10236U);
    msg.setSourceEntity(174U);
    msg.setDestination(51638U);
    msg.setDestinationEntity(198U);
    msg.op = 196U;
    msg.name.assign("KPXJEGEHTCNJOUSGUQPXXVBVAGWLDTUFZVJVXCXBYSPJEQOCKDVVSNSQXQCLDYPMGSKGEWB");

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
    msg.setTimeStamp(0.36520834154121673);
    msg.setSource(12323U);
    msg.setSourceEntity(240U);
    msg.setDestination(31300U);
    msg.setDestinationEntity(173U);
    msg.op = 2U;
    msg.name.assign("AIYICSDBTMRZYQJWCSRDVRYTZYSJOGZPYIIURABAJRXMXMRQWGHLNKHOUJFQHSKKZOZDBFSANCWHADCXWDXTVREQCQLQUPAFPPGMTCMHOEBWCDTKNMHSXVHOOYAMLGZEZLVFYGPVVSOX");

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
    msg.setTimeStamp(0.3908270115081124);
    msg.setSource(13034U);
    msg.setSourceEntity(95U);
    msg.setDestination(54689U);
    msg.setDestinationEntity(248U);
    msg.op = 64U;
    msg.name.assign("MNWBTQYXYJWZXTYQGOHUBMQCWIRBJYCAZRKBSEJUQPHKOLPYQGXPFJONJDVVASHVROCLLTFEQT");

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
    msg.setTimeStamp(0.6946864059318841);
    msg.setSource(22837U);
    msg.setSourceEntity(156U);
    msg.setDestination(2080U);
    msg.setDestinationEntity(203U);
    msg.type = 49U;
    msg.htime = 0.09588977865906201;
    msg.context.assign("AJMGLWTEHKWZDXACQOEMMIQRGKVFQHJSXVUUDOQVBNIPJARXJJCFBY");
    msg.text.assign("GREZZUXBGCPCECKMRICQEKKFCHBKFOHSNMUQZIJIWIPWYPLDIYWVAGNAHOVDZWLKDTBQFYXZOJSGZLNABHPNVXSBABJHQJMYTPCGWDFNQHOYXUXXMUOMVTALEZSOSXIXDBZZWCFTHYOUDQVLJKVQOQACYRKTBEAVSUDMLHJIE");

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
    msg.setTimeStamp(0.30256081100541876);
    msg.setSource(23340U);
    msg.setSourceEntity(183U);
    msg.setDestination(2247U);
    msg.setDestinationEntity(224U);
    msg.type = 53U;
    msg.htime = 0.9575092627566085;
    msg.context.assign("WHEUZPYYVIXXGMJIMRRWTKEKLSQSWAUIIOBSKBXEGATJCGFXDFNANXELHHAEZZTVJDXUNSERMMUDCWGAPNHTBIQZKSTIRVJBYDQXXLWAFCWOZYVHLGPEYPPIRJTCLUINBYXNVJLGSOHHHMYNF");
    msg.text.assign("CFDUGQUWRHIDDVEFEZQCHFYMVKQKWQGTRLDMCNAOXIRYACZIYSXBTBMYDGYHBDSPPUGJSPV");

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
    msg.setTimeStamp(0.3316739401405415);
    msg.setSource(57766U);
    msg.setSourceEntity(26U);
    msg.setDestination(64168U);
    msg.setDestinationEntity(55U);
    msg.type = 244U;
    msg.htime = 0.8622925689242326;
    msg.context.assign("MLLSXTBTFPKJZBMOEUBAWZLQGSXQKIDYHHDNVDFCWSTKIURCLOSNBAAOHYYOTIORHVXVOPAGERYSAQRSSZHGODZPFCFOTKCXKFIYCJBNHCSVZRMGPCLRIPAFWGZXRRMYRUZTDMWDGQHDUMEYOBQEKFQWWMIVXBZNXJANUQJKQJZLNEIJKJXNQPTLJWHXMGAWVWFBBUGXNBVKYGMECHTDUIJJYVESFK");
    msg.text.assign("AQHBUWROJHWCHJXZRUZOBPUPCCYSOMJAOCHKGCHBQHPMC");

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
    msg.setTimeStamp(0.20144681445412982);
    msg.setSource(41944U);
    msg.setSourceEntity(161U);
    msg.setDestination(285U);
    msg.setDestinationEntity(197U);
    msg.command = 33U;
    msg.htime = 0.46377264232356497;

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
    msg.setTimeStamp(0.7281667696969983);
    msg.setSource(7607U);
    msg.setSourceEntity(46U);
    msg.setDestination(48058U);
    msg.setDestinationEntity(9U);
    msg.command = 108U;
    msg.htime = 0.36269959074478264;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 184U;
    tmp_msg_0.htime = 0.037263617905794466;
    tmp_msg_0.context.assign("OKQBDSGODFCFYZRRZOQGIMULCRAWWKBCGOTNYPEJQKDFAMCNTGBEJVCJGEQHMWQEHMKPDBGYUNRBATBOJEJOETVRICZULQXBPNTMOOUVSRPZBDIDTJZXUCTMLLWCXLUGDJXPETAEAOSCPAGPFXSVMWPHXREEMHXNDWKAVKTZJCVVSFYMQZWUNWAHIMISSQJNFULDLTXWYSPK");
    tmp_msg_0.text.assign("HBDXLKBAHKMPCAFOJSYPNLNOOFJMVKD");
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
    msg.setTimeStamp(0.5893587390080965);
    msg.setSource(41973U);
    msg.setSourceEntity(179U);
    msg.setDestination(9998U);
    msg.setDestinationEntity(164U);
    msg.command = 26U;
    msg.htime = 0.3436174772309105;

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
    msg.setTimeStamp(0.8089664419334546);
    msg.setSource(23804U);
    msg.setSourceEntity(202U);
    msg.setDestination(17975U);
    msg.setDestinationEntity(115U);
    msg.op = 82U;
    msg.file.assign("CFJUKLYFKYNPOXVCAANYZJATCIBXANJDZBRDUGSUFSQHDPYGFXNHHXRPHLIPOLBBSNSWZBC");

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
    msg.setTimeStamp(0.14381896366642477);
    msg.setSource(57238U);
    msg.setSourceEntity(224U);
    msg.setDestination(28766U);
    msg.setDestinationEntity(111U);
    msg.op = 189U;
    msg.file.assign("XCMSMPIMZBVCGFXTXWNDNGHBVLYZLCHELBPQJDTYAIVCRQTPJJHOFHHGVBGWSKUODCTEBJFYAMTJRHTKPAQZRPZOAJSHOFQZ");

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
    msg.setTimeStamp(0.31953126378195484);
    msg.setSource(46454U);
    msg.setSourceEntity(184U);
    msg.setDestination(8640U);
    msg.setDestinationEntity(84U);
    msg.op = 66U;
    msg.file.assign("CSHTMNZVCLQRGNEBAXWFXWRGEPUCOBJVUPWLGPVMEUOHYPQFBTBJKQAYZLPMTQWKOTLCIMSIONP");

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
    msg.setTimeStamp(0.3998142238702661);
    msg.setSource(48884U);
    msg.setSourceEntity(103U);
    msg.setDestination(12616U);
    msg.setDestinationEntity(213U);
    msg.op = 220U;
    msg.clock = 0.07993785547702137;
    msg.tz = 76;

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
    msg.setTimeStamp(0.503206522189044);
    msg.setSource(62554U);
    msg.setSourceEntity(118U);
    msg.setDestination(51010U);
    msg.setDestinationEntity(4U);
    msg.op = 140U;
    msg.clock = 0.9429495281265496;
    msg.tz = 95;

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
    msg.setTimeStamp(0.925439110887948);
    msg.setSource(12711U);
    msg.setSourceEntity(16U);
    msg.setDestination(40287U);
    msg.setDestinationEntity(181U);
    msg.op = 233U;
    msg.clock = 0.10031124582322448;
    msg.tz = -122;

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
    msg.setTimeStamp(0.9057130345199316);
    msg.setSource(45141U);
    msg.setSourceEntity(247U);
    msg.setDestination(11996U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.04770423462979989);
    msg.setSource(20321U);
    msg.setSourceEntity(47U);
    msg.setDestination(65243U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.5681668950535174);
    msg.setSource(6076U);
    msg.setSourceEntity(78U);
    msg.setDestination(27918U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.4806093554301286);
    msg.setSource(5141U);
    msg.setSourceEntity(167U);
    msg.setDestination(63566U);
    msg.setDestinationEntity(238U);
    msg.sys_name.assign("TKNATPJWGLGVSKOUIILHVOVWDPRLOZERGCVJYSQBVATQOYWGKMSWUESRHLLCVTLPITYYAHJNTQLBFQFRDAZQZMMGYKQRBNZORYWIVZDUXVEFAALHDFNCTKKJRESWOSENGTZSVBKPVKYBLAMCPOOQE");
    msg.sys_type = 131U;
    msg.owner = 3818U;
    msg.lat = 0.5356358344431443;
    msg.lon = 0.7940421236956768;
    msg.height = 0.6625002296454141;
    msg.services.assign("YVCFFJAKCJOCMKCWCHYLMEPEMUFHVVGMPXWHXSQTAJLOPGNBVTUQUBRWIEXDYXEKPWIGOSYSFKJYQISJERKUIBEHFKPAMMZOMEZACAAUSPGTPQATUSHQKNWZFROPDDJMMQHZBGRVKNOYTNVKGNWPRJUGGYWNLMTRBWGDVHNNVQKLZWFNXXDXRZTHYOYOUJVIXXO");

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
    msg.setTimeStamp(0.7130466447624152);
    msg.setSource(29742U);
    msg.setSourceEntity(220U);
    msg.setDestination(35023U);
    msg.setDestinationEntity(240U);
    msg.sys_name.assign("UFYCJHWKLXZYJJFPRRSGIDFQBHIRUVUEXRZFWOYMBSCAXQPURPNMSTWXKCJDGPFNMUVAMUBONBEPVLRWNHKSPNPBYITPCIXBJKHWEFTYOEKEKLSZWCCVOJAPHMWIWTQQODVQLGGFOKOBBMJKIHYDARXWOCILRGEXGLKGVLYZDNHEVDLNQDUURZAIQGZGTSNLHTUMFOQYFYZJBTCASNSKSFASNICEPDVTXHHACIDTQOZVREWGXDZMUMBAQ");
    msg.sys_type = 145U;
    msg.owner = 3375U;
    msg.lat = 0.0799920545663253;
    msg.lon = 0.6972023846311071;
    msg.height = 0.7741544307894203;
    msg.services.assign("OOBEYLFSTTHWURHCBLUQFANQOHNWRKJPRXNYZAOUPLQGQYUJTJFQSQEEPNGVICMGJXAAFXFMTLWQKEVAZMCZSCRKKYESSNOBVHRCBBYUQMHCLVROJDGMRJD");

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
    msg.setTimeStamp(0.4295277174818569);
    msg.setSource(53982U);
    msg.setSourceEntity(132U);
    msg.setDestination(9203U);
    msg.setDestinationEntity(148U);
    msg.sys_name.assign("PPIVCMRKEMZLDYELXTABBQXSCSLWEMKOIEOMJBQBZTJETFCPYUIZUISKBGUAPNVOSRFGXTHCDMHGMPNJLRWCTHBZEJWTXUHQIUFVDQDMWPPIHAIRXHSGRTQLCLBHRFKFOCSYOUQIQFMOZVLGMKBUNIUAZKYZEKOHBWEIGWDDPXCKSSVTZTWWYPRDZDAPXVFNCADRANYXYCQONKXWSLNGYAAGRSNEJVJ");
    msg.sys_type = 97U;
    msg.owner = 47625U;
    msg.lat = 0.9498520479946616;
    msg.lon = 0.7606308106792152;
    msg.height = 0.16809708184050187;
    msg.services.assign("NVDJAQJHPNFHSPXLTDQINXBFTOZKEWUSQUUFMTFLZQIGEHNXF");

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
    msg.setTimeStamp(0.8185626344037988);
    msg.setSource(49798U);
    msg.setSourceEntity(210U);
    msg.setDestination(3046U);
    msg.setDestinationEntity(203U);
    msg.service.assign("BQQFBDPVSZRWUVJWUIWKGLFWVMOFOVDKRLGZUCOSMYUBUCHAGOYOAPTKMVNERYEPVWKH");
    msg.service_type = 152U;

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
    msg.setTimeStamp(0.28612265730244735);
    msg.setSource(35706U);
    msg.setSourceEntity(163U);
    msg.setDestination(14312U);
    msg.setDestinationEntity(79U);
    msg.service.assign("QHEXQMBWANGGFRWKYFEYLTHIJVXDPTNKMWCPDQRLGWSNTRCBIXQNKVGYGIFDTSONVZRXQ");
    msg.service_type = 63U;

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
    msg.setTimeStamp(0.1596474800204255);
    msg.setSource(11914U);
    msg.setSourceEntity(32U);
    msg.setDestination(12761U);
    msg.setDestinationEntity(194U);
    msg.service.assign("USXARLQLCILXEPNMJKUOEGSQEFHFGJJDITISLGYRRFCUTJHEUKEGRUTGLEGPONEVHYBVYILXAIRZSGHNQUTPBIYPMUEDVLWSOQPNWNFBAQPNCAGIZUHXJZCZACURDFDMDCKHAGRDOZIABSSYAQKXLYWZZ");
    msg.service_type = 92U;

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
    msg.setTimeStamp(0.1378204599777395);
    msg.setSource(6364U);
    msg.setSourceEntity(55U);
    msg.setDestination(19978U);
    msg.setDestinationEntity(79U);
    msg.value = 0.8551806765407794;

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
    msg.setTimeStamp(0.12177622151539336);
    msg.setSource(45125U);
    msg.setSourceEntity(23U);
    msg.setDestination(51359U);
    msg.setDestinationEntity(22U);
    msg.value = 0.06652388200443515;

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
    msg.setTimeStamp(0.5689191706101522);
    msg.setSource(35097U);
    msg.setSourceEntity(97U);
    msg.setDestination(21606U);
    msg.setDestinationEntity(139U);
    msg.value = 0.8715840557096505;

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
    msg.setTimeStamp(0.6805530886653944);
    msg.setSource(3523U);
    msg.setSourceEntity(40U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(200U);
    msg.value = 0.5545934378511165;

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
    msg.setTimeStamp(0.7520952939389952);
    msg.setSource(9796U);
    msg.setSourceEntity(129U);
    msg.setDestination(53345U);
    msg.setDestinationEntity(241U);
    msg.value = 0.47410730374454124;

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
    msg.setTimeStamp(0.6354085697338054);
    msg.setSource(15937U);
    msg.setSourceEntity(90U);
    msg.setDestination(40230U);
    msg.setDestinationEntity(120U);
    msg.value = 0.6892510125822956;

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
    msg.setTimeStamp(0.9842978077612964);
    msg.setSource(15059U);
    msg.setSourceEntity(142U);
    msg.setDestination(62959U);
    msg.setDestinationEntity(163U);
    msg.value = 0.06334296425751218;

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
    msg.setTimeStamp(0.7804504720181756);
    msg.setSource(52695U);
    msg.setSourceEntity(55U);
    msg.setDestination(1741U);
    msg.setDestinationEntity(213U);
    msg.value = 0.7241467216454376;

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
    msg.setTimeStamp(0.03522271581727632);
    msg.setSource(20923U);
    msg.setSourceEntity(32U);
    msg.setDestination(12743U);
    msg.setDestinationEntity(58U);
    msg.value = 0.6183716580295281;

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
    msg.setTimeStamp(0.7162718950912532);
    msg.setSource(5775U);
    msg.setSourceEntity(92U);
    msg.setDestination(11395U);
    msg.setDestinationEntity(85U);
    msg.number.assign("YYPZHQRPSTBFHLLEEJLBBOYXNCLPTVYIBZOLJYJAXNSMFNKXSPFNRICWTHVRLMKG");
    msg.timeout = 21028U;
    msg.contents.assign("TORMGNTQMZGAJPEMELWMJMCNMSVNENBEHQJSBCNLTZLIADKLDGNGQANXP");

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
    msg.setTimeStamp(0.6574719814260741);
    msg.setSource(34969U);
    msg.setSourceEntity(101U);
    msg.setDestination(63786U);
    msg.setDestinationEntity(175U);
    msg.number.assign("OLNSZRJGAATLIELQSDETTYIHKDBUZQWFVGCIKNVPQYIOJXBKMLUFHIOPRIQGSWNSUYJHCBEUWRFJSXELPGQDWFTZWOZASXXOTCFRCFOAVOHUCBCJZYZXPQCYVWVMQZLSIICGHIDZKBHPPNUAMPBYRLQXSENM");
    msg.timeout = 32573U;
    msg.contents.assign("IRDSMKXFEEXTTYCVDBDMEC");

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
    msg.setTimeStamp(0.6121874866650573);
    msg.setSource(4196U);
    msg.setSourceEntity(78U);
    msg.setDestination(28306U);
    msg.setDestinationEntity(231U);
    msg.number.assign("KXARPVIDNGYAKQMHFXYCHLUO");
    msg.timeout = 6099U;
    msg.contents.assign("HKCEWUGYCWFSWVUXIFZKTTTMFKHQZXKTTYUWGZQRKPNYJLREXMNLXOASUUMDJBZFFDZPBBQAR");

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
    msg.setTimeStamp(0.3103317558298443);
    msg.setSource(42U);
    msg.setSourceEntity(1U);
    msg.setDestination(51413U);
    msg.setDestinationEntity(180U);
    msg.seq = 1730605641U;
    msg.destination.assign("YAKGENWVKYHZYAALACQPCPWFOSQVLJSEYULSMGOPBMIPAOKPGWNOQXFFHNJTRHFZDONIKKTXUSTVFXWBBBWCUOPPNJSOSMPIYGZVSMXQEDETDXLXLWFHAPRLEFDZVEDCQBDIUZMMFMYVTQQVLTCQSCRQRIZDKLHTHVMIKJTZVYMSXYIZNRMKKAIBRRJFIGWRRCVGNHPDULBWOUJJHBWEWZGNHTNQFDAUIAXKHCTCX");
    msg.timeout = 63032U;
    const char tmp_msg_0[] = {-110, 121, 90, -7, -98, 126, -61, 61, 16, 111, -119, 85, -39, -90, 70, 91, 119, 14, 66, -75, -43, 125, 82, -18, -67, 53, 65, -1, -50, 90, 101, -1, -125, -43, 89, 122, -7, 99, 98, 105, -114, -71, -33, 86, -26, 47, -99, -108, -111, 105, 7, -21, -55, 4, 22, -14, 63, 65, -43, -56, 98, -85, -48, -116, -83, 1, 109, 48, 24, 58, 5, -48, 42, -9, -24, 29, 8, 119, -48, 96, -121, -52, -41, 35, 41, -31, -22, -57, -105, -30, -89, 0, 89, 78, -49, -34, -106, 21, 115, 75, -25, -98, 0, 0, -34, 40, -61, 107, -53, -24, 114, 87, 30, -84, -76, -71, -23, -61, 102, -95, 124, 94, -63, 84, 36, 47, 103, -127, 51, 74, 87, -119, -61, 36, 96, -43, -120, -23, -55, -91, 23, -48, -63, -17, 40, 60, -33, -112, -18, -19, 87, -38, 71};
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
    msg.setTimeStamp(0.8685072457531011);
    msg.setSource(28137U);
    msg.setSourceEntity(6U);
    msg.setDestination(17485U);
    msg.setDestinationEntity(218U);
    msg.seq = 1549060853U;
    msg.destination.assign("WJTFNDSIUHCMRFNXPSXBJFRIDLNJJDICHNGUMOJTWAZCOHPYPZBAEGLKANJUWVSXUWYUPXDZLQQCHHTXWZLYAFBWQMJPVYEMEJXYIMJQXDKFAIABOGCISSTSBGLHCWHKFKVCBDMBAVNODAGWUZOQFELELQVBNXRNDFCMRZU");
    msg.timeout = 43654U;
    const char tmp_msg_0[] = {-8, -118, 79, 87, 62, 80, 1, 24, -12, 30, -37, -32, -102, -17, 47, 64, -120, 91, 85, -13, 56, -53, 84, 70, -108, -105, 101, -121, -57, -48, 49, -4, -120, 48, 11, -5, -124, 107, 119, -90, 126, -117, -13, -34, 97, 106, -81, -17, 74, -17, -19, -5, 104, 5, 64, -12, 114, 2, 71, -70, -10, -117, 90, -84, 41, -48, 121, 54, 51, -25, -88, 58, -111, -33, 66, 33, 67, 52, 27, 68, 53, 97, -36, 13, 52, 41, 53, 107, -26, -65, 90, -103, -72, 13, -110, 24, -35, 52, -8, -23, -94, 1, -86, -114, 22, 116, -109, -2, 82, 110, -72, 116, 95, 29, 26, -38, 72, 3, -73, -86, 39, 96, -76, 13, 72, 74, 2, -31, 39, -49, 11, -6, 80, -70, -103, 17, -38, 122, 65, 53, 95, 13, 11, -121, 111, -56, -31, -31, 120, 57, -86, -83, -126, -102, -69, -108, -116, 23, 45, 48, 102, -86, 80, 95, 112, 91, -56, -79, 121, 100, -89, -104, -72, 70, 28, 13, -83, -117, -20, 38, -42, 65, -14, -50, 62, -24, 22, -14, 61, 84, -19, -57, 59};
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
    msg.setTimeStamp(0.3382805253028497);
    msg.setSource(54051U);
    msg.setSourceEntity(92U);
    msg.setDestination(16635U);
    msg.setDestinationEntity(29U);
    msg.seq = 2288891424U;
    msg.destination.assign("RGKNURQRTBMTXCGOWBKWFUAUFXFYZCPHFWCEGYAMUPLZSTBOUHLZZXQZPVGOCMUQNVCLVCHFMAZGHVQTSFIGHANISNESYKJLFDEVMOLYETCROPYKEWDDIJXEKTBLLNVBQOSRJSALQIAJSZEEQFXDWTDIQVMUNYJHHKTMNYCRXVOZA");
    msg.timeout = 44516U;
    const char tmp_msg_0[] = {107, -84, -116, 50, -76, 102, 24, 71, -118, -107, 74, -12, -91, -47, 6, -45, 67, -62, 120, 58, -13, -60, -70, -9};
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
    msg.setTimeStamp(0.027736102344382174);
    msg.setSource(38773U);
    msg.setSourceEntity(42U);
    msg.setDestination(8862U);
    msg.setDestinationEntity(32U);
    msg.source.assign("EGOMOXWBUZSMSOVXRECWIBZHRZYBOHUSQZMHXQKHNEPMXKCYODQMMBDLDTAYDPTLJNMUNLLCCPTJSLUIUBTKPNGUWYJAORDJOGLQBILDGFCCWPAWXHLVQHYIVSFFOFQYKQRFAUAWCGJDAELWPMNOZXPHSCKNJUKCIYTHZSE");
    const char tmp_msg_0[] = {108, 76, -21, 102, 88, 61, 115, -26, 108, 126, 3, 6, -20, -32, -59, -32, 109, 126, 102, 29, 20, -80, 42, -86, -53, 88, -127, -125, -75, -63, -55, 104, 66, -67, -73, 68, -25, -51, 40, -75, -50, 33, -115, -18, -16, -49, 31, 64, -104, -73, -18, 60, 73, -49, -78, 110, 23, -71, 95, 104, -83, -30, -124, -76, -108, -39, 19, -124, -38, 110, -60, -77, 52, -14, 97, 98, 101, 99, -6, 56, -53, 108, 31, 89, 120, 62, -60, -3, -44, 51, -4, -13, -9, -53, -29, 96, -77, 125, 83, 53, 118, 10, 123, -106, -103, -99, -101, 44, 118, -12, -25, -18, -5, 57, 43, 100, -22, 66, -82, -117, -112, -119, 21, 42, 29, -48, -69, -78, -115, 117, -122, -96, -56, 53, 8, -117, -74, -62, -107, -24, 75, -110, -21, -43, -85, 14, 53, 70, -6, 122, 21, 13, -40, -35, -96, -28, 75, -27, 24, 64, -85, -48, 43, -117, -37, -84, 77, -124, -27, -11, -20, 115};
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
    msg.setTimeStamp(0.7952599236113397);
    msg.setSource(61847U);
    msg.setSourceEntity(7U);
    msg.setDestination(53193U);
    msg.setDestinationEntity(241U);
    msg.source.assign("OUNRTRYUHLYNQXBHHPZAUYJMKRVWIYRZMJXXFTLSRYZJVOWOEBZSLMLHLBRWNFGZBCJTQYXINTIVMTBBECIGWDSSBQUVMMCHJOGPMKVJEEQNORCPWYKGXCTULSMYDUKAONHWTFOCVBLXGJWAODJHIRCUFABGEAMQTVSUELVVDZNUADDASBXJKAHPPPWHPNEZIIGFDSCFRFQLOYTEHWXGADGKGKKQXEKQFZNOZ");
    const char tmp_msg_0[] = {98, 61, -38, -29, 52, -39, -27, 90, -124, -47, -73, 93, -104, -76, 66, 3, -106, -95, -42, 53, -86, -2, -26, 109, 126, -90, -75, 72, 10, -8, -49, 63, -41, 16, 48, 97, 107, -61, -105, 114, 71, 33, -55, 4};
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
    msg.setTimeStamp(0.8636121009827878);
    msg.setSource(6949U);
    msg.setSourceEntity(5U);
    msg.setDestination(9323U);
    msg.setDestinationEntity(65U);
    msg.source.assign("FXFHOISLIJDYJG");
    const char tmp_msg_0[] = {-99, 80, 12, 113, -20, -72, 106, 76, -120, -109, 48, 0, 6, -111, -124, -102, 117, 84, -40, -24, -38, -90, 81, -121, -102, 92, -98, -2};
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
    msg.setTimeStamp(0.5213808080088399);
    msg.setSource(1736U);
    msg.setSourceEntity(194U);
    msg.setDestination(24487U);
    msg.setDestinationEntity(227U);
    msg.seq = 2728553057U;
    msg.state = 197U;
    msg.error.assign("QZAYTSZPTOQRVCGQOCWAEPLXLGNNWIZEYKMLWNFOUQCKYYVNZWIJRDBUISKRBPVZHVTZAOJNEWYAOSEJUASNRZMJHHUHEMRPQWGZNXAKTLFPIIJLQQTSGFRURXCNVUMJSLXOJKKFUWHRZGBPKBWTXHFBDXVBMRJEUYARCDGUDDQFKNVMGDETFLGOWUOCHSIC");

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
    msg.setTimeStamp(0.3277042350661399);
    msg.setSource(4790U);
    msg.setSourceEntity(146U);
    msg.setDestination(14130U);
    msg.setDestinationEntity(49U);
    msg.seq = 364299175U;
    msg.state = 125U;
    msg.error.assign("ZWBAHGFVIHKZIADWDJHBXSIDXFWNNUJYZUFPJETBSCDVUIXUNOGSKDIAPSPLROFEIMLLEEBCFFPJ");

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
    msg.setTimeStamp(0.08498646215717476);
    msg.setSource(42155U);
    msg.setSourceEntity(174U);
    msg.setDestination(62815U);
    msg.setDestinationEntity(14U);
    msg.seq = 3590565469U;
    msg.state = 241U;
    msg.error.assign("ZBBFAWOWOZDWSFIYTJEMXCUGPIBWKJKPZRSGITQYHUQJDTDOVJQALCCSRJNEKPG");

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
    msg.setTimeStamp(0.0693995506896593);
    msg.setSource(7612U);
    msg.setSourceEntity(150U);
    msg.setDestination(3400U);
    msg.setDestinationEntity(142U);
    msg.origin.assign("FHMXEZNMPZIFKNIVTCMWUHUGVGTTOZJXLQPGIMVOQMJERBBXMTXHREPJIGSWNDMDSCYFVENJRRYFFHKALJQAWILOMLPDLQXTKKGOUWSZCBYBQAEERMMSPANGLYECNSUSGAEKXSTWQIZKPBFVWJDXDOCOPBDAQBRKPXWHSRCLVQWUXCYODPFLTTHWVL");
    msg.text.assign("TNHPGEBICDOHSNQUIUYGOIFVHNDCNOTPZEPYSUDQPUEZUWSEHKUGIKVSZYYCDWKQGRCAIZQLJMTPJABLOIASCWWBWHORNIWZLSZHXUXYBVLYSMOWXFPKQMKRRVLRBYGVMJMQFUIBFFZMSCMJVFQRVDETRCBNHKAKBJCFBPLJNTAAAJOKVWVLSFGAYMRDPLMWXKJRHHOFXPXGXS");

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
    msg.setTimeStamp(0.2824097027731137);
    msg.setSource(10964U);
    msg.setSourceEntity(245U);
    msg.setDestination(208U);
    msg.setDestinationEntity(12U);
    msg.origin.assign("PLCIXBODDIMVCYSX");
    msg.text.assign("PCJQVEIAADSTAHLDLHENGLQYQVZFSLPBPROPBIAKQRDIISWDBIKYXORPOCROAZPWWARRQZMGT");

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
    msg.setTimeStamp(0.06866539946624639);
    msg.setSource(15907U);
    msg.setSourceEntity(59U);
    msg.setDestination(27198U);
    msg.setDestinationEntity(113U);
    msg.origin.assign("ZJHFXIKDZPDEDUOEAZBYDVCNMJRJITLMVYCLNQMNVQZGBITUKXTIHGCTXWONXBFGGDWPHVKSZJPAWOBOSXDHMLOUKLUWWEAEYQPJQCWRYWNVYRVUXVBOFSJBKQGODYAMNTOWMHGTWLPRQX");
    msg.text.assign("ACKYBCIMDAITZPQBCTBVIFVJHRESESKJHCGLHBAJRXNFGJMBOIOMORYYEFVYEBAQPNSGRBKLPXGZTOEYSDCUPQHKMDSZQTEKZXLYRKJPVYNQ");

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
    msg.setTimeStamp(0.5080861761535566);
    msg.setSource(28383U);
    msg.setSourceEntity(157U);
    msg.setDestination(18784U);
    msg.setDestinationEntity(209U);
    msg.origin.assign("NBOMIZQJFYCPCDVWWAJWSLAQYFIMEIGIKGPMHXTKAFJNOY");
    msg.htime = 0.4512660402845585;
    msg.lat = 0.15755570478144798;
    msg.lon = 0.7345012188529105;
    const char tmp_msg_0[] = {99, -11, -86, -42, -62, 121, -23, -101, -104, 112, 62, 80, 1, -75, 101, -10, 12, 20, 56, 15, 6, -24, -62, -105, -78, 48, 112, -112, -53, 97, 92, 84, -111, 86, -87, 75, 113, -87, -113, 64, -93, -9, 85, 89, -9, -123, 97, -31, 89, 26, -66, 93, 1, -21, -30, -85, -46, 21, -39, -69, 99, -48, 125, 73, 126, -52, -65, 93, 117, -67, -94, -53, -58, 96, 4, -106, 103, 96, -124, 34, -25, -62, 5, -68, 38, 59, -4, 107, -60, 101, -17, -63, 69, 98, -110, -24, 8, -122, -99, 69, -55, -94, -95, 93, 20, 74, 3, -61, -15, -94, -26, 58, -16, -82, 98, -109, -31, -111, 105, -75, -31, 56, -37, 93, 52, -84, 1, -11, -81, -118, -87, -81, -83, 111, 40, 19, -39, 30, 122, 73, 112, 70, -19, 21, -62, 106, 19, -34, -19, -14, -8, 117, -107, 53, 108, 75, 126, -11, 68, 110, 37, -84, -104, 52, 69, -59, -17, -28, -93, 87, -19, 117, 6, 30, 100, -8, -3, 49, 56, -25, 11, -3, -38, 3, -109, 81, 22, -121, -4, 93, 82, -78, 94, 22, 93, 59, -36, -88, 103, -123, -20, 120, 51, -103, 97, -107, -123, 59, -16, -44, -74, -101, 4, -77, 79, 76, 21, 111, 80, 34, 99, -72, -87, -94, 84, -4, 17, 118, -75, 98, -43, -73, 82, -112, 29, 17, -100, -100, -40};
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
    msg.setTimeStamp(0.048604705523212055);
    msg.setSource(28540U);
    msg.setSourceEntity(205U);
    msg.setDestination(4865U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("BPUZMCQHXIWOMGQPWYZXPRXSJJISTMCNSNACODDXIKZWVISJIDCKBFKKLWJOYZBIPFYPBBAFHMGZUBOGRDCPEQFQKLEFMDOULAAJYGLWQRXPUYLNFCQTOUHHGJKIZNQFJYTSGIRRZHVJYEUVYAOEKEMHCBZSANUDSESIWSKREEFZTALDTBDXMNLRELHWVVCULLVNPQKMPTVNRGOCWWIHGQXJ");
    msg.htime = 0.19760541119765662;
    msg.lat = 0.8145233841212306;
    msg.lon = 0.6304955978392573;
    const char tmp_msg_0[] = {-97, 19, 61, 71, 18, -87, 104, -79, 102, 17, -91, -87, 107, 102, -5, 106, 44, -42, -104, -8, 113, 62, -44, -119, 96, 55, -101, 27, -20, 69, -19, -39, 103, 44, 42, -43, -48, 6, 95, 18, 105, 16, 48, -67, 31, 52, 99, 6, -86, -109, 82, -102, -30, -47, -27, -122, 14, 117, 102, -26, 119, -23, 100, -15, -87, 66, 76, -119, -27, 122, -92, -114, 123, -109, -82, 97, 111, 100, -97, 59, -117, 94, 70, 67, -102, 110, 51, -33, -19, -39, -116, -103, 17, -55, 57, -68, 83, 30, 126, 117, 109, 14, -95, 108, 112, 106, 54, 8, 101, 84, 69, 17, 3, -52, 84, -29, 92, -60, -60, -30, -73, -19, 7, 92, 100, 115, 101, -12, -56, 36, -25, 118, 34, 46, -127, -9, -118, 37, 17, 44, 40, 21, 24, 28, 91, -30, -10, -46, -57, -45, -32, -15, 99, -51, 97, -126, 14, 7, -108, -60, -91, -124, -112, -90, -101, 113, -112, -68, -115, -62, -127, 44, -5, -30, -67, -12, 122, 23, -46, 2, -114, -54};
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
    msg.setTimeStamp(0.8301228661536776);
    msg.setSource(15137U);
    msg.setSourceEntity(104U);
    msg.setDestination(60257U);
    msg.setDestinationEntity(182U);
    msg.origin.assign("UXDRTPIHXUSEONRQDFWSDTEYVTVOSOBJQPZBEIABHDRNFKACTYZIVKUPGIATDFFPJBBCIHYQJYJDSLNKAEMCLNZIWBLKWOUHXWQHCDRPRIXKWFIKMAXSJZKEVLYXHPYJLWLMPQUJQCNOVRSAGTCIOHNSINGTGVBQMEKMEMSORUY");
    msg.htime = 0.8984207152950678;
    msg.lat = 0.6391515928311734;
    msg.lon = 0.9321149602841592;
    const char tmp_msg_0[] = {103, 4, -56, 96, 107, -124, 12, -73, -123, -125, 73, 104, 68, -84, -2, -4, -42, 68, 84, -38, 33, 60, -103, -70, 47, -65, 58, 12, -18, -127, 64, -82, -74, -114, -115, -105, -63, 83, -75, 122, -52, 122, 16, 124, 89, -66, 8, 71, -14, -28, 66, 73, -112, -31, 63, -18, 81, 21, -14, -20, 105, -22, 89, 34, -86, 26, 123, -72, -9, -82, -17, 73, 4, 28, 24, 13, 51, 89, 47, -117, -81, 66, -126, 104, 94, 117, -76, -54, -102, -85, -116, -98, -64, 38, 51, -82, 24, 74, -31, 60, -12, 77, 35, 63, 125, -9, 23, 108, -2, 92, -6, 76, 94, -55, -105, 66, -111, -86, -95, -123, 96, 24, 115, 101, 62, -17, -84, -14, -28, 98, 91, -120, -79, -55, -22, 43, 93, 102, -86, 114, -123, -86, 90, -82, 115, -11, 70, 42, -52, 88, -6, 93, -12, 46, -101, 120, -99, -6, -88, -87, -52, -128, 63, 107, 17, -38, 62, -49, 7, 73, 67, -73, -76};
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
    msg.setTimeStamp(0.626849450568066);
    msg.setSource(38101U);
    msg.setSourceEntity(44U);
    msg.setDestination(33350U);
    msg.setDestinationEntity(252U);
    msg.req_id = 1458U;
    msg.ttl = 48191U;
    msg.destination.assign("PKYCCWBJPRKWRZMKCRZTUMWQEKBHIUBEUHLGSBWQVNZWPNTKZQQAVHZFPOGZZOEOJTXFSLTTYLNYONEVGSJDXQAUIQQSCEYUNHXGXIDMUEBEMZRDGHHUFVRAWEKGJVNOVUTDBELDYXVAJGUAJSYFHQSVQJWCTPROAGDCKHHMB");
    const char tmp_msg_0[] = {-99, -30, 89, 1, 33, -103, 123, -63, 55, 66, 83, -53, -116, 53, -113, -19, -124, 64, -6, 52, 48, 50, 53, 78, 117, -3, -68, 92, -79, 101, -62, -71, -29, -18, -11, 96, 27, -83, -38, 126, 83, -118, 31, -39, -80, 27, 45, 9, 84, 100, -27, -36, -50, -62, -62, -109, -9, 4, 103, 45, 25, 54, 76, 110, -46, -22, -119};
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
    msg.setTimeStamp(0.8819604996875073);
    msg.setSource(60821U);
    msg.setSourceEntity(56U);
    msg.setDestination(45818U);
    msg.setDestinationEntity(179U);
    msg.req_id = 11400U;
    msg.ttl = 57221U;
    msg.destination.assign("JTNVIDXCSZCBNMYARQQECWALYOTEUIGJXGEMPQAWKJKNNNKMWJCFQSDVGOOBYRZHPZNXGKWIBFJAJJGNCHFQMRFUDVYRDXFFOOLMXXRFLGTOSTLKKVPNJNZRXERBMWIXMAHGBJCWSKHLGXZTMSPUVELAUWHKDGLQQTFQSWIYVPUJNBPHLVQZBSAPMFZTILPYIAYHHYGOOQTURUFIWWDCDVZICTDZECBXKMSRZCUAHBUBVPEKDTELDYE");
    const char tmp_msg_0[] = {-33, -114, -33, -118, -111, -83, 72, 99, -7, 59, 24, -80, 78, -64, 57, 19, 81, 106, 44, 91, 42, -74, -107, -46, 107, 53, -104, -112, -105, -2, -30, 27, 5, 105, 83, 49, 75, 78, -52, -67, -82, -2, 63, -114, 53, 2, -69, 92, -40, -121, -114, -37, 113, -2, -105, 26, 61, -114, 87, -125, -31, -64, 94, 4, 95, 109, 22, 13, -49, -128, 1, -93, 95, -51, 10, -7, 123, -48, -75, -109, -26, 21, -44, -102, 37, 61, 126, 7, -54, 117, 87, 58, 21, 104, -17, 64, -94, -128, -117, -121, -32, 88, -54, -25, 76, -16, -40, -26, -40, 36, 26, 67, -91, -87, -103, -62, -46, 38, -122, -113, -82, -96, 61, 25, 88, -22, 108, -8, 93, -94, -2, -54, 87, 115, 98, -45, 102, 112, 102, 70, 125, 100, -53, 9, -78, 89, 104, -21, -31};
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
    msg.setTimeStamp(0.40375260714010497);
    msg.setSource(30528U);
    msg.setSourceEntity(216U);
    msg.setDestination(14107U);
    msg.setDestinationEntity(232U);
    msg.req_id = 15874U;
    msg.ttl = 7113U;
    msg.destination.assign("ZINGFUATIJCBKRWGADFWYNOD");
    const char tmp_msg_0[] = {-113, -62, 72, 55, -126, -38, -7, 6, 59, -114, -50, -14, -92, -13, -37, -53, -108, 116, -51, 11, 23, -20, 122, -20, -84, 19, 125, -87, -37, -8, 45, -59, 75, 66, 25, 55, -122, 63, -79, -123, -94, 109, -4, 41, 46, -79, -33, -120, 118, -80, 86, -124, -104, -126, 91, 75, 10, -127, -25, -64, 105, 31, 7, 98, -69, 25, -69, 57, 114, -71, -101, 13, 12, -52, -101, 115, -105, -37, 100, -85, 21, -65, -51, -47, -97, -71, -81, 65, -29, 26, 29, 75, 49, -62, 114, -38, 123, 37, 23, -41, 67, 113, -49, 122, -59, -7, 6, -54, 49, -123, 109, 53, -98, 30, -98, -77, -32, -21, -71, 7, -121, -3, -126, -51, 83, 123, 71, -38, 117, -113, 44, -9, -53, 71, 98, 8, -101, 100, 85, 33, -54, -110, -48, -6, 12, 78, -59, -112, -54, -86, -49, -54, 38, 55, -93, 105, -34, 38, 42, -99, -21, -105, 1, 71, -19, 108, 1, -107, -125, -127, -19, -7, 109, -81, 1, -90, 61, -21, -39, 42, 85, 108, 103, 108, -3, -59, 112, -75, -16, 14, -9, 104, -94, 34, 107, 69, -67, -7, -51, 17, -105, -55, -102, -110, 44, -72, -67, 124, 113, 111, 19, 39, 19, 64, -125, -5, -38, 23, -53, -19, -111};
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
    msg.setTimeStamp(0.5870042920533705);
    msg.setSource(63196U);
    msg.setSourceEntity(23U);
    msg.setDestination(13952U);
    msg.setDestinationEntity(84U);
    msg.req_id = 40422U;
    msg.status = 88U;
    msg.text.assign("YHHADSEGLYNXSWJIVCEIGOGUFBDAFRZIRGF");

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
    msg.setTimeStamp(0.11522402308283086);
    msg.setSource(54573U);
    msg.setSourceEntity(220U);
    msg.setDestination(11731U);
    msg.setDestinationEntity(220U);
    msg.req_id = 25018U;
    msg.status = 123U;
    msg.text.assign("GFEGFIUAFGRJGRMCXRTBLYETOROIYTIAVKBUCYEUVRBSIGSBCPSKJBHDPCQYVRNWZDJIYDLNKKTTVJVMUFOZLPMNUGVFILGFAOMWDQPXFVAJZEZPCHGYWYTOPSOXQMBDRPELJINVFHKZWWRCHCKKESWZIAWGFKVTLCDALAXLODUCQFSYQEULISYSJHKRBBOAYZQQMNMNGXJPEESDUWCZNEPXDAXOXQJBKQOUDULIMAZZSHNWMXNNHQVTWM");

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
    msg.setTimeStamp(0.9962442126220361);
    msg.setSource(55813U);
    msg.setSourceEntity(247U);
    msg.setDestination(35470U);
    msg.setDestinationEntity(8U);
    msg.req_id = 3751U;
    msg.status = 219U;
    msg.text.assign("WZLENIWRMZYQCSWCGOBTLYRMCPZJFGWTKZHVZVKAIFFOJIVFZIAWRWHTSPMKLMASRKUEVOIKXSPVKTZDBQONDAGTXQ");

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
    msg.setTimeStamp(0.48760418374291903);
    msg.setSource(58282U);
    msg.setSourceEntity(212U);
    msg.setDestination(11021U);
    msg.setDestinationEntity(65U);
    msg.group_name.assign("AJEJXPBMRYIXQOZQDZKOYYPFFHNIQCERK");
    msg.links = 380255205U;

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
    msg.setTimeStamp(0.3080270270889198);
    msg.setSource(3710U);
    msg.setSourceEntity(9U);
    msg.setDestination(59521U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("HMARGEOUURBTFJDMCHWCUNSUHKZMGOPXBWANPUSTZYYAEMJIIWWYZJBYBZHBDBROYSUPTJXSG");
    msg.links = 2105357304U;

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
    msg.setTimeStamp(0.7359065047309248);
    msg.setSource(12808U);
    msg.setSourceEntity(107U);
    msg.setDestination(31072U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("LMLZOWFXUFERNQFYKSLAVJYGIEDKUFACZXZTLJSJGNYGDHBMO");
    msg.links = 1786486015U;

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
    msg.setTimeStamp(0.8331969379909818);
    msg.setSource(21746U);
    msg.setSourceEntity(176U);
    msg.setDestination(9702U);
    msg.setDestinationEntity(179U);
    msg.groupname.assign("QZTWTIXIYVSEOFOF");
    msg.action = 135U;
    msg.grouplist.assign("PZNCNVCPGJUECIJEQKORKUTMAVZIBQQDTOOEFDSARASLISHNPPE");

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
    msg.setTimeStamp(0.18990150514052784);
    msg.setSource(25235U);
    msg.setSourceEntity(149U);
    msg.setDestination(46110U);
    msg.setDestinationEntity(248U);
    msg.groupname.assign("XLDZSTKELCBVCIADVHXGCCOVRIGMWZDZHDMUMAJBTIYJNEFXSTYOXUXAFKMCLGRTTWEIJXCUZLYOKEHCBKOJGMWCBSPGGLHWULWREDNRBZVJUBQKAWKFNSISSWVSFWJBLNFJZJNDK");
    msg.action = 189U;
    msg.grouplist.assign("PVIEGPSSRZTOG");

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
    msg.setTimeStamp(0.6549490151416192);
    msg.setSource(30469U);
    msg.setSourceEntity(3U);
    msg.setDestination(2506U);
    msg.setDestinationEntity(189U);
    msg.groupname.assign("TANCVWCWBUSQVNPZAJDVMSVWPRRTKXJREJTPGMTAZUHLTWYINLXZAXEIIPKAFGMMKLENWZUVYQGFRAZUGJMABWIYSPYRKDICCWZOHTIJTUUWXFKBKELXCPLNVJECWTDJQLVZGRFQENIF");
    msg.action = 21U;
    msg.grouplist.assign("AKHGWNCMNADFNEWFSRUHHJQDAUOVZKKXHLJPPWPMLNDDCIIXJGJYZXVIQFADAYTEAFMVAKQSRCQILAJZDYGLYRNZCB");

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
    msg.setTimeStamp(0.2949747673118872);
    msg.setSource(63957U);
    msg.setSourceEntity(208U);
    msg.setDestination(58318U);
    msg.setDestinationEntity(53U);
    msg.id = 150U;
    msg.range = 0.0634375980006312;

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
    msg.setTimeStamp(0.354655378545927);
    msg.setSource(19249U);
    msg.setSourceEntity(158U);
    msg.setDestination(31582U);
    msg.setDestinationEntity(215U);
    msg.id = 4U;
    msg.range = 0.1769853501265196;

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
    msg.setTimeStamp(0.7311398206447216);
    msg.setSource(41734U);
    msg.setSourceEntity(174U);
    msg.setDestination(33603U);
    msg.setDestinationEntity(235U);
    msg.id = 249U;
    msg.range = 0.14178333052425163;

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
    msg.setTimeStamp(0.024946923753394024);
    msg.setSource(26510U);
    msg.setSourceEntity(83U);
    msg.setDestination(26076U);
    msg.setDestinationEntity(202U);
    msg.beacon.assign("LNHDVQYTWPJMQAEXUXXBIUBHTLFHKWQRMIYYKRAFAZTNJLCOQAMHBDMVANDKYKFGKJRWZPWBLLWPXAKIQFXOVQKBIVEUJTFZSCIETTSOISPQROGZKLXRRNSFKPAMSIPUGWUBXEMHVNKNUCSDCNBQCXTJMRYBLZVVYXUBGGZQZGHPOZNGTJQCJL");
    msg.lat = 0.15181160017529927;
    msg.lon = 0.350725181729696;
    msg.depth = 0.33122681992871916;
    msg.query_channel = 186U;
    msg.reply_channel = 70U;
    msg.transponder_delay = 12U;

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
    msg.setTimeStamp(0.49804553359513026);
    msg.setSource(32569U);
    msg.setSourceEntity(191U);
    msg.setDestination(24910U);
    msg.setDestinationEntity(90U);
    msg.beacon.assign("OXGWNQUSERLBGFHEYNLTJWSOGMCIVDBFISDMQGPQPJMTJDTIZUMYKSRHACHPQNOXQFGVVSUKRKKZHNFHKQSEYEMPZWEBLTBPZNTEAAHJKONRBMTODFYYWQDPTAHCDSBJMKCSCPPGLYIFPJVSAIRBWQTOZGWMMZDCWAVJEQYNORHWOBULUCOSLYUBRUVNCNRZQUKIFLEFGVFVVBXEOFAVIZZLTKAHKYMJUAADNLRCXDR");
    msg.lat = 0.36097204861325083;
    msg.lon = 0.786049792873897;
    msg.depth = 0.20400893690039157;
    msg.query_channel = 13U;
    msg.reply_channel = 249U;
    msg.transponder_delay = 93U;

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
    msg.setTimeStamp(0.7764181965197728);
    msg.setSource(30780U);
    msg.setSourceEntity(243U);
    msg.setDestination(34303U);
    msg.setDestinationEntity(140U);
    msg.beacon.assign("GNBRNWBDHKZLYIKHUTGXMBQKJMEVLLCGBUEFLMIUNMAAJQVXIOKYDUWFTSJAPVFWXROFYHBYTCUQMPDDKEARTIMHTWVXBLVJYXODSMMTSLPDQECWPBCKCRDENIOEQFCQMIA");
    msg.lat = 0.3488810066786914;
    msg.lon = 0.7739074610938689;
    msg.depth = 0.6713681419645827;
    msg.query_channel = 60U;
    msg.reply_channel = 246U;
    msg.transponder_delay = 211U;

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
    msg.setTimeStamp(0.5178039811016334);
    msg.setSource(21713U);
    msg.setSourceEntity(30U);
    msg.setDestination(3347U);
    msg.setDestinationEntity(147U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.4716313844239036);
    msg.setSource(12962U);
    msg.setSourceEntity(74U);
    msg.setDestination(36584U);
    msg.setDestinationEntity(171U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.9956025036604754);
    msg.setSource(51268U);
    msg.setSourceEntity(105U);
    msg.setDestination(38508U);
    msg.setDestinationEntity(198U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.2841123654686716);
    msg.setSource(49902U);
    msg.setSourceEntity(242U);
    msg.setDestination(3826U);
    msg.setDestinationEntity(88U);
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.7598158863021364;
    tmp_msg_0.dist_min_abs = 0.5526826045703459;
    tmp_msg_0.dist_min_mean = 0.5930421857241903;
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
    msg.setTimeStamp(0.5532594695376287);
    msg.setSource(45376U);
    msg.setSourceEntity(243U);
    msg.setDestination(54839U);
    msg.setDestinationEntity(192U);
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 215U;
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
    msg.setTimeStamp(0.016177764766509783);
    msg.setSource(48623U);
    msg.setSourceEntity(204U);
    msg.setDestination(43371U);
    msg.setDestinationEntity(251U);
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 254U;
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
    msg.setTimeStamp(0.5857785493340497);
    msg.setSource(48663U);
    msg.setSourceEntity(34U);
    msg.setDestination(23609U);
    msg.setDestinationEntity(0U);
    msg.op = 166U;
    msg.system.assign("BTUDENMMXKVVHFRHAEMHLWL");
    msg.range = 0.7063366197214155;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("PXPFVNFQISSWBHYYSEHOATXQJATCGPEAZHHOGNUVRYMFZCZJKWUHLZWRLQMSVQAIFFSDWYMDZLLBOUILJVGDHCYAPRWTWUQYNOHOJBUANCQNWSGSLDYGCOZJYKGBRXDFXIDEWKYRKTZEXVITNTDM");
    tmp_msg_0.sys_dst.assign("PKJZJDPIYNPFWPYZEWRNPKSTWYYHPMVXHTYFMGYYGQGRDKTZCBNOBLWKHEFVXNRTUBCORSJURVBIVIAXOXSFLBFJSTFMQVXKYWVIJQBDPLQAPEQNMWUZAJOOBZZZKLSCFNYIAUVAIJMXSFHNHUWTJERYCPTUXDWQGWVINKTVSZJMSHDHOGZRNI");
    tmp_msg_0.flags = 240U;
    const char tmp_tmp_msg_0_0[] = {-4, 43, -27, 2, -115, -119, 1, 123, 85, -82, 50, -112, -44, -50, 94, 21, 106, -24, 83, -83, 49, -42, 84, 98, -15, -112, -79, 123, 93, 50, -91, 83, -24, 123, 60, -126, -32, -80, 37, 111, 39, -70, 118, -4, -95, -12, -124, -64, -44, 5, 53, 40, 54, 116, 50, -127, 21, 75, -18, -97, -28, 95, 90, 30, 62, -85, 56, -25, -98};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.1862165512303119);
    msg.setSource(50716U);
    msg.setSourceEntity(0U);
    msg.setDestination(2875U);
    msg.setDestinationEntity(148U);
    msg.op = 22U;
    msg.system.assign("EXKSRBBSBOQTSYVQGIWJNXWRARNHMPHEIGFSGFXDDDMLCZTMHLZQVLFOKVIRNDCKSYOKNODQAOPYENJCHFYOTKWZCBJSFMZJZWKWTSPTSIHEUJGQGIKRCLXNVYUGQIEUX");
    msg.range = 0.6825914773425857;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.7302873783925781;
    tmp_msg_0.lon = 0.16027386835840307;
    tmp_msg_0.depth = 0.7213825642605164;
    tmp_msg_0.roll = 0.10321633077575765;
    tmp_msg_0.pitch = 0.7101509247169908;
    tmp_msg_0.yaw = 0.7941647983095298;
    tmp_msg_0.rcp_time = 0.11666169925786296;
    tmp_msg_0.sid.assign("JMGBPVOBVHLQTWAKWXSWGFSSRCKNVDRJLIQQRWPZKFNOMGYHIEGHZTEAWAXRNVGRDDJXHZJGFAAJAFFRKQMQEIOBGPCNZEYYDLSIGTPTFI");
    tmp_msg_0.s_type = 148U;
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
    msg.setTimeStamp(0.5098509997379708);
    msg.setSource(15648U);
    msg.setSourceEntity(79U);
    msg.setDestination(28809U);
    msg.setDestinationEntity(254U);
    msg.op = 127U;
    msg.system.assign("VVCDZDSTDEMHXLNKMDDNEFDQYIQSVDJQTHVKRYMQCXQSIWEJNMEHRAHHVKIMJFWQFFSTQIEA");
    msg.range = 0.973920326649501;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("VZXFTBXSVGKDIRCLROXNSOLDESASMJMHMKDPUZXTCXXPERFJBXNOJYKGTCODIEQPCOJDCNYZQOBCUTLJGBVQFFSBYOJZPRFVGAHBLWAKPPFGEUWYNTEMHSWQMHZLIHVPEPJOMZUQKRAMHIDULEKCPQSTFILYNGNHCJJMFXWKZUGRHDTGZUTVVBWWMYSFIAKWBRAUDVOLALVNQHBQQZ");
    tmp_msg_0.reference_frame = 165U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 42623U;
    tmp_tmp_msg_0_0.off_x = 0.18432865426821077;
    tmp_tmp_msg_0_0.off_y = 0.10696050281063063;
    tmp_tmp_msg_0_0.off_z = 0.6169144704284591;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("VVBXNESDWUGBMYRXMQBIDGQRQFCNRTRCHEKUPQNLAIXAYEMXETXVKVFEPFANARUSAZHIHINPMKBOXLGSTKTVVCPHQJOIJYYPCYFOYRXILYNSMKSUSCDKRSFMZTBJHFPRCJLAXRJTUOPPLUUFYOSCWMZIFBKWJTAROWIJMUULLAWEHVGXVVZDLWIPGQEWBWOZWSTECAOTHGWETQDVMCHYHMQG");
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
    msg.setTimeStamp(0.6975811347296446);
    msg.setSource(37561U);
    msg.setSourceEntity(219U);
    msg.setDestination(26291U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.7448101020470644);
    msg.setSource(25291U);
    msg.setSourceEntity(85U);
    msg.setDestination(37189U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.5187440614389103);
    msg.setSource(34205U);
    msg.setSourceEntity(165U);
    msg.setDestination(52076U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.5254886517810048);
    msg.setSource(11888U);
    msg.setSourceEntity(243U);
    msg.setDestination(15603U);
    msg.setDestinationEntity(44U);
    msg.list.assign("NPOGIZILYEMPVHESVDSILXQFYQBDTBWSZJDHWNCJELEWYABTHZFFENJRDZXWUPDPKOMPFLHKCOEZRQJTNKWAUXINIXYSWWVGKXXUNUKRSCPIEJXAMJKMFMLEEOACGCJUSIVCFNCLBCBIYLGG");

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
    msg.setTimeStamp(0.738547313256484);
    msg.setSource(16557U);
    msg.setSourceEntity(81U);
    msg.setDestination(13355U);
    msg.setDestinationEntity(145U);
    msg.list.assign("NVRHWLPSSXKUPADETMOBBGQHYIGZIRLDQTBSWYUFPGOLREAFUQSRBVDZYULJECVXQWQLOXJNVAVJWJIENRZYVGZHTZTDAJIKGZKKHKVEGLOXZMMDOSWUJEKKJZMMNLMGBLWKIDNPPANFXTGXKQCBVLUCGABUVPAEKNCTSOZTRDRMWRFTBOFIRWHXJIMWTDUOSFAQVQYAXPHCBICWNQFAOHPRIHTSDEUOXHLFYYJEYSYJCCYBSZDMCUHCXNP");

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
    msg.setTimeStamp(0.5809929304071223);
    msg.setSource(18446U);
    msg.setSourceEntity(143U);
    msg.setDestination(16830U);
    msg.setDestinationEntity(113U);
    msg.list.assign("ZFFUYTPFTSRPCSRELOCDEYTQCAWCMQOJYEVDNJVOVTHLOEMMIMJIMVTHWTAVUPAZGVOUWBIBKBMIHWWPWYJTHQKYIOFUXFTBNHFNJGXCOJUNRABGGHDOAKIXEFGNFRLKKRCXRPXLXLCTAIGKPFUIAZVF");

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
    msg.setTimeStamp(0.24359725741869287);
    msg.setSource(6879U);
    msg.setSourceEntity(122U);
    msg.setDestination(27774U);
    msg.setDestinationEntity(152U);
    msg.value = -17282;

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
    msg.setTimeStamp(0.6134174279201706);
    msg.setSource(1119U);
    msg.setSourceEntity(100U);
    msg.setDestination(44066U);
    msg.setDestinationEntity(16U);
    msg.value = -20561;

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
    msg.setTimeStamp(0.521409256206577);
    msg.setSource(36057U);
    msg.setSourceEntity(202U);
    msg.setDestination(58891U);
    msg.setDestinationEntity(247U);
    msg.value = -11294;

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
    msg.setTimeStamp(0.8283229588177435);
    msg.setSource(53146U);
    msg.setSourceEntity(62U);
    msg.setDestination(62890U);
    msg.setDestinationEntity(204U);
    msg.value = 0.11996107428468772;

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
    msg.setTimeStamp(0.7394937798879561);
    msg.setSource(28888U);
    msg.setSourceEntity(158U);
    msg.setDestination(5734U);
    msg.setDestinationEntity(24U);
    msg.value = 0.8789318145729007;

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
    msg.setTimeStamp(0.9543812882052858);
    msg.setSource(18233U);
    msg.setSourceEntity(195U);
    msg.setDestination(15613U);
    msg.setDestinationEntity(234U);
    msg.value = 0.2139414614812567;

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
    msg.setTimeStamp(0.39348252362898484);
    msg.setSource(21227U);
    msg.setSourceEntity(97U);
    msg.setDestination(22554U);
    msg.setDestinationEntity(32U);
    msg.value = 0.4370832199650493;

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
    msg.setTimeStamp(0.6927918485835576);
    msg.setSource(64642U);
    msg.setSourceEntity(162U);
    msg.setDestination(17169U);
    msg.setDestinationEntity(185U);
    msg.value = 0.28034625819191417;

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
    msg.setTimeStamp(0.6795759870529784);
    msg.setSource(49291U);
    msg.setSourceEntity(195U);
    msg.setDestination(2823U);
    msg.setDestinationEntity(207U);
    msg.value = 0.9424876588388449;

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
    msg.setTimeStamp(0.9192163978996687);
    msg.setSource(38774U);
    msg.setSourceEntity(186U);
    msg.setDestination(47390U);
    msg.setDestinationEntity(170U);
    msg.validity = 5320U;
    msg.type = 103U;
    msg.utc_year = 11049U;
    msg.utc_month = 18U;
    msg.utc_day = 64U;
    msg.utc_time = 0.39119955531637396;
    msg.lat = 0.16317842535120053;
    msg.lon = 0.8272646807100954;
    msg.height = 0.9024251021672626;
    msg.satellites = 219U;
    msg.cog = 0.018397173797294886;
    msg.sog = 0.6039727631191043;
    msg.hdop = 0.6235970880905892;
    msg.vdop = 0.43842560354910676;
    msg.hacc = 0.2111826064129657;
    msg.vacc = 0.7047403900106831;

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
    msg.setTimeStamp(0.5260545682863164);
    msg.setSource(32632U);
    msg.setSourceEntity(12U);
    msg.setDestination(38672U);
    msg.setDestinationEntity(90U);
    msg.validity = 3220U;
    msg.type = 110U;
    msg.utc_year = 27434U;
    msg.utc_month = 246U;
    msg.utc_day = 217U;
    msg.utc_time = 0.42766693736838035;
    msg.lat = 0.022028828130920997;
    msg.lon = 0.32127333662341984;
    msg.height = 0.31215421415594446;
    msg.satellites = 249U;
    msg.cog = 0.02594288507558995;
    msg.sog = 0.30640679318321085;
    msg.hdop = 0.9275727692560388;
    msg.vdop = 0.7396663278230502;
    msg.hacc = 0.982196190394346;
    msg.vacc = 0.8861630933530948;

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
    msg.setTimeStamp(0.24605136049112353);
    msg.setSource(38815U);
    msg.setSourceEntity(136U);
    msg.setDestination(48005U);
    msg.setDestinationEntity(163U);
    msg.validity = 14418U;
    msg.type = 21U;
    msg.utc_year = 44394U;
    msg.utc_month = 66U;
    msg.utc_day = 144U;
    msg.utc_time = 0.347050292725523;
    msg.lat = 0.12387250411844863;
    msg.lon = 0.7919795095176152;
    msg.height = 0.8965506020221935;
    msg.satellites = 113U;
    msg.cog = 0.18643240768416602;
    msg.sog = 0.15672253210603382;
    msg.hdop = 0.03421506111100825;
    msg.vdop = 0.5220050307878428;
    msg.hacc = 0.4477021384103016;
    msg.vacc = 0.27207749958748806;

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
    msg.setTimeStamp(0.7485565171272409);
    msg.setSource(26626U);
    msg.setSourceEntity(241U);
    msg.setDestination(2544U);
    msg.setDestinationEntity(193U);
    msg.time = 0.7127437239004726;
    msg.phi = 0.5577491696166859;
    msg.theta = 0.7665645258477244;
    msg.psi = 0.1617462526030642;
    msg.psi_magnetic = 0.11617413563470147;

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
    msg.setTimeStamp(0.26535195369029463);
    msg.setSource(33707U);
    msg.setSourceEntity(105U);
    msg.setDestination(19088U);
    msg.setDestinationEntity(224U);
    msg.time = 0.761063280440939;
    msg.phi = 0.47044311844241915;
    msg.theta = 0.5470162541249447;
    msg.psi = 0.30503811731888686;
    msg.psi_magnetic = 0.8611789136008009;

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
    msg.setTimeStamp(0.7432435101804179);
    msg.setSource(7885U);
    msg.setSourceEntity(54U);
    msg.setDestination(40194U);
    msg.setDestinationEntity(33U);
    msg.time = 0.8079865299688838;
    msg.phi = 0.9082070123454404;
    msg.theta = 0.5251108264038371;
    msg.psi = 0.6588841072499607;
    msg.psi_magnetic = 0.24233392064781178;

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
    msg.setTimeStamp(0.8591947305497437);
    msg.setSource(39821U);
    msg.setSourceEntity(70U);
    msg.setDestination(32699U);
    msg.setDestinationEntity(127U);
    msg.time = 0.9346636240912256;
    msg.x = 0.9077177279774681;
    msg.y = 0.6881735634393271;
    msg.z = 0.9028543377446803;
    msg.timestep = 0.6004548837505094;

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
    msg.setTimeStamp(0.0711092307156993);
    msg.setSource(3370U);
    msg.setSourceEntity(59U);
    msg.setDestination(28147U);
    msg.setDestinationEntity(243U);
    msg.time = 0.1704104867839934;
    msg.x = 0.45560040923447764;
    msg.y = 0.9420676248247934;
    msg.z = 0.8221803371970982;
    msg.timestep = 0.7531089599909223;

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
    msg.setTimeStamp(0.794022632484906);
    msg.setSource(62664U);
    msg.setSourceEntity(226U);
    msg.setDestination(21947U);
    msg.setDestinationEntity(36U);
    msg.time = 0.6742660949974731;
    msg.x = 0.8306728257626999;
    msg.y = 0.7500714247838969;
    msg.z = 0.783915688929413;
    msg.timestep = 0.6589350580218053;

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
    msg.setTimeStamp(0.028830640078987946);
    msg.setSource(28293U);
    msg.setSourceEntity(138U);
    msg.setDestination(27160U);
    msg.setDestinationEntity(97U);
    msg.time = 0.13135338774568905;
    msg.x = 0.2416720237373846;
    msg.y = 0.9844633378209391;
    msg.z = 0.12895042393637202;

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
    msg.setTimeStamp(0.04728966912004218);
    msg.setSource(42243U);
    msg.setSourceEntity(206U);
    msg.setDestination(15713U);
    msg.setDestinationEntity(102U);
    msg.time = 0.15842726374020055;
    msg.x = 0.5337920461452003;
    msg.y = 0.25688493134818813;
    msg.z = 0.9002975802176453;

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
    msg.setTimeStamp(0.3429146104677656);
    msg.setSource(29938U);
    msg.setSourceEntity(38U);
    msg.setDestination(58673U);
    msg.setDestinationEntity(14U);
    msg.time = 0.6012460996609331;
    msg.x = 0.21462181772444466;
    msg.y = 0.45334934880173117;
    msg.z = 0.17817869135319708;

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
    msg.setTimeStamp(0.4718363285966155);
    msg.setSource(9430U);
    msg.setSourceEntity(62U);
    msg.setDestination(43409U);
    msg.setDestinationEntity(127U);
    msg.time = 0.7217698876573101;
    msg.x = 0.6028853819742942;
    msg.y = 0.7808250753619511;
    msg.z = 0.8461666548317063;

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
    msg.setTimeStamp(0.39982269595727915);
    msg.setSource(45105U);
    msg.setSourceEntity(30U);
    msg.setDestination(30841U);
    msg.setDestinationEntity(99U);
    msg.time = 0.9820279914189284;
    msg.x = 0.7154264447488424;
    msg.y = 0.3502727756642311;
    msg.z = 0.7632632621297243;

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
    msg.setTimeStamp(0.730322733185608);
    msg.setSource(14611U);
    msg.setSourceEntity(131U);
    msg.setDestination(27858U);
    msg.setDestinationEntity(145U);
    msg.time = 0.8498513011899033;
    msg.x = 0.34434714917322673;
    msg.y = 0.07378903303211948;
    msg.z = 0.9303353288296906;

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
    msg.setTimeStamp(0.19743910621551986);
    msg.setSource(25341U);
    msg.setSourceEntity(161U);
    msg.setDestination(64586U);
    msg.setDestinationEntity(253U);
    msg.time = 0.2633492032264144;
    msg.x = 0.10655978580798475;
    msg.y = 0.297898176863712;
    msg.z = 0.9412141372384193;

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
    msg.setTimeStamp(0.6398882808449504);
    msg.setSource(29137U);
    msg.setSourceEntity(191U);
    msg.setDestination(48399U);
    msg.setDestinationEntity(12U);
    msg.time = 0.4654401247424095;
    msg.x = 0.2539083132184242;
    msg.y = 0.3200526334328574;
    msg.z = 0.5892669932572834;

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
    msg.setTimeStamp(0.5009732852154549);
    msg.setSource(6988U);
    msg.setSourceEntity(61U);
    msg.setDestination(8036U);
    msg.setDestinationEntity(79U);
    msg.time = 0.8997216320960901;
    msg.x = 0.7998712715387669;
    msg.y = 0.9079257697032433;
    msg.z = 0.13730948017611477;

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
    msg.setTimeStamp(0.44162442448810413);
    msg.setSource(49700U);
    msg.setSourceEntity(26U);
    msg.setDestination(48807U);
    msg.setDestinationEntity(190U);
    msg.validity = 251U;
    msg.x = 0.7084564011553752;
    msg.y = 0.563355082970663;
    msg.z = 0.02318582283725179;

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
    msg.setTimeStamp(0.05940024996879212);
    msg.setSource(45171U);
    msg.setSourceEntity(36U);
    msg.setDestination(31795U);
    msg.setDestinationEntity(29U);
    msg.validity = 157U;
    msg.x = 0.8646922980473952;
    msg.y = 0.4563943679159108;
    msg.z = 0.13948911126438746;

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
    msg.setTimeStamp(0.3780583704885946);
    msg.setSource(24955U);
    msg.setSourceEntity(90U);
    msg.setDestination(18913U);
    msg.setDestinationEntity(235U);
    msg.validity = 117U;
    msg.x = 0.5286168904598247;
    msg.y = 0.6085938120369273;
    msg.z = 0.6046880329938443;

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
    msg.setTimeStamp(0.6540902785078158);
    msg.setSource(26967U);
    msg.setSourceEntity(35U);
    msg.setDestination(38980U);
    msg.setDestinationEntity(228U);
    msg.validity = 213U;
    msg.x = 0.8521238567263438;
    msg.y = 0.72636931528205;
    msg.z = 0.9379502917166852;

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
    msg.setTimeStamp(0.9258002918372663);
    msg.setSource(31000U);
    msg.setSourceEntity(31U);
    msg.setDestination(26783U);
    msg.setDestinationEntity(127U);
    msg.validity = 214U;
    msg.x = 0.896110259731737;
    msg.y = 0.06438605030259792;
    msg.z = 0.07090148931739071;

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
    msg.setTimeStamp(0.7048636861228963);
    msg.setSource(28007U);
    msg.setSourceEntity(229U);
    msg.setDestination(5982U);
    msg.setDestinationEntity(66U);
    msg.validity = 254U;
    msg.x = 0.7443657730096488;
    msg.y = 0.36333056800195007;
    msg.z = 0.47437682331906106;

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
    msg.setTimeStamp(0.7511138321560296);
    msg.setSource(59381U);
    msg.setSourceEntity(73U);
    msg.setDestination(50680U);
    msg.setDestinationEntity(116U);
    msg.time = 0.7734718064782222;
    msg.x = 0.6268394570786405;
    msg.y = 0.5325381956141311;
    msg.z = 0.3106561947289007;

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
    msg.setTimeStamp(0.3929492217632291);
    msg.setSource(64582U);
    msg.setSourceEntity(192U);
    msg.setDestination(18646U);
    msg.setDestinationEntity(178U);
    msg.time = 0.9452353110590163;
    msg.x = 0.8675830531441587;
    msg.y = 0.889309622941142;
    msg.z = 0.9543135496096739;

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
    msg.setTimeStamp(0.4090253916680202);
    msg.setSource(40088U);
    msg.setSourceEntity(89U);
    msg.setDestination(57262U);
    msg.setDestinationEntity(75U);
    msg.time = 0.8940959572790882;
    msg.x = 0.0859110556586623;
    msg.y = 0.5067303670472775;
    msg.z = 0.6469506300269541;

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
    msg.setTimeStamp(0.9897865404314218);
    msg.setSource(58495U);
    msg.setSourceEntity(100U);
    msg.setDestination(51275U);
    msg.setDestinationEntity(93U);
    msg.validity = 178U;
    msg.value = 0.399362558756035;

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
    msg.setTimeStamp(0.2090759496659781);
    msg.setSource(24358U);
    msg.setSourceEntity(56U);
    msg.setDestination(54231U);
    msg.setDestinationEntity(57U);
    msg.validity = 32U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.601041697788282;
    tmp_msg_0.beam_height = 0.17682822426231337;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.852917717151855;

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
    msg.setTimeStamp(0.09792387850206608);
    msg.setSource(24821U);
    msg.setSourceEntity(208U);
    msg.setDestination(13510U);
    msg.setDestinationEntity(213U);
    msg.validity = 140U;
    msg.value = 0.9063601106205746;

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
    msg.setTimeStamp(0.6428375716473609);
    msg.setSource(56541U);
    msg.setSourceEntity(146U);
    msg.setDestination(57007U);
    msg.setDestinationEntity(60U);
    msg.value = 0.6901586978230352;

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
    msg.setTimeStamp(0.6651203550420294);
    msg.setSource(62651U);
    msg.setSourceEntity(185U);
    msg.setDestination(4588U);
    msg.setDestinationEntity(1U);
    msg.value = 0.26353039133192824;

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
    msg.setTimeStamp(0.1122623921358491);
    msg.setSource(19626U);
    msg.setSourceEntity(249U);
    msg.setDestination(52687U);
    msg.setDestinationEntity(233U);
    msg.value = 0.9045475639756161;

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
    msg.setTimeStamp(0.0006903427522710892);
    msg.setSource(26168U);
    msg.setSourceEntity(147U);
    msg.setDestination(23395U);
    msg.setDestinationEntity(227U);
    msg.value = 0.7829794332757762;

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
    msg.setTimeStamp(0.1681016942231266);
    msg.setSource(16475U);
    msg.setSourceEntity(108U);
    msg.setDestination(36092U);
    msg.setDestinationEntity(8U);
    msg.value = 0.5054629593412204;

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
    msg.setTimeStamp(0.9421851896026597);
    msg.setSource(20852U);
    msg.setSourceEntity(245U);
    msg.setDestination(25204U);
    msg.setDestinationEntity(161U);
    msg.value = 0.7341262165812045;

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
    msg.setTimeStamp(0.04921987688082896);
    msg.setSource(55830U);
    msg.setSourceEntity(231U);
    msg.setDestination(33127U);
    msg.setDestinationEntity(107U);
    msg.value = 0.47997834875632905;

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
    msg.setTimeStamp(0.8540811745319026);
    msg.setSource(29823U);
    msg.setSourceEntity(5U);
    msg.setDestination(3946U);
    msg.setDestinationEntity(64U);
    msg.value = 0.010813453580446164;

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
    msg.setTimeStamp(0.9755227990974218);
    msg.setSource(47754U);
    msg.setSourceEntity(32U);
    msg.setDestination(32669U);
    msg.setDestinationEntity(202U);
    msg.value = 0.44842355930072086;

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
    msg.setTimeStamp(0.7225937294461061);
    msg.setSource(9642U);
    msg.setSourceEntity(75U);
    msg.setDestination(1114U);
    msg.setDestinationEntity(121U);
    msg.value = 0.7506211451565572;

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
    msg.setTimeStamp(0.47952446286429795);
    msg.setSource(1674U);
    msg.setSourceEntity(99U);
    msg.setDestination(39099U);
    msg.setDestinationEntity(187U);
    msg.value = 0.19448636296299326;

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
    msg.setTimeStamp(0.9548130434699812);
    msg.setSource(7560U);
    msg.setSourceEntity(243U);
    msg.setDestination(53890U);
    msg.setDestinationEntity(45U);
    msg.value = 0.9187900872015586;

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
    msg.setTimeStamp(0.9466898203130959);
    msg.setSource(24520U);
    msg.setSourceEntity(4U);
    msg.setDestination(29585U);
    msg.setDestinationEntity(185U);
    msg.value = 0.8092027029720675;

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
    msg.setTimeStamp(0.7696062697350158);
    msg.setSource(48882U);
    msg.setSourceEntity(239U);
    msg.setDestination(52534U);
    msg.setDestinationEntity(182U);
    msg.value = 0.09713933271735853;

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
    msg.setTimeStamp(0.2610267493839702);
    msg.setSource(13059U);
    msg.setSourceEntity(215U);
    msg.setDestination(24541U);
    msg.setDestinationEntity(51U);
    msg.value = 0.030320997508534897;

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
    msg.setTimeStamp(0.7017729243827012);
    msg.setSource(50237U);
    msg.setSourceEntity(143U);
    msg.setDestination(63015U);
    msg.setDestinationEntity(7U);
    msg.value = 0.7224467550610005;

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
    msg.setTimeStamp(0.1610929700683693);
    msg.setSource(39030U);
    msg.setSourceEntity(244U);
    msg.setDestination(31888U);
    msg.setDestinationEntity(124U);
    msg.value = 0.11962065024788715;

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
    msg.setTimeStamp(0.2830369278438831);
    msg.setSource(20025U);
    msg.setSourceEntity(164U);
    msg.setDestination(5593U);
    msg.setDestinationEntity(30U);
    msg.value = 0.9980659835787179;

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
    msg.setTimeStamp(0.8622482406647737);
    msg.setSource(14859U);
    msg.setSourceEntity(70U);
    msg.setDestination(1367U);
    msg.setDestinationEntity(179U);
    msg.value = 0.7632641928482384;

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
    msg.setTimeStamp(0.13507395881052509);
    msg.setSource(11161U);
    msg.setSourceEntity(119U);
    msg.setDestination(2274U);
    msg.setDestinationEntity(185U);
    msg.value = 0.3271603494742835;

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
    msg.setTimeStamp(0.5897917905505822);
    msg.setSource(44533U);
    msg.setSourceEntity(134U);
    msg.setDestination(13435U);
    msg.setDestinationEntity(224U);
    msg.value = 0.37033031146070494;

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
    msg.setTimeStamp(0.897352139528704);
    msg.setSource(27436U);
    msg.setSourceEntity(64U);
    msg.setDestination(54338U);
    msg.setDestinationEntity(133U);
    msg.value = 0.2145077845615898;

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
    msg.setTimeStamp(0.8902495113755913);
    msg.setSource(6483U);
    msg.setSourceEntity(93U);
    msg.setDestination(26913U);
    msg.setDestinationEntity(234U);
    msg.value = 0.20841267391521834;

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
    msg.setTimeStamp(0.28877219306818147);
    msg.setSource(47951U);
    msg.setSourceEntity(99U);
    msg.setDestination(46708U);
    msg.setDestinationEntity(210U);
    msg.value = 0.802217238711473;

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
    msg.setTimeStamp(0.9693085338675883);
    msg.setSource(15976U);
    msg.setSourceEntity(141U);
    msg.setDestination(62351U);
    msg.setDestinationEntity(115U);
    msg.direction = 0.4298309932345785;
    msg.speed = 0.21873766740418554;
    msg.turbulence = 0.12652754523110565;

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
    msg.setTimeStamp(0.09237995035470714);
    msg.setSource(26117U);
    msg.setSourceEntity(78U);
    msg.setDestination(16675U);
    msg.setDestinationEntity(61U);
    msg.direction = 0.04657485303630682;
    msg.speed = 0.3914099679351233;
    msg.turbulence = 0.1585932013245358;

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
    msg.setTimeStamp(0.7756733611051477);
    msg.setSource(39764U);
    msg.setSourceEntity(69U);
    msg.setDestination(29917U);
    msg.setDestinationEntity(171U);
    msg.direction = 0.5436690860253314;
    msg.speed = 0.27151409811711646;
    msg.turbulence = 0.22675994201410432;

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
    msg.setTimeStamp(0.7421601051050504);
    msg.setSource(7782U);
    msg.setSourceEntity(96U);
    msg.setDestination(33677U);
    msg.setDestinationEntity(51U);
    msg.value = 0.0055821197594607685;

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
    msg.setTimeStamp(0.41043945690080275);
    msg.setSource(60149U);
    msg.setSourceEntity(205U);
    msg.setDestination(47994U);
    msg.setDestinationEntity(181U);
    msg.value = 0.5086147184634049;

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
    msg.setTimeStamp(0.6816349369976042);
    msg.setSource(65041U);
    msg.setSourceEntity(115U);
    msg.setDestination(24196U);
    msg.setDestinationEntity(209U);
    msg.value = 0.4684146534774817;

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
    msg.setTimeStamp(0.9555030254414913);
    msg.setSource(14779U);
    msg.setSourceEntity(169U);
    msg.setDestination(563U);
    msg.setDestinationEntity(2U);
    msg.value.assign("PBUCRRKPSTYRXIVVFMKAZBPHLETHSQDKWFXECGUJKHQOFABCFHWGRIFSVMZASVGALVXXHROJYYYQPHDCRYVBWQLCOIGKBUGCPAWJJLOVEADF");

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
    msg.setTimeStamp(0.16397808023171034);
    msg.setSource(49019U);
    msg.setSourceEntity(71U);
    msg.setDestination(2739U);
    msg.setDestinationEntity(162U);
    msg.value.assign("QXFSCNSPROUMEDOAVZAFBBWTUFJHKYXLDKVFCZMSWDUWAGQQMPHOGBJYNHPRJGADVAKCMMKQFNQMOXACCBSCJGLOGHYHPHDUBOKQTMJZIXGCIMAWJPKSYEICHIXJVFNXMLNPEWDZFSIYDDWNETJFWUOSTGUNRSGKYRZULGXPLTCRWLALIYREQDSZKEQIESIDNQ");

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
    msg.setTimeStamp(0.7758139476064784);
    msg.setSource(61920U);
    msg.setSourceEntity(9U);
    msg.setDestination(3315U);
    msg.setDestinationEntity(27U);
    msg.value.assign("CRXQEIFNBNGHBNWOREPAATYZFSJFGNYQSHDSEHMHUYCMXQPBMQTGMQLQTCVIDKVXULNZXOLWLZMQXGZAGFSOZCKEGCLBJADVHMAUKIYRDTBWVATAVOIYJNNIKCUSUHZOEHPBHRW");

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
    msg.setTimeStamp(0.774900371646426);
    msg.setSource(14939U);
    msg.setSourceEntity(91U);
    msg.setDestination(22374U);
    msg.setDestinationEntity(147U);
    const char tmp_msg_0[] = {-36, -17, 98, 46, -66, 1, 18, -90, 124, 24, -102, 36, 83, 78, 23, 87, -62, -19, 66, 43, -109, 107, 71, 32, 86, -48, 44, 46, -52, 25, 60, -59, 124, 17, -106, 72, -36, -36, 58, -86, 92, 54, -16, -127, 122, 112, -45};
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
    msg.setTimeStamp(0.9810568995871228);
    msg.setSource(28131U);
    msg.setSourceEntity(67U);
    msg.setDestination(20922U);
    msg.setDestinationEntity(236U);
    const char tmp_msg_0[] = {110, 51, 27, -12, -24, 115, 78, -29, 102, -108, -27, 35, -85, 24, -107, 36, 92, 67, 103, 55, -64, 113, -101, 56, 108, 72, 64, 52, -39, -87, 125, -33};
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
    msg.setTimeStamp(0.18527186945377516);
    msg.setSource(4513U);
    msg.setSourceEntity(104U);
    msg.setDestination(63644U);
    msg.setDestinationEntity(74U);
    const char tmp_msg_0[] = {-119, -75, 6, -32, 23, -78, -86, -45, 120, -93, 43, -80, 120, 29, -86, 79, 106, -27, 26, -88, 39, -61, -112, -112, 19, 45, -35, -122, -31, -34, 75, -73, -38, 87, -85, -48, -75, -115, -121, 82, -78, -50, -14, -79, 115, 74, -70, 2, 72, 58, 104, 110, -73, -111, -44, 8, 102, -9, 107, 123, 20, -72, 106, -81, -91, 36, 58, 6, -70, 92, -27, 26, 52, -35, -60, -123, 42, -51, 105, -52, 60, -43, -30, 126, 11, 13, 69, -57, -44, -92, 32, -3, 3, -10, 65, 3, 10, -82, 112, 56, 113, -18, -117, -47, -96, -64, -65, 12, 118, 119, 66, 89, 90, -41, -29, 33, -70, 107, -98, 112, -7, -46, -47, 74, 34, 39, 64, 102, -101, 122, 101, 51, 69, 12, -97, -58, 126};
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
    msg.setTimeStamp(0.00421566854785993);
    msg.setSource(63816U);
    msg.setSourceEntity(213U);
    msg.setDestination(19416U);
    msg.setDestinationEntity(22U);
    msg.type = 211U;
    msg.frequency = 98749842U;
    msg.min_range = 4096U;
    msg.max_range = 5882U;
    msg.bits_per_point = 182U;
    msg.scale_factor = 0.3037701371909012;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7582001887542268;
    tmp_msg_0.beam_height = 0.6602414919408016;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {28, -48, -16, 101, 101, 67, -107, -3, 79, -61, -101, 122, -23, -62, 86, 59, 99, 81, -52, -114, 94, 42, 30, -84, 38, 19, -121, -93, -42, -2, -111, 55, 86, 112, -33, 106, -35, 51, -100, 53, -102, -65, -107, -107, -7, -126, 91, 1, -81, 67, -35, -65, -78, 103, -103, 93, 57, -118, 1, -125, -38, 22, -58, 27, -19, -15};
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
    msg.setTimeStamp(0.5157278281924698);
    msg.setSource(19489U);
    msg.setSourceEntity(97U);
    msg.setDestination(11309U);
    msg.setDestinationEntity(129U);
    msg.type = 57U;
    msg.frequency = 2420685642U;
    msg.min_range = 20386U;
    msg.max_range = 14944U;
    msg.bits_per_point = 27U;
    msg.scale_factor = 0.5018716262346404;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.019071941162811967;
    tmp_msg_0.beam_height = 0.7950982709736898;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-34, 2, 65, -47, -89, 31, 109, 57, 86, 113, 97, -87, 118, -69, -33, 120, -74, 28, -19, 109, -62, -39, 71, 44, -74, -80, 93, 123, -49, -127, 91, -109, -18, 82, 42, -52, -121, -71, -81, -121, -6, 125, 96, 105, 52, -4, 25, -31, 104, -64, -34, 13, -28, 13, -13, 36, 13, -19, 92, -59, -76, -23, 58, 69, 81, -31, 43, -70, -67, -125, 50, -34, 0, 106, -5, -18, -91, 69, 120, 43, 85, -26, -47, 94, 92, -28, 74, 121, 31, -33, -22, -28, -73, -49, -51, -54, 44, -7, 25, -44, -14, 92, -89, 65, 40, 77, -127, -127, -102, -57, -102, -65, 120, -61, -78, -120, -121, -106, 11, 95, 91, -34, 30, 106, -26, -4, -114, 57, 44, -5, 72, 118, 60, 57, -78, -28, -7, 102, -3, -52, 83, -72, -113, 10, 104, 30, -126, 110, -6, 61, -91, 66, 99, -116, 34, -53, -9, 37, -16, -42, -2, -68, -92, -10, -60, 118, 73, -69, 19, -62, 107, 27, -17, 118, 35, -83, 38, 105, -43, -114, 114, -50, 0, 72, -91, 69, -69, -56, 3, -78, 91, -126, -52, -122, 40, 99, 115, 26, -115, -55, 19, 122, 25, 75, -44, -5};
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
    msg.setTimeStamp(0.6286435485825015);
    msg.setSource(27942U);
    msg.setSourceEntity(10U);
    msg.setDestination(42211U);
    msg.setDestinationEntity(135U);
    msg.type = 34U;
    msg.frequency = 3985587975U;
    msg.min_range = 5886U;
    msg.max_range = 63736U;
    msg.bits_per_point = 211U;
    msg.scale_factor = 0.6786386826352896;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8271898723320651;
    tmp_msg_0.beam_height = 0.9286536196218981;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-21, 70, 88, 88, 69, 123, 80, -41, 41, -80, -97, 97, 88, 89, -55, -33, 32, 104, 104, -114, -50, -90, -48, 94, 61, 25, -1, 40, 121, 50, -71, -118, 63, -67, 100, 75, 50, -121, 27, 1, -50, -108, -21, 101, 66, 33, -12, -60, 119, 91, -45, -116, -6, 94, 68, 103, -41, -9, 124, -119, -80, 87, 65, 17, -25, -19, -110, -48, 78, 40, 11, 126, -126, -84, 79, -48, -53, -105, -92, 111, -98, -120, -86, -83, -65, 75, -106, 39, -10, 33, -10, -10, -105, -71, -38, -112, -25, -16, 76, -50, -41, 96, -90, 94, -27, 49, -115, -79, 110, -33, -121, -4, -29, 109, -29, -125, 124, 25, -52, -32, -7, 53, -6, 95, 98, 120, 9, 84, -63, 117, -91, 61, -128, 65, -45, 108, -78, -30, 117, 42, -32, 9, 4, 126, -73, -23, 39, -112, -16, 79, 115, -31, -32, 47, -65, -39, -128, -29, 62, -126, -81, -107, -109};
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
    msg.setTimeStamp(0.1554274232575551);
    msg.setSource(42707U);
    msg.setSourceEntity(54U);
    msg.setDestination(33398U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.8005626143742338);
    msg.setSource(10560U);
    msg.setSourceEntity(120U);
    msg.setDestination(3377U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.6785415891492367);
    msg.setSource(9049U);
    msg.setSourceEntity(137U);
    msg.setDestination(5641U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.8906392371192252);
    msg.setSource(34270U);
    msg.setSourceEntity(28U);
    msg.setDestination(3695U);
    msg.setDestinationEntity(103U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.39959522272721326);
    msg.setSource(60890U);
    msg.setSourceEntity(92U);
    msg.setDestination(20709U);
    msg.setDestinationEntity(60U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.17021107825938164);
    msg.setSource(45594U);
    msg.setSourceEntity(174U);
    msg.setDestination(29403U);
    msg.setDestinationEntity(90U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.9594019522836343);
    msg.setSource(7821U);
    msg.setSourceEntity(85U);
    msg.setDestination(40433U);
    msg.setDestinationEntity(12U);
    msg.value = 0.2367844172240534;
    msg.confidence = 0.6010758208880181;
    msg.opmodes.assign("XCFDRLBKJFGOUQMQYFDVXVLVLVTJOEXAPBTRKSQWCYCZUAMFFDFSAFKTPWJZUKEUGFOIECPVYJYXQNHLROGJSWOQTKZQIHFCMJZYWDYUHVVAOYMDZWUHLIRBLUZUAPNWWBEDESAZCACKOPWTZIVEIXSOQBPLSAHSAIETXEPFACXVCBGSLSRGOHZPWMDDQRUENJNTJDKE");

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
    msg.setTimeStamp(0.6554086552155399);
    msg.setSource(49019U);
    msg.setSourceEntity(213U);
    msg.setDestination(57422U);
    msg.setDestinationEntity(57U);
    msg.value = 0.21121953387216674;
    msg.confidence = 0.49275568215878796;
    msg.opmodes.assign("VSAGKHCIGMCEBJMBTWDPXSYQJFKWFINLOUJQRYJWNARXVSQNUIZOZXORRJAATVODLZLICOTHGSCXLWSXEQANAKTJKWFEJYPGHODUQQCZTTEBUURFOQKWKGCNEIZDZMGRHCTAPHRLIVHERJFSTEUWMCZSVLVHFLBPQGBMMPYKLVEZWUFNPCCPIMQBBYWPTLDXYIMIMKAAYP");

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
    msg.setTimeStamp(0.26676658731263325);
    msg.setSource(55606U);
    msg.setSourceEntity(98U);
    msg.setDestination(2067U);
    msg.setDestinationEntity(170U);
    msg.value = 0.48566918347271115;
    msg.confidence = 0.5490098663592105;
    msg.opmodes.assign("SJQEOYLGJUPFKSAKFNXWDCSZPBAJALYHPQXWYSBHCWLXFGBOKRJEITWELNSETOIZUDTEMHSBAQWPXVVLLRIXMTNZRFAGWVEVDBCTKYERPTZADXSFXKQAIHVZKTXEMYEQGRZJNSWDAOPQTOGZSDVGRCBNHIDQQGBUZLNUNJQNOKHJCYIGUBMMTDSPPYJUHWLYRROQCWM");

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
    msg.setTimeStamp(0.5043002165173173);
    msg.setSource(62311U);
    msg.setSourceEntity(236U);
    msg.setDestination(26042U);
    msg.setDestinationEntity(60U);
    msg.itow = 2580755690U;
    msg.lat = 0.23771033657318807;
    msg.lon = 0.9916803638620981;
    msg.height_ell = 0.032150083640883564;
    msg.height_sea = 0.20273296367965477;
    msg.hacc = 0.7656037109235714;
    msg.vacc = 0.27732493392008406;
    msg.vel_n = 0.7441782324451597;
    msg.vel_e = 0.6802799135065503;
    msg.vel_d = 0.18712098056655724;
    msg.speed = 0.02706369878351067;
    msg.gspeed = 0.2768365056611123;
    msg.heading = 0.5629816386398486;
    msg.sacc = 0.6937763677242939;
    msg.cacc = 0.11660372837634447;

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
    msg.setTimeStamp(0.12390227419044919);
    msg.setSource(61707U);
    msg.setSourceEntity(218U);
    msg.setDestination(5972U);
    msg.setDestinationEntity(242U);
    msg.itow = 2238108851U;
    msg.lat = 0.008354850259359559;
    msg.lon = 0.09583331299758335;
    msg.height_ell = 0.9053407697127562;
    msg.height_sea = 0.1392103216130981;
    msg.hacc = 0.6914237610140339;
    msg.vacc = 0.21818739878821725;
    msg.vel_n = 0.4930932182599588;
    msg.vel_e = 0.021615416935360954;
    msg.vel_d = 0.6664248227992422;
    msg.speed = 0.38537908647488406;
    msg.gspeed = 0.5757502889495717;
    msg.heading = 0.6170040946928365;
    msg.sacc = 0.48434714692192726;
    msg.cacc = 0.06322755124436974;

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
    msg.setTimeStamp(0.7904177449885276);
    msg.setSource(32477U);
    msg.setSourceEntity(99U);
    msg.setDestination(29398U);
    msg.setDestinationEntity(93U);
    msg.itow = 3456049177U;
    msg.lat = 0.3543123522458027;
    msg.lon = 0.9224027891067001;
    msg.height_ell = 0.2890768100058869;
    msg.height_sea = 0.2073589485043421;
    msg.hacc = 0.48619808851390534;
    msg.vacc = 0.9576379611715331;
    msg.vel_n = 0.9056294038539388;
    msg.vel_e = 0.313030658648382;
    msg.vel_d = 0.8344906626291687;
    msg.speed = 0.9669541748866222;
    msg.gspeed = 0.39725660698636545;
    msg.heading = 0.17794680939330465;
    msg.sacc = 0.5952429889391175;
    msg.cacc = 0.8280459716633994;

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
    msg.setTimeStamp(0.267444564913374);
    msg.setSource(55685U);
    msg.setSourceEntity(170U);
    msg.setDestination(58907U);
    msg.setDestinationEntity(163U);
    msg.id = 215U;
    msg.value = 0.2280508452895854;

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
    msg.setTimeStamp(0.4612961654008537);
    msg.setSource(64104U);
    msg.setSourceEntity(119U);
    msg.setDestination(17360U);
    msg.setDestinationEntity(3U);
    msg.id = 87U;
    msg.value = 0.777282284846261;

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
    msg.setTimeStamp(0.755303636136729);
    msg.setSource(59615U);
    msg.setSourceEntity(156U);
    msg.setDestination(14571U);
    msg.setDestinationEntity(250U);
    msg.id = 97U;
    msg.value = 0.054609121178304965;

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
    msg.setTimeStamp(0.24517128790228426);
    msg.setSource(26560U);
    msg.setSourceEntity(149U);
    msg.setDestination(59325U);
    msg.setDestinationEntity(203U);
    msg.x = 0.2677326014816135;
    msg.y = 0.7539782508828636;
    msg.z = 0.396271371962146;
    msg.phi = 0.5555558323783812;
    msg.theta = 0.6750800105631397;
    msg.psi = 0.24873481805300668;

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
    msg.setTimeStamp(0.2675228982082961);
    msg.setSource(48121U);
    msg.setSourceEntity(189U);
    msg.setDestination(56435U);
    msg.setDestinationEntity(216U);
    msg.x = 0.47614666326850574;
    msg.y = 0.6083180920161312;
    msg.z = 0.2180570656540839;
    msg.phi = 0.6610187236741817;
    msg.theta = 0.7818434206552939;
    msg.psi = 0.0038290713065912696;

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
    msg.setTimeStamp(0.8364821540298623);
    msg.setSource(8984U);
    msg.setSourceEntity(123U);
    msg.setDestination(997U);
    msg.setDestinationEntity(86U);
    msg.x = 0.39027237861798214;
    msg.y = 0.15387894046305717;
    msg.z = 0.3763234827147429;
    msg.phi = 0.10489227156333558;
    msg.theta = 0.5870945408394784;
    msg.psi = 0.3964656460258772;

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
    msg.setTimeStamp(0.3002947240011923);
    msg.setSource(58586U);
    msg.setSourceEntity(50U);
    msg.setDestination(15721U);
    msg.setDestinationEntity(184U);
    msg.beam_width = 0.3241323627674628;
    msg.beam_height = 0.6746624586791253;

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
    msg.setTimeStamp(0.9945067938000467);
    msg.setSource(613U);
    msg.setSourceEntity(137U);
    msg.setDestination(29476U);
    msg.setDestinationEntity(105U);
    msg.beam_width = 0.08834596091821623;
    msg.beam_height = 0.25216152377390866;

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
    msg.setTimeStamp(0.21556359461430363);
    msg.setSource(46622U);
    msg.setSourceEntity(203U);
    msg.setDestination(363U);
    msg.setDestinationEntity(25U);
    msg.beam_width = 0.6182874683919154;
    msg.beam_height = 0.6788925886644432;

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
    msg.setTimeStamp(0.21888245449507238);
    msg.setSource(21285U);
    msg.setSourceEntity(14U);
    msg.setDestination(17064U);
    msg.setDestinationEntity(193U);
    msg.sane = 132U;

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
    msg.setTimeStamp(0.5229780000552898);
    msg.setSource(374U);
    msg.setSourceEntity(150U);
    msg.setDestination(40111U);
    msg.setDestinationEntity(129U);
    msg.sane = 87U;

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
    msg.setTimeStamp(0.28859625867864636);
    msg.setSource(22574U);
    msg.setSourceEntity(126U);
    msg.setDestination(2078U);
    msg.setDestinationEntity(126U);
    msg.sane = 94U;

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
    msg.setTimeStamp(0.4063589200436659);
    msg.setSource(47695U);
    msg.setSourceEntity(225U);
    msg.setDestination(4236U);
    msg.setDestinationEntity(105U);
    msg.value = 0.39855731787692916;

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
    msg.setTimeStamp(0.7621521151256748);
    msg.setSource(11646U);
    msg.setSourceEntity(251U);
    msg.setDestination(16124U);
    msg.setDestinationEntity(118U);
    msg.value = 0.3243546956294896;

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
    msg.setTimeStamp(0.5502407090459849);
    msg.setSource(30723U);
    msg.setSourceEntity(88U);
    msg.setDestination(64900U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8383675912097343;

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
    msg.setTimeStamp(0.6218460052836757);
    msg.setSource(2245U);
    msg.setSourceEntity(75U);
    msg.setDestination(20116U);
    msg.setDestinationEntity(212U);
    msg.value = 0.2068411212523087;

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
    msg.setTimeStamp(0.21899336737811825);
    msg.setSource(27075U);
    msg.setSourceEntity(159U);
    msg.setDestination(35081U);
    msg.setDestinationEntity(139U);
    msg.value = 0.9866531297566153;

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
    msg.setTimeStamp(0.8701394309424162);
    msg.setSource(59610U);
    msg.setSourceEntity(205U);
    msg.setDestination(52352U);
    msg.setDestinationEntity(92U);
    msg.value = 0.1622391654466464;

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
    msg.setTimeStamp(0.0906087570248264);
    msg.setSource(5330U);
    msg.setSourceEntity(113U);
    msg.setDestination(22030U);
    msg.setDestinationEntity(95U);
    msg.value = 0.34939454315168683;

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
    msg.setTimeStamp(0.8228245190855291);
    msg.setSource(4031U);
    msg.setSourceEntity(191U);
    msg.setDestination(32855U);
    msg.setDestinationEntity(227U);
    msg.value = 0.703805321159645;

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
    msg.setTimeStamp(0.5954150932439463);
    msg.setSource(54779U);
    msg.setSourceEntity(250U);
    msg.setDestination(35325U);
    msg.setDestinationEntity(150U);
    msg.value = 0.7338378610900546;

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
    msg.setTimeStamp(0.5640471960448477);
    msg.setSource(42681U);
    msg.setSourceEntity(138U);
    msg.setDestination(65501U);
    msg.setDestinationEntity(121U);
    msg.value = 0.39053309153019244;

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
    msg.setTimeStamp(0.83534310930958);
    msg.setSource(37880U);
    msg.setSourceEntity(176U);
    msg.setDestination(20757U);
    msg.setDestinationEntity(97U);
    msg.value = 0.9742278474767727;

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
    msg.setTimeStamp(0.8283783702256846);
    msg.setSource(28721U);
    msg.setSourceEntity(213U);
    msg.setDestination(38022U);
    msg.setDestinationEntity(129U);
    msg.value = 0.7201260383824062;

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
    msg.setTimeStamp(0.22183602714165884);
    msg.setSource(16723U);
    msg.setSourceEntity(187U);
    msg.setDestination(1133U);
    msg.setDestinationEntity(62U);
    msg.id = 178U;
    msg.zoom = 243U;
    msg.action = 62U;

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
    msg.setTimeStamp(0.9624112780610312);
    msg.setSource(58439U);
    msg.setSourceEntity(124U);
    msg.setDestination(56373U);
    msg.setDestinationEntity(87U);
    msg.id = 213U;
    msg.zoom = 248U;
    msg.action = 13U;

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
    msg.setTimeStamp(0.15777336197111802);
    msg.setSource(50915U);
    msg.setSourceEntity(27U);
    msg.setDestination(55060U);
    msg.setDestinationEntity(176U);
    msg.id = 128U;
    msg.zoom = 253U;
    msg.action = 151U;

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
    msg.setTimeStamp(0.9594786463005651);
    msg.setSource(24100U);
    msg.setSourceEntity(97U);
    msg.setDestination(31014U);
    msg.setDestinationEntity(117U);
    msg.id = 187U;
    msg.value = 0.8933267799329353;

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
    msg.setTimeStamp(0.32561996601219056);
    msg.setSource(22303U);
    msg.setSourceEntity(240U);
    msg.setDestination(15799U);
    msg.setDestinationEntity(121U);
    msg.id = 165U;
    msg.value = 0.8288999667435037;

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
    msg.setTimeStamp(0.07908736025480678);
    msg.setSource(10446U);
    msg.setSourceEntity(240U);
    msg.setDestination(20514U);
    msg.setDestinationEntity(62U);
    msg.id = 233U;
    msg.value = 0.9970754849525495;

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
    msg.setTimeStamp(0.6080242695034723);
    msg.setSource(59040U);
    msg.setSourceEntity(102U);
    msg.setDestination(41278U);
    msg.setDestinationEntity(242U);
    msg.id = 68U;
    msg.value = 0.7172138831604947;

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
    msg.setTimeStamp(0.7630197854449283);
    msg.setSource(2664U);
    msg.setSourceEntity(232U);
    msg.setDestination(29892U);
    msg.setDestinationEntity(195U);
    msg.id = 169U;
    msg.value = 0.6988178302824306;

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
    msg.setTimeStamp(0.7698394936580039);
    msg.setSource(9580U);
    msg.setSourceEntity(242U);
    msg.setDestination(5409U);
    msg.setDestinationEntity(85U);
    msg.id = 163U;
    msg.value = 0.5771197432745229;

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
    msg.setTimeStamp(0.6668138917144697);
    msg.setSource(64950U);
    msg.setSourceEntity(123U);
    msg.setDestination(5817U);
    msg.setDestinationEntity(136U);
    msg.id = 96U;
    msg.angle = 0.6200603266959691;

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
    msg.setTimeStamp(0.9389590709008951);
    msg.setSource(5706U);
    msg.setSourceEntity(149U);
    msg.setDestination(58834U);
    msg.setDestinationEntity(138U);
    msg.id = 138U;
    msg.angle = 0.030671101898915643;

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
    msg.setTimeStamp(0.310727188710608);
    msg.setSource(50364U);
    msg.setSourceEntity(210U);
    msg.setDestination(43684U);
    msg.setDestinationEntity(169U);
    msg.id = 191U;
    msg.angle = 0.764915876454548;

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
    msg.setTimeStamp(0.788558151973325);
    msg.setSource(4349U);
    msg.setSourceEntity(254U);
    msg.setDestination(45803U);
    msg.setDestinationEntity(167U);
    msg.op = 236U;
    msg.actions.assign("YKSKJXQFELHTBZIMAQEZKYVPBDNAXZTUDPRESFTVETHJXPTQNMVYROXBDCQZYJVGBWFIPGJSFSIGRGIQZKVRLVXQEMUZFNWGYIEBHAUCVMFUZHFSLHGKDCTMMLSVOLKLPAEONAJLTRXNOTWGCWWACLQHIEZPPLCXYZNYJWQCCAQJHETWBCZHOUUXLDBDPKIFOFVIUPXKYWGEPBXDGONIKNMJRRMQORMNKFM");

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
    msg.setTimeStamp(0.3743954411089795);
    msg.setSource(682U);
    msg.setSourceEntity(155U);
    msg.setDestination(45232U);
    msg.setDestinationEntity(210U);
    msg.op = 5U;
    msg.actions.assign("XJDNIWMQXUXPEYQJYUGGKOROHMAWTTDUKGSKHCCWDLQZTVKBLSJFPPZIOPRAUDIXB");

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
    msg.setTimeStamp(0.3409508427652729);
    msg.setSource(56730U);
    msg.setSourceEntity(254U);
    msg.setDestination(40419U);
    msg.setDestinationEntity(230U);
    msg.op = 196U;
    msg.actions.assign("IOCMPSLULBSEIXMROVLDTRPEIWBOGGZQDRKAKRKVGUMRNXLFUXVKJWEPVATSIAOODZXVLRFFUVTLSYBYNALSBKUBOGQYZXDEWBKJTQFGEIZCZXWAYDTZLXJUQAIKKBCMYBNPVBIOOMPZJZRCQHHXTNWCAFITXCWSHWFVHQJMGABMSDUFVHHW");

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
    msg.setTimeStamp(0.1986101550218795);
    msg.setSource(29156U);
    msg.setSourceEntity(38U);
    msg.setDestination(5148U);
    msg.setDestinationEntity(170U);
    msg.actions.assign("AUGBFGKGMJVBFXNECQGWZRLGWARNXQQTQCYSKPJDNHHQIOPMHYXCKCSEMZJUAZVIRKTBRKBS");

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
    msg.setTimeStamp(0.2935206995374168);
    msg.setSource(43977U);
    msg.setSourceEntity(141U);
    msg.setDestination(27295U);
    msg.setDestinationEntity(16U);
    msg.actions.assign("HWOVPFVBWYNEBSCQ");

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
    msg.setTimeStamp(0.9663974237314292);
    msg.setSource(42508U);
    msg.setSourceEntity(74U);
    msg.setDestination(17838U);
    msg.setDestinationEntity(114U);
    msg.actions.assign("WFOQEWRUEBZECKPXLTUBLFGZZKMLLJQLPDWSOAUGVCUGXSGEDOTEWIGFMYZILZLCICHEMRAZNBDAKOPDXMVJRAJEPZHJSKJFLICVGKVCZIBQVKRNBGHKXBIGGXYTZWCOTPTRTPTRSFPFNSKSAMADNWDBXFVMYHARIHXTXEFSJYOJPQXDMOVQUBQYBRUWQHQYWWTOHEVQLDIJHMNYSKQKNFMUSV");

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
    msg.setTimeStamp(0.18724810082851706);
    msg.setSource(32362U);
    msg.setSourceEntity(104U);
    msg.setDestination(15585U);
    msg.setDestinationEntity(48U);
    msg.button = 158U;
    msg.value = 77U;

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
    msg.setTimeStamp(0.8871969043663518);
    msg.setSource(32861U);
    msg.setSourceEntity(201U);
    msg.setDestination(40005U);
    msg.setDestinationEntity(208U);
    msg.button = 115U;
    msg.value = 225U;

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
    msg.setTimeStamp(0.9063459429010862);
    msg.setSource(41943U);
    msg.setSourceEntity(52U);
    msg.setDestination(33088U);
    msg.setDestinationEntity(23U);
    msg.button = 251U;
    msg.value = 11U;

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
    msg.setTimeStamp(0.2391157281556251);
    msg.setSource(11310U);
    msg.setSourceEntity(5U);
    msg.setDestination(53134U);
    msg.setDestinationEntity(137U);
    msg.op = 142U;
    msg.text.assign("VCZCOHLUTERUHNKINHBCBZKLXHNMFDEJJBYHPGCSZXSQDQZJOGVJNXIOTBVSEQOIIIXOBMDNKSDZVYSFLHQJMPHAWKPWJFGSLYZTECJGZZDPPQKUUOVYLEPBNASJNURMVATGCSRHCFYUROFGVUXPAANZKQPXCKRFXOVGUBQWWECMDXIVIWTTQTWTAXMCWXBZHGRUMWMPDEQRSJDIATLFFKBQGVFNEYPYKKIMLAOTORLDFHUSBRNW");

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
    msg.setTimeStamp(0.9242618706181418);
    msg.setSource(14334U);
    msg.setSourceEntity(253U);
    msg.setDestination(53887U);
    msg.setDestinationEntity(209U);
    msg.op = 210U;
    msg.text.assign("EOOERRHDLPJARSZCFVSWSLDTYYUIAYVQBJUKSKPFMGLBBNDREPLBKCNAXYVGYOQBCKPOGNLQIBPVWKSHDZPVZY");

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
    msg.setTimeStamp(0.8213465136200943);
    msg.setSource(48479U);
    msg.setSourceEntity(157U);
    msg.setDestination(6131U);
    msg.setDestinationEntity(236U);
    msg.op = 112U;
    msg.text.assign("RUUMDAGNIXVMHEHMXLSPFQEIMWWZDOBTZZAPLMMFWJUIPAHITEEQXKYODEMJRPCAHOXWGSVRLUKBTAMPEECKCUJWHGPSZYHSXRQDDNRQLAWZTOLWLYSDUYHPNNRDFCOVGJDBFOMZCWUNKSHBCFPBIIWOZGQQSZXJFDAHDJVMXPSLXVQRNT");

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
    msg.setTimeStamp(0.958311343082753);
    msg.setSource(15265U);
    msg.setSourceEntity(192U);
    msg.setDestination(46100U);
    msg.setDestinationEntity(48U);
    msg.op = 95U;
    msg.time_remain = 0.40466468317503457;
    msg.sched_time = 0.023410520937885648;

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
    msg.setTimeStamp(0.21390252516811137);
    msg.setSource(39097U);
    msg.setSourceEntity(155U);
    msg.setDestination(10471U);
    msg.setDestinationEntity(70U);
    msg.op = 195U;
    msg.time_remain = 0.06354294864022247;
    msg.sched_time = 0.9609299496217873;

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
    msg.setTimeStamp(0.8747556556427197);
    msg.setSource(28861U);
    msg.setSourceEntity(91U);
    msg.setDestination(50562U);
    msg.setDestinationEntity(127U);
    msg.op = 232U;
    msg.time_remain = 0.8586030166283204;
    msg.sched_time = 0.04085784143936688;

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
    msg.setTimeStamp(0.3932071280437618);
    msg.setSource(21416U);
    msg.setSourceEntity(55U);
    msg.setDestination(61103U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ZWYVHQDZRDSRQBHZLZJUYSODRRQFXFQPPLWHOBHZSNYGXCQ");
    msg.op = 219U;
    msg.sched_time = 0.062055353364253385;

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
    msg.setTimeStamp(0.24464018998267156);
    msg.setSource(60486U);
    msg.setSourceEntity(51U);
    msg.setDestination(34622U);
    msg.setDestinationEntity(182U);
    msg.name.assign("SNJSLVDRLKXSIWFVCYDAUSXFGMANCMVBHAXRBYPIRQUAOQTLFIFGUQSEDLYQBPDIGROSCYMLBQANWBLRGRNZCMTDHUPOUAYZWWNBGMFXTIZNYGREWYHVTFCEIQJDTEVJMOQVZJMAXPKDWNPMSKHJKKQWAEXJNXSERLEKUVTCTTRWBJGUWKLCMDSDQYEHCIWJZYPYZZLAJNGHMOXTBFOIUTEVOVHZGCUQPIXOKO");
    msg.op = 226U;
    msg.sched_time = 0.7165344022980599;

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
    msg.setTimeStamp(0.42054783399240325);
    msg.setSource(17702U);
    msg.setSourceEntity(7U);
    msg.setDestination(22734U);
    msg.setDestinationEntity(80U);
    msg.name.assign("IJYYUJGNDBJYDTXEFOAXRMXMDICWFXHPMBNIXAKCYDRVILSIZSEHQYOPLPTWFLQZNFLVAIZNROENQLVUQRQDMLPMYUGQZDBGMAYWBOBPCFSFEOUSANEDVZOSBTJZWABHHTSYVCWILUWZLNAKUGISJOZDPJNGCCCVHHKCAJNLOFEZAKUGEUMXXUBCKRX");
    msg.op = 73U;
    msg.sched_time = 0.8563441888850872;

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
    msg.setTimeStamp(0.643990287573945);
    msg.setSource(27248U);
    msg.setSourceEntity(191U);
    msg.setDestination(41463U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.857602925635241);
    msg.setSource(34636U);
    msg.setSourceEntity(85U);
    msg.setDestination(51107U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.1961374510216778);
    msg.setSource(56896U);
    msg.setSourceEntity(252U);
    msg.setDestination(43786U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.2680943319151562);
    msg.setSource(60439U);
    msg.setSourceEntity(110U);
    msg.setDestination(33968U);
    msg.setDestinationEntity(146U);
    msg.name.assign("DYKCHIYDYAKTGBHUFSKJTXDBIXUVSYJEWMHFDYJRJHTJFRLCNNQARBOFIGWUDQPHSWZCCAVEXZXRBURVYLTABSLPKDYCLHRWGEABYMNVXCOXGWMQUVXPUJRQCGWTKGLMZXOVKDBNLOFQLQOXIFETDTAUTLAOYHSSPHVOYWETSPZUJNLPLEKXFCUFMZSDRKFWVIONEVPSQGFOZOAGKCWGNNJMCEPUZRNNZJMIIPRQHHIISADQ");
    msg.state = 63U;

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
    msg.setTimeStamp(0.05210119553865722);
    msg.setSource(56098U);
    msg.setSourceEntity(206U);
    msg.setDestination(48106U);
    msg.setDestinationEntity(234U);
    msg.name.assign("QORCBBKXHJIKRSMFUNCPMZVRDWPEGKCWECWGORZWUHCQDBPNWLQXXLNAFZPAQTRDOGIUJGQCSKSFMRTCBJNARULVSEBZNHUWRYOCSMHGGPKWNULFEFBSTHIFOWKEADJTRKWIEYILYUTMUFXFNHETQJNGTZYXOENAMXALIVJAHHJRSTYCLBATXPKZETZFYBXGANYYKVZDGSVFLILXBDVWCJYXMVAQSUOJGHZBDDQIDIE");
    msg.state = 209U;

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
    msg.setTimeStamp(0.07877082752225806);
    msg.setSource(70U);
    msg.setSourceEntity(149U);
    msg.setDestination(23149U);
    msg.setDestinationEntity(113U);
    msg.name.assign("BKATWQEQGDDURDLBNOMLIMKIYHCDKJZFXEGUKZZKAWYFYBEOMNURSZRBTFBQITUCRNHDWSVMNTGWPEGHZQRAOYXAFBACXCJXILVMLUPYEMRTOCXLKPMATQXTGVERMQIINUUSPXYHYZWOQQTUHFSGEBPWJQDZSTVTJVHLSNOVRZNLOOJD");
    msg.state = 49U;

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
    msg.setTimeStamp(0.6717960230040588);
    msg.setSource(14537U);
    msg.setSourceEntity(210U);
    msg.setDestination(45490U);
    msg.setDestinationEntity(192U);
    msg.name.assign("KTGXNHWWZNSSOBUUIJWRTJHABMNLIMYXNIMJLBYDEEXMMUXRWGOFEZHLXOPYRMASJCAUGHPFHACBILDJZYGICTZKPQMDTVCLOBQGKECKEOTAPZIZNVSBRLVDCBQZTDFKSZIQFAXAAOXPLOSPCSBFRQWDIBWVSPPTELRDYNUZUKUOTFRVGKMTYQSRU");
    msg.value = 18U;

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
    msg.setTimeStamp(0.03806380966026879);
    msg.setSource(11152U);
    msg.setSourceEntity(91U);
    msg.setDestination(21114U);
    msg.setDestinationEntity(159U);
    msg.name.assign("VCYJJFMUWOYBEFIAEKBTHBAZDVFSTEZLNLWJMSPWEJQAPCXHSCGUOZMUVDNGTLDMPUSSRXXPLUJTQQORPIPGBIRGAMFIYOELOLWWHVMJNWXLNKATIYHUDSCAVUKMRDAHCD");
    msg.value = 164U;

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
    msg.setTimeStamp(0.7000784726546114);
    msg.setSource(40028U);
    msg.setSourceEntity(169U);
    msg.setDestination(2704U);
    msg.setDestinationEntity(39U);
    msg.name.assign("BHGMPBYYFXFCPBCKFQTXEQGROCHSBPJQPICPRJZSGZOFDLKNSNVUZTELWOKDYYOOYKVJOKOTJJCDIMTWUBPMDLTXWBRSPWCLXFPQYPGSWHEMOLSDIRTWGNRGFIKYUXQCDTYXVDNLNARYQZETIZNVADFYXAQQZZLCVAIHIBWRBNBUEHVUKA");
    msg.value = 62U;

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
    msg.setTimeStamp(0.40948873438865885);
    msg.setSource(8704U);
    msg.setSourceEntity(161U);
    msg.setDestination(20660U);
    msg.setDestinationEntity(0U);
    msg.name.assign("OYOUUQIKTEVXBYAAOTNUBFBCQTPLRVOIOPYRGXFPFPIRKKDDJNBSXDWMVPCZAQM");

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
    msg.setTimeStamp(0.5687308836896421);
    msg.setSource(56963U);
    msg.setSourceEntity(143U);
    msg.setDestination(40079U);
    msg.setDestinationEntity(139U);
    msg.name.assign("KTZYLDQFZCVBDCHDAPIKVTPLOXTKLMNRZIYIUETCLNTMBIGXGBLPGVMTJIQKCAKLQDWYFIFOADOPYXPNBYOKJR");

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
    msg.setTimeStamp(0.8597635853927073);
    msg.setSource(60044U);
    msg.setSourceEntity(49U);
    msg.setDestination(59129U);
    msg.setDestinationEntity(215U);
    msg.name.assign("EBHKVGUKXTNNCPYSWBSJXRVHOCMUWUIEEILTMFFTXRPOFKDLLAKSWIHISSIZJWWWJMHATZYEQLNXFCAQCHQIBPOPNIXPHDMXSRIPGZKHOCMEAUDOQYDPDRJZEGTBBOGHUXGAVBTUQKUUSTNDPYOQBFGGYYTRKKYNDLLGSJ");

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
    msg.setTimeStamp(0.7667291702457554);
    msg.setSource(28231U);
    msg.setSourceEntity(39U);
    msg.setDestination(46438U);
    msg.setDestinationEntity(252U);
    msg.name.assign("JXSCULEERKNRTRYGBQUFZIMICLIPKNDJPBTYMWPFQPEUAQILZHDJIOQNHQHVCFLMJLSOR");
    msg.value = 145U;

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
    msg.setTimeStamp(0.01582914122270085);
    msg.setSource(61262U);
    msg.setSourceEntity(37U);
    msg.setDestination(44677U);
    msg.setDestinationEntity(53U);
    msg.name.assign("NMZKTBYBNQAKITIEIWZLOHMOARRUGPBPACSZZYRLOVLJOWRUXKRFEOPQTMVENSDMYWNMFPSDNWXMUOHHANDGRMCYYXFUQGJBKIJOWNEVPRCRTXQYRYMMAJIEHNNAOPEYIXPGVVCZVFLUBKHELGBTXVOHZKSBZJACLIGKCWJVTAHFKBJSEGGCFYPSRHWJWQDXZLIS");
    msg.value = 37U;

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
    msg.setTimeStamp(0.33951418548020007);
    msg.setSource(556U);
    msg.setSourceEntity(229U);
    msg.setDestination(65046U);
    msg.setDestinationEntity(86U);
    msg.name.assign("DLOXHAPQGIZGZUWGINXTQSLIHRYZZWLS");
    msg.value = 110U;

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
    msg.setTimeStamp(0.24893892456303168);
    msg.setSource(61089U);
    msg.setSourceEntity(213U);
    msg.setDestination(65425U);
    msg.setDestinationEntity(121U);
    msg.id = 219U;
    msg.period = 1381149846U;
    msg.duty_cycle = 3460600652U;

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
    msg.setTimeStamp(0.3241533632243586);
    msg.setSource(22483U);
    msg.setSourceEntity(199U);
    msg.setDestination(16988U);
    msg.setDestinationEntity(170U);
    msg.id = 212U;
    msg.period = 1801142703U;
    msg.duty_cycle = 3304312250U;

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
    msg.setTimeStamp(0.9389871469311754);
    msg.setSource(36078U);
    msg.setSourceEntity(113U);
    msg.setDestination(32051U);
    msg.setDestinationEntity(173U);
    msg.id = 148U;
    msg.period = 359231114U;
    msg.duty_cycle = 3679178497U;

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
    msg.setTimeStamp(0.9513456385405308);
    msg.setSource(49740U);
    msg.setSourceEntity(113U);
    msg.setDestination(64078U);
    msg.setDestinationEntity(204U);
    msg.id = 193U;
    msg.period = 2764081728U;
    msg.duty_cycle = 3754716205U;

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
    msg.setTimeStamp(0.3890774772209994);
    msg.setSource(25230U);
    msg.setSourceEntity(171U);
    msg.setDestination(19408U);
    msg.setDestinationEntity(38U);
    msg.id = 210U;
    msg.period = 2609511831U;
    msg.duty_cycle = 2967632105U;

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
    msg.setTimeStamp(0.40810279815317907);
    msg.setSource(24104U);
    msg.setSourceEntity(173U);
    msg.setDestination(22468U);
    msg.setDestinationEntity(155U);
    msg.id = 247U;
    msg.period = 1554747034U;
    msg.duty_cycle = 3417587604U;

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
    msg.setTimeStamp(0.4795713018411172);
    msg.setSource(48173U);
    msg.setSourceEntity(254U);
    msg.setDestination(56280U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.37882484822967477;
    msg.lon = 0.29909015051141674;
    msg.height = 0.38652110664664296;
    msg.x = 0.9390470366984126;
    msg.y = 0.9536392693125734;
    msg.z = 0.785784689207742;
    msg.phi = 0.21646230106178843;
    msg.theta = 0.8115534889421914;
    msg.psi = 0.8908436994967412;
    msg.u = 0.6238916220838087;
    msg.v = 0.4772376527666842;
    msg.w = 0.9157658918744991;
    msg.vx = 0.8799621530510012;
    msg.vy = 0.1711175486748686;
    msg.vz = 0.1507874123238896;
    msg.p = 0.014891132547245167;
    msg.q = 0.16740177298439818;
    msg.r = 0.34594297978415145;
    msg.depth = 0.4125928306967862;
    msg.alt = 0.6102116905662935;

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
    msg.setTimeStamp(0.8587685287348573);
    msg.setSource(63135U);
    msg.setSourceEntity(174U);
    msg.setDestination(25514U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.4570489367308893;
    msg.lon = 0.9610684932796644;
    msg.height = 0.8769933123561441;
    msg.x = 0.8572879487947873;
    msg.y = 0.9558874577376468;
    msg.z = 0.9100131278720164;
    msg.phi = 0.02296058302746873;
    msg.theta = 0.16238013783676009;
    msg.psi = 0.7625699864563459;
    msg.u = 0.41647639891416666;
    msg.v = 0.726104358983734;
    msg.w = 0.6991258667481285;
    msg.vx = 0.1152878591917117;
    msg.vy = 0.8387832100769154;
    msg.vz = 0.5015482492444925;
    msg.p = 0.852907407388342;
    msg.q = 0.10390007465950246;
    msg.r = 0.551300976473558;
    msg.depth = 0.765301233741146;
    msg.alt = 0.8877999649887812;

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
    msg.setTimeStamp(0.1687840423442769);
    msg.setSource(15623U);
    msg.setSourceEntity(62U);
    msg.setDestination(28242U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.11595303774049948;
    msg.lon = 0.7625201278560467;
    msg.height = 0.8641863977327937;
    msg.x = 0.3483511560925684;
    msg.y = 0.636123173171693;
    msg.z = 0.4258699309630981;
    msg.phi = 0.6100419736520426;
    msg.theta = 0.028851103787533416;
    msg.psi = 0.04401488645537921;
    msg.u = 0.5348590398978754;
    msg.v = 0.06823670901582524;
    msg.w = 0.7267495221869192;
    msg.vx = 0.44640950088800824;
    msg.vy = 0.9388160488984193;
    msg.vz = 0.1721637589485534;
    msg.p = 0.7815253445481736;
    msg.q = 0.1567840245501555;
    msg.r = 0.2416746883141856;
    msg.depth = 0.004773702550522785;
    msg.alt = 0.3849908621409598;

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
    msg.setTimeStamp(0.5655775784881915);
    msg.setSource(22094U);
    msg.setSourceEntity(42U);
    msg.setDestination(49910U);
    msg.setDestinationEntity(188U);
    msg.x = 0.615487933102623;
    msg.y = 0.9022178332846609;
    msg.z = 0.990293148300493;

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
    msg.setTimeStamp(0.9064718029569556);
    msg.setSource(46074U);
    msg.setSourceEntity(207U);
    msg.setDestination(29015U);
    msg.setDestinationEntity(21U);
    msg.x = 0.7441494481116248;
    msg.y = 0.42212770849637415;
    msg.z = 0.3679327503819608;

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
    msg.setTimeStamp(0.4782549247040919);
    msg.setSource(24508U);
    msg.setSourceEntity(48U);
    msg.setDestination(39923U);
    msg.setDestinationEntity(68U);
    msg.x = 0.45027811753219693;
    msg.y = 0.8942596552710249;
    msg.z = 0.25497578588494185;

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
    msg.setTimeStamp(0.5619116408794292);
    msg.setSource(52972U);
    msg.setSourceEntity(18U);
    msg.setDestination(25739U);
    msg.setDestinationEntity(43U);
    msg.value = 0.5087848914409567;

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
    msg.setTimeStamp(0.5728333150531749);
    msg.setSource(5007U);
    msg.setSourceEntity(113U);
    msg.setDestination(49802U);
    msg.setDestinationEntity(96U);
    msg.value = 0.8070295271644733;

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
    msg.setTimeStamp(0.41893129709678534);
    msg.setSource(64718U);
    msg.setSourceEntity(37U);
    msg.setDestination(27890U);
    msg.setDestinationEntity(135U);
    msg.value = 0.5030276162060546;

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
    msg.setTimeStamp(0.5197906995889967);
    msg.setSource(60261U);
    msg.setSourceEntity(176U);
    msg.setDestination(1457U);
    msg.setDestinationEntity(102U);
    msg.value = 0.10757935372037397;

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
    msg.setTimeStamp(0.5340186431560594);
    msg.setSource(50170U);
    msg.setSourceEntity(159U);
    msg.setDestination(18817U);
    msg.setDestinationEntity(138U);
    msg.value = 0.2643846200661172;

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
    msg.setTimeStamp(0.3772952493592798);
    msg.setSource(63654U);
    msg.setSourceEntity(110U);
    msg.setDestination(52496U);
    msg.setDestinationEntity(214U);
    msg.value = 0.6895447847024471;

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
    msg.setTimeStamp(0.8376285523933086);
    msg.setSource(49014U);
    msg.setSourceEntity(154U);
    msg.setDestination(47513U);
    msg.setDestinationEntity(34U);
    msg.x = 0.7839864947926419;
    msg.y = 0.2454382935174262;
    msg.z = 0.528669006793073;
    msg.phi = 0.614253239903482;
    msg.theta = 0.8074768359520391;
    msg.psi = 0.1896318838312484;
    msg.p = 0.009240995310516698;
    msg.q = 0.03826997136856336;
    msg.r = 0.016822171002529474;
    msg.u = 0.15443643207846336;
    msg.v = 0.09671107628711706;
    msg.w = 0.7110056618720267;
    msg.bias_psi = 0.6780511549265287;
    msg.bias_r = 0.6751587038472676;

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
    msg.setTimeStamp(0.6225229187369333);
    msg.setSource(18550U);
    msg.setSourceEntity(40U);
    msg.setDestination(49616U);
    msg.setDestinationEntity(82U);
    msg.x = 0.18501649161775058;
    msg.y = 0.8846893921108048;
    msg.z = 0.6607155013149394;
    msg.phi = 0.5113822327893013;
    msg.theta = 0.8577731345626933;
    msg.psi = 0.8311858591655342;
    msg.p = 0.23192720933563393;
    msg.q = 0.47367932261100854;
    msg.r = 0.6980078705811696;
    msg.u = 0.46751362811180974;
    msg.v = 0.4212910459605006;
    msg.w = 0.8982712267723524;
    msg.bias_psi = 0.5042935565181356;
    msg.bias_r = 0.8907307088286982;

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
    msg.setTimeStamp(0.038718460274248856);
    msg.setSource(36606U);
    msg.setSourceEntity(22U);
    msg.setDestination(44975U);
    msg.setDestinationEntity(197U);
    msg.x = 0.42729084522509253;
    msg.y = 0.17915960938886466;
    msg.z = 0.6195672667101141;
    msg.phi = 0.5949114459265292;
    msg.theta = 0.9284852255268896;
    msg.psi = 0.9938635308977694;
    msg.p = 0.7542406632157894;
    msg.q = 0.1426590510998168;
    msg.r = 0.7084950466391708;
    msg.u = 0.5994941629875054;
    msg.v = 0.07439853519405171;
    msg.w = 0.8825039028304372;
    msg.bias_psi = 0.4788414477192211;
    msg.bias_r = 0.22760785088153046;

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
    msg.setTimeStamp(0.8797967752827615);
    msg.setSource(13624U);
    msg.setSourceEntity(46U);
    msg.setDestination(59144U);
    msg.setDestinationEntity(17U);
    msg.bias_psi = 0.6246278345509366;
    msg.bias_r = 0.8542162176026891;
    msg.cog = 0.49588364877059365;
    msg.cyaw = 0.16182820280484633;
    msg.lbl_rej_level = 0.06606633789882943;
    msg.gps_rej_level = 0.11865782484976972;
    msg.custom_x = 0.11949580071932331;
    msg.custom_y = 0.23675537017524817;
    msg.custom_z = 0.4339426236111963;

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
    msg.setTimeStamp(0.05670578967709616);
    msg.setSource(5501U);
    msg.setSourceEntity(192U);
    msg.setDestination(1068U);
    msg.setDestinationEntity(89U);
    msg.bias_psi = 0.19040406839263047;
    msg.bias_r = 0.6119413433518315;
    msg.cog = 0.14525484155731283;
    msg.cyaw = 0.9458622343518094;
    msg.lbl_rej_level = 0.9541886214053686;
    msg.gps_rej_level = 0.6929312991047838;
    msg.custom_x = 0.8742337796717601;
    msg.custom_y = 0.683163574512426;
    msg.custom_z = 0.30021447209373764;

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
    msg.setTimeStamp(0.9241298966681369);
    msg.setSource(44341U);
    msg.setSourceEntity(12U);
    msg.setDestination(50768U);
    msg.setDestinationEntity(127U);
    msg.bias_psi = 0.04309576896307765;
    msg.bias_r = 0.09105166372913087;
    msg.cog = 0.08489370279016417;
    msg.cyaw = 0.575135113424681;
    msg.lbl_rej_level = 0.21030019978936165;
    msg.gps_rej_level = 0.7195996047172021;
    msg.custom_x = 0.6515473769572696;
    msg.custom_y = 0.31860269463089474;
    msg.custom_z = 0.21095351221325476;

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
    msg.setTimeStamp(0.35386693164548777);
    msg.setSource(11519U);
    msg.setSourceEntity(71U);
    msg.setDestination(24769U);
    msg.setDestinationEntity(165U);
    msg.utc_time = 0.6927459546042783;
    msg.reason = 57U;

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
    msg.setTimeStamp(0.17176858158306152);
    msg.setSource(62281U);
    msg.setSourceEntity(217U);
    msg.setDestination(18610U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.30482009904174556;
    msg.reason = 181U;

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
    msg.setTimeStamp(0.989437281258886);
    msg.setSource(48769U);
    msg.setSourceEntity(166U);
    msg.setDestination(50872U);
    msg.setDestinationEntity(63U);
    msg.utc_time = 0.6107348364467218;
    msg.reason = 148U;

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
    msg.setTimeStamp(0.48631158134861385);
    msg.setSource(24714U);
    msg.setSourceEntity(83U);
    msg.setDestination(29801U);
    msg.setDestinationEntity(184U);
    msg.id = 209U;
    msg.range = 0.1339144149481476;
    msg.acceptance = 74U;

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
    msg.setTimeStamp(0.8796902677777444);
    msg.setSource(44496U);
    msg.setSourceEntity(128U);
    msg.setDestination(14905U);
    msg.setDestinationEntity(244U);
    msg.id = 27U;
    msg.range = 0.328712887340993;
    msg.acceptance = 188U;

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
    msg.setTimeStamp(0.726578332230967);
    msg.setSource(1878U);
    msg.setSourceEntity(152U);
    msg.setDestination(18731U);
    msg.setDestinationEntity(119U);
    msg.id = 30U;
    msg.range = 0.46436106468184457;
    msg.acceptance = 230U;

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
    msg.setTimeStamp(0.5072285552418436);
    msg.setSource(55247U);
    msg.setSourceEntity(2U);
    msg.setDestination(4768U);
    msg.setDestinationEntity(64U);
    msg.type = 21U;
    msg.reason = 148U;
    msg.value = 0.8916062089310368;
    msg.timestep = 0.1292485846087954;

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
    msg.setTimeStamp(0.7040265314278614);
    msg.setSource(713U);
    msg.setSourceEntity(252U);
    msg.setDestination(13857U);
    msg.setDestinationEntity(216U);
    msg.type = 86U;
    msg.reason = 213U;
    msg.value = 0.24563067487510482;
    msg.timestep = 0.6843781207017564;

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
    msg.setTimeStamp(0.684329755500197);
    msg.setSource(13888U);
    msg.setSourceEntity(172U);
    msg.setDestination(31549U);
    msg.setDestinationEntity(99U);
    msg.type = 253U;
    msg.reason = 198U;
    msg.value = 0.7687448538226381;
    msg.timestep = 0.907881999654116;

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
    msg.setTimeStamp(0.040926509986506154);
    msg.setSource(19368U);
    msg.setSourceEntity(231U);
    msg.setDestination(52194U);
    msg.setDestinationEntity(153U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WIMDSPRXRTNKEHRJFSUBOWNAWFZDTMDWRPFUGBXKEPAKNKTCOPEZVJYBLCHJHVUSIGQRGBJCYGSXSDYVMTLRGPN");
    tmp_msg_0.lat = 0.8938074841455863;
    tmp_msg_0.lon = 0.7108409007111549;
    tmp_msg_0.depth = 0.1938845727875631;
    tmp_msg_0.query_channel = 98U;
    tmp_msg_0.reply_channel = 169U;
    tmp_msg_0.transponder_delay = 23U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.013869452229861134;
    msg.y = 0.6206889868823021;
    msg.var_x = 0.12665114905863228;
    msg.var_y = 0.8391679298252441;
    msg.distance = 0.2866931722918533;

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
    msg.setTimeStamp(0.4522835625212023);
    msg.setSource(14586U);
    msg.setSourceEntity(157U);
    msg.setDestination(16582U);
    msg.setDestinationEntity(5U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WNMLEAXZZBEANGVSZMVAEXNNFMNQYDDUUHHICNXGUVDFSWKMYQGJFERYJOLWSTRFMVOBFSIHGBKGNCPIOKNABMSNGILUJBHHTTATIHADQQZHBRNLPQRTQDZWURKKXCBZEVCPVKOTGRPYCJTPWMXOAQQFGXPCVECRKZDHXHWWWFXSQLOHDSGVEJAXLFY");
    tmp_msg_0.lat = 0.8584352723964561;
    tmp_msg_0.lon = 0.3458557430617021;
    tmp_msg_0.depth = 0.9472628110411991;
    tmp_msg_0.query_channel = 218U;
    tmp_msg_0.reply_channel = 2U;
    tmp_msg_0.transponder_delay = 183U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9795249861140277;
    msg.y = 0.8622286165128286;
    msg.var_x = 0.03143794788914267;
    msg.var_y = 0.6880808452670526;
    msg.distance = 0.9159243897270128;

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
    msg.setTimeStamp(0.5162005960355168);
    msg.setSource(32024U);
    msg.setSourceEntity(91U);
    msg.setDestination(33352U);
    msg.setDestinationEntity(99U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IOLEKATNJWKSWBDWMQQGATMKUFAZVTGAXILHZLUNCVTNIOONTBGVPFERGIDOEWJAJYZABDEWBGHDLYMYNTVVPQNMSXEBBZZPHQRQZCEOSTKCJEQYC");
    tmp_msg_0.lat = 0.1824154464570379;
    tmp_msg_0.lon = 0.5503526063492183;
    tmp_msg_0.depth = 0.022370126194659612;
    tmp_msg_0.query_channel = 206U;
    tmp_msg_0.reply_channel = 57U;
    tmp_msg_0.transponder_delay = 215U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.37172414605723003;
    msg.y = 0.8727788555719923;
    msg.var_x = 0.32222393046028097;
    msg.var_y = 0.9391635223651565;
    msg.distance = 0.3489593998047483;

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
    msg.setTimeStamp(0.6270188177338237);
    msg.setSource(35253U);
    msg.setSourceEntity(195U);
    msg.setDestination(24928U);
    msg.setDestinationEntity(15U);
    msg.state = 16U;

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
    msg.setTimeStamp(0.495574230343664);
    msg.setSource(56980U);
    msg.setSourceEntity(90U);
    msg.setDestination(6229U);
    msg.setDestinationEntity(1U);
    msg.state = 173U;

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
    msg.setTimeStamp(0.7674414544070656);
    msg.setSource(34055U);
    msg.setSourceEntity(91U);
    msg.setDestination(38680U);
    msg.setDestinationEntity(254U);
    msg.state = 194U;

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
    msg.setTimeStamp(0.9382555809812148);
    msg.setSource(37702U);
    msg.setSourceEntity(82U);
    msg.setDestination(44653U);
    msg.setDestinationEntity(227U);
    msg.x = 0.2612274877308458;
    msg.y = 0.8001627987712204;
    msg.z = 0.6061340476409159;

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
    msg.setTimeStamp(0.8409801950299174);
    msg.setSource(4268U);
    msg.setSourceEntity(86U);
    msg.setDestination(47922U);
    msg.setDestinationEntity(69U);
    msg.x = 0.7690186423547075;
    msg.y = 0.46020489063828085;
    msg.z = 0.36253471726961073;

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
    msg.setTimeStamp(0.05876395984507965);
    msg.setSource(21374U);
    msg.setSourceEntity(79U);
    msg.setDestination(54172U);
    msg.setDestinationEntity(180U);
    msg.x = 0.07090445081005292;
    msg.y = 0.7166043593248744;
    msg.z = 0.9404872783091512;

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
    msg.setTimeStamp(0.9061622187851968);
    msg.setSource(6270U);
    msg.setSourceEntity(218U);
    msg.setDestination(44534U);
    msg.setDestinationEntity(220U);
    msg.value = 0.3146622917983589;

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
    msg.setTimeStamp(0.1611745073801325);
    msg.setSource(21119U);
    msg.setSourceEntity(28U);
    msg.setDestination(23716U);
    msg.setDestinationEntity(96U);
    msg.value = 0.22564396220463057;

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
    msg.setTimeStamp(0.13698148684584088);
    msg.setSource(23257U);
    msg.setSourceEntity(55U);
    msg.setDestination(2297U);
    msg.setDestinationEntity(156U);
    msg.value = 0.5503178393855953;

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
    msg.setTimeStamp(0.6929640085465564);
    msg.setSource(22309U);
    msg.setSourceEntity(183U);
    msg.setDestination(34129U);
    msg.setDestinationEntity(9U);
    msg.value = 0.3092628692479108;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.03580467977937063);
    msg.setSource(55016U);
    msg.setSourceEntity(79U);
    msg.setDestination(58459U);
    msg.setDestinationEntity(14U);
    msg.value = 0.489038393954662;
    msg.z_units = 213U;

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
    msg.setTimeStamp(0.22203909399803368);
    msg.setSource(6864U);
    msg.setSourceEntity(88U);
    msg.setDestination(27394U);
    msg.setDestinationEntity(98U);
    msg.value = 0.49790579160677695;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.39777052250869604);
    msg.setSource(28789U);
    msg.setSourceEntity(151U);
    msg.setDestination(5763U);
    msg.setDestinationEntity(134U);
    msg.value = 0.20948654314836435;
    msg.speed_units = 132U;

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
    msg.setTimeStamp(0.31494552535994147);
    msg.setSource(18289U);
    msg.setSourceEntity(247U);
    msg.setDestination(45216U);
    msg.setDestinationEntity(27U);
    msg.value = 0.28481476551869167;
    msg.speed_units = 26U;

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
    msg.setTimeStamp(0.7694692459262573);
    msg.setSource(40859U);
    msg.setSourceEntity(233U);
    msg.setDestination(65208U);
    msg.setDestinationEntity(81U);
    msg.value = 0.11757100084876893;
    msg.speed_units = 193U;

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
    msg.setTimeStamp(0.20980956021151076);
    msg.setSource(46285U);
    msg.setSourceEntity(67U);
    msg.setDestination(24875U);
    msg.setDestinationEntity(72U);
    msg.value = 0.10872911959584786;

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
    msg.setTimeStamp(0.6837290789704538);
    msg.setSource(45441U);
    msg.setSourceEntity(207U);
    msg.setDestination(28483U);
    msg.setDestinationEntity(123U);
    msg.value = 0.8150068250855617;

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
    msg.setTimeStamp(0.4137917112994024);
    msg.setSource(27982U);
    msg.setSourceEntity(80U);
    msg.setDestination(20427U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9389932270625129;

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
    msg.setTimeStamp(0.7371480973966543);
    msg.setSource(54471U);
    msg.setSourceEntity(162U);
    msg.setDestination(39747U);
    msg.setDestinationEntity(188U);
    msg.value = 0.2578337970460972;

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
    msg.setTimeStamp(0.06470991803892367);
    msg.setSource(24398U);
    msg.setSourceEntity(187U);
    msg.setDestination(1658U);
    msg.setDestinationEntity(213U);
    msg.value = 0.11002220316906386;

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
    msg.setTimeStamp(0.637506366974564);
    msg.setSource(9782U);
    msg.setSourceEntity(189U);
    msg.setDestination(43058U);
    msg.setDestinationEntity(35U);
    msg.value = 0.6110006815829534;

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
    msg.setTimeStamp(0.6175912133557959);
    msg.setSource(5834U);
    msg.setSourceEntity(64U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(143U);
    msg.value = 0.49474229391486757;

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
    msg.setTimeStamp(0.4288169370261805);
    msg.setSource(23749U);
    msg.setSourceEntity(57U);
    msg.setDestination(1933U);
    msg.setDestinationEntity(163U);
    msg.value = 0.3854090766832201;

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
    msg.setTimeStamp(0.6752555765973696);
    msg.setSource(8739U);
    msg.setSourceEntity(168U);
    msg.setDestination(34577U);
    msg.setDestinationEntity(139U);
    msg.value = 0.24142835560953568;

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
    msg.setTimeStamp(0.7359017696717352);
    msg.setSource(42074U);
    msg.setSourceEntity(179U);
    msg.setDestination(53270U);
    msg.setDestinationEntity(134U);
    msg.path_ref = 3761042286U;
    msg.start_lat = 0.4387285517534377;
    msg.start_lon = 0.004652279482693977;
    msg.start_z = 0.2517868958700219;
    msg.start_z_units = 22U;
    msg.end_lat = 0.323620293730573;
    msg.end_lon = 0.3709620377643479;
    msg.end_z = 0.2687825793206037;
    msg.end_z_units = 96U;
    msg.speed = 0.22497362462415293;
    msg.speed_units = 172U;
    msg.lradius = 0.01425657748673359;
    msg.flags = 153U;

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
    msg.setTimeStamp(0.1258061816461633);
    msg.setSource(44771U);
    msg.setSourceEntity(31U);
    msg.setDestination(62696U);
    msg.setDestinationEntity(126U);
    msg.path_ref = 1175828620U;
    msg.start_lat = 0.3064418963326484;
    msg.start_lon = 0.6449307551971043;
    msg.start_z = 0.2943096339521668;
    msg.start_z_units = 228U;
    msg.end_lat = 0.3907706511974641;
    msg.end_lon = 0.8663877182249581;
    msg.end_z = 0.22428522467068868;
    msg.end_z_units = 194U;
    msg.speed = 0.03081029875803687;
    msg.speed_units = 26U;
    msg.lradius = 0.8214656806162403;
    msg.flags = 6U;

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
    msg.setTimeStamp(0.7274031865971212);
    msg.setSource(50272U);
    msg.setSourceEntity(162U);
    msg.setDestination(43938U);
    msg.setDestinationEntity(107U);
    msg.path_ref = 1447558241U;
    msg.start_lat = 0.10669613613223294;
    msg.start_lon = 0.21396759993751813;
    msg.start_z = 0.14936936758973773;
    msg.start_z_units = 174U;
    msg.end_lat = 0.6799526950051666;
    msg.end_lon = 0.1847492010635633;
    msg.end_z = 0.010653754070199195;
    msg.end_z_units = 131U;
    msg.speed = 0.9534850268424206;
    msg.speed_units = 32U;
    msg.lradius = 0.11576975439716786;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.34885080661023915);
    msg.setSource(56120U);
    msg.setSourceEntity(139U);
    msg.setDestination(21204U);
    msg.setDestinationEntity(159U);
    msg.x = 0.22199230002269799;
    msg.y = 0.4127370586591359;
    msg.z = 0.4547256686404152;
    msg.k = 0.28948260989965635;
    msg.m = 0.9846910710515769;
    msg.n = 0.6630827261640059;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.1449840666575053);
    msg.setSource(27160U);
    msg.setSourceEntity(60U);
    msg.setDestination(8980U);
    msg.setDestinationEntity(78U);
    msg.x = 0.7028284948515137;
    msg.y = 0.6523476918811922;
    msg.z = 0.08773939328812952;
    msg.k = 0.4927678537521124;
    msg.m = 0.3788272000267059;
    msg.n = 0.0073386595350311;
    msg.flags = 173U;

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
    msg.setTimeStamp(0.5311800390875584);
    msg.setSource(14606U);
    msg.setSourceEntity(136U);
    msg.setDestination(49857U);
    msg.setDestinationEntity(122U);
    msg.x = 0.20641443340098398;
    msg.y = 0.8422151341923628;
    msg.z = 0.3689350357657589;
    msg.k = 0.3389452823494744;
    msg.m = 0.6481605203432159;
    msg.n = 0.20900262050998597;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.04610903399601951);
    msg.setSource(63789U);
    msg.setSourceEntity(127U);
    msg.setDestination(45641U);
    msg.setDestinationEntity(55U);
    msg.value = 0.25438042705953134;

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
    msg.setTimeStamp(0.4921427953157852);
    msg.setSource(13394U);
    msg.setSourceEntity(47U);
    msg.setDestination(10202U);
    msg.setDestinationEntity(144U);
    msg.value = 0.06296398619180876;

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
    msg.setTimeStamp(0.3346228423712627);
    msg.setSource(48079U);
    msg.setSourceEntity(61U);
    msg.setDestination(57291U);
    msg.setDestinationEntity(126U);
    msg.value = 0.9216480921502042;

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
    msg.setTimeStamp(0.4593450119874566);
    msg.setSource(25941U);
    msg.setSourceEntity(122U);
    msg.setDestination(22973U);
    msg.setDestinationEntity(143U);
    msg.u = 0.08192707049563208;
    msg.v = 0.10488686047174334;
    msg.w = 0.9469633495630622;
    msg.p = 0.9056275208945643;
    msg.q = 0.3061013867775144;
    msg.r = 0.3749381726488188;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.050580472695169076);
    msg.setSource(41164U);
    msg.setSourceEntity(62U);
    msg.setDestination(53998U);
    msg.setDestinationEntity(29U);
    msg.u = 0.6822070813711275;
    msg.v = 0.008355768895774163;
    msg.w = 0.7859512237549947;
    msg.p = 0.28445297620108023;
    msg.q = 0.4138022760772836;
    msg.r = 0.9620326025464084;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.71531195445723);
    msg.setSource(16918U);
    msg.setSourceEntity(79U);
    msg.setDestination(18090U);
    msg.setDestinationEntity(243U);
    msg.u = 0.8151078717111965;
    msg.v = 0.7222069937508994;
    msg.w = 0.43465571707498263;
    msg.p = 0.9974473421896777;
    msg.q = 0.8341194815045048;
    msg.r = 0.2508589873922731;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.9970781707611814);
    msg.setSource(5435U);
    msg.setSourceEntity(112U);
    msg.setDestination(53627U);
    msg.setDestinationEntity(218U);
    msg.path_ref = 803590679U;
    msg.start_lat = 0.4487436790829793;
    msg.start_lon = 0.1343676157324516;
    msg.start_z = 0.17844178474827577;
    msg.start_z_units = 58U;
    msg.end_lat = 0.6472904774658893;
    msg.end_lon = 0.2625846828518834;
    msg.end_z = 0.09716171242353644;
    msg.end_z_units = 249U;
    msg.lradius = 0.5969518776949891;
    msg.flags = 248U;
    msg.x = 0.1534624076613602;
    msg.y = 0.9237807215707109;
    msg.z = 0.8141481825201629;
    msg.vx = 0.27260460917944773;
    msg.vy = 0.19263076766105625;
    msg.vz = 0.43509223012837506;
    msg.course_error = 0.0036472034880756787;
    msg.eta = 12490U;

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
    msg.setTimeStamp(0.2436206507074118);
    msg.setSource(23920U);
    msg.setSourceEntity(215U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(47U);
    msg.path_ref = 1794971174U;
    msg.start_lat = 0.807406937037436;
    msg.start_lon = 0.34279664192560944;
    msg.start_z = 0.43354799457637927;
    msg.start_z_units = 77U;
    msg.end_lat = 0.7246434717978246;
    msg.end_lon = 0.7306936181085264;
    msg.end_z = 0.2124764341776062;
    msg.end_z_units = 238U;
    msg.lradius = 0.8811216253173527;
    msg.flags = 108U;
    msg.x = 0.48690583898321926;
    msg.y = 0.8985443232259375;
    msg.z = 0.30982497852906155;
    msg.vx = 0.7093292676582873;
    msg.vy = 0.7066306328746658;
    msg.vz = 0.4238601007080389;
    msg.course_error = 0.17494779191835952;
    msg.eta = 56994U;

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
    msg.setTimeStamp(0.032967751192577666);
    msg.setSource(13101U);
    msg.setSourceEntity(5U);
    msg.setDestination(12066U);
    msg.setDestinationEntity(207U);
    msg.path_ref = 1127811192U;
    msg.start_lat = 0.8994251412304154;
    msg.start_lon = 0.6381673345962546;
    msg.start_z = 0.13858723392077188;
    msg.start_z_units = 140U;
    msg.end_lat = 0.6942381189709133;
    msg.end_lon = 0.7869023061843912;
    msg.end_z = 0.9763455594295135;
    msg.end_z_units = 94U;
    msg.lradius = 0.28687506007493935;
    msg.flags = 206U;
    msg.x = 0.691074424157579;
    msg.y = 0.8826323388350378;
    msg.z = 0.562974420706181;
    msg.vx = 0.2107898168367628;
    msg.vy = 0.45308195506722215;
    msg.vz = 0.1909121469456745;
    msg.course_error = 0.5402552923893019;
    msg.eta = 35731U;

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
    msg.setTimeStamp(0.9575316313036489);
    msg.setSource(43976U);
    msg.setSourceEntity(224U);
    msg.setDestination(23870U);
    msg.setDestinationEntity(212U);
    msg.k = 0.1684044609906754;
    msg.m = 0.2826157457569024;
    msg.n = 0.7588819838468439;

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
    msg.setTimeStamp(0.7319842496689616);
    msg.setSource(12502U);
    msg.setSourceEntity(15U);
    msg.setDestination(32678U);
    msg.setDestinationEntity(58U);
    msg.k = 0.7296492820014807;
    msg.m = 0.08802251461168242;
    msg.n = 0.7957864605891618;

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
    msg.setTimeStamp(0.5065960815120706);
    msg.setSource(2014U);
    msg.setSourceEntity(30U);
    msg.setDestination(64034U);
    msg.setDestinationEntity(173U);
    msg.k = 0.3537706571695174;
    msg.m = 0.004004477758261071;
    msg.n = 0.45844726314312145;

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
    msg.setTimeStamp(0.3898204281755395);
    msg.setSource(42833U);
    msg.setSourceEntity(10U);
    msg.setDestination(27689U);
    msg.setDestinationEntity(180U);
    msg.p = 0.20556422091673843;
    msg.i = 0.5306186913047102;
    msg.d = 0.6347004055119504;
    msg.a = 0.37193828627094994;

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
    msg.setTimeStamp(0.668397536214553);
    msg.setSource(32955U);
    msg.setSourceEntity(58U);
    msg.setDestination(20436U);
    msg.setDestinationEntity(163U);
    msg.p = 0.7813118023196667;
    msg.i = 0.734710812689394;
    msg.d = 0.11295882910338984;
    msg.a = 0.0709317813503505;

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
    msg.setTimeStamp(0.8752455361672749);
    msg.setSource(20958U);
    msg.setSourceEntity(6U);
    msg.setDestination(36531U);
    msg.setDestinationEntity(144U);
    msg.p = 0.47049465247407274;
    msg.i = 0.7904876326795612;
    msg.d = 0.2000188235524749;
    msg.a = 0.4954302324003337;

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
    msg.setTimeStamp(0.5395921621066782);
    msg.setSource(47414U);
    msg.setSourceEntity(219U);
    msg.setDestination(41602U);
    msg.setDestinationEntity(250U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.2025051253139334);
    msg.setSource(59504U);
    msg.setSourceEntity(40U);
    msg.setDestination(43677U);
    msg.setDestinationEntity(214U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.7813590503035658);
    msg.setSource(26378U);
    msg.setSourceEntity(107U);
    msg.setDestination(64615U);
    msg.setDestinationEntity(74U);
    msg.op = 26U;

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
    msg.setTimeStamp(0.46506198288500133);
    msg.setSource(15356U);
    msg.setSourceEntity(246U);
    msg.setDestination(24054U);
    msg.setDestinationEntity(165U);
    msg.timeout = 64499U;
    msg.lat = 0.521419843487126;
    msg.lon = 0.17372612351180894;
    msg.z = 0.6022665969045283;
    msg.z_units = 15U;
    msg.speed = 0.2752511638915359;
    msg.speed_units = 15U;
    msg.roll = 0.30569590892497533;
    msg.pitch = 0.3002363529161133;
    msg.yaw = 0.38028731744265565;
    msg.custom.assign("SNRUYFSUOCJIFAJYGEYHAHDXJCCBXXOZTTOYGLAOLASNXVDIGVFQWGTILODPGZMKPAJFQRPHEAMEMJYAXCVZDQELQPRCRRNTGZHKATMWKDFINVNRXBQLBXKINEVPVURTTSIGHYPJJURTISQXKTDBHPCDYSSWMZIWKGMSLQDKUFH");

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
    msg.setTimeStamp(0.00982424587327202);
    msg.setSource(46382U);
    msg.setSourceEntity(201U);
    msg.setDestination(21913U);
    msg.setDestinationEntity(215U);
    msg.timeout = 16322U;
    msg.lat = 0.9192007319632347;
    msg.lon = 0.6220153745083021;
    msg.z = 0.944437510503662;
    msg.z_units = 51U;
    msg.speed = 0.27388854348681935;
    msg.speed_units = 12U;
    msg.roll = 0.2755788084789216;
    msg.pitch = 0.40739242942294895;
    msg.yaw = 0.5103556385880421;
    msg.custom.assign("KAXFZYYLSIIPQ");

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
    msg.setTimeStamp(0.32471169082510953);
    msg.setSource(29139U);
    msg.setSourceEntity(24U);
    msg.setDestination(28481U);
    msg.setDestinationEntity(227U);
    msg.timeout = 5700U;
    msg.lat = 0.711997431472639;
    msg.lon = 0.16691962712395425;
    msg.z = 0.01554724813966124;
    msg.z_units = 184U;
    msg.speed = 0.9001604309145895;
    msg.speed_units = 108U;
    msg.roll = 0.9774957395415574;
    msg.pitch = 0.3332905756598179;
    msg.yaw = 0.4174573710048167;
    msg.custom.assign("WDZTTTXOSBBYIJMFJPRFZLWPPSLXIYOGWKYGSWCGFHHYOXWMJQUKUBMUKCMJQ");

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
    msg.setTimeStamp(0.6496809749642107);
    msg.setSource(58126U);
    msg.setSourceEntity(28U);
    msg.setDestination(15675U);
    msg.setDestinationEntity(186U);
    msg.timeout = 473U;
    msg.lat = 0.9754808948836209;
    msg.lon = 0.2551094938694818;
    msg.z = 0.013501707432473031;
    msg.z_units = 250U;
    msg.speed = 0.38344150089246465;
    msg.speed_units = 176U;
    msg.duration = 368U;
    msg.radius = 0.32173520214674867;
    msg.flags = 9U;
    msg.custom.assign("ARYIWWMNQLAVODUPBDQLBLQJZCPWMLNUCEJSPHVVYFCXNLPJDITHQOEHUFGAOIICGEURDFXXPFYNGZWHREHCSISBHEHBWXCRGXNLLLMVHLAGUAQQDMRRYYZSMZUEOYDOTKOTJJCXUXPZEUMEIABKDJTRCTDJTVAWISZQZLNPASWYFGSXZWBPHKTOMAC");

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
    msg.setTimeStamp(0.048914337350737136);
    msg.setSource(39211U);
    msg.setSourceEntity(206U);
    msg.setDestination(16310U);
    msg.setDestinationEntity(159U);
    msg.timeout = 4550U;
    msg.lat = 0.40415765392719394;
    msg.lon = 0.7807567577262389;
    msg.z = 0.6121742103817284;
    msg.z_units = 234U;
    msg.speed = 0.27715191784801085;
    msg.speed_units = 51U;
    msg.duration = 17129U;
    msg.radius = 0.2954356977511612;
    msg.flags = 112U;
    msg.custom.assign("ZWNPBBIHLTUVSBDKJNTHGSYTOINMRDRQEWVXMDNWKCNRCDRMCOCSHMCJUITFOTWAXEVJZZHDDYBIWOKAGLDYNRPXGOJKJKELVRAENCXGAELCNKFAFQ");

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
    msg.setTimeStamp(0.38453009143971406);
    msg.setSource(48260U);
    msg.setSourceEntity(192U);
    msg.setDestination(41881U);
    msg.setDestinationEntity(207U);
    msg.timeout = 44486U;
    msg.lat = 0.8865323632203231;
    msg.lon = 0.11057444046980358;
    msg.z = 0.9061541913205733;
    msg.z_units = 49U;
    msg.speed = 0.8185124700100014;
    msg.speed_units = 43U;
    msg.duration = 50526U;
    msg.radius = 0.6610612831445112;
    msg.flags = 59U;
    msg.custom.assign("IMIUCQUDDQEWCSOGNXKOYVEHRNISWFWBXRGHPYSVBTEGSLABITJPJONTKXQDCXSPNWDOGGVRUDJSGZHVXRUBDPVRKOATLREBMLO");

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
    msg.setTimeStamp(0.3380616052212049);
    msg.setSource(39649U);
    msg.setSourceEntity(216U);
    msg.setDestination(37815U);
    msg.setDestinationEntity(109U);
    msg.custom.assign("REVZCSKHMSRKBSYUDLHCOPXWLWCINCDRYXZVUGAZPKUPDDA");

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
    msg.setTimeStamp(0.9789566855076008);
    msg.setSource(37073U);
    msg.setSourceEntity(128U);
    msg.setDestination(16521U);
    msg.setDestinationEntity(98U);
    msg.custom.assign("ULHVIXLMSINLFLWXHLTENGTSBDFKUAQCOPWRUTDTGQJUHDHIFWHGXOYDPVQOJNDNVPYWMBOKRXCHZXAKBKADUBDKIPBIPZAHWZXNTRCJOKFLRKVUNPAIWYSFYHEULMQNFBRPKREQFQQXFNCVFDMQSONSAQOEIJGGYTMCCNZZZMBELRJZDPXRZUBSIUUOLKS");

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
    msg.setTimeStamp(0.8078617347819206);
    msg.setSource(56030U);
    msg.setSourceEntity(241U);
    msg.setDestination(48984U);
    msg.setDestinationEntity(201U);
    msg.custom.assign("EIUHNJSUEXEKDPVNRDEAHAUBAEMVIYBVQVOTOLLPPFMFYDAKHQOTGIHSDLTKOGGZRSBICBXQQNYMSOURTXMFIFUCWYGWJWEZFARQVZRZYQGRQOMCAR");

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
    msg.setTimeStamp(0.6969721305812097);
    msg.setSource(46531U);
    msg.setSourceEntity(216U);
    msg.setDestination(26172U);
    msg.setDestinationEntity(37U);
    msg.timeout = 22527U;
    msg.lat = 0.36005796746497865;
    msg.lon = 0.6107191259532583;
    msg.z = 0.29955717238203206;
    msg.z_units = 242U;
    msg.duration = 35583U;
    msg.speed = 0.08940271506771125;
    msg.speed_units = 129U;
    msg.type = 206U;
    msg.radius = 0.7875984582258093;
    msg.length = 0.9295228622404997;
    msg.bearing = 0.38684773187639354;
    msg.direction = 245U;
    msg.custom.assign("VETNLJUDIBRDNRPYFWUYPOTYCITXSJRKDVEXLFHIRGFGAPURFMLPAMCSLCVFMEZLMIZLASUEUZNOZQWGOECCPWUXWRHIMTNPUAGJNTHKDUDBWAXNBTDQQERKJJJDEHBUYCYIJHVCMAOJSMQBMHLRUEQKJSNGFRWTYV");

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
    msg.setTimeStamp(0.3915712940197289);
    msg.setSource(65281U);
    msg.setSourceEntity(42U);
    msg.setDestination(39028U);
    msg.setDestinationEntity(212U);
    msg.timeout = 3087U;
    msg.lat = 0.5645328240902802;
    msg.lon = 0.04867191185588171;
    msg.z = 0.8301751068063882;
    msg.z_units = 219U;
    msg.duration = 14507U;
    msg.speed = 0.7560772836809649;
    msg.speed_units = 191U;
    msg.type = 142U;
    msg.radius = 0.6420319790349045;
    msg.length = 0.07132411608304123;
    msg.bearing = 0.2135295901523946;
    msg.direction = 166U;
    msg.custom.assign("XZKUXCRPADPFDIVGALSCXKVTGFGFYKBLEJPJMTFFRXLYNDZOOHGYLQHJZFTVIDHTJBSVPDCDWGMEWGTKYNHLPKMQPMBAJUHPGMXYGBKZLFKKIXVRKAIEBRSBED");

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
    msg.setTimeStamp(0.9848255335412551);
    msg.setSource(18274U);
    msg.setSourceEntity(207U);
    msg.setDestination(34511U);
    msg.setDestinationEntity(66U);
    msg.timeout = 26410U;
    msg.lat = 0.9799303357630287;
    msg.lon = 0.01885718513045298;
    msg.z = 0.1525208269155307;
    msg.z_units = 84U;
    msg.duration = 54456U;
    msg.speed = 0.6918747858167674;
    msg.speed_units = 69U;
    msg.type = 87U;
    msg.radius = 0.35492724019825483;
    msg.length = 0.8303296300148603;
    msg.bearing = 0.05078688464290759;
    msg.direction = 118U;
    msg.custom.assign("RQGFOFNSTHAUTAGDKXEERULDTWKOPNALLJVKONODGMCPTVQJBXFXDTRNUQBVJZRDRRCJRKAMVJVDHU");

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
    msg.setTimeStamp(0.17512916883919427);
    msg.setSource(1856U);
    msg.setSourceEntity(65U);
    msg.setDestination(2616U);
    msg.setDestinationEntity(125U);
    msg.duration = 12369U;
    msg.custom.assign("KIGCRTWTXIAPXJPQBQYJLLSCWTPYQHUJNZLMXOTTLCCCSZFHDPQWIHBGNLSXKELZOOAZRYHPUFYBPKHISBJQMNSNFQTYDNVWJCEYGENZUXEGMCEAXBSMNBHFHVFOCPDMURWJYSKYWDMRXMNSHDXGRCKJUEVPUZCZRGWJBFGPZBKVRDVRVVUPEWKIYIOGMWOMUEFTZQE");

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
    msg.setTimeStamp(0.023185480813546766);
    msg.setSource(1906U);
    msg.setSourceEntity(172U);
    msg.setDestination(61699U);
    msg.setDestinationEntity(180U);
    msg.duration = 40583U;
    msg.custom.assign("DICDUCQVAEILSOYIFCPHPHOSDESZGNVIRRZDOQTNLOBBWIBPBAKYJHXFKMDYNWHMWFVGIBCRWGZRKLDYUNNGSYSUFUMKGXNOITQKEBAWPPLBLWTZJLSEFJXKGRZXQHGCGMIJLSNTHUSWVERFGQMWVXEYTNMXUXVKUZ");

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
    msg.setTimeStamp(0.19398929928819741);
    msg.setSource(34795U);
    msg.setSourceEntity(22U);
    msg.setDestination(22873U);
    msg.setDestinationEntity(60U);
    msg.duration = 42657U;
    msg.custom.assign("ICMFXSTPUXGDAQROYAQELKSQGGZJ");

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
    msg.setTimeStamp(0.5384583520419072);
    msg.setSource(46152U);
    msg.setSourceEntity(47U);
    msg.setDestination(20156U);
    msg.setDestinationEntity(42U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.6858173290246086;
    msg.control.set(tmp_msg_0);
    msg.duration = 15808U;
    msg.custom.assign("ZEDUVGXZWTYHCMNMOEJHUFQIGGYKXMVFQLKMXDTLRWYWZLEJQIUBAYRZATPTPOZQLJVWVKYWXQIPNMALLTNMFFWFGNFAMGRGIVKDCFHKGQVHFBXSJERKNMYLICIIGPPYCJUDCKREZPOZHMJSBAOEWYDEJWCLNKCTUZIBSVXMRBEZUJLZDAOXJWRNSDESOODVQGTARFPBAXJ");

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
    msg.setTimeStamp(0.6367411606037605);
    msg.setSource(51926U);
    msg.setSourceEntity(71U);
    msg.setDestination(55048U);
    msg.setDestinationEntity(114U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.7223072521384167;
    tmp_msg_0.z_units = 103U;
    msg.control.set(tmp_msg_0);
    msg.duration = 27593U;
    msg.custom.assign("HTKROYBINTBLZMFQJNLDMNAQQXQSFOINRRHYGLKKLYETZTOBMVXQUJDAYJSZJICXKZZNPDBEUNRCXRYYGPRGHAGFQDTPMDTALSJSXMCLPUDOVMLOPPVEQTERAWDUINZEXFPAZMJSBJWHDMXPWDTYEKFXWRXTQWHNEAKYMBSUDASGUCHKCSSHEOPJVVTWSFZKIUYAAWQVVHG");

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
    msg.setTimeStamp(0.7194473130635073);
    msg.setSource(27045U);
    msg.setSourceEntity(180U);
    msg.setDestination(54753U);
    msg.setDestinationEntity(175U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9101263216830915;
    tmp_msg_0.speed_units = 13U;
    msg.control.set(tmp_msg_0);
    msg.duration = 46856U;
    msg.custom.assign("FAKZNOMRAKLURMIKPE");

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
    msg.setTimeStamp(0.7541898970277982);
    msg.setSource(28826U);
    msg.setSourceEntity(228U);
    msg.setDestination(55067U);
    msg.setDestinationEntity(68U);
    msg.timeout = 37690U;
    msg.lat = 0.6888560409378877;
    msg.lon = 0.1508647502083159;
    msg.z = 0.8383022484691767;
    msg.z_units = 245U;
    msg.speed = 0.723157752812266;
    msg.speed_units = 134U;
    msg.bearing = 0.19998885337157135;
    msg.cross_angle = 0.2110741162459292;
    msg.width = 0.2475015313815725;
    msg.length = 0.48471840273629596;
    msg.hstep = 0.407805562475805;
    msg.coff = 106U;
    msg.alternation = 208U;
    msg.flags = 18U;
    msg.custom.assign("ONSSZWHGLLUITATICNWAOYRUQJYLFMYVFKCGEPBDVCQDBOITAMAJRVCXHFRZGEIFUQMFNDNOAZHQIAWRGHCUGJUBTEIKCIHLV");

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
    msg.setTimeStamp(0.010178307898855987);
    msg.setSource(20844U);
    msg.setSourceEntity(191U);
    msg.setDestination(12063U);
    msg.setDestinationEntity(195U);
    msg.timeout = 35996U;
    msg.lat = 0.7693232855625463;
    msg.lon = 0.042664576738347226;
    msg.z = 0.7207970349143704;
    msg.z_units = 58U;
    msg.speed = 0.8661888522846904;
    msg.speed_units = 203U;
    msg.bearing = 0.3181840349028956;
    msg.cross_angle = 0.06589180678821738;
    msg.width = 0.9213702051262161;
    msg.length = 0.7407180596061153;
    msg.hstep = 0.5025049167061403;
    msg.coff = 192U;
    msg.alternation = 246U;
    msg.flags = 223U;
    msg.custom.assign("GBMYRMQQOOFFVYLXSTRMNTNDJGJGPZGDUNZESQYZLZVPYDFKZNQLEWPBTUFNYVKDTDCEVKTXAHBIRIYLFHRTCAIDSESIHLOJKSXURTNBAZXYNNQTSVSTQMGCATBWAKLXLAGUECOQBICAVWCOPHUOWEYVGLEQF");

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
    msg.setTimeStamp(0.2958815210849135);
    msg.setSource(38848U);
    msg.setSourceEntity(24U);
    msg.setDestination(34158U);
    msg.setDestinationEntity(125U);
    msg.timeout = 44915U;
    msg.lat = 0.9580512224983521;
    msg.lon = 0.10423676428196449;
    msg.z = 0.8432775578825046;
    msg.z_units = 76U;
    msg.speed = 0.9962406641328702;
    msg.speed_units = 76U;
    msg.bearing = 0.13081105342986243;
    msg.cross_angle = 0.36071058764921293;
    msg.width = 0.22420378134616037;
    msg.length = 0.9704370589290086;
    msg.hstep = 0.6394126368023092;
    msg.coff = 195U;
    msg.alternation = 46U;
    msg.flags = 243U;
    msg.custom.assign("NSPSMZHSFCMWQNQDKUGLXWWUAU");

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
    msg.setTimeStamp(0.32966496171758153);
    msg.setSource(15111U);
    msg.setSourceEntity(229U);
    msg.setDestination(52592U);
    msg.setDestinationEntity(35U);
    msg.timeout = 27072U;
    msg.lat = 0.9083027821663245;
    msg.lon = 0.4758867168174685;
    msg.z = 0.9266702375850914;
    msg.z_units = 135U;
    msg.speed = 0.7678187285944714;
    msg.speed_units = 247U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4528592046760511;
    tmp_msg_0.y = 0.21208083733950367;
    tmp_msg_0.z = 0.5992252485485564;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZTILDXVZUACRETQGFHPVBKVZVYVBFKJSCLOQOBQJ");

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
    msg.setTimeStamp(0.6108200958912037);
    msg.setSource(58345U);
    msg.setSourceEntity(246U);
    msg.setDestination(40769U);
    msg.setDestinationEntity(72U);
    msg.timeout = 14041U;
    msg.lat = 0.757047288473088;
    msg.lon = 0.30734719238520225;
    msg.z = 0.86517125161344;
    msg.z_units = 145U;
    msg.speed = 0.4537801906034531;
    msg.speed_units = 108U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.2105785670770317;
    tmp_msg_0.y = 0.29247584776560054;
    tmp_msg_0.z = 0.6164439463380718;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QVYIQIXFMEDBPPVRSAJAUZJNJDNTRNDDOZAODWXHVCYQKFCLBXERVXEKPSXLRSNWDEUCEWBGWZPSWRZAETGYITLCIITEQTEHNQXMYBMPZQTAHKIVYHLBBZRFLADNYUUWOVNVOAHRMUFJTBWPPIH");

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
    msg.setTimeStamp(0.7584046667426961);
    msg.setSource(18887U);
    msg.setSourceEntity(224U);
    msg.setDestination(33283U);
    msg.setDestinationEntity(52U);
    msg.timeout = 23582U;
    msg.lat = 0.8538157249293298;
    msg.lon = 0.5421136589767677;
    msg.z = 0.38223438146337707;
    msg.z_units = 230U;
    msg.speed = 0.3426364938661791;
    msg.speed_units = 212U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7216170207710398;
    tmp_msg_0.y = 0.6754429273164638;
    tmp_msg_0.z = 0.6005147605591853;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HAIKBLVPTGFPJFFYVVQLFQOTREWUCGKAZMKNAOFJHHBJDZGVUCVKXYIQPEIIBLAYMMNAXNCRZRZCKDSJIOTBGTQSR");

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
    msg.setTimeStamp(0.7489226921924533);
    msg.setSource(15421U);
    msg.setSourceEntity(126U);
    msg.setDestination(18793U);
    msg.setDestinationEntity(86U);
    msg.x = 0.024427476844291474;
    msg.y = 0.6730641065512017;
    msg.z = 0.4918504225095981;

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
    msg.setTimeStamp(0.35782004961532665);
    msg.setSource(16409U);
    msg.setSourceEntity(202U);
    msg.setDestination(19595U);
    msg.setDestinationEntity(209U);
    msg.x = 0.9516871952632681;
    msg.y = 0.9633416402151712;
    msg.z = 0.8950040868172946;

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
    msg.setTimeStamp(0.9864888927173762);
    msg.setSource(41499U);
    msg.setSourceEntity(158U);
    msg.setDestination(41369U);
    msg.setDestinationEntity(83U);
    msg.x = 0.8377269818938816;
    msg.y = 0.2704695837897588;
    msg.z = 0.8204488507584985;

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
    msg.setTimeStamp(0.05229037552141513);
    msg.setSource(2008U);
    msg.setSourceEntity(74U);
    msg.setDestination(34683U);
    msg.setDestinationEntity(29U);
    msg.timeout = 38103U;
    msg.lat = 0.9709068758105247;
    msg.lon = 0.5960379435329639;
    msg.z = 0.013480838009469864;
    msg.z_units = 145U;
    msg.amplitude = 0.4817515988382919;
    msg.pitch = 0.13313331979241871;
    msg.speed = 0.39599568121337625;
    msg.speed_units = 57U;
    msg.custom.assign("KAOYCFPILMOSRXEHTPHSWWFVBSBGUGVDRNUTPJOHYNNLJWTZSMPNIKDZMAPURJYXGJRITPTLSXABXCKYZVXNXPUBAWSFMMECYTXXAKQQKRTWFKMVHWFGYANEKRJRWLRDJYVVDBOHQMIIGSLUQZZQMISYDVUIGNFQQMZXLCNOBKOLGLVOSEWXWOGIYUBYUTBFMFVRZDZGCOJZNEEDUHEJPEAJHGNZLEHFDRHQ");

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
    msg.setTimeStamp(0.08692147882591927);
    msg.setSource(47002U);
    msg.setSourceEntity(172U);
    msg.setDestination(24449U);
    msg.setDestinationEntity(195U);
    msg.timeout = 478U;
    msg.lat = 0.7570188171942188;
    msg.lon = 0.41078241094272305;
    msg.z = 0.07411405408606864;
    msg.z_units = 199U;
    msg.amplitude = 0.0223881162143017;
    msg.pitch = 0.2632949157533404;
    msg.speed = 0.16216434847808237;
    msg.speed_units = 238U;
    msg.custom.assign("QODZHPGFOHRCEZACKPCNRLUMUUMTJQAULFZAPLCKWWSTOEIKWTQHENRCQQJMXVBMLKRXRQOWGBPBQMRJOHYVJQHMLYFSKCSJZVOWVZVZQPEHRXYZDJPVUSOMLNVJDSTYBYGPCPANINSTYRXEPOYZBBAIGVHISAIX");

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
    msg.setTimeStamp(0.08160093295920112);
    msg.setSource(63454U);
    msg.setSourceEntity(217U);
    msg.setDestination(33833U);
    msg.setDestinationEntity(172U);
    msg.timeout = 36088U;
    msg.lat = 0.5482338070353474;
    msg.lon = 0.4984612184303522;
    msg.z = 0.3671368970553436;
    msg.z_units = 18U;
    msg.amplitude = 0.34471442010951314;
    msg.pitch = 0.23528302706847448;
    msg.speed = 0.8453613467389698;
    msg.speed_units = 83U;
    msg.custom.assign("BYODWZEBZDFFKLCTQPJSGPDQEZTBRRGVZXRLSALMXSWSPYYLXKYNVFTPIOMGZISSHRVYJWINZRIWTXDQPURKCFJLUGOIMMSLUSWUWXOADPDRDAPJFIUVVBJTIXYFQIVHUTAABXQXGANLFLFOZSRHNFYOTCECCZKABJFXINPJMKLQHPUYNHTYHGGKTKVGOWEVEOJJE");

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
    msg.setTimeStamp(0.1334661893342447);
    msg.setSource(6138U);
    msg.setSourceEntity(228U);
    msg.setDestination(54294U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.29195608320737465);
    msg.setSource(36752U);
    msg.setSourceEntity(40U);
    msg.setDestination(54780U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.9595635614290303);
    msg.setSource(12249U);
    msg.setSourceEntity(30U);
    msg.setDestination(29650U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.13933248530485687);
    msg.setSource(16978U);
    msg.setSourceEntity(159U);
    msg.setDestination(18954U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.3424622314142629;
    msg.lon = 0.905032745226938;
    msg.z = 0.33055998591857605;
    msg.z_units = 201U;
    msg.radius = 0.6159943472242626;
    msg.duration = 42665U;
    msg.speed = 0.1949290975067901;
    msg.speed_units = 134U;
    msg.custom.assign("YPBUCKAXORCYOWVOZPHOEAQYMLAWNWUQKQGLGGZCGIU");

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
    msg.setTimeStamp(0.2609231140052659);
    msg.setSource(29894U);
    msg.setSourceEntity(231U);
    msg.setDestination(36297U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.49830363644403863;
    msg.lon = 0.3553732425367032;
    msg.z = 0.5836499904726147;
    msg.z_units = 51U;
    msg.radius = 0.33755237068174293;
    msg.duration = 5928U;
    msg.speed = 0.21537373485721845;
    msg.speed_units = 232U;
    msg.custom.assign("QOJOWJMGLDNSESMDCGLKRIYKBCUBCXXVIIPZCZJHIYAPLPFEJDUQKUKXYLFLONUIIZZRYQBXSYKBOCQZCMKIINEHTSAGLVFSPLGAFMFQYCVJBCLWPDMYM");

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
    msg.setTimeStamp(0.22444831191671055);
    msg.setSource(38112U);
    msg.setSourceEntity(38U);
    msg.setDestination(969U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.9277889381693599;
    msg.lon = 0.8408434344501797;
    msg.z = 0.14185544345387513;
    msg.z_units = 205U;
    msg.radius = 0.26166380531784783;
    msg.duration = 19581U;
    msg.speed = 0.699561424302816;
    msg.speed_units = 171U;
    msg.custom.assign("ZFABXOYROOPZPXLMFWOGYVFWLPBQHDIBTLAIKNVDUNVTGGKKRMSVNENJCWUCINXVGGDMMWCSLUMYEHKSGCJLZIHRZMRKQYQXZSNQCRYJHPEZHVJWJDLXFBHLMPDVQYKOLETHKTCLFTOQIQHFWAGKDJQAQYSASDPJAWISOREZUZROEZTPDKAIKUISRJABFUJFNVUSYXBECFXRTPBYLVZIUGBOMCIDGXWFMWTG");

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
    msg.setTimeStamp(0.33518788306739145);
    msg.setSource(9206U);
    msg.setSourceEntity(223U);
    msg.setDestination(47577U);
    msg.setDestinationEntity(135U);
    msg.timeout = 4412U;
    msg.flags = 156U;
    msg.lat = 0.9693256929982206;
    msg.lon = 0.291589641179693;
    msg.start_z = 0.1592177757826272;
    msg.start_z_units = 138U;
    msg.end_z = 0.17528134044624444;
    msg.end_z_units = 227U;
    msg.radius = 0.5537476851893863;
    msg.speed = 0.6917549855912452;
    msg.speed_units = 27U;
    msg.custom.assign("XPJBESQUGIPRVCOOPWKYECIZHGYUSIYCFVROFOOULZBPAZMLYDFMRBQTKTJBEIYBUKICWKNLDALMUJOXEZQJTRCQRHPXNHANDWPLUFXMRYVTMAWQGTTECVONMUGSJWTWDSBXRECBTAELENTQMOXPFLDMFVZXHGN");

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
    msg.setTimeStamp(0.2970197997306616);
    msg.setSource(53404U);
    msg.setSourceEntity(212U);
    msg.setDestination(19634U);
    msg.setDestinationEntity(222U);
    msg.timeout = 10696U;
    msg.flags = 78U;
    msg.lat = 0.8453231833196317;
    msg.lon = 0.37056984160547324;
    msg.start_z = 0.8640462312153298;
    msg.start_z_units = 56U;
    msg.end_z = 0.1700007838663785;
    msg.end_z_units = 210U;
    msg.radius = 0.0038220040029494085;
    msg.speed = 0.3409621471901747;
    msg.speed_units = 40U;
    msg.custom.assign("KKSDEFDQSCLGALCNIXHSCTQEMAKQNNDLBIETUESNYSLZEEMPDRVWCLYQXXRBFNZCLGPULLZYIDJJFQTRHBJVOXAJUVVZFSNGFKBUHXOXEUFJZGDWKHTWQUHACUPGBUMCVHIJRIZUSWONTPQRQTYRBOSVGTOLJFHJEYPIPBNTIRPQIWTEU");

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
    msg.setTimeStamp(0.3791489893479507);
    msg.setSource(21542U);
    msg.setSourceEntity(47U);
    msg.setDestination(63647U);
    msg.setDestinationEntity(114U);
    msg.timeout = 23237U;
    msg.flags = 40U;
    msg.lat = 0.8467889500015432;
    msg.lon = 0.28729486300026263;
    msg.start_z = 0.2231530364584089;
    msg.start_z_units = 227U;
    msg.end_z = 0.509996898935967;
    msg.end_z_units = 114U;
    msg.radius = 0.35742601824538733;
    msg.speed = 0.32434332410936595;
    msg.speed_units = 252U;
    msg.custom.assign("WFYFMDDPALUDHOZKVUTSIXRKCWNGBXZQCPDVHHVOMOUZWRODQVZOCJQOFMMPDVEC");

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
    msg.setTimeStamp(0.0051446228658676985);
    msg.setSource(26625U);
    msg.setSourceEntity(104U);
    msg.setDestination(180U);
    msg.setDestinationEntity(151U);
    msg.timeout = 51901U;
    msg.lat = 0.9972828150180579;
    msg.lon = 0.5983220686460078;
    msg.z = 0.5164235855162685;
    msg.z_units = 17U;
    msg.speed = 0.696390236937144;
    msg.speed_units = 3U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5380108173658463;
    tmp_msg_0.y = 0.07716543134416132;
    tmp_msg_0.z = 0.4390236556873104;
    tmp_msg_0.t = 0.7137009636171423;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TAJJQYAIGMRPLKDUWSSMNDSIPQMMEEXZTYYGCUZFNGSEMIAFNTUAHGNVAFNWZBRMCXPYXXUCOAPBYSDJRJZOYXWCKOUMFUTHLCWTSNOVEWXHTMKJBUQIFDZKEAGHERWTKKLHCRFUMOBCRJKQPPCUZWGSXEYVJDPPLPJVPXYBRQLIADOWFKVQZOBYNDILAFECSVFOGDILVEIVQJZBHVZBKAGTYECLHRNSLONDJHBDVLZHHXQ");

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
    msg.setTimeStamp(0.5744294395896826);
    msg.setSource(21054U);
    msg.setSourceEntity(153U);
    msg.setDestination(65534U);
    msg.setDestinationEntity(180U);
    msg.timeout = 46611U;
    msg.lat = 0.5594460861537836;
    msg.lon = 0.6072308717472932;
    msg.z = 0.618039862935333;
    msg.z_units = 120U;
    msg.speed = 0.4859207090096883;
    msg.speed_units = 248U;
    msg.custom.assign("XYFVKEBHRWWSTAETFNXORVNPSBRWSGMTQYNEFXZGJJKHPUOELNXYYWBAIDRHRRHAJTUMAOOQFGZBTAOVJYGCGSVMUYUWMLGHYSKKZCDD");

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
    msg.setTimeStamp(0.5244997462065848);
    msg.setSource(13713U);
    msg.setSourceEntity(54U);
    msg.setDestination(59574U);
    msg.setDestinationEntity(119U);
    msg.timeout = 44446U;
    msg.lat = 0.6819543980860464;
    msg.lon = 0.6234206981960431;
    msg.z = 0.4193331703058274;
    msg.z_units = 63U;
    msg.speed = 0.6856897060541202;
    msg.speed_units = 238U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.20100460391328256;
    tmp_msg_0.y = 0.649598130422435;
    tmp_msg_0.z = 0.026573521457038063;
    tmp_msg_0.t = 0.47666279963893;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JOIHDRUCXSSEBPWRCDYIBOASGJXZPQVJRMMIYUNGQANHDADNUBPZFOVZTOMWGIHHJBFWDOLVNIHQKEEZYAXEXOKRYZGRQLSLUVAOHNJDSFTCKJGOMJBNCYJAEQKNERCVHTKNMYBA");

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
    msg.setTimeStamp(0.25758042172211826);
    msg.setSource(4086U);
    msg.setSourceEntity(70U);
    msg.setDestination(18554U);
    msg.setDestinationEntity(124U);
    msg.x = 0.7263683122658794;
    msg.y = 0.567053127231609;
    msg.z = 0.1803119108909158;
    msg.t = 0.13186553030934878;

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
    msg.setTimeStamp(0.3006130097612054);
    msg.setSource(34392U);
    msg.setSourceEntity(2U);
    msg.setDestination(56555U);
    msg.setDestinationEntity(134U);
    msg.x = 0.7405077248288889;
    msg.y = 0.8196070868384532;
    msg.z = 0.8450293625288251;
    msg.t = 0.0037583658129790587;

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
    msg.setTimeStamp(0.7228539578313877);
    msg.setSource(29423U);
    msg.setSourceEntity(213U);
    msg.setDestination(42619U);
    msg.setDestinationEntity(93U);
    msg.x = 0.034210944412302546;
    msg.y = 0.9876861116867648;
    msg.z = 0.3799627448303581;
    msg.t = 0.9303538952907849;

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
    msg.setTimeStamp(0.5304193860202971);
    msg.setSource(15009U);
    msg.setSourceEntity(126U);
    msg.setDestination(58030U);
    msg.setDestinationEntity(127U);
    msg.timeout = 21111U;
    msg.name.assign("VWVOZEJSSTYMHHYPHRYKKFPSKDAVMOXAAZLEHHPQMUYNVEJTXTNNEKIXGCHMOXNQYDIFAMUIFVBUWGPFIRZLQJNGAKQJMCXWZOFSJZKQGHOINBLLLYQPPYVX");
    msg.custom.assign("HQWKPTCRFZIUEGVFBGWROGGDXVFILWKTQTSGJLOEZYYNNEHLHIPWOKXBXIIARVVCEMMRTUVDUKPBCUXCPYNMJDHDNTYEHISS");

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
    msg.setTimeStamp(0.10799997708535358);
    msg.setSource(48520U);
    msg.setSourceEntity(35U);
    msg.setDestination(35674U);
    msg.setDestinationEntity(59U);
    msg.timeout = 19641U;
    msg.name.assign("LCWVYNAXWBXEQJPELSBGOUVAZMGTFZYRGDFQEPFUWUJVSWNDSSIGDRRWKOGOEYJVMHKXCYRXVNHMCIDRIX");
    msg.custom.assign("RYOFCIHMWGSNZVPCFWZAZSJULEDFDYOWYFGQPZJEIEYCUNWBKLTGYZBYDHEUPXCABFVULZMYTJDDJNFZWTBBNGSSCUEARFACQUVGOSRHGIJGDIYPSZIQDMZUTVBTLBJNMTAVZHVXDYQUVNPMQIXVXABKQIFILTWONECEOLHREGXHOAXFSHI");

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
    msg.setTimeStamp(0.23694688634181893);
    msg.setSource(54049U);
    msg.setSourceEntity(197U);
    msg.setDestination(54626U);
    msg.setDestinationEntity(236U);
    msg.timeout = 59684U;
    msg.name.assign("LYOXTPQLWZNIZMXLOKNPGZIGHVMFRLSBOINYQBGHIVKWJSVUPYGOJANPKQCNYWRUEJYDTJXXVBNDCFUHRBBUFABEWQKSKKLAQOTACGWFMZMPQZPQOJWKSAWHZSUZFHMJIVGRCMUZDOITXDHYLPHZLOBWGOAMBRVJKFXVTNSHCGNTMEQRNEXTRQPAAULVOEJDXTEY");
    msg.custom.assign("TFZTHQAATCJNMRMWYDELINDPLCSFEHGJUSSLFPJRFGQXEFUIQEHCWBEPUTURQCRKNVQOYYVTBDMXHBKKP");

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
    msg.setTimeStamp(0.2733116731970414);
    msg.setSource(59946U);
    msg.setSourceEntity(90U);
    msg.setDestination(15642U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.40560755984983987;
    msg.lon = 0.6409839600782519;
    msg.z = 0.08052831462310694;
    msg.z_units = 174U;
    msg.speed = 0.055684469610744136;
    msg.speed_units = 189U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6820582970154588;
    tmp_msg_0.y = 0.20846588946068645;
    tmp_msg_0.z = 0.5440880367724696;
    tmp_msg_0.t = 0.4963129918447884;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.42612987989842244;
    msg.custom.assign("HSZOGFOAOZXHHHCHSPMKWBAAMFYHLDSSNQWFIVDCGCBPSDPEJJAYVDYDQXKLJTNEPUYPGBYNZYIPVDSPWQTJCYZUKTGWX");

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
    msg.setTimeStamp(0.5464077128749515);
    msg.setSource(41103U);
    msg.setSourceEntity(127U);
    msg.setDestination(38998U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.517472017614923;
    msg.lon = 0.8818540860286009;
    msg.z = 0.13545622835923232;
    msg.z_units = 94U;
    msg.speed = 0.6875199244162912;
    msg.speed_units = 237U;
    msg.start_time = 0.1130836522466;
    msg.custom.assign("QKEQLMVCHTQWDYWACRJYXWDQBFPUUFFTZBONZXUEEHNFLLCGAVEJEEXOYHWNXO");

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
    msg.setTimeStamp(0.6465678407782677);
    msg.setSource(54911U);
    msg.setSourceEntity(115U);
    msg.setDestination(62964U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.4955197184047263;
    msg.lon = 0.5084464557898796;
    msg.z = 0.6265037251060909;
    msg.z_units = 193U;
    msg.speed = 0.27816946948203236;
    msg.speed_units = 121U;
    msg.start_time = 0.39474314481264117;
    msg.custom.assign("AWSCQDNCMBTWKXCMPYNSXVVXSOTZVHUEUOWACWRRVLIVUTHEFQAPAMTMDAKCBCYALAIHNDTBHNFKHTNQSSSJSEGVWEOBGHKZZKNGZJPPQADYEFQDZEYILYRXCOJQQXHLXEVLMUEBARBOGGPWSISZGFNNIFXAIKPWUCHLUYMFURZGMMDBRHIFMCJLXSVTDRPYLUKOWJYOITPRJXPKFEMLTVWKUXONDECFHGOYQZJZIFKNZQVBDBQGJRYJJTL");

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
    msg.setTimeStamp(0.7469554676433975);
    msg.setSource(16273U);
    msg.setSourceEntity(169U);
    msg.setDestination(28718U);
    msg.setDestinationEntity(215U);
    msg.vid = 58424U;
    msg.off_x = 0.8236641782540358;
    msg.off_y = 0.8852669363448845;
    msg.off_z = 0.126102709706977;

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
    msg.setTimeStamp(0.06387012493738553);
    msg.setSource(40510U);
    msg.setSourceEntity(222U);
    msg.setDestination(41950U);
    msg.setDestinationEntity(150U);
    msg.vid = 61276U;
    msg.off_x = 0.3074344156344987;
    msg.off_y = 0.4026523287937014;
    msg.off_z = 0.5062564535580405;

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
    msg.setTimeStamp(0.9239056602375549);
    msg.setSource(41008U);
    msg.setSourceEntity(206U);
    msg.setDestination(45307U);
    msg.setDestinationEntity(121U);
    msg.vid = 59000U;
    msg.off_x = 0.8026876982351442;
    msg.off_y = 0.7020612567249545;
    msg.off_z = 0.7102138518250232;

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
    msg.setTimeStamp(0.7152365138909716);
    msg.setSource(332U);
    msg.setSourceEntity(217U);
    msg.setDestination(53757U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.956838974145835);
    msg.setSource(56965U);
    msg.setSourceEntity(21U);
    msg.setDestination(11851U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.8857061918531732);
    msg.setSource(44368U);
    msg.setSourceEntity(70U);
    msg.setDestination(16345U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.06827441113664512);
    msg.setSource(38745U);
    msg.setSourceEntity(95U);
    msg.setDestination(56530U);
    msg.setDestinationEntity(89U);
    msg.mid = 20684U;

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
    msg.setTimeStamp(0.8816498394989375);
    msg.setSource(52404U);
    msg.setSourceEntity(88U);
    msg.setDestination(28331U);
    msg.setDestinationEntity(124U);
    msg.mid = 32510U;

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
    msg.setTimeStamp(0.5378349803244412);
    msg.setSource(26220U);
    msg.setSourceEntity(226U);
    msg.setDestination(46805U);
    msg.setDestinationEntity(230U);
    msg.mid = 53726U;

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
    msg.setTimeStamp(0.1583039628770242);
    msg.setSource(34585U);
    msg.setSourceEntity(161U);
    msg.setDestination(62535U);
    msg.setDestinationEntity(194U);
    msg.state = 27U;
    msg.eta = 39052U;
    msg.info.assign("YKVDAMSCTRYUXQQAYLHJSPSYIFXKZHOAGMCZXPYAKPDJDBBFENIGLIFWRNZPUUKJXCIXYQQOORXFOFUMHZTQPXZSTFBEBDBNXSGJMJVGTCGNSDEARNHTWVVPEOAIPBCSFLYCMWPESRJTKGTMLWVNLWLUUZYERGUZVBLWGESHDMOWEAFNDMKNAVYWHIEDLOJQLQRNQUZBVNVXDIOLBTAKOPYTKBJH");

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
    msg.setTimeStamp(0.9833827377033421);
    msg.setSource(34011U);
    msg.setSourceEntity(204U);
    msg.setDestination(23320U);
    msg.setDestinationEntity(142U);
    msg.state = 216U;
    msg.eta = 63076U;
    msg.info.assign("WVZVMBEQRZCISFFJRJZEAMOJPLJDNZSIKTCKKBXRSCZMQGKXDKWZLDWORFNOVXGIAHQECGIQJRVOQBCOMTMUUUKZVLNJPASBNLBTHMYYCGZDOVRPVSYNQMDDUEWEBDNUQBHVWPPHTEUXKHIOLGSYGRJRXWMEHLFRY");

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
    msg.setTimeStamp(0.7047979591579264);
    msg.setSource(53497U);
    msg.setSourceEntity(175U);
    msg.setDestination(23185U);
    msg.setDestinationEntity(122U);
    msg.state = 117U;
    msg.eta = 307U;
    msg.info.assign("XLEGATQGCVYKNSDDZDCYMGPUMYLIVZKDYPNDEGTGCHJNIUVBTQSCEKWWZXWAMBFLXDCMLYKJGJSIIQQNWOJYMFTEUWLVXVOJYRRWBAPPOWTZEFPLXHKQHVNQNOMDSTQIGLATZYWPAUJHSSCFIVZEMGBZXBCMCQRMPIKYFBULOWHREJDTWEXHKNDTRRRTAUJQANAOFPIUSZXFBROLCKHSHVAHB");

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
    msg.setTimeStamp(0.2330801427816922);
    msg.setSource(24395U);
    msg.setSourceEntity(109U);
    msg.setDestination(4329U);
    msg.setDestinationEntity(151U);
    msg.system = 6539U;
    msg.duration = 37080U;
    msg.speed = 0.9402184578985412;
    msg.speed_units = 168U;
    msg.x = 0.12487697915623264;
    msg.y = 0.6565394053327732;
    msg.z = 0.15997511716539026;
    msg.z_units = 177U;

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
    msg.setTimeStamp(0.023239341220193777);
    msg.setSource(43907U);
    msg.setSourceEntity(219U);
    msg.setDestination(13608U);
    msg.setDestinationEntity(228U);
    msg.system = 44467U;
    msg.duration = 34018U;
    msg.speed = 0.5624070543013956;
    msg.speed_units = 151U;
    msg.x = 0.4523112300284783;
    msg.y = 0.9961644172955112;
    msg.z = 0.4890895692697629;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.20594442351618747);
    msg.setSource(44468U);
    msg.setSourceEntity(253U);
    msg.setDestination(42640U);
    msg.setDestinationEntity(34U);
    msg.system = 8021U;
    msg.duration = 14398U;
    msg.speed = 0.1956181346888034;
    msg.speed_units = 170U;
    msg.x = 0.45198950875443844;
    msg.y = 0.280837328806274;
    msg.z = 0.25825794736454466;
    msg.z_units = 178U;

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
    msg.setTimeStamp(0.0350439720548027);
    msg.setSource(57767U);
    msg.setSourceEntity(12U);
    msg.setDestination(10141U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.4916501930209277;
    msg.lon = 0.41069900480737775;
    msg.speed = 0.5518262995419126;
    msg.speed_units = 46U;
    msg.duration = 19616U;
    msg.sys_a = 58914U;
    msg.sys_b = 37121U;
    msg.move_threshold = 0.2527277296474929;

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
    msg.setTimeStamp(0.5631354764079993);
    msg.setSource(56957U);
    msg.setSourceEntity(250U);
    msg.setDestination(9029U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.20818449735724776;
    msg.lon = 0.1340789644275655;
    msg.speed = 0.17943259352044405;
    msg.speed_units = 188U;
    msg.duration = 65219U;
    msg.sys_a = 18417U;
    msg.sys_b = 32905U;
    msg.move_threshold = 0.17019118339568706;

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
    msg.setTimeStamp(0.49679238222459277);
    msg.setSource(7230U);
    msg.setSourceEntity(81U);
    msg.setDestination(50691U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.37654883028383557;
    msg.lon = 0.4613993120863997;
    msg.speed = 0.8799139569535293;
    msg.speed_units = 76U;
    msg.duration = 32986U;
    msg.sys_a = 62341U;
    msg.sys_b = 60738U;
    msg.move_threshold = 0.21115724574304862;

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
    msg.setTimeStamp(0.4570068703877517);
    msg.setSource(14308U);
    msg.setSourceEntity(51U);
    msg.setDestination(41157U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.5833131321094461;
    msg.lon = 0.34568465258708536;
    msg.z = 0.7728423386265819;
    msg.z_units = 229U;
    msg.speed = 0.5464207350737523;
    msg.speed_units = 36U;
    msg.custom.assign("LPWHWVEMQNSGLZUPRKBLFIEDIXDSZXLWNMXRELUSSMEZQMMPIHVJYYYIYXJKFDRZNAOUHRKBDJGSBOTEZQZFQNPEVVARSDALNANOTJVUITAOJZFKJUFFOAHFHOOGRXVTXIHAPRDWSYSJPNXQULYURDQOLMICYGALQAQNICHTZGWNEYKKPHSNKOGBSPJCGMTUFTUEKXKVWBMDVRUPGXKECBTW");

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
    msg.setTimeStamp(0.02223992579442091);
    msg.setSource(19055U);
    msg.setSourceEntity(196U);
    msg.setDestination(8104U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.20948544773583544;
    msg.lon = 0.23947654100938376;
    msg.z = 0.11475224958114649;
    msg.z_units = 123U;
    msg.speed = 0.47696796132744224;
    msg.speed_units = 198U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8557421455124626;
    tmp_msg_0.lon = 0.9634953656617607;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IVGCPPAZPWXBCUQFHFEJHTQSQZZLTOXIRDTOORJXOOHEWSTZAABGRAJMBTDHMBLSUEWEJWKFHGIXIKPGCUDKBYTYNHRRNRVHHFOILPMLTCEYHXKSKJRMBPRVVFSPDPKMKTIGCFCNCSJQHXLZMIUBJKMXASEEGFELJBNQSOPOZXYWGZFWDEYNLKYDWFRAQUSIVQPLLEMVIYDUJFJYNCDDTA");

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
    msg.setTimeStamp(0.5643743313517189);
    msg.setSource(39377U);
    msg.setSourceEntity(55U);
    msg.setDestination(59460U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.033379523134275946;
    msg.lon = 0.9608480787412231;
    msg.z = 0.20587736531301304;
    msg.z_units = 242U;
    msg.speed = 0.3804914461211767;
    msg.speed_units = 177U;
    msg.custom.assign("OULOIHCXBSTFWZPJKADYDWYPTRKXVNUJTZEYLQSFCLXPXSFKQTWUUPZQDSFSPIJJCEBNVJVAQTDDFVHOHFNLAXOOKEUBMEWFSJRSBEPMHCHIIGARIMGGOPXGGQKXUNVCOVJKQAFPZMGXRDVALATFBDWYBKEYQXINMWBCIJGQMEIMWBOMRKQUCLHEGILNUVDTPBXRDAALZYWVGANWER");

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
    msg.setTimeStamp(0.5058257287325725);
    msg.setSource(2290U);
    msg.setSourceEntity(140U);
    msg.setDestination(53172U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.24077036014644526;
    msg.lon = 0.6496914971172674;

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
    msg.setTimeStamp(0.6368383315428904);
    msg.setSource(39409U);
    msg.setSourceEntity(214U);
    msg.setDestination(15220U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.9553129951436534;
    msg.lon = 0.7679524725535296;

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
    msg.setTimeStamp(0.34150816649498617);
    msg.setSource(8474U);
    msg.setSourceEntity(105U);
    msg.setDestination(22688U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.3229623332780692;
    msg.lon = 0.43370629453555665;

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
    msg.setTimeStamp(0.1267506895357139);
    msg.setSource(62199U);
    msg.setSourceEntity(169U);
    msg.setDestination(10338U);
    msg.setDestinationEntity(78U);
    msg.timeout = 8620U;
    msg.lat = 0.6691727811736956;
    msg.lon = 0.832453862427991;
    msg.z = 0.47338928004441705;
    msg.z_units = 105U;
    msg.pitch = 0.304832727022328;
    msg.amplitude = 0.8011972743502443;
    msg.duration = 2117U;
    msg.speed = 0.6120435934443234;
    msg.speed_units = 22U;
    msg.radius = 0.34594502821565276;
    msg.direction = 170U;
    msg.custom.assign("FTYQICPJSQONFEPPZLZZLGOCDQIVYHNJWBPPYIQNLFAEFJDDAVHLOWWNDNSZJALTKRETNYCKRWMHVCTUOJYSQBCDDKEQNOFSDUFREWQVVCAKWYXXKSNOMFOYMBIBMPIWITZJLVXARUGKAHZBQDSHAWUXRGXXHMCEFILVRDRUBBOVUGKXVZXLPECWLOMKAHMPGUOBNIGLBCSRPTHCQXM");

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
    msg.setTimeStamp(0.7474804778665601);
    msg.setSource(41555U);
    msg.setSourceEntity(83U);
    msg.setDestination(23046U);
    msg.setDestinationEntity(176U);
    msg.timeout = 33056U;
    msg.lat = 0.5554595074391667;
    msg.lon = 0.47145038874125744;
    msg.z = 0.05894745282465408;
    msg.z_units = 228U;
    msg.pitch = 0.555942826265257;
    msg.amplitude = 0.8566003298523998;
    msg.duration = 19575U;
    msg.speed = 0.5295876887003188;
    msg.speed_units = 124U;
    msg.radius = 0.6198821656106168;
    msg.direction = 82U;
    msg.custom.assign("CTOJENKEYNXOIRPOCBYSUQWSIILZJZYCHVWBGKFDHQJMOCXCPGJSQRUUMUUMMROWNALDOGBLDDIFKASFGIPXFXHSV");

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
    msg.setTimeStamp(0.5414394710858539);
    msg.setSource(10138U);
    msg.setSourceEntity(32U);
    msg.setDestination(65143U);
    msg.setDestinationEntity(204U);
    msg.timeout = 63502U;
    msg.lat = 0.7626725635693534;
    msg.lon = 0.6151568631246254;
    msg.z = 0.3817334715541969;
    msg.z_units = 103U;
    msg.pitch = 0.6679644769946895;
    msg.amplitude = 0.14612499213056818;
    msg.duration = 64053U;
    msg.speed = 0.35733174295617276;
    msg.speed_units = 229U;
    msg.radius = 0.7055296505504611;
    msg.direction = 229U;
    msg.custom.assign("EITEODJINDLXWMIKPXLRQRCWWBCSQBBMLSANJMGCKSPOKNEDNEJUGXVESQRYFVHOUAPEFOYJAUYGOSYEFYKPDKKBZXUGDWNGJXFEMSCIHCTVLECGBRKXZUITMIIWZLWJZYRVBSLDQBVJOOFSVXZHPMPWPPNOLSTIFHHAUQROFGJRZYALGYJTCXEMUADHBRTLGRY");

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
    msg.setTimeStamp(0.6546283677326328);
    msg.setSource(20308U);
    msg.setSourceEntity(105U);
    msg.setDestination(700U);
    msg.setDestinationEntity(10U);
    msg.formation_name.assign("WCQRWUWQFXWIWLYKYOESHVGOZOKTNXCXUFJEAYTTZCBKBZYHWHSPLGYEWIPECVQDZJPFQERYLFNKOUPDKRGPICOFLUNREVSFOVLTWAYKXURCLARLXCXRANVBZKCICJXYQQZAKSZHKBDQHKJPTVOWPUMYMADRJISIGTSNTANNXVVENBMVLNUMDHMCIIEHBDSTDMGUDGSFMGHJAXADLPZFPRBEQJMSTGUHMZDJGBWUMXIRBPFITGQJOFH");
    msg.reference_frame = 3U;
    msg.custom.assign("SFQLHNIQVQLQMCTCJVSFBHAOYSZCJPAZQUMGTSPIUPLPOBRDGZDVBRRBJDUWLTFRYLCRSEZYRPIXWOXWAMKEXJMYGKXAEKSNGNM");

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
    msg.setTimeStamp(0.3606236327517508);
    msg.setSource(5178U);
    msg.setSourceEntity(242U);
    msg.setDestination(59477U);
    msg.setDestinationEntity(144U);
    msg.formation_name.assign("UBWMNOWRZTOXLMJBEVRIOELCVGHHCKDUFLGOOISKADSUMSRCMOWAWPZLYATIXIPUVHVTRHTXZDRZWPUJNUTFKGYDNPBDGWJMQLSXPNZFVKEULDNXCIUEAYYVZXZDQMTJTFHDUIFQKOQRKPINXEJJENQGTHBHSSTTYGGKEVCGRKPPDXCYLMGNSEPWEOJSVIYXOAAKX");
    msg.reference_frame = 200U;
    msg.custom.assign("POPZUBSRTHRBYJJATVNCHUDHLVADKFKFWBEKQQBSVHVMGNJDBQIWJMKNQICXZOMRXCOCXHGALEHDPLNLZMCJDQCBMQQGNUJBPDONPACSFEYHTROQUEDXJGONWEWIUYVAZYDCFRLSSPSLMUUEXQGHEPFVIHFKAJGDLNKDRXCVGYTMIPLFBOUUOLBAYLWRYIKXQTZTIXMSRFTAWWTPISFGKWESKWZJXITKGVEWOCHFEMVZIAYJYBSGNNYZRZMA");

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
    msg.setTimeStamp(0.11204709180387717);
    msg.setSource(46284U);
    msg.setSourceEntity(203U);
    msg.setDestination(24491U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("CVFIRZCKWZHEUAMBJGDVKTXVIMFGINBQZRIHYPSPRSBLTJAICFMFJVEIARNPTIWJXFYQVCUFUCJEGNVIHDATTEATZNSUOJJNDNNGAOKKZHEAKPKYKRTVBXG");
    msg.reference_frame = 218U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54853U;
    tmp_msg_0.off_x = 0.5385370115870298;
    tmp_msg_0.off_y = 0.7591437195886913;
    tmp_msg_0.off_z = 0.27050588540877596;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PTGOCLGETYBEJSVIJLRTEYZFGQKURDNOURQNZQZBBHKVGMOLRRDOW");

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
    msg.setTimeStamp(0.6422037609171983);
    msg.setSource(54784U);
    msg.setSourceEntity(136U);
    msg.setDestination(19487U);
    msg.setDestinationEntity(234U);
    msg.group_name.assign("ULGCRPZSKHHBCNBKUEFUVVLKLOIMFXALNYEIGTQUEHWYEMWPGXIURRDALSZYTKBVHLTPZYWGWABZQQFVEOBXCGQLZKBDKSDCJYFNWGDQCAGS");
    msg.formation_name.assign("POIIPVXSVMZAOXONZWAHCUYNSKXZHHYYJIFPDCARDDUBERMLCAOUDVZCXIVOHZYZSVRWFUGRJQFPMFBYOATOLGVLTJAQNWSZVGRAPPQDVNOFUWMHYMNBQXLDMYBYMJOIFKIBUCNPTEQVCTQSQGKXKRZWSILMABKHXWNELDUFTGJQESZQWRBFKVYNPHBCKEGSMRAMOZHJAELWNTTWIPNLJIBK");
    msg.plan_id.assign("PGQKFHBJMRVFDIBUBZTNSLHATXALCSIPTZDTXZAKKXKEXHUQNEPMWFUUGMLUSVPXVQQPTRVLDGWUIVLSVCIQXVLHVGFEPYENBDOWYLGKRGCOYJSCCFXVQIEADDDPSFBPEOZZCZRAWDNZJCSM");
    msg.description.assign("UQLNKEVJJNNBBZNQQIWMOINMRCJMMWRAGGEYBIEVYKGUKHZPDNEUAUVDJQVHOYHOZNUDMAKFSNNWLUFGBOPXPEFBQZVCYOSULLMTENDXQGBOXYAORVTBSPAPALDVZAGWYTETIJWHDOWTSZTYTUDCPFAYXOVAFOMYXCDILYPDZKHSIJUFEXLIVRESQ");
    msg.leader_speed = 0.6904536666945964;
    msg.leader_bank_lim = 0.2153647931000251;
    msg.pos_sim_err_lim = 0.6115667607980143;
    msg.pos_sim_err_wrn = 0.7924404850542436;
    msg.pos_sim_err_timeout = 40853U;
    msg.converg_max = 0.2541786192894748;
    msg.converg_timeout = 46150U;
    msg.comms_timeout = 63429U;
    msg.turb_lim = 0.9509132563527257;
    msg.custom.assign("LKKRQQHMJSTEUDGOCJJVQVBRATUXDAKSENWCHEGTGRTAPPCCALFYUDJBJCDYMFUGCYQZGVLWFRILRKH");

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
    msg.setTimeStamp(0.5458279222110968);
    msg.setSource(2459U);
    msg.setSourceEntity(235U);
    msg.setDestination(52217U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("TXNYDEIDSWDLENYPW");
    msg.formation_name.assign("PDEEWZFSVNXDBHRDJVUTSTCNNYPSXDHWOTWBUGVLCDFGRQTBQOLXJBJPZKPIWNIAMGDUEZIQHZFIJAQTUTQLTCWPNRJFGLTIHOCKXYAKWHLQOBNUUPREZZPIEMTEGSIKSPJUYZVKYHGACFYFGIHLAMZDYMMZNA");
    msg.plan_id.assign("QXXDHWVJBIUKZGVSYVUMAFFCTFJIVVSXLHENHYQNMV");
    msg.description.assign("VDDSRYPOSKJVAJQKXNWWMFTYSNPIEWFBGBEKCUDRIRFJXGPYGBOVZXWFVFQIVQDECTDUBIDQNEMFJCJKAAXZLSFAUZISGNOHOEQTCCOSRLCKIVMXUIPEXPTCBUYIBWWWDRRHBVPUBAHKHODHTRTYALRGRVZVMQAUNWFVTBEAOHUTIXKLEJPHMSLJHLRNXKOHZZNLPSYINZXAGPOHSQKJOMLAWSQCJGGMTYGEFC");
    msg.leader_speed = 0.4523681189290617;
    msg.leader_bank_lim = 0.041392356074721026;
    msg.pos_sim_err_lim = 0.48825501966891427;
    msg.pos_sim_err_wrn = 0.6513376709277171;
    msg.pos_sim_err_timeout = 23388U;
    msg.converg_max = 0.369453135417554;
    msg.converg_timeout = 21994U;
    msg.comms_timeout = 27726U;
    msg.turb_lim = 0.26428934331495113;
    msg.custom.assign("TMEVHZQQVWIXBELBDCNYGCVHUBBPRSGVMBEYZBLVDNLTGOULADVMFMZGUVDHDXDAPTJMPRLKNJUXXZWQWOTHNPFZJAKWYCXQOYQAQVXLRSMAYCHSYJHDMTISGTNOXSCIRAIEMUIAYMPKVKCCHQOTJA");

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
    msg.setTimeStamp(0.8684823307045748);
    msg.setSource(41247U);
    msg.setSourceEntity(158U);
    msg.setDestination(21088U);
    msg.setDestinationEntity(219U);
    msg.group_name.assign("JQSKTSOXFPOKVFWETYSQVGNOIPTAGGLRINBBUSNHHTXPCZENLZDYMBTDLBNIAOJOKZYNYGCUYCGNIDUWEAHRXVEGQRPOVFUJFVGZAJIBW");
    msg.formation_name.assign("IVZTSNEACCQAUKMOHDIBUXKEAHOCMUJESIGLCLFXWIHKKUSFEYZYGCUBFHXPCGNCNBNBQWMYFTLOTIHFOFUZBGGVPMQZSJOXZYRFNQQRAYTYGOSBJAFWDPRAAKLVHQIBBZQSENWIZDPTLEPTRZQIUHTWMKJJYVXLLFGJLPRMEJ");
    msg.plan_id.assign("PXLWMKUHZYGTZOELTECOPWWQUBAWWTVLEVQJKNQXURNICQWUXKSRQDJZXBWXGZUXDPHDJFJTYUHFGDMAPFLRXAFOIODBMSBJHFFRTALQUJFHLTEMDMBSIGSEVPGSJYSTEOCSLPLJNVLSNRQMHDREMIBKQQZTVPGVGEHOAACJCTBYOZXMOGMOSYKVIYVRYIDRPFBIHTYSBKJOVNENNKFPFZGDNLHKAPXMCW");
    msg.description.assign("PLKJVZPROLRNRVFKMUKUCGGJTEXXBOHOCLNNCQUVLHPHKXIKSTSYWTZTSENBRPVNIBYUGLSRYVLHCWHOEJXZROILXVRNGKMIALGITWAJIXDIKWBZJFOEJOZEZKDXFHQEUCAFJSFZMVXOHXFQXW");
    msg.leader_speed = 0.3903467678231317;
    msg.leader_bank_lim = 0.6839858153191077;
    msg.pos_sim_err_lim = 0.4503214348148672;
    msg.pos_sim_err_wrn = 0.7700834003287484;
    msg.pos_sim_err_timeout = 4459U;
    msg.converg_max = 0.6149211074686611;
    msg.converg_timeout = 53819U;
    msg.comms_timeout = 11408U;
    msg.turb_lim = 0.0030306909032336016;
    msg.custom.assign("CJPAKRCYYFIUVGEORHSBCJGNFPWDUMPFBONWOXRYSVPTHLBFJLQEAPJJPUYMSKEGQQBZMINNOZYALODSXTZMLLVSQDYXBIWVTKRYDZJGPWIHSHOGTZGXMAHVNHQECRQYYUWSWTQXBEVCNDABHNJCVSLTUZCDAMVGXZOTFLLS");

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
    msg.setTimeStamp(0.14121223502350166);
    msg.setSource(37920U);
    msg.setSourceEntity(67U);
    msg.setDestination(33442U);
    msg.setDestinationEntity(187U);
    msg.control_src = 58789U;
    msg.control_ent = 84U;
    msg.timeout = 0.4787463280514316;
    msg.loiter_radius = 0.09982039764478412;
    msg.altitude_interval = 0.6017745952478725;

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
    msg.setTimeStamp(0.49915047472890894);
    msg.setSource(48545U);
    msg.setSourceEntity(11U);
    msg.setDestination(12174U);
    msg.setDestinationEntity(166U);
    msg.control_src = 56498U;
    msg.control_ent = 148U;
    msg.timeout = 0.3857076318350282;
    msg.loiter_radius = 0.07985969065800724;
    msg.altitude_interval = 0.05627182664603014;

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
    msg.setTimeStamp(0.856074488076918);
    msg.setSource(21973U);
    msg.setSourceEntity(77U);
    msg.setDestination(34594U);
    msg.setDestinationEntity(52U);
    msg.control_src = 4294U;
    msg.control_ent = 103U;
    msg.timeout = 0.8511596023294014;
    msg.loiter_radius = 0.935086763516202;
    msg.altitude_interval = 0.5186708495644152;

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
    msg.setTimeStamp(0.9365245691298058);
    msg.setSource(33016U);
    msg.setSourceEntity(156U);
    msg.setDestination(40122U);
    msg.setDestinationEntity(17U);
    msg.flags = 253U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3371861371766446;
    tmp_msg_0.speed_units = 114U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8914717982414347;
    tmp_msg_1.z_units = 10U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.484820746833555;
    msg.lon = 0.3210831023782942;
    msg.radius = 0.2816862958774671;

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
    msg.setTimeStamp(0.266923181000432);
    msg.setSource(58308U);
    msg.setSourceEntity(239U);
    msg.setDestination(43749U);
    msg.setDestinationEntity(10U);
    msg.flags = 130U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.14234564009492678;
    tmp_msg_0.speed_units = 60U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5889410892330972;
    tmp_msg_1.z_units = 225U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9117557356501889;
    msg.lon = 0.1576043910345738;
    msg.radius = 0.34741022854072656;

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
    msg.setTimeStamp(0.1799261876284335);
    msg.setSource(65083U);
    msg.setSourceEntity(73U);
    msg.setDestination(12141U);
    msg.setDestinationEntity(103U);
    msg.flags = 212U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6605351011217627;
    tmp_msg_0.speed_units = 52U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.11682069261418271;
    tmp_msg_1.z_units = 237U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5261438000080799;
    msg.lon = 0.8741451078256903;
    msg.radius = 0.7544152998555758;

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
    msg.setTimeStamp(0.8818334296817425);
    msg.setSource(46089U);
    msg.setSourceEntity(171U);
    msg.setDestination(40313U);
    msg.setDestinationEntity(210U);
    msg.control_src = 18364U;
    msg.control_ent = 230U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 82U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5188893355591386;
    tmp_tmp_msg_0_0.speed_units = 22U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.11952319830289337;
    tmp_tmp_msg_0_1.z_units = 247U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.13877332244468976;
    tmp_msg_0.lon = 0.964021866944588;
    tmp_msg_0.radius = 0.048078999609409756;
    msg.reference.set(tmp_msg_0);
    msg.state = 158U;
    msg.proximity = 99U;

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
    msg.setTimeStamp(0.32658649293528397);
    msg.setSource(45897U);
    msg.setSourceEntity(90U);
    msg.setDestination(1893U);
    msg.setDestinationEntity(23U);
    msg.control_src = 50598U;
    msg.control_ent = 212U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 112U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5871255734872575;
    tmp_tmp_msg_0_0.speed_units = 67U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.24956238238976713;
    tmp_tmp_msg_0_1.z_units = 222U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2724223006596146;
    tmp_msg_0.lon = 0.7619827664069528;
    tmp_msg_0.radius = 0.522867765874744;
    msg.reference.set(tmp_msg_0);
    msg.state = 248U;
    msg.proximity = 204U;

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
    msg.setTimeStamp(0.471565013787267);
    msg.setSource(53877U);
    msg.setSourceEntity(178U);
    msg.setDestination(56640U);
    msg.setDestinationEntity(142U);
    msg.control_src = 25818U;
    msg.control_ent = 69U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 229U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8383961695108346;
    tmp_tmp_msg_0_0.speed_units = 110U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3627273809408603;
    tmp_tmp_msg_0_1.z_units = 210U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0978900402701045;
    tmp_msg_0.lon = 0.7629978980066277;
    tmp_msg_0.radius = 0.9093534025376838;
    msg.reference.set(tmp_msg_0);
    msg.state = 29U;
    msg.proximity = 77U;

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
    msg.setTimeStamp(0.5206280319690635);
    msg.setSource(14311U);
    msg.setSourceEntity(75U);
    msg.setDestination(48757U);
    msg.setDestinationEntity(217U);
    msg.ax_cmd = 0.5952409355145374;
    msg.ay_cmd = 0.9703636582197324;
    msg.az_cmd = 0.2800020575965906;
    msg.ax_des = 0.31735967026970635;
    msg.ay_des = 0.615843725806463;
    msg.az_des = 0.33372182285117225;
    msg.virt_err_x = 0.07475978737338196;
    msg.virt_err_y = 0.16702986554154442;
    msg.virt_err_z = 0.13356282507844508;
    msg.surf_fdbk_x = 0.5783705000666027;
    msg.surf_fdbk_y = 0.436764300655211;
    msg.surf_fdbk_z = 0.7471686636833844;
    msg.surf_unkn_x = 0.23446991330164657;
    msg.surf_unkn_y = 0.8962725533362006;
    msg.surf_unkn_z = 0.06343501289366638;
    msg.ss_x = 0.6956351804219292;
    msg.ss_y = 0.3844659613876673;
    msg.ss_z = 0.47342089606135973;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MLUULAMYEVHKWLTDFKUDSPFCUSMIONEWLSAFYEGZMASZQLHIFZFOKJWGUSNYMUOBHYCQDHVDKTFQAGXYTIXELVKGIWOWELBBEEIPQPXWCMYQVZFNGPEOSPPFXRBMDTLSJNTXXWEXBDYNQHKRCBRJWCYHQTVTHGV");
    tmp_msg_0.dist = 0.02749003991290755;
    tmp_msg_0.err = 0.6506889403250394;
    tmp_msg_0.ctrl_imp = 0.6372133521340564;
    tmp_msg_0.rel_dir_x = 0.14321303554787146;
    tmp_msg_0.rel_dir_y = 0.34628787832841046;
    tmp_msg_0.rel_dir_z = 0.009823790735967064;
    tmp_msg_0.err_x = 0.2830799149412462;
    tmp_msg_0.err_y = 0.24791445539157464;
    tmp_msg_0.err_z = 0.016638347066183723;
    tmp_msg_0.rf_err_x = 0.1397391884081769;
    tmp_msg_0.rf_err_y = 0.06205751298403106;
    tmp_msg_0.rf_err_z = 0.2813598756781519;
    tmp_msg_0.rf_err_vx = 0.2938492901445835;
    tmp_msg_0.rf_err_vy = 0.1350344882720449;
    tmp_msg_0.rf_err_vz = 0.5253924112209194;
    tmp_msg_0.ss_x = 0.45621780960333447;
    tmp_msg_0.ss_y = 0.2807731922948671;
    tmp_msg_0.ss_z = 0.5955661763650433;
    tmp_msg_0.virt_err_x = 0.1352348587075245;
    tmp_msg_0.virt_err_y = 0.5520273337632845;
    tmp_msg_0.virt_err_z = 0.11234466879254867;
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
    msg.setTimeStamp(0.6265557270725954);
    msg.setSource(42453U);
    msg.setSourceEntity(247U);
    msg.setDestination(18165U);
    msg.setDestinationEntity(171U);
    msg.ax_cmd = 0.1456966265728198;
    msg.ay_cmd = 0.5774120485756914;
    msg.az_cmd = 0.5254488723456473;
    msg.ax_des = 0.07040209016195742;
    msg.ay_des = 0.31954885877184214;
    msg.az_des = 0.972262626596693;
    msg.virt_err_x = 0.8951389467838772;
    msg.virt_err_y = 0.20263630746708838;
    msg.virt_err_z = 0.13794673547004155;
    msg.surf_fdbk_x = 0.8044910214892153;
    msg.surf_fdbk_y = 0.5073243384523851;
    msg.surf_fdbk_z = 0.9821539577761863;
    msg.surf_unkn_x = 0.3623792455084005;
    msg.surf_unkn_y = 0.18239208554001674;
    msg.surf_unkn_z = 0.6248826561819166;
    msg.ss_x = 0.22107798627471043;
    msg.ss_y = 0.504885149328436;
    msg.ss_z = 0.8099534808871532;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AKDYJMKPQRZQWLYAGQRRHMAGYPIXBITMNZFCQFOJFLONVAAVXQSIMGCWPZWGHTXHIGBXNLZZDEMQOTEDKUNPVZXMXSDOPKXUCNYFXKEDHMUSUNFJATSYNKYCLDGZOWLSJSHMEAEIICWRBIDGNTEVKGOSBJOBFWOVGDURJFFSTRVAQJMVRYPJLDHZUFILHBDZTEWBHXRKCYZOMESHIXVQVCYGBJLVWKACPUTQBEQPRIUOUYTWTHSCKEU");
    tmp_msg_0.dist = 0.9111266973135143;
    tmp_msg_0.err = 0.491986211519883;
    tmp_msg_0.ctrl_imp = 0.7907349037050598;
    tmp_msg_0.rel_dir_x = 0.6017412752555267;
    tmp_msg_0.rel_dir_y = 0.8237078564295183;
    tmp_msg_0.rel_dir_z = 0.5928299917951934;
    tmp_msg_0.err_x = 0.2957891830285502;
    tmp_msg_0.err_y = 0.7586319506746966;
    tmp_msg_0.err_z = 0.35584156416332824;
    tmp_msg_0.rf_err_x = 0.7945011969612457;
    tmp_msg_0.rf_err_y = 0.8867631385470254;
    tmp_msg_0.rf_err_z = 0.505441610353786;
    tmp_msg_0.rf_err_vx = 0.3356390228834204;
    tmp_msg_0.rf_err_vy = 0.962077436081674;
    tmp_msg_0.rf_err_vz = 0.6171679786987154;
    tmp_msg_0.ss_x = 0.7910143127541589;
    tmp_msg_0.ss_y = 0.7284672177695074;
    tmp_msg_0.ss_z = 0.49732701838841753;
    tmp_msg_0.virt_err_x = 0.18776755986319993;
    tmp_msg_0.virt_err_y = 0.11136947610534975;
    tmp_msg_0.virt_err_z = 0.3556079106037382;
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
    msg.setTimeStamp(0.23003210822606024);
    msg.setSource(13887U);
    msg.setSourceEntity(113U);
    msg.setDestination(11772U);
    msg.setDestinationEntity(150U);
    msg.ax_cmd = 0.28341367142279594;
    msg.ay_cmd = 0.7445005485364731;
    msg.az_cmd = 0.6643113274561901;
    msg.ax_des = 0.5256382390462504;
    msg.ay_des = 0.7577492562986549;
    msg.az_des = 0.738694314876239;
    msg.virt_err_x = 0.738131150525917;
    msg.virt_err_y = 0.4007483961409767;
    msg.virt_err_z = 0.572053780882775;
    msg.surf_fdbk_x = 0.5545777540929198;
    msg.surf_fdbk_y = 0.8172964862729614;
    msg.surf_fdbk_z = 0.8609098538472264;
    msg.surf_unkn_x = 0.006349850263972168;
    msg.surf_unkn_y = 0.6542623191698512;
    msg.surf_unkn_z = 0.6091561296134154;
    msg.ss_x = 0.7446050383762228;
    msg.ss_y = 0.31807266125996225;
    msg.ss_z = 0.8505866648103471;

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
    msg.setTimeStamp(0.1778801332203741);
    msg.setSource(38858U);
    msg.setSourceEntity(122U);
    msg.setDestination(19592U);
    msg.setDestinationEntity(236U);
    msg.s_id.assign("UXXLHOWMSESRGAWFQVPMEBHWHOWMSGURFLFKWGXT");
    msg.dist = 0.2170070432013813;
    msg.err = 0.4018700761675459;
    msg.ctrl_imp = 0.32575469804056223;
    msg.rel_dir_x = 0.7228246558764206;
    msg.rel_dir_y = 0.4080490538524867;
    msg.rel_dir_z = 0.03816373994613653;
    msg.err_x = 0.31318262992487855;
    msg.err_y = 0.9704403002563626;
    msg.err_z = 0.2895480196534329;
    msg.rf_err_x = 0.09519275358243517;
    msg.rf_err_y = 0.4107838047085819;
    msg.rf_err_z = 0.5867354481193006;
    msg.rf_err_vx = 0.8349563161668653;
    msg.rf_err_vy = 0.47111382945455005;
    msg.rf_err_vz = 0.2825511023226228;
    msg.ss_x = 0.9346888153545766;
    msg.ss_y = 0.9454814152447687;
    msg.ss_z = 0.4686729311337611;
    msg.virt_err_x = 0.7833336302240296;
    msg.virt_err_y = 0.3520511295456237;
    msg.virt_err_z = 0.801908701624703;

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
    msg.setTimeStamp(0.7854510623607552);
    msg.setSource(49762U);
    msg.setSourceEntity(170U);
    msg.setDestination(35285U);
    msg.setDestinationEntity(233U);
    msg.s_id.assign("FDJLVKRRWQJWRIUUEGSKPUVSGXDHCVQCKOPHPPQTCNMQMYVFZLHMETULSQVRCFMLUENOHFTMINJISXGPRMFOLZFYNOGEDZEMZEUWYJCEDKIIAWLORNKGKBSPOXNCYTPCFTVDJZIJCVWUUIJAZLBOBQCGAEHXPXLSOKGBBBWADCBXKTMYXAMVTDH");
    msg.dist = 0.6150553373416713;
    msg.err = 0.42181049696050765;
    msg.ctrl_imp = 0.3154666832305164;
    msg.rel_dir_x = 0.010858089875751542;
    msg.rel_dir_y = 0.305907622970376;
    msg.rel_dir_z = 0.8016079614399112;
    msg.err_x = 0.987319569976867;
    msg.err_y = 0.8757730658290606;
    msg.err_z = 0.10182380581305739;
    msg.rf_err_x = 0.8671289108370951;
    msg.rf_err_y = 0.49160587456489535;
    msg.rf_err_z = 0.3692454103620856;
    msg.rf_err_vx = 0.37431552888047837;
    msg.rf_err_vy = 0.0223304077679356;
    msg.rf_err_vz = 0.3836379300615822;
    msg.ss_x = 0.6084386428382307;
    msg.ss_y = 0.2949457768806386;
    msg.ss_z = 0.06668974017717866;
    msg.virt_err_x = 0.03894350170205474;
    msg.virt_err_y = 0.8554586965379826;
    msg.virt_err_z = 0.3265379551913443;

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
    msg.setTimeStamp(0.42689067559441374);
    msg.setSource(63164U);
    msg.setSourceEntity(49U);
    msg.setDestination(60593U);
    msg.setDestinationEntity(125U);
    msg.s_id.assign("CTEPQWXGIPIWFVZBZLQESCBNDDQZUMOWCHXEMJNFUZYRBFGCFBPOXSVLLVLKETCQIOOITWMLTDSCNQFDUNBBZESGRMMAXMUPZJDRRNYKRJTZVS");
    msg.dist = 0.28253196405670433;
    msg.err = 0.11828332146911558;
    msg.ctrl_imp = 0.4411169573459528;
    msg.rel_dir_x = 0.31863250769918194;
    msg.rel_dir_y = 0.38552572876744806;
    msg.rel_dir_z = 0.6187965208046506;
    msg.err_x = 0.1800901084429235;
    msg.err_y = 0.3355368334686447;
    msg.err_z = 0.9368220763637319;
    msg.rf_err_x = 0.9317694527665134;
    msg.rf_err_y = 0.94342297154013;
    msg.rf_err_z = 0.6435334259698432;
    msg.rf_err_vx = 0.8171629971580173;
    msg.rf_err_vy = 0.21098740092878498;
    msg.rf_err_vz = 0.5613444886090054;
    msg.ss_x = 0.49613403983296056;
    msg.ss_y = 0.7036681848251738;
    msg.ss_z = 0.4477040505870613;
    msg.virt_err_x = 0.7739296675127084;
    msg.virt_err_y = 0.01911015207694966;
    msg.virt_err_z = 0.6403767867735513;

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
    msg.setTimeStamp(0.3851470387989515);
    msg.setSource(36677U);
    msg.setSourceEntity(20U);
    msg.setDestination(10667U);
    msg.setDestinationEntity(96U);
    msg.timeout = 55378U;
    msg.rpm = 0.44289393821792267;
    msg.direction = 152U;
    msg.custom.assign("HUEQZXOLSWWABBILAMXOERDSXQEYNPTPGMDWJJKZSSRXGOYSAOTJRUNCGAFPEYCUUATXQCNHBVCVKUYOJHHGVTBKLOKUGILAWKPZVWVQBTKWFKXQZNKUOTPGUJTGGNQYRNPTVDMLIFXDCHXGFISDYUECOQMDEKTNJFWEFVWSIBWBJVJXIRLFHEDZOHZXQNLZIHTPZCYAZBINFCIGQ");

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
    msg.setTimeStamp(0.5538280614421004);
    msg.setSource(33890U);
    msg.setSourceEntity(126U);
    msg.setDestination(11483U);
    msg.setDestinationEntity(216U);
    msg.timeout = 39064U;
    msg.rpm = 0.558161430386555;
    msg.direction = 56U;
    msg.custom.assign("XWFUMTSYLMPISOOBZIEDISAMRHYZJOGGDVGYDVNAMPJGLRQTOIUHSZYTLHMCCSYDTKKFXDCEIMKQGKQBK");

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
    msg.setTimeStamp(0.28643727430162724);
    msg.setSource(29756U);
    msg.setSourceEntity(24U);
    msg.setDestination(3711U);
    msg.setDestinationEntity(9U);
    msg.timeout = 43781U;
    msg.rpm = 0.5995121457011493;
    msg.direction = 109U;
    msg.custom.assign("KSTAHGIIZUULARGQRHCYVKGQSKWDLMUJJEZFJORDOOBJPZMHJDDRTJLUHSZNEDNFGMSATSXLSUQRWXGEORCORCTWUKOXIQHIYOSDPBWBOVXWLUYHHKRIQIENPVEYMQPKJBNANIQFRWJSOAJAMDPKKAMBXXYCMSYPEMVCKECTZQBLFFTFGYOTEDBGLIVINNMC");

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
    msg.setTimeStamp(0.5603651903756396);
    msg.setSource(6190U);
    msg.setSourceEntity(248U);
    msg.setDestination(6278U);
    msg.setDestinationEntity(124U);
    msg.formation_name.assign("FXOLIRMDZMARBRLHWLLQGE");
    msg.type = 52U;
    msg.op = 82U;
    msg.group_name.assign("EMQFCPPOFHRFQGPMPLZKSGNIWXHVUSXWNDTGHYYOPRIZWWJCZEBJKAJDJSJRGQKDNJNDSHABSUEXFTJUMNTTUGQNXVARYYXMFNCIZXPTSKNIAJKDIMZQOBCLLXFRZDCWPFPUYGOUMHDRUTZPXEKBQFAHZIVVQOLMCQWOYGBKBWIYOTOHDAFXTZEVLIAOPVSMNECYGOXUNAAEWLBYEEJBVGLJT");
    msg.plan_id.assign("CEFGRYCKZLCU");
    msg.description.assign("GEHRDIQGGGCCZSQEGKIPJHWVACBUOXTOMRQRWANRFZOFNNAISCLOYJVMKVTIYAZMNXSEOEXHJGKMAPKPXLUTCTAKTHJUVECTIKFPWGLTNIUJDGRPFPAVPYOBBOPDNYMCKWMLJLHVRHSXUQIWYDUMTWEBASBENQUEDDIPMQXFKYVQRZJNXVNBJAUHZZAZSFRYSLVJWMWFVWXYXLLZGPCQTODBMRQSHWBYERBBHILODKNEJYHUIDZC");
    msg.reference_frame = 247U;
    msg.leader_bank_lim = 0.6014938788160861;
    msg.leader_speed_min = 0.617399475479724;
    msg.leader_speed_max = 0.08939811562270261;
    msg.leader_alt_min = 0.6195416492155174;
    msg.leader_alt_max = 0.4674489431748159;
    msg.pos_sim_err_lim = 0.44405002322086573;
    msg.pos_sim_err_wrn = 0.17249369245081858;
    msg.pos_sim_err_timeout = 45504U;
    msg.converg_max = 0.7705079593452382;
    msg.converg_timeout = 12546U;
    msg.comms_timeout = 43368U;
    msg.turb_lim = 0.39687796999429836;
    msg.custom.assign("IYOWLAYCQZYSGFQJUJRHUOABUEMTTERNZYGLEDUECOFNJNQBTDKBENBKKUREKNPDTWACTNBCZKYRDFPOSSETRNPVGAOMWHLVPBTQXPKIYMJSKXWAYJUITKCAQRBZEMPFF");

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
    msg.setTimeStamp(0.10946337119227911);
    msg.setSource(5969U);
    msg.setSourceEntity(66U);
    msg.setDestination(43792U);
    msg.setDestinationEntity(183U);
    msg.formation_name.assign("ZNSNWWVHHQVCMCVLXBNEJPABCFBMUXAQCKKAPOIDGFKPINZJCMTUMYKMCUYZYPXQHKDZLGVXBNUQKYMAIPIZWCPUPT");
    msg.type = 205U;
    msg.op = 179U;
    msg.group_name.assign("LPLAWJAPVTMOQYHLMIQHFHVQPSLJRLZBUDOSYTNJIURKFC");
    msg.plan_id.assign("QWAKVQDHLJGEEIJEIXKRIQHNXRQYOKQMLLVFXDVTKPADKRMUMPFPKGTOB");
    msg.description.assign("OMLIWXNZDHHAAQLMDFVKJUCGHVFSKVSDGGCXVJXPCRGJFEMQSPYUBIHGLTZKRJSNZJUEOYTEHJBLZUMEOWXFRCTPDLAWCLLZRDIBRCFQLWDUEOBUMXPHUSTMNHSLCPXWOBEYKCAFXUIGVTJTKZPIYRYKSRNNPWGWEAVQGASDOQDAHNBUMHSXFFQPQPIHXERAMYMYNXNDOZBWQJOBWEWIYKTVSFYJBQKR");
    msg.reference_frame = 27U;
    msg.leader_bank_lim = 0.4375740958773433;
    msg.leader_speed_min = 0.39240094623075383;
    msg.leader_speed_max = 0.9723495955332895;
    msg.leader_alt_min = 0.43002178820448167;
    msg.leader_alt_max = 0.42251473755836233;
    msg.pos_sim_err_lim = 0.15574502318019423;
    msg.pos_sim_err_wrn = 0.2761676212392854;
    msg.pos_sim_err_timeout = 61140U;
    msg.converg_max = 0.5341469904034795;
    msg.converg_timeout = 55796U;
    msg.comms_timeout = 17857U;
    msg.turb_lim = 0.15059272871641793;
    msg.custom.assign("KBGSTAVSTAEIQHWDMNGJQBXRLUVVHXWYBIJGEXZLRMPFNCFXDQTSAMUFXCQIQUKFSHONNIYRLJFECQWEFANCVZTATWEVRHGGNOYOWMLXVWYSMCALHCCZDGZQDURUKSOKMHOPXEZY");

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
    msg.setTimeStamp(0.9052663284208571);
    msg.setSource(35807U);
    msg.setSourceEntity(76U);
    msg.setDestination(33166U);
    msg.setDestinationEntity(220U);
    msg.formation_name.assign("BHVVXQCLNMLQWYUZLZXRBMOZJNZBVRPGXWEJVLRTBKQINMFBTLKGUGODUHLOTSOLUDFLOASBRNLHXMQHPCYVHCUUFTHZOICWPWRJJWYAZIQDSGJWHKPKXPQHXEETCCAZGY");
    msg.type = 4U;
    msg.op = 234U;
    msg.group_name.assign("OBHLLVHJOHVRFITOUTOKEYPZTFHZBDROILTFANEWXVYCWTBKAPSYQQIRAASQFLZNROYDEYRMFMWSENCBABPDVOLTXMMOZHXUVDLJCWMVIVMOBWKAWGJPQYGECLVAPFNQECCEDUQHXHKWSUKDQLCIKGJYGYGHBDXQZGSGCTVXYMUDXXKQXFSCUWCMKFSJ");
    msg.plan_id.assign("MAFYTTEBEKIOQEQXRVGXIXTOSQPFXYXTTHSWKQRISYFUVZSARCJDDZDIHHYXHEDOPVJZGICBRVRBNMKGFZXOMXYEKKOYBSWBVTPPULNQSHCSZAEZUUTJEWMAGWWCNEEWQKCJLBMLDQKUZPFFTWJVHVIACBRNNDUZAHVULWKUMCBGMKZJVCWPLJZ");
    msg.description.assign("XFFGBWUDMXEOQDAFCCSWHEWHBXSGHBQHLAKVSETEJOCSXJDMTVDJOXJIINIRUGNOBQCCRNYHLSDMSPPQKTPXAJQVYBSUEVNYDEEUAKQBRZZKCHLJQYOTWXRONGNQIOLVZFLMEZFLJGPVGUAPBNIVTGCUDKKVXIMZMEPYKRVSRGYYHPWEJCB");
    msg.reference_frame = 84U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65073U;
    tmp_msg_0.off_x = 0.4262027256014126;
    tmp_msg_0.off_y = 0.3674409048351641;
    tmp_msg_0.off_z = 0.30314638932052784;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7258879678909984;
    msg.leader_speed_min = 0.6768667813549983;
    msg.leader_speed_max = 0.07545980133623142;
    msg.leader_alt_min = 0.4285982582506819;
    msg.leader_alt_max = 0.7034771958636904;
    msg.pos_sim_err_lim = 0.009908211078898388;
    msg.pos_sim_err_wrn = 0.5881158696617576;
    msg.pos_sim_err_timeout = 13041U;
    msg.converg_max = 0.16472179107367213;
    msg.converg_timeout = 54221U;
    msg.comms_timeout = 52438U;
    msg.turb_lim = 0.18072415176516254;
    msg.custom.assign("ZKSHEYTRFNGPZUYQRSXEKKJHGLMOAYNUQBCZNNCOTZZOMBBJSNPWMHBZVBJWDIXUWYEKJEMWNERRLWZGNJWCUIGKKFSTLXRYDYTIQVYFPONBGISNGMRIYNWCWLBKAETPIDXMVKEFMIFHUMEGCRWHOJTAYSQPJUQFXXUOCWXRAFTDSDDUTVLICII");

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
    IMC::FormationPathFollowing msg;
    msg.setTimeStamp(0.06845756794770119);
    msg.setSource(21800U);
    msg.setSourceEntity(236U);
    msg.setDestination(38288U);
    msg.setDestinationEntity(166U);
    msg.timeout = 16294U;
    msg.lat = 0.8403545222296702;
    msg.lon = 0.49013821360911625;
    msg.z = 0.4378726087229523;
    msg.z_units = 168U;
    msg.speed = 0.45837036034073864;
    msg.speed_units = 50U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.024861030985615207;
    tmp_msg_0.y = 0.21265171529385374;
    tmp_msg_0.z = 0.27056580432236466;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LWEJXFAQHXSTIYYWBZCORNFXDUALTAVORCACQAVOCHVGXWBNQLINXWXRTYJGGGDVMNJVONIMJPEVTIZCWWUKPMLGKJDVUGWOQCQZG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPathFollowing #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPathFollowing msg;
    msg.setTimeStamp(0.0014873230068037646);
    msg.setSource(26513U);
    msg.setSourceEntity(7U);
    msg.setDestination(10549U);
    msg.setDestinationEntity(173U);
    msg.timeout = 40834U;
    msg.lat = 0.2695474605604521;
    msg.lon = 0.11393499090781545;
    msg.z = 0.9074807316997956;
    msg.z_units = 212U;
    msg.speed = 0.06386917530536707;
    msg.speed_units = 44U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.2196560076425006;
    tmp_msg_0.y = 0.00012495057184402913;
    tmp_msg_0.z = 0.7584443262703199;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EWLNDHKOMTLKEWNZYIWNGXBXPMLROGKZOTSKPDSBFMSMUPCQTHSQQYHCAQIJGVNFEJKMFXNSXZIMTDBVPTOKHIXLSAIQWHHXRPBNYKDJJVAXPNFCZZZTAFWFKLQIYOQYYGEICAYEAQUMTDQJJDRYVOJLXPZOHCENUGCDIEBLVOLSFOWWTMUUNVAHGZSFFISTVBJCAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPathFollowing #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPathFollowing msg;
    msg.setTimeStamp(0.44233160458500786);
    msg.setSource(25721U);
    msg.setSourceEntity(13U);
    msg.setDestination(9217U);
    msg.setDestinationEntity(77U);
    msg.timeout = 42470U;
    msg.lat = 0.3515689978087617;
    msg.lon = 0.462503420054188;
    msg.z = 0.5455721854118031;
    msg.z_units = 168U;
    msg.speed = 0.10230480991067048;
    msg.speed_units = 2U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.15640109282564985;
    tmp_msg_0.y = 0.8538071153025683;
    tmp_msg_0.z = 0.6589465830521836;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QVSZYBXAXCNUFJSHJZFOLENBRMILIAZUNCZNEBCRPVTJWDGJDWLFLEYAUIXEXCLYVQGTAXAWYCTHNOIHARIIKNDWGUCOTBIUNMCNEDKOZCBMHPYOFDOJLZOKWWQIYBLMVKPRGLAVZNQUTQBTKGIGGRWKSFITRFWZMJXSVAVBXHERUSMKQMDMQXPRLVEECMYVJTYSWEYKKHBEVHRFGUFSFOFYDTQAP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPathFollowing #2", msg == *msg_d);
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
    msg.setTimeStamp(0.4244177432441164);
    msg.setSource(36141U);
    msg.setSourceEntity(143U);
    msg.setDestination(23940U);
    msg.setDestinationEntity(188U);
    msg.op_mode = 179U;
    msg.error_count = 159U;
    msg.error_ents.assign("PKUEITZILRTRSNOKXLNEPJOYN");
    msg.maneuver_type = 23746U;
    msg.maneuver_stime = 0.9364863807987205;
    msg.maneuver_eta = 10816U;
    msg.control_loops = 3836976204U;
    msg.flags = 236U;
    msg.last_error.assign("WULULDGMPZNZPCTCQMGHAHZDLOKMSUQUNFSXPYBXRGHGNNEHZXSCVJHONPGRDBYUMDPWJGVTNVDFNAZYMSQGCKHAYLFPSYQQBMNEKJVXHIRXWSFZKZGAVEJEZQLUCBLLHKDFKLUOOXBYWDYPONRO");
    msg.last_error_time = 0.1972121487467824;

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
    msg.setTimeStamp(0.5044631004636618);
    msg.setSource(57568U);
    msg.setSourceEntity(174U);
    msg.setDestination(26976U);
    msg.setDestinationEntity(4U);
    msg.op_mode = 20U;
    msg.error_count = 48U;
    msg.error_ents.assign("COQOIDSTWOYQKLCAPILMJCYPBHHEPAVVRYSWFSIQAIHPUWSWMBJZMUXUZMCTEKWAUPVJKOZITCZODLJWDCRNMHRVZXVQUBLTLQZWQBAGBXVVESEMASYVKFXJFHLDKRFCHXNPAWGDGXIMBISJCLMUYPZWTSXDAFGHYKIQNFSKGEFDAOJEBFHEBTTTUXGIKDKCNNLI");
    msg.maneuver_type = 31914U;
    msg.maneuver_stime = 0.6872111538353111;
    msg.maneuver_eta = 50976U;
    msg.control_loops = 359047063U;
    msg.flags = 132U;
    msg.last_error.assign("DZYMNELOHGAUMQICZXXNMCQDFVOJSC");
    msg.last_error_time = 0.30899559289540646;

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
    msg.setTimeStamp(0.8764729976105659);
    msg.setSource(27838U);
    msg.setSourceEntity(117U);
    msg.setDestination(44199U);
    msg.setDestinationEntity(223U);
    msg.op_mode = 146U;
    msg.error_count = 212U;
    msg.error_ents.assign("QVLYWNUQSJPXEKYZBAUVPFDRNFAGECTPICXOOVNAFUAIYHRMXBQGQYOTCFEBFTXWDBNKAGGZSGYXWLRKDBEJDWYEPLWEGNRSORHBIXKIZOYN");
    msg.maneuver_type = 12359U;
    msg.maneuver_stime = 0.6199235901003696;
    msg.maneuver_eta = 53243U;
    msg.control_loops = 3132832346U;
    msg.flags = 190U;
    msg.last_error.assign("XPOQCUNTPBYMBYQZBPQLVHTPXMUXIKWKKNYNMZMTSRIPUQDBWLDYMESKNGEHCXLJRZGYEXTIULVGWGSKZTDBSFIWMCYZOOHJVXVTAMQJAFPOTQZULPVEACHJWRRNXLOHACCOTPIRGDUGCZSFTUBXEDQSFAJWNMZTMFVDINJADZWLVFFQOVBBIMOBHPJYWNKJDNGXYFCERHIDKZCGEICGVRWLJDEROUYYF");
    msg.last_error_time = 0.2715155187925419;

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
    msg.setTimeStamp(0.6930094366866335);
    msg.setSource(54444U);
    msg.setSourceEntity(60U);
    msg.setDestination(4560U);
    msg.setDestinationEntity(113U);
    msg.type = 172U;
    msg.request_id = 61844U;
    msg.command = 173U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("QZJAFBEOCOHYWKIZPDVXEBAMOYPZILEDLDAUAPRSXLYWYWFNNCJAGTHHSBWXSEDMFBSDKIKRZLTJQHVXCMYITAGQUKCJNMBIOXFCDOLFVETBPRF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61588U;
    msg.info.assign("ASJNTPYGDQHLXTKZVUPJMHVYXJOIKSCXBZABDUUXHOWPKGWUIOGJHQAJFGCDEEHZTATFCHYJBJXTNIGRMQIKEQVUSDIPUAYFUZHNJBITZYCLRFRFSIOVLVVQRKEWUSGVCSVXNOSEMBPHSCWDLYWOZ");

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
    msg.setTimeStamp(0.593298610241621);
    msg.setSource(3325U);
    msg.setSourceEntity(158U);
    msg.setDestination(23760U);
    msg.setDestinationEntity(89U);
    msg.type = 162U;
    msg.request_id = 44977U;
    msg.command = 245U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8181991325685364;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 31737U;
    tmp_msg_0.custom.assign("IDVXFCDKDACCEGCZJRIBGPEYWZZFKOJIXYKYUDXAMRKAVVJGOMMRXYRZHYMKVUANQBILIQYHZXHJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24775U;
    msg.info.assign("XBHWQARZDPOLFC");

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
    msg.setTimeStamp(0.8476964921280019);
    msg.setSource(35863U);
    msg.setSourceEntity(61U);
    msg.setDestination(61051U);
    msg.setDestinationEntity(198U);
    msg.type = 153U;
    msg.request_id = 3646U;
    msg.command = 26U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 42659U;
    tmp_msg_0.flags = 23U;
    tmp_msg_0.lat = 0.6365060214054405;
    tmp_msg_0.lon = 0.4751439064715457;
    tmp_msg_0.start_z = 0.2801466707996262;
    tmp_msg_0.start_z_units = 229U;
    tmp_msg_0.end_z = 0.14254663963795378;
    tmp_msg_0.end_z_units = 164U;
    tmp_msg_0.radius = 0.5823787005651625;
    tmp_msg_0.speed = 0.3587981772785871;
    tmp_msg_0.speed_units = 127U;
    tmp_msg_0.custom.assign("NXCDNOIJKHAXWGRYKSREVLIFWJVFQYIBTZIFUPTZZFJB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26873U;
    msg.info.assign("BYRNQBVKYEMDPPEXXOUNOVYWDRKUIXZZCTUSRGAZDOUSDCLYZENWBDUWQIWCHYDRGHUTOKIXHEDKJZGGGWLSMM");

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
    msg.setTimeStamp(0.29513715031242194);
    msg.setSource(23983U);
    msg.setSourceEntity(173U);
    msg.setDestination(10527U);
    msg.setDestinationEntity(64U);
    msg.command = 173U;
    msg.entities.assign("KOJFOEKVSVFOALADYHQUAVPAUKORDSDIUPNVMEJSRLWRXTNBXVBYBMGARXPSCMNXBEQEVDH");

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
    msg.setTimeStamp(0.7868227303239035);
    msg.setSource(56341U);
    msg.setSourceEntity(241U);
    msg.setDestination(42644U);
    msg.setDestinationEntity(215U);
    msg.command = 204U;
    msg.entities.assign("CMOAMDVQYSQBQPRNSZZJEASMSUWZPXFEGJRNJDPKILKONYLIMCWQDPXCITPXBRUNNICGFQHEDQUAZQSESMGTDJWBLRFJORVGUKXFMIEGVFEUDCYZQUJKCNWTGHSBORHTTXOLHGSRVKQMMOYIZHGIJBEJPHFNUMWGLHXTFZFLAQAOFINVPHTFYHVYTWLKBTYDWWAJEAKEUOOAMRXCJNXBRRSPDLI");

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
    msg.setTimeStamp(0.3115655856402587);
    msg.setSource(34095U);
    msg.setSourceEntity(142U);
    msg.setDestination(20959U);
    msg.setDestinationEntity(51U);
    msg.command = 166U;
    msg.entities.assign("JWQSSZFHZHEONZHUAFOYGUIVRQKTEPAHLXKAMZZDWPQEWOGDEJSIPHQKAYKRCQKYDNAPJLCHBVCBBMOVSNHBJNKWGATJASVIPAZMYUNVZLHNJMKMRCKVFMDPCEJYTEXCXSPBON");

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
    msg.setTimeStamp(0.37689412060481364);
    msg.setSource(56606U);
    msg.setSourceEntity(196U);
    msg.setDestination(20863U);
    msg.setDestinationEntity(137U);
    msg.mcount = 228U;
    msg.mnames.assign("DXSWLNUPJNPCXCZHYBMUABRIFZIYAZKKAXWKQJYFJIKSZSCCMEBYREAFDNPYMIJKFJOZBUVTAYJCTTJGLMUVVBYCHSDGCEGPQGNCNRERDFWOQKKLWDWTBWSLAQRQRYHQGGIHMMNVPHEDOILDAKHERTUKKFZLTMUBIPZXIYSNSBTLUGXAQHUSWXPGJPLGHEFEHVDLBFDOVJVTQAOGNOYXVJNTWP");
    msg.ecount = 92U;
    msg.enames.assign("JDRBRXBQRJNXBLMXKLCDRYFTKXGJXIYOHDTXYYFUPXDZYMSKHDDAQPZJHSROADQFPCQJWUTGZOSSLWDOHUKHMCZQKTPENSWIIDUEWKTMXOQWWJFMMBHQRBOWOETZQPYLWBCTUMQBBARUTRGENEIFHUNCACEHYIA");
    msg.ccount = 159U;
    msg.cnames.assign("EOVDNBTRKTK");
    msg.last_error.assign("VSDSRHSAQMWYGZDBVXEKIATCHTCMPNEZZKQXYQLUKDAOSWHGDAGYWYGCAFRYILFVNVJFKGKXDSGCJQBBTWXIOARMRYAZQKHFMLMGNPHZPVQTZENJVJWWHJIUUWLLKTRFOLBSZRCNFPCLGKWLWOGXPNUQJIIDEVUQCRASMRXDPHFXQPBYTLMOTVOZAYEBBBTOXSYOC");
    msg.last_error_time = 0.502187022104848;

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
    msg.setTimeStamp(0.5657069677623815);
    msg.setSource(64943U);
    msg.setSourceEntity(155U);
    msg.setDestination(62227U);
    msg.setDestinationEntity(0U);
    msg.mcount = 131U;
    msg.mnames.assign("VUBVDRYIYSRCMIIFUECWFEDWYJKMOAOMDLTKHXFPFSSOZETPGGTAQQKMAHSJKDFVGXDQPFZHPSJQRENSCANNVNIJHZJEDNRFFWXJHNSCGWLAOFWEUMTKYYMUMRVQPMUTTQDUHKWHULVKCARCABRALUIJWYYTIXZK");
    msg.ecount = 139U;
    msg.enames.assign("EKOVDXDWURZUVMAKJVBOAIXGYHSZPFAVTDGIHTEYGMLSIVWQRLKNNHJYOCNFRBODLUPBYFNWMMOWBTOZXFPWRWWQQUAORNZVTSAHXCEUBEYCKJDPHEYMMTQJLUIPFGGFOAHNQBPVHHCIKSCFFCKSJDGLULRKJDRTSXNHKUSVYQGXLIBAKAMDLCKZNTJBOTIECMUJZTZPPNFSYYFRLPCLSODCZQMWEUWEMADIIENBZHRGITEJ");
    msg.ccount = 95U;
    msg.cnames.assign("LMEUJCBEMZUINCBXRJWUSOVBCBUQFATILIWTYBXSKGAYXHC");
    msg.last_error.assign("ZFOFGEUTWSYRKZLDFYEIPVNVKCQAZNULHZTFJRUCOXERALWBDDPNOBKPTAEQ");
    msg.last_error_time = 0.6248267588494685;

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
    msg.setTimeStamp(0.08988285145687258);
    msg.setSource(21375U);
    msg.setSourceEntity(226U);
    msg.setDestination(46431U);
    msg.setDestinationEntity(167U);
    msg.mcount = 250U;
    msg.mnames.assign("LXOJBFDYJALMUUKJJOPMQGXOKYCGZEJGFUXOYODQHPTPUWMLXVWINAYZYNIAQIVNSEMDWZLSXASLFNDVVRIEENDOHSJSWFSUQWFCADHPTCZGGBACKVVIHRYBJOKKUNFXNFPDILWGQDRPLSYRXMIFDCWUQYYABZRETSKTCLHARTJMHRBYQJDLTGINBWI");
    msg.ecount = 94U;
    msg.enames.assign("CIPYCPRIZCHRAOKPGLLRLQHUYGPBKEMUCBMFJWARDREXDUTTAWGAMFYWJPFSZBCZHEVGIYQSEPQCZJHLOHTDQQVDCIDGMKMMYXEZTFUBKKLYONMIUPEKQIFSNGYIZD");
    msg.ccount = 146U;
    msg.cnames.assign("AGIDFBXDMVW");
    msg.last_error.assign("HKPUFSKFROIJQIFLCOYWJVZLMGTXZNBMDJROYLPYHBYFZFELKAROYKUQSQCEOUKVKJNPMRZXNTISSISITEXXCICGRGJTBLMNUMVAXTWXGHZWZXBHOJZPGJWWVWATRUMDAXBBWYOYHLDNOVDNTAUPGKDPQVDRRQGDWQMMCOEGISHHWJSLZYFANPABITEIHHVSYNEGERRXNGUKCVOWJFTFYVDLQAPMQBLFZVUTIUCNMKLBDUAPEHFADZJEQCSP");
    msg.last_error_time = 0.3521124335580138;

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
    msg.setTimeStamp(0.12642511989771188);
    msg.setSource(64213U);
    msg.setSourceEntity(53U);
    msg.setDestination(11906U);
    msg.setDestinationEntity(119U);
    msg.mask = 151U;
    msg.max_depth = 0.49633040097413816;
    msg.min_altitude = 0.97296184525525;
    msg.max_altitude = 0.02163690446555966;
    msg.min_speed = 0.7746358108620693;
    msg.max_speed = 0.27615238356250305;
    msg.max_vrate = 0.732423195028317;
    msg.lat = 0.7781819626510635;
    msg.lon = 0.14706941573168786;
    msg.orientation = 0.9171132513110046;
    msg.width = 0.4173113325995025;
    msg.length = 0.7165802225564726;

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
    msg.setTimeStamp(0.5286393255192814);
    msg.setSource(60879U);
    msg.setSourceEntity(96U);
    msg.setDestination(26246U);
    msg.setDestinationEntity(60U);
    msg.mask = 60U;
    msg.max_depth = 0.032900801243469835;
    msg.min_altitude = 0.872065465822208;
    msg.max_altitude = 0.5743161700061727;
    msg.min_speed = 0.31412140055337456;
    msg.max_speed = 0.2073487736037105;
    msg.max_vrate = 0.6103978634545815;
    msg.lat = 0.38992163496257726;
    msg.lon = 0.24539420679735424;
    msg.orientation = 0.7582739429755103;
    msg.width = 0.8199120440872109;
    msg.length = 0.259582753359075;

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
    msg.setTimeStamp(0.583871765099726);
    msg.setSource(49635U);
    msg.setSourceEntity(95U);
    msg.setDestination(40905U);
    msg.setDestinationEntity(52U);
    msg.mask = 63U;
    msg.max_depth = 0.5316677373887457;
    msg.min_altitude = 0.2517733032823962;
    msg.max_altitude = 0.18805190393229776;
    msg.min_speed = 0.4471780855685713;
    msg.max_speed = 0.17127045731460178;
    msg.max_vrate = 0.7442350480959355;
    msg.lat = 0.2554401645614607;
    msg.lon = 0.08948436377813485;
    msg.orientation = 0.6525904836152966;
    msg.width = 0.8398630781578261;
    msg.length = 0.4485040093682019;

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
    msg.setTimeStamp(0.8128556491345902);
    msg.setSource(37665U);
    msg.setSourceEntity(60U);
    msg.setDestination(33123U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.3958095719355753);
    msg.setSource(9779U);
    msg.setSourceEntity(202U);
    msg.setDestination(7385U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.6984631953803161);
    msg.setSource(32394U);
    msg.setSourceEntity(197U);
    msg.setDestination(25562U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.5772261661785453);
    msg.setSource(47878U);
    msg.setSourceEntity(124U);
    msg.setDestination(25657U);
    msg.setDestinationEntity(66U);
    msg.duration = 18513U;

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
    msg.setTimeStamp(0.7089737689458131);
    msg.setSource(23319U);
    msg.setSourceEntity(8U);
    msg.setDestination(1383U);
    msg.setDestinationEntity(110U);
    msg.duration = 22118U;

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
    msg.setTimeStamp(0.2441377510907674);
    msg.setSource(2922U);
    msg.setSourceEntity(13U);
    msg.setDestination(37623U);
    msg.setDestinationEntity(79U);
    msg.duration = 56694U;

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
    msg.setTimeStamp(0.9169518925739527);
    msg.setSource(47985U);
    msg.setSourceEntity(121U);
    msg.setDestination(35293U);
    msg.setDestinationEntity(48U);
    msg.enable = 151U;
    msg.mask = 3967902204U;
    msg.scope_ref = 1793660838U;

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
    msg.setTimeStamp(0.20038923186325763);
    msg.setSource(568U);
    msg.setSourceEntity(55U);
    msg.setDestination(38831U);
    msg.setDestinationEntity(108U);
    msg.enable = 86U;
    msg.mask = 1660946300U;
    msg.scope_ref = 2874009754U;

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
    msg.setTimeStamp(0.8340185417287403);
    msg.setSource(54825U);
    msg.setSourceEntity(102U);
    msg.setDestination(8611U);
    msg.setDestinationEntity(58U);
    msg.enable = 51U;
    msg.mask = 2797104017U;
    msg.scope_ref = 2901546964U;

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
    msg.setTimeStamp(0.24304937113125757);
    msg.setSource(22221U);
    msg.setSourceEntity(95U);
    msg.setDestination(6337U);
    msg.setDestinationEntity(177U);
    msg.medium = 158U;

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
    msg.setTimeStamp(0.009934174251572059);
    msg.setSource(12483U);
    msg.setSourceEntity(219U);
    msg.setDestination(15221U);
    msg.setDestinationEntity(156U);
    msg.medium = 131U;

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
    msg.setTimeStamp(0.486535209965993);
    msg.setSource(15789U);
    msg.setSourceEntity(81U);
    msg.setDestination(63709U);
    msg.setDestinationEntity(9U);
    msg.medium = 27U;

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
    msg.setTimeStamp(0.3404084116326329);
    msg.setSource(20137U);
    msg.setSourceEntity(10U);
    msg.setDestination(49630U);
    msg.setDestinationEntity(9U);
    msg.value = 0.3559540458649676;
    msg.type = 237U;

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
    msg.setTimeStamp(0.3769664600437377);
    msg.setSource(34415U);
    msg.setSourceEntity(31U);
    msg.setDestination(35201U);
    msg.setDestinationEntity(245U);
    msg.value = 0.11817848147467302;
    msg.type = 159U;

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
    msg.setTimeStamp(0.8657189684071532);
    msg.setSource(23802U);
    msg.setSourceEntity(20U);
    msg.setDestination(47427U);
    msg.setDestinationEntity(82U);
    msg.value = 0.16137723110554536;
    msg.type = 243U;

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
    msg.setTimeStamp(0.2711744861998562);
    msg.setSource(14810U);
    msg.setSourceEntity(208U);
    msg.setDestination(46819U);
    msg.setDestinationEntity(30U);
    msg.possimerr = 0.08530208876587164;
    msg.converg = 0.7204464696251901;
    msg.turbulence = 0.708817770341482;
    msg.possimmon = 131U;
    msg.commmon = 28U;
    msg.convergmon = 197U;

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
    msg.setTimeStamp(0.16830829198499675);
    msg.setSource(775U);
    msg.setSourceEntity(56U);
    msg.setDestination(17455U);
    msg.setDestinationEntity(252U);
    msg.possimerr = 0.29720014956582375;
    msg.converg = 0.01716624364332975;
    msg.turbulence = 0.6639829922693027;
    msg.possimmon = 105U;
    msg.commmon = 119U;
    msg.convergmon = 147U;

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
    msg.setTimeStamp(0.2725682180332656);
    msg.setSource(16125U);
    msg.setSourceEntity(91U);
    msg.setDestination(7U);
    msg.setDestinationEntity(167U);
    msg.possimerr = 0.3756944136339858;
    msg.converg = 0.29126477541846685;
    msg.turbulence = 0.16397164038691092;
    msg.possimmon = 36U;
    msg.commmon = 154U;
    msg.convergmon = 106U;

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
    msg.setTimeStamp(0.8861207131827117);
    msg.setSource(15669U);
    msg.setSourceEntity(67U);
    msg.setDestination(46867U);
    msg.setDestinationEntity(190U);
    msg.autonomy = 231U;
    msg.mode.assign("LMEVIQDWPBFMUMMXKWQRVXCBVIFIROHKXPOYRWWTKNCXGLITGVTXFBLDVSRENWQWJWTYEKNCRQQADBO");

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
    msg.setTimeStamp(0.09066683148280819);
    msg.setSource(40595U);
    msg.setSourceEntity(90U);
    msg.setDestination(49200U);
    msg.setDestinationEntity(152U);
    msg.autonomy = 59U;
    msg.mode.assign("HCYSAYCSFSBZCLCIMNIGAODENXPXYXNNYGQQONEETJZFUEPSOAUETPSKVCVG");

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
    msg.setTimeStamp(0.3487130649607977);
    msg.setSource(63973U);
    msg.setSourceEntity(111U);
    msg.setDestination(25001U);
    msg.setDestinationEntity(203U);
    msg.autonomy = 163U;
    msg.mode.assign("BJQTOTUXXFPNQBDMRUKRJZGXOXFYSNSUVQHWBLNMQOJRPMYGSAANIAEUQPULFAARGMDJIRGSVFEYDEPOWZPENCNTDPDZCDYDZHRVQANKBQUSKFBZJRWKZICIZCO");

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
    msg.setTimeStamp(0.8550403930032958);
    msg.setSource(18464U);
    msg.setSourceEntity(146U);
    msg.setDestination(11439U);
    msg.setDestinationEntity(91U);
    msg.type = 188U;
    msg.op = 63U;
    msg.possimerr = 0.4480758209663982;
    msg.converg = 0.09792998264226283;
    msg.turbulence = 0.05197785574959657;
    msg.possimmon = 166U;
    msg.commmon = 242U;
    msg.convergmon = 95U;

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
    msg.setTimeStamp(0.9654580218279263);
    msg.setSource(40157U);
    msg.setSourceEntity(113U);
    msg.setDestination(10125U);
    msg.setDestinationEntity(146U);
    msg.type = 62U;
    msg.op = 234U;
    msg.possimerr = 0.6256881825121244;
    msg.converg = 0.30382924175695725;
    msg.turbulence = 0.9799785442890184;
    msg.possimmon = 75U;
    msg.commmon = 30U;
    msg.convergmon = 26U;

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
    msg.setTimeStamp(0.7306668603215989);
    msg.setSource(26835U);
    msg.setSourceEntity(34U);
    msg.setDestination(27846U);
    msg.setDestinationEntity(136U);
    msg.type = 221U;
    msg.op = 184U;
    msg.possimerr = 0.4095633057363258;
    msg.converg = 0.5117623934748448;
    msg.turbulence = 0.1309830884488331;
    msg.possimmon = 172U;
    msg.commmon = 244U;
    msg.convergmon = 102U;

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
    msg.setTimeStamp(0.4529678027656626);
    msg.setSource(62445U);
    msg.setSourceEntity(18U);
    msg.setDestination(34337U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.05590977569962108);
    msg.setSource(48687U);
    msg.setSourceEntity(56U);
    msg.setDestination(38665U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.6429362753658501);
    msg.setSource(29695U);
    msg.setSourceEntity(118U);
    msg.setDestination(20745U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.5557179150597168);
    msg.setSource(29232U);
    msg.setSourceEntity(239U);
    msg.setDestination(27633U);
    msg.setDestinationEntity(9U);
    msg.plan_id.assign("SMDWPKAPZUDBXKMJANBKEQREVRGRWEP");
    msg.description.assign("VUZNCOPLGQXMDGTHTXGRKCLYUUZGCTGWRKDYBFMPWAJKXHVWSNHCICKYRLXYKMRAMBTJNPTHQSSOKPRGDKFZDIVYSRATBAXEFJQPBOUJZHNZEHGLHUBWXCONOSFERTW");
    msg.vnamespace.assign("YVEBOLEKWHYNRBEQGUJSUGZVFXDWWKBBKQOLKTEFXJUHVKUYHZVFMJISMICFMCTQXPAICQUFJJGKNHCNPSXRKWOGFPCEAGTXTEIWRMBXFXDQDWHURZMRAARSIUYBIWZRDZZSSNGJGHDOMWHCROLBODBVGEEHNYGLSPYAWFQCBQLCPUOLSMVPIPTDZJYQCIZKQVAAVKBFYYFTLJRMTNNPMIPNLXAWATZN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GCGUFICYZRXHHYXFQCEWJRDIOYFKBPWUWZZZDVHZOZAPWUTCUOQBTDBEOPYZQKSOBXKYKLOYYHFWVLCQDNYXEXOGHNMIPBSMPEIQGGKPPVVYKEUHDRWEPSSXTNDTXBXLNGAWDRVJT");
    tmp_msg_0.value.assign("DUGEIZBXSJYTWFEEPSPQCGNSHLBJDTIAAHJICMXIBJWEZJQUYFWRDQKGQHHNPMTRKUGMLTONPVQXHCTHKOZOKXZTSCKCAUVFXZDNSDARNTJADWHNEPVIIJWVSUEXMOIJYEZUCJBXYLHRPTFVMXKMRWPGBKWUSEKVFVZOMMDLWSNFHBVCZRNPXJBKNCKYLIYYVRQYOSQUFACLOQV");
    tmp_msg_0.type = 172U;
    tmp_msg_0.access = 109U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PKSBAMSMFX");
    IMC::DesiredPitch tmp_msg_1;
    tmp_msg_1.value = 0.8125048479709577;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.2291774068608221);
    msg.setSource(42792U);
    msg.setSourceEntity(222U);
    msg.setDestination(1941U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("HHPPWECXPAFEEBYOELCASBNNEAXUIBLETTFCQJZICAHGUSKIWQDZSTMHLDCKCLWRCKRBFRYL");
    msg.description.assign("BSNNLKCTHWZMUDDPKVXXRWNRIGYAIQLGXNXENSFHCTKSQDVYTDGHLKSIPVJLLWJMENOWSHZFOMJIBLEJOPPEAVFCDCDXXDAITSHRUEDBBUKAGUKXKNMHTJPCLQRUMBCIXJZQVWJPRQYPZAULRWKYNSPJSMBSZMRFUUOCVAAFGIMQEHDXBTFWGBEFZHWZIWYATHCXMVZNLQZEOQLQCUGEFBHPBAFYIFMIDJP");
    msg.vnamespace.assign("UARDKBKGUHDXOXMCGVTWPKWZSSAHSQWGWHYUQCRENDQMKNVX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YQMREINNCULKGQTGEJSLRKODVGSIGCIHUVPPESYLYYBBADZNMSYPFDEX");
    tmp_msg_0.value.assign("FTEAYHGVRJACPIQTYIODADJCZLPKBMWWFMAETFSKZKPAZPHJPXYSDTTFTYHJLWIXKVDCMOLJXEHXCA");
    tmp_msg_0.type = 136U;
    tmp_msg_0.access = 91U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ODTNILQZOAHHRXDXAMRMYNIBQXRADRAKDBYPEAUEKFMLGFDJGNPSQTXSXJHKVTSIBYZCLWCAWVYFPTLZZQDOURWJJWAYUQMENNVJPXHPIBHDIKZLBQCWUMIPVRWZYGRMBXMKNUNFOWJCSQZDZRXUFJOGOIOBHFQEDYDUCUXTOLWZGTJSKGTACVYCEXYVBUGOVEVFAKIOREERKSMIBH");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("CIGGKYPSQEADLIFDYEEQLLIFAOSGSZMOXVTRWRHSKXXCEXOVZLQM");
    tmp_msg_1.dest_man.assign("WGJGLUNERN");
    tmp_msg_1.conditions.assign("JLWSMKZBAOIUBEFAGXWUYXIKIPDXQPHJZDZBRZQUESWVVFQPDYCPRIXTMYVOPELXSJAKYPQDHNAGODTBFGBQURCFWFSCJZHDQPYWKSKTSHNWLNHUCYZZVEDTIJKTRDPNUFCKVQBKMATCXYLSOTCMABUULC");
    msg.transitions.push_back(tmp_msg_1);
    IMC::CommsRelay tmp_msg_2;
    tmp_msg_2.lat = 0.03663085658945664;
    tmp_msg_2.lon = 0.1837391680455569;
    tmp_msg_2.speed = 0.395532459451735;
    tmp_msg_2.speed_units = 220U;
    tmp_msg_2.duration = 50887U;
    tmp_msg_2.sys_a = 62070U;
    tmp_msg_2.sys_b = 44084U;
    tmp_msg_2.move_threshold = 0.8924122573444837;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.4484556956519703);
    msg.setSource(45737U);
    msg.setSourceEntity(55U);
    msg.setDestination(26290U);
    msg.setDestinationEntity(100U);
    msg.plan_id.assign("EWKAVWNAOTZKXRNQRQMNEHYNVHFGVEAMKMRIPBGHNTGKCLXZKMQOPRQPNVGDCGZZMLEDPQDLAQRDSJAIQRYTYWHXFZPBORPLLSJWJLSHESIUGRECTKUNPTPICADYGGKWHUX");
    msg.description.assign("WBCJULBDIORNGYWXQANEFMNZWIYDWQVIOWOQEHTUMKFXWXSNSOKOGNUKGRMHJHDTPOVQOPTGYQ");
    msg.vnamespace.assign("SAGVAZQHZENSQSMGQTJXPQWYKRSRPCNJXWWRTUTCPZKDZCHNYOJMEBHOAUIHRIZZNOLMILPPRANBBGDIBPHTULTEAJHIQLWIYDSWXEGREQKKAFJPKTIGDGFMNQBIIDUGBPCAYJVDHNYXEEVFYSETONCVHMKPQ");
    msg.start_man_id.assign("LAUUHXZWBAICWLEJIJJPYNWKCUZHXNMSZCQFRGOWHBHPCMXIEDFLBNMXSMZEMSWYTAPBXSYMVAYSDVMNOYKRJXQLXIUVNPPGCDCABCDROOOOOIWPLFRCRDDPZFYWRUNDALCNTZGFSQSTEGVEPSXTIAATACHKHFNIHBTMLNVFKTTPORIUJRSTZNJSGLIHHPUGB");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KJULODZMUWBMEXRDTHQQJVPROCRCERQHGGMOGDNXQNKFRVAAHXCVBVUOMNHIQCJSDRXPEIPDITZLVJUVDYRILMLNOTERLVNZPYZPSLKPAKJCXAXLOZHVWGNWAURGNGHSFBBKJWTCKNGOKYLKTZHBWMZPDUMIQCJFFVDIBFEMNJWYDSPSZQLSNCIWEYEXSUWXKXQAFUYQGDCZURQMFFEYOEXHHMJWAFOBLTTAYPIWI");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 1386U;
    tmp_tmp_msg_0_0.name.assign("GRFLAYTVJNBUORMZDISVBSATIDWMMMSEWIKMDBZOILFJUQLWNHNRGCKCHZJOBHLBHHXKKMVMYEA");
    tmp_tmp_msg_0_0.custom.assign("UAUXTPLYMGHJZGW");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::MsgList tmp_tmp_msg_0_1;
    IMC::QueryEntityActivationState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_msg_0_1.msgs.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::VehicleLinks tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.localname.assign("TBSVXVAELVFASUHJVSEZJRHSDABMJMOOCBQBUYIZSDNAKYCKVTFCXSQAWOOGHUWTNLGFEYYLPCOEQJOMGKIFYSBHIZLBNKOGPXDAXVHSEPMCDVLMKOAMXFQRFXNBFHOWPEBLJYATEIGFWUUQTBAGTIDVLQLHYTIDKULWNPPZGZXSYOGHKUKWXCPFWCVDMGWRENKZTJNUIPIRARXJQRZWRBKWRTDYCCMZM");
    IMC::Announce tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.sys_name.assign("DGQNWAKLCRSNESBXSYZCNBDZMYKHSSLHIAQYQNVOYFFVLNVRZFOKPZRSKZUPHECAWBVAREJWQLHVUKCVPROJUBC");
    tmp_tmp_tmp_msg_0_2_0.sys_type = 50U;
    tmp_tmp_tmp_msg_0_2_0.owner = 845U;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.16960056581783456;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.9741719930566785;
    tmp_tmp_tmp_msg_0_2_0.height = 0.4019321925657561;
    tmp_tmp_tmp_msg_0_2_0.services.assign("CDWOFVHNVTCXENVBKDXXMPAKAEVNYCIABSHNGOBPFDFTXYSUOIAKZNTGWMQRHRUVDBGIDFMBYGHAIJRRJQHUQRXNCABGOPYVIWPBQFCEELQASQPSKUCPANCLUCWTHRJIBRYKLFOTUEELGLDMJFRYSZATEQGHWWSJONYMXZVTEZXMFPUMYGUTEUMQMHDAOGOHLDPDLXNSZXWKBYZYJC");
    tmp_tmp_msg_0_2.links.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WUZRGFAUEJBBFGEKTBKSKNIGAKCPPWXPLAPFBZMQLSHJHRVBKKSBZUUPOGLMOCYBRQDZQAMQVGXGODNDVDYNSYWSAYVRXBAVNVHNLNOGDPOJZNDOWVHTXWQIMRXH");
    tmp_msg_1.dest_man.assign("NIECRTVRALHJOBJXZONCRZONUJFKASATKWJEESMQLWICDJUJFXDQGPWIMRPJZAXOWEMQBTPTHGBUTHALZQHUGIQQSAEPYRUHTUXSOWGMANHBQRXXKJIGTLFDDRUVKIYSCQ");
    tmp_msg_1.conditions.assign("JKPWLARWFSDELOPDALYXMKCVYJEDWTNZCAPBEGIXMUXQZQHBDNFFTYVZWHYLEIIKIOJMJGKSNCUGSYSXAOPDELFUBYTSGRSQGDPASUWGVJOVRPZTTMIILMAFXBYCEYKONJIKZHJHTZXXNCUFWOFEDBPMCHAQSVDQOVWLX");
    IMC::IridiumTxStatus tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.req_id = 43354U;
    tmp_tmp_msg_1_0.status = 80U;
    tmp_tmp_msg_1_0.text.assign("KCJCBIBNBRIAWVTBPOHJBKNIEEPSBXALZWFIIKTSFZRMYKCCLGMPGHOGQWVJSUMOWTFSAREZIXKUJPLLCXYWRFDAPXDKFZZLUSRRODTYLMUBDKSTDVOGXRTAIEKWEDWCXQTMFOUPJGYZHEMZVYQVYGVJNXNQQOYARSCWTOVGQASSKVUHDZCOMPJTFQWJUDIDCFHRJPHYBXHBNLUHMN");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::LblRangeAcceptance tmp_msg_2;
    tmp_msg_2.id = 105U;
    tmp_msg_2.range = 0.8648308721199897;
    tmp_msg_2.acceptance = 57U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.5265873115725475);
    msg.setSource(2356U);
    msg.setSourceEntity(213U);
    msg.setDestination(6358U);
    msg.setDestinationEntity(160U);
    msg.maneuver_id.assign("QGWHPZNJJEBXXFMNLMTZUZGZILOWFMRTUJVJKYDZGFTTDQ");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.6380931961120838;
    tmp_msg_0.lon = 0.7806740617821823;
    tmp_msg_0.z = 0.1351079304559315;
    tmp_msg_0.z_units = 208U;
    tmp_msg_0.speed = 0.3175496549497844;
    tmp_msg_0.speed_units = 22U;
    tmp_msg_0.start_time = 0.022785794197093923;
    tmp_msg_0.custom.assign("YWMCRAQGDNJGLFQWNHQMWGZLGEAFULCEEUDKTMZAVZSCPLFVIAJCOEJEEMJKYGSMGWPZHTNXQMLQMCPGXTPIEKCJOUNIPYAMYHABIVFHUOMPYITDBBSXWFC");
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
    msg.setTimeStamp(0.508523283850461);
    msg.setSource(20735U);
    msg.setSourceEntity(151U);
    msg.setDestination(55360U);
    msg.setDestinationEntity(249U);
    msg.maneuver_id.assign("PIHPCFWTNOTAJEFYENRNONCKUOIJDDDKOMBKEISRVDAJJZJQJBWBHXQY");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9350093515741646;
    tmp_tmp_msg_0_0.z_units = 242U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 8137U;
    tmp_msg_0.custom.assign("JDEZJNSFARENRAEMKYCYTYIHXBJLVNPQZIMRLWQMQMSLROYOOKVTDWGQNCFFGOPGBJHCCLSAGYDITIUAYEEGRUTPMZBOINJIEKLKAIDVZDZBNYXCJDHCASWBPZMEEDXXYSZVSPXFGRTVDGT");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.2108487955732371);
    msg.setSource(14103U);
    msg.setSourceEntity(157U);
    msg.setDestination(48184U);
    msg.setDestinationEntity(242U);
    msg.maneuver_id.assign("JXRAVFCOQEAEGDACASKDGCAEASLTMDFQLGLBIPUHHFLKMBSOCBJXQZGISYTHTVWTBICMBJTMERMEICFSYTUAMDDNHGVPRZZXQELVHPHYRENJOYLOPPBNEKRUZDVEWWXFFHIGMDZFBLBCRSWTNX");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 24413U;
    tmp_msg_0.lat = 0.3735202748694596;
    tmp_msg_0.lon = 0.7322383512895568;
    tmp_msg_0.z = 0.27387180730040084;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.speed = 0.12005400650499054;
    tmp_msg_0.speed_units = 163U;
    tmp_msg_0.roll = 0.015924203360910272;
    tmp_msg_0.pitch = 0.25079580205212304;
    tmp_msg_0.yaw = 0.4271904261066001;
    tmp_msg_0.custom.assign("YYCXVNBICQUICDNKEFMSFLDKEIIHKXTCIRYTMWEAIWMJEOOGLHARUHMXSBHRNKA");
    msg.data.set(tmp_msg_0);
    IMC::EntityInfo tmp_msg_1;
    tmp_msg_1.id = 230U;
    tmp_msg_1.label.assign("FORJLDGSDEF");
    tmp_msg_1.component.assign("DWUVZYEAGHVPMFNBJHIQOSMIXCWCWMCJPWDJZCEGLVSFRZWDOKEAVAAYSTLCPTNFUIWFCPLDERQWYPIJUBBZTOCDUYEVKWTTVQKRIBEPNPCXKVGMLKXPMGKHHGYYELLXNLUYLDRBVUHXFOISASEAWUGORSRSZVKDAJGNBDHTJXIZFNJIUZLSTAWDMQIBCJNMNMXFMBVLFXHOOFRQZMQRPINYUTQQJKT");
    tmp_msg_1.act_time = 27802U;
    tmp_msg_1.deact_time = 4866U;
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
    msg.setTimeStamp(0.2689198470411147);
    msg.setSource(1677U);
    msg.setSourceEntity(247U);
    msg.setDestination(60728U);
    msg.setDestinationEntity(218U);
    msg.source_man.assign("TKBSQONXLXOEJPTFTAZTMNEXTEBTVFSCOMGZAJNAVOIGJUPKHADUGYDQOFHGQKNJZCWDTHMFHMURNLIRVOQPVBPTLLZQWKJQETEYZJHXZSKAEVIAEIFVNZIEFIIBPPSARSEGQVNRVXRHAWGZDJYTDWWULZKPXLQKLQNWHFCMYMVYCEWBOUZ");
    msg.dest_man.assign("KVCIUPAYTBCSNWPYNUVRCRREFEGAGSVIXMAUZUQJEQHQCWUDJYAXTPKSXSUVPODJFLFZLDPBWSBTJQEDIGUDCFGJYUKPPGBAWLVPCWCRLIXZERPKMOLMOCWXIYGMBKFONFNHSHWKHGNIJPNVYIXJVEYGBHMRYKBHLHWXLLMVKJMLFDQVDQMORGYSDR");
    msg.conditions.assign("KBJOYYVPTSCZJXDICGLJUQZNYZLFERWTSNOMYSLUWDSCOWAQPUGJQWUXKWBXPOJVFYPZQRHXREIDNIHYKSEXIACAVSFFHJTJGGMBNHIKRSRJYPNUHQROKUWGWPHCOXMAUBXBLMJYQFIFEPVTBLBMXNCODQZBWEDRQS");
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.3145837506603206;
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
    msg.setTimeStamp(0.7594790153746257);
    msg.setSource(42027U);
    msg.setSourceEntity(10U);
    msg.setDestination(32850U);
    msg.setDestinationEntity(237U);
    msg.source_man.assign("GYRHDNLWJIHKRFXMOTCFCJRHCWEZQBUEKHDICNFHAVBOTYIXSMVZAGJRIQNVMTGATE");
    msg.dest_man.assign("LRCMFMIMWVYNKEQMRLZCPGFHNSFPOKMUAOFIQDQQHJQOSZA");
    msg.conditions.assign("YMEMWNHUQNDXPIDOBKGCXRJUERPUEZBBWQMDZEBJSDLIQHVSCWPOKAQSDMOFNXDQNESFMGZYCODLZEVLWDCCIDRTOTABBCQLUQAIGVJGNTRZOFIFMXZFHSYFXGHKHKKNHCYHWTTVKQJPSVPABZTSKOLRNBOGRIJZIEHFPPXGJBLNZATAXUIJLRQUVUYVUUGHSLVPJKVLRVSYYEFY");

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
    msg.setTimeStamp(0.19729325944519704);
    msg.setSource(36578U);
    msg.setSourceEntity(190U);
    msg.setDestination(4095U);
    msg.setDestinationEntity(63U);
    msg.source_man.assign("LDIKDSYFBOVTAKPPZNEYWWGHBYYJTMUGTLKAZQOMBCKWGUFKTMFILVMGNBWIHRZIRROIGZKGQZKKHWJEDNHBCNFXPMZYEINOTRRDELAQMPGHORVTOSXECTBVJYSUVAUIINDLNVOXSFFLRXSNWXOJJYSMUTHIGAZWBMPXPAZHMJUZETFJWESFGVRAUCGDEHLC");
    msg.dest_man.assign("YBFCMDAUGZYDHKKHZPMZPQFDGGMOIIHYUYAKJOFKPJWXEMVRMOKKNUWFHGWZINSZCDGQRQVBRQLIKISOQNPWQWCXBOZFUSOMXUVJRDDTSABLVUKXEBTTTMNSIB");
    msg.conditions.assign("IQTQSXUFQREIFVEHMWECDUKDFKSSHDRPKFZYLAUVPSOUNETTNMNYDFPRHHAVVWBUNMXFPLWGTTRIOWBBOGZLYMCAQZIHBRCXBVQIVGXCKTKKHDPRWIERLHTELXVATYCRZQHGGONJSLQXMYBNUYQWOKCLDRELAVGMZVFHJCAJYUXGFKRNBWVESXZUPAOZQMYDEZJJIJKFWADPSJBPNDTOGAPALHJBBZFIOX");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 1096257461U;
    tmp_msg_0.start_lat = 0.42058562182565107;
    tmp_msg_0.start_lon = 0.3664384786807444;
    tmp_msg_0.start_z = 0.3951496672767578;
    tmp_msg_0.start_z_units = 91U;
    tmp_msg_0.end_lat = 0.8900110947832265;
    tmp_msg_0.end_lon = 0.5052463238204092;
    tmp_msg_0.end_z = 0.6083759956978328;
    tmp_msg_0.end_z_units = 162U;
    tmp_msg_0.lradius = 0.9643055223476992;
    tmp_msg_0.flags = 143U;
    tmp_msg_0.x = 0.7846953715227993;
    tmp_msg_0.y = 0.18121517911744556;
    tmp_msg_0.z = 0.35223431902978153;
    tmp_msg_0.vx = 0.0955391038708776;
    tmp_msg_0.vy = 0.15058706130299315;
    tmp_msg_0.vz = 0.9077513849513006;
    tmp_msg_0.course_error = 0.19419571770687738;
    tmp_msg_0.eta = 54071U;
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
    msg.setTimeStamp(0.2896689138921823);
    msg.setSource(25776U);
    msg.setSourceEntity(247U);
    msg.setDestination(38341U);
    msg.setDestinationEntity(150U);
    msg.command = 159U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QIUSBQAXQKGIORVLSUZWUTDVZLBTBYMFDGTKOEPNBQEJGSXWVYLYUBSVQKHSEGDXJFCNMMCXFYFJVFPJECSUOIPPRGUZJPNHKMQEKIABCTIVXWJAZPASRWFNJSMUPSVTNEKOHDJAWVCLIZHXNIXHBOGQWMRGTHUEUFRHAGNLKOMIOMYGTXHZTGEDEYNRDLWQDOQNPCWODFDDTZZBL");
    tmp_msg_0.description.assign("LXGSYMZISTSQVALXRSYDAHJISYSUEQPVOASPYYNWQHDNETUCTJTCKCJKGRGFLZOVTKAWYQRKBEXIOFGMNHPLQHYRSXHOWEUJOIVLCCTBFXTDTNCPLRQJJNNPMENWOGVDREZMZBUKMFZWVANFWEVRDVOIMUBRTNGBFWZCTRYYUFNHZFESMLDAOHBUKHCUAKWGPHXGBZEDXPLAIQPMLWDBCMQKJPQAZKM");
    tmp_msg_0.vnamespace.assign("OGORPWVMLTLOBSNPIKMTMUXNDCCCMZYWBFMTOZIXXEYLHUWUVZDNAGQAURUMSHSGRFFXAJHMJQZIATGNDWGRRCVGKQIECNOFTDHYWJQGKDIWRFUZDITMFHSNYFCHPMERKJNPKJTEFPYYPHSKKKTAWTALGYQUJWODOZJFALHVBDOPEYYJVXNCCQLBZWRZNHDISORSJXCBYVMEFBXGPVRVKEPZOPIBAWHLBNAAJVXTUQEQIQ");
    tmp_msg_0.start_man_id.assign("KTRSVROZWVXHJOMPGUCBUUHQDTVWTIYKPSKYAYDPNTTNLIWLGRXYHKNWZPIZCKXYZWLASZQDONSUVGDCPKOGQTODEGBJSJTVNRQRADCXNBAQAMUFBWOPWVWN");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("HFFYNNQABZKRAUQEGJRHJDDBSSVALHAXEXXFKSAGSODBVJDCDAAIFWKMUMPINHLNMHKSKTAIUPCRLQKCVTJYJRSWNEXXYFOGJLUHATRZQXKEZPQBOIJRTGJIIXZPRUITNTEJOLMYERMOFCDCWYOLBSYFDCXHJCVKDWPUOQGZKPXIMHGPYQPPVWIHBZTE");
    IMC::YoYo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 31010U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.9856164459071751;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.46341675224426415;
    tmp_tmp_tmp_msg_0_0_0.z = 0.776893030221655;
    tmp_tmp_tmp_msg_0_0_0.z_units = 59U;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.9641386571273858;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.3063557713722377;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.5234645177765989;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 125U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("INIPRHYYBNTOXWXDOMQGZMBRUCROUPEZMLYRXRCZJLHGEYVYIWAVCFYYPTASIQFNBRDXZSDCTKEWNFFVHMTPFIKPVGLNAFJZMDPIDJZULIRTHLWCWBQBLASDNABYSUNZXJQFLZRMEGRPFXOAXTQHHEWBURJLBUTSVBJAGNYWSCCXUDCKMTGESKTAQMDGCJOIOVUWPLZJSOHXLHKVQOMVEKUVFDZNOQGYHKPIW");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SystemGroup tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.groupname.assign("LSHOCLXJNCEWZKVMOGYAKZDGAWVFNVWHFZECQIOYVGSDQSOTAQIBGOWAEJRPIXCYPCUMLNZTSBWPEVUTIUYEWREXFWSGQWATNFENBQDINHUPYUFRJMRZTRBVPIYMHYBCDXHIBDREONVRLOFLJXMGZMEGHAPAPYLMWUHHGXPH");
    tmp_tmp_tmp_msg_0_0_1.action = 206U;
    tmp_tmp_tmp_msg_0_0_1.grouplist.assign("KZDEWUFQHYNKSVBNJWGDUYDPGQJSOCUKSPLHZEPTUAIUPFTFDJENKQRIUFDMQEQMOZOVRMLRIEDVSYLIPKBSQIXACIHSTKVFGKEMXZIZWFSWLPYLWBMGWUNTOCLJOMNJJYFYLYFRWYNFKCTBXDVXZMPACHCQTPDHNXRWZOAJ");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::LogBookEntry tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 178U;
    tmp_tmp_msg_0_1.htime = 0.2065687858231694;
    tmp_tmp_msg_0_1.context.assign("JPFSLZRSRPGZRWCHYBEDTQIJURWSBDYJLLVMNAAUBLYVROWWHAQYNUNCDMASOMFZQTFLRIBSVUVGWXPFBHUJPGQPYBXQXOIIGCKEXNQSTKMJZXWDECJHJKFEAYHZPQEGRNJCBZQUMJWEGXQITWL");
    tmp_tmp_msg_0_1.text.assign("YKHDLDZBMMENFCUNSAWXQQRISWPZFTCBNXEPOZQATRGGVWSSHIAVPUKFYHUZRXHQLDSVZKHDPRSMFRGLTXWGDBHXMUYZJRYOGZIOFYVUNJAWRVOSWVIMBKOPPIXPEJYAIOSALZJKMUNFYIQCPMMQCNJLVVHILNMJORLKCTPECCJHISWCXLZOGDMUIWABAZDNEKAEGAGTOPQFBEK");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.27518860676684165);
    msg.setSource(37427U);
    msg.setSourceEntity(152U);
    msg.setDestination(22239U);
    msg.setDestinationEntity(58U);
    msg.command = 87U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FTCUGRMHDGXQVSKUUJGBZCVOULWSTFCBERKMOOXXZIENKWKPNTVAFNJAUYAWDWYEKQTLONIPGMPSCNRHHR");
    tmp_msg_0.description.assign("YVYTIDIKGNSCMNYOJRQMFFBEQOGJBHEVGOUXIGLHAMSVHAKEMOZEDERJYNODVXQVFJXMSWJPMGAXZDKLWDYOIEJBNLOPZUZFEIBXAKLVEXJWFWPZHUJYFCCAKUAYRYTCWNFPNUUIGRNTSFUGRSPQFLZPCYGPBRCBAQSWYCTJOXRVWGDZDPEUMSCBKHCJRQCILPSSQSBKRLIRTAHVTWNVQXLAHTWIUKVDKZUHX");
    tmp_msg_0.vnamespace.assign("DBGLMSSKRLLRKOHBKKY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RPPMKGXHEQAHWWTBSLPSEUFCKLNDYMMKWZBIAWJGYLTEGAQBHBJSRFIULSQCNTMXROAFOGIZVMOAPZSIAGNWHT");
    tmp_tmp_msg_0_0.value.assign("HZCLXDSMIMHMAVNMAFLYSGDTPKEHABNZIBLSQYPYUVEREKVRFDGBOIHFNBCWZRNUPALSXIFU");
    tmp_tmp_msg_0_0.type = 85U;
    tmp_tmp_msg_0_0.access = 11U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ADDRLSEEYENSKMXWNNF");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("VJEPFYLKZMBMWOQVIXVPFFRKLKYKSZGLYVYZPZLOSHDFOXNIEPAUUYBASMEMADAIKUXQNVCTEGGCYVIZSJOBUUKBFGROPXMMIIABXMIJTKBGEDTFZWKGKRWTHDFNVNHCSPSJBLYWIECULTAXMLVBWNKHDHJJGPDIYZWRETQRDCWOQCXJDGNCLZEVVDNXFHTGHHBAARTIXHLGUZPCYZMWQOFUAUJNSOSCXPLFHQTPQCOJSUY");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 5223U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.007037381535178855;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.21761810959076133;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5799983065019216;
    tmp_tmp_tmp_msg_0_1_0.z_units = 44U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.4554631833265259;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 150U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.8029386758083695;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.4332347209769023;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.13220817262414486;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.t = 0.12482974403296643;
    tmp_tmp_tmp_msg_0_1_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KUPAOTUZBGZSEFBPLAFEEMFCJYKZTQWNPHESNQYLTKJGSYWFZIDCQRVDNHHPOJUIIDXWHHSFEVWSYHNKEFZNKRDOLXBIMGGNUXDKPHAGKPORHRXLCPHCPWAWDNVJMBXJVQBADLMVNR");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SetPWM tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id = 152U;
    tmp_tmp_tmp_msg_0_1_1.period = 2141804079U;
    tmp_tmp_tmp_msg_0_1_1.duty_cycle = 1907747710U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.9030606417161948);
    msg.setSource(31220U);
    msg.setSourceEntity(51U);
    msg.setDestination(48432U);
    msg.setDestinationEntity(89U);
    msg.command = 116U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VQMMAQWPDTEVNHVTGZCRMIAVXLRKFVOSSJPKIWFCBPPTQELWOTDYUDJUORLKKWSHOHBYLFXNRGIEAJCIERNENKZRZBHOOPHXXZFDPJMTJRZSKAAWBPJQRUCHDZNWISDEXCGZSKALLODIALWUSHBQGMDARICQLZLOFUMQVWIRYGKWXUTYU");
    tmp_msg_0.description.assign("JHRFMVOHOECOONGDSSYBVIFVHPLMYSUAYRPFGGQJBVVZHXRICLJNCZMLSEDQTCXRZTPVXFPKJLZBSQBZLMLEWYGCNYCUZSERTKXQTWFTGGNBPIJDBXIKNDSRLCOXAFKEUGAFKIHVDDKHKNMNLTWVHUTRIUHSOMR");
    tmp_msg_0.vnamespace.assign("QLOZRKKZSDKGVQBEFZPXIYXNCPMITNWIQNOHZMUFFVDAGXYDYSCDCVQFKDJSAPJUMFTBHSHQWZWRHZLTGYIQHGAAIJNJJVDTVBPFSUJRCDVCWMRE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ICBHOXWFSGHDXQFPPDERXODDIZPSDRSUOSTJDRHGBTKTXKWVDXCNZEKJASXWNRYCBMVPUJWQVSMKFOTLQYCFITRXBDNLZGQHNUPJRFXKFSTLYMUZIAAYHUONIJEFVCBNCLMVBAOGUERGVFYEDNPADAOGSYVIEPEUGBHTQMKGJLREWAMVGHJYZPWOHAIVXLMZYVMZIWTMIJAKYFOYXJEZUHCISKWH");
    tmp_tmp_msg_0_0.value.assign("WBMGCQGLDKIFRTLVBVDBNAOUUNZDQNWRLFOVQNYNBYOWROMQIXVKSTCDOHZIMQGUXBBUCGMNVREWCKDFJEQKTJCZDKHQTEIHEYKNVKHESIATUJNISWUSOGCJEKYHFQPDRLRXDTILNRAAUMVGIOFHAKMEJRSEPBFPPGSCJPXTSFLXQHXJMBUKIWLXCAMUWZGOJPMTPXFZYAOCTXLPZIPAODLNBCBVFHZEJFVRZSSHA");
    tmp_tmp_msg_0_0.type = 242U;
    tmp_tmp_msg_0_0.access = 215U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YOTLGSMXSZXKJDHRBVCFDNJTDSQPNOFXZEHRJNQMEKQBXRUGYSAIGIFNIWUHBJZSMSAEDVLZVQYIPFXZFWGITNAMKOHQYOVC");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DYNEDBHKVLRAOFJLIASUHUGFGYGEUJFHODKPJRHGHBLACOWMTGGDKLUJCBXMWUPGITBPFUWSRQLXHMELZEKCFHOSQCVDLWTCDYTZXTYZRIQZNGOPUZBQTMBYDZEVIMOJFZURIBJWKNFIOSVLADSPXIKHVQWMJPJKXQDXLYSSTWMAVPCCBNNBYLJOYXWNGOAJWFVSEKCYQ");
    IMC::Dislodge tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 18123U;
    tmp_tmp_tmp_msg_0_1_0.rpm = 0.4097854811556374;
    tmp_tmp_tmp_msg_0_1_0.direction = 203U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("JRMTOHASHGLDEBQNDSDEYCBPIRZIMNYQLWAYCZDOAVDXVXWQJZTBZDWBQFMTYMJWNXGPBBYKQGKLFNKSCPQOAWYZORRHUGVLCTVJLPZYSWHKXXWNPKOIXQLVBYKJEVEGISASCGPZRLCSGPVMIRNEKJDUJIA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredHeadingRate tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.7962897676941968;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.2833979773751073);
    msg.setSource(31821U);
    msg.setSourceEntity(156U);
    msg.setDestination(8806U);
    msg.setDestinationEntity(21U);
    msg.state = 33U;
    msg.plan_id.assign("NEJHVFODCWEBVSEVXVDAIYFGRFXARTTYHCPXVJNGXWMKDMIAZQJFTOBOCNODXQIWDSCJYGPTKLVTNTVRIGMMVELUKMJYEBPUKABJQABKXRGGRWBQYVMTUISDFNLLDFCUWSOKENIQUYYMWHTSZHQLXILRSVQHAUHLFSAUJREEZHWMBDKNGAMWLLUSOZUDDNSIYOXFSPZARNAJZPPXHKCOBRZJMQNO");
    msg.comm_level = 127U;

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
    msg.setTimeStamp(0.1042474802796508);
    msg.setSource(1972U);
    msg.setSourceEntity(83U);
    msg.setDestination(3117U);
    msg.setDestinationEntity(120U);
    msg.state = 140U;
    msg.plan_id.assign("OJDTEPLMRRGMJKLCXNVNFTGSMCQVEZHBWGYPLWOQTFPBRWRPACJCKFILMSAEEYHPKXDGMJXOAIADPZNIXMDUILIJVXKAHIGHQLANGYVWGQXNCUSHRCXMWECIZFYHUBZZRCVAHBKVZASIBHFVJIUNMWRFDXDFAPBEZVNOPWKCYSUDOYTTBZYCZKWFMNRGFQJOJXUTTQLLWPFUSNEURHDQLBHWTBGJTVKDJRQSGUYOUOTKL");
    msg.comm_level = 13U;

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
    msg.setTimeStamp(0.7016971191989286);
    msg.setSource(62204U);
    msg.setSourceEntity(176U);
    msg.setDestination(28976U);
    msg.setDestinationEntity(159U);
    msg.state = 92U;
    msg.plan_id.assign("WPIPUWEFESZZXPUEUSOVGYGNPITKCVIVNBFNEJUBOGDPIJZXRWDKVRCEFRMTRQPQSKAQVCS");
    msg.comm_level = 73U;

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
    msg.setTimeStamp(0.36723825442344005);
    msg.setSource(24368U);
    msg.setSourceEntity(120U);
    msg.setDestination(29591U);
    msg.setDestinationEntity(79U);
    msg.type = 111U;
    msg.op = 4U;
    msg.request_id = 46884U;
    msg.plan_id.assign("JLXSRJGHUWPMQMHORZKAESAYCCYOSDIWXIDOPRMQUUBTIDARXCWVRKNGBHCLIREHEEBJHFJICW");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 235U;
    tmp_msg_0.range = 0.3665752496688679;
    tmp_msg_0.acceptance = 148U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FQWMWXVJNYFEWQIDKORIINWNBAQMZUBTTMAIGPGOREJKGYDXUUJAIZYSRUZUGWOLPYJFKJRNLDGHLECCEEHGWZMSSMMZWAZCJXLQIMN");

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
    msg.setTimeStamp(0.9909451996136793);
    msg.setSource(52034U);
    msg.setSourceEntity(211U);
    msg.setDestination(46868U);
    msg.setDestinationEntity(236U);
    msg.type = 48U;
    msg.op = 182U;
    msg.request_id = 28843U;
    msg.plan_id.assign("ZDYQNMDFIKCLPMUTFDLMOHOGUDF");
    IMC::RestartSystem tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MMFCOVZBXAUQWUZNMPVHMLEWDVCKPGEPPSFIGVBDVSGXRWXEZUKJIHURYACTGJHXOYPEEHQOLMRFRDYWGJKPLOMDGJVNWHFMQNLSZYJBXVCZHKLFNCIXFFOABTRTHQZWKTYVWHHEGJMTYGYUQLONHFRQRZBAGTPTCZKIKTXPYQDEXSDADMNSNQYOWELLJ");

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
    msg.setTimeStamp(0.24218029701757016);
    msg.setSource(2823U);
    msg.setSourceEntity(146U);
    msg.setDestination(42777U);
    msg.setDestinationEntity(197U);
    msg.type = 19U;
    msg.op = 59U;
    msg.request_id = 64039U;
    msg.plan_id.assign("MMYIEPEYSDTUPSFCHOSWFLKYCYABMIDWGHDRDZ");
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 195U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CBOEPBHRUREWSXYGPSUBGAUOSFOZQVTQIXZFLHAIITUTPTIXELRYBFVAFDUQYVYYOHDVIHDELNOLFULABGEFUMWXQGCRNWQBVWAWKJWXJGKQAHXAKKQYJPXSUJZLMEKZPAMDPCTHQNNICOVYMPMVRJRDTPZZJLHJDRSHKCIWNZNSDFCMMBSHEPBTMWRXHYMGCTBA");

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
    msg.setTimeStamp(0.7486797149725601);
    msg.setSource(44162U);
    msg.setSourceEntity(173U);
    msg.setDestination(6882U);
    msg.setDestinationEntity(1U);
    msg.plan_count = 41726U;
    msg.plan_size = 765573767U;
    msg.change_time = 0.8505029625715823;
    msg.change_sid = 37058U;
    msg.change_sname.assign("HXJEKKURTEHAZKKLPIPFXISYVZQMQVZNUYPCKBBEQDZOFFWQDFUTKBTBEPBEFOSMGAHFGQXPLNBUNWGEDCMFAOJGFWPYESQESRYDDTXDUKRBGHHHWRCOMLZZHJMJONYITIVUARNNOLALVGGLLUBNKLGQJVCYAQAYAHJWPUBYKWJRFTVXTISYTTWKICSPCOCDAXVZAGFEIPTMJWNLVMGPZVWLIRNIIDCZRSSROCSQDMX");
    const char tmp_msg_0[] = {-20, 101, 45, -110, -38, -27, -99, 17, 70, 40, -40, 37, -117, 22, 14, 112, -102, 57, -8, -51, 21, 50, 30, -1, 105, 61, 25, -45, -97, 35, -102, -89, -124, 59, 116, -40, 122, -115, -76, 124, 99, -79, 47, -80, -80, -123, -58, -100, -56, 3, 48, -72, 95, 24, -107, 80, 42, 13, -20, -126, -18, -80, -39, 69, -108, 25, -6, -2, -10, -105, 91, 43, 68, -40, 25, -114, 123, 75, -33, -91, 71, -48, 19, 93, 93, -96, -108, 105, -15, 53, -95, -27, 11, -28, 123, 13, -111, -38, 1, 68, -123, 8, -50, -102, 92, 80, -105, 99, -26, 11, -73, 88, 50, -21, 12, -7, -18, 59, 96, -67, 109, -65, 80, -34, 46, -113, 108, -63, -41, 108, 33, -103, -36, -68, -4, -66, 25, 0, -121, -90, 4, -101, -99, -25, 117, 100, 35, -73, -92, 18, 95, -85, -41, 53, 93, 46, -110, -19, 99, 62, 16, -20, -116, -124, -16, 98, -85, 69, 118, -82, -51, 83, 8};
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
    msg.setTimeStamp(0.3224986227024441);
    msg.setSource(55914U);
    msg.setSourceEntity(156U);
    msg.setDestination(48181U);
    msg.setDestinationEntity(42U);
    msg.plan_count = 61808U;
    msg.plan_size = 2580990U;
    msg.change_time = 0.6665287158953751;
    msg.change_sid = 61076U;
    msg.change_sname.assign("FIWADLPCIVWHBHFOOJBHSMHCLVPSKMJYRQXFMIXDPUIVTXCTKHYPJZSPLRVZKAMXOZEYSKBVBZFEXSFWJVNXLQTPCGFRBMGQGDBAQTYSILZQOPZDAYILWXHNXXQCNJCZUDWZEMFEWFVOCEGNDUJJRUCGGAFITAGEHPZHVTAPBJUSXOSYK");
    const char tmp_msg_0[] = {-28, -59, 81, -42, 14, 118, -118, 27, 55, 2, 0, -119, 105, -71, -101, -69, -35, -2, 113, 38, 4, -36, -28, 85, 119, 101, 110, -11, -93, -50, -72, 35, 74, -20, 98, 124, 30, 118, -17, -119, 43, -7, 53, 33, -44, -64, 13, 99, -124, 53, -106, -85, -27, -12, 117, -80, -66, 99, 4, 13, 55, 57, 16, 11, -34, 76, 63, 29, -18, -113, -50, 121, 111, -64, -24, 58, -72, 126, 56, -117, 57, 47, 7, 56, 76, -91, -21, -28, 26, -63, -43, -39, 81, 3, -79, -5, 39, 51, -76, 76, 92, -76, -112, -119, 99, 119, 46, -94, 37, -67, -86};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("GIIFFZOWLHEEXWXUTNSEJUIDGJVZMRBHISYTUSOWTUMWBPMPESDVAUJLTJYKNLZQKKUNABKNYCHKOKQXPVATDJTVAAODDIAMIIQCXGRFVPZZVKFFEEJGYCMMITHHDXSXRZHEUYNLDISEBWOFOMQXSSNCLQRMBRKWOWLMFKBLGVNXHYNKTPVWLGCRFNHFCGZAUPYLRDTJHCYQCQUEQUEOGDZJGBAJRICQPXSAZVWSONRBRZTYYLDPPMJWB");
    tmp_msg_1.plan_size = 32239U;
    tmp_msg_1.change_time = 0.7292046721412133;
    tmp_msg_1.change_sid = 34809U;
    tmp_msg_1.change_sname.assign("SFPSBZKJAYNLAAYSTUGWDTCGJDEKKCRHZEMFTFHIITDGVVOYCYYFCGRKVRDKSQOGARBHHEDNNRKHZPXIAXBSTNQVDFKSWPMOSMQFQHPJGTPMZABXWOWIENSOGQA");
    const char tmp_tmp_msg_1_0[] = {-37, -61, 42, 90, -62, -108, -1, 24, 6, 53, -65, -126, -69, -32, -69, -32, -114, -36, -32, 92, 17, -55, 46, 111, 27, -106, 68, -49, 113, -20, -118, 40, 63, -20, 115, 5, 11, -63, -10, -127, -5, -18, 113, -42, -106, 1, 6, -92, -62, -54, -48, 104, -54, 85, 97, 10, -20, -36, -53, -73, -71, 76, -115, -80, 49, 114, -67, 19, -72, 49, -44, -94, -96, -47, -102, 79, -56, -38, 109, 47, -116, 61, 113, -115, -82, 82, 105, -12, -58, -115, -117, 36, 119, 90, -88, 117, -57, -127, -23, -81, -76, 28, 2, -29, -64, 115, 20, 95, 37, 83, -72, -17, 26, -18, -120, -87, 77, 20, 88, -125, -123, -91, 110, -5, -62, -63, -55, -24, 1, -113, -87, -85, 93, 108, 126, 24, -123, -11, -18, -125, -88, -92, 32};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.29449638129577205);
    msg.setSource(26948U);
    msg.setSourceEntity(158U);
    msg.setDestination(50552U);
    msg.setDestinationEntity(91U);
    msg.plan_count = 43882U;
    msg.plan_size = 1120209536U;
    msg.change_time = 0.1454578067104697;
    msg.change_sid = 56605U;
    msg.change_sname.assign("DNHKKFPUSVCSGJHHXWDCAIRHUYIMWXDQMCWDUUUCZSPMZVERSCJATRWMLBEPUKVGATYDGEUIAFSSBOZLZPXQHVYWOYXBISBKCVXPFPQPVJXURRTTVTOFBPQKGTTGLDXPJTYWCLGGARWNIXWCZHJKOQOXFSWOMIDQETHYVUWEMYBYFJGOLYIEMFSNFZBLNVENRLOHINBONARUKBARTDKGZNMQSBNEACJZMNAAIJELMOXDHHLJKQ");
    const char tmp_msg_0[] = {51, -19, 78, 39, 15, 123, -52, -38, 114, 54, 84, 13, -38, -93, -61, 26, 45, 96, 37, -44, 18, -17, 44, -24, -119, -76, -101, 105, -67, 17, 67, -36, -125, -121, 55, -19, -99, -122, 81, -78, 68, 90, 57, 68, 13, -85, -92, -125, -74, 21, -54, 13, -113, 112, -38, 43, 52, 74, 29, -89, -61, 32, 74, 12, -95, -45, 80, 9, 52, 54, 122, 31, 41, 86, 7, 28, -108, -21, -70, -122, 16, 26, 108, 84, -74, 40, 33, -62, -90, -91, 86, 17, -80, -117, 106, 88, -65, -84, 108, -8, -21, -3, -31, -89, 21, 59, -65, 27, -94, -92, 67, 1, -44, 64, -78, 64, 111, -88, 17, 63, 123, 100, -123, 92, -99, -54, 42, 77, -86, 30, -55, -117, 9, 104, 3, 47, 80, -45, 77, 52, 7, -9, -117, -54, 13, -15, -66, -93, -40, 12, -58, -6, -121, 74, 36, 51, 25, -48, -113, -108, -29, -42, -113, -19, 1, -126, 38, 45, 34, -84, -2, 49, -88, 75, 45, 85, 63, 35, 120, -83, -116, -47, -18, 56, -69, -119, 94, -60, 64, 111, 117, 116, 89, 67, -93, 49, 63, -98, -46, 34, 120, -25};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.9395553703424522);
    msg.setSource(58310U);
    msg.setSourceEntity(248U);
    msg.setDestination(49531U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("TMACLYIRSJANCZZSHVSIUUKYTFGFSTQTPGGVZSTPJWAEBEJKNMRVIJMIBHLCTKOOYMKZCQEWOAUUJWWGQZCLDKWOMZBFPOQBWFVUDNLEQNRAAOCQIANRVXHONETMLGZHATABLQGXYICLYIXVVDW");
    msg.plan_size = 24189U;
    msg.change_time = 0.6711773437794223;
    msg.change_sid = 6324U;
    msg.change_sname.assign("AXKEULYXVMSHDCTAP");
    const char tmp_msg_0[] = {-79, 52, 104, 107, -8, 54, -111, 114, 65, -61, 76, -128, -46, 67, 49, -61, 74, 106, -88, 102, 106, -9, -87, 103, 91, 101, -55, 123, 60, 11, -32, 5, 21, 104, -110, -50, -125, -13, -118, -58, -47, -45, -13, -56, 62, 0};
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
    msg.setTimeStamp(0.6957567028290818);
    msg.setSource(30226U);
    msg.setSourceEntity(57U);
    msg.setDestination(18772U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("ZXOPIZIEOLEDPQPIKCJDMBQFODWRGWXKTEIEVHANKMUIDHPOUFBZCXRXTVTNHSRKPVNEQUYUASYCNEVBHXYJQOYZGMGCZAYRCQFUQNGPFTIWQDZHLXESFATBOKPCLHRKKBTDHDJMUIBPSJMFZBYWSWGLEHXRNQRHPAZSFRWGLBVPMCLIODWLBMFUNGNETXNSVINRQSKJWAVAOTCMV");
    msg.plan_size = 34094U;
    msg.change_time = 0.8722732358059675;
    msg.change_sid = 34754U;
    msg.change_sname.assign("TYNSYKDUDOCZVSKSMTCNRSTVDJFYDHXSIADWILQHGMRBUMZYXHGKBOUWYINFSIAOWHOTHWLTRMWUQZKKOBGNPMNHAQVTGRXPXPBRRAYLZIVTBBGYOFBQEQAALFZKTUJHRWNLBNVXFKAUOVOYUVKLLMEYTPEDRUZELXPWRSUZEGDTEKHXIVENVSMEGOSEPBGQPICZHLFFJPCFXMIAGOQCAJMXNLJXICWDWGAWESDFCJJHJPQMCVJ");
    const char tmp_msg_0[] = {-29, -86, -84, -14, -5, 42, -7, -20, 113, -49, 114, -78, 102, 27, -100, 45, 49, 120, 100, -23, 46, 55, 34, 41, 121, -5, -67, -42, -41, -117, -127, 19, 106, -49, 111, -120, -55, 50, -75, -90, -53, 65, 60, -127, 94, 73, 77, -114, 99, -35, -36, -126, -68, -102, -23, -118, -67, -41, 52, -39, 0, 88, 110, 97, 72, -13, -109, 77, 114, 92, -7, -13, -48, -30, 69, 14, -121, -116, 79};
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
    msg.setTimeStamp(0.022955199030070705);
    msg.setSource(17916U);
    msg.setSourceEntity(182U);
    msg.setDestination(15100U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("ZCUGJRZXNUTOPEGKCTNKAWUHKODGXIVJVVBBQELYAUEGUIOERDXXNTLGFKDILQFBUVQHDCQESKTIAYIHFXVXELISOIATLBBWDCSEBYKD");
    msg.plan_size = 48836U;
    msg.change_time = 0.6506179382507117;
    msg.change_sid = 28800U;
    msg.change_sname.assign("BCZCRZQUZCXZFLTZFZQPE");
    const char tmp_msg_0[] = {48, -33, 56, 98, -14, -14, -101, 122, -56, 108, 54, 38, 97, -51, 120, -26, 75, 1, 104, 106, -33, -106, -34, -128, -5, -5, -102, -13, -79, -46, -64, 119, 73, 105, -113, -71, 55, 74, -69, -1, -16, -127, -66, -62, -95, -4, 37, 80, 66, 97, -35, 1, -28, -90, 1, -90, 113, -123, -111, -63, 27, -21, 20, 32, -42, -98, -15, 116, 18, -123, -39, 108, 94, -99, 20, 8, -68, 108, 46, 86, -15, -27, 124, -21, -39, -19, 90, -110, -96, 74, -51, -9, 73, -106, 124, 69, 17, 118, 49, 81, 18, -49, -127};
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
    msg.setTimeStamp(0.14960430701080685);
    msg.setSource(18346U);
    msg.setSourceEntity(68U);
    msg.setDestination(32359U);
    msg.setDestinationEntity(100U);
    msg.type = 237U;
    msg.op = 71U;
    msg.request_id = 52220U;
    msg.plan_id.assign("TYVRIBJNUNOJFBPMHZOTDVSNKWCVGCTFTLGNKFXSEOODRWMJYLAVDWRZYXKILHZOCERDRXTXPWXFUEMMMLDBLKZT");
    msg.flags = 45063U;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.7912003821493263;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SNMZPQEOWNCXUKAIWILDJRIVDYPEMIQISDKGUVZJDAOOKLNATRBVTVLJQYTTXHOLYLMGGHVRFNPYXKHOMVNSARRYFOSKCVQUTVBKMCJCTAIBFZXWHUSXDQNJCFQEBGSKSDMJHFRELN");

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
    msg.setTimeStamp(0.41794450139306083);
    msg.setSource(44538U);
    msg.setSourceEntity(31U);
    msg.setDestination(51714U);
    msg.setDestinationEntity(90U);
    msg.type = 7U;
    msg.op = 80U;
    msg.request_id = 17009U;
    msg.plan_id.assign("WXBUFBNTUHNRAITEXTSMGSVGNSEIBCRDMXQNFEJZHYQEBYCFYUEGWWWRLAIAPLJGLDQMHPLKELFZAQDQGKTBJRTYIOAWYHDDGZLBFPIOZY");
    msg.flags = 25995U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("WUAHJPZMOQFJMGITEBZARSUNGQDCZUTHBFAHEPCBQZYAANSFPPDTCJDYSMTYKOZKVIFBCBLARMUZMGKNNDHISSXQVWHKERQRUWXCVQYXYVNVLFPRKGBQZIKJSORXEDGJMDVZSHOOWVUVINTYMAJHYWEGTDWXEKLBEEBCFNYNWTUUGKDWXPBSJPFMLJJMTFXBLRWHCJLXRLONIYFOWZLOCFOXCRARQEOHGPP");
    tmp_tmp_msg_0_0.lat = 0.05526146196430137;
    tmp_tmp_msg_0_0.lon = 0.5717935561361202;
    tmp_tmp_msg_0_0.depth = 0.46198083154812364;
    tmp_tmp_msg_0_0.query_channel = 143U;
    tmp_tmp_msg_0_0.reply_channel = 180U;
    tmp_tmp_msg_0_0.transponder_delay = 195U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.5179032335129139;
    tmp_msg_0.y = 0.6183353463319601;
    tmp_msg_0.var_x = 0.9819067425900091;
    tmp_msg_0.var_y = 0.617324382259375;
    tmp_msg_0.distance = 0.7913781094545672;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NXGKZULMWCGVPKMIFXLDDYXZVXOBWMSFMBDDOCLNVJYTEMUTGSNKDCNHTEWTZOMQHOPZIOJRREXIQLHDJQNGZIGFILUQWSHGZFO");

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
    msg.setTimeStamp(0.28036434142309763);
    msg.setSource(3462U);
    msg.setSourceEntity(235U);
    msg.setDestination(312U);
    msg.setDestinationEntity(59U);
    msg.type = 56U;
    msg.op = 39U;
    msg.request_id = 46362U;
    msg.plan_id.assign("UERSDINBGQBPSTNAKIOZQESESVOJZAYVRDGSS");
    msg.flags = 28628U;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 105U;
    tmp_msg_0.eta = 53092U;
    tmp_msg_0.info.assign("XETUBRSCQIOTUAKUYCTWCGWTQWNJNUOWQGYXBZHCHGRSVSJHQUXZMMPWLLDVJMEPLFONGCYJVNQN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WRQQYFAKLDBGVSRUYTFBCEGWWAFRVHTYBGEARXHRLKSGPXJGDNMZHKYLPVWYHDOKIPTCCAZTHGTASNIKEHAGNVSXICETUQRUOTBBLLSEMNNQMIIHFQLYSVMJ");

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
    msg.setTimeStamp(0.12054260398724659);
    msg.setSource(27468U);
    msg.setSourceEntity(4U);
    msg.setDestination(12009U);
    msg.setDestinationEntity(210U);
    msg.state = 142U;
    msg.plan_id.assign("JYTIFGOJICANGLMIEDPXWLIFTZFLTMFDMPCWHQWBVDHAYRUOUKUWNXNOXIJLJYDPVVEHYGKSIQHIYOVSPKTSBQCRABQXQKOGTUBOTZAZHJCLBHNFXFQVOWEASZMUKCGWEHEWLRYANVJYCPMKRQDASNCN");
    msg.plan_eta = -1887825881;
    msg.plan_progress = 0.6530171949165315;
    msg.man_id.assign("VOCQVNOBLAETZOIBUNDXNROBOLIGVEIBBVBUWQYKJGXNAZMGBJTVAIDUQLFLICKHAVYLESZKMFJDSRQEXUDCCVOEYDRDQMSXGQNACBFDPKNFUYAMKZUGRJWLODPSGPDMINHSWOHRVESIYXHPPWKLEKAFRWZUXPPTQHKJCFTOJKGWSBTHYYLITZMCHJVPWDOLJJSWEHXZCFXVAFNMQHAQNZXHSEFTXPJUGWFRNMSAQTTYMTYCBURMRLKZP");
    msg.man_type = 46417U;
    msg.man_eta = -203465201;
    msg.last_outcome = 173U;

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
    msg.setTimeStamp(0.599413114897546);
    msg.setSource(11102U);
    msg.setSourceEntity(15U);
    msg.setDestination(43971U);
    msg.setDestinationEntity(253U);
    msg.state = 69U;
    msg.plan_id.assign("KOWZDKOWUPVURKJHSWXWQVITMBNDJIJIUYGTBYKIAVJVMBXQSMUMIESLFHKIRELTOACTUSVFMNKDFSGAHDYSYTLEYHOXDBCSGPYQGSRBJLCTVUWLUZMOQEVQRKHAYQRZNWWDJFNZFRMTDZHPZCDZMXIGLEOZABWSMUAJVYXGYWLELXHBCDWRFJBQ");
    msg.plan_eta = -2081786471;
    msg.plan_progress = 0.022716902783618598;
    msg.man_id.assign("DRTCCSHQGQGGQHODISHTJVZCLNGUYDLYUEJKOPAPIRZQNAFWUFCVZWHUSYTJL");
    msg.man_type = 17171U;
    msg.man_eta = 1088657934;
    msg.last_outcome = 7U;

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
    msg.setTimeStamp(0.12623757650994394);
    msg.setSource(18270U);
    msg.setSourceEntity(81U);
    msg.setDestination(29849U);
    msg.setDestinationEntity(112U);
    msg.state = 190U;
    msg.plan_id.assign("BIRJOZDDPMPLMCPYKAVOQEQTVBYEFOMKMKXXMOYXPOHXNJXXGGYLUIJDGENNWKEWTQGUNZSZDIFPCCYYEDZKUVNLZYZXZTRBIRFBVSCUPWCHVSFLIISHPCABUDHYIIAEBWAEGJPRJNVSQUDYMJWNEGCGYPFQXXRNKJAPHNWRHWJQDWFTGEKATRLHOOLDOHAC");
    msg.plan_eta = -749121851;
    msg.plan_progress = 0.630941816496842;
    msg.man_id.assign("CRMYVXILOQCLNMPNHXQLAFJKGGLFGXDHPFTMWVGYPUPBKNMGENVRSQOHDJREUBBYMAKOSYHPOHWXDXZIWZCSKPZYKPAFMITYUPVSWQCMNSNTTJFPINYWRAJOGPBIYSJKQYLNKIBQNTRAUQLECMBDJHUEWHRDBEFVZZGRJSDCXJDIUJZEUFZFTEBZUTANDWLHV");
    msg.man_type = 15542U;
    msg.man_eta = -1451609733;
    msg.last_outcome = 212U;

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
    msg.setTimeStamp(0.7073063933440388);
    msg.setSource(1116U);
    msg.setSourceEntity(232U);
    msg.setDestination(43832U);
    msg.setDestinationEntity(126U);
    msg.name.assign("EDCUMIQXWVYXHGAPKFKERLAFSMYGVETYCPHOJXQVBHJKTLAPIFGUAPBMVNYFHSLOGXWAMUNHINZHPSVLIBFFCJEWFDXNICMOSMXE");
    msg.value.assign("UBLFMDAYKFXINJMEGJUUISDSUFWYMPGHTUJBSAAFGYOJZXPWBIFLNLOYCKTDISKLZ");
    msg.type = 36U;
    msg.access = 208U;

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
    msg.setTimeStamp(0.28080917153137996);
    msg.setSource(54301U);
    msg.setSourceEntity(211U);
    msg.setDestination(42244U);
    msg.setDestinationEntity(111U);
    msg.name.assign("WSWVQMOEHYRVQOMUWZZYUHYRVSZIRCOGKTEBASPFZWRVEUKPEDBNYXNXNVJOXRVJNIBUXJOKPGIVYJUGELPFQSPGIXLFDLLRFACQTOOPVGQDGEALWMT");
    msg.value.assign("MLWWPDNEGLLULGXXZKFFXIOLIXHCSMCFOYUOKEKKJBVBUIGVHEWIINZOTKUUQZWVEGOBGWJUTSOAIPFNIRYOSGPKCKNYJZQSWXHDTIHVZBEADMPDYYNKQQALXZMTVVYGHJPSYQSTPOME");
    msg.type = 1U;
    msg.access = 159U;

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
    msg.setTimeStamp(0.530236401900333);
    msg.setSource(9475U);
    msg.setSourceEntity(236U);
    msg.setDestination(39710U);
    msg.setDestinationEntity(132U);
    msg.name.assign("FGJHRQBEKEMJLCKZPNKTRJYEHOXZSFUCEWSWATJVLWMGXGOHEDRHTYOATCFRPGVWTEJRUYZIVRRWAILFSPJHXHFWDKCSIBUCSHYPQNAUQNZKCLWC");
    msg.value.assign("GFQQGLUJDWKVLPEMJHQQMXPSWFQQTRLOGLFTLUEDXWVTYCVSTDGOERNGXTDENMQIUABYBHLOXXJIBDABHTUMCMHAVEBXUIEFFAWVL");
    msg.type = 146U;
    msg.access = 135U;

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
    msg.setTimeStamp(0.409927408725859);
    msg.setSource(10987U);
    msg.setSourceEntity(22U);
    msg.setDestination(60044U);
    msg.setDestinationEntity(13U);
    msg.cmd = 61U;
    msg.op = 105U;
    msg.plan_id.assign("RKLBCVCEJRBSDNLAWTCUPZQNTCDVJFQJZFUIXRSSHBRGICYDDJFFCPEEEOBFNBYKJLMDLJGHQWPXHQIFGDWTZLIBQAWGVJWQRCYPSHZDABBSAOEZTGGVBYMDNUUQ");
    msg.params.assign("CZTSDIEVDLYYUUVGUERFSJDUYRSKWTWINFYKPXZNWBXSZVUOGWRTQWNASXJZFMIDNFGJHZHXLCGFHMBOOCLEPAOKMGMHJ");

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
    msg.setTimeStamp(0.08801050329595228);
    msg.setSource(20009U);
    msg.setSourceEntity(114U);
    msg.setDestination(14716U);
    msg.setDestinationEntity(19U);
    msg.cmd = 131U;
    msg.op = 235U;
    msg.plan_id.assign("KYXFVQVCBIQNXCBKDJGBKNEJRGKGEVOYMHIJBERAWXJWANLRTBAZWGDFPPXRHRKCYAVHVZSHIYFGVWXYRYC");
    msg.params.assign("SEVMOSBJHEZHCMYDZW");

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
    msg.setTimeStamp(0.6247622189620686);
    msg.setSource(42793U);
    msg.setSourceEntity(110U);
    msg.setDestination(55970U);
    msg.setDestinationEntity(84U);
    msg.cmd = 243U;
    msg.op = 234U;
    msg.plan_id.assign("GJTHMNYMUFVIOOGXRNSIGEJHDWTHWKFYRIKACYKVYMAZULPPWXVVMBHYWDFLNMEAQXULRXQPFNWMOJBDTORSMBTJUOCATHDFBELAYXGSWLYVOKXQFRHVFHOOESKASUIUURJWZIZXBUCDBQOZLRPJFSJTEXINT");
    msg.params.assign("EKLPCXEIOHVERRSTKQJXVGPHKUGTSSMOCSBGSDDAQYVLGRNZYSTXNI");

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
    msg.setTimeStamp(0.5526492036980329);
    msg.setSource(42424U);
    msg.setSourceEntity(241U);
    msg.setDestination(42824U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("GQBQKASBWASHKUSUV");
    msg.op = 250U;
    msg.lat = 0.875226961981975;
    msg.lon = 0.2835867152175001;
    msg.height = 0.9146418269357813;
    msg.x = 0.6727840130041292;
    msg.y = 0.3786043312667666;
    msg.z = 0.962224944009218;
    msg.phi = 0.9829368283087345;
    msg.theta = 0.1372515692184334;
    msg.psi = 0.074801190561963;
    msg.vx = 0.8391630440251753;
    msg.vy = 0.6063397944952413;
    msg.vz = 0.1319600591722535;
    msg.p = 0.7414206265207527;
    msg.q = 0.029917810649566;
    msg.r = 0.3776837601721781;
    msg.svx = 0.9305774556305931;
    msg.svy = 0.12707612751726372;
    msg.svz = 0.12943446971830996;

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
    msg.setTimeStamp(0.6733189662921771);
    msg.setSource(43U);
    msg.setSourceEntity(22U);
    msg.setDestination(61379U);
    msg.setDestinationEntity(31U);
    msg.group_name.assign("ANXFJGSDAFVCODZERVUFPOTBLYJYUIHWXTKRVVSMIHPQIUPYTHBBTPURIZYRUWUMAMQKIMJBSXROPWGNUEYILCZDRRYCSCWPQSVXXDCBFLJARGELVOKJXWMMTXWHJNUOCFZOKKSNENZFHGIHWISNFPHYQEOAEUBBGOAUCGERLXMTNFBMOVTTXLQIYDQHWCLSAFPT");
    msg.op = 235U;
    msg.lat = 0.38129454832945464;
    msg.lon = 0.03918463735308131;
    msg.height = 0.037408484074265336;
    msg.x = 0.949204330450896;
    msg.y = 0.5325736003943697;
    msg.z = 0.8820328423268609;
    msg.phi = 0.13073768124469853;
    msg.theta = 0.17102658990258945;
    msg.psi = 0.5745795121979016;
    msg.vx = 0.7134276015882357;
    msg.vy = 0.8167848035792518;
    msg.vz = 0.41648852433827555;
    msg.p = 0.05261249061167139;
    msg.q = 0.2635307780306947;
    msg.r = 0.49650331305692363;
    msg.svx = 0.8813946703440863;
    msg.svy = 0.7266511447285143;
    msg.svz = 0.7953892922581512;

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
    msg.setTimeStamp(0.6446539481398276);
    msg.setSource(60391U);
    msg.setSourceEntity(220U);
    msg.setDestination(34108U);
    msg.setDestinationEntity(140U);
    msg.group_name.assign("XLKTENJETBMJRGZNPM");
    msg.op = 235U;
    msg.lat = 0.3277889252675781;
    msg.lon = 0.5398236659177751;
    msg.height = 0.6460637417822532;
    msg.x = 0.5795803480736906;
    msg.y = 0.46581807836713096;
    msg.z = 0.11289819765256048;
    msg.phi = 0.726849762279523;
    msg.theta = 0.6145321466552149;
    msg.psi = 0.948176093233712;
    msg.vx = 0.5926716749520288;
    msg.vy = 0.8249059295718927;
    msg.vz = 0.7854828052944016;
    msg.p = 0.3963402371929322;
    msg.q = 0.9883398981390255;
    msg.r = 0.831090023703183;
    msg.svx = 0.18795873309741828;
    msg.svy = 0.43670006870420064;
    msg.svz = 0.6478391553276989;

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
    msg.setTimeStamp(0.9826378902904676);
    msg.setSource(38455U);
    msg.setSourceEntity(49U);
    msg.setDestination(36927U);
    msg.setDestinationEntity(69U);
    msg.plan_id.assign("XSUWHIRKXFGKAUJIZLQEOHJEBLUIIIYAZIDZKWEMQXMGSEDOWPXMTVQHYGOXAORYEMQOBFUECEGOAYHCGSPZTIWSVNJNOBZXUNYEUNNFAWNDUPPIFFRLTVJVVGHGBQDBSJTADTIXMGXBLR");
    msg.type = 16U;
    msg.properties = 62U;
    msg.durations.assign("OACIJCHBIGLJXRYTNOEPPJDIWBXFUKBNARQTGVOSATOMADLBVYWGCLJSBMHHRXDUEUFOZQXRXDGEVXGPWFKNCSCWNRANAKHZCTXPKGHTQK");
    msg.distances.assign("JJNPCQDHLPBZRNEPEJXWEMUYQHNEUWUFKSKXGWYVNQTFGHHYLEPTJVKOCZEDMDIOPOFBSZHGWDUFMOZUDCBYGTKZEBXMJAHKHXXXOXAWTLWVIZWICBPUDNBCPRZLODHPIJBG");
    msg.actions.assign("TTKXMOBRAMSPCVVERVIIDOGECUWXPIIXNLKNHAFWWGRLAFJDZARYAZWYYNBGEKVCDFHIIMKSBNRSTYEUSEMQXJIENSVWPVTJQIGZPUYFOHAMDJYSTBETBUAUUGUJQKELXMMEHSFQFNRTWYWSDJXZWDMQKEXFCXHCPKVRVLCGHSNOBFVAHKOTCIBQCPBNAHLZVXZNLLZYGB");
    msg.fuel.assign("RLIRXGPCPZJAHLGNSMIAGEHBUZNCMZFUBJUXRKBDGTWVGZMLMNNLNXMASOMPSCHWWKBENRJUKIGTXJMOKQOKKOHIGCEOFIJCVQOOEUYXSXSYWERFROOVQYPQFA");

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
    msg.setTimeStamp(0.2897690590894264);
    msg.setSource(7378U);
    msg.setSourceEntity(241U);
    msg.setDestination(63032U);
    msg.setDestinationEntity(142U);
    msg.plan_id.assign("GMSSWVVIWFIERATRANCGPVLIVCMAZFXQUYEKPDSRKFBXIZBQGYXQAITSOTPCLKLPWHLTTIPOXJENCGNQRFPYWDGUFBDJQQIJXIGNDRMO");
    msg.type = 8U;
    msg.properties = 185U;
    msg.durations.assign("TGPNIJSKKWUJOSMZMQKDHWVGBWSPBXCMYKTLH");
    msg.distances.assign("WFKVOIWHQGQGQBCSPTCLJWCASNJSMATDVVEGCZVWHZPIQPSHUGMTNFWLEWSCJJJBRFQJRLHZKTKXJBNYMFUUMXEIBHKJROSRGYAXEDDNBAYYRZPWPXADAKVNYPBIDZDWJBCEVPLNGHITWQUHVDUXXRIHZOIYXMZOAPZCOOKERUQKXFSLXRYLFLSRBIMGIODVYM");
    msg.actions.assign("NJTMKGEKATPPZWCWGNHGQBFBGDPZWUZECBVFYICPMJYVRSNXKHWYGVQURRJSTYFXBVADUDLJGOAETKUVUAZZGOQQSVXZTSPULXHWDFGSFKOFBUBISZIHKC");
    msg.fuel.assign("HQYCUHSAHALOJWJXAWURGAGVPVGVRZLYDYUYLGZTNUXTRQJADQRXCQUSMCPAIIMQOIPNMMDBAFHVGGWYIKWAKROPKRWESZNYWMVHNUAOZFELUEOUMOGTLK");

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
    msg.setTimeStamp(0.3476299220607696);
    msg.setSource(18209U);
    msg.setSourceEntity(187U);
    msg.setDestination(26669U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("MVQNFTKQRNDFNBVIOZEEXQHDNEHZHJKXKPMGBVILNTRUNLOHUAOWJXJVIJLCFBRKSWIJHUFRLZMGFZPEJADITZWFCOASHEQYSCVIFXLDASCFTTPKCBHUNAREADPGQQMOKLDFSQOXXFOGTYMDADYLISUDVVUCYWKZQGBXLCYOMTJWOUJEWKHNBCSBMTUBGREZPRRMMCPJYZWVZSJWXERKXGAPGILLPXDUYVAGPQIHYIOQGUCYSRHESV");
    msg.type = 86U;
    msg.properties = 171U;
    msg.durations.assign("TPQNWBQCIFOYKLFVMQIKXRJPJXDDZSUGODPBIOBHZZYXAQUISJQJDKOJKCBCNMYEEMLMYTXZJZTSCYNOKGHQBNPCSTJWZVMWUZQYLIPXPTLSWXCCVLLDFLBKVHNHEFFRFAUURYTBYEMOEJWHJCPZDSXSWMIKNFPNQTVAGUHEDWVVWYTCXBEAULWSHBMPZRMFXTBEAJDLEKLNRAKIUOARHIIARNCNDGGOWQRFUTVUGHRKIZDYMSGGQSVEV");
    msg.distances.assign("AVIKURZTHXWEHUZMXWALNEJYUQDDTSAFNLFJJOKPFDBAMTUSKHHCVARWNIHICSUMKCSQGGHZRBRNF");
    msg.actions.assign("HQFAUWIQYGYBENETGHVDEAVTRCAVUTEESGOYTJIPZIUXLPLEGVQZJBURIWZALRMHVUPGTSRYPNPEWCAWAMHZIOMGDZMQKSSWVXSVZCVDUWCHZWJTYTLVYFTCXPRYCLDRPKGIHOKTSLIMIUOXDQNXCN");
    msg.fuel.assign("HMJULAFGBKKC");

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
    msg.setTimeStamp(0.2784434997523574);
    msg.setSource(53862U);
    msg.setSourceEntity(9U);
    msg.setDestination(50723U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.7486923395819002;
    msg.lon = 0.231801670069119;
    msg.depth = 0.47679869089969285;
    msg.roll = 0.7094655033731663;
    msg.pitch = 0.7717416705615336;
    msg.yaw = 0.7252168918951218;
    msg.rcp_time = 0.4855468144549575;
    msg.sid.assign("CPGEXKLFJNGUNXAQTNEHDPQANLTUXTQIMKORSVMRDYFVUSPFIRTNOUMGUZUYOVSVIGDVCDPKTYDZTC");
    msg.s_type = 69U;

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
    msg.setTimeStamp(0.7835649149657267);
    msg.setSource(5686U);
    msg.setSourceEntity(236U);
    msg.setDestination(35859U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.9447117265510474;
    msg.lon = 0.15249242381420813;
    msg.depth = 0.42185980481150487;
    msg.roll = 0.9733269200275816;
    msg.pitch = 0.6884305923965667;
    msg.yaw = 0.9567951192423684;
    msg.rcp_time = 0.4154222012294587;
    msg.sid.assign("TSLHSTHEZFZNGHWSZAFMLQABBTNGZZEBOQQVNULPWXPDLHIVFJCQBDAGSFHCUEGKNDVUUNFRNQFMPSIKEZNJXOUQYKWIHYJUYAFH");
    msg.s_type = 103U;

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
    msg.setTimeStamp(0.07212183515493553);
    msg.setSource(2094U);
    msg.setSourceEntity(184U);
    msg.setDestination(21946U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.33049322545137727;
    msg.lon = 0.2809059707314556;
    msg.depth = 0.9869647430002406;
    msg.roll = 0.33913439353076136;
    msg.pitch = 0.7181779399747813;
    msg.yaw = 0.4443959254852916;
    msg.rcp_time = 0.5865367834714836;
    msg.sid.assign("VVXXZJWBDWOHQBEIOPISIOCZJQFQGZDTGJXFOFIFSRWKVDUHHMPJSXPNWBQQHVOIDYEGYCPCJLAUUPVTHVOSWIAHKNQLWYRLKVJVVBFRMBEWGYQFOTNBHLAPXHACLYNXMNCWGZEBSKRXMIZFSFYMNRKKKCTMIAOE");
    msg.s_type = 213U;

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
    msg.setTimeStamp(0.13368550360386877);
    msg.setSource(20648U);
    msg.setSourceEntity(109U);
    msg.setDestination(12525U);
    msg.setDestinationEntity(172U);
    msg.id.assign("ERTSEOMAHHMAAVTGMSTVXCXKSJVOLOITEZXFWJYWMKRGFZSZVWRIPUSWNROEIICWDOWKFBVDIZHPWXGUADLFSUUVUYSJISCEXJYYVYZMKEOCFVJJBFIOJBQBNCXEZBQBPQOPGTMDAIHZWUDEXXHTUUZBZPHLRLBFIZLYGAYBHT");
    msg.sensor_class.assign("PBDHKYFIHNJFNNRSVVOXKROBGPTIEMHTILJQWJSQMXEWIFQWWPMCLMULLHJGWVUYJOTPSKNEJCDACXFECKUYGGISRBTBQOYKABRENVSCDZRIQHQPBHKXVNMXRJVNXPAHJAXCREPZLIDFSDVQYHNFAFIBBVCCSGZLAEQAGGPNORMFGLMMFXTLJZBKZGUMOSEZKULZWVZUSCTZVWYZWWQKT");
    msg.lat = 0.7966979417968553;
    msg.lon = 0.36769729986561517;
    msg.alt = 0.3179645609248547;
    msg.heading = 0.959998643129778;
    msg.data.assign("PNSXKOQEWRUIOGEQTUDRDLBLDSNIMMOLHYRQCBHDLCIEQWRXXBHPMBTVXRRBOSWPPEACDDTOBMUNWGCSVYJJFFJWKJMUAUNNLLKIZAUNFVJHLLCXQPSNGGPIUOKVKETHPXBLFHIARKSDCVQOMKURQPDBPZTYZUFQECRJZSWWOXJSZWFZDFYTXTBFVZOIRGQQTCTMAIHYFWAJKASZGGAHMIKPGXGVVWYZZELF");

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
    msg.setTimeStamp(0.09390960830697148);
    msg.setSource(27468U);
    msg.setSourceEntity(126U);
    msg.setDestination(23056U);
    msg.setDestinationEntity(198U);
    msg.id.assign("WHGCYACDTXFSJRYNGJOOQCIUAUDYFFPXSFTYBFENQZMXVKZWVMIHBGWRWEMLPUFNITBBOSPLVLZZTZGBKISTWLBZRXCVGKOYAPEXWNWZZSRRUVNTUDMTBCLNHLHUPFRGISFIPVHQTOZJEDVHAEMJKBQYYGYOJBCTKSOYQHXEVMWCJAN");
    msg.sensor_class.assign("QNCGCXQTOQZFETWDGDISRNMJJKQPRSSLGDCWVOSDJRDAPIEHFC");
    msg.lat = 0.04337781630966642;
    msg.lon = 0.8645991615671766;
    msg.alt = 0.7289227245193626;
    msg.heading = 0.06977423272541239;
    msg.data.assign("TOCFJDBIBMXJGOSTPYALXPGQYDNRMYANLKFGCCJRMTWQWDKEZRLRJYPAWMVELBWFCANSFGDNDZQZOSBPXWXVUIUSIHPDMUOIOXPMMRAEGGKJQJAMHRLFJSVRRUE");

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
    msg.setTimeStamp(0.20887755123082208);
    msg.setSource(21572U);
    msg.setSourceEntity(137U);
    msg.setDestination(41660U);
    msg.setDestinationEntity(238U);
    msg.id.assign("QTXKWOLVCSZCROUZGMFQPTCELREYMAHFZJBPFRTXZSROKDWKMDBUAHYRPHCAWHFQHMPYBQXBFOTCPCVALCDYMWPBKAQYSZGVHWCUIVNVIITFLEMUZIWJJNEKUNZGJXOVDJKYUCSBQGZGDMNVANEARYMSHRIXWSNINGGUWSCLFYLAQEIDWPGQKZJJXGMVUVPFKLBRLINTDWJGKAZNOLPSHLRPXETVISYHHYTEBOUQMNJFXFDKXOARDIBQOBJU");
    msg.sensor_class.assign("PJHBVPWZJTYQCSGQXTPFIFRWMXVUKFVJSWNLDOEKQWYCXJWFUGMDVEKXPPJTCYCGJLASRXORVDYCLVBQAGYU");
    msg.lat = 0.23586596621264455;
    msg.lon = 0.8359029678868743;
    msg.alt = 0.7411547120059625;
    msg.heading = 0.18392470055210797;
    msg.data.assign("SJQXHOSXRNJDR");

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
    msg.setTimeStamp(0.6235956238305937);
    msg.setSource(2046U);
    msg.setSourceEntity(37U);
    msg.setDestination(119U);
    msg.setDestinationEntity(214U);
    msg.id.assign("YCJYRUMSXFBCLBOWQIHNSZRGOAOGABWUMRNAKDYHTVVVSDVEZFRSZHVMYEPGHGKGKZMQZBISUMXTQAFCQQJBYADLHEDNKWXGZWUECWFPSHGMJRHIZSXQPQPF");

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
    msg.setTimeStamp(0.2631829518108928);
    msg.setSource(65517U);
    msg.setSourceEntity(107U);
    msg.setDestination(48656U);
    msg.setDestinationEntity(45U);
    msg.id.assign("AJRZVDZBHFPOTYAQGYJTQTHSWOUHFPTVCCNIEILHAKXFXGQSMNWABDQGMZTLKEXWUSGEMNTNIVISUELQLDXGJTOUYLZYFEVRRMQNPAVVMLZEYZXDUFHYRWMAYKMLUFQPOGODLPMAWJRKHHOZWFKKJZIHUXSZDXIDEUAVPHXCVBNBEOVORGNNCBNCXFEQBWECSYTDUGSXWWBSPLIYIFPOUKKRSKJCJRP");

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
    msg.setTimeStamp(0.6213432520084357);
    msg.setSource(37469U);
    msg.setSourceEntity(232U);
    msg.setDestination(40509U);
    msg.setDestinationEntity(54U);
    msg.id.assign("BVLGSKIBVPPCWZLJAGPTZRZRQFCDIXKOMSQJQWRSIVIHGASYWVFTYUVMRWJIBTNZRHL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TBFTOPCOCGBNWPJMVXOXFPHYLYDUYGCTSZKEKVGLQBYMIQREALYB");
    tmp_msg_0.feature_type = 42U;
    tmp_msg_0.rgb_red = 79U;
    tmp_msg_0.rgb_green = 209U;
    tmp_msg_0.rgb_blue = 214U;
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
    msg.setTimeStamp(0.3295162589643176);
    msg.setSource(15605U);
    msg.setSourceEntity(251U);
    msg.setDestination(22067U);
    msg.setDestinationEntity(34U);
    msg.id.assign("OZJLUITRKWNGFIPYHMUTHCKPQTQLSQSJLXN");
    msg.feature_type = 243U;
    msg.rgb_red = 77U;
    msg.rgb_green = 10U;
    msg.rgb_blue = 129U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.87735647196937;
    tmp_msg_0.lon = 0.05547265249126665;
    tmp_msg_0.alt = 0.07469662116225784;
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
    msg.setTimeStamp(0.7200905228320418);
    msg.setSource(21723U);
    msg.setSourceEntity(9U);
    msg.setDestination(9105U);
    msg.setDestinationEntity(114U);
    msg.id.assign("OJSAIHTIDBADMOESNBHSXPADVOTJIXNEBXICKHTEYDXKHIZGPRAXCCMHAKJHDMYEMFJQJQDRHULGVWJPBLHLFFOPURJWGNMRVMMTFKMYNEZVJHFCUUBYUPEOGGAAYQDOWTTUJQDUFTIZSHNWPRNWRTZOWEXFBBMWQOVPRLCLZKTXVCGRIQWNPNBFQCEITXYF");
    msg.feature_type = 208U;
    msg.rgb_red = 212U;
    msg.rgb_green = 218U;
    msg.rgb_blue = 18U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8968458610592159;
    tmp_msg_0.lon = 0.19762293307128898;
    tmp_msg_0.alt = 0.6591151347767008;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8005955356309963);
    msg.setSource(64069U);
    msg.setSourceEntity(54U);
    msg.setDestination(63987U);
    msg.setDestinationEntity(99U);
    msg.id.assign("HELOKKEXXZXLQVIQZRSXQUASTRLDYDLBT");
    msg.feature_type = 114U;
    msg.rgb_red = 214U;
    msg.rgb_green = 92U;
    msg.rgb_blue = 170U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.1297201125952463;
    tmp_msg_0.lon = 0.0629031079864828;
    tmp_msg_0.alt = 0.8962418588628651;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.002819632344273182);
    msg.setSource(29094U);
    msg.setSourceEntity(171U);
    msg.setDestination(20290U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.359458955242556;
    msg.lon = 0.5768239451718812;
    msg.alt = 0.5879815729941491;

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
    msg.setTimeStamp(0.7377068406315708);
    msg.setSource(28544U);
    msg.setSourceEntity(132U);
    msg.setDestination(11251U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.18679218681846355;
    msg.lon = 0.7580857371522296;
    msg.alt = 0.28360032345665553;

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
    msg.setTimeStamp(0.7409774709580635);
    msg.setSource(20090U);
    msg.setSourceEntity(219U);
    msg.setDestination(10630U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.6475405600386939;
    msg.lon = 0.5433583228760149;
    msg.alt = 0.5528853641427381;

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
    msg.setTimeStamp(0.3951399861180903);
    msg.setSource(59360U);
    msg.setSourceEntity(53U);
    msg.setDestination(48855U);
    msg.setDestinationEntity(4U);
    msg.type = 52U;
    msg.id.assign("NPCDBOHHMIOIXEMJYALVTYFNNYQMZYQVZZADQCPWQRZCNBTOCHDYEZEURRUVLXKLXLIUKRVGICGHKMTZZETJABMRZUFHJWPMBMJPKGEGBTTIT");
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("ELLEQLPHNNJUDQWCFOXUZOAXBFGMCXRJSMCDTFQEEVFODHPHNKBIRSAFUBKGDSJYUUXVJPYADYAQMTKEEPCQEBIZSZE");
    tmp_msg_0.op = 118U;
    tmp_msg_0.sched_time = 0.8022345515170745;
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
    msg.setTimeStamp(0.8497535852011062);
    msg.setSource(20452U);
    msg.setSourceEntity(107U);
    msg.setDestination(37206U);
    msg.setDestinationEntity(235U);
    msg.type = 134U;
    msg.id.assign("BOJADKSRRZMRBSFDFDUKGNIKXSHOSBNTVMLDFWGRNJCUBHQDCCWEKVNARZJEXJARENBIIFMEHXUHUAOIWBKLLVHSVIMXWXBLMYAZCNTXQVVUWPFMHTKPPBLXECOYGZUBFOSWGYJRI");
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("IPJQYGTZWTWKJKDGWRSCZDFGYTQTZVLVSAUHVZEPLPRJBNENRGSYIDXUZSFDLFCMZAKXFRBHDVHHOMDHHF");
    tmp_msg_0.predicate.assign("MTJPCNIWOAXSVQLOINKUVZLFTEUVXGVDLLQNHQHDWXKLGZEZBERGNWWQWLWIVKDQLCHANKRIWTSDPRZQTMRJMKOFYFXMDSZRPJTHUTZQUSDZMOSVBBYWEHAMLXARKDHIFEYCGBCYONSMWHYOQCKTEPLEPRJXFBUKCUNGHEFFDVTTZCIWYUUARJXGCXYOPJSDIRSNPYENFUUIOVPYCKKHRDLOJSQSVAZFQIBPFGGBMJAINHXJBAGABBXMEMAP");
    tmp_msg_0.attributes.assign("FBQDHHWMERGNDFDUNSRXSRZJOSUEDVKZSIKQBEJUBNRVMDPATVHTLRNAEAANCXAQVVGKOMXZCASCQRDOMPT");
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
    msg.setTimeStamp(0.7951831171012498);
    msg.setSource(22751U);
    msg.setSourceEntity(28U);
    msg.setDestination(27238U);
    msg.setDestinationEntity(191U);
    msg.type = 72U;
    msg.id.assign("ZNEVVPJPHAKDVBCCOQDHQWHNLDIGVYZPFUMZJHYGRWDKSSWZKUITXZ");
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 154U;
    tmp_msg_0.quality = 210U;
    tmp_msg_0.reps = 81U;
    tmp_msg_0.tsize = 186U;
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
    msg.setTimeStamp(0.8041881009696286);
    msg.setSource(19640U);
    msg.setSourceEntity(8U);
    msg.setDestination(49614U);
    msg.setDestinationEntity(236U);
    msg.localname.assign("TYRKHGEGJDYOJCVKQMZYRHEDDDLFTPOBPJSNBEDAONRSCWOOOBWFTWMTPYUITCWQYAHWVXIVSYMYWHLBEUSUXGXKWWIKLVPHASNCNNIFIJEXATRMJSZOFPWDJCTRZNFJFDXUXNENQHBBUQPZOFVKCSMSMEYPHCA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AIHQOZDHPSGJXKHBHXFBSVRZNBRONJDWTXVUKKFGOWAFJGPMUCIANAZLDQJMURSUQCLCRLKFSYDMFTAXZMHVVWOHETLYYAILQYBLTXFHNMBXNAKSMTLEEIQYVSXROBDJFOQVZPVGPMZABQHEEPWWJPDUQJOELSBCPIETPSTJSCBGXCRQNWHWVNBLGYHTDET");
    tmp_msg_0.sys_type = 147U;
    tmp_msg_0.owner = 13078U;
    tmp_msg_0.lat = 0.6068850679871143;
    tmp_msg_0.lon = 0.016283669948585988;
    tmp_msg_0.height = 0.2708671462777227;
    tmp_msg_0.services.assign("LIAUIJAZPADCRYBBDGNRHTMDIYQDVCCVTRUZTXIEZLGVMRAXL");
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
    msg.setTimeStamp(0.7823745840685296);
    msg.setSource(46303U);
    msg.setSourceEntity(186U);
    msg.setDestination(2940U);
    msg.setDestinationEntity(225U);
    msg.localname.assign("KRIHQTQWJNFMHXTJFKIWPZMTIVEARJYYICYBFHCQLWJBUCOAHOECOLSHXHPISVPXPUGFDLRVMFMYCUHZXYANGKVQFOAXZIRSGQHEEVTYCMZZIDWDTSYORHLXBYPDSXVPBEBQNJEMEI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MXFFUSOXRJQVEKEYDHAAPPVNDVQCWRPASENHQWSJLRTUJGSLSMKJLAMACRVMKEHVBUPLBYUSMEHNCMLUXOODKLDLDIWDIQGYQZTOKGBPYYPXKGMATJXGNGUTMJFNCHMDZVSZIKTONVWIOCZWTCFJGEFDZZBIBIYXNRJBHQAEFYSIORFXYVPWQRLOKQAXMVTCPUWNEDLG");
    tmp_msg_0.sys_type = 2U;
    tmp_msg_0.owner = 51183U;
    tmp_msg_0.lat = 0.7365020499664563;
    tmp_msg_0.lon = 0.09689658467204398;
    tmp_msg_0.height = 0.24321785569001186;
    tmp_msg_0.services.assign("UFXPNVLIGTOVMAUGOVHZFQZWVUPIWXDMKRJVONVTHDEN");
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
    msg.setTimeStamp(0.056325687187743);
    msg.setSource(16517U);
    msg.setSourceEntity(134U);
    msg.setDestination(32228U);
    msg.setDestinationEntity(233U);
    msg.localname.assign("KKNMTPAIPVWYPRUGZYBKQRDHSWGQWO");

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
    msg.setTimeStamp(0.7324071980250706);
    msg.setSource(42637U);
    msg.setSourceEntity(164U);
    msg.setDestination(4942U);
    msg.setDestinationEntity(174U);
    msg.timeline.assign("RLIWDANBKBSYDNZGCBEZSJGVDMPUJAKQHDKOLWJGIQIYMYLGSSDHNIRBVWYCGPNXIAXLWYEPOCSAFXTZFQPTHUPDQMBDNSUMBBCPYWKPHLVZKWEQYHXLZOPUTXANLHVJQ");
    msg.predicate.assign("JVDPLSDUZYJNOOUELYTKNCSHFZESWKQKPMCDJFGPMZNQV");
    msg.attributes.assign("OBTSVYCLLCNDALTFUISERBJPMAHQBEIPPVDDHHDLFFXDAZGXSOOTNSSPEWNQXRFKXSWOPKKYVRKZYTGMVXZONSJRFQHQYUFGWXOTVYEDUHFYIAQBYPELDMDMWWBSGEZKLTUMKZXTRW");

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
    msg.setTimeStamp(0.3414597251170438);
    msg.setSource(15609U);
    msg.setSourceEntity(9U);
    msg.setDestination(19420U);
    msg.setDestinationEntity(75U);
    msg.timeline.assign("VIGSRBXNYQCQASVSDVQBUPMSXJUONPAKBVWDTUOUXNHFZWKKLEOUQMXILESISPFKPKTBGWMDYTCZDEYADKCTWCEVVWDEEZDUFRFRICKPDXJOPLIFUNGNFRLWGTKERNCJMNRACBBXPXXEEHHVOTDNJQYHYALHPWVSEARGF");
    msg.predicate.assign("RAJYYKFVNBLVJCBJEPZXMOSTXVPCDBRPFTFAFPROMERQZFOTYGHIJBNAWEIIKXFIRBYHSJLOKJAUPHVSZSYEDMWMNMRMDABSKTGPZFFCZULHTKQNIWMXQXDUBLLVDFDSRNKSUUKHILZDONQIUVGIAHXMGUQXWALVDRCGBQYUZYUMOCOLQJ");
    msg.attributes.assign("DRESIVKFEBUHGGQJDMTPITJKAOKFHCUXZJMUQURJMWDAOLIXSBWHHRJBLXDJTELFPORXAYNONAWGQZYJLQIWKZSIHGYOAUXTWBGSFJEBXWPTQNHHVLFKJBDOZIWWHKTG");

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
    msg.setTimeStamp(0.8823469572918835);
    msg.setSource(7459U);
    msg.setSourceEntity(40U);
    msg.setDestination(26263U);
    msg.setDestinationEntity(2U);
    msg.timeline.assign("DEGMUJDTKYSBARFNRWEGSJBNHGMDDIXOZIBCCAPTPSJXCUPYRSNOA");
    msg.predicate.assign("XCNMOAQYQCCFDHFISUAWSRFORIBKDHBGYBDTWDWUUL");
    msg.attributes.assign("NOQRHUIAGUGSNBXWNTXGXYOFQREFTRMZEPHNXVKOGPYMHOHBBGKVQIEKJFRECVOPZLJCLBTIOPCJDAEFIROGZTXXSYGSVZVWZNMKEQLYCDVTPICMIWBWAKYBMQECWBYMDHLQOZDKNHXUQAYCUGDHSNDVCUZTDETJILWFKLPMJWLFARDSQFUSMQWXAKRBIFBISCHSVXYHVUWRJMPKNTJRZAUXOPDGSSVANKYEIPDNQJU");

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
    msg.setTimeStamp(0.020980036720266604);
    msg.setSource(45769U);
    msg.setSourceEntity(125U);
    msg.setDestination(8829U);
    msg.setDestinationEntity(202U);
    msg.command = 77U;
    msg.goal_id.assign("KMUZJKHLNERXCGQITPUNNWHYXUQOYDPGSDWZRLBNTRVLYVHFXWOQGHNXXMEBTILAYNDLHCXZSOPPLEOHCVIRLBITQJIKVRFHFCYVJOSFJTOJIOSYZKKGMAVERKWVSRDNGZMZDWWIURFMHKUVZXPDOFWSIQIKVCNHTCLWEEAUGQJSMBYXEBGTBQZDYEMKDLBEGXUVNEDUFZZMWHBRSMUMLCAJAAASACTCPQTRFOU");
    msg.goal_xml.assign("FOVTGUHPZMXMTHVQCQPZHQFEVROQLBKIEKFUBJYQZECLJLDLVOBDRCZJKZTNFTIUBFWZCEDFMNMMKSLNANAQKKCTGFODYJWTXJABJEUVAUQKEYTXKHZCUXPOBMDUVQDBWFKOSYWNBGHRYDMHAMWAVSHSXPYIAULSYYZGFRZOWJUQVTTXJGMIWPIYBHRVEINOPHCPQCNSGACCBIARDWLLVRRPDOESMKSN");

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
    msg.setTimeStamp(0.9237102597371293);
    msg.setSource(42225U);
    msg.setSourceEntity(112U);
    msg.setDestination(23320U);
    msg.setDestinationEntity(59U);
    msg.command = 129U;
    msg.goal_id.assign("ZMXMRYNDNUIPXLZRCZABSGQBILCLVYFAHIYBOSWPWXRAOPUJHPVFCFRRRVDDETYWGIUMCCOURJJWWLPYMVGPTQLMEPDJRSFUCGQSIKNHFTFGUYWIJKGZHXYUXRXVQZELUPRMQYSBYWANESONCKUZKSXHLXBIMKUCMQSOQFLLGKWKAVJDHATHJHVFXAMBAEHEGQZZBNQHKJZFTBVBTKYWLFXNTVQPSAMOWNJD");
    msg.goal_xml.assign("DQGRRHUJIIPKGWAQKRNZKQXAGMPMLCHDHQUNIFHCCZRUIMWAMCXZYMJAJLKMZNZOEEGELGAAHOXSXCVS");

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
    msg.setTimeStamp(0.7436852966166158);
    msg.setSource(10523U);
    msg.setSourceEntity(5U);
    msg.setDestination(25255U);
    msg.setDestinationEntity(144U);
    msg.command = 4U;
    msg.goal_id.assign("MKRTHUJQBFDQDXNDVJZFNEKCVRBLQLTMHEZHZNZMFWHCJKSRCUWLDLVILSJJGXNFACGYVAQYBEZKQDHSKGUDFWCWEBMUFSRIPZYYS");
    msg.goal_xml.assign("CVLTOJUTDWXZJTPDOGPNBSRKNATPYZMOZRQLRSYNBANUFUYWXTKLJCWFNBQJAIVEUESOXHFEGWZXQRLAMWDNGSRMRXAHKNQTXMVOINQDHHUHYNCBGBPGKSIGKUGGQUUL");

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
    msg.setTimeStamp(0.22607701738995756);
    msg.setSource(3530U);
    msg.setSourceEntity(240U);
    msg.setDestination(58834U);
    msg.setDestinationEntity(0U);
    msg.op = 154U;
    msg.goal_id.assign("YEUFSAFIWRHPUXFGWGLCZJYUBFNCHQNOPFPIBRDAHTHDNAZTWPYRJVWKHLKLBATONCKNVIBMQMMLSMXYXQIIMDMWHFNXCIELPJWLGOICVQGTKYYVPFJEETLUUKQYVIQEDEJDJTDATVXHNCSUROOZK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VPEYAIDYJIZRVTLFQOCMMEYAQITPJJFBFRZQ");
    tmp_msg_0.predicate.assign("WZMQRHFZBUSAMIAWGYOCKVDBUDJKKRNPKVTHJSNXZIVXLEHCMHPQDEMCISLVOMFBCXTYGSDXIYQDWOMALAHB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FPEWMODMXIOBOTVEGHBLVTGARRDUQFAEIAAIETRSAHKXOXCYWZBMFSVZVBKSQZCVKKLPEQHBLXNZXQGHYBIGKMC");
    tmp_tmp_msg_0_0.attr_type = 137U;
    tmp_tmp_msg_0_0.min.assign("UKFKXJXADEIMIANAEKCQSJIWBYD");
    tmp_tmp_msg_0_0.max.assign("KJDEMTVZBFGVOPIARRQRRTIPNNLQOPWKMRPKRKOWTCYKDMZFJNLLLBJMYBYLNQIMPUMHZWLZKRXGZCJVEXFIAZKCNGZFNWTHXTXGVWMZFWONHEEDFLDFHAZICHQGDSBUHIJAHECWXSTGTBQGXSZKACPWYQJOYLXNDTAAOSBGOTFYPNIUYCPUBGJIQDBNJVVUTUDOVJVWEFBXCAHGELSCYXBSQJXKPUREOQEAMVVSLCUMKHWASDUHIS");
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
    msg.setTimeStamp(0.10703558380702827);
    msg.setSource(62314U);
    msg.setSourceEntity(210U);
    msg.setDestination(24496U);
    msg.setDestinationEntity(29U);
    msg.op = 58U;
    msg.goal_id.assign("QKVAHVFOUQXBICKLURIIVVSUTFZTAMJYPLYNBFKEMPRQBJXDFJGVWYSPSRLETSWSPBCHRLD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HSBKTMZOBCAQYWSUMYYQQQMZZZNRCXBLIWVTTAHBONQEWM");
    tmp_msg_0.predicate.assign("GLWTVHZPDI");
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
    msg.setTimeStamp(0.8753521502435037);
    msg.setSource(35204U);
    msg.setSourceEntity(218U);
    msg.setDestination(23237U);
    msg.setDestinationEntity(36U);
    msg.op = 144U;
    msg.goal_id.assign("WYJWRETOSSASQCXOZMLTWJSYHPOZHBDLCUIEREWFABNPZIECAQPXXUZGSEFIKPVHXUFVBZFIIJJNAREQCAMRIXLUUTJHKWREGPBMLKVNJBENZKZRAWOHFTROGYGBTMSKAYDTPKFFCWVFIASDUHWGLYKKNFWDHVNYISURTWVNCYGVGSKHLYCMBFOB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZULUBDWHTHDJEEZVIBKQSDWBSFVSPZXZSOXJBCWDNIEDJWSWLZXYBRGEXFUHDAOQFPPWRACZYBUIZFDJPETVYNSFWWEGVSHGIMKMMXOOTLIROYAMLNDCEQDEAGLVOKTGIEXNKKKZQPAVMPVUTSROROCCVKRTMNNKNUHAQALUIICPFMZLJTNCCUKBGALAPNN");
    tmp_msg_0.predicate.assign("FNIJWDFIQQUIMBIPPAWIPUURVHYAIEYLUYMHJAMDSWNWSWGZXESEHGBDKOLYMQTWLLTBRWHSDRNVJKMNVWZXEHAMGKATTYQIUOCJKVXXRBVUSUBKQJQYTBLDKDLSTXRCXEAZN");
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
    msg.setTimeStamp(0.8392552790126296);
    msg.setSource(52323U);
    msg.setSourceEntity(97U);
    msg.setDestination(11596U);
    msg.setDestinationEntity(147U);
    msg.name.assign("IVPQHPDCIJZYROCFSVZVRBMLESPURTOZDNESUIWE");
    msg.attr_type = 254U;
    msg.min.assign("GRTIURPOXPGOPFCKXMVUAOQHRLJWBWNXSNZINDBVFQSKULJKDIFONTFSPRQMKMBFPOUHJHKDGTCGQQWKIBZZQIBBMOTBWIQPIYNZZSH");
    msg.max.assign("JATKVVMGOCFFDH");

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
    msg.setTimeStamp(0.6203267053534485);
    msg.setSource(144U);
    msg.setSourceEntity(178U);
    msg.setDestination(30322U);
    msg.setDestinationEntity(53U);
    msg.name.assign("XIJCYXLSGMSAPCSLVIJPXOOGRLFNUIHDUEVVPXUHRADYABIFYXPKSYJDQBEBDEXNKQZTZHVJCNFKUWLYWQSIOVYRSVXTEVKCZGLNMRUJDLHGWPKGXBOAQQEMTGOFVOWKOJQAUZLHRZCBJAMFBITNKSYQENIZTEDITNSHAPGIAHKTYBNXVWPMUYPOZUHRUWEAEGBFTFMCJRMUDMFMCZIZJYLBCDWKBLSPQROVFMASNDHQGW");
    msg.attr_type = 109U;
    msg.min.assign("IEUYDWJCBCQSKYDEPHKDL");
    msg.max.assign("VQTCYOJMONEMSZKWCNROOPZKFWDLGBAJABDKHKWYWOTHIFDTUJZSXWHQPVFZLHRQDNVYOWBBBLRRZLLCGZIUXQ");

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
    msg.setTimeStamp(0.8185620439175127);
    msg.setSource(33778U);
    msg.setSourceEntity(70U);
    msg.setDestination(20719U);
    msg.setDestinationEntity(235U);
    msg.name.assign("YYUQKXQHNGACZULOELYAKQCTSEHWDRKRIIIXBKMBRHINGXAFKWIBWGWLECAQYSTSGPFNVGHIMDDNHPVTVHFSXVCQLUXOYZLZNAJMCUPZTEGJBJFVYP");
    msg.attr_type = 167U;
    msg.min.assign("BWVKFYHSFRAGZXFAPTKBDRJCVKEPFPNFDPGQOPRTHPBNMNPHVBTRZRDZLVWIEXHFSX");
    msg.max.assign("OQTDLCURXRLIAEXEBPETJDRZIHSKRFIVLHVFNKFCQDPILMQMSAFTYWBYLSAJAXZIBNML");

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
    msg.setTimeStamp(0.18180307402211404);
    msg.setSource(44941U);
    msg.setSourceEntity(80U);
    msg.setDestination(53896U);
    msg.setDestinationEntity(30U);
    msg.timeline.assign("KSACQVIPBXGHRWNSVTXCAANALZVKGDFBIOYZZMUDROUBYDKRYXRSTIEVYAWBKNOOFPNMRUGENJXSEK");
    msg.predicate.assign("BMXGIKBOUMNCPGTLXSZLBXFKSYEWJOIVPWEBXYHLLADKBRWHITSPHPWFMONVSVZTFRNBGMXNQUEUNHVJEDQYXIYXQTAMEFCNGPRHDCWOQUBFAVINZPKMOPFDHQWRCRYDWYJGGEJLSCZPFJUHQIYTSKMGDVQUAIJDBMICOOJKFTTELHDVUSWWCRAQBMRSQLRTPLKGKJZJCWDQEFUSYZAGPNAEUAORHJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WXVKCYDKYNPVXHLRUJAGLFPRJNUGEBOHSMJEFDUBJVHCTANHCZOPLZQAYGUMDIXBDIILWPJKTOYVFSBWSOUXRHRMPAAUVWWPTIFQBWQTNRIHAYAGYGLPKSZKATYVFSTWKFJHEDOXQKBZJDMPHRGZGKNRHCLNVWPZNOICNSYVEMUDMZXUZOSBNXFBUFJDOKRPXGCIFBJJCOMRZFDSLNMWEBHXEISQEQETOVT");
    tmp_msg_0.attr_type = 125U;
    tmp_msg_0.min.assign("NBSCMNHUQWYVRJTSVUUUNSRFGYACMYERSQCWVITVWYKAADLWDLTELPDBSTILAOGPZYSIXMQFNZJJJOWBHLNUEQMTLOERJNZDGQUQXJTMRXDBRWFKKGFKWTVHEJTMFPTAKZKCDSUNCFIZGHEQRUJIQPPFKEYDMSPLOHXFVACMXXLGPBVHB");
    tmp_msg_0.max.assign("KMULHVHZZBGUUHYGARDPNPGDRYXDNFQS");
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
    msg.setTimeStamp(0.938631733664051);
    msg.setSource(13360U);
    msg.setSourceEntity(224U);
    msg.setDestination(27786U);
    msg.setDestinationEntity(95U);
    msg.timeline.assign("HTPOUDSUGNONWTMLWAXBNIAZRSMDLXRFAXOJYEGGJLXBKAJRUQLIEKYBOMXIQIWRPMMSGFZLZXRTBFHASPMVLOFFSDEBNRTOCAB");
    msg.predicate.assign("OVXMTFZTSUGINWHKVETMAVYCIEBOCHNYANFVZAJFOANW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RZEEYDOAZWLCIRMKPJZMABPGLTGOHIMHXHQORPNNSUCCAFKKLJBSDMZODFQTDIICINFQTBORKWVVERXOLASSWGTGMUUVCFZLVBDGBXIXTPHBPSKHBKCYSNFHMXVECXGRYWNCMWQHLJYXAHQTRZAZSCKVVBMUVEWUUQQXTIZSJBANKOONQSWNJYYYTFLTNBHPQWXFRNJWYARYDGSGPVZJMUFUX");
    tmp_msg_0.attr_type = 57U;
    tmp_msg_0.min.assign("LVIHYUNFGQVBCZUJCGXYANGEFRMXVDPDIPWYXVPFBZLZJDSFHCLMFXOWRWPPDQETVAJOTZRVAGORYFLGPETCMEEBRTBIPYPQISMLBWOUQMNWZJCHCYLUPBQOVZYKINQAOKNXFKHKRHLSCBGIZXUONSHGNYEETBGARXIYYPHGWXDULSESUDSVCJDUMMJJGKOWDASXKJKZTDZFQLKLZHARJBTHBCITMMJQTVRKFQOFONEDAIS");
    tmp_msg_0.max.assign("DLKNIWFSRGWMZGRYLHTECTOXWITUBKDVYFRQHQVYHJBKPBBGBTHSLNZNDOYJCOMDWXDTHWIJJZWNJJNYUPPDPSXCKZPLKFHJWFVRYAGXLZTJZVMCQMYDBAPUMMKYSVDEIZBOFTEMDQQYMGRNVERUIKOVZSLMRKQFEUOAQGEHKTFZBJBOERADILVEPXVWMSXKNOCAVFHUIPFTSGGAQUYIAFTUWXC");
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
    msg.setTimeStamp(0.783469946093488);
    msg.setSource(21081U);
    msg.setSourceEntity(168U);
    msg.setDestination(8827U);
    msg.setDestinationEntity(67U);
    msg.timeline.assign("IBFUXFPNSYLTTXYDJPSDJYIECWASHZQZNBHMKGOCIAECBFWQZQPQHAPFFFXGBSYJUUQLRYXQALOEIYQHIOWZMTBKVHALBQHDTFNCBIWZNMTAGZDCEZCORJROWTDBLJVGSZXKVUEPMWEIDFPRBMVATGKUDFLNWKUIMQOHEWLJEDMIGJGOVXVGCUHJYYMLPEOROKRHXNDDKJWLKCOXYSHTVTGNXVQRNAUSGMRTCEKCUWNBZIKARSYP");
    msg.predicate.assign("OWCZXEJSQIGCDTDOCKUPWDNKINYFUOMRCKWQEJUJFEJDTFXOFMGTEDMDOPAVXPOJELQSURMGNCPSQFBXAJIBPBVRHVAWNDCKVHYEALYUPDFGJVIPTIKMQDFZNYLQTGZNSIQXLKRBTYPZXWMWQRSWWJPAKYUZWRX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BAUZEVFWDYUEQZTTSEXWVQBDEUEUXSJGMDCPXGAJNJMVXKRCJFMZBOBHNSKMLMWFCNLKIWZUTLUNZCKRGNYBJDTHEWMTOHBGIQWGGPYEQQGIXJT");
    tmp_msg_0.attr_type = 54U;
    tmp_msg_0.min.assign("YYRMDTLDEAHEHHUHUPIBSMHIAFOVZVQPSPTST");
    tmp_msg_0.max.assign("SMJRNFWKSTHSZQLOEUCPKQUBZFGWTPRBNLEOVUQZTMTLYEGIVYIMPYDIPSIRLKNZGLXTDMDBFKYWNUXTFYGOSEYSTPNJKAAZFNJDEZVECWBVLJLKRJUAPFDZACDOHYIOBHNSJZVAFRQUOMSTDUPBOSLPCTEOHJNBYJLQWYKGRCKHFKMCUPRXPZFMQVZGGBHCAAGLUBMFVAXCDXWNHQQXHBKIWERMDNYXHOAIGQM");
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
    msg.setTimeStamp(0.003818885622664192);
    msg.setSource(19165U);
    msg.setSourceEntity(177U);
    msg.setDestination(55181U);
    msg.setDestinationEntity(31U);
    msg.reactor.assign("QUNIGEBZBCTLFRFBKTBAGSYAJXMACFBHATMFYAJQFPJUGZDUKLIDCIODMJEGQMXV");

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
    msg.setTimeStamp(0.1450802538073208);
    msg.setSource(51843U);
    msg.setSourceEntity(57U);
    msg.setDestination(19323U);
    msg.setDestinationEntity(121U);
    msg.reactor.assign("HINBASOJTDQNXYENHPMGMBXJRYCOHPFPWJNCKSZSGEIKZHCTYABTQIVSOVGRSCEOQVWBKURJALEWLHRLDNBQGSCQTJKVHUFZPUGXTI");

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
    msg.setTimeStamp(0.5068497598138849);
    msg.setSource(15303U);
    msg.setSourceEntity(147U);
    msg.setDestination(52698U);
    msg.setDestinationEntity(99U);
    msg.reactor.assign("KMWARZHBTRUKETYVX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PVQEMNJOVRJYUELICXFEDYNDRVJZGFUSGCWAGMZFHHVUAUVYJKWUATSHLMNCRDXJICMNWKHCQDCXQZDEIDCOSIZLDKTAUMGQELOTSANFNPHIQOWQZ");
    tmp_msg_0.predicate.assign("WUJPIYGUTDMRCOTJKQSCQLZDGCNRMNXUQJHXSONKAYLZOTGSKWOVBYVSLPTUKASQRCARZZMYLZT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MHWBMCSEQABSLGEIFXKZRFNBYGNBRUXVESLOZDSOJWA");
    tmp_tmp_msg_0_0.attr_type = 21U;
    tmp_tmp_msg_0_0.min.assign("FMQPUZUWYOOMVDIEWJIHMHCBYWQUGTTNAZGYPCY");
    tmp_tmp_msg_0_0.max.assign("BXNLFDAMSKDZUUTYPEPREQAOXMCRIZMVFDOJZWIFANJLGDQXJHHQWKWUGFHTTANHIYJAKTMDAHRMFMTILVERAXRGAVOYZZYGRDQWCRSWVSDTJCGKFBNBEQODPVYCENNCYXKASISCNULKMQEPEREGKTZWLZUVXABYPSWNZGPCSIYFUOWVTPTNBUUBYZQKFIHMGOMOXBJODINGMCWSQXJCURQUIKYFPIPLLLTOGBXFPBVQHREHJOSDJ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6758977828285554);
    msg.setSource(55159U);
    msg.setSourceEntity(135U);
    msg.setDestination(64755U);
    msg.setDestinationEntity(55U);
    msg.topic.assign("GOVMZSTUQLDSIZVTQRETWFGRBRKAWHWLNIBXCGNJXDXCUJPDRZIJFOLMPXBHHTQCELYOVWOOTHTMPFJNXBGRTLDDVCYYJFKXEESWSBBFSQPSPQPZZURRZFYNSUAGEWKCHHNBUWPJGNBZ");
    msg.data.assign("QWEKRVIRNHGJDPJWUVYGRZGXBKZOJGLCMYGRFRFSSBWYXTGHRUGKIOSNDENZYOVUMZBNSDYYGNUHFYJADMIFCNFEIPCPKXPPABHEOXLVOUXLOSQCBUEHYDWBJLLZLQLKCXXIDOVAATANOEVDLDSBKKLJFWQMRFKHXQCGZLCEPHZQWQYVCMWNIIJBXPAWAAUMHXQKSMTJWTETAKUSMVITRBFYSNETJGFPVT");

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
    msg.setTimeStamp(0.7361311181560504);
    msg.setSource(36783U);
    msg.setSourceEntity(186U);
    msg.setDestination(15027U);
    msg.setDestinationEntity(219U);
    msg.topic.assign("QXSKLWNGIFCREPQFENUWOZHDLXBJJ");
    msg.data.assign("KWDWJQVWLBEDIBNWDUKBXJIZQGFJCWAGKRBBG");

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
    msg.setTimeStamp(0.19422160014449397);
    msg.setSource(50886U);
    msg.setSourceEntity(99U);
    msg.setDestination(18065U);
    msg.setDestinationEntity(49U);
    msg.topic.assign("KHBKINBCHORETMPMAKBHSQJPLHQWGLXRQQGYUSBKOYJZXPSZOVCIUDQBYATRKRNCRWZPCCMIISKPP");
    msg.data.assign("PDIKMMTHHLIRWPWMLJHMXAFPBIJMYUAFZVGFYFCULAEKGTYXBUIKBCZJAOOFKHMWRGDSZCSJLSKR");

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
    msg.setTimeStamp(0.542236633877705);
    msg.setSource(31070U);
    msg.setSourceEntity(168U);
    msg.setDestination(46191U);
    msg.setDestinationEntity(74U);
    msg.frameid = 152U;
    const char tmp_msg_0[] = {-90, 124, -37, -81, -120, 112, 82, -90, 80, -75, 76, 22, 58, 37, 118, 7, -61, -16, -59, -25, -48, -28, 97, 24, -36, 43, -25, 73, -117, 47, -50, 20, -58, -75, 68, 57, -128, 91, -1, -44, -115, -19, 31, 103, -71, -86, -121, -82, 66, -110, 102, 5, 95, 3, -124, 8, 53, 112, -50, 42, 34, -41, -40, 64, 63, 94, 76, -103, -119, -110, 32, 81, 80, -7, -91, -40, 29, -55, 72, 92, -48, 54, -22, 103, 46, 82, 79, 112, 78, -45, 76, 14, -107, 10, 91, -21, 105, -118, -1, 9, 87, 84, -108, -42, 86, 65, -124, -3, -52, -97, 73, 89, -85, 126, 119, -35, 98, 61, 24, 43, 50, -92, -15, -84, 73, -2, 81, 81, 95, 100, -128, -23, -11, -30, 116, 10, 104, 11, -124, 119, 25, 103, -38, 87, -36, 64, 42, 5, -98, 8, -75, -31};
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
    msg.setTimeStamp(0.27171861777934936);
    msg.setSource(20265U);
    msg.setSourceEntity(85U);
    msg.setDestination(3694U);
    msg.setDestinationEntity(177U);
    msg.frameid = 2U;
    const char tmp_msg_0[] = {-64, 89, -109, -9, -113, 102, 24, 121, -50, -116, -73, -41, -81, 21, 1, 120, -20, 20, 119, -104, -62, -65, 94, 75, -43, 65, -108, 111, -52, 9, 6, -7, 86, 60, 46, -82, -73, -63, 123, -44, -84, 73, 3, -120};
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
    msg.setTimeStamp(0.46189101659035625);
    msg.setSource(27550U);
    msg.setSourceEntity(212U);
    msg.setDestination(33269U);
    msg.setDestinationEntity(251U);
    msg.frameid = 12U;
    const char tmp_msg_0[] = {28, 47, -50, -76, 114, -37, 28, -84, 24, -10, -56, -36, -69, 83, -60, 15, -55, -88, 103, 49, 83, 61, -45, -89, -42, 121, 9, -34, 93, -1, 44, -41, -114, -126, 10, 23, 6, 69, 41, -9, -107, 26, 10, -13, -37, -113, -114, -90, -89, -125, 106, -34, 93, 11, 100, 0, 70, -42, -77, -104, -85, 43, -75, -22, -23, -4, 120, 73, 90, 50, -104, -20, 48, 59, 46, 116, 102, -55, -55, -60, 38, 117, 56, -35, 120, -22, 88, 102, -1, -92, -123, 54, -25, 99, 68, 16, 11, 71, -34, -91, -52, 67, 53, 33, 96, -115, 44, -80, 103, -52, 111, -96, -19, 17, -31, 52, -10, -61, -103, -48, 123, -93, 25, 126};
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
    msg.setTimeStamp(0.6342552249798421);
    msg.setSource(8125U);
    msg.setSourceEntity(14U);
    msg.setDestination(44336U);
    msg.setDestinationEntity(223U);
    msg.fps = 8U;
    msg.quality = 103U;
    msg.reps = 9U;
    msg.tsize = 194U;

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
    msg.setTimeStamp(0.9133560857918693);
    msg.setSource(15718U);
    msg.setSourceEntity(63U);
    msg.setDestination(39068U);
    msg.setDestinationEntity(80U);
    msg.fps = 79U;
    msg.quality = 168U;
    msg.reps = 225U;
    msg.tsize = 226U;

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
    msg.setTimeStamp(0.721824695734672);
    msg.setSource(41615U);
    msg.setSourceEntity(56U);
    msg.setDestination(1793U);
    msg.setDestinationEntity(123U);
    msg.fps = 70U;
    msg.quality = 166U;
    msg.reps = 106U;
    msg.tsize = 3U;

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
    msg.setTimeStamp(0.4208864434655091);
    msg.setSource(52653U);
    msg.setSourceEntity(48U);
    msg.setDestination(30100U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.5761861723046074;
    msg.lon = 0.6462177979282038;
    msg.depth = 54U;
    msg.speed = 0.9783941511878665;
    msg.psi = 0.9037979024956498;

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
    msg.setTimeStamp(0.5268240890778477);
    msg.setSource(45654U);
    msg.setSourceEntity(28U);
    msg.setDestination(46787U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.03871462421417882;
    msg.lon = 0.4145638796769534;
    msg.depth = 171U;
    msg.speed = 0.7394113282013098;
    msg.psi = 0.5952172874903783;

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
    msg.setTimeStamp(0.832503151241554);
    msg.setSource(8395U);
    msg.setSourceEntity(11U);
    msg.setDestination(17455U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.9335959866807477;
    msg.lon = 0.48659165721238884;
    msg.depth = 62U;
    msg.speed = 0.8961315607044487;
    msg.psi = 0.18707930192286126;

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
    msg.setTimeStamp(0.26209474563346924);
    msg.setSource(20615U);
    msg.setSourceEntity(96U);
    msg.setDestination(23156U);
    msg.setDestinationEntity(22U);
    msg.label.assign("IVKZYVBUMBVQDJWTZFEDEJJQTRBGBBECQADWEXUFKFXVWNSAI");
    msg.lat = 0.12623467173258307;
    msg.lon = 0.30525603465183815;
    msg.z = 0.3050160228308807;
    msg.z_units = 209U;
    msg.cog = 0.4013519761875426;
    msg.sog = 0.9443131171571013;

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
    msg.setTimeStamp(0.5037938693364944);
    msg.setSource(64479U);
    msg.setSourceEntity(69U);
    msg.setDestination(18346U);
    msg.setDestinationEntity(137U);
    msg.label.assign("ZEMFQJYVHG");
    msg.lat = 0.4556031841064566;
    msg.lon = 0.7486272734207866;
    msg.z = 0.9007706960963628;
    msg.z_units = 0U;
    msg.cog = 0.2522100131064776;
    msg.sog = 0.13382919361155265;

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
    msg.setTimeStamp(0.31860845192795995);
    msg.setSource(61422U);
    msg.setSourceEntity(248U);
    msg.setDestination(48965U);
    msg.setDestinationEntity(158U);
    msg.label.assign("KEXFURUKYVKGZFSYMNWKSLICUTNFJIUZPQUCTQMSTZQMWKTFFBMGOFHCCVQEREOPHSJMKPLJKVJDBBLBBGKAGRNSSXZZITNHMULEPMXHXDEJOORBVADTZQJGBYLJIDFHWATFHIGAWOXLWWOMWURMDIWXVUCIGRYDNLNOVLZPHNDYAURHOLREKEEEVAAAGTDDKP");
    msg.lat = 0.2888168823804347;
    msg.lon = 0.8835922457195987;
    msg.z = 0.45267915717679963;
    msg.z_units = 77U;
    msg.cog = 0.5460592370477135;
    msg.sog = 0.6507577373035264;

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
    msg.setTimeStamp(0.22796595819195598);
    msg.setSource(64541U);
    msg.setSourceEntity(87U);
    msg.setDestination(48398U);
    msg.setDestinationEntity(39U);
    msg.name.assign("UNBWQFAAVWJCZATUXMSNDVXEWBJQMNSEBNDTXYZHSITVKWFPMRGFAMPPENOWQIOUPEFLOFYLKLOVGIQDHZPRMUOTLOMRKRZHNKANZJIGBSXDFSRPIBBYUZJVXSLRHDFRUKZUXVLDNQDUCTQQVSSZIOAQDCTCBAOEKIFLPHXWMTYRIKKNJPCYFZUMGGOFWQTYGHAM");
    msg.value.assign("IRRHAPLOGWORAIFUWVHPZDHNGOZZDKMXWIGTXLMCSDKIGPDRXVCZTMKBFJAOHIELAPLBQELWMKGQJEPTBCQMXXCZUSOBGIYJTALVCJCDRBWYWYBGGMWSKDHIDYLFPLOTSDPOB");

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
    msg.setTimeStamp(0.7524439690194361);
    msg.setSource(16916U);
    msg.setSourceEntity(199U);
    msg.setDestination(20338U);
    msg.setDestinationEntity(246U);
    msg.name.assign("TBNQRZVIRVJUBHGQGTRWTNQUDBGSRQMEEMXUNCHHEUTTBJNTSDONGNKOCLIULVOWAUTKKVIKJOXPDSNMZOZLWWQFPWYVFXJOPJCFJCAKCHGZOGUVXRWZFDNUHXDYEQYDEVJIVQZIXBBRBFMZDRWXQWRHPHAAWYBEALCSCZYPKMYPPQATMEMGSFISIGUXPFKOPASULAKCTIYBMHRJFDIOVIXEYWDSJLYFMKKSBXONHATEEVNJZ");
    msg.value.assign("JWYLPPZEYQZNTQHBORUJ");

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
    msg.setTimeStamp(0.3074358559850734);
    msg.setSource(36550U);
    msg.setSourceEntity(123U);
    msg.setDestination(32377U);
    msg.setDestinationEntity(70U);
    msg.name.assign("LIJNLARKTQVHVHQKCPWZHZIMXYYALWOIELADCRXDSKDUJXPMXQPXNBXSJDKEFJIFLBRYKVMAZYNJFIERMPGMGRGZPUDCUFDHZVECJOBHQSRCQETSTSHIXIHGMLVOUOTUGZGIAEFUMAVUKHXYSUNJGZWEENJEGRXTOWWQOVOOFZFTHLGQDKURALTKFPRQIBSSBAKICGMXJNYWYQO");
    msg.value.assign("XQBDBQMANSETBTFHIZBJWTOWAWRPOUPDTUJSLVRUWV");

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
    msg.setTimeStamp(0.13698804973812195);
    msg.setSource(29206U);
    msg.setSourceEntity(234U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(253U);
    msg.name.assign("BURVKUFLEHNMHPWZHIARXSQMSLLPDAZGTFKGPQDNNVQFNIJAWMNVCEVOTBFXOJRENKQV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ILGSAMKOLSUXDTFVDRJWDQEBBRIGFHKIRUNNYCAMOSTOOEDHZPCSGMQUMWPSPIY");
    tmp_msg_0.value.assign("GPBIEGZUNJYVJHTLMWLAQQDTSEWCZGUOECKGYHQVYITNARBUHRQNBFVXEEU");
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
    msg.setTimeStamp(0.6799700553388673);
    msg.setSource(53030U);
    msg.setSourceEntity(195U);
    msg.setDestination(17303U);
    msg.setDestinationEntity(159U);
    msg.name.assign("LPQFNVXSYDVFSEMSFFTVQUGLBDLWCEJZXZACXTZYJPGHGUWMSONDZHGDAGBETBIGEUAKZL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OLYBEFFCEGTZHASSSNZBDHCRTYQTNFGRYFSPTOYTPUGSKWOUMJXHSVGZBDUXJLKRFZQRSZTQHXYOIXMZNNHOLLGVHVUIHZ");
    tmp_msg_0.value.assign("PWGIYXOKNJHXHPSFIRNBLKWNHYBICVUEMSHOTUJGA");
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
    msg.setTimeStamp(0.6446105733986398);
    msg.setSource(22486U);
    msg.setSourceEntity(90U);
    msg.setDestination(14093U);
    msg.setDestinationEntity(160U);
    msg.name.assign("EJWGQDWNBMTJLFRVQHFASQMVLQVWPKPAHWETIZTICSXUOBVMEVDHICKXUNEKRXVTSBIMPHSADUFDDONICJPNBRUSUYZR");

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
    msg.setTimeStamp(0.10882616657870037);
    msg.setSource(47843U);
    msg.setSourceEntity(97U);
    msg.setDestination(55426U);
    msg.setDestinationEntity(198U);
    msg.name.assign("LXWTCFTJXITBDQCJCTPMSEZCJKUGOBAUDVUQVKCYVGWRTDYGKUWVMJXYMCLGWICPUKCHOOEBIQEQDNKNMMGJSHTHDHBYNRSSALQQXAEPXYNPGHRBGHAETLVDFSVGPAVURLHJKZOLRFNIAWEPBTQAMQEOBMRFFMKLTQBINXCSKRY");
    msg.visibility.assign("WDUZDCQISEJRKJVBDGBJIIOQATIMSPKTGHPKVXTMGZDNUXYWKMAKXZVXGIYAHDMPSLZSTVVMKOYIDEUBYDEFIMUQNBGKHVLVYGSPXX");
    msg.scope.assign("VTPLONODFOXZSTIPGXUKXIONEWLRSLYGTFSSKAOOZTBKZZEIZJYWMPVHDBPZOZMESGGNXIBDOBEWIRYKJQVYBDAMXHUVIKCPYAFQWQQJGJCPUATBURCKLXNNHHISEARHUDQJWHQMMEAAOSWJVGHPZLQHFFXCVAGJYIZGQSLECGJDNKTKUMFERRQHFVNYCUCCRLPBWDFANNDRSUGZLOPITXPXINLVVATWYV");

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
    msg.setTimeStamp(0.7956657533774633);
    msg.setSource(2821U);
    msg.setSourceEntity(191U);
    msg.setDestination(23313U);
    msg.setDestinationEntity(127U);
    msg.name.assign("QPXCSIPUOONHRHOLLILOZCMTOEAHTPBMFBWBIZRXHRGMXVTLPWYKRXKYYLQNBIAXJPSWIYHIVFYCAVLNTTYFADBWOBETFWXAIXGVTVOKSAFCTEGCDONUSZEOKCFSPEYFN");
    msg.visibility.assign("SVUZQPCSBMOFBYDFLWJJGTUAZVAOQPUJDLYBKLGGHFVQLWPVCTHNBWMTCFX");
    msg.scope.assign("WHYGCJKVZXALCNPZJXHTYTOLPOYGERRBZVFPCLPDVLUWQITICXFQGAYAGEIWPJNVPNFHBMQPNWIBPBWMEEDOMFRAEDMQQPQZZWATKAGCJHQUKAIJJDTSRDTTZVET");

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
    msg.setTimeStamp(0.022636527127990913);
    msg.setSource(59376U);
    msg.setSourceEntity(66U);
    msg.setDestination(42058U);
    msg.setDestinationEntity(231U);
    msg.name.assign("AFCTKKTKRSXWNXJKCOTFMMPHBHIMGYTXVUUHRZAORYUGBNHDNKYWLBNYSFPLVGYZDLAPUARELVALDGPTSEPAMLUIDDNBJCHASRXQGCYOJKFOAVXCYSUTJIFOFIEYNEXVZQPEOBZYIQMHEQJWKWEWDIVQMDQQSHV");
    msg.visibility.assign("SQYVZXGZJCALZXJBDXOUQORVMJBHDHSPTHQSTXQMNJAJUWZDKWATBRNPWGQZLGQMXGLVHJC");
    msg.scope.assign("MXHBUGQMCAVORVXUWLTHGIKAKKODKQSTNDLMFIQBPVULXBQFRVFXPEFDNJKMVPHZXQJRMUCHJFBPGYSKYWRCAQMHSXJFIOAEWXBRUWDPOHVEWKTAOXIMAJSZRHBRCOZODIGETAKAVIVDFZPYFRNYVACYZLHNLLYTZPJBEWHCZIRYUFZGSGSULTCYNLBIMNNJBTLW");

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
    msg.setTimeStamp(0.10553808669268872);
    msg.setSource(29852U);
    msg.setSourceEntity(113U);
    msg.setDestination(65283U);
    msg.setDestinationEntity(28U);
    msg.name.assign("UIJRLNWFDBZRKPJDTCYRWABUQVSYTZAHZVZSDRKNCRQANCXWAGDGHGSOZIZHGFLCETLABNBBWGBAJOOVMPMDOLFUYPJMGNJSMTEDXVWGQYUOZQVSSJPPKXAHMPEUZNIAIXOUHBTRUJXSCDYLEERHQQDV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZHKEGAKFPANVUIOIUSVNAFXJXYGXNGTTISKGKRTCUAVLJXQKMCMEPVOPJPMZLCTUSSLURCQGFATRYUXCEKBWLZZIVMAIDLJXOJEZFLAWDGOHHYVKLTZHBUBFWXDCEFNBWM");
    tmp_msg_0.value.assign("WMPLOAWMUZFXJMCVTUHMFQDLHJKVGKIUDUBNAWXDENMCFNNRPSARZTJROKNMARATKGDGAMPQTCVIPWONXZWTFBRNWDSMXZCLOQLGVJCGBGJHZVEXSDNODWAUKPVHULYGRY");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.012597312848692588);
    msg.setSource(22729U);
    msg.setSourceEntity(97U);
    msg.setDestination(33689U);
    msg.setDestinationEntity(253U);
    msg.name.assign("BLOSHNAJFRPXCLZJIATVORBPAFYYGOHMDEBRTIXADQLWBKUYFYUQHSBDXCZPJZZWDDJARTWOVMHZFNGFPPYUKCRLIPXCUJQAVJPNJHNEIBIKJKLEUFNZNDKTEUGIEMMQGNROTVQILWSTGAKPAJYBMHGWYCHTJMPZKQCWQUMUVGQFMLRGVADKXRCESUXEFASTNISYZVVYMODYVSOKECCRMCLBNGFLHSFPLSZEERIXDZTSGOQWXWBTQKBVHH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LNYRVTBFKYCAIPCBLWIQJABMQYEUFVYEEDHWXTPGKKRYUNEMMZHHVRSGCIHTRQGUYQDQTPIOGAMZSDAAMHATXMJWJVQCWHLILPDXHRZJXWBERVFLSRSTUDEZGKANKDZEDXCUR");
    tmp_msg_0.value.assign("JENWIXHVXDBVBRTXOPFYVQSFNXPKLSYEMCFGKMJNQOLAFOVFPUECGJDITVUYDPLRFYYVWFYMOIOIKMLCEXEABHOQBZUJTDYTWKAHXUNPRWWILAMZHRECWTGMSCKMNIIJUCEAZMZXZSJXIDRPFNZWEQACUQNTSQHFHNPGJGBFJBCTCHJGOPTSQYDKXDBCXTHOKKZMVLLWDK");
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
    msg.setTimeStamp(0.6134477727750176);
    msg.setSource(31294U);
    msg.setSourceEntity(232U);
    msg.setDestination(56852U);
    msg.setDestinationEntity(226U);
    msg.name.assign("OQEQUCTDBMXSNPOICAIEDRHKAVQMIZPENZTAWNAVYHADNTSFEAYGBIWKEGJUYNXPDZVRVK");

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
    msg.setTimeStamp(0.35199266804204976);
    msg.setSource(38049U);
    msg.setSourceEntity(169U);
    msg.setDestination(22733U);
    msg.setDestinationEntity(173U);
    msg.name.assign("ZUVUQGSZZDWCXPTOBCYTANGUIEEYMGLJPTXRDQNGNOGYAMPGMTBKOMVXOBTCFQUWKCFEKYFKSSTIRFFNTLUHPTVZLLTEZCJKJMAIVGNEFAHKDPNRZLECAXUPDNWHWNLLHBQVDXGXSHWXUSXOKJYV");

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
    msg.setTimeStamp(0.46879953915449735);
    msg.setSource(39471U);
    msg.setSourceEntity(147U);
    msg.setDestination(62454U);
    msg.setDestinationEntity(124U);
    msg.name.assign("BMKJUZCVGROOMIIKXUZLQMDFPCBDXDSECTHXMZLSNQMQZUXQHTJUWBJVNIKAKYNDATWULPJCOOFRGYHVXLOLBXMHFPVEPZWCTYPKVNRNCPZTBOKBWICNMAUIUALAX");

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
    msg.setTimeStamp(0.7513348398608395);
    msg.setSource(37808U);
    msg.setSourceEntity(17U);
    msg.setDestination(60517U);
    msg.setDestinationEntity(143U);
    msg.name.assign("FCGVVLKLVATKBOQRDUQRHMICMMKFALTFDREHYHWDKOOUNZPKVQWAVSJAAZSVUZNTDFXGYWNYHVCWUTYPBEBPFEKSHPOKEPBLJCQWDNXCJFAERGXBOZQZEYBNHGIAEXXDJAQYSSJPTOTVQOYDZXCXFQONMLJHCGLWMPGTSBXIQKUJZWBUWJTCRDZYKUMLFBAMIIBCSNCPFRDESXYHVWRGZJTMR");

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
    msg.setTimeStamp(0.4058583295892221);
    msg.setSource(14775U);
    msg.setSourceEntity(195U);
    msg.setDestination(2879U);
    msg.setDestinationEntity(225U);
    msg.timeout = 2614576584U;

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
    msg.setTimeStamp(0.4191228580241376);
    msg.setSource(28273U);
    msg.setSourceEntity(153U);
    msg.setDestination(6851U);
    msg.setDestinationEntity(242U);
    msg.timeout = 3692547439U;

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
    msg.setTimeStamp(0.6134853618313182);
    msg.setSource(27358U);
    msg.setSourceEntity(147U);
    msg.setDestination(8815U);
    msg.setDestinationEntity(254U);
    msg.timeout = 35910574U;

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
    msg.setTimeStamp(0.3473673473642864);
    msg.setSource(49873U);
    msg.setSourceEntity(19U);
    msg.setDestination(52519U);
    msg.setDestinationEntity(234U);
    msg.sessid = 1922526957U;

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
    msg.setTimeStamp(0.23094284094645345);
    msg.setSource(4250U);
    msg.setSourceEntity(147U);
    msg.setDestination(64151U);
    msg.setDestinationEntity(26U);
    msg.sessid = 92238740U;

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
    msg.setTimeStamp(0.4892649800747695);
    msg.setSource(53560U);
    msg.setSourceEntity(95U);
    msg.setDestination(4481U);
    msg.setDestinationEntity(81U);
    msg.sessid = 2203643121U;

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
    msg.setTimeStamp(0.16511957114530995);
    msg.setSource(23242U);
    msg.setSourceEntity(11U);
    msg.setDestination(6103U);
    msg.setDestinationEntity(153U);
    msg.sessid = 3843713352U;
    msg.messages.assign("UWMXAXVCGUMCJOCXBAIDLKKPTSMSCCLZZPOSNSYQPYHXDRHJWFNEEYKPPDMLVIHHFTMTHWGIWEAZKHAUIWYGBTXHIHIKVWQURFANLEOVNQWISZIXREJLMSFGMSFNYUTUATODGKCVGGCUOCRAJPPEJGFVZYLDWKRMNEDERJSQJBVEGQYRROZDLJRVKTYBFTNCLJCRQIN");

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
    msg.setTimeStamp(0.42957042482831354);
    msg.setSource(34494U);
    msg.setSourceEntity(44U);
    msg.setDestination(49670U);
    msg.setDestinationEntity(139U);
    msg.sessid = 1108950944U;
    msg.messages.assign("PKYOEXHGXTBKBUWWOMXMWYIGDKOXCAFPHVFNMQIFFKHYTVLXSUMLBLLIRUGVUBAIDMIYVIMQGFSVXCOGZIHTNJUFFWUJXBYHIYBPJPBWVEHNAAXEWEGMRASESOZGTZAABLNUJCCYZCLJUXBWTCLJKSCOOZQFRVJZIPCJTSHETKQCKVSKYNRMGDWUOZPRRNDUEAARDLFTSMSRZFSDHPNNZEQICQQDVPBYJRGHT");

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
    msg.setTimeStamp(0.33401375162904423);
    msg.setSource(52208U);
    msg.setSourceEntity(72U);
    msg.setDestination(2183U);
    msg.setDestinationEntity(252U);
    msg.sessid = 3731260264U;
    msg.messages.assign("FCEEETXGDFFPWTRINASEUFKHDMLGAKZEZQPJXMURRNOBDGQCMFXUVRLVKIJYAHYMHZVEIQWOYTITXDCQZAUUAVYHAERRSOWMOKJFPLHTOZIACIWBBDKHSJBZKQNQPVFCXAPWNSJJHWCGGTSJUEGVOBMSLBPOIWVGJC");

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
    msg.setTimeStamp(0.5031475140436743);
    msg.setSource(1166U);
    msg.setSourceEntity(29U);
    msg.setDestination(54497U);
    msg.setDestinationEntity(34U);
    msg.sessid = 4464329U;

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
    msg.setTimeStamp(0.27477534215208266);
    msg.setSource(8172U);
    msg.setSourceEntity(4U);
    msg.setDestination(4036U);
    msg.setDestinationEntity(62U);
    msg.sessid = 2780310757U;

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
    msg.setTimeStamp(0.35856349087235995);
    msg.setSource(29297U);
    msg.setSourceEntity(237U);
    msg.setDestination(2411U);
    msg.setDestinationEntity(94U);
    msg.sessid = 284263039U;

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
    msg.setTimeStamp(0.5490585372626012);
    msg.setSource(17572U);
    msg.setSourceEntity(130U);
    msg.setDestination(50293U);
    msg.setDestinationEntity(245U);
    msg.sessid = 4125421174U;
    msg.status = 36U;

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
    msg.setTimeStamp(0.1597335467918457);
    msg.setSource(35932U);
    msg.setSourceEntity(62U);
    msg.setDestination(30325U);
    msg.setDestinationEntity(22U);
    msg.sessid = 1754851721U;
    msg.status = 77U;

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
    msg.setTimeStamp(0.4984399420672818);
    msg.setSource(53332U);
    msg.setSourceEntity(65U);
    msg.setDestination(9851U);
    msg.setDestinationEntity(89U);
    msg.sessid = 1503798824U;
    msg.status = 144U;

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
    msg.setTimeStamp(0.3480280693946798);
    msg.setSource(46241U);
    msg.setSourceEntity(213U);
    msg.setDestination(30330U);
    msg.setDestinationEntity(151U);
    msg.name.assign("DKXTMHXKLUJGDFDLHBBWMNLDDULBCIKSUXKZPMVNYEWTMEZFKIBJKNOPZQRRHOEO");

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
    msg.setTimeStamp(0.5551426530695879);
    msg.setSource(45396U);
    msg.setSourceEntity(50U);
    msg.setDestination(37974U);
    msg.setDestinationEntity(89U);
    msg.name.assign("TEEWUMVBKCSBQTEMPZJPZADUOYOHVJMESX");

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
    msg.setTimeStamp(0.4512925805875334);
    msg.setSource(51495U);
    msg.setSourceEntity(181U);
    msg.setDestination(14840U);
    msg.setDestinationEntity(72U);
    msg.name.assign("HTGQIBYNYRDAYHXRPKDT");

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
    msg.setTimeStamp(0.8290118024681246);
    msg.setSource(17144U);
    msg.setSourceEntity(69U);
    msg.setDestination(25976U);
    msg.setDestinationEntity(62U);
    msg.name.assign("FIKHRZUSCXUWMAFVQZRYDOAOIPUGBOIHWSYTKDTFWLILNXIXBLWACVVYBZKNNXTLKHCYUJAQQRWJRGMMUJEMLSIGUQCNHOSBZFZDELEIMADEJSEZULVXQDPWRTKSBAYSXYUGUOGRVQPQVHPJTKFSCYVMUGPFHFLRRTDNPLIMAXXXCDDYTZSKFMNPEERVTZDEKAORCWGNKDWHPLVPNHWKOFSIGYCQWQHOJO");

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
    msg.setTimeStamp(0.44323646869171385);
    msg.setSource(34245U);
    msg.setSourceEntity(37U);
    msg.setDestination(43522U);
    msg.setDestinationEntity(198U);
    msg.name.assign("RBIMFHAOUTGUIPOYFXKFHYNMHVGZQNJJVHEIWLQSLVCSCEDNIOLCDXSKFXMPLHPEZIBJVTTAKYDOMPEBAEQJAAGP");

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
    msg.setTimeStamp(0.21719382710437263);
    msg.setSource(1569U);
    msg.setSourceEntity(169U);
    msg.setDestination(22917U);
    msg.setDestinationEntity(86U);
    msg.name.assign("PWTCVQBZSWXXUDKYJXUDDMLOMNKCBVHZBLMVFHADKFJNDSCDNMUKFMGECXVRUXWDYTDHEVQBENMKJPTOVPPUPMNTYBIMKGQLIPJORCTYSYLIJRITNQJLBUHGTFSLAKKOCEXOZBGUWBRFPIYCAYYISMJEOEZPDFIWGHNZJJZCMAKASEPQGOXWHCRUXRFRHV");

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
    msg.setTimeStamp(0.08941408844601972);
    msg.setSource(20357U);
    msg.setSourceEntity(238U);
    msg.setDestination(63167U);
    msg.setDestinationEntity(172U);
    msg.type = 24U;
    msg.error.assign("VNLXERDUKOQFTMFFSWDZQBYBAKRHKH");

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
    msg.setTimeStamp(0.7394235850614833);
    msg.setSource(31921U);
    msg.setSourceEntity(152U);
    msg.setDestination(55459U);
    msg.setDestinationEntity(85U);
    msg.type = 85U;
    msg.error.assign("BLFYIKIWAJEAOAVKHMIIOYSQWPMNTGQAAUZPLXMXCYCABGBPAIXLCPDYZAZCKULIJTRBOZDEPXSQWGBJYZQFOQSROISMWPLOCHWEWHNQGNLRTYGDTJZYFHFRAPMKZOBVUJINLROCNFCSX");

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
    msg.setTimeStamp(0.08220503225602638);
    msg.setSource(15433U);
    msg.setSourceEntity(53U);
    msg.setDestination(45765U);
    msg.setDestinationEntity(134U);
    msg.type = 241U;
    msg.error.assign("AWLKWUVRIRCZXOGSVYPTOGRKVYDCDKMJXTB");

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
    msg.setTimeStamp(0.07453460519583899);
    msg.setSource(15122U);
    msg.setSourceEntity(106U);
    msg.setDestination(35703U);
    msg.setDestinationEntity(229U);
    msg.seq = 16705U;
    msg.sys_dst.assign("HHYXNMHERTENUWTFIZLCJEZBXVIHCIONOGRJKXWYPPHMGSAEARPKLHWMVNGACJGTZASRGEWFZZHYITPLKWFKJQZXMUXNBYQTGEMSYQLTDBPFCNQHJQZ");
    msg.flags = 26U;
    const char tmp_msg_0[] = {-36, -87, -106, -68, 113, -117, -57, 75, 39, 75, 121, 30, 86, 78, -85, -22, -89, 63, 4, -68, 19, 13, 1, 61, 94, -7, -10, 85, 111, 30, 52, -12, -96, 52, 100, 100, -125, 70, 23, 37, -54, -20, -60, -60, 55, 79, -126, 38, 75, -88, 27, -48, 42, 36, -6, 55, 30, -58, -123, 124, 9, -56, -1, 55, 25, 119, -86, -30, 28, -71, -24, -56, 29, -107, -7, 87, -118, 62, -125, -76, 68, -98, 3, 123, 83, 124, 11, -112, -41, 105};
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
    msg.setTimeStamp(0.4823350970221131);
    msg.setSource(29708U);
    msg.setSourceEntity(68U);
    msg.setDestination(33014U);
    msg.setDestinationEntity(115U);
    msg.seq = 57323U;
    msg.sys_dst.assign("DKYURWQIZQVBIXSTXFSRMOFEMDSYBLWHOFAWOEUXBIYDEAVXILJVPBDTJTZOUCSGPCJTVIIJOUKYMCFGHVWRKLHEZDVLAYOBAPXBSFTFTHUYMMVQNWBROPRFSUXJPRBPSHHAUYYMCCDYQQGETVNADLQHEOLMZCTOAKLLDDMPKGNLZ");
    msg.flags = 134U;
    const char tmp_msg_0[] = {-20, -108, 56, -108, -8, 30, 121, 8, -107, 28, 62, -112, -115, 115, -33, 99, -40, -95, -93, -57, 19, 42, 58, -71, -118, 58, 18, -123, -74, -48, -9, 71, 93, -36, -116, -36, 65, 16, 0, -107, 49, -113, -87, 9, 0, 74, -87, 56, 8, 88, 57, -63, -113, 111, -69, 59, 47, 91, -80, -71, -82, 88, -106, 18, -27, 100, 45, 75, -111, 15, -100, 43, -54, 12, 14, 40, -25, 108, -9, 20, 120, -44, -111, 81, 50, 71, 63, -64, -52, -17, 111, 5, -18, -105, 4, -47, 9, 90, 57, 82, -71, 40, -80, -100, -121, -54, 82, -127, 3, -34, 122, -26, -29};
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
    msg.setTimeStamp(0.14432631850393074);
    msg.setSource(3684U);
    msg.setSourceEntity(212U);
    msg.setDestination(4548U);
    msg.setDestinationEntity(221U);
    msg.seq = 49649U;
    msg.sys_dst.assign("RRVJONRXAQWWUELFIAHWOQSGYSBUIVMGMXQFSPSCKOIPVUAFEUWZKZUYSSVQUKJXICLYAGCNGOAHNGBTNDHEGKXPZYCFPDYZNCSCXQAWTVEUVIXOOJRJMQBBIBMHPHFCYLTWRRPLTFEFHBWDGDPLAJSMWQMHBLWUGXEDKXQJTPYEKBQRPJKXDVZNEEGNUNFYMOMIAEOZINKRCJGVJZLQVWFULDMIOYTATTZKTLOBIDAMHFRLHXZNDSTKVCPS");
    msg.flags = 28U;
    const char tmp_msg_0[] = {-66, -87, -76, 25, 97, -24, -28, 34, -16, 26, 24, -65, -11, 110, -98, -41, -98, -79, -28, -114, -33, 120, -36, -116, -23, 24, 33, -64, 14, -101, -45, 13, -118, 126, 49, -107, -109, -62, 40, 83, 25, 102, 51, -79, 10, 66, 95, 75, -10, -35, -29, -40, -82, -77, 74, -116, 68, 50, -120, 98, 12, 79, 43, -110, 79, 11, 28, -105, -56, 27, -111, -29, -95, -126, -74, -89, -16, -38, 45, 13, -28, -77, 88, 69, 33, 26, -125, 46, -70, -17, 29, 40, -125, 17, 0, -32, 124, 96, -121, 17, -54, 25, 104, -19, 66, 41, 116, 92, -2, -46, -25, 107, 84, -29, 67, -83, 11, -79, -51, 50, -116, 41, 49, -105, -76, 3, 91, -49, -86, -64, -52, -36, -16, -34, 96, 95, -113, 71, -17, -102, -102};
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
    msg.setTimeStamp(0.6033411115057608);
    msg.setSource(34636U);
    msg.setSourceEntity(18U);
    msg.setDestination(15808U);
    msg.setDestinationEntity(243U);
    msg.sys_src.assign("VYZAXITHAQNCYUJHAMHO");
    msg.sys_dst.assign("VBNULUHHVGAPHFBKEHGYHGXSWAIKYUZFCJECTSTPVTNDNWDSENUHQTVZXYBZSQXGJJILONKEDOGSTFWDUCYEGUDUQUQJIJDZSOUWKLUYENGPMAWWSAYZYBECKCIAXGRMKBJZVAFDIOCZPDBWPVAMFXIQAVFXQRMTRENMRIYBTGEZOLMXSJJDQVWOQTLMZCNHSOXTRRSRLKLJVJZFCPFBYERVOR");
    msg.flags = 137U;
    const char tmp_msg_0[] = {29, 96, 117, 112, 104, -11, 103, 53, -13, 22, 101, -80, 0, -96, 62, -118, -12, -117, -91, 44, 96, 123, 125, 22, 59, -43, -38, -43, 60, -23, -110, 75, -84, 101, -80, 117, 92, -46, -1, 13, -76, -94, 95, -90, 42, -43, -22, -60, 72, 22, -96, 2, -85, -29, -114, -69, -51, 121, -104, 17, -120, -126, -123, -14, 100, 76, -57, 18, -113, 5, -110, 61, -44, 32, -92, -77, -53};
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
    msg.setTimeStamp(0.48765487298351573);
    msg.setSource(18458U);
    msg.setSourceEntity(200U);
    msg.setDestination(14048U);
    msg.setDestinationEntity(144U);
    msg.sys_src.assign("QYADKHIGUAMDQZOHWLLHSTZQSTKGNQHXFWPYJEEIWTVASSSBINTLWVZOLYUKKJMFWZXQJQERCYRCEPDOBVXNT");
    msg.sys_dst.assign("GFMDEHWKSYQSRFRUYPJVEBOEIWJKKGPUQRSZDDQZFXONICAMXXRLPMDPGZOGVTBGRWAECTWKVEEITDTXFHNZEQPXKBVNXPEQZORCYRJNQWWNWMONRHKXLUGMSYTUJKTKHUDCLYCOLYTMMSMVHYSTNJFVADDOCJBRIQBIKNNEAGUWYFLFHEPLIDICSAQSDSWJGZVTFZCMVOQJYLBVZRUJBVXYLTBWF");
    msg.flags = 92U;
    const char tmp_msg_0[] = {48, 25, -48, -128, -72, 77, -123, 48, 0, 13, -7, 45, -90, -43, -124, -120, -105, 28, 34, 48, 37, 102, -29, -46, -71, -37, 97, -85, -63, 83, 98, -113, 28, 46, 37, 45, -31, 40, 72, 34, -117, 28, 117, 58, -25, 70, -3, 39, 28, 103, 103, 120, -127, 76, 92, -23, 92, -7, 114, -115, 2, -23, -27, 87, 28, -123, -46, -46, -98, 4, -121, 27, -49, -76, 90, -69, 17, -126, 9, 56, -109, -47, -8, -63, 18, -72, 82, 67, 84, 121, 98, 6, -52, -39, -82, -93, 44, -96, 71, -90, 104, -31, 28, 15, 31, -5, 50, 104, 119, -101, -11, 45, 75, -62, -108, -90, 60, -47, -127, -41, 75, 120, -105, 47, 63, 60, 70, -14, -38, 117, -119, -101, 16, -77, 37, 44, -119, -100, 48, -9, -75, -8, 94, -78, 53, 121, 85, 47, -12, 124, -125, 29, -60, 111, -5, 101, -42, -89, 52, -28, 79, 27, 114, 121, -69, 79, 121, -23, 65, -67, 84, -25, 41};
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
    msg.setTimeStamp(0.3532787820934358);
    msg.setSource(52160U);
    msg.setSourceEntity(55U);
    msg.setDestination(16804U);
    msg.setDestinationEntity(84U);
    msg.sys_src.assign("SJUXTNXFQKAGQHOIKVONGTIFMBMZXKIMOFBQUJUDMROQSWKRXWEIPERJXTLZXKTOSSYUIANYPNYYVHMVOTKLGAQJQSITMPWZHFFLEDEFTCDRFKAUWVGTSLRSGYNHPUJPBYWVBCOAHWOJTRKHLKJNDQFUYJBQRMRNVGCOLOZHLZLQCXPHARJEDCILUFDCPDGDEICMAIRGYQSWBWGNAMXSCEVCAEZSELNIVHPWK");
    msg.sys_dst.assign("ZTCGKYHXVGBQWMIYFQOUTBDLDVPRSOKQLXPNRVLWWVADTDIKQZBBCSEGJQSUHVWSVZCZADFFJNKKYLNDGPAESHKUTJRXINZMPYLVBUUPHIRBXIALWTQPVYHI");
    msg.flags = 226U;
    const char tmp_msg_0[] = {-125, 85, 86, -29, 88, -17, 4, -42, -53, -58, 11, 49, -121, 99, -71, -112, 15, 41, -46, 77, 88, 99, 74, -81, 27, 43, -56, -88, 99, -2, -45, -74, 97, -18, 123, -77, 91, 116, -3, 9, -125, -110, -31, 61, -78, -26, -84, 116, 103, 98, 48, -11, -116, 90, -117, 78, -84, 21, -26, 12, 24, 60, -121, 123, -69, -83, 117, 32, -96, 84, -46, -95, 11, 84, 101, 60, 69, 82, 1, -104, -6, -115, -64, -118, 45, -98, 68, -37, 36, -105, 8, 1, -96, -102, -13, -117, 38, 79, -89, 13, 99, -10, -49, -78, -17, -54, -71, 86, 76, 86, -20, -82, -73, -69, 4, -97, -20, 71, 109, 65, -26, -6, -77, 7, -14, -33, 21};
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
    msg.setTimeStamp(0.9946350163709495);
    msg.setSource(31084U);
    msg.setSourceEntity(147U);
    msg.setDestination(305U);
    msg.setDestinationEntity(30U);
    msg.seq = 20934U;
    msg.value = 224U;
    msg.error.assign("QRKDBWBXKAJNDBXTUAUHPQXFUNGKUVTRNMSFWSJCGIMERIDDTXLCIMOHIKYSZVZGPKBEBVXYNUWFIDIHEEHMNJLSVNUOUJZKUTGMFAVHGJOSTPVYMNXICTQKRRRCELXORZGWDWRNMWFFQONHZMQIYARFKQQOOILC");

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
    msg.setTimeStamp(0.8193230385145688);
    msg.setSource(35630U);
    msg.setSourceEntity(23U);
    msg.setDestination(12834U);
    msg.setDestinationEntity(222U);
    msg.seq = 41481U;
    msg.value = 71U;
    msg.error.assign("TTERKOZCLZDSENQUEYWVOC");

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
    msg.setTimeStamp(0.7122153636415657);
    msg.setSource(7719U);
    msg.setSourceEntity(79U);
    msg.setDestination(10962U);
    msg.setDestinationEntity(104U);
    msg.seq = 4694U;
    msg.value = 81U;
    msg.error.assign("OCJQLVTPHIABZFRUXMXZCBTUFPNFKJKNEPEAOWXVSAVMIYTSVZNSDXMWWVWHZCCMXFYIPONINRBGRDVJPZQNVHEOCTRXTWTFZAWLIEZMROLRAUVRPTYKYJHUQGHILUWGBOMOKVPECQPYUKNWYJSIFQHEZCQILQMGDGFLZFSOHBBXLJRSHRDESONXYDJCG");

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
    msg.setTimeStamp(0.2776076569561544);
    msg.setSource(23233U);
    msg.setSourceEntity(78U);
    msg.setDestination(13056U);
    msg.setDestinationEntity(133U);
    msg.seq = 37526U;
    msg.sys.assign("RDCBQKOFKETLDJKDTUIYNJRZPJVXEEKOJMATHOXPQZZRIRLWZJOKCQTSBKAWHVHDWPFUZTGHBGXBIMVYJTXTSOUGUXURGUVPZSATMNPCIJFNBCPNARSSKQQERAQQJSEMAOVOLVHIUYYYEQLBWSSNGWWZGYRPKIMPFRDZDYWMZHBMCMVNXDSCROOMFIQD");
    msg.value = 0.25640788824796756;

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
    msg.setTimeStamp(0.06446712561044887);
    msg.setSource(22657U);
    msg.setSourceEntity(45U);
    msg.setDestination(18297U);
    msg.setDestinationEntity(181U);
    msg.seq = 48708U;
    msg.sys.assign("MZSPAWRDDRNCDLHFYQGJBJEYLWBMPDVJYAOBILTRJSHTKSKDF");
    msg.value = 0.2605421958376868;

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
    msg.setTimeStamp(0.12686149561657534);
    msg.setSource(25764U);
    msg.setSourceEntity(69U);
    msg.setDestination(5942U);
    msg.setDestinationEntity(238U);
    msg.seq = 24906U;
    msg.sys.assign("AGKCUVFAKISJDQSLQJCSLAHKGZSMCNCIUPIPYZXNQPRICOJQYHMJQFJBIVBQNMVFAHJMBIMCSWBHRPABKKXSWZBADMZLSWTKHXNMWNQIUDEQUGVKAY");
    msg.value = 0.2565164633985145;

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
    msg.setTimeStamp(0.17530014566609353);
    msg.setSource(7605U);
    msg.setSourceEntity(254U);
    msg.setDestination(57865U);
    msg.setDestinationEntity(162U);
    msg.action = 127U;
    msg.longain = 0.9289849604332135;
    msg.latgain = 0.6555696103011661;
    msg.bondthick = 3905313948U;
    msg.leadgain = 0.5507826197335909;
    msg.deconflgain = 0.20156349869362578;

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
    msg.setTimeStamp(0.5253470937709637);
    msg.setSource(30649U);
    msg.setSourceEntity(87U);
    msg.setDestination(12236U);
    msg.setDestinationEntity(242U);
    msg.action = 242U;
    msg.longain = 0.5078338374022916;
    msg.latgain = 0.0022743543046648274;
    msg.bondthick = 123123676U;
    msg.leadgain = 0.4944594824524765;
    msg.deconflgain = 0.46216003851335796;

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
    msg.setTimeStamp(0.8464127156821534);
    msg.setSource(47437U);
    msg.setSourceEntity(58U);
    msg.setDestination(56750U);
    msg.setDestinationEntity(140U);
    msg.action = 129U;
    msg.longain = 0.5888869357117206;
    msg.latgain = 0.04481831425123772;
    msg.bondthick = 791258827U;
    msg.leadgain = 0.024248865575710377;
    msg.deconflgain = 0.6148427027805902;

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
    msg.setTimeStamp(0.7241484103927636);
    msg.setSource(52126U);
    msg.setSourceEntity(244U);
    msg.setDestination(35765U);
    msg.setDestinationEntity(247U);
    msg.err_mean = 0.2471022639143674;
    msg.dist_min_abs = 0.6549775008930507;
    msg.dist_min_mean = 0.2045401675129126;

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
    msg.setTimeStamp(0.8035678772578407);
    msg.setSource(5922U);
    msg.setSourceEntity(137U);
    msg.setDestination(14507U);
    msg.setDestinationEntity(222U);
    msg.err_mean = 0.688720044117232;
    msg.dist_min_abs = 0.4640625539425899;
    msg.dist_min_mean = 0.1868547648805493;

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
    msg.setTimeStamp(0.3927302772247264);
    msg.setSource(16592U);
    msg.setSourceEntity(239U);
    msg.setDestination(54232U);
    msg.setDestinationEntity(12U);
    msg.err_mean = 0.06020339274595321;
    msg.dist_min_abs = 0.25360896798427346;
    msg.dist_min_mean = 0.3862577680054019;

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
    msg.setTimeStamp(0.923784738186012);
    msg.setSource(59572U);
    msg.setSourceEntity(165U);
    msg.setDestination(48542U);
    msg.setDestinationEntity(87U);
    msg.action = 60U;
    msg.lon_gain = 0.24297549449184053;
    msg.lat_gain = 0.9799457376532551;
    msg.bond_thick = 0.7815128085398254;
    msg.lead_gain = 0.467416347881227;
    msg.deconfl_gain = 0.30971681058644684;
    msg.accel_switch_gain = 0.2790657673840421;
    msg.safe_dist = 0.5427151944191818;
    msg.deconflict_offset = 0.7637569100115591;
    msg.accel_safe_margin = 0.5889162905579162;
    msg.accel_lim_x = 0.7700851910264255;

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
    msg.setTimeStamp(0.5485914164901817);
    msg.setSource(34102U);
    msg.setSourceEntity(75U);
    msg.setDestination(24666U);
    msg.setDestinationEntity(68U);
    msg.action = 206U;
    msg.lon_gain = 0.978535120758891;
    msg.lat_gain = 0.3744674367635463;
    msg.bond_thick = 0.8228526992218318;
    msg.lead_gain = 0.059050045844768695;
    msg.deconfl_gain = 0.6163128380391508;
    msg.accel_switch_gain = 0.4382924964651671;
    msg.safe_dist = 0.9321519549717788;
    msg.deconflict_offset = 0.3605629401385184;
    msg.accel_safe_margin = 0.4382704867913272;
    msg.accel_lim_x = 0.5538955206303485;

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
    msg.setTimeStamp(0.4996864486388215);
    msg.setSource(48563U);
    msg.setSourceEntity(150U);
    msg.setDestination(53403U);
    msg.setDestinationEntity(105U);
    msg.action = 14U;
    msg.lon_gain = 0.8703250590729781;
    msg.lat_gain = 0.41685407364001337;
    msg.bond_thick = 0.07627158581592453;
    msg.lead_gain = 0.24896547175410033;
    msg.deconfl_gain = 0.6748167062846112;
    msg.accel_switch_gain = 0.2836532081481349;
    msg.safe_dist = 0.06521134738433854;
    msg.deconflict_offset = 0.6743024383006245;
    msg.accel_safe_margin = 0.9334115679355522;
    msg.accel_lim_x = 0.7542848574128928;

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
    msg.setTimeStamp(0.6438690419423737);
    msg.setSource(62370U);
    msg.setSourceEntity(144U);
    msg.setDestination(45142U);
    msg.setDestinationEntity(175U);
    msg.type = 141U;
    msg.op = 150U;
    msg.err_mean = 0.6199630030448309;
    msg.dist_min_abs = 0.7706601474756992;
    msg.dist_min_mean = 0.20794131840648555;
    msg.roll_rate_mean = 0.5309805255941301;
    msg.time = 0.5125479297002565;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 21U;
    tmp_msg_0.lon_gain = 0.6139864775792908;
    tmp_msg_0.lat_gain = 0.6183837969248865;
    tmp_msg_0.bond_thick = 0.40554092031205724;
    tmp_msg_0.lead_gain = 0.18914866505737105;
    tmp_msg_0.deconfl_gain = 0.8729206423803716;
    tmp_msg_0.accel_switch_gain = 0.69781843027117;
    tmp_msg_0.safe_dist = 0.9810850348644158;
    tmp_msg_0.deconflict_offset = 0.7309979888396935;
    tmp_msg_0.accel_safe_margin = 0.5512634623362827;
    tmp_msg_0.accel_lim_x = 0.03245224415646253;
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
    msg.setTimeStamp(0.2599673576303385);
    msg.setSource(13036U);
    msg.setSourceEntity(168U);
    msg.setDestination(47988U);
    msg.setDestinationEntity(232U);
    msg.type = 109U;
    msg.op = 139U;
    msg.err_mean = 0.7910583635372641;
    msg.dist_min_abs = 0.07408107328725111;
    msg.dist_min_mean = 0.6721868058533402;
    msg.roll_rate_mean = 0.8589228736192757;
    msg.time = 0.7380062992389855;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 71U;
    tmp_msg_0.lon_gain = 0.6511229443213457;
    tmp_msg_0.lat_gain = 0.5040971357962216;
    tmp_msg_0.bond_thick = 0.12363469732820076;
    tmp_msg_0.lead_gain = 0.2799023170211634;
    tmp_msg_0.deconfl_gain = 0.4745957376974119;
    tmp_msg_0.accel_switch_gain = 0.250223413514315;
    tmp_msg_0.safe_dist = 0.5201270280975726;
    tmp_msg_0.deconflict_offset = 0.06627125613261187;
    tmp_msg_0.accel_safe_margin = 0.9948254289845018;
    tmp_msg_0.accel_lim_x = 0.09155722704064395;
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
    msg.setTimeStamp(0.7834286367911724);
    msg.setSource(37876U);
    msg.setSourceEntity(107U);
    msg.setDestination(43848U);
    msg.setDestinationEntity(244U);
    msg.type = 56U;
    msg.op = 110U;
    msg.err_mean = 0.19123010460245415;
    msg.dist_min_abs = 0.06529778965655131;
    msg.dist_min_mean = 0.7890218723626096;
    msg.roll_rate_mean = 0.5387375784898107;
    msg.time = 0.8592306388043786;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 20U;
    tmp_msg_0.lon_gain = 0.5962430146886566;
    tmp_msg_0.lat_gain = 0.8351669630485705;
    tmp_msg_0.bond_thick = 0.8601774061661628;
    tmp_msg_0.lead_gain = 0.0680673819649884;
    tmp_msg_0.deconfl_gain = 0.9995031718055114;
    tmp_msg_0.accel_switch_gain = 0.5438017540604458;
    tmp_msg_0.safe_dist = 0.23108144169848455;
    tmp_msg_0.deconflict_offset = 0.5968350769556868;
    tmp_msg_0.accel_safe_margin = 0.8711417195467046;
    tmp_msg_0.accel_lim_x = 0.5091431633657324;
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
    msg.setTimeStamp(0.7811189735547929);
    msg.setSource(60405U);
    msg.setSourceEntity(135U);
    msg.setDestination(9815U);
    msg.setDestinationEntity(7U);
    msg.uid = 67U;
    msg.frag_number = 10U;
    msg.num_frags = 41U;
    const char tmp_msg_0[] = {-1, 77, -16, -76, 86, -107, 58, 78, 114, -116, -36, -34, 39, 125, -14, 64, -78, 24, -56, 1, 65, -50, 79, -119, -98, -64, -127, -118, 126, 62, -3, 86};
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
    msg.setTimeStamp(0.13221041026614122);
    msg.setSource(35247U);
    msg.setSourceEntity(235U);
    msg.setDestination(28409U);
    msg.setDestinationEntity(23U);
    msg.uid = 79U;
    msg.frag_number = 180U;
    msg.num_frags = 178U;
    const char tmp_msg_0[] = {-72, 48, 84, -79, 44, -116, -94, 29, 103, 97, -42, 92, 47, -40, 75, 17, 107, -126, -43, 96, 24, 102, 49, -60, 96, 44, 112, 126, 10, 109, -1, -58, 122, -20, -62, 8, -77, -40, -83, -38, -29, 47, 24, -11, -65, -117, -41, -22, 31, 33, 66, 35, 0, -106, -83, 63, -93, -83, 54, -91, -16, -32, 98, 72, 57, -31, -107, -88, -72, 121, 114, 25, -73, 120, 79, 55, -4, 59, 47, -82, -61, -120, 50, -108, -96, 54, 59, 68, -106, 102, 19, -62, 121, -6, -8, -47, 115, 112, 99, 112, 72, 120, -35, -126, 104, 118, -80, 18, -13, 68, 11, -110, 95, 39, 117, -108, -25, 126, 62, -93, 23, -79, -26, -107, -39, -114, -92, -51, -22, -76, 17, -119, 26, 113, -30, 25, 112, -16, -33, 107, 75, -20, 59, 14, -33, -63, -98, 26, 55, -8, -128, 125, -68, -66, -17, -30, -34, -39, -96, -40, 31, -52, 62, -104, -70, 87, -117, 89, -67, 25, 109, -25, -121, 53};
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
    msg.setTimeStamp(0.9065775670830749);
    msg.setSource(22308U);
    msg.setSourceEntity(162U);
    msg.setDestination(15787U);
    msg.setDestinationEntity(107U);
    msg.uid = 12U;
    msg.frag_number = 95U;
    msg.num_frags = 54U;
    const char tmp_msg_0[] = {115, -40, -73, -103, -18, 26, -107, 105, -86, -54, 104, -38, 108, -17, -57, -60, -113, 9, 81, -18, 102, 124, -108, 36, -64, 26, 22, 106, 65, 17, 75, 2, -117, 119, 60, -43, -60, -116, -25, -35, -103, 77, 13, -93, -2, 56, -124};
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
    msg.setTimeStamp(0.8329404964838549);
    msg.setSource(319U);
    msg.setSourceEntity(235U);
    msg.setDestination(61440U);
    msg.setDestinationEntity(164U);
    msg.content_type.assign("FOYOQOFDMKWDQRCOVHGTQSIJSVPOZGZCOHNXAIFDCGZBMEPAPUGCZULJIPSTLHVFKGTIOZUEGXYTKDKT");
    const char tmp_msg_0[] = {100, 103, -105, -97, 56, 39, 81, -34, 41, 1, -19, 66, 53, 36, -36, 2, -43, -68, -114, -23, -72, -37, -66, -4, -120, -56, 53, -91, 41, 7, -46, -63, 12, 70, 110, -38, 123, 108, 115, 126, -44, 51, 113, 87, -31, 106, 65, -120, 110, 35, 64, 86, 60, -24, 50, 118, -87, 19, -40, 13, -61, 115, 28, -71, 52, -106, 125, -110, -2, 95, 73, 63, 54, 62, -71, 36, 76, 39, -22, 92, 76, 59, 118, 80, -24, 99, 0, 105, -27, -55, 124, -83, -97, 36, -72, 17, -94, 46, 89, -76, -82, 121, 4, 70, 50};
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
    msg.setTimeStamp(0.04806416698909988);
    msg.setSource(33228U);
    msg.setSourceEntity(140U);
    msg.setDestination(3666U);
    msg.setDestinationEntity(23U);
    msg.content_type.assign("GCBFCBGODHZKFVTYNXDLIJFQRSKMVSZYIHPGQAHREGFNNIRTZMMNMOUCKESILYZMWLLUICQKYSZACTRWSWVEUHHERDPUDINVYRJMGTMPWIOPTJBIJKPNYAIPCAUDLBXKBVTJCVNQYAAFJORFEDHHWOXJXJTAZXFJWQEIZLOCDTREQHP");
    const char tmp_msg_0[] = {-82, -124, -17, 104, -55, 118, 87, -69, 117, -31, 43, -29, -103, -49, 27, 126, 89, 69, 109, 55, -70, 5, -65, 119, -68, 34, -109, 53, 48, -77, -44, -51, 81, -101, 108, -102, -61, -95, 4, 74, 42, 110, 100, -65, -112, -34, 47, 4, 107, 125, 29, -39, -70, 126, -42, -58, 33, 55, 52, -113, 80, -82, 84, -78, 36, 98, 32, -89, 29, -13, -21, -98, -73, 115, -18, 30, -76, 16, -120, -116, 105, 39, 26, -80, 4, -11, -9, -10, 64, -31, 14, 81, 125, 17, 61, -9, -17, -83, 83, 102, -120};
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
    msg.setTimeStamp(0.6436701989805294);
    msg.setSource(20161U);
    msg.setSourceEntity(210U);
    msg.setDestination(47379U);
    msg.setDestinationEntity(250U);
    msg.content_type.assign("GRVLGKHCCVETOODSYNHMTPMXHQAIBYUTCNAUKAQLSDIKTSPFDFMKSOQJ");
    const char tmp_msg_0[] = {115, 107, 93, -92, 86, -45, -115, -128, 10, 125, 93, 100, -118, -56, -63, 20, 98, 33, -22, -32, 17, -45, 68, -38, 50, -78, -109, -95, 62, 124, -8, 2, -11, 124, -70, 108, -34, -9, -10, -31, 35, -112, 8, -41, 106, -21, 66, 57, -41, -69, 80, 76, -104, 110, -41, 2, -121, -88, 99, -112, -43, -108, -14, -39, -114, -30, -21, -41, 111, 27, -105, -36, -43, 103, 17, -36, -41, 92, 57, -13, -12, 97, -56, 32, 99, -55, -76, -120, 28, 36, 121, -29, 32, 123, 47, -1, -9, 60, -60, 66, -46, -122, -107, -8, -83, -10, 21, 112, -1, 5, 2, -44, 13, -91, -106, 18, -101, 109, 31, -4, -21, -85, -104, -110, 88, -99, -58, 39, 3, -86, 98, -69, 73, -4, -57, -52, -23, -16, -39, -74, 72, 38, 48, 123, -29, 25, 23, 90, 15, -4, -12, 38, 54, 95, 64, -5, -128, 115, -8, 105, -98, 76, -103, -86, -76, -68, 46, 98, 37, 100, 105, -8, 83, -66, -26, -128, 84, -117, 114, -34, -17, 15, -59, 2, 29, -40, 39, 30, 52, -112, -107, -49, 122, 48, -127, -59, -71, -59, 109};
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
    msg.setTimeStamp(0.9854853532353819);
    msg.setSource(8001U);
    msg.setSourceEntity(113U);
    msg.setDestination(46803U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.9181235153605197);
    msg.setSource(60069U);
    msg.setSourceEntity(76U);
    msg.setDestination(62140U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.8323573641429696);
    msg.setSource(27083U);
    msg.setSourceEntity(183U);
    msg.setDestination(22330U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.046351197591681936);
    msg.setSource(63503U);
    msg.setSourceEntity(174U);
    msg.setDestination(4586U);
    msg.setDestinationEntity(165U);
    msg.target = 26291U;
    msg.bearing = 0.8043715911624861;
    msg.elevation = 0.4839973544908397;

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
    msg.setTimeStamp(0.9264866746730651);
    msg.setSource(26643U);
    msg.setSourceEntity(172U);
    msg.setDestination(24325U);
    msg.setDestinationEntity(163U);
    msg.target = 17569U;
    msg.bearing = 0.5688442637680046;
    msg.elevation = 0.8112679192984863;

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
    msg.setTimeStamp(0.16248454194745665);
    msg.setSource(14013U);
    msg.setSourceEntity(105U);
    msg.setDestination(49994U);
    msg.setDestinationEntity(229U);
    msg.target = 9461U;
    msg.bearing = 0.19770187698563269;
    msg.elevation = 0.6861594139055216;

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
    msg.setTimeStamp(0.5324525593547662);
    msg.setSource(61173U);
    msg.setSourceEntity(101U);
    msg.setDestination(27582U);
    msg.setDestinationEntity(199U);
    msg.target = 41420U;
    msg.x = 0.2276867735644228;
    msg.y = 0.5017686104107887;
    msg.z = 0.44477438033154093;

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
    msg.setTimeStamp(0.11675236435941727);
    msg.setSource(37773U);
    msg.setSourceEntity(52U);
    msg.setDestination(27235U);
    msg.setDestinationEntity(65U);
    msg.target = 1458U;
    msg.x = 0.4239518880780164;
    msg.y = 0.5534862352237847;
    msg.z = 0.5895455333992917;

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
    msg.setTimeStamp(0.2249476838891945);
    msg.setSource(37644U);
    msg.setSourceEntity(213U);
    msg.setDestination(272U);
    msg.setDestinationEntity(147U);
    msg.target = 64084U;
    msg.x = 0.4170422317080501;
    msg.y = 0.06007573494129348;
    msg.z = 0.34251194952188935;

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
    msg.setTimeStamp(0.21533580553546938);
    msg.setSource(54949U);
    msg.setSourceEntity(37U);
    msg.setDestination(14947U);
    msg.setDestinationEntity(248U);
    msg.target = 51013U;
    msg.lat = 0.5272289908807385;
    msg.lon = 0.6262625530788427;
    msg.z_units = 62U;
    msg.z = 0.0895451534079128;

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
    msg.setTimeStamp(0.8753237781740594);
    msg.setSource(14467U);
    msg.setSourceEntity(99U);
    msg.setDestination(40291U);
    msg.setDestinationEntity(167U);
    msg.target = 19326U;
    msg.lat = 0.8439633637202223;
    msg.lon = 0.639799609579392;
    msg.z_units = 133U;
    msg.z = 0.1677817517575595;

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
    msg.setTimeStamp(0.8589443473149594);
    msg.setSource(61826U);
    msg.setSourceEntity(136U);
    msg.setDestination(16690U);
    msg.setDestinationEntity(8U);
    msg.target = 41356U;
    msg.lat = 0.4592214636366502;
    msg.lon = 0.9684646309582974;
    msg.z_units = 197U;
    msg.z = 0.4366671726499384;

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
    msg.setTimeStamp(0.056788940176995206);
    msg.setSource(40320U);
    msg.setSourceEntity(80U);
    msg.setDestination(44445U);
    msg.setDestinationEntity(60U);
    msg.locale.assign("JUYYOQIOGAPOXTJZXEMOIDXEUTCVLGKJFQRCJKZKUZSNHEHTYCLAUSBYJQPELDCXVRIATVYWYONMPKHBZWECKJXUTVPAQLNBTZSIIHTFNBPPHJGWHDMXBMFKVDWKRVESDEBWXEVXCIHHQJEEMTWYBGCFLLFWUOOUALRPYXKSUTZALGVCZQIKWKHNRDN");
    const char tmp_msg_0[] = {123, -123, -120, 110, -4, 46, -73, -91, 113, -53, 46, 32, 84, 40, 23, -101, -108, -95, -43, -1, -113, -25, 58, -103, -89, -107, 126, 55, -77, -122, 27, 55, 4, 80, 99, 33, 37, -115, 83, 34, 86, 8, -30, 93, 109, -81, 84, 34, -68, -63, -62, 40, 56, -112, 124, 67, 56, 4, 121, 92, 73, -72, 31, 18, -118, 19, 6};
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
    msg.setTimeStamp(0.5639140241034707);
    msg.setSource(7875U);
    msg.setSourceEntity(200U);
    msg.setDestination(30912U);
    msg.setDestinationEntity(242U);
    msg.locale.assign("IBVVQEBQPTDNGEKFLJKJQUUVRIYWVMUIQOIZCNWNCFNHGFMSIRXFNJQCHFGFSDEZDUVGGBMRPLNIZKMMREUMHZINSCWOYCWTKXUFOKWWPIGZOYIXELUXUVCSATHULHTOSBWSAMJYSCEHDTJLTNCDOXNKWFGJCDAQYHQAPUAVAHWPVXHZFJALOPBXTRDZ");
    const char tmp_msg_0[] = {-112, -95, 116, 29, 15, 18, -26, -29, 20, 72, 121, 60, 77, 124, -86, -33, -40, 65, -82, -12, -18, 27, 8, -60, -25, -5, -78, -127, 75, -65, -2, -20, -29, -116, 64, -30, -63, 7, 40, -68, 99, 110, 79, -122, -19, -18, -30, 75, 123, 55, 41, -121, 83, -65, -108, 76, -49, -122, 124, -113, -87, 115, 105, 25, 103, -99, 94, -8, -50, -41, 11, 51, -12, 70, -1, 101, 60, -28, 9, -80, 24, -120, 121, 64, -49, 80, 55, 102, -54, 97, 61, -128, -64, -7, 20, 24, 94, -31, -14, 84, 52, -116, -39, 85, -64, -78, 98, 92, 101, 79, -62, 114, -58, 77, -121, 118, 43, -1, 72, -72, 90, 84, -96, 59, -53, -33, -12, -33, -110, 102, 71};
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
    msg.setTimeStamp(0.3803110437886572);
    msg.setSource(28040U);
    msg.setSourceEntity(3U);
    msg.setDestination(51385U);
    msg.setDestinationEntity(139U);
    msg.locale.assign("VPMOYDXOMQCYWRVKFXWVHRVRDPIXDASMTGNUNQSHDUAQFPTVLBCLHESRRRXIGYOZNIEKIMVCJFWJPJSZVNEVSNCPQHOLNSQSPPBY");
    const char tmp_msg_0[] = {58, 114, -116, 56, -82, 121, 9, -79, -11, 76, 4, 67, -118, -74, -104, 124, 16, 108, 105, 64, -45, 48, 107, 0, -19, 112, 44, 94, 19, 105, -52, -3, 106, 60, -99, 112, -56, -20, -120, -116, -82, -49, 42, 24, 89, -39, 124, -85, 4, -9, 54, 42, -5, -128, 82, -62, 97, -41, -2, 81, 35, 99, -7, -34, 116, 66, 14, -50, -72, -20, 44, -96, 58, -60, -29, -108, -56, 101, -24, -6, 2, 20, 50, -89, 47, -7, 114, -82, -37, -121, 26, 125, -116, 78, -34, 18, 24, 46, -65, -47, 105, 83, -41, -63, -109, -106, -107, -12, -4, -26, -18, 21, 66, -98, -27, 120, 3, -91, 23, 66, 1, 39, -24, 27, -7, -65, -32, -35, 120, -53, 66, 82, 113, -43, -100, -117, -120, -3, 44, -40, 89, -122, -25, 54, 109, 7, -59, -114, 35, 10};
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
    msg.setTimeStamp(0.874680824861061);
    msg.setSource(47569U);
    msg.setSourceEntity(233U);
    msg.setDestination(17298U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.7479242772896028);
    msg.setSource(40943U);
    msg.setSourceEntity(57U);
    msg.setDestination(55827U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.814810890480201);
    msg.setSource(25536U);
    msg.setSourceEntity(147U);
    msg.setDestination(31380U);
    msg.setDestinationEntity(167U);

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
