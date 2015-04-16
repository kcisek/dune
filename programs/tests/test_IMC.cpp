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
// IMC XML MD5: af98040a668ab274b133e78bcb2f376e                            *
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
    msg.setTimeStamp(0.8322785776912467);
    msg.setSource(142U);
    msg.setSourceEntity(96U);
    msg.setDestination(55751U);
    msg.setDestinationEntity(221U);
    msg.state = 176U;
    msg.flags = 209U;
    msg.description.assign("RWZEZNKYOHNSVOQIUWGIIJZPURDWTWPBKRRCTTGNDUMOXHBSIQMONSSNVFYCUUWOEJSDRVQICCOSTQQLJHHXIREUBTBCMCXCMPLWFBAKGKAKOFTZARGBHATPWXPLDOZDYBJMCDWZIBZTYDQAJKRMLUGFEYMTXGUMNJPYWLFNVQANRJXGVVFXFKCXOTPSCYLALHAXMURIEGLSSEVXWZZQFOLQLGDEHNKPIYQFHPKMA");

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
    msg.setTimeStamp(0.8957034900988318);
    msg.setSource(52590U);
    msg.setSourceEntity(202U);
    msg.setDestination(37864U);
    msg.setDestinationEntity(222U);
    msg.state = 25U;
    msg.flags = 212U;
    msg.description.assign("KVRGWOKXDYLLXCZLTXXUTISQUFJVZHDPWFROIQNVFADKSFWTLEOOZLFNQODONFLMQWCYWYTEHNBXDBCKPRJIRRJJUVJAAQMEWAHPVJNXCFBBFZKCHYTZYPYZYCIQMSIVAEXYNVGOMSPTHZHTSELWHPMGBETJTIBXEDLURJVQCPAKHENKURBFYXVZAUKGNOGSWCPVIZUQUPMAASERUCSYQLWAGNJQIIXSRGKDLMBMPGZMHRGMBJCIT");

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
    msg.setTimeStamp(0.2236597807028594);
    msg.setSource(34051U);
    msg.setSourceEntity(118U);
    msg.setDestination(3143U);
    msg.setDestinationEntity(27U);
    msg.state = 174U;
    msg.flags = 76U;
    msg.description.assign("GYXICMWSLEIADNSQQQVLMJBUVBDKDILCAJDGKFTWGEOUGWYSMKHEBRFHDRVLZUKFBAIALMCENGHXGWR");

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
    msg.setTimeStamp(0.7281987977614155);
    msg.setSource(21259U);
    msg.setSourceEntity(232U);
    msg.setDestination(38680U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.1674686557879268);
    msg.setSource(46869U);
    msg.setSourceEntity(88U);
    msg.setDestination(33180U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.9303317733805416);
    msg.setSource(14642U);
    msg.setSourceEntity(23U);
    msg.setDestination(30577U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.4054951838400145);
    msg.setSource(47853U);
    msg.setSourceEntity(1U);
    msg.setDestination(8145U);
    msg.setDestinationEntity(121U);
    msg.id = 89U;
    msg.label.assign("NEUFPPMAVLUNOFWQFNYKXSEGYPGKFFIRJCUDOKDGJTHJJIHCQUDERSPVJBCCVCPSQMOEKATYGGHX");
    msg.component.assign("NYWGBZZTRUUSXEWRNQTCJFLMBZBJUBLRFYEZAPTKLIAVLHJONIUNGHSFZIAJATZHEDGXUDKYMNDTYZILYBAOKPSQEEKVJGWMKCGPSIMXHYQUVCTQXFPUWMREPDGBVVPDORRFX");
    msg.act_time = 51827U;
    msg.deact_time = 8418U;

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
    msg.setTimeStamp(0.1604087613869093);
    msg.setSource(49756U);
    msg.setSourceEntity(56U);
    msg.setDestination(41782U);
    msg.setDestinationEntity(1U);
    msg.id = 88U;
    msg.label.assign("RQCCJXXMQHJSDQWPGJWHXPYSFNLTLUZDBWIFDXSXMFTZGIVKTEATJIAODNVNQULBEOAIQLTNMIBIPWRTEFPHJPEVCAWUHSHGBSSGECTXSGRVMJPNWSMZYGFAFYRIKRCZEUROEJNMKABOHYAVAMRKRAWBYHMCHGYNZYJLPBZTCOZKWQTGKONLFEUNFOPKQFLVUXSZLOGHUUE");
    msg.component.assign("MOLAVHWFAJGOKXJ");
    msg.act_time = 29071U;
    msg.deact_time = 45419U;

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
    msg.setTimeStamp(0.15323203769068428);
    msg.setSource(14405U);
    msg.setSourceEntity(23U);
    msg.setDestination(53504U);
    msg.setDestinationEntity(82U);
    msg.id = 131U;
    msg.label.assign("XXKTZKZACFTVNIBXRCVOCSSLSNKGYFUGOLKVMEWOYTOJBHHCYUMOJNJAIRXPDDPKRBNUZXSLGNWNGOXQHPQHCLZBFETRJPMDPMULEVBNUMLDRKMUHRTIZEGZOJELQIWYQOAIPYWZMEBZYEVZFCNFFTQRTYLSJVWOCKHECATJAIDPPERYVEBGHLWWDIQAKODQBVZCISCTRTQSSXWBNNGAWVMXFDDJKHVHFSPMGRLMQGFUXQDAIWBAYH");
    msg.component.assign("HFWUBZRQLXJCVLSXWRAQSZDDXIGQSRMRFAOSYEIYPJWZYKQTZZQDXJLLEOIDKNDHBGQSQGHJCSMTSFLWLGJTNCPPQDAOGG");
    msg.act_time = 28519U;
    msg.deact_time = 32876U;

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
    msg.setTimeStamp(0.6674412534860461);
    msg.setSource(25812U);
    msg.setSourceEntity(200U);
    msg.setDestination(23820U);
    msg.setDestinationEntity(134U);
    msg.id = 86U;

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
    msg.setTimeStamp(0.16276424447837334);
    msg.setSource(6434U);
    msg.setSourceEntity(45U);
    msg.setDestination(26353U);
    msg.setDestinationEntity(250U);
    msg.id = 0U;

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
    msg.setTimeStamp(0.17207517625717417);
    msg.setSource(60995U);
    msg.setSourceEntity(243U);
    msg.setDestination(20517U);
    msg.setDestinationEntity(75U);
    msg.id = 77U;

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
    msg.setTimeStamp(0.6082459327845439);
    msg.setSource(20865U);
    msg.setSourceEntity(218U);
    msg.setDestination(48144U);
    msg.setDestinationEntity(233U);
    msg.op = 161U;
    msg.list.assign("WSPFVKDPMHFKNSYYAIFSMMJPIEFZCDXNEWLXEEKFRNMIPOYWWKA");

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
    msg.setTimeStamp(0.9019853020197355);
    msg.setSource(26833U);
    msg.setSourceEntity(4U);
    msg.setDestination(5984U);
    msg.setDestinationEntity(222U);
    msg.op = 220U;
    msg.list.assign("KHULJLMTDGESGLANMOQOLSKKDGJOBPJEAPCHRSMJZTRKHUXPUBOPOWUSAVWNVQVMZPNDVBUQSTAILDGJQWWWOUZCXHBAXZWTETCSMRCJYFGPQUKITCWNBFEQFKBWPXJAMNCHQLIXVZGFDESXYAEVYBVRNIYVXWHFRILGHAWCPFCEEYHHFTZLTSXPSRXNMNVQDYNYDXTKAERYJKIGQ");

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
    msg.setTimeStamp(0.8347188194660925);
    msg.setSource(32712U);
    msg.setSourceEntity(25U);
    msg.setDestination(16851U);
    msg.setDestinationEntity(112U);
    msg.op = 122U;
    msg.list.assign("CKKJAXOCFHRPQDYKEIEYQDOUPMJGLCVVIVSXBKFPALIAFQLVTVWRSUHBXTLMGRNOBFKHXM");

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
    msg.setTimeStamp(0.1385683992608101);
    msg.setSource(47117U);
    msg.setSourceEntity(209U);
    msg.setDestination(27958U);
    msg.setDestinationEntity(83U);
    msg.value = 197U;

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
    msg.setTimeStamp(0.6443191309312521);
    msg.setSource(16568U);
    msg.setSourceEntity(221U);
    msg.setDestination(19057U);
    msg.setDestinationEntity(115U);
    msg.value = 246U;

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
    msg.setTimeStamp(0.4937377616332682);
    msg.setSource(37472U);
    msg.setSourceEntity(187U);
    msg.setDestination(38245U);
    msg.setDestinationEntity(52U);
    msg.value = 191U;

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
    msg.setTimeStamp(0.34697802387910903);
    msg.setSource(16101U);
    msg.setSourceEntity(80U);
    msg.setDestination(34463U);
    msg.setDestinationEntity(84U);
    msg.consumer.assign("GMEKRTPPLPCOOIPRUMFIVIEBZXYWYLGHLABCAHCTTMSSYNVOQBWXKFDBXBWLEXLJYMCTTDAHMIWCRGFTKUNMNCSNJMQZEOTFORGOFJQMKSGJKXEFQZKKYAISIWGXQXDUGXGVAUWTZVHSKFONUJDHVENIPTFZHYSGEYPUUBDVJCHJDGQAUWHWFCTADNYBEHOSPZIIQUHKDLYIZA");
    msg.message_id = 7545U;

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
    msg.setTimeStamp(0.5817859739179105);
    msg.setSource(31107U);
    msg.setSourceEntity(144U);
    msg.setDestination(58316U);
    msg.setDestinationEntity(106U);
    msg.consumer.assign("TOFRPPFYWPUYXSABHNPQMAEYLAOAEXUBTJDNGJNWIGDBXCGAOQVXFCRBGXQ");
    msg.message_id = 42714U;

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
    msg.setTimeStamp(0.193645446901899);
    msg.setSource(32942U);
    msg.setSourceEntity(35U);
    msg.setDestination(20930U);
    msg.setDestinationEntity(11U);
    msg.consumer.assign("GZSOYVJYLVKMEPIEDHFGALIGDVBTKGILGKXQBSWYVXLICPFPUECVFQNZX");
    msg.message_id = 25748U;

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
    msg.setTimeStamp(0.8874962518328675);
    msg.setSource(12033U);
    msg.setSourceEntity(238U);
    msg.setDestination(10314U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.8137746250847185);
    msg.setSource(34307U);
    msg.setSourceEntity(14U);
    msg.setDestination(36384U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.6257453184643862);
    msg.setSource(960U);
    msg.setSourceEntity(195U);
    msg.setDestination(42758U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.028846330322525815);
    msg.setSource(10776U);
    msg.setSourceEntity(102U);
    msg.setDestination(48526U);
    msg.setDestinationEntity(149U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.7456168694771287);
    msg.setSource(11812U);
    msg.setSourceEntity(163U);
    msg.setDestination(21124U);
    msg.setDestinationEntity(220U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.7602233433002649);
    msg.setSource(30747U);
    msg.setSourceEntity(100U);
    msg.setDestination(2472U);
    msg.setDestinationEntity(167U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.0083166277600224);
    msg.setSource(16468U);
    msg.setSourceEntity(111U);
    msg.setDestination(59589U);
    msg.setDestinationEntity(116U);
    msg.total_steps = 133U;
    msg.step_number = 81U;
    msg.step.assign("OUJSBLZEEWDBMQGBZOTRJQPOQSQLBVXKQYDEXRBZZTGROCVRGYSXNAIHDVMDYNFNSFCGFESEMJAWCVXMPDCHUBVFFWGP");
    msg.flags = 206U;

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
    msg.setTimeStamp(0.7972478910630201);
    msg.setSource(49441U);
    msg.setSourceEntity(160U);
    msg.setDestination(23258U);
    msg.setDestinationEntity(182U);
    msg.total_steps = 20U;
    msg.step_number = 114U;
    msg.step.assign("YNELOKNXDTXDMVYCDBWSXDQBWQVVGCGICSINTJQXASNUZRDZAZPAQQRIKFQFBRLSVJJXQDTWWATKAJVQRF");
    msg.flags = 91U;

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
    msg.setTimeStamp(0.9654673981886565);
    msg.setSource(56069U);
    msg.setSourceEntity(150U);
    msg.setDestination(49023U);
    msg.setDestinationEntity(167U);
    msg.total_steps = 65U;
    msg.step_number = 232U;
    msg.step.assign("DARUEPHERQKEBSRZRBVYOUXCNVGIONCJBPOYKXDWXWVUEVMIMKNCLRPMGYKWHDTFJOECJQYAPUFNQWSJNSETVQUEMUDTDTHSKTLJQPKKZVUAHQQXQCCBRLIOFXBTBJBGFIFSOQLLHMXYOSEDZAGKMJLHVXNMXTOMFSWEYLJINFSTOZJZJOUYULAILZGDFYACHWVVBHFYHTKZWIDGC");
    msg.flags = 83U;

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
    msg.setTimeStamp(0.9349792156800899);
    msg.setSource(1778U);
    msg.setSourceEntity(85U);
    msg.setDestination(55790U);
    msg.setDestinationEntity(83U);
    msg.state = 120U;
    msg.error.assign("BUSEDQLBMVWOGHQRUXIIPUOFVNCBUWELNEUJRBSWYZPEMQQWIKLKHEMGKQGUNGVGCOTNHCWAZHHFECVPNUAJELFVWGXAGKODDMAZPPCVZRMMYQCQBNLIJOAFTGWHDYDRJUMGSKLZMVMFOSAIPYRWWIKFDAHVZWAYTPTPIKRPHBS");

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
    msg.setTimeStamp(0.5716634984881128);
    msg.setSource(23605U);
    msg.setSourceEntity(108U);
    msg.setDestination(49596U);
    msg.setDestinationEntity(238U);
    msg.state = 128U;
    msg.error.assign("WIOTMFAIOYXVSVAQKPDUBMJYJFPUZCHIHSZKJURDWLQVGGWCUPOTMWXJQZFOTVJYEBYAPQKITUPAGNRAPZTFPNSRHVJECTAVCLSHXDZOIYBEJYKIQEIMQXMEDOIFCOSADRZWBRNCLMPZ");

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
    msg.setTimeStamp(0.7332454138343959);
    msg.setSource(41116U);
    msg.setSourceEntity(40U);
    msg.setDestination(63281U);
    msg.setDestinationEntity(73U);
    msg.state = 84U;
    msg.error.assign("WKPFDPUFDNMJNGYKZQWOKYOEUAGFWBSVPAXXROGYYKZEQHZ");

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
    msg.setTimeStamp(0.43477124832039604);
    msg.setSource(64833U);
    msg.setSourceEntity(180U);
    msg.setDestination(3617U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.6790232115950154);
    msg.setSource(62917U);
    msg.setSourceEntity(243U);
    msg.setDestination(26619U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.6210071928424197);
    msg.setSource(52654U);
    msg.setSourceEntity(36U);
    msg.setDestination(6492U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.21634156056183784);
    msg.setSource(13225U);
    msg.setSourceEntity(23U);
    msg.setDestination(28630U);
    msg.setDestinationEntity(209U);
    msg.op = 181U;
    msg.speed_min = 0.989747169782589;
    msg.speed_max = 0.29781185540598853;
    msg.long_accel = 0.011799469375677774;
    msg.alt_max_msl = 0.7312003344434124;
    msg.dive_fraction_max = 0.8364103305808295;
    msg.climb_fraction_max = 0.029020363636397706;
    msg.bank_max = 0.6477709009625854;
    msg.p_max = 0.71163944234014;
    msg.pitch_min = 0.879535499750702;
    msg.pitch_max = 0.34932894635126666;
    msg.q_max = 0.4343468276074761;
    msg.g_min = 0.9739231533568691;
    msg.g_max = 0.4833166376891248;
    msg.g_lat_max = 0.9285563195816181;
    msg.rpm_min = 0.5954874096017638;
    msg.rpm_max = 0.28549232793904133;
    msg.rpm_rate_max = 0.08567040191522435;

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
    msg.setTimeStamp(0.6945149024346391);
    msg.setSource(37125U);
    msg.setSourceEntity(214U);
    msg.setDestination(16725U);
    msg.setDestinationEntity(217U);
    msg.op = 202U;
    msg.speed_min = 0.4362579597891242;
    msg.speed_max = 0.49289783331149817;
    msg.long_accel = 0.7526690239854755;
    msg.alt_max_msl = 0.5482991876988341;
    msg.dive_fraction_max = 0.33429051937517407;
    msg.climb_fraction_max = 0.8046350164240582;
    msg.bank_max = 0.5863542536196794;
    msg.p_max = 0.10553734412321814;
    msg.pitch_min = 0.05968756715539869;
    msg.pitch_max = 0.9034933901600225;
    msg.q_max = 0.6286218277174523;
    msg.g_min = 0.45820663097967373;
    msg.g_max = 0.024999859566721128;
    msg.g_lat_max = 0.5810073274235018;
    msg.rpm_min = 0.7969750830291982;
    msg.rpm_max = 0.41703154931843744;
    msg.rpm_rate_max = 0.7921624502740487;

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
    msg.setTimeStamp(0.9601170250753343);
    msg.setSource(34449U);
    msg.setSourceEntity(93U);
    msg.setDestination(1715U);
    msg.setDestinationEntity(17U);
    msg.op = 45U;
    msg.speed_min = 0.8751076965857902;
    msg.speed_max = 0.9637287372570131;
    msg.long_accel = 0.9831665408978056;
    msg.alt_max_msl = 0.8878438502892445;
    msg.dive_fraction_max = 0.3503948884744895;
    msg.climb_fraction_max = 0.5347619000473925;
    msg.bank_max = 0.4162702735612065;
    msg.p_max = 0.4970722803751543;
    msg.pitch_min = 0.7877578202987802;
    msg.pitch_max = 0.08129345793258524;
    msg.q_max = 0.09172892806997579;
    msg.g_min = 0.24405583184071467;
    msg.g_max = 0.5540863217759961;
    msg.g_lat_max = 0.09547034782617281;
    msg.rpm_min = 0.2788524346274023;
    msg.rpm_max = 0.3347148246600067;
    msg.rpm_rate_max = 0.4381499821413479;

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
    msg.setTimeStamp(0.6035156269870638);
    msg.setSource(39780U);
    msg.setSourceEntity(11U);
    msg.setDestination(17109U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.5466211273123829);
    msg.setSource(62302U);
    msg.setSourceEntity(64U);
    msg.setDestination(45426U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.32339678326637744);
    msg.setSource(24440U);
    msg.setSourceEntity(78U);
    msg.setDestination(29861U);
    msg.setDestinationEntity(15U);
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("PZOKPWJFYAJOMFQLKSUBJPAMTBQBVUKYHUGCGGLUVVTWINNUWOLYHZMJSVBWEDZZXNJQLRXUSCACHMGOXXBIIOMUSKNFRTMKJYMRZJGQYDCSINVLYTNPADDIVOCRKSLGMKFPVBNZISQNEVJXEYQRDQLNTAFFDTVGXCRVHTKHHPANCYQZSWDFWOXAEIOBLRHKSYETK");
    tmp_msg_0.timeout = 22582U;
    tmp_msg_0.contents.assign("YVJDUPHFWDZCJSPMIAEDGJQMIFOKKOYVTLLUMTGOINRXHANNNEQFBGEASKMWLOMB");
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
    msg.setTimeStamp(0.9814196217252695);
    msg.setSource(34895U);
    msg.setSourceEntity(170U);
    msg.setDestination(49488U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.8087170617159465;
    msg.lon = 0.1454605516532934;
    msg.height = 0.5967428865200711;
    msg.x = 0.23860794770823468;
    msg.y = 0.11242532516132264;
    msg.z = 0.8690029628423925;
    msg.phi = 0.3497464974731871;
    msg.theta = 0.7316625287924433;
    msg.psi = 0.25333136580572957;
    msg.u = 0.7498287073950132;
    msg.v = 0.8610432833171086;
    msg.w = 0.1143507156256739;
    msg.p = 0.6520511087768248;
    msg.q = 0.6545335577972909;
    msg.r = 0.6221977022086157;
    msg.svx = 0.16716072121784875;
    msg.svy = 0.652881831967951;
    msg.svz = 0.5625535579465684;

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
    msg.setTimeStamp(0.885631721263354);
    msg.setSource(38619U);
    msg.setSourceEntity(18U);
    msg.setDestination(15238U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.4056639267384813;
    msg.lon = 0.3206942044559852;
    msg.height = 0.6642256767997737;
    msg.x = 0.9743900798069461;
    msg.y = 0.8688506611690847;
    msg.z = 0.8616740496261989;
    msg.phi = 0.06475470022865348;
    msg.theta = 0.7838483075260969;
    msg.psi = 0.9425159284147097;
    msg.u = 0.607100314257767;
    msg.v = 0.10122106449924784;
    msg.w = 0.6636449460505159;
    msg.p = 0.23998613514992473;
    msg.q = 0.39611750658499023;
    msg.r = 0.5156238684330435;
    msg.svx = 0.6474368716259141;
    msg.svy = 0.9519060473692121;
    msg.svz = 0.7181579039046383;

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
    msg.setTimeStamp(0.46251913843038317);
    msg.setSource(18576U);
    msg.setSourceEntity(237U);
    msg.setDestination(54558U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.16450323716755455;
    msg.lon = 0.07983394315154269;
    msg.height = 0.20864830718381722;
    msg.x = 0.05633545357143199;
    msg.y = 0.06165477871497249;
    msg.z = 0.3418915545282385;
    msg.phi = 0.9530995060279712;
    msg.theta = 0.20043537180010185;
    msg.psi = 0.37813574162911945;
    msg.u = 0.21254501974040274;
    msg.v = 0.36140005276146625;
    msg.w = 0.808781885948264;
    msg.p = 0.9854467709662488;
    msg.q = 0.9092132101569136;
    msg.r = 0.8336254367835287;
    msg.svx = 0.1341158244923305;
    msg.svy = 0.5076314780119953;
    msg.svz = 0.5421291874062962;

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
    msg.setTimeStamp(0.6843298032386547);
    msg.setSource(7078U);
    msg.setSourceEntity(228U);
    msg.setDestination(36445U);
    msg.setDestinationEntity(25U);
    msg.op = 159U;
    msg.entities.assign("ELWYTNJOBVTNNBAPGKEUNWAHCCWRIRDYVUXGDEGMUHCUISQBWXDIQQHDMAHDS");

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
    msg.setTimeStamp(0.8708549090123274);
    msg.setSource(42881U);
    msg.setSourceEntity(170U);
    msg.setDestination(19569U);
    msg.setDestinationEntity(202U);
    msg.op = 10U;
    msg.entities.assign("GRNWQANYVUUCPHXKTKNZCDKPNEFEABFIDRACRUQVVHTEM");

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
    msg.setTimeStamp(0.14025156190468757);
    msg.setSource(55993U);
    msg.setSourceEntity(201U);
    msg.setDestination(6875U);
    msg.setDestinationEntity(117U);
    msg.op = 58U;
    msg.entities.assign("RETZGOJWTXXTLLMKNSNBKJPABVVPBSRFOAPOTSWMYZHMMZTTDGGIYFIWVRGUNSQLPCEUKJVGQCJIDUUYZSEDGEMFCVZOKXNLRTXATINCILLNJPKWRVXDFHEAEDJUWVQHRZGMNNEJCLRTULSQKFEMULBKSDUTPHZHZJNIHDABLBPAVZYOABQSBQYPVPPKOQQRWVHYBMDXXWXOQCFHAIYHDXCMAAOGQWYYRKMO");

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
    msg.setTimeStamp(0.11371307713985113);
    msg.setSource(51911U);
    msg.setSourceEntity(1U);
    msg.setDestination(51157U);
    msg.setDestinationEntity(242U);
    msg.type = 136U;
    msg.speed = 38466U;
    const char tmp_msg_0[] = {-68, 99, -24, 70, -42, 63, 34, 4, 83, 85, 77, 11, 35, -20, -48, 76, 109, -31, -120, 36, -38, 61, 104, -81, 11, 26, 25, -55, -119, 19, -30, -47, 73, -52, 101, 84, -66, 81, -112, 42, 0, -56, 33, 61, 71, -16, -55, -76, -98, -98, 65, -7, 119, -112, -4, 7, -4, 31, 48, 65, 96, -12, 94, 92, -82, 104, -44, -15, 118, 5, -64, 123, 89, -50, 82, -5, -16, -58, -74, -33, 96, 19, 110, 119, 14, -59, -1, 98, 116, 102, -97, 46, 16, -21, -106, 56, 15, 28, -30, 76, 110, -77, 56, 15, -69, 28, -47, 86, -27, 100, -18, 46, 2, 3, -115, -32, 60, -52, 25, -82, -37, 96, -75, -116, -27, 60, -35, -16, 76, -98, 9, -88, -76, -104, -126, -10, -7, 81, 117, 8, 47, 89, 37, 58, -119, -13, 23, -2, 15, -58, 112, -58, -30, -5, 113, 42, 124, 109, 42, -39, 86, 21, -92, -110, 25, -119, -116, 124, 57, -101, 15, -80, -31, -113, -74, 119, -73, 109, 39, 37, -23, -94, -15};
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
    msg.setTimeStamp(0.3780976081497487);
    msg.setSource(34732U);
    msg.setSourceEntity(137U);
    msg.setDestination(6961U);
    msg.setDestinationEntity(25U);
    msg.type = 250U;
    msg.speed = 33349U;
    const char tmp_msg_0[] = {-42, 5, -27, -11, -44, -51, 36, -69, -106, -66, 46, 62, 93, 85, -64, 34, -22, 90, 1, 34, -64, -103, 68, 126, 58, 0, -23, 12, 72, 52, 119, 125, -49, 8, 115, 16, 103, -11, 124, -52, 56, -85, 29, 23, 124, -123, -80, -110, 19, 122, 54, 45, 94, -73, -29, -1, 54, -122, 108, 118, 12, 10, 66, -42, 73, 27, -60, -66, -74, 52, 23, 32, 125, -122, -13, -126, -73, -90, 25, -16, 8, -105, -58, -106, 96, -115, 28, -41, -59, 54, 75, -8, -96, -77, -72, -127, -41, -113, -20, 15, -29, 81, 17, 31, 14, 33, -111, -111, -63, 64, 7, 82, -26, -75, -55, -23, 109, -31, 17, -14, -60, -41, -69, 58, -58, -114, 88, 83, -64, -54, -103, 113, -52, 96, 96, -103, 61, -69, 60, -44, 55, -17, 79, 63, -118, 62, -119, 112, -120, 72, 109, -8, -107, 36, -5, -92, -41, 74, 55, -97, -14, -75, -124, -91, -40, 92, 125, -74, 97, -11, -94, -32, -78, -24, 83, 83, -100, -112, 121, 45, -59, 79, 57, -74, -32, -113, -120, 22, -73, -125, 78, 110, 56, 87, -112, -6, -73};
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
    msg.setTimeStamp(0.3924881966552226);
    msg.setSource(44920U);
    msg.setSourceEntity(222U);
    msg.setDestination(13500U);
    msg.setDestinationEntity(148U);
    msg.type = 183U;
    msg.speed = 64806U;
    const char tmp_msg_0[] = {56, 74, 73, 69, 89, 28, -15, 13, 124, 14, -126, -46, 6, -67, 60, 79, 90, -22, 7, -28, -121, 81, -33, -88, 123, -36, 67, -124, -16, 81, 122, 42, 97, 110, -10, -107, 106, -50, -44, -40, 106, -74, 97, -19, -14, -34, 88, 11, 103, -35, 118, 51, 41, 21, 27, 54, 5, 11, 15, -127, -88, -41, 83, 68, 117, -111, 58, -16, -53, 120, -62, 118, 1, -93, 15, 10, 30, -79, 90, -14, 37, -114, -84, -93, -1, 30, -40, 43, 100, 34, -76, 5, 119, 63, -71, 78, 79, 56, 17, -93, -121, -127, 9, 84};
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
    msg.setTimeStamp(0.582022107852612);
    msg.setSource(33147U);
    msg.setSourceEntity(120U);
    msg.setDestination(57414U);
    msg.setDestinationEntity(178U);
    msg.op = 60U;
    msg.tas2acc_pgain = 0.3746983077221657;
    msg.bank2p_pgain = 0.2537466666004762;

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
    msg.setTimeStamp(0.6386694506969848);
    msg.setSource(28756U);
    msg.setSourceEntity(48U);
    msg.setDestination(34329U);
    msg.setDestinationEntity(180U);
    msg.op = 65U;
    msg.tas2acc_pgain = 0.6280460479915965;
    msg.bank2p_pgain = 0.3205815863507737;

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
    msg.setTimeStamp(0.7547875538732475);
    msg.setSource(34638U);
    msg.setSourceEntity(86U);
    msg.setDestination(30389U);
    msg.setDestinationEntity(100U);
    msg.op = 125U;
    msg.tas2acc_pgain = 0.8741165787371353;
    msg.bank2p_pgain = 0.4263708635871374;

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
    msg.setTimeStamp(0.22539479802416973);
    msg.setSource(39898U);
    msg.setSourceEntity(237U);
    msg.setDestination(38387U);
    msg.setDestinationEntity(77U);
    msg.available = 3291355209U;
    msg.value = 119U;

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
    msg.setTimeStamp(0.18386289155308932);
    msg.setSource(62630U);
    msg.setSourceEntity(115U);
    msg.setDestination(64545U);
    msg.setDestinationEntity(120U);
    msg.available = 3514123363U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.3788613001356166);
    msg.setSource(24669U);
    msg.setSourceEntity(134U);
    msg.setDestination(40698U);
    msg.setDestinationEntity(166U);
    msg.available = 4099214972U;
    msg.value = 14U;

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
    msg.setTimeStamp(0.12314737614479798);
    msg.setSource(60885U);
    msg.setSourceEntity(100U);
    msg.setDestination(5762U);
    msg.setDestinationEntity(131U);
    msg.op = 82U;
    msg.snapshot.assign("TONNKDMNGAMRHQTWRILODNRGVOWNJEQCYWIBDHTSGJEZENVHCYTSGXEJAQYJNYGJTMSZYXKEAPBDABDZILJNVCXMKAMAQQUXXIHDSHRFGYMRUUOKCQWAKYRUCMLQUVJEKWOZLNAOZLJKVVUSZRECPIHSHHBLPRGDIAHUFLXIBKEWFWXTGFDYZWGPVCSBKBTLMBJFGLKPCQVAQDVCOCXUJIISSYFZXBYTTPEWWLVHIUOBUQFRTPRPFXFZN");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.9338518059148307;
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
    msg.setTimeStamp(0.8024114849351126);
    msg.setSource(56188U);
    msg.setSourceEntity(21U);
    msg.setDestination(42759U);
    msg.setDestinationEntity(253U);
    msg.op = 83U;
    msg.snapshot.assign("ECBDJAEYOCHNHDULLFTCYZCPERKLJKUHOZKMIJMUPWBRIFZBWSWAMMXUXVI");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 47U;
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
    msg.setTimeStamp(0.022703669475721777);
    msg.setSource(7065U);
    msg.setSourceEntity(208U);
    msg.setDestination(33356U);
    msg.setDestinationEntity(122U);
    msg.op = 90U;
    msg.snapshot.assign("TZHSCTVMHBGJJEDYIBTTCNJOCWVQCJMBNRGOZXETVWMOORFAYUENFSSBFQTUULVXJTIZSEJZIWEZUKAZBRARQNBSKWTQUBUGGIKZGJRNWTYJKCWMNOLMWHE");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("EHMOSMLAKCWTUNVVYOKGGTLZ");
    tmp_msg_0.formation_name.assign("BUJAYCDVPWUIUSRTKHEUNLIAU");
    tmp_msg_0.plan_id.assign("VTPDAUOLYMMQGBTSZAVHEKCWIUOEXQQYQLHLTBIYLJJHRGWUKRPDNIZDDAWTFFQXRTKUEVMHRAKEVFOYQPGLSRVIFSXRPUYOCFSJQANXVXZFA");
    tmp_msg_0.description.assign("MRFGDYEDUPXVYRNFEEGOZEKAJTBKLQNUOWSILKZJBRQVWBEXYHNIKBZUEIJYMHPGHOIQNCZCXFVDGPTILZDSHOYGJNP");
    tmp_msg_0.leader_speed = 0.03086431705940007;
    tmp_msg_0.leader_bank_lim = 0.8744964029919141;
    tmp_msg_0.pos_sim_err_lim = 0.7079417092011852;
    tmp_msg_0.pos_sim_err_wrn = 0.4168991216006699;
    tmp_msg_0.pos_sim_err_timeout = 30132U;
    tmp_msg_0.converg_max = 0.917342742980654;
    tmp_msg_0.converg_timeout = 48674U;
    tmp_msg_0.comms_timeout = 47308U;
    tmp_msg_0.turb_lim = 0.023745560736391114;
    tmp_msg_0.custom.assign("VGHFYUSUMDMKVDYGZFSRBZHJLJPIENJE");
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
    msg.setTimeStamp(0.4527413046831259);
    msg.setSource(41267U);
    msg.setSourceEntity(225U);
    msg.setDestination(35211U);
    msg.setDestinationEntity(242U);
    msg.op = 200U;
    msg.name.assign("HVHXCDTIATCNKVWJODGOFDYGOVZSNGWUEYJFFQFRGMADDKLSIEXXAEYMDRPHRPTDXJWECABOJUNKVTLBEUFSVFHVKYTUJNXTMUEXHWCPOOZHPZCFNTJLWSBMQNHLLRBP");

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
    msg.setTimeStamp(0.8273847163152132);
    msg.setSource(63938U);
    msg.setSourceEntity(27U);
    msg.setDestination(28713U);
    msg.setDestinationEntity(220U);
    msg.op = 212U;
    msg.name.assign("EMMNIEGDRNGLQYMBLAPFVZNDRIJXBOJWGXDNFLUTSRECFUTCHSACYHTTSTAVPYJZIGKIHJZIOJOXJCHDOBIFFYPFLZTNKIMMPPOUXZELIYKWEBZQQPBDFARVQHXQZNSGDGYGEVBKOHKS");

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
    msg.setTimeStamp(0.6188478385496157);
    msg.setSource(38440U);
    msg.setSourceEntity(73U);
    msg.setDestination(13832U);
    msg.setDestinationEntity(1U);
    msg.op = 229U;
    msg.name.assign("CPMYERBEJMCNVUFXDETSENDDIOORQCSBVZDAPSJZXIGISHBCVTUBEAZSKOKXWXJHNZCVJIRMQRUKVHASIZTZDKTPVLXQNXDMWWGAHNYTVFNSGNCXQJQKOYSQWOPBHZPYFGIMQFAEHWWGJDLEBXBDJHHYWSONLGLWCL");

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
    msg.setTimeStamp(0.9992406569838327);
    msg.setSource(64515U);
    msg.setSourceEntity(164U);
    msg.setDestination(32183U);
    msg.setDestinationEntity(177U);
    msg.type = 80U;
    msg.htime = 0.5334745223348321;
    msg.context.assign("LQZOEMHIYBXBWRUEKZYOVBSZOWPTHBKGWMJEGIHKGATCNQMHXTLSKJFMIVTLRSTDOSCUYHVNAXTURTGPHYVEFGQZGPZWUWKQRKQUQGTVYFJCEVHMAYKAVLDOFPSRAAEJMMMCJYKOPIZXQLYIBCNRBECCJBSCGDOQLXPWZTENYXJUWXVSIOYHUXUDAFOUDHFSKEUV");
    msg.text.assign("QCSQDRUKHFOFUTJIJTOONBERMFGTEKRVZNMRIMZRXZFNSMYOJDAHOMOSMQALCDLPEVUYFLZHBFLAWYOTUEVSNQOAOHRPGGYPGHFAAHHIQHLBHKRWWBKGXWDEUMVBUGLTTVDCUFCPKORXZVQYIMALZNBCSZLDFGKKKIAXLPPBIATWXVKZJXBICJSQTYNQR");

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
    msg.setTimeStamp(0.7892418137005857);
    msg.setSource(53116U);
    msg.setSourceEntity(137U);
    msg.setDestination(12021U);
    msg.setDestinationEntity(210U);
    msg.type = 6U;
    msg.htime = 0.4586436088890071;
    msg.context.assign("CFFISUSWAOHSRKVIIQBEKOYPUSXKZBJMBRGDBSKYYSUGAVTVNUWPGKLRDNGLJIVRJ");
    msg.text.assign("CAPJTNBVHWXYGDMAPCRWIUYOQQZFBMTC");

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
    msg.setTimeStamp(0.01202105952002841);
    msg.setSource(16518U);
    msg.setSourceEntity(199U);
    msg.setDestination(62296U);
    msg.setDestinationEntity(88U);
    msg.type = 132U;
    msg.htime = 0.21793994467727817;
    msg.context.assign("YWQGVVFDHQFBGOWTAGLLCBAWSGOEQJXHAHDYHFAAEJTYQLQURAZPDRKJQUJEWZSTNTOPNIFALGPFCKEDNLZCIRDXVNFYVTFKMDNTMZFSTROHFGWCKPMOIJEKSAPEHCPWYMGDXIUBNLXRUYBDILGBEJTCWNMZOEOAIJIRXRMBXQZKSUQRUOWXXYZHNVXSJHSLCUPWIVMYYCRDFUONLHIQZGW");
    msg.text.assign("VOIMGAZYROLIXUIETFGSWENXFYFIBNCEODKTVTUOHJKTXGSZRSFMPHEJEBIVYXCONEMMKEZDQRM");

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
    msg.setTimeStamp(0.7448592756192799);
    msg.setSource(29439U);
    msg.setSourceEntity(246U);
    msg.setDestination(57168U);
    msg.setDestinationEntity(251U);
    msg.command = 24U;
    msg.htime = 0.5996966280841654;

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
    msg.setTimeStamp(0.41669987589867996);
    msg.setSource(24748U);
    msg.setSourceEntity(200U);
    msg.setDestination(16107U);
    msg.setDestinationEntity(222U);
    msg.command = 9U;
    msg.htime = 0.318273071087817;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 216U;
    tmp_msg_0.htime = 0.4254797741277144;
    tmp_msg_0.context.assign("SGSPPGARYONJLGPPHKTBEMDOAAJ");
    tmp_msg_0.text.assign("KMTEBUVELAVMGJDOHPAOLHKUWKOHRYFCKXATUEXCFTXPPEFGPONUCQJJXPDIXNORRSXJCXQEUJWZILYQLELMQRGMHCRYFIAGZDUZVZBHAXQFCNTPZJYLOAHSSVWDVNGSRNTSLEWJLNHBBZMCEUMJYVRDHDXQPVWOMSRITZNGIDDEUJNTISSFLICZNGBZCFWWWPDFEQGNOUMKRTKYYFVKGSQBAPIROQIALAHOXUWHYTJKQYVWDGTIBV");
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
    msg.setTimeStamp(0.7323857226134391);
    msg.setSource(4005U);
    msg.setSourceEntity(180U);
    msg.setDestination(59328U);
    msg.setDestinationEntity(180U);
    msg.command = 154U;
    msg.htime = 0.4298638079960787;

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
    msg.setTimeStamp(0.30104625544787467);
    msg.setSource(60537U);
    msg.setSourceEntity(113U);
    msg.setDestination(60514U);
    msg.setDestinationEntity(177U);
    msg.op = 250U;
    msg.file.assign("DRCSXMKUAZJMLXAUVDOHALXGXGHEOAIDGRJORVCCWQZRTKAUBOUDEGYHMAZLHQSMPHUDLDXAWSKNPXFYPTZFOWNNSLMLGIKCKWEVPFKBSDZLQLBWGPZQYETHBWOMXSCVPFLE");

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
    msg.setTimeStamp(0.5559140760552703);
    msg.setSource(44127U);
    msg.setSourceEntity(181U);
    msg.setDestination(35479U);
    msg.setDestinationEntity(170U);
    msg.op = 218U;
    msg.file.assign("MWJYKDHVQXBBAEJBRQFHFXGOHHISJNKGZYNTIIQJYHMZHQNJWQASNLGAOMGVXENGVAHTAFHEJOJVCNSBZUEPSEDLLZCQDOWYFTRKXTCKCMHUSQ");

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
    msg.setTimeStamp(0.11672714066866863);
    msg.setSource(25585U);
    msg.setSourceEntity(183U);
    msg.setDestination(2623U);
    msg.setDestinationEntity(100U);
    msg.op = 199U;
    msg.file.assign("KTUXLBEPXANVOHINAZAJEAJKXVMCMACIEOJQPZEVNYDRSVCOZQOXNBYCLSTRRMMZOVKDLJEJVHHTMDHQLXMRKOGPFZBRNVLFHFKHSEGLIXXWHGQLPPECNAHIAPRBQGNNWAYYISZWFCGLUUFRDPVMPDPBDTZ");

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
    msg.setTimeStamp(0.5805976131290463);
    msg.setSource(19784U);
    msg.setSourceEntity(101U);
    msg.setDestination(57101U);
    msg.setDestinationEntity(22U);
    msg.op = 190U;
    msg.clock = 0.5337908190641498;
    msg.tz = 55;

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
    msg.setTimeStamp(0.3721554802573427);
    msg.setSource(20678U);
    msg.setSourceEntity(163U);
    msg.setDestination(50727U);
    msg.setDestinationEntity(252U);
    msg.op = 58U;
    msg.clock = 0.8418877534755645;
    msg.tz = -34;

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
    msg.setTimeStamp(0.6624915671465704);
    msg.setSource(46122U);
    msg.setSourceEntity(82U);
    msg.setDestination(15885U);
    msg.setDestinationEntity(189U);
    msg.op = 40U;
    msg.clock = 0.7175665510069257;
    msg.tz = -25;

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
    msg.setTimeStamp(0.9556019337826065);
    msg.setSource(42767U);
    msg.setSourceEntity(56U);
    msg.setDestination(35459U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.7603150395220646);
    msg.setSource(32305U);
    msg.setSourceEntity(23U);
    msg.setDestination(17898U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.04618700904660533);
    msg.setSource(35933U);
    msg.setSourceEntity(232U);
    msg.setDestination(50995U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.45450112843831003);
    msg.setSource(26232U);
    msg.setSourceEntity(201U);
    msg.setDestination(19701U);
    msg.setDestinationEntity(84U);
    msg.sys_name.assign("OCWULWTARQOFGIMKZVDXQHSTJALDMPZLOADESLZPBMUFSHLQDYFHZFVKVHWNLBVIUFPOOGZJRAZAGLOWDZRNUDVSIIFWIKBYWKRXCDJYXIEQGTNJXYDRCZPSYOILJHMTCOQSKHQMXSCZHYTFVXMAAJCPSMKTEWQIRNPEQXGLYYUUWJGGLQBFPWSXCEVGPBBPHBCBDNJGMXUEKRVYOEMNAXNTITERNFHRHTYAQKWFNRK");
    msg.sys_type = 228U;
    msg.owner = 42278U;
    msg.lat = 0.5476765774271125;
    msg.lon = 0.4327867461680458;
    msg.height = 0.17286127249752703;
    msg.services.assign("TVYACWGZTELLDORHPTXMFCZPPUKDTSJQJNBCGSZRRBFAQDZFTJSCLUDVAJZNHXFYOVCZKAGOACQNVNVHHQXUOYJMSWVOZYGDNIFQYICAYFHRPFGJKGDBPSTGWMWODOCSFEQCLMKLHUTEIVKIKUMKAEEOIXTYRMVIBGDPPORBIYPIZQZTMUEKPPL");

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
    msg.setTimeStamp(0.6500111985908971);
    msg.setSource(15405U);
    msg.setSourceEntity(139U);
    msg.setDestination(64156U);
    msg.setDestinationEntity(161U);
    msg.sys_name.assign("MCHYUCCYWGHZVAARWTUUSNWBASJDVNSKSHQQPMZIVQCHPOJENPSIJVWXFNNRJVRIUIUZEYMTTKGVGCEGNLJWDRVWPFOHIQMZYLKZPOQRMXTEZOBBYENLCYTLYKQEAMGCFMIQAFMDOGSBZOTEOADKJGPPHKFXRJTMBFUBTYGXDSLNPFWZXWLHAQ");
    msg.sys_type = 90U;
    msg.owner = 39440U;
    msg.lat = 0.6000466432336649;
    msg.lon = 0.8941115901834517;
    msg.height = 0.0035679856209096528;
    msg.services.assign("DSCHCEMKQKXFLXJZVGPCAHAQLWAPKFEUVTOLQVRNQJGMUIGGRVUJKZLIFBOYODCTANSWABEIIOHJZD");

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
    msg.setTimeStamp(0.47168396974130267);
    msg.setSource(39384U);
    msg.setSourceEntity(16U);
    msg.setDestination(51257U);
    msg.setDestinationEntity(149U);
    msg.sys_name.assign("KGGWHRLHIEEPTXYSUIKVSSIVNKSJYDAOLKRUHCOAMCMNYFBFOCASZUNWBVJEQZDDGPXRCHAOZOVTQIOMHKFGMUILFSVTTTINMFFPJGRDITKEIAGEZHVWAYZBJJRLHBEBEUQCWMJJXVYDTLKUVGEMDAJBNOQRQFEYCDOGCXXPMPPQCGZSQFYAUQJTCXFKLTTSYQORRAKXGWWVUHRFBLSWXQYZPHWIBPXNKEZDUPVRNBXM");
    msg.sys_type = 50U;
    msg.owner = 15021U;
    msg.lat = 0.7938218281717417;
    msg.lon = 0.9950961772492315;
    msg.height = 0.587896651444258;
    msg.services.assign("OTPRPKEXUZZFSQURYAVMRQHBAVQZJZYVMCFKOGTUQMCGYWFJMZFWBLLDGGESWHFGXMZGCPPETGLXANIIKMNRWDXVAZJEBDTUKINTXSAJHZJVNMVFYOSLISJLKRPHTHDHRUIAWEIQSBFLEOYWGEBBPEVBAXUCELBFDHKIGQGKNCNPSUJYDHIHJNDLYXWBQMCFK");

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
    msg.setTimeStamp(0.7382778030370588);
    msg.setSource(38392U);
    msg.setSourceEntity(191U);
    msg.setDestination(38297U);
    msg.setDestinationEntity(35U);
    msg.service.assign("VVCQBVYOOGPECTMQIQFWWTKAH");
    msg.service_type = 146U;

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
    msg.setTimeStamp(0.2978871350232992);
    msg.setSource(25432U);
    msg.setSourceEntity(179U);
    msg.setDestination(40592U);
    msg.setDestinationEntity(23U);
    msg.service.assign("LFKMWCHYJDGIHXQBAYNKQJFXQSBTBCMNBFCJKNQBJJTYMQXDAYFTVGDTOKRBEVNHCSLEWLGDSUAZHMGFUPQCTQMDPE");
    msg.service_type = 130U;

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
    msg.setTimeStamp(0.4005971332530446);
    msg.setSource(8580U);
    msg.setSourceEntity(170U);
    msg.setDestination(28309U);
    msg.setDestinationEntity(14U);
    msg.service.assign("OKRKBFHBJUBCNIFPXTLKXLINJWQPHZMDRGBDTZAEUPPYMKYCDYCIGBSKPWEMHOXIODHPNXFEZYEITFONQEZAAQCJCUQIQC");
    msg.service_type = 53U;

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
    msg.setTimeStamp(0.6698121947187898);
    msg.setSource(38903U);
    msg.setSourceEntity(63U);
    msg.setDestination(57604U);
    msg.setDestinationEntity(222U);
    msg.value = 0.8399957857739622;

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
    msg.setTimeStamp(0.7306452251441442);
    msg.setSource(24067U);
    msg.setSourceEntity(80U);
    msg.setDestination(63052U);
    msg.setDestinationEntity(200U);
    msg.value = 0.08240740622466824;

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
    msg.setTimeStamp(0.24155734060621037);
    msg.setSource(11814U);
    msg.setSourceEntity(34U);
    msg.setDestination(11430U);
    msg.setDestinationEntity(254U);
    msg.value = 0.2623426126654127;

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
    msg.setTimeStamp(0.547494581819495);
    msg.setSource(32465U);
    msg.setSourceEntity(119U);
    msg.setDestination(51733U);
    msg.setDestinationEntity(239U);
    msg.value = 0.26163013721014294;

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
    msg.setTimeStamp(0.9327678195749773);
    msg.setSource(57593U);
    msg.setSourceEntity(217U);
    msg.setDestination(58821U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8898976178506699;

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
    msg.setTimeStamp(0.4253860166505612);
    msg.setSource(38137U);
    msg.setSourceEntity(225U);
    msg.setDestination(38006U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6593100495611777;

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
    msg.setTimeStamp(0.7823298395808685);
    msg.setSource(35238U);
    msg.setSourceEntity(200U);
    msg.setDestination(10139U);
    msg.setDestinationEntity(23U);
    msg.value = 0.8478992538460585;

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
    msg.setTimeStamp(0.019926796554755932);
    msg.setSource(26918U);
    msg.setSourceEntity(44U);
    msg.setDestination(18405U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8553918238541968;

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
    msg.setTimeStamp(0.5529620097198338);
    msg.setSource(22654U);
    msg.setSourceEntity(236U);
    msg.setDestination(49373U);
    msg.setDestinationEntity(18U);
    msg.value = 0.6424994344311369;

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
    msg.setTimeStamp(0.8213404290436594);
    msg.setSource(16954U);
    msg.setSourceEntity(136U);
    msg.setDestination(7549U);
    msg.setDestinationEntity(172U);
    msg.number.assign("TSKFMTAYEUNVGAFSXDJKVVTDULMUASSNDXPWNLIAAXMWXURRCE");
    msg.timeout = 23720U;
    msg.contents.assign("ZHBDTJMMXISLNKCAWQWSVFAOAVXBITCVKMIVKMGVZYPRQYZIUGQDJEPBMZGHBPAXZUEPEFMWFGEKBKIYFUXUYZLCDZWRRTGDRYEWSEKUHQLGLQFBTJGFYIXTVQNTQHIXUNCWBOAIOMRCWFFKUCWNQLPEBZJFDPZYA");

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
    msg.setTimeStamp(0.41366933103854464);
    msg.setSource(48998U);
    msg.setSourceEntity(88U);
    msg.setDestination(14107U);
    msg.setDestinationEntity(5U);
    msg.number.assign("COLDGGEJNIRFJWABENUQJYTONNVKQTIFAUXRWRSBZXCWFESSOKBIPOTBZJYFPZFHKKYEXMTEXQURMGROHSLDIRNMZDGUURLPCJVXXTWVLBXKDQQJVSNHGEHLBNJSPADFQAVWBGAP");
    msg.timeout = 21480U;
    msg.contents.assign("KWIBWZQVRRFFKPYVSJJQNTNEWNZQKJCSMWFPZDXNMTRHZGOWXAAOLCTOHXVJEMPKEDKFQNUXZDMFNJIBYWXVOOLHGDOKPQVFDWRUJULDJLHCXRUSXPLRGPGCTXABIIEQSSETSNCQDRUIVKWGDQUJFMZYVKLZBTCLIPYTMLHZSBHTEASGEMBJUCTMMHRVOGQHAAUIEFVSOOPYKIFLGCZBICIJKYBNSMB");

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
    msg.setTimeStamp(0.6381466476459672);
    msg.setSource(64054U);
    msg.setSourceEntity(189U);
    msg.setDestination(7002U);
    msg.setDestinationEntity(197U);
    msg.number.assign("HHADHGIBVIMQZNPYXEXOBFLBUHTRZDDICWEOSACVLNWOMJQJAKQYOODOVUCRERIJKFLUYFGDDWGKTWVGUZYBTCNUZUMGHPPSCXKKSEJPYTDKFUYWZDQBPZIGNGIHLLJALFDXQLVWNGVZCFJTIOARSIPALETTPXYKELOECQSWTSEHGHXNJSYMMMAXFWKHRXFBMARQUNPTYFDZPGZIMJS");
    msg.timeout = 23384U;
    msg.contents.assign("VRRIZOHYWTDKBHGUOIDFHFZMQEECGVSCCAVNLUKGGJRQWNXKZTPTNNZFZDYMAZVEIMLGAPMMSTYVMPWDBFKMDPIJUJRXNBYJVQJAVDILDTYMSMRFFTGJXKELFUPPULKCZOHNEPOIFOQCLBCEVOXTTAKEWASOYWNWBCBNPQFJQSRAWIUSRSALKEQYPKIJZXJYPAGNSZBBJUIDHQ");

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
    msg.setTimeStamp(0.8426869092639757);
    msg.setSource(56170U);
    msg.setSourceEntity(154U);
    msg.setDestination(46750U);
    msg.setDestinationEntity(175U);
    msg.seq = 2058764621U;
    msg.destination.assign("CMOQFFPTQTEFSULZSUTFCVWYXROYQLVPZWUNQVVDJUSDXUOETKGMAAVGRTXFCPUPNZWQAWUAQIRNAVBLLIWZKVCZBBYCFIWDJXMONEFOCSHJYMLLFNDZKJOXQMCYPWOEOHOYBUXSGMFQJKGLKICZPRTSNKXKBRTZBPABMIOAGPMEEXDCEBYKHEZWSESGHVDHETVPKI");
    msg.timeout = 58155U;
    const char tmp_msg_0[] = {-117, -77, 39, -55, -38, 117, -33, 73, 80, 96, 48, 124, -115, 91, 81, -3, 26, 109, -88, 84, 81, -75, -96, 65, 97, 30, -16, -29, 71, 11, 15, -108, 44, -5, 2, -93, 62, -123, 69, 73, -105, -96, -53, -38, -84, 53, -6, -11, 112, 93, 82, -112, 45, -29, 101, 110, 37, 1, 119, 71, 50, 13, 83, -2, 45, -67, 89, 21, 35, 2, -41, -122, -61, -12, 65, 27, -11, 119, -6, 87, 60, 122, -107, 37, -49, -94, -101, 19, -75, 126, -49, 52, -66, 18, 29, -58, 103, 16, -28, -11, 58, 76, 48, -12, -34, -37, -55, 115, 55, 15, -16, 123, -97, 122, -79, -39, -103, -128, 73, -114, -49, 82, 78, 24, -119, 2, -73, -31, 72, -113, 22, -36, 27, -56, 46, -69, 26, 45};
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
    msg.setTimeStamp(0.4935941856333492);
    msg.setSource(26247U);
    msg.setSourceEntity(71U);
    msg.setDestination(26455U);
    msg.setDestinationEntity(67U);
    msg.seq = 1539240614U;
    msg.destination.assign("MVXXWOJJQHVUATUNTMFKHIUSSDOYKYKNUWPGZFABGRHIQRLCPVERNTYIQHWCNDCYTYWNGSAKCLFEIAJJUVRHLOCQHKJGARTDCIXMPBGABRFPREMHFKKEVBYSXFUBHBGAZFYJZAIPOQFLIJNDS");
    msg.timeout = 58022U;
    const char tmp_msg_0[] = {37, -18, -78, 3, 95, 124, 55, -90, 124, -78, -60, 96, -11, -31, -119, -6, -55, -124, -99, -102, -79, 93, -20, -66, -13, 60, 98, -49, -1, -121, 64, -14, 95, -50, -117, -60, 16, -46, 32, -121, 63, -118, -38, -77, -123, 48, 33, -70, -48, 45, 113, -68, -42, 75, -22, 91, 57, -10, -18, -63, -57, 25, 2, -108, -20, 77, 36, 4, 103, 71, 4, 17, 9, 102, 14, 117, 105, 4, -69, -121, -45, 110, -112, -89, -101, -6, -25, 67, 93, 58, 7, -17, -20, -118, -20, -64, 121, 79, -72, 3, -108, -106, -93, 94, 125, -110, -5, 93, -114, -79, 33, -68, 124, 35, -116, 109, 32, -97, 50, -40, 7, 57, 16, -122, 65, -26, -115, -123, 109, 52, 19, -126, -95, -73, 71, -100, 31, -118, -58, -88, 68, -44, 116, -106, 41, -109, 8, -32, -33, 23, -19, 44, -117, -90, -108, -80, -126, -27, -66, -107, 112, 94, 112, -10, 124, -28, 114, 23, -96, 62, -28, -27, 117, 99, -61, 48, 97, 94, -75, 80, -116, 89, 64, -128, 78, 78, 18, 90, -115, -52, 58, -118, 97, 58, 57, -26, 84, -8, -83, -41, 118, -34, 48, -18, 85, 106, -23, 85, 44, -29, 70, -11, -120, 17, 109, -94, -126, 70, -17, 12, -80, 8, -96, 31, -10, -1, 112, -75, -13, 101, -121, -79, 38, -20, -90, 8, -45, 98, -111, -96, 115, -121, 27, -65, -60, -31, 70};
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
    msg.setTimeStamp(0.9977946730177584);
    msg.setSource(13459U);
    msg.setSourceEntity(140U);
    msg.setDestination(26896U);
    msg.setDestinationEntity(11U);
    msg.seq = 1163984199U;
    msg.destination.assign("UPONVISWWVSPUEDGZUOQIZJPAIXENRNVWKBHKAIDXBZQTMAHEMOHSQJGMWMVXDHMLZXIKSOYCTINZLHAWJBPRXUOUYFZYINKWREJYWFSTVYRLCZVVRMJPTNCAXGHTEKANCSAUPJHBFUTTBHYPRFELQHDKYLVPQKEKOXLCTOJDSZHOQCKRUQFMJJFEQDMVCMNTTSBGJDXRIAXW");
    msg.timeout = 63443U;
    const char tmp_msg_0[] = {-40, 21, 117, -64, 115, 118, 67, 116, 67, -69, -13, -123, 5, -41, 43, -73, -22, 63, 53, -112, -16, -100, -119, 10, -62, -107, -9, 98, -29, 75, -40, -106, -26, -42, -60, 48, 73, -11, -42, -123, -48, -78, 121, -85, 91, 84, 26, -111, -77, 12, -41, -40, -73, -46, -83, -98, -53, -108, 30, 2, -3, 104, -15, -119, -97, 2, 59, -86, -3, 96, 82, 11, -64, -24, -53, -104, -6, 99, -92, 107, -13, 91, -102, -16, -19, -74, -58, -23, 100, -86, 41, 44, 24, 76, 38, 101, -125, 120, 49, -101, 18, 115, 111, 105, 101, 125, 63, 50, -4};
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
    msg.setTimeStamp(0.38073246715587006);
    msg.setSource(34746U);
    msg.setSourceEntity(34U);
    msg.setDestination(12693U);
    msg.setDestinationEntity(196U);
    msg.source.assign("SVDXBEBXQOTQEHMQNIGARWKYOJEBMNGHNZXUUQWGGUIILLGUYCMGPRCWAFKMFLDLIQWJTHMZSCPVDODISKOYCNWZZJDQSVX");
    const char tmp_msg_0[] = {41, 6, -48, 70, 91, -63, -43, -100, -67, 40, -112, -27, -35, -122, 76, -38, 43, 58, 12, 114, 61, -91, -11, -56, 124, 36, -97, -121, 31, -58, 17, 115, 114, -60, -108, 83, 72, -38, 56, -69, -68, 50, -41, 65, 7, 126, 84, -110, 27, 26, -10, 43, 100, -111, -10, 67, -71, 110, -93, 126, 4, -93, -60, 70, 72, -104, 61, -66, 31, -120, 77, -76};
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
    msg.setTimeStamp(0.04583429721745458);
    msg.setSource(11949U);
    msg.setSourceEntity(127U);
    msg.setDestination(31096U);
    msg.setDestinationEntity(91U);
    msg.source.assign("ZDFJORWRIDBTB");
    const char tmp_msg_0[] = {126, 22, -70, 65, 107, -113, 7, -100, 57, 89, -49, 47, -65, -48, 59, 73, -4, -1, 125, 122, -46, 98, -59, -34, -37, -61, 39, 70, -59, -77, 58, 92, -114, -82, -125, 44, -81, -96, -53, 65, 122, -21, 120, 74, -12, 16, -4, 55, -18, -55, 4, -46, -118, -90, -83, -56, 90, 78, -55, -46, -37, -97, 106, 37, 75, 106, 108, 53, -66, -94, -21, 48, 27, -11, 121, 88, -37, -18, -22, -72, -119, 59, -25, 64, -77, -107, -61, 59, 8, -85, -77, 80, 25, -26, 14, 108, -103, 26, -37, -115, -51, 42, -18, -110, -67, -90, -32, -83, -19, -11, -89, 73, -108, 103, -104, 23, -17, 30, 44, 76, -105, 37, -71, -126, 101, -64, -80, 87, 9, -57, 101, -55, 121, 19, 55, -53, -64, 56, 79, 53, 82, -33, -103, 64, 13, -45, 68};
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
    msg.setTimeStamp(0.5236316798715484);
    msg.setSource(22482U);
    msg.setSourceEntity(95U);
    msg.setDestination(27100U);
    msg.setDestinationEntity(16U);
    msg.source.assign("AKGIJZYAYGQOKDTINRCEDCOKUPGOEMBVHZRFJRGUZYTZEFGZNWXYSMQKQPDNEVCGJZYY");
    const char tmp_msg_0[] = {3, 85, 126, 17, -60, -39, 72, -30, -115, -5, -97, -73, -87, -45, -18, -48, 60, -3, 89, -23, -35, -89, 32, -68, -117, -107, 18, -19, 79, 119, -67, -39, -107, 66, 21, -33, 65, 110, -12, 10, -79, 25, -95, 80, 117, 98, -83, -8, 80, 36, 72, 54, 1, -36, -7, -52, -62, -23, 36, 20, -99, 19, 31, 79, 63, -61, 117, -123, -59, 93, 28, 106, 17, 18, -43, 12, -91, -46, -77, 64, -72, -75, -4, -11, 44, 10, -70, 108, 87, 98, -5, -82, 71, -77, 83, -94, 4, -107, -24, 1, -35, -86, 97, 92, -45, 113, -60, 67, 120, -67, -119, 77, -53, 47, 18, -42, 71, -27, -27, -18, 6, -32, 6, -5, -68, -83, 118, 89, 93, 73, -66, -99, -42, 54, 123, 94, 92, 112, -41, -122, 51, 98, -55, -109, 9, -82, -9, 115, -128, -86, 31, 15, 90, 74, 42, -25, -83, -60, -58, 17, -109, -71, 60, 92, 104, 76, -121, -6, 109, 8, 19, 123, -33, -114, 96, 33, 91, 109, -23, 9, -45, -107, 64, 25, -51, -4, -23, 14, 2, -103, -96, 20, 103, 55, -3, -117, 1, -117, 82, 75, -76, 111, -97, 87, -10, 41, 72, -87, 4, -26, -78, 122, -70, 125, -2, 9, 100, -2, -3, -108, 79, 57, -91, -23, 44, 70, 125, 15, 71, 79, 63, 9, -1, 33, -45, 81, -77, -78, -85, -19, 42, 9, 93, -118, -50, 12, 36, 93, -72, -109, 80};
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
    msg.setTimeStamp(0.0049831040831394);
    msg.setSource(1996U);
    msg.setSourceEntity(213U);
    msg.setDestination(41784U);
    msg.setDestinationEntity(111U);
    msg.seq = 635566393U;
    msg.state = 239U;
    msg.error.assign("WYUEVDHIIQLKHTPGSPDVWDPJSXOELQUNVEOOLIIBMHXPHIKDNMNSZUUWKBOCEWNJXRHFTQONWMPFE");

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
    msg.setTimeStamp(0.3262000347599694);
    msg.setSource(51226U);
    msg.setSourceEntity(28U);
    msg.setDestination(42969U);
    msg.setDestinationEntity(125U);
    msg.seq = 1503487895U;
    msg.state = 55U;
    msg.error.assign("MUYQGYGRCYFRYFBNKJDBNRLKTVBGWVJIJOSBUMKTSESWGBAWPSBSRZXLXQOKSCPOBFGDESXVSOELUAYH");

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
    msg.setTimeStamp(0.23788905123996296);
    msg.setSource(53150U);
    msg.setSourceEntity(119U);
    msg.setDestination(17578U);
    msg.setDestinationEntity(181U);
    msg.seq = 1368679814U;
    msg.state = 34U;
    msg.error.assign("AXWGNHLKLMOSRLKJOZNUJTOSWHEEJOLSXGRFARYBFGRKFFMDPJVLDCMPBSZDWXKQURUWIILPXCUWPTNFPAYZAJYTOZOHNDSEYVYCEVBDWNHEZPOMBTOZJMXRQQLHGO");

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
    msg.setTimeStamp(0.35753613123458805);
    msg.setSource(14939U);
    msg.setSourceEntity(21U);
    msg.setDestination(34990U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("RXTNKPQWDOGUDFDJYBBLVQMCNBMRQXUHULPHIQFGFSXMTSFGIXZULOZKEBZPKHDYQTJAEUHVGBPLQTPSINTRSIAFNJTWDJACHNQBLRQPAZRHMPELVECGYKAPCNIODGZYLCGWZTYJOOHBVRFW");
    msg.text.assign("VIEYJPXCPBOLLKVINESVJBBUDAPFKCVDZ");

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
    msg.setTimeStamp(0.6536283766886978);
    msg.setSource(50341U);
    msg.setSourceEntity(33U);
    msg.setDestination(42718U);
    msg.setDestinationEntity(37U);
    msg.origin.assign("ZXEBVBYONMNWJMHRQVKEOCQKPAYOVUHCOJQZCZGXSRCXFQBSUMLGAKHBZZIIRFCUNHMCBVCWDEDOTEIEVGQEEIPGZYGVXXZBDYCJNGELKTYNAUKKTRPMXVNBJWQGQGKPPOGBZGBASFUJAJUJAWLRQIUTFRRRJSPNIDDPYAF");
    msg.text.assign("EKPXSGCUUAKONHVD");

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
    msg.setTimeStamp(0.1300161488960735);
    msg.setSource(40937U);
    msg.setSourceEntity(234U);
    msg.setDestination(49538U);
    msg.setDestinationEntity(69U);
    msg.origin.assign("IRNLNVVPWJKYOBCSMSUJEJSWROJXAVHNBLQYNGQRPBPQCFARVCMJ");
    msg.text.assign("DJSRPKKYTTWZJNBWUNVDUUZUTADCRJVQFFHFBSTQBYNTHBAPGTEBAFXHBEGUIYWYUFQOWXQRTCGRYVPIREHVNLDZSKOEWKLDVVVCZMIUDMXCMQPZZEIVLQDTEMAOFLIWYGIZMGYALJJIUBLRYUDTONNHQOWKPIZPHCQSYRTMPNAJLMVLOABIMAHFYPKSRJVFQJDCELHCSEMCDFWCMPJEB");

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
    msg.setTimeStamp(0.016394484419976596);
    msg.setSource(63665U);
    msg.setSourceEntity(49U);
    msg.setDestination(31673U);
    msg.setDestinationEntity(92U);
    msg.origin.assign("WWBKCLLGIEVYKWOOUDALPKKJBDVCDCAJNPHPFDEEHHTULZIRVGWNUDHZKWHMSGJVXJYCMRBSPIW");
    msg.htime = 0.06241883586005692;
    msg.lat = 0.8276572915877994;
    msg.lon = 0.8969130161036816;
    const char tmp_msg_0[] = {-76, -16, -125, -128, 73, -56, 109, 46, -47, 79, 60, 118, 20, -128, -2, 52, 42, -22, -91, 74, 120, 98, 92, -97, 56, 108, -35, -15, -123, 25, 113, -108, -123, 54, -74, -65, 82, -95, -28, -40, -21, 89, 26, 98, -10, -35, 99, -64, -127, -38, -32, 124, -94, 115, -21, -52, -45, 85};
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
    msg.setTimeStamp(0.6764110195421558);
    msg.setSource(42215U);
    msg.setSourceEntity(69U);
    msg.setDestination(34251U);
    msg.setDestinationEntity(219U);
    msg.origin.assign("LGYHEDKPSWSKDGSLOFAZHKOFRURLTYHIQLXBJLVNJQKPJSTEEGSSZBAIXDNCJNAPIFPMZXGUHVEDYQQUVZXFOZHQEBOCMLRPDRXJCWBIYJMMPFCUDQGAXLWLFNYLVIOXTWMTEAHJGKCYPDKGCWIZKABONFQFMETWHCUDPQMVJUWJNPGHOFNHBTRFNRVXDMIAHXOCESUUNTORZVAVICW");
    msg.htime = 0.6492851084586959;
    msg.lat = 0.5441784490510214;
    msg.lon = 0.2500854966886049;
    const char tmp_msg_0[] = {122, 33, -42, 48, -29, -79, -115, 55, -4, -112, -99, 68, 19, 81, -64, -97, 120, 103, -66, -47, 65, -9, -72, 107, -21, -21, 85, 48, 3, 67, -52, 87, -26, -111, -91, -49, 13, 88, 108, -110, -9, -31, -77, -36, -83, 97, -86, -97, 36, 65, -50, 26, -53, 52, 86, 55, 42, 122, 14, 65, 106, -107, 122, -59, -29, 40, -60, -88, -114, 26, -24, -121, 60, 79, -12, -34, -78, -127, -38, -48, 104, 43, 92, 42, -62, 20, -108, -10, -103, -18, -2, 67, 0, -119, 30, 99, 76, 119, 10, 109, -100, -6, -105, -55, -88, 7, -123, -9, -58, -76, -5, -103, -91, 37, -86, -94, -86, 20, -128, 9, -35, 122, -123, -19, -124, 110, 88, -112, 45, -33, -109, -23, -28, -16, -90, -99, 67, 65, -42, 16, -47, 18, 30, -56, 57, 78, 1, 112, 111, -104, -123, 59, 26, 49, 13, -66, 33, -50, -88, -128, -109, -98, 123, 37, -1, -34, 23, 39, -1, 27, 20, 69, 25, -73, 118, -29, 1, 103, -128, 35, 124, -79, -126, 1, 51, -21, 37, -77, -122, -92, 42, -65, 80, -55, -61, -65, -61, -66, 2, 82, 38, 0, -119, 16, 30, 52, 46, -66, -62, 86, 60, 112, 2, -35, -56, 8, 90, 101, -112, 75, 100, -124, -11, 31, 14, 85, 112, 101, 52, -72, 100, -8, 9, 14, 47, -118, -13, -90, -109, 34, 87, 40, 101, -93, 15, -89, 39, 93, 33, -85, -81, -95, 3, -114};
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
    msg.setTimeStamp(0.9707327796503115);
    msg.setSource(21429U);
    msg.setSourceEntity(176U);
    msg.setDestination(47400U);
    msg.setDestinationEntity(74U);
    msg.origin.assign("BRDVKRMLCXFKLZNVGMXLINWKOLEDWVYZPYWPUXYWFIQOHRBUMHLDJZANVGGQYF");
    msg.htime = 0.5322159757044551;
    msg.lat = 0.6670297802965358;
    msg.lon = 0.34194052563226507;
    const char tmp_msg_0[] = {-33, -45, -72, -123, -85, -120, -1, -112, 94, -2, -69, -64, -102, 5, 71, -61, -54, -62, -66, -69, -50, 42, -86, 85, -38, 53, -89, 101, 34, -104, 3, -51, -116, 2, -60, -17, 8, 56, -25, 7, -88, -122, -61, 100, 49, 18, -35, -2, -26, -18, -117, 31, -14, -59, -106, 8, 15, 96, -40, -101, -56, 95, -16, 92, -29, -55, 85, 80, 97, 10, -35, 18, -49, 55, -75, -9, -4, 124, -116, -82, 13, 25, -112, -45, -119, -64, 43, -90, -10, -5, 15, -88, -89, 45, -2, 96, -73, -9, -94, 22, 117, -8, 116, -113, -72, -70, 6, 105, -120, -24, -124, -101, -56, 46, -70, -1, 36, -125, -53, 47, -64, -125, 5, 60, 40, 105, 98, -17, -29, 98, -88, 24, 84, -18, 76, 13, -88, -89};
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
    msg.setTimeStamp(0.7181158186585869);
    msg.setSource(22875U);
    msg.setSourceEntity(215U);
    msg.setDestination(26987U);
    msg.setDestinationEntity(200U);
    msg.req_id = 9317U;
    msg.ttl = 46766U;
    msg.destination.assign("BPCUQGGTTIJIBFEKDFPGIJWZRXYUKNVZGOVKROXVNHIGNMTJLXERWBNWQUEMSRSCRYUUIGAEYGXERAAKTADCNDSDXXKTROYHIRUEGQPAOYCSTZHZRLUAPBDJLMFJTYQLKKASLXVWSFLNHGEKCFCPOIQLHJUSHFWOYFBKVJHONHAPVVCQWNDPIFDJFPECQLYLZJCZSEMMGLYNMVADROIXHBBESXOSQPWUTZJZNZTDDFTWWMI");
    const char tmp_msg_0[] = {96, 71, -110, 65, -118, 104, -112, -14, 44, -90, 44, -68, -111, -47, 58, -43, -34, 83, -69, -96, 106, -79, 36, -85, -23, -3, 85, 84, 24, -48, 83, -101, -91, -61, 120, -127, -1, 13, 14, -61, -57, 113, 125, -30, -47, 58, -1, -61, 37, 124, -69, -81, 50, 84, -42, -116, 91, 76, 62, 105, -93, -92, -37, 64, 116, -30, -91, 41, 49, -122, -28, 84, -35, 65, 18, 87, 60, -36, -65, 74, 121, 94, -108, 115, -86, -67, 106, 1, -14, 101, 59, -118, 57, -42, -71, -51, 74, -3, -36, -37, 70, -37, -39, -92, 41, -58, 114, -97, 85, 74, 15, -61, 85, -28, -109, -6, -79, 89, -116, -46, 97, 55, 38, -30, -66, 75, -100, -114};
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
    msg.setTimeStamp(0.4348629377883315);
    msg.setSource(54232U);
    msg.setSourceEntity(249U);
    msg.setDestination(57044U);
    msg.setDestinationEntity(107U);
    msg.req_id = 51000U;
    msg.ttl = 45030U;
    msg.destination.assign("OLMKNSDISUWTONLSDQIHDJYDHVHXVQNKUEYBDACBOEZZTXFYNGXGHAVBKXCGPJPPMNKWKLNTBBHSUTQQGRITARLFLYWMJMIBFEOJSNDQVTSAFYUHKUJKNPHCXXKZQWP");
    const char tmp_msg_0[] = {-14, -85, 112, 38, -67, 71, -39, -32, -3, 40, -18, 117, 17, 37, -42, 52, 12, -98, -19, -15, -101, -36, -65, 46, -81, 124, 110, -68, 59, -64, -89, -71, 22, 72, -91, -98, 1, 71, 80, 98, -119, -20, 120, 44, 75, 35, 119, 18, -42, -90, -97, -77, 56, -36, 12, -14, 72, -67, -97, 46, -110, 113, 24, 101, -112, 110, 3, 49, 94, -80, 103, -15, -11, 118, 72, 9, 28, -128, 63, 29, -71, 18, -79, 42, -111, -21, 87, -86, 24, 3, -93, -55, 22, 11, -63, 52, 43, 0, -73, -2, -127, 70, 36, 6, -40, -112, 9, -109, 118, -47, -125, 120, 7, 123, -64, -122, 86, 36, 7};
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
    msg.setTimeStamp(0.6968254466825881);
    msg.setSource(47405U);
    msg.setSourceEntity(26U);
    msg.setDestination(59302U);
    msg.setDestinationEntity(86U);
    msg.req_id = 7623U;
    msg.ttl = 58634U;
    msg.destination.assign("JZJLBQVNMUUXLYLJJAYTKRITBNMTCCFXROIXDNUUEGSXPYFGSBQFOKKIDYVSMENTMFXPFVXLNXRQBGGQDWSBUCUCEAVIABVULUJKPJQWETIJHCZZYRWLPHRFTLUKWCPMZMIOZMLBDSEJPYYAGESPCXKENKAWDDEKWKQFQSDCVDJJFTYQAEVZZTOHAAOGANTRNWCOAYGSTHMHIZDGBOHKHD");
    const char tmp_msg_0[] = {-16, 59, 101, -113, 72, 16, -113, 120, -109, 98, -115, -42, -65, 43, 109, 9, 33, 54, -43, -107, -105, -77, 120, -2, -68, 20, 97, 60, 66, -53, -60, -56, 45, -9, 100, 43, 65, -121, -111, -123, 80, -24, -123, -30, -65, 53, 77, 103, -109, 52, -119, 54, 26, -112, -95, 99, -44, -94, -85, 10, -26, 67, 125, -105, -78, -31, 81, 71, -44, 92, -69, -123, 99, -51, -122, -100, 5, -105, 117, -29, -38, -93, 114, 4, 118, -58, 96, -67, 4, 48, -124, -83, -100, -89, 97, 92, -93, 80, -47, -8, 112, -128, 78, -102, 87, -126, -76, 16, 113, 113, -38, 90, -70, 74, 22, -21, 76, -114, -6, 63, -127, -121, 15, 79, -23, -57, -42, 96, -71, -51, 56, 2, 102, -70, -22, 12, 91, -115, 117, -68, -44, -99, -124, 97, -45, -85, 31, 86, -39, -83, -126, -107, 118, 87, 3, -33, 35, 93, -13, 79, -96, 17};
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
    msg.setTimeStamp(0.6109846893171994);
    msg.setSource(26557U);
    msg.setSourceEntity(195U);
    msg.setDestination(45587U);
    msg.setDestinationEntity(110U);
    msg.req_id = 35723U;
    msg.status = 150U;
    msg.text.assign("SIOPFGITPGQEYSICTDHPAAUQSABYDQPROTZOZTMBNCXAHXEPBOIUTMXUSUZZPQHRFPGLHWNQIKXTMIBFUCVLDILKYLBVMWAYMDELYJHXMJRJAJEULRFQXCNOSZCFWSRHCANNDMCWM");

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
    msg.setTimeStamp(0.15909937263979212);
    msg.setSource(1072U);
    msg.setSourceEntity(5U);
    msg.setDestination(28093U);
    msg.setDestinationEntity(23U);
    msg.req_id = 9656U;
    msg.status = 132U;
    msg.text.assign("GYCKGQGYCQVIRQZSMFPQXUXLPATTAZYTGVGYDFKBIRLCHUZHPEGBUZDZWNOSMXLKTXQANBRBQNNJDMECMYNGTBFMVSUGHYVPWXOHOJG");

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
    msg.setTimeStamp(0.746854734543934);
    msg.setSource(38428U);
    msg.setSourceEntity(109U);
    msg.setDestination(51116U);
    msg.setDestinationEntity(68U);
    msg.req_id = 24382U;
    msg.status = 73U;
    msg.text.assign("KMXFLVNSEMLFOBZBZCMEDMQZLGIEKKJTNJLKMSUAVQHKKDSTHVAZTJNFPFGBBQPCLUQDRAPPRCPAQZWGONNYOYRBKIHEWCVVHLAIOMVXBDTJNDCEHGHYBGTWTFSWBNLRQNXCDOXYHJEHRNVTDXCASTRXATWFKQEWOTDIWYZKQZLUSSUBGPIUUYRPAQI");

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
    msg.setTimeStamp(0.36515703284040657);
    msg.setSource(46204U);
    msg.setSourceEntity(193U);
    msg.setDestination(46461U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("FCTETKNVHFLLVAMQOTFJWFLSPJRHBKRBMUTXCPLMAQZQGHSJKHSZREKAKAJWHLINYSFUVORLOGZXFGTNEEYJDMEYLXOUKPQYUZGCDZESWXAVDOHFTIBKHTNCRSC");
    msg.links = 2788238363U;

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
    msg.setTimeStamp(0.8249137998138448);
    msg.setSource(13124U);
    msg.setSourceEntity(220U);
    msg.setDestination(22960U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("PTYDAXVGURDHEFBDSBPKPRNJWTTHFMYFBLJXUJUEEUNYEXRVBYMMUCJFPBTMEHGLRCODLNILIAXDQSWGWAXAVGHIOHBXZESBCXOCDKVQSLUIGNQOCZMYHWWGNKFEKGJZRTILKDPNQKOOOCXTZJXQFRSCMFTLQWBZSABYDUVGQWAFWRDEAUKITOLMHKAUZVIJITKYNENPRW");
    msg.links = 2901530981U;

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
    msg.setTimeStamp(0.01097535087062762);
    msg.setSource(46461U);
    msg.setSourceEntity(50U);
    msg.setDestination(59579U);
    msg.setDestinationEntity(70U);
    msg.group_name.assign("IELLMYZECBYKYVOBYBPINTDRKKWYYZBMBLXVDEOJCYFMSGIHBKTTQPWZIRLOHILRGKGFEUHPDCBH");
    msg.links = 1782870378U;

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
    msg.setTimeStamp(0.9443092788563262);
    msg.setSource(49372U);
    msg.setSourceEntity(64U);
    msg.setDestination(33024U);
    msg.setDestinationEntity(210U);
    msg.groupname.assign("SOVCQOJUWKLIJZFLGESPPBGKEIOCXQAVVHWTXRRZNJBSNAZTPRHASXBKOMKUTZDZVZTOPTYHFLDMWFPEYYHDMZHJMMXEIYONBNNYFNQSAVWRYCBNTLQFOJVFUAWYQVHDEAROHBBMZXKHGDVOALFUEXQWIASGS");
    msg.action = 55U;
    msg.grouplist.assign("YSEAUWUWKIUNTDPSQCBUNFZXTBATJPXKMDEGPEYEZKPFAMFQQQHHRBYBGTUSTYEJMWVDHTAZWPSMSXQMCUVNPNCSJOCUUZAKSPMJQGHHDQMKNPKDOB");

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
    msg.setTimeStamp(0.58917112372849);
    msg.setSource(14085U);
    msg.setSourceEntity(21U);
    msg.setDestination(60804U);
    msg.setDestinationEntity(163U);
    msg.groupname.assign("YJNWYEBBTKBDRFZFRAFCGJTRMQNHPORSJHMCOUUSTENXHJSNKLVQSYZPMHVAEQMSIIKWUACZYMCAFGRFXKQCLLQZSBAOCCTTMJBAPWXGVHIGASUDBKPBYDLD");
    msg.action = 39U;
    msg.grouplist.assign("GUIPCDXZEMDND");

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
    msg.setTimeStamp(0.0812168739701874);
    msg.setSource(782U);
    msg.setSourceEntity(48U);
    msg.setDestination(36787U);
    msg.setDestinationEntity(219U);
    msg.groupname.assign("AZMTXZCEZGVJJSXAKGJEYIPFUNGBSWOPNXWQHTYBRZVGPCGCRVQOUIJVZDZOYKBDZXNYDVNJDUGYRZDDQSBRKIUYQLKOFAMHAGUDTPMNWIBSLTPHSKLMOS");
    msg.action = 66U;
    msg.grouplist.assign("JEVDTCHRXCGWAFNERUVHBSZYCZZMEHOXI");

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
    msg.setTimeStamp(0.4653086946832016);
    msg.setSource(50475U);
    msg.setSourceEntity(234U);
    msg.setDestination(36468U);
    msg.setDestinationEntity(148U);
    msg.id = 181U;
    msg.range = 0.1863548589426799;

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
    msg.setTimeStamp(0.15124527253631448);
    msg.setSource(59755U);
    msg.setSourceEntity(76U);
    msg.setDestination(58639U);
    msg.setDestinationEntity(223U);
    msg.id = 193U;
    msg.range = 0.9642791851259913;

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
    msg.setTimeStamp(0.06018417106124685);
    msg.setSource(47332U);
    msg.setSourceEntity(254U);
    msg.setDestination(60679U);
    msg.setDestinationEntity(46U);
    msg.id = 238U;
    msg.range = 0.9437919360025853;

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
    msg.setTimeStamp(0.9461986939114276);
    msg.setSource(55632U);
    msg.setSourceEntity(50U);
    msg.setDestination(56940U);
    msg.setDestinationEntity(114U);
    msg.beacon.assign("QBWAHRWNOHSCVTIUTZUJPLIHRENJZPDFVUOZMXZANBABAKDUBQIDAERBEXADYTLKGCMGQIDVYGWLIUPKBYJSPRSEHTXQTZMOKGCCFXLTEJVXWHLWBWSDFMJJTJXLUSAOVUEMSRULRZKIOCKAXWPQGHFRFFMMZSXAOKJHGQWPCHCAMGTEYCYREQIZFPYRIKLNUYUMSNIOCJVJTODRPNNGPZXYVHOCBGPIDD");
    msg.lat = 0.45667081828902656;
    msg.lon = 0.05252655671178896;
    msg.depth = 0.30117691230859367;
    msg.query_channel = 155U;
    msg.reply_channel = 46U;
    msg.transponder_delay = 8U;

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
    msg.setTimeStamp(0.4346495724237551);
    msg.setSource(49953U);
    msg.setSourceEntity(134U);
    msg.setDestination(53175U);
    msg.setDestinationEntity(65U);
    msg.beacon.assign("DNFSEGYNIZHRJHKWFMCAQJEDSTKLSLPKFVFHWTBSIYTWGMIRULZBFMVDAIPOIKPZDQZNXHEFJLBBJUMKDGWWXMZXSLFGIPMCLKBLUBOLMGCOWOPCFYVFDCKXDXZEGWQYUSIDGVRRLZRRUONUNHHIBFCOYDQXCQHJQHTEOCBZXCTNBDAKRJLEPAPAWYINGV");
    msg.lat = 0.1452040169403509;
    msg.lon = 0.7184612291335759;
    msg.depth = 0.49381305291597133;
    msg.query_channel = 138U;
    msg.reply_channel = 31U;
    msg.transponder_delay = 218U;

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
    msg.setTimeStamp(0.2659750548622444);
    msg.setSource(15804U);
    msg.setSourceEntity(222U);
    msg.setDestination(56189U);
    msg.setDestinationEntity(68U);
    msg.beacon.assign("JQGKPNNQAXMJJQBRGSFRMVEULXZJNJYZEKPFZTLIECWJYBABEQHLVQVFRMUDKBODTHNZVFOOAWHPAKRIEAOTWKYOCOKDGIQCGNDVFPFYNSPMXHVKSVADAEHXMXGDSCNQVHFDKUEYBDCZYIRVMFRMPRLRWIHYWCSAVXQIJUMZWWXBLOWPTTOPBMCTSCGNAZRYAZKGHBCEWTFHECIJNBXODILXITUPI");
    msg.lat = 0.16598075283688285;
    msg.lon = 0.41964155398172787;
    msg.depth = 0.20955131514377012;
    msg.query_channel = 59U;
    msg.reply_channel = 188U;
    msg.transponder_delay = 95U;

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
    msg.setTimeStamp(0.2519529577835242);
    msg.setSource(46910U);
    msg.setSourceEntity(130U);
    msg.setDestination(30728U);
    msg.setDestinationEntity(99U);
    msg.op = 21U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DRNUJCUWAASCVFFHZEHFOVMUJEMNY");
    tmp_msg_0.lat = 0.9895663600173107;
    tmp_msg_0.lon = 0.5163091790168792;
    tmp_msg_0.depth = 0.2941455180414291;
    tmp_msg_0.query_channel = 204U;
    tmp_msg_0.reply_channel = 150U;
    tmp_msg_0.transponder_delay = 169U;
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
    msg.setTimeStamp(0.6207626459548702);
    msg.setSource(21074U);
    msg.setSourceEntity(190U);
    msg.setDestination(11377U);
    msg.setDestinationEntity(251U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.7621234729002576);
    msg.setSource(20338U);
    msg.setSourceEntity(165U);
    msg.setDestination(26228U);
    msg.setDestinationEntity(144U);
    msg.op = 33U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MNYAEQHDCPUCUJWFBIGIOTWGTMZEAABPLBAWOOLBFXBCSDKVRKUXXTERFVGCFAPINGOMZFXOUFGUTUECVSNYEGHUIWILYVMKDKIRKUPRLGZQCHNDQQZJPIOTQX");
    tmp_msg_0.lat = 0.8203183988346463;
    tmp_msg_0.lon = 0.6907144751631394;
    tmp_msg_0.depth = 0.8287160261747614;
    tmp_msg_0.query_channel = 91U;
    tmp_msg_0.reply_channel = 88U;
    tmp_msg_0.transponder_delay = 233U;
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
    msg.setTimeStamp(0.5180287589852174);
    msg.setSource(41103U);
    msg.setSourceEntity(135U);
    msg.setDestination(22840U);
    msg.setDestinationEntity(169U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.889718846832331;
    tmp_msg_0.lon = 0.23772693766060948;
    tmp_msg_0.height = 0.7150443346044122;
    tmp_msg_0.x = 0.7159437306719261;
    tmp_msg_0.y = 0.7767288909594751;
    tmp_msg_0.z = 0.6284946282384669;
    tmp_msg_0.phi = 0.8315168655759233;
    tmp_msg_0.theta = 0.5503407700573355;
    tmp_msg_0.psi = 0.33995758107869045;
    tmp_msg_0.u = 0.23969016254440523;
    tmp_msg_0.v = 0.46527473724638235;
    tmp_msg_0.w = 0.6716513703119386;
    tmp_msg_0.vx = 0.3309244547314808;
    tmp_msg_0.vy = 0.15080027576724486;
    tmp_msg_0.vz = 0.5367697909631964;
    tmp_msg_0.p = 0.6930382410896447;
    tmp_msg_0.q = 0.4221840203277275;
    tmp_msg_0.r = 0.19807301883805795;
    tmp_msg_0.depth = 0.6639831689435745;
    tmp_msg_0.alt = 0.7621867747683682;
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
    msg.setTimeStamp(0.3376924076605565);
    msg.setSource(7149U);
    msg.setSourceEntity(68U);
    msg.setDestination(47976U);
    msg.setDestinationEntity(78U);
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 62159U;
    tmp_msg_0.lat = 0.47056669831400566;
    tmp_msg_0.lon = 0.05483169562032297;
    tmp_msg_0.z = 0.16903865295743548;
    tmp_msg_0.z_units = 121U;
    tmp_msg_0.speed = 0.7263858314044418;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.duration = 33007U;
    tmp_msg_0.radius = 0.3903719003262095;
    tmp_msg_0.flags = 186U;
    tmp_msg_0.custom.assign("ZUGVCCHOYLAZRVOOBIFBHAXFGBJMCREENAQDMCKKIIGITFAANDFASTVZWYTNLQDEFMWWILNMICSMKRQUQGUYNJLPWSGWSWBVXBPBWTTZNHIDRDXWOODFEQUVOHOUJIMLMGTYSJAZZUCEXGXHSPBZCLRCOJGWDAEDNXHWQZFYPRBFADGIZFNKJTRANKEKOQRHVJRPYSOTQYMNXPVYRYLXMSCZKJDEJYUSVQVXLEKEUSL");
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
    msg.setTimeStamp(0.5314150553599268);
    msg.setSource(758U);
    msg.setSourceEntity(60U);
    msg.setDestination(45029U);
    msg.setDestinationEntity(105U);
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 63U;
    tmp_msg_0.mode.assign("UOSLPJGLLUEINQVYISVTHLKQOGONXDGTPDGZRDIWVVNCCSFMDEQGWHIVHXQSFJIGPTYYRAZEUMHYARKAXTCPXMUNDHGTOWKYZEPADNBVRVNXNXHMWUDVETTYRNRXFLAFXBUJGOPMQXAMIQWIWBIWLSLLBKQCXKIFUBNEWRPFBPTYEHZAJBKDYCSWJWCRSSJLUYVFEKHNOKTSZRZOKMQYLOBDVZADGBMB");
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
    msg.setTimeStamp(0.7856057162451741);
    msg.setSource(46449U);
    msg.setSourceEntity(174U);
    msg.setDestination(53551U);
    msg.setDestinationEntity(123U);
    msg.op = 242U;
    msg.system.assign("OVTVBDUOSMZDDBRWTXYGUFZFVXRDMMHOLCYISZCSVBUTGQQKPQNMTANHNJWAGBAKTJGPHAZIDJEQBUBYJFOBEQSALZMAWPHIREHOML");
    msg.range = 0.16237558379870576;
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.640606007118102);
    msg.setSource(50025U);
    msg.setSourceEntity(13U);
    msg.setDestination(45647U);
    msg.setDestinationEntity(17U);
    msg.op = 63U;
    msg.system.assign("TIOYAJLMWLLPFPFNNBCDAXVTONPTAMICDRSRXNYWKEIYOICZPZGRPWQGZYJIRRSDUKIEORQFGTNEECKOWQLHJTPIDBBFZTMZUPKQLBWSSMUBHDKUVENQKRGXTOURCZALYKBULFCUALCETEKRPBXOMFXDJWJANUGYSIZOBBIFQZZH");
    msg.range = 0.4490501159743139;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.23769921207498002;
    tmp_msg_0.i = 0.46255471353878597;
    tmp_msg_0.d = 0.014013911689175318;
    tmp_msg_0.a = 0.4339573653718838;
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
    msg.setTimeStamp(0.40660799283543947);
    msg.setSource(33814U);
    msg.setSourceEntity(155U);
    msg.setDestination(41856U);
    msg.setDestinationEntity(199U);
    msg.op = 203U;
    msg.system.assign("ECGIFJRDVPXSMUPXHULKKEZWPTDYAIHRFOEOARZWYKTPSTXUJJEHMSUZ");
    msg.range = 0.07321868978807256;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2502601134U;
    tmp_msg_0.messages.assign("QBXWBBMWJTPAXIIJSUOZUFEDXIZBYLKLVKURJHZWBYJRCNAWDUREELVHGGOZHFOODYZRCMNZVSICAJPRMSWYKFNNHVPWCMYJXZSRHQCBUOMNFTPYGMBTLPTQLWDEBXCQHBASAWDEKYNLXEAIVKMFMNMTZPCQGXGAVUKTJQLAPGUKPSXAXZIFWICY");
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
    msg.setTimeStamp(0.41085597033314203);
    msg.setSource(42757U);
    msg.setSourceEntity(159U);
    msg.setDestination(18890U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.6354100791051144);
    msg.setSource(2854U);
    msg.setSourceEntity(128U);
    msg.setDestination(17402U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.47073316290642775);
    msg.setSource(25549U);
    msg.setSourceEntity(174U);
    msg.setDestination(4567U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.47141663184164684);
    msg.setSource(1780U);
    msg.setSourceEntity(156U);
    msg.setDestination(48586U);
    msg.setDestinationEntity(92U);
    msg.list.assign("GDZIVDXMKZTCFGLPNDVFSGIPWBYXKNKDIRTRBVEPZBJGIVMXNOJCTWJGUEUSVSDXPESVOPNSZDERHHUEKOYUJQHMRBWOJKTVVCQKLLWNLZEMOXFWSDHZJEGRHJOUPYGAP");

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
    msg.setTimeStamp(0.4449273760898781);
    msg.setSource(37080U);
    msg.setSourceEntity(176U);
    msg.setDestination(4752U);
    msg.setDestinationEntity(194U);
    msg.list.assign("KKEPGHNWJCZOYAHIDFFEZYSDWPOCRZHDLCXJDRHWYKWXUDHGDMIQV");

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
    msg.setTimeStamp(0.22256635274646408);
    msg.setSource(58268U);
    msg.setSourceEntity(70U);
    msg.setDestination(39859U);
    msg.setDestinationEntity(167U);
    msg.list.assign("HSYUCMJJBRMOBSIHNWEDWPCKOBWTOFZWITUSOOATPVHVXPXNMRLRWLNXLKFVEUXLBUZPVHJAGNKTJZUQLMEAIWWKISLEEVTDYBBECZBHUB");

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
    msg.setTimeStamp(0.8219308426325024);
    msg.setSource(35747U);
    msg.setSourceEntity(146U);
    msg.setDestination(64575U);
    msg.setDestinationEntity(9U);
    msg.value = 23871;

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
    msg.setTimeStamp(0.23527680464544887);
    msg.setSource(17108U);
    msg.setSourceEntity(105U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(81U);
    msg.value = 4905;

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
    msg.setTimeStamp(0.7024714450713222);
    msg.setSource(57647U);
    msg.setSourceEntity(145U);
    msg.setDestination(64564U);
    msg.setDestinationEntity(2U);
    msg.value = 8700;

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
    msg.setTimeStamp(0.1668447314650795);
    msg.setSource(60844U);
    msg.setSourceEntity(41U);
    msg.setDestination(61892U);
    msg.setDestinationEntity(140U);
    msg.value = 0.08544602412251023;

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
    msg.setTimeStamp(0.36146771361875263);
    msg.setSource(37229U);
    msg.setSourceEntity(15U);
    msg.setDestination(11249U);
    msg.setDestinationEntity(66U);
    msg.value = 0.9322965017445431;

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
    msg.setTimeStamp(0.21731250531004165);
    msg.setSource(59488U);
    msg.setSourceEntity(117U);
    msg.setDestination(54622U);
    msg.setDestinationEntity(170U);
    msg.value = 0.1935617793718276;

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
    msg.setTimeStamp(0.7386977659999846);
    msg.setSource(16221U);
    msg.setSourceEntity(20U);
    msg.setDestination(28743U);
    msg.setDestinationEntity(111U);
    msg.value = 0.5560045888910403;

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
    msg.setTimeStamp(0.3774524794243165);
    msg.setSource(12034U);
    msg.setSourceEntity(158U);
    msg.setDestination(38036U);
    msg.setDestinationEntity(187U);
    msg.value = 0.18503646230341164;

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
    msg.setTimeStamp(0.011584155354591341);
    msg.setSource(54931U);
    msg.setSourceEntity(166U);
    msg.setDestination(59840U);
    msg.setDestinationEntity(166U);
    msg.value = 0.2766805911758845;

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
    msg.setTimeStamp(0.11108719207282802);
    msg.setSource(3821U);
    msg.setSourceEntity(20U);
    msg.setDestination(50918U);
    msg.setDestinationEntity(126U);
    msg.validity = 13685U;
    msg.type = 48U;
    msg.utc_year = 56082U;
    msg.utc_month = 183U;
    msg.utc_day = 16U;
    msg.utc_time = 0.5013834521620867;
    msg.lat = 0.6369652609082391;
    msg.lon = 0.6329774719019297;
    msg.height = 0.06794949778486292;
    msg.satellites = 33U;
    msg.cog = 0.4092599838970523;
    msg.sog = 0.29578184657242346;
    msg.hdop = 0.5307437154086904;
    msg.vdop = 0.6788075947591563;
    msg.hacc = 0.3246187864152401;
    msg.vacc = 0.4682672198263046;

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
    msg.setTimeStamp(0.038609757136733425);
    msg.setSource(11074U);
    msg.setSourceEntity(169U);
    msg.setDestination(42077U);
    msg.setDestinationEntity(172U);
    msg.validity = 2209U;
    msg.type = 13U;
    msg.utc_year = 44345U;
    msg.utc_month = 126U;
    msg.utc_day = 203U;
    msg.utc_time = 0.830213249519976;
    msg.lat = 0.8185354264327138;
    msg.lon = 0.7396641865374912;
    msg.height = 0.20852096796678732;
    msg.satellites = 179U;
    msg.cog = 0.1254387915970101;
    msg.sog = 0.17328223058934644;
    msg.hdop = 0.7175310975836484;
    msg.vdop = 0.0562081229076814;
    msg.hacc = 0.11781815507128313;
    msg.vacc = 0.9610987871325556;

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
    msg.setTimeStamp(0.15863734684961728);
    msg.setSource(36595U);
    msg.setSourceEntity(13U);
    msg.setDestination(22680U);
    msg.setDestinationEntity(145U);
    msg.validity = 19738U;
    msg.type = 89U;
    msg.utc_year = 7148U;
    msg.utc_month = 29U;
    msg.utc_day = 104U;
    msg.utc_time = 0.5449442124206514;
    msg.lat = 0.07886307601557496;
    msg.lon = 0.7200865811184292;
    msg.height = 0.18879280460680037;
    msg.satellites = 79U;
    msg.cog = 0.9788546614755583;
    msg.sog = 0.8376306444666928;
    msg.hdop = 0.8217458544845083;
    msg.vdop = 0.27802105059065785;
    msg.hacc = 0.08531888769796203;
    msg.vacc = 0.48979505288959235;

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
    msg.setTimeStamp(0.5097596919886853);
    msg.setSource(30267U);
    msg.setSourceEntity(49U);
    msg.setDestination(33116U);
    msg.setDestinationEntity(22U);
    msg.time = 0.8346458861781167;
    msg.phi = 0.9574065421816945;
    msg.theta = 0.6154509637560667;
    msg.psi = 0.928329999422468;
    msg.psi_magnetic = 0.43241534578475194;

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
    msg.setTimeStamp(0.9713140165242413);
    msg.setSource(42346U);
    msg.setSourceEntity(134U);
    msg.setDestination(27689U);
    msg.setDestinationEntity(122U);
    msg.time = 0.3537492207352757;
    msg.phi = 0.7187155821491196;
    msg.theta = 0.409329187476389;
    msg.psi = 0.6083698514284858;
    msg.psi_magnetic = 0.19296038413759498;

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
    msg.setTimeStamp(0.47911891098995285);
    msg.setSource(8735U);
    msg.setSourceEntity(27U);
    msg.setDestination(30177U);
    msg.setDestinationEntity(204U);
    msg.time = 0.5154610772882274;
    msg.phi = 0.1736170536318572;
    msg.theta = 0.9184731888934392;
    msg.psi = 0.07492705573594971;
    msg.psi_magnetic = 0.1215018211975768;

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
    msg.setTimeStamp(0.9300476932334067);
    msg.setSource(54170U);
    msg.setSourceEntity(13U);
    msg.setDestination(55675U);
    msg.setDestinationEntity(189U);
    msg.time = 0.8460130731896836;
    msg.x = 0.36316728183899927;
    msg.y = 0.46345291188999926;
    msg.z = 0.4744758208091786;
    msg.timestep = 0.8753255201688197;

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
    msg.setTimeStamp(0.8861558920151121);
    msg.setSource(45233U);
    msg.setSourceEntity(151U);
    msg.setDestination(51497U);
    msg.setDestinationEntity(33U);
    msg.time = 0.4527266179139915;
    msg.x = 0.06829789618277626;
    msg.y = 0.9067777365541068;
    msg.z = 0.8068005487042017;
    msg.timestep = 0.8881032912045322;

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
    msg.setTimeStamp(0.645018385637451);
    msg.setSource(3203U);
    msg.setSourceEntity(238U);
    msg.setDestination(40692U);
    msg.setDestinationEntity(65U);
    msg.time = 0.5253703455956785;
    msg.x = 0.9509490103664877;
    msg.y = 0.6256120372507713;
    msg.z = 0.8252750762908462;
    msg.timestep = 0.05380755758866229;

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
    msg.setTimeStamp(0.05714041116278945);
    msg.setSource(24597U);
    msg.setSourceEntity(144U);
    msg.setDestination(61662U);
    msg.setDestinationEntity(27U);
    msg.time = 0.6218741818657798;
    msg.x = 0.04448331087459878;
    msg.y = 0.48740510673646564;
    msg.z = 0.05917889726956527;

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
    msg.setTimeStamp(0.5013603909316748);
    msg.setSource(7870U);
    msg.setSourceEntity(41U);
    msg.setDestination(32168U);
    msg.setDestinationEntity(146U);
    msg.time = 0.2972636112382361;
    msg.x = 0.5732217645459983;
    msg.y = 0.5691438796476302;
    msg.z = 0.6513259308291252;

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
    msg.setTimeStamp(0.1556771897259397);
    msg.setSource(25765U);
    msg.setSourceEntity(11U);
    msg.setDestination(39324U);
    msg.setDestinationEntity(192U);
    msg.time = 0.9471685391396547;
    msg.x = 0.10892220384650486;
    msg.y = 0.5816116020318975;
    msg.z = 0.6302934661780084;

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
    msg.setTimeStamp(0.8272619616686335);
    msg.setSource(3245U);
    msg.setSourceEntity(240U);
    msg.setDestination(2617U);
    msg.setDestinationEntity(167U);
    msg.time = 0.34950426439361404;
    msg.x = 0.08098682272961144;
    msg.y = 0.3947794399626534;
    msg.z = 0.8492087006464456;

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
    msg.setTimeStamp(0.018832553463099644);
    msg.setSource(64882U);
    msg.setSourceEntity(148U);
    msg.setDestination(33802U);
    msg.setDestinationEntity(239U);
    msg.time = 0.8138129053997579;
    msg.x = 0.5200560656112172;
    msg.y = 0.32690744960642226;
    msg.z = 0.05270062186400648;

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
    msg.setTimeStamp(0.7659214267042049);
    msg.setSource(49581U);
    msg.setSourceEntity(13U);
    msg.setDestination(22128U);
    msg.setDestinationEntity(53U);
    msg.time = 0.6845576741544688;
    msg.x = 0.7298585473938144;
    msg.y = 0.38931811862593424;
    msg.z = 0.764094812835145;

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
    msg.setTimeStamp(0.016830555532119984);
    msg.setSource(52296U);
    msg.setSourceEntity(229U);
    msg.setDestination(5582U);
    msg.setDestinationEntity(91U);
    msg.time = 0.9535255875530052;
    msg.x = 0.5579135136017732;
    msg.y = 0.6286409246269168;
    msg.z = 0.9515231572977546;

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
    msg.setTimeStamp(0.4639916318874191);
    msg.setSource(26420U);
    msg.setSourceEntity(223U);
    msg.setDestination(65215U);
    msg.setDestinationEntity(172U);
    msg.time = 0.6404912039179298;
    msg.x = 0.6312127061109503;
    msg.y = 0.9200654723878574;
    msg.z = 0.19170789818526068;

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
    msg.setTimeStamp(0.5640909535402207);
    msg.setSource(44447U);
    msg.setSourceEntity(180U);
    msg.setDestination(7564U);
    msg.setDestinationEntity(211U);
    msg.time = 0.525067999480039;
    msg.x = 0.8635504642186198;
    msg.y = 0.3815246162056697;
    msg.z = 0.8911730233712963;

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
    msg.setTimeStamp(0.7221891922944581);
    msg.setSource(16708U);
    msg.setSourceEntity(34U);
    msg.setDestination(31770U);
    msg.setDestinationEntity(128U);
    msg.validity = 210U;
    msg.x = 0.3467562118495383;
    msg.y = 0.30505987150974845;
    msg.z = 0.1934677358323288;

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
    msg.setTimeStamp(0.07339852686729409);
    msg.setSource(30952U);
    msg.setSourceEntity(25U);
    msg.setDestination(40377U);
    msg.setDestinationEntity(28U);
    msg.validity = 253U;
    msg.x = 0.3582578510598774;
    msg.y = 0.650827430032849;
    msg.z = 0.6600303778110672;

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
    msg.setTimeStamp(0.5203027645283317);
    msg.setSource(62569U);
    msg.setSourceEntity(219U);
    msg.setDestination(2128U);
    msg.setDestinationEntity(228U);
    msg.validity = 188U;
    msg.x = 0.4251592920131607;
    msg.y = 0.6972254530939281;
    msg.z = 0.5832867241493288;

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
    msg.setTimeStamp(0.5204599328609822);
    msg.setSource(8547U);
    msg.setSourceEntity(127U);
    msg.setDestination(64768U);
    msg.setDestinationEntity(102U);
    msg.validity = 62U;
    msg.x = 0.3020931532418376;
    msg.y = 0.7986085533988618;
    msg.z = 0.1590621254047776;

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
    msg.setTimeStamp(0.8089899027821469);
    msg.setSource(58804U);
    msg.setSourceEntity(251U);
    msg.setDestination(24339U);
    msg.setDestinationEntity(2U);
    msg.validity = 164U;
    msg.x = 0.8074650099691513;
    msg.y = 0.2740645095058958;
    msg.z = 0.5006963389359746;

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
    msg.setTimeStamp(0.36329354113584444);
    msg.setSource(62067U);
    msg.setSourceEntity(134U);
    msg.setDestination(17838U);
    msg.setDestinationEntity(140U);
    msg.validity = 127U;
    msg.x = 0.895154876620662;
    msg.y = 0.31207117325323563;
    msg.z = 0.8122768604155575;

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
    msg.setTimeStamp(0.5971565363673192);
    msg.setSource(49178U);
    msg.setSourceEntity(54U);
    msg.setDestination(64333U);
    msg.setDestinationEntity(170U);
    msg.time = 0.4629291287187577;
    msg.x = 0.17342476753261715;
    msg.y = 0.6721456808748625;
    msg.z = 0.02125720965165645;

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
    msg.setTimeStamp(0.4824538282903409);
    msg.setSource(18216U);
    msg.setSourceEntity(109U);
    msg.setDestination(46943U);
    msg.setDestinationEntity(120U);
    msg.time = 0.36061578452071497;
    msg.x = 0.34951842058653904;
    msg.y = 0.36863103902155026;
    msg.z = 0.08414763519357105;

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
    msg.setTimeStamp(0.8477611566726101);
    msg.setSource(47276U);
    msg.setSourceEntity(83U);
    msg.setDestination(45877U);
    msg.setDestinationEntity(184U);
    msg.time = 0.04715702629867824;
    msg.x = 0.29489683135523626;
    msg.y = 0.4877788359164772;
    msg.z = 0.09247469294632238;

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
    msg.setTimeStamp(0.6206640432125571);
    msg.setSource(16097U);
    msg.setSourceEntity(7U);
    msg.setDestination(35557U);
    msg.setDestinationEntity(13U);
    msg.validity = 168U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9899450589633058;
    tmp_msg_0.y = 0.37131191517086803;
    tmp_msg_0.z = 0.7430333878301685;
    tmp_msg_0.phi = 0.2555172183312101;
    tmp_msg_0.theta = 0.9411306828340978;
    tmp_msg_0.psi = 0.10976924308605918;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.1769795862403809;
    tmp_msg_1.beam_height = 0.3714633223997019;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.7550407093240868;

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
    msg.setTimeStamp(0.6125063922005709);
    msg.setSource(10640U);
    msg.setSourceEntity(114U);
    msg.setDestination(65269U);
    msg.setDestinationEntity(174U);
    msg.validity = 247U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.05015230586979336;
    tmp_msg_0.y = 0.40646256610357523;
    tmp_msg_0.z = 0.21309393468249183;
    tmp_msg_0.phi = 0.7797891317344703;
    tmp_msg_0.theta = 0.595461667585458;
    tmp_msg_0.psi = 0.5556500835427917;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8429631801348505;
    tmp_msg_1.beam_height = 0.6708689178438956;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8160201603093944;

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
    msg.setTimeStamp(0.5345655638298387);
    msg.setSource(24620U);
    msg.setSourceEntity(153U);
    msg.setDestination(17677U);
    msg.setDestinationEntity(237U);
    msg.validity = 13U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.18773020893141357;
    tmp_msg_0.y = 0.9707428557996337;
    tmp_msg_0.z = 0.011135693814006142;
    tmp_msg_0.phi = 0.01832627303545198;
    tmp_msg_0.theta = 0.5484732668963472;
    tmp_msg_0.psi = 0.6653459946890509;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.6626201626361082;
    tmp_msg_1.beam_height = 0.7703597158848983;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.48765884114243785;

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
    msg.setTimeStamp(0.3130985865428796);
    msg.setSource(64156U);
    msg.setSourceEntity(223U);
    msg.setDestination(15411U);
    msg.setDestinationEntity(101U);
    msg.value = 0.944132564344476;

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
    msg.setTimeStamp(0.2602798299708957);
    msg.setSource(51814U);
    msg.setSourceEntity(89U);
    msg.setDestination(44003U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7345106297043692;

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
    msg.setTimeStamp(0.2982520416779494);
    msg.setSource(181U);
    msg.setSourceEntity(129U);
    msg.setDestination(38859U);
    msg.setDestinationEntity(29U);
    msg.value = 0.09099396577377583;

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
    msg.setTimeStamp(0.4681559895011771);
    msg.setSource(10932U);
    msg.setSourceEntity(55U);
    msg.setDestination(61617U);
    msg.setDestinationEntity(249U);
    msg.value = 0.14981742206266524;

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
    msg.setTimeStamp(0.02340341110470001);
    msg.setSource(609U);
    msg.setSourceEntity(228U);
    msg.setDestination(26330U);
    msg.setDestinationEntity(116U);
    msg.value = 0.32285746077325106;

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
    msg.setTimeStamp(0.20596646244838868);
    msg.setSource(36558U);
    msg.setSourceEntity(229U);
    msg.setDestination(46056U);
    msg.setDestinationEntity(167U);
    msg.value = 0.27249311912920193;

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
    msg.setTimeStamp(0.6283816828577247);
    msg.setSource(55699U);
    msg.setSourceEntity(218U);
    msg.setDestination(60503U);
    msg.setDestinationEntity(70U);
    msg.value = 0.7853505749311913;

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
    msg.setTimeStamp(0.30959929372952355);
    msg.setSource(23439U);
    msg.setSourceEntity(139U);
    msg.setDestination(39984U);
    msg.setDestinationEntity(194U);
    msg.value = 0.1838085158291508;

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
    msg.setTimeStamp(0.07411014057629817);
    msg.setSource(32926U);
    msg.setSourceEntity(139U);
    msg.setDestination(34782U);
    msg.setDestinationEntity(90U);
    msg.value = 0.567063741634868;

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
    msg.setTimeStamp(0.9127703389790329);
    msg.setSource(23036U);
    msg.setSourceEntity(57U);
    msg.setDestination(54367U);
    msg.setDestinationEntity(133U);
    msg.value = 0.9029935608601415;

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
    msg.setTimeStamp(0.09193649554986838);
    msg.setSource(3801U);
    msg.setSourceEntity(214U);
    msg.setDestination(52937U);
    msg.setDestinationEntity(164U);
    msg.value = 0.5685630185037484;

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
    msg.setTimeStamp(0.2510391443457545);
    msg.setSource(2933U);
    msg.setSourceEntity(175U);
    msg.setDestination(10997U);
    msg.setDestinationEntity(229U);
    msg.value = 0.45625049237852333;

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
    msg.setTimeStamp(0.07243297959688522);
    msg.setSource(36942U);
    msg.setSourceEntity(50U);
    msg.setDestination(25138U);
    msg.setDestinationEntity(233U);
    msg.value = 0.7562986354210519;

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
    msg.setTimeStamp(0.5717064165116073);
    msg.setSource(10726U);
    msg.setSourceEntity(214U);
    msg.setDestination(24875U);
    msg.setDestinationEntity(104U);
    msg.value = 0.3112910001486555;

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
    msg.setTimeStamp(0.8870424613982796);
    msg.setSource(56560U);
    msg.setSourceEntity(61U);
    msg.setDestination(5209U);
    msg.setDestinationEntity(201U);
    msg.value = 0.9067769815965531;

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
    msg.setTimeStamp(0.6967050915829233);
    msg.setSource(8820U);
    msg.setSourceEntity(253U);
    msg.setDestination(18692U);
    msg.setDestinationEntity(150U);
    msg.value = 0.05516185579067867;

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
    msg.setTimeStamp(0.38968342399315536);
    msg.setSource(22448U);
    msg.setSourceEntity(74U);
    msg.setDestination(36759U);
    msg.setDestinationEntity(75U);
    msg.value = 0.41510724195327686;

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
    msg.setTimeStamp(0.20245372339807288);
    msg.setSource(55866U);
    msg.setSourceEntity(182U);
    msg.setDestination(26074U);
    msg.setDestinationEntity(168U);
    msg.value = 0.5581547337392777;

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
    msg.setTimeStamp(0.060330211792167576);
    msg.setSource(40716U);
    msg.setSourceEntity(141U);
    msg.setDestination(11956U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5510842829618906;

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
    msg.setTimeStamp(0.6253512324738904);
    msg.setSource(8921U);
    msg.setSourceEntity(211U);
    msg.setDestination(3794U);
    msg.setDestinationEntity(13U);
    msg.value = 0.059105773025836195;

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
    msg.setTimeStamp(0.1738315146121462);
    msg.setSource(20670U);
    msg.setSourceEntity(25U);
    msg.setDestination(23177U);
    msg.setDestinationEntity(181U);
    msg.value = 0.6469883382360133;

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
    msg.setTimeStamp(0.8151039935521407);
    msg.setSource(16537U);
    msg.setSourceEntity(27U);
    msg.setDestination(60520U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7598051318353567;

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
    msg.setTimeStamp(0.37565488379247947);
    msg.setSource(19526U);
    msg.setSourceEntity(76U);
    msg.setDestination(59605U);
    msg.setDestinationEntity(54U);
    msg.value = 0.4767753185341337;

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
    msg.setTimeStamp(0.5248031970083736);
    msg.setSource(9792U);
    msg.setSourceEntity(6U);
    msg.setDestination(18308U);
    msg.setDestinationEntity(81U);
    msg.value = 0.46383232571902955;

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
    msg.setTimeStamp(0.8224424952849306);
    msg.setSource(61470U);
    msg.setSourceEntity(159U);
    msg.setDestination(2133U);
    msg.setDestinationEntity(97U);
    msg.direction = 0.7481568724829375;
    msg.speed = 0.34502775042723455;
    msg.turbulence = 0.9333142554179579;

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
    msg.setTimeStamp(0.7716115207836146);
    msg.setSource(17821U);
    msg.setSourceEntity(100U);
    msg.setDestination(46980U);
    msg.setDestinationEntity(32U);
    msg.direction = 0.7096416683502522;
    msg.speed = 0.6945144541881503;
    msg.turbulence = 0.8159225243987237;

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
    msg.setTimeStamp(0.5141693437949952);
    msg.setSource(19378U);
    msg.setSourceEntity(231U);
    msg.setDestination(7328U);
    msg.setDestinationEntity(233U);
    msg.direction = 0.14480560925700392;
    msg.speed = 0.4493308698005172;
    msg.turbulence = 0.8566326255934005;

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
    msg.setTimeStamp(0.40219718005426897);
    msg.setSource(2614U);
    msg.setSourceEntity(227U);
    msg.setDestination(4235U);
    msg.setDestinationEntity(67U);
    msg.value = 0.39209132192056184;

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
    msg.setTimeStamp(0.6473164736323165);
    msg.setSource(10236U);
    msg.setSourceEntity(171U);
    msg.setDestination(4438U);
    msg.setDestinationEntity(191U);
    msg.value = 0.26094988416677334;

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
    msg.setTimeStamp(0.12774835129078232);
    msg.setSource(23003U);
    msg.setSourceEntity(43U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(240U);
    msg.value = 0.6442941906860797;

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
    msg.setTimeStamp(0.35475932677766975);
    msg.setSource(45204U);
    msg.setSourceEntity(17U);
    msg.setDestination(59451U);
    msg.setDestinationEntity(179U);
    msg.value.assign("AZYXEYLGLBUGSYBKGWVGQKHHZQKMLLDILHNGJHAXBWVCRDRJBFXTCDSDRCKCUVDAPOYSXZCRQSSPNKWJHBTJOIRFHUEAXTBQPVSOEWQMFEQPRTE");

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
    msg.setTimeStamp(0.9162167451634613);
    msg.setSource(35710U);
    msg.setSourceEntity(71U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(238U);
    msg.value.assign("OKEPQCSMBKOCESBAXSZLDBVLDKQTJIZAQXHOUHUKOKBCEOGRRTNGAG");

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
    msg.setTimeStamp(0.506811821760589);
    msg.setSource(30248U);
    msg.setSourceEntity(33U);
    msg.setDestination(57525U);
    msg.setDestinationEntity(127U);
    msg.value.assign("OZUCTTJEUYPNPZXHVFAIOSIPRZSNBPLEBIITHIRMWEKQCBYCAFEOKLDRITUXRERYNDRVDWSQWAJVATCYOZSXHDNKQHNZGYYUXHEEDKACNJLOIFLOAZVVIJMWGEBATDMXSBPFWGVLGKYXUMXJIKKBJDJMHWXPNMYGMHOYPPJGTMWRGUTFKFFWZVLHJUGQUSGUCBPNWCHKOMZMJCDHRYFFVEAONBTQRLDBATOPQLSKSWVZBIR");

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
    msg.setTimeStamp(0.4854241949058997);
    msg.setSource(40352U);
    msg.setSourceEntity(45U);
    msg.setDestination(2174U);
    msg.setDestinationEntity(122U);
    const char tmp_msg_0[] = {75, 100, 92, -107, -39, 35, -47, -101, 83, -102, -41, 8, -117, -51, -38, -105, 3, 83, -15, 96, 99, -90, -6, 39, -64, 85, 94, -77, -66, -107, 87, -1, 46, -8, -2, 116, -54, -62, 24, -93, 13, 3, 21, 50, 60, 41, -83, -87, -111, 42, -120, -67, -75, 62, -10, 60, -25, -110, 83, -92, 125, 95, 93, -14, -122, 118, -96, 93, -21, -22, 32, -85, -121, 14, 6, 26, 77, -15, 93, -71, -116, 119, 90, -26, 87, 54, 19, -54, 72, -98, -121, -80, -119, -122, 90, 34, 64, 110, 102, 57, -88, 28, -86, -33, -117, -126, 24, -122, 74, 99, -42, 82, -117, -13, 38, 70, -124, -67, -34, -78, -121, 60, -61, 109, -117, -110, 119, 91, -33, 28, 95, 64, 48, 8, -49};
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
    msg.setTimeStamp(0.49031770815863474);
    msg.setSource(27401U);
    msg.setSourceEntity(10U);
    msg.setDestination(63979U);
    msg.setDestinationEntity(122U);
    const char tmp_msg_0[] = {8, -80, -67, -16, 6, 67, -124, 5, 57, -128, 13, -97, 96, 62, -43, -108, -124, -69, 92, -24, 10, -60, 37, -10, 112, -123, -69, 119, -96, 86, -52, 9, 112, -4, 113, 18, -60, -117, 66, -111, 121, -19, 37, -38, 63, -77, 80, -102, -19, 85, 37, 19, 3, -122, -32, 120, -5, -87, -128, -15, -92, 126, -19, 105, 91, -81, 113, 116, 80, -110, -114, 83, 34, 110, -21, -107, 101, -30, -105, 63, 125, 122};
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
    msg.setTimeStamp(0.03511422876685444);
    msg.setSource(4403U);
    msg.setSourceEntity(156U);
    msg.setDestination(56184U);
    msg.setDestinationEntity(146U);
    const char tmp_msg_0[] = {-18, -59, 19, 82, -88, 9, -26, 79, -105, -108, -82, -15, 71, -8, -44, 66, 0, 111, 61, 117, -104, 66, -110, 98, 65, 70, 81, 97, -69, 55, 70, 0, -128, -43, 4, 49, 85, 54, 60, 52, 12, -37, -98, 23, -51, 52, 9, -43, -34, 51, -102, -71, -94, 41, -21, -12, 61, 37, 82, -72, 53, 104, 100, 13, -10, -2, 112, 62, 105, -66, -121, -48, 1, -101, 11, 16, -123, 52, -56, -89, 58, -105, 42, 17, -48, 95, -80, 63, 111, 84, -115, 21, 59, 110, 107, 5, -126, 19, 92, 104, 60, -9, -127, 72, -111, -31, 51, -23, 79, -83, 84, -77, 101, 46, 116, 17, -16, 112, 48, 96, -24, 72, -7, -17, -43, -22, -75, 93, 44, -114, 109, 94, -98, 69, -70, 104, 30, -118, 55, 49, 43, 15, 6, 43, -103, -98, -60, 25};
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
    msg.setTimeStamp(0.9794693209619655);
    msg.setSource(57375U);
    msg.setSourceEntity(22U);
    msg.setDestination(14946U);
    msg.setDestinationEntity(178U);
    msg.type = 16U;
    msg.frequency = 2300940226U;
    msg.min_range = 44168U;
    msg.max_range = 41962U;
    msg.bits_per_point = 137U;
    msg.scale_factor = 0.2953011868884964;
    const char tmp_msg_0[] = {38, 110, 28, 56, -24, 13, -118, -29, -91, -1, 94, 54, -42, 117, 54, 107, 118, -78, -15, -67, -21, 28, -64, 101, 53, -76, -25, -58, 115, 124, 34, 57, 2, 97, -124, -83, -124, -103, -13, 54, 105, -12, -52, -66, 50, 77, -33, 118, -26, 57, 56, -82, 99, -65, 11, 70, -27, 63, 112, -120, 88, 13, -94, 103, -79, 18, -87, 25, -91, -102, -116, 103, 74, -77, 2, -40, -79, 93, -123, -12, -32, -72, 77, 26, 95, 73, 120, -25, 19, 121, 55, -109, 74, -103, 34, 37, -43, -53, 80, -49, 64, -13, -102, -124, 56, 71, -78, 62, -88, -5, 93, -79, -83, -119, 94, 26, 116, 64, 107, 21, 4, -12, -6, -81, 116, -10, 76, 16, -115, -31, 76, -6, -74, -108, 13, 46, -99, 0, 102, -126, 119, 46, -110, 21, 27, -70, 121, 23, 20, 94, -4, 4, -66, -47, 11, -66, -70, -126, 75, 23, 77, 67, -68, -4, 43, 53, -3, 44, 50, -33, 1, -100, -79, -43, 78, 45, 20, -44, 72, -121, -58, 35, 44, 59, 112, -71, 69, 8, 16, 96, 108, 60, -18, 82, 23, 64, 107, -88, -12, 105, -39, -99, -82, -47, -56, -72, -116, 48, -124, -71, -35, -88, -80, -19, -56, 49, -58, 24, -80, -115, 11, -41, 43, -52, 67, 68, 17, 10, 73, 116, 79, -76, -72, -85, 1, 114, 71, 117, 109};
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
    msg.setTimeStamp(0.3817360854994728);
    msg.setSource(7383U);
    msg.setSourceEntity(22U);
    msg.setDestination(53288U);
    msg.setDestinationEntity(141U);
    msg.type = 97U;
    msg.frequency = 994408226U;
    msg.min_range = 31500U;
    msg.max_range = 31097U;
    msg.bits_per_point = 178U;
    msg.scale_factor = 0.5293688582595002;
    const char tmp_msg_0[] = {61, 98, 26, 20, -5, -41, 94, 76, 6, 8, 80, -2, -94, -36, 80, 0, 39, 9, 66, -71, 38, -38, -50, 124, 7, 59, -32, -16, 4, 10, 55, 21, -33, -104, 90, -127, -31, 52, 65, -85};
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
    msg.setTimeStamp(0.7541579270684468);
    msg.setSource(33505U);
    msg.setSourceEntity(236U);
    msg.setDestination(61287U);
    msg.setDestinationEntity(77U);
    msg.type = 152U;
    msg.frequency = 2361882392U;
    msg.min_range = 22818U;
    msg.max_range = 54608U;
    msg.bits_per_point = 197U;
    msg.scale_factor = 0.24433365937388574;
    const char tmp_msg_0[] = {80, -60, 25, 77, 68, -107, 55, 113, 60, 65, 11, 34, -107, 86, -9, -117, -104, 75, -58, -94, 48, -77, -59, 24, 20, -71, 25, -15, 11, -44, 109, -34, 54, -88, 33, -25, 33, -83, 65, 100, 2, -53, -6, -61, 26, 39, -34, -72, 35, -36, -45, 99, 67, 81, 104, -112, -77, -101, 111, 14, -92, -71, 21, -28, -1, -97, -124, 71, -42, 24, 64, 22, -25, 97};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.6965864677585076);
    msg.setSource(4076U);
    msg.setSourceEntity(145U);
    msg.setDestination(8341U);
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
    msg.setTimeStamp(0.811097382744593);
    msg.setSource(9317U);
    msg.setSourceEntity(11U);
    msg.setDestination(29275U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.9500350582536119);
    msg.setSource(30641U);
    msg.setSourceEntity(245U);
    msg.setDestination(39923U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.8053302337433392);
    msg.setSource(29556U);
    msg.setSourceEntity(176U);
    msg.setDestination(17708U);
    msg.setDestinationEntity(17U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.6952002440371051);
    msg.setSource(64486U);
    msg.setSourceEntity(56U);
    msg.setDestination(32771U);
    msg.setDestinationEntity(44U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.44439621468792834);
    msg.setSource(60357U);
    msg.setSourceEntity(234U);
    msg.setDestination(20374U);
    msg.setDestinationEntity(8U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.7607254795283043);
    msg.setSource(3314U);
    msg.setSourceEntity(235U);
    msg.setDestination(65161U);
    msg.setDestinationEntity(204U);
    msg.value = 0.04895238107857636;
    msg.confidence = 0.11141811872379215;
    msg.opmodes.assign("KEUKNJARPPNVIUHTSFWYVMVEHJCBZXMNMNWMFTMPOVVZSRNJYBUWGFBNJXLZLYNYCGDOLDSGADFAPYEGJFPLATOCGGRIAJEWIBQECGQPCVQZISKYVWNQJTKRGXYOKACJJKCRVNRUAYHNYDQSOKSZBALMIIIWEWHLFWAPKFPHQQUIYUDOXBUBUIMLLQWOKBSTRMERTACDIDSSDHDXOOTTQKZVWCXFXREVFTXMMCUQUBRFHG");

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
    msg.setTimeStamp(0.5026197094361171);
    msg.setSource(21632U);
    msg.setSourceEntity(62U);
    msg.setDestination(39658U);
    msg.setDestinationEntity(183U);
    msg.value = 0.4820614427527019;
    msg.confidence = 0.1040397351739033;
    msg.opmodes.assign("CUHZQRGBMNMQUGUZZZ");

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
    msg.setTimeStamp(0.15573939073524123);
    msg.setSource(57231U);
    msg.setSourceEntity(2U);
    msg.setDestination(16566U);
    msg.setDestinationEntity(62U);
    msg.value = 0.9879575675905731;
    msg.confidence = 0.6836158971161594;
    msg.opmodes.assign("FROIFQEGEPN");

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
    msg.setTimeStamp(0.16658399445749017);
    msg.setSource(47011U);
    msg.setSourceEntity(101U);
    msg.setDestination(58655U);
    msg.setDestinationEntity(175U);
    msg.itow = 2840092963U;
    msg.lat = 0.6681192513930118;
    msg.lon = 0.8398595231678521;
    msg.height_ell = 0.45825683891540514;
    msg.height_sea = 0.22675212171371983;
    msg.hacc = 0.9571539428215003;
    msg.vacc = 0.5123364332634026;
    msg.vel_n = 0.36339992462043236;
    msg.vel_e = 0.31867163072799887;
    msg.vel_d = 0.09754464831669485;
    msg.speed = 0.09338642493255012;
    msg.gspeed = 0.7006114486212556;
    msg.heading = 0.9355422742490397;
    msg.sacc = 0.20728737806686903;
    msg.cacc = 0.08573367764221362;

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
    msg.setTimeStamp(0.6430173256629785);
    msg.setSource(52274U);
    msg.setSourceEntity(157U);
    msg.setDestination(48930U);
    msg.setDestinationEntity(126U);
    msg.itow = 4043919614U;
    msg.lat = 0.9996817554085768;
    msg.lon = 0.6906804389293936;
    msg.height_ell = 0.9288863915023325;
    msg.height_sea = 0.6571833293786669;
    msg.hacc = 0.6965983463690691;
    msg.vacc = 0.6129894324603841;
    msg.vel_n = 0.6566419323529786;
    msg.vel_e = 0.4226594959970976;
    msg.vel_d = 0.8037226010152823;
    msg.speed = 0.9123293010324093;
    msg.gspeed = 0.9847382913834045;
    msg.heading = 0.38820515100572417;
    msg.sacc = 0.4002771038465258;
    msg.cacc = 0.4325538075760218;

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
    msg.setTimeStamp(0.2612089634062722);
    msg.setSource(21933U);
    msg.setSourceEntity(196U);
    msg.setDestination(63674U);
    msg.setDestinationEntity(98U);
    msg.itow = 930583648U;
    msg.lat = 0.8996748413718055;
    msg.lon = 0.7449045824283156;
    msg.height_ell = 0.4205005159374743;
    msg.height_sea = 0.4024351754561105;
    msg.hacc = 0.5055489206140167;
    msg.vacc = 0.7338847042386386;
    msg.vel_n = 0.7541796812297017;
    msg.vel_e = 0.7691243345715918;
    msg.vel_d = 0.8236645277076153;
    msg.speed = 0.11924088010252387;
    msg.gspeed = 0.7552545577710753;
    msg.heading = 0.9239590738203589;
    msg.sacc = 0.5205609238438766;
    msg.cacc = 0.11443229032573432;

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
    msg.setTimeStamp(0.11586941411027507);
    msg.setSource(16961U);
    msg.setSourceEntity(21U);
    msg.setDestination(39554U);
    msg.setDestinationEntity(148U);
    msg.id = 63U;
    msg.value = 0.026529716312755358;

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
    msg.setTimeStamp(0.06348053466692372);
    msg.setSource(21584U);
    msg.setSourceEntity(147U);
    msg.setDestination(6070U);
    msg.setDestinationEntity(206U);
    msg.id = 177U;
    msg.value = 0.7588011293069067;

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
    msg.setTimeStamp(0.5145997750292546);
    msg.setSource(18617U);
    msg.setSourceEntity(66U);
    msg.setDestination(47359U);
    msg.setDestinationEntity(55U);
    msg.id = 237U;
    msg.value = 0.7337107397579594;

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
    msg.setTimeStamp(0.7317273443325458);
    msg.setSource(24615U);
    msg.setSourceEntity(226U);
    msg.setDestination(51032U);
    msg.setDestinationEntity(250U);
    msg.x = 0.8743073929406818;
    msg.y = 0.19165272598596983;
    msg.z = 0.3961696881620661;
    msg.phi = 0.4462456977431538;
    msg.theta = 0.5756863048268118;
    msg.psi = 0.9435325767183597;

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
    msg.setTimeStamp(0.8163460292896082);
    msg.setSource(23596U);
    msg.setSourceEntity(154U);
    msg.setDestination(61632U);
    msg.setDestinationEntity(27U);
    msg.x = 0.3078041502238711;
    msg.y = 0.81914050239972;
    msg.z = 0.7617552092303822;
    msg.phi = 0.8423662882548687;
    msg.theta = 0.8068101409317762;
    msg.psi = 0.2283538895929107;

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
    msg.setTimeStamp(0.5107062497597928);
    msg.setSource(8279U);
    msg.setSourceEntity(177U);
    msg.setDestination(5431U);
    msg.setDestinationEntity(237U);
    msg.x = 0.892424325140375;
    msg.y = 0.7664238726564525;
    msg.z = 0.12009662850514136;
    msg.phi = 0.6029798226459938;
    msg.theta = 0.10731283152247584;
    msg.psi = 0.8376058977819303;

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
    msg.setTimeStamp(0.4286098460039648);
    msg.setSource(9363U);
    msg.setSourceEntity(67U);
    msg.setDestination(3237U);
    msg.setDestinationEntity(226U);
    msg.beam_width = 0.5215119827303727;
    msg.beam_height = 0.5633756909293146;

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
    msg.setTimeStamp(0.026758386793609423);
    msg.setSource(17942U);
    msg.setSourceEntity(231U);
    msg.setDestination(31762U);
    msg.setDestinationEntity(142U);
    msg.beam_width = 0.20373105541221104;
    msg.beam_height = 0.7751737765679583;

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
    msg.setTimeStamp(0.23763858052743236);
    msg.setSource(5045U);
    msg.setSourceEntity(65U);
    msg.setDestination(45014U);
    msg.setDestinationEntity(16U);
    msg.beam_width = 0.8739886589858293;
    msg.beam_height = 0.6711314219353881;

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
    msg.setTimeStamp(0.576436696365695);
    msg.setSource(42485U);
    msg.setSourceEntity(76U);
    msg.setDestination(11568U);
    msg.setDestinationEntity(109U);
    msg.sane = 242U;

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
    msg.setTimeStamp(0.22048817748850436);
    msg.setSource(31501U);
    msg.setSourceEntity(170U);
    msg.setDestination(28780U);
    msg.setDestinationEntity(199U);
    msg.sane = 18U;

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
    msg.setTimeStamp(0.9252621920124596);
    msg.setSource(13143U);
    msg.setSourceEntity(109U);
    msg.setDestination(7291U);
    msg.setDestinationEntity(127U);
    msg.sane = 145U;

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
    msg.setTimeStamp(0.8801692013369109);
    msg.setSource(60039U);
    msg.setSourceEntity(84U);
    msg.setDestination(2475U);
    msg.setDestinationEntity(145U);
    msg.value = 0.8720088748997842;

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
    msg.setTimeStamp(0.1467365522120836);
    msg.setSource(56555U);
    msg.setSourceEntity(98U);
    msg.setDestination(29630U);
    msg.setDestinationEntity(40U);
    msg.value = 0.2647375203449842;

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
    msg.setTimeStamp(0.4715051367429788);
    msg.setSource(50482U);
    msg.setSourceEntity(91U);
    msg.setDestination(29607U);
    msg.setDestinationEntity(87U);
    msg.value = 0.00677555545776698;

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
    msg.setTimeStamp(0.5836991146166178);
    msg.setSource(36650U);
    msg.setSourceEntity(226U);
    msg.setDestination(31293U);
    msg.setDestinationEntity(45U);
    msg.value = 0.9565771534413302;

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
    msg.setTimeStamp(0.8201530201239847);
    msg.setSource(46625U);
    msg.setSourceEntity(191U);
    msg.setDestination(28458U);
    msg.setDestinationEntity(234U);
    msg.value = 0.06721650774148558;

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
    msg.setTimeStamp(0.9743783121130457);
    msg.setSource(18316U);
    msg.setSourceEntity(145U);
    msg.setDestination(49479U);
    msg.setDestinationEntity(64U);
    msg.value = 0.21084812727988567;

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
    msg.setTimeStamp(0.737538952150186);
    msg.setSource(35969U);
    msg.setSourceEntity(241U);
    msg.setDestination(38611U);
    msg.setDestinationEntity(249U);
    msg.value = 0.43405132114144074;

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
    msg.setTimeStamp(0.12942067789668088);
    msg.setSource(33092U);
    msg.setSourceEntity(225U);
    msg.setDestination(42290U);
    msg.setDestinationEntity(189U);
    msg.value = 0.6077644658733405;

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
    msg.setTimeStamp(0.6141966778889668);
    msg.setSource(21613U);
    msg.setSourceEntity(134U);
    msg.setDestination(34093U);
    msg.setDestinationEntity(159U);
    msg.value = 0.4975543783622781;

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
    msg.setTimeStamp(0.9680421200535816);
    msg.setSource(8972U);
    msg.setSourceEntity(100U);
    msg.setDestination(4151U);
    msg.setDestinationEntity(52U);
    msg.value = 0.4162371683433195;

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
    msg.setTimeStamp(0.128139207636635);
    msg.setSource(8744U);
    msg.setSourceEntity(173U);
    msg.setDestination(59901U);
    msg.setDestinationEntity(59U);
    msg.value = 0.7946459770760559;

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
    msg.setTimeStamp(0.19874507001125508);
    msg.setSource(7953U);
    msg.setSourceEntity(133U);
    msg.setDestination(56568U);
    msg.setDestinationEntity(183U);
    msg.value = 0.1619164041361113;

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
    msg.setTimeStamp(0.6551299878478799);
    msg.setSource(14652U);
    msg.setSourceEntity(149U);
    msg.setDestination(2619U);
    msg.setDestinationEntity(80U);
    msg.id = 97U;
    msg.zoom = 235U;
    msg.action = 116U;

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
    msg.setTimeStamp(0.38648449994067313);
    msg.setSource(57055U);
    msg.setSourceEntity(235U);
    msg.setDestination(25018U);
    msg.setDestinationEntity(121U);
    msg.id = 89U;
    msg.zoom = 177U;
    msg.action = 195U;

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
    msg.setTimeStamp(0.4865791142830832);
    msg.setSource(3409U);
    msg.setSourceEntity(57U);
    msg.setDestination(48704U);
    msg.setDestinationEntity(42U);
    msg.id = 84U;
    msg.zoom = 191U;
    msg.action = 130U;

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
    msg.setTimeStamp(0.5313545804532444);
    msg.setSource(56231U);
    msg.setSourceEntity(239U);
    msg.setDestination(36748U);
    msg.setDestinationEntity(156U);
    msg.id = 210U;
    msg.value = 0.3881816939275896;

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
    msg.setTimeStamp(0.4919876247549305);
    msg.setSource(41609U);
    msg.setSourceEntity(137U);
    msg.setDestination(56008U);
    msg.setDestinationEntity(56U);
    msg.id = 231U;
    msg.value = 0.14054459290532195;

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
    msg.setTimeStamp(0.9360252770897889);
    msg.setSource(30384U);
    msg.setSourceEntity(58U);
    msg.setDestination(34034U);
    msg.setDestinationEntity(245U);
    msg.id = 118U;
    msg.value = 0.2614957242479552;

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
    msg.setTimeStamp(0.6423923837011907);
    msg.setSource(56561U);
    msg.setSourceEntity(49U);
    msg.setDestination(4737U);
    msg.setDestinationEntity(125U);
    msg.id = 198U;
    msg.value = 0.45949544611442583;

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
    msg.setTimeStamp(0.8659230143100372);
    msg.setSource(11317U);
    msg.setSourceEntity(144U);
    msg.setDestination(22799U);
    msg.setDestinationEntity(74U);
    msg.id = 210U;
    msg.value = 0.1808756835358769;

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
    msg.setTimeStamp(0.8590005123143563);
    msg.setSource(47713U);
    msg.setSourceEntity(121U);
    msg.setDestination(36466U);
    msg.setDestinationEntity(72U);
    msg.id = 103U;
    msg.value = 0.060417784435544686;

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
    msg.setTimeStamp(0.42343755407423844);
    msg.setSource(13254U);
    msg.setSourceEntity(181U);
    msg.setDestination(59721U);
    msg.setDestinationEntity(165U);
    msg.id = 16U;
    msg.angle = 0.8595294246379198;

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
    msg.setTimeStamp(0.3812230637120715);
    msg.setSource(5898U);
    msg.setSourceEntity(34U);
    msg.setDestination(51746U);
    msg.setDestinationEntity(228U);
    msg.id = 235U;
    msg.angle = 0.14710515578414374;

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
    msg.setTimeStamp(0.5973807227167935);
    msg.setSource(30714U);
    msg.setSourceEntity(23U);
    msg.setDestination(16529U);
    msg.setDestinationEntity(38U);
    msg.id = 86U;
    msg.angle = 0.6424128292523668;

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
    msg.setTimeStamp(0.4905941337906471);
    msg.setSource(28561U);
    msg.setSourceEntity(50U);
    msg.setDestination(54166U);
    msg.setDestinationEntity(116U);
    msg.op = 175U;
    msg.actions.assign("MQEUQLKLCKSMZOEEPZNVKSIPZEKQLARDFVZAHBLISGHUEPMNDYZJIQTCRQEMMHXYKOBTLFVHSCXFATTYUTSKVROZYWZMIUHEOWCGEJUOG");

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
    msg.setTimeStamp(0.03488244733518209);
    msg.setSource(20956U);
    msg.setSourceEntity(100U);
    msg.setDestination(17580U);
    msg.setDestinationEntity(71U);
    msg.op = 144U;
    msg.actions.assign("XWUIZTDKNBHZSXPASLNRLRCAWTVQBXRNUMLCTMPCPPVOITLBKMPWAUZFWYLYPOKHNQCJTKUFGNHVZEGOCDKHPHKVRQGEDOEXKBZJQSTTZSWHLJGDZVVMTIXWIRVUQBZYDRXFHJYEEBMSNOFEYQRFDBIAAFSMOZMXVEXCSIUYMGCPXCAIDWIHOMBARTPESDGRSDWGNTZNLQUOUWAYISVAHCND");

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
    msg.setTimeStamp(0.47685843491590085);
    msg.setSource(8841U);
    msg.setSourceEntity(14U);
    msg.setDestination(25414U);
    msg.setDestinationEntity(244U);
    msg.op = 85U;
    msg.actions.assign("FEXRNWLKYFHOPWBRTGUPTRTQBGFHBHBISFOONWXOQKMZHJUGPSUCBVVDNIUPV");

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
    msg.setTimeStamp(0.5396112211452448);
    msg.setSource(15331U);
    msg.setSourceEntity(100U);
    msg.setDestination(46451U);
    msg.setDestinationEntity(129U);
    msg.actions.assign("NPRRKNIIEQPBRBFWZOFKQXAIQPUWSYNMZKLFSSQRXOUYQCNPVBELTEADRWIZISZSZWLCPYBJXJOOVZSIUDIUYTHSLRFJFEUBHKWELHUG");

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
    msg.setTimeStamp(0.16646515655957506);
    msg.setSource(49690U);
    msg.setSourceEntity(161U);
    msg.setDestination(44388U);
    msg.setDestinationEntity(70U);
    msg.actions.assign("YBITARSQVZZKVTRONHPQZWABLQQIMSLPBRFEVIXWPHEVUDFZNCYUCUHOCWSJVUNEJRGLMAFXYMSMOFNZTJYVJAKUACMNNFBLTNONGQFYEVEVZPJEBYDDUGYAJ");

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
    msg.setTimeStamp(0.8020971263169909);
    msg.setSource(30300U);
    msg.setSourceEntity(152U);
    msg.setDestination(4239U);
    msg.setDestinationEntity(170U);
    msg.actions.assign("PFYHIZONEKGOYHWUSUTTVGWCBUOMLPSAVNGIJBLZYFIJLDQQPLAOUQQOXSJRWXQHSFGEAABLRXJHCCDJTVWXYCILEKUEVEGSKKCWWMXMRYAST");

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
    msg.setTimeStamp(0.4286840804417127);
    msg.setSource(47814U);
    msg.setSourceEntity(130U);
    msg.setDestination(56569U);
    msg.setDestinationEntity(163U);
    msg.button = 120U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.3211731658684114);
    msg.setSource(60787U);
    msg.setSourceEntity(134U);
    msg.setDestination(6759U);
    msg.setDestinationEntity(37U);
    msg.button = 4U;
    msg.value = 54U;

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
    msg.setTimeStamp(0.8805737040213777);
    msg.setSource(56732U);
    msg.setSourceEntity(146U);
    msg.setDestination(9267U);
    msg.setDestinationEntity(70U);
    msg.button = 98U;
    msg.value = 164U;

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
    msg.setTimeStamp(0.5422407705710411);
    msg.setSource(57528U);
    msg.setSourceEntity(207U);
    msg.setDestination(55785U);
    msg.setDestinationEntity(191U);
    msg.op = 131U;
    msg.text.assign("DWQCJBNIPORLPTANPMAAEWTDYGUKMTGBFNZCRAMZZQQVPYZVXWAFOYIUJCVESTMSVHXXOQKKBNGCFRWDSTIYYJBAPEXANLVTSXQI");

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
    msg.setTimeStamp(0.5423001023314864);
    msg.setSource(27876U);
    msg.setSourceEntity(17U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(39U);
    msg.op = 234U;
    msg.text.assign("HDLOKVDUFYJHYBHEIWTENAVBCYEYGWLAHZPESTXIXOQUADWENKGUIFNEQENSLMBUMCNKLGTYAFNTHRBCSKBVAYLRKVPKFYRHUQAFGDOVEOIPKMJUROMNWJVPSWONAWZXPSQIHMYGSZYFPUWLBXJGVMUFSJIXJURZXOVHSGWXMCETPDGIZFRDVQBCOIQWNDNQIQTYDBAOTDAPKPQUJZMWZZHTZMCDCSTJKF");

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
    msg.setTimeStamp(0.22075151256039305);
    msg.setSource(29160U);
    msg.setSourceEntity(157U);
    msg.setDestination(36649U);
    msg.setDestinationEntity(198U);
    msg.op = 190U;
    msg.text.assign("FXTTNTGRXEPDWBBSFYBDCKTLPAUFUORCJOUCQPVUQLIUKNOXBKLRHIHDREJSTSPJNWVEIOXLMRMVNPXIEKONETVRILWZXQBQYCEAAJYFMPDKRPOKWIPZUQDJMMGAASZGLCJIXSTWHHXSGZGVURBUCE");

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
    msg.setTimeStamp(0.7153838154676324);
    msg.setSource(53153U);
    msg.setSourceEntity(246U);
    msg.setDestination(6677U);
    msg.setDestinationEntity(235U);
    msg.op = 27U;
    msg.time_remain = 0.3284847844321085;
    msg.sched_time = 0.42562817193736413;

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
    msg.setTimeStamp(0.12326284374090435);
    msg.setSource(55543U);
    msg.setSourceEntity(183U);
    msg.setDestination(43598U);
    msg.setDestinationEntity(101U);
    msg.op = 223U;
    msg.time_remain = 0.6470854074934187;
    msg.sched_time = 0.08535568676544003;

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
    msg.setTimeStamp(0.7125973319951477);
    msg.setSource(41177U);
    msg.setSourceEntity(245U);
    msg.setDestination(22734U);
    msg.setDestinationEntity(135U);
    msg.op = 192U;
    msg.time_remain = 0.7758282772050807;
    msg.sched_time = 0.5773739521615876;

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
    msg.setTimeStamp(0.8780917287436887);
    msg.setSource(22249U);
    msg.setSourceEntity(235U);
    msg.setDestination(31821U);
    msg.setDestinationEntity(238U);
    msg.name.assign("ZYUGMDJZYVRSFMTXVJHIFAIDCFWHPJUONDG");
    msg.op = 27U;
    msg.sched_time = 0.056636700968780485;

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
    msg.setTimeStamp(0.2564779806439976);
    msg.setSource(12567U);
    msg.setSourceEntity(80U);
    msg.setDestination(40262U);
    msg.setDestinationEntity(249U);
    msg.name.assign("MKMPXPGPJBNINGNUDOXFZRGDFXMSYKWFXMUDBHWHWINJCRLILSRQZKPJEVFYKCJUK");
    msg.op = 139U;
    msg.sched_time = 0.8229966722065063;

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
    msg.setTimeStamp(0.988752261352896);
    msg.setSource(56493U);
    msg.setSourceEntity(90U);
    msg.setDestination(10974U);
    msg.setDestinationEntity(103U);
    msg.name.assign("OXIHJCQYPIKGJLFNFUUFHRMVDBSXNWWMHCLAMQBHPSZ");
    msg.op = 169U;
    msg.sched_time = 0.5312681815008633;

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
    msg.setTimeStamp(0.07765389351765817);
    msg.setSource(59146U);
    msg.setSourceEntity(174U);
    msg.setDestination(34290U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.6936459763334591);
    msg.setSource(25675U);
    msg.setSourceEntity(31U);
    msg.setDestination(12039U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.350342189980137);
    msg.setSource(25122U);
    msg.setSourceEntity(234U);
    msg.setDestination(11450U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.3026561846492055);
    msg.setSource(32658U);
    msg.setSourceEntity(174U);
    msg.setDestination(55950U);
    msg.setDestinationEntity(13U);
    msg.name.assign("HGPHZKYALOSFBTNDLQMKUSOCJSORHMKLDZEUENULMJ");
    msg.state = 153U;

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
    msg.setTimeStamp(0.7528683724383605);
    msg.setSource(55679U);
    msg.setSourceEntity(37U);
    msg.setDestination(6061U);
    msg.setDestinationEntity(2U);
    msg.name.assign("NETFIGBXUFCAWESXDTXUTWIZZBCVMPVWNHXJEKXG");
    msg.state = 178U;

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
    msg.setTimeStamp(0.7118488858327853);
    msg.setSource(24693U);
    msg.setSourceEntity(192U);
    msg.setDestination(19810U);
    msg.setDestinationEntity(232U);
    msg.name.assign("OHWBKQGMZESWFNBHLIUWOMEUOZPYCZNADIQMBXTFHLAOX");
    msg.state = 180U;

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
    msg.setTimeStamp(0.3935759075078933);
    msg.setSource(57804U);
    msg.setSourceEntity(198U);
    msg.setDestination(45369U);
    msg.setDestinationEntity(76U);
    msg.name.assign("SOGICKHTHOUUOILNAYMCBBF");
    msg.value = 163U;

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
    msg.setTimeStamp(0.1945342334402297);
    msg.setSource(56125U);
    msg.setSourceEntity(149U);
    msg.setDestination(22268U);
    msg.setDestinationEntity(69U);
    msg.name.assign("EKMFYVNYEVLPVBXMEKMNALYKGJUZQBCEUHJHSJSCGHKDBIHRAWQBEMCBBTILRCWGHRCTKAPNLLIDPCOQZTUXGHGJGLQOSGXRODIYAWQLPNMSJMKXHPZDDWD");
    msg.value = 211U;

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
    msg.setTimeStamp(0.15045862064987692);
    msg.setSource(15643U);
    msg.setSourceEntity(157U);
    msg.setDestination(44943U);
    msg.setDestinationEntity(177U);
    msg.name.assign("SGHJZVUOEJMAATMWRYQEHQTPUICRZATPZBXSEILRLGBIDEGYAZTFHE");
    msg.value = 165U;

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
    msg.setTimeStamp(0.7892279283665224);
    msg.setSource(55703U);
    msg.setSourceEntity(7U);
    msg.setDestination(25716U);
    msg.setDestinationEntity(2U);
    msg.name.assign("BDJRHZWFZMQMSZROISZBSAJXQCIMPGQUVYNKRNXIBLJJJLLAZYJWKLVRRILGSDRDCXRWQPVZEYSTIZELKEBAQRMFSHUKWABBEGADDCGTHFMHVORNCOVBLYJXIODBTTEDYEGYEQYTLFOXYOJAAKDNJMBCBMKMCRCPNVIVPNWAIKUPWFVCHPCSINHPGUAXNAUFEWTTESXKUFJDUQKIGQWLPXGGZN");

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
    msg.setTimeStamp(0.2661147143624436);
    msg.setSource(56770U);
    msg.setSourceEntity(62U);
    msg.setDestination(46031U);
    msg.setDestinationEntity(200U);
    msg.name.assign("ENXAXQCNORSXDFMHRFYBQISBOZPAVBZWHTPKYJQFPJPIZSUQJQXDMJNEGHTHYYFJHVLDFGMVRAOHUXMJBQEQLTOBIURKTOSDCBDLFWIVZZCRWARGWFXTVEGZEDTPFSLTP");

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
    msg.setTimeStamp(0.07447030538536525);
    msg.setSource(2157U);
    msg.setSourceEntity(251U);
    msg.setDestination(11854U);
    msg.setDestinationEntity(148U);
    msg.name.assign("XSIXUXFVJNBJVYQNODYKGXTQCITFVBAOQBCJTMMYGZYBHFZAXDCSVVIOUICLIPWAZWOCQCYDIJAZLSKKSGPGLOWUBUBOREEEAZNNYGCBLWFFPUWNWNOMLAJLMGKJWWIHXPFADTTDCKHEUPXJOFEMFRSSTZUYGDXRTEOMOBTBJMPVFHLVBKUPKZYEHHLYNNZVADPQSDHRDXTNMWNSRAPPGQFZEMSVCTHRGJXQ");

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
    msg.setTimeStamp(0.465979160299264);
    msg.setSource(30469U);
    msg.setSourceEntity(54U);
    msg.setDestination(44612U);
    msg.setDestinationEntity(87U);
    msg.name.assign("DRKUSKNBAIWLTEAFDFZIBLTPEOZTJCDBMKEINQRXOJSWZEVYHAFPWCAJVPKUSKVWKJXZBSUSQOQWJGWJGWSNMBAQGYYYDFNIJVVVTBTZN");
    msg.value = 26U;

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
    msg.setTimeStamp(0.9152017198713003);
    msg.setSource(21948U);
    msg.setSourceEntity(133U);
    msg.setDestination(43538U);
    msg.setDestinationEntity(54U);
    msg.name.assign("CEVCTBUWMLHGZPBQHLBRCRQEYVEXTIOZGZSGMCBMOQKNRWLDSZKDYRSTEBRTJXALIHPJBUCZNLPXAXWJWPDOMDNFTAOBVOYCKDDJZLCTCOELUGASIGBKVETSRFHKRNWPOQXXANKVEEKAIFYRQZWSMFTNVYTJUUYPURQGMAFQKYOHVUALDXSKNHGLGJNAWXJIFGDXELOQJJMZWBHWPMGHRF");
    msg.value = 166U;

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
    msg.setTimeStamp(0.7274628239913666);
    msg.setSource(4327U);
    msg.setSourceEntity(125U);
    msg.setDestination(56327U);
    msg.setDestinationEntity(123U);
    msg.name.assign("KUEIWLSCRVENDDQHRKVZGUMCVBXGIXJDDYHYNLOEXPXVBQDXOBIZJZJSMUEEPYCWLVINOBGSKKTFYNMRMHIQIOPMJZXYWVGRRAEMWLNWEDSPFPINQAPTKOXMRANDTGRCJHVTESMCQHWJIZJSGXOAFAYNUVVQFPUSROYLLBPCLZHPPAZEHKUGFZIWZKYBATNLCADEGFHAH");
    msg.value = 34U;

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
    msg.setTimeStamp(0.8673063580722745);
    msg.setSource(18424U);
    msg.setSourceEntity(85U);
    msg.setDestination(8636U);
    msg.setDestinationEntity(148U);
    msg.id = 53U;
    msg.period = 1745346619U;
    msg.duty_cycle = 2724872874U;

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
    msg.setTimeStamp(0.9565089781286471);
    msg.setSource(28415U);
    msg.setSourceEntity(182U);
    msg.setDestination(63887U);
    msg.setDestinationEntity(254U);
    msg.id = 221U;
    msg.period = 3417104313U;
    msg.duty_cycle = 2062840524U;

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
    msg.setTimeStamp(0.4718255655762764);
    msg.setSource(33491U);
    msg.setSourceEntity(107U);
    msg.setDestination(51250U);
    msg.setDestinationEntity(51U);
    msg.id = 32U;
    msg.period = 266282605U;
    msg.duty_cycle = 1564492542U;

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
    msg.setTimeStamp(0.6522167974130764);
    msg.setSource(26717U);
    msg.setSourceEntity(54U);
    msg.setDestination(4593U);
    msg.setDestinationEntity(103U);
    msg.id = 191U;
    msg.period = 1617011923U;
    msg.duty_cycle = 3785395782U;

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
    msg.setTimeStamp(0.2617932720909335);
    msg.setSource(48306U);
    msg.setSourceEntity(118U);
    msg.setDestination(52592U);
    msg.setDestinationEntity(93U);
    msg.id = 19U;
    msg.period = 980131036U;
    msg.duty_cycle = 302128535U;

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
    msg.setTimeStamp(0.9054059307020487);
    msg.setSource(22796U);
    msg.setSourceEntity(42U);
    msg.setDestination(18605U);
    msg.setDestinationEntity(98U);
    msg.id = 10U;
    msg.period = 3599255759U;
    msg.duty_cycle = 3040998854U;

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
    msg.setTimeStamp(0.44203599145856276);
    msg.setSource(45051U);
    msg.setSourceEntity(96U);
    msg.setDestination(16083U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.1375041375636522;
    msg.lon = 0.4218524656287411;
    msg.height = 0.6172383801868109;
    msg.x = 0.14130699200980779;
    msg.y = 0.4832524389259899;
    msg.z = 0.3835941706049075;
    msg.phi = 0.45061591199257867;
    msg.theta = 0.6683347262372138;
    msg.psi = 0.734210905680412;
    msg.u = 0.9856629610515089;
    msg.v = 0.8273388513676787;
    msg.w = 0.3757492495778044;
    msg.vx = 0.09382757945146081;
    msg.vy = 0.2446993417951836;
    msg.vz = 0.11480480270157933;
    msg.p = 0.9174740392935539;
    msg.q = 0.9775676352408345;
    msg.r = 0.34207377575838716;
    msg.depth = 0.4349022065605943;
    msg.alt = 0.4334231572668584;

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
    msg.setTimeStamp(0.3128123216244736);
    msg.setSource(33333U);
    msg.setSourceEntity(157U);
    msg.setDestination(46733U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.808237650391941;
    msg.lon = 0.2804800180136918;
    msg.height = 0.949849237137911;
    msg.x = 0.5565371470742603;
    msg.y = 0.9009024806622488;
    msg.z = 0.8058586262135377;
    msg.phi = 0.27312090532458333;
    msg.theta = 0.460681496827857;
    msg.psi = 0.6150643233275415;
    msg.u = 0.8386299171818395;
    msg.v = 0.31521883820658536;
    msg.w = 0.5976228993473456;
    msg.vx = 0.06610490661143775;
    msg.vy = 0.5889924956334733;
    msg.vz = 0.5705781918695904;
    msg.p = 0.7700125766367558;
    msg.q = 0.8803409281435971;
    msg.r = 0.6312538455159361;
    msg.depth = 0.984030833993789;
    msg.alt = 0.24606867084246142;

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
    msg.setTimeStamp(0.5888489082626056);
    msg.setSource(24917U);
    msg.setSourceEntity(13U);
    msg.setDestination(19668U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.5982464794278266;
    msg.lon = 0.2846375170209323;
    msg.height = 0.4960953737038455;
    msg.x = 0.7062131810746094;
    msg.y = 0.6623175537698337;
    msg.z = 0.8021909664688166;
    msg.phi = 0.21834905777717584;
    msg.theta = 0.3976754487474642;
    msg.psi = 0.7168548859965163;
    msg.u = 0.38880072894924367;
    msg.v = 0.6139958859637739;
    msg.w = 0.25606237208816396;
    msg.vx = 0.1228090200464863;
    msg.vy = 0.9860914596363588;
    msg.vz = 0.5699004710852589;
    msg.p = 0.8450112236525805;
    msg.q = 0.8845280148988113;
    msg.r = 0.082096844360805;
    msg.depth = 0.45902532264811113;
    msg.alt = 0.5340464098439489;

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
    msg.setTimeStamp(0.15539127982622192);
    msg.setSource(30497U);
    msg.setSourceEntity(209U);
    msg.setDestination(35781U);
    msg.setDestinationEntity(72U);
    msg.x = 0.6667277972679441;
    msg.y = 0.8624306736596852;
    msg.z = 0.5743370200355085;

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
    msg.setTimeStamp(0.22195864701630985);
    msg.setSource(121U);
    msg.setSourceEntity(179U);
    msg.setDestination(20950U);
    msg.setDestinationEntity(51U);
    msg.x = 0.16289558580752417;
    msg.y = 0.5703435872366764;
    msg.z = 0.2866245594252764;

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
    msg.setTimeStamp(0.7104854443310976);
    msg.setSource(60889U);
    msg.setSourceEntity(215U);
    msg.setDestination(57862U);
    msg.setDestinationEntity(236U);
    msg.x = 0.8205984990876923;
    msg.y = 0.2150628995274404;
    msg.z = 0.35018348289116363;

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
    msg.setTimeStamp(0.7083632503993003);
    msg.setSource(39747U);
    msg.setSourceEntity(168U);
    msg.setDestination(4203U);
    msg.setDestinationEntity(64U);
    msg.value = 0.5452781225461897;

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
    msg.setTimeStamp(0.697568560521009);
    msg.setSource(50887U);
    msg.setSourceEntity(2U);
    msg.setDestination(23197U);
    msg.setDestinationEntity(89U);
    msg.value = 0.4506777632751515;

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
    msg.setTimeStamp(0.4157170451723794);
    msg.setSource(36248U);
    msg.setSourceEntity(63U);
    msg.setDestination(56563U);
    msg.setDestinationEntity(23U);
    msg.value = 0.01794634518622429;

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
    msg.setTimeStamp(0.5262533519880177);
    msg.setSource(11265U);
    msg.setSourceEntity(238U);
    msg.setDestination(48798U);
    msg.setDestinationEntity(247U);
    msg.value = 0.15655901027485886;

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
    msg.setTimeStamp(0.24126224305990462);
    msg.setSource(51391U);
    msg.setSourceEntity(167U);
    msg.setDestination(35308U);
    msg.setDestinationEntity(115U);
    msg.value = 0.272543618439824;

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
    msg.setTimeStamp(0.3190635809016268);
    msg.setSource(61365U);
    msg.setSourceEntity(17U);
    msg.setDestination(31773U);
    msg.setDestinationEntity(93U);
    msg.value = 0.8951653642770517;

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
    msg.setTimeStamp(0.19835220716590174);
    msg.setSource(45357U);
    msg.setSourceEntity(179U);
    msg.setDestination(62019U);
    msg.setDestinationEntity(44U);
    msg.x = 0.8189376415713363;
    msg.y = 0.0014593261058954976;
    msg.z = 0.24719446076032658;
    msg.phi = 0.08227754832054668;
    msg.theta = 0.05081078271897155;
    msg.psi = 0.9454995777165204;
    msg.p = 0.12584618468842546;
    msg.q = 0.8252694038527318;
    msg.r = 0.2760098650536974;
    msg.u = 0.8535341519331279;
    msg.v = 0.9312630548439668;
    msg.w = 0.18492407939985156;
    msg.bias_psi = 0.2538606560204628;
    msg.bias_r = 0.9486814525572412;

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
    msg.setTimeStamp(0.5046926936497118);
    msg.setSource(29863U);
    msg.setSourceEntity(145U);
    msg.setDestination(33875U);
    msg.setDestinationEntity(80U);
    msg.x = 0.6878248016086754;
    msg.y = 0.552713905625342;
    msg.z = 0.7279525978580678;
    msg.phi = 0.20836334508148735;
    msg.theta = 0.5153318526641878;
    msg.psi = 0.9127949198371113;
    msg.p = 0.39877636843701514;
    msg.q = 0.5144980580167642;
    msg.r = 0.039916060185621105;
    msg.u = 0.6186974392641089;
    msg.v = 0.8644450776365464;
    msg.w = 0.7260641323168742;
    msg.bias_psi = 0.5064506308304917;
    msg.bias_r = 0.2626864726798488;

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
    msg.setTimeStamp(0.1851439137804214);
    msg.setSource(7410U);
    msg.setSourceEntity(36U);
    msg.setDestination(56260U);
    msg.setDestinationEntity(171U);
    msg.x = 0.0804041367098366;
    msg.y = 0.4652241485290385;
    msg.z = 0.8019104792693321;
    msg.phi = 0.9464211897797852;
    msg.theta = 0.5034782257422304;
    msg.psi = 0.9070171139000931;
    msg.p = 0.652436416695746;
    msg.q = 0.11234018791369549;
    msg.r = 0.028327376607659494;
    msg.u = 0.9566492540606294;
    msg.v = 0.5304815110625292;
    msg.w = 0.5310147933340633;
    msg.bias_psi = 0.504553362632104;
    msg.bias_r = 0.36834025375115764;

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
    msg.setTimeStamp(0.29029195834555277);
    msg.setSource(5919U);
    msg.setSourceEntity(132U);
    msg.setDestination(7444U);
    msg.setDestinationEntity(182U);
    msg.bias_psi = 0.26069295649559077;
    msg.bias_r = 0.18445012541968453;
    msg.cog = 0.44482021725040044;
    msg.cyaw = 0.5855593643762821;
    msg.lbl_rej_level = 0.9948597759381058;
    msg.gps_rej_level = 0.63213703993621;
    msg.custom_x = 0.6908051259205933;
    msg.custom_y = 0.561366694595921;
    msg.custom_z = 0.7858399238257198;

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
    msg.setTimeStamp(0.3581072550939617);
    msg.setSource(56458U);
    msg.setSourceEntity(35U);
    msg.setDestination(57425U);
    msg.setDestinationEntity(197U);
    msg.bias_psi = 0.16294158284654447;
    msg.bias_r = 0.8784898652768838;
    msg.cog = 0.9051397105127252;
    msg.cyaw = 0.5972615850323229;
    msg.lbl_rej_level = 0.7843076296479541;
    msg.gps_rej_level = 0.2214431677917741;
    msg.custom_x = 0.103845890075142;
    msg.custom_y = 0.6075123134450493;
    msg.custom_z = 0.13902314744396282;

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
    msg.setTimeStamp(0.040829621080980094);
    msg.setSource(9481U);
    msg.setSourceEntity(175U);
    msg.setDestination(29523U);
    msg.setDestinationEntity(150U);
    msg.bias_psi = 0.012185103728409863;
    msg.bias_r = 0.4462945239049364;
    msg.cog = 0.5214811681392401;
    msg.cyaw = 0.3194065809630352;
    msg.lbl_rej_level = 0.292076319821859;
    msg.gps_rej_level = 0.08047642292420187;
    msg.custom_x = 0.855606897512347;
    msg.custom_y = 0.4392853393226698;
    msg.custom_z = 0.05747830286236155;

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
    msg.setTimeStamp(0.6247588851124212);
    msg.setSource(19731U);
    msg.setSourceEntity(249U);
    msg.setDestination(10641U);
    msg.setDestinationEntity(253U);
    msg.utc_time = 0.8955306415066923;
    msg.reason = 31U;

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
    msg.setTimeStamp(0.19742409261567118);
    msg.setSource(59857U);
    msg.setSourceEntity(193U);
    msg.setDestination(38806U);
    msg.setDestinationEntity(232U);
    msg.utc_time = 0.6096106562359197;
    msg.reason = 199U;

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
    msg.setTimeStamp(0.7651316449862448);
    msg.setSource(27514U);
    msg.setSourceEntity(31U);
    msg.setDestination(14897U);
    msg.setDestinationEntity(216U);
    msg.utc_time = 0.3922025359691095;
    msg.reason = 234U;

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
    msg.setTimeStamp(0.5292824452318775);
    msg.setSource(52445U);
    msg.setSourceEntity(186U);
    msg.setDestination(30698U);
    msg.setDestinationEntity(163U);
    msg.id = 67U;
    msg.range = 0.1601714573188462;
    msg.acceptance = 254U;

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
    msg.setTimeStamp(0.7448616982954814);
    msg.setSource(37962U);
    msg.setSourceEntity(123U);
    msg.setDestination(14898U);
    msg.setDestinationEntity(227U);
    msg.id = 184U;
    msg.range = 0.6579304535155305;
    msg.acceptance = 28U;

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
    msg.setTimeStamp(0.30315860853892274);
    msg.setSource(52430U);
    msg.setSourceEntity(32U);
    msg.setDestination(55084U);
    msg.setDestinationEntity(149U);
    msg.id = 64U;
    msg.range = 0.7584564568586171;
    msg.acceptance = 154U;

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
    msg.setTimeStamp(0.4896529577369695);
    msg.setSource(29361U);
    msg.setSourceEntity(215U);
    msg.setDestination(26822U);
    msg.setDestinationEntity(145U);
    msg.type = 48U;
    msg.reason = 19U;
    msg.value = 0.23438984141753605;
    msg.timestep = 0.773994703419692;

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
    msg.setTimeStamp(0.9196024605041663);
    msg.setSource(11695U);
    msg.setSourceEntity(196U);
    msg.setDestination(9521U);
    msg.setDestinationEntity(101U);
    msg.type = 102U;
    msg.reason = 30U;
    msg.value = 0.37158227277841804;
    msg.timestep = 0.7309231443049822;

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
    msg.setTimeStamp(0.9804005641826953);
    msg.setSource(31710U);
    msg.setSourceEntity(197U);
    msg.setDestination(39802U);
    msg.setDestinationEntity(248U);
    msg.type = 28U;
    msg.reason = 21U;
    msg.value = 0.7739026420220776;
    msg.timestep = 0.2161035951756609;

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
    msg.setTimeStamp(0.8031639895292813);
    msg.setSource(34267U);
    msg.setSourceEntity(173U);
    msg.setDestination(55385U);
    msg.setDestinationEntity(98U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("USTNFCASAMHZSIQZLEAJLSOPNMJIJJUUXYXPDFCBNZAZXKIFKRCETLTYPTMNTOJVMWOOGBBQYGVCGUKSHPCGDKJWQHCWWBOEBENTDFCIRXRIOQCZBVTVHUBDKBLAOYMZYLWSHEFMSXAPGJHNUPJTGVHRHOLSUAFDOKWIRUWVAASDUGMQKYZPFMFNMHDQGIWEDAKDNZPTLLIHJMGXFXEVERXTUZRYLRSVYXDNNYYREBFOPQZRPJXEVCIQBWL");
    tmp_msg_0.lat = 0.20928682661596876;
    tmp_msg_0.lon = 0.20562705545163507;
    tmp_msg_0.depth = 0.7563926957401231;
    tmp_msg_0.query_channel = 173U;
    tmp_msg_0.reply_channel = 55U;
    tmp_msg_0.transponder_delay = 5U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7542682562481342;
    msg.y = 0.7944170985557022;
    msg.var_x = 0.03940063066715194;
    msg.var_y = 0.5045675252755512;
    msg.distance = 0.5298623372510752;

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
    msg.setTimeStamp(0.8747584941822201);
    msg.setSource(3775U);
    msg.setSourceEntity(147U);
    msg.setDestination(19795U);
    msg.setDestinationEntity(86U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KCGYAWAZQPJIVESBYIYQHUPGYWJNUINHRDORLWCVB");
    tmp_msg_0.lat = 0.3643397420838418;
    tmp_msg_0.lon = 0.4939685849108443;
    tmp_msg_0.depth = 0.7911400395090528;
    tmp_msg_0.query_channel = 238U;
    tmp_msg_0.reply_channel = 196U;
    tmp_msg_0.transponder_delay = 92U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2554387884589273;
    msg.y = 0.9505846070999115;
    msg.var_x = 0.09031530556440037;
    msg.var_y = 0.048763922733292;
    msg.distance = 0.5280819513279829;

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
    msg.setTimeStamp(0.7699612002813869);
    msg.setSource(24533U);
    msg.setSourceEntity(193U);
    msg.setDestination(24732U);
    msg.setDestinationEntity(185U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VSHGTMSHNUDWLDOFGKIZBDPSTYJYAVEPUTEHPZUUYWMVXPLIYQVLZAMUTUBVETZFVKHNLOL");
    tmp_msg_0.lat = 0.31600640479353315;
    tmp_msg_0.lon = 0.8059178327881195;
    tmp_msg_0.depth = 0.45834899109162885;
    tmp_msg_0.query_channel = 10U;
    tmp_msg_0.reply_channel = 94U;
    tmp_msg_0.transponder_delay = 23U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.753734104729267;
    msg.y = 0.14945156708028784;
    msg.var_x = 0.67583748016457;
    msg.var_y = 0.16570858151166645;
    msg.distance = 0.6198969224588838;

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
    msg.setTimeStamp(0.4307505601884355);
    msg.setSource(47874U);
    msg.setSourceEntity(122U);
    msg.setDestination(28760U);
    msg.setDestinationEntity(127U);
    msg.state = 243U;

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
    msg.setTimeStamp(0.5113041702783425);
    msg.setSource(28256U);
    msg.setSourceEntity(49U);
    msg.setDestination(63629U);
    msg.setDestinationEntity(45U);
    msg.state = 80U;

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
    msg.setTimeStamp(0.42647717962650844);
    msg.setSource(32231U);
    msg.setSourceEntity(210U);
    msg.setDestination(32880U);
    msg.setDestinationEntity(40U);
    msg.state = 109U;

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
    msg.setTimeStamp(0.3384161908931025);
    msg.setSource(59257U);
    msg.setSourceEntity(248U);
    msg.setDestination(23835U);
    msg.setDestinationEntity(26U);
    msg.x = 0.0976722451733576;
    msg.y = 0.2272760274377129;
    msg.z = 0.2045440842418209;

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
    msg.setTimeStamp(0.22664557428194543);
    msg.setSource(31271U);
    msg.setSourceEntity(51U);
    msg.setDestination(55249U);
    msg.setDestinationEntity(112U);
    msg.x = 0.5985669618719024;
    msg.y = 0.566281305689741;
    msg.z = 0.03479966591022121;

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
    msg.setTimeStamp(0.6565793270871861);
    msg.setSource(57258U);
    msg.setSourceEntity(244U);
    msg.setDestination(20130U);
    msg.setDestinationEntity(177U);
    msg.x = 0.6235335977575526;
    msg.y = 0.2405784329106756;
    msg.z = 0.8446114569375563;

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
    msg.setTimeStamp(0.7263957793009078);
    msg.setSource(38026U);
    msg.setSourceEntity(65U);
    msg.setDestination(6566U);
    msg.setDestinationEntity(235U);
    msg.value = 0.7861573479256034;

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
    msg.setTimeStamp(0.2871855931112448);
    msg.setSource(23962U);
    msg.setSourceEntity(191U);
    msg.setDestination(16388U);
    msg.setDestinationEntity(138U);
    msg.value = 0.27516288511090947;

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
    msg.setTimeStamp(0.02632319704023567);
    msg.setSource(63799U);
    msg.setSourceEntity(111U);
    msg.setDestination(36843U);
    msg.setDestinationEntity(167U);
    msg.value = 0.3150761918545596;

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
    msg.setTimeStamp(0.3454882597198907);
    msg.setSource(7177U);
    msg.setSourceEntity(134U);
    msg.setDestination(11998U);
    msg.setDestinationEntity(233U);
    msg.value = 0.8395369900871512;
    msg.z_units = 117U;

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
    msg.setTimeStamp(0.5537912434175764);
    msg.setSource(40213U);
    msg.setSourceEntity(195U);
    msg.setDestination(15051U);
    msg.setDestinationEntity(229U);
    msg.value = 0.049557608823433075;
    msg.z_units = 140U;

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
    msg.setTimeStamp(0.7344205747124171);
    msg.setSource(19438U);
    msg.setSourceEntity(74U);
    msg.setDestination(62200U);
    msg.setDestinationEntity(173U);
    msg.value = 0.3051611154899305;
    msg.z_units = 225U;

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
    msg.setTimeStamp(0.8953102418784539);
    msg.setSource(43879U);
    msg.setSourceEntity(45U);
    msg.setDestination(34684U);
    msg.setDestinationEntity(254U);
    msg.value = 0.862460961953453;
    msg.speed_units = 178U;

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
    msg.setTimeStamp(0.5766476904658323);
    msg.setSource(63642U);
    msg.setSourceEntity(128U);
    msg.setDestination(25064U);
    msg.setDestinationEntity(87U);
    msg.value = 0.4243182520991774;
    msg.speed_units = 189U;

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
    msg.setTimeStamp(0.7913338945083932);
    msg.setSource(9259U);
    msg.setSourceEntity(182U);
    msg.setDestination(230U);
    msg.setDestinationEntity(82U);
    msg.value = 0.740374975895662;
    msg.speed_units = 146U;

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
    msg.setTimeStamp(0.07604662514055771);
    msg.setSource(18084U);
    msg.setSourceEntity(226U);
    msg.setDestination(34459U);
    msg.setDestinationEntity(228U);
    msg.value = 0.25918032623782616;

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
    msg.setTimeStamp(0.13575528140714033);
    msg.setSource(59643U);
    msg.setSourceEntity(116U);
    msg.setDestination(51096U);
    msg.setDestinationEntity(41U);
    msg.value = 0.8931193980114104;

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
    msg.setTimeStamp(0.7468875827049994);
    msg.setSource(24450U);
    msg.setSourceEntity(191U);
    msg.setDestination(16349U);
    msg.setDestinationEntity(214U);
    msg.value = 0.9686626807242842;

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
    msg.setTimeStamp(0.9145556218852526);
    msg.setSource(21488U);
    msg.setSourceEntity(237U);
    msg.setDestination(50302U);
    msg.setDestinationEntity(58U);
    msg.value = 0.5089240821712281;

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
    msg.setTimeStamp(0.1909548045255397);
    msg.setSource(48873U);
    msg.setSourceEntity(126U);
    msg.setDestination(22071U);
    msg.setDestinationEntity(120U);
    msg.value = 0.9030870595694316;

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
    msg.setTimeStamp(0.3287316530545893);
    msg.setSource(55230U);
    msg.setSourceEntity(64U);
    msg.setDestination(33316U);
    msg.setDestinationEntity(181U);
    msg.value = 0.8717898097559976;

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
    msg.setTimeStamp(0.716847582874406);
    msg.setSource(24593U);
    msg.setSourceEntity(121U);
    msg.setDestination(56413U);
    msg.setDestinationEntity(227U);
    msg.value = 0.9760366231801141;

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
    msg.setTimeStamp(0.5408079190397651);
    msg.setSource(37892U);
    msg.setSourceEntity(131U);
    msg.setDestination(7968U);
    msg.setDestinationEntity(63U);
    msg.value = 0.20448803563408402;

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
    msg.setTimeStamp(0.9485744789114657);
    msg.setSource(39021U);
    msg.setSourceEntity(72U);
    msg.setDestination(3840U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9154472446401087;

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
    msg.setTimeStamp(0.6597987469152229);
    msg.setSource(37850U);
    msg.setSourceEntity(246U);
    msg.setDestination(678U);
    msg.setDestinationEntity(97U);
    msg.path_ref = 1053802801U;
    msg.start_lat = 0.73699866392297;
    msg.start_lon = 0.8876237134012159;
    msg.start_z = 0.9312691873759119;
    msg.start_z_units = 193U;
    msg.end_lat = 0.9753958068101884;
    msg.end_lon = 0.44439121555172045;
    msg.end_z = 0.9980131174285001;
    msg.end_z_units = 53U;
    msg.speed = 0.9026654351302837;
    msg.speed_units = 28U;
    msg.lradius = 0.393638940625479;
    msg.flags = 50U;

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
    msg.setTimeStamp(0.5805241259090971);
    msg.setSource(34949U);
    msg.setSourceEntity(184U);
    msg.setDestination(19645U);
    msg.setDestinationEntity(150U);
    msg.path_ref = 3476026304U;
    msg.start_lat = 0.030466302157259983;
    msg.start_lon = 0.3875335884338461;
    msg.start_z = 0.6464258635823016;
    msg.start_z_units = 239U;
    msg.end_lat = 0.11903408132178273;
    msg.end_lon = 0.35600910381167306;
    msg.end_z = 0.35158136588127287;
    msg.end_z_units = 120U;
    msg.speed = 0.8981309055749283;
    msg.speed_units = 92U;
    msg.lradius = 0.9074897812101387;
    msg.flags = 221U;

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
    msg.setTimeStamp(0.6618935659777442);
    msg.setSource(16952U);
    msg.setSourceEntity(192U);
    msg.setDestination(53967U);
    msg.setDestinationEntity(20U);
    msg.path_ref = 2230990832U;
    msg.start_lat = 0.5373419452623011;
    msg.start_lon = 0.8182636923895218;
    msg.start_z = 0.7129465336332523;
    msg.start_z_units = 224U;
    msg.end_lat = 0.013375556922397891;
    msg.end_lon = 0.056156315331974294;
    msg.end_z = 0.9211259735038426;
    msg.end_z_units = 80U;
    msg.speed = 0.46661027575546277;
    msg.speed_units = 91U;
    msg.lradius = 0.32479019869480785;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.4510248786303108);
    msg.setSource(5256U);
    msg.setSourceEntity(52U);
    msg.setDestination(49631U);
    msg.setDestinationEntity(153U);
    msg.x = 0.30724955329637915;
    msg.y = 0.9074794560723854;
    msg.z = 0.9277811053807822;
    msg.k = 0.34221227457073866;
    msg.m = 0.42893068442217386;
    msg.n = 0.9000192695733099;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.5778546103273674);
    msg.setSource(53043U);
    msg.setSourceEntity(101U);
    msg.setDestination(22555U);
    msg.setDestinationEntity(186U);
    msg.x = 0.07777081798725471;
    msg.y = 0.3581555827345583;
    msg.z = 0.14814677109151086;
    msg.k = 0.03450035732784529;
    msg.m = 0.113834594625282;
    msg.n = 0.1238227991454327;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.6420535629025343);
    msg.setSource(26069U);
    msg.setSourceEntity(43U);
    msg.setDestination(4928U);
    msg.setDestinationEntity(147U);
    msg.x = 0.37711620824929304;
    msg.y = 0.1111867057655811;
    msg.z = 0.6164163872775565;
    msg.k = 0.046739791645774464;
    msg.m = 0.7026852429651675;
    msg.n = 0.03001626770868948;
    msg.flags = 182U;

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
    msg.setTimeStamp(0.5482521514921668);
    msg.setSource(27209U);
    msg.setSourceEntity(161U);
    msg.setDestination(9295U);
    msg.setDestinationEntity(204U);
    msg.value = 0.1900653040536422;

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
    msg.setTimeStamp(0.052688492829936484);
    msg.setSource(19686U);
    msg.setSourceEntity(218U);
    msg.setDestination(33839U);
    msg.setDestinationEntity(215U);
    msg.value = 0.2429351533763484;

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
    msg.setTimeStamp(0.8853393434060216);
    msg.setSource(901U);
    msg.setSourceEntity(125U);
    msg.setDestination(44936U);
    msg.setDestinationEntity(110U);
    msg.value = 0.657072457061432;

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
    msg.setTimeStamp(0.7600903882969763);
    msg.setSource(42891U);
    msg.setSourceEntity(185U);
    msg.setDestination(33210U);
    msg.setDestinationEntity(138U);
    msg.u = 0.697144086701868;
    msg.v = 0.542448330222114;
    msg.w = 0.46536369110387055;
    msg.p = 0.6824484660580874;
    msg.q = 0.2889486773010439;
    msg.r = 0.8433873295354065;
    msg.flags = 152U;

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
    msg.setTimeStamp(0.7613434141678513);
    msg.setSource(15761U);
    msg.setSourceEntity(20U);
    msg.setDestination(548U);
    msg.setDestinationEntity(34U);
    msg.u = 0.05929271844859618;
    msg.v = 0.7473029820414999;
    msg.w = 0.7754382144461003;
    msg.p = 0.49709784820080616;
    msg.q = 0.42284469025686944;
    msg.r = 0.9520780189734357;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.7621733811419001);
    msg.setSource(14270U);
    msg.setSourceEntity(159U);
    msg.setDestination(234U);
    msg.setDestinationEntity(150U);
    msg.u = 0.39787687093608026;
    msg.v = 0.23790945988953272;
    msg.w = 0.19307862003731358;
    msg.p = 0.4887985298028381;
    msg.q = 0.42814420326790104;
    msg.r = 0.7091614149491725;
    msg.flags = 46U;

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
    msg.setTimeStamp(0.05361492933282752);
    msg.setSource(9434U);
    msg.setSourceEntity(70U);
    msg.setDestination(56432U);
    msg.setDestinationEntity(135U);
    msg.path_ref = 696966195U;
    msg.start_lat = 0.8331073470516096;
    msg.start_lon = 0.7357677130445011;
    msg.start_z = 0.620885001501057;
    msg.start_z_units = 130U;
    msg.end_lat = 0.2724103138216579;
    msg.end_lon = 0.656372215627245;
    msg.end_z = 0.23796467606314875;
    msg.end_z_units = 237U;
    msg.lradius = 0.9998930586087829;
    msg.flags = 122U;
    msg.x = 0.5572356724745297;
    msg.y = 0.12456367168677862;
    msg.z = 0.8611275703261035;
    msg.vx = 0.35678128764322736;
    msg.vy = 0.9181958615132355;
    msg.vz = 0.9730753479055967;
    msg.course_error = 0.7781822558037396;
    msg.eta = 34382U;

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
    msg.setTimeStamp(0.20036881333684642);
    msg.setSource(18998U);
    msg.setSourceEntity(15U);
    msg.setDestination(34956U);
    msg.setDestinationEntity(186U);
    msg.path_ref = 1406772728U;
    msg.start_lat = 0.5045245161385786;
    msg.start_lon = 0.1974165575626099;
    msg.start_z = 0.35358944798727543;
    msg.start_z_units = 238U;
    msg.end_lat = 0.7446806805269092;
    msg.end_lon = 0.833682712551401;
    msg.end_z = 0.9382392078444833;
    msg.end_z_units = 55U;
    msg.lradius = 0.06618123374492957;
    msg.flags = 139U;
    msg.x = 0.16020040903642485;
    msg.y = 0.05985496739879581;
    msg.z = 0.35789423910185336;
    msg.vx = 0.15940783612951182;
    msg.vy = 0.6586490734248777;
    msg.vz = 0.2914943758146292;
    msg.course_error = 0.46225640571943194;
    msg.eta = 20162U;

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
    msg.setTimeStamp(0.07502203778380279);
    msg.setSource(17546U);
    msg.setSourceEntity(99U);
    msg.setDestination(39457U);
    msg.setDestinationEntity(3U);
    msg.path_ref = 1949122706U;
    msg.start_lat = 0.5093193009611104;
    msg.start_lon = 0.57507462191975;
    msg.start_z = 0.4778448745896269;
    msg.start_z_units = 30U;
    msg.end_lat = 0.17361437310175498;
    msg.end_lon = 0.7676264953596329;
    msg.end_z = 0.5888058571848065;
    msg.end_z_units = 58U;
    msg.lradius = 0.9667414885261402;
    msg.flags = 80U;
    msg.x = 0.43676163280040936;
    msg.y = 0.10785522956608207;
    msg.z = 0.0764004994762022;
    msg.vx = 0.20124706050739571;
    msg.vy = 0.7598252083403403;
    msg.vz = 0.6445667148465631;
    msg.course_error = 0.5180624030539335;
    msg.eta = 11942U;

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
    msg.setTimeStamp(0.36869542963324375);
    msg.setSource(34483U);
    msg.setSourceEntity(58U);
    msg.setDestination(9073U);
    msg.setDestinationEntity(87U);
    msg.k = 0.04467854791876524;
    msg.m = 0.7928385727319699;
    msg.n = 0.24858818157728357;

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
    msg.setTimeStamp(0.13422910107651687);
    msg.setSource(30239U);
    msg.setSourceEntity(173U);
    msg.setDestination(30359U);
    msg.setDestinationEntity(93U);
    msg.k = 0.5340466680178092;
    msg.m = 0.6946374943241247;
    msg.n = 0.8534113367381364;

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
    msg.setTimeStamp(0.5513254618835812);
    msg.setSource(20343U);
    msg.setSourceEntity(135U);
    msg.setDestination(44501U);
    msg.setDestinationEntity(30U);
    msg.k = 0.6357564382961799;
    msg.m = 0.7715069821328621;
    msg.n = 0.5570051686830095;

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
    msg.setTimeStamp(0.8440480182894795);
    msg.setSource(5963U);
    msg.setSourceEntity(63U);
    msg.setDestination(12548U);
    msg.setDestinationEntity(146U);
    msg.p = 0.9266829040390627;
    msg.i = 0.369968371573556;
    msg.d = 0.849683288077597;
    msg.a = 0.3356906769814082;

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
    msg.setTimeStamp(0.674497995935077);
    msg.setSource(64393U);
    msg.setSourceEntity(79U);
    msg.setDestination(23518U);
    msg.setDestinationEntity(145U);
    msg.p = 0.1657171066221752;
    msg.i = 0.26056473645907685;
    msg.d = 0.0910309019296125;
    msg.a = 0.9924718457329633;

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
    msg.setTimeStamp(0.8911731520950787);
    msg.setSource(27140U);
    msg.setSourceEntity(1U);
    msg.setDestination(65030U);
    msg.setDestinationEntity(8U);
    msg.p = 0.23672808901926046;
    msg.i = 0.19529129303976;
    msg.d = 0.16297005718459934;
    msg.a = 0.3745684407761741;

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
    msg.setTimeStamp(0.6682196662066192);
    msg.setSource(48574U);
    msg.setSourceEntity(116U);
    msg.setDestination(33481U);
    msg.setDestinationEntity(229U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.631110457034242);
    msg.setSource(11611U);
    msg.setSourceEntity(82U);
    msg.setDestination(13232U);
    msg.setDestinationEntity(124U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.9419089150851799);
    msg.setSource(1807U);
    msg.setSourceEntity(84U);
    msg.setDestination(64462U);
    msg.setDestinationEntity(177U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.16070434191821992);
    msg.setSource(48430U);
    msg.setSourceEntity(9U);
    msg.setDestination(8929U);
    msg.setDestinationEntity(250U);
    msg.timeout = 35578U;
    msg.lat = 0.08021262677672947;
    msg.lon = 0.47921332466546895;
    msg.z = 0.639583910781495;
    msg.z_units = 108U;
    msg.speed = 0.3166724841804943;
    msg.speed_units = 78U;
    msg.roll = 0.6242469016489621;
    msg.pitch = 0.7885659234364032;
    msg.yaw = 0.4034127416110719;
    msg.custom.assign("CVWAPFCCHPSIIAWYNHSXOJEEAHFLHQZKRZJNRI");

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
    msg.setTimeStamp(0.3701151189763733);
    msg.setSource(24213U);
    msg.setSourceEntity(252U);
    msg.setDestination(38000U);
    msg.setDestinationEntity(8U);
    msg.timeout = 23827U;
    msg.lat = 0.919148431410559;
    msg.lon = 0.023351519583079683;
    msg.z = 0.3147318762209709;
    msg.z_units = 253U;
    msg.speed = 0.1284642585557213;
    msg.speed_units = 129U;
    msg.roll = 0.8127108554007172;
    msg.pitch = 0.9159023673069147;
    msg.yaw = 0.15333930686043407;
    msg.custom.assign("MULZGJOJIVLXZWMULRSJBOWWGJEMAJPOKNRERBAEBQIOZCCFRHTSQLSZKISLXIOOFRSYDTCBNSCRAQOJGZIJXQTIEOFHMUGVQASCMVNYJTBCIBYYLEZ");

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
    msg.setTimeStamp(0.7099154838407143);
    msg.setSource(49059U);
    msg.setSourceEntity(236U);
    msg.setDestination(53551U);
    msg.setDestinationEntity(176U);
    msg.timeout = 12668U;
    msg.lat = 0.5093895659874371;
    msg.lon = 0.20585402321728097;
    msg.z = 0.8447137369307192;
    msg.z_units = 18U;
    msg.speed = 0.28138422081429026;
    msg.speed_units = 253U;
    msg.roll = 0.8092858558967767;
    msg.pitch = 0.10023073556345363;
    msg.yaw = 0.9759809285479554;
    msg.custom.assign("WXEUVSRJIJUZDVGYFHWGZHEXMAPFKMWTTABMTCPWNONGBLHEHUBYWMMQEYOXIVKZTVICDKSOXSXUJFJRNXJEHXIQREGLGPMBZUYQAYARWISCURJIWHSXDRAKCDSLLQZNFMOHBYPPGDTYNWLKRONGEDCOYZZKOPGSVPIGEEHVJQMTDLLQCIQNCDPQCYRVSJFIKZORCYTFBVBFUFNOPULFAZTBGEJWXQHL");

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
    msg.setTimeStamp(0.7787988285329797);
    msg.setSource(430U);
    msg.setSourceEntity(32U);
    msg.setDestination(28144U);
    msg.setDestinationEntity(223U);
    msg.timeout = 13904U;
    msg.lat = 0.8695526105634915;
    msg.lon = 0.4154657695167039;
    msg.z = 0.19031652762766238;
    msg.z_units = 145U;
    msg.speed = 0.7242221300601643;
    msg.speed_units = 55U;
    msg.duration = 13050U;
    msg.radius = 0.3080674780532482;
    msg.flags = 196U;
    msg.custom.assign("NQURZCAWIRJLXHZRDRIQYJCTVVKHDWBVJPCOXQVDOWDIHLUGLMKKRRGSUFNJPHEAWMAOSIJJNMUPOFYPZCSYXPICNPGHZVESLRHBBKADYTLNLEMWYMQUJGATZBMRQDKFGBC");

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
    msg.setTimeStamp(0.2756707290381458);
    msg.setSource(26531U);
    msg.setSourceEntity(64U);
    msg.setDestination(24308U);
    msg.setDestinationEntity(253U);
    msg.timeout = 23794U;
    msg.lat = 0.29941185342650933;
    msg.lon = 0.2021201139427442;
    msg.z = 0.17150379448515252;
    msg.z_units = 249U;
    msg.speed = 0.7017334075287122;
    msg.speed_units = 128U;
    msg.duration = 8960U;
    msg.radius = 0.8742459460645169;
    msg.flags = 130U;
    msg.custom.assign("UXEVPCDASQDQVTEFHXSUEARCIQLNXTXMAWTFCNWUWTDNCJEEWNMKGQXPFBHJJOTKUQLSUKJRBCSMNCXRZKFUMNMIPWRWKVHIJZZWBTZTXLHMSPYRZWIRHBLHUBVFCNBGDIYGLPVSOYARIRVYIXESXZQHMJQMBHYGAIKUGRVVLVGZPAMLJIOQDUFLJZJDTSFANAGDCYSPOYKYZFCOGRQOGEBOPQYOBIDPGYKEEMAT");

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
    msg.setTimeStamp(0.23907503455950396);
    msg.setSource(12501U);
    msg.setSourceEntity(201U);
    msg.setDestination(577U);
    msg.setDestinationEntity(148U);
    msg.timeout = 27572U;
    msg.lat = 0.8158287079593145;
    msg.lon = 0.47516004978347315;
    msg.z = 0.37407755445671687;
    msg.z_units = 222U;
    msg.speed = 0.16853556883772203;
    msg.speed_units = 49U;
    msg.duration = 36810U;
    msg.radius = 0.06964912240598353;
    msg.flags = 86U;
    msg.custom.assign("NXXBRNGJCJKWUVYYPLOMEKAQXSALUPOSNSEUWNDJTGWSPVVQDHGTZTYHZULOGQNLAQCLDGFEICPHAGSCWKIFVZIWGULEIOZZNHJYWZFCMOCRAFFUCAO");

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
    msg.setTimeStamp(0.3971387926085508);
    msg.setSource(21397U);
    msg.setSourceEntity(190U);
    msg.setDestination(36172U);
    msg.setDestinationEntity(162U);
    msg.custom.assign("EPKJFZETSMMRAMBDFREGMTJMSFMVYQRQLQOKIZQVZWAGUTGZSXNFHWJJKQLBVXCEUMVIVLGGNXAJYBOZZYWOSQETIXWHTAFTVIBDHQXSLUDFRAUAYC");

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
    msg.setTimeStamp(0.8034871268622957);
    msg.setSource(6917U);
    msg.setSourceEntity(252U);
    msg.setDestination(60755U);
    msg.setDestinationEntity(175U);
    msg.custom.assign("JSDWKQCBQRMZPAQDMSDDDNFIBGAEUYJGOAPEIQCWJQBLDXRWNANHXUTNIMEJOEIRDBJWUNGOTFOGELYCRKTHXFKYSWPHSKSTJFZOVTZUGIOLQAKYCXACLJPPGXKBKMRIVAIPJSGUBUOYCYJFMMUNHBLHWEVPFXNAOSTLIAZKKBUYVOTSULZEFRXIZZNOLPCRKLBICSFCVHZMG");

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
    msg.setTimeStamp(0.16500608507971304);
    msg.setSource(4775U);
    msg.setSourceEntity(136U);
    msg.setDestination(28975U);
    msg.setDestinationEntity(179U);
    msg.custom.assign("FCRUVYDTGRGWBJIZCUHRECROASWZZSLOSMNEOLLAKNDIHGENVJQDPYKSSWHAQCMYYBMNRMKFBPVLXRAZZHFIODOJLYZOHXTXDGWDFKVVIGPHDQDIYUFEXDUJMUUZBOBTODHNQECXMUTQIMTRWTJBFRKKVSTQVJURGPE");

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
    msg.setTimeStamp(0.026428363928972964);
    msg.setSource(14071U);
    msg.setSourceEntity(195U);
    msg.setDestination(21595U);
    msg.setDestinationEntity(178U);
    msg.timeout = 30980U;
    msg.lat = 0.24363242559661358;
    msg.lon = 0.7256071269230887;
    msg.z = 0.15053461410943814;
    msg.z_units = 79U;
    msg.duration = 36721U;
    msg.speed = 0.6397544042546736;
    msg.speed_units = 18U;
    msg.type = 160U;
    msg.radius = 0.6784164968432167;
    msg.length = 0.35715020312077395;
    msg.bearing = 0.8748796211371825;
    msg.direction = 254U;
    msg.custom.assign("UOHEBTMGZHGPIJIFPAJNWFUAHPHZCJGJFDSIQJCCBOTBVHERZGLSKNBWBOXOQUBMEUUNLVJSWZKVLFDRHJKKYWACXPHXWWCDLOZHXYMMPMVNBXMPDLLTIFKGREMUIYSTNSBRKXUBXQGWFQUQGSIYXKWJFNOTVPYMTFYJZRVPYRZIUFIGTCZWOOOSISEEWADPKVOVN");

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
    msg.setTimeStamp(0.2571437475401178);
    msg.setSource(11989U);
    msg.setSourceEntity(130U);
    msg.setDestination(29703U);
    msg.setDestinationEntity(59U);
    msg.timeout = 24328U;
    msg.lat = 0.8189008762543771;
    msg.lon = 0.09547526030400322;
    msg.z = 0.8596622054534075;
    msg.z_units = 44U;
    msg.duration = 41588U;
    msg.speed = 0.1908694067537523;
    msg.speed_units = 240U;
    msg.type = 18U;
    msg.radius = 0.5938274786700264;
    msg.length = 0.49518429272330344;
    msg.bearing = 0.14454852787897166;
    msg.direction = 198U;
    msg.custom.assign("GKWMBPWAKQUQJVPSJTICKHYHFDXIQWWZTMRLASHZWPRBRTUOHVGFNWLGBZREUDSIAFVMCYLUFDAXZYDWTMYMEEJYRSETGSOWVBLPPSSYUPZQBVINCKBXQZGIOIPVLQQGBJXTEMBDKPBLAAOILWFUYEFSRQXHRUDJJFHLRXREXGLDIOEJLNMQNWFCYNNDKTKTEGAHOXOYNZCFVHQCAGZXIAJPSXTCTCJNUFBVOMOV");

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
    msg.setTimeStamp(0.22101689548586956);
    msg.setSource(65425U);
    msg.setSourceEntity(93U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(41U);
    msg.timeout = 5174U;
    msg.lat = 0.4629800726947192;
    msg.lon = 0.35278784193206203;
    msg.z = 0.0077085902094014;
    msg.z_units = 232U;
    msg.duration = 4061U;
    msg.speed = 0.17285513421237741;
    msg.speed_units = 194U;
    msg.type = 186U;
    msg.radius = 0.7728024961522296;
    msg.length = 0.9182546797523246;
    msg.bearing = 0.9884503200990693;
    msg.direction = 178U;
    msg.custom.assign("VVXGPYKZALCDMYEHMLQGQERSBQZSIJAVTICYUVOJHCMGRDNRHLXXUIDSJUMTJHTWPYMGXYWCPTDXFIYNDTQYROLXLZWNOALXRBIUONMEHSGISFHCZJKQNUJJZBVOQMDQFOZIIVAFKJWGYHTAJWXZUGNSZKFSXOTRDLUCAMKHVRFCVRQACWYNBJNCAZFDPNEEEPUKWLEBFPNHGMLWRQDBEDFV");

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
    msg.setTimeStamp(0.015060335660730728);
    msg.setSource(53815U);
    msg.setSourceEntity(62U);
    msg.setDestination(32882U);
    msg.setDestinationEntity(110U);
    msg.duration = 65095U;
    msg.custom.assign("DIOQLATKJBCIOJJNUWQZCOSOVFZEIQGSJVEOOQXSRGMCTBKUVIJXIZXFQKYPIMWGGLJFIRWEZLKUEATHOCZPROPCZEQBXEKEFUTIUFJTXRCMAYZHBNFHGHMWWSYSABKMASMMHGSPHLZITKAXUSYGQZPQDPFTWYRDAYNAPXZHLXRODFUPYODCTGVBSBUVMKVCBNLHTVMWLLDYDALJNNGVDQARNHHLERTWNEKNCVXYXPRDKWFPESFCUNDBRIQUW");

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
    msg.setTimeStamp(0.502348372371389);
    msg.setSource(44405U);
    msg.setSourceEntity(119U);
    msg.setDestination(51730U);
    msg.setDestinationEntity(227U);
    msg.duration = 28427U;
    msg.custom.assign("CVYVRDNOXNSRNWQHPMQXQBKKGRJVCHOYOEAZBRDUBLJQUYQXGGVLMKKCIBTWIUBKMYGOQPQRWACQLBWMEFLIFNANMCLAQSCFGWEJOHEJDVOPLAUVSYWXZSPRNIFHDHTTOJGAPQOJJTSMVJNABRMKFESLTP");

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
    msg.setTimeStamp(0.6712550661513548);
    msg.setSource(6499U);
    msg.setSourceEntity(224U);
    msg.setDestination(1153U);
    msg.setDestinationEntity(85U);
    msg.duration = 41305U;
    msg.custom.assign("CWGIAUKOUTCRPSKBPYAXFCVVBOQRHNDWJOKQQMMBVTZFBJEWDTXRWFBSAFRYHNKPHHXJKIUWAPQCCKTVVULIHUYYWYGJEZBOJFEGADYHAOSGEPTKZSWJZLEDAFAILLLCQLDHUSYAYFBMGNNDTVUIPQZLHBQSKXEVWBZUQZZERXNZYGARLWROEJZMMLN");

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
    msg.setTimeStamp(0.09501063205936544);
    msg.setSource(16214U);
    msg.setSourceEntity(192U);
    msg.setDestination(62020U);
    msg.setDestinationEntity(87U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.9077616413463204;
    msg.control.set(tmp_msg_0);
    msg.duration = 6635U;
    msg.custom.assign("CTWSJYSMDGSAOQTGKQSRILEFUZYU");

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
    msg.setTimeStamp(0.646279775230685);
    msg.setSource(22048U);
    msg.setSourceEntity(125U);
    msg.setDestination(19962U);
    msg.setDestinationEntity(190U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.7988179461092283;
    msg.control.set(tmp_msg_0);
    msg.duration = 13781U;
    msg.custom.assign("OYEBLNRDSQIIJUUSMLAPPKYKJEPERRLJLQNZZSZGCHVYMTUNYCQIBKHROXELWZMTLIVEFXWBJIBDAIGISFOPVACRZLWBTWTBYLKNCFGDTEMVQSHUWDVDZUAAHGXBAMFWOFG");

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
    msg.setTimeStamp(0.31428910960058454);
    msg.setSource(18711U);
    msg.setSourceEntity(154U);
    msg.setDestination(64387U);
    msg.setDestinationEntity(4U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.20574506885912014;
    tmp_msg_0.speed_units = 101U;
    msg.control.set(tmp_msg_0);
    msg.duration = 37900U;
    msg.custom.assign("LQWHQMOYKCSFBTRII");

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
    msg.setTimeStamp(0.531781094591254);
    msg.setSource(14167U);
    msg.setSourceEntity(99U);
    msg.setDestination(40331U);
    msg.setDestinationEntity(235U);
    msg.timeout = 14448U;
    msg.lat = 0.3602788676427304;
    msg.lon = 0.7379050435557702;
    msg.z = 0.876495487194755;
    msg.z_units = 99U;
    msg.speed = 0.5351383618254201;
    msg.speed_units = 36U;
    msg.bearing = 0.29584780709508485;
    msg.cross_angle = 0.5312009777561847;
    msg.width = 0.291087381853532;
    msg.length = 0.18842702967822833;
    msg.hstep = 0.2417286327231063;
    msg.coff = 161U;
    msg.alternation = 95U;
    msg.flags = 17U;
    msg.custom.assign("GTYAIJHAXLOBHOZBBZTNRRNHUGRNARJRSLVQILRYCPKVJTGDDEEAJXEIKQBLCGJXUFWCULBJWKMPVMFNKAYCPEBGUAINJQDTVOTTXPCCYVSDYLXOOQHQDKWJBIJFGFROXSETGCLTEMFCNFYBYYGZVJHMLHZPQSUHFQMCVAPKXDSERSKOOHIUGZCIDBNFXSKBIM");

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
    msg.setTimeStamp(0.4502855895494089);
    msg.setSource(31745U);
    msg.setSourceEntity(239U);
    msg.setDestination(58960U);
    msg.setDestinationEntity(120U);
    msg.timeout = 61269U;
    msg.lat = 0.7027693850210421;
    msg.lon = 0.44644677386059795;
    msg.z = 0.2552951482012452;
    msg.z_units = 177U;
    msg.speed = 0.08614799842911547;
    msg.speed_units = 232U;
    msg.bearing = 0.7807357804335155;
    msg.cross_angle = 0.3903729133508371;
    msg.width = 0.13967416723714277;
    msg.length = 0.43688404496693634;
    msg.hstep = 0.43211962626581746;
    msg.coff = 128U;
    msg.alternation = 219U;
    msg.flags = 181U;
    msg.custom.assign("PFBKQQSKBHWQEZURNGZKITIPQNNFBFFERUYSLBNYBWQNZR");

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
    msg.setTimeStamp(0.970477891653813);
    msg.setSource(60887U);
    msg.setSourceEntity(84U);
    msg.setDestination(15313U);
    msg.setDestinationEntity(24U);
    msg.timeout = 36455U;
    msg.lat = 0.08919146526113986;
    msg.lon = 0.8063969567452373;
    msg.z = 0.5794496142331216;
    msg.z_units = 244U;
    msg.speed = 0.3063990090993788;
    msg.speed_units = 5U;
    msg.bearing = 0.7806494000139707;
    msg.cross_angle = 0.800600452968964;
    msg.width = 0.9478546442537729;
    msg.length = 0.560747751597668;
    msg.hstep = 0.0057868317960475535;
    msg.coff = 162U;
    msg.alternation = 172U;
    msg.flags = 166U;
    msg.custom.assign("NMLUPUNKDCKEOBMREWRLRQFTIBOVYMDOQFJSIFKAGNGBGSHJQFIZPSBYYOTZQLXPTQZYKCTNCBEJFVHUHIWZFMDJREUSWOXHWJZKQDTSLAMSDXVPIPXBDWQXJOTGKWEEBRVBVYVVYARZOQNDMIIEDSUHUKLBEVSYAJLBQOHMYFIGXZNMKCNNGPGFPLCXLHETAIAAPQLZXPULCYRJPZHATWDKIKRCJSVHVMFJWCETOXNRCMURXOGUGDUHAYS");

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
    msg.setTimeStamp(0.5688654232679743);
    msg.setSource(24864U);
    msg.setSourceEntity(107U);
    msg.setDestination(17468U);
    msg.setDestinationEntity(112U);
    msg.timeout = 19115U;
    msg.lat = 0.1777298452566618;
    msg.lon = 0.8842901885601773;
    msg.z = 0.6125631501148809;
    msg.z_units = 71U;
    msg.speed = 0.5943423672404159;
    msg.speed_units = 145U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8861704725666798;
    tmp_msg_0.y = 0.35057235386062613;
    tmp_msg_0.z = 0.5975124415441642;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BUITGCQWCQQDCKTVWEGEDZYQAQONLLMINAJTXVIUEVVFSDLSVUREKFQIAOTDWSRAAPHLGRJGYUPBSNXVEOJPSSBCYXJMXCHIQGZYDRWLFVLRLJMZCCWPALUDGDYNHIOBPSKAIJTRANDGKMMZUFKEJRNUBBLPCNMPRZVXSXNXTEUXZIMWUCUHZPTIEILKMMGOKTYYFNFWVEYBZQJWMDXWOHYGJB");

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
    msg.setTimeStamp(0.11811386068071561);
    msg.setSource(33733U);
    msg.setSourceEntity(219U);
    msg.setDestination(60865U);
    msg.setDestinationEntity(128U);
    msg.timeout = 40137U;
    msg.lat = 0.2818926642556061;
    msg.lon = 0.7093713440920087;
    msg.z = 0.10764472780681678;
    msg.z_units = 99U;
    msg.speed = 0.6408569725061373;
    msg.speed_units = 1U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.03338259850275638;
    tmp_msg_0.y = 0.5819949765947576;
    tmp_msg_0.z = 0.08030405542405405;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZTZMZUOYANTLOEHPLBGGQCECHGMZTDFBNUXCSLOGXSLHXBCUTQOBUNIWGSYMDIXFFPNSOLEQELAQGFUPLTDCBEYHFABQGTPSDWKRFIGYTNANANOZVXDMNIVXYJCKMLASRJNMHRILBLXQPHTEWZPPJURECDZKBBVXMYJVSVABRNDKMWHAHKVQFXEDAVYVWGIOEOUKPCKJJMIQTISFYUWZYYWUSTECHXQGRKWQRFP");

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
    msg.setTimeStamp(0.7807885738358832);
    msg.setSource(6287U);
    msg.setSourceEntity(206U);
    msg.setDestination(52746U);
    msg.setDestinationEntity(102U);
    msg.timeout = 4740U;
    msg.lat = 0.6887569051329203;
    msg.lon = 0.7077653848080542;
    msg.z = 0.14648375666502667;
    msg.z_units = 15U;
    msg.speed = 0.22276483759725563;
    msg.speed_units = 39U;
    msg.custom.assign("TBXRDUMBKPICNPOETYNHKFCUPSVVIJQBLPHEHOSWXGDOSBQMUTN");

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
    msg.setTimeStamp(0.5563465950442966);
    msg.setSource(55271U);
    msg.setSourceEntity(34U);
    msg.setDestination(14739U);
    msg.setDestinationEntity(172U);
    msg.x = 0.5340734355590512;
    msg.y = 0.07300869485638461;
    msg.z = 0.3499017404722491;

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
    msg.setTimeStamp(0.6652492255455277);
    msg.setSource(37879U);
    msg.setSourceEntity(166U);
    msg.setDestination(3504U);
    msg.setDestinationEntity(8U);
    msg.x = 0.794309450463758;
    msg.y = 0.10746386376342076;
    msg.z = 0.3086625028521097;

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
    msg.setTimeStamp(0.976825578820674);
    msg.setSource(17847U);
    msg.setSourceEntity(110U);
    msg.setDestination(25280U);
    msg.setDestinationEntity(50U);
    msg.x = 0.5898914327411134;
    msg.y = 0.6105754379580702;
    msg.z = 0.5257734195123972;

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
    msg.setTimeStamp(0.8150899764969675);
    msg.setSource(51943U);
    msg.setSourceEntity(47U);
    msg.setDestination(3327U);
    msg.setDestinationEntity(226U);
    msg.timeout = 22732U;
    msg.lat = 0.9177150117252263;
    msg.lon = 0.7297682164483899;
    msg.z = 0.7910838399208298;
    msg.z_units = 245U;
    msg.amplitude = 0.7570594066155562;
    msg.pitch = 0.3007247363161665;
    msg.speed = 0.10480791469919237;
    msg.speed_units = 194U;
    msg.custom.assign("XKHYOGWCDJQDGYFJV");

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
    msg.setTimeStamp(0.4911990098480242);
    msg.setSource(48306U);
    msg.setSourceEntity(89U);
    msg.setDestination(44064U);
    msg.setDestinationEntity(119U);
    msg.timeout = 281U;
    msg.lat = 0.6804691577595678;
    msg.lon = 0.20555071485885923;
    msg.z = 0.07760866808979383;
    msg.z_units = 132U;
    msg.amplitude = 0.8282782510091208;
    msg.pitch = 0.8368360220131672;
    msg.speed = 0.4324050449280502;
    msg.speed_units = 154U;
    msg.custom.assign("KNVPORTCADLNEOK");

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
    msg.setTimeStamp(0.0070801717633783845);
    msg.setSource(6781U);
    msg.setSourceEntity(130U);
    msg.setDestination(20226U);
    msg.setDestinationEntity(12U);
    msg.timeout = 8497U;
    msg.lat = 0.7787707021301383;
    msg.lon = 0.8845124399723071;
    msg.z = 0.32543255946894933;
    msg.z_units = 133U;
    msg.amplitude = 0.02001007905045693;
    msg.pitch = 0.19317873021152232;
    msg.speed = 0.6204499002863301;
    msg.speed_units = 114U;
    msg.custom.assign("NICEMXZURDXKMRQYJPWQFIWDDBXJTUBZABTZDYIMGXGTMPIKJWBYCQUNTDSOBOJGLOFCYRHUFCILTNYHKASIOUEUSCZKKYVLJYQXJTAFFJKUIIGHIVXXZPWNAQBHFZMHTRQZPNWJGGUBONVOZDDDQNGHCKCMMFAWNRZEXHWMBPURQVJQKNBPAYLFNWOEUGSEVLEALVVVVHXFOLXRJDAPFWSSDPKCERVE");

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
    msg.setTimeStamp(0.9011224870287518);
    msg.setSource(37323U);
    msg.setSourceEntity(80U);
    msg.setDestination(7504U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.7110232335434632);
    msg.setSource(29325U);
    msg.setSourceEntity(222U);
    msg.setDestination(52483U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.15835854201032218);
    msg.setSource(19160U);
    msg.setSourceEntity(150U);
    msg.setDestination(58356U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.6928798022514647);
    msg.setSource(39569U);
    msg.setSourceEntity(137U);
    msg.setDestination(52204U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.9958192777090024;
    msg.lon = 0.8447622929933125;
    msg.z = 0.3617122811292681;
    msg.z_units = 32U;
    msg.radius = 0.7047169126495467;
    msg.duration = 31723U;
    msg.speed = 0.7705950247528288;
    msg.speed_units = 209U;
    msg.custom.assign("PGMPIQVUIUULLXZVPSQRAFHBKCRJYRTLMVVMYOWAMZRKSGWQAJAORFWNZXJRELNUIPUTXFIYFHVHZWYVDEEOAUHQHTOKKFNJLNNHCUUBOFHDBHUWBDVGALAZTYKWSXGCD");

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
    msg.setTimeStamp(0.3918197756773939);
    msg.setSource(61125U);
    msg.setSourceEntity(241U);
    msg.setDestination(34318U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.6462436468516373;
    msg.lon = 0.5621904697914621;
    msg.z = 0.8236908975928687;
    msg.z_units = 13U;
    msg.radius = 0.33306353321688087;
    msg.duration = 12332U;
    msg.speed = 0.4535790233037005;
    msg.speed_units = 35U;
    msg.custom.assign("ILUGELUQHESBGVKCFPCURUAOTBPKHSSRBNCNVLFTIURCXWPMJCFOSWIYZSXIYRDQPRQMBNEOKEEHJZXFDVDZDDXINBIMQZZJPJEABZJHKE");

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
    msg.setTimeStamp(0.09323009851113029);
    msg.setSource(28012U);
    msg.setSourceEntity(237U);
    msg.setDestination(25575U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.1904165294613247;
    msg.lon = 0.2703137142291818;
    msg.z = 0.47556131586142025;
    msg.z_units = 47U;
    msg.radius = 0.6951318941303923;
    msg.duration = 41477U;
    msg.speed = 0.23389776104880955;
    msg.speed_units = 96U;
    msg.custom.assign("ZGDTGHCNXZDRETWUGXMIFSSVMRVEWUDFNWTWSZGTPAWJJNGAYVHSEWBQPPEPKKVGGFVLUDBEJCWVIYLFRJSVFEJQLIVJZMAYZHCDQRTOTYXNTCZHQOJBZOBOSLKQWUGRMMYFQPRFKNTBR");

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
    msg.setTimeStamp(0.8476634845993262);
    msg.setSource(31365U);
    msg.setSourceEntity(185U);
    msg.setDestination(43324U);
    msg.setDestinationEntity(227U);
    msg.timeout = 13382U;
    msg.flags = 50U;
    msg.lat = 0.05879524991017582;
    msg.lon = 0.6837271158605223;
    msg.start_z = 0.611430232132857;
    msg.start_z_units = 225U;
    msg.end_z = 0.4236518652179496;
    msg.end_z_units = 4U;
    msg.radius = 0.0787708972468476;
    msg.speed = 0.9983527549647495;
    msg.speed_units = 108U;
    msg.custom.assign("OGAUOXZCSLDQYVVTXHSUZHBKWKZYQQHPIJQSBOEDRJYMKMCBOBTPQHBVGISUDAEMEEGKWYRDDMRUGEGTIFDTNLFERCAHKBATMTCRNWNSAFPMNDAAIISYRJTFVFLJBNXGCAMJUBZSFZKDEVQSCEOIKMXGLLHYWGXWWNZVRULNTJHZAPKZDYTQWCULHE");

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
    msg.setTimeStamp(0.035882585172033465);
    msg.setSource(46367U);
    msg.setSourceEntity(105U);
    msg.setDestination(59196U);
    msg.setDestinationEntity(28U);
    msg.timeout = 52270U;
    msg.flags = 234U;
    msg.lat = 0.4745260550822953;
    msg.lon = 0.8958007102381316;
    msg.start_z = 0.28585665157458784;
    msg.start_z_units = 100U;
    msg.end_z = 0.1568242253602966;
    msg.end_z_units = 8U;
    msg.radius = 0.6629666160866878;
    msg.speed = 0.8706430685922031;
    msg.speed_units = 210U;
    msg.custom.assign("ALYJXLIGMTLWJTTJRFSMDZGOFQRDUCNVAIKCNQESAZTWUAGNKWJIXCYCWXPRJNUAVNKMHEFSFOWHVESOFYEQDJZLKDKDIFB");

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
    msg.setTimeStamp(0.20964413598696074);
    msg.setSource(8032U);
    msg.setSourceEntity(158U);
    msg.setDestination(12275U);
    msg.setDestinationEntity(17U);
    msg.timeout = 738U;
    msg.flags = 34U;
    msg.lat = 0.8011440919065552;
    msg.lon = 0.6811019254060185;
    msg.start_z = 0.7653935850460941;
    msg.start_z_units = 230U;
    msg.end_z = 0.7241088014028898;
    msg.end_z_units = 212U;
    msg.radius = 0.9707691547738285;
    msg.speed = 0.36251184931169733;
    msg.speed_units = 114U;
    msg.custom.assign("QKSKXFDZPTGTWYUDWVQNYXOOPHJKJJAJSLBJZOSFECXBRIHWFKOKPZFNEXZZCHQAQBQACURYNRTKINDFJLRLVHEPFTGJECYSQLAVDTZKWYGSXWOS");

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
    msg.setTimeStamp(0.45724639567923575);
    msg.setSource(18401U);
    msg.setSourceEntity(43U);
    msg.setDestination(40071U);
    msg.setDestinationEntity(193U);
    msg.timeout = 38236U;
    msg.lat = 0.2648754857498139;
    msg.lon = 0.9220533199827958;
    msg.z = 0.2139859468448565;
    msg.z_units = 130U;
    msg.speed = 0.07109212133309428;
    msg.speed_units = 231U;
    msg.custom.assign("SMECTSMMEUBXRXNUISTUDZDDDKRZPFQPTYYOFNHOXOCECHQ");

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
    msg.setTimeStamp(0.13091382465109402);
    msg.setSource(900U);
    msg.setSourceEntity(19U);
    msg.setDestination(47823U);
    msg.setDestinationEntity(154U);
    msg.timeout = 54284U;
    msg.lat = 0.017474978948774922;
    msg.lon = 0.6799729682992937;
    msg.z = 0.6751959387972383;
    msg.z_units = 195U;
    msg.speed = 0.9782497409569189;
    msg.speed_units = 131U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9637131087527616;
    tmp_msg_0.y = 0.974449327510048;
    tmp_msg_0.z = 0.4143809543446001;
    tmp_msg_0.t = 0.965481987477129;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BNLQIXJZWOEFPGYHBQPHTWKBVEUTMYHOLNZLMRADIQZTUEVCJPWAZHJLUTNQTNFXTAJANWOFXG");

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
    msg.setTimeStamp(0.5314068039411795);
    msg.setSource(46367U);
    msg.setSourceEntity(122U);
    msg.setDestination(24413U);
    msg.setDestinationEntity(21U);
    msg.timeout = 43125U;
    msg.lat = 0.5852546068472384;
    msg.lon = 0.819639568469559;
    msg.z = 0.6154228934392929;
    msg.z_units = 231U;
    msg.speed = 0.22395112774074433;
    msg.speed_units = 207U;
    msg.custom.assign("MUAJKIQXQZPIIWUPHYXTCHOXRVADFLASJUDUAZXEPDLWLGBMCQLQEQBTNNOYWUKYFVZWIYHGLJAMNBPCFVYGFSVGXSHRKGRJBFYNZWKOJWOLHVUCICAPKMXXMDPNUECYGPDCEKEETSEOQYXCOVBRTOWYIHURNKBYFC");

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
    msg.setTimeStamp(0.11419380170232674);
    msg.setSource(5443U);
    msg.setSourceEntity(26U);
    msg.setDestination(16576U);
    msg.setDestinationEntity(111U);
    msg.x = 0.5069276075126937;
    msg.y = 0.6359678510960448;
    msg.z = 0.5455903561541611;
    msg.t = 0.7143858056961196;

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
    msg.setTimeStamp(0.8324209219927231);
    msg.setSource(44004U);
    msg.setSourceEntity(0U);
    msg.setDestination(21317U);
    msg.setDestinationEntity(133U);
    msg.x = 0.0038066761554110817;
    msg.y = 0.2721086517204878;
    msg.z = 0.06304540667024605;
    msg.t = 0.05367593064145193;

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
    msg.setTimeStamp(0.04320051487087806);
    msg.setSource(28248U);
    msg.setSourceEntity(68U);
    msg.setDestination(16834U);
    msg.setDestinationEntity(84U);
    msg.x = 0.12593083945964012;
    msg.y = 0.7008006776439458;
    msg.z = 0.24567383970952572;
    msg.t = 0.9726763676463861;

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
    msg.setTimeStamp(0.04548082297848932);
    msg.setSource(48357U);
    msg.setSourceEntity(113U);
    msg.setDestination(35360U);
    msg.setDestinationEntity(90U);
    msg.timeout = 37935U;
    msg.name.assign("SSDVKMTFAKLOOIWEHZ");
    msg.custom.assign("DYYWVXJDGQBABPCFFVFLGSRHTOLXCGOONUAHHKGYTRGDKBADPCMVJEQUDTUZTINSWXMXRNIAPBHNKUJGCLQEOZSMYWYSLCMBQHYRZOAWGKMMOILKXUPQOSWDNTIDHUECEJXSLJFUBVMHQAZFB");

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
    msg.setTimeStamp(0.30809885317288777);
    msg.setSource(56521U);
    msg.setSourceEntity(51U);
    msg.setDestination(36578U);
    msg.setDestinationEntity(136U);
    msg.timeout = 26794U;
    msg.name.assign("ZCZREUGEWCJTIKHWQYXTCLSPAXSAUEXVHCNOWKKTWFLDEOOQJGOPPYAAQMMBMKEAMFEXKOLLWVGUPDVNSNWULRHPBTFBZAHDIHJWZPKTVIVTRNQZFJBACOPMCBVXBCFMIVSSFZARZFSXPNLGJVVJQNTEUYVNORDZGSHLGYQCXGTNQIAXKDKWUJJBIGXJUDILKNDHWRFTYPPXDIFHARDOYCDECEMNYYMGMBQO");
    msg.custom.assign("AYXYDJBWTYYOZCWKEXKAXRLUZAAAAXEDHBWCEHCIMMJYLMIVDPTNCKYUBAGFKNEBKQRFTDYQFYTWALQINKWEQTSWXNHORFC");

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
    msg.setTimeStamp(0.46140526249624336);
    msg.setSource(42914U);
    msg.setSourceEntity(208U);
    msg.setDestination(35473U);
    msg.setDestinationEntity(19U);
    msg.timeout = 4212U;
    msg.name.assign("VHWSOFVROBQXZLGAIALNJEKHPCXNUITPFKSGIKXCHWRYHMXISKMWCORQRMNXEKTRCBVTYDEYMAPJLKHEWZXAZQONFUCYGWFKMTVNQLVEIACLYDKWSLELZUIGDNAYNDFNAHYYHCXUFQJPJZUDPBLGPSABVENVDUGOLEUXERAGDURJIDZCSORSCDIQAGKZWOJWUWTXLTIHQ");
    msg.custom.assign("XUJTTBFVOXOZZPXZDJCOPSQKMS");

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
    msg.setTimeStamp(0.9790321018335543);
    msg.setSource(38142U);
    msg.setSourceEntity(229U);
    msg.setDestination(9151U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.7279296061541367;
    msg.lon = 0.6997528540603452;
    msg.z = 0.7414409093890598;
    msg.z_units = 19U;
    msg.speed = 0.7171981361317519;
    msg.speed_units = 106U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26473U;
    tmp_msg_0.off_x = 0.9836045670738375;
    tmp_msg_0.off_y = 0.15846478425635924;
    tmp_msg_0.off_z = 0.16044243374726563;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7260597975750674;
    msg.custom.assign("YZXQCDWEVIIINWQFLDJUSKZXUIPHLHBUBIZASHDTVTQNAHPQVHIPNXMVCCNWBZZYQETOCVGKFXUZNUTUZLGSYSELACZMZOJJOJNIXBZPDFSYHJVIWKXRDSYMTJOTAUQYEONDHJRTMBOJCPYQDAEYVBGNCGDSCWFMRRIKPOSRFLUXEPRELRAQAHGMGWPKLTRCNMEVKFAXPETWJFXAQHLKXGYMGFMDSE");

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
    msg.setTimeStamp(0.4710027462034929);
    msg.setSource(58922U);
    msg.setSourceEntity(26U);
    msg.setDestination(58340U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.15648041779262223;
    msg.lon = 0.6847730045433076;
    msg.z = 0.3519454710698048;
    msg.z_units = 83U;
    msg.speed = 0.009636033258349386;
    msg.speed_units = 126U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6887U;
    tmp_msg_0.off_x = 0.06914538942776083;
    tmp_msg_0.off_y = 0.0698820837358316;
    tmp_msg_0.off_z = 0.935400563539693;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.21605103377795698;
    msg.custom.assign("MPMBRCMFVHYLKAENPCWFEKCBNSRGHWJRSIRFCCTTMSBPYPARIPQWIZYJHFQYEYVTBEBPDRSMGNZSILHCMLEZQQWNJUJKVCV");

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
    msg.setTimeStamp(0.6304189440168735);
    msg.setSource(35943U);
    msg.setSourceEntity(36U);
    msg.setDestination(10779U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.4518658918474783;
    msg.lon = 0.24882607231739506;
    msg.z = 0.02184080363355101;
    msg.z_units = 123U;
    msg.speed = 0.8593734341361005;
    msg.speed_units = 137U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31046U;
    tmp_msg_0.off_x = 0.805179686244037;
    tmp_msg_0.off_y = 0.5880186986874143;
    tmp_msg_0.off_z = 0.25509881018007996;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.08128706013806108;
    msg.custom.assign("UOEDPYJTSRIEJVPYFICWVMPEILBCKRHNANQBCWKMCQAPGIWKMVZGJZGBKFYYVBGOMQRMOKUXQIJEWUZIRTVMUMNRNXTSKSCHIFRGXBHIXERZTHOAKLVAHTUCDPRAGEZBPWURBOFSDTDGIYESPSWQPFWCJLNXQLJALLUMJWDSVXNBQJWDXJTFTFZOCBAGDAGEXLPULFCAQZOZKJHXVHMDNXQDINLHPCOZRS");

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
    msg.setTimeStamp(0.23270647745559891);
    msg.setSource(33381U);
    msg.setSourceEntity(241U);
    msg.setDestination(498U);
    msg.setDestinationEntity(228U);
    msg.vid = 63954U;
    msg.off_x = 0.34044235139196555;
    msg.off_y = 0.4695519462658092;
    msg.off_z = 0.4235177352543785;

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
    msg.setTimeStamp(0.021150460050991304);
    msg.setSource(35721U);
    msg.setSourceEntity(36U);
    msg.setDestination(15188U);
    msg.setDestinationEntity(178U);
    msg.vid = 5666U;
    msg.off_x = 0.24062079902943811;
    msg.off_y = 0.23756508006827926;
    msg.off_z = 0.5500830787835546;

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
    msg.setTimeStamp(0.7670950241361641);
    msg.setSource(64375U);
    msg.setSourceEntity(9U);
    msg.setDestination(46080U);
    msg.setDestinationEntity(19U);
    msg.vid = 23743U;
    msg.off_x = 0.9913055247998025;
    msg.off_y = 0.24730330305333703;
    msg.off_z = 0.3066896541685816;

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
    msg.setTimeStamp(0.6178790912630643);
    msg.setSource(41538U);
    msg.setSourceEntity(170U);
    msg.setDestination(31282U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.908313870442703);
    msg.setSource(17367U);
    msg.setSourceEntity(154U);
    msg.setDestination(59155U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.9616810373927789);
    msg.setSource(48277U);
    msg.setSourceEntity(122U);
    msg.setDestination(18466U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.7778974117950606);
    msg.setSource(37411U);
    msg.setSourceEntity(168U);
    msg.setDestination(36833U);
    msg.setDestinationEntity(79U);
    msg.mid = 15892U;

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
    msg.setTimeStamp(0.861326676340244);
    msg.setSource(30023U);
    msg.setSourceEntity(219U);
    msg.setDestination(46790U);
    msg.setDestinationEntity(226U);
    msg.mid = 64260U;

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
    msg.setTimeStamp(0.45863307292164956);
    msg.setSource(12728U);
    msg.setSourceEntity(6U);
    msg.setDestination(40160U);
    msg.setDestinationEntity(90U);
    msg.mid = 60042U;

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
    msg.setTimeStamp(0.7815528605750828);
    msg.setSource(57658U);
    msg.setSourceEntity(87U);
    msg.setDestination(45323U);
    msg.setDestinationEntity(11U);
    msg.state = 144U;
    msg.eta = 24107U;
    msg.info.assign("POHVBNJBEOHLLFMFYJDCFZBURLGLRESODVXTDWQJQKXANOAUMCXPPRXODZRMLYISVRAULMNCOAWBFHSQXNOXYDJNEFSSBBQXRRJUBUPMVPNMJTPZSSOWYQVWCNYIGCIWPBDKEFLBIDRTTPUGLUYKIVVZZTWWWJUYFACPHNTYUAHRRIXNXADPZSSABQU");

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
    msg.setTimeStamp(0.6564003770261339);
    msg.setSource(61490U);
    msg.setSourceEntity(164U);
    msg.setDestination(12896U);
    msg.setDestinationEntity(227U);
    msg.state = 152U;
    msg.eta = 55446U;
    msg.info.assign("TCUSSIFYAANGVNKWNRMYYKXDRZEIBDWGFRTXHRHCVRT");

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
    msg.setTimeStamp(0.4469969222172129);
    msg.setSource(14559U);
    msg.setSourceEntity(140U);
    msg.setDestination(1426U);
    msg.setDestinationEntity(99U);
    msg.state = 88U;
    msg.eta = 47452U;
    msg.info.assign("VJFYCDDOWWWPRKCQNZWLOAIYMMLLLDBLEZMLHEGVLIANEKWAMVPXASJGIBMTBCGUUHUUSFFPTASKJYUBAKPVTQZCRQSIVQXRUNKHSSWZVEUGNZTNUPMPZOQFJAYNJKWXJSIKRJINORAZEMDWEHAIIXDOMGDEHTOALPCDSBKPSMWLXVQOFBYKXXTWDXZFXNQMEZJRHBHROJCKIRDVQGRFOCCZRUYEIVFJFTTY");

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
    msg.setTimeStamp(0.7884826907935161);
    msg.setSource(9162U);
    msg.setSourceEntity(208U);
    msg.setDestination(15848U);
    msg.setDestinationEntity(170U);
    msg.system = 8445U;
    msg.duration = 24747U;
    msg.speed = 0.20550812046003097;
    msg.speed_units = 149U;
    msg.x = 0.9267404720185919;
    msg.y = 0.09455970776415568;
    msg.z = 0.0035890980563185737;
    msg.z_units = 96U;

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
    msg.setTimeStamp(0.48592707015367753);
    msg.setSource(45955U);
    msg.setSourceEntity(243U);
    msg.setDestination(20482U);
    msg.setDestinationEntity(187U);
    msg.system = 39121U;
    msg.duration = 13138U;
    msg.speed = 0.9219165662153714;
    msg.speed_units = 199U;
    msg.x = 0.14372464524835615;
    msg.y = 0.9855188201574943;
    msg.z = 0.9238616899964193;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.32815395125962643);
    msg.setSource(48157U);
    msg.setSourceEntity(222U);
    msg.setDestination(4923U);
    msg.setDestinationEntity(53U);
    msg.system = 54969U;
    msg.duration = 55541U;
    msg.speed = 0.43348259955281543;
    msg.speed_units = 194U;
    msg.x = 0.0790920674244241;
    msg.y = 0.32863813209883774;
    msg.z = 0.475699141819268;
    msg.z_units = 121U;

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
    msg.setTimeStamp(0.19590554566074347);
    msg.setSource(3372U);
    msg.setSourceEntity(222U);
    msg.setDestination(37820U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.06311603289961132;
    msg.lon = 0.16190171779834028;
    msg.speed = 0.06454655941474041;
    msg.speed_units = 116U;
    msg.duration = 20298U;
    msg.sys_a = 19162U;
    msg.sys_b = 12563U;
    msg.move_threshold = 0.04417903875254958;

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
    msg.setTimeStamp(0.5439833812695108);
    msg.setSource(30364U);
    msg.setSourceEntity(226U);
    msg.setDestination(7699U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.9717768685223364;
    msg.lon = 0.22555586284413764;
    msg.speed = 0.111565034903924;
    msg.speed_units = 203U;
    msg.duration = 57490U;
    msg.sys_a = 36836U;
    msg.sys_b = 63224U;
    msg.move_threshold = 0.9930644530427771;

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
    msg.setTimeStamp(0.08379099519803301);
    msg.setSource(27695U);
    msg.setSourceEntity(185U);
    msg.setDestination(59182U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.6783748200923735;
    msg.lon = 0.7641916471969199;
    msg.speed = 0.26313421556119;
    msg.speed_units = 160U;
    msg.duration = 21516U;
    msg.sys_a = 43359U;
    msg.sys_b = 1938U;
    msg.move_threshold = 0.148417518786511;

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
    msg.setTimeStamp(0.19675887559687655);
    msg.setSource(9041U);
    msg.setSourceEntity(132U);
    msg.setDestination(29838U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.5064017904893093;
    msg.lon = 0.39044382294121016;
    msg.z = 0.8185423969069416;
    msg.z_units = 179U;
    msg.speed = 0.9607442145259274;
    msg.speed_units = 206U;
    msg.custom.assign("GDCWIBGRYXOZAVJMQFNZKAVRCFGAFJFEYDPYNHQVVTNVKUWCEZOIOIWZWXOYNRXBZCI");

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
    msg.setTimeStamp(0.20266853853851574);
    msg.setSource(25312U);
    msg.setSourceEntity(26U);
    msg.setDestination(42362U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.27586531365101963;
    msg.lon = 0.3088574218067941;
    msg.z = 0.6702092210000831;
    msg.z_units = 213U;
    msg.speed = 0.035845791320664566;
    msg.speed_units = 104U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.1990827791582067;
    tmp_msg_0.lon = 0.8906167403419758;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XQECDSGGAQOQWITVZYUFCPLAWBIGSUNHKKBYYAXMSBXKCDQRFPCXZZKUCVUKQBOHYOACNVGIURMZWGKREANIGLKLVTGVXDJKFZPJCJLRPRAURNQZDEGVZIKWBTNVTHCTRHLNQGQUHWDCTLEMFJJQYXJNUPJSNOHZXYNCSFHLOOBAEAVSFESGIDTFARDIWRZDOMZJJFXWNYRMMVITOYWWPXSTIVOQBEFPHHPUMLSEPKBTHLMJBIYUMPELDWDAME");

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
    msg.setTimeStamp(0.06446422396744622);
    msg.setSource(44741U);
    msg.setSourceEntity(141U);
    msg.setDestination(36682U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.06815727754846779;
    msg.lon = 0.4130540940674704;
    msg.z = 0.19807863149655192;
    msg.z_units = 64U;
    msg.speed = 0.08238259339177156;
    msg.speed_units = 237U;
    msg.custom.assign("KNADFPROFNEPOWMTZHKPCVIWCNKKJAAELGROJWFDYTKAUGILBBSABRMCWRIZMOMYUZVCPKYVTILKIXKQYTICBGXPYNQWLIRLIVLYNWRKFJCMQVEHEUZQSFXATAYVQRDUBDEHUHMALTWZFBNCJWDFLMGJPRDPRUTGZDLFLMBYCNDXGSUENJVQHWEUFJDSUGV");

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
    msg.setTimeStamp(0.24627461564677444);
    msg.setSource(54751U);
    msg.setSourceEntity(124U);
    msg.setDestination(293U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.4769813414045392;
    msg.lon = 0.5311286663033585;

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
    msg.setTimeStamp(0.24781245351269066);
    msg.setSource(45297U);
    msg.setSourceEntity(54U);
    msg.setDestination(11706U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.4905564945116003;
    msg.lon = 0.9219317636599679;

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
    msg.setTimeStamp(0.5798871548938129);
    msg.setSource(16528U);
    msg.setSourceEntity(205U);
    msg.setDestination(4605U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.7431417827599405;
    msg.lon = 0.7976168895425335;

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
    msg.setTimeStamp(0.43207593468290184);
    msg.setSource(41529U);
    msg.setSourceEntity(223U);
    msg.setDestination(7614U);
    msg.setDestinationEntity(246U);
    msg.timeout = 20779U;
    msg.lat = 0.1578583808803773;
    msg.lon = 0.07611373964657442;
    msg.z = 0.2521067110839351;
    msg.z_units = 40U;
    msg.pitch = 0.42928822683763135;
    msg.amplitude = 0.7203030990399357;
    msg.duration = 45309U;
    msg.speed = 0.21451023444825168;
    msg.speed_units = 87U;
    msg.radius = 0.10552775133775616;
    msg.direction = 16U;
    msg.custom.assign("CIXJKDCJECGSEHPBFWUTWHBFOSJGIDOJFQQGERNSAJGPQNVFOAYVVEHJRXLLWAFUBPFLZVWPREADMED");

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
    msg.setTimeStamp(0.25565172800409475);
    msg.setSource(61524U);
    msg.setSourceEntity(114U);
    msg.setDestination(60032U);
    msg.setDestinationEntity(101U);
    msg.timeout = 21091U;
    msg.lat = 0.10738653838037082;
    msg.lon = 0.7780993344875539;
    msg.z = 0.6817305425204717;
    msg.z_units = 117U;
    msg.pitch = 0.7653028824252861;
    msg.amplitude = 0.057862157844152384;
    msg.duration = 40542U;
    msg.speed = 0.9213818487880867;
    msg.speed_units = 167U;
    msg.radius = 0.9611828582974159;
    msg.direction = 21U;
    msg.custom.assign("XSZOCTAQWQCZCGFPNSXFCPCDROOUBLSXUZNRPFZAHYPTKBVJOGZMDUKISTU");

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
    msg.setTimeStamp(0.93621298513857);
    msg.setSource(25936U);
    msg.setSourceEntity(52U);
    msg.setDestination(2821U);
    msg.setDestinationEntity(238U);
    msg.timeout = 9183U;
    msg.lat = 0.4829927752226333;
    msg.lon = 0.34336875920025234;
    msg.z = 0.1807182871490044;
    msg.z_units = 53U;
    msg.pitch = 0.09248678044815173;
    msg.amplitude = 0.5325253478162792;
    msg.duration = 62360U;
    msg.speed = 0.9428516286036771;
    msg.speed_units = 253U;
    msg.radius = 0.28448440217113524;
    msg.direction = 240U;
    msg.custom.assign("PFKEVSKCCGQHNBNFSZTRPRVHPRZLIRAGOOLLSXNNERSZXEMAICMYZIPWDMTZNY");

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
    msg.setTimeStamp(0.502425729878328);
    msg.setSource(35461U);
    msg.setSourceEntity(66U);
    msg.setDestination(55133U);
    msg.setDestinationEntity(116U);
    msg.formation_name.assign("DSFIMZMLRQUHKQRUYXYLJZIHQNMHGSIYJKFMCNCVETZLMYVEBKIICBSVZOGSAPREYQTSCKZBFWAAYHVRUZTGSZNGLTYESFWCGAOWVPIOTDTKDSFJCLBJQRWUTNRSLAQMOZNIQHXPWORXUEVUEAVDBFA");
    msg.reference_frame = 96U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34266U;
    tmp_msg_0.off_x = 0.18495751973618513;
    tmp_msg_0.off_y = 0.5508358862661159;
    tmp_msg_0.off_z = 0.843711799764522;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UAPJCSEZQAVEHQQLQQNPEVYHWHBIFMKCTSIHMRTFEPNQIYSVVKLRQXRCXHDOGMSIEFMZFXSRXJZCLYTAUKTPRWANFYRCJIBLZYBUZTWEVTYGZOXNBOHOOSDBJOZDPIIAKKIGXBWHULTWOIGMNYJFXLZUCLUE");

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
    msg.setTimeStamp(0.4726916679808052);
    msg.setSource(48844U);
    msg.setSourceEntity(175U);
    msg.setDestination(25413U);
    msg.setDestinationEntity(84U);
    msg.formation_name.assign("GALJGCMDSHGOOBJMDWJFKPPTSOVKQHFYDUWFQJNSVFRFQCRGGZZYODWVUSECDJKOQMRGZERANIPOLCYQFTAIONUBSYSDTIPAZBHAXFEONXVMIBCTQQBLXATSJZWVAYUWCRPQHQJHWVIULZRZMWTFK");
    msg.reference_frame = 248U;
    msg.custom.assign("SNXLMZZIQQESXALIQNDUETTDTYUGLNMALOMNVDSAJCJIXPUKNNRMGAAERCUDGPJRIYBODOKHJQH");

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
    msg.setTimeStamp(0.7340649627388961);
    msg.setSource(16293U);
    msg.setSourceEntity(227U);
    msg.setDestination(6155U);
    msg.setDestinationEntity(224U);
    msg.formation_name.assign("QETGUWGBVWEWRGWVABAJPBAURGWUBEJAYZTFISKLCRHXOYSMRYHOUECAYOJDVGNEMHKLRZODPQBKDZRIYDXQFXDXVQTPAIFCPWUVWYZBLRVXGEDRHHBTHPPMSKAUTPBTLINOUHGXUKXYGJOLJNFPJRZNJCMZODIZFZHNWYNDMEKLQTGCFWPOCVOFTZSCTMSNYFMTLPKZSRQAMLBVCDIQVUODIFS");
    msg.reference_frame = 226U;
    msg.custom.assign("UWANGOXRVLLSMXZYWXTPLBIPPVNDUTQSJHEWBOMWFCAICFYECCDUNWDIMERDNFIZFHZXGFSV");

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
    msg.setTimeStamp(0.4001333062461828);
    msg.setSource(58684U);
    msg.setSourceEntity(201U);
    msg.setDestination(58954U);
    msg.setDestinationEntity(151U);
    msg.group_name.assign("QGLMQFMYPGUVXAGEQWDBNSSFWITSQMAYXBSAAUYNCBVKAFGWWZMWDDIGCXKJAXBLPDCVJDEVCINBNRISOJFUTHKADXAGYWOEKLOYMHQFFKXVZBYJORKMPQPDROMUPTLEZLCGNHPHAUDMHJFVEYWKOHNTXLCRAESBTYZKCSMTNZVNORBLIOIWUIOVQCTEUIPXXGCEZFIEPXCSKSNHVGJPTBFFLQQZQLJDNWRKYVZMPUGTJJ");
    msg.formation_name.assign("GYWNNKZJBIOIESKOUTVGKDVFNDONTIHAKUSSZQFQKAHBIVARPLXOIPHFCBFQEZCZFJCPERDSROQANVTGJEVBFSOWPDUULTYYWJOQJGAXZMFKEKKSBJXLMVQVYYWTGLHNAR");
    msg.plan_id.assign("MOWQSTMWDGXLXUJHWRGLGTVAFFZPREKIPUDIMCMPZDAFKUCHVBVQPQXUVHMCSZYGTNDOEWTOXSKQJUTSTIAKNQSSLBNAZJUWGRDWUSWLXXUREHDJMRBSJPROJDFUZWZTSKYOBHAYLEOPCXLJIBYAYBMEEHTEFYKPAIBJCQUNCNBIOHBZEEHXNZGXNCOQLRAXVDVHDCFKVQLYFPJ");
    msg.description.assign("PXSGEUCVDAYNEHYLPZXEFYBPFAPVFGYISM");
    msg.leader_speed = 0.7363193625673832;
    msg.leader_bank_lim = 0.7195259558295726;
    msg.pos_sim_err_lim = 0.8336449897659595;
    msg.pos_sim_err_wrn = 0.4705374300860221;
    msg.pos_sim_err_timeout = 15156U;
    msg.converg_max = 0.03826820828705313;
    msg.converg_timeout = 31424U;
    msg.comms_timeout = 1111U;
    msg.turb_lim = 0.982105946377448;
    msg.custom.assign("BACPXMZRBVPGLYLKJFVTKUJVNPQBFWIEKEQCIJBIAEVMOIGDAMDRHYZKZCGOCZJXTVJELGTUKYWTGHHUPNKSPPHXYRJFXOYFQNWPQMSWBNISALHSZUYDHRWGBSDUSREUFTLLACSHZ");

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
    msg.setTimeStamp(0.34421883544932896);
    msg.setSource(59043U);
    msg.setSourceEntity(154U);
    msg.setDestination(19014U);
    msg.setDestinationEntity(195U);
    msg.group_name.assign("UWBTQGJPRFQVOEIRORBPFMTDMITJVOFHWDBQMXCNGZPKMKMEZFJTZPOIDALJKPGBRPRZVSRJNLUXSISLUNCXYTBBAGHTCUZHDOLYWZIXDEDAOLLDXQTGXJHYNNEYCVWCACEKUSKMACWDLBKVNFBLOYPCGQSLSIBUVBHAKIUSH");
    msg.formation_name.assign("JKIFFZEUEPIAXWAKISBORLOMBLOUQIKHCPGPTJQRNOOFMEHVZXRBDVZCEAJVRDVIXFPWRKXDMMBRTCGALKZCTMACBTGROWXBJRVJGETGEPFDEBITMIYPLCESCSVGPNEWOQZZFLVRGHBSQNEYKUFALUQYCXFHUKMHWJIZQHSTZUWYQAOSWQLUSOTAHPYHXZBNDCNK");
    msg.plan_id.assign("RZCUSCTPUCXMQWREDPNNKKWUDOADSTMOMQHACTVBXIKNQWG");
    msg.description.assign("GWDFPYMSIZCGGIDBLPUCSFZHRTYRDRCZELBZKKPATJHUQRWSJKTVQRYVSQMHWRXLULUYAZKIPAXGBDENVLTNNOMJVYUXGQVDOAZEJOELFXNKOJABGELCXKWDRGSKEISGMTJMEHMWCXKIFQVNBAUMEMQQCLFFHUQWFBBMLRNOOBVUZYYWSQGJACNAPPPVXURPCYNT");
    msg.leader_speed = 0.9254908355779764;
    msg.leader_bank_lim = 0.1826921498882389;
    msg.pos_sim_err_lim = 0.2885268525169242;
    msg.pos_sim_err_wrn = 0.39844608772271517;
    msg.pos_sim_err_timeout = 47244U;
    msg.converg_max = 0.039403786267847796;
    msg.converg_timeout = 3491U;
    msg.comms_timeout = 59979U;
    msg.turb_lim = 0.3690513661842346;
    msg.custom.assign("XPAEWSXPABWZAZHRJINMBTDLUZSQZXNIFXYGNRNM");

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
    msg.setTimeStamp(0.11927689528888419);
    msg.setSource(13179U);
    msg.setSourceEntity(82U);
    msg.setDestination(62391U);
    msg.setDestinationEntity(31U);
    msg.group_name.assign("ZTWKJRYAIUSGBWBATQGVLQVTSPOK");
    msg.formation_name.assign("FAECTGGDMDLRZPHPGKXWJRJBCAYXMJSYIHUFQEVGTBDUNCSYYBFVPHSCWQCDNLAXTUPHNZHQDNRQHZLBAZVIMUDMSKXQEDMYBHEWRXUGWTNWZNLVSIRLKRPGQJKIITCMPXOWMUHCEROWSVBLHNXKYQZJTUIGESYMBKIJBZBFTAVE");
    msg.plan_id.assign("WFRJVAKVAMLVKMGTXMFIFBPGQPZTODAHWUPZSDUSHYWGQVFISEIKSNEZVKQGNCOVPBCABZHNOETNJFZNBMFFIHNUGRJEUMRYXSOEMSJDRBX");
    msg.description.assign("HYBWFVTNPOJFKGYEYTXAPGPYKVMLTTREPCBZHRTQXNFNLJDUCICXLDNOMQRNKKSVZXJJGEDZJLQXKKPEEVIUAMPXBGEWRFROPESHNFSUYYCBXGMHRHSMEJUKB");
    msg.leader_speed = 0.8544925316688508;
    msg.leader_bank_lim = 0.5456201637521337;
    msg.pos_sim_err_lim = 0.6742442681220544;
    msg.pos_sim_err_wrn = 0.37040195407132015;
    msg.pos_sim_err_timeout = 538U;
    msg.converg_max = 0.04857160322977405;
    msg.converg_timeout = 49670U;
    msg.comms_timeout = 61805U;
    msg.turb_lim = 0.8594311833973998;
    msg.custom.assign("YWIPKSCRIRSPAUUQYMDKRDOCLNKABGOVLQFRGGEYJNOWSAWTGTBTFHLKTACUIVFNNQILPXESPJPXQYOBHWZQNNXGQKMWNNOPMMJEXFKOZOGDYWLOMIUATRVUFSJQSYAYGEKZZMHKYUPHSHZKVTZBRZFJOCSQEHZWQSDFDBRETIHCGEXUIOKDXTVJBVDMCPJTDDIBLLVXIXZNVJAFHTVBGLLSZEBAVI");

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
    msg.setTimeStamp(0.3093091473124394);
    msg.setSource(4788U);
    msg.setSourceEntity(51U);
    msg.setDestination(42392U);
    msg.setDestinationEntity(202U);
    msg.control_src = 13652U;
    msg.control_ent = 157U;
    msg.timeout = 0.8270412733981131;
    msg.loiter_radius = 0.19941902067725692;
    msg.altitude_interval = 0.1179020327796726;

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
    msg.setTimeStamp(0.9259534169567281);
    msg.setSource(51331U);
    msg.setSourceEntity(179U);
    msg.setDestination(60397U);
    msg.setDestinationEntity(145U);
    msg.control_src = 35154U;
    msg.control_ent = 104U;
    msg.timeout = 0.2349952352324779;
    msg.loiter_radius = 0.9061153163423391;
    msg.altitude_interval = 0.05679190361269704;

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
    msg.setTimeStamp(0.6825969784076502);
    msg.setSource(4991U);
    msg.setSourceEntity(31U);
    msg.setDestination(44017U);
    msg.setDestinationEntity(159U);
    msg.control_src = 3775U;
    msg.control_ent = 219U;
    msg.timeout = 0.4863249942562273;
    msg.loiter_radius = 0.2299579336728622;
    msg.altitude_interval = 0.5908397053489187;

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
    msg.setTimeStamp(0.6963168851302824);
    msg.setSource(18377U);
    msg.setSourceEntity(74U);
    msg.setDestination(14439U);
    msg.setDestinationEntity(30U);
    msg.flags = 166U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.477087957682813;
    tmp_msg_0.speed_units = 6U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9210151604048844;
    tmp_msg_1.z_units = 72U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4066907942620367;
    msg.lon = 0.41259473142746483;
    msg.radius = 0.6333896505694954;

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
    msg.setTimeStamp(0.02160416342994753);
    msg.setSource(6777U);
    msg.setSourceEntity(245U);
    msg.setDestination(38751U);
    msg.setDestinationEntity(211U);
    msg.flags = 233U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8206414250699696;
    tmp_msg_0.speed_units = 199U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7223905057312057;
    tmp_msg_1.z_units = 226U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.587776028976367;
    msg.lon = 0.5553663312563076;
    msg.radius = 0.38481161689317633;

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
    msg.setTimeStamp(0.5078533438015526);
    msg.setSource(39986U);
    msg.setSourceEntity(204U);
    msg.setDestination(20937U);
    msg.setDestinationEntity(115U);
    msg.flags = 108U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9406841493094792;
    tmp_msg_0.speed_units = 215U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9290349444294483;
    tmp_msg_1.z_units = 65U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.860464584671643;
    msg.lon = 0.8633386137978302;
    msg.radius = 0.7081587749804235;

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
    msg.setTimeStamp(0.3390357814652658);
    msg.setSource(61043U);
    msg.setSourceEntity(235U);
    msg.setDestination(18112U);
    msg.setDestinationEntity(111U);
    msg.control_src = 54559U;
    msg.control_ent = 132U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 24U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7211358595257472;
    tmp_tmp_msg_0_0.speed_units = 99U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7084060977760199;
    tmp_tmp_msg_0_1.z_units = 225U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.24234629451558842;
    tmp_msg_0.lon = 0.31129519915911297;
    tmp_msg_0.radius = 0.9429208749621908;
    msg.reference.set(tmp_msg_0);
    msg.state = 45U;
    msg.proximity = 180U;

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
    msg.setTimeStamp(0.6719425787235321);
    msg.setSource(18501U);
    msg.setSourceEntity(121U);
    msg.setDestination(62895U);
    msg.setDestinationEntity(115U);
    msg.control_src = 34471U;
    msg.control_ent = 225U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 186U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.10710048586650567;
    tmp_tmp_msg_0_0.speed_units = 47U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8853318621555563;
    tmp_tmp_msg_0_1.z_units = 19U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.04891616541004251;
    tmp_msg_0.lon = 0.7311850728481895;
    tmp_msg_0.radius = 0.39539003440365184;
    msg.reference.set(tmp_msg_0);
    msg.state = 33U;
    msg.proximity = 186U;

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
    msg.setTimeStamp(0.274296302999975);
    msg.setSource(34007U);
    msg.setSourceEntity(205U);
    msg.setDestination(6576U);
    msg.setDestinationEntity(113U);
    msg.control_src = 35657U;
    msg.control_ent = 212U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 104U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3846424372965852;
    tmp_tmp_msg_0_0.speed_units = 8U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9599978891222689;
    tmp_tmp_msg_0_1.z_units = 202U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.10146180834531104;
    tmp_msg_0.lon = 0.6754868331233899;
    tmp_msg_0.radius = 0.27568822548609917;
    msg.reference.set(tmp_msg_0);
    msg.state = 181U;
    msg.proximity = 6U;

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
    msg.setTimeStamp(0.4341600908498482);
    msg.setSource(30501U);
    msg.setSourceEntity(132U);
    msg.setDestination(21251U);
    msg.setDestinationEntity(119U);
    msg.ax_cmd = 0.9084875970372798;
    msg.ay_cmd = 0.9425013415377247;
    msg.az_cmd = 0.023432510137581186;
    msg.ax_des = 0.4844039771494545;
    msg.ay_des = 0.5512699767625178;
    msg.az_des = 0.22925550026024377;
    msg.virt_err_x = 0.05948713691192653;
    msg.virt_err_y = 0.8956590999191028;
    msg.virt_err_z = 0.9052113412600934;
    msg.surf_fdbk_x = 0.4870705458710731;
    msg.surf_fdbk_y = 0.6743100279015514;
    msg.surf_fdbk_z = 0.692084087654585;
    msg.surf_unkn_x = 0.3776904382294878;
    msg.surf_unkn_y = 0.16911925443640852;
    msg.surf_unkn_z = 0.2019402786520238;
    msg.ss_x = 0.641724410656966;
    msg.ss_y = 0.31244202459565684;
    msg.ss_z = 0.6595482716760481;

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
    msg.setTimeStamp(0.48397893977075856);
    msg.setSource(61889U);
    msg.setSourceEntity(132U);
    msg.setDestination(21159U);
    msg.setDestinationEntity(61U);
    msg.ax_cmd = 0.6290236606543077;
    msg.ay_cmd = 0.6598184697286167;
    msg.az_cmd = 0.8083413739722649;
    msg.ax_des = 0.35575168729876416;
    msg.ay_des = 0.8633718621562574;
    msg.az_des = 0.4232342864316997;
    msg.virt_err_x = 0.34288559125737983;
    msg.virt_err_y = 0.43567418948988756;
    msg.virt_err_z = 0.6363648406544014;
    msg.surf_fdbk_x = 0.6942484816741802;
    msg.surf_fdbk_y = 0.9128373254506085;
    msg.surf_fdbk_z = 0.6453645047269534;
    msg.surf_unkn_x = 0.19986780174489416;
    msg.surf_unkn_y = 0.6784383220131043;
    msg.surf_unkn_z = 0.33319913936886425;
    msg.ss_x = 0.07989927494871885;
    msg.ss_y = 0.6179278195896475;
    msg.ss_z = 0.5129840405006469;

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
    msg.setTimeStamp(0.28276744430278866);
    msg.setSource(22146U);
    msg.setSourceEntity(52U);
    msg.setDestination(14464U);
    msg.setDestinationEntity(243U);
    msg.ax_cmd = 0.9305209711213429;
    msg.ay_cmd = 0.275672080313521;
    msg.az_cmd = 0.6551585332783493;
    msg.ax_des = 0.21520966513871942;
    msg.ay_des = 0.38628395631767054;
    msg.az_des = 0.29894476118616176;
    msg.virt_err_x = 0.22819267610350202;
    msg.virt_err_y = 0.462288192196333;
    msg.virt_err_z = 0.39801157019603717;
    msg.surf_fdbk_x = 0.6043350295723238;
    msg.surf_fdbk_y = 0.09343005389569359;
    msg.surf_fdbk_z = 0.8905797282481335;
    msg.surf_unkn_x = 0.7445475325863297;
    msg.surf_unkn_y = 0.9646612738767205;
    msg.surf_unkn_z = 0.8740075895975771;
    msg.ss_x = 0.05335358222623676;
    msg.ss_y = 0.5578288650189033;
    msg.ss_z = 0.4531723641293045;

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
    msg.setTimeStamp(0.009276334964861688);
    msg.setSource(12361U);
    msg.setSourceEntity(17U);
    msg.setDestination(54484U);
    msg.setDestinationEntity(21U);
    msg.s_id.assign("DZGBIQJNYVEFQDOMJWJESHLHKRSQSFYDEAPUTLRWMHABDZFTVPBRXNXPJTXZGXYNTGJDYFSFQPDKHZZSRBMQJMCSFNQYZKXRCONUANWCGKNMJSUZKWWNDGHGGKFDJQRWTIOQOLACBICGROVVWRXEQEASAVPEVHKMPTSYMHBXPEKYLVAYLCMCPNBEGTUIBWLKSIVWPMARUFATILUUOOIDNCIEXZ");
    msg.dist = 0.8506261289729253;
    msg.err = 0.2021810181828212;
    msg.ctrl_imp = 0.3359057136110145;
    msg.rel_dir_x = 0.015486945357696014;
    msg.rel_dir_y = 0.11906908877456301;
    msg.rel_dir_z = 0.020067072290977928;
    msg.err_x = 0.6274872031261679;
    msg.err_y = 0.7240780476540567;
    msg.err_z = 0.4826304403828896;
    msg.rf_err_x = 0.029931174203248645;
    msg.rf_err_y = 0.8614369383161652;
    msg.rf_err_z = 0.33672972198535656;
    msg.rf_err_vx = 0.026345585166839935;
    msg.rf_err_vy = 0.8249733138376418;
    msg.rf_err_vz = 0.8460186799858678;
    msg.ss_x = 0.37254722168864873;
    msg.ss_y = 0.1448505236095936;
    msg.ss_z = 0.7408196487787437;
    msg.virt_err_x = 0.2878273106258502;
    msg.virt_err_y = 0.7484865959584773;
    msg.virt_err_z = 0.11464518362308551;

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
    msg.setTimeStamp(0.13489399718912554);
    msg.setSource(57719U);
    msg.setSourceEntity(12U);
    msg.setDestination(26178U);
    msg.setDestinationEntity(163U);
    msg.s_id.assign("HDTVCMXOTHTQFEPOAREXITKCNUAYMVTSHWIXBOHKEJIIOODQMJLIEHTCVXNBJUYQBLDOUSRELFVSYRYAFRMSQUGRNJDTFKPVTPAEOSXNEPHLUEKIAKWWMLGMHQVZWYCMWCZWTPVQCCGSYNOGPCNZ");
    msg.dist = 0.11955175016833275;
    msg.err = 0.7137832345060883;
    msg.ctrl_imp = 0.6145165678586207;
    msg.rel_dir_x = 0.20213591541607911;
    msg.rel_dir_y = 0.15607608676644924;
    msg.rel_dir_z = 0.6884238991665949;
    msg.err_x = 0.5506504928177184;
    msg.err_y = 0.41753893299566225;
    msg.err_z = 0.718694812749628;
    msg.rf_err_x = 0.7735690998300565;
    msg.rf_err_y = 0.9452357587770575;
    msg.rf_err_z = 0.07035630305888763;
    msg.rf_err_vx = 0.7056280888628944;
    msg.rf_err_vy = 0.9144364037112576;
    msg.rf_err_vz = 0.6571248160777642;
    msg.ss_x = 0.45725042855916;
    msg.ss_y = 0.21839419384494407;
    msg.ss_z = 0.5953058336478039;
    msg.virt_err_x = 0.5081939693238632;
    msg.virt_err_y = 0.12039354356559473;
    msg.virt_err_z = 0.4807098594563385;

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
    msg.setTimeStamp(0.551748390203359);
    msg.setSource(17532U);
    msg.setSourceEntity(86U);
    msg.setDestination(2236U);
    msg.setDestinationEntity(176U);
    msg.s_id.assign("CVXCRDCNVZMXKUJAOIQYOFWQVIPKESZEIKIVFHWPAJLGPJEMBQGOZGCLFOLWSRZRDAQMAOPHELMRB");
    msg.dist = 0.19827337479039775;
    msg.err = 0.2789196266831677;
    msg.ctrl_imp = 0.38763505736175496;
    msg.rel_dir_x = 0.29087043591839234;
    msg.rel_dir_y = 0.797590691436028;
    msg.rel_dir_z = 0.7789292542530856;
    msg.err_x = 0.9543009979573434;
    msg.err_y = 0.5180748863783923;
    msg.err_z = 0.3008742617806007;
    msg.rf_err_x = 0.9693493716442442;
    msg.rf_err_y = 0.461183826113431;
    msg.rf_err_z = 0.24221629284083168;
    msg.rf_err_vx = 0.019165680679859243;
    msg.rf_err_vy = 0.8278059057850436;
    msg.rf_err_vz = 0.37193187371105785;
    msg.ss_x = 0.7142485299568384;
    msg.ss_y = 0.0756962511721525;
    msg.ss_z = 0.39664457727769753;
    msg.virt_err_x = 0.08082694865431461;
    msg.virt_err_y = 0.9117016616814959;
    msg.virt_err_z = 0.6751555739668611;

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
    msg.setTimeStamp(0.1989572153552419);
    msg.setSource(7651U);
    msg.setSourceEntity(24U);
    msg.setDestination(35107U);
    msg.setDestinationEntity(208U);
    msg.timeout = 11457U;
    msg.rpm = 0.5226687516522528;
    msg.direction = 102U;
    msg.custom.assign("VPZAVIUULHLGFLEXTWBKCDTREWASXGTXZGLYICQXPNLXPLGLAEEKFMBZYEHDPFHJEIOOJQPNJLCVEDMLAFKTQMUYPQOSVAGSWIDPXPYCDOKSPLSYUQZRJJRBSROAOBIBAXVUWHJYERZKNRCHOFNPKSZBCTUAHKHIMXMJUOYGNWDMFZYHQYSMIKZFWBTTTURVIKUGGWOZMXUFQQV");

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
    msg.setTimeStamp(0.7367734220131689);
    msg.setSource(4187U);
    msg.setSourceEntity(47U);
    msg.setDestination(28087U);
    msg.setDestinationEntity(71U);
    msg.timeout = 47562U;
    msg.rpm = 0.4913238036570331;
    msg.direction = 42U;
    msg.custom.assign("DBUPITMYWWKKRUTGUPOBHGLBJKHQRFCASOEAYDNVGMPLYGHZTOZ");

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
    msg.setTimeStamp(0.31660550788996);
    msg.setSource(3275U);
    msg.setSourceEntity(76U);
    msg.setDestination(45314U);
    msg.setDestinationEntity(47U);
    msg.timeout = 45513U;
    msg.rpm = 0.8893729851512931;
    msg.direction = 139U;
    msg.custom.assign("VGBGTBDPLYOMHTXPCCYHMAHDIBQGNRJQENYMYVCUAATOHHFWZTQHOYKSUFTRBEIQROWIFJPDFKUAKGFDMQSYPGSPBWDINCRPFUHLSEYIWENBHAKOOZLXOJYPYLYSJLPXAJIWIKNINKSZZBAZCNZKMMELTDRRXJVFCDPLQJKEGPVSCXLEXRRNOQWCLSEWVFGDMCAXSTZZBEIAKVQDRXJENFXXNMVMZTUJFMTUHOGWUVCOGWKRBUWUVSDVGLJH");

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
    msg.setTimeStamp(0.3300858975675891);
    msg.setSource(22407U);
    msg.setSourceEntity(0U);
    msg.setDestination(8835U);
    msg.setDestinationEntity(141U);
    msg.formation_name.assign("XUUQQZZPCERUSRLEYSTJKVKITFNJNOWFCHMGTEZAHJYPTGYDDFFPGNDJDROPDBOOQUTYCZMHXDVVZHBXRWLMLMCTSHZERIQCWYYFVPLMTBKNENJBSQPVMESWGJWSDMKGTXXYSILNLTYFUSCAJVURBKRROHVAGBKXAVHTBGC");
    msg.type = 231U;
    msg.op = 65U;
    msg.group_name.assign("YZJFYLBECJZWQRBLAISIXIKEVCZHRAILPHPJSOWEZQPHGAQEJCZWUGOTUVQDZDEDTARRDTPOUMAWLZARVOHDLDQLKERTQQLMXL");
    msg.plan_id.assign("UOHADHXCBOEEPNKTVCZEGTI");
    msg.description.assign("RALHTZWKQKZOISDFYCEVNNCIMALFONFUQJDXEUOULYINVPMSAXBNBOZXPRTZMKCGWJLSEFYNGXVTRHKNRKUCDYBGTAEODTDPXWJOCPWSYCFPJNOLPTJDSSZCVIVRDETISAKSGZQRBPHZLFKBYFSUMHEAOPJCQKRBGTILVRJXQBCNMHPGQAVGJHFYHBUWLORLB");
    msg.reference_frame = 32U;
    msg.leader_bank_lim = 0.23430290764715445;
    msg.leader_speed_min = 0.48703618323494435;
    msg.leader_speed_max = 0.936195251779181;
    msg.leader_alt_min = 0.8309498946603334;
    msg.leader_alt_max = 0.5431481144242515;
    msg.pos_sim_err_lim = 0.9169727941740826;
    msg.pos_sim_err_wrn = 0.1433184133546439;
    msg.pos_sim_err_timeout = 54456U;
    msg.converg_max = 0.46876379720043415;
    msg.converg_timeout = 35420U;
    msg.comms_timeout = 19323U;
    msg.turb_lim = 0.9765680705546824;
    msg.custom.assign("RPTSOWZNPCZKKIZEKMHBRQZTSRZXKLRRGTDWQUT");

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
    msg.setTimeStamp(0.11079772357669093);
    msg.setSource(45766U);
    msg.setSourceEntity(84U);
    msg.setDestination(25041U);
    msg.setDestinationEntity(80U);
    msg.formation_name.assign("DHSZIPURPZSYQXNKXPXJBHZHAALLBUVFRMRIYWBJMVRLGFISVLNKSQAHNZKTPQGXJHTJKPJNJGOVYUGVUCTMUBUXYAYQXGFDIKCTOMIWYOIHNNYTYLJCKDEPZCFHJDL");
    msg.type = 38U;
    msg.op = 245U;
    msg.group_name.assign("PXYTBWGLRDEPDMQKZVJJPVZQQZRCEACQNXVUGRETYCSDYVUKFVXTQSCWSXBQGMMGPERYIGRYHJYFSGJNEDULJRRNTNBNHWCBIELBVX");
    msg.plan_id.assign("BTQBIDVXROJVQHSKRGNKDKZIFATSLJHRYKQWHXSYZXTUAVXQPSUUQWLWEGECLHHCO");
    msg.description.assign("YJGIXCVLFUKZDMEWUSFXSGTGBPJPWIDN");
    msg.reference_frame = 6U;
    msg.leader_bank_lim = 0.6130850713232525;
    msg.leader_speed_min = 0.35193192300498843;
    msg.leader_speed_max = 0.061365118651703465;
    msg.leader_alt_min = 0.9296901525828746;
    msg.leader_alt_max = 0.42015642447629564;
    msg.pos_sim_err_lim = 0.4469112997210848;
    msg.pos_sim_err_wrn = 0.196181712814526;
    msg.pos_sim_err_timeout = 42029U;
    msg.converg_max = 0.5606941038801765;
    msg.converg_timeout = 10678U;
    msg.comms_timeout = 39096U;
    msg.turb_lim = 0.8589315677557509;
    msg.custom.assign("EBNRJBXPMWWLPJKOZINMXUUBWDKHYFNJTIRINSFTMPPGLWYKLYOVGUHZFQDLEJVEZSSJZAVYMORHTUDEZYFWKMRMFOYDXHXDNTTIZCNMJYVDJKVBCCDNMBFGCBXHIQZHZEZKJIBLUNQLVDCXHIWVVVMNGTOATPYHOEYPAFXUTQNIRSAREC");

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
    msg.setTimeStamp(0.4328565531820878);
    msg.setSource(981U);
    msg.setSourceEntity(80U);
    msg.setDestination(9164U);
    msg.setDestinationEntity(169U);
    msg.formation_name.assign("EJDWMDXUDEBOVJKOPJBNFWPDQUTSMCZIEAOXBJEGFFXJXPILABZZTBCNJRYNHFRCIWRQBSATPYFRYVXYKXUFWTEYZGHSWFLGKBVUAUGKMTTGXONLOIHBUEXZIQSMK");
    msg.type = 127U;
    msg.op = 44U;
    msg.group_name.assign("ALHSYPQUVUFIQKDDNDNUONWEZYUISHZLZOCAUXILYPNLZMPKNGDFASVHYQMBONOQHOBZBWUPCTMEX");
    msg.plan_id.assign("JNFKYHZPBZFPAYYRQWCHNMMZYBDTAREKOCAGBLUKOMNTUCJ");
    msg.description.assign("MIKHNUTDXEHRYFVDOWVDWCVGAJMAUPOPFSXZREDASIGEFRIRNWYKTVMRQBZEGQRXMDBOPHLPRRUPDJJNCIOFCHDQITKLINHREGMXSVZPICUSSLBSJCQDONVJNOUJYFQGQSABUZBPTTWMHKZVVHAMANBZDUFNYFSOH");
    msg.reference_frame = 10U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5358U;
    tmp_msg_0.off_x = 0.04317444889676891;
    tmp_msg_0.off_y = 0.6994251735419319;
    tmp_msg_0.off_z = 0.46732353089911416;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.40394395916724657;
    msg.leader_speed_min = 0.03530188000712742;
    msg.leader_speed_max = 0.6256773239367971;
    msg.leader_alt_min = 0.24166540250154445;
    msg.leader_alt_max = 0.06387343561468217;
    msg.pos_sim_err_lim = 0.5141978709180032;
    msg.pos_sim_err_wrn = 0.9408362545625762;
    msg.pos_sim_err_timeout = 12389U;
    msg.converg_max = 0.7275609222762166;
    msg.converg_timeout = 15651U;
    msg.comms_timeout = 61696U;
    msg.turb_lim = 0.600845743046001;
    msg.custom.assign("LNCFUBJALUWNKYZNUBPCBQREQXRJSDHGOOLFMUBTERPXPKGLBIJJTSYWIDJGYDLVPVNKAGKRKQHOKXIULHWOEBIDDHWCZEPPHGYTVOAVAEFBIRCNBWEQFZTJMDVW");

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
    msg.setTimeStamp(0.06619923571557462);
    msg.setSource(22571U);
    msg.setSourceEntity(210U);
    msg.setDestination(54390U);
    msg.setDestinationEntity(18U);
    msg.timeout = 53445U;
    msg.lat = 0.20484903682701705;
    msg.lon = 0.780307648339751;
    msg.z = 0.1508355390265116;
    msg.z_units = 125U;
    msg.speed = 0.34990092543668905;
    msg.speed_units = 92U;
    msg.custom.assign("YFLUOKIIGGNZHBYXNZEDOAXBTO");

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
    msg.setTimeStamp(0.4480975866778407);
    msg.setSource(2801U);
    msg.setSourceEntity(118U);
    msg.setDestination(32960U);
    msg.setDestinationEntity(129U);
    msg.timeout = 27284U;
    msg.lat = 0.5358931839184088;
    msg.lon = 0.4433348060715895;
    msg.z = 0.44806925293066036;
    msg.z_units = 143U;
    msg.speed = 0.3589218265486688;
    msg.speed_units = 29U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.09275417766793226;
    tmp_msg_0.y = 0.5617680331458509;
    tmp_msg_0.z = 0.16855733819132546;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UGQCVYUJVBFNSHFSNAJLRVXFJJYQLQKXHGTRFSAMLZWIKRQDINNKZELVUPTSQQECOIPQDPSEVFHIGDYAPRWVDLTYKAKTEBBVRBTJHGBZOWAOXEQPEQEPCNUWDEHWMKMIOXMMFMDSCCGLPFKWCJRNRAMDWHVJ");

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
    msg.setTimeStamp(0.9323797672100639);
    msg.setSource(30429U);
    msg.setSourceEntity(58U);
    msg.setDestination(53868U);
    msg.setDestinationEntity(208U);
    msg.timeout = 3135U;
    msg.lat = 0.5800440505905088;
    msg.lon = 0.5735954760207915;
    msg.z = 0.09995596670228402;
    msg.z_units = 128U;
    msg.speed = 0.009730192657647296;
    msg.speed_units = 32U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.05302724783676538;
    tmp_msg_0.y = 0.45959206653332196;
    tmp_msg_0.z = 0.9072972849801152;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JQPAHRYRMGIMXVZACYPLRSBTCVEELSZNRMEHPJXOUHIONIVYVRGFZTRLDBELELFDIXKVJQHVMPMWSMWBDGTPKDIKBFOWUZNAXECSDCJGBGATLZWYIOSSYDUUKOORCYVMQTYDCVKQUSUGZVWZMFERCGWBDHNNAFPFKZSVIPGAUQRQTEHTCUTHBLXJWMQKITTXJNPORFLPSCWQCIHNJOZGFOXQNZ");

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
    msg.setTimeStamp(0.5783939590513004);
    msg.setSource(56615U);
    msg.setSourceEntity(88U);
    msg.setDestination(60158U);
    msg.setDestinationEntity(133U);
    msg.op_mode = 210U;
    msg.error_count = 125U;
    msg.error_ents.assign("EEMWYVMYFPRJTPSVNHCNGWLUSOKDIJAXOOGWKRTRSWIARCUGLLFYTSBSQPQZBBSNJUDXJOXNVSLPDFPAMINUUWGFTEPRHWXKMCOYYCZBDXGZMLABJYOKTEDBANVIGSJOLKSROLCQHQEBOPAUXMTBQZPDAE");
    msg.maneuver_type = 60087U;
    msg.maneuver_stime = 0.2648018271201247;
    msg.maneuver_eta = 61229U;
    msg.control_loops = 277338771U;
    msg.flags = 92U;
    msg.last_error.assign("YFVTXPYAVROBZRBLWLDQWIDMUAEBTWDOBGTKMMDFCAIYYEKRLHZFOXKCIPUXJLXKADCSGIXVRVDNUVENSAGESYRFPPRCWLQULIRKOSEAZPBVWMFXFSJUBPMPCMSORQNHIHDAOQQKYHARYHVJWEEZFWTHGCGOTFNVXWPIMCZZTLGLDYPUTYTZQXDZMBNBTQZICGHJXDNQJOKKJNKXNOUSPMVCCFVHIKBJ");
    msg.last_error_time = 0.34453923652453033;

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
    msg.setTimeStamp(0.12289129720367242);
    msg.setSource(47286U);
    msg.setSourceEntity(254U);
    msg.setDestination(13667U);
    msg.setDestinationEntity(54U);
    msg.op_mode = 49U;
    msg.error_count = 182U;
    msg.error_ents.assign("GMVTNPZBNKCGXLMQYAB");
    msg.maneuver_type = 13776U;
    msg.maneuver_stime = 0.14212326545659348;
    msg.maneuver_eta = 4399U;
    msg.control_loops = 2571965346U;
    msg.flags = 62U;
    msg.last_error.assign("RROLIFBPOZYWAVIZKVGQQGLWHKVDCXMAWOMSVRPYBXMLEEKGCETDUHDYGIIMFNNAYCIJHBWOQCZVKKRUAYVUKWBXKNHOOCEOJFUAFQSZIFQNIASZBHGFRSTDDZJKPNMSLQEORPEPHXJUBQWHCNMXNNVTCOTQWZKBTSDUEUOEYYBRZLVJMYANGUXY");
    msg.last_error_time = 0.3885243941856331;

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
    msg.setTimeStamp(0.49901413819069884);
    msg.setSource(31155U);
    msg.setSourceEntity(132U);
    msg.setDestination(10562U);
    msg.setDestinationEntity(65U);
    msg.op_mode = 135U;
    msg.error_count = 15U;
    msg.error_ents.assign("GGWABNRRPSENFOGIBQRJRHPVGQTEEJORWXIMZPAWAEKCSEXWMTOENMQOAEQJHIXJNPTBZK");
    msg.maneuver_type = 51314U;
    msg.maneuver_stime = 0.3730983449071924;
    msg.maneuver_eta = 60172U;
    msg.control_loops = 3841193637U;
    msg.flags = 219U;
    msg.last_error.assign("TVJQQBCUGFBRTJEWOEGHZZENBQPMAEWPIMIEHYISUUXGHCXXGDQJIMDNINVFXYCWDZOIYLJFYLJXRUVVTNARARQJZOXAHVWPRUHPKCXELQDLUHVFQWSVCSZRNQZMHOTDNVNHTOAOBDGSRYSWIUAUMQTFDPYABUGLEBMGJMKXKEJTEVDMGB");
    msg.last_error_time = 0.23871468696011988;

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
    msg.setTimeStamp(0.44421446449747315);
    msg.setSource(29510U);
    msg.setSourceEntity(39U);
    msg.setDestination(8274U);
    msg.setDestinationEntity(79U);
    msg.type = 5U;
    msg.request_id = 37773U;
    msg.command = 43U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 10622U;
    tmp_msg_0.lat = 0.40334630808433647;
    tmp_msg_0.lon = 0.7874740926570026;
    tmp_msg_0.z = 0.7398957966657789;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.speed = 0.8612965038211396;
    tmp_msg_0.speed_units = 12U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.11988212202059334;
    tmp_tmp_msg_0_0.y = 0.06330662943351983;
    tmp_tmp_msg_0_0.z = 0.8175253919672036;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("JIAUTWITNCHIUGFKSOUAETWBNVLJPASZMYAHBPAWCSKDDIMFRVRLOKRBQACKRGPLSRHVNMJYGWESDBPWCWQRQYVCGULZYBOEGWAZCHKFUGJNIWLQXSHHEBYBTBNAPXUNZURTIGJNZMCNZCEKPXPOKUSDUDJPCEFYEVHVWEQAQMMLIUMGKDJZLTXXXDXOTKGWORXPFFAVTZIRNGXTOOMMLLLSMF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3607U;
    msg.info.assign("NTTEYWSCUNCKZLNGVUSTXR");

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
    msg.setTimeStamp(0.6148905688588459);
    msg.setSource(26663U);
    msg.setSourceEntity(201U);
    msg.setDestination(60378U);
    msg.setDestinationEntity(250U);
    msg.type = 244U;
    msg.request_id = 1380U;
    msg.command = 47U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 19188U;
    tmp_msg_0.lat = 0.48206660478875907;
    tmp_msg_0.lon = 0.49089187005687507;
    tmp_msg_0.z = 0.8991685694492706;
    tmp_msg_0.z_units = 172U;
    tmp_msg_0.speed = 0.9448186243302985;
    tmp_msg_0.speed_units = 249U;
    tmp_msg_0.duration = 24466U;
    tmp_msg_0.radius = 0.9115565577743556;
    tmp_msg_0.flags = 150U;
    tmp_msg_0.custom.assign("SQWLMPUZZBBUAOOFR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52486U;
    msg.info.assign("AFRVGGCAMZIWPYCJKJTPMFNMUSZGZJQUHTIGTBQCREQGAQRNMRQEKUEXVKZIRSVWIWLUQRONZDHDDUXBFNPCDHJTBIXNSPQZVCARRZOOSWJMHBUGYIAGXEKOFOVHUOTPPTEOYABLECMKPNDTXLNASMFDDPWYCJTIAEITXWYBXPZVMDKEOGHRVNLFLIJWDYOSLJWEQFUXYBLBVGCWSFXBFIOZAHYSEXFCVJQJBNLMYCKDGAHKQKSVYURTHNMSUL");

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
    msg.setTimeStamp(0.6890638925240447);
    msg.setSource(23573U);
    msg.setSourceEntity(229U);
    msg.setDestination(37999U);
    msg.setDestinationEntity(92U);
    msg.type = 149U;
    msg.request_id = 64366U;
    msg.command = 25U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 6194U;
    tmp_msg_0.name.assign("OFKHJOZUXDPRSJUCBXFAYDKOBJIAUPZJPSYMKCVRQAVVITTUBCEKWENYGGNOJWBTLJUZYLGWQGNBXVEMRRLMSVPVAZXWXVJJLFYSIGURZADVHIDTKMX");
    tmp_msg_0.custom.assign("RAXSQMYYDEFUPSDWUWAOFNJJCKOIRBMYLVJRJTYZXBIVVYFZWOSNBCOUTNIVVESVOFKSITJAOZFDNXQXPETVLLMAQTLAGJAYVSGHETVWWZKBBCDPDZUBBLCNQUKCEZUMGUJYGBTRRMPPIRMCMEALWHDTWLUHDXPSKONXQXZBCSMZREYWNZHDNIWQXMYFEILJCXAPKIWMPNNQOHKK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41628U;
    msg.info.assign("JWUBPPNTNCIDXYYZAWYOOETBLKFJVPVNAMADFNGXPEMMUBGCLQ");

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
    msg.setTimeStamp(0.36606439971530214);
    msg.setSource(52426U);
    msg.setSourceEntity(222U);
    msg.setDestination(24858U);
    msg.setDestinationEntity(84U);
    msg.command = 88U;
    msg.entities.assign("OZSOAEWCXWZRTFRBVKHCILGSMBVXWVEUHPTSSZGADPQRJMEDODBQDDWVIPHXIPNXFONZPEJCJMAZWKFUZMZDLJIOWLGXYW");

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
    msg.setTimeStamp(0.8056456612873627);
    msg.setSource(63059U);
    msg.setSourceEntity(104U);
    msg.setDestination(54040U);
    msg.setDestinationEntity(88U);
    msg.command = 97U;
    msg.entities.assign("FJRVIIGXNCRADVSMHCCGEDDPJRCPMPOQFYTOBMKDCRXGZZRNITINPNYPFKHXIYWTPVNNLFTHQHGYYJXEKTDTWBKQMKXESBDWJPZEDBOXZXUWHORUDOOUAZLGDFWQ");

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
    msg.setTimeStamp(0.14043013322546694);
    msg.setSource(4361U);
    msg.setSourceEntity(113U);
    msg.setDestination(48399U);
    msg.setDestinationEntity(75U);
    msg.command = 180U;
    msg.entities.assign("LYHPEFJXPGCGDTVBWHMQRAJAIWOSOQNNVLIZXJTHNRQDMTUARJFOSXNKUTFPUOAMXLEFHDMCSKOCIVZZBUDZTGPKLBYZDSBJVONNIDQEZWBFZIEUISBWQSQYYAOMVJKCBIGXXLHIKNFIRKNVAKCOAHXGLHHRGRJSACDERGNYMAVGFYRXPUBWJDTVCGHBAEUWC");

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
    msg.setTimeStamp(0.021064623895297174);
    msg.setSource(10962U);
    msg.setSourceEntity(220U);
    msg.setDestination(44916U);
    msg.setDestinationEntity(133U);
    msg.mcount = 219U;
    msg.mnames.assign("USHRLNVFPQKHKDGXKZDDEORHUNWMSYWCGLWQJYROKFOGFPEDXXTICHJBGAAUMUHBYPWEUIBHMDNNEDA");
    msg.ecount = 210U;
    msg.enames.assign("VOBESFPJAKOYFLTS");
    msg.ccount = 93U;
    msg.cnames.assign("WVTICNWJEDXBMFIKJFLUHYPUBEGJTHUIESNNOQUMHKDVJAECOTIZMOYAWXMFZZOQYARJQWKIULZVYPTAYZLEQEVOGXLSMYFXERKTBSWOHFZYQRKAOALYASMNLSQFHCTWBKPZOIFUTACDXPCJHLPQXDDBNVNBGCBGQICPRGVDMLIYVRZQDJMHBTGMNVUCWXWEGDKFWUNWCZFRUGJOIPBSSTUHHDNGJXS");
    msg.last_error.assign("MPMNGOCEAAIFHYBOODDZBVZLRCEGEXQRAGZJWDKUPMFEBZYSRXTIHDLMFCFDIPKBUGNXJOYRCZSMVYJPWQNVYLDHSNAEJQVKLATOKNWWGSVFTJPSXOJKF");
    msg.last_error_time = 0.7571719116070383;

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
    msg.setTimeStamp(0.18738877024133294);
    msg.setSource(45014U);
    msg.setSourceEntity(245U);
    msg.setDestination(58988U);
    msg.setDestinationEntity(60U);
    msg.mcount = 122U;
    msg.mnames.assign("QHWVMOYHBXVPJZAPBGZMBLBKPFTAPEBCEOVTCPDYDZGQBLTRYAUINDWNFENQEBIMXHZKBISXGDLJYNHAFIOMOUEDTVZTBMSBAGUEJRQJXZGTCDHRVCTERVLFRMLDAKOVLGFNXNWURXSJDNOJRWVIGKSGTYFGYERMTPWLEAQPCOCYXWHXOG");
    msg.ecount = 123U;
    msg.enames.assign("LXNBDUPYDMTMMKLEBIMXJQMMNGKNEFCULGRLKHGPDXRYVKJEQTWSLNPLNRPTFKTXTSUZMXAVAUMSSVYZIRWTOJDNLHTDFYJVTKAZQNYFCIATCQFQSOZUVAPABZGTOSDKZZPODBDFWAOICVHWGCLPHVSJVEBECHJPUWFYXSBQUCOOYXCKGYUDWNJLWQMFMCABWOZXGEXQRRRIOQQXSHJCHFUJKNPDYZHIANRIEKBRHBJYSHEPOWGBIIA");
    msg.ccount = 66U;
    msg.cnames.assign("ZQKAGDJOYNUQMSEAEQVTYIVHBZDFDXMQCTAFELZRBNGCXCQHBWKSGMPJBTLIRNVISIUWLBQRHDPURNVDUIICAXOPVFAHOYCTPEQCLDWFMWFPPQJTRKBVSYKHTAREYLNSMTCYJNOIAMXGSWVFWYPWECBLDSSEXRQYZYOJFZLOVSPDPMIBUGZGOGUMGBNUKHRPNVZLHVOJUQEGJEOHBDGZTTCSKWJINHWU");
    msg.last_error.assign("CTUHDLHOSWYCDYWSOJKVDVGKRXLYQWDONRBQJUUVWIMWTAFEG");
    msg.last_error_time = 0.8249661907691862;

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
    msg.setTimeStamp(0.3992786879547926);
    msg.setSource(39354U);
    msg.setSourceEntity(135U);
    msg.setDestination(17443U);
    msg.setDestinationEntity(231U);
    msg.mcount = 222U;
    msg.mnames.assign("GPHOKXHVWGIZBFLTDUMJIETQUWARQDDCEGCKKCKAQHLIFNVWDXNTWYTIJDREFLLFRIUQHQMFXSONEXHVEFFSHQPMGQKOOZNUNFFSQOSPAJA");
    msg.ecount = 172U;
    msg.enames.assign("ICPLVOMURMWBXSVADXNYZYYQTBIHZWBTJBWBXDPYCNILFRHTJELRBRZGADJLALGCVSJDNJEJGCQQOTVUWYYOADSEIH");
    msg.ccount = 132U;
    msg.cnames.assign("UHWQZZHSRVHNYXZGQQSLHBBFBIULRXHTGOGULFOXJBPCDSIAWOKPCPNMVUHEIDRTLATKGWMDBIYVJMNNXMYQUFTANZKYZMTDUFCWQDVUJBSYRAPSQJJMJVFCLYPWDUZNKEDNGYIKEQFGRKMWHSQGXBZZSOCNBQYEFWZHSIXDKNYCVJFCKAWOHMARKGOTUYBVESWETHVPARCWTLDRTXCQACJPAGVRPELUJXIMJ");
    msg.last_error.assign("ZRRDVBLLSWFDDIIOYGUZIBETLCMOAQQYRJHCGKCZAXBTXFUUKLVHYUWCXJDUQTZXRRAS");
    msg.last_error_time = 0.609787275784758;

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
    msg.setTimeStamp(0.19356055511187686);
    msg.setSource(54273U);
    msg.setSourceEntity(140U);
    msg.setDestination(39609U);
    msg.setDestinationEntity(229U);
    msg.mask = 7U;
    msg.max_depth = 0.6321420330186441;
    msg.min_altitude = 0.8520227823519212;
    msg.max_altitude = 0.8378628515784599;
    msg.min_speed = 0.06884905846935341;
    msg.max_speed = 0.6930174140461214;
    msg.max_vrate = 0.8332576665036624;
    msg.lat = 0.9008134072693614;
    msg.lon = 0.6899287893989015;
    msg.orientation = 0.7298199893387991;
    msg.width = 0.7710771484159551;
    msg.length = 0.7112762907030056;

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
    msg.setTimeStamp(0.12373477888735163);
    msg.setSource(45034U);
    msg.setSourceEntity(64U);
    msg.setDestination(9859U);
    msg.setDestinationEntity(33U);
    msg.mask = 189U;
    msg.max_depth = 0.07287692939623647;
    msg.min_altitude = 0.6392563904829303;
    msg.max_altitude = 0.10908318942245665;
    msg.min_speed = 0.22635838519370244;
    msg.max_speed = 0.9239835536916707;
    msg.max_vrate = 0.5991408472404844;
    msg.lat = 0.7752743264722383;
    msg.lon = 0.5136377577988821;
    msg.orientation = 0.5131069650253759;
    msg.width = 0.8655871209621533;
    msg.length = 0.09102621639941488;

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
    msg.setTimeStamp(0.7414163909047193);
    msg.setSource(21341U);
    msg.setSourceEntity(97U);
    msg.setDestination(42976U);
    msg.setDestinationEntity(139U);
    msg.mask = 125U;
    msg.max_depth = 0.4336934415673531;
    msg.min_altitude = 0.6391686110320869;
    msg.max_altitude = 0.8977844109564491;
    msg.min_speed = 0.5150936044504937;
    msg.max_speed = 0.47425954591450226;
    msg.max_vrate = 0.958015779402262;
    msg.lat = 0.8321292029255216;
    msg.lon = 0.7441606355015445;
    msg.orientation = 0.18084207972277533;
    msg.width = 0.7068305687226727;
    msg.length = 0.4823774152844207;

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
    msg.setTimeStamp(0.5643408587996086);
    msg.setSource(13080U);
    msg.setSourceEntity(212U);
    msg.setDestination(24969U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.43154461204097605);
    msg.setSource(4139U);
    msg.setSourceEntity(143U);
    msg.setDestination(15634U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.33667040873487397);
    msg.setSource(1578U);
    msg.setSourceEntity(236U);
    msg.setDestination(1976U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.03249079436862101);
    msg.setSource(43167U);
    msg.setSourceEntity(249U);
    msg.setDestination(50912U);
    msg.setDestinationEntity(173U);
    msg.duration = 37292U;

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
    msg.setTimeStamp(0.7471819181608857);
    msg.setSource(17032U);
    msg.setSourceEntity(204U);
    msg.setDestination(53464U);
    msg.setDestinationEntity(45U);
    msg.duration = 38365U;

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
    msg.setTimeStamp(0.25975319254952056);
    msg.setSource(11420U);
    msg.setSourceEntity(68U);
    msg.setDestination(589U);
    msg.setDestinationEntity(128U);
    msg.duration = 29746U;

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
    msg.setTimeStamp(0.7683680526119705);
    msg.setSource(32132U);
    msg.setSourceEntity(25U);
    msg.setDestination(648U);
    msg.setDestinationEntity(237U);
    msg.enable = 29U;
    msg.mask = 301915225U;
    msg.scope_ref = 4172043019U;

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
    msg.setTimeStamp(0.8521423293198899);
    msg.setSource(9532U);
    msg.setSourceEntity(34U);
    msg.setDestination(12499U);
    msg.setDestinationEntity(13U);
    msg.enable = 70U;
    msg.mask = 461182095U;
    msg.scope_ref = 1402172482U;

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
    msg.setTimeStamp(0.9544070011429883);
    msg.setSource(9593U);
    msg.setSourceEntity(162U);
    msg.setDestination(10020U);
    msg.setDestinationEntity(69U);
    msg.enable = 66U;
    msg.mask = 2842156481U;
    msg.scope_ref = 1732449592U;

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
    msg.setTimeStamp(0.43952183448944504);
    msg.setSource(4845U);
    msg.setSourceEntity(31U);
    msg.setDestination(62355U);
    msg.setDestinationEntity(187U);
    msg.medium = 126U;

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
    msg.setTimeStamp(0.5873223720833107);
    msg.setSource(11243U);
    msg.setSourceEntity(130U);
    msg.setDestination(33634U);
    msg.setDestinationEntity(240U);
    msg.medium = 200U;

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
    msg.setTimeStamp(0.19455457441596402);
    msg.setSource(16964U);
    msg.setSourceEntity(205U);
    msg.setDestination(6338U);
    msg.setDestinationEntity(80U);
    msg.medium = 132U;

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
    msg.setTimeStamp(0.4354535859781058);
    msg.setSource(33610U);
    msg.setSourceEntity(169U);
    msg.setDestination(1530U);
    msg.setDestinationEntity(112U);
    msg.value = 0.6153802717456989;
    msg.type = 248U;

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
    msg.setTimeStamp(0.860073973985228);
    msg.setSource(1878U);
    msg.setSourceEntity(99U);
    msg.setDestination(61695U);
    msg.setDestinationEntity(61U);
    msg.value = 0.2847921451884833;
    msg.type = 111U;

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
    msg.setTimeStamp(0.022759092325636332);
    msg.setSource(30384U);
    msg.setSourceEntity(0U);
    msg.setDestination(62260U);
    msg.setDestinationEntity(40U);
    msg.value = 0.5562052218906103;
    msg.type = 229U;

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
    msg.setTimeStamp(0.784175768521908);
    msg.setSource(8936U);
    msg.setSourceEntity(164U);
    msg.setDestination(33079U);
    msg.setDestinationEntity(213U);
    msg.possimerr = 0.437198859820775;
    msg.converg = 0.15016789246293416;
    msg.turbulence = 0.6807226280141825;
    msg.possimmon = 180U;
    msg.commmon = 148U;
    msg.convergmon = 109U;

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
    msg.setTimeStamp(0.865076285475361);
    msg.setSource(7280U);
    msg.setSourceEntity(159U);
    msg.setDestination(17227U);
    msg.setDestinationEntity(234U);
    msg.possimerr = 0.26191838020123004;
    msg.converg = 0.5334409562883361;
    msg.turbulence = 0.24054402212479675;
    msg.possimmon = 57U;
    msg.commmon = 230U;
    msg.convergmon = 22U;

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
    msg.setTimeStamp(0.3074961887971509);
    msg.setSource(8919U);
    msg.setSourceEntity(216U);
    msg.setDestination(62229U);
    msg.setDestinationEntity(186U);
    msg.possimerr = 0.727306265301536;
    msg.converg = 0.8901750709189449;
    msg.turbulence = 0.3943655119783206;
    msg.possimmon = 122U;
    msg.commmon = 192U;
    msg.convergmon = 207U;

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
    msg.setTimeStamp(0.9089785551425255);
    msg.setSource(50939U);
    msg.setSourceEntity(76U);
    msg.setDestination(65250U);
    msg.setDestinationEntity(115U);
    msg.autonomy = 252U;
    msg.mode.assign("KIMSVJNVDVXJUHDXDNRQGUKSKEOBPZZHMAMKEUKKJWSUIJVWERMPTGZBQVCNPTYBJPLYMOUVNHGXFEZLQXYMRDFQEAYSLDTTJGSNVWMGYQWYTIJWBESLCDTAZJRYHUQMWCNBKGBOVZFLNTICTUPHPMAOVBUXOQZIERRGZRFBHRWWPPXUHYIFWOBEZI");

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
    msg.setTimeStamp(0.3048191150019164);
    msg.setSource(35548U);
    msg.setSourceEntity(39U);
    msg.setDestination(10239U);
    msg.setDestinationEntity(168U);
    msg.autonomy = 154U;
    msg.mode.assign("BMHDAYFIGEFSQTMZRAEWYPLOXVZLCKJESYYZCNTQXWWMNQJUCGVOGXPTYNJMMQTWDLRIEGOZMIDFYXFPHVRQBMDKOICUVSKVIYRSZDUYBTAQHAIPQBNJCLWSAANXUDKGQXRGXFLMRFJCKGZRSUNQMOXLFSIYCPBATNQKW");

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
    msg.setTimeStamp(0.9846239293511748);
    msg.setSource(3902U);
    msg.setSourceEntity(130U);
    msg.setDestination(32924U);
    msg.setDestinationEntity(238U);
    msg.autonomy = 51U;
    msg.mode.assign("OMNYKQIDHMYKXLGKYOZATYLTYPZIACOHZAOBXEJWNKVSSIDFVVLRPHJQWJCJLGAXONUJGPLMRTJMSQWCQVKLHIMYJQKYBHTZCIVJYVSWVCENSAPIFXBBXENURGSDEUEHZIRONSZPKHECNOXFTLAXWSBCIKBBEFWPDDWXNPZZLJS");

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
    msg.setTimeStamp(0.180268806021869);
    msg.setSource(44636U);
    msg.setSourceEntity(76U);
    msg.setDestination(44478U);
    msg.setDestinationEntity(168U);
    msg.type = 157U;
    msg.op = 51U;
    msg.possimerr = 0.12450520039775403;
    msg.converg = 0.5423743938948105;
    msg.turbulence = 0.9586542883816742;
    msg.possimmon = 100U;
    msg.commmon = 48U;
    msg.convergmon = 24U;

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
    msg.setTimeStamp(0.5481915390004288);
    msg.setSource(26410U);
    msg.setSourceEntity(158U);
    msg.setDestination(10010U);
    msg.setDestinationEntity(3U);
    msg.type = 82U;
    msg.op = 249U;
    msg.possimerr = 0.3392484438087626;
    msg.converg = 0.977493648506563;
    msg.turbulence = 0.8559016371244675;
    msg.possimmon = 162U;
    msg.commmon = 184U;
    msg.convergmon = 180U;

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
    msg.setTimeStamp(0.5895582261341601);
    msg.setSource(51212U);
    msg.setSourceEntity(80U);
    msg.setDestination(44754U);
    msg.setDestinationEntity(3U);
    msg.type = 78U;
    msg.op = 47U;
    msg.possimerr = 0.4904712332357636;
    msg.converg = 0.7871126099351323;
    msg.turbulence = 0.44497253130489667;
    msg.possimmon = 248U;
    msg.commmon = 188U;
    msg.convergmon = 207U;

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
    msg.setTimeStamp(0.9460655127627908);
    msg.setSource(20075U);
    msg.setSourceEntity(175U);
    msg.setDestination(22259U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.5368720738511749);
    msg.setSource(12295U);
    msg.setSourceEntity(174U);
    msg.setDestination(22994U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.3229846040433606);
    msg.setSource(42347U);
    msg.setSourceEntity(16U);
    msg.setDestination(29421U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.16411643394465514);
    msg.setSource(30147U);
    msg.setSourceEntity(79U);
    msg.setDestination(13837U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("SRANCQXOAZSEPNFRCDNIFYPBKSZVLDCVJPKWVCCWRIWNGTQFEOIYZWYHKQHSBDQFGBFYIPJVRECZSGHVAXQCGQSLCDMGOOPBYFATYLIMUILLLVHGPEUFGLUXYNQYPGOTHE");
    msg.description.assign("OWCXDSZKMAHIHBCLNLAGCCJJZUIMYPMLQGVWBQIQJOEXOXGWLVPCRQJRFACGFTJZEHMRSGOYDWMSZBMRVVKKTF");
    msg.vnamespace.assign("JGDQLYIIKZJETWFWAFHGCUFIDFBBKQIAAVLMXTCMOGNILNSAASEOKZHZVNPZYSYZHYSAEJTESDQJGIVCGSNYPAJBNHUKPNIJWLZLYBQGRPGDLEOKQGWJZUDTBMTDROHRKCOEMGCMTAONOXOLKGRWWISWYBBQZXXOTVCXPFDVAEHRXHSEHLLQMQQUIWDUXTRDK");
    msg.start_man_id.assign("FEEICHOQXEGBOSEFSMZSIXQEMDWACWIBZLYVYKOCKXXHTOLPNTIVNMRXJXVJEJFMYLLBLDBMWJQRYWHCGKNYNLULZGAPOGBYVSCHWAFKNOCNPFVEBZBUQTMVPMLRTKLZNDIIUCTWAGZZANJGOACTYSVRSJWJQTRTUZUHFRIRJWUNHEODDBPOKCMFDPLOGWTYUPXJHUYSAPVUPKDMTBRHEGHRGDFXMPVAQUYDWKBKNGSFVADIR");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CWDZZKXYJMFGKPKQTOCGOJTTXPFNWZADVPZCHHXUMZDQZMTYWSEFVKNSVYNSUL");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 46621U;
    tmp_tmp_msg_0_0.lat = 0.17484457847895507;
    tmp_tmp_msg_0_0.lon = 0.6464057984311946;
    tmp_tmp_msg_0_0.z = 0.40578230025975426;
    tmp_tmp_msg_0_0.z_units = 5U;
    tmp_tmp_msg_0_0.speed = 0.01668169373639583;
    tmp_tmp_msg_0_0.speed_units = 128U;
    tmp_tmp_msg_0_0.duration = 3567U;
    tmp_tmp_msg_0_0.radius = 0.4218133083912141;
    tmp_tmp_msg_0_0.flags = 180U;
    tmp_tmp_msg_0_0.custom.assign("OKKIHFOCHWZEZDEWAWNOLPVYJBIWRVLBMFPSRBHJMINUXZLGYVXMUMWGKVURKNPCSTMQILZYJNPLX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::VehicleMedium tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.medium = 98U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredVerticalRate tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.6311857398449041;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::RemoteActions tmp_msg_1;
    tmp_msg_1.actions.assign("LEJWGGPTFBXEKFWECRVZZBGYOBXSQNGLCSKQIATCNDQGHBMPSWOHMCYLQJKDAAXAFKJQGYFUUUOHDZOOPPQNYOWVWPYCLXLHKYZMGITAWYZNPXSUTMWRJMNCQFTKDTHMHIRJIRALYAZWOWJDVVSXGMFZIFEPOEMYLLXTIMEUACIKRRKHRNNZSMYLIIVKNHEUHZTSUQFGUDHBVCBVECJXBBQUIZUOBAPRCVGOPDFSJETPXESJDVDQRNLJATWBD");
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
    msg.setTimeStamp(0.5369384131058423);
    msg.setSource(49085U);
    msg.setSourceEntity(37U);
    msg.setDestination(54550U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("WHRDMRBWXARNCYRICNVNSSLGZGPDHUKLMCYCTPQICMKKOXGGMSQZETGXJIXXVZFDAOIJTFTEXJPWOSTYCEVWVUPTJTYUAZOSBCSWQPRMBJEOIJPZFJEEVWWTXFLVPDFPKUNIFGQBOD");
    msg.description.assign("EJXAGHBGFJIJNCKGJNFSYHMACHOERTLLARDVXPDOEQKBHPOQVLFRNLPZQGYSCWIULWIVETEBHKBZCCRTZZSKTFMUJYGTZAXSIXDHKKFDMPFYNDCIXTUBW");
    msg.vnamespace.assign("POGHHCTPOTKGMDFMWDXUKRORUHEZQTAUCPVZPEFDFEHOXZAPCVOXTQKLXALNAXFFFVLRDLORWWOKJVKSNGANRTCXLUDRYCBYFPZVPMWSMILHY");
    msg.start_man_id.assign("QSWCCTSLMZAXJPYHMKJTVLDLIUWZWELDNGUBVMMQGGUYLKKAPBLFTFGREXPCPDPVWJOAOJZRVXSBBVIDMEKWEHABRXIRMTGESLCFQWNYQ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FJWDUGBSXQXKUJKFDMHSCVDXJLVYQRXUQNWIHKJCZFDKWORTCALNIKYWOOTSZJHNMKOSFHFSGUQQLDLWTYEGQLXJYTAPELSBIBDOESRNYWEEAERVIRVYWILEUBVLCBOIFPXPGSPCLCTGGGFUAFVBJVYPYNVAFSCMMKRMVMPCTDJHIHZRNYGQOXTPGLISABHKZRPBGPOAIHDXHVCJTHNNMBUZETQTKAMOPCAUNXRUONMYRZFBZEXEJZIDWMZ");
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 49005U;
    tmp_tmp_msg_0_0.lat = 0.3671015070331147;
    tmp_tmp_msg_0_0.lon = 0.16684676631603146;
    tmp_tmp_msg_0_0.z = 0.4823820728014434;
    tmp_tmp_msg_0_0.z_units = 196U;
    tmp_tmp_msg_0_0.speed = 0.5957986481603275;
    tmp_tmp_msg_0_0.speed_units = 122U;
    tmp_tmp_msg_0_0.custom.assign("ZTDGFCERUCRGXHHCFMNILDIVNAVAITTJKSOSFVYQRUOO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CacheControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 159U;
    tmp_tmp_msg_0_1.snapshot.assign("LZVPHWGLFKPLGIR");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.name.assign("DLVXDEGGPHVFBWFONKSWPXQCOJDBEAUJWMWIETAHUSZRDCRTXUMEMTAEHQCJQZYSUCOLVLTPJHZCLXYCOIZBTLTLZBRXNZORWKLQYKEZSWVMIPAJWFLGMPFOSNGDRSVHREKIVGXSFHIYUXNBWKFLKAXVYGTOOECGADPIGCVQRFBGRQUAAXTNYUAQLTNKKPMUSHVVBMUNJYRWIIJYDMKTHHGDEPYKPCMIAZDNBJHO");
    tmp_tmp_tmp_msg_0_1_0.value.assign("KENAFDUKNYHHYHINPYLXOGNMLVKKVQEBIVVAQTJGUHKMTGEECPGVCFTABPGUHAOHZXOCYXVKLKAWLIJFFUIMCPGNOZWJHTQOJMASUYDYOPSDSMGRZINDORWJNPSESPLWTTUBVZXSFENPXLRQSQXJZIRXLXBWAAWMKZMBYOBWZBNCQFYJA");
    tmp_tmp_tmp_msg_0_1_0.type = 188U;
    tmp_tmp_tmp_msg_0_1_0.access = 110U;
    tmp_tmp_msg_0_1.message.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.2724776686308219);
    msg.setSource(10886U);
    msg.setSourceEntity(171U);
    msg.setDestination(13919U);
    msg.setDestinationEntity(183U);
    msg.plan_id.assign("XAKIDQNUWSTISUGZBWYZEEIEEVVZKNRTPNDTCRYZLZLVBQLSZGMADKAXPLHBPQRMFKUTBFFLYCXNAUSOITYJRNDNVRKEHEYBJFZXQGSRDUOFIJSUAODQMVKSORPNYFTXPVQQIQVUENJNOYHFWJVKWHIHIOFTRFWBTBJPQGYGCYSHXCPUVEKHXGCWKMGVXCHISAUWDFPCSQRLXTLMLBBJGZJEPNWMP");
    msg.description.assign("YALHJECRZP");
    msg.vnamespace.assign("THIOUHYINSZEGPBIZTWKUUNCQYDDYSDKAAVJFVUAFDYXMALXUEROFJPUMQPCPPYXCQQPYOIAYFMCVFLFILPKLXYCLVJBJEIIZWTJNKSNLRXOQWKKWRQJHWBSAVZAOIQJSTYZNJZUMEDWMCOZFRCATRVSVQBXVRFKVHGDOHMWZBYDXHBZCVALJZPMAGWTTRKSEUEBETOHFQDCBWDGPENOBBC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MAOSRFSRLMTQJLDJVHYRHAMGTUXGLJGWPDQUSDVBLUQSKBNTQMTCUQMVOIFECPEZUYRBGLWSVYERINKDMKY");
    tmp_msg_0.value.assign("IIEMJWGRNIODTSVBQHPUQYXTWXFXKYUENKYPIZZMJDVOWLINLGZHSQEMMKJPPFOZCUXMWLEXQANTJADVYFONHZLBKMJORDGKPBOULDKGSHJOVRLEDAIXUNYXSXPMCEIBQEQZQCIMFAWUGMNNZUFKOTUCTZWQJKYESALWCHBKFLTRCKYHNXQHBMASYRLTXFZWRPBVDRVGORFIVIUAQTEJUYFGCTJSZWDRROPFDTVJBDG");
    tmp_msg_0.type = 59U;
    tmp_msg_0.access = 135U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KCPGUGTAHWVWHSUOFZNLAOHDRLLSKEIMTIIJBGBIPEFMGQSJQPQDXBFRVDNJRFHRTTLCMUEIGDDYIAYSFWETKOYGXCXROMYOTQEGSECYNBHHXFICENAUPQVQZWPNDVFIAHRHPZZHYLRSWNPKTGCZQPSYAJZZENSKUBGFPYMFUVKZLYQYVMMJBZEWXAJIBKHUTRSJJONFXTVCVNJXONOBXCAWJAMDOBWKMKUGSK");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("LXYABCIFFITGJFKZGBWJSMXQCPHBEBBKVMDYCKLAKMLDCSX");
    tmp_msg_1.dest_man.assign("PVYTRTKFDCHEWICPVEYUBFIFHRVDQAMSLJPTUIAQTQNAGDCORZLKBSNGQVSSDWMMMOALPCGNKAZBZDWMJYTVXEKYWEVRCGQAEOIDNNCGSELJULEWXJSUFLDUTLTISRZSPPBYNBDIMOPMBRQTCOJJCPRIOYVRAKXPNCAGWAUZYQFNHIZBDQJFFRAZYSDZBKEXICWOBFYVHJSHUHKGKIUHVJOOGBTWUHXKQNXZ");
    tmp_msg_1.conditions.assign("WPMMKYVLWKYWUIKBAVMQDNVKUGIPFRTTRXWGZQBIDSINYVZOYCJTZLNKFHQAOGEHEJOLCQEBJXWVTUEONRTVEPDPQYIAGAJYCNRBDMLEIUGYVRNHWNJZNZGSFONQVAXWFS");
    msg.transitions.push_back(tmp_msg_1);
    IMC::AcousticSystems tmp_msg_2;
    tmp_msg_2.list.assign("KWCBDTUNFPMEBSOLXMVSBPGEFXZOOGWYQRSZNKHUML");
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
    msg.setTimeStamp(0.9999125604027962);
    msg.setSource(24960U);
    msg.setSourceEntity(229U);
    msg.setDestination(40803U);
    msg.setDestinationEntity(202U);
    msg.maneuver_id.assign("ZNAFGMLWGMHNEHOKFUUIIJHZGWPXCGXQQPIXZJZTSBDIDYQVZULZVHWLYYTTXRNXAPKEPBHOGKNKSSVFGUBMNERDMZLUIWRVCUSYPQSODMWYTTURBWWNYGLASKFHDIVFRHCQMLOJJTFNTXYESCIDACRNRLEPCJCYDCXVNJEAOEIIBODFRHMYPBVGKITXBDKCAQKBGUZVBNSKEKSPJDMQR");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.15721562040745074;
    tmp_msg_0.lon = 0.5731937704316166;
    tmp_msg_0.z = 0.7566859346913647;
    tmp_msg_0.z_units = 148U;
    tmp_msg_0.radius = 0.2702849141026822;
    tmp_msg_0.duration = 35355U;
    tmp_msg_0.speed = 0.6502288791276362;
    tmp_msg_0.speed_units = 8U;
    tmp_msg_0.custom.assign("MZAUTRXRCISNECQBBTTRGPTKNHCTLKCBWOPUXZPJRZSNYUQQQVONSEAYUXZKVXMSRSOMZZOCVLQXDPHUJAMFCIIXNLVYDDHHXDFBGLDZVWQWRABFTYHABPWOAUKXPSGMCYCIGAPDLVSEKBKLQKFICZZNQZEIEIDOWQDWFKVTJJOUWPRLAJJVEOKBY");
    msg.data.set(tmp_msg_0);
    IMC::SetLedBrightness tmp_msg_1;
    tmp_msg_1.name.assign("EEDCMVGQDGIRRBFHPCFMZWKXSOBD");
    tmp_msg_1.value = 189U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.026093445936491433);
    msg.setSource(41151U);
    msg.setSourceEntity(82U);
    msg.setDestination(36754U);
    msg.setDestinationEntity(66U);
    msg.maneuver_id.assign("PNXRXJDYAGXUIJBTADFQUQDHWBJSZCBVRWBLGKSQFEMZEHEIRMSXGDGTPZYEGMUKHUMPSYQFAVYANDRWZOWVWIKWYDGBGKASRJRIPLICVGNQCNYNKMUFNMPKDTTCKCYKVLRZHOXHASFRTAAXFTHLPNLGFOHYFLQJICXXKXUOHPTXSZYINUQPOAVLABURDEU");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 36835U;
    tmp_msg_0.lat = 0.6940682728845593;
    tmp_msg_0.lon = 0.8269959924103002;
    tmp_msg_0.z = 0.7583261099522175;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.pitch = 0.8468401069777796;
    tmp_msg_0.amplitude = 0.658923758713274;
    tmp_msg_0.duration = 42391U;
    tmp_msg_0.speed = 0.5980029212652109;
    tmp_msg_0.speed_units = 73U;
    tmp_msg_0.radius = 0.7069826058684747;
    tmp_msg_0.direction = 104U;
    tmp_msg_0.custom.assign("QZNOCOCLEGSHFFLLCOGINYMYRCWTKYDKWNXJURBLIWHXDZMBJIYWTIEZDVUFNUQYKSRGDQODWWGNVCBHPGQJUJQRPAPKDBNLJFTAXMAXIYTCJSLHALY");
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
    msg.setTimeStamp(0.889192246190103);
    msg.setSource(6390U);
    msg.setSourceEntity(79U);
    msg.setDestination(35816U);
    msg.setDestinationEntity(77U);
    msg.maneuver_id.assign("ZPKIGNSPTOHXKQGDYARGLFSPKWJQYDBGCNRZIPNPSSFDJZSABCFMQXULFEJMTCXEJHYDNEKRCECT");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 34979U;
    tmp_msg_0.lat = 0.427624715669774;
    tmp_msg_0.lon = 0.41997703357443783;
    tmp_msg_0.z = 0.17784320072033566;
    tmp_msg_0.z_units = 158U;
    tmp_msg_0.pitch = 0.654779748667858;
    tmp_msg_0.amplitude = 0.6813385771060173;
    tmp_msg_0.duration = 4956U;
    tmp_msg_0.speed = 0.8647757430543556;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.radius = 0.44177149179649977;
    tmp_msg_0.direction = 17U;
    tmp_msg_0.custom.assign("QNVLTJGWMNBAPZRYVBIGKSCGMLGHJKDNREBKXWOMOXWOPDCNQYAF");
    msg.data.set(tmp_msg_0);
    IMC::DevDataText tmp_msg_1;
    tmp_msg_1.value.assign("QBCGSEICKSGASPBJDVYSMBZOWTHDOATYHUJWSCIJYCKZWAKQZRXNDRQFZFJJKDKXTEGVTRENHPDFOGWLISNLAAMPOEPBPXZAFORHMIQNPTMBYDNVHEWDFWOPG");
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
    msg.setTimeStamp(0.06192539561144483);
    msg.setSource(6975U);
    msg.setSourceEntity(248U);
    msg.setDestination(21938U);
    msg.setDestinationEntity(231U);
    msg.source_man.assign("TQNFCFYAWUNKRIFGVLTWOAVEQGSOVATWBZZJMZCFPHWBVXDLTJBDXSZXSXUEDPEXYCZBYLKEZGGUFNIXCSRFTASAFPGEEVMPJLRMABHSUZIHHNNIOBNYGROIQMWMIRTTMCAQHSPCKNQHJYWLIDHOQJYITVVWCTICDFQXUKARGMEFPWQRQCJUOCAZOQBMPKUYKINXDFYJWGBEXSYDMHDLYKVMVGHSPZPEKUKNOHL");
    msg.dest_man.assign("DGHIRGYZFFTFVLHJKBTELYPBSFCBSUPULFNOADAWFJRWEZUIHJFKAGLUNKHWOBEFKKYWGIGWNCVRBDRBKPKSVIOWCJRVHYQLLAKJQZTQVXNUHJPDMAOMYXBQSKIIZAHCVSP");
    msg.conditions.assign("QIHAQSTLWAMDQWHJOFHSBJKLIMGJPOXRUONXWXZLUBHHZSVDWNGGDXBATLHYSAXJRCXEZBBMHKVTEVXOXXVLRY");

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
    msg.setTimeStamp(0.35918190651450754);
    msg.setSource(11328U);
    msg.setSourceEntity(142U);
    msg.setDestination(5466U);
    msg.setDestinationEntity(145U);
    msg.source_man.assign("QRJWZSILDKBJYZXJYLOVYZMQVMVVRYURGARXSEPWUWOLUCKUKHNGEJCRIGPSWCXFBCJDHGTMYPKXILANFEDKYNEKZLPMIXNSMIJBKJXTUQGYTAZNOPTYDLPPHEBSCIRJOFAQSRDHOFHSXAUMMEQTTGBRSDDJWVWF");
    msg.dest_man.assign("NCSRCHFLUULSYYMVGDPEWJVDKQLJITRIUWSZVCMUNRCOHGAWXJEFLDTPDN");
    msg.conditions.assign("ICUMGQFXROTIGIMQWYNLKMXHCAMFTGFJKHDUWSEEIKBDWLCLPZBJAJRUARJEYWNDHBPFTVHSACSSGQPQXPOCLOPTHSIUWTJVEMRMEJQJZJYRCYVLRPAXNZPXHFYRUXHIUWRBZSJACITBVIOXBVYECUPJDAGVRSUHZFNZAUOKLNEKYPKVTCTDHTYYBDFZVNGIKQFIOBDGLQQWYBOLQNANNWUSKF");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("CAUAQAOXOFMYFBXONCPOOYL");
    tmp_msg_0.lat = 0.6383777619831108;
    tmp_msg_0.lon = 0.34856252373888297;
    tmp_msg_0.z = 0.5854865401008903;
    tmp_msg_0.z_units = 131U;
    tmp_msg_0.cog = 0.5132924644814622;
    tmp_msg_0.sog = 0.25757558315495566;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8386810424578707);
    msg.setSource(39922U);
    msg.setSourceEntity(223U);
    msg.setDestination(60555U);
    msg.setDestinationEntity(80U);
    msg.source_man.assign("PXYFQIOUYQBCWZIGPFKHBKVPBNMIZOAPPLFLJADNXZBGILQYVB");
    msg.dest_man.assign("XJHYYWXIXYKDQBCPJTVCBRBGWROFLDMOIXMWJEUPTPFRWUAVLLVFMBGZHITZNXHDNIRUTGTDTVBMQSGJQBIQGYISXVPIRNPJSAOROWUOCWKHKEUBCBPFARIJHEDFTLKYDOXCCGOAVFUAYNTROSRKJSLFWDUHZCEAVYWNSBKXKELDVMMNFRAMDSGCMAWTZNOUGZMTQNWQHYIMKYCAXFPHFUYJIBKLJPQQHZLSPKEGHAEDJELVUZNQ");
    msg.conditions.assign("HNXXEKNNTEMZIWHHJLBGMHERKKCVUIMOSAASEPJLFVSUDOSLJTYGDUCDQOBTXZSUPTWOTNPAWULIRECGTNAELWJDLVEEDVINPYRIBWYYPNUCWIJJLYMXXLOZFUVHQPBQKCJFJH");
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 30361U;
    tmp_msg_0.lat = 0.003320611308832877;
    tmp_msg_0.lon = 0.9159217835541553;
    tmp_msg_0.z_units = 71U;
    tmp_msg_0.z = 0.9475205682283327;
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
    msg.setTimeStamp(0.14693682625343552);
    msg.setSource(4047U);
    msg.setSourceEntity(21U);
    msg.setDestination(52681U);
    msg.setDestinationEntity(232U);
    msg.command = 34U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MPNBVGQEEWCILGTCWNIPRRMUZXOSBHXBMADFPSCAVPHSUCCOHTISWLFMNQYTXFDVBN");
    tmp_msg_0.description.assign("QCTTEYHMQKSPOLVWAAEVVSXKTRLEDPRGCHUXHYKNMJUXHUJAPWITQOZECQBIOMNPRVMQGSMALCZIYKRWJOQCBPSLVGWZWIHJLYHYDERVHUOPMDVSVVUFBQOUIJDUGDYWAVPJFJYARBWKKXYTQKTKZZKBGKCDOBRSPWQFCJYBSMLZFAXMHRNULEEWAOHNLSIRZLFGSQTBTBNOFXESIDWGANFOEDTGIUCZNPJTLUDIEGBHXMN");
    tmp_msg_0.vnamespace.assign("QHAPEFEPBTWUBPOURJPSRVTRLBXODHXJXRADFFMJPYNBKPJWVTOGJCIV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BFWYJIQSOGTGUUAZXVZMGHSUXHIIHAFFPIRLWEOEGWVLGSHTEGCNBEOEXTRFKYHSVUYVJDMJIRNJLPHMKQWTCZYZDAYQZIUXFCHXRVESWJCXDHXTZHBSZWIKRKWWFEBQRMSOPNMRQMGYYUPCKABTFCMPJQLJKVVUTTTBBIZLMDYOSOWCYUDPKMDXIN");
    tmp_tmp_msg_0_0.value.assign("OUQRRIRZJADFTEOITQWVYNMBKGZCCBSNMWDIJHPDFTZUTNQHVWXC");
    tmp_tmp_msg_0_0.type = 202U;
    tmp_tmp_msg_0_0.access = 108U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MVAWRINWCHEFDYFHGTXTANFFKZFONUI");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DZDBLAGNYFHSGLPMRBBMRWNCPXDBOJCJNOJHSZNZUXYUEMSCKKPXVLJQFWGMHEMEZYAEOZKXEAYLICDQCYTVLVPMZVRUGPGMXAFVPXVLQQAHBKGUSFNORTRCPXPDIQBHUFYQLRTEKZHAKQMXQZGOFTDMSYWGIEWBIJFOBKHIAUYPR");
    IMC::Dislodge tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 31954U;
    tmp_tmp_tmp_msg_0_1_0.rpm = 0.0062651253175433075;
    tmp_tmp_tmp_msg_0_1_0.direction = 136U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("GOSFQRVMIDGSNCFPZEBZJFUUTZKALJGRPJFKLZXXFMEPOBVBWAINJOLYPHEKNWUZWXDDNMLODXBGPQIHLVRTPUQHBEGHXFASPOMBIFWXMKJEGSDGUOJGOYYCOKWQVSKDFWUHLBSHDYZYCHHKMEZJSHSOKNAVDKAUAYDJEUQHPNRVFTZQTVWTVFYRXMILWV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Aborted tmp_tmp_msg_0_2;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.7462656935825766);
    msg.setSource(42015U);
    msg.setSourceEntity(29U);
    msg.setDestination(62108U);
    msg.setDestinationEntity(171U);
    msg.command = 242U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GOHQSSJHIMEFVNOWKFBDSEJMRCRXQDCUCAEMPNFYKLBYZGECLWCTTQXDUEPIIXYYKHYXBZWLLZVABISAPKJHIGCSNWTAIEFJUUEBRDXRLUKFVZLHBUYXBXDTKFRCIROGLUJMQJH");
    tmp_msg_0.description.assign("GLRYHQWYHCRZKBSUNAWMYKULWVHHJITJECMTAYMQOTPKFGVXCNMXGJSKFLCKJSSOBHDSRCLARGETBVAPYDDZUOPTRZZBGZZFPDCGAZVSIOD");
    tmp_msg_0.vnamespace.assign("VQRVPQXNUCUKAECIRFEZWVCOQDDHGQZEZMEMWRQLDLSJJKDTGPHGTUSFOLHFBCAHERVSKPJFYUITIDMVZBFMOGCYRXOLRCRSAYFATGZJVNXUTNPXMKOYFCIPBOMLGFWWVXVPOULYUHXIBDSTHKDJTJMQJQLANDCIGWKPLHZFSVIWRYJLAESIGYZBIWS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MGUJUOAXGEJIFFBCESHLZAVOJFJBNRGTYWPLZEICHJEVOXLPRNJMBZNUZATTLOODBY");
    tmp_tmp_msg_0_0.value.assign("PMPNSXXGIILIKEDYGETXILLNJHWWRNHHTMQZHBAREWNWOQALEWYMJYBTCWVKAREEGFNDRIDBPJOWSBWXQVYUHRRYHOABLZUGTVHLPQVEYRVVE");
    tmp_tmp_msg_0_0.type = 151U;
    tmp_tmp_msg_0_0.access = 78U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HBWJILUXXMCGBBRTRXPNNWBBSYUFVDMIWZZTHCORIKIZDJAETJWQGYVPZMYVFNWEOCRMGPLERLCGRZAYVSOOSWJJQALAITEYDO");
    IMC::UamRxRange tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 28264U;
    tmp_tmp_msg_0_1.sys.assign("SZFMEKHCUNUISHLOJKOQFMZOQBDPGZLCBVALWG");
    tmp_tmp_msg_0_1.value = 0.6218206283368325;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Goto tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 37710U;
    tmp_tmp_msg_0_2.lat = 0.046195255743420316;
    tmp_tmp_msg_0_2.lon = 0.7038551720050757;
    tmp_tmp_msg_0_2.z = 0.4542155407090316;
    tmp_tmp_msg_0_2.z_units = 53U;
    tmp_tmp_msg_0_2.speed = 0.9707322321716914;
    tmp_tmp_msg_0_2.speed_units = 137U;
    tmp_tmp_msg_0_2.roll = 0.33460456940148886;
    tmp_tmp_msg_0_2.pitch = 0.9863026243298767;
    tmp_tmp_msg_0_2.yaw = 0.41924168635900716;
    tmp_tmp_msg_0_2.custom.assign("GHFQWFOPJZPYGUHNLPIMUBCDXIDVPHQKPTUOJACSZBIGEXNJVAWWWBKXISJHTAYRCVYNKBCFVZJMEBSFZULZZLDGGGIPNHVBJRFEDNHZXOBVYJINVADRSIAMMSOTOJTSVKIWNRJIQMCORDWLSXRXRCDDLU");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.2504804359549829);
    msg.setSource(6578U);
    msg.setSourceEntity(77U);
    msg.setDestination(23203U);
    msg.setDestinationEntity(49U);
    msg.command = 14U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZAZGZIBCPSMIGERNOGWXMFFYYMXDECVHVCJZNYMYRIUBLWTBEOQLWNFXGHDECOJPQQGFENOKATLKNJASKPRPCQJWEBCFVQJOYWCIZSUKDAPUFHBOQSVWOSIYGRRRWAXNURLRYUCHZVNLBUXDMIZOHGRVLNLBXPWJQJLYVAJAHAQSDWUXMZDKTGBSFKVPTEEDNJEYFFZPKIAVNXZXLKVHPDIOAQDMMQ");
    tmp_msg_0.description.assign("CHKFLIKGZNIKEKTHSOWSVVFZVXJRDTMSUYXJAHLTCAJKJDVDZVBONXZKUPOFHAYPQDDGCGYYEFLFJAEUPQVLYWABTCIWJVDRRZTEOPVGJFXCQLELTRQHXIUELWYBJZIGULZNPYANHRXAOGIVCBFGPKKRFLBDOQNTHZBP");
    tmp_msg_0.vnamespace.assign("JXGDRLGRWEPOZKYAJXGXDUBWYLGABVELTCDTSYKAJUWNJOGLXLNRVUIDTCZFOFWZHEXSIFTXVKDGLHOBZNUEERTBCRUCZPQMIHXFFYMWMFCQBNOHGOSKM");
    tmp_msg_0.start_man_id.assign("CKDIGMHSUJFHXLQGQUNABRNHCRMYAPSPUTTLFBKEPRQZZXPEZOABFIMTFLFQXKSYJNKIWVWVJPOIMMJYYETEQICBGXKQQQWBDOJHITYOQHNYLKGNEISMYTDYVOLLCVAVSXJIWICXTDBPBWM");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("QIQDAZPTOKPGRWRNGVRJXKCFMTXZYIZKRCSPUCZEYUHXKHCQWTDWNJUYRBN");
    tmp_tmp_msg_0_0.dest_man.assign("QOAPSTFPPXQSGMEFYEVBILSMAPJHXOBOEUNAVHRTDFEGV");
    tmp_tmp_msg_0_0.conditions.assign("OTVNHNUUWIRWQLSGCFIQFZFFGXADHRRBLPZPTMLMKVKAFGOXUPWINLTURZWXLLYQSBKBQVMYSJJQOBZYDJBTSHEWKSIZWABLOFNEPYZYBCIVZVGCZCCAPPGMNQLPYATCQBHSXGKFNDTVEXRYKUNIINMDFQKIAEDLHHHJAEVSXFXPBZRWYWHRSJUENFAXJVSXTLVCJCHQBUYMPNOOAMJZGJHCGOEUDTEEOWROUTER");
    IMC::PopEntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("OBUGORKHMGYGFVSANSUPFCACGCCLOOKMLZQSVNGHBJMTQNXHHSKMJIJXWPKTRWVBSHZDPJWMMOXUQJYNBWHCKNMRYKAEIKURCDEEPBTWIZPGUZYWRUBIYJDAIQNPAMJRDQSDTMXSBFDLLOTZRGSYGZBSLWNIJLNLOOOAERCFPWIXFXXSZZ");
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::RemoteActions tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.actions.assign("TLVSQFVRLUNABCGJLZSDCORJWIDJXQVXKCWUAUYDXIJNYTKSRNOZTXMWXHELQBWWTUBEMWGMYPJGWNIXKTVISJSFVXAMDNKVGZMAMGH");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.9175396540589301);
    msg.setSource(60068U);
    msg.setSourceEntity(176U);
    msg.setDestination(9141U);
    msg.setDestinationEntity(212U);
    msg.state = 183U;
    msg.plan_id.assign("NZAOARFDSLXVCBFFWUMYUXTPNMCCDBVOCVBDWDDQWXJCAHHHJZMGDWIQIZUILBNNYPHEPGKSHQLFTZPHRHBGUQKTJXVGODAJIFJQQRWAMQOBXXGKCGAABQTCFVEOMTSYKTYIJTGPCOGFSKCYS");
    msg.comm_level = 221U;

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
    msg.setTimeStamp(0.8615414261011918);
    msg.setSource(23017U);
    msg.setSourceEntity(9U);
    msg.setDestination(54792U);
    msg.setDestinationEntity(239U);
    msg.state = 110U;
    msg.plan_id.assign("TCWTZGYHCMZBFGNDYOURNVMWJZDESKLNAXVAAPQFLXETRDLPWPFELSPOWEGDELQGHKMDRJVYEMUVXLKMTYUOICLUQQYKIYGEOQXJOUBBQKZDSYWBWAMNAEKJXBQUVAEHFTRRPFNSUNUFVHRANDIYBTPSFXIZCWDCJKUNRVMXYBMZBFPJHZLGSWCJIST");
    msg.comm_level = 17U;

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
    msg.setTimeStamp(0.9107937104624949);
    msg.setSource(22538U);
    msg.setSourceEntity(162U);
    msg.setDestination(18023U);
    msg.setDestinationEntity(62U);
    msg.state = 38U;
    msg.plan_id.assign("LPXZNSMHIIPGXIUVCJYDPWGBZBYUGMJKGTFWVCKNLFLQASBYAYAFGSLXLNFWFHNKDWGKEUXNYECSQBMLFLVHIMUZSQLJYFTOTJOEAXDUTBZOSIOTRCHEYPRKZULJJCTQVWNIEMQAGSMHXURTYBZBIQUO");
    msg.comm_level = 94U;

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
    msg.setTimeStamp(0.3047876708501642);
    msg.setSource(33366U);
    msg.setSourceEntity(28U);
    msg.setDestination(29044U);
    msg.setDestinationEntity(153U);
    msg.type = 34U;
    msg.op = 76U;
    msg.request_id = 48964U;
    msg.plan_id.assign("TBMXCZVRYCDWVNZIJKSFGJNRDTXBWUVBMETSEJBUZSWIVADDHMXLGJBLRTOIEKCCNLLWLQYBGAOAVKMIWGKTABCXIEAKIEJFNLGBAZODEGWPTMPLMHYUJQGXHVTOSXQSSIF");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("NQHVXUMRJKE");
    tmp_msg_0.timeout = 23253U;
    tmp_msg_0.contents.assign("CNVURQSORVSDQMFODLEFHMLMXSFREECAWMWULPCLDZHIOXFLCUETWBQBHGZPPZACWNKXNEGVGYTXIZTKMUELJJURLXKPAXLHEDYVWYPMFQVSRUHSQOXJKYJGQAGCEV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OPVNKVSULCAGZFCDYKHRYUQEIJUSPIOLSKITGWENZWZCGPQXAXHXBYRVRTQYHRUQVUSGNIUUTEECLXCLHAJDJDJZAYGNBJRIJOCPTBAPWLLRE");

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
    msg.setTimeStamp(0.38157699108598775);
    msg.setSource(9971U);
    msg.setSourceEntity(222U);
    msg.setDestination(22612U);
    msg.setDestinationEntity(230U);
    msg.type = 213U;
    msg.op = 119U;
    msg.request_id = 4900U;
    msg.plan_id.assign("SOHOEWBIUVVAOTCYSQDORVXHGEVXUWNKPZKXXREFTGPVOMDWZXHNYDIREBKTIQLGBCNNIJTWPFFFZTEWFHKHDBLUJSOWLESXMHXTSKBPBOMRAUJRBHCCDISLQXTIKGPBMGHKTCAAQEMN");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.21448471143582037;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EYCABGMUISRXSTNATQCHBLBMQYRNYKZNNIFWDNFLPDRLRWBLUBEUIIDHJCXIMIQHNJVBYMSPLFVUVJLUENKCGQPAPYMOMXKLLIETUPOGSRGOWHHQXGLSUZIOHFDAJDZTTEYWZCQAZQYFTSOXIRXVGSCGKPAOHAJKAZPAGODS");

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
    msg.setTimeStamp(0.48503459138709226);
    msg.setSource(4931U);
    msg.setSourceEntity(192U);
    msg.setDestination(9709U);
    msg.setDestinationEntity(113U);
    msg.type = 115U;
    msg.op = 227U;
    msg.request_id = 52432U;
    msg.plan_id.assign("NRPVAWPZHFPIXIELMEQ");
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 1139886760U;
    tmp_msg_0.destination.assign("VMNLFOXAUBLKBULNNFQUNDZNFHTNWBAUBJSGHYJNYJXTQASXEIWAWEPTPPJIWZDBDMCUWGDGFMQARQICYQKONNYHYJYL");
    tmp_msg_0.timeout = 12609U;
    const char tmp_tmp_msg_0_0[] = {-13, -23, 30, -16, 126, -3, -69, -118, -77, 41, -91, -91, 43, -90, -37, -125, -112, -38, -21, 35, 83, -37, 33, -125, -36, 29, -1, -77, -103, 75, -9, -86, -79, 27, 115, 123, -54};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IUZFCQDOFHTGE");

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
    msg.setTimeStamp(0.7682892382864761);
    msg.setSource(7747U);
    msg.setSourceEntity(147U);
    msg.setDestination(61117U);
    msg.setDestinationEntity(120U);
    msg.plan_count = 9527U;
    msg.plan_size = 271436182U;
    msg.change_time = 0.7222007863646677;
    msg.change_sid = 63866U;
    msg.change_sname.assign("FKSDHHMXEEZYMQJHWDMKJHCMQTDRMBZIPNSVCUFQRKROERESWNKZWLUTAONGPABCNVVE");
    const char tmp_msg_0[] = {-15, -58, 45, 53, -84, -5, 34, -21, -54, 65, 125, 58, -48, -55, 51, -101, -123, -128, -69, -56, 115, -1, 108, 15, -110, 96, -66, -59, 99, 18, 49, 95, 50, -82, -84, -88, 53, -91, -71};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BMYHOQJFJYMWDOYFSFEJRUNNZKOTMKFIDNWYEEEMUHITXCUSHRLDCPTYABMESJBHGJLPKAVZQIFSKXTQYAURQEYDVDWIVBTMVWGUHLBPBSAIHTITBUPLOHEAZSKOQXJLGCRZAZGTSRNRZQLKINCAOXOOJDYGRKAZQSKVEBJPHNMCUODYIEHLFZWPDSHCXRURUXTQFTPGCQWPNUXNLWJ");
    tmp_msg_1.plan_size = 28245U;
    tmp_msg_1.change_time = 0.643008844428675;
    tmp_msg_1.change_sid = 32112U;
    tmp_msg_1.change_sname.assign("STYHYINDNMEVQMHLXUXGBMSHCCAG");
    const char tmp_tmp_msg_1_0[] = {61, -106, 13, -88, 105, -14, -86, 30, -5, -63, 25, -29, -85, -20, 1, 21, -74, -18, 122, 105, -1, 15, -116, -58, 53, 122, -99, -110, 66, -9, -49, 24, 112, 75, -10, -118, -68, -53, 30, 2, -97, -81, 54, 94, 120, 112, -112, 37, -9, -90, 81, -125, 101, -67, 13, 54, 113, 71, -5, -76, -49, -21, -46, 90, 53, 11, 16, 67, 98, 68, -18, -58, 69, -27, 17, 2, 19, -39, -32, -87, -29, 79, 15, 17, 119, -119, 19, 94, 66, 106, 126, -88, 52, 105, -50, 82, 92, 29, 121, -118, 87, -11, -102, -87};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6207956704404672);
    msg.setSource(17728U);
    msg.setSourceEntity(20U);
    msg.setDestination(18185U);
    msg.setDestinationEntity(66U);
    msg.plan_count = 24162U;
    msg.plan_size = 340474510U;
    msg.change_time = 0.5228188122763225;
    msg.change_sid = 2799U;
    msg.change_sname.assign("YNBCHTABGUARNFQOYIQLQHHBOBJLKEEXLFUNKODUIIKBPGGTV");
    const char tmp_msg_0[] = {-23, -123, -126, -95, 19, 92, -38, 14, 101, 91, -47, 51, 2, -121, -64, -95, -82, -15, -94, -30, -69, -102, -120, 0, -59, -115, 63, -111, -108, -103, -112, -33, 39, -29, -86, -33, -10, -82, -17, -17, -3, -96, -8, 100, 96, -52, -35, 116, 54, 75, 81, 94, 115, 65, 33, 75, -47, -80, -70, 108, 3, -58, 92, -14, 55, 39, -43, 50, -113, -84, 123, 18, -76, 22, -17, 41, 71, 27, 100, -92, 68, 45, -35, -124, 71, 42, -110, -126, -95};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YDWZSEWXNBDXFPGXOYOFHECCHGAHYZMNRNXQSKJYVSOIQRBROHJEIRSDVBEUTJZZTMSINWMKIRFOUAXIXCYEQEDALGDLQDHVCTJSWFOEYCQTVZGPLKIBLKCPGWKJBKMTFUEXOAWBPDRTKBDNHKPSUUWLGPAWSUUXLRZBIMCIPTDLNMYATHJGRVORFHJJFMYXBZLAQXUNFEHVKTPGZUQVZCJPSKQZIGMVQYJNOWFSYLHNBDUGARA");
    tmp_msg_1.plan_size = 48619U;
    tmp_msg_1.change_time = 0.5846032425587615;
    tmp_msg_1.change_sid = 4585U;
    tmp_msg_1.change_sname.assign("IVYIYKOWAITMQJTNXJSMQNVNOOVKFCUJDBLCPEWLZLYFHDUSLHPXUEINCROIKPMLTLUHCASGMABGVKCJZZBBKRDBNFJPULXRBLOJGGRXGHUYIEVHWSAXIFXMZOJRCMLPOIWSKRUTKDPJFOXRNWWGEQEWTOTYBYBRTZXBBPSNDSJZYPCSASAAQTQFNQEKWQPEEGKGHWCZGHVURSAIDQDAYUJOZTZMFIYKVCADTVU");
    const char tmp_tmp_msg_1_0[] = {126, -43, 61, -94, 15, 15, 52, 46, -59, -40, 79, -75, 74, -101, 124, -12, -1, -31, 88, 76, -32, 3, -77, 69, 107, 27, 75, 10, -26, -37, -12, -69, 58, 35, 42, -64, -72, 70, 49, 10, -20, -3, 2};
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
    msg.setTimeStamp(0.08644633712383953);
    msg.setSource(23760U);
    msg.setSourceEntity(88U);
    msg.setDestination(24040U);
    msg.setDestinationEntity(228U);
    msg.plan_count = 41270U;
    msg.plan_size = 437070583U;
    msg.change_time = 0.1258344883903627;
    msg.change_sid = 52130U;
    msg.change_sname.assign("REUXANSKTQYMDJBBEKUYLNXMYGAARZKJHWVSFZDNBPBYCJCYNRGAQMEVQNMOWEPDUGRRNHVSPYSEANJZWIIBVWANLCXTYTSKPCKYDZF");
    const char tmp_msg_0[] = {-66, 59, 48, 50, -119, 102, -19, 59, 20, 43, 7, -41, -120, 95, -6, 32, 41, 43, -123, 61, 61, -36, 92, 28, 66, 121, -78, -94, 33, 29, -121, -55, -62, -47, 121, 38, 50, -79, 87, 38, -114, -39, -30, 39, 112, 33, 103, -4, 30, 75, 49, -39, -60, 111, -35, 83, 64, -24, 88, 77, -64, -36, -77, 105, -22, 22, -108, -65, 86, -67, 72, -18, -22, -52, -34, 52, 90, 114, -72, -26, -26, 105, -68, -54, -123, -70, -19, -92, 62, 47, 10, 13, -60, -123, 35, -120, 67, -15, 94, -115, -35, -74, 30, 7, -14, -4, 22, -47, 24, 71, 99, 18, 95, 37, -46, 68, -3, 39, 85, 126, -49, -82, -12, -32, 124, -100, -111, -88, -15, 14, -33, 45, -58, -53, -43, -73, 111, 106, 28, -39, -40, 29, 18, 33, 114, -112, 40, 124, 73, 20, -82, -82, 50, -38, -46, 109, -68, -12, 11, 2, 56, 20, -20, 73, -73, -16, 106, -70, 90, -100, -44, 20, 85, -119, 68, -94, -97, 33, 75, 77, 9, 29, -3, 17, -127, 63, 24, 121, 79, 98, -29, 33, -93, -53, -111, -25, -18, 28, 27, 71, -38, -71, 30, -120, -96, 51, -113, -128, -55, -54, -125};
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
    msg.setTimeStamp(0.38891657225497966);
    msg.setSource(52009U);
    msg.setSourceEntity(241U);
    msg.setDestination(4021U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("HJAGCKYNOUQRVBLBFAPRPWPKYCNEHNBFIDTCRUFZFCWJGJLOVRWLQDJGMTZPNYEBKQMUYOIOHZDPEBXSWXBH");
    msg.plan_size = 17555U;
    msg.change_time = 0.9219938372567642;
    msg.change_sid = 31243U;
    msg.change_sname.assign("KTZUSPWZNIPQUDACSEEMDBEFZQQVAYSXLRSVFGWYZENBRLUBJNWYRHAYSPIJBJCCBG");
    const char tmp_msg_0[] = {19, 49, -14, -68, -25, -85, -32, 14, -116, 116, 3, 84, 2, 62, 10, 50, -77, 124, 68, -109, -53, 78, -112, 45, -113, 13, -115, -90, 63, -80, -78, 66, 126, 82, 30, -45, 29, 121, -23, -11, 82, 23, -105, -80, 19, 108, 93, -89, 111, -48, -55, 29};
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
    msg.setTimeStamp(0.8765472196054528);
    msg.setSource(19874U);
    msg.setSourceEntity(207U);
    msg.setDestination(26894U);
    msg.setDestinationEntity(37U);
    msg.plan_id.assign("AROETUMIHNDYTESEQPTFHSOKHKCQFLFYSKUGPTMKBWOLLAFFTLIOUZTOVRMUYGURXATZEKPCKVODCYFVJOPZZLKPMILYBBTFVZJUSDQOAGYIDISBUGWMXWZAMSFNLXZJBXECCDMJHIGQCNXXWQMJXBJNSMHZNVBOPNHQDMKAXEFARXDSGRVRWCUBHAOWCTPYILNRZHWQYNZEPVFWKJSECHVXGCNAYJJPGQYSKJRADQEIDELTDUBWV");
    msg.plan_size = 2545U;
    msg.change_time = 0.33251734159051616;
    msg.change_sid = 12557U;
    msg.change_sname.assign("QOEKGHCWSNURDRFLDWVIPIKQDMJCJYFDLPDCBPZUMZOHBFJHTSNRTMRWZWJNUALNORTMREVIJYZDOEHKKAGXZKBKIRSWMHGTEZNNYFGRSXBLPICMLMUCANYPYOACXPNYIPDTPTFYEEUWZPUWRTXGMETNHVZJVZWDQVOVLUAFOIYWCXNBQEAGKLYGCHAXBGXSHSQIEKG");
    const char tmp_msg_0[] = {54, -99, 66, 62, -68, -15, 65, -83, -97, -4, 73, 120, 48, 59, -118, -47, 44, -42, -89, -10, 27, 120, -106, 7, 66, 38, -102, 75, 36, -50, 103, 104, -122, -105, 78, 122, 10, 102, -69, 40, -56, 68, -85, 118, 98, 90, -128, -114, 109, -6, -75, 23, 58, 39, 100, 48, -62, 115, -13, 117, 25, 96, -107, 57, -41, -73, -94, -87, 63, 119, -47, 6, -12, 110, -23, -25, -55, -46, -61, 120, -97, 90, 51, 83, -75, 104, -33, 1, -56, 5, 88, -37, -27, 21, 22, 87, -95, 68, 67, 59, -38, 98, 84, 32, 29, 0, -8, -50, -9, -57, 6, -2, -21, -62, 87, 28, 10, 124, 42, -19, 40, -71, -84, -48, -93, 82, -91, 116, -12, -61, -13, 83, -30, 111, 112, 74, 12, 121, -74, 108, 26, 68, 60, 33, 43, -82, 1, -109, -50, -62, -27, -70, 76, -108, -55, -17, 10, 120, -99, 54, 52, 76, 109, -77, -71, 122, -76, 7, 9, 126, 37, -18, 27, -61, -32, 2, -55, -101, 125, 53, 120, 84, 119, -126, -28, 0, 7, -37, -73, 62, -58, 63, -55, 15, 124, -75, 33, 7, 6, -8, -91, 17, -119, 37, 47, -85, 86, 15, -87, 81, 107, -28, 28, -21, 34, -4, -17, 70, -72, 120, 117, 112, 22, -119, 49, -67, 2, -60, 5, -46, 109, -121, -4, 52, 98, 66, 17, -109, -20, 95, 7, 107, 14, -52, 75, -125, 7, 91, 31};
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
    msg.setTimeStamp(0.13183026423899646);
    msg.setSource(48362U);
    msg.setSourceEntity(138U);
    msg.setDestination(52479U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("OACVZXUMFEBZVBKMLSIKZBYIJFGMMLESTJWICCCUGRLQKQAJHJYUFBRSIQGEWNUQIXGITTCHXLHDWQMVVVEEFPHENCFRUOQDBYCPDPBIOXOWUVDAYGUYOPNKAMBJTFADKSTJMJR");
    msg.plan_size = 49827U;
    msg.change_time = 0.27189926920235397;
    msg.change_sid = 54929U;
    msg.change_sname.assign("VYBZPXOIDQXVUQUMGYPRALHWSBZMALUFFQKPWOTOYVQQWLFJKTVJRBPNYDOLHQBDEXSWGVBTNVCHGVUPSGMUVWIATPUNDPRXXCVEVPOBXAG");
    const char tmp_msg_0[] = {99, 35, 8, -42, 117, -68, 35, -15, -49, -109, -32, 23, -40, 70, -85, -77, 80, 94, 51, -34, 12, -69, -91, -45, -57, 119, 66, 17, 70, 87, -19, -63, 41, 100, 91, -35, 97, 50, -98, -114, 54, 73, -72, 93, -17, -17, 28, 14, 27, -39, -120, -42, 6, 28, -63, -65, -11, 62, 47, -117, -107, 76, -37, -37, 69, -89, 43, 42, 101, -102, 8, -5, -1, -82, -110, -102, -21, 99, -29, 50, -96, -65, 58, -11, 13, 126, -33, -90, -62, 43, -73, 6, -7, 105, -68, -60, 45, 75, -27, 78, 106, -87, -66, 95, 106, 9, -7, -74, 54, -83, 100, 17, 10, -37, 121, -124, 3, 2, 51, -122, -85, -88, -10, -32, 73, 13, 100, 60, -2, -16, -53, -16, 117, 116, 55, -67, -42, 39, 35, -100, 46, 53, 85, -118, -10, 29, 10, -40, -123, -58, 36, -60, -118, 74, 81, 57, 55, 4, 41, -43, 21, -119, -97, 56, 29, -34, -127};
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
    msg.setTimeStamp(0.27392266909021135);
    msg.setSource(9815U);
    msg.setSourceEntity(2U);
    msg.setDestination(38788U);
    msg.setDestinationEntity(157U);
    msg.type = 240U;
    msg.op = 101U;
    msg.request_id = 13668U;
    msg.plan_id.assign("MTKBXCFZLOASCLAEFAUBVAVRDLBOCMAIAEDDVEPBWSXNVEUTEOYTSCLRKZYDSYLDUFIRKYILZXIFZHIGOLKNAJIDIPBWQVDIPOZKMFGDOMWHXTRIKMNNEQRJHYHCJUCHBVJGLDQXRWNTPJKZLCNOVFRRAGIXBTSGWVEHMCWUPMYGHGOCZHKUMBEFKJGBPTKYWJEXWNNTUPNS");
    msg.flags = 26871U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 18350U;
    tmp_msg_0.lat = 0.5275567767911119;
    tmp_msg_0.lon = 0.5167994400359288;
    tmp_msg_0.z = 0.18654634769111578;
    tmp_msg_0.z_units = 178U;
    tmp_msg_0.speed = 0.6256766282428708;
    tmp_msg_0.speed_units = 40U;
    tmp_msg_0.custom.assign("AHUYELORDVMVMVGZRJKPXADMYAADFPHGZEEDLRDJGZETTWMEPNSOTIYTJXGAYKLCWGBPKEPQTMVNOONJWDCQHMXNMKYFKLXCETHHSGNNQVLHQWSXFZU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HZATZCFOJJTYEZETQBWQDANPMNXESPGNXDYYHVVNZKFIOMPAPWMJUGENTFQDCGLKRISRSUZQNXVYIKECQEVYMWGPUVLMUHQYFRTTLGKCEQDNKKWWAESXHCXPKHYWRQJUMWJHMLPFURGBTDDSC");

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
    msg.setTimeStamp(0.4205351653981507);
    msg.setSource(60934U);
    msg.setSourceEntity(121U);
    msg.setDestination(1876U);
    msg.setDestinationEntity(110U);
    msg.type = 67U;
    msg.op = 110U;
    msg.request_id = 8063U;
    msg.plan_id.assign("YGKAWKQRLBXRWLITGOAYBUTOFSLPFQCBHJAVUZCKQCCEKEEWNBUXMVFCHRRLVYHNWFZVAGSKSPWSHAZBDAOULGIJDSPMPMUVCHGEPUHQHYMIQGYXZOYTBQHFVCAWXTVEUXBKRNONKZOXMNL");
    msg.flags = 4839U;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.39644321265933746;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FTJJBTZNXNCRMNUUZRPJTVYGRNVYPQQFTICYWILFFDXPLURCELQHSXLBOFKNUCOYQPVXEYPBDFLSSKYPSPUBBUVDXNBQFRQVGHQALZZLEMVTOUZKMRYLSGJQZUIKRHBOJJORDTEKOTTADWVECMHEAWGGBOWNKRAJGXCPPKOHCAPZWKOXNMESVLQYSVUHTWMIRZSIZIYABDIWJGGFQCNHVCAAZXBWXAJCIKHDYMUFGELEDFDM");

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
    msg.setTimeStamp(0.2329102095287997);
    msg.setSource(58353U);
    msg.setSourceEntity(123U);
    msg.setDestination(58361U);
    msg.setDestinationEntity(0U);
    msg.type = 123U;
    msg.op = 31U;
    msg.request_id = 27279U;
    msg.plan_id.assign("CJGEWCCWNYQRZOOYPNGMKAGHUQWIVRXLXIBKLHCEXYBCRCQVQQIQMGJSWBFBBYAYLUGGLMSVFDYKNOTIJETZVQLPVEWKFAMZJNDDHAJMVRXTOHEVSMSWF");
    msg.flags = 59715U;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.5936495125342064;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UGWYBZGNCLOATTHLBGRKMBTQEJADFNTOIAFXWYRDXMPOOXANXZHUYHEAUNRTKWWVUQPBPLBWMIUGVGSUXQZBCYWXRFQSJIJNDFKCLK");

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
    msg.setTimeStamp(0.8330435786879705);
    msg.setSource(12022U);
    msg.setSourceEntity(132U);
    msg.setDestination(47490U);
    msg.setDestinationEntity(192U);
    msg.state = 226U;
    msg.plan_id.assign("AQHDFOYSHAMMUOLSAPQBDLEVFVPETNMSGHSJZZIIYCZIGDWYXRKANWRDANQXZFCSETYUILBDRRNUXURMKWJOCXA");
    msg.plan_eta = 585156473;
    msg.plan_progress = 0.14261063563065302;
    msg.man_id.assign("SINOKEPJTZKYZVLRVPMRGVINTFDHOBVBIFRGCYGFUTOKHOBYIMVRILSZCOGJLHSYVIDPZKPBMG");
    msg.man_type = 25316U;
    msg.man_eta = -1006914683;
    msg.last_outcome = 253U;

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
    msg.setTimeStamp(0.7629864184645693);
    msg.setSource(44767U);
    msg.setSourceEntity(194U);
    msg.setDestination(37544U);
    msg.setDestinationEntity(31U);
    msg.state = 27U;
    msg.plan_id.assign("IPZXTSCMPAUYJJHCYQIKISYRPWNFMNJGDLRMVJLBMVZDPRHZUNCNZFDPAXTVAOEKWQZOGZEEBNIZBEMXUTSCHGFTOSTNESQFGNHWPSWTUDQUADLOBECJEVMALVHHDPPEUBHKWKZSORMIOKTGKDLWOHUQVODHRLCYKYWFXXQJIUTGNRGYRHJABWMMGYFVFKGFPDTR");
    msg.plan_eta = 1480556766;
    msg.plan_progress = 0.05306866751469075;
    msg.man_id.assign("VLQPULJLROSMIKQTLCVGTCEOYLFSGKSKCINTPDMFZRFUSSPAKFEMGWHOVYTJSBC");
    msg.man_type = 36058U;
    msg.man_eta = -392191945;
    msg.last_outcome = 70U;

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
    msg.setTimeStamp(0.7527550851666613);
    msg.setSource(34530U);
    msg.setSourceEntity(247U);
    msg.setDestination(4471U);
    msg.setDestinationEntity(162U);
    msg.state = 81U;
    msg.plan_id.assign("UCRWRDPSFBSBHHGTDIONYPNBHUMYQTXEYTCHIAIBJFQYSCCFVZKLVXAIKFGMKTHMXOEWXJACLMDZZGFXYVZUQPBLWMSAEULLEFVJWPHZPBETPLGQGPROUVANEDYFUEKDYIFVDDSSKCTMLXSWHGWEHOQJGRWTKJLDJAKNPTIBAHLBENOQOUYWYZNLQDNSNAQACPMOSOXK");
    msg.plan_eta = 535313605;
    msg.plan_progress = 0.36927519350885274;
    msg.man_id.assign("ACDPOUOVTWELDLQTSZZKWTQLVXYDPUOMXWECMMK");
    msg.man_type = 38714U;
    msg.man_eta = -687004804;
    msg.last_outcome = 1U;

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
    msg.setTimeStamp(0.5697395377852491);
    msg.setSource(23013U);
    msg.setSourceEntity(1U);
    msg.setDestination(1701U);
    msg.setDestinationEntity(156U);
    msg.name.assign("PROHMWOKSOPDLVXHASEBVZTPJIBSIRYQIVUJMEYDQDYXHNCRYAKAEMLFWXSTYVH");
    msg.value.assign("POMVLPBEKIENBKQIAARYVPGQHPLANGXHZBZJILTCJSGLFESDUFKSUULVEYUXQAZYXVRPJZWRRCCCUFRMQMAGUHNOSTEFELGPRKYHKLOTRMGMWONIQBDTNQTSSXBEQWFMOTVCIFBMIPSAKPXJDKXELWXMNWAHHYVHTOWQWGEWJUNJDZODHPITNDPFSSZHBCSDTAFZHUXXQGCRM");
    msg.type = 166U;
    msg.access = 68U;

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
    msg.setTimeStamp(0.6470408130781548);
    msg.setSource(24039U);
    msg.setSourceEntity(148U);
    msg.setDestination(18374U);
    msg.setDestinationEntity(89U);
    msg.name.assign("QSUQIWQEMBUHDCHJAVPOOYSWZGLTRWKNJERIVHIASHGECWXOXUNAFCAOFFSBPYEVZGCFJBFJVHMLSKYJBQRXYBZLRWLTTOGKSKIVMIKRKTCNFGFUFPHAGWSKWWFVJXIOTAKOHGLJPEXMQXCRTNZXNOJLERMIMYLGDZ");
    msg.value.assign("SJHSMPVCIZGTZEHCUJCEDAFJWOUUAMDMN");
    msg.type = 198U;
    msg.access = 124U;

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
    msg.setTimeStamp(0.4828475781469217);
    msg.setSource(33925U);
    msg.setSourceEntity(117U);
    msg.setDestination(17124U);
    msg.setDestinationEntity(237U);
    msg.name.assign("XANMKZKNTVYAOAGAAIECPKUSXJUVUPGYYMGUBGKJTJEVDXMHILFSFMQRAQCTWEYMJIWOTCBFCCVIMLOKQUPWASOCXVZOLEZBLHPJIMOLBGXFFIHNNURODEEOPKQWBCNAZWSNVRQMTSWDLDQKKMHNRLTESUOZYRDYHQAUJEJSBFZXPRWYYIPBINQDQKDGQRVZJXWDHLDFVWSMCOXFNYTRZFHHKJGATEV");
    msg.value.assign("FDHLBONPNDOHZGBUQYCSFIRGBQGVFWKUDTGBESHILIVULDJZJMVIWVLEWQSYLRPPZXRMEURPEKZTRSURXEFICJKCDVQPIIHUWSYTSMAJZVOXOUQOSJPSPVBBZAEFXNKKBWGXAAICDHALYMFBARAUMWVAMELFUFKAZKWGJ");
    msg.type = 108U;
    msg.access = 72U;

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
    msg.setTimeStamp(0.861588907104975);
    msg.setSource(8791U);
    msg.setSourceEntity(61U);
    msg.setDestination(21682U);
    msg.setDestinationEntity(88U);
    msg.cmd = 33U;
    msg.op = 222U;
    msg.plan_id.assign("EGHCMBRBRXJGTADWZUPCYFRUPMCEEFPCGUZZENBKYHLIRKHMINVYGPLQEHDKXSKWYEZPPNQBWQUIETNRVHIJFLYUXLEOTXDZMDMZAPYBQIQTKYOSZ");
    msg.params.assign("BZIGQXTYFDHAECFSKINYEOQHMHHPLRZCICMKFHCHXMBRSAYTWIZSKUBYRBNVHXFWRHKKZJXGY");

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
    msg.setTimeStamp(0.9583663742341927);
    msg.setSource(27876U);
    msg.setSourceEntity(82U);
    msg.setDestination(3333U);
    msg.setDestinationEntity(50U);
    msg.cmd = 71U;
    msg.op = 55U;
    msg.plan_id.assign("BRCCUAFZKBWKFPQKIENUAIZJCXDENKBBCDXITPEDZJLJKQBLRJLTNYAYSFUSJTVDXVZICJGERHIOVWUYERWPYTXVGAQEPFWBXJ");
    msg.params.assign("RHHGFMMTPGEOAVMXBFRMEYPXZRCRRIKWYZLUSAMZDONHGUWWQCWOJZEIQKKSAXNRISFUKXONNAOFCSBTBBAOCXHZKRCGGJJDXJANWXUQREMUKXWPMYPXXSGCFVSVFIGDAHVDJPAKCPQHQFVTPBWRZQHNBPTALTVWHISLIGTJJJMUULLFBECLGDEVODHKTVOFLDIODDIENPJKWNZIIZYTBUEZQSMZYFQMYQBYYLYQNTGEEUVTPYJVK");

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
    msg.setTimeStamp(0.7716649019005004);
    msg.setSource(4265U);
    msg.setSourceEntity(97U);
    msg.setDestination(50770U);
    msg.setDestinationEntity(104U);
    msg.cmd = 185U;
    msg.op = 84U;
    msg.plan_id.assign("MDRVRZPNOSGQEHBRJLXNZLDRIXOVMDYJHMVODZKZWRAWDBPJQKIXQFLVFJMUJFRRIEZJVDWEAMGUZNVTBRFEISTKFUCXXXTLIYVLAKXPSWPORGIYYVCYNQPHSGCQONWTSFIFIBXYEBIBPIPSSPYEOZAWUQMOHMBDHAPGFHHGAMNNSUFLWDJJGNNLQLBEZABSQJZDKUGGTTGYHEVCMWNXJWXCHOTSBALAYYOCHTUKOWACMQULVUDC");
    msg.params.assign("NAYNTZIMIMCQHIQOPEAXVEGRIQOHMEJSZTYIOLRNLRGQUXRFBHGQOXKCLTWKAPZENDLUBKJBTDCBLWBAPEDVXCMSMWGGUJLJCFZYCVUFFRQKVJVPTLSWIGKHIUSYGBWFEGADSQISXGPANUBFMJOJCKDPVVORWNTFPUMVRWAHYSKONRBSZBTTWORRCXKJKEHNEIZPQXCEIHZ");

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
    msg.setTimeStamp(0.7974037765825226);
    msg.setSource(12170U);
    msg.setSourceEntity(77U);
    msg.setDestination(15775U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("DPKDGMLFPGSKHQZBDWWKMNSBFSIZUJNRXSQDQHPJORTJJEQVCWITMKXFJHCNIHKAXEJOSYALOZBNVDTOIPMBOLAGTUGFHFOSHLMVJRWPJCUNXELCCTXDMBEKRIBQFLYVYDCARCLUEEDGQCTZOLTVOTMPANTPURUBIWXS");
    msg.op = 34U;
    msg.lat = 0.8967938187895023;
    msg.lon = 0.46503301406375774;
    msg.height = 0.12320138888457444;
    msg.x = 0.47351811561728296;
    msg.y = 0.4339355591181484;
    msg.z = 0.9665992615386897;
    msg.phi = 0.29815818687670503;
    msg.theta = 0.9484735249883478;
    msg.psi = 0.0665471740423823;
    msg.vx = 0.3102276737555436;
    msg.vy = 0.27240992137082476;
    msg.vz = 0.3511126634617562;
    msg.p = 0.3508193652022543;
    msg.q = 0.5729425060431468;
    msg.r = 0.19090594000358607;
    msg.svx = 0.8713337645139095;
    msg.svy = 0.3063177316804586;
    msg.svz = 0.17274504386545952;

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
    msg.setTimeStamp(0.28193732576457775);
    msg.setSource(5202U);
    msg.setSourceEntity(138U);
    msg.setDestination(38660U);
    msg.setDestinationEntity(41U);
    msg.group_name.assign("GIQWBAVZRXMDMXIWQBGNSRHFNYVBBSUHMWNJLHIQAHSPFTIHNIZNPOPKKGZVDIVWEYZKIQOQICFFTTEQBTYWNPLPWGNDEXPCPQLYGRSCQVMESSQBFEJXJWEMFLATGKZDGNKLVCMTJVAYJCDLWAYTXVQCURJOIFZAPZU");
    msg.op = 120U;
    msg.lat = 0.9682901238275284;
    msg.lon = 0.47495697936682035;
    msg.height = 0.6514800731409509;
    msg.x = 0.2283245589927031;
    msg.y = 0.06602432797079749;
    msg.z = 0.8858897603716659;
    msg.phi = 0.6225180541274165;
    msg.theta = 0.2103324811153977;
    msg.psi = 0.959705606770305;
    msg.vx = 0.6100360084915788;
    msg.vy = 0.5497432143297813;
    msg.vz = 0.44429096971391624;
    msg.p = 0.35054407092651785;
    msg.q = 0.8840584753123738;
    msg.r = 0.5672607222090518;
    msg.svx = 0.8079160902743255;
    msg.svy = 0.6634249374421543;
    msg.svz = 0.8291466424500564;

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
    msg.setTimeStamp(0.022323092614035756);
    msg.setSource(50639U);
    msg.setSourceEntity(202U);
    msg.setDestination(1157U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("AFFXAVZGJLKLPYBKDMWTHKOISFULLCGWNDQRPCUCAOAHJSEQDVOPVRGVNSUDZHZYZYBRUCMEQCOUDWUYAIMIVORMEGINWJGITSCEJQZUPGTTTEYXVBAUXVTPVFGEHIXYXASFWUYKPXBCAOHROIINWFNWXFILHEGBRADLPSTDHTFKDJXNNBBKLJRTAWCNRHKRWWJSBEDOMSQSJYSTQJFPEQNBCMCULZ");
    msg.op = 36U;
    msg.lat = 0.9146105105017861;
    msg.lon = 0.04032211562961918;
    msg.height = 0.884775905087001;
    msg.x = 0.4767642399600236;
    msg.y = 0.014385561998971008;
    msg.z = 0.08103522256541651;
    msg.phi = 0.9201012020145132;
    msg.theta = 0.421012296140566;
    msg.psi = 0.1075687279728742;
    msg.vx = 0.7176537579387902;
    msg.vy = 0.07411301838060458;
    msg.vz = 0.28599658086871405;
    msg.p = 0.5372681933123749;
    msg.q = 0.0696773023931867;
    msg.r = 0.8600791550121115;
    msg.svx = 0.9370753997995175;
    msg.svy = 0.5060567032222172;
    msg.svz = 0.25455925866457463;

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
    msg.setTimeStamp(0.27375754969588073);
    msg.setSource(47041U);
    msg.setSourceEntity(168U);
    msg.setDestination(16699U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("WLGKPWUMABRZJLHABWOSXEPVWKEQFJMLUNVSYZWKQYFQTFWGTKULTETAOZEVXUNPVQUDSWIGYXXVQBLNXYKDVUXYHSZJJIPTZRHIQHKBNZWSMDRDGOCIHHIVMBGZCXNTLAIYABCEYOHIWTBSNXRDYMVOGWQODCJFVTTZFETJANBCYS");
    msg.type = 97U;
    msg.properties = 175U;
    msg.durations.assign("QNBXTOQGFCEMVDKRTEJMDAGUXXGOYSHSKZMUGDDORYWETHHDUCNCIBVXOHDXETIVFZHNJXEFESEMLNUNFOBCHGSFQRTGYPVSZPBM");
    msg.distances.assign("OCMRHSTBIYVTBMFWCAZUZPYWHFJOLSSFLTRQWIMPHIWXSHNEBUVCBBZCPLQPZLHVFJIOAGATIYECUAKCTQHSCWQEXEGRIKYMZDBBSG");
    msg.actions.assign("IVMKRTLNHSJIYFARFLFLRYIIRBSJCPMOMTWBLBGSGVAPSMHVOEFRQJWOEEBHUTPGJGJWCJWLHTSJQFGDEHKOWTFPZQJHMQMAAGHIIUIHCGBTQOCPQCNFGADZPZANUJYWLEDEMERTDSVIKRTDCZUKKLNJYRXOBDUBEAPKYYVOBKRFQKGMYOCVCNBZQQTXMWVYTDBOGFUNX");
    msg.fuel.assign("BVMLXAEMFSEZPFCEWUKONTRKBEWZTMIQXPSRIDIGNKBXLHGTGPTFDVWSUDKJVUZYEKHKDBMFAGCPYRNPDRT");

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
    msg.setTimeStamp(0.8442656730448335);
    msg.setSource(14238U);
    msg.setSourceEntity(243U);
    msg.setDestination(33429U);
    msg.setDestinationEntity(106U);
    msg.plan_id.assign("AQSIXHMHTHPUPSTLQMYKMVLRAXTYPVHRAITDWHKDTDMGNPUOEOXSRIQOBSNUZZBXVLOZBVDQFKWBGLXMUOOFDTCPKCFUITHJAPBVKKIRLNNGHVMBLVGYFGNZNOIWEYRAQJD");
    msg.type = 38U;
    msg.properties = 197U;
    msg.durations.assign("QTWQPXVHRAAFMIFVYZRWQTRBPWGWSESUHRIQFMOKBKVDYLTYHXJKFDMONRALVQNMUICVKNKCWZLVBLAJEYSSHCXBFDNHESCCCQMTZEOELDBHNSZTPNVEYGIVRTDKBMECTMARYNGLSOLXQKWYYWDSLDPUPXF");
    msg.distances.assign("SVNCCKRSDXRXDPZMEWQJJSXUYHTUKGOLCFKUBTKHDCJYVOMNFJTBBGAQIZTPUXPLPJGWWEBABBDBQQYNHNDRAMSZFFZONGZVGEPYHEFACFFMSGOGMKICDEZLWTIHXWSDGMUZAOOUFJJRLIYLRXHXDCCUBWMHQJVYOLSACVTQLOBMUNYFFHHLCPQIPLTZDETQNVJGSAIZXAAIEZQ");
    msg.actions.assign("JMXWLVTUJQKFVTUMUBREOMFMIGVHEBSCGRVSCEYXIVXFMIDULYWKLTQLFTMSQOXFRXTUPBANWAGYYVAIHWYAZOQVGGOPXXVJHNUARKQPSGGYNZNWINVFGNWPUSIDNEBAJXFJFHNDRBGPFFSGSRVCJRLTOIHUWTKTLDMBQDXOEPWOBLDJMEQHQZCDYQCPLYZJEM");
    msg.fuel.assign("UYSFJKIYDECFRYRXBWPUQQDKEWWHDMNBNOPIBSZEAPFBCDLUFONOYJFEEGEIUSHGHDDIOOHYAUEXAAOLIQPFKLLTOZPHULGSAKPIKXRGSSCJUXVMKRGAHVUGAHCGYTZBTQTYKCNJTCWVRXMJNCGZMNFKVMOADLBTOPHXQRRBTURMIOJNCXPZDUIVEQXNJBZ");

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
    msg.setTimeStamp(0.8691831129044715);
    msg.setSource(11493U);
    msg.setSourceEntity(96U);
    msg.setDestination(55253U);
    msg.setDestinationEntity(156U);
    msg.plan_id.assign("TNDAADRJFDEYTYWBVPVOGLMBOIFMFXKTBCPHLXXHRBSKYAUIKPPMQQILCOQZEULYVVAXJHNIXJUAIWZYVMFHLKCEZMGV");
    msg.type = 128U;
    msg.properties = 76U;
    msg.durations.assign("IFWVTUWGULFHMIBCSESWXTODIRMEGZCVTOSKEBCQOHCKUIDOQNDZJFTSKLRHATHKHNSERRWGPQALZXZPCMFBVMPVUZAKFCXHNVQHNTJAZNLRBZFATXCMBBKEGXHUYWCPIWYOJJCVRIDLKQRXDAYPVDSJBYOYGXKVLAOSDZHHOZEYUMBUTSQYMLWYRLAZKEUXPNNRCGPRFEIDVOJMBQPUFVEWUYBMXXINDFAGYMGFSQPSNGWTPLJGITJQDNQI");
    msg.distances.assign("PVMSAMVQQNHQEYXMKRRCBHIZXHOJQIPMFGCZBHWWIWMOFWFLSKCERMZFZPNGTZCVKWFUGHEBKNIDKWFSESTROBYSICBEXZJGJSTAXRRGNMGXNDLGELAYUJHSETK");
    msg.actions.assign("GUVRSMFGCZETESJRSIUAHXWWXSNOMDTLOVLVMYPGWJALFRZYZCTIGSSVEOQPBMLHIKEJQTKXJDNEMOZRNOIPUZXKVPEWFAXACABXSDDNSCOEQOHLYQSARKLILDVMNPTETHTWNSKJATDKIVBQYQUZGQXBRUFYYRZUWBFXKJJNFJIYFHBUZLCNIXQTCYLDMTRDKUPAMEOMRPGHHBJOYFWAMAVWBC");
    msg.fuel.assign("TFZSNGPJTXPHWAODPHGZMOQAZGYSBQPLSYKAFOVNMQLEKYU");

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
    msg.setTimeStamp(0.3151944542135734);
    msg.setSource(46508U);
    msg.setSourceEntity(8U);
    msg.setDestination(57901U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.19436870639459025;
    msg.lon = 0.6635529852412999;
    msg.depth = 0.08520258625540456;
    msg.roll = 0.5545653800629111;
    msg.pitch = 0.6987095490213865;
    msg.yaw = 0.14152240699996577;
    msg.rcp_time = 0.9198804753139299;
    msg.sid.assign("OIXKWFUCDIZLIHUXSLCBMNFBONDKWFOSWJYQQCXARPUQGAHIVSRQUCBMYVENKHKXEJZETSSRVN");
    msg.s_type = 51U;

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
    msg.setTimeStamp(0.007918057898612774);
    msg.setSource(38007U);
    msg.setSourceEntity(244U);
    msg.setDestination(61316U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.9196193363815323;
    msg.lon = 0.1246042141185899;
    msg.depth = 0.5915217515240899;
    msg.roll = 0.3185645929210599;
    msg.pitch = 0.7419907249398527;
    msg.yaw = 0.5674452301497985;
    msg.rcp_time = 0.6703404424747015;
    msg.sid.assign("IVFLGFYSDFJEVXUYMUHSWCTBTDMCPCWIPNEPZVSEXPZRVNQBSGRDPIZLDKOPZEJKFQCEIUETNMU");
    msg.s_type = 239U;

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
    msg.setTimeStamp(0.14247672705594505);
    msg.setSource(12423U);
    msg.setSourceEntity(245U);
    msg.setDestination(23732U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.0938279942460637;
    msg.lon = 0.9361297334276565;
    msg.depth = 0.6870043474531017;
    msg.roll = 0.4709156361883694;
    msg.pitch = 0.6395430305568467;
    msg.yaw = 0.9506855115686357;
    msg.rcp_time = 0.6607513748211944;
    msg.sid.assign("YYPVPHKVCWHTCZDZEZMIQCNWLBYBJHNBXXNTYLTBVBUISGBZGUJYRFAWXSDFFMMUQPHEKAWICJRNELKHOZLMJVMBPIZERFIVMDFGHFKFAAVGITQPLDAGOQGGGTIOJWQGNVFHOMXAEZOPTWJCIYOSUSMTBALTJYPQLYKUXHRJREUENCZEROSLTVDWCXQJRDNKXVYAQQUHKBSCISKWUAKSPKDIZLYOPMTVDNFXOCBURW");
    msg.s_type = 218U;

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
    msg.setTimeStamp(0.26007048639614505);
    msg.setSource(23098U);
    msg.setSourceEntity(2U);
    msg.setDestination(41938U);
    msg.setDestinationEntity(176U);
    msg.id.assign("EATVUOKFVHOEKYXSBKQPMIIHBNYNDKOARVYWDMARWIKXPGWJSSBPPLAGUSYSIYJWSHVCVEFQKUGQQBPVMMZLOEVZDKDZQXJRJPPOMUSQEDVDTXWCCGIUICTRFLCYXFHFQJHXLZNOMAZERGTAEDPLWQBJMZEDNNORQHAFLLTSEDWOTZRGARBPCCCSITMUAFBKXHYNBYGWLJVJLUQZVWYHNXWUGINBNFJSHOY");
    msg.sensor_class.assign("IVRXDUQRLOKMSWQHOWMOGQMSYBCRHPFPIXQCIKGARNEYVVUYCDQJPCBTSPLFSTYLVJHZXVZMBACGEZPI");
    msg.lat = 0.8598813850161048;
    msg.lon = 0.3354878190516991;
    msg.alt = 0.651295362883699;
    msg.heading = 0.16663813740446165;
    msg.data.assign("BZRHNOBIMQGJRZLTVCQPZLVHFUZEFRZIMDLFJADSJLRCNQEWUKOEKNXSFVGJSHBAOSGVGOODWSWWBYDWHXWWAYUPYKQKZZPDCNHVGPTVDUPYCRQQONLJNRBTLCPHKFXZXSNHMVIBNFEPXAICUOISKSPBHNSELATTYOJZEDRRAWLAEJXFNMTYVBMXHWQKTQTGUKLMERWMPYOIVJUIXYYGUASMQJIBKBTUIMAKEGVHGRACEQGCCOTFULPIDCJD");

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
    msg.setTimeStamp(0.13649930808485278);
    msg.setSource(30082U);
    msg.setSourceEntity(254U);
    msg.setDestination(24700U);
    msg.setDestinationEntity(206U);
    msg.id.assign("RFOGEWRTUVWXGIDSZNNDASZZBTKBLLVGARTWCESOZMLIWBCBCCYJNZIQNHOHAPKHOVGXJHPDNPPHQEJMFOXIEJYMUAUIVEZLRRMOSXCXWRIEJAPBTKRMVLFPYTHPXFLVXMSUBVDILKDEYZTTANHEMSQSJNCORZMWAJUPDNLKCKYGFWPFFCDTHGHJUYOYKUUWXKQQWBMCDJOVVDXBPQNUGNJWHMQZGYFYECAQAFLIBALSDQKVRGFQ");
    msg.sensor_class.assign("JKMZFCFLRSVNIPWHAJPORTIVVHWGNDQBWPDXYFBIDTXVXNGDKMJEEZAKTGTKMTPDPZTWFCAMJ");
    msg.lat = 0.32225145207817607;
    msg.lon = 0.2347156617911783;
    msg.alt = 0.846116232757145;
    msg.heading = 0.806315691146155;
    msg.data.assign("PPQSCMOXSARSYKMRGSYXPNQXQDXICCUUETJRKVXBZZWYJDACVLJBVGOHOEQIMSMJCFATTVXEGPNFEPOYMDBISPWCDGWFDYIZTIRAQJMZEAWUEPCWARHNMQTBKKOHVSSDRLFFZXTNBENHOPJYWMBOFFIKQKPVVALAWLRQTFIRGNSZVJDJ");

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
    msg.setTimeStamp(0.9676350374739052);
    msg.setSource(41333U);
    msg.setSourceEntity(59U);
    msg.setDestination(27966U);
    msg.setDestinationEntity(148U);
    msg.id.assign("JZLTLCOXXSWIYBYDEZXCXKXYIRHCXLAVNDZHTNNDPCPSRQGWNSAWSNT");
    msg.sensor_class.assign("ZGESCQANPQWUJUQCJIMLHJGTPZFLMOLARFCYCRKVDAHDVJCORXEPPGRSFIFEFKKTDPPIYHAF");
    msg.lat = 0.565145838526728;
    msg.lon = 0.9135503593563118;
    msg.alt = 0.5299291504715871;
    msg.heading = 0.431891496680042;
    msg.data.assign("IZGLMCKKLZIMSPBJNRXMXFDWSAIQNSOMTDTCJMXDETTDUEWTUEEZIXUSPFONYBFSRBJILYXHHQVDEOUQRABWBVLXYOGCKUHDJEOERPJEYNNY");

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
    msg.setTimeStamp(0.452255269438966);
    msg.setSource(48998U);
    msg.setSourceEntity(102U);
    msg.setDestination(2789U);
    msg.setDestinationEntity(126U);
    msg.id.assign("DOYNNLVYWVSDBQUTVWLISEM");

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
    msg.setTimeStamp(0.6858658919835714);
    msg.setSource(15381U);
    msg.setSourceEntity(138U);
    msg.setDestination(34250U);
    msg.setDestinationEntity(3U);
    msg.id.assign("NANLWNLTILGXJKCEWZAP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OJBMCLAZBEOPXTMXCYPEJRQMHOLBBUDREMFYGKPZXIIPSADUWVFPRALBJQQNNMHQPVUWRAIHXIFJILETWTGHMTWTUGCSTKZSOWDWSLKFQBZJJJOCEGDLHZHYQPZKUZNVKSOKUGQYSVXKBOKATWYCXPAVHJEGCDHFOUCAG");
    tmp_msg_0.feature_type = 31U;
    tmp_msg_0.rgb_red = 6U;
    tmp_msg_0.rgb_green = 89U;
    tmp_msg_0.rgb_blue = 84U;
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
    msg.setTimeStamp(0.3393176872097021);
    msg.setSource(21428U);
    msg.setSourceEntity(224U);
    msg.setDestination(49011U);
    msg.setDestinationEntity(184U);
    msg.id.assign("XPJURKKXZUPDVSTHYAHLIVKFTIQWECFYRLQCWJUFBIJMOXNXACUARTXVRLVSGYLDNTKMTDEWUZCNOTOSJGDGJFQMBSISOWDQMGIBKHUUSV");

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
    msg.setTimeStamp(0.04645196463174772);
    msg.setSource(33054U);
    msg.setSourceEntity(232U);
    msg.setDestination(31595U);
    msg.setDestinationEntity(114U);
    msg.id.assign("CFCESPBDLPALNKFPNEXJXGGCJSKKUGUBSWESGABAS");
    msg.feature_type = 72U;
    msg.rgb_red = 151U;
    msg.rgb_green = 123U;
    msg.rgb_blue = 62U;

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
    msg.setTimeStamp(0.1374142139101867);
    msg.setSource(64920U);
    msg.setSourceEntity(232U);
    msg.setDestination(22088U);
    msg.setDestinationEntity(213U);
    msg.id.assign("BWOJLGZLHFLAMDECGPNYJRRMLJENTCBTKNTGGVEPIJJHYYFWXWQCEBXMWWXEAXSSNNRVCORFYPR");
    msg.feature_type = 158U;
    msg.rgb_red = 181U;
    msg.rgb_green = 24U;
    msg.rgb_blue = 31U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.17793027844050535;
    tmp_msg_0.lon = 0.11961634973091673;
    tmp_msg_0.alt = 0.37846238857934;
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
    msg.setTimeStamp(0.9458026572669916);
    msg.setSource(44201U);
    msg.setSourceEntity(123U);
    msg.setDestination(8101U);
    msg.setDestinationEntity(248U);
    msg.id.assign("GPKNFEMKIGVUMGQTAWCQCDWAKJV");
    msg.feature_type = 166U;
    msg.rgb_red = 63U;
    msg.rgb_green = 227U;
    msg.rgb_blue = 85U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4972960312939789;
    tmp_msg_0.lon = 0.5551682303426753;
    tmp_msg_0.alt = 0.2626257756032291;
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
    msg.setTimeStamp(0.5941177281770148);
    msg.setSource(59032U);
    msg.setSourceEntity(66U);
    msg.setDestination(41103U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.24979561244691895;
    msg.lon = 0.2990364802458705;
    msg.alt = 0.8051854668251944;

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
    msg.setTimeStamp(0.24605633762981372);
    msg.setSource(12584U);
    msg.setSourceEntity(30U);
    msg.setDestination(47888U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.4786055754334654;
    msg.lon = 0.05448156611276356;
    msg.alt = 0.33747042638740565;

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
    msg.setTimeStamp(0.4072387330714665);
    msg.setSource(1885U);
    msg.setSourceEntity(84U);
    msg.setDestination(42952U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.9676708419688688;
    msg.lon = 0.21800682377597136;
    msg.alt = 0.17460346041822916;

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
    msg.setTimeStamp(0.9107228238793188);
    msg.setSource(14528U);
    msg.setSourceEntity(220U);
    msg.setDestination(23593U);
    msg.setDestinationEntity(43U);
    msg.type = 234U;
    msg.id.assign("WVDKQLIAXDCGXKSBMZEUTICVHCKOMLGATRNDDKADLLBUYCRGUTRZOWHPNVYTEEOQXAUCJBFTKVKWSWREJXPYPHWEEREXPFAXFWUPQJRIERJYUCMNZWATHEDFSNYAYSMJUDVOCBNVSNLJWAJIHHFIFBZWCO");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 162U;
    tmp_msg_0.step_number = 254U;
    tmp_msg_0.step.assign("RALHXVNYUSBLLYVYGJVKHHCQRLPIKOYHJUURUFIGDFQYJPJWDFQKXFNWMKGRBAEMUQOYBVUPXBVMPXWDCLNPQXRDOCJBONWFEAPWUJUGEVHKTMNKTCLFBENVMSRGEMJKIZORUASAAZTWESZPOMCQXGCIGVTDBIAOWHKRINAHSIDFQYDSBOCNIBETMXSWRJAHNDVSPLFLVAZHEZZYITGWULWYTYRCQ");
    tmp_msg_0.flags = 83U;
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
    msg.setTimeStamp(0.3989844644991404);
    msg.setSource(29630U);
    msg.setSourceEntity(231U);
    msg.setDestination(18475U);
    msg.setDestinationEntity(206U);
    msg.type = 230U;
    msg.id.assign("JBBVYUUFORAXXPDEEKDZOAPXAQCVJTLKRFWIDDVIPNHDQGLLHXRYNCMKIQOEVUXGONUWZYNIUSM");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.23135669701790873;
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
    msg.setTimeStamp(0.7615929158993631);
    msg.setSource(50264U);
    msg.setSourceEntity(8U);
    msg.setDestination(9168U);
    msg.setDestinationEntity(34U);
    msg.type = 83U;
    msg.id.assign("IPDLXCJKHFYEEGOQFWYBOJVLJMSXQHOXRBWAKDIYMAEPXVNZKCBASAOIKHOVRLWTCVSTYKCSHQWULQRHNTSHAIWVVYWFNWSGXVZJDHOIPCZGGDLCZXRLEARIOTUKNJGBXFYTQJKSUYYUEDVHSFQTMQFMJMXNPDTDMITLEKMSMEEXHYFSZUZUPAIYJLAFCNUEWRNXRZTHGAJNMUNQBPIBGGQORICPAZBTRCBEPU");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.29268021935197686;
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
    msg.setTimeStamp(0.6354128054770313);
    msg.setSource(1210U);
    msg.setSourceEntity(73U);
    msg.setDestination(27525U);
    msg.setDestinationEntity(228U);
    msg.localname.assign("JICDLLGWKXTGOTZAYAPJNECACGJDHESGWOMCCKHVJIBPVNCEVIKNKOQCFDFRMFUAWPRKLXFLBZOQOLDWNIHNRUMBHKHXETIUYFLZBZFFCRISCQJHNEGPRLNMPISWVPUPMVSDIGXBHDFAEVLDYKBWUTMOJXXQYRJMRAYSVPIEVQGJXQSAZUQOTSBBXYNISTNAVUUWFHXHLWPRTDJMDVQZYADUKZREKZYQULTEQWYKTCGEM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AMIHMFVHTLVDBNTZMMEYLANIVFTLJZGBQMV");
    tmp_msg_0.sys_type = 160U;
    tmp_msg_0.owner = 63626U;
    tmp_msg_0.lat = 0.24568885243778327;
    tmp_msg_0.lon = 0.11382586503654801;
    tmp_msg_0.height = 0.3013443921121154;
    tmp_msg_0.services.assign("BQRKNPTDMATAJAVLHSCSGZEDKSBIMAZTWPBACKNDMMLYYVWOEZPFINUFJMGNMSTJVSWECRNGEGZZUPDFKBXROXPWZMHRLVSUQXPKFUPKLOKJDWXAQTOBCVXTVFEOJQUWAWWQVDJOXLHCARTHYTFOKYINIXDIFEIQHWCIGPIMIPNDFRCUXZRHNLLJHCA");
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
    msg.setTimeStamp(0.8169276697485209);
    msg.setSource(44508U);
    msg.setSourceEntity(136U);
    msg.setDestination(42884U);
    msg.setDestinationEntity(61U);
    msg.localname.assign("RROQLOEGVKJEKRRHNUPNJMXXHYKNQAPFM");

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
    msg.setTimeStamp(0.5698148121436486);
    msg.setSource(55930U);
    msg.setSourceEntity(139U);
    msg.setDestination(20637U);
    msg.setDestinationEntity(239U);
    msg.localname.assign("UNCLWHCRAPVCEYPJKGBCDKRQMVNYKCPPZAKQFXOOPSRFVMIBQ");

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
    msg.setTimeStamp(0.45997982375160795);
    msg.setSource(29322U);
    msg.setSourceEntity(4U);
    msg.setDestination(64150U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("RRXFZISJJCGXMLCNKDBOARCYDYVPZCJFZDALNJWCDJGPGBQEWFTOEMVBNOSGGBVPBFULUMVNJPLEZVMTCGKPJQKHBULFDXHAJYGMEEVHRBENIOHDUDFPTKOHNXKZMISMST");
    msg.predicate.assign("FCGYXCMLWWGYJMHGPNRMKKUOQPZJRMZQOITLNAETETIYEUFITSKZTWBKQPUYCXEFFZNQFJKPED");
    msg.attributes.assign("VJLWIUQRMUKNPRTXPYDRCWINWSOSFYASRKVMCHXKHVURFDYPTNEXIDJQWMTFBJIKPVUIULIZELXEHGTFOYXEZTREUZOJPDSHIDCHXCLQHSKJLYHPMIAYNLJNDBKIWGKQESTOZAEOVCMQBMZLZGOYHNLSJTXGCQMBFZMGGAUQGXDOXQHBVDUKNPCMHYBEMVTRFWWAPJVRQZGJGQNYLNTWSBFRAKFGKZSBFUEORAXUCVSOFYNALVPTDACZDBEBA");

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
    msg.setTimeStamp(0.6299417196456203);
    msg.setSource(59651U);
    msg.setSourceEntity(183U);
    msg.setDestination(61507U);
    msg.setDestinationEntity(188U);
    msg.timeline.assign("WXPOUBPERZZBVKFDNIAPETZJLWZSCUFJRUJXTOSUJGHBPTSAWCMVYEUTZCVCCZOHQQEHYYXTYICFFQXJMM");
    msg.predicate.assign("XECRWUMDBIYGPLGYGVTOOWDYEOQWHDIPAWONNNUJXSSGVLIQFUADSFGRHOAXVJEMERCMTXWKKDABNHSRDSTEHINHQGZXTCZZOKGBGEWWFZYQRMVPALLZAFUYCRXBFRDZMMCTSIQKCAXLOSDLSTMKACVJKLOFIFYKXPBQKHNWJOVFVJBIQHZWZQUHDJULKPTIILBYQFQMUJPWXYTYIURSMFTAJBTECRJZJSVHOAKCX");
    msg.attributes.assign("HQMYGOGLMBKHOUBMLNYMVLDWQHAJZEVXTYMIGIWUGMJGBKAZCQWIJZNEROJLCZASUOSJMKUCCLSFLPQNDKPEPBEXZGXMYRQQBWPHNYCFCTVF");

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
    msg.setTimeStamp(0.19637663180611198);
    msg.setSource(37197U);
    msg.setSourceEntity(65U);
    msg.setDestination(4739U);
    msg.setDestinationEntity(6U);
    msg.timeline.assign("RLZBECWQPNGZKVRFHJJ");
    msg.predicate.assign("MRRYSFAMBQCHBRGQHZLBKDCVHFJTZCYMRKJFEFNGOUZIGSUJOHTKHJQFMVAECUWVNXLTAXVSUMYDYGXASFUCDIKOYXEBMQZYNRXGZLKRTHKKQDWNWRJMARJOIEOHEDJETWMJZPPSULKLVISCTNNNUBLAWVPPNHPUUEVWILEMXODTG");
    msg.attributes.assign("FZRXUPKRCICXYKGVUSSKR");

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
    msg.setTimeStamp(0.11310472657528514);
    msg.setSource(17777U);
    msg.setSourceEntity(134U);
    msg.setDestination(29003U);
    msg.setDestinationEntity(104U);
    msg.command = 93U;
    msg.goal_id.assign("PQRLIXVNDXTHLWQAWVBEZZFYKOHTZPUWLIRRQMEEYCXMFTUNFU");
    msg.goal_xml.assign("GJTOYZTGFTIDOUKTQNFXVUWTAMAACBZWIGQRLMXFMCUJWXXFY");

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
    msg.setTimeStamp(0.4719706648321996);
    msg.setSource(27281U);
    msg.setSourceEntity(125U);
    msg.setDestination(24475U);
    msg.setDestinationEntity(151U);
    msg.command = 116U;
    msg.goal_id.assign("VLSDQOWXBVEWYCAWDJUYLZSGYIUDZMVHBPGMZJNEZRDQAEGZAJHPWPFRCGJSOGSAQBNWQJBFSQSZXXRHFLKCGHZMGRFECMNEQTLKOTUAYUKTXNDWBTLCYGXDECMAPZXLKYWRBNWHVEUSLBVVHS");
    msg.goal_xml.assign("OPQGMROJYHAQJFJWUPNP");

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
    msg.setTimeStamp(0.46711963315039384);
    msg.setSource(13402U);
    msg.setSourceEntity(12U);
    msg.setDestination(11871U);
    msg.setDestinationEntity(191U);
    msg.command = 215U;
    msg.goal_id.assign("SPRIMCOOQOJDIRYFSKSSJIBEDNFAYBWIOHCWZEKFJYNYXUGGKPVAWWFCMZSVKMTGWKCRNDRQORGNBPLFNPAILXWJOQEAHOBVKADPBGCZAGFZLZDELNXPVSQBXPTVKNOJUTYRXLTPWBYUCBYDJKXHJTCZZDXVAIQLURDLLHHYTICXQSEEIEKGWXAMFCGZUMJZTUTHQSDEVUMFQPKJBZMEHDRJWRCONREFIIUNLLWFAVTGAPSO");
    msg.goal_xml.assign("YDILNDHTWFJPHRPOIFXSV");

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
    msg.setTimeStamp(0.4753493219810945);
    msg.setSource(54898U);
    msg.setSourceEntity(95U);
    msg.setDestination(30087U);
    msg.setDestinationEntity(147U);
    msg.op = 169U;
    msg.goal_id.assign("PWTEGQFIBEJHNYVITMCOKVOJKUPTIXSWASRHHQPCVJZYGIOFBXNNHUGEYCMDWZYYESLGDIGQAFCMCARMZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OKQKFZDHBBDTLGASAMPCTNLUURGJMFXALKEFXITVKQNVRHAZOWZQPJSVNRQWRSLSEQIBKMAYZQZTAFLJSZXOHMWYOTRJVTAHYQCQBDGLJBJOCHTPZPPCBHCEFLROYRTCYHIECSDUYYRKVMPUQELKQGJIWXEDSBZUXCRXGVWCBSGHFOGNXJOMMODPYZILXUYJFTNIXZVWFVAMIUGMNFPEATAORCNFEKDKGKUDEIWULXMSEBDNI");
    tmp_msg_0.predicate.assign("DMJELZQDSCBEONLRJDMLOXZESAJIFHHZCKZVPWKPYNHDMTXERPXGUGTQVAITYVYLKJSMFEJSVVQWWIXXKGFADBSIEYBLUQJHLLXFNXMOBEFOTTPYFQCPCAGCVFYAEWVCGEIQGWBKOMJUWLQPNRBAZUMQLRUMDYRIZKLTGNQBGZDKSBNPSXWJVNEHNCXHBAIYU");
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
    msg.setTimeStamp(0.8804861201620278);
    msg.setSource(31882U);
    msg.setSourceEntity(1U);
    msg.setDestination(62166U);
    msg.setDestinationEntity(110U);
    msg.op = 158U;
    msg.goal_id.assign("QGGHALAPBAWDKBVNZJRBYGTDOYUERXAKCWUAABNRNOMKYVSFSJZDBMVXIOTIKXIAKLRPCKOGCHCZYEBUJHBISKEXYUYGMNQQHJJCXXGSNSJJMVHDJVJPTZWMOBTFFTZTMDEDX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RZNPGCYNJUOEZVJIEIZVBDLINVMSTUKPMLZAIIP");
    tmp_msg_0.predicate.assign("XLXNBIYUXIKEDCLSBFPVZQLVGUEGKOXNGARSNECZMZULFAEUTRQQMBXTWTUFKJZVCUUNQCDTGXCVARPOCFHIPHBOOLOSPBWDUFEMFALDLCQOTHDCGHNKWNQSNANTWKYIMCZIYYFYYGRMEVMAG");
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
    msg.setTimeStamp(0.34546600984578013);
    msg.setSource(19777U);
    msg.setSourceEntity(126U);
    msg.setDestination(40750U);
    msg.setDestinationEntity(150U);
    msg.op = 206U;
    msg.goal_id.assign("GQXDBOFMWXSVAZUOYBKJBLQMWLRAFXDODBHRVXQCZKYZTIPNAVTKWTFNECPIHYBOISASDCVACYFVRTGSHGVOHUBKNJWYXBLUEOAZMZGFDPJGDERAFJWUEHZQQNOWACLJTLXURRTNHYMIUPSBWR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AWXLLTGOZXDNWUOXLYDAIVJAQUUACFVTCGRGZLNGOHUWUKJFLWSUGZWTDGZYKVSXOTIENODRKFSPIANIYRPHYULPECCHJHOPFMHWDQPRKHVFVVVQBPPMBXISWJBHBLDIMLTJTVGDFEQMK");
    tmp_msg_0.predicate.assign("RNQFAAJXYOQYTLTKFQSZQWZJRK");
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
    msg.setTimeStamp(0.04623809201744822);
    msg.setSource(34495U);
    msg.setSourceEntity(154U);
    msg.setDestination(591U);
    msg.setDestinationEntity(164U);
    msg.name.assign("KFIJKJVIXQEUDADKCFJWSHUJEAVAMKFKXFJHPGWYTADEPIQNIICEGLXLLDCSTXLOWTZTLMNSCBALZROMONSQGGHETKIKFVZYWXCAQQXPOWIGPTFPLOVRCZIJFHFNRDRIYLAPKUBSZSOGWNDHOCYWQYMLPDQWKVENXCURSRKBZMRPJABRGNWXYBVBCGSUEYJMDUUZT");
    msg.attr_type = 226U;
    msg.min.assign("PUTJOFGBDJZSNZVFRATIXEUKLDVJDMHFSRGGMCUYQ");
    msg.max.assign("PTIEDZVZXSWWKSUXLZZGHLGBTCSFBQTBWOLUGDNCAAHJLUUHRMHXMNOREINAZBKJDGNXTZQUNCPOWXQCEKMVEEGFGRERWAIZWNODMGRYIMGEKOUVLUCMMQEUPYDJQYKYFFIUVCODOQEYBIGPHDNAWUHBELNNFVPCBTYWIRVZVFFQFXZIFRXAXDKJSRSQHLTVZSOQPCJYPMMKJQHSXLOBLRKPJGNTPYALDHCIYTAHKWRWKTBASTCAJJFYJ");

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
    msg.setTimeStamp(0.4916916715015641);
    msg.setSource(4000U);
    msg.setSourceEntity(254U);
    msg.setDestination(62837U);
    msg.setDestinationEntity(91U);
    msg.name.assign("LYDMQSQVBWNXEIZAMPQSEFWBTXDEHGRTBUENTLJOGIFKOPQPLPWKQIOJHOMZCMUOFEJKCSVCDVMDDRJHWVUYSAEJFVRXNPRI");
    msg.attr_type = 163U;
    msg.min.assign("HQZXGTBWYEHWGCSWOHRYQGUHRPOAUIRKBMBHCYRQXXWZPNOZDCKVXHREJAHPAMCEICWSFHDTZFXUYLPCUWOWJIRMTQTNNCWNRVBNMDEDVOBOUYLTJBIEOWMAUKPFLYAFTVYGEOSRGIKPASHSJPVLWMBEXACIIZELACLUFANOKSZDNKJKJBYNQTKIXUMFDFGIKUVPLSQFQEGSFXAJPHYUZODCTSJJIDDQJVBGMXFDLGPZLNVBRQLTMK");
    msg.max.assign("BNRIJMSEODRZZOCCPDVWSJSFOHJXXRTPRMIMVWMLJHDUUBWCJQXRIMMLBZPUQXINKRSIBRFKGSAVXTYKEZWYFJKLZOXPEGLNAZXTCUFVGUEOIZYUVBADQANJATVNUNTQQYVJAT");

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
    msg.setTimeStamp(0.2775888396013245);
    msg.setSource(3181U);
    msg.setSourceEntity(161U);
    msg.setDestination(19254U);
    msg.setDestinationEntity(61U);
    msg.name.assign("JYHVYCDIMMMYVNIBGRTLSZOUIGVINPRTGGGBPTVHAGWYIHPXGKSMPDJRWBNSEVFTUODXRZFWNYQLIBAPNZUKGXXMAHZWAUCUEIFAJADIPCVVAYFBBKFEYUOQWSEZXRJIQQQALMDVWCKXVCLFMZCJ");
    msg.attr_type = 30U;
    msg.min.assign("DRZYXVNEFEOYICANIMLNTFRKEMWUCRJBUFQHDNOGTGLJPWPLPFFFUXHSPOZJITOMYCZWJXTBZWCXTVTDEBOQKDPNJKIQPKAXZDJQUOEYTPTJTTASCDDIICNLIKJBGRECOWZ");
    msg.max.assign("HERNBGVOYSYFV");

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
    msg.setTimeStamp(0.8046657568217209);
    msg.setSource(32527U);
    msg.setSourceEntity(86U);
    msg.setDestination(43530U);
    msg.setDestinationEntity(179U);
    msg.timeline.assign("GDIWPLTDYPCBGNKQWBWFYSLRQLACMLCNHAYFJKMJWDJGVHRAUKQBEFLONNFONRTXWVRHUSOXVDPXTUFLFMAXSJYMXZCAABGTGWPEUCJJRKQVRNKYTXZMUWXEMZPSUOOIZQFGOQYEZYSLQNZFCTJTYHENHEVJUUNHISQKGPYRGMDZSFZBYPALVQEJKRKGRNDXHMCDIBIZAUZEHBEMOJDCIVBFOXKBVMVECPHRPLXSBPC");
    msg.predicate.assign("VLNHTBXREENPLFFNGAJMUKDBQHDMENBJFQGKXJODCOBJHLCUMSHDQLAZHACOWQSBFIWNGGRFSACSTXKVQBIDFDGUOUZNWRJTAPBMCMWOTOTZMDHQPMZXVYKBJYDZSWOVKJYGB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HQYXBGBDDYJFKGSVYQGYAJCYSMAEUDBHUMQMXUTQXYCFXUWIAFMFWQIHGBCBLXRUEWTMFUWOIZRALGJCUTHETGNSVREHLVRCBPQVOGARNCXWPSPNDYNTIDTCHROMIJXPOKZHPHCOFIRFISZBMNWNOZUTKMLZFWTTPAYQSZYLZYQJDQSZVVIOJDVWKKRVDNLNLQWJVEFXLRHEZUGJITZLUAPKB");
    tmp_msg_0.attr_type = 158U;
    tmp_msg_0.min.assign("JZKONCSJSHGEIDWECWOMRTECQBEXLWAQWOYOILEHBMQCEQQAZWLJGAKSYVBPBLZARSMMZDYPXULMLVJAYODGEBUEURDHNKSWHUPUVRINQBIZDFOKZTYKXCGDFDXRXJXSUJMSFTVRGSOIHFBPEORCXGTNJKYHTUOVAHCVFEZPZALQDNLDIMTFFYNJTQZNIMI");
    tmp_msg_0.max.assign("GJTVABQKBGVVKGIFWZVFWQITVKDSABFVHUNMMZUNJACNC");
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
    msg.setTimeStamp(0.2429789028160826);
    msg.setSource(7916U);
    msg.setSourceEntity(141U);
    msg.setDestination(34854U);
    msg.setDestinationEntity(28U);
    msg.timeline.assign("QROABAEPOVQIWVXTIHFNKVXVGSRZCHAUIKIYFJBZKGRWNKWIVKHGAZXYPINDJNLMTDKLBRCYPCBQACHDHOGSRAUFEBTZLPSQVTOVOKRGLDUD");
    msg.predicate.assign("JWDNNJIYFUYKJTMSDKWGVMGRIDWRBFQUAOERZKHOGQCXVALAJUDSAKKTDARSORYDOTIETNWJSMOWVHPJNGYKLLSWELWGVTAOBLAIPZGNROXUDYXIZ");

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
    msg.setTimeStamp(0.07357593857276612);
    msg.setSource(61244U);
    msg.setSourceEntity(181U);
    msg.setDestination(61172U);
    msg.setDestinationEntity(69U);
    msg.timeline.assign("TALVLPAXMVXINZBHZFOELEPVSOLIVTROIXQFKOCBFMVUWWXNLHNXLVJBRYGZGQDMSDKCLQCANATPRWYUWGNMGGSJTRQYOHRJUWTEMFGYLUILRYSXNYZQBDJOHITFWBVAIKDYKRP");
    msg.predicate.assign("EOCRNQSZNCCMBDPJQYNWEISLPTQGCVKVHWUASGJVBUGOPPSVQAFIMHSFCOALFDMVZRTMQQWOSIJUXUOKHTPILDRGUUIUUOKIMYTOPIHOKHAVBBZZVXYREHOJRPIXYTGFBWLKDZELWXBVJEFGBKGSRAEQMBNJPDBYMAMQNLDLJMEZQZA");

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
    msg.setTimeStamp(0.21570268579795038);
    msg.setSource(27908U);
    msg.setSourceEntity(97U);
    msg.setDestination(61264U);
    msg.setDestinationEntity(180U);
    msg.reactor.assign("GDQXWGWKUZEJCGEIJPMDFHNIYNYAIPSTE");

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
    msg.setTimeStamp(0.5337923539598498);
    msg.setSource(29772U);
    msg.setSourceEntity(134U);
    msg.setDestination(14743U);
    msg.setDestinationEntity(113U);
    msg.reactor.assign("MAVRKARHKJOIHMXQSCLABBSQCYGNPCEQBWKVKMVTFNCMEZITVNVUGOTEQABRDWNPUI");

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
    msg.setTimeStamp(0.2353158631263933);
    msg.setSource(43485U);
    msg.setSourceEntity(76U);
    msg.setDestination(33302U);
    msg.setDestinationEntity(106U);
    msg.reactor.assign("WIAFTXGDJUUMPBBOCOMTUBKQORQOHTDGHLABNHSKTTBQMHRDAIMT");

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
    msg.setTimeStamp(0.8888308022739088);
    msg.setSource(46611U);
    msg.setSourceEntity(72U);
    msg.setDestination(21235U);
    msg.setDestinationEntity(150U);
    msg.topic.assign("ELEBVASYMUYUHNRWCADHSNNQYBARWXW");
    msg.data.assign("EJRTQYDIQQNEEIMVVVAEGWHQLGSTWOFKZCLDAAEAIQRBJYCBIGMLAUDRGXWYIZPMOBAUKUWPHARIHSGHZYSKWFDFCTNAIBLPPYYPGPFOMNTTDSDYNBKLNGHCLZVWWMCHDOPRZGKFWSCSPJJUFKVQJNZEZXOAILNXKOFFLVUHUBGRCCDBHXGZXNJKVOXQZAXPDU");

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
    msg.setTimeStamp(0.9829259449620613);
    msg.setSource(15599U);
    msg.setSourceEntity(155U);
    msg.setDestination(28436U);
    msg.setDestinationEntity(111U);
    msg.topic.assign("LCGRUKBLBMVZKRXYKUTHJSTLTDWUMKATOGFZXXOBFJHZZRDINRXUSROGFRPLGBPKYYMAZMAUPISETRUOZKHICZQHGYFYSQODXHAWONVRHWONHMMIPBQK");
    msg.data.assign("IZLCNYVQYVNAPSKTRPVGRILMDTJDDVOVOOIKTSRRWDCZMAPYXAJEKQFYFTCFSWTSEBSDIEDKCOISCLOMCCZKLTMMTQUYVBQZEXPBDTPXHBAEOUJSALHUUYFZGRIJWOBNZYAHWQLRJAJORBGGDIPHXIPKQOMXXJQULBWQNEFSKGMZQVAGPUZJUXCFHKBUWRECFPSBHRVIT");

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
    msg.setTimeStamp(0.908891182947033);
    msg.setSource(30199U);
    msg.setSourceEntity(171U);
    msg.setDestination(51351U);
    msg.setDestinationEntity(181U);
    msg.topic.assign("MGSLPIBRDOFIMIOWYUJZNDPJRZHSNXMVVKGSJN");
    msg.data.assign("KUEPNEPSKCZDOUCFXNLYJTIGIWBLNGDIOPANGNOWNYOBHKLDTAEUL");

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
    msg.setTimeStamp(0.9058124895738704);
    msg.setSource(38203U);
    msg.setSourceEntity(30U);
    msg.setDestination(99U);
    msg.setDestinationEntity(107U);
    msg.frameid = 149U;
    const char tmp_msg_0[] = {-58, -54, 33, 75, 125, 126, -42, -105, 59, 105, 9, 73, -114, 70, 5, -113, 119, -5, 15, 45, -109, -112, -92, 102, 70, 10, -77, 124, 95, 92, -71, -113, 97, 96, -37, -94, 68, 126, 55, 40, -71, 123, 66, 99, -82, 54, -55, -87, -61, 57, -75, -46, 75, -50, -84, 64, -93, 79, 10, -64, 27, -33, -72, 83, 87, -2, 34, 36, 94, -66, 9, 66, 88, -19, -89, 40, 120, 46, -29, -25, 77, -68, -64, 48, -57, 85, -60, 28, 5, -87, -95, 30, 44, -22, 80, 44, 68, -12, -100, -80, 62, -8, 1, 1, 28, -77, 90, 100, 117, 94, -112, -55, 124, 35, -61, 89, -121, -105, 85, -60, 10, 89, -54, 65, 93, -7, 39, 115, -127, 77, -104, -27, 101, 39, 19, -13, 72, -43, -105, 2, -44, 72, -123, -88, 19, -118, -96, 41, -53, -89, -123, -94, 52, 10};
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
    msg.setTimeStamp(0.6694145702181852);
    msg.setSource(36878U);
    msg.setSourceEntity(141U);
    msg.setDestination(22418U);
    msg.setDestinationEntity(222U);
    msg.frameid = 129U;
    const char tmp_msg_0[] = {-120, -11, -37, -36, -115, 107, -107, -19, -124, -5, -51, 119, 96, 49, 9, 59, -10, -125, -5, -128, -94, 32, 41, -59, -120, 115, -101, -114, 22, 74, 107, 109, -70, -61, 13, -54, 76, -70, -11, 40, 20, -113, 42, -5, 81, -89, 26, -8, -93, -102, 52, -3, 103, -105, -6, 87, -37, 72, -124, 55, -17, -55, -63, 109, -31, -59, 72, -63, 38, 114, 112, -74, -71, -5, -78, 46, 120, 37, 19, -125, 27, 39, -18, 88, 35, -10, 18, -125, -100, 61, -44, -92, -57, 55, -36, -125, -96, 40, -74, 104, -15, 73, -123, -63, 40, -125, 89, -40, -54, 106, 54, 8, -71, -80, -102, -53, 89, -35, 42, -124, 99, -94, -97, -15, -127, -104, 83, -72, 49, -6, 54, -25, 26, 66, -117, -54, 9, 82, 117, 59, 91, -28, 112, -114, -39, 0, -105, -10, 17, 15, 94, -40, 102, -46, -95, -5, -25, -124, 22};
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
    msg.setTimeStamp(0.3293169470523989);
    msg.setSource(5768U);
    msg.setSourceEntity(91U);
    msg.setDestination(40631U);
    msg.setDestinationEntity(96U);
    msg.frameid = 15U;
    const char tmp_msg_0[] = {-31, -44, -49, -68, 115, -120, 98, 61, 66, -54, -107, 23, -75, -69, 120, 52, -100, 97, -79, 21, -101, -116, -77, 73, 103, 105, -116, -95, 4, -69, -104, 101, -22, -91, 91, -110, -61, -37, -100, -128, 27, 33, 104, -18, -86, 76, 83, -42, 1, 56, 33, -116, 11, 99, 56, -127, 108, 11, 4, 26, 72, 13, -81, -13, 7, 107, 115, 107, -74, 12, 12, 18, -81, -78, 88, -74, 84, 55, 33, 24, 44, -94, -85, 54, -25, 112, -17, 106, -120, 66, -25, 40, 54, 103, -28, -78, -118, 31, 21, 26, 79, -75, -29, 79, -94, 22, 94, -32, 79, 70, -41, 103, 74, -103, 53, -42, -69, -89, 124, -35, 113, -27, -32, -40, -77, -64, 125, 82, 14, 85, 96, 8, -17, 36, 70, -64, 38, -107, -88, 28, -86, -26, 121, -64, -2, 37, 30, -105, 107, -127, -41, 117, 67, -43, -69, 10, -105, -10, 116, -36, 48, -52, 81, -58, -62, 114, -34, -9, 0, 32, -75, 94, 99, 93, 108, -24, 0, 89, 64, 57, -50, 28, -10, -21, -48, 97, 106, -94, 98, 77, 38, 118, -30, 95, 59, 47, -88, 52, -67, 111, 21, -16, 117, 7, -22, 70, 50, 113, -111};
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
    msg.setTimeStamp(0.16609204707894454);
    msg.setSource(58162U);
    msg.setSourceEntity(249U);
    msg.setDestination(61366U);
    msg.setDestinationEntity(231U);
    msg.fps = 57U;
    msg.quality = 184U;
    msg.reps = 37U;
    msg.tsize = 200U;

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
    msg.setTimeStamp(0.694821122220335);
    msg.setSource(61539U);
    msg.setSourceEntity(237U);
    msg.setDestination(48586U);
    msg.setDestinationEntity(103U);
    msg.fps = 214U;
    msg.quality = 179U;
    msg.reps = 188U;
    msg.tsize = 216U;

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
    msg.setTimeStamp(0.36834077548189803);
    msg.setSource(36055U);
    msg.setSourceEntity(25U);
    msg.setDestination(9566U);
    msg.setDestinationEntity(193U);
    msg.fps = 9U;
    msg.quality = 33U;
    msg.reps = 98U;
    msg.tsize = 142U;

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
    msg.setTimeStamp(0.6070198330041879);
    msg.setSource(12572U);
    msg.setSourceEntity(24U);
    msg.setDestination(59462U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.8921241490951346;
    msg.lon = 0.9301645081813606;
    msg.depth = 187U;
    msg.speed = 0.42267892296867626;
    msg.psi = 0.16398343225883105;

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
    msg.setTimeStamp(0.8403425354064562);
    msg.setSource(56197U);
    msg.setSourceEntity(178U);
    msg.setDestination(19592U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.09779488372492884;
    msg.lon = 0.39070884686284735;
    msg.depth = 46U;
    msg.speed = 0.0401135660428229;
    msg.psi = 0.2511623373772346;

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
    msg.setTimeStamp(0.36489063371961283);
    msg.setSource(38684U);
    msg.setSourceEntity(125U);
    msg.setDestination(40971U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.32006441664368945;
    msg.lon = 0.4494436778315034;
    msg.depth = 148U;
    msg.speed = 0.9037162895104343;
    msg.psi = 0.1702707475994496;

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
    msg.setTimeStamp(0.5458607331671435);
    msg.setSource(46363U);
    msg.setSourceEntity(32U);
    msg.setDestination(54470U);
    msg.setDestinationEntity(101U);
    msg.label.assign("WKJRLKXWZYICSRJPYVIEFMNWXFGSQNVUZHWTQBBIUYAGXLTAAXFUTZZOQPOSYAQLNUHTMWGRVDBUJXGNCITRFJPHXDUOPHWKBUSITLRVJKYVKXUBFOCCCDATZSDVNEGHVWXVGRPJHEPGZSANTZAMSLOLMMGYPLEYKXQCAEBBBODQDKQZPBIENCPNADRRWUQHLSZBMUFDSPDOTNIENJEFCLGSOOJMHQLRFWKAEMIVIKFHOCRIZYMFXVCGDWKE");
    msg.lat = 0.6349664922409526;
    msg.lon = 0.43303703529847815;
    msg.z = 0.3932543428096198;
    msg.z_units = 162U;
    msg.cog = 0.8027559178093376;
    msg.sog = 0.7043527045135317;

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
    msg.setTimeStamp(0.11159307198623625);
    msg.setSource(38033U);
    msg.setSourceEntity(139U);
    msg.setDestination(46362U);
    msg.setDestinationEntity(63U);
    msg.label.assign("EAMUFPLOMNSKFICMVQNHCPKLNXBORBYQPEVUVGOTHWMOWEEOKHUVJNSFSYZYKEL");
    msg.lat = 0.631033317538633;
    msg.lon = 0.23653184180023723;
    msg.z = 0.5071711974586788;
    msg.z_units = 109U;
    msg.cog = 0.16213141627588956;
    msg.sog = 0.026072840741482417;

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
    msg.setTimeStamp(0.2655566744857323);
    msg.setSource(55104U);
    msg.setSourceEntity(218U);
    msg.setDestination(33843U);
    msg.setDestinationEntity(136U);
    msg.label.assign("LPAUPFZKPLGMWLAHTVFRZJEDIZROYGFDQERYUCOAXNQZIHCZWLACMJMUVRYEIPDHFGRQNXSTGHSOLELE");
    msg.lat = 0.12874711329879374;
    msg.lon = 0.4384800102027242;
    msg.z = 0.012083861576166033;
    msg.z_units = 86U;
    msg.cog = 0.43957679217749424;
    msg.sog = 0.21872286205528135;

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
    msg.setTimeStamp(0.8195394700721476);
    msg.setSource(53725U);
    msg.setSourceEntity(37U);
    msg.setDestination(18980U);
    msg.setDestinationEntity(47U);
    msg.name.assign("ZSTLLSXENRYOBYRLGSVZXZKLVZNHEGBNQXNNSKRLYUVFIPIEQPBXMSGQUCQUARVJWWDOKBPFTVFCVPWRVIACUNWDBMXJJOIYEJQUFNQRIOTHYUYJZIAAHPZYAMGEPKWPHMUOBIGKTGRLNKYMVCZTFPTELCOOITMHXWHQXOZBDJDCWKEPIFALLOTWXQTBRFKSCTUHUWRGNDWHJFCJVDNKZEACBDILMSSDEEOFVGQGSAXXRDKHYACSMBQJMFDJAH");
    msg.value.assign("MFEIAQTJEUWAELIGMBXFTHXHDWHIWRQSDJDARENCKWLHJSZNBKOQBLUGADCCTLNEZZBGMWSITYBEYFIGHHXA");

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
    msg.setTimeStamp(0.4052714547632347);
    msg.setSource(22380U);
    msg.setSourceEntity(181U);
    msg.setDestination(9555U);
    msg.setDestinationEntity(193U);
    msg.name.assign("OUWLWKVPBJDRCDJNOQEAQ");
    msg.value.assign("ONDYAKNPRXWHVKSHIVVWGAXMRWUTAVSJDTDXRHSXDHDLXOHMANCGQUEHFFJOBSUPTJYSHTACPKCOFGVDJHRGONZSSIKJCVWDMXJVQFLLKIFPYKCYDLZZGLLPOMFBJGCALEENTAYKLSMKZCGNAIBBFEXLPMBZITQFWKNETBFZYUUAIESUYFHKDCRCRUWGZPYBBHZZEMYOQOPEQPVTBMOQJRWNWWXEDUNIIUICENSLORMQRQTJXZGVGXMJTUQPWI");

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
    msg.setTimeStamp(0.7518505869877101);
    msg.setSource(6450U);
    msg.setSourceEntity(37U);
    msg.setDestination(41025U);
    msg.setDestinationEntity(80U);
    msg.name.assign("KLZZTJAEHZZZEQYVQMLVJKZNFXTFKBWKGSNWJBRJHHOQTGORNANVVXBQYUHSZCDXAOVHTRJYTEFSHNVGEPKVXDODISQWBFHFOFSVWTQWBOUGAMJAPNLJMJMEAGPYPDKCHFNCRUKACBMIMIRQUIDLSZVUPEIZCXUPWRGAQCLCPNVXRIMZSLO");
    msg.value.assign("IFQNXQHDVLTMUHFNFWCOMQGENSTOFNZTBJCYWIZYTWPWRRQKSQECPSXBJAEECPEUXLSNLWXGTMFWNVAQNPZDSVORV");

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
    msg.setTimeStamp(0.5452852776177015);
    msg.setSource(12972U);
    msg.setSourceEntity(191U);
    msg.setDestination(46525U);
    msg.setDestinationEntity(111U);
    msg.name.assign("PFVFMDJOKHACOQKXJUZMXPEAJBQXNAIDLYITAKEHYYSNOIRODQSXGFTQFOFFUKAIFNIBBKR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MMKSJTMWLYKBXVDRTCTQHSDREPCYZEHANCVFCINKZFIKVXLUHKORSFHQUAIICJXKKVULYPOALDUJWPXHOWPJAGBUPYEPGYBGQRFMNRMASDWBYRWGPSNIOAXDJDLIBEQZENUTARMUJBVTKHUOQNDJGZWLLWJQCAYVQVNGWHQOXLUOEIZASOTHZFNBIDVPLMJTDVKHNXKWRHZCMY");
    tmp_msg_0.value.assign("KNVISXBOHCQDKJTDPABSCBEBOFFLXMCMCCRILACJCFVIYTYEABQNSFISJPVUXUEFIVKDRGPSSLPVUMMXOVRLQWMPAGVKPNQTDHTUPNRRQDGGSAJYFSHWYMJYELWWDZRAAXPBGXTGYNEJJRKZHDQOVQMHJVSUZKLYWCNFLLEGNPZWNIGYBTEKZF");
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
    msg.setTimeStamp(0.8300834748136875);
    msg.setSource(32841U);
    msg.setSourceEntity(238U);
    msg.setDestination(42233U);
    msg.setDestinationEntity(43U);
    msg.name.assign("WFFWDOSGRKNJJQWDVRAUFGAAURPJVNKGKZILCTATPTKYFIAGIXISLHNNYCIUVDRCSEUOPCMBTYHWIEWWLGXVT");

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
    msg.setTimeStamp(0.18809072135130156);
    msg.setSource(23958U);
    msg.setSourceEntity(155U);
    msg.setDestination(64619U);
    msg.setDestinationEntity(152U);
    msg.name.assign("DRWJAXPZQAZQKUVNTGZMSKBKWMGGGPPHHEIDNLLSVISRIRYNTNYTZTRBXNVQUUHRPEMTCFOQCNOLBCJTTNHUFFHZXPIYODXFSYRAEVUIRASRKTIAQMPCAPWLHXMEDOCYVFNCFXLVFBVXGPZFJSDXHVYHQQIQOIRUAUWGJBHELLDCMKWARBMWZYJLCKDZOAILZUFJDBSYMW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NAREPSUHGEJNMROQDWCXCDUVYTIMNMWKHVIKDOZQDOGYYGBLHQOVJBXFZVNPOMWTCAWMOJNQRXPIVLJERZHKXDIYFSJCEBBESGNPOQDECBUUHVUZLSZNRZGIAYANVVWSTKEPFUIWUCFYFJGQMZKNHWJXAYUOXYSWQJIZMPHLCBRGTDOXRKSUKQ");
    tmp_msg_0.value.assign("JKRURQYKXLGQASBVPTUKNYEMJYHLSLEASSTRZBOCVGVFRNECZKUMHPNWFIAMIKZWYEUEGLVHOCUSHCVEDAXAJRBOPDXLNXSMFUK");
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
    msg.setTimeStamp(0.1578141076273507);
    msg.setSource(4941U);
    msg.setSourceEntity(250U);
    msg.setDestination(33767U);
    msg.setDestinationEntity(84U);
    msg.name.assign("WPOQFHVLYNEDXQRBOESMXHVDVVBJOQYGHTIGZSRDWJRGIGZXVTARDUKMFPIONKCIVBRRSCWYPONNDYSURFXIBUWDMOPBHCDTOEIGJQSLKCKYAHQUHWJOWBZEUXAVTZMCTAZGGFXYMENQOYUCTEWQJUMQZXKPVBFNMIQHBPMPCPFEZZ");
    msg.visibility.assign("NSQPJGUSMHMKTCKIKNLARWNYMGMFPMVUJXLDEUMGIBGRQAZLXEVXLUOCPVSYSWXAGZITBUOQAFIXJFFDPJPKWYCZKDTQJTJARJGMACVBBDJRVGZFYLHBUSAYPWNJEKHSYVMOOSCZHWWQDIOVTDHKWLD");
    msg.scope.assign("OHARYPHGQYTSDKUNVWXDCLPPVENOTURZOMUGIGYMYVJCOLJKQLHILNPTXXR");

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
    msg.setTimeStamp(0.347807707812001);
    msg.setSource(44210U);
    msg.setSourceEntity(112U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(55U);
    msg.name.assign("GBQGECMECOGLNSFMFHETNBUSLBKVMVQKUZWJAZBSGEDKSFROEYGTFUIHGICBQKDDPHTGUUCECVTVXIMPFJLHSJYZDBHFYNNZLIVYPJLXSRJKAWNGSXROPKQYQTMWXBPATVEWZNTZRRVCAXUPERHGJVDAXFIZZLIUMQIPSWIQBINHJDMRMHAVLEQYOHHAWNPXDJUXTDNBYFCMYCTWUXOTMSYSOZKNLGWOQDIOLFUQAJRECKPLKAYKOPAD");
    msg.visibility.assign("GSCVDHBAQJBJQWKUXGKQSZMUUAKXXSABFTJFGFSOOBNNPLHCFDZMXNGNMAWFKNVEQWPFWAVEUVTOAGDEF");
    msg.scope.assign("GGKSOSCSPJIFQMCLWHRYZDETPFLKOJKGNTYCQLVPMLVWRQWXLTWVERIDATNTOCIOURUYQNOXQXZMFKJWALRGYQUWEHMEHDXXUCZLCFHZJSSIDARPMJFEBWYAEBDGDIGGNAYARUPKMMVZQNUFLHYMOBVMPAEBXYNFATPT");

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
    msg.setTimeStamp(0.5279601771781338);
    msg.setSource(58618U);
    msg.setSourceEntity(54U);
    msg.setDestination(35671U);
    msg.setDestinationEntity(254U);
    msg.name.assign("VFBPSRIUMUEOVFNECUGBYBEIAONHQLMUUHRRJJGYOINBHYZIXLOCWPPMOPSWAPMOMQFAGQTQZNPHTNONTNJKWERQ");
    msg.visibility.assign("FCTMGRGPLPXTRUQDPTHTAWXZMLQJLQMAIJCBPHYOEIPZL");
    msg.scope.assign("IHKFUHWBYPBDJCVYGSJNQNAKIUFDSW");

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
    msg.setTimeStamp(0.9076613251164961);
    msg.setSource(53844U);
    msg.setSourceEntity(245U);
    msg.setDestination(1923U);
    msg.setDestinationEntity(53U);
    msg.name.assign("NARZVXUQVJAZGOVYSDFUVUJJWYPEDAIJE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZCQDRKHIDZPCWWHFGJQTWNEMLFKUJYPQYFQJGYSVGUGEJTYRLWVUVNTGZZSATSLVRSEKMPGDVRROROPQUOSXUOORGALJWCJQO");
    tmp_msg_0.value.assign("EXMWBJMTBZFHUTEYNASLLQTWJXQYFEWLDHWPRIXZVNDCRLHVMKHOPOQAMIUXJNOKEZMIBEUEMINCEBBIRUHHWYAXQEDBAUSFTYVGTQMRESDAKCZKACHCZRZGGIFNVKYQLODIKLULMHZVFTCYGKWYJKLQAPYPGLBVZYSFXPCSKXMUVJXJTFJVXNPA");
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
    msg.setTimeStamp(0.7882484643355812);
    msg.setSource(12108U);
    msg.setSourceEntity(139U);
    msg.setDestination(63295U);
    msg.setDestinationEntity(97U);
    msg.name.assign("OPRBFNCFUZKINYYXZTCWGYGJISLIXWKEPHYMRHXXKJCJANVHTCIPOGMNSFOGHBSJCEIRZMCQHWDDPLIMDTEAUFVEKLYWUZLMNDLBRXVTWEVTURAQWSORIJYUMDOZJSSLJKASOLUVQUGMFOBUWBY");

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
    msg.setTimeStamp(0.1368131470314513);
    msg.setSource(23716U);
    msg.setSourceEntity(241U);
    msg.setDestination(62089U);
    msg.setDestinationEntity(156U);
    msg.name.assign("RHUDAMQTROQUTRMFNLIWNUCPJUQMPGZWHASLICLBVGEBHHADUTXZJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AYZKHPAFSKOWURAVGTGIMJFTDNRJCRERYSBDW");
    tmp_msg_0.value.assign("ZLCJQUTNXIQCLBMAOQVURXWEYJTCXTLFRKNPEMZYGJYDGYCEZNRITFSRKGHCHHKPTRIKLUOPJGNUWITAHKLUYSDWBHXMRLBXBINNAPDIOIGFDAGEUOQONWMLVZELSJSFIGKCYVFZGMYWRKQXSGLJVPENUPYZAPZQDTGRZJAPYJQXBBIVNOZTRC");
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
    msg.setTimeStamp(0.39211308337312567);
    msg.setSource(62389U);
    msg.setSourceEntity(102U);
    msg.setDestination(56367U);
    msg.setDestinationEntity(62U);
    msg.name.assign("MFXNXVABVVCWMAQPUBRKIGPKHSQUSQXZEYTEHJEPJRBWMBGDKAMLHLISTIFZRULGUNBTVSQJLWUYJYYMI");

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
    msg.setTimeStamp(0.42834822547872675);
    msg.setSource(51195U);
    msg.setSourceEntity(77U);
    msg.setDestination(10642U);
    msg.setDestinationEntity(222U);
    msg.name.assign("WNOOCWJMYLLQVTENWMVBVZSPQVSTGQSXZAOFDDURB");

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
    msg.setTimeStamp(0.3989910443990533);
    msg.setSource(12768U);
    msg.setSourceEntity(241U);
    msg.setDestination(47711U);
    msg.setDestinationEntity(188U);
    msg.name.assign("YSWYEQDCOZGFODUTCPAPVAVNZRTAHGMSXBVORTFBUJZQWPUXIBJJTLXBFZGBIEQXEHJUFJWDFZJCOWDJDCGKVUIRUXKFR");

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
    msg.setTimeStamp(0.9740276711008925);
    msg.setSource(33874U);
    msg.setSourceEntity(237U);
    msg.setDestination(1480U);
    msg.setDestinationEntity(98U);
    msg.timeout = 2352552888U;

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
    msg.setTimeStamp(0.3392537644400604);
    msg.setSource(15738U);
    msg.setSourceEntity(138U);
    msg.setDestination(52090U);
    msg.setDestinationEntity(231U);
    msg.timeout = 843903724U;

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
    msg.setTimeStamp(0.7030655818767757);
    msg.setSource(41249U);
    msg.setSourceEntity(157U);
    msg.setDestination(22280U);
    msg.setDestinationEntity(157U);
    msg.timeout = 3934123878U;

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
    msg.setTimeStamp(0.6999934058980698);
    msg.setSource(53516U);
    msg.setSourceEntity(169U);
    msg.setDestination(56143U);
    msg.setDestinationEntity(147U);
    msg.sessid = 1477688249U;

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
    msg.setTimeStamp(0.7610513742522591);
    msg.setSource(46950U);
    msg.setSourceEntity(149U);
    msg.setDestination(15789U);
    msg.setDestinationEntity(127U);
    msg.sessid = 2582932925U;

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
    msg.setTimeStamp(0.1372586079606093);
    msg.setSource(35223U);
    msg.setSourceEntity(36U);
    msg.setDestination(45175U);
    msg.setDestinationEntity(197U);
    msg.sessid = 3810567535U;

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
    msg.setTimeStamp(0.13233845972051506);
    msg.setSource(14855U);
    msg.setSourceEntity(227U);
    msg.setDestination(40620U);
    msg.setDestinationEntity(254U);
    msg.sessid = 680525248U;
    msg.messages.assign("SOSDIEKIWNXWVAOHJUVDUJJTWIFUAUJMBNELXLFCASQIUTJCIADXELTOWKCDZZQMOFLMEVGSRMREPIQRTZLLU");

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
    msg.setTimeStamp(0.16697388499101196);
    msg.setSource(35867U);
    msg.setSourceEntity(240U);
    msg.setDestination(63417U);
    msg.setDestinationEntity(253U);
    msg.sessid = 2693096088U;
    msg.messages.assign("RJJAEECQWIIBGRGAHNDRQFZWORTCXVKBYYKFGNGUPSFAMKKKXURCZYDEQIXAFECXVKAAYONFBFWLXJODMJJLWNROZOHSTKCRWEVTSBMKETWNLOSYXDHMDVFOCYJGPFTYPBVSNRNMURZTVUFXPGGNHHMSBCASYXZALLYIL");

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
    msg.setTimeStamp(0.6883110540917328);
    msg.setSource(16574U);
    msg.setSourceEntity(64U);
    msg.setDestination(15413U);
    msg.setDestinationEntity(165U);
    msg.sessid = 1547151591U;
    msg.messages.assign("UXDQOQMUZHOIFILMFBTZLFCDHWDQTXBXTWGOZSIANJHCVEXDGPWUXVQXMSCPSJAJECNAKQZVHCRTJKLWWCHZEUZ");

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
    msg.setTimeStamp(0.17045056895347244);
    msg.setSource(9000U);
    msg.setSourceEntity(246U);
    msg.setDestination(11901U);
    msg.setDestinationEntity(249U);
    msg.sessid = 741178099U;

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
    msg.setTimeStamp(0.44389524303969485);
    msg.setSource(50515U);
    msg.setSourceEntity(67U);
    msg.setDestination(65135U);
    msg.setDestinationEntity(14U);
    msg.sessid = 3442636949U;

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
    msg.setTimeStamp(0.4802731477945751);
    msg.setSource(41434U);
    msg.setSourceEntity(196U);
    msg.setDestination(4434U);
    msg.setDestinationEntity(50U);
    msg.sessid = 43645752U;

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
    msg.setTimeStamp(0.08728503742223603);
    msg.setSource(3368U);
    msg.setSourceEntity(203U);
    msg.setDestination(19394U);
    msg.setDestinationEntity(146U);
    msg.sessid = 2403801837U;
    msg.status = 221U;

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
    msg.setTimeStamp(0.5713627043451481);
    msg.setSource(24587U);
    msg.setSourceEntity(34U);
    msg.setDestination(27561U);
    msg.setDestinationEntity(99U);
    msg.sessid = 1464271190U;
    msg.status = 195U;

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
    msg.setTimeStamp(0.692340922612213);
    msg.setSource(34764U);
    msg.setSourceEntity(53U);
    msg.setDestination(9089U);
    msg.setDestinationEntity(162U);
    msg.sessid = 2739819099U;
    msg.status = 5U;

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
    msg.setTimeStamp(0.10962082127692208);
    msg.setSource(1503U);
    msg.setSourceEntity(135U);
    msg.setDestination(2334U);
    msg.setDestinationEntity(84U);
    msg.name.assign("GRBDJQEZJKBAAFWHTIULRYJYVWQJEDMHIFIWUKUJIKNZWOPPTHHYPMNAXAYJMGFQUQJIGYPUGOSDHDOYEFNWPCVPSZLGPXXMCUOXSBLKASVGQHGHDBEFTCJAIZXOUSBOLKZZOTQQBTERCWRXNVBOLRISYPVNDMLWQKDDMXASFFMUTLHPWMLWNOCUVZTFCWZDXQVCVEQMRIYNBJKENFZZLKPCNRRAGSTLETXVIGXUOE");

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
    msg.setTimeStamp(0.738605342747995);
    msg.setSource(22389U);
    msg.setSourceEntity(26U);
    msg.setDestination(34061U);
    msg.setDestinationEntity(166U);
    msg.name.assign("ZROHQULAXSFSHZSNPFEHMQNOCZHCKFHQTZMATIERMLYVOWIRJGZPDMDZPJGPMVMWNSJAEVYWAKITBJJCLKDJXKGJGUDPDECZHXLVANDIOTEOUIBSTINBZIWFQXA");

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
    msg.setTimeStamp(0.101049139806487);
    msg.setSource(62052U);
    msg.setSourceEntity(154U);
    msg.setDestination(40300U);
    msg.setDestinationEntity(42U);
    msg.name.assign("WCBVTNUAKCQIFCLLKGTVBRYCLULNGULUDVRENHTJIDKITTESHVOWNKWXEZSSAHDNGRLHIGSEHJNPVSJBCGXMKZYTINWSOEHDJGMZOPXEBYWFVMMNOTBYTAMMXCLLHTPERWABKWJIDMSZCYPRKWPUGFRQBNASSFOVGPFKDFMFZMVPIBQMBVQHAW");

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
    msg.setTimeStamp(0.9728315643107966);
    msg.setSource(23100U);
    msg.setSourceEntity(126U);
    msg.setDestination(35646U);
    msg.setDestinationEntity(6U);
    msg.name.assign("CZSZTSLQGUNZEPPRXQRNCVNLUQVWBUWVPSJIGFAKTVUIVQRRBXFJBFYPBOOPZZCHACIKJNAZWJYGTBVTDIJSMJVOOSTP");

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
    msg.setTimeStamp(0.8880755199447402);
    msg.setSource(58744U);
    msg.setSourceEntity(164U);
    msg.setDestination(24551U);
    msg.setDestinationEntity(241U);
    msg.name.assign("UTXBMKJHQONMHZMYMBASYDNIVWAZXASGHTBZZAIBZEMUKXHNPLPGKRMQFWXRGWXCIJKTYPLNVRJRDFECWEMEKYGSCRMQVCELHHOQPAULAFFBVB");

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
    msg.setTimeStamp(0.24258577546290672);
    msg.setSource(15249U);
    msg.setSourceEntity(183U);
    msg.setDestination(42424U);
    msg.setDestinationEntity(200U);
    msg.name.assign("FAIIOBPATQTDZUHBOLKFXAARCQUMIIBYAGCPMDQZVKEPGDUDYKEIGOEJYBMFAEMJAPVWLWNLKEEMQLWHHBFZFHCWIMWT");

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
    msg.setTimeStamp(0.14559769527517907);
    msg.setSource(20133U);
    msg.setSourceEntity(241U);
    msg.setDestination(9236U);
    msg.setDestinationEntity(139U);
    msg.type = 4U;
    msg.error.assign("KGYDEWZWYLOFHUTGXYCDPHXMHZLSGZHWRCIARQVSZUFPDLGSCTMUCPIVYNOF");

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
    msg.setTimeStamp(0.007472106276848245);
    msg.setSource(50146U);
    msg.setSourceEntity(16U);
    msg.setDestination(19691U);
    msg.setDestinationEntity(239U);
    msg.type = 226U;
    msg.error.assign("XHPEQUFDNUMNDSPIXNJVARGKJDBZFYSXQWZPZDRLCUXTKAWFSYKZSPGWNSQEJQMAOQRRPMGTOSVPKTHIDMNYMQTBVMUGGCOXULLSYQTGOZIIWVTXAEXUIDNFGVJPFFMCDCLYLLIQVYA");

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
    msg.setTimeStamp(0.10216802122608792);
    msg.setSource(24119U);
    msg.setSourceEntity(208U);
    msg.setDestination(45917U);
    msg.setDestinationEntity(220U);
    msg.type = 47U;
    msg.error.assign("LSKVRMCYQBHZBDEZFRPCTPKKYXAISKQMXRNWDGVHBRWKCNHIYWKZTIYAEBDFGQSWZBPCXIVIGULTHMMDOSFWBXYJPTDMPHNFEQUMXUSLMJQMGPVVZDLVCDWAQEPIULHSZJELWRXYPROQSWFUGUXIHKKEUZRGOTYMEXPYQYOA");

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
    msg.setTimeStamp(0.8366525879858167);
    msg.setSource(60634U);
    msg.setSourceEntity(205U);
    msg.setDestination(22147U);
    msg.setDestinationEntity(210U);
    msg.seq = 59769U;
    msg.sys_dst.assign("MQQVYTJEORNBSINHJDMCTYCHDXIFWJSGJMGKVWUTTHQHURGJNIWWUKIOCQBSIWJMLROYZZESLGSYYPIDXNNPIVLDEHCPHOXCNPOL");
    msg.flags = 238U;
    const char tmp_msg_0[] = {-44, -75, -32, -45, 26, -104, -127, -95, -5, 81, 0, -96, -88, -100, 71, -81, 81, 87, -42, -115, 79, 60, 36, -16, 120, 47, 51, -71, -43, -103, -96, 9, 97, -95, -88, 27, -86, 34, -98, 51, -13, -49, -123, 7, -96, 69, -40, -73, -72, 9, -92, -64, -110, 32, 66, -64, -68, 20, -14, -37, -5, -16, -67, 37, 95, 59, -19, -114, 101, -17, -69, 4, -67, -23, 1, 90, -102, 9, -22, -16, -25, 105, -115, -59, 39, 122, -22, -71, 86, -55, 29, 101, 67, -126, -55, 92, -84, 108, -12, 82, -52, 75, -96, -71, -69, -2, 21, -63, 21, -6, -106, 26, -7, -104, 124, 68, 2, 65, -29, 77, 106, -95, -108, 120, -119, -52, 85, 81, -81, 122, -126, 10, -97, 104, 99, 61, -66, 12, 112, -119, 66, 82, 28, 25, 122, 11, 88, 95, 32, -96, -22, -107, -18, -71, 83, 62, -84, 58, -86, -112, -101, -68, -101, 72, 95, -102, -4, -31, -70, 95, 114, 120, -82, -123, 76, 110, -14, 115};
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
    msg.setTimeStamp(0.03644883129408372);
    msg.setSource(64751U);
    msg.setSourceEntity(113U);
    msg.setDestination(53935U);
    msg.setDestinationEntity(44U);
    msg.seq = 53784U;
    msg.sys_dst.assign("DNDENJVEAGXVAZRWCBKZRLAFPPWZQPKLJMFIVWQXRJNGYJECFSOTUHOUXTIKXFQSLZKBBQNBTZVYEFQAANVOGTZVHHDGOJAIYDGANMBYHKGCHXWEJHOPGKILZNRXKEQMYHKSPCERISDIOIUIJQYRCCOYUMZLULWIQHJGSBSPEOTPVCELMZXDKPHYNUZM");
    msg.flags = 135U;
    const char tmp_msg_0[] = {17, 52, 124, 8, -124, -45, -91, 92, 3, 24, 23, -62, 116, 80, 30, 84, -65, 65, 18, 39, -127, -115, -123, -86, 26, 104, 69, -105, -57, 32, 7, -8, -83, 96, 34, -2, -64, 43, -52, 2, -101, -98, 115, 33, -46, 76, 40, 84, -32, -74, 93, -78, 117};
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
    msg.setTimeStamp(0.3493751232497484);
    msg.setSource(24485U);
    msg.setSourceEntity(143U);
    msg.setDestination(59035U);
    msg.setDestinationEntity(70U);
    msg.seq = 45183U;
    msg.sys_dst.assign("AEFYTGBXHWXUCEPREYWKBLWMWDAMWEYFWGZQGOVXIJCMUNDBVTPUEVCRFKHXHIVNDCGGMWQSVUDDVFGUEHJSSMHCJSTLQZCZVKUUMSYSWAXRPNOUJTKQRBSPVHPXSCXZZPFODAGPBLQYDZRFABPGNRYQJWLMKTNANY");
    msg.flags = 101U;
    const char tmp_msg_0[] = {-62, 105, 69, -124, -47, -85, -119, -24, 107, 10, 52, 18, -28, -117, -55, -3, -86, 19, 12, 92, 21, -110, 56, -69, -19, 24, -55, -111, -106, -94, 44, 23, -38, 83, 64, 102, -13, -1, 56, -56, 78, -78, 55, -95, -1, -10, -67, -32, 95, -37, 26, -56, -5, -52, 83, 2, -107, 90, -94, 121, -41, -53, 105, -79, -24, -96, 83, -60, -32, -26, 100, -75, 57, -124, -112, 92, -1, -65, -67, -19, 120, 109, -102, -124, 10, 59, -78, 95, 125, -90, -6, -61, -21, 90, -39, -115, -127, 2, -26, -3, -78, 13, 17, -3, 8, 124, -92, 62, -33, 49, -77, 1, -62, -78, -2, -55, -109, 85, 93, 9, 9, -120, -124, -1, -41, 39, -50, -13, 89, 33, -118, -110, -108, -81, 42, -81, 106, 106, 21, 15, -7, -18, 126, 55, -114, -108, 94, -128, 86, 58, -104, 29, 77, -38, 65, 1, -109, -116, 115, -44, 70, -126, 10, 91, -12, -99, 76, 42, 17, -15, -116, -6, -9, -66, -10, -71, 114, 81, 3, 3, 59, -53, 94, 73, 112, 68, 7, -34, 65, -43, -121, -119, -44, -67, 13, 76, -58, 71, -35, -81, 48, -124, -5, -39, -89, -96, 52, -24, 19, -94, 61, -15, -1, 17, 98, -48, -126, -31};
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
    msg.setTimeStamp(0.49565985898166187);
    msg.setSource(57538U);
    msg.setSourceEntity(186U);
    msg.setDestination(5596U);
    msg.setDestinationEntity(60U);
    msg.sys_src.assign("AGZSANSLQXKEGOWEOGIQOCBXSBEMKMPZOHDILXFRVVMMEIUJHGSWHBMYMMDKOJDCOHPSZRQXBHNBPYBCPXCGBELNYOTGIKRQTUFWFBSACAUNRLUIIVAHDF");
    msg.sys_dst.assign("VFXNWKZEXIPUUMUPLGFSITXJFCPDBGJBDQQWOLAHDFYVXEEAEUCNWNNLIEFGLXSHSUYMYYGOFPDMJARTNUHXJLYUKOMMRBQVZOCNQHCWXYKISMUPEZZPJANYNHDEYCQFNQZLVJASBTCSPZATDNKULDKVGW");
    msg.flags = 82U;
    const char tmp_msg_0[] = {-8, -4, -4, -95, -64, 58, 65, -115, -124, -119, 23, 119, -11, -73, -34, -72, -23, -24, 47, -38, -59, -62, 1, -77, -109, -127, 114, -91, 30, -46, 56, -117, 7, 65, 118, -67, 115, 95, 36, 71, -82, -27, 49, -62, 59, 86, -25, -72, 107, -111, -87, 1, -45, -96, -24, 81, 48, -119, 92, -2, 28, -92, 42, 110, -15, -26, -95, -27, -32, -93, -106, -60, -120, -88, -108, 42, -57, 18, -8, -31, -23, -81, -31, -49, 2, 29, -99, 14, 17, 99, 107, -5};
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
    msg.setTimeStamp(0.7150483055715534);
    msg.setSource(11834U);
    msg.setSourceEntity(236U);
    msg.setDestination(11656U);
    msg.setDestinationEntity(119U);
    msg.sys_src.assign("ETXPWBMOTATAKCGQXWLJNSHTKBCUUKELLXXPVNRQYPZNZTFLAPYIIGGIKXNEYZBRSIXHOQMJQVXYZRBNUPUKACHTFDTPSFUSQAWORHSXESHNNMXQIHHYVFVHBFOMIIZVFOLRFKMWQZGNJLECMJJKLDDJQHOJPYPYRMBZQCPHDSISVUZUBMFDZDKBUWTEGKPUWAAVRWWYWJJEYLDSUFGDNSRMVCGOTNOEBKALJAVGLYFIOCXRARDZGVGQDCTEO");
    msg.sys_dst.assign("RANSLGOTRROBXZMICFQHVAWDHYFPBPYQDVWLPZYMWZVXJCZDHUPKCQDWSHQARSDIWLOFZWQAWGQLQATUDLYIMTKQMBSMXDTPKNCDJI");
    msg.flags = 87U;
    const char tmp_msg_0[] = {83, 119, -110, 94, -33, -92, 31, 89, 105, -7, 11};
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
    msg.setTimeStamp(0.512018081710317);
    msg.setSource(31439U);
    msg.setSourceEntity(216U);
    msg.setDestination(4296U);
    msg.setDestinationEntity(110U);
    msg.sys_src.assign("TZIJPQKYKBREYKTZANASBDAXYVSXIRLXLPJCTRINRGTFHSCIMQLRPWPCXGMUITYDSDAXEZPZRJLFXBGJBJPHYSOECGBZMBQUMEBRD");
    msg.sys_dst.assign("NCDZLENJLKTIPQBPYXHLAFDFWZOUSAVHYCKAXMOGOAKVEPOLVYWMZXSWTUQYWQRYPXONMIXUBFWTIYOSSZQTGDNSBGWLPBTKNMWJQOUJDGPDTQRRMCVHZMEAWFNVRYEFELFDTYCZIUEMECZIJHGBGKPDRNVKWJCRUBPUPEHFCHVBUBXJISXHNOMRSUDFCVOFQKIQMLQIWCOAUFKADSEATKYLDZGGJTGASCLYZXZ");
    msg.flags = 146U;
    const char tmp_msg_0[] = {105, 82, 58, -2, 110, 98, 4, 45, -89, -25, 101, 107, 50, 107, 50, 90, -69, 12, -112, 117, 87, -97, -98, 99, 22, -52, 48, -118, 63, -39, 102, 62, -120, -1, 113, -41, -52, -57, 14, 16, -57, -41, -50, 97, 112, -25, 24, 114, -7, -97, -28, 1, 82, 120, 105, 99, -7, -46, -54, 25, 17, 45, -91, 121};
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
    msg.setTimeStamp(0.688227344178088);
    msg.setSource(49968U);
    msg.setSourceEntity(60U);
    msg.setDestination(17798U);
    msg.setDestinationEntity(90U);
    msg.seq = 50085U;
    msg.value = 151U;
    msg.error.assign("IZQZJQAVCTQISHBMEPHLFNNS");

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
    msg.setTimeStamp(0.3044340291695935);
    msg.setSource(28998U);
    msg.setSourceEntity(109U);
    msg.setDestination(33043U);
    msg.setDestinationEntity(148U);
    msg.seq = 64739U;
    msg.value = 157U;
    msg.error.assign("FCBLNNVVKAZCSVESWPJCABOPGWJPHFUHKHRGOLRUJDYZCOTHUDJQLCUYLHQ");

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
    msg.setTimeStamp(0.5554104233634773);
    msg.setSource(43743U);
    msg.setSourceEntity(147U);
    msg.setDestination(50442U);
    msg.setDestinationEntity(122U);
    msg.seq = 8582U;
    msg.value = 151U;
    msg.error.assign("MIMHDJBYZYFTYVZGSDORMRFWVECKQPCICDUEPDQIFTZHOTSUPHDYDLNXPMMD");

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
    msg.setTimeStamp(0.8092220383023834);
    msg.setSource(6743U);
    msg.setSourceEntity(20U);
    msg.setDestination(2952U);
    msg.setDestinationEntity(129U);
    msg.seq = 32604U;
    msg.sys.assign("QGKYBOXHSHJQJLVULMVIWGKOGAQFBMARJKFRESZAENNTUNOMXGGYGDYDZPFKCUKYJAJUIPOICHGNZPWRLLSMBZYOCDVTBXBELCPRKQRWYDBTYHCDWHNJFAUMVMIWV");
    msg.value = 0.06432849178671862;

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
    msg.setTimeStamp(0.5258577528807027);
    msg.setSource(52277U);
    msg.setSourceEntity(40U);
    msg.setDestination(42095U);
    msg.setDestinationEntity(8U);
    msg.seq = 17336U;
    msg.sys.assign("MYXEXSATGYADCBUNWTUSICEGVZIJGQKOWVRFQJSHCEYATSDGPBVAKMAJWFCMJFJIXGLOEMRMTDVGNNCZODWQZZAKHWLPDWPEJHWAOOLRIUS");
    msg.value = 0.648066923544077;

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
    msg.setTimeStamp(0.7295611521763902);
    msg.setSource(6018U);
    msg.setSourceEntity(158U);
    msg.setDestination(42950U);
    msg.setDestinationEntity(140U);
    msg.seq = 18141U;
    msg.sys.assign("IINJANIZYMKEFEPVGJQTCMTGTQZUOKWJBLKRGASEXLUIEACMWIADATHMDHGZUOZLBHARRGDUPVDDOOHRNODVJVULNWCMXAFJRNBJUKSZFORQQCFYZDWLCFAUQVPDMCEIBBNKRPDGTQJKWLSURENUKNMSYXZPWSPWBFSSUERZHGHDSTGXBEXHECKXFFFG");
    msg.value = 0.12815506793178155;

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
    msg.setTimeStamp(0.11609762047128547);
    msg.setSource(37295U);
    msg.setSourceEntity(138U);
    msg.setDestination(14552U);
    msg.setDestinationEntity(251U);
    msg.action = 188U;
    msg.longain = 0.9938661269653694;
    msg.latgain = 0.7793340589147131;
    msg.bondthick = 2366694386U;
    msg.leadgain = 0.692088719814441;
    msg.deconflgain = 0.8748928652459592;

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
    msg.setTimeStamp(0.6413977744326891);
    msg.setSource(18063U);
    msg.setSourceEntity(145U);
    msg.setDestination(62796U);
    msg.setDestinationEntity(159U);
    msg.action = 217U;
    msg.longain = 0.9479076661788516;
    msg.latgain = 0.24272939982759556;
    msg.bondthick = 518021111U;
    msg.leadgain = 0.17422158347936134;
    msg.deconflgain = 0.8725323680071161;

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
    msg.setTimeStamp(0.4348332840197442);
    msg.setSource(13716U);
    msg.setSourceEntity(217U);
    msg.setDestination(38359U);
    msg.setDestinationEntity(215U);
    msg.action = 251U;
    msg.longain = 0.7512851696674786;
    msg.latgain = 0.7530466632301185;
    msg.bondthick = 739027036U;
    msg.leadgain = 0.450837321770023;
    msg.deconflgain = 0.9321050367386509;

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
    msg.setTimeStamp(0.5567969248368932);
    msg.setSource(56282U);
    msg.setSourceEntity(230U);
    msg.setDestination(12043U);
    msg.setDestinationEntity(225U);
    msg.err_mean = 0.994964815769551;
    msg.dist_min_abs = 0.8771811891942778;
    msg.dist_min_mean = 0.24492437017295687;

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
    msg.setTimeStamp(0.688590859198497);
    msg.setSource(48232U);
    msg.setSourceEntity(126U);
    msg.setDestination(31180U);
    msg.setDestinationEntity(61U);
    msg.err_mean = 0.4863848484119212;
    msg.dist_min_abs = 0.05601894272315566;
    msg.dist_min_mean = 0.15552301722463546;

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
    msg.setTimeStamp(0.905699647111323);
    msg.setSource(56176U);
    msg.setSourceEntity(15U);
    msg.setDestination(2528U);
    msg.setDestinationEntity(135U);
    msg.err_mean = 0.1339768320571303;
    msg.dist_min_abs = 0.7776532755651269;
    msg.dist_min_mean = 0.43171630930570504;

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
    msg.setTimeStamp(0.943993247531138);
    msg.setSource(14439U);
    msg.setSourceEntity(38U);
    msg.setDestination(44419U);
    msg.setDestinationEntity(135U);
    msg.action = 72U;
    msg.lon_gain = 0.3142632124533321;
    msg.lat_gain = 0.7196689854006574;
    msg.bond_thick = 0.6913609170818259;
    msg.lead_gain = 0.5104713999657225;
    msg.deconfl_gain = 0.871739464976618;
    msg.accel_switch_gain = 0.9825220660850013;
    msg.safe_dist = 0.6632016224089006;
    msg.deconflict_offset = 0.9577843257364739;
    msg.accel_safe_margin = 0.3536710965522958;
    msg.accel_lim_x = 0.41723802081969497;

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
    msg.setTimeStamp(0.03382094623101917);
    msg.setSource(17012U);
    msg.setSourceEntity(76U);
    msg.setDestination(18634U);
    msg.setDestinationEntity(235U);
    msg.action = 143U;
    msg.lon_gain = 0.5884679618578643;
    msg.lat_gain = 0.5091152098792914;
    msg.bond_thick = 0.5853600358048338;
    msg.lead_gain = 0.7565773415334391;
    msg.deconfl_gain = 0.35097698373209063;
    msg.accel_switch_gain = 0.9239586408348548;
    msg.safe_dist = 0.5144076789941106;
    msg.deconflict_offset = 0.6975987469940644;
    msg.accel_safe_margin = 0.8611003516278295;
    msg.accel_lim_x = 0.521281475385171;

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
    msg.setTimeStamp(0.3398768493936303);
    msg.setSource(29924U);
    msg.setSourceEntity(127U);
    msg.setDestination(2362U);
    msg.setDestinationEntity(162U);
    msg.action = 36U;
    msg.lon_gain = 0.4680084445753504;
    msg.lat_gain = 0.08484043985281853;
    msg.bond_thick = 0.7186390222760923;
    msg.lead_gain = 0.0020630907545007293;
    msg.deconfl_gain = 0.31867911202736465;
    msg.accel_switch_gain = 0.7159317516645057;
    msg.safe_dist = 0.7681729500008835;
    msg.deconflict_offset = 0.05965194132861018;
    msg.accel_safe_margin = 0.18571910261189395;
    msg.accel_lim_x = 0.9743656788011661;

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
    msg.setTimeStamp(0.566337515026639);
    msg.setSource(64900U);
    msg.setSourceEntity(37U);
    msg.setDestination(10451U);
    msg.setDestinationEntity(14U);
    msg.type = 223U;
    msg.op = 187U;
    msg.err_mean = 0.5405506518170363;
    msg.dist_min_abs = 0.18696499562947044;
    msg.dist_min_mean = 0.49650123064850216;
    msg.roll_rate_mean = 0.0700364002791879;
    msg.time = 0.8392789573389486;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 163U;
    tmp_msg_0.lon_gain = 0.6752617477551097;
    tmp_msg_0.lat_gain = 0.7115654435995031;
    tmp_msg_0.bond_thick = 0.8920144486251557;
    tmp_msg_0.lead_gain = 0.553257803815616;
    tmp_msg_0.deconfl_gain = 0.45658989851806153;
    tmp_msg_0.accel_switch_gain = 0.6830254478494364;
    tmp_msg_0.safe_dist = 0.23858343693779005;
    tmp_msg_0.deconflict_offset = 0.26839858226213165;
    tmp_msg_0.accel_safe_margin = 0.8843042659661383;
    tmp_msg_0.accel_lim_x = 0.2132217350618989;
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
    msg.setTimeStamp(0.09053742203790993);
    msg.setSource(51727U);
    msg.setSourceEntity(0U);
    msg.setDestination(18820U);
    msg.setDestinationEntity(10U);
    msg.type = 54U;
    msg.op = 121U;
    msg.err_mean = 0.7367255501216594;
    msg.dist_min_abs = 0.22319652354806485;
    msg.dist_min_mean = 0.6196721672188625;
    msg.roll_rate_mean = 0.9659496624966115;
    msg.time = 0.12514522112103477;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 105U;
    tmp_msg_0.lon_gain = 0.20386531012774034;
    tmp_msg_0.lat_gain = 0.023263771258959953;
    tmp_msg_0.bond_thick = 0.04588383743100988;
    tmp_msg_0.lead_gain = 0.2299001277607614;
    tmp_msg_0.deconfl_gain = 0.40198489624588596;
    tmp_msg_0.accel_switch_gain = 0.9111751222326837;
    tmp_msg_0.safe_dist = 0.75663451318692;
    tmp_msg_0.deconflict_offset = 0.10995861727018208;
    tmp_msg_0.accel_safe_margin = 0.5510928788903107;
    tmp_msg_0.accel_lim_x = 0.051920946138902746;
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
    msg.setTimeStamp(0.043690537774559);
    msg.setSource(20801U);
    msg.setSourceEntity(221U);
    msg.setDestination(51534U);
    msg.setDestinationEntity(201U);
    msg.type = 157U;
    msg.op = 207U;
    msg.err_mean = 0.6563450529432577;
    msg.dist_min_abs = 0.9801507478210899;
    msg.dist_min_mean = 0.9467764078212166;
    msg.roll_rate_mean = 0.9648115564659606;
    msg.time = 0.4503326516557784;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 149U;
    tmp_msg_0.lon_gain = 0.8082925372521782;
    tmp_msg_0.lat_gain = 0.3244310506779643;
    tmp_msg_0.bond_thick = 0.7969360445378707;
    tmp_msg_0.lead_gain = 0.7449253437074004;
    tmp_msg_0.deconfl_gain = 0.04441690444580304;
    tmp_msg_0.accel_switch_gain = 0.21653283531665357;
    tmp_msg_0.safe_dist = 0.4619535244746923;
    tmp_msg_0.deconflict_offset = 0.946441088979684;
    tmp_msg_0.accel_safe_margin = 0.5053326530561338;
    tmp_msg_0.accel_lim_x = 0.736935244265171;
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
    msg.setTimeStamp(0.5788439515787314);
    msg.setSource(50907U);
    msg.setSourceEntity(243U);
    msg.setDestination(23882U);
    msg.setDestinationEntity(116U);
    msg.uid = 0U;
    msg.frag_number = 21U;
    msg.num_frags = 91U;
    const char tmp_msg_0[] = {-21, 65, 57, 6, -107, -113, -122, 43, -119, 61, -62, 63, 5, 107, 28, 0, 106, -114, 108, -116, 112, 107, 34, -52, 56, 7, 0, 2, 20, 21};
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
    msg.setTimeStamp(0.6320127833509493);
    msg.setSource(63094U);
    msg.setSourceEntity(212U);
    msg.setDestination(2047U);
    msg.setDestinationEntity(146U);
    msg.uid = 217U;
    msg.frag_number = 165U;
    msg.num_frags = 227U;
    const char tmp_msg_0[] = {89, -120, -96, -33, -99, 3, -84, 111, 2, 10, 90, -25, -72, -89, 59, 93, 111, 99, -77, 75, -54, -67, 71, 1, 10, -105, 54, -109, -73, 85, 59, 38, -47, -126, -6, -53, -55, 124, 71, -119, -108, -78, -10, 101, 39, 13, 25, -79, -48, 13, 82, 126, 22, -125, -43, -47, -47, 102, -90, -98, 76, -127, 117, 82, -47, 86, -112, 111, 72, 101, -20, 126, -123, 15, -13, -77, -31, -15, -122, -67, -64, -78, -41, 94, 60, 32, -102, -10, 26, 92, -100, -80, 90, -36, 0, 68, -43, 76, -49, 119, -9, -13, 97, 125, -98, 15, 120, 24, -104, -125, 122, -41, -69, 70, 32, -20, -121, -110, -8, -95, 33, 30, -44, -124, 8, 91, -115, 44, -119, 5, -112, -14, -16, 4, -127, -56, 94, 114, -22, -20, -96, -77, -17, -26, -55, -3, 93, -4, 58, -115, 11, 50, -120, 109, -106, -113, 60, -71};
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
    msg.setTimeStamp(0.8200645641241149);
    msg.setSource(39024U);
    msg.setSourceEntity(224U);
    msg.setDestination(29458U);
    msg.setDestinationEntity(127U);
    msg.uid = 103U;
    msg.frag_number = 37U;
    msg.num_frags = 26U;
    const char tmp_msg_0[] = {67, 93, -48, 33, 80, -19, -74, 118, -63, -37, -32, -88, 60, -62, -79, -47, 107, -66, 54, 12, 31, -94, -74, 10, 101, 84, 81, -75, -87, 115, -71, -75, -45, -13, -114, 100, -88, 10, 64, -103, -2, 76, -9, -85, -103, -79, -51, 56, 111, 51, -122, 101, 90, 4, -67, 3, 2, -91, 86, -78, 99, -95, 61, -117, -103, -67, 96, 42, 106, 55, 58, -83, 97, 49, -43, -6, 42, 111, -58, -7, 12, -104, 46, 51, -104, -77, -79, 66, -93, 67, -98, 111, -63, 108, 39, -119, -56, 75, -92, 40, -41, -108, -105, 50, -6, 51, 114, -49, 21, -46, -119, -112, -100, -123, -24, -121, -79, 97};
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
    msg.setTimeStamp(0.16728185528738215);
    msg.setSource(10718U);
    msg.setSourceEntity(252U);
    msg.setDestination(37593U);
    msg.setDestinationEntity(59U);
    msg.content_type.assign("DAAHXVKDXJWBHGAFQHFRHETXWTRNYPPZBELCFQUZSPOJQ");
    const char tmp_msg_0[] = {-12, 106, -122, -74, 107, -107, -110, 64, -76, -22, 110, 41, -32, -71, -55, -22, 7, -99};
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
    msg.setTimeStamp(0.07135628146922313);
    msg.setSource(31317U);
    msg.setSourceEntity(139U);
    msg.setDestination(9840U);
    msg.setDestinationEntity(31U);
    msg.content_type.assign("AYYJPEQUIKNSHFXYQXGPLZLMTOABADLMVESYPVQBNIOIZCDXEFNIADPBVCWTEULAXHDGLNEITAANBWGLROVGLRWHWRBBZZKJWPWRCSMHMQFCBOTWHGDZJRCQPTMRFSNIFTDC");
    const char tmp_msg_0[] = {-42, -6, -109, 3, -88, -19, 32, -115, -10, 54, -104, 43, 16, 76, -77, 67, 2, 43, 15, -75, 2, 60, 10, 101, 87, -27, 25, 22, 3, -48, 66, 72, 58, 125, 53, -59, -77, 6, -120, 25, -70, -103, 90, -99, 89, -108, 44, -103, -49, -113, -97, 61, 103, -51, 71, 85, -112, -127, -33, -23, -113, -110, -62, 31, -92, -25, 99, -72, -35, -87, 27, 108, -51, -21, 55, 76, 46, -19, -33, 3, -28, 5, -121, -92, 101, 87};
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
    msg.setTimeStamp(0.9548701914582012);
    msg.setSource(3610U);
    msg.setSourceEntity(51U);
    msg.setDestination(15532U);
    msg.setDestinationEntity(156U);
    msg.content_type.assign("DBRQRJBCFLWBNEABDUMRHNJULFVBONXKYIYZEHLSNIDGCFUFQAENVVOGCDITEJWXHQFRZGTUBXBQCHTAQGCGESROBDFPUXOZALCZZOEWPGJGLUOOHEW");
    const char tmp_msg_0[] = {-110, -34, 52, -89, 54, -104, 120, 74, -12, -86, -28, -75, 32, 45, -58, 90, 104, -76, 18, -105, -60, -45, 33, -48, -118, -93, -48, -48, -74, 4, -40, 123, -106, -87, 66, 49, -29, -117, 2, -87, 105, 26, 16, -97, 28, 94, -95, -64, -101, -29, -111, -104, 85, -40, 108, -48, -74, -94, -5, -93, 120, 89, -49, -5, 95, -34, 63, 7, -70, 62, -62, 61, 41, 124, -112, -20, 109, -16, 94, -32, -102, -54, 77, -38, 95, 11, 96, 30, -23, 85, 111, -44, -78, 33, 110, -76, -48, 25, -18, 78, 45, 72, -80, 93, -54, 125, -83, 102, 40, -121, 114, 57, 63, 126, -58, 105, 49, -78, 23, 59, -99, -81, 114, 10, 1, -67, 11, 17, -77, 16, -16, -57, 91, -2, 10, -80, -17, 26, -40, 9, -63, 9, -70, -37, 105, 28, 30, 126, 72, -121, 54, 59, 63, 110, -97, 99, -59, -110, -60, 66, 9, 82, -7, 8, -114, 28, 16, 82, 93, -106, 97, -29, 101, 107, -58, 12, -75, 52, -99, 25, 70, 115, 105, -34, 35, -26, 33, 50, -127, 40, -112, 1, 72, 32, -24, 19, -99, 106, 52, 55, -105, 26, 30, 46, -56, 10, -94, -7, -82, -13, 101};
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
    msg.setTimeStamp(0.3994933895121241);
    msg.setSource(46427U);
    msg.setSourceEntity(58U);
    msg.setDestination(57041U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.6189019854364026);
    msg.setSource(41417U);
    msg.setSourceEntity(190U);
    msg.setDestination(7133U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.03422629547921763);
    msg.setSource(38500U);
    msg.setSourceEntity(198U);
    msg.setDestination(22460U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.4591214176871917);
    msg.setSource(30382U);
    msg.setSourceEntity(2U);
    msg.setDestination(46898U);
    msg.setDestinationEntity(29U);
    msg.target = 59840U;
    msg.bearing = 0.4214317725192337;
    msg.elevation = 0.4971183973146739;

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
    msg.setTimeStamp(0.5280209480742835);
    msg.setSource(60178U);
    msg.setSourceEntity(235U);
    msg.setDestination(42552U);
    msg.setDestinationEntity(65U);
    msg.target = 20971U;
    msg.bearing = 0.6058566657744957;
    msg.elevation = 0.08028266821235208;

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
    msg.setTimeStamp(0.5750718060470882);
    msg.setSource(60569U);
    msg.setSourceEntity(189U);
    msg.setDestination(2314U);
    msg.setDestinationEntity(134U);
    msg.target = 25347U;
    msg.bearing = 0.6243767823299389;
    msg.elevation = 0.22575268925956138;

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
    msg.setTimeStamp(0.3582895648001231);
    msg.setSource(38714U);
    msg.setSourceEntity(93U);
    msg.setDestination(2246U);
    msg.setDestinationEntity(247U);
    msg.target = 37432U;
    msg.x = 0.06853802587018643;
    msg.y = 0.6774886076580913;
    msg.z = 0.4087121333219964;

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
    msg.setTimeStamp(0.03748407754771543);
    msg.setSource(22933U);
    msg.setSourceEntity(51U);
    msg.setDestination(4268U);
    msg.setDestinationEntity(141U);
    msg.target = 49716U;
    msg.x = 0.890186454454451;
    msg.y = 0.16459379576081234;
    msg.z = 0.5490266225343828;

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
    msg.setTimeStamp(0.7400953930329727);
    msg.setSource(37243U);
    msg.setSourceEntity(174U);
    msg.setDestination(40617U);
    msg.setDestinationEntity(182U);
    msg.target = 47127U;
    msg.x = 0.35884333758306686;
    msg.y = 0.9114632270985946;
    msg.z = 0.32647235106844474;

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
    msg.setTimeStamp(0.8838578006316444);
    msg.setSource(47552U);
    msg.setSourceEntity(168U);
    msg.setDestination(42021U);
    msg.setDestinationEntity(121U);
    msg.target = 58743U;
    msg.lat = 0.47510566689333367;
    msg.lon = 0.580894584142309;
    msg.z_units = 14U;
    msg.z = 0.19005973169236023;

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
    msg.setTimeStamp(0.7542190612842361);
    msg.setSource(42422U);
    msg.setSourceEntity(235U);
    msg.setDestination(4511U);
    msg.setDestinationEntity(61U);
    msg.target = 18316U;
    msg.lat = 0.49471734261605627;
    msg.lon = 0.7566166010879972;
    msg.z_units = 72U;
    msg.z = 0.35341702514915596;

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
    msg.setTimeStamp(0.29918259621288756);
    msg.setSource(15839U);
    msg.setSourceEntity(113U);
    msg.setDestination(53793U);
    msg.setDestinationEntity(101U);
    msg.target = 26178U;
    msg.lat = 0.35228735214888596;
    msg.lon = 0.35058165199411406;
    msg.z_units = 205U;
    msg.z = 0.8784919362304732;

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
    msg.setTimeStamp(0.5700092962562671);
    msg.setSource(26419U);
    msg.setSourceEntity(24U);
    msg.setDestination(65296U);
    msg.setDestinationEntity(120U);
    msg.locale.assign("NNJLSNJABLBGKGPQQBZGTKYUSCFFBUZRVILPYCVIFZMECWHTZBXWPNMDPTYBQYWCRHCOOACXDEYYWDOVBQVRLHSMAIVUQKBWXUL");
    const char tmp_msg_0[] = {-79, 124, -76, 82, 20, 95, 45, -85, -12, 17, 40, -27, -87, 24, 71, -9, -88, 29, -75, -73, -31, 60, 52, 79, -73, -59, -97, 47, -29, -110, -60, 7, -20, -62, 23, -27, -122, -4, -65, -115, -100, -107, 118};
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
    msg.setTimeStamp(0.8101113134740626);
    msg.setSource(40220U);
    msg.setSourceEntity(122U);
    msg.setDestination(38566U);
    msg.setDestinationEntity(122U);
    msg.locale.assign("FJMRKYOAXWGFWXCORPCSOSHPTOYUEHRFDAIGLBLTUIZFJSAYMBWWJRIOJVOSINXXAKOFN");
    const char tmp_msg_0[] = {-105, 107, -107, 5, 123, -29, -48, -87, 94, -76, -128, -91, 87, 42, 68, 15, 69, -111};
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
    msg.setTimeStamp(0.06645223815968271);
    msg.setSource(42696U);
    msg.setSourceEntity(103U);
    msg.setDestination(59877U);
    msg.setDestinationEntity(45U);
    msg.locale.assign("ESFGUXONYCWDGRRNQQGSFUUPGOYMIBRAIPQYAMZFHZBKEWKMAQCEKTHNWSJMTOHDVZEDAYW");
    const char tmp_msg_0[] = {-17, -48, 36, -103, -5, 83, -117, -107, -91, -20, 16, -118, 44, -26, 34, 69, 61, 94, 46, -115, -20, -17, 68, -72, -84, -54, -110, 63, -41, 104, -86, 99, 49, 16, 95, -21, -50, 22, 15, 112, 43, 5, -47, -50, 85, 36, -62, -1, -45, 124, -69, -128, -106, -61, -112, 1, -86, 62, -84, -16, -49, -112, -31, -67, 50, -35, -79, -9, 24, 20, -112, 87, -106, 61, -19, -4, -16, -49, 116, -86, -45, -93, -57, 23, 70, 38, -87, 32, 58, 36, 44, -18, -120, 23, 27, 116, -23, 26, -4, -70, -103, 50, -109, 113, -111, -23, 90, -13, 113, 3, 121, -127, 96, -60, 21, 116, -35, -108, -27, 23, 54, 81, -56, -3, -13, -40, 41, 67, 97, -126, 20, -14, 5, 16, -13, 108, 81, 31, -98, 73, -76, 22, 126, -48, 27, 86, -68, -10, -41, -122, -5, 98, -70, 116, 74, 71, 120, -112, 113, -77, 113, -97, 15, -102, 57, -82, -77, 27, -95, -54, -43, 42, 124, -73, 70, 61, -56, -51, -128, 30, 120, -59, 93, 114, 101, 113, -50, 19, 73, 77, -92, -125, 121, -122, 60, -113, 1, 90, 26, -106, 119, 50};
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
    msg.setTimeStamp(0.6623605071819456);
    msg.setSource(38134U);
    msg.setSourceEntity(215U);
    msg.setDestination(52503U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.4512579109648168);
    msg.setSource(18478U);
    msg.setSourceEntity(75U);
    msg.setDestination(9100U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.6770592877148348);
    msg.setSource(32741U);
    msg.setSourceEntity(222U);
    msg.setDestination(91U);
    msg.setDestinationEntity(192U);

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
