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
// IMC XML MD5: f6f5adb5d6ef31881d40b0811697f34f                            *
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
    msg.setTimeStamp(0.702507351779);
    msg.setSource(7782U);
    msg.setSourceEntity(104U);
    msg.setDestination(35642U);
    msg.setDestinationEntity(99U);
    msg.state = 185U;
    msg.flags = 90U;
    msg.description.assign("FXJZAEYRRBUKHLSPQGVSDIMZPAWYIFXMFCTFKNRWOYDTLPQTOCGDJBEGJFIXEBZHWJIQGNOLMZGQLQOQUSJRRPZPDBGUFBJDBIKPPKBMJOLRWTNDLCWFQSNIJDCYIQCTASNCAYUKZZVAMVERASXOTPCYGSKEWNUJMARLFXKVEABLHLMJEUOXRIEYKAOXHZDKCWSYNUHWHUU");

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
    msg.setTimeStamp(0.266244236225);
    msg.setSource(13135U);
    msg.setSourceEntity(236U);
    msg.setDestination(47540U);
    msg.setDestinationEntity(2U);
    msg.state = 68U;
    msg.flags = 185U;
    msg.description.assign("BBCAQYDQNCLLZRMQOACWJCAXSWFKSUPGBZFMHM");

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
    msg.setTimeStamp(0.428362761991);
    msg.setSource(24274U);
    msg.setSourceEntity(152U);
    msg.setDestination(49352U);
    msg.setDestinationEntity(48U);
    msg.state = 176U;
    msg.flags = 20U;
    msg.description.assign("ACJTNFMURJUTKOYOKJUZEOHVKMNWRZHFWGIAXZXLGQHVCXNCUWDOARZKYPJYYVZWAPPGMSMSVBMHLBOCWGWPZRAQDUDTUGKDMQXLPUSIRQPTHYNHFAEYWGKFN");

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
    msg.setTimeStamp(0.103141622142);
    msg.setSource(50817U);
    msg.setSourceEntity(247U);
    msg.setDestination(18977U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.91035283842);
    msg.setSource(65530U);
    msg.setSourceEntity(222U);
    msg.setDestination(37222U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.401469272814);
    msg.setSource(57051U);
    msg.setSourceEntity(162U);
    msg.setDestination(1993U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.177124607747);
    msg.setSource(12400U);
    msg.setSourceEntity(33U);
    msg.setDestination(2335U);
    msg.setDestinationEntity(78U);
    msg.id = 84U;
    msg.label.assign("VMDMPBNXETZESIBFITSZEOCUZPAIOTHJYJRFSBCDALWXRGZVOWGPXLHCDDYCASKCMOOGQBZGMRRCTZJQDUCJTDBAJIPYEUFPUKWKHNARNTOYGMXKIQEULQRIWZCFNXMJTAWKFLKWMFQPNHQRRVHWPJHGXLYMXSVQZYSJDIENVEYAHLVPZQREMNGXYBWNXDKCYUFHEIBSWJMQWIFLHELUDGATOSYAKTGVXOPDQVOSCPFGKVKT");
    msg.component.assign("UIJFDVCWKZSFLYWXXAFDUKW");
    msg.act_time = 46221U;
    msg.deact_time = 56403U;

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
    msg.setTimeStamp(0.756922303601);
    msg.setSource(30316U);
    msg.setSourceEntity(68U);
    msg.setDestination(33664U);
    msg.setDestinationEntity(194U);
    msg.id = 202U;
    msg.label.assign("AHCGIRXHLCYKKKEQNQECEMONIRQCWZSQBRISOKDCJWQCULZEQMZTNRXTBUWDPSFUEHYLDYXHNB");
    msg.component.assign("EHJIZHYXEHUILTTVEUXKGFROFAIINMWQRFKRGLFEAZZNHNECJVIJWYDRYVBLHNDWQTCBCXPAOLLGMMMSKRZGSQXIOTBLJYMOFEXDIOKQBYPGNYUPUTBXNKRFQNWUEWWMSBYELXCKGZKSAAJQR");
    msg.act_time = 33406U;
    msg.deact_time = 1077U;

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
    msg.setTimeStamp(0.747550287486);
    msg.setSource(13205U);
    msg.setSourceEntity(250U);
    msg.setDestination(28480U);
    msg.setDestinationEntity(121U);
    msg.id = 202U;
    msg.label.assign("VVBOUDEGWHTSIWSUZALWTKKOWDYBHDFAGNHRSUQBDFGSNJYUHFRJXLJEXCKFZALIPPJTVMLAGXUODYMRQBFQZOEMGZSHPAYYXCURLYQNXJZCQ");
    msg.component.assign("TSUCVYASHSEPIRHLJNYHWUPQWJRKOXGLHMYVYEZXXJVHCDPQBOFUZMTCQGMATLQNIKVMFNEMTUDSLRUBPRGXZXNDPQWWYSCOKYJOVMWZFN");
    msg.act_time = 11709U;
    msg.deact_time = 43661U;

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
    msg.setTimeStamp(0.397512250425);
    msg.setSource(43368U);
    msg.setSourceEntity(65U);
    msg.setDestination(2500U);
    msg.setDestinationEntity(30U);
    msg.id = 37U;

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
    msg.setTimeStamp(0.327838718202);
    msg.setSource(60988U);
    msg.setSourceEntity(99U);
    msg.setDestination(9975U);
    msg.setDestinationEntity(142U);
    msg.id = 194U;

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
    msg.setTimeStamp(0.0909535782387);
    msg.setSource(18808U);
    msg.setSourceEntity(227U);
    msg.setDestination(52725U);
    msg.setDestinationEntity(245U);
    msg.id = 98U;

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
    msg.setTimeStamp(0.384352835043);
    msg.setSource(55634U);
    msg.setSourceEntity(28U);
    msg.setDestination(60322U);
    msg.setDestinationEntity(81U);
    msg.op = 204U;
    msg.list.assign("HCPIRYGHEQYGWWGT");

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
    msg.setTimeStamp(0.157095022836);
    msg.setSource(53525U);
    msg.setSourceEntity(128U);
    msg.setDestination(9619U);
    msg.setDestinationEntity(203U);
    msg.op = 120U;
    msg.list.assign("IQMUUHXVVITJKJYEQNDFJIEHEWWEBLENVPSBYXSGOIS");

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
    msg.setTimeStamp(0.628203152458);
    msg.setSource(14541U);
    msg.setSourceEntity(216U);
    msg.setDestination(12980U);
    msg.setDestinationEntity(155U);
    msg.op = 121U;
    msg.list.assign("GWBWTATZQWZQMVFRYTXHCYTLGKJEFMXODUDGGPQFRGUMQUAPCIZDPXLZZVSPORXXDEKOQKJYLWSLENFDNLVNZSZQORBINJRLEMKMDFMKYWBHQJCJDISCIVSYVAHUVBFOCUPANDBVTAPQAAZLBTNUAEBJHIJHSEOZUSYYVGLCKXWITFBEWOYVVNHOJHJKHFUXBCDLNJIRDOKCIGPISGTYLKHFWSPPFMTWUEKRTCAEYMMHOCRGNXZPRRXMQEUI");

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
    msg.setTimeStamp(0.471576741947);
    msg.setSource(31077U);
    msg.setSourceEntity(3U);
    msg.setDestination(21214U);
    msg.setDestinationEntity(71U);
    msg.value = 202U;

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
    msg.setTimeStamp(0.230828133846);
    msg.setSource(5197U);
    msg.setSourceEntity(154U);
    msg.setDestination(55983U);
    msg.setDestinationEntity(16U);
    msg.value = 58U;

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
    msg.setTimeStamp(0.694601979819);
    msg.setSource(34225U);
    msg.setSourceEntity(171U);
    msg.setDestination(24108U);
    msg.setDestinationEntity(170U);
    msg.value = 181U;

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
    msg.setTimeStamp(0.538816967836);
    msg.setSource(19568U);
    msg.setSourceEntity(129U);
    msg.setDestination(50344U);
    msg.setDestinationEntity(142U);
    msg.consumer.assign("LSILUHLVBZIAPWMHMMZYPFYRMMFTRHTWAJVOWBBQGYJAANEURQSFUNEHHAJNVNQVXLLEGYKIOXWACJDSOJBKYPNOBPS");
    msg.message_id = 33534U;

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
    msg.setTimeStamp(0.176554348845);
    msg.setSource(45749U);
    msg.setSourceEntity(129U);
    msg.setDestination(18762U);
    msg.setDestinationEntity(125U);
    msg.consumer.assign("FJJYNKHKVMIVVRGRUGDIL");
    msg.message_id = 28601U;

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
    msg.setTimeStamp(0.291835762085);
    msg.setSource(33424U);
    msg.setSourceEntity(0U);
    msg.setDestination(61760U);
    msg.setDestinationEntity(17U);
    msg.consumer.assign("ELMYJXPJJHDSWEAMILVHJFMEASNYZDNOUEZEUOJUZKQOTLAXXFWGWQTDJOVOETORDVTCRDQQPUWCRIGJDHTFRGFRDKCXVICKPPQNUNPKDBGESACPOG");
    msg.message_id = 57905U;

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
    msg.setTimeStamp(0.394630037055);
    msg.setSource(22315U);
    msg.setSourceEntity(167U);
    msg.setDestination(31387U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.29938842443);
    msg.setSource(59854U);
    msg.setSourceEntity(174U);
    msg.setDestination(20635U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.994013900719);
    msg.setSource(37303U);
    msg.setSourceEntity(10U);
    msg.setDestination(56688U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.868178633943);
    msg.setSource(17443U);
    msg.setSourceEntity(12U);
    msg.setDestination(29368U);
    msg.setDestinationEntity(43U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.673908952877);
    msg.setSource(10095U);
    msg.setSourceEntity(23U);
    msg.setDestination(22565U);
    msg.setDestinationEntity(196U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.0711739158766);
    msg.setSource(7366U);
    msg.setSourceEntity(227U);
    msg.setDestination(46177U);
    msg.setDestinationEntity(123U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.570019515123);
    msg.setSource(51460U);
    msg.setSourceEntity(162U);
    msg.setDestination(13596U);
    msg.setDestinationEntity(43U);
    msg.total_steps = 185U;
    msg.step_number = 26U;
    msg.step.assign("DPCOPMQYIUVEYXNSMLFICROBTRCSQGXXVZOXULGGJXFRJTQHXKEZQFKQZQIHBOGVHSONAYDTEHDKUUAJMCIRONUPFIWBFHDHFLBADRBUHWCVUSJKHMWRELWJNMRAFWOTCIVISJJKNRMFRKPKXJBKSHLVLCSJLYNXTZVERAPUBOZCGDJZNTQMYBIPBHNKQDUPEYYXSFXWVPZGILTGFZVTDQPIYMACTPENLNWZOMZG");
    msg.flags = 71U;

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
    msg.setTimeStamp(0.239154104142);
    msg.setSource(11972U);
    msg.setSourceEntity(89U);
    msg.setDestination(51916U);
    msg.setDestinationEntity(105U);
    msg.total_steps = 15U;
    msg.step_number = 104U;
    msg.step.assign("YYGJEJIGXZKEHQJWIJGTDYYRKEDMADFJCOTGMFFWMBAWIRYFLVJDMWAPWIMRZHDQHVLXYDXCOWDLZSETOCPVRRGVTQUTRBWPZFCXXAZUOCHHBEHNXABTRGIGKSYWOEQVENCYIPMLMALVOVWARFCBEQKHUGKUSBVXDTCUNQRQSNOQIOSBXZNLHTUBMWYJFNVQZTOPVUCOSFRQMAIGCJPKNNESKFJUTXNUPZASDBPSLPPZK");
    msg.flags = 223U;

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
    msg.setTimeStamp(0.801165859091);
    msg.setSource(46326U);
    msg.setSourceEntity(199U);
    msg.setDestination(14517U);
    msg.setDestinationEntity(152U);
    msg.total_steps = 7U;
    msg.step_number = 246U;
    msg.step.assign("IHLQZTFHXQHICGNAKASMYOZZIKXOQHCDKLDWDJXIFMELMCVUIJJZJLTDRCVCRNGZUYUGWGSGLRPSFADUVOTRUWYHQJOLTNNEWVYRCOFFBGIUPNYEBKIYPVHBLWMFPKAFOGGHPXBOKJUVLCSFHKWIETXZBLNMY");
    msg.flags = 96U;

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
    msg.setTimeStamp(0.59954406207);
    msg.setSource(1958U);
    msg.setSourceEntity(238U);
    msg.setDestination(55705U);
    msg.setDestinationEntity(215U);
    msg.state = 52U;
    msg.error.assign("IXXCZKKKZRGECGEXGPLPUUJRYMWZLURQRSJNSZJLWFNNQNLCDJZVPTOBUWYENGMSHDMDCTODUIYHTMHMKWVVOXPPTSTEYTEBFIBJGTQKYSDYFPFNLDC");

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
    msg.setTimeStamp(0.251890350945);
    msg.setSource(29209U);
    msg.setSourceEntity(242U);
    msg.setDestination(39133U);
    msg.setDestinationEntity(99U);
    msg.state = 136U;
    msg.error.assign("QKTPRIQARTDORWOJSQRUAZYQGZFBHVAGRGPPBACECZDDBCPNMJOEEKIGGWFTJHTRSUWNRXDXDZLEUAPYPDDINHFKTKATULWIDERLEVTMLIXYOQXECKCUMZMHIVMWFBALXBNLGUNNCMJXLWUYWKFSHEOSSGAHYGZNWHFJQPZOBIMOFCNHPKSZXBQFCJMIACXVJIDSHYKBAIPLWBBZPYQTFSDSVEJNROVUULLJNGYFCUXMKJZSTVQOY");

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
    msg.setTimeStamp(0.347238411168);
    msg.setSource(63782U);
    msg.setSourceEntity(196U);
    msg.setDestination(51943U);
    msg.setDestinationEntity(153U);
    msg.state = 58U;
    msg.error.assign("LWUQKOPIBZIOMKTPJSMZOKGMXJEFAQYJFSUJUHDEWZJZUFKHHRICLSYPXCWEXOVXPTISEGVIZFAAOYFUDFNHHSLTNAHETVAMIMSMDSYOTMQGY");

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
    msg.setTimeStamp(0.994024316359);
    msg.setSource(9091U);
    msg.setSourceEntity(121U);
    msg.setDestination(41065U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.904528468061);
    msg.setSource(16097U);
    msg.setSourceEntity(151U);
    msg.setDestination(32930U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.555749375693);
    msg.setSource(61761U);
    msg.setSourceEntity(43U);
    msg.setDestination(51621U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.701707288255);
    msg.setSource(2006U);
    msg.setSourceEntity(153U);
    msg.setDestination(37456U);
    msg.setDestinationEntity(199U);
    msg.op = 122U;
    msg.speed_min = 0.153465179808;
    msg.speed_max = 0.878245145864;
    msg.long_accel = 0.474060412617;
    msg.alt_max_msl = 0.978524038078;
    msg.dive_fraction_max = 0.130089977229;
    msg.climb_fraction_max = 0.844366195173;
    msg.bank_max = 0.176093658724;
    msg.p_max = 0.880359018124;
    msg.pitch_min = 0.523720631116;
    msg.pitch_max = 0.418677381482;
    msg.q_max = 0.100751161466;
    msg.g_min = 0.645880960848;
    msg.g_max = 0.626952078306;
    msg.g_lat_max = 0.0883709689481;
    msg.rpm_min = 0.657635754569;
    msg.rpm_max = 0.696042410437;
    msg.rpm_rate_max = 0.376279394287;

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
    msg.setTimeStamp(0.919403353726);
    msg.setSource(62100U);
    msg.setSourceEntity(20U);
    msg.setDestination(54992U);
    msg.setDestinationEntity(228U);
    msg.op = 236U;
    msg.speed_min = 0.883109882276;
    msg.speed_max = 0.170625404216;
    msg.long_accel = 0.631979154456;
    msg.alt_max_msl = 0.995913101375;
    msg.dive_fraction_max = 0.397086216091;
    msg.climb_fraction_max = 0.161155069304;
    msg.bank_max = 0.272769460111;
    msg.p_max = 0.5782545079;
    msg.pitch_min = 0.00586358261096;
    msg.pitch_max = 0.291588927649;
    msg.q_max = 0.406565207115;
    msg.g_min = 0.405537838194;
    msg.g_max = 0.965300825404;
    msg.g_lat_max = 0.771414599687;
    msg.rpm_min = 0.860143872173;
    msg.rpm_max = 0.0206378040145;
    msg.rpm_rate_max = 0.920081361847;

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
    msg.setTimeStamp(0.0328598716348);
    msg.setSource(47374U);
    msg.setSourceEntity(30U);
    msg.setDestination(5318U);
    msg.setDestinationEntity(140U);
    msg.op = 222U;
    msg.speed_min = 0.839445824267;
    msg.speed_max = 0.299438659108;
    msg.long_accel = 0.68284340582;
    msg.alt_max_msl = 0.112521868937;
    msg.dive_fraction_max = 0.191141540576;
    msg.climb_fraction_max = 0.240335707042;
    msg.bank_max = 0.198108850315;
    msg.p_max = 0.899928921531;
    msg.pitch_min = 0.564894382132;
    msg.pitch_max = 0.213384439592;
    msg.q_max = 0.578238809356;
    msg.g_min = 0.58890751005;
    msg.g_max = 0.915421505437;
    msg.g_lat_max = 0.497172075064;
    msg.rpm_min = 0.866716960208;
    msg.rpm_max = 0.328783567776;
    msg.rpm_rate_max = 0.00728060198503;

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
    msg.setTimeStamp(0.916392103479);
    msg.setSource(5782U);
    msg.setSourceEntity(8U);
    msg.setDestination(26623U);
    msg.setDestinationEntity(78U);
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RQTFNAWSRIFPIDSDQTKEILMCHVXDFATAQHLRWSVXDSEQBRYLZVOZGFUYIXMNDAOLBYHBZHPVYMBZKRUAEHKFCPUVJHVCLADNHQBQJBZMIWVERCPJWCXTJUSCUWJOQXTUMNYOXGEBWNSYHS");
    tmp_msg_0.description.assign("WAAPKIOSPMBOWAMXLIPQXGHJBGKHUULKCEBEAGVPUZMVCTQROLUJVDKMGUNGUIFQ");
    tmp_msg_0.vnamespace.assign("BXUVBTYUJQIMHFLDQHJGWDKNFGKDBTJOACZZGDPWPGFZXIPHFCZXTVURFLQEIYULNIEATMIYNRNMSKUECIOXHJPKVNUGPHPKBMLWCIKVGZXFRQZXVYSRSPAGQNORBITDCNWFMXSDBX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QHXXNFTZLRFSBEIGAGTSMOPEUOOAQUTAQOKVHCWFXFJCJQMZDNVPXLGFIWECJSLTDNEMDOHCGTXMHHSLBCUKSDNYIIPPQPMBVGIRSIHZTKOAJRLUYKTABBMMBVOGQXNCXEYCWAMVKIDCZGEBYWVLZIKNTUKAAARFRZIU");
    tmp_tmp_msg_0_0.value.assign("BMARDETNZDXBPGNNFMLHOCFYNCEOTCSOBYTJKIKLGDIBYWKZOQFUKRWCUZGSSPBWCIEHLXRZHYPUPHUQFJUOMSVVIIGYFORNSXLDEFSRYIAETGWPIWDQCVEOPGJAVTJNHAEVVSBYWHQOKPTMXDJCDYZAMBXSKMWQKVUZHRLGNTEPJHKAZTXLZLANUFEFUZABJIL");
    tmp_tmp_msg_0_0.type = 170U;
    tmp_tmp_msg_0_0.access = 22U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HKNRFBFFAVVDMWWRBDTAHBKYJSSLIWT");
    IMC::IridiumMsgRx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.origin.assign("AFIFMKDGHWQSYLTELIYYUHBNZELCT");
    tmp_tmp_msg_0_1.htime = 0.329561619487;
    tmp_tmp_msg_0_1.lat = 0.498284715101;
    tmp_tmp_msg_0_1.lon = 0.860735551256;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-97, 23, 60, 27, -38, 15, 56, 39, 51, -70, -122, -32, -58, -125, 68, 93, -72, -36, -123, -28, 122, 31, 63, 21, 16, -104, 88, 98, -8, -77, 106, 61, 58, -122, -47, -59, 33, 10, -2, 15, -85, 117, 20, 4, -77, -85, 86, 123, 51, -43, 28, 42, 113, 81, 106, -118, 115, 32, 109, -50, -106, -43, -22, 85, 112, -107, 73, 74, -29, 20, 39, -16, -99, 111, -98, -116, 122, -34, 45, -26, -91, 51, 109, -19, -56, -78, 84, -5, 108, -25, 120, 110, 10, -113, 118, -38, -2, 68, -114, -95, 123, 21, 99, 13, 23, 27, -3, -31, 117, 75, -105, 76, 18, -6, -70, -64, 6, -124, 59, -70, -108, -72, 88, -32, -128, 42, -81, -26, -118, -73, -69, 73, 111, -44, 37, 120, 124, 64, -79, 100, 94, -35, -47, -7, 74, -66, -113, -113, -120, 98, 12, -1, 92, -12, -33, -95, 108, -69, 48, -31, 120, -90, -46, 21, -95, -31, -106, -107, 86, 17, 95, -20, -79, -2, 10, -50, -119, 67, -109, 122, -97, -64, -18, -79, 111, -2, 44, 52, 6, 44, -94, 114, 64, -60, 13, -118, -27, 119, 47, -62, -61, 64, 1, 123, 7, -55, -31, 30, 83, -121, 26, 68, 62, 56};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.417772181698);
    msg.setSource(27501U);
    msg.setSourceEntity(214U);
    msg.setDestination(17420U);
    msg.setDestinationEntity(161U);
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2547194346U;
    tmp_msg_0.messages.assign("LLMRLWVHWYSIZTPEGMWNFORAGEIUQTZBYWCLRNNTTIUNQAKNFEJQWDYEXCPAUZURZAVSEEHUSEWZQJGVJYNPBBRN");
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
    msg.setTimeStamp(0.654451210029);
    msg.setSource(62337U);
    msg.setSourceEntity(48U);
    msg.setDestination(42997U);
    msg.setDestinationEntity(156U);
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 95U;
    tmp_msg_0.max_depth = 0.11709422296;
    tmp_msg_0.min_altitude = 0.561165604044;
    tmp_msg_0.max_altitude = 0.696751666612;
    tmp_msg_0.min_speed = 0.242872916214;
    tmp_msg_0.max_speed = 0.103997948875;
    tmp_msg_0.max_vrate = 0.679191847634;
    tmp_msg_0.lat = 0.524393885128;
    tmp_msg_0.lon = 0.349701005598;
    tmp_msg_0.orientation = 0.122837144878;
    tmp_msg_0.width = 0.108566933973;
    tmp_msg_0.length = 0.99379988298;
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
    msg.setTimeStamp(0.66827805525);
    msg.setSource(56056U);
    msg.setSourceEntity(112U);
    msg.setDestination(34734U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.647316004872;
    msg.lon = 0.817165405004;
    msg.height = 0.0431198702153;
    msg.x = 0.758261771298;
    msg.y = 0.403820381715;
    msg.z = 0.701770903049;
    msg.phi = 0.195358071748;
    msg.theta = 0.973719553442;
    msg.psi = 0.304887353095;
    msg.u = 0.787196836319;
    msg.v = 0.0124232511115;
    msg.w = 0.624270094009;
    msg.p = 0.516940570733;
    msg.q = 0.116361182709;
    msg.r = 0.0492773103087;
    msg.svx = 0.289773733937;
    msg.svy = 0.104944401473;
    msg.svz = 0.696528181928;

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
    msg.setTimeStamp(0.182943191055);
    msg.setSource(24949U);
    msg.setSourceEntity(84U);
    msg.setDestination(48015U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.966177327074;
    msg.lon = 0.904766781645;
    msg.height = 0.229267679418;
    msg.x = 0.16498319615;
    msg.y = 0.834191774913;
    msg.z = 0.220716031322;
    msg.phi = 0.456967307064;
    msg.theta = 0.274716882678;
    msg.psi = 0.86380310829;
    msg.u = 0.892968239597;
    msg.v = 0.443550082199;
    msg.w = 0.742842855445;
    msg.p = 0.294913958424;
    msg.q = 0.378826044124;
    msg.r = 0.869027979831;
    msg.svx = 0.672499717585;
    msg.svy = 0.99383275468;
    msg.svz = 0.577466186452;

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
    msg.setTimeStamp(0.97641090247);
    msg.setSource(50978U);
    msg.setSourceEntity(71U);
    msg.setDestination(24032U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.107243954907;
    msg.lon = 0.232334834229;
    msg.height = 0.43723919366;
    msg.x = 0.519283458288;
    msg.y = 0.407271985035;
    msg.z = 0.528560667766;
    msg.phi = 0.822034742221;
    msg.theta = 0.120809750596;
    msg.psi = 0.935424496251;
    msg.u = 0.650159680161;
    msg.v = 0.630846203301;
    msg.w = 0.861681050456;
    msg.p = 0.47900614934;
    msg.q = 0.816463332374;
    msg.r = 0.616547958704;
    msg.svx = 0.666603226993;
    msg.svy = 0.18614305228;
    msg.svz = 0.886375870865;

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
    msg.setTimeStamp(0.812780692933);
    msg.setSource(30955U);
    msg.setSourceEntity(184U);
    msg.setDestination(1374U);
    msg.setDestinationEntity(232U);
    msg.op = 203U;
    msg.entities.assign("OJFANVTICHOXWBJVVHYFONLAIAZVGSNBBZDLUCYYUDCMXLZRSREVEATXJMQWSWOHPWVYBQJBBGFUNXPXEKCEDPAGTJIOAZUWGKSYFKWIRZHQWAYMCTO");

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
    msg.setTimeStamp(0.880228394888);
    msg.setSource(62418U);
    msg.setSourceEntity(114U);
    msg.setDestination(40465U);
    msg.setDestinationEntity(86U);
    msg.op = 121U;
    msg.entities.assign("LHVZIZEMQIWTGQHPQTBDCWJXQLTREGVLONCLKJOLSFPVSCJREOVUTHMHMGBKISDESXYPBAKRXFMHDNZUSKCXWODGKGBEAFEOGOCYJPWRKTOKIVVRQMXQZYIFKNXBMZNUWCSJMIBLSYYENYUQUZSZASULRVTOBARPRVVPQEQIYCYWUUI");

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
    msg.setTimeStamp(0.160918957991);
    msg.setSource(43918U);
    msg.setSourceEntity(181U);
    msg.setDestination(20094U);
    msg.setDestinationEntity(224U);
    msg.op = 162U;
    msg.entities.assign("GFQXIJYNWLHPFFPUUBBHRRMCBUVMCLDSWSZEZAAJFDMXIFQNQMODOGITIJOCNBUDLHBEGKVTRHTTREAMPCBMMYPEQUPGTWQNWJROOJNTEZUHZXJKJPDGIGOWLFFRPPQJISWIWKSPLCDUBKZHAVDKXXVYUFYSHQYSNKUTNYMXEAZMGZGRD");

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
    msg.setTimeStamp(0.488074323432);
    msg.setSource(39075U);
    msg.setSourceEntity(152U);
    msg.setDestination(61133U);
    msg.setDestinationEntity(44U);
    msg.type = 6U;
    msg.speed = 33763U;
    const char tmp_msg_0[] = {-103, 7, -89, 95, 117, -16, -89, -69, 33, -72, -39, 106, 120, -1, 18, -14, 1, -5, 27, 63, 56, -94, -73, -58, -94, -71, 27, 18, 24, -75, 75, 122, 31, 107, -64, -50, -41, 79, -78, 11, 47, 53, -116, -70, 69, 86, -76, -64, 17, -40, -105, -67, -9, 107, 2, 25, 67, 86, 95, 3, -108, 72, -118, 7, 40, -3, 2, 11, -69, -102};
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
    msg.setTimeStamp(0.435258585049);
    msg.setSource(2706U);
    msg.setSourceEntity(90U);
    msg.setDestination(2632U);
    msg.setDestinationEntity(245U);
    msg.type = 204U;
    msg.speed = 9817U;
    const char tmp_msg_0[] = {-80, 44, 35, 91, 126, -69, -38, 12, -10, 65, -56, -67, 117, 76, -59, -49, -72, 14, -41, 73, 105, -83, 13, -111, -91, -26, 93, 102, 37, -18, -38, 102, -40, 55, 40, 23, 62, -42, -91, 85, -74, -66, -105, -89, -81, 35, -91, 25, 96, 107, 101, 121, -69, 10, 11, 57, -36, -110, -42, 65, 22, 126, 64, -66, -69, -56, 78, -83, 14, -120, -60, 107, 110, 83, -71, 50, 22, 103, -52, 10, -78, -54, 58, 27, -60, 72, 76, -97, 22, 71, 50, -41, -19, 62, 6, -32, -72, 14, -48, 49, 74, 62, -33, -38, -91, -3, -23, 120, -121, -36, -122, -87, -28};
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
    msg.setTimeStamp(0.439297836744);
    msg.setSource(28046U);
    msg.setSourceEntity(98U);
    msg.setDestination(6277U);
    msg.setDestinationEntity(114U);
    msg.type = 123U;
    msg.speed = 50088U;
    const char tmp_msg_0[] = {-41, -95, -19, 88, 35, 88, 80, -30, -126, -58, -61, 35, -70, 40, 67, -124, 18, -50, -64, -46, -83, -49, 51, -75, -113, 49, 37, -28, -45, 52, -106, 93, 0, -103, -3, 74, -85, 26, 104, 93, -18, -8, -32, 110, 45, -23, 19, -77, 99, 82, -89, 52, -48, -27, -84, 123, -86, -106, -23, -53, -110, 123, -93, 66, -23, -29, 76, 14, 29, -16, 79, -54, -112, 63, 81, -17, -94, 58, 35, 16, -114, 46, -56, 87, 57, 32, -75, -78, 106, -122, -62, 40, 126, -107, -95, -128, 6, -19, -43, 123, -36, 7, 108, 117, -42, 64, -88, -91, 109, -65, -4, 110, -3, -102, 124, -12, 25, -62, 106, 29, 19, 28, -81, 114, 53, 113, 17, 45, 60, 67, 60, -59, 78, -87, 96, -104, -51, -28, -27, -74, 30, -21, 57, 30, -31, 54, -116, -30, -41, 11, 56, -42, 80, 18, -31, 54, 49, -92, -20, -34, -114, -113, -82, 1, 18, 125, 43, -24, 54, 37, 18, 12, 16, 80, -53, 124, -33, 35, 106, 101, 89, -110, 111, 100, -126, 110, 93, -97, -95, -38, 98, -126, -100, -90, -16, -2, -83, 13, 21, 17, -7, -62, 73, 94, 71, -85};
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
    msg.setTimeStamp(0.410561450707);
    msg.setSource(36942U);
    msg.setSourceEntity(127U);
    msg.setDestination(3U);
    msg.setDestinationEntity(224U);
    msg.op = 5U;
    msg.tas2acc_pgain = 0.730685781346;
    msg.bank2p_pgain = 0.672702434301;

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
    msg.setTimeStamp(0.576896281984);
    msg.setSource(8370U);
    msg.setSourceEntity(232U);
    msg.setDestination(54811U);
    msg.setDestinationEntity(230U);
    msg.op = 98U;
    msg.tas2acc_pgain = 0.306861896636;
    msg.bank2p_pgain = 0.529277582323;

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
    msg.setTimeStamp(0.123590295085);
    msg.setSource(60435U);
    msg.setSourceEntity(154U);
    msg.setDestination(33658U);
    msg.setDestinationEntity(51U);
    msg.op = 148U;
    msg.tas2acc_pgain = 0.55341741715;
    msg.bank2p_pgain = 0.37989908311;

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
    msg.setTimeStamp(0.774318858816);
    msg.setSource(48002U);
    msg.setSourceEntity(217U);
    msg.setDestination(24267U);
    msg.setDestinationEntity(35U);
    msg.available = 2897938357U;
    msg.value = 173U;

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
    msg.setTimeStamp(0.273393559147);
    msg.setSource(3541U);
    msg.setSourceEntity(227U);
    msg.setDestination(65329U);
    msg.setDestinationEntity(170U);
    msg.available = 2259590853U;
    msg.value = 201U;

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
    msg.setTimeStamp(0.428828484561);
    msg.setSource(937U);
    msg.setSourceEntity(89U);
    msg.setDestination(46963U);
    msg.setDestinationEntity(153U);
    msg.available = 1823633718U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.257197235054);
    msg.setSource(54284U);
    msg.setSourceEntity(166U);
    msg.setDestination(3915U);
    msg.setDestinationEntity(195U);
    msg.op = 128U;
    msg.snapshot.assign("WDEXBOXVRJXRTQQMZYCWAWFUKLXYIYTLGHOFWRWOVUJCUKYCAJSEGLMKFHDRTQGJXZGKKWYMNPBOUKZFPNOXKUPNMDGFYZEZDUDTJYUCSLVIRWPTIAOFASQPYLNRGMHGWKEDHEMCSHPQWBCDFAZSBLPMABDHILXHAETJQFLWCCEU");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 86U;
    tmp_msg_0.eta = 15318U;
    tmp_msg_0.info.assign("ZKMZXCOAJIYYSQGL");
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
    msg.setTimeStamp(0.573748509115);
    msg.setSource(34925U);
    msg.setSourceEntity(155U);
    msg.setDestination(1541U);
    msg.setDestinationEntity(139U);
    msg.op = 123U;
    msg.snapshot.assign("QHOPLZRIXBEEONGRMJDUPWYFSMEMNRNFDPGTUXYIVCTGWRMQOBEHVQDIFOGHRBVWYRCYPGQTLFRMDASUATDCWLLHICSNOUQEWIHESDBVMUNZBHSVBXKFFYZEIXIPJPGCFKLZMKRKCJTZUMA");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.281318933216;
    tmp_msg_0.x = 0.814077467763;
    tmp_msg_0.y = 0.0968478215914;
    tmp_msg_0.z = 0.537788981363;
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
    msg.setTimeStamp(0.197088470883);
    msg.setSource(53237U);
    msg.setSourceEntity(128U);
    msg.setDestination(30337U);
    msg.setDestinationEntity(225U);
    msg.op = 167U;
    msg.snapshot.assign("KRIKXFEXWHYIPLGKBNGQFNNQYJZAVWEKGIWDIBDSYDXAFRJCOGXZTVVMXBHRUGRSYNPCOOGCTWLEPABWUPUQGRMSKTTFEIGJULNPPWSVMCLCVNKHTYFDDUJCLGSHYOUBNWNZVA");
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.30524102841;
    tmp_msg_0.y = 0.182630940868;
    tmp_msg_0.z = 0.740988979902;
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
    msg.setTimeStamp(0.745388061964);
    msg.setSource(62573U);
    msg.setSourceEntity(39U);
    msg.setDestination(11298U);
    msg.setDestinationEntity(143U);
    msg.op = 90U;
    msg.name.assign("PYSHXWAVXBELSLUIYUNLWQDRWTIHVOZHJCWZCUEKXXYRKYYTJMMGMXGORSWIZTFPZIDTJCMMCGAFKVURKOOANSHWEZGOOBCOKZCFUEKCARTWBSLNZGEDMDOKTS");

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
    msg.setTimeStamp(0.393095584329);
    msg.setSource(31382U);
    msg.setSourceEntity(9U);
    msg.setDestination(28280U);
    msg.setDestinationEntity(9U);
    msg.op = 191U;
    msg.name.assign("UHJWIKWRHKCVCXANUCKXRUUKGPROUWGIPEFEYNRUIADMXSBBVHECNKJUMLKDPEDGPIPJTHYOYQBIZMPXAWIOSEVJTLDZYASCSLTDPXWGFZJTOYMXBFHVZGTEAFZEIFQRVVTGNJLBNKJLEOCFOYIQTHSJMAZVGERNSUMKIXSCZOXRSTMHJGKMFTOE");

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
    msg.setTimeStamp(0.217536799271);
    msg.setSource(29064U);
    msg.setSourceEntity(123U);
    msg.setDestination(63620U);
    msg.setDestinationEntity(252U);
    msg.op = 145U;
    msg.name.assign("TAHHQYLIDPSIOVHNNSHAKFEKYRZDXUIVFBADLLRBBNBNYGUJMWGPCNWPVSJIV");

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
    msg.setTimeStamp(0.416164419846);
    msg.setSource(50561U);
    msg.setSourceEntity(170U);
    msg.setDestination(44500U);
    msg.setDestinationEntity(87U);
    msg.type = 193U;
    msg.htime = 0.579610769766;
    msg.context.assign("SDSARKNNGBYRJFBTSJNGDCFWNPECRBUWTHYZGLUUFSTNZZKGEMUDJFCTIDUJLYCQRCSIKOPXYDDTPMOCPKWXNFTDAJFXLWDEAHCGEQIFSLZJVXQFCBTRHSXWELKGLRHINEOXHPENUVBGOEUPRYPNWVHTAMMOZIZHXIGMBVSCQYHYFRWMONAXWAVJAILAKTVLQWLIFQJGKKQSQVPUZZ");
    msg.text.assign("GCUQJFHTDOSYMDVLGXATTJYPHTWANLZOSUFTWGEEHVZBHZSBEKDWKULVRDPWYVAOHZUDHPCHHSAESRYVMGTDRZPSPGNCVKDUWTIVGQPWOQCEFINJZKKVMULEMSBPNJMJI");

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
    msg.setTimeStamp(0.113959411141);
    msg.setSource(61856U);
    msg.setSourceEntity(225U);
    msg.setDestination(39588U);
    msg.setDestinationEntity(123U);
    msg.type = 181U;
    msg.htime = 0.999756501607;
    msg.context.assign("UAFVWVNUTEBDRSBVGRIVLWKFGBJSKRARBEPORCXRUPNLESVGOEFDNUJJCEPTCQZXOIXSCNGXLAUCFDINEIWHZJJGQIBQQIF");
    msg.text.assign("YLOTZLZZPXEHDJFJLOSMKXZEVKWDMNADPFYTKILFAEKHSQBJNXTIQIDNJAZWMGNBGFHYUWGHLUIVOFKSSSPPXIEUJSGKMBNOZYZHQNWQOQUGEFUHVULCTVTCAQBHOWPBLYNZPRXWWOIRTRMVXUDACVJTFKZXCABENNRGCENKXEBQLMUF");

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
    msg.setTimeStamp(0.187133023768);
    msg.setSource(20004U);
    msg.setSourceEntity(242U);
    msg.setDestination(37737U);
    msg.setDestinationEntity(56U);
    msg.type = 164U;
    msg.htime = 0.240319018537;
    msg.context.assign("SKGFRBMVZAUVQLCNQLULEIQIGVTHGOEUEZNGQAE");
    msg.text.assign("EDKFTSWWBTPFULWMBZQQGWCCGHGVPHCULOOYKGNAVWSOZXSSMJTOFWEJTRKIKZRFUBNKAPAZIHEYNLEJIYLVLFGPXCAVULDUXTQHLEZJR");

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
    msg.setTimeStamp(0.275324896745);
    msg.setSource(49354U);
    msg.setSourceEntity(58U);
    msg.setDestination(33247U);
    msg.setDestinationEntity(154U);
    msg.command = 48U;
    msg.htime = 0.920293973187;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 4U;
    tmp_msg_0.htime = 0.25121358022;
    tmp_msg_0.context.assign("NPHULCVRAKYUZGTZGEUBNXXMLCWDMUJKAUCQABQNJZBTKHSJLBAPTASSYCX");
    tmp_msg_0.text.assign("IOIYTGULKPLAOLUKEPYFUKOYHLICSZQXBTGVYSSUPGYHKYGTPBOSHWHYCRJIQLSDNZQNMKRZDMADZLNVHBZNHVJFGXIOSCMCKTFABZADPJXNCFKZSDMUAAUXOTRJUHMJXABWBGJETNFGODOXPZXSLHUYMVRNFHWBQFMVCJXQRMSVKIPWIQSVMTGVPCKWGKDFIQLOPRUNEWEVPLJWFRNDRWWQAZIEAG");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.244899879478);
    msg.setSource(60979U);
    msg.setSourceEntity(24U);
    msg.setDestination(58726U);
    msg.setDestinationEntity(215U);
    msg.command = 132U;
    msg.htime = 0.322626904159;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 206U;
    tmp_msg_0.htime = 0.712748460344;
    tmp_msg_0.context.assign("KCEDELNTFLDUXNXFWCCPKBDGSIAXJBIKGHQTZLRRFETXABIUVBYCYAZJRFBYYMWPWFGZVMAHJDSBBJTCSWUGTKVBKFHNEQGNFDQXRHELIMUQCJJKKNHGXQFEEZFHGIQDVIXYPMSOUDRTTZXRZBAPCHVTZSAEPYVKMMPJWIWUOCDOLVEZUISKMLM");
    tmp_msg_0.text.assign("SIZQCTRMLGBMYKGUXIRSWMXZHDPMALOYJLRPNAYFFRICRQGEWIUYZVXALUZAHIGPQF");
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
    msg.setTimeStamp(0.616188107938);
    msg.setSource(3345U);
    msg.setSourceEntity(155U);
    msg.setDestination(10753U);
    msg.setDestinationEntity(197U);
    msg.command = 188U;
    msg.htime = 0.492463640281;

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
    msg.setTimeStamp(0.274086423617);
    msg.setSource(31430U);
    msg.setSourceEntity(1U);
    msg.setDestination(30606U);
    msg.setDestinationEntity(48U);
    msg.op = 242U;
    msg.file.assign("AKYVRGRAUDACQAJCRXMQTJXIHSHLWLTFJOYRNEPUMNAUVSXWFVLBFNQQMZDOXYISXHDWMSKOOTEFEBTKVPUDSEQRJKGASUPMKLYUZYBGWBDFQDZLVHNCJQUCGTGYYKDBCXJCGIBGAEVOVBMLDXQITREKISEAJBIYCLPNDUWJOXRRQHKUIWRBPWFKFEZ");

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
    msg.setTimeStamp(0.514218060074);
    msg.setSource(52667U);
    msg.setSourceEntity(196U);
    msg.setDestination(60434U);
    msg.setDestinationEntity(227U);
    msg.op = 252U;
    msg.file.assign("CZRQCBTEUNPEVMUTBYIHLCCISQSQYGRNXVZETOXMJZJYFQFBSUFSTBFGEKEPMTALATGGXTQXRPCHJKUDDJOJBPWMUPON");

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
    msg.setTimeStamp(0.968190695268);
    msg.setSource(49857U);
    msg.setSourceEntity(72U);
    msg.setDestination(4001U);
    msg.setDestinationEntity(96U);
    msg.op = 85U;
    msg.file.assign("XOBJTMXYOSZNPZCDMVQUKFPHHICKLPROTGCOOJCTKKBVXQHWGIVGWPROEJOJZMCPZNAFYLKAWZEHODADYGPMSTVQJFIYKYQPGKCVQNFZTXWFVDDAMACWWMLNULJSBUVISQERCIXWSSXCFNFYABHUCVBZHYEGDRMZVRRHGTRJQD");

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
    msg.setTimeStamp(0.752341178448);
    msg.setSource(12895U);
    msg.setSourceEntity(108U);
    msg.setDestination(50560U);
    msg.setDestinationEntity(17U);
    msg.op = 14U;
    msg.clock = 0.718571770611;
    msg.tz = -19;

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
    msg.setTimeStamp(0.82496137254);
    msg.setSource(1454U);
    msg.setSourceEntity(41U);
    msg.setDestination(27737U);
    msg.setDestinationEntity(90U);
    msg.op = 80U;
    msg.clock = 0.998627858021;
    msg.tz = -33;

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
    msg.setTimeStamp(0.475636222151);
    msg.setSource(40544U);
    msg.setSourceEntity(203U);
    msg.setDestination(25390U);
    msg.setDestinationEntity(234U);
    msg.op = 54U;
    msg.clock = 0.87682320684;
    msg.tz = 83;

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
    msg.setTimeStamp(0.973304189579);
    msg.setSource(36817U);
    msg.setSourceEntity(150U);
    msg.setDestination(38600U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.82450548346);
    msg.setSource(4657U);
    msg.setSourceEntity(74U);
    msg.setDestination(59108U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.0115296637617);
    msg.setSource(17942U);
    msg.setSourceEntity(94U);
    msg.setDestination(43786U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.36384535707);
    msg.setSource(35911U);
    msg.setSourceEntity(229U);
    msg.setDestination(57288U);
    msg.setDestinationEntity(101U);
    msg.sys_name.assign("FHCUEKBCICBFPKMNBWDKEKVWFZUUSTTZURDACOTBPJ");
    msg.sys_type = 60U;
    msg.owner = 14064U;
    msg.lat = 0.8796181565;
    msg.lon = 0.290138366642;
    msg.height = 0.523522768431;
    msg.services.assign("EDCNAJZIWWHRGUADKLPXCMNPYBAGYAXITDSMZKKIAZYVFXSYVQAVKMKIJEOWEZOYGSJZPEDNVKBZCFPQQPDLKENBTSSFERRYJJTZMTXRCXUUPQMBFOGNQOOWXMKBBNHTLOCLHXMJJ");

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
    msg.setTimeStamp(0.389393834808);
    msg.setSource(37623U);
    msg.setSourceEntity(187U);
    msg.setDestination(41863U);
    msg.setDestinationEntity(41U);
    msg.sys_name.assign("YXWZRUYLENMNMDBDFDWEJPZTOHJFCLICADM");
    msg.sys_type = 156U;
    msg.owner = 41165U;
    msg.lat = 0.687756057758;
    msg.lon = 0.404627854859;
    msg.height = 0.129204104385;
    msg.services.assign("MJLLYLYKPEAMZIUFCTADMFCEEOZMDVYWHLXM");

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
    msg.setTimeStamp(0.145511107623);
    msg.setSource(48633U);
    msg.setSourceEntity(164U);
    msg.setDestination(41846U);
    msg.setDestinationEntity(197U);
    msg.sys_name.assign("WLEVVKPCXCMHTTMLGDCTLCAJNFDWTKSSAOQTZXCGXVCKNUGGLWMHMWOEUYOFAEDLFPJQVJWNGZJNYOXZTZNFRKHGUPTTYPBRALRRIRSDKZWJMAXX");
    msg.sys_type = 91U;
    msg.owner = 21015U;
    msg.lat = 0.7361610461;
    msg.lon = 0.435194941504;
    msg.height = 0.747561236059;
    msg.services.assign("KTMTQJKVEIAMWRPUCXDPIBOVZATTHRRHMSPJWNBBDHJZMKNKWJWHXNLNVEYAMIYUGCZRQGKYZUBBGAZPFGFLOKLUJAJMSAOIZJIZZBLVCXGPOZDIEVIFVDWQHVGOCGLRMZPWNVWTD");

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
    msg.setTimeStamp(0.236472242418);
    msg.setSource(55569U);
    msg.setSourceEntity(191U);
    msg.setDestination(57282U);
    msg.setDestinationEntity(160U);
    msg.service.assign("OXWDWMVRSLMQGNJHSLUOGEPCZQMQMRAXDECCPCMPXDPCUUSOIGRUNFGCBRNZYWCOFBXAFYA");
    msg.service_type = 161U;

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
    msg.setTimeStamp(0.43430965604);
    msg.setSource(45788U);
    msg.setSourceEntity(185U);
    msg.setDestination(51242U);
    msg.setDestinationEntity(35U);
    msg.service.assign("NUBVZVLTJXCZQALIRDMASGFYHINKPMLOXWLDCTRCWMHBTXQFUBROXZPUBYJFMWBTEJZQHPSHWDTAJSXFCKOYKVADSZTGQBMILWJAPKQSKWALVPNIQIPALFWONGFMGQRXVMRZZKVEHHOHTORDUFYXQCZJDDCBPVDHBJSSNLESRPCHGTNYJOUPQNNCYEGPDSGXROALYIYEUBWVTEMWZVIJFEGVSKNOEFKEGY");
    msg.service_type = 135U;

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
    msg.setTimeStamp(0.545390690825);
    msg.setSource(46374U);
    msg.setSourceEntity(157U);
    msg.setDestination(50070U);
    msg.setDestinationEntity(188U);
    msg.service.assign("NCWTSYWZIAUKDNPATZOVCBMHVBPDJYJNYHYCPIOMUSDAEOEHVZTQOXBNCMDVIAYWAAGMVETLPVAFGHSEVRTBFDWCEMJDDIGAJEBGGTGOKLKRGSXSEBXNUQUIWXTWUPPGUHYPXKLIJRAQSQLFMNGLRLBNZRWJDHDTBWSLQJOIZFMVYSIZOIMICYGKQVZFLHSJKXDQHBFPBVUYJOCRRHTRLNNWTUEQPNRXKMFZU");
    msg.service_type = 173U;

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
    msg.setTimeStamp(0.260538869297);
    msg.setSource(40884U);
    msg.setSourceEntity(86U);
    msg.setDestination(47699U);
    msg.setDestinationEntity(116U);
    msg.value = 0.906383187492;

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
    msg.setTimeStamp(0.703943904154);
    msg.setSource(1933U);
    msg.setSourceEntity(105U);
    msg.setDestination(31926U);
    msg.setDestinationEntity(189U);
    msg.value = 0.489865610255;

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
    msg.setTimeStamp(0.545274589013);
    msg.setSource(53016U);
    msg.setSourceEntity(197U);
    msg.setDestination(47045U);
    msg.setDestinationEntity(193U);
    msg.value = 0.071667509923;

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
    msg.setTimeStamp(0.201008918789);
    msg.setSource(33535U);
    msg.setSourceEntity(155U);
    msg.setDestination(16455U);
    msg.setDestinationEntity(54U);
    msg.value = 0.147908941985;

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
    msg.setTimeStamp(0.854043666972);
    msg.setSource(50574U);
    msg.setSourceEntity(222U);
    msg.setDestination(22342U);
    msg.setDestinationEntity(93U);
    msg.value = 0.06761996153;

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
    msg.setTimeStamp(0.091937491838);
    msg.setSource(15784U);
    msg.setSourceEntity(190U);
    msg.setDestination(29308U);
    msg.setDestinationEntity(54U);
    msg.value = 0.275791618171;

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
    msg.setTimeStamp(0.447283354918);
    msg.setSource(52303U);
    msg.setSourceEntity(122U);
    msg.setDestination(47576U);
    msg.setDestinationEntity(235U);
    msg.value = 0.500806767652;

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
    msg.setTimeStamp(0.824237564284);
    msg.setSource(30006U);
    msg.setSourceEntity(191U);
    msg.setDestination(55613U);
    msg.setDestinationEntity(191U);
    msg.value = 0.748665092713;

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
    msg.setTimeStamp(0.529214218351);
    msg.setSource(21269U);
    msg.setSourceEntity(35U);
    msg.setDestination(1553U);
    msg.setDestinationEntity(94U);
    msg.value = 0.454693655278;

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
    msg.setTimeStamp(0.454340830062);
    msg.setSource(8020U);
    msg.setSourceEntity(248U);
    msg.setDestination(45064U);
    msg.setDestinationEntity(192U);
    msg.number.assign("IQURLTJRDYNLTN");
    msg.timeout = 65192U;
    msg.contents.assign("VCJLBRLKEBTDLDNTNKHMZFHTZUOOQEGSMRRMCZALWAWMQEXJTBVMZFETHEYXRUARLPFDMXCWRKGFSCSYVNSBDXIDQDJFCTSYHVAGFXLAIJNJSVHIPPUKRMQFKWBIQTJTNUVRPBDCCPQUWORNVMNYVXZKOEOGBDYYWPKCPYXZJICJOXOEZOQVFNNTLXIWGYDOHGFVJHZLHWBKIKBPUZTGPU");

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
    msg.setTimeStamp(0.816197582084);
    msg.setSource(46660U);
    msg.setSourceEntity(129U);
    msg.setDestination(22579U);
    msg.setDestinationEntity(55U);
    msg.number.assign("FIDAHQWBSDHDILLJKGXMNMVNRHWGZKJXYZVXNPAOWNHQUSFYQKNGPONUJGWCLHTSPTBPKXKIQEYKGPTDGWEEOMJIHEERURPQMBLFCAJDJYHVZFFYUI");
    msg.timeout = 45299U;
    msg.contents.assign("OWQYONNFFQUUVXKCKESMQZZRACVLUVBTXBKHBYHXRHRRKXMTIQOHUDXPPVZGKUGHPSGPKRYCP");

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
    msg.setTimeStamp(0.489936304494);
    msg.setSource(25007U);
    msg.setSourceEntity(77U);
    msg.setDestination(45705U);
    msg.setDestinationEntity(240U);
    msg.number.assign("EYMAIQQQRHUNFWFKDEPWDHBHXWXEJJBDJENDGRANKQDXVKIIPOMXVGFQNBJGAOCOHSFMMWBTTZOUAZPHZIGOWQFAZRJUFZRUSYJNVOPYRDJUNMIWWBHBFMYEVKEMKLHXALLUZKVGYXEDQORPFJSZZCWGDJFDCIAOSLBBLADCJUYIHXVCTLUSURLABTGZQPITEHMVZGPNTYAVTWTEXNNVXQSTFMPLMIGKCLCPCIORXKY");
    msg.timeout = 40705U;
    msg.contents.assign("SSPLXHZKHCJYZEROVZATWDFXIMWPTFBRUASXZMTYFDICNUJQBQAQRGYZGHYNCIPPVRATMIOTTJVNGZYJKWMDTMYJYEMARUTZOFVKWGXUNNXVMKSGULFKIYWWFPAAWICKCOHZESBLX");

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
    msg.setTimeStamp(0.414295043366);
    msg.setSource(33627U);
    msg.setSourceEntity(54U);
    msg.setDestination(61181U);
    msg.setDestinationEntity(124U);
    msg.seq = 3101908218U;
    msg.destination.assign("QSWUMOFHKSUMKNZMPZZLKWGNDVRMXVHAGBLSNRGFTWIGVGECYYCLTODETFHWXVITFJBMOKKIBWWOBGQTFJDDRMXUUJRRNULJOIFXGCRCHHOCVENLSPWUBPSJLHIIXWPBKSKZTGLQYGOIKZJWPRVXOYZXHABXYDHYNAJVIBCKLUMYMQRQNABQCEPXCEYZZVHSSEETDJXYETJAHUBYOPROPZZFCIJUSTF");
    msg.timeout = 17736U;
    const char tmp_msg_0[] = {52, 96, -117, 75, -9, 68, -81, 59, 59, 61, 114, -66, -18, -1, 16, -16, -95, -112, -35, 95, 33, 76, 38, 39, -70, -27, 9, 82, -23, -44, -127, 90, -64, -113, 33, 123, 42, 38, -124, -54, 70, -28, -38, 90, 66, 50, -29, 43, -125, 43, -96, 90, 30, 73, -45, 86, -33, -96, 71, 119, -22, -36, 109, -73, -69, -127, 22, 107, 117, -118, 19, -50, 112, 33, 33, 25, 27, -29, -22, 0, -32, -12, 14};
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
    msg.setTimeStamp(0.410929291663);
    msg.setSource(51969U);
    msg.setSourceEntity(233U);
    msg.setDestination(65533U);
    msg.setDestinationEntity(91U);
    msg.seq = 1873901313U;
    msg.destination.assign("YRHOVUFPRCQXQIDUAHFTDUAPXRVIKOPYWPYQJLHYTTMJEAMBZRSZWAHOLAYCSBGWTIKHXXDJCHNSJMACEVWFPRISZWSQRSXWIJQAFLPITHVZVTLDBJFVVDXTUNBPOCDIOGIVMRNURBNUEZDFH");
    msg.timeout = 14254U;
    const char tmp_msg_0[] = {-90, -23, 38, -34, 4, -124, 81, -58, 78, -91, 37, 111, -107, 49, 62, 113, 26, -118, -82};
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
    msg.setTimeStamp(0.196746300679);
    msg.setSource(45138U);
    msg.setSourceEntity(41U);
    msg.setDestination(34722U);
    msg.setDestinationEntity(87U);
    msg.seq = 3725498636U;
    msg.destination.assign("FDPADYAMVULNRFDKSCKCREATBOHJSWHLHGENMMZRDNQEIUFEQOWVUJIPKUQEQHLBWINDAVMTEOBOOXHAFXTQHZFUKPGWYWDZPBT");
    msg.timeout = 59380U;
    const char tmp_msg_0[] = {-109, -121, 64, -36, 15, 37, -117, 95, -43, 88, 32, -109, -16, 93, 97, -61, 73, 87, 9, 114, 66, -8, 44, 114, 4, -11, 53, 46, 61, -54, -76, 63, -53, 6, 77, 12, 109, 13, -76, -71, 53, -115, -28, 11, -87, -10, 20, -39, 57, -97, 43, -56, -99, -124, -88, -107, 96, -68, -32, -63, -59};
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
    msg.setTimeStamp(0.615483508216);
    msg.setSource(51878U);
    msg.setSourceEntity(206U);
    msg.setDestination(60338U);
    msg.setDestinationEntity(192U);
    msg.source.assign("EKTPXVENHETYGPWVZESFGXUCHUBBUQULODAWTCLRKLMXYRDRZLVOUJRYVJVTMFQNFZTIIZVLPCRINCMQDGGCWCJNAIQMNPGJZNXDCKZSREPXAEOXUVUVKIGRYTDBBOHRYBMOMIASLVAZSESHXUGDJWKZUBHJJLL");
    const char tmp_msg_0[] = {-8, 109, 102, 126, -5, 123, 68, 62, -1, -20, 72, -111, -5, 84, 76, 40, -104, -51, -96, -126, -5, 63, -71, -124, -90, -76, -63, 52, -19, -95, 42, -27, 13, -86};
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
    msg.setTimeStamp(0.896959089734);
    msg.setSource(9788U);
    msg.setSourceEntity(11U);
    msg.setDestination(38003U);
    msg.setDestinationEntity(110U);
    msg.source.assign("IHGYMRHYOIONNJXWBBIFXVWVDFSLXPUIGNIJNDKQTLUDWLNPISTYAJROQSCLCIWFCKNDDVPOHRGYCPQGXQALAPZQTGMXXGSALVPQFJOEZMZLQYITJSOVZPFZLOUMQBDEMETZWVYBRMEKPCUUNCDTYRCHD");
    const char tmp_msg_0[] = {-79, -11, -88, 28, -85, -74, 27, 60, -81, 115, -116, -95, 26, -100, 71, 19, 111, -117, -116, 2, 115, 73, 115, -78, -42, 117, 19, -83, -97, 110, 42, -104, -9, 89, 92, -78, -31, 0, 52, -109, 74, -51, 87, 28, -89, 96, 88, -125, -90, -22, 60, 110, -56, 7, -91, -69, -78, 117, 30, -69, -121, -106, 36, -26, 28, 64, 89, -127, -73, -90, 0, 83, 54, 38, 80, -100, 43, 65, -45, 2, 28, -110, -118, 114, -90, -27, 81, -76, 13, 81, 94, 92, 114, 59, -18, -11, -74, 93, -64, -75, 100, 10, -13, 114, -78, 12, 91, 80, -19, 115, 104, 30, 29};
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
    msg.setTimeStamp(0.357821001402);
    msg.setSource(4193U);
    msg.setSourceEntity(64U);
    msg.setDestination(42065U);
    msg.setDestinationEntity(243U);
    msg.source.assign("SZFZJUFYYAVIQOGORGICPNNDKXTLUPBWKJTETZMHARZCMRVAUGIHFUKNJUKDNELAKIXSCVAZXNGYCQXQEJWHWSPACDYQFLXWLRWLMBYOBYBTXEOXDTOPDLJLVEXRRL");
    const char tmp_msg_0[] = {-76, 105, -75, -128, -94, 14, 101, -72, 16, -78, -68, 9, 25, 108, 123, 115, 112, -26, 107, 37, 59, -58, -81, -36, -39, 63, 41, -2, 88, -41, -115, 17, 63, 72, 46, -14, 63, 55, 58, 26, -69, -2, -103, -58, -128, -49, 96, -6, -88, 100, 78, 23, -4, -104, 74, 1, -38, -14, 113, 88, 62, -74, -67, 12, -42, -89, 98, 45, 90, 118, 18, -59, -124, 57, 5, 3, 126, -75, -47, -110, -70, 32, -28, 18, 115, -16, 21, 93, -77, -17, -66, 74, 123, 26, 31, 15, 55, 35, -29, 62, 116, 104, 54, 89, -113, 81, -69, 108, -107, 4, -19, 26, 3, -91, 86, -81, 14, 71, -62, 24, 24, 56, 17, -88, -102, -30, 113, -26, -126, -127, -86, -124, -74, 14, 114, 106, -44, 112, 76};
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
    msg.setTimeStamp(0.291941517016);
    msg.setSource(18971U);
    msg.setSourceEntity(222U);
    msg.setDestination(50307U);
    msg.setDestinationEntity(124U);
    msg.seq = 4273450339U;
    msg.state = 48U;
    msg.error.assign("WHYOLSSBNPTNWTGFZKZLSIKBEBHTCKVXXRTQUJBFRJAIUTXZCSDLULTIUEJMAPSBFEVLVWAOZVAUKPSNDYLDDMXRKEZGURLPEMEMPJVACOFJTUMDQLLGQKABVPGYMKYAVWQCCWDZIGI");

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
    msg.setTimeStamp(0.405509566918);
    msg.setSource(42633U);
    msg.setSourceEntity(31U);
    msg.setDestination(21232U);
    msg.setDestinationEntity(24U);
    msg.seq = 2758349136U;
    msg.state = 69U;
    msg.error.assign("IJMOXTATQIVNOJVUKFTGHXFZKUJNINRVUWZMDPEQYPASLQVFDUDNAGSPZYYBDRO");

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
    msg.setTimeStamp(0.735839093595);
    msg.setSource(30494U);
    msg.setSourceEntity(108U);
    msg.setDestination(43900U);
    msg.setDestinationEntity(72U);
    msg.seq = 3437567034U;
    msg.state = 121U;
    msg.error.assign("NFLLLITXRCOMKWABKQEAOEFBBQJEVAUTSVOUBHGLTU");

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
    msg.setTimeStamp(0.194778959764);
    msg.setSource(42420U);
    msg.setSourceEntity(236U);
    msg.setDestination(53098U);
    msg.setDestinationEntity(145U);
    msg.origin.assign("UCMVQHYIOYJPIVEHBHQMUDXMMTCEWTAQRPUCPTADDFPNUJXXCDIZAGXFJNWXUNGWFFPQUODLPNLHTWCIZRHGYKEGNEGZDXMYDVQTFULB");
    msg.text.assign("XAWFTZJKKLFCXTBZPPSNXOPUNVRDWMUBYIRVAFEKOMQHSEYCQZWTLBFNMVJTKYNCREKWPOOGXVOYFSBTVGJJQEYLAJGCPXPGAIHNQABRIFIRDMXSOEPVTSMZEMBWEGVN");

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
    msg.setTimeStamp(0.294872023507);
    msg.setSource(4283U);
    msg.setSourceEntity(14U);
    msg.setDestination(11708U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("OZAPJOTOERTVKWOQEWUFRIFLHYGBMURCWMKZPBVZQSZAXDSDHVFJGCNXTWUYSYXFKFYMKOZAKNGHLHNCVHYNNHDXMJGEDEFBOTKDNWRIV");
    msg.text.assign("KWURRHIJOYXGZTBLWGXTAESSGALFKCOBMNYAYTAEVEGXKMHFXFPZUBPGBRDWCAKQOILINDILPUWWDNKYAKPZLNMDGCFSCQSFOFAPZNOEHWKRVBYBJMYVJAYMXCLEPUVHHVBGFLWSSCUXZJADQRTHKPONWYDBMDQBIGOEYXVHBFZUEMGP");

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
    msg.setTimeStamp(0.876559482675);
    msg.setSource(34259U);
    msg.setSourceEntity(199U);
    msg.setDestination(23714U);
    msg.setDestinationEntity(18U);
    msg.origin.assign("JGIYSIIKGHFDFUZIXDKPEVPUDZZOXSNXNIPSTHKXUCZOVRNMXMVOLGGQFDCAQVLVBBARRQJBIZJPOEAEPTYHMDVLWOLWQCNYTXKKKFGTQGUWPLNIVYRWDQORWEHJSAKKRHPGSOCVJJHFFBJEZWLWNBBANOCTTPTWFSWQSUHHZJPKBLYGDOQEUUAZYEXVSCXBMUZDCFQAEN");
    msg.text.assign("PYHTTWFUZMDNVMLKGPMGALXBAVIPRDWLJGEGDUQDGYPMREIQEOXOKGONFBVSFMPJBJJRUUBICNWEUFWOKZEQDLBHNASFIOCBCAMIYMZLVXRKIKHWJVYARYCJYRZSLZSMFUQVEEIORDCJGLMTYLTKBZGIPNHVUBHADECFCCSWUDINPHXZXKNXXQSSFZBDYRKOAXVHNOXVKEQFCFZTTJL");

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
    msg.setTimeStamp(0.532785185293);
    msg.setSource(54016U);
    msg.setSourceEntity(84U);
    msg.setDestination(46989U);
    msg.setDestinationEntity(169U);
    msg.origin.assign("YEUXFDFIQFHVHPHGZFQAVDWTWDOVNIXNGZKTKPBCATRRLICTFWOMJVTLEPSJFLDACHRQABYKFEUSCKHGOGRHZSWWKGWWHWMJACMUETBLX");
    msg.htime = 0.206576941382;
    msg.lat = 0.886433498286;
    msg.lon = 0.373889521056;
    const char tmp_msg_0[] = {-126, 54, -21, -118, -117, 36, -11, 15, -23, -24, 41, -75, 126, 45, 18, -53, -92, -125, 71, 71, 46, -85, -58, 19, 78, 82, 4, -91, -4, 52, 31, 51, -91, -42, -73, 98, 94, 13, -51, 64, 123, 62, 12, 36, -28, 98, 92, 124, -59, 15, -107, 75, 77, -19, -52, 117, 63, -92, -124, 23, -54, -123, 76, -35, -52, 117, 43, 55, 97, -97, -100, -106, 85, -94, -122, -41, 58, 68, 93, 51, -67, -78, 56, 30, 57, 73, 1, -118, 78, 10, -9, -98, 21, 117, 11, 15, 90, -61, 52, 18, 95, 38, 82, -112, 13, -91, -48, -32, 70, -9, 105, 73, -80, -94, 101, -53, 52, -109, -19, -54, 102, 1, -7, 33, 86, 50, -58, 14, 41, 50, -110, -77, -84, 75, -66, -40, 111, -109, -26, -87, -100, 77, -57, -82, 39, -76, 37, 96, -14, -93, -15, 71, -26, -6, -69, -16, 13, -6, -25, 102, -100, -40, -54, -106, 124, 79, 54, 121, 11, -51, 67, 90, -79, 50, -35, -20, -57, 52, -95, 36, -105, -101, 41, 97, -29};
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
    msg.setTimeStamp(0.823593095089);
    msg.setSource(45621U);
    msg.setSourceEntity(214U);
    msg.setDestination(53863U);
    msg.setDestinationEntity(11U);
    msg.origin.assign("EBKQDKQJSGCBEIFPBXMEIFVAFHZYVTNPLUMUOVMHGSCJLOBGZNSEOYATCWNXTPVILPRSHAXYWDQWXRHWGRYUZAIDOKKXRUTUWUGFSJELNZHZXLNZFDVXZQQDAMKSSDJXQYUABYCIFPSGOQDNMQMPSTFONKWBDZBHR");
    msg.htime = 0.828048017237;
    msg.lat = 0.747207720954;
    msg.lon = 0.624899433016;
    const char tmp_msg_0[] = {-91, 120, 37, 89, 23, -108, -127, 39, 103, -83, -57, 40, 39, -49, -55, -44, 25, 113, -86, 121, 96, -126, 119, 56, 98, -51, -93, 24, -7, -39, -85, -21, -79, 46, -75, -27, -89, 100, 107, -59, -66, -111, -81, -74, 52, -1, -63, 85, -63, 121, 57, 77, -71, 29, 38, 93, 111, -14, -59, 116, -116, -47, -22, 96, -36, 28, -87, -60, -124, -108, -13, -102, 62, 72, -99, 59, 7, 82, -73, -48, -40, 28, 10, 88, -13, 64, -85, 4, -14, 41, -27, -73, -87, -72, -74, -123, -124, -6, -114, -38, 8, -81, 63, 31, -86, 105, -115, -37, 90, -110, -105, 109, -51, 0, -65, 64, 57, -25, -115, 85, 26, 28, 31, 11, 53, 55, 72, -7, 101, 51, -4, -70, 114, -22, -21, -60, -57, 99, -52, 38, -25, 59, 13, -109, 56, 73, 7, -58, 75, 94, 17, 111, -24, -116, -17, 108, 16, 12, 78, 38, -68, 38, 83, 6, 115, 12, -18, -36, 29, 5, 83, -128, -8, 97, -98, 21, -113, -126, 69, 115, -82, -43, 95, -77, 72, -46, 66, -123, -8, 96, -128, -9, 37, 78, -77, -40, 123, -100, 74, -7};
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
    msg.setTimeStamp(0.0186199544704);
    msg.setSource(40663U);
    msg.setSourceEntity(169U);
    msg.setDestination(9287U);
    msg.setDestinationEntity(151U);
    msg.origin.assign("ONPGKZJOINLQQQBDGIMWOAKAUBWSNFVOHNEKYUWBAEQHGDHWJZDRQCYVFZFQNFLWGPDSZIPFYOICSPTTHSMYUXKMXYFQKLOSJOUCSXDQGWRDPPQDLKISWERZBLEUHACJVTMYGRAHMVXXWGCRNIJXELCJTTHBQKUGCLRAYMKNBYAJIKNFENUTYEHUUUPSBVEHFJMABBMPXZR");
    msg.htime = 0.181355948804;
    msg.lat = 0.311304146227;
    msg.lon = 0.455853853467;
    const char tmp_msg_0[] = {96, -23, -26, -128, 25, -28, -12, -32, 123, 11, -37, -54, 99, -81, -110, 111, 8, -59, 38, 37, -2, 121, 85, -45, -33, 64, -37, -86, 112, -124, -4, 112, -9, -14, 58, 31, 93, 18, 40, -54, 2, 103, 10, -58, 106, -30, -47, -57, -17, 125, 45, -45, 20, 14, -92, -88, -98, -122, -52, -58, -112, 118, 19, 83, 103, -112, 12, 54, -56, -60, -119, 112, -110, 100, 122, 40, 121, 40, 10, 94, -104, 47, 113, 21, -118, 69, 105, 41, 48, 66, -8, 7, -60, 117, 76, 8, -35, -56, 93, -121, 40, 112, 65, -23, -29, -6, -24, 2, -118, 116, 86, 25, 11, 19, -78, -128, -11, -22, 49, -13, -70, -121, -3, 55, 122, -114, -52, 6, 111, 33, -29, 41, -79, -10, -14, 72, -66, -47, 22, 31, -128, -122, -12, 56, 78, 121, 87, -109, -79, -9, 14, 18, 84, -85, 14, -124, 124, -57, 81, 30, -64, -93, -13, 123, 35, 46, -18, 69, 39, 22, 88, -60, -55};
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
    msg.setTimeStamp(0.794608704323);
    msg.setSource(64019U);
    msg.setSourceEntity(42U);
    msg.setDestination(5822U);
    msg.setDestinationEntity(49U);
    msg.req_id = 46064U;
    msg.ttl = 19556U;
    msg.destination.assign("KLJXHERRSMBUDYKAUOZCMEVLDMAJDGWEPNCCVRVOYVTHLYFPBWEQNWNGPOTVUADQLI");
    const char tmp_msg_0[] = {-1, 33, -108, -39, 17, -16, -64, -55, -8, -6, -11, -105, -66, 116, -55, 49, -92, 118, -25, 97, 54, 48, -117, -98, 67, -72, -16, 102, -32, -30, -67, -36, -99, -44, -91, 48, -73, -81, 31, 118, -27, -67, -89, -102, -69, 101, 6, 54, -30, -71, -2, -53, 88, -124, 13, -6, 67, -56, 71, 54, -48, -13, -23, 32, -47, -23, 95, -107, 43, 120, -66, 82, 46, -123, -84, 98, 20, -105, 115, -22, 65, -17, -91, -32, -75, 31, -17, -122, 115, -34, 32, 117, -111, -27, -2, 89, -37, -51, -42, -21, -19, -66, -9, 15, -20, 3, 86, -43, -25, 60, -15, 75, -55, 1, -36, 20, 40, -66, -39, -24, 25, 8, 48, 90, -69, -20, 5, 81, -20, -33, 15, -22, -85, 117, -65, 91, -100, 15, -111, -40, -101, -55, -48, 7, 63, 118, -66, -109, -75, -113, 47, -85, 18, -118, -122, 98, -21};
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
    msg.setTimeStamp(0.906416615801);
    msg.setSource(26050U);
    msg.setSourceEntity(85U);
    msg.setDestination(49499U);
    msg.setDestinationEntity(169U);
    msg.req_id = 2822U;
    msg.ttl = 45887U;
    msg.destination.assign("VOKCLEYZHXYXHLQETJBIDRHYZTGBYPFXSNAQGUGVDSHMWUSRDBNEJGWWPEOFLZTOLJBCELCNSKSVDCRXAIHPZOHAKCEUPRDYFCEODMRVVRJUWOWKMPYQWQLFBICXUWPGQJVYABZVOZVIGBXSWGRAUHPZHQIOPGFOLFNUWSCXRYQYFNILLMZHWJFDLVAZHJBPSFI");
    const char tmp_msg_0[] = {43, -121, 59, 62, -39, -83, -117, 126, -110, -59, -68, -115, -126, 105, -85, -74, 67, -33, -103, 60};
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
    msg.setTimeStamp(0.277150695185);
    msg.setSource(14420U);
    msg.setSourceEntity(235U);
    msg.setDestination(14724U);
    msg.setDestinationEntity(20U);
    msg.req_id = 6236U;
    msg.ttl = 18800U;
    msg.destination.assign("CERXIAVCEWUABSYAQUHMHOPYWCRJRPFGOHZSMABSZFYNNPPJTVIMKXUHWQVFBDYGNJCYXBPSUHTHDNQDEOHZCUGFMTEAJDGDAGGPZLDYQHGWNSNEEPVLMVLXNCWNROOWEJUINIVJXCBKQKUOIJZQRBGHAKZQRJSDWPRMNKTVPZLITQRBLOLSKCKSMHEFDODKUXTTSWUOFAJRBTYVDXZTGKMICSVIFQJCFMLQIBAFTLWKZI");
    const char tmp_msg_0[] = {-125, -96, 46, 18, -82, 53, 53, -11, 119, -113, 77, -58, 122, -112, 11, -74, -22, 73, 99, 39, -40, 54, -38, -46, 41, 98, -96, -117, 35, 46, 42, -122, 44, -94, 60, -57, 98, 126, 39, 107, 113, 72, 88, 43, -21, -70, 109, 26, -97, 3, -93, 122, 42, 12, 82, -38, -58, 73, -12, 67, 9, -127, -112, -108, 7, -92, -120, 31, -125, -100, -77, 4, 107, 51, 103, 115, 9, -71, -81, 98, -91, 125, 124, -31, -50, -123, 36, 67, 87, -23, -73, -14, 107, 19, 93, 52, -118, -37, -65, -3, -110, -117, -89, -59, 77, -97, -66, -12, -104, -24, -20, -28, 54, 39, 79, -5, 16, 116, -52, -3, -84, -69, -83, -78, -127, -116, -33, 34, -32, -87, -119, 48, -26, 66, 68, 120, -10, 115, -14, 40, -111, -55, 5, -60, 81, 37};
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
    msg.setTimeStamp(0.798667324369);
    msg.setSource(60539U);
    msg.setSourceEntity(183U);
    msg.setDestination(16780U);
    msg.setDestinationEntity(204U);
    msg.req_id = 58893U;
    msg.status = 179U;
    msg.text.assign("VHDMAOTVUHFJGYPCSURRADDCXGUNMMAZOVQWJEDWTGBGXSPLRTZDPLRUKAIERTYEXUTCCDDFZWCTEMBKFQUZYZJVXWKLPFQSMQIGINXTXGOWAWXBBYHLEJLJOVMOJKRHEO");

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
    msg.setTimeStamp(0.694993100962);
    msg.setSource(53326U);
    msg.setSourceEntity(162U);
    msg.setDestination(1415U);
    msg.setDestinationEntity(27U);
    msg.req_id = 31234U;
    msg.status = 49U;
    msg.text.assign("PBXDFVKYHNBPZXZLAFOPMMKGCCPGHNIMQJFGSUQRQWZNVLGISXLUKCJRSFDMWBSYCQONXBUIGKVMIOZSZJMLHPRTZNMKWVWNQJUHWJIOKRSMPGBOEUAQVLFRCJGBHIIDIUEHHSVJNQDALEESYWOALTAXLAWTGCKVJBPYQOYTYDE");

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
    msg.setTimeStamp(0.0483549527796);
    msg.setSource(53225U);
    msg.setSourceEntity(167U);
    msg.setDestination(4992U);
    msg.setDestinationEntity(170U);
    msg.req_id = 38438U;
    msg.status = 37U;
    msg.text.assign("HZHIAFCZSKIQEWYELUGDGURKHTWBZKDDDXUQUXFIXMXTCYZKBWGSRHLSKVXDSPSTFMDYTOJIXCJYWPUUSXQPFLRVLVKVMHCOQFVAICCCBPYEPQPAHBWTIRDNBHLSXZAYNUEWLPJGRTNYOGREKOLMJXBRJVAVZXQZDJBYRGPJDAYMREJF");

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
    msg.setTimeStamp(0.0539898278339);
    msg.setSource(11575U);
    msg.setSourceEntity(120U);
    msg.setDestination(22624U);
    msg.setDestinationEntity(58U);
    msg.group_name.assign("OZPQLKNDXFJMWBFXKWJPWSMZVUXGOVEMZZBTRACJKCQIPIRNWKCOYIPDUSUHNKXRIMDXBCYTHVDWSJKFAGBFUEDJPQXHSKQMDXLAJDPNWZRNPCELYPNGANAASSVYUGHXMWRNFE");
    msg.links = 2177251266U;

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
    msg.setTimeStamp(0.655016687983);
    msg.setSource(26572U);
    msg.setSourceEntity(19U);
    msg.setDestination(27950U);
    msg.setDestinationEntity(176U);
    msg.group_name.assign("CEOEPKILNZIUYGTNKACQW");
    msg.links = 2266591127U;

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
    msg.setTimeStamp(0.342397165875);
    msg.setSource(21919U);
    msg.setSourceEntity(161U);
    msg.setDestination(12929U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("XOIVNBQMIZALKTHUJWJVSDWSWDXJGVLUKFLNGKKSRTVMRYUWASRHBSILJYETQGWDIOTJUPSNEBA");
    msg.links = 1534863475U;

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
    msg.setTimeStamp(0.979544711759);
    msg.setSource(9195U);
    msg.setSourceEntity(78U);
    msg.setDestination(22196U);
    msg.setDestinationEntity(204U);
    msg.groupname.assign("UMVSREWQWDLXJLEHSWOKRIPIWHDDPWIRILLJILJTFWEMKJRSQKFPFPGTNJYSBICGDCAMTEBBOFAULPRVLMBTQQMEZMMZVQSVUHZGVYXYZBRCCUUGIDTNDIOGNYNOXXVVPYOJZU");
    msg.action = 254U;
    msg.grouplist.assign("FTDLJURGDGXLZMHWALRYADBYICHWJGOQGRFRRWYZJVZLMEUDSXPXDKSNHKIWLVNVMRINPVLPSQXOSCDRYHNKLXIGGCEDBWNUYHVTQEJJEGQOXXRFOKAVZMPWOFLIBIXUFHOCAMQXHJAPTLUHSTBBBGTAKIQJNVJW");

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
    msg.setTimeStamp(0.171465386357);
    msg.setSource(32128U);
    msg.setSourceEntity(10U);
    msg.setDestination(57510U);
    msg.setDestinationEntity(63U);
    msg.groupname.assign("KXPYJRXVWFPXJSFWGTESCJVEPGJHWYYLAQFEVSFONNWVHBZFLBUWENRMKONGBONMHNFONTDCQQHIUREUFCMLOFPQTXSHAMBQUIMXVZNYXMIQCUTZVAFSZERKHKWHEMJEOTWTTZKRUGPCICGZPAABHWVJUJKDROPESNGBBJSDGUHLNGRCTJMOGITDDVLTMLIQBDJBFMZB");
    msg.action = 43U;
    msg.grouplist.assign("WWOREULNAKZTEJUTGWZOISDHXBKFTABSVUICXVCGDPEZNPQSBCCAXTXHHGKTSLXMNQCRFSMJSHMNTQUCRAILAUDLMABDVKWPDYWGXFERGPHPOMTRAFMISBVIJBFVQOYGLRMQNXAHZXXHYHYBBDLUQVNQPIQMWOJJYYJDLIEKOZDIFBETCOPFLAKMDQERUJZZGYEUECSNAJCVKGRGYGEMWWLOWDNWTZPVJFIKKYPBOXISPJCHSVUKTRLNOFZFZR");

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
    msg.setTimeStamp(0.220649085533);
    msg.setSource(35383U);
    msg.setSourceEntity(152U);
    msg.setDestination(29721U);
    msg.setDestinationEntity(186U);
    msg.groupname.assign("WQFPBWAUDDNCIBCURTWCWYIOUPLRTPTXFCY");
    msg.action = 235U;
    msg.grouplist.assign("JMZFXABSDONTIKYOLCYYPPXVKTEVJJIGACEIZEGRDCZVXWMJXRJIGQUQUNWNITPBLCMLNQFJDTNFDVRDSPSXWUQZTXZIDIAQYABBFJYKOMWHGCLMAVELPRSGDZSQHJDHOHHBUAHVRCNSFNJEJGBSKRFPNXQICWUZFOIKGPGOYKCALOTRFSMIOYFWULRMVEZUMZBNUL");

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
    msg.setTimeStamp(0.00746567625365);
    msg.setSource(8718U);
    msg.setSourceEntity(60U);
    msg.setDestination(26271U);
    msg.setDestinationEntity(130U);
    msg.id = 27U;
    msg.range = 0.428434474477;

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
    msg.setTimeStamp(0.11161102464);
    msg.setSource(40951U);
    msg.setSourceEntity(156U);
    msg.setDestination(34865U);
    msg.setDestinationEntity(241U);
    msg.id = 103U;
    msg.range = 0.883139325115;

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
    msg.setTimeStamp(0.256430390668);
    msg.setSource(36928U);
    msg.setSourceEntity(242U);
    msg.setDestination(60455U);
    msg.setDestinationEntity(126U);
    msg.id = 217U;
    msg.range = 0.16323752588;

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
    msg.setTimeStamp(0.457487217357);
    msg.setSource(15137U);
    msg.setSourceEntity(49U);
    msg.setDestination(65240U);
    msg.setDestinationEntity(7U);
    msg.beacon.assign("BFJZRZQLKRQKFTCZJCNBZJRURSLPTCEXIVKYYLPVTMLBPWVNHJBIZNYNXVPSHDDBXYFPVHYRFXINIZNCXWIFESWOJCRDZOQLATNCLYFIDGQWXUQNEWMNIHAAETBFFMDPBX");
    msg.lat = 0.557954801614;
    msg.lon = 0.67747130483;
    msg.depth = 0.778456296128;
    msg.query_channel = 203U;
    msg.reply_channel = 245U;
    msg.transponder_delay = 180U;

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
    msg.setTimeStamp(0.385392365477);
    msg.setSource(30501U);
    msg.setSourceEntity(142U);
    msg.setDestination(35073U);
    msg.setDestinationEntity(199U);
    msg.beacon.assign("RAROGTOTDNNGEIYCGNKXWYFIHUIBHQZGBGVHDOBGNBCKVVJIJYBTHMXEHQHAZNWWMGSFLRVNXJSTISE");
    msg.lat = 0.741876891053;
    msg.lon = 0.82259768261;
    msg.depth = 0.228161222437;
    msg.query_channel = 65U;
    msg.reply_channel = 41U;
    msg.transponder_delay = 11U;

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
    msg.setTimeStamp(0.615727650399);
    msg.setSource(6033U);
    msg.setSourceEntity(33U);
    msg.setDestination(56391U);
    msg.setDestinationEntity(45U);
    msg.beacon.assign("SWVPXVJSPJALQWKUCQCGAVUQNCJIXTILQKBUSXOMBPFLJRUUHNFYBEXRIQQNEWMYZSGRZZTIMRDKIDLFBTPEAVDDPHHGNJLJHFMEWTKRKRONEQNXOQYUHEURSUDKDWYHTJKMXOOTCCBVTFEOSDZJCQPAAVYWNWUOPKFRASLOZMPBYOLDIXDMVBMXGEFF");
    msg.lat = 0.423492954332;
    msg.lon = 0.552290808705;
    msg.depth = 0.658092806186;
    msg.query_channel = 241U;
    msg.reply_channel = 29U;
    msg.transponder_delay = 175U;

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
    msg.setTimeStamp(0.0869056296251);
    msg.setSource(27006U);
    msg.setSourceEntity(231U);
    msg.setDestination(43658U);
    msg.setDestinationEntity(98U);
    msg.op = 225U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LLPCTDORXAEKGLMOVFHBMQMQJZDWIB");
    tmp_msg_0.lat = 0.638904010413;
    tmp_msg_0.lon = 0.113735032441;
    tmp_msg_0.depth = 0.345714469218;
    tmp_msg_0.query_channel = 240U;
    tmp_msg_0.reply_channel = 94U;
    tmp_msg_0.transponder_delay = 210U;
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
    msg.setTimeStamp(0.687492774878);
    msg.setSource(29861U);
    msg.setSourceEntity(73U);
    msg.setDestination(54362U);
    msg.setDestinationEntity(168U);
    msg.op = 43U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YIKBQUPEBUSKJKWMRCRZJXDTSUCAYSOIUREKLIQOXBFCOMNKEFVRJYNIOJLVLPPSFSXXDODDKGAAKLIVGGZTYZHHPXWROBXMQRU");
    tmp_msg_0.lat = 0.596554111719;
    tmp_msg_0.lon = 0.755544983721;
    tmp_msg_0.depth = 0.461568494817;
    tmp_msg_0.query_channel = 153U;
    tmp_msg_0.reply_channel = 175U;
    tmp_msg_0.transponder_delay = 65U;
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
    msg.setTimeStamp(0.460426918258);
    msg.setSource(14146U);
    msg.setSourceEntity(143U);
    msg.setDestination(8635U);
    msg.setDestinationEntity(130U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.76062198362);
    msg.setSource(4097U);
    msg.setSourceEntity(178U);
    msg.setDestination(61192U);
    msg.setDestinationEntity(111U);
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("XGJMNULXXFXFVOURILCFIYGHMSIMUBMVIOOPVCINPWJOUIXCQJPJZVAFNABAFFQSPXJRIALHNGTDODXPAXEYDHKZTMWTYGPETLMDCENERUOTVGUTEWZLVQBTSKKGCBNZDKWYOBCIKZLUPBYRJJYFAHGDPLJHZDFWBACMKQOSVBCUWTL");
    tmp_msg_0.visibility.assign("KBVXICEHLTDHZTOQDTFOAGTKOSDTSWRMLWUVSKTMGUFHTBEPQVMJUQSMYZWILWAQJBLERYVYVNYIOTKWHFBJNJUTJJWZRCPLXGWZNDGYRGAEGFUYPLQHKRNBRBRSUONEIVVMICHECIX");
    tmp_msg_0.scope.assign("WNIVBOKGNFVUZWLUBLHHDIHEKUNBCJXIDWRXUQGJCLNWFVMPNRHXVZCEKZATWVVCZTGJNXNOXFSIRIKRTKADDCMRQAWFPVMPQSPDETXELLWFWBZCLQVUFGXCDCMPQHHZBAFKYNKNYMZQOOISSIUYVYBA");
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
    msg.setTimeStamp(0.765270492772);
    msg.setSource(7909U);
    msg.setSourceEntity(140U);
    msg.setDestination(32744U);
    msg.setDestinationEntity(189U);
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 250U;
    tmp_msg_0.error_count = 145U;
    tmp_msg_0.error_ents.assign("EOGGFECSLSFNCWIHABDZQPNBRLWUXTWAJFUXWYHRVBBKRELHBKZRINCPVWVYJNZHEBASGMCXFIHDWJANPUWSCUVYODEORXREPLIJMKCDHSUHMJZUTSPLMIKGYUPHKRGIWTNXYNXZVVQCKKCDXQFEQUKBYTFVQQZVDHLZQJSMAEYSVAATZEIIIQTZXDYLPCTJUDTTELBFSBKFMXYBGKVRQDQDWHLYGIPNNAUXJZWOP");
    tmp_msg_0.maneuver_type = 63095U;
    tmp_msg_0.maneuver_stime = 0.1074023235;
    tmp_msg_0.maneuver_eta = 59402U;
    tmp_msg_0.control_loops = 4130779653U;
    tmp_msg_0.flags = 78U;
    tmp_msg_0.last_error.assign("ZWIQQZSRJBXNBEDPIUANSHYUWSDACTGUMGYABMTWKXJLVHJTSBXDBJZRVFPTDRSPTVMKLRTMLJAAZEWVAMRUUCLSITNFFFGDFMOVDFOKLDXGQZXCOIKMGLYIRAENZNKWP");
    tmp_msg_0.last_error_time = 0.0924151947649;
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
    msg.setTimeStamp(0.538254106124);
    msg.setSource(7258U);
    msg.setSourceEntity(115U);
    msg.setDestination(32U);
    msg.setDestinationEntity(130U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 18983U;
    tmp_msg_0.status = 180U;
    tmp_msg_0.text.assign("FKFPREDVJLYWDBBMAYJJABNIHGLYQWDNUOQDOAKXPKRXGCVRIFHREXLEYCZQPKZNMLQFKITBJARVFUXWNDWXPIFMQIAKEAMUSBQRBPTGBSNVDPIZTMPYOTNCTUZETML");
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
    msg.setTimeStamp(0.317807393312);
    msg.setSource(357U);
    msg.setSourceEntity(251U);
    msg.setDestination(57135U);
    msg.setDestinationEntity(5U);
    msg.op = 243U;
    msg.system.assign("LJDFICMYZOJDRLHAGKJMBYGMCACTCTNEATBGPIHWTNNNGEOBLJSRJPCSOGZKSQFLGULIFZBONVCSDXMXHJEPUUKCETDJAFGQIYCOWXDNSJYFPNSVEFYADTTNKSWTHSRPTHZWWIBEHLVESXRDVYLUKQBMPPAQXPDBDKWJAOJLIRVUQRC");
    msg.range = 0.744979571564;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 129U;
    tmp_msg_0.name.assign("TLTDTEMNOVEJARPZRPQFWKKDXQFUKSMCNYSIZXJRRCL");
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
    msg.setTimeStamp(0.275987830584);
    msg.setSource(29420U);
    msg.setSourceEntity(154U);
    msg.setDestination(40805U);
    msg.setDestinationEntity(127U);
    msg.op = 66U;
    msg.system.assign("DHXQAJLQOOJQXXIZIBNANEDBKPUOSATJFYQSCAGZRXWRORSOZPXKXZCHYKCMLJUS");
    msg.range = 0.667553414379;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("HMBNLQXHEBBAINJGWBDMHEYVOUSYGCSERMDQVPLNDNPEBAQOXUMBANF");
    tmp_msg_0.data.assign("WJBQOWFMKDJASXNNFANJYPOANXYOTUQHQFKCQUSRXRBGKVLMSOTQIEOSZEFDAWFIGSUHIBGRLCXNZTGHOMMANGZDVCEPPYDVMLNARFKWESDGFCBKBUTCJJEELDNVMPPFUGQYJMGXYEPHJRONDMIHBPVUTVBZSUTRRWZZVKYCRQFSHELYLIPKZYOSPNZLXVEADXOWJ");
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
    msg.setTimeStamp(0.87495869091);
    msg.setSource(23223U);
    msg.setSourceEntity(178U);
    msg.setDestination(20121U);
    msg.setDestinationEntity(174U);
    msg.op = 3U;
    msg.system.assign("FMZRITSEDGVFDEURKGEVBYYHLFWYJFRHPXOXRKEMEMADLMNVTAUUHCUTXWUINVOEPHNTALQZHUBIBTQSWBLIDFOFGTOGYZGSNHJITNNZEXVBSUYGGPPFWNNIKLVCJZHXCBMWBIKDDJSUIXZSCFQSVJEHWBNYZWDDSVGYWRYZMXRPECJXOQCAQMJTCTMAKACOTL");
    msg.range = 0.42764359772;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PUDZZKVTLRCTHBMMGQRMFNKJVGNOPETIBHDELGSQJPECKMTIGXZE");
    tmp_msg_0.dest_man.assign("VCBNUNYDFDVUWMGLCPLGAADOSTBVRZEGOPTJAMTPCEQOYCYUGHXODNJPWZTYHGZVVAKPBQDMFXYZIHYWIQDMJNUFWKAYISXMHXKTKWCACQDSEEURFJFZ");
    tmp_msg_0.conditions.assign("VJAUSXFUHGJPAFHJQVQEJMCZICZCPEAJHDMHYCWXZWHPBBDBRPTQLTBVUEYTLEHWBMDMVCUDSGGFACFOZKKWVNYZCOTCXWYXRGDLUKFJDLYLUEQGQWIDBZDLPVWCANJTCLWDXUKBKOVHIXAMAZJNTNFUSXEBXNQMZNTPKKAMVSOGWMSOISP");
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
    msg.setTimeStamp(0.983851620057);
    msg.setSource(32736U);
    msg.setSourceEntity(178U);
    msg.setDestination(39581U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.222150660189);
    msg.setSource(37571U);
    msg.setSourceEntity(75U);
    msg.setDestination(27275U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.355340372464);
    msg.setSource(24284U);
    msg.setSourceEntity(149U);
    msg.setDestination(29880U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.418976413335);
    msg.setSource(30116U);
    msg.setSourceEntity(128U);
    msg.setDestination(7033U);
    msg.setDestinationEntity(244U);
    msg.list.assign("HSLGCXOKPXLUIRXIYDQEJZKBLTIWJVYGTFQDSNQWJMERGXTGSV");

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
    msg.setTimeStamp(0.848243837864);
    msg.setSource(63751U);
    msg.setSourceEntity(118U);
    msg.setDestination(10618U);
    msg.setDestinationEntity(254U);
    msg.list.assign("XJJMWXQCKQWSIZEMYRFTPTJOQEPFSINAHRAATNAHIOYTVSPGCKEHNUNKCCFQCBBJAGCJHBSJDNIZHNQVRGNZYCVSOHGSXJYTIZDBUPKVEIVXIEUOLQFLHIKVTOGRHLXFYMZZFRTFXZDADXMGAJQWUULKYJMVMFZARPSWTDGBDZNWBWVZYFHQLVEEVNYPXLTWWOLMRNKUWBTUDXCCMDPWGDKOIIEOBUOYPCAQEBBSGMXAH");

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
    msg.setTimeStamp(0.315168345182);
    msg.setSource(53426U);
    msg.setSourceEntity(189U);
    msg.setDestination(24256U);
    msg.setDestinationEntity(101U);
    msg.list.assign("VKUAPYIBMQYEQCVMNXHGNLHHBLWFMJLCFNNSMCQTTAFPRKRGICZBXUDITWEDNVRPQ");

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
    msg.setTimeStamp(0.511282229564);
    msg.setSource(44601U);
    msg.setSourceEntity(244U);
    msg.setDestination(44130U);
    msg.setDestinationEntity(63U);
    msg.value = -12513;

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
    msg.setTimeStamp(0.749890248806);
    msg.setSource(14117U);
    msg.setSourceEntity(5U);
    msg.setDestination(38782U);
    msg.setDestinationEntity(66U);
    msg.value = -509;

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
    msg.setTimeStamp(0.623466811351);
    msg.setSource(8699U);
    msg.setSourceEntity(224U);
    msg.setDestination(31537U);
    msg.setDestinationEntity(62U);
    msg.value = 14966;

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
    msg.setTimeStamp(0.352071984371);
    msg.setSource(62179U);
    msg.setSourceEntity(91U);
    msg.setDestination(16525U);
    msg.setDestinationEntity(118U);
    msg.value = 0.768720237357;

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
    msg.setTimeStamp(0.317923043949);
    msg.setSource(57852U);
    msg.setSourceEntity(95U);
    msg.setDestination(51558U);
    msg.setDestinationEntity(62U);
    msg.value = 0.671208977781;

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
    msg.setTimeStamp(0.396886867354);
    msg.setSource(2392U);
    msg.setSourceEntity(146U);
    msg.setDestination(43378U);
    msg.setDestinationEntity(232U);
    msg.value = 0.157331683953;

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
    msg.setTimeStamp(0.782619586751);
    msg.setSource(49503U);
    msg.setSourceEntity(88U);
    msg.setDestination(8060U);
    msg.setDestinationEntity(251U);
    msg.value = 0.603146116024;

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
    msg.setTimeStamp(0.811597629313);
    msg.setSource(34956U);
    msg.setSourceEntity(91U);
    msg.setDestination(7379U);
    msg.setDestinationEntity(98U);
    msg.value = 0.691112494307;

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
    msg.setTimeStamp(0.324207321297);
    msg.setSource(25963U);
    msg.setSourceEntity(134U);
    msg.setDestination(2155U);
    msg.setDestinationEntity(112U);
    msg.value = 0.03933922832;

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
    msg.setTimeStamp(0.0206789398502);
    msg.setSource(49747U);
    msg.setSourceEntity(200U);
    msg.setDestination(32367U);
    msg.setDestinationEntity(219U);
    msg.validity = 30190U;
    msg.type = 252U;
    msg.utc_year = 58362U;
    msg.utc_month = 237U;
    msg.utc_day = 134U;
    msg.utc_time = 0.31601891789;
    msg.lat = 0.426804849766;
    msg.lon = 0.128430104841;
    msg.height = 0.53392236138;
    msg.satellites = 190U;
    msg.cog = 0.279861970858;
    msg.sog = 0.24865811981;
    msg.hdop = 0.737551976167;
    msg.vdop = 0.293085883261;
    msg.hacc = 0.72422075359;
    msg.vacc = 0.329514287473;

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
    msg.setTimeStamp(0.578674709002);
    msg.setSource(54066U);
    msg.setSourceEntity(103U);
    msg.setDestination(347U);
    msg.setDestinationEntity(118U);
    msg.validity = 1454U;
    msg.type = 46U;
    msg.utc_year = 50375U;
    msg.utc_month = 55U;
    msg.utc_day = 194U;
    msg.utc_time = 0.839969361845;
    msg.lat = 0.744453883997;
    msg.lon = 0.956763548328;
    msg.height = 0.745634938555;
    msg.satellites = 200U;
    msg.cog = 0.364186502371;
    msg.sog = 0.780510640569;
    msg.hdop = 0.516432992926;
    msg.vdop = 0.0798903862948;
    msg.hacc = 0.347537299457;
    msg.vacc = 0.617475262751;

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
    msg.setTimeStamp(0.257070219949);
    msg.setSource(1219U);
    msg.setSourceEntity(18U);
    msg.setDestination(36228U);
    msg.setDestinationEntity(96U);
    msg.validity = 52133U;
    msg.type = 87U;
    msg.utc_year = 5401U;
    msg.utc_month = 247U;
    msg.utc_day = 35U;
    msg.utc_time = 0.0136928160601;
    msg.lat = 0.660542907612;
    msg.lon = 0.0589089620997;
    msg.height = 0.981959622492;
    msg.satellites = 108U;
    msg.cog = 0.613295339855;
    msg.sog = 0.435673457223;
    msg.hdop = 0.206736705686;
    msg.vdop = 0.12656799508;
    msg.hacc = 0.65142301515;
    msg.vacc = 0.541361353412;

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
    msg.setTimeStamp(0.668845416421);
    msg.setSource(27702U);
    msg.setSourceEntity(232U);
    msg.setDestination(32694U);
    msg.setDestinationEntity(180U);
    msg.time = 0.665336547069;
    msg.phi = 0.0175471880577;
    msg.theta = 0.261896390486;
    msg.psi = 0.17029640331;
    msg.psi_magnetic = 0.238736421124;

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
    msg.setTimeStamp(0.816719871248);
    msg.setSource(47357U);
    msg.setSourceEntity(54U);
    msg.setDestination(3513U);
    msg.setDestinationEntity(243U);
    msg.time = 0.48409384244;
    msg.phi = 0.65548565263;
    msg.theta = 0.582470049803;
    msg.psi = 0.132209827649;
    msg.psi_magnetic = 0.4827310929;

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
    msg.setTimeStamp(0.286521725166);
    msg.setSource(22400U);
    msg.setSourceEntity(20U);
    msg.setDestination(62474U);
    msg.setDestinationEntity(166U);
    msg.time = 0.0894433881499;
    msg.phi = 0.130541468097;
    msg.theta = 0.399255133125;
    msg.psi = 0.444273268531;
    msg.psi_magnetic = 0.159242450239;

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
    msg.setTimeStamp(0.658519427737);
    msg.setSource(6473U);
    msg.setSourceEntity(229U);
    msg.setDestination(17167U);
    msg.setDestinationEntity(191U);
    msg.time = 0.85731008463;
    msg.x = 0.108631844857;
    msg.y = 0.902090308121;
    msg.z = 0.505910054353;
    msg.timestep = 0.883180324194;

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
    msg.setTimeStamp(0.902914711036);
    msg.setSource(45390U);
    msg.setSourceEntity(78U);
    msg.setDestination(25866U);
    msg.setDestinationEntity(135U);
    msg.time = 0.705520935226;
    msg.x = 0.516545133993;
    msg.y = 0.45975521115;
    msg.z = 0.794528497112;
    msg.timestep = 0.0776501242055;

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
    msg.setTimeStamp(0.436469752995);
    msg.setSource(37328U);
    msg.setSourceEntity(153U);
    msg.setDestination(22415U);
    msg.setDestinationEntity(204U);
    msg.time = 0.809313725383;
    msg.x = 0.0943556861443;
    msg.y = 0.92770904365;
    msg.z = 0.180421974006;
    msg.timestep = 0.689966049812;

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
    msg.setTimeStamp(0.754926813446);
    msg.setSource(1354U);
    msg.setSourceEntity(183U);
    msg.setDestination(45959U);
    msg.setDestinationEntity(30U);
    msg.time = 0.898445305184;
    msg.x = 0.880597249077;
    msg.y = 0.938086483361;
    msg.z = 0.536771237808;

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
    msg.setTimeStamp(0.7892983631);
    msg.setSource(2143U);
    msg.setSourceEntity(242U);
    msg.setDestination(32692U);
    msg.setDestinationEntity(78U);
    msg.time = 0.77747577028;
    msg.x = 0.587922106122;
    msg.y = 0.645455133718;
    msg.z = 0.288603485842;

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
    msg.setTimeStamp(0.797968998689);
    msg.setSource(34251U);
    msg.setSourceEntity(128U);
    msg.setDestination(31856U);
    msg.setDestinationEntity(28U);
    msg.time = 0.253468998677;
    msg.x = 0.506943700051;
    msg.y = 0.966353090767;
    msg.z = 0.140910508776;

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
    msg.setTimeStamp(0.910847965113);
    msg.setSource(11373U);
    msg.setSourceEntity(223U);
    msg.setDestination(22239U);
    msg.setDestinationEntity(60U);
    msg.time = 0.99038955615;
    msg.x = 0.130353356522;
    msg.y = 0.236196833025;
    msg.z = 0.0844275394778;

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
    msg.setTimeStamp(0.294586557924);
    msg.setSource(41999U);
    msg.setSourceEntity(155U);
    msg.setDestination(38298U);
    msg.setDestinationEntity(197U);
    msg.time = 0.446430115109;
    msg.x = 0.580407940458;
    msg.y = 0.830021229069;
    msg.z = 0.244108165507;

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
    msg.setTimeStamp(0.896171430764);
    msg.setSource(23181U);
    msg.setSourceEntity(117U);
    msg.setDestination(1655U);
    msg.setDestinationEntity(72U);
    msg.time = 0.64148528931;
    msg.x = 0.955551730067;
    msg.y = 0.474238222952;
    msg.z = 0.201940575613;

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
    msg.setTimeStamp(0.774509779592);
    msg.setSource(21929U);
    msg.setSourceEntity(143U);
    msg.setDestination(61658U);
    msg.setDestinationEntity(242U);
    msg.time = 0.823807152206;
    msg.x = 0.771322360367;
    msg.y = 0.801623923262;
    msg.z = 0.616774702851;

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
    msg.setTimeStamp(0.716055821646);
    msg.setSource(24609U);
    msg.setSourceEntity(54U);
    msg.setDestination(55435U);
    msg.setDestinationEntity(21U);
    msg.time = 0.717753396009;
    msg.x = 0.398270839517;
    msg.y = 0.454841267197;
    msg.z = 0.790385805681;

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
    msg.setTimeStamp(0.216705812006);
    msg.setSource(46889U);
    msg.setSourceEntity(177U);
    msg.setDestination(31904U);
    msg.setDestinationEntity(98U);
    msg.time = 0.795677918016;
    msg.x = 0.122698408174;
    msg.y = 0.695956430188;
    msg.z = 0.65200586788;

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
    msg.setTimeStamp(0.0528302854539);
    msg.setSource(13609U);
    msg.setSourceEntity(124U);
    msg.setDestination(38569U);
    msg.setDestinationEntity(34U);
    msg.validity = 123U;
    msg.x = 0.811837867135;
    msg.y = 0.659235954143;
    msg.z = 0.423819607982;

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
    msg.setTimeStamp(0.774991644468);
    msg.setSource(33354U);
    msg.setSourceEntity(59U);
    msg.setDestination(44990U);
    msg.setDestinationEntity(33U);
    msg.validity = 79U;
    msg.x = 0.180155741717;
    msg.y = 0.927694825594;
    msg.z = 0.0858969063761;

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
    msg.setTimeStamp(0.104855655098);
    msg.setSource(48744U);
    msg.setSourceEntity(48U);
    msg.setDestination(1252U);
    msg.setDestinationEntity(225U);
    msg.validity = 189U;
    msg.x = 0.398115864138;
    msg.y = 0.579740720985;
    msg.z = 0.738270340816;

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
    msg.setTimeStamp(0.470444360012);
    msg.setSource(31922U);
    msg.setSourceEntity(169U);
    msg.setDestination(30632U);
    msg.setDestinationEntity(180U);
    msg.validity = 72U;
    msg.x = 0.850700249464;
    msg.y = 0.379056852484;
    msg.z = 0.0310187011448;

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
    msg.setTimeStamp(0.902997689997);
    msg.setSource(63240U);
    msg.setSourceEntity(105U);
    msg.setDestination(37492U);
    msg.setDestinationEntity(196U);
    msg.validity = 127U;
    msg.x = 0.891258409053;
    msg.y = 0.577066509781;
    msg.z = 0.927640353351;

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
    msg.setTimeStamp(0.683770027311);
    msg.setSource(37417U);
    msg.setSourceEntity(250U);
    msg.setDestination(10572U);
    msg.setDestinationEntity(66U);
    msg.validity = 43U;
    msg.x = 0.110725289991;
    msg.y = 0.79637837418;
    msg.z = 0.862816087141;

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
    msg.setTimeStamp(0.528090913336);
    msg.setSource(48996U);
    msg.setSourceEntity(65U);
    msg.setDestination(29480U);
    msg.setDestinationEntity(131U);
    msg.time = 0.942462971956;
    msg.x = 0.489125998301;
    msg.y = 0.832400002776;
    msg.z = 0.984543262894;

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
    msg.setTimeStamp(0.231221500641);
    msg.setSource(30594U);
    msg.setSourceEntity(34U);
    msg.setDestination(3012U);
    msg.setDestinationEntity(226U);
    msg.time = 0.725759672274;
    msg.x = 0.0877241760747;
    msg.y = 0.048510146034;
    msg.z = 0.0347734560949;

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
    msg.setTimeStamp(0.679858010888);
    msg.setSource(673U);
    msg.setSourceEntity(109U);
    msg.setDestination(26117U);
    msg.setDestinationEntity(101U);
    msg.time = 0.0225130727411;
    msg.x = 0.0248798723033;
    msg.y = 0.3098752616;
    msg.z = 0.759971583397;

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
    msg.setTimeStamp(0.505991896481);
    msg.setSource(19010U);
    msg.setSourceEntity(209U);
    msg.setDestination(61914U);
    msg.setDestinationEntity(188U);
    msg.validity = 212U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.547235027992;
    tmp_msg_0.beam_height = 0.21457519122;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.97371499366;

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
    msg.setTimeStamp(0.669265011599);
    msg.setSource(20623U);
    msg.setSourceEntity(48U);
    msg.setDestination(40952U);
    msg.setDestinationEntity(203U);
    msg.validity = 19U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.496263948703;
    tmp_msg_0.y = 0.669496515746;
    tmp_msg_0.z = 0.348441815764;
    tmp_msg_0.phi = 0.776259254236;
    tmp_msg_0.theta = 0.515608967118;
    tmp_msg_0.psi = 0.403244532498;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0323711238669;

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
    msg.setTimeStamp(0.299784883163);
    msg.setSource(8791U);
    msg.setSourceEntity(177U);
    msg.setDestination(14838U);
    msg.setDestinationEntity(98U);
    msg.validity = 80U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.635485430668;
    tmp_msg_0.y = 0.939379615147;
    tmp_msg_0.z = 0.363689202193;
    tmp_msg_0.phi = 0.120636655417;
    tmp_msg_0.theta = 0.934884676788;
    tmp_msg_0.psi = 0.181733336552;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.853902296881;
    tmp_msg_1.beam_height = 0.386938391775;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.543221069553;

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
    msg.setTimeStamp(0.85498489739);
    msg.setSource(23924U);
    msg.setSourceEntity(4U);
    msg.setDestination(41776U);
    msg.setDestinationEntity(229U);
    msg.value = 0.936322571085;

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
    msg.setTimeStamp(0.358317350668);
    msg.setSource(50495U);
    msg.setSourceEntity(180U);
    msg.setDestination(21989U);
    msg.setDestinationEntity(177U);
    msg.value = 0.638052570256;

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
    msg.setTimeStamp(0.901297411311);
    msg.setSource(18272U);
    msg.setSourceEntity(158U);
    msg.setDestination(11093U);
    msg.setDestinationEntity(197U);
    msg.value = 0.382426192975;

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
    msg.setTimeStamp(0.849067426185);
    msg.setSource(37683U);
    msg.setSourceEntity(75U);
    msg.setDestination(33282U);
    msg.setDestinationEntity(252U);
    msg.value = 0.49692892075;

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
    msg.setTimeStamp(0.299873874907);
    msg.setSource(29213U);
    msg.setSourceEntity(254U);
    msg.setDestination(37320U);
    msg.setDestinationEntity(16U);
    msg.value = 0.85764127445;

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
    msg.setTimeStamp(0.339411822777);
    msg.setSource(9152U);
    msg.setSourceEntity(19U);
    msg.setDestination(60414U);
    msg.setDestinationEntity(79U);
    msg.value = 0.40470738878;

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
    msg.setTimeStamp(0.391323647439);
    msg.setSource(16119U);
    msg.setSourceEntity(53U);
    msg.setDestination(40557U);
    msg.setDestinationEntity(95U);
    msg.value = 0.163170377758;

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
    msg.setTimeStamp(0.432701573273);
    msg.setSource(11427U);
    msg.setSourceEntity(132U);
    msg.setDestination(2207U);
    msg.setDestinationEntity(177U);
    msg.value = 0.858403091097;

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
    msg.setTimeStamp(0.333607252923);
    msg.setSource(11379U);
    msg.setSourceEntity(50U);
    msg.setDestination(43899U);
    msg.setDestinationEntity(51U);
    msg.value = 0.439840226226;

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
    msg.setTimeStamp(0.315481859588);
    msg.setSource(56676U);
    msg.setSourceEntity(84U);
    msg.setDestination(32601U);
    msg.setDestinationEntity(141U);
    msg.value = 0.616817474839;

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
    msg.setTimeStamp(0.698885513176);
    msg.setSource(9299U);
    msg.setSourceEntity(128U);
    msg.setDestination(55111U);
    msg.setDestinationEntity(32U);
    msg.value = 0.445101322494;

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
    msg.setTimeStamp(0.318165023983);
    msg.setSource(17175U);
    msg.setSourceEntity(38U);
    msg.setDestination(42465U);
    msg.setDestinationEntity(3U);
    msg.value = 0.442321198485;

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
    msg.setTimeStamp(0.600026991875);
    msg.setSource(26439U);
    msg.setSourceEntity(21U);
    msg.setDestination(59619U);
    msg.setDestinationEntity(236U);
    msg.value = 0.636629273517;

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
    msg.setTimeStamp(0.777354748932);
    msg.setSource(54615U);
    msg.setSourceEntity(191U);
    msg.setDestination(36956U);
    msg.setDestinationEntity(124U);
    msg.value = 0.626353141876;

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
    msg.setTimeStamp(0.13338934806);
    msg.setSource(37574U);
    msg.setSourceEntity(124U);
    msg.setDestination(34125U);
    msg.setDestinationEntity(0U);
    msg.value = 0.638676768922;

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
    msg.setTimeStamp(0.184831478266);
    msg.setSource(24163U);
    msg.setSourceEntity(222U);
    msg.setDestination(47838U);
    msg.setDestinationEntity(167U);
    msg.value = 0.42085591067;

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
    msg.setTimeStamp(0.189198899832);
    msg.setSource(65120U);
    msg.setSourceEntity(5U);
    msg.setDestination(47677U);
    msg.setDestinationEntity(59U);
    msg.value = 0.110879147676;

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
    msg.setTimeStamp(0.794241573345);
    msg.setSource(7202U);
    msg.setSourceEntity(33U);
    msg.setDestination(58842U);
    msg.setDestinationEntity(37U);
    msg.value = 0.851428143591;

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
    msg.setTimeStamp(0.971862701268);
    msg.setSource(33787U);
    msg.setSourceEntity(137U);
    msg.setDestination(12922U);
    msg.setDestinationEntity(232U);
    msg.value = 0.184126740561;

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
    msg.setTimeStamp(0.763005338177);
    msg.setSource(37367U);
    msg.setSourceEntity(9U);
    msg.setDestination(26025U);
    msg.setDestinationEntity(93U);
    msg.value = 0.0165524695241;

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
    msg.setTimeStamp(0.0872624769424);
    msg.setSource(47614U);
    msg.setSourceEntity(211U);
    msg.setDestination(50478U);
    msg.setDestinationEntity(228U);
    msg.value = 0.886457329611;

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
    msg.setTimeStamp(0.194855001309);
    msg.setSource(29884U);
    msg.setSourceEntity(33U);
    msg.setDestination(42386U);
    msg.setDestinationEntity(119U);
    msg.value = 0.114861872592;

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
    msg.setTimeStamp(0.601325627993);
    msg.setSource(2468U);
    msg.setSourceEntity(189U);
    msg.setDestination(26788U);
    msg.setDestinationEntity(53U);
    msg.value = 0.260789418981;

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
    msg.setTimeStamp(0.396350858233);
    msg.setSource(33889U);
    msg.setSourceEntity(213U);
    msg.setDestination(4411U);
    msg.setDestinationEntity(117U);
    msg.value = 0.44067700512;

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
    msg.setTimeStamp(0.446072107748);
    msg.setSource(19754U);
    msg.setSourceEntity(243U);
    msg.setDestination(53186U);
    msg.setDestinationEntity(201U);
    msg.direction = 0.483363301354;
    msg.speed = 0.622139198397;
    msg.turbulence = 0.835942395669;

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
    msg.setTimeStamp(0.372489667838);
    msg.setSource(11323U);
    msg.setSourceEntity(236U);
    msg.setDestination(31445U);
    msg.setDestinationEntity(216U);
    msg.direction = 0.304407245231;
    msg.speed = 0.601785071136;
    msg.turbulence = 0.269190965804;

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
    msg.setTimeStamp(0.477114087744);
    msg.setSource(65494U);
    msg.setSourceEntity(44U);
    msg.setDestination(11346U);
    msg.setDestinationEntity(9U);
    msg.direction = 0.0510437473695;
    msg.speed = 0.721422188799;
    msg.turbulence = 0.516425057236;

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
    msg.setTimeStamp(0.271145273199);
    msg.setSource(51935U);
    msg.setSourceEntity(177U);
    msg.setDestination(32021U);
    msg.setDestinationEntity(133U);
    msg.value = 0.107597727403;

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
    msg.setTimeStamp(0.754348098579);
    msg.setSource(44253U);
    msg.setSourceEntity(2U);
    msg.setDestination(32986U);
    msg.setDestinationEntity(28U);
    msg.value = 0.562595804658;

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
    msg.setTimeStamp(0.431411939496);
    msg.setSource(51459U);
    msg.setSourceEntity(141U);
    msg.setDestination(58982U);
    msg.setDestinationEntity(234U);
    msg.value = 0.303939464779;

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
    msg.setTimeStamp(0.440954102778);
    msg.setSource(55370U);
    msg.setSourceEntity(197U);
    msg.setDestination(28159U);
    msg.setDestinationEntity(48U);
    msg.value.assign("UFSPWZOUNXIIANVUSWITSERTFJYKAZYADOEMJWRQZSUCTJVLVJMKPLBGVHXYWMPIZRCRDOTDUECIQOLFJEQGNQMAXUSBPBHZXHWHDCVYBKGKRKFRMDOIFRKWLFJAMCSSCXNTRNKAIMEFYAUBSPTKPHTCFXNXEWGIEGZEDORDBYTOCQBWZGOPHLLHYFZJXYYQISJUGGVVPLQOBAUMXDBGACFANSIJEQGJDVBWQZWPOKHMLLVNQMTNLH");

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
    msg.setTimeStamp(0.329032105048);
    msg.setSource(46049U);
    msg.setSourceEntity(227U);
    msg.setDestination(37324U);
    msg.setDestinationEntity(103U);
    msg.value.assign("QDHUDPMJDBZPJARWEXEB");

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
    msg.setTimeStamp(0.778954934526);
    msg.setSource(11166U);
    msg.setSourceEntity(89U);
    msg.setDestination(18703U);
    msg.setDestinationEntity(83U);
    msg.value.assign("PCQAOSLTXCZVAHHFOXCICVLTQVUXLKMHFMKMNHJQZYWXECPGQYEJTDIVSORULCXZDJHYICXYSEWGJTSFBAYGVMWLWFBNJZKXZGOIDXRFAKPUPASHQBBNUYKFMQGDFHZMGKHY");

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
    msg.setTimeStamp(0.808511382854);
    msg.setSource(10881U);
    msg.setSourceEntity(164U);
    msg.setDestination(18505U);
    msg.setDestinationEntity(16U);
    const char tmp_msg_0[] = {-58, 62, 108, 21, 2, -47, 52, -49, -36, 37, -120, 17, -118, 114, 125, 38, 97, 84, 122, -104, 23, 87, 84, -64, -46, 11, 121, 3, 24, 110, 77, -106, -19, -96, -119, 36, -29, -49, -48, 56, 9, -107, 100, 6, -126, -21, -103, 49, 52, 100, 21, -22, 52};
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
    msg.setTimeStamp(0.318986112042);
    msg.setSource(7383U);
    msg.setSourceEntity(233U);
    msg.setDestination(45058U);
    msg.setDestinationEntity(148U);
    const char tmp_msg_0[] = {71, -108, 91, -27, -97, 75, 51, 105, -117, -119, 40, 105, 59, 27, 33, 94, 75, 34, -35, 106, -2, 50, 36, -9, 54, 4, -14, 65, -101, 22, 73, 54, 14, 60, -77, 10, -121, -55, 71, 111, -78, -69, 112, -33, -65, 34, 6, 19, 91, -33, -113, -115, -69, -89, 48, -67, -120, -84, 103, 59, 109, -67, 29, 59, 42, 52, -19, 5, -66, -11, -90, 43, 77, 74, -73, 12, -93, -60, -83, -53, 15, -2, -56, 126, -78, -71, -121, -35, 54, 60, 84, 66, -58, 108, 52, -23, -2, 106, 54, 29, -106, -99, 110, 63, 41, 60, -62, -126, 65, -75, 10, -98, 32, 49, -126, 120, 54, 113, 32, -118, -109, 61, 44, -114, -106, 52, 85, 123, 58, -119, -54, 48, -83, 20, -109, -119, -92, -9, -60, -48, -85, 14, -79, 27, 105, -70, 55, -59, -98, 60, 24, -44, 56, 19, 69, 15, -24, -44, 26, 48, -21, -122, 7, -12, -106, -96, 58, -86, 29, 43, -40, -8, -93, 87, -73, -28, 67, 110, -82, -7, 78, -116, 88, 75, -18, 9, -25, -100, 69, 109, 98, 68, 63, -120, -56, -101, 57, -76, 64, -98, 120, 78, -39, -100, 37, 37, 77, -17, 82, -36, -97, -66, 82, -71, -38, -103, 31, -38, 39, -57, 125, 52};
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
    msg.setTimeStamp(0.494169530812);
    msg.setSource(61339U);
    msg.setSourceEntity(202U);
    msg.setDestination(49304U);
    msg.setDestinationEntity(152U);
    const char tmp_msg_0[] = {-24, 23, 90, -124, 110, -70, 27, 55, -67, -51, -83, -100, -101, 5, -127, 49, 64, -45, 60, 11, -24, -112, -122, -41, -44, 100, 13, 91, -113, 92, 43, 93, 21, 18, -2, -75, -57, -57, 7, -39, 51, 6, -99, -127, -97, 87, -7, 22, 120, -65, -118, 48, 108, 31, -45, 118, 126, -111, 0, -77, -41, -96, 109, 29, -5, 112, 118, -124, -111, -15, -4, -125, -58, 50, -15, 28, -55, -10, -30, -78, 5, 119, 29, 91, -39, -37, -21, -19, 39, -58, -105, -14, -42, 53, 122, 102, 45, 62, 25, 57, -64, -124, -69, -86, -118, 10, 124, 60, 113, 40, -108, 27, 25, -88, 26, 25, 47, -45, -27, -39, 16, -87, 24, -51, 6, 87, 38, -37, 108, 97, 72, 13, 57, -77, -109, -50, 16, 106, -66, -78, 55, -54, 117, 13, -69, -57, -57, 74, -20, 21, -53, -82, -98, 94, 111, -32, -28, 76, -128, 121, -46, 119, 92, 66, -93, 126, 85, 11, -46, -2, 14, -65, 76, -122, -82, 62, 14, 101, 6, 55, -70, 0, -6, -8, -64, 85, -60, -3, -73, -20, -19, -1, -45, -96, -69, 87, -16, 34, -37, -15, 40};
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
    msg.setTimeStamp(0.978925094756);
    msg.setSource(45112U);
    msg.setSourceEntity(205U);
    msg.setDestination(2480U);
    msg.setDestinationEntity(154U);
    msg.type = 44U;
    msg.frequency = 2930365096U;
    msg.min_range = 61044U;
    msg.max_range = 62597U;
    msg.bits_per_point = 29U;
    msg.scale_factor = 0.832842834347;
    const char tmp_msg_0[] = {-49, -45, 122, 71, -56, -9, -57, 53, -110, -66, 83, -10, -56, 101, 7, -45, -72, 107, 52, -92, -46, 95, 121, -60, 115, -96, -7, 24, 20, -122, 88, -26, 27, -87, -4, 30, -84, 106, -118, -76, -29, 59, 34, 23, -83, 60, -106, -97, -48, -61, 75, 96, -69, 102, -122, -35, -66, -48, -60, 17, -112, -97, -96, -68, -67, 28, -25, 73, -125, -57, -4, 114, 58, -74, 79, 44, 84, 100, 82, -85, 51, -83, -35, -107, -56, -92, -114, 80, 14, 9, 55, -77, -66, -20, 86, -50, 78, -28, 81, -34, 20, -6, -27, 27, 11, -9, 60, -33, 73, -58, 98, -9, 22, 119, 63, 87, -81, 77, -97, -7, 38, -33, 75, -73, 120, -22, 114, 84, 105, -82, -11, -53, 92, -43, -108, -35, 105, -11, -1, 1, -30, 55, 94, -112, -71, -128, 14, 115, -42, -55, 25, 36, 117, -96};
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
    msg.setTimeStamp(0.638865121214);
    msg.setSource(47486U);
    msg.setSourceEntity(254U);
    msg.setDestination(51409U);
    msg.setDestinationEntity(229U);
    msg.type = 88U;
    msg.frequency = 1182588961U;
    msg.min_range = 56928U;
    msg.max_range = 8180U;
    msg.bits_per_point = 86U;
    msg.scale_factor = 0.680565293694;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.745265549868;
    tmp_msg_0.beam_height = 0.716312683126;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {78, -116, -5, 95, 63, -13, 46, 90, 10, 44, 86, -99, 107, -105, -52, -120, -60, 53, -78, -117, -93, 120, 56, -79, -62, -55, 84, -123, -49, -123, -102, 36, 104, 98, 33, -37, -122, 100, 94, -21, 120, -91, 26, -33, 102, -116, -35, 96, -31, -57, 27, 68, 110, -95, 105, 3, -21, -13, 5, 81, -12, -77, 83, 7, -124, 92, 97, 83, 65, -7, 70, -36, 115, 97, 1, 113, 30, -9, 98, 41, -9, 69, 81, 107, 77, 110, 30, 77, 65, -14, 50, -41, -28, 1, 73, -49, -114, -122, -32, -95, 93, -113, -9, -99, 99, -127, -56, -100, -111, 64, 77, 19};
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
    msg.setTimeStamp(0.528227955367);
    msg.setSource(5331U);
    msg.setSourceEntity(79U);
    msg.setDestination(27151U);
    msg.setDestinationEntity(12U);
    msg.type = 208U;
    msg.frequency = 1946849181U;
    msg.min_range = 39284U;
    msg.max_range = 51688U;
    msg.bits_per_point = 159U;
    msg.scale_factor = 0.191860076202;
    const char tmp_msg_0[] = {112, 44, 8, -56, -34, 10, 44, -32, 74, 15, -111, 60, -117, -125, 1, 90, 88, 104, -13, 24, 65, -24, -96, 63, 82, 94, -118, -57, -80, 80, -13, 4, -45, 64, -122, 7, -113, 74, 49, -121, 52, -120, 91, -23, 50, -7, 3, -123, -63, 54, -111, 102, 110, 73, 74, 91, -51, -76, 108, -60, 70, 6, -23, -68, 21, 109, 61, 0, 113, -17, -114, 2, -77, 49, 82, 108, 83, 39, -101, -5, -76, 4, -122, -88, -37, 116, -15, -65, 107, 63, 76, 117, -106, -47, -29, 123, -32, -44, -105, 120, 21, -84, -56, -104, 58, -45, 118, -1, 36, -5, 46, -44, 98, 82, -105, 25, -127, 8, -85, -9, -54, 84, -70, 112, -34, 24, -82, 94, 42, 15, 80, 11, 26, 126, -110, 106, 12, 35, -74, -103, 53, -91, 91, 13, 39, 97, 27, 9, -37, -106, -53, 36, -66, -113, -99, -117, 118, -21, -16, 78, -30, 40, 96};
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
    msg.setTimeStamp(0.00418617277305);
    msg.setSource(55048U);
    msg.setSourceEntity(24U);
    msg.setDestination(27131U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.295937900917);
    msg.setSource(26244U);
    msg.setSourceEntity(241U);
    msg.setDestination(3888U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.450763201686);
    msg.setSource(39122U);
    msg.setSourceEntity(226U);
    msg.setDestination(26497U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.406282620437);
    msg.setSource(14253U);
    msg.setSourceEntity(28U);
    msg.setDestination(13929U);
    msg.setDestinationEntity(209U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.462801875392);
    msg.setSource(47763U);
    msg.setSourceEntity(32U);
    msg.setDestination(46583U);
    msg.setDestinationEntity(134U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.143057499942);
    msg.setSource(59778U);
    msg.setSourceEntity(106U);
    msg.setDestination(30908U);
    msg.setDestinationEntity(50U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.632032363614);
    msg.setSource(23321U);
    msg.setSourceEntity(101U);
    msg.setDestination(11108U);
    msg.setDestinationEntity(51U);
    msg.value = 0.170209176013;
    msg.confidence = 0.452191417777;
    msg.opmodes.assign("SFKMCSINKNUQRYILCXVYWTUMYHBQHEMPMKXASKORVUBODTQQKEFMAHPGHZALZNPVZVSCPDSRTRGSQ");

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
    msg.setTimeStamp(0.370337671022);
    msg.setSource(60767U);
    msg.setSourceEntity(252U);
    msg.setDestination(31060U);
    msg.setDestinationEntity(10U);
    msg.value = 0.575789316422;
    msg.confidence = 0.364142477763;
    msg.opmodes.assign("ZHUMZQMJHLFVIVNSTYPXLPTXMVRFCIYVGSBOMYYUWABSNVWQKFILNMIIXTHQAEKBICRTZXNDZNCBWMZTBWNHQSXWKJOLZCCYJLYWKUESHVQ");

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
    msg.setTimeStamp(0.646689477773);
    msg.setSource(58005U);
    msg.setSourceEntity(89U);
    msg.setDestination(6223U);
    msg.setDestinationEntity(25U);
    msg.value = 0.190273000276;
    msg.confidence = 0.808408970954;
    msg.opmodes.assign("IGNRPJARNLIOIEKHCHJEVQPWRDUGEDDSWNIRUVFUGTUBOPLOFOPWJDIWYXBRMEECPKXEUTHOQRZFMNDZVLJKXAAZYPCUVJYFLSETFYBFBRTHPCSBDILFCMEGDNBAXAMZMKYAXQSOHPUZTDHKRBQWWTKBNMPDGSHXJKYLXFYWZH");

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
    msg.setTimeStamp(0.62234273851);
    msg.setSource(55779U);
    msg.setSourceEntity(197U);
    msg.setDestination(24194U);
    msg.setDestinationEntity(47U);
    msg.itow = 4063441822U;
    msg.lat = 0.0306267529933;
    msg.lon = 0.185387170466;
    msg.height_ell = 0.0579413673424;
    msg.height_sea = 0.0872961026369;
    msg.hacc = 0.291369326686;
    msg.vacc = 0.535567663806;
    msg.vel_n = 0.975169482521;
    msg.vel_e = 0.217649374312;
    msg.vel_d = 0.823251077071;
    msg.speed = 0.247253401688;
    msg.gspeed = 0.310315996003;
    msg.heading = 0.0463468901497;
    msg.sacc = 0.0450210033987;
    msg.cacc = 0.288031041036;

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
    msg.setTimeStamp(0.0816545925826);
    msg.setSource(10818U);
    msg.setSourceEntity(202U);
    msg.setDestination(39808U);
    msg.setDestinationEntity(206U);
    msg.itow = 2158692357U;
    msg.lat = 0.485463780182;
    msg.lon = 0.0108558753538;
    msg.height_ell = 0.430917576734;
    msg.height_sea = 0.116832227753;
    msg.hacc = 0.962091234492;
    msg.vacc = 0.872734232507;
    msg.vel_n = 0.400330365769;
    msg.vel_e = 0.95410651229;
    msg.vel_d = 0.337710564608;
    msg.speed = 0.097630794623;
    msg.gspeed = 0.897755755247;
    msg.heading = 0.0819629081816;
    msg.sacc = 0.277986220017;
    msg.cacc = 0.465157376721;

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
    msg.setTimeStamp(0.601716010084);
    msg.setSource(64720U);
    msg.setSourceEntity(125U);
    msg.setDestination(24680U);
    msg.setDestinationEntity(178U);
    msg.itow = 261443373U;
    msg.lat = 0.629350145712;
    msg.lon = 0.881963863114;
    msg.height_ell = 0.205709700522;
    msg.height_sea = 0.65921255206;
    msg.hacc = 0.0200462170024;
    msg.vacc = 0.50239443653;
    msg.vel_n = 0.364887948647;
    msg.vel_e = 0.565299096418;
    msg.vel_d = 0.28016736096;
    msg.speed = 0.014033552033;
    msg.gspeed = 0.195882309132;
    msg.heading = 0.737074296377;
    msg.sacc = 0.812705500467;
    msg.cacc = 0.846028854734;

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
    msg.setTimeStamp(0.673395562737);
    msg.setSource(50262U);
    msg.setSourceEntity(205U);
    msg.setDestination(42176U);
    msg.setDestinationEntity(63U);
    msg.id = 80U;
    msg.value = 0.722991841967;

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
    msg.setTimeStamp(0.926224125615);
    msg.setSource(25135U);
    msg.setSourceEntity(176U);
    msg.setDestination(5185U);
    msg.setDestinationEntity(88U);
    msg.id = 221U;
    msg.value = 0.261977708642;

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
    msg.setTimeStamp(0.0206089978648);
    msg.setSource(55441U);
    msg.setSourceEntity(203U);
    msg.setDestination(47001U);
    msg.setDestinationEntity(155U);
    msg.id = 162U;
    msg.value = 0.744738577988;

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
    msg.setTimeStamp(0.527024877563);
    msg.setSource(40584U);
    msg.setSourceEntity(91U);
    msg.setDestination(25302U);
    msg.setDestinationEntity(202U);
    msg.x = 0.745365237092;
    msg.y = 0.666625470406;
    msg.z = 0.674309415021;
    msg.phi = 0.680748247483;
    msg.theta = 0.514747550678;
    msg.psi = 0.077957458293;

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
    msg.setTimeStamp(0.990425171534);
    msg.setSource(57876U);
    msg.setSourceEntity(22U);
    msg.setDestination(8045U);
    msg.setDestinationEntity(119U);
    msg.x = 0.0123789573479;
    msg.y = 0.289645462866;
    msg.z = 0.11053013989;
    msg.phi = 0.852065283837;
    msg.theta = 0.111337221649;
    msg.psi = 0.79960391161;

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
    msg.setTimeStamp(0.507750866756);
    msg.setSource(35540U);
    msg.setSourceEntity(144U);
    msg.setDestination(9733U);
    msg.setDestinationEntity(142U);
    msg.x = 0.0801393044129;
    msg.y = 0.417062908816;
    msg.z = 0.892568603254;
    msg.phi = 0.373653838527;
    msg.theta = 0.327855168918;
    msg.psi = 0.730971245401;

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
    msg.setTimeStamp(0.217087661199);
    msg.setSource(40945U);
    msg.setSourceEntity(27U);
    msg.setDestination(21327U);
    msg.setDestinationEntity(159U);
    msg.beam_width = 0.82643858015;
    msg.beam_height = 0.560191520013;

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
    msg.setTimeStamp(0.761600272802);
    msg.setSource(31732U);
    msg.setSourceEntity(168U);
    msg.setDestination(22750U);
    msg.setDestinationEntity(144U);
    msg.beam_width = 0.0355778525706;
    msg.beam_height = 0.774364419408;

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
    msg.setTimeStamp(0.272007653604);
    msg.setSource(24546U);
    msg.setSourceEntity(216U);
    msg.setDestination(45550U);
    msg.setDestinationEntity(45U);
    msg.beam_width = 0.858113815162;
    msg.beam_height = 0.209643129439;

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
    msg.setTimeStamp(0.21607046646);
    msg.setSource(46153U);
    msg.setSourceEntity(112U);
    msg.setDestination(42270U);
    msg.setDestinationEntity(69U);
    msg.sane = 145U;

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
    msg.setTimeStamp(0.735931147858);
    msg.setSource(13552U);
    msg.setSourceEntity(171U);
    msg.setDestination(3525U);
    msg.setDestinationEntity(164U);
    msg.sane = 125U;

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
    msg.setTimeStamp(0.562004394973);
    msg.setSource(34434U);
    msg.setSourceEntity(66U);
    msg.setDestination(62726U);
    msg.setDestinationEntity(246U);
    msg.sane = 158U;

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
    msg.setTimeStamp(0.55500899002);
    msg.setSource(48586U);
    msg.setSourceEntity(146U);
    msg.setDestination(34883U);
    msg.setDestinationEntity(126U);
    msg.value = 0.860115825591;

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
    msg.setTimeStamp(0.20424310993);
    msg.setSource(60057U);
    msg.setSourceEntity(159U);
    msg.setDestination(38484U);
    msg.setDestinationEntity(133U);
    msg.value = 0.747957385762;

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
    msg.setTimeStamp(0.940347987115);
    msg.setSource(56663U);
    msg.setSourceEntity(121U);
    msg.setDestination(31185U);
    msg.setDestinationEntity(242U);
    msg.value = 0.438193957172;

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
    msg.setTimeStamp(0.191049415676);
    msg.setSource(46389U);
    msg.setSourceEntity(165U);
    msg.setDestination(28160U);
    msg.setDestinationEntity(112U);
    msg.value = 0.640963109879;

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
    msg.setTimeStamp(0.0833222894142);
    msg.setSource(47277U);
    msg.setSourceEntity(37U);
    msg.setDestination(14694U);
    msg.setDestinationEntity(32U);
    msg.value = 0.579667643125;

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
    msg.setTimeStamp(0.476971929097);
    msg.setSource(25066U);
    msg.setSourceEntity(137U);
    msg.setDestination(52420U);
    msg.setDestinationEntity(78U);
    msg.value = 0.199682730654;

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
    msg.setTimeStamp(0.976945747594);
    msg.setSource(64062U);
    msg.setSourceEntity(192U);
    msg.setDestination(28845U);
    msg.setDestinationEntity(234U);
    msg.value = 0.144684753921;

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
    msg.setTimeStamp(0.488554536294);
    msg.setSource(40430U);
    msg.setSourceEntity(147U);
    msg.setDestination(25616U);
    msg.setDestinationEntity(12U);
    msg.value = 0.561441308696;

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
    msg.setTimeStamp(0.0495978887297);
    msg.setSource(5982U);
    msg.setSourceEntity(254U);
    msg.setDestination(26270U);
    msg.setDestinationEntity(48U);
    msg.value = 0.541934326922;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.733837910159);
    msg.setSource(2608U);
    msg.setSourceEntity(107U);
    msg.setDestination(3805U);
    msg.setDestinationEntity(202U);
    msg.id = 248U;
    msg.zoom = 251U;
    msg.action = 234U;

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
    msg.setTimeStamp(0.146321600573);
    msg.setSource(32963U);
    msg.setSourceEntity(218U);
    msg.setDestination(14551U);
    msg.setDestinationEntity(252U);
    msg.id = 190U;
    msg.zoom = 49U;
    msg.action = 79U;

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
    msg.setTimeStamp(0.398719627686);
    msg.setSource(54842U);
    msg.setSourceEntity(213U);
    msg.setDestination(57364U);
    msg.setDestinationEntity(212U);
    msg.id = 52U;
    msg.zoom = 176U;
    msg.action = 23U;

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
    msg.setTimeStamp(0.333015564681);
    msg.setSource(23330U);
    msg.setSourceEntity(67U);
    msg.setDestination(9526U);
    msg.setDestinationEntity(161U);
    msg.id = 23U;
    msg.value = 0.140174216972;

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
    msg.setTimeStamp(0.709618836367);
    msg.setSource(42191U);
    msg.setSourceEntity(216U);
    msg.setDestination(47310U);
    msg.setDestinationEntity(210U);
    msg.id = 9U;
    msg.value = 0.0744627784453;

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
    msg.setTimeStamp(0.243962601999);
    msg.setSource(34841U);
    msg.setSourceEntity(136U);
    msg.setDestination(47738U);
    msg.setDestinationEntity(154U);
    msg.id = 158U;
    msg.value = 0.721115189285;

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
    msg.setTimeStamp(0.505610142976);
    msg.setSource(47651U);
    msg.setSourceEntity(187U);
    msg.setDestination(53040U);
    msg.setDestinationEntity(34U);
    msg.id = 254U;
    msg.value = 0.565775568232;

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
    msg.setTimeStamp(0.14358209882);
    msg.setSource(31090U);
    msg.setSourceEntity(56U);
    msg.setDestination(56324U);
    msg.setDestinationEntity(44U);
    msg.id = 38U;
    msg.value = 0.687794816762;

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
    msg.setTimeStamp(0.227185403876);
    msg.setSource(8666U);
    msg.setSourceEntity(10U);
    msg.setDestination(55017U);
    msg.setDestinationEntity(80U);
    msg.id = 210U;
    msg.value = 0.229232753654;

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
    msg.setTimeStamp(0.748830802147);
    msg.setSource(23518U);
    msg.setSourceEntity(154U);
    msg.setDestination(11868U);
    msg.setDestinationEntity(176U);
    msg.id = 149U;
    msg.angle = 0.795883205912;

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
    msg.setTimeStamp(0.238160043013);
    msg.setSource(20266U);
    msg.setSourceEntity(92U);
    msg.setDestination(30752U);
    msg.setDestinationEntity(53U);
    msg.id = 125U;
    msg.angle = 0.678061007866;

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
    msg.setTimeStamp(0.197283389082);
    msg.setSource(45174U);
    msg.setSourceEntity(94U);
    msg.setDestination(20883U);
    msg.setDestinationEntity(198U);
    msg.id = 107U;
    msg.angle = 0.220735816017;

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
    msg.setTimeStamp(0.290630078522);
    msg.setSource(20720U);
    msg.setSourceEntity(223U);
    msg.setDestination(58709U);
    msg.setDestinationEntity(244U);
    msg.op = 207U;
    msg.actions.assign("YFTTKUNFPOSADUROCZZWMAXPCHLYWMVSBJCDXBUAIDXUCGIGWHVVFVXYVGQTGNJAJOXRFWTXPDQMJPHJVITDTENEJUNIZKBRAJIEJZHCYEMZQSBFEGOABLKYWEDOSQFLQNCITTIFHGJHDQWGRUMQUP");

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
    msg.setTimeStamp(0.184582326467);
    msg.setSource(24021U);
    msg.setSourceEntity(26U);
    msg.setDestination(26437U);
    msg.setDestinationEntity(140U);
    msg.op = 226U;
    msg.actions.assign("NZIEOUIJUYSPGTUWSYMCWJQYSSGXLMKOCNIDNEHDPHDVKNMGKSRIRVIWEFOKIDWDLLEWLPOMRAVYXFHHVTUJMZCHPQFKBKHFCLRRTBPNQRDOUCMSIZBXVDQRNAJALNWAYVESFIQTMDOZTARSAFIZPRYBOVDHCGTZZEYUZLHQKXGFVQ");

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
    msg.setTimeStamp(0.511218251082);
    msg.setSource(47754U);
    msg.setSourceEntity(17U);
    msg.setDestination(24033U);
    msg.setDestinationEntity(184U);
    msg.op = 248U;
    msg.actions.assign("ZNPSHPFGYMXCZNRXWTBBIBZMIETQWKRFURBJLPYDINXKQFCITZDHNKAKNQQCGYMVSPEVUIMACVGIROBRATSXFABBZCVJJWDEUGLBMAOOPHTDOVSSHYPSDLAHDPCYFSDWJBOWLIGPCHTGJUQZEJDZAKUXFXKWOWHIEGSGGEVPJNNXOLJAEVSLOGMORHYLL");

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
    msg.setTimeStamp(0.953993928744);
    msg.setSource(50200U);
    msg.setSourceEntity(151U);
    msg.setDestination(53823U);
    msg.setDestinationEntity(240U);
    msg.actions.assign("RUAUHQIMFNQCOBLWWXNDYEWTQSCUCXDMJMZSHCBFXWNIJQRTIMEGWUKTRYPNOELLVPEPNQPGNENGNIOXRBBUPFXAWGSTZFZRHYLNAFMGJPDOERPRVHLNVYVSHFKXQHCUZYGZKECVYDESKDTILSDHCFOGPLEGSCAMZZAVJZKDJHAAYVQFOTJQOORSPBSETGJKTSDBPBIUJIJXMFCBVZKJMHBLGATKDKMDOLWZRIFWVYIUMXCQUUROVHTWBIQYK");

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
    msg.setTimeStamp(0.244767914623);
    msg.setSource(46549U);
    msg.setSourceEntity(57U);
    msg.setDestination(25251U);
    msg.setDestinationEntity(163U);
    msg.actions.assign("XUOCGDYWEJXGBFFOLNUYIQTCUJMMFTQLPKJWVSPKNXYQKIEGXLLYMFZKDGHPWHRHGUJBWMLFMALQIZVFAHFFSHKPVCJHEYRPGTLUKZOEIQZSFOQPDAAVDPLCCXCEGWSTJPVMLHVWRPVRSGHSWUYENZDIUEXBZQ");

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
    msg.setTimeStamp(0.314208973951);
    msg.setSource(8360U);
    msg.setSourceEntity(136U);
    msg.setDestination(32504U);
    msg.setDestinationEntity(230U);
    msg.actions.assign("RQQOVIHDWXSGULQCMRTOFNCBSAZCGKWDEZVUQMYKLQAIYLBNABSZRRDZBPEYGQFJVTXZOICDXXCWTHZXJKBDR");

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
    msg.setTimeStamp(0.0409654158437);
    msg.setSource(12723U);
    msg.setSourceEntity(56U);
    msg.setDestination(6104U);
    msg.setDestinationEntity(246U);
    msg.button = 59U;
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
    msg.setTimeStamp(0.86459211515);
    msg.setSource(64078U);
    msg.setSourceEntity(73U);
    msg.setDestination(18206U);
    msg.setDestinationEntity(248U);
    msg.button = 76U;
    msg.value = 151U;

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
    msg.setTimeStamp(0.129178055763);
    msg.setSource(55070U);
    msg.setSourceEntity(185U);
    msg.setDestination(23038U);
    msg.setDestinationEntity(128U);
    msg.button = 165U;
    msg.value = 36U;

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
    msg.setTimeStamp(0.867048013713);
    msg.setSource(55963U);
    msg.setSourceEntity(151U);
    msg.setDestination(19138U);
    msg.setDestinationEntity(116U);
    msg.op = 178U;
    msg.text.assign("HXOZXPJGAYQBGQGVMJWXAPBIVTNXKSLNHRPJCVILTKMZLZVDHGQEUSNEBWVMGFUZGKTYIPZAXTHCNTTMSRIZCOBARLFJEOUPYLEQDOPAIHSSNDPPBECQDOEOWYYJGSIFZHOEQDKXJMWLOARAYBRGHBFFWDDJMELRIACVCNUXLGCUUABSYFKCFTNBKJVOSMVHYCLRWZUNBJWXSWQNXMZKRZRNQHTJQXRGFYHFPA");

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
    msg.setTimeStamp(0.360079698214);
    msg.setSource(49604U);
    msg.setSourceEntity(82U);
    msg.setDestination(56363U);
    msg.setDestinationEntity(99U);
    msg.op = 144U;
    msg.text.assign("RBKHKIDBIBFAXOUBVHUAPGZSAOAEJUWTKATQHBCFJOZXVGDJISIOWLMFOJRUEBOZIQSXXHCSEQWDDFM");

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
    msg.setTimeStamp(0.808329211934);
    msg.setSource(25468U);
    msg.setSourceEntity(114U);
    msg.setDestination(58180U);
    msg.setDestinationEntity(102U);
    msg.op = 78U;
    msg.text.assign("JPJZAXDZAULDBLRCAVKZBNAWHAEYFDFOSNUUXKIHKVMJRCCHSZERCJRVYGZYISVTFQPRVAANZKTBLJCHYMNGWROLXNLKZVDPOJHNPGKTRLWVQXHATKCYZUFUOSFISWIXTSOGZDGJLMMOMJHLTECWIUPCYEPSMPJALMTHOENDNTNQNBPRXXUWLQKGTHPFXWEEYGKDMX");

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
    msg.setTimeStamp(0.0924485580986);
    msg.setSource(35210U);
    msg.setSourceEntity(130U);
    msg.setDestination(1178U);
    msg.setDestinationEntity(81U);
    msg.op = 197U;
    msg.time_remain = 0.247173041095;
    msg.sched_time = 0.168754936216;

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
    msg.setTimeStamp(0.00963627234878);
    msg.setSource(11014U);
    msg.setSourceEntity(251U);
    msg.setDestination(33868U);
    msg.setDestinationEntity(51U);
    msg.op = 99U;
    msg.time_remain = 0.243716226607;
    msg.sched_time = 0.817774051895;

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
    msg.setTimeStamp(0.0357723595815);
    msg.setSource(41606U);
    msg.setSourceEntity(162U);
    msg.setDestination(23271U);
    msg.setDestinationEntity(94U);
    msg.op = 71U;
    msg.time_remain = 0.934735292369;
    msg.sched_time = 0.669634901927;

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
    msg.setTimeStamp(0.840400534762);
    msg.setSource(51523U);
    msg.setSourceEntity(98U);
    msg.setDestination(46742U);
    msg.setDestinationEntity(26U);
    msg.name.assign("QJHUJBBTMDDUUTTLYAZAWCURXPVWBZHBOOSTOEOUJMBWVTYRPGKXIAEZQXILUTBOHKVGQZACFRCYILEUCPSWEKQSYRNDBPNXNICQEOASFDPMUEFZYQUFSDAHEKVDKGJWWHLRQXSTCELKZQLIFRPA");
    msg.op = 105U;
    msg.sched_time = 0.476138705375;

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
    msg.setTimeStamp(0.14410237658);
    msg.setSource(44149U);
    msg.setSourceEntity(81U);
    msg.setDestination(15617U);
    msg.setDestinationEntity(41U);
    msg.name.assign("HIQFKDWLZVYCGEHRHHWQSDVCZSNOQMMXBBDEVWYBEQBTMOHRQHVCXOUFRDXJKWETWNLMFMLJIUYTVCEOMNLQMDVRUSZHYDDVYNZMBFLUBGPUPAAWIZVONSRYGTNUTIBXJXYETJLFIVMTELQNPKCKRXIRLCZKQHDIDIJUWIJONZQUBZJ");
    msg.op = 106U;
    msg.sched_time = 0.0962973999775;

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
    msg.setTimeStamp(0.482676808067);
    msg.setSource(7583U);
    msg.setSourceEntity(162U);
    msg.setDestination(47100U);
    msg.setDestinationEntity(200U);
    msg.name.assign("IZZWJZPDEKSSBCZGVWMGWUVVZGFBSHEFZK");
    msg.op = 225U;
    msg.sched_time = 0.774325097476;

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
    msg.setTimeStamp(0.19031183101);
    msg.setSource(56558U);
    msg.setSourceEntity(191U);
    msg.setDestination(23522U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.784328688836);
    msg.setSource(39577U);
    msg.setSourceEntity(185U);
    msg.setDestination(24084U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.975631216706);
    msg.setSource(16080U);
    msg.setSourceEntity(78U);
    msg.setDestination(59413U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.100907102559);
    msg.setSource(42562U);
    msg.setSourceEntity(194U);
    msg.setDestination(46784U);
    msg.setDestinationEntity(139U);
    msg.name.assign("EVVUVHQYKMOKUQINDYYPOFGBDACBBQQDKHXSYPMOLOPXYYIWHPKOHLEASGZWHPCINCQMVJLBOUMYALFTZHQSLOTQNWNWPUEENEXTHSNKBEXIIXRBCKLDVPDJEDTVZSWCUVMUIZFXTFXABETAHUKLAKRADMXRMIGNKCIUEJ");
    msg.state = 108U;

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
    msg.setTimeStamp(0.754178952037);
    msg.setSource(22999U);
    msg.setSourceEntity(152U);
    msg.setDestination(50475U);
    msg.setDestinationEntity(217U);
    msg.name.assign("QGVSSBPDCOQ");
    msg.state = 254U;

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
    msg.setTimeStamp(0.977989440525);
    msg.setSource(8022U);
    msg.setSourceEntity(195U);
    msg.setDestination(60779U);
    msg.setDestinationEntity(15U);
    msg.name.assign("APYADQOIJVGYUXMKXSUUMJRRBULEZNTCDVNZIIMTIERXFSJQPDXGDFMRLZYQFRVESZILHJCKTVMLFKKERHRFBGVWQMYWKCNXDJPTRNBAVQNBICTZQGXLBTYDHKGEUQHVHJPCHFTKDGIOSNSJXDHAOPLTWUGBVWPAYYFYBPICDVAMINOHQAXZRZCPZBEUOOVECWPTYAWJZALMKFESQGEWEDJOTYXJKFLFMSCWRAUPGHUONQUWZ");
    msg.state = 12U;

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
    msg.setTimeStamp(0.444828878348);
    msg.setSource(62916U);
    msg.setSourceEntity(245U);
    msg.setDestination(54622U);
    msg.setDestinationEntity(64U);
    msg.name.assign("VJURSXFNHIFQFDQKWSMCANLAJKZTEDBOGETQSBYCOLNRMYIKDSJAGICRVJBFSFQJYOPYUWDEHLEVQVYIERVHGQTAZCMBZPDXIWSCPKRYEYZCHOQTEZABYFJOMHMLPA");
    msg.value = 0U;

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
    msg.setTimeStamp(0.620727029541);
    msg.setSource(14595U);
    msg.setSourceEntity(88U);
    msg.setDestination(49976U);
    msg.setDestinationEntity(32U);
    msg.name.assign("JQBMWXMEAFRAIIKKREGHTJFKORDDMIDONTWTCLPVSMOVVWECUQBMRLPFAYQRJYZFBPNEICGJIUENFCFXNRLYMUMCUTFHNDXXQFBIQZWBHWKAEVNVHCKKBZHXRLAFXUJXYBPISYZABWNSZSWYTELPCUKTIDPSSZWCOGOKJYVHNSPWQMJHGOWOXBDKQVQGDOYTADBGCOTVQHIAJLZLYSLPGYVEZTJQLRGAXUAGNPTSDVRJUSNCL");
    msg.value = 232U;

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
    msg.setTimeStamp(0.945951902904);
    msg.setSource(48337U);
    msg.setSourceEntity(36U);
    msg.setDestination(57835U);
    msg.setDestinationEntity(111U);
    msg.name.assign("JFGYJYFKPWHIXRXZJYGZQKQOTFJRDQEKVSOSTNWMQEWGIMYFIMSRUKIMNBAATOAAXPATYRHDYHDVVWLTFJNSQGLJITRNYFHTXVCSEHHUMEMAVMBGVOE");
    msg.value = 90U;

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
    msg.setTimeStamp(0.55185670695);
    msg.setSource(58507U);
    msg.setSourceEntity(157U);
    msg.setDestination(1651U);
    msg.setDestinationEntity(223U);
    msg.name.assign("AOPGIKNIBJNPGLHKJMVWLMLVCRSQEBGDSMFEVTSULODODIXOFTWXDOLPNUNEGIEWMWBUZWPMHFIGDZHDKJLBMORANLVKVHETCPKNHQYXSRKCWCHOUTDRCQJ");

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
    msg.setTimeStamp(0.726138355704);
    msg.setSource(58605U);
    msg.setSourceEntity(96U);
    msg.setDestination(7282U);
    msg.setDestinationEntity(45U);
    msg.name.assign("PTOLUZSCAXDARHIYFJAJVRPOYLHBEXCJMDEZFVWOKFPWUNNNRAPHKCXTRFJVBZHZVGPPCRHJGJAXGAGGKKFFJPBTQJJERLJVLZHNQBWTHMDSIVKVORYC");

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
    msg.setTimeStamp(0.46077828761);
    msg.setSource(21161U);
    msg.setSourceEntity(86U);
    msg.setDestination(57253U);
    msg.setDestinationEntity(154U);
    msg.name.assign("JJRKXISPQGVZCJQVWZUGTOETJKCAZSKMQJHKHCNKMIIHGRKYVMRPWURQSKYBGXXUOOEPHAOSUBMCZODIEOLYIQPAHLWMGHAHSZXLFTBBYXSUFJWDDYKYVWWDULMEBWGVANKNZCGJLOTZFYRZVLTJFYBROFGIVDMEGTERDOFLAQFUENVXDPOUILQCZPQPYIXVBAWETGHSRJBDCMFTTQXZAKFSHANURTNNJSFLCEQSRYLBUIPXNHNWDMIBA");

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
    msg.setTimeStamp(0.550842668974);
    msg.setSource(20999U);
    msg.setSourceEntity(146U);
    msg.setDestination(23551U);
    msg.setDestinationEntity(207U);
    msg.name.assign("RIEBKZCFXLDONURPXKWMBZAIPIAFQWYTUTUYRPHZNVOLGKLEBOAYDFJSXPSKGEMMNEUYIMMVIESYICDJYDZGAKSECGZHREORJOBTGXTMIWJYPQRCGFQHADCCLGMNNFBFWZRQGJXOTPDQGPLLSJKVVZGHQNUMCULIBTDQCJNBIPIOBQQAWZOYZVUHSOUKUQSFSKWSAZLOCSREAJVMEBETJWXHWNHXRFKJNVHMXPBWTKT");
    msg.value = 74U;

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
    msg.setTimeStamp(0.0217973909445);
    msg.setSource(5396U);
    msg.setSourceEntity(130U);
    msg.setDestination(45163U);
    msg.setDestinationEntity(123U);
    msg.name.assign("NWBWPUFPBAMMWHHCOTFLMNCKCPFEJELWKQMYMREYASDRFCNARYVNSERGNDJKFDXXXWWEUHPOBSLCUQIZSPGEAVSVJRXTZEGKLDLBXNFJVAOWITODMZXSORHBIPQHVAULZQCCYVTOIUYOEYPAUTFBUZIILGDKKNTGZYXYRFQXSDJPMRQNHIOCKJDVXBLSPVTKTZFSJUQGWEBTP");
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
    msg.setTimeStamp(0.716309044998);
    msg.setSource(54228U);
    msg.setSourceEntity(241U);
    msg.setDestination(861U);
    msg.setDestinationEntity(115U);
    msg.name.assign("EYHXUNFDOGKVIHPDCRINPTCGHEQKBZKOXPDRPWXXTDUOTDALVFCKFLASIAMSOBVKIEXUMCHONJJNRJWGJMXHDPFBQDMCKFGTJUZHUHAQVKTZVXUWNVZGIWOBINAORJEQNPQDSJGRTEAOJQDEPG");
    msg.value = 58U;

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
    msg.setTimeStamp(0.0146547668438);
    msg.setSource(28108U);
    msg.setSourceEntity(56U);
    msg.setDestination(48479U);
    msg.setDestinationEntity(232U);
    msg.id = 161U;
    msg.period = 241251943U;
    msg.duty_cycle = 1676030257U;

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
    msg.setTimeStamp(0.170248316517);
    msg.setSource(12142U);
    msg.setSourceEntity(4U);
    msg.setDestination(34613U);
    msg.setDestinationEntity(182U);
    msg.id = 134U;
    msg.period = 3095284769U;
    msg.duty_cycle = 3445052931U;

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
    msg.setTimeStamp(0.0198436438676);
    msg.setSource(51826U);
    msg.setSourceEntity(204U);
    msg.setDestination(7536U);
    msg.setDestinationEntity(197U);
    msg.id = 43U;
    msg.period = 2163895818U;
    msg.duty_cycle = 3474172086U;

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
    msg.setTimeStamp(0.167665041559);
    msg.setSource(57909U);
    msg.setSourceEntity(104U);
    msg.setDestination(1230U);
    msg.setDestinationEntity(2U);
    msg.id = 1U;
    msg.period = 1775326454U;
    msg.duty_cycle = 3236112656U;

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
    msg.setTimeStamp(0.431983422149);
    msg.setSource(65328U);
    msg.setSourceEntity(140U);
    msg.setDestination(13805U);
    msg.setDestinationEntity(70U);
    msg.id = 200U;
    msg.period = 2646708581U;
    msg.duty_cycle = 2057482988U;

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
    msg.setTimeStamp(0.638364450312);
    msg.setSource(51228U);
    msg.setSourceEntity(184U);
    msg.setDestination(7170U);
    msg.setDestinationEntity(213U);
    msg.id = 136U;
    msg.period = 1468391188U;
    msg.duty_cycle = 3059919411U;

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
    msg.setTimeStamp(0.849174792156);
    msg.setSource(40013U);
    msg.setSourceEntity(139U);
    msg.setDestination(40829U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.27094347951;
    msg.lon = 0.41662695502;
    msg.height = 0.436381497107;
    msg.x = 0.0381984547359;
    msg.y = 0.529731958417;
    msg.z = 0.0353144190345;
    msg.phi = 0.0742059979207;
    msg.theta = 0.0840083727918;
    msg.psi = 0.0403424368689;
    msg.u = 0.723324559953;
    msg.v = 0.955617990653;
    msg.w = 0.125279033825;
    msg.vx = 0.533843383264;
    msg.vy = 0.188741563777;
    msg.vz = 0.917038375076;
    msg.p = 0.84324822337;
    msg.q = 0.88906725158;
    msg.r = 0.349266733016;
    msg.depth = 0.804944324621;
    msg.alt = 0.121848274612;

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
    msg.setTimeStamp(0.0383674434043);
    msg.setSource(45066U);
    msg.setSourceEntity(56U);
    msg.setDestination(47731U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.306478876033;
    msg.lon = 0.129479107126;
    msg.height = 0.891878125627;
    msg.x = 0.256423369344;
    msg.y = 0.0647844935321;
    msg.z = 0.774192265268;
    msg.phi = 0.102691889403;
    msg.theta = 0.393972178319;
    msg.psi = 0.91927327293;
    msg.u = 0.86095166626;
    msg.v = 0.989748787124;
    msg.w = 0.252036958398;
    msg.vx = 0.402827572137;
    msg.vy = 0.241047393417;
    msg.vz = 0.359105741673;
    msg.p = 0.0961289477808;
    msg.q = 0.905948486798;
    msg.r = 0.909468582055;
    msg.depth = 0.486862223939;
    msg.alt = 0.521217812285;

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
    msg.setTimeStamp(0.218340263882);
    msg.setSource(53742U);
    msg.setSourceEntity(99U);
    msg.setDestination(45348U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.195532508309;
    msg.lon = 0.19727422295;
    msg.height = 0.756562285165;
    msg.x = 0.758651502472;
    msg.y = 0.641851230413;
    msg.z = 0.360424077304;
    msg.phi = 0.746109272868;
    msg.theta = 0.950277204036;
    msg.psi = 0.504884202066;
    msg.u = 0.692019774336;
    msg.v = 0.586380155382;
    msg.w = 0.55431463652;
    msg.vx = 0.292012039407;
    msg.vy = 0.655872322974;
    msg.vz = 0.418050352583;
    msg.p = 0.990618338768;
    msg.q = 0.88290994227;
    msg.r = 0.52435113073;
    msg.depth = 0.758440394044;
    msg.alt = 0.850243622896;

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
    msg.setTimeStamp(0.165237685152);
    msg.setSource(52918U);
    msg.setSourceEntity(20U);
    msg.setDestination(56006U);
    msg.setDestinationEntity(114U);
    msg.x = 0.140747088392;
    msg.y = 0.287359718626;
    msg.z = 0.46240831673;

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
    msg.setTimeStamp(0.913315634849);
    msg.setSource(463U);
    msg.setSourceEntity(123U);
    msg.setDestination(18132U);
    msg.setDestinationEntity(244U);
    msg.x = 0.987682913948;
    msg.y = 0.142795308876;
    msg.z = 0.1212072175;

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
    msg.setTimeStamp(0.832975285567);
    msg.setSource(6156U);
    msg.setSourceEntity(72U);
    msg.setDestination(47369U);
    msg.setDestinationEntity(120U);
    msg.x = 0.873106458312;
    msg.y = 0.710708544725;
    msg.z = 0.0344061502366;

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
    msg.setTimeStamp(0.651127820148);
    msg.setSource(13317U);
    msg.setSourceEntity(136U);
    msg.setDestination(56719U);
    msg.setDestinationEntity(210U);
    msg.value = 0.432263083876;

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
    msg.setTimeStamp(0.187201739751);
    msg.setSource(978U);
    msg.setSourceEntity(65U);
    msg.setDestination(48194U);
    msg.setDestinationEntity(178U);
    msg.value = 0.60175262218;

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
    msg.setTimeStamp(0.273520062644);
    msg.setSource(56121U);
    msg.setSourceEntity(227U);
    msg.setDestination(10107U);
    msg.setDestinationEntity(171U);
    msg.value = 0.19811077915;

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
    msg.setTimeStamp(0.357393102734);
    msg.setSource(17970U);
    msg.setSourceEntity(250U);
    msg.setDestination(52030U);
    msg.setDestinationEntity(139U);
    msg.value = 0.871717493064;

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
    msg.setTimeStamp(0.327716979372);
    msg.setSource(29457U);
    msg.setSourceEntity(69U);
    msg.setDestination(26943U);
    msg.setDestinationEntity(17U);
    msg.value = 0.375762601302;

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
    msg.setTimeStamp(0.537939541242);
    msg.setSource(4223U);
    msg.setSourceEntity(36U);
    msg.setDestination(46663U);
    msg.setDestinationEntity(37U);
    msg.value = 0.761139085223;

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
    msg.setTimeStamp(0.866739845182);
    msg.setSource(36436U);
    msg.setSourceEntity(158U);
    msg.setDestination(32127U);
    msg.setDestinationEntity(198U);
    msg.x = 0.810311626967;
    msg.y = 0.53582586287;
    msg.z = 0.739631663871;
    msg.phi = 0.419250692002;
    msg.theta = 0.814223004991;
    msg.psi = 0.970392577544;
    msg.p = 0.566007437556;
    msg.q = 0.657279687811;
    msg.r = 0.988979278786;
    msg.u = 0.987445814819;
    msg.v = 0.0827241808127;
    msg.w = 0.390830338621;
    msg.bias_psi = 0.156538531995;
    msg.bias_r = 0.726871238029;

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
    msg.setTimeStamp(0.745979310374);
    msg.setSource(60986U);
    msg.setSourceEntity(81U);
    msg.setDestination(18791U);
    msg.setDestinationEntity(24U);
    msg.x = 0.0947671497697;
    msg.y = 0.78993323903;
    msg.z = 0.175278158267;
    msg.phi = 0.339178266353;
    msg.theta = 0.0418563147852;
    msg.psi = 0.360030602773;
    msg.p = 0.665045113254;
    msg.q = 0.266542245888;
    msg.r = 0.883113346829;
    msg.u = 0.806048107321;
    msg.v = 0.933003320233;
    msg.w = 0.961599166479;
    msg.bias_psi = 0.708844550502;
    msg.bias_r = 0.26776820252;

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
    msg.setTimeStamp(0.665630507766);
    msg.setSource(56094U);
    msg.setSourceEntity(81U);
    msg.setDestination(1640U);
    msg.setDestinationEntity(165U);
    msg.x = 0.33944901808;
    msg.y = 0.114465917192;
    msg.z = 0.887931064226;
    msg.phi = 0.763387387413;
    msg.theta = 0.926682644672;
    msg.psi = 0.395737989884;
    msg.p = 0.335703280945;
    msg.q = 0.466647845527;
    msg.r = 0.0744129037406;
    msg.u = 0.456751230691;
    msg.v = 0.433823646195;
    msg.w = 0.526702760804;
    msg.bias_psi = 0.90733222505;
    msg.bias_r = 0.369580659565;

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
    msg.setTimeStamp(0.896697827804);
    msg.setSource(59716U);
    msg.setSourceEntity(40U);
    msg.setDestination(64594U);
    msg.setDestinationEntity(167U);
    msg.bias_psi = 0.253153732021;
    msg.bias_r = 0.6344889378;
    msg.cog = 0.793970369862;
    msg.cyaw = 0.207175888477;
    msg.lbl_rej_level = 0.345436616236;
    msg.gps_rej_level = 0.402849486219;
    msg.custom_x = 0.213355623474;
    msg.custom_y = 0.529532394616;
    msg.custom_z = 0.252326511479;

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
    msg.setTimeStamp(0.944227168874);
    msg.setSource(25189U);
    msg.setSourceEntity(188U);
    msg.setDestination(12278U);
    msg.setDestinationEntity(46U);
    msg.bias_psi = 0.11667471319;
    msg.bias_r = 0.897955564774;
    msg.cog = 0.987105365821;
    msg.cyaw = 0.407955921185;
    msg.lbl_rej_level = 0.599558292612;
    msg.gps_rej_level = 0.178474534629;
    msg.custom_x = 0.462139500277;
    msg.custom_y = 0.44323381295;
    msg.custom_z = 0.824181196628;

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
    msg.setTimeStamp(0.873745206028);
    msg.setSource(11945U);
    msg.setSourceEntity(124U);
    msg.setDestination(41937U);
    msg.setDestinationEntity(25U);
    msg.bias_psi = 0.568582005016;
    msg.bias_r = 0.020808906314;
    msg.cog = 0.621507274488;
    msg.cyaw = 0.534712222338;
    msg.lbl_rej_level = 0.367419174386;
    msg.gps_rej_level = 0.782492403833;
    msg.custom_x = 0.133221336028;
    msg.custom_y = 0.266290661944;
    msg.custom_z = 0.299073979147;

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
    msg.setTimeStamp(0.632042493616);
    msg.setSource(52374U);
    msg.setSourceEntity(17U);
    msg.setDestination(1027U);
    msg.setDestinationEntity(160U);
    msg.utc_time = 0.00845363003643;
    msg.reason = 73U;

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
    msg.setTimeStamp(0.946114207697);
    msg.setSource(62384U);
    msg.setSourceEntity(97U);
    msg.setDestination(33791U);
    msg.setDestinationEntity(17U);
    msg.utc_time = 0.579517344295;
    msg.reason = 16U;

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
    msg.setTimeStamp(0.0959529990907);
    msg.setSource(48086U);
    msg.setSourceEntity(94U);
    msg.setDestination(63348U);
    msg.setDestinationEntity(61U);
    msg.utc_time = 0.566604611568;
    msg.reason = 98U;

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
    msg.setTimeStamp(0.18621659316);
    msg.setSource(52729U);
    msg.setSourceEntity(47U);
    msg.setDestination(16537U);
    msg.setDestinationEntity(104U);
    msg.id = 162U;
    msg.range = 0.108450366799;
    msg.acceptance = 233U;

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
    msg.setTimeStamp(0.174699639762);
    msg.setSource(4516U);
    msg.setSourceEntity(201U);
    msg.setDestination(64649U);
    msg.setDestinationEntity(80U);
    msg.id = 53U;
    msg.range = 0.842052562503;
    msg.acceptance = 202U;

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
    msg.setTimeStamp(0.670755286987);
    msg.setSource(10272U);
    msg.setSourceEntity(23U);
    msg.setDestination(7930U);
    msg.setDestinationEntity(43U);
    msg.id = 146U;
    msg.range = 0.444021797065;
    msg.acceptance = 131U;

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
    msg.setTimeStamp(0.680231879114);
    msg.setSource(7624U);
    msg.setSourceEntity(134U);
    msg.setDestination(35439U);
    msg.setDestinationEntity(20U);
    msg.type = 171U;
    msg.reason = 76U;
    msg.value = 0.599303591054;
    msg.timestep = 0.696742330662;

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
    msg.setTimeStamp(0.873593894806);
    msg.setSource(3339U);
    msg.setSourceEntity(154U);
    msg.setDestination(24536U);
    msg.setDestinationEntity(189U);
    msg.type = 245U;
    msg.reason = 88U;
    msg.value = 0.762192807607;
    msg.timestep = 0.756300968783;

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
    msg.setTimeStamp(0.0268562976146);
    msg.setSource(29732U);
    msg.setSourceEntity(227U);
    msg.setDestination(5469U);
    msg.setDestinationEntity(12U);
    msg.type = 79U;
    msg.reason = 143U;
    msg.value = 0.254266920992;
    msg.timestep = 0.836379319284;

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
    msg.setTimeStamp(0.342420337874);
    msg.setSource(2980U);
    msg.setSourceEntity(236U);
    msg.setDestination(6274U);
    msg.setDestinationEntity(118U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RYDXUEUOXZMMAEESFFBNWFZTMQVTIWJSGLLYRYYRJEPLRWSBJRCGANGZQZVQPTDXVCOJMPJMYANGKMZVHOMWHUBBWKFSFIQBQKXIAHUONDBXYDDNTRNBJWGGPNVOZGLTAQAVSYECEGLKRQIXOEOIFUABGSUCDJUEHPLAWXVLRVSPLCPDICMHKUYIMHTRISJSXDPIVHXWBLJOKBJHTYQFZT");
    tmp_msg_0.lat = 0.772134078705;
    tmp_msg_0.lon = 0.196656752411;
    tmp_msg_0.depth = 0.536787664245;
    tmp_msg_0.query_channel = 218U;
    tmp_msg_0.reply_channel = 131U;
    tmp_msg_0.transponder_delay = 75U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.384886154114;
    msg.y = 0.625961559253;
    msg.var_x = 0.225897014411;
    msg.var_y = 0.947456290063;
    msg.distance = 0.815320486583;

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
    msg.setTimeStamp(0.534921888626);
    msg.setSource(57289U);
    msg.setSourceEntity(162U);
    msg.setDestination(41002U);
    msg.setDestinationEntity(41U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XRRNEJLOJMMWTDIKCNNJAQXPADSGGIUFUWNMTFSWOFAEXVHTSYSHEXYZUPANAMFKYAZIPRQPEMGVYERFCIEFGYFAMSISECGBPXJOUWLNLYLSAIAH");
    tmp_msg_0.lat = 0.254663530157;
    tmp_msg_0.lon = 0.0810950693091;
    tmp_msg_0.depth = 0.949930473418;
    tmp_msg_0.query_channel = 17U;
    tmp_msg_0.reply_channel = 21U;
    tmp_msg_0.transponder_delay = 155U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0620329950958;
    msg.y = 0.806726715278;
    msg.var_x = 0.0787540647333;
    msg.var_y = 0.497960702249;
    msg.distance = 0.561363523765;

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
    msg.setTimeStamp(0.593845567337);
    msg.setSource(8690U);
    msg.setSourceEntity(88U);
    msg.setDestination(34952U);
    msg.setDestinationEntity(244U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FVVEVTGIPKSQHEJQRRFKOENGYVMAQMOBUQUKKDYHYATLZNPZJFMOZEPDQNSDLGSGOZWFVCAEYRGVIQAXKRKROHHSIWIMXPZMYYEDLXLMRHNUDYHJOJTPCAFNKEBUWSIDZKVCJVWRWKCDQ");
    tmp_msg_0.lat = 0.0605323156536;
    tmp_msg_0.lon = 0.998813133666;
    tmp_msg_0.depth = 0.49176351904;
    tmp_msg_0.query_channel = 213U;
    tmp_msg_0.reply_channel = 163U;
    tmp_msg_0.transponder_delay = 184U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.462907983501;
    msg.y = 0.378179256509;
    msg.var_x = 0.473005342841;
    msg.var_y = 0.432927711571;
    msg.distance = 0.56113010358;

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
    msg.setTimeStamp(0.491580159863);
    msg.setSource(33991U);
    msg.setSourceEntity(5U);
    msg.setDestination(54243U);
    msg.setDestinationEntity(228U);
    msg.state = 76U;

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
    msg.setTimeStamp(0.825490140483);
    msg.setSource(26927U);
    msg.setSourceEntity(49U);
    msg.setDestination(4658U);
    msg.setDestinationEntity(243U);
    msg.state = 160U;

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
    msg.setTimeStamp(0.275819064638);
    msg.setSource(40927U);
    msg.setSourceEntity(246U);
    msg.setDestination(10028U);
    msg.setDestinationEntity(217U);
    msg.state = 187U;

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
    msg.setTimeStamp(0.609203472021);
    msg.setSource(29796U);
    msg.setSourceEntity(140U);
    msg.setDestination(5536U);
    msg.setDestinationEntity(231U);
    msg.x = 0.403286979289;
    msg.y = 0.288368625716;
    msg.z = 0.10072731641;

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
    msg.setTimeStamp(0.844370577371);
    msg.setSource(6681U);
    msg.setSourceEntity(57U);
    msg.setDestination(46293U);
    msg.setDestinationEntity(165U);
    msg.x = 0.57347548177;
    msg.y = 0.852769491363;
    msg.z = 0.94342748;

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
    msg.setTimeStamp(0.945180249813);
    msg.setSource(31520U);
    msg.setSourceEntity(236U);
    msg.setDestination(23544U);
    msg.setDestinationEntity(89U);
    msg.x = 0.903388881316;
    msg.y = 0.971357813706;
    msg.z = 0.722753342305;

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
    msg.setTimeStamp(0.0345520184746);
    msg.setSource(21066U);
    msg.setSourceEntity(239U);
    msg.setDestination(51478U);
    msg.setDestinationEntity(99U);
    msg.value = 0.450334560622;

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
    msg.setTimeStamp(0.563531637451);
    msg.setSource(21965U);
    msg.setSourceEntity(37U);
    msg.setDestination(24600U);
    msg.setDestinationEntity(51U);
    msg.value = 0.817289174581;

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
    msg.setTimeStamp(0.142019252744);
    msg.setSource(44386U);
    msg.setSourceEntity(190U);
    msg.setDestination(26267U);
    msg.setDestinationEntity(113U);
    msg.value = 0.968966388224;

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
    msg.setTimeStamp(0.803981981612);
    msg.setSource(37771U);
    msg.setSourceEntity(173U);
    msg.setDestination(47309U);
    msg.setDestinationEntity(254U);
    msg.value = 0.762728704665;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.316754096492);
    msg.setSource(26030U);
    msg.setSourceEntity(148U);
    msg.setDestination(48621U);
    msg.setDestinationEntity(175U);
    msg.value = 0.945959735216;
    msg.z_units = 210U;

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
    msg.setTimeStamp(0.327563695541);
    msg.setSource(61870U);
    msg.setSourceEntity(52U);
    msg.setDestination(55940U);
    msg.setDestinationEntity(109U);
    msg.value = 0.882889534737;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.202120016877);
    msg.setSource(23262U);
    msg.setSourceEntity(250U);
    msg.setDestination(57388U);
    msg.setDestinationEntity(209U);
    msg.value = 0.457458342404;
    msg.speed_units = 140U;

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
    msg.setTimeStamp(0.169686673986);
    msg.setSource(18444U);
    msg.setSourceEntity(93U);
    msg.setDestination(47052U);
    msg.setDestinationEntity(36U);
    msg.value = 0.248110748603;
    msg.speed_units = 187U;

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
    msg.setTimeStamp(0.613504679546);
    msg.setSource(57710U);
    msg.setSourceEntity(138U);
    msg.setDestination(2493U);
    msg.setDestinationEntity(203U);
    msg.value = 0.979679755387;
    msg.speed_units = 149U;

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
    msg.setTimeStamp(0.596205031538);
    msg.setSource(49837U);
    msg.setSourceEntity(161U);
    msg.setDestination(40336U);
    msg.setDestinationEntity(55U);
    msg.value = 0.548347624697;

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
    msg.setTimeStamp(0.221852143602);
    msg.setSource(25148U);
    msg.setSourceEntity(34U);
    msg.setDestination(48889U);
    msg.setDestinationEntity(29U);
    msg.value = 0.241019213671;

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
    msg.setTimeStamp(0.0103678314571);
    msg.setSource(53429U);
    msg.setSourceEntity(113U);
    msg.setDestination(54886U);
    msg.setDestinationEntity(240U);
    msg.value = 0.300188819221;

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
    msg.setTimeStamp(0.0762371191626);
    msg.setSource(33035U);
    msg.setSourceEntity(46U);
    msg.setDestination(41155U);
    msg.setDestinationEntity(206U);
    msg.value = 0.645961736238;

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
    msg.setTimeStamp(0.942675627128);
    msg.setSource(54926U);
    msg.setSourceEntity(18U);
    msg.setDestination(63018U);
    msg.setDestinationEntity(148U);
    msg.value = 0.638389082983;

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
    msg.setTimeStamp(0.0838749701032);
    msg.setSource(6551U);
    msg.setSourceEntity(44U);
    msg.setDestination(41370U);
    msg.setDestinationEntity(200U);
    msg.value = 0.445595018602;

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
    msg.setTimeStamp(0.734489954047);
    msg.setSource(18127U);
    msg.setSourceEntity(51U);
    msg.setDestination(57924U);
    msg.setDestinationEntity(58U);
    msg.value = 0.960583076373;

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
    msg.setTimeStamp(0.586005187058);
    msg.setSource(28032U);
    msg.setSourceEntity(13U);
    msg.setDestination(25762U);
    msg.setDestinationEntity(204U);
    msg.value = 0.495641118211;

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
    msg.setTimeStamp(0.157847178611);
    msg.setSource(57211U);
    msg.setSourceEntity(170U);
    msg.setDestination(52293U);
    msg.setDestinationEntity(176U);
    msg.value = 0.989659732972;

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
    msg.setTimeStamp(0.67956927148);
    msg.setSource(37132U);
    msg.setSourceEntity(83U);
    msg.setDestination(3457U);
    msg.setDestinationEntity(183U);
    msg.path_ref = 1784782508U;
    msg.start_lat = 0.723668071909;
    msg.start_lon = 0.402926452818;
    msg.start_z = 0.256047685053;
    msg.start_z_units = 74U;
    msg.end_lat = 0.199040294177;
    msg.end_lon = 0.959469816761;
    msg.end_z = 0.661172274789;
    msg.end_z_units = 91U;
    msg.speed = 0.382244283627;
    msg.speed_units = 190U;
    msg.lradius = 0.0934923190986;
    msg.flags = 218U;

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
    msg.setTimeStamp(0.699880963641);
    msg.setSource(41934U);
    msg.setSourceEntity(227U);
    msg.setDestination(7382U);
    msg.setDestinationEntity(116U);
    msg.path_ref = 742838859U;
    msg.start_lat = 0.26035833932;
    msg.start_lon = 0.768859777657;
    msg.start_z = 0.408143413948;
    msg.start_z_units = 197U;
    msg.end_lat = 0.702349758204;
    msg.end_lon = 0.320934265833;
    msg.end_z = 0.258061883354;
    msg.end_z_units = 106U;
    msg.speed = 0.115255868247;
    msg.speed_units = 165U;
    msg.lradius = 0.233199954022;
    msg.flags = 108U;

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
    msg.setTimeStamp(0.608492982698);
    msg.setSource(23852U);
    msg.setSourceEntity(99U);
    msg.setDestination(60202U);
    msg.setDestinationEntity(197U);
    msg.path_ref = 967672934U;
    msg.start_lat = 0.828732061433;
    msg.start_lon = 0.12196912239;
    msg.start_z = 0.424982418782;
    msg.start_z_units = 52U;
    msg.end_lat = 0.981624914563;
    msg.end_lon = 0.716907730664;
    msg.end_z = 0.0712009599386;
    msg.end_z_units = 207U;
    msg.speed = 0.283507687967;
    msg.speed_units = 149U;
    msg.lradius = 0.0877047863456;
    msg.flags = 0U;

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
    msg.setTimeStamp(0.68546621864);
    msg.setSource(2918U);
    msg.setSourceEntity(129U);
    msg.setDestination(47483U);
    msg.setDestinationEntity(75U);
    msg.x = 0.633853040743;
    msg.y = 0.931663860103;
    msg.z = 0.799386185137;
    msg.k = 0.242505728554;
    msg.m = 0.780604031436;
    msg.n = 0.91923736315;
    msg.flags = 45U;

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
    msg.setTimeStamp(0.902881956976);
    msg.setSource(10096U);
    msg.setSourceEntity(146U);
    msg.setDestination(63194U);
    msg.setDestinationEntity(14U);
    msg.x = 0.331817280431;
    msg.y = 0.135760170268;
    msg.z = 0.485770661355;
    msg.k = 0.940815068897;
    msg.m = 0.25903691722;
    msg.n = 0.190320948791;
    msg.flags = 2U;

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
    msg.setTimeStamp(0.964967226546);
    msg.setSource(49664U);
    msg.setSourceEntity(127U);
    msg.setDestination(32745U);
    msg.setDestinationEntity(254U);
    msg.x = 0.24031844668;
    msg.y = 0.986449763838;
    msg.z = 0.00914347861918;
    msg.k = 0.658659289844;
    msg.m = 0.276891647501;
    msg.n = 0.765842196557;
    msg.flags = 214U;

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
    msg.setTimeStamp(0.340803629192);
    msg.setSource(5173U);
    msg.setSourceEntity(234U);
    msg.setDestination(13673U);
    msg.setDestinationEntity(75U);
    msg.value = 0.691893616316;

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
    msg.setTimeStamp(0.970172673829);
    msg.setSource(33648U);
    msg.setSourceEntity(185U);
    msg.setDestination(20236U);
    msg.setDestinationEntity(202U);
    msg.value = 0.398015984241;

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
    msg.setTimeStamp(0.290070794406);
    msg.setSource(21735U);
    msg.setSourceEntity(188U);
    msg.setDestination(54853U);
    msg.setDestinationEntity(147U);
    msg.value = 0.341068473546;

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
    msg.setTimeStamp(0.950534546873);
    msg.setSource(29684U);
    msg.setSourceEntity(128U);
    msg.setDestination(45466U);
    msg.setDestinationEntity(216U);
    msg.u = 0.54390532281;
    msg.v = 0.223920186196;
    msg.w = 0.337754674531;
    msg.p = 0.922956593228;
    msg.q = 0.860476027985;
    msg.r = 0.374149401781;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.567918850835);
    msg.setSource(45819U);
    msg.setSourceEntity(239U);
    msg.setDestination(25678U);
    msg.setDestinationEntity(76U);
    msg.u = 0.294717540257;
    msg.v = 0.0836210699444;
    msg.w = 0.0115916515981;
    msg.p = 0.481158122372;
    msg.q = 0.491219244874;
    msg.r = 0.366339858259;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.734865874074);
    msg.setSource(30516U);
    msg.setSourceEntity(37U);
    msg.setDestination(30977U);
    msg.setDestinationEntity(28U);
    msg.u = 0.720446777808;
    msg.v = 0.663820699844;
    msg.w = 0.484663087043;
    msg.p = 0.63739192157;
    msg.q = 0.766127612754;
    msg.r = 0.87545482737;
    msg.flags = 68U;

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
    msg.setTimeStamp(0.139693513771);
    msg.setSource(49092U);
    msg.setSourceEntity(33U);
    msg.setDestination(12196U);
    msg.setDestinationEntity(51U);
    msg.path_ref = 2142015283U;
    msg.start_lat = 0.150527592526;
    msg.start_lon = 0.290122231108;
    msg.start_z = 0.25153247552;
    msg.start_z_units = 109U;
    msg.end_lat = 0.645075813857;
    msg.end_lon = 0.734209017425;
    msg.end_z = 0.606787315998;
    msg.end_z_units = 138U;
    msg.lradius = 0.373611935385;
    msg.flags = 36U;
    msg.x = 0.703065346711;
    msg.y = 0.661151391301;
    msg.z = 0.949573646003;
    msg.vx = 0.796605234342;
    msg.vy = 0.715572275323;
    msg.vz = 0.966914550049;
    msg.course_error = 0.960977008301;
    msg.eta = 17825U;

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
    msg.setTimeStamp(0.5377238478);
    msg.setSource(57485U);
    msg.setSourceEntity(106U);
    msg.setDestination(2600U);
    msg.setDestinationEntity(87U);
    msg.path_ref = 3965067208U;
    msg.start_lat = 0.788314121969;
    msg.start_lon = 0.843963798492;
    msg.start_z = 0.185173535859;
    msg.start_z_units = 246U;
    msg.end_lat = 0.125767823921;
    msg.end_lon = 0.883139437337;
    msg.end_z = 0.941058768744;
    msg.end_z_units = 134U;
    msg.lradius = 0.245838698401;
    msg.flags = 192U;
    msg.x = 0.747724993505;
    msg.y = 0.89934802266;
    msg.z = 0.0181732879;
    msg.vx = 0.588605382726;
    msg.vy = 0.0649161837861;
    msg.vz = 0.0635012654266;
    msg.course_error = 0.807104686014;
    msg.eta = 11629U;

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
    msg.setTimeStamp(0.71294398052);
    msg.setSource(45672U);
    msg.setSourceEntity(16U);
    msg.setDestination(45155U);
    msg.setDestinationEntity(230U);
    msg.path_ref = 3409775227U;
    msg.start_lat = 0.292837927111;
    msg.start_lon = 0.73980581034;
    msg.start_z = 0.146974991858;
    msg.start_z_units = 7U;
    msg.end_lat = 0.321620600971;
    msg.end_lon = 0.604810664291;
    msg.end_z = 0.158304285015;
    msg.end_z_units = 50U;
    msg.lradius = 0.528690334322;
    msg.flags = 242U;
    msg.x = 0.904495493055;
    msg.y = 0.636964012115;
    msg.z = 0.13943185513;
    msg.vx = 0.99323807801;
    msg.vy = 0.0868412310966;
    msg.vz = 0.723395933786;
    msg.course_error = 0.81708066849;
    msg.eta = 63964U;

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
    msg.setTimeStamp(0.718093370275);
    msg.setSource(32418U);
    msg.setSourceEntity(65U);
    msg.setDestination(29510U);
    msg.setDestinationEntity(40U);
    msg.k = 0.587073452623;
    msg.m = 0.590731447576;
    msg.n = 0.935984498655;

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
    msg.setTimeStamp(0.566160742362);
    msg.setSource(26667U);
    msg.setSourceEntity(50U);
    msg.setDestination(10316U);
    msg.setDestinationEntity(61U);
    msg.k = 0.24364759321;
    msg.m = 0.577459942309;
    msg.n = 0.554095029459;

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
    msg.setTimeStamp(0.571263353479);
    msg.setSource(21688U);
    msg.setSourceEntity(80U);
    msg.setDestination(15720U);
    msg.setDestinationEntity(160U);
    msg.k = 0.355325056505;
    msg.m = 0.644501674905;
    msg.n = 0.156071478232;

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
    msg.setTimeStamp(0.457409616886);
    msg.setSource(47491U);
    msg.setSourceEntity(185U);
    msg.setDestination(23466U);
    msg.setDestinationEntity(202U);
    msg.p = 0.54831448048;
    msg.i = 0.2233581564;
    msg.d = 0.320240587841;
    msg.a = 0.941863412948;

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
    msg.setTimeStamp(0.607606069584);
    msg.setSource(33118U);
    msg.setSourceEntity(97U);
    msg.setDestination(9795U);
    msg.setDestinationEntity(102U);
    msg.p = 0.0604431907584;
    msg.i = 0.992522955959;
    msg.d = 0.308100797051;
    msg.a = 0.623867255171;

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
    msg.setTimeStamp(0.293791500742);
    msg.setSource(2902U);
    msg.setSourceEntity(181U);
    msg.setDestination(28640U);
    msg.setDestinationEntity(189U);
    msg.p = 0.0277140543888;
    msg.i = 0.368809163618;
    msg.d = 0.974394526441;
    msg.a = 0.0737379826119;

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
    msg.setTimeStamp(0.959455186534);
    msg.setSource(3460U);
    msg.setSourceEntity(163U);
    msg.setDestination(44273U);
    msg.setDestinationEntity(95U);
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
    msg.setTimeStamp(0.0469032296854);
    msg.setSource(60605U);
    msg.setSourceEntity(47U);
    msg.setDestination(16035U);
    msg.setDestinationEntity(238U);
    msg.op = 167U;

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
    msg.setTimeStamp(0.201040385679);
    msg.setSource(31038U);
    msg.setSourceEntity(119U);
    msg.setDestination(22647U);
    msg.setDestinationEntity(0U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.30587434004);
    msg.setSource(6978U);
    msg.setSourceEntity(107U);
    msg.setDestination(15517U);
    msg.setDestinationEntity(69U);
    msg.timeout = 16117U;
    msg.lat = 0.373996810128;
    msg.lon = 0.651319976573;
    msg.z = 0.0582665713203;
    msg.z_units = 137U;
    msg.speed = 0.577797030535;
    msg.speed_units = 29U;
    msg.roll = 0.886159332025;
    msg.pitch = 0.489818612335;
    msg.yaw = 0.0587961067194;
    msg.custom.assign("RXYZNUYGNBDGVLQBYBRLHILKQQLNTWFGMAVGKCIZWJAPRLACJQSCXFCBLBPTASXYOOCCSMSDYDHZGBFUJKUWKCCOZDPLHUTPOWOXAYDVBNLZSGI");

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
    msg.setTimeStamp(0.813480475173);
    msg.setSource(7897U);
    msg.setSourceEntity(199U);
    msg.setDestination(17253U);
    msg.setDestinationEntity(124U);
    msg.timeout = 45935U;
    msg.lat = 0.950757765279;
    msg.lon = 0.71545305803;
    msg.z = 0.191157235588;
    msg.z_units = 30U;
    msg.speed = 0.535576413606;
    msg.speed_units = 232U;
    msg.roll = 0.383210977937;
    msg.pitch = 0.229177318997;
    msg.yaw = 0.782385535578;
    msg.custom.assign("VJWJLLTEKEQKKTZAXGCEFNQEWHGGVHZQWJIXGNIYEDZTSOPKRXYCEJOHLLOHBZRFYMISYQWTWBDUPOGRDRCSAT");

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
    msg.setTimeStamp(0.317365999527);
    msg.setSource(42375U);
    msg.setSourceEntity(6U);
    msg.setDestination(31494U);
    msg.setDestinationEntity(132U);
    msg.timeout = 56662U;
    msg.lat = 0.514916919232;
    msg.lon = 0.0193979907893;
    msg.z = 0.146816527166;
    msg.z_units = 146U;
    msg.speed = 0.905296425665;
    msg.speed_units = 145U;
    msg.roll = 0.419743682224;
    msg.pitch = 0.694990824131;
    msg.yaw = 0.407915110717;
    msg.custom.assign("DSPSDUQXVPRWOMEUDVAFEOKNBKJIEOXATAHWINOGYMEQECTVRLXIQHJWVFEQNGCJUUCIBSLONZIJJQTANSTLBPRYWVYPVDZZTQUFHTBCODZWXCSLKBHZHHQNXASYXPNDFWKLMQSTBEGMTVLMFARACKNEGQZUKGFXYUGGOXLXUAVSRMLFUINRTBBOFDADCCZMZEPEJBYYZLZLPRHYUSFKOIYYRGIGDJIPWBXDMRC");

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
    msg.setTimeStamp(0.076239994923);
    msg.setSource(16633U);
    msg.setSourceEntity(104U);
    msg.setDestination(52433U);
    msg.setDestinationEntity(27U);
    msg.timeout = 33400U;
    msg.lat = 0.618493493823;
    msg.lon = 0.0346768912328;
    msg.z = 0.192821878995;
    msg.z_units = 83U;
    msg.speed = 0.424134592259;
    msg.speed_units = 7U;
    msg.duration = 48341U;
    msg.radius = 0.345968000129;
    msg.flags = 136U;
    msg.custom.assign("VMVFOLBHNMTSYPTQSKTKFGXQBXDWAMDVMZYUIPVOJTIRXEPIORGUODWUZFIXKNMSXPEOQLAUBRZAJCOUQMWEXDUHGTSROEACPZHZSPQANENRCCKCLMMYNDIEHKKDHGPFGQPEQYWZZGNMHVUWPTZUYTVXLZFULUFAJSPLCQFEHKXFCBKYBCOJVCBHSNTBWHVGRVYARJRAWKJLGVGEALWKNQNI");

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
    msg.setTimeStamp(0.514957515208);
    msg.setSource(31931U);
    msg.setSourceEntity(20U);
    msg.setDestination(50506U);
    msg.setDestinationEntity(152U);
    msg.timeout = 6284U;
    msg.lat = 0.867147996801;
    msg.lon = 0.494732344561;
    msg.z = 0.421108164796;
    msg.z_units = 204U;
    msg.speed = 0.153153743158;
    msg.speed_units = 234U;
    msg.duration = 22396U;
    msg.radius = 0.849524992776;
    msg.flags = 199U;
    msg.custom.assign("QUWVPQFQASXNFYRDQNTMJLRWVSGRLFINYLPZQTWMZYEQUFWWVXPIZJPTUKOBGOWGRSTZDJNMKJHYKNARKFZEXFBXCSLAJJCPMQZVEZCWCACKGAROBQGMKLIYFRSYNZIBIBOOYWAGEZHOWSXOXTTGQ");

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
    msg.setTimeStamp(0.541673542028);
    msg.setSource(20641U);
    msg.setSourceEntity(209U);
    msg.setDestination(33379U);
    msg.setDestinationEntity(220U);
    msg.timeout = 12963U;
    msg.lat = 0.97709476127;
    msg.lon = 0.538515439554;
    msg.z = 0.949238619638;
    msg.z_units = 88U;
    msg.speed = 0.427733121803;
    msg.speed_units = 246U;
    msg.duration = 4621U;
    msg.radius = 0.320341308349;
    msg.flags = 125U;
    msg.custom.assign("CAMQBCIWTXKWEGTLJZMXXZYEYFMSUFCYQZFBRHXSNROCYGJEJLPTEDFCDDKGTCNKZUGRHVKALUUKRNBAQWRQDOCEDOIAAOGSWHAPGMWSZIXVNHLNWBJAQUQLBJVVUJETZQHZLEXGMHHNKPZRRISVDINYAJIFSWSXDKUPLYYTIAMLUPFBQLMOROXTFVJIKCPYDOIGU");

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
    msg.setTimeStamp(0.0824510642814);
    msg.setSource(54176U);
    msg.setSourceEntity(86U);
    msg.setDestination(3804U);
    msg.setDestinationEntity(114U);
    msg.custom.assign("PBVIDWRVLZDYCFAGJGZJFLEEMOUYUESGQOSJQLUMCJPQOPHEDDZOMXXMZAIOJARHRPHFIPYBKTVNIMMYUGBSSNAZSPVKHHQTFXKLKAXTGVZFGSBNOWPQJECVLWXQMQMUUSSRBCYCSKAFPCTDSTYAAOXBMDZWRLTOQXKULZWNWGETWQRNHIIWONVHELKIPTWIUNDKFVHZNZOJHRJGEJDBXBCNMEFXLXBKTVAAQECRGCPJFYUWIYNIYR");

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
    msg.setTimeStamp(0.192886805629);
    msg.setSource(56806U);
    msg.setSourceEntity(38U);
    msg.setDestination(61673U);
    msg.setDestinationEntity(103U);
    msg.custom.assign("CTOXFFSAJUYUEEUPHNBQNSZTZBKSAEDRWOCNTXLVCFMONOBKMSBTEAEPVYDSWPFMIRARNWXFVAHUGYIBPRGOEPKYMPIFHUJVHRDCZCTWIWOMTBMCVYYGQQVXIIZTMDBJYSCSICPIGUDDMNCQMLDZZEEK");

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
    msg.setTimeStamp(0.552695640785);
    msg.setSource(30438U);
    msg.setSourceEntity(97U);
    msg.setDestination(51914U);
    msg.setDestinationEntity(14U);
    msg.custom.assign("CUVCSTJWYYHNMFOLVBEKHWPDHSKNEBVQZTGDEWYUFZZTELTMORJFJLSKWZRABTZPUUFCZQRYXMWFEJGGPDOGCYSSLGIFUXL");

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
    msg.setTimeStamp(0.598819884442);
    msg.setSource(6140U);
    msg.setSourceEntity(62U);
    msg.setDestination(62714U);
    msg.setDestinationEntity(24U);
    msg.timeout = 64325U;
    msg.lat = 0.815440452504;
    msg.lon = 0.944245857321;
    msg.z = 0.296314607576;
    msg.z_units = 174U;
    msg.duration = 2565U;
    msg.speed = 0.834501553288;
    msg.speed_units = 249U;
    msg.type = 4U;
    msg.radius = 0.246030344544;
    msg.length = 0.482146804327;
    msg.bearing = 0.436269350269;
    msg.direction = 106U;
    msg.custom.assign("XTEWATPSQBOSUIAXMCRUDBAHENHRGEDPGXLJPMWVELTPXZVTSWIFDHRCMCHKIENROCHJKQTNTQQMOUCLFIXGQSMROJMSZFUJSSWYQAEUUUJWXOIDXKSXDZZHZNTRDFBBBBBLKMYKNGPYVCAOLUZNKVDKYZOJZQGLQJYMULPLGBYUCYPFGLCVERATWHYITLWVCNTSWMYXYNMFQK");

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
    msg.setTimeStamp(0.148695326402);
    msg.setSource(36629U);
    msg.setSourceEntity(53U);
    msg.setDestination(45524U);
    msg.setDestinationEntity(23U);
    msg.timeout = 35790U;
    msg.lat = 0.87905966229;
    msg.lon = 0.635912303964;
    msg.z = 0.189183754058;
    msg.z_units = 61U;
    msg.duration = 42895U;
    msg.speed = 0.400902602586;
    msg.speed_units = 214U;
    msg.type = 212U;
    msg.radius = 0.981085690202;
    msg.length = 0.0321935752668;
    msg.bearing = 0.341217808534;
    msg.direction = 39U;
    msg.custom.assign("IALNRAMRDGTHXZHLU");

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
    msg.setTimeStamp(0.927654027481);
    msg.setSource(19426U);
    msg.setSourceEntity(179U);
    msg.setDestination(58496U);
    msg.setDestinationEntity(58U);
    msg.timeout = 15016U;
    msg.lat = 0.276528742206;
    msg.lon = 0.90280294885;
    msg.z = 0.00022104003707;
    msg.z_units = 249U;
    msg.duration = 18320U;
    msg.speed = 0.613707923891;
    msg.speed_units = 60U;
    msg.type = 142U;
    msg.radius = 0.840936008867;
    msg.length = 0.265819541683;
    msg.bearing = 0.0780272978022;
    msg.direction = 96U;
    msg.custom.assign("COJUGWXTMOALZORPWPPLQCESUWJMXLJSQTBTVIFGYFDHEBCTBQFWJIXZISCIPLCPYRLTYUDAVDEOCREJNAJOVPNNGKMTHQPENUHSHIVBTKUZQQVIYXBXKRUKYLZHJSFODEMHLRYIARBH");

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
    msg.setTimeStamp(0.482423849266);
    msg.setSource(12471U);
    msg.setSourceEntity(168U);
    msg.setDestination(21995U);
    msg.setDestinationEntity(138U);
    msg.duration = 62900U;
    msg.custom.assign("AKSDIFGHKGEMUPGZHMMIFLJQBTIR");

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
    msg.setTimeStamp(0.234315837578);
    msg.setSource(53509U);
    msg.setSourceEntity(158U);
    msg.setDestination(40233U);
    msg.setDestinationEntity(237U);
    msg.duration = 7518U;
    msg.custom.assign("SIPNKDGIABLSOEJQCXIWYORBXTWZSVBQQXEMNIWPBUUWZCTQSMSAQFBRYERTNJGAPZIQNLWZFMTWYFXTBOYGFHHPLWJGXHKKQOOMPVYZPUIGFNYONZLBSRRMDDXHRKMSXXQULKZFEGPVMZTCVVADGUEAHFARONJSJYULHGHMYRDOAYELAJZDUCCYRTXFRFKVVIEQBK");

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
    msg.setTimeStamp(0.984447882867);
    msg.setSource(55540U);
    msg.setSourceEntity(245U);
    msg.setDestination(51826U);
    msg.setDestinationEntity(182U);
    msg.duration = 26404U;
    msg.custom.assign("NMBOXWWVYJFJVMUOOLWGSWNZJHFCAKKZMOACRFDHRWDHPPERPHST");

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
    msg.setTimeStamp(0.714732798278);
    msg.setSource(28003U);
    msg.setSourceEntity(123U);
    msg.setDestination(37755U);
    msg.setDestinationEntity(252U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.968821130775;
    msg.control.set(tmp_msg_0);
    msg.duration = 13919U;
    msg.custom.assign("RQCHAAKGSPIBGILRSPRV");

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
    msg.setTimeStamp(0.600483656427);
    msg.setSource(37786U);
    msg.setSourceEntity(138U);
    msg.setDestination(34531U);
    msg.setDestinationEntity(172U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.303828217241;
    tmp_msg_0.speed_units = 103U;
    msg.control.set(tmp_msg_0);
    msg.duration = 32530U;
    msg.custom.assign("RZXXPFWRWNMACJRNTIHUPTAOXNVAGTXOQPIJFOJVUOAOMFDZWXNBCFMPWARSGSWMKKIAJQUEXLMSBEZFOHTRNFTHSLVXHGDVHKSAZJECGRJOQWRGH");

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
    msg.setTimeStamp(0.144864992093);
    msg.setSource(34939U);
    msg.setSourceEntity(187U);
    msg.setDestination(11761U);
    msg.setDestinationEntity(41U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.418593566256;
    tmp_msg_0.speed_units = 226U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11042U;
    msg.custom.assign("VXXWGLTQAKKDLAIRUMAPDIDLLITNTXXDPSMC");

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
    msg.setTimeStamp(0.13147056896);
    msg.setSource(51742U);
    msg.setSourceEntity(240U);
    msg.setDestination(23971U);
    msg.setDestinationEntity(101U);
    msg.timeout = 47104U;
    msg.lat = 0.904607971514;
    msg.lon = 0.867811436402;
    msg.z = 0.899813606378;
    msg.z_units = 70U;
    msg.speed = 0.736231021596;
    msg.speed_units = 242U;
    msg.bearing = 0.549914329193;
    msg.cross_angle = 0.627110756526;
    msg.width = 0.405665953124;
    msg.length = 0.748471563598;
    msg.hstep = 0.255104137278;
    msg.coff = 47U;
    msg.alternation = 157U;
    msg.flags = 211U;
    msg.custom.assign("WUKVRPKKZISRYZDZHIZBQMKG");

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
    msg.setTimeStamp(0.361089625532);
    msg.setSource(7116U);
    msg.setSourceEntity(84U);
    msg.setDestination(57534U);
    msg.setDestinationEntity(128U);
    msg.timeout = 37865U;
    msg.lat = 0.600166328134;
    msg.lon = 0.527776181575;
    msg.z = 0.964705697498;
    msg.z_units = 171U;
    msg.speed = 0.753985656902;
    msg.speed_units = 28U;
    msg.bearing = 0.0974405825976;
    msg.cross_angle = 0.667339179368;
    msg.width = 0.0321624541646;
    msg.length = 0.316315806021;
    msg.hstep = 0.950031046888;
    msg.coff = 141U;
    msg.alternation = 67U;
    msg.flags = 115U;
    msg.custom.assign("WBSYIKBGZPSDNKZKJPTNIQZMDLTHGVWGMFDVHURERKYWWPTKBCSYCSHUFTDCIMXZERJLNQRNRJPNWHWSPCHPBJJAPAYSIHKIGOKMPJQDXEDFKDCRLIJUSEXRIQOKMIWDUSXYZLXXAAQWTCRIOOMVVZMYYUOOQKDVAGQLZZAPSBMAGMCYBJTBNLX");

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
    msg.setTimeStamp(0.780505353798);
    msg.setSource(54007U);
    msg.setSourceEntity(32U);
    msg.setDestination(4645U);
    msg.setDestinationEntity(229U);
    msg.timeout = 5912U;
    msg.lat = 0.0167400446599;
    msg.lon = 0.838366531713;
    msg.z = 0.381799069741;
    msg.z_units = 158U;
    msg.speed = 0.288308272335;
    msg.speed_units = 25U;
    msg.bearing = 0.72717081348;
    msg.cross_angle = 0.689385111111;
    msg.width = 0.839700387024;
    msg.length = 0.241740080259;
    msg.hstep = 0.960641279074;
    msg.coff = 48U;
    msg.alternation = 160U;
    msg.flags = 156U;
    msg.custom.assign("CTLAVTHQZIEQPKBJXECZPQILCVSEJDONGNYIXOLDAKDQJGHRGZPTSHQUNSITMWWTRIRRLN");

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
    msg.setTimeStamp(0.392261780575);
    msg.setSource(46966U);
    msg.setSourceEntity(209U);
    msg.setDestination(58542U);
    msg.setDestinationEntity(53U);
    msg.timeout = 62382U;
    msg.lat = 0.331061035172;
    msg.lon = 0.166969160279;
    msg.z = 0.710979975757;
    msg.z_units = 137U;
    msg.speed = 0.191397767167;
    msg.speed_units = 244U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.601784149989;
    tmp_msg_0.y = 0.59059620264;
    tmp_msg_0.z = 0.409541641697;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VYMAXIZSDUPCHSMVNSZCTPPQYNCFLMCWSOYHMJAJRPIZGAQJHGOSVRCLGHQWELAQSURHQTFNGWHEPTEN");

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
    msg.setTimeStamp(0.152351216865);
    msg.setSource(47267U);
    msg.setSourceEntity(56U);
    msg.setDestination(25574U);
    msg.setDestinationEntity(121U);
    msg.timeout = 45173U;
    msg.lat = 0.940648992927;
    msg.lon = 0.0432460806008;
    msg.z = 0.8012867511;
    msg.z_units = 96U;
    msg.speed = 0.908907233185;
    msg.speed_units = 39U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.961484543327;
    tmp_msg_0.y = 0.293957471681;
    tmp_msg_0.z = 0.683660354308;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RQUFUPXEWDTROMBXAQVKPRKJYQWESFUSFYFHPIFZZBOSLHZNHLTNXJVPVWQKHUXOLGJDINHQUCAHCANKPTAMLNMFGOBMJXSVJUQTKLYCERYLASESROVFZTHCZOBLITRJIKDTVXAKDFZIJZNWHNGDEMLIVYMBVKRYWBLOCDQSENGJUYGSDDRCCMIHGTBZCIOQAWIURGZVOWGIXUTPOWPCQBM");

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
    msg.setTimeStamp(0.49522598538);
    msg.setSource(11345U);
    msg.setSourceEntity(194U);
    msg.setDestination(31817U);
    msg.setDestinationEntity(33U);
    msg.timeout = 23065U;
    msg.lat = 0.32768409083;
    msg.lon = 0.984698373106;
    msg.z = 0.534936755418;
    msg.z_units = 217U;
    msg.speed = 0.9775118266;
    msg.speed_units = 134U;
    msg.custom.assign("TSNIJPKRZKFAIVSNILIMHPVZPZAMJDLYFFGLUEVHQCYGIUXCAGJZYGDMFANMBSZCOQVVQRQUPWTLIHLIUJECGKFTAQNHRLKPZTNAEGOTXLECOWTGYIYVSTCYAUZVDDAWHOJRIQOEQPDKLPWMBCVOWHUANKWHECOJDBBZMDGKJRXRJXPSZVPFAURWRUNXYSXRBSWFTWBQCQNTYUXYIZM");

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
    msg.setTimeStamp(0.511820648889);
    msg.setSource(6013U);
    msg.setSourceEntity(186U);
    msg.setDestination(27077U);
    msg.setDestinationEntity(165U);
    msg.x = 0.827304317397;
    msg.y = 0.355108951622;
    msg.z = 0.49623298259;

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
    msg.setTimeStamp(0.438064200704);
    msg.setSource(42906U);
    msg.setSourceEntity(97U);
    msg.setDestination(52448U);
    msg.setDestinationEntity(10U);
    msg.x = 0.461243369005;
    msg.y = 0.579365021939;
    msg.z = 0.252460743827;

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
    msg.setTimeStamp(0.259781585269);
    msg.setSource(32704U);
    msg.setSourceEntity(120U);
    msg.setDestination(2544U);
    msg.setDestinationEntity(58U);
    msg.x = 0.126866322438;
    msg.y = 0.957563747714;
    msg.z = 0.744056769435;

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
    msg.setTimeStamp(0.159403047571);
    msg.setSource(51803U);
    msg.setSourceEntity(102U);
    msg.setDestination(45296U);
    msg.setDestinationEntity(191U);
    msg.timeout = 39115U;
    msg.lat = 0.105708882448;
    msg.lon = 0.826073911034;
    msg.z = 0.935651715335;
    msg.z_units = 178U;
    msg.amplitude = 0.680151919766;
    msg.pitch = 0.386685605128;
    msg.speed = 0.00119809732198;
    msg.speed_units = 120U;
    msg.custom.assign("VRRWWMUHIATXHUSUQGRBEJUKFTWSNEBCMGQCNFVSOQA");

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
    msg.setTimeStamp(0.138200621633);
    msg.setSource(15343U);
    msg.setSourceEntity(92U);
    msg.setDestination(54254U);
    msg.setDestinationEntity(56U);
    msg.timeout = 42641U;
    msg.lat = 0.821969541193;
    msg.lon = 0.51223963041;
    msg.z = 0.0798031724828;
    msg.z_units = 246U;
    msg.amplitude = 0.966525774658;
    msg.pitch = 0.625638135175;
    msg.speed = 0.880198537533;
    msg.speed_units = 113U;
    msg.custom.assign("SSAEXPIXLAQIMTMOTIRUWYPUJSCQIKQJVCQVZAOKKRZZEZRSVPHBOGWIBONGEAEAZLNXGNQVLTDFCTDKRKXSIKNJTPJGLANSFDHOZXYNMCPEQFHQINIRMTFHRRVDVPTCAJXCHVSUQWBJGHDESOYYZLXOWYITTRWYNYGUZUBHWBZWEYLQBCYLKJPEHFKJRU");

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
    msg.setTimeStamp(0.60308983139);
    msg.setSource(31737U);
    msg.setSourceEntity(185U);
    msg.setDestination(65480U);
    msg.setDestinationEntity(111U);
    msg.timeout = 65149U;
    msg.lat = 0.521550189511;
    msg.lon = 0.439426782963;
    msg.z = 0.612466444916;
    msg.z_units = 158U;
    msg.amplitude = 0.542071375142;
    msg.pitch = 0.485517783341;
    msg.speed = 0.351988021311;
    msg.speed_units = 5U;
    msg.custom.assign("PWNGLEVMDWPMWKBZXJBMHZHCRVDIISCUUFLBEDVMJRFSAQKAUUYCFTGPZNIWQEJOSBYIYOPDFCIKGSJPKOKBOCXZPWIEXLPTADQHEKQNVMWXDJACVGTFZSZYMBIOJOAUISNXLVBEDLVTWKRAGHXHULPWLLXC");

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
    msg.setTimeStamp(0.235725294569);
    msg.setSource(51285U);
    msg.setSourceEntity(135U);
    msg.setDestination(29083U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.111857148187);
    msg.setSource(29071U);
    msg.setSourceEntity(99U);
    msg.setDestination(10038U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.916717823273);
    msg.setSource(49533U);
    msg.setSourceEntity(48U);
    msg.setDestination(13273U);
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
    msg.setTimeStamp(0.290509812841);
    msg.setSource(36476U);
    msg.setSourceEntity(234U);
    msg.setDestination(13300U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.863095807235;
    msg.lon = 0.756194927477;
    msg.z = 0.163992205357;
    msg.z_units = 31U;
    msg.radius = 0.786360346697;
    msg.duration = 54429U;
    msg.speed = 0.530790171497;
    msg.speed_units = 206U;
    msg.custom.assign("BFISBBUAHBJBFJTFFOPFUGTDPBIUCXJMZMAEUOLVVIOBXJVWCHMTCTLSHEWEHAXTSRUHO");

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
    msg.setTimeStamp(0.284052028852);
    msg.setSource(30598U);
    msg.setSourceEntity(222U);
    msg.setDestination(39289U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.393180653062;
    msg.lon = 0.952632575749;
    msg.z = 0.818284263074;
    msg.z_units = 140U;
    msg.radius = 0.633116893473;
    msg.duration = 20905U;
    msg.speed = 0.913668981236;
    msg.speed_units = 236U;
    msg.custom.assign("PXHNHJVUOCOOUJNNDVEXGMNDIGLZGTHJWAMXFAHTTRDTOYJWEKBQNSPEWDLVXYUKIKGEQPMXABQHSJPQADYBFQCRLPXKMOXSEFIIXNYTOIBMJWQMDQIAAOXCEAQUEYOGSIUHTKKGTHRDQSDSMDEOUVYCKNJLWBGRLOCYQHLWWSRVFZGZVZBVUMRYFEVNJADVYAPSWVLWRLGEBFMNIGJLISUZFZFCZHCNBKLPW");

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
    msg.setTimeStamp(0.106370520719);
    msg.setSource(18709U);
    msg.setSourceEntity(163U);
    msg.setDestination(63796U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.423766407409;
    msg.lon = 0.568226673616;
    msg.z = 0.0931282202092;
    msg.z_units = 252U;
    msg.radius = 0.439652597959;
    msg.duration = 9504U;
    msg.speed = 0.510460246742;
    msg.speed_units = 145U;
    msg.custom.assign("KENJVWOCWIOAJWHUEGTYDULJQQBNNHFQNXVUURSIDKJVGPFFHPVSFNOPIRHOQUZLWPKVQZWLWICRDKSIHJAFGCNLZLTAITTJWWKYEYRKPCAUKEYLQNBFYXOLBMSRUA");

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
    msg.setTimeStamp(0.376514535585);
    msg.setSource(40971U);
    msg.setSourceEntity(0U);
    msg.setDestination(6266U);
    msg.setDestinationEntity(147U);
    msg.timeout = 43421U;
    msg.flags = 222U;
    msg.lat = 0.707721432863;
    msg.lon = 0.712739458116;
    msg.start_z = 0.64994543095;
    msg.start_z_units = 190U;
    msg.end_z = 0.0443827548469;
    msg.end_z_units = 254U;
    msg.radius = 0.71236399973;
    msg.speed = 0.391484446803;
    msg.speed_units = 199U;
    msg.custom.assign("MCQXOYCASHVBWZWNRTBPEPBYHQKCDDQOZUGFTIPLRPTGCYGHCNOWWLZLDLHVXLDOXEDKLAFPJXINHMUBQRNWMGCOKAAGRBRXIIURXRKSONGOFAHMQXNBYGGTSKTOFCCJITJAIEEHQFFTDJAWSJLJURWRVKHMGU");

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
    msg.setTimeStamp(0.233128258662);
    msg.setSource(19329U);
    msg.setSourceEntity(2U);
    msg.setDestination(30251U);
    msg.setDestinationEntity(172U);
    msg.timeout = 47725U;
    msg.flags = 117U;
    msg.lat = 0.754477062284;
    msg.lon = 0.369906323718;
    msg.start_z = 0.766945614574;
    msg.start_z_units = 232U;
    msg.end_z = 0.0463844738054;
    msg.end_z_units = 17U;
    msg.radius = 0.905649337409;
    msg.speed = 0.343504966604;
    msg.speed_units = 185U;
    msg.custom.assign("FJGAXISAJVHDBQLTZFBPROAOXDMS");

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
    msg.setTimeStamp(0.615780801158);
    msg.setSource(57359U);
    msg.setSourceEntity(44U);
    msg.setDestination(21328U);
    msg.setDestinationEntity(4U);
    msg.timeout = 47205U;
    msg.flags = 211U;
    msg.lat = 0.429403004168;
    msg.lon = 0.0370193455574;
    msg.start_z = 0.375529662102;
    msg.start_z_units = 102U;
    msg.end_z = 0.0223944508144;
    msg.end_z_units = 72U;
    msg.radius = 0.452820200436;
    msg.speed = 0.786413789559;
    msg.speed_units = 89U;
    msg.custom.assign("LZTERVQSABNZONNYKKJEHMXUVLGGTJAHFSFSUOMPSSOYVSJUZVOAWWDXJXJYDAUXLFWAXFK");

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
    msg.setTimeStamp(0.975611234867);
    msg.setSource(47277U);
    msg.setSourceEntity(23U);
    msg.setDestination(17018U);
    msg.setDestinationEntity(229U);
    msg.timeout = 21815U;
    msg.lat = 0.606472365762;
    msg.lon = 0.320137740207;
    msg.z = 0.469657786242;
    msg.z_units = 80U;
    msg.speed = 0.0674808947614;
    msg.speed_units = 164U;
    msg.custom.assign("JKRCAABUDNVWBNHEEKDNXTVHKFYWDVHQMQVLWOGWXJBFSEURMMKBWDXBJFTMGIYDJACIGLAITCTURZJZXZGFEDIYZNAESVUULSHUCQCXRTKHSEKETCHTDNRFDKYLIITLAQHEPYXRXVYGVMFYQQTVPJOXLYCOAPJXNOZODMMTZMHOVLHFNXSSECKNURABWYMZYDJHSM");

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
    msg.setTimeStamp(0.569206100069);
    msg.setSource(52570U);
    msg.setSourceEntity(63U);
    msg.setDestination(44163U);
    msg.setDestinationEntity(22U);
    msg.timeout = 36936U;
    msg.lat = 0.811044283805;
    msg.lon = 0.21041188868;
    msg.z = 0.809831402271;
    msg.z_units = 247U;
    msg.speed = 0.73887262954;
    msg.speed_units = 80U;
    msg.custom.assign("MBGEGKYNXWYSCIRUZKCJYXENYDVFTNWHQKKUIBBGYDFJXKGZJUBQLTEGRQHOOTMOFPYXEPGFWFURHXMVSWVWBSVUEQEDOQPLCENBOZJIQDIWPIRCOZOJAVVIDAIMKVPWHUZ");

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
    msg.setTimeStamp(0.882394953516);
    msg.setSource(12594U);
    msg.setSourceEntity(145U);
    msg.setDestination(36152U);
    msg.setDestinationEntity(126U);
    msg.timeout = 58039U;
    msg.lat = 0.445249886238;
    msg.lon = 0.639196807911;
    msg.z = 0.973875882749;
    msg.z_units = 92U;
    msg.speed = 0.300017761227;
    msg.speed_units = 99U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.166277578604;
    tmp_msg_0.y = 0.876061471273;
    tmp_msg_0.z = 0.556765140823;
    tmp_msg_0.t = 0.728402896534;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MDXGJLDWBWJWKLNKCGPUJSESXJODWZPELMIYDTSCUYOOQYTAYYGMLQQRMQEEPAIWTSYOECKKRXTHUNZYGMCTU");

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
    msg.setTimeStamp(0.0223609819932);
    msg.setSource(42890U);
    msg.setSourceEntity(167U);
    msg.setDestination(51350U);
    msg.setDestinationEntity(37U);
    msg.x = 0.0711897494245;
    msg.y = 0.61492597589;
    msg.z = 0.61489683399;
    msg.t = 0.254958587066;

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
    msg.setTimeStamp(0.505971018802);
    msg.setSource(36492U);
    msg.setSourceEntity(214U);
    msg.setDestination(60651U);
    msg.setDestinationEntity(229U);
    msg.x = 0.633271261076;
    msg.y = 0.359447059529;
    msg.z = 0.378408370082;
    msg.t = 0.545989346973;

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
    msg.setTimeStamp(0.829301220331);
    msg.setSource(50291U);
    msg.setSourceEntity(167U);
    msg.setDestination(41310U);
    msg.setDestinationEntity(24U);
    msg.x = 0.00350699648744;
    msg.y = 0.470021855191;
    msg.z = 0.899051618571;
    msg.t = 0.170335184511;

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
    msg.setTimeStamp(0.894736684221);
    msg.setSource(39316U);
    msg.setSourceEntity(163U);
    msg.setDestination(41204U);
    msg.setDestinationEntity(167U);
    msg.timeout = 41897U;
    msg.name.assign("DBGPTAFQSUJXOCPDXRUGHJYGXEWQKOL");
    msg.custom.assign("ORGNJADLAVLMOERTJUTBVFYDSQKCZVRVJKQWOWHEHUDCZRFNRRIOGUKZPLHUYCHKQLUCSOSUHBYCPWQWQWEAGHIGGHVJFZISZBZTNXTMIFDYMJXKLXPOCJCNEPGETSUYSDXEANXLODAZ");

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
    msg.setTimeStamp(0.233828481369);
    msg.setSource(19227U);
    msg.setSourceEntity(81U);
    msg.setDestination(49059U);
    msg.setDestinationEntity(180U);
    msg.timeout = 38714U;
    msg.name.assign("WIMAEXYDHZSHBRUDMXOWDOGFVZKSZMVCTNNMRWJCCSKJHZRMGVUSIDBWXVLATNZCUFLOZGGDFXLRMCVSWSWXOWJIGDKTKEJELAZETNSFKTQQTLWFICAFRECPOGLLYOHGZMLHQHZJYGDDIESE");
    msg.custom.assign("TAXUVXRVLCKHTVHDRDKWNIUALUECTQQETAFVMEXEBURVUIZLJECBJXNYMAPRGJKAUSSSNDTFZBYQSWCGHCZYOYFEIRSBSDNGZILKDYPDXRJPWBVHZUPMHJOWGKUETMOLRHMIGXCFHQUZDTHVGBTAPILMNMINDGVFPKNAAVMOYZXOQW");

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
    msg.setTimeStamp(0.397521213206);
    msg.setSource(50320U);
    msg.setSourceEntity(231U);
    msg.setDestination(59414U);
    msg.setDestinationEntity(233U);
    msg.timeout = 29082U;
    msg.name.assign("MDZXDYSUKUEXGIXDKEUDUPFSUYZUJIDOLOIHTWIZNFCCHTXIOVGZIMGYNAXJPQJANMQEHLHMNFWVLRRCETPSNKEWBPDMVAMQCQVTBJHUHBONAVPUFYCGRKJSYJLQLOPKROFZDMXEIDFOGTHNODOXTXWKOPFGSJMCSNARDQQZTXVFTABAJWRYCSSKRUFKPWRYLPZVKZKTYENMEBWIRAQCZPTAGB");
    msg.custom.assign("DIGPIGBWBNPCDSTLFEVGIJMSSJROOQAPAXLHEVYYSL");

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
    msg.setTimeStamp(0.79781115119);
    msg.setSource(22328U);
    msg.setSourceEntity(178U);
    msg.setDestination(46560U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.996779726937;
    msg.lon = 0.10049275178;
    msg.z = 0.132348428299;
    msg.z_units = 175U;
    msg.speed = 0.973498084278;
    msg.speed_units = 231U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.954291333289;
    tmp_msg_0.y = 0.468464282052;
    tmp_msg_0.z = 0.117660766392;
    tmp_msg_0.t = 0.0495803818282;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 34077U;
    tmp_msg_1.off_x = 0.568478644689;
    tmp_msg_1.off_y = 0.0388914559241;
    tmp_msg_1.off_z = 0.303544824698;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.546168117835;
    msg.custom.assign("QJUAESOTDFSYFUGBHWVJUESBJFTNOZQXESWCFLCFNXRDLCMFMURJYQYGWRXJUCDRDEAVFPIOUYQDDHSDQLQUMXHDJRCXONVM");

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
    msg.setTimeStamp(0.27337238463);
    msg.setSource(33301U);
    msg.setSourceEntity(242U);
    msg.setDestination(26870U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.029075974552;
    msg.lon = 0.40611775154;
    msg.z = 0.0344629713629;
    msg.z_units = 187U;
    msg.speed = 0.0662958442415;
    msg.speed_units = 121U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.406948228177;
    tmp_msg_0.y = 0.551908472239;
    tmp_msg_0.z = 0.568591733393;
    tmp_msg_0.t = 0.236160042347;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 7608U;
    tmp_msg_1.off_x = 0.684103271661;
    tmp_msg_1.off_y = 0.348810770255;
    tmp_msg_1.off_z = 0.132892644607;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0314075927485;
    msg.custom.assign("QSOULZMXTJHKIVCGOQHWJTANEXUCWPPTTFLLMLOVLPD");

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
    msg.setTimeStamp(0.70514296091);
    msg.setSource(8590U);
    msg.setSourceEntity(114U);
    msg.setDestination(49071U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.741034119197;
    msg.lon = 0.727843518701;
    msg.z = 0.481502297597;
    msg.z_units = 33U;
    msg.speed = 0.561171635967;
    msg.speed_units = 52U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.617911666988;
    tmp_msg_0.y = 0.665834641889;
    tmp_msg_0.z = 0.252908022786;
    tmp_msg_0.t = 0.780805253054;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.473501429008;
    msg.custom.assign("WVTTPLYOVANDGRCIOLLZKSBDCXYDHXVNESUNTHCRCWUHURLRCUWGJDOISNZBRIPGQBNFLLPJZDXTRPTEELFDPBOBZHHYQZWHTIANNRXAAXEKVDQFYZJVF");

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
    msg.setTimeStamp(0.291903540374);
    msg.setSource(14641U);
    msg.setSourceEntity(88U);
    msg.setDestination(51725U);
    msg.setDestinationEntity(125U);
    msg.vid = 26312U;
    msg.off_x = 0.408088740019;
    msg.off_y = 0.676245284792;
    msg.off_z = 0.91785430934;

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
    msg.setTimeStamp(0.598599498809);
    msg.setSource(15965U);
    msg.setSourceEntity(203U);
    msg.setDestination(13589U);
    msg.setDestinationEntity(24U);
    msg.vid = 10109U;
    msg.off_x = 0.604960641767;
    msg.off_y = 0.342975704691;
    msg.off_z = 0.670199384332;

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
    msg.setTimeStamp(0.552240772904);
    msg.setSource(22185U);
    msg.setSourceEntity(10U);
    msg.setDestination(40727U);
    msg.setDestinationEntity(250U);
    msg.vid = 52716U;
    msg.off_x = 0.585580686169;
    msg.off_y = 0.919731372245;
    msg.off_z = 0.615650726287;

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
    msg.setTimeStamp(0.224667269587);
    msg.setSource(57181U);
    msg.setSourceEntity(229U);
    msg.setDestination(16750U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.316370761249);
    msg.setSource(2732U);
    msg.setSourceEntity(166U);
    msg.setDestination(52232U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.926341989786);
    msg.setSource(30263U);
    msg.setSourceEntity(107U);
    msg.setDestination(2347U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.993437144851);
    msg.setSource(53829U);
    msg.setSourceEntity(250U);
    msg.setDestination(39821U);
    msg.setDestinationEntity(224U);
    msg.mid = 13455U;

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
    msg.setTimeStamp(0.419907967427);
    msg.setSource(28698U);
    msg.setSourceEntity(2U);
    msg.setDestination(32131U);
    msg.setDestinationEntity(200U);
    msg.mid = 11991U;

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
    msg.setTimeStamp(0.858992277142);
    msg.setSource(10053U);
    msg.setSourceEntity(209U);
    msg.setDestination(47828U);
    msg.setDestinationEntity(99U);
    msg.mid = 27736U;

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
    msg.setTimeStamp(0.346943460602);
    msg.setSource(35042U);
    msg.setSourceEntity(72U);
    msg.setDestination(4885U);
    msg.setDestinationEntity(145U);
    msg.state = 153U;
    msg.eta = 23762U;
    msg.info.assign("FAZJJKIGLULUBERBPFMGUZFWXARQRYFWQBKDLHKRQFROTGFYMSIDOEHHVXCOYBJVMOPOEWGGADFHSEFHXZEPUWDTLNOVSLMXPUKWICHKCYZCICNNTMYFIRPWHFBJDT");

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
    msg.setTimeStamp(0.900599071699);
    msg.setSource(44642U);
    msg.setSourceEntity(153U);
    msg.setDestination(62014U);
    msg.setDestinationEntity(12U);
    msg.state = 235U;
    msg.eta = 55214U;
    msg.info.assign("OQUMDJLTYPBHCDZUEMIOEALLAWYVRJFSQKGVZMTKPDZUBJXXKNMMOXSSGPDOADLAIWPKQDGQHTXQCQQVMCWZBYFJIUIGPHFMSMQNIBTEXXWIVKBLFJFGVVJVLXGSRRUPJHBEX");

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
    msg.setTimeStamp(0.52768708729);
    msg.setSource(45053U);
    msg.setSourceEntity(150U);
    msg.setDestination(32514U);
    msg.setDestinationEntity(78U);
    msg.state = 206U;
    msg.eta = 65086U;
    msg.info.assign("NIMNDSTEDEBDKWQDHDMTIWRPHJXOPTATWBUEUNZXJHSNGYEGKKFLCBATCWJQVEMUQGJKACBZFVABKGHXRNYGCXMPEOGQHXWDVYFDGSFJLMGPJZKRSKYAKWBHN");

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
    msg.setTimeStamp(0.823246963756);
    msg.setSource(18200U);
    msg.setSourceEntity(208U);
    msg.setDestination(52915U);
    msg.setDestinationEntity(254U);
    msg.system = 64199U;
    msg.duration = 10228U;
    msg.speed = 0.930937732363;
    msg.speed_units = 47U;
    msg.x = 0.983436948365;
    msg.y = 0.191487440879;
    msg.z = 0.361410632691;
    msg.z_units = 23U;

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
    msg.setTimeStamp(0.915211217155);
    msg.setSource(61745U);
    msg.setSourceEntity(153U);
    msg.setDestination(17817U);
    msg.setDestinationEntity(216U);
    msg.system = 48277U;
    msg.duration = 30446U;
    msg.speed = 0.711984371267;
    msg.speed_units = 206U;
    msg.x = 0.621809321533;
    msg.y = 0.362169108763;
    msg.z = 0.0337878520447;
    msg.z_units = 66U;

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
    msg.setTimeStamp(0.713993266786);
    msg.setSource(22203U);
    msg.setSourceEntity(98U);
    msg.setDestination(17424U);
    msg.setDestinationEntity(199U);
    msg.system = 36134U;
    msg.duration = 2934U;
    msg.speed = 0.848672196344;
    msg.speed_units = 102U;
    msg.x = 0.794625073393;
    msg.y = 0.0877149088904;
    msg.z = 0.560461806579;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.22953217619);
    msg.setSource(59328U);
    msg.setSourceEntity(5U);
    msg.setDestination(59483U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.403395541425;
    msg.lon = 0.263447791766;
    msg.speed = 0.972220438403;
    msg.speed_units = 79U;
    msg.duration = 44899U;
    msg.sys_a = 1420U;
    msg.sys_b = 58132U;
    msg.move_threshold = 0.714833301483;

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
    msg.setTimeStamp(0.545995653181);
    msg.setSource(12773U);
    msg.setSourceEntity(193U);
    msg.setDestination(9096U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.921907110345;
    msg.lon = 0.855637100816;
    msg.speed = 0.449361173155;
    msg.speed_units = 169U;
    msg.duration = 32828U;
    msg.sys_a = 64U;
    msg.sys_b = 14156U;
    msg.move_threshold = 0.0760508934352;

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
    msg.setTimeStamp(0.0867525714685);
    msg.setSource(27683U);
    msg.setSourceEntity(227U);
    msg.setDestination(43005U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.868494451481;
    msg.lon = 0.114990361748;
    msg.speed = 0.878637659868;
    msg.speed_units = 226U;
    msg.duration = 25445U;
    msg.sys_a = 46279U;
    msg.sys_b = 38461U;
    msg.move_threshold = 0.102582461359;

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
    msg.setTimeStamp(0.259058748134);
    msg.setSource(11575U);
    msg.setSourceEntity(169U);
    msg.setDestination(30489U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.822711447707;
    msg.lon = 0.302906405237;
    msg.z = 0.661905142949;
    msg.z_units = 187U;
    msg.speed = 0.104356474143;
    msg.speed_units = 229U;
    msg.custom.assign("ATSCABPYNTYULJTOUASHFANVLHGZGWYVBXCQDEGRIHYTGPMDOXGHXMMCLBZFMIBHSAOCFSPXXJCWLSUNCCTKDOOWNLKZUF");

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
    msg.setTimeStamp(0.178091852822);
    msg.setSource(590U);
    msg.setSourceEntity(21U);
    msg.setDestination(42093U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.517278023096;
    msg.lon = 0.741037007411;
    msg.z = 0.21986423035;
    msg.z_units = 34U;
    msg.speed = 0.660006769719;
    msg.speed_units = 244U;
    msg.custom.assign("JKNCADLXERMBQPOXGPJIEXVRFAXWUIHJTIBPVROTOSDIGTAZTQUETURQLSFWZFRRZGVAOYJVK");

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
    msg.setTimeStamp(0.762493876234);
    msg.setSource(34746U);
    msg.setSourceEntity(174U);
    msg.setDestination(29133U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.588123683705;
    msg.lon = 0.767240564023;
    msg.z = 0.523691557032;
    msg.z_units = 248U;
    msg.speed = 0.427905125445;
    msg.speed_units = 179U;
    msg.custom.assign("KCXAGGMJZUPTUSGMQAWFOZOZYQMYBHVLIVDEUDCIMSGKBQPJDUEJDLYRNRBIXQDIZHIGQEFJXTK");

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
    msg.setTimeStamp(0.459833261226);
    msg.setSource(2152U);
    msg.setSourceEntity(133U);
    msg.setDestination(38032U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.20767667646;
    msg.lon = 0.750920247168;

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
    msg.setTimeStamp(0.353055386443);
    msg.setSource(2133U);
    msg.setSourceEntity(240U);
    msg.setDestination(18184U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.728052572346;
    msg.lon = 0.512530190796;

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
    msg.setTimeStamp(0.00852677189849);
    msg.setSource(27336U);
    msg.setSourceEntity(214U);
    msg.setDestination(3007U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.829494799591;
    msg.lon = 0.279583066019;

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
    msg.setTimeStamp(0.0220092372306);
    msg.setSource(31441U);
    msg.setSourceEntity(146U);
    msg.setDestination(33684U);
    msg.setDestinationEntity(219U);
    msg.timeout = 11018U;
    msg.lat = 0.809705732;
    msg.lon = 0.481725416742;
    msg.z = 0.886650754617;
    msg.z_units = 47U;
    msg.pitch = 0.0554931360759;
    msg.amplitude = 0.285479556486;
    msg.duration = 9169U;
    msg.speed = 0.87729351413;
    msg.speed_units = 44U;
    msg.radius = 0.113526822168;
    msg.direction = 112U;
    msg.custom.assign("GKYLERZVBWNZMDXXRSCBEKVENFPHMXMCSRTEITBQSLOFJUXQGNDYQNHINVJZGVEQQYBHJCJYJDKYWKSBZLVMAIDICOLCZTWISNPHTACWSRWLJALTVEXQWDNNUCVGUOHUPMGFFBZOKWQFBVKGAJFRNCWSFVUVPEUYQCOIMWSSKFUPTRHPWQAOEPUTKLTYLXDXAJZDZINMCIAPJBPEHXRULX");

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
    msg.setTimeStamp(0.60860203497);
    msg.setSource(35300U);
    msg.setSourceEntity(31U);
    msg.setDestination(8841U);
    msg.setDestinationEntity(143U);
    msg.timeout = 35601U;
    msg.lat = 0.30239544685;
    msg.lon = 0.300769144726;
    msg.z = 0.552681683905;
    msg.z_units = 113U;
    msg.pitch = 0.569803461464;
    msg.amplitude = 0.078299066903;
    msg.duration = 4410U;
    msg.speed = 0.478083065979;
    msg.speed_units = 112U;
    msg.radius = 0.773855110312;
    msg.direction = 100U;
    msg.custom.assign("IEGRNTHXDZUPCAJUIWYIBUPOVSXSADZNFMQKYNBDHHUHTHZTLIIDRWLCBJXENTQQHOYPKTMOCRQMMXHNQBSVZWSGWPAEDZIXLHBQUEFCPOFJXVZNVVLKGHJARPKCGNXNBVZBCHSBF");

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
    msg.setTimeStamp(0.886928307982);
    msg.setSource(37848U);
    msg.setSourceEntity(141U);
    msg.setDestination(59222U);
    msg.setDestinationEntity(148U);
    msg.timeout = 4909U;
    msg.lat = 0.0569332964973;
    msg.lon = 0.400729148137;
    msg.z = 0.544457842793;
    msg.z_units = 151U;
    msg.pitch = 0.133141258756;
    msg.amplitude = 0.139562869552;
    msg.duration = 20191U;
    msg.speed = 0.57470866753;
    msg.speed_units = 210U;
    msg.radius = 0.923084905017;
    msg.direction = 18U;
    msg.custom.assign("MGAFNFNZBPROXDMVWYRMZUGZGNGLVUHYQWRBTASQSERKYTDIIOCCSDGKJQLUABIYIPEKUOHJRPQLCNFOGSKWWNPQDLMQHTAKPKEWISDYPXGNWUXVZBAVXTXPTRNGTMJFOHLVMAOAYBGLYFBEEVOC");

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
    msg.setTimeStamp(0.29297348471);
    msg.setSource(12431U);
    msg.setSourceEntity(42U);
    msg.setDestination(61833U);
    msg.setDestinationEntity(120U);
    msg.formation_name.assign("AXVYPSFJSXRYALDVIDEHOKARIZGTVGKEOGXWKBTAUFKUSWKSCGWJNTHPULJMBXORABMLVUYEYIXHDMFYDWMMIALLJUVPNZSGWFFCJQXTLYKQIHHASZSQXIPZDOMMZATDPHNGOCQPWWXCBIOJWLVRDMKBRBKYQHSRVXHFXBTMBHMEEFINGGAFJPEIDZCVWQZDPROBCKZNCQUOEPNFYCYJEZWYDZOQPRSREL");
    msg.reference_frame = 75U;
    msg.custom.assign("WONMMOBDIEYYKBQAMXEZEHBJGWOQDWKHAIUFYVVAVZGOJYXFDJLLSDYOALVOGRKHSMBGGRQKFLBRHCFQKCVZHMTRSEQNSKUBTAPXHIZQLJNTZIHRVUQMLVDAIGNRAUEPWZUECHKFYBLSXZYMJSUVSOIZRERCLFTZCCMIWQOCBPWNXSGPACCIEPILWYTDJDWXCTJEXVJGPHSUA");

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
    msg.setTimeStamp(0.667331664097);
    msg.setSource(22875U);
    msg.setSourceEntity(18U);
    msg.setDestination(64420U);
    msg.setDestinationEntity(45U);
    msg.formation_name.assign("PAQAPKLIBBAJBENMEVVNSROYRQOTMAEQMSTGYVIORDDRECOVBUUSURLWHSQTEHYXHFYREKYTFLAKXONWUEJIUYDFAGZQMABCGKDOJVKICKZCNFHWEXLKYIZOFGCVQXXFNJQUWZLIRVSWVPTCBTPGAAIGKQXABMQWJTREGJSKBCHCXNPNPPUWCLLRDIZMUGBSUMZLSFYEO");
    msg.reference_frame = 99U;
    msg.custom.assign("JEGDMXXWTAZWUGJZHPJMNYTNQTWRMDSYZEKHRREJAGKQDHVFUIUPBAFOODTSKDNPTVEWXBGNZSXHVQIMHBJNGRIQUBGXLMYDFUTICLSYOPYWJKTTNRLZNHBLQQDCUWVZGIUOCOCPLSBCFER");

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
    msg.setTimeStamp(0.546378941277);
    msg.setSource(58482U);
    msg.setSourceEntity(139U);
    msg.setDestination(32115U);
    msg.setDestinationEntity(158U);
    msg.formation_name.assign("VMFOCEURQGOVYOGJCEFQLPDTKZTPPVGMFOUEVLRACSZALAIKDCBEBNEFRWR");
    msg.reference_frame = 172U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1762U;
    tmp_msg_0.off_x = 0.204293988446;
    tmp_msg_0.off_y = 0.255513944027;
    tmp_msg_0.off_z = 0.276741313115;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JVFBJFEJKPYLZAGKXXTXRJDREYRPCBTZQNDHAFBUYFPYWQIMOXCXXWEQWYDJPELLGGYZFEOKWPRBBU");

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
    msg.setTimeStamp(0.103251583218);
    msg.setSource(17205U);
    msg.setSourceEntity(40U);
    msg.setDestination(11750U);
    msg.setDestinationEntity(41U);
    msg.group_name.assign("DUKLZMPZTIWATLLQCXNUZROEXLHQGBUVGUQHAIZHDGMJWMGLSRCRUTZEVBBMDXBPTWMEIABWOBBPYVJMFMISDOYACVDASQYAZTCNIEGRHSRGMOYHCDZNFWSRJPEVLERUJKEDQZSUTTIXQFOXNINKPBDAKQFFKPMZOYJKUJXAKDSLPNKUI");
    msg.formation_name.assign("WMBXZIXXEUWMCDQEIJEXKNMQPTCSXTABHTJWYGEDSOSULMFIAZRQUCEWDRFALIVMSKUXEHIPYYBKLMQLAFRRWQOSICZEUHRXMDLZVZNAHYUQOBOPOGNENFJTSPCAALXSGTTJXVALHJYSVXBPAHUIFQQYSRPGKUDNKGYIZJLCNLOSVORDPITFTBWOYNMWJBKFBZDENMHQKFPGYTUICHDJ");
    msg.plan_id.assign("CQJJDKJVIZAEQZFHURYXYUOSGEFCHWNDMMCZTTTZELCBPKWFXOANDPVJZHHENQBSKNZBKBQZILRMXCGKTSFNNVQQJVCLGUXHOMFTICOIIFAJUVMKKRMSHIDWKYSUWKPRWXGXTFGZHIVOVWZWDREBEKECYDLDWFLPYYCBDAABRJVDSSJMUYJXLNXLXEANAUCTBAOEP");
    msg.description.assign("YNNPAOQRTHRSWXGMTIUDPKSYXQVOVBFXOPDKCMEDGZKTMTZDKSAWXYKGGNVFJXYLMNPPUPHVIILFSVIJUDQXZOMKZETBBEVHFOMCMEBJHOSRBTXFPYEIVFJW");
    msg.leader_speed = 0.606427392807;
    msg.leader_bank_lim = 0.807789833593;
    msg.pos_sim_err_lim = 0.528780596495;
    msg.pos_sim_err_wrn = 0.179943938668;
    msg.pos_sim_err_timeout = 48490U;
    msg.converg_max = 0.701801127066;
    msg.converg_timeout = 59538U;
    msg.comms_timeout = 42513U;
    msg.turb_lim = 0.657347014504;
    msg.custom.assign("HIGMICKWPUSTDRFATFAPMEARFZSYIGQCLMQTLBASLLPWFBDNNTZMWXIQNXJXUEBWECSUZOTEKHOPZBSVJKPQARZLUAIAGKUSKIFIIYNZWDQEVRTKWTSBLYDVKCOCVHOPCZNWXZVHOXYURIHWONNGYLEGMNGDODPCTPKBUCJVKDQMJHSHFAGBYMMQPKQXUOOSYQRYDDRZBFAVPVJCTYLNTHMGJFUXEYHAXDXEJWJUGQRWCEREFJVFLIOMBHLJG");

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
    msg.setTimeStamp(0.111262579415);
    msg.setSource(30309U);
    msg.setSourceEntity(50U);
    msg.setDestination(46215U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("IVJLHYBCSISEFZRAJLYXYCPAUHNUBBXGTKMZARGUNEWDPXPFDDJVGHITSNGWTXPQLTJWCPQZMG");
    msg.formation_name.assign("FHXWPKSOGUOCRYCGKMJGULARANDWEBLSDYDVWQVOFFPFAXMOQUBXWWZYLIUNODVHQ");
    msg.plan_id.assign("HRJPKJKLFCZCZXFTCBXDLTEIGINQMEZZIAHSWHFOYFDUYSBKTOZUVMXPWDPKHYSMVEJSNXGSYRTVGZRXRJMRDQAAQKGIJYSKIPGCDSHFDRXTVTLPFLLIDBIQBVRJQBKKUWZUOQBCGGWSZPBAAGDMCUNTIVEYQWTUHOCD");
    msg.description.assign("MAHYMVDGNSHBMXGMGFSGKCSVTQZEPBLERLMOSMHGGCUXSIPWUUQQOKLTBCRYDXJYKCKSCAWZWOLQFJXGRTVZJJFYOYXBIHIVIUHFHRODSEARFUARYEZBWMBVZLAZQNOKNKUYPRUFNJORNZNDKZQPWSXCGRJOXBQKFLIQWVULULQMHEPDAUEAHVHNTFMGBN");
    msg.leader_speed = 0.665141912124;
    msg.leader_bank_lim = 0.271824510247;
    msg.pos_sim_err_lim = 0.815386084006;
    msg.pos_sim_err_wrn = 0.608343048553;
    msg.pos_sim_err_timeout = 2215U;
    msg.converg_max = 0.861949864688;
    msg.converg_timeout = 10044U;
    msg.comms_timeout = 36339U;
    msg.turb_lim = 0.0378653924416;
    msg.custom.assign("ZHVOFPBEBBLUSKBFQOSFJOAYKLFNOHKYATRVMZAIXMKDWWHQLWUMANCXKXYDPFRNHBMAPJWU");

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
    msg.setTimeStamp(0.979541954186);
    msg.setSource(63779U);
    msg.setSourceEntity(186U);
    msg.setDestination(22752U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("PJZCTEGRBAVGSYIXHZIDQNLDPYIREBXIVNSUPGZNJJMZWSHQYSPKBABWKTNLTUYLHUSRCKUIZENWTYFJWXHFRXLUGRBCJPSLQCSMVVKOMJUYSDMOEHSHKXAKFDDHMFVAPLPGGVEMZBLJKLBKYSQDMCWFVLXONEOHPUDHIBEDCLOCEUVTQONNJYTNQGIFWZTOUAZWQRFQIUTEZRRXJTAFMVJOBHGQCDAKXNRRDWPIE");
    msg.formation_name.assign("FQNSEKADMJDUJOKZLNQJKSZFRJMIEIMKJYIRWOJBDTAAIVGLFZEEBYBMNFZOYU");
    msg.plan_id.assign("VDMTYQMAQCYHJSYYPBNLVKRBILCUIGSJFKLBBZUFHGNXYIKGXNYCZFYUMPFLUTMPJNZSKCZKPGVQUN");
    msg.description.assign("VGAQQSDNJBZFWOKZGSPWJCLSCPARNQKSBDKJYRXZOFWEFXMOITLBKXEBLGGDNPXRCPIHPULUD");
    msg.leader_speed = 0.716721309211;
    msg.leader_bank_lim = 0.233623748123;
    msg.pos_sim_err_lim = 0.177993042198;
    msg.pos_sim_err_wrn = 0.192168614376;
    msg.pos_sim_err_timeout = 58098U;
    msg.converg_max = 0.296289882461;
    msg.converg_timeout = 2772U;
    msg.comms_timeout = 22194U;
    msg.turb_lim = 0.623752481341;
    msg.custom.assign("CDOVXYOVXWWJGOUZJGLEXXMOSYOICFMZZMALLPAENTEQEKRVXFCEGTGMLTUZJENMQRWPDVIIBDEBUXIFJYKUSPXPSQT");

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
    msg.setTimeStamp(0.960515248867);
    msg.setSource(64259U);
    msg.setSourceEntity(241U);
    msg.setDestination(36945U);
    msg.setDestinationEntity(225U);
    msg.control_src = 56654U;
    msg.control_ent = 153U;
    msg.timeout = 0.194143013124;
    msg.loiter_radius = 0.984041172612;
    msg.altitude_interval = 0.904260670049;

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
    msg.setTimeStamp(0.935517614941);
    msg.setSource(49109U);
    msg.setSourceEntity(82U);
    msg.setDestination(54952U);
    msg.setDestinationEntity(240U);
    msg.control_src = 47191U;
    msg.control_ent = 38U;
    msg.timeout = 0.50690551385;
    msg.loiter_radius = 0.755270619743;
    msg.altitude_interval = 0.208241197883;

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
    msg.setTimeStamp(0.510121137707);
    msg.setSource(1315U);
    msg.setSourceEntity(123U);
    msg.setDestination(25143U);
    msg.setDestinationEntity(169U);
    msg.control_src = 47495U;
    msg.control_ent = 159U;
    msg.timeout = 0.189393696277;
    msg.loiter_radius = 0.241506161343;
    msg.altitude_interval = 0.590251687162;

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
    msg.setTimeStamp(0.0279125521385);
    msg.setSource(47533U);
    msg.setSourceEntity(149U);
    msg.setDestination(16121U);
    msg.setDestinationEntity(110U);
    msg.flags = 30U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.807900513118;
    tmp_msg_0.speed_units = 251U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.058470893442;
    tmp_msg_1.z_units = 193U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.462851502681;
    msg.lon = 0.974358934911;
    msg.radius = 0.649461345043;

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
    msg.setTimeStamp(0.909592973821);
    msg.setSource(37425U);
    msg.setSourceEntity(183U);
    msg.setDestination(7990U);
    msg.setDestinationEntity(146U);
    msg.flags = 220U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.160729303915;
    tmp_msg_0.speed_units = 108U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.383915725208;
    tmp_msg_1.z_units = 136U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.530093405417;
    msg.lon = 0.410073129754;
    msg.radius = 0.305832933551;

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
    msg.setTimeStamp(0.636704213981);
    msg.setSource(14158U);
    msg.setSourceEntity(18U);
    msg.setDestination(45063U);
    msg.setDestinationEntity(146U);
    msg.flags = 77U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.311417087494;
    tmp_msg_0.speed_units = 33U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.502489715866;
    tmp_msg_1.z_units = 118U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.50044072805;
    msg.lon = 0.933888652765;
    msg.radius = 0.712184560889;

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
    msg.setTimeStamp(0.545540745869);
    msg.setSource(43690U);
    msg.setSourceEntity(168U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(140U);
    msg.control_src = 61717U;
    msg.control_ent = 143U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 72U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.374113972245;
    tmp_tmp_msg_0_0.speed_units = 97U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.433617809633;
    tmp_tmp_msg_0_1.z_units = 225U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.95882623921;
    tmp_msg_0.lon = 0.14082099037;
    tmp_msg_0.radius = 0.98364555217;
    msg.reference.set(tmp_msg_0);
    msg.state = 187U;
    msg.proximity = 110U;

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
    msg.setTimeStamp(0.521680019002);
    msg.setSource(58282U);
    msg.setSourceEntity(16U);
    msg.setDestination(30358U);
    msg.setDestinationEntity(9U);
    msg.control_src = 28338U;
    msg.control_ent = 224U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 95U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.358982082937;
    tmp_tmp_msg_0_0.speed_units = 97U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.848226755074;
    tmp_tmp_msg_0_1.z_units = 228U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.234376977829;
    tmp_msg_0.lon = 0.498538349423;
    tmp_msg_0.radius = 0.833603272368;
    msg.reference.set(tmp_msg_0);
    msg.state = 33U;
    msg.proximity = 134U;

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
    msg.setTimeStamp(0.649658881859);
    msg.setSource(6419U);
    msg.setSourceEntity(41U);
    msg.setDestination(17472U);
    msg.setDestinationEntity(197U);
    msg.control_src = 6745U;
    msg.control_ent = 143U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 124U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0209502338613;
    tmp_tmp_msg_0_0.speed_units = 124U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.779257843192;
    tmp_tmp_msg_0_1.z_units = 184U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.556007182615;
    tmp_msg_0.lon = 0.419169018211;
    tmp_msg_0.radius = 0.36849854954;
    msg.reference.set(tmp_msg_0);
    msg.state = 188U;
    msg.proximity = 126U;

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
    msg.setTimeStamp(0.722191279913);
    msg.setSource(57450U);
    msg.setSourceEntity(235U);
    msg.setDestination(49515U);
    msg.setDestinationEntity(38U);
    msg.ax_cmd = 0.994709200543;
    msg.ay_cmd = 0.467159522162;
    msg.az_cmd = 0.793901577526;
    msg.ax_des = 0.225909054045;
    msg.ay_des = 0.362003470063;
    msg.az_des = 0.946643532172;
    msg.virt_err_x = 0.329267459771;
    msg.virt_err_y = 0.910039136652;
    msg.virt_err_z = 0.932908354393;
    msg.surf_fdbk_x = 0.703997730502;
    msg.surf_fdbk_y = 0.959224688337;
    msg.surf_fdbk_z = 0.704909732098;
    msg.surf_unkn_x = 0.811932646655;
    msg.surf_unkn_y = 0.842876422369;
    msg.surf_unkn_z = 0.726658197304;
    msg.ss_x = 0.891818657888;
    msg.ss_y = 0.055338513414;
    msg.ss_z = 0.992581624227;

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
    msg.setTimeStamp(0.22746672988);
    msg.setSource(6434U);
    msg.setSourceEntity(244U);
    msg.setDestination(46032U);
    msg.setDestinationEntity(81U);
    msg.ax_cmd = 0.939571769501;
    msg.ay_cmd = 0.92214404576;
    msg.az_cmd = 0.593184557883;
    msg.ax_des = 0.178364293285;
    msg.ay_des = 0.285124930553;
    msg.az_des = 0.469295558671;
    msg.virt_err_x = 0.0499385572803;
    msg.virt_err_y = 0.250672827658;
    msg.virt_err_z = 0.833262282819;
    msg.surf_fdbk_x = 0.610088168459;
    msg.surf_fdbk_y = 0.976406631593;
    msg.surf_fdbk_z = 0.537860248078;
    msg.surf_unkn_x = 0.902388968298;
    msg.surf_unkn_y = 0.553778876683;
    msg.surf_unkn_z = 0.00801614246714;
    msg.ss_x = 0.0381058441482;
    msg.ss_y = 0.802397134712;
    msg.ss_z = 0.231261525826;

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
    msg.setTimeStamp(0.135534438964);
    msg.setSource(48137U);
    msg.setSourceEntity(186U);
    msg.setDestination(12963U);
    msg.setDestinationEntity(232U);
    msg.ax_cmd = 0.233858846543;
    msg.ay_cmd = 0.548747273432;
    msg.az_cmd = 0.810176873766;
    msg.ax_des = 0.542529329674;
    msg.ay_des = 0.986714772984;
    msg.az_des = 0.0853660408527;
    msg.virt_err_x = 0.634991282881;
    msg.virt_err_y = 0.126005095342;
    msg.virt_err_z = 0.0150572422478;
    msg.surf_fdbk_x = 0.771882557065;
    msg.surf_fdbk_y = 0.390602630722;
    msg.surf_fdbk_z = 0.446138939029;
    msg.surf_unkn_x = 0.95143104339;
    msg.surf_unkn_y = 0.682114342891;
    msg.surf_unkn_z = 0.0167481815194;
    msg.ss_x = 0.829877843433;
    msg.ss_y = 0.898056947991;
    msg.ss_z = 0.719175665603;

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
    msg.setTimeStamp(0.255749771025);
    msg.setSource(8749U);
    msg.setSourceEntity(179U);
    msg.setDestination(1970U);
    msg.setDestinationEntity(242U);
    msg.s_id.assign("ZMPOBGDVRIKYZWAHWHPFCQJTJEPMQJVBXCIKXSTDABDMPWVDFLVVUSILDCXJTGSIEYWYMEBZSWNLQLOFUOUXMYVSUXWZOMASSGLJXMJXERAZQRHAYGXMTULQQCOTRYVEUHUJKKHON");
    msg.dist = 0.423936745865;
    msg.err = 0.943126002202;
    msg.ctrl_imp = 0.727541486421;
    msg.rel_dir_x = 0.135321024544;
    msg.rel_dir_y = 0.153140111824;
    msg.rel_dir_z = 0.518201597597;
    msg.err_x = 0.59065169903;
    msg.err_y = 0.602464225111;
    msg.err_z = 0.349014399407;
    msg.rf_err_x = 0.704211671933;
    msg.rf_err_y = 0.868978680527;
    msg.rf_err_z = 0.528302196075;
    msg.rf_err_vx = 0.456495935819;
    msg.rf_err_vy = 0.692648091849;
    msg.rf_err_vz = 0.173669855281;
    msg.ss_x = 0.932071235007;
    msg.ss_y = 0.647173491111;
    msg.ss_z = 0.501416432047;
    msg.virt_err_x = 0.646486757579;
    msg.virt_err_y = 0.421790306681;
    msg.virt_err_z = 0.645821925684;

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
    msg.setTimeStamp(0.258019201955);
    msg.setSource(36611U);
    msg.setSourceEntity(119U);
    msg.setDestination(42679U);
    msg.setDestinationEntity(65U);
    msg.s_id.assign("WCQDCYASLUPKNANJTEOUUEPQWAWUPGPGMVGBFOAVAEDXHIVDUFIGQTWKNJWAYZVISRSCWTAYLHRKUBAKPCVPWOXVLTHRFQPXNWNGCCILBTIGWBJBOHFEISMYKQXRQHMRPGDJJIQDN");
    msg.dist = 0.969561639867;
    msg.err = 0.66018788607;
    msg.ctrl_imp = 0.972801276047;
    msg.rel_dir_x = 0.6264586584;
    msg.rel_dir_y = 0.0502826500658;
    msg.rel_dir_z = 0.264882443558;
    msg.err_x = 0.439769420161;
    msg.err_y = 0.919306407253;
    msg.err_z = 0.679547609968;
    msg.rf_err_x = 0.0137870599313;
    msg.rf_err_y = 0.940167136803;
    msg.rf_err_z = 0.481391231569;
    msg.rf_err_vx = 0.944221060423;
    msg.rf_err_vy = 0.868489934014;
    msg.rf_err_vz = 0.285501462388;
    msg.ss_x = 0.110199422469;
    msg.ss_y = 0.858659183264;
    msg.ss_z = 0.819361038628;
    msg.virt_err_x = 0.381722630171;
    msg.virt_err_y = 0.315869641101;
    msg.virt_err_z = 0.785487147473;

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
    msg.setTimeStamp(0.753680039757);
    msg.setSource(15101U);
    msg.setSourceEntity(36U);
    msg.setDestination(6745U);
    msg.setDestinationEntity(97U);
    msg.s_id.assign("PJZWQEPMCQFACOMJMJUFRAJBVEIULVRNOZMYVNYZCOYLDFNFNSPRKSXRBZWWIHGCCUYPYAVQHUKUDLYHMLPGTAGTDDPSOCZMJOXEBCBPXHDKJNQSHYMHPEISZWVCRVUEBWBEWQRUFAXNSJALFRFZEGKDAVSDVGTEFWOLGMQKMZBQTVBPPQYXFONXGZNZNXDIIWRSAOMKSEUTUJSJBNHIHLCJKAIUDLBGXWCWXTRETTYOIKXHITIQDG");
    msg.dist = 0.606581095864;
    msg.err = 0.616556990345;
    msg.ctrl_imp = 0.83979597487;
    msg.rel_dir_x = 0.292680895053;
    msg.rel_dir_y = 0.840979435638;
    msg.rel_dir_z = 0.732636791474;
    msg.err_x = 0.782668814528;
    msg.err_y = 0.454825493534;
    msg.err_z = 0.284573468707;
    msg.rf_err_x = 0.68114702464;
    msg.rf_err_y = 0.363407836598;
    msg.rf_err_z = 0.00683887889706;
    msg.rf_err_vx = 0.275823829862;
    msg.rf_err_vy = 0.6090622941;
    msg.rf_err_vz = 0.726739516805;
    msg.ss_x = 0.0773718352094;
    msg.ss_y = 0.790893693525;
    msg.ss_z = 0.540576482979;
    msg.virt_err_x = 0.635971201545;
    msg.virt_err_y = 0.241619357482;
    msg.virt_err_z = 0.975888078821;

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
    msg.setTimeStamp(0.748496388976);
    msg.setSource(16413U);
    msg.setSourceEntity(234U);
    msg.setDestination(8750U);
    msg.setDestinationEntity(200U);
    msg.timeout = 30007U;
    msg.rpm = 0.639393347028;
    msg.direction = 14U;
    msg.custom.assign("FPGRABVQDJPQUXSGNYPCVAECHPMTNOOKMHCTKPEVBQBDRIWECBDEFNFKNOOTIEKLOQQVTPFLUOFOFSWYBLABMNXCLEMHMXDCOYEJUGXDVGXZVHXBXRJHBSAWDYSJATNFUTWCCMYXDGHLEAJIWYUMIDLICLZNRULK");

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
    msg.setTimeStamp(0.898646034082);
    msg.setSource(46766U);
    msg.setSourceEntity(219U);
    msg.setDestination(34206U);
    msg.setDestinationEntity(4U);
    msg.timeout = 17846U;
    msg.rpm = 0.799420172126;
    msg.direction = 122U;
    msg.custom.assign("HQTAAZNYBXTULSEFDSKWJOFRGBGEOXSQVTOPHKAJQPDLGPLWGFKXXCHYODUCDVXBVNXTUZMAHNOAWIJMDMZKJOPEXIRNCFAXJCTYFRDREPANKXQEGCTNFMKOZPUS");

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
    msg.setTimeStamp(0.234152806314);
    msg.setSource(43372U);
    msg.setSourceEntity(84U);
    msg.setDestination(42638U);
    msg.setDestinationEntity(4U);
    msg.timeout = 48754U;
    msg.rpm = 0.725812652507;
    msg.direction = 93U;
    msg.custom.assign("TPZBVSKSOBUOMUDFUSCANBKDGGFXTGAHNYXGLHMXLTAKARVTXYNKLCGGHEOZUOWEZWVWYZNMQSDTZ");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.801970851972);
    msg.setSource(57361U);
    msg.setSourceEntity(113U);
    msg.setDestination(55280U);
    msg.setDestinationEntity(24U);
    msg.op_mode = 217U;
    msg.error_count = 226U;
    msg.error_ents.assign("BPZUSAPHIXPGVAZREQQGMLGVHAOLFHODOVBUYPJXQMCKGHXARYEDUUEMKWSHHLFPZJCTJFYTAJ");
    msg.maneuver_type = 51465U;
    msg.maneuver_stime = 0.0218716363309;
    msg.maneuver_eta = 23533U;
    msg.control_loops = 447265700U;
    msg.flags = 91U;
    msg.last_error.assign("RTLUPKSYEIMULCCBNPCJZGHIDOECXOXAAXQINIIRQYTTKUDVELMOQDLAGVAOKMBVEQHUUSWDAZPZLXAXILDHOJMJYFKPYHRKTSVUOMSBUESEGGMVLCDRKOFHWAIDXHVRJGZVNYRXXCJE");
    msg.last_error_time = 0.808028693922;

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
    msg.setTimeStamp(0.336348927757);
    msg.setSource(64552U);
    msg.setSourceEntity(64U);
    msg.setDestination(15582U);
    msg.setDestinationEntity(246U);
    msg.op_mode = 194U;
    msg.error_count = 156U;
    msg.error_ents.assign("GKJVWZVUXICOJCVITLAXFSZO");
    msg.maneuver_type = 24039U;
    msg.maneuver_stime = 0.887338288199;
    msg.maneuver_eta = 23749U;
    msg.control_loops = 846372669U;
    msg.flags = 125U;
    msg.last_error.assign("YCCKJCTFHLJQUGFLHFVYGRBIDSXODXHOTWADXKZCFTHEGVIZQAWDNGRHEDPWFYALNVWICTQNKTNKYMVHMYFSNEMBEQSVPODKGFMBHRUZUZXRTNUKOOVBVILXEIRSPPFWDMYVZBGPBYJYORFPMSSEJAIPKXQJICLWLOCUNEJUIACQJOXMITNELYBXIEJJOQPHRAQYEOLGLCCZJRBUUSGKATGSBTQPQSXZMAVP");
    msg.last_error_time = 0.13141546468;

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
    msg.setTimeStamp(0.688601700948);
    msg.setSource(35148U);
    msg.setSourceEntity(62U);
    msg.setDestination(6225U);
    msg.setDestinationEntity(194U);
    msg.op_mode = 232U;
    msg.error_count = 65U;
    msg.error_ents.assign("WSJBMHMTGFZRQEIHMHTBDVPDNYTWMGHQVRHIRYQKQUVFUEENYHEWDLQPNUTVUKQCRGHICZIDIQJFWCOTJQXWCGVLAFXPRVHVQXKOLCGAGJUYKVEOXMLZKXHEFSDYSAGKUZXBASOGTU");
    msg.maneuver_type = 22602U;
    msg.maneuver_stime = 0.844261531438;
    msg.maneuver_eta = 29622U;
    msg.control_loops = 1973409326U;
    msg.flags = 16U;
    msg.last_error.assign("QGZUSGBCEUNCDHDFKRTKAQLD");
    msg.last_error_time = 0.12252403372;

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
    msg.setTimeStamp(0.592941406136);
    msg.setSource(21080U);
    msg.setSourceEntity(3U);
    msg.setDestination(19983U);
    msg.setDestinationEntity(219U);
    msg.type = 50U;
    msg.request_id = 63941U;
    msg.command = 34U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.239972272523;
    tmp_msg_0.lon = 0.861130870451;
    tmp_msg_0.z = 0.423524035857;
    tmp_msg_0.z_units = 235U;
    tmp_msg_0.radius = 0.89711806967;
    tmp_msg_0.duration = 318U;
    tmp_msg_0.speed = 0.238958364805;
    tmp_msg_0.speed_units = 118U;
    tmp_msg_0.custom.assign("IHBTSVBFZNGUQSESEWKURIKNMWDIBLLUCUTIVHXQMXRVOQAWSJUBFUGKMBDWPYSCCFUEGLQHIKIEFGOPJKEONMIFNNFWOZOZMSDZGEAUCTZPGETP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 37004U;
    msg.info.assign("AOMZVLFJPWQFWKYDJNIQIHTZFHWXYFEYTXNPJUTRLGKYCVPLCOZIQFECXIWJZLUKOD");

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
    msg.setTimeStamp(0.909270339732);
    msg.setSource(2508U);
    msg.setSourceEntity(97U);
    msg.setDestination(47433U);
    msg.setDestinationEntity(40U);
    msg.type = 96U;
    msg.request_id = 11861U;
    msg.command = 95U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.479930308932;
    tmp_msg_0.lon = 0.346487903171;
    tmp_msg_0.z = 0.192440230096;
    tmp_msg_0.z_units = 66U;
    tmp_msg_0.radius = 0.302876442455;
    tmp_msg_0.duration = 7557U;
    tmp_msg_0.speed = 0.842669906659;
    tmp_msg_0.speed_units = 224U;
    tmp_msg_0.custom.assign("GDAFPELOZFXDQVUCUYWZOQYRJWVJTHILLHSGOJIWRJPYHMUYBYBAHIANIFSVJNCVYEUEFHCETGZNULWDOGHOMTWXZPZPHRLTAASEPTXGWMJCCRZN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46589U;
    msg.info.assign("EAZDZXQKTCUXXOCYKBCFQSLHUPZNZTCFGDUXOFVYQMRKSQSJBIRUYAQLDTMBAIETMPIZPKSKX");

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
    msg.setTimeStamp(0.0122611344339);
    msg.setSource(61077U);
    msg.setSourceEntity(102U);
    msg.setDestination(55464U);
    msg.setDestinationEntity(125U);
    msg.type = 144U;
    msg.request_id = 15821U;
    msg.command = 90U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 39409U;
    tmp_msg_0.lat = 0.140995518072;
    tmp_msg_0.lon = 0.509187202736;
    tmp_msg_0.z = 0.742385002012;
    tmp_msg_0.z_units = 64U;
    tmp_msg_0.speed = 0.515608081434;
    tmp_msg_0.speed_units = 25U;
    tmp_msg_0.bearing = 0.371881323111;
    tmp_msg_0.cross_angle = 0.0378411416171;
    tmp_msg_0.width = 0.482493524751;
    tmp_msg_0.length = 0.44301172218;
    tmp_msg_0.hstep = 0.793475680978;
    tmp_msg_0.coff = 94U;
    tmp_msg_0.alternation = 154U;
    tmp_msg_0.flags = 59U;
    tmp_msg_0.custom.assign("OHZOPOHEACZQFJTKRGQVSWGZFAFTRMXQKEHMCFJGBGVMQHBFLFBCVNBEYVJMQCRUGFXEEQZXENQBASTAWJEJORYOTVFBP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7489U;
    msg.info.assign("XQOQRWULWPRNVKGQRRRJWGHONHAKKYJDAQREWUBQTHDFMXTJYPDGFPPSZDVCFLUYGWEYVBEMNTDVOVAJMLGXMEREHMXCLKJABXGELYAPKFETPZSBHLCTCOQAICWWFZXPPUBLSONZAWJZBYUEXAHQSCHGNTNCMHVQGRQIJMZWOFBFHRNEOYCDMLTMJYFICUBSEUWXVIKSUZJZNDRKKTIDBILIOADUSJYGXGAIOCDILFSQNTTSM");

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
    msg.setTimeStamp(0.592781179383);
    msg.setSource(25685U);
    msg.setSourceEntity(111U);
    msg.setDestination(53578U);
    msg.setDestinationEntity(212U);
    msg.command = 96U;
    msg.entities.assign("IOLVZBNRXSOZUIJVQPUHYXICAGZAPGYHNSPPZDRWLVEAVMRSVSJDNJYIBAWMIJQFWDMLOZNDUEOJXYLIU");

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
    msg.setTimeStamp(0.678894601753);
    msg.setSource(45768U);
    msg.setSourceEntity(34U);
    msg.setDestination(27933U);
    msg.setDestinationEntity(190U);
    msg.command = 96U;
    msg.entities.assign("JYPDKKECSZCHWYJXRXUSGUITHZWYEREWDOWMKUVTKLHICHIWUMIZFEDFBCDKRQDMCRWGHGPGIGYRSNUFGRFQXZYLCSFPYBJATKVQAXRUJNN");

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
    msg.setTimeStamp(0.119548888465);
    msg.setSource(4530U);
    msg.setSourceEntity(78U);
    msg.setDestination(16655U);
    msg.setDestinationEntity(5U);
    msg.command = 192U;
    msg.entities.assign("UAXTHQBTZBDWWXEAPVRNFTNLJTEKQWAFMDPPXTCUJAGGNOOGFOGHWOUVXRSCRXUSKVRYZVZQYOIMTCYQMLJWQSLDCEBXGGEWVVBAIBWFCYMPKKPAPMQYDESNQME");

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
    msg.setTimeStamp(0.0311515609658);
    msg.setSource(60141U);
    msg.setSourceEntity(82U);
    msg.setDestination(22425U);
    msg.setDestinationEntity(250U);
    msg.mcount = 18U;
    msg.mnames.assign("JCQMRKWBGZORDMDCEGWMSYAKQUZYHLVSDWUCPGMQAIFWKOFXXSSYWLEGODTIEQPWYMUOHPSIUTDRTJFTSNAXBYEKKZLPXMAVJXQUXRZHRVCXRBADCANFIQMZOCNJZYBYGXTKGMXSMLADIFGONLTVUPOANE");
    msg.ecount = 108U;
    msg.enames.assign("ACAWFQTHOXXHEVWRCXZXVZVPXYJTKFYNHICBJPDSFUMTMNUAECERPYMMITUMFQBLLKWRCQGURMXMVNEGWOYWFPCUPKRWNLZBDTVELPZLGEGKBHYSPTHJKDURIFJODQFTKGMLKHPGNOZIZVSXKHGHVMZIJJQITMNUJNSQLDDZXSIX");
    msg.ccount = 85U;
    msg.cnames.assign("FMCLLQUXNULELBDFNXGOAXATPKQTZORDZYMVNASYPQSBNPFPVRMLJQGNJMTBTOPALAZQVLSHIMEMSJTCPRCHQIYEFYYIZLSIQONUBEUKKSYCHDWRSAZPDHTWUDIVZCGLURLCBISWJZOFTVFNHNJXUWIPBDQRCYWAKHAJTGXJSRCVKGYEEWVKGXKN");
    msg.last_error.assign("YGLEBEKXXHXKZWCISJVMUSTINTEOELOZZHIOYPJTBTGABXXXHSFZEMDRLWRATUCDKEYWVFDVURDGZWOEHMVQHSKCNPCDRUOZHVCFAPKUFMESYXXSQDZPRJUHMNWVARCZMVKIWJZQBFTABMWDYYNAOGDISKML");
    msg.last_error_time = 0.567824840506;

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
    msg.setTimeStamp(0.897933852984);
    msg.setSource(11480U);
    msg.setSourceEntity(22U);
    msg.setDestination(45826U);
    msg.setDestinationEntity(8U);
    msg.mcount = 147U;
    msg.mnames.assign("DSHTSSAVHGRBESZISBLOCVNULVWGQHGEIONWIWEOGOVNRVIPBMQQGAGLPGCHROBHTHDDUSXYWMEXPYMDZXTLRPSKELJVFR");
    msg.ecount = 94U;
    msg.enames.assign("UJBJZUMGZWXYNCZGFFQZYFHXP");
    msg.ccount = 250U;
    msg.cnames.assign("TDIRWBOACBESEOVOBLNSBDCWSRFJYJOIYBMFPFTCJSLKXGWDOTAEKDYBEVYFNQMQZRXCSJGRCIJDZYSPVDGMPXONUHYWLHJCZCPLGUXIMWZEUHNIKGPVQIXUTMGFTLQUSXBXKACAXAFTSLPDTQVQODZGBOMHQKSJKCUFMIUBRWNNRWZRFUHYHKFVPNQJ");
    msg.last_error.assign("DVYYWTOBQEJKAXJKTPREUSGPZOCGXQRQUQGNGHGDDINUVWKZDMHMMEUNAOPAOFTC");
    msg.last_error_time = 0.52735105674;

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
    msg.setTimeStamp(0.638311457182);
    msg.setSource(29668U);
    msg.setSourceEntity(245U);
    msg.setDestination(34747U);
    msg.setDestinationEntity(90U);
    msg.mcount = 249U;
    msg.mnames.assign("XBZRZRVIYUVIWGJLBJSZVYBYTGYTQOIULKHATJOFPNGJPMHOPKCAHPSEGMZNSZJHHDNNOUWJQXDNTQYKRVRCVGEHUHTCUNAKCLPSDPWBFLGXCFQCAUEEXZIMDDRTSQMFWGELLKBBVPZOWDGOMEZESIK");
    msg.ecount = 195U;
    msg.enames.assign("NJCXGADKZHRESTZQFYYUDYXMDWCFPDMCKGWGYMPWMPXSJNUECKMQVOPTJNVREXRGEIXYQIAGIGQDATSDPHMOCEANSRJAPVUXZLTPSDLGWGXUYLXHACBJFCULXBRWMJHITFBPELTEQSVHU");
    msg.ccount = 131U;
    msg.cnames.assign("DEWSMRZMEJJEYGWDMDBZXCJOJBGNEQMBZCVYQTFFGAGWEMSGMKIBPJXUDSSTNXQBVICIKKSOWLATQVUADPHYRQBDVINVXXFJNQHTIVNJTKYTFYJRZYREZCUTDHPIUHHRUINONUUYGZOX");
    msg.last_error.assign("POQOALTDXCZQNKMYEIVENUGMFYAKHFHAUXUZZEWTOYGUMMNAPAVSBQXFLRKCXLRYIJOFXZFOXTJTELZOQFPESDNRXPCGIVXRCJUPJEFDKSDHRCANPWOLHQKMWYRVMPLPFHWIIYWTKENWWWTDJOBUIIGSTNDXDMQZGGABZCPNGEUSQNYBHSZIQJJZSQAAUBCTMB");
    msg.last_error_time = 0.761126951685;

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
    msg.setTimeStamp(0.266921761803);
    msg.setSource(31811U);
    msg.setSourceEntity(244U);
    msg.setDestination(51368U);
    msg.setDestinationEntity(156U);
    msg.mask = 67U;
    msg.max_depth = 0.111983760185;
    msg.min_altitude = 0.10220352855;
    msg.max_altitude = 0.616066110191;
    msg.min_speed = 0.928540736197;
    msg.max_speed = 0.0134502538728;
    msg.max_vrate = 0.396481549888;
    msg.lat = 0.266530392305;
    msg.lon = 0.559937225868;
    msg.orientation = 0.175152676397;
    msg.width = 0.821046502304;
    msg.length = 0.918036716684;

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
    msg.setTimeStamp(0.901221414435);
    msg.setSource(20559U);
    msg.setSourceEntity(111U);
    msg.setDestination(25314U);
    msg.setDestinationEntity(148U);
    msg.mask = 195U;
    msg.max_depth = 0.934678388027;
    msg.min_altitude = 0.584006226135;
    msg.max_altitude = 0.820933271001;
    msg.min_speed = 0.0491522711562;
    msg.max_speed = 0.846248807248;
    msg.max_vrate = 0.0916818542648;
    msg.lat = 0.0816586190301;
    msg.lon = 0.583494568294;
    msg.orientation = 0.962101953982;
    msg.width = 0.311238333445;
    msg.length = 0.490061328695;

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
    msg.setTimeStamp(0.00425856534699);
    msg.setSource(43980U);
    msg.setSourceEntity(161U);
    msg.setDestination(28916U);
    msg.setDestinationEntity(240U);
    msg.mask = 7U;
    msg.max_depth = 0.983346214344;
    msg.min_altitude = 0.146290756918;
    msg.max_altitude = 0.872642019344;
    msg.min_speed = 0.0251258300085;
    msg.max_speed = 0.741486628014;
    msg.max_vrate = 0.231468098299;
    msg.lat = 0.231537592715;
    msg.lon = 0.0622073784249;
    msg.orientation = 0.393959571265;
    msg.width = 0.310656336179;
    msg.length = 0.885511530359;

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
    msg.setTimeStamp(0.141184613177);
    msg.setSource(22889U);
    msg.setSourceEntity(214U);
    msg.setDestination(50975U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.440465913716);
    msg.setSource(37412U);
    msg.setSourceEntity(45U);
    msg.setDestination(38584U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.744288100039);
    msg.setSource(63588U);
    msg.setSourceEntity(243U);
    msg.setDestination(29130U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.422720075362);
    msg.setSource(62430U);
    msg.setSourceEntity(70U);
    msg.setDestination(23873U);
    msg.setDestinationEntity(96U);
    msg.duration = 5790U;

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
    msg.setTimeStamp(0.331884837435);
    msg.setSource(58506U);
    msg.setSourceEntity(236U);
    msg.setDestination(59515U);
    msg.setDestinationEntity(7U);
    msg.duration = 40169U;

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
    msg.setTimeStamp(0.774769641847);
    msg.setSource(60557U);
    msg.setSourceEntity(209U);
    msg.setDestination(61845U);
    msg.setDestinationEntity(74U);
    msg.duration = 44494U;

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
    msg.setTimeStamp(0.489781833517);
    msg.setSource(52994U);
    msg.setSourceEntity(233U);
    msg.setDestination(24858U);
    msg.setDestinationEntity(102U);
    msg.enable = 189U;
    msg.mask = 935415131U;
    msg.scope_ref = 972844596U;

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
    msg.setTimeStamp(0.556644483125);
    msg.setSource(18470U);
    msg.setSourceEntity(15U);
    msg.setDestination(13957U);
    msg.setDestinationEntity(95U);
    msg.enable = 219U;
    msg.mask = 3452080458U;
    msg.scope_ref = 2184201570U;

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
    msg.setTimeStamp(0.0300410748832);
    msg.setSource(50254U);
    msg.setSourceEntity(91U);
    msg.setDestination(32499U);
    msg.setDestinationEntity(202U);
    msg.enable = 23U;
    msg.mask = 1137757646U;
    msg.scope_ref = 2779714161U;

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
    msg.setTimeStamp(0.76459103444);
    msg.setSource(2180U);
    msg.setSourceEntity(25U);
    msg.setDestination(59061U);
    msg.setDestinationEntity(19U);
    msg.medium = 68U;

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
    msg.setTimeStamp(0.773975107284);
    msg.setSource(3811U);
    msg.setSourceEntity(241U);
    msg.setDestination(11519U);
    msg.setDestinationEntity(209U);
    msg.medium = 22U;

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
    msg.setTimeStamp(0.51144991645);
    msg.setSource(18000U);
    msg.setSourceEntity(218U);
    msg.setDestination(32344U);
    msg.setDestinationEntity(121U);
    msg.medium = 10U;

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
    msg.setTimeStamp(0.674993848256);
    msg.setSource(26105U);
    msg.setSourceEntity(195U);
    msg.setDestination(7301U);
    msg.setDestinationEntity(37U);
    msg.value = 0.589199540099;
    msg.type = 119U;

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
    msg.setTimeStamp(0.555211325105);
    msg.setSource(7310U);
    msg.setSourceEntity(176U);
    msg.setDestination(19974U);
    msg.setDestinationEntity(235U);
    msg.value = 0.0155125341092;
    msg.type = 128U;

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
    msg.setTimeStamp(0.0602753744672);
    msg.setSource(2181U);
    msg.setSourceEntity(47U);
    msg.setDestination(1118U);
    msg.setDestinationEntity(33U);
    msg.value = 0.553250127467;
    msg.type = 9U;

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
    msg.setTimeStamp(0.684023714118);
    msg.setSource(31636U);
    msg.setSourceEntity(133U);
    msg.setDestination(18346U);
    msg.setDestinationEntity(94U);
    msg.possimerr = 0.486775587074;
    msg.converg = 0.94903603737;
    msg.turbulence = 0.692147229715;
    msg.possimmon = 145U;
    msg.commmon = 241U;
    msg.convergmon = 24U;

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
    msg.setTimeStamp(0.0246309002198);
    msg.setSource(52244U);
    msg.setSourceEntity(44U);
    msg.setDestination(42869U);
    msg.setDestinationEntity(183U);
    msg.possimerr = 0.750894255117;
    msg.converg = 0.678442744072;
    msg.turbulence = 0.93422527454;
    msg.possimmon = 14U;
    msg.commmon = 147U;
    msg.convergmon = 27U;

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
    msg.setTimeStamp(0.55426144262);
    msg.setSource(43621U);
    msg.setSourceEntity(3U);
    msg.setDestination(48736U);
    msg.setDestinationEntity(181U);
    msg.possimerr = 0.286811092293;
    msg.converg = 0.495435503388;
    msg.turbulence = 0.163112671665;
    msg.possimmon = 233U;
    msg.commmon = 22U;
    msg.convergmon = 171U;

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
    msg.setTimeStamp(0.542687475735);
    msg.setSource(49067U);
    msg.setSourceEntity(1U);
    msg.setDestination(9302U);
    msg.setDestinationEntity(165U);
    msg.autonomy = 182U;
    msg.mode.assign("ONXEYJKHZFXSKWTTOECOOYMMZBWIHASQIBKUFVBXMEAPUBLZEJTURGZVQUQKUWQVILYMDJBHHYNRVHFKILNVPZMMPJGNLEPYMKXGOTPSWRJJFZLVTXBCGYQXTASWRCERICOGEUGALFUPWAITWSGGDKRJMZLAFDSCFOADYSQB");

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
    msg.setTimeStamp(0.61826547315);
    msg.setSource(21843U);
    msg.setSourceEntity(117U);
    msg.setDestination(49426U);
    msg.setDestinationEntity(245U);
    msg.autonomy = 82U;
    msg.mode.assign("YVAUGHKCZDYVYDZPBILEGLMWTHXWIEKLRHSJXEOWQVINUVPTEIYGDTHDNBVMTLPJTBECQMZAHQXXRZCBSAUVOLFVYNSWTPLYAOFGVTGPFOGRXEJRBLAKWKEKISWHNIZYMBUJQZIOKFZDOMBFCPMSZUHDKEXUFJJMXHDUAEXCWWMILCPGSSBUNOZAUJQXYSFMGDCUCEQNBVPQRYNRNSKTJJFOQORYKVCMDHNRAQZTOHSACWAKFFQLND");

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
    msg.setTimeStamp(0.0638624567005);
    msg.setSource(60072U);
    msg.setSourceEntity(187U);
    msg.setDestination(6250U);
    msg.setDestinationEntity(184U);
    msg.autonomy = 231U;
    msg.mode.assign("XRZZNOHYYXJLYDTQVKVMUENPFBCBGSATCAKSOGVGENHGFHETRXRHKRCDPCXJFGFRFQWCVIBJKUMWIYJMUUTSDDGHTQQSNRHYKXJXEBGQOHYNNQHPIEZXPWZGMOPCWPOYICEVLGFZZ");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.579689519869);
    msg.setSource(36902U);
    msg.setSourceEntity(183U);
    msg.setDestination(41601U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.000807469984986);
    msg.setSource(53983U);
    msg.setSourceEntity(200U);
    msg.setDestination(47346U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.921727607458);
    msg.setSource(17860U);
    msg.setSourceEntity(147U);
    msg.setDestination(65433U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.267402314875);
    msg.setSource(33925U);
    msg.setSourceEntity(187U);
    msg.setDestination(50121U);
    msg.setDestinationEntity(125U);
    msg.plan_id.assign("YAEMHMZCNCCZORGBHDTLBYMGVQLTGANTVYVXWONSMAERUU");
    msg.description.assign("TJGGUZQMRQVDSSDYHYKJLKUCLZHPBMFNVYKCDXDDOWOSUUXTZLEKUXJFWXWIKBRWSYNXPWZMAMMWQDPOILARGBCGNXEQGJTCNUFLEIFVIVKQMKVWAPSALLTBSMCWLOYQOABHOOUGVYBCHRFFEJGYRIXLPPDTQOYJHODTYTIETNZUIEHNNRRFMHYCTKDVBARMEAETJIPCBVPBJJXKSNOZQRSFVAUHLEGSJXHSKHZQNE");
    msg.vnamespace.assign("XADXFPXGPINJJDVNQWHIHVWUMRVRZFBRYJRUNPONQNSXTWFYLSTJBNXVQLMKWC");
    msg.start_man_id.assign("OJMCCZFPQYFUPEZDVZPRBFDFIQRQBENWPTVUGCBJUWWYDBTQISMCANLEDRLFUTLZZLWRTTIVJYGPHOXKSFCLKUTHWFQMMQKNMMIVAJWDSJVICEZHRJAFVKHZUJRBIOXTAQAUYDLKRHKVYXSGTGGSDJLZNXYAOSSCLIGOFURHENAIBXPXWPCLAEEIEKZNQYERAFGYVLCHTHOBZHGKNQVUYGDSNDBVKEXDPPWWPSORONTKO");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BELBVWYCMKKRJNNYGSPJBZKZBJXNSTKATGMYKTOGLVQIHIQZXHJCGSMWTOCTUUPBFFQTOGQESJSSPMTJPXPVVWRWMIZYAIRTVHFELXUKNIIFBQXLRIUDIDYJHRVLYPMDOHXFZNOLVOUMLKXWTCGEQOEOPJCGANGHWVSBYMKBEAZPCGU");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 16109U;
    tmp_tmp_msg_0_0.lat = 0.551340214876;
    tmp_tmp_msg_0_0.lon = 0.985211294;
    tmp_tmp_msg_0_0.z = 0.119770558537;
    tmp_tmp_msg_0_0.z_units = 82U;
    tmp_tmp_msg_0_0.speed = 0.764042138575;
    tmp_tmp_msg_0_0.speed_units = 16U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.634262815365;
    tmp_tmp_tmp_msg_0_0_0.y = 0.989907151827;
    tmp_tmp_tmp_msg_0_0_0.z = 0.652402161082;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("TCLHWDQLORNPIEHAAEZHZBUTLNASANRIKQDCIPUPZBJDURUQPXSCZFVIRRHRYOTEABSYRGFQFAHDFSBTLXQYBLHTVGZMJGBGJJEUEJKRCTDCCLWKKYLXJVACWBYDKNOQKXMHNIOMISVVRKPIZGGMQWYHHISFMWYNMLZCNDOWFUWJVELJCEQMTSTXUNJXEZHVGLBVGSSTVFGBUKFQXWMWOMDQEPFRBXDOAZSXENPKJONIXZOIYPDCTPM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AnnounceService tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.service.assign("VZYKOJOXLABKVEWMKGDSDWCGQSZDCZMDDBFFUANSWLLFGTQZPZYDCAB");
    tmp_tmp_msg_0_1.service_type = 165U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::VehicleLinks tmp_msg_1;
    tmp_msg_1.localname.assign("BGLIWLKLKZAUHOXCHVYMYXOQ");
    IMC::Announce tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.sys_name.assign("RMHTFYNLSXXWNIERSDQIZCY");
    tmp_tmp_msg_1_0.sys_type = 230U;
    tmp_tmp_msg_1_0.owner = 7421U;
    tmp_tmp_msg_1_0.lat = 0.749622680444;
    tmp_tmp_msg_1_0.lon = 0.870952868528;
    tmp_tmp_msg_1_0.height = 0.937442498083;
    tmp_tmp_msg_1_0.services.assign("HMTNYECVWEPJENLIXSUNRAYAYYWNPTQPADBBFWSOEZMFSRHSQSLSNJVPYUYVERUVWBTUILVVZQUFVHOJFEAPQGTBPTRQOFHJDKQHMHLNSVRSOEPMDIAPCCWZHRZWGQYJCDITEUMNKGKBMRULOMIEOAXRBZKQKSZFDBDWWRWTOTCKCVMGWCZOSIDXXAMLXDJMYYLPAYXRXGEFDZGGKQAHGJOKLTUUCAH");
    tmp_msg_1.links.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.507570430699);
    msg.setSource(6994U);
    msg.setSourceEntity(229U);
    msg.setDestination(64950U);
    msg.setDestinationEntity(140U);
    msg.plan_id.assign("HWQSREKDPVABXZVTIHKJEORJBPAQJETQTCFYEUHVLXIAYBYJIJSUHWWOYQRYKOROFUNHGYPMYICGRDSMBZQPHQEESIXCUNJWVSSDSHNTLFRTTBAAJSLAGTRDUZVXMXWJPXLNMZZYJKAOXMAPQNKVUNBCHKADOVIDZXESZIPWVDRFCLOH");
    msg.description.assign("KOSEGAQJCRRODUKFVMDZVWPJAKRARYPNLOXGLSGWRXJJSVANPUPGVLITQNBOBJXTLUDZLFUQCGVPKGCDQWHIERZLAXBQCTBKORCSNHZIOMLJPECFQAAIEYSZLKSFMCSYODHGBTXLUIABBWKPPHSWYFDEEEYWUWIHTUHUHPWZVYDJMUIYFK");
    msg.vnamespace.assign("KKKEBGIIIYRLLBELSLKAHNXOSQDVCBSWWPZXNSYQDWSFRRIFCOGNFEDVIQOKHGDMTCNVPJBAUBUVBGIQGULRSQESSUJPDOFCNCBGOHSJGLKXPTZAQMTKEHZXDAFYOZGHUZGCLLMKTUWVLAZJYFAITYPZQQQPVGZUUVVTOIK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NDWJVEXKLHJUBEDDVOLXYCYQWVPXXYZYRSFKVIDQHCJLHPBECKCXYZLRUSJKEHOFHNKILBHBQWNJIVGZTEF");
    tmp_msg_0.value.assign("WXBOPRGLSHPDLCAWDTOJTWPSFQCSOXHENVXXOGAVTWIAYAHYDSFZAKZWTAEIUUTLPOBRKIXFUOVSBZZQYCWHNPHLDJNMSJISHRJIHUGMEIJPGMZYBYTQADUGZP");
    tmp_msg_0.type = 198U;
    tmp_msg_0.access = 159U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KSSZREMHFPRQGWFLNIONNMYGTHS");
    IMC::CcuEvent tmp_msg_1;
    tmp_msg_1.type = 122U;
    tmp_msg_1.id.assign("LYLWLGXTYBCZCAWPIOHUNENKTVRIGNTVFQGKNUEJSIYMBRJESHFTJBSLOXTTEQIGBCMDMPUEXHQUYSKDBXTOVOYUGJFMLPFECBOPCIFAFZWENXCUAZBSOAKKEFMUHUWZDWNLZPQLXSYTJPMEPVHFZVVCWKRSGPIOINAVBHXUIAYILOTVQMSJKWRQRKNWJCJSWRMXQDDQJKVMADMZRNFCDBEGFNHXZLCYVTZZPXDA");
    IMC::ControlParcel tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.p = 0.991351611621;
    tmp_tmp_msg_1_0.i = 0.809355819825;
    tmp_tmp_msg_1_0.d = 0.940505931657;
    tmp_tmp_msg_1_0.a = 0.903684285609;
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ServoPosition tmp_msg_2;
    tmp_msg_2.id = 63U;
    tmp_msg_2.value = 0.0465947508852;
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
    msg.setTimeStamp(0.595822162048);
    msg.setSource(38440U);
    msg.setSourceEntity(119U);
    msg.setDestination(31547U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("LTQYJLJRWBAKSGOQOOGEYJJWOMGMBTCLWPEPFNWSCYZOZPWXFAOJBIAUSE");
    msg.description.assign("IEBLDQISYIQKQLAJOFGOEUEEFPYMFASBQYCMOBWGLHGNWVCHWCZRMKX");
    msg.vnamespace.assign("KMSLDKMIJWAEZTAJUXIEBPDWYLTJSCWPVTNSWIGCVFRWRHFFORUNKMAHXRQYTWQCGUQUOGXMOLLVZGQBBZKZODGSKRZIQWJZWHVNFBFHXEIRGHCMJRZNFBUUVAHD");
    msg.start_man_id.assign("YOUSMTEAUQWBCGWJLQSQSNAHTCDUTENDBAFTLNIWKPUGTACVYALIYXMZCTBXAGCLKYIVKYMXWQWEERJIYJQOWQWTLXBRHANDVMDQFPVUDJVEFZLYGRAIHKTMRVVITUARHKBKZOVEMKZ");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 5246;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.617718185074);
    msg.setSource(3172U);
    msg.setSourceEntity(47U);
    msg.setDestination(40472U);
    msg.setDestinationEntity(244U);
    msg.maneuver_id.assign("ZLADJOFGPVCLBNDPFGHQQUFZGRODNCIWLSEZDBSRXTBMRUSZNBZYFTRKSLETDIGWKAYXEIKMFJACRSOANVXBHUOXAFET");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 54326U;
    tmp_msg_0.control_ent = 193U;
    tmp_msg_0.timeout = 0.390001558713;
    tmp_msg_0.loiter_radius = 0.613283348111;
    tmp_msg_0.altitude_interval = 0.0569341067771;
    msg.data.set(tmp_msg_0);
    IMC::PlanDBState tmp_msg_1;
    tmp_msg_1.plan_count = 62686U;
    tmp_msg_1.plan_size = 536293251U;
    tmp_msg_1.change_time = 0.63625278797;
    tmp_msg_1.change_sid = 40878U;
    tmp_msg_1.change_sname.assign("IJCQNIJFMANXCLMUAERJIBJSUAVGYXKZSXWFGLMKFYRDWTQCXBQJNPZZLPZNHSWALYSWLZCYYTYISNQDOPREICNUVBJUGEUKBYDJXKSHGVENVCOHWMFNHDREVSF");
    const char tmp_tmp_msg_1_0[] = {-14, -88, 45, -60, -27, -125, -57, -37, 8, -29, -93, 91, -4, -82, -29, -122, 88, -64, -119, -44, 34, 121, 92, -107, 68, 105, 66, 117, -126, -22, 6, 50, -40, -113, 76, -97, 79, 87, 59, 57, -122, 28, 41, -81, -74, -126, -122, -54, -39, -117, 116, 56, -90, 34, -4, 94, 122, -114, 94, 26, -27, -113, 92, -117, 24, -100, 24, 41, -47, 17, -27, 93, 89, 18, 37, -9, 56, 62, 46, -74, 21, 4, 110, 36, 25, -24, 94, -56, 73, -48, 64, 0, -120, 11, 60, -96, 99, 114, 58, 87, 23, 96, -127, -81, -9, 97, -103, 107, 55, 31, 37, 69, -112, -34, -108, -47, 68, 12, 36, -68, 38, 61, 79, -63, -85, 30, -10, 104, 82, 29, 15, 53, 18, 46, -116, 89, -38, -100, 3, -10, -11, 126, 45, 49, 16, 5, 102, -22, -95, -15, -126, 77, -7, -128, 51, 114, -62, -105, 112, 103, -59, -33, -116, -16, -100, 25, -114};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.402144654854);
    msg.setSource(14474U);
    msg.setSourceEntity(44U);
    msg.setDestination(26254U);
    msg.setDestinationEntity(150U);
    msg.maneuver_id.assign("UFZDXGAVYHPDEHUFRHRUYWQWLMVCWSUSQBFYBRKWMIIKYTLOLAG");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 252U;
    tmp_msg_0.lat = 0.262496133902;
    tmp_msg_0.lon = 0.952382827643;
    tmp_msg_0.z = 0.693862038483;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.speed = 0.0746730487843;
    tmp_msg_0.speed_units = 213U;
    tmp_msg_0.custom.assign("KHZAWSRPGLDXBXLESTVWELLUXJCTSVJDFWSGQJFMWRYYBOFDKNNJIPTQAPPYLBMMDXEOKPSANEVTBLLDXFVCKEYBGNIGJQCTVANGVJZFTVEWEKLAMLZSNMQSHYRUUWGDQKTNCODBMODIRGWMOCFHTHAQCIIWVIKFWYERRYQOUIYCZUXASPZZXQORINRMU");
    msg.data.set(tmp_msg_0);
    IMC::NavigationData tmp_msg_1;
    tmp_msg_1.bias_psi = 0.847471534374;
    tmp_msg_1.bias_r = 0.751851542799;
    tmp_msg_1.cog = 0.496675540789;
    tmp_msg_1.cyaw = 0.266653269895;
    tmp_msg_1.lbl_rej_level = 0.554838579489;
    tmp_msg_1.gps_rej_level = 0.886634173429;
    tmp_msg_1.custom_x = 0.898803611248;
    tmp_msg_1.custom_y = 0.24688075714;
    tmp_msg_1.custom_z = 0.284335146613;
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
    msg.setTimeStamp(0.159151161664);
    msg.setSource(17156U);
    msg.setSourceEntity(254U);
    msg.setDestination(21549U);
    msg.setDestinationEntity(147U);
    msg.maneuver_id.assign("YTEOGNAUENSDJRDVNBJGQRHXXXVAX");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 19809U;
    tmp_msg_0.lat = 0.479858565962;
    tmp_msg_0.lon = 0.619072655841;
    tmp_msg_0.z = 0.492213936055;
    tmp_msg_0.z_units = 84U;
    tmp_msg_0.speed = 0.0984826864394;
    tmp_msg_0.speed_units = 249U;
    tmp_msg_0.custom.assign("IQZCOLGKUMKABBGRDGFHGRYVTMDQXRUW");
    msg.data.set(tmp_msg_0);
    IMC::EulerAngles tmp_msg_1;
    tmp_msg_1.time = 0.0396072840531;
    tmp_msg_1.phi = 0.266789332703;
    tmp_msg_1.theta = 0.497628147295;
    tmp_msg_1.psi = 0.358915411322;
    tmp_msg_1.psi_magnetic = 0.31993923065;
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
    msg.setTimeStamp(0.581457837726);
    msg.setSource(45595U);
    msg.setSourceEntity(128U);
    msg.setDestination(817U);
    msg.setDestinationEntity(74U);
    msg.source_man.assign("BTCCWZHFOYPTMRKLREGJUKRXOYVUOHBOHBZSAZPGSUVGZHBNLNEPOWISRWNHZWLATTVJWIAVRLDFSEEQLBNUXOSLKAJSCWYFKTDSFJCEJKMDIDAKIT");
    msg.dest_man.assign("MBINIEMEWGCDFSFLGYYRIGTUOZOXTZMPEXKLRENZWBEJRPVAXFUOOYVCUNLCJKSUFOQLBHAFVFTSGWNMAHHXJUFSEXOVHPRTGBMDQPWRXQZYPIXWQXZAZIKRNLAJCRDQXMURWANTHQIMUNVYHQSCDAYRJFSZSJT");
    msg.conditions.assign("NXIAKZOFQVBLJACVORDZKHRBEGDCXSQLYDRJVTGDSYSWEOFPMANBEFTTUIBGYVFBSBWKGRLUXWFXUO");

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
    msg.setTimeStamp(0.284422734277);
    msg.setSource(31551U);
    msg.setSourceEntity(36U);
    msg.setDestination(46314U);
    msg.setDestinationEntity(48U);
    msg.source_man.assign("RQRJIBZPQTYWOKQPVONKTVQFXBFMAZHUKPXVREXGOOLAXQNJNWVHDDYXIBKCFXSHZCAMQSWGO");
    msg.dest_man.assign("UDKNJLQBMFWLHAQLDCHGCHRQYHIKIWGLNYAJJBZQUZKUGSKBOQDMQLYEXIHGZTDHXGBKSOARVOVJVUCCSOUUNHGPNYTFHSIMWFKBLAFSDPMMDNIGSOLMFYANTUPEGPIQLNEKJCBVOXZMXQERYXTIWVBBJSAAFTLY");
    msg.conditions.assign("WQKZSWKHHZGBVBNSBDFRSIMCXAGHSWDXRDRZGISTEQUIRJGQO");

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
    msg.setTimeStamp(0.0375337283113);
    msg.setSource(43860U);
    msg.setSourceEntity(142U);
    msg.setDestination(52486U);
    msg.setDestinationEntity(108U);
    msg.source_man.assign("VLZZOTFVFPQHZ");
    msg.dest_man.assign("OGYRACVDTQZCMOQZWPUGJVZTXWKZWEXNAPTTPETSNJFEWOBRDVFPIDAEIQATSNHQYQCMRRPMXHOBRZBCTFHBYNVIFGNJCRSTMWVGVKSUZYQBKEKRVNNQGLLPSKEMLHPCSKXZKFVUSUSCUGSHDWILONWWAXUHWXPAEYDBHIMLVJNDCUOOLUBYQZIMCJBWGAXUKEEZ");
    msg.conditions.assign("ZJPRBUDKKAYQVQVLZTEIVDYJYVUNXZHICKDSJFTYTLZPPSTPIAYSABCXRHMUWZAFNEXJAGXLXKYDOKBMCQEOFFVWBPVVSUDAMHFCGSURSZWGIHQWAIUQYLOBLSQTQTVCOJOHEZRMXLCZHHIYTXGLQ");

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
    msg.setTimeStamp(0.61969679779);
    msg.setSource(548U);
    msg.setSourceEntity(168U);
    msg.setDestination(10733U);
    msg.setDestinationEntity(135U);
    msg.command = 197U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WHLISVEHBAGWZNCWPABQOQUWFXNZYXDGLEQVTLCYEBUMRFDOKBLVRCOMYFYZ");
    tmp_msg_0.description.assign("XFVBVFQAVOIXXPZGAU");
    tmp_msg_0.vnamespace.assign("GQRBNGWDTZBZHQLFKXRPVUGQFNGPBPRLOYMQQNTLGZXFPKJVCYDJAXZKIJHPDTDGMNTAAREKQPRXDLEMOJVEYGOOZBPXUYNMDXBEOLWCNQFWMVIUUNEMMFPCGWOCANVIWMXALMUEICCAYWJRWNTRAOSVWATHFSZYRBHQHPDKALHJTVEHPJIDSZFEQUMJSGSQFBTRVYAH");
    tmp_msg_0.start_man_id.assign("GXEQTNQTHXOBKPMUU");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CMUOZAWOMNWMYURYEVZOHGDUOIUGOZOBESIBIGYRGBAKZWNQWLSCEICWAYATT");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 30427U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.81705453478;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.346355474508;
    tmp_tmp_tmp_msg_0_0_0.z = 0.978927689567;
    tmp_tmp_tmp_msg_0_0_0.z_units = 213U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.60746976478;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 216U;
    tmp_tmp_tmp_msg_0_0_0.duration = 39386U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.766128432088;
    tmp_tmp_tmp_msg_0_0_0.flags = 165U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DPIBLTHOTTLHAHIWLDJHBEOZQQJPVTYDEPSISQZIMPIGEKQACDMOUSSAPFLGQYNZFNMJRVYHMXXRMMYTATJVZJTNKXCND");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Rows tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.timeout = 29519U;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.0343622653074;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.138108972997;
    tmp_tmp_tmp_msg_0_0_1.z = 0.233702731354;
    tmp_tmp_tmp_msg_0_0_1.z_units = 163U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.938116456459;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 38U;
    tmp_tmp_tmp_msg_0_0_1.bearing = 0.873467164338;
    tmp_tmp_tmp_msg_0_0_1.cross_angle = 0.349791661642;
    tmp_tmp_tmp_msg_0_0_1.width = 0.0274437046701;
    tmp_tmp_tmp_msg_0_0_1.length = 0.131413115135;
    tmp_tmp_tmp_msg_0_0_1.hstep = 0.949079020682;
    tmp_tmp_tmp_msg_0_0_1.coff = 21U;
    tmp_tmp_tmp_msg_0_0_1.alternation = 100U;
    tmp_tmp_tmp_msg_0_0_1.flags = 171U;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("MCBHHAHZNGJEDVNSUGMYVOKDTBOSACDYYRBJJKBLVZKKSYRQWMTWYCEOOIGRXSABWLHJPGQPQSQJMPZQOFZPVMPHJFFQPXN");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("EVPWASWKNVWIXECHPSTEVDZFDUCIJWMIRXAHJQROAHPEKUFLPWCZDNWYUXFCQDNGIXKAGRLYFLFWLQNJGUNCVMAHWOSNNYSIDZOFFHHIQZEMPRPGAJYITORTXKSQOYVAGMXEKSLQLJBPUBRPMBHTVGRKUBGOJUWYBASXMCTZNDTOGJGOHYZUCTBB");
    tmp_tmp_msg_0_1.dest_man.assign("QUJTYXLWNBSJOAPAITRPBURKRVVZMZAZDCRUGCFKZELMHYHNVGLVIONVOQQRHXNLFFEEVCDEVRTJJAKISYNGQSAQKNUYWOARBKDOY");
    tmp_tmp_msg_0_1.conditions.assign("USJEECNDDJPRIXAHGJAFZJBJGNPWDTTMOIRKOXWFYULYHQBG");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 7998U;
    tmp_tmp_tmp_msg_0_1_0.flags = 77U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.896347287424;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.926791072997;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.995673442442;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 87U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.226244365493;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 67U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.725828320753;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.588590099667;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 85U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("FWUFRJINKBKMHYGBIXLFRSRENSGHJASAQYDLVRKYAZAJEWETZTJOPRDDOCTCPCOCCNHWFIPBDDQVOMRGUCEZFXQLLYOBPZIQYZZWHGWVGZLCZOMSAXSKRXHWUHMNNMLPIQGXKEPOXQIJXFILWVORUZLGHRDUKLBUTNKXKCTJGDYNJJBSUVVTEUMBPAWEISADHGQDFTEIKABAEUAJQXFMQOSSGYN");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::FormState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.possimerr = 0.772460070814;
    tmp_tmp_msg_0_2.converg = 0.338274574297;
    tmp_tmp_msg_0_2.turbulence = 0.246338895916;
    tmp_tmp_msg_0_2.possimmon = 88U;
    tmp_tmp_msg_0_2.commmon = 107U;
    tmp_tmp_msg_0_2.convergmon = 233U;
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
    msg.setTimeStamp(0.482939794987);
    msg.setSource(1848U);
    msg.setSourceEntity(222U);
    msg.setDestination(35439U);
    msg.setDestinationEntity(166U);
    msg.command = 44U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ECTLKIWJBTDCJJULIWMXVYFRSPGLCECZMHVGPECWUJMRRZONBJYFHHPBNPDIZWRVTTLIRPLTNVXFQKAGNIUNZFXUAVXFKYZOWADJEMHJAXYASQDOFKHZRQIHDSDYWURWGODQFSWZBME");
    tmp_msg_0.description.assign("RVQJKFOYCSUDCEZBYPZTCQWJVAQGBEXYSGVCVFNHQRLXMGTEAQJYOKNAVSANXOUUBTMUYJBVDRSEOVUOHSYTXVRTQHBISMADYCETNFLLHNFQIAXFYXCVJMDCLPTSJCNDGWRHFISPPCECBLDLPIGSGZPAGBNKXDFSUKNAWQRUUBEOOIKKTJXMIAULZLLYPJHWOQHFKZMJZZDPZNHFWZIQXEGDYFTNIMGWDLOMGBUBMIEAZPRKMOTKKHPREJWHW");
    tmp_msg_0.vnamespace.assign("WLLPASONAERBYHJJPVREGKAKAMKVANPMZRBDCJGSGGFOSAILENIOXXJFTSZUDPLTUFTKTIMWBMXSKRNVOKXYWGRPYBFMEVNIUIJZYNAYNIVSKECHKODCGLZHHXDNSVGKDTJH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SFFUESNSEJETCVNMMLIZPPMUTJXLPWKKNTKYGDKAKSGVQTWVDAWXDNVRHTUNFVWEISULGFOPXHNWWNCRZQRUYWXQRHBBLIRREFCEAAEJMPGHLSFH");
    tmp_tmp_msg_0_0.value.assign("GQWKFRVCNNICOKZAYWUPHQRNVTJFHXZQCHBBBFGSXIEWUJJIHLMGFNJDJQXAIDYEOLYMTHLVXBXTFTWZOEYYMRCTWFWRFGMAOVSNHSZATBSDG");
    tmp_tmp_msg_0_0.type = 209U;
    tmp_tmp_msg_0_0.access = 138U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FTQJKPDDKNZYLXXXYKIGFLZBSFCGMJIDEAZGJDEQFGAOWMPUXVXRPOFNMQRPPBLNHVTDSBRXIYCJYDPUTIQARKBYEHHNSIFIAJUYWMILCOEANOXGREIPUDTMTMNHUWYVVFQQLBEGRGHPYLWULRXOBCJMVUHEARQWZOEVYNTVSCSZTHJUBAMZKUSNQCACOIQPOSLZTXODAPFGGHWSYFBLFGEJOSWIKVAX");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("SITHCYWFCOFQNEXLCQOXJWRFABNNMBEZJSSQUEZKSFPUDSEKVFZQSDMNALZGJMUARXFCPAKJMYZQXHXGCGPAZWEWHJVEMXWZGJQBHTCDJQVPSGYDIANYAKLIETVGMOTOMIROCYRHVRVGDLKIIGUPLYQMAVBBUHZHOYQKBUNRYWAVLTZKBDSPRTFFVGHPBTNLNXLRFUEMBRTLYCXVXWLDDADOZHKMXCNPONKJRYSWIIIBHDGW");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.639415835656;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.850537752723;
    tmp_tmp_tmp_msg_0_1_0.z = 0.113970912229;
    tmp_tmp_tmp_msg_0_1_0.z_units = 178U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.288246244376;
    tmp_tmp_tmp_msg_0_1_0.duration = 64815U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.652323761334;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 21U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("NREQFFMNQPWYEDZUFOMELTVIOWRIRPFDWFXIOSFTYWDWYUVKUCBSCZVAVZCQXOGTGXDAUBZDIE");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::EstimatedState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.232178701078;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.72484964489;
    tmp_tmp_tmp_msg_0_1_1.height = 0.871467556814;
    tmp_tmp_tmp_msg_0_1_1.x = 0.544551159647;
    tmp_tmp_tmp_msg_0_1_1.y = 0.161241803158;
    tmp_tmp_tmp_msg_0_1_1.z = 0.489646157712;
    tmp_tmp_tmp_msg_0_1_1.phi = 0.333645256041;
    tmp_tmp_tmp_msg_0_1_1.theta = 0.463012566518;
    tmp_tmp_tmp_msg_0_1_1.psi = 0.113989007426;
    tmp_tmp_tmp_msg_0_1_1.u = 0.123581743429;
    tmp_tmp_tmp_msg_0_1_1.v = 0.941851842035;
    tmp_tmp_tmp_msg_0_1_1.w = 0.472663171547;
    tmp_tmp_tmp_msg_0_1_1.vx = 0.673284655813;
    tmp_tmp_tmp_msg_0_1_1.vy = 0.673367308411;
    tmp_tmp_tmp_msg_0_1_1.vz = 0.212459192663;
    tmp_tmp_tmp_msg_0_1_1.p = 0.18670931862;
    tmp_tmp_tmp_msg_0_1_1.q = 0.60504847791;
    tmp_tmp_tmp_msg_0_1_1.r = 0.744349697655;
    tmp_tmp_tmp_msg_0_1_1.depth = 0.940325241233;
    tmp_tmp_tmp_msg_0_1_1.alt = 0.248564467049;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::IridiumMsgRx tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.origin.assign("SPMSZXBUUVIRGFLTLAKBLXAMMLISKTNKKMMZYORFXA");
    tmp_tmp_tmp_msg_0_1_2.htime = 0.739436775488;
    tmp_tmp_tmp_msg_0_1_2.lat = 0.0737628667617;
    tmp_tmp_tmp_msg_0_1_2.lon = 0.016162480599;
    const char tmp_tmp_tmp_tmp_msg_0_1_2_0[] = {83, -52, -68, -16, 107, -38, 51, 19, -107, -25, -116, 82, -44, -11, -112, -112, 57, -48, 6, 23, 116, -65, -112, 99, 80, -106, 61, 125, -76, -89, 68, -56, -67, 3, -12, -104, 59, 28, -15, 110, -102, 119, 95, -113, 89, -88, 74, 105, -22, -55, 5, -96, -55, 19, -88, 80, 101, 9, -48, 81, 91, 67, -101, 97, 2, 58, 124, -59, 61, -20, -23, 8, 119, -9, -2, -40, 126, 77, -78, 72, 8, -124, 86, -66, -73, 46, 58, 110, -28};
    tmp_tmp_tmp_msg_0_1_2.data.assign(tmp_tmp_tmp_tmp_msg_0_1_2_0, tmp_tmp_tmp_tmp_msg_0_1_2_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_2_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XMNBGQEJHKASRHGPCTHOHJYTTMJEIVOLZDGEACWSOPDJSSXGWWFII");
    tmp_tmp_msg_0_2.dest_man.assign("GVNAFEGRPXXJNFZIDWCDSRKSFVUNNBJPAQMRETTFNUMZJPSNSUWRPOYWGDXPIGNKULQOXSZTJOVRZDGQMVUTJHLJHYEHHOLBWHNOYZGQXRQMCAMHWMGNPQUCHITIBDBCYELQOLXYEXTUEAGPFSFOXLKRMXYFUYDRVAKOXVRBJCBYUSSFIQCVTTZPYS");
    tmp_tmp_msg_0_2.conditions.assign("QIHYDMGBBTMLQQUNZZDBACLMSJXRZPPGWTUBKOMSIPWAFJRNSGPCVQICPQTAIXHALPEXKKUJFSWCSIZEEWBSMKQZLVOUTWHJELTRSNKATDRUKFODCGZANFAAYUOTDHIQPQLUBVACYARFYDRDEWDQUCPNYFYSKZXBHTSJCXPMFVUDPHEOOCHHNYJWXGMWLLUERGIMKOXTRNFFVBZVFLNXJKGVGEBLIOM");
    IMC::Goto tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.timeout = 58700U;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.542593524387;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.715428902919;
    tmp_tmp_tmp_msg_0_2_0.z = 0.339568052799;
    tmp_tmp_tmp_msg_0_2_0.z_units = 6U;
    tmp_tmp_tmp_msg_0_2_0.speed = 0.190492078431;
    tmp_tmp_tmp_msg_0_2_0.speed_units = 243U;
    tmp_tmp_tmp_msg_0_2_0.roll = 0.926732465162;
    tmp_tmp_tmp_msg_0_2_0.pitch = 0.481981607125;
    tmp_tmp_tmp_msg_0_2_0.yaw = 0.458619480147;
    tmp_tmp_tmp_msg_0_2_0.custom.assign("TNNRCDBYUIGFULNFCAKWCMASKJUSPWYAZPMAYAMLDCQKLHXJORKEJZFVTZEWGWXTGEWBECLVBTHTHARCIEGRKZRBPU");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PathPoint tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.x = 0.806450162917;
    tmp_tmp_msg_0_3.y = 0.270756368018;
    tmp_tmp_msg_0_3.z = 0.566210263565;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::VehicleFormation tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.lat = 0.00573167160503;
    tmp_tmp_msg_0_4.lon = 0.618542282503;
    tmp_tmp_msg_0_4.z = 0.87363189407;
    tmp_tmp_msg_0_4.z_units = 144U;
    tmp_tmp_msg_0_4.speed = 0.99113991162;
    tmp_tmp_msg_0_4.speed_units = 148U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_4_0;
    tmp_tmp_tmp_msg_0_4_0.vid = 51771U;
    tmp_tmp_tmp_msg_0_4_0.off_x = 0.302464149148;
    tmp_tmp_tmp_msg_0_4_0.off_y = 0.718597444422;
    tmp_tmp_tmp_msg_0_4_0.off_z = 0.864599321433;
    tmp_tmp_msg_0_4.participants.push_back(tmp_tmp_tmp_msg_0_4_0);
    tmp_tmp_msg_0_4.start_time = 0.600048609158;
    tmp_tmp_msg_0_4.custom.assign("NKDVCEBHECYZBVSYFIGOGMZXUXEGUEDEVWNIDQRZVIPHK");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.154285561267);
    msg.setSource(48981U);
    msg.setSourceEntity(131U);
    msg.setDestination(11684U);
    msg.setDestinationEntity(112U);
    msg.command = 199U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AUIKEOUBEZTJWBCYQZDWRACMDOVJTJCXYIBLCRRQBWWVTLJVFEUNLJBLFHOQIDZDMEAMIDJZNNMGOVXFLMGYZXXZNBXKFOYRFMPDSTEVOQSLKAFQMADUXAVRPEUZSBQQIHHSUPZWTNTKJBZCEKYGFZWGYXBJWLVHPCTPCOSCLI");
    tmp_msg_0.description.assign("SMKXTXAVGRTOQHAYSMPHVGETSLAPKNYRQZDJFWVWCHZKBXFDNELNOTWLLPRIHXNOYFOUEWIXHAFUSVNALGLVKUCCBISOXJEMZGYGDI");
    tmp_msg_0.vnamespace.assign("JWIWGWVKANXXCUEQIVYRYLZGKEUFLPTUWSIRW");
    tmp_msg_0.start_man_id.assign("SSVCVVHSLYJZHZVYGQLCXSCMOYQGLCUMCREJPDLMMCJEYNIZOPJBTTQPHKBKIGGRDBCINSKGSZRHAFRDLZDETJAHUNISUWHRBBYFNTYRIKKFXWXTWBANVQTFDOONAESYXMOAPMLVXFPWIMK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UVSAMTUJPGZCOAPKWXSWTQSZSTVYZBADUEHOWPYDXNLSQMOLVYGQFDFTMPKVBGDHEYXWWUTIETCRLJEKXGEKNFHRJRLFAJVXZRFFKZCEHKJLJMDSWVXVPNQIIAJDOMMFBCOHNOGZXIQJBZEUCGSGILLQKNMXNOIPQUWREKNEDCAQMRLOBBSBYBIVZHYTBULDJDHZAPWIMSGBPXEMQTFFLAZOYYRNKGTIWFTCNRHYCUVIQRDPRXGVH");
    IMC::YoYo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 6718U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0831239140676;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.153327341008;
    tmp_tmp_tmp_msg_0_0_0.z = 0.948980025001;
    tmp_tmp_tmp_msg_0_0_0.z_units = 88U;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.402912698781;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.539310924764;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.540501962003;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 42U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("EUYLPGBUVCPIJEOHUHQZTCOHKPBDXMDSQOASWKLPVKLMUQJXZEQOMCDHZGDJAHJUGBNLATJVCNVTQRYGIXXTI");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::UsblPosition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.target = 5900U;
    tmp_tmp_tmp_msg_0_0_1.x = 0.615014079741;
    tmp_tmp_tmp_msg_0_0_1.y = 0.292972487981;
    tmp_tmp_tmp_msg_0_0_1.z = 0.703726018154;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::VelocityDelta tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.886659212717;
    tmp_tmp_msg_0_1.x = 0.030466465292;
    tmp_tmp_msg_0_1.y = 0.662481567794;
    tmp_tmp_msg_0_1.z = 0.364336207566;
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
    msg.setTimeStamp(0.151783915825);
    msg.setSource(47521U);
    msg.setSourceEntity(140U);
    msg.setDestination(45686U);
    msg.setDestinationEntity(105U);
    msg.state = 52U;
    msg.plan_id.assign("WPOBLGJWRAVWZXISLJUPIYWEIBDIESPEPKZSLZGSAPFHRBJIXSSCZFDMVFQCSBZGLBCXTFNFAPIYHWTKKVCNYXPIWRQVELOOZBMEHEXRATUQCXLYEYRZDDYIWMMVVXYTAEQOHXN");
    msg.comm_level = 176U;

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
    msg.setTimeStamp(0.598781044006);
    msg.setSource(12455U);
    msg.setSourceEntity(219U);
    msg.setDestination(22438U);
    msg.setDestinationEntity(250U);
    msg.state = 173U;
    msg.plan_id.assign("IAIRCTWDFQSGCXJVAGANYHFKDJRQWRNKMTIZIRFEYHPPBASKRPYRIQEICQIDBSRCZHNJLUAJXGAXHXKORSUVIEOWO");
    msg.comm_level = 54U;

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
    msg.setTimeStamp(0.538497899434);
    msg.setSource(20525U);
    msg.setSourceEntity(187U);
    msg.setDestination(42433U);
    msg.setDestinationEntity(206U);
    msg.state = 6U;
    msg.plan_id.assign("BPTWVZSEUJVKS");
    msg.comm_level = 14U;

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
    msg.setTimeStamp(0.696128602044);
    msg.setSource(24199U);
    msg.setSourceEntity(119U);
    msg.setDestination(36933U);
    msg.setDestinationEntity(57U);
    msg.type = 27U;
    msg.op = 55U;
    msg.request_id = 49977U;
    msg.plan_id.assign("SGFPZLGDCKHNCDSKLSWZAOMJSWQEKUKOLWKYMAZWWUMLYAIKIYGBZNHSRPWUKDMIMVPSAGDXTVNQZTFXVYFE");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 1005U;
    tmp_msg_0.type = 202U;
    tmp_msg_0.utc_year = 33267U;
    tmp_msg_0.utc_month = 103U;
    tmp_msg_0.utc_day = 61U;
    tmp_msg_0.utc_time = 0.721823510938;
    tmp_msg_0.lat = 0.667247690005;
    tmp_msg_0.lon = 0.164264302017;
    tmp_msg_0.height = 0.749895715675;
    tmp_msg_0.satellites = 231U;
    tmp_msg_0.cog = 0.503504947621;
    tmp_msg_0.sog = 0.454803257877;
    tmp_msg_0.hdop = 0.332026952659;
    tmp_msg_0.vdop = 0.259713778912;
    tmp_msg_0.hacc = 0.663460379979;
    tmp_msg_0.vacc = 0.812896472569;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IZLSUMIKRWFOCKDFXAOFFHOPBKYTRTVECNKKEWFKEYIOZTSNCGZWPOZQRVFJMTWMIGVAXOVLGAOJEVNVDUEQBENPWVHCSTZZP");

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
    msg.setTimeStamp(0.56906299746);
    msg.setSource(29566U);
    msg.setSourceEntity(216U);
    msg.setDestination(23927U);
    msg.setDestinationEntity(94U);
    msg.type = 63U;
    msg.op = 172U;
    msg.request_id = 4903U;
    msg.plan_id.assign("KEBVTNAKCEJUBVZYIWLALGRCZCFMQAJRFTAPXTHVAOITNMGBSMIDYURHFHHYFDDLEEGTYDEZNI");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 138U;
    tmp_msg_0.htime = 0.281137173571;
    tmp_msg_0.context.assign("FOFWHCGSYJSJXVNSQEWTQTRKUWAKUZGJSHARNBZSMKEFJAFZCGEDHHPRMTWZ");
    tmp_msg_0.text.assign("DBUDGLRJZZTSMZQJGETZKGGLVSGUVBHRKYAVTVPXLQVYRNSTIIEHJLKXAGAHWPBCRYYYXAOPDWAORFUHWQMEYMSKEEHXTOLTBZPZTVIWMXZRGWUXUCOIJOBJEIFCZMCUKXCHMPTJNPDZF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XOHLDKZJDTYJNVGDDGICHDLLIUKSQCDNYRCUNFOWSSOAXPLMECNFSYANXEDBPRYPVLTUYJGJXJIAFLKAXQSFYLGMZMGIZGQCPQRUGQFMEMQZEOOATKTIBDPYZSBPFOAVSHJHRVTHIXOEFIECEE");

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
    msg.setTimeStamp(0.561019854639);
    msg.setSource(43840U);
    msg.setSourceEntity(103U);
    msg.setDestination(45301U);
    msg.setDestinationEntity(117U);
    msg.type = 186U;
    msg.op = 199U;
    msg.request_id = 12004U;
    msg.plan_id.assign("OUPUEAPFWQZHMTXXYQNVMLMJAFQPKODKMPDGGYFINHRVWWGWNEUOEXITVDVLXJGKVGWVIBZDSRBYBFBMJHFSPJSCNTBOMCGNCELAXJKGXAMTBFUNOXWTAKLDAVIZXUFCBNRFHZQICJRDLFHUYCCLZVYPKOWBXTZQKZYJBVCAOSBYDJCSNRPESSUQHHAOPMLUKQUGYIHDZZLLRYFQIONMEATJMIDDSWPSRNWEUHZETYEVKOGTERHLK");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 16U;
    tmp_msg_0.value = 0.223907586883;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FXKYOURRWSZMVQMGDUEHVPTPJTZTVNWCNCMWQJSXZFIVLXREBPHZSADVUZIURNHHTYWCOBUYHCPOXDUDIEJQMTKYWFWOSITRARYEWJEQPRSUJWSMLFVSQCRXGGLMNZEKUQFMBHLSFKOFELUSRVPOBGJPITLHITLPCPYEA");

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
    msg.setTimeStamp(0.941096747182);
    msg.setSource(51221U);
    msg.setSourceEntity(155U);
    msg.setDestination(31477U);
    msg.setDestinationEntity(55U);
    msg.plan_count = 10533U;
    msg.plan_size = 394822190U;
    msg.change_time = 0.761386985308;
    msg.change_sid = 24137U;
    msg.change_sname.assign("CWMYTHARBNHETQIKDNSPAOSSJAQT");
    const char tmp_msg_0[] = {-53, -87, -79, 57, -82, 41, -34, 67, 82, 42, -95, -119, -20, 90, -6, -74, -80, -9, 18, 26, 111, -40, 87, 44};
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
    msg.setTimeStamp(0.623688344048);
    msg.setSource(34964U);
    msg.setSourceEntity(22U);
    msg.setDestination(61763U);
    msg.setDestinationEntity(125U);
    msg.plan_count = 49264U;
    msg.plan_size = 1008369525U;
    msg.change_time = 0.122719293538;
    msg.change_sid = 16353U;
    msg.change_sname.assign("SXZWUVLAPQKFCREC");
    const char tmp_msg_0[] = {1, 106, 5, 105, 25, -54, 6, 112, -16, -61, -32, -100, -7, 55, -84, 89, 7, -100, -125, -30, -31, 107, -109, -116, 22, 47, 89, 38, -77, 63, 99, -123, 72, 54, -65, -119, 123, -42, 121, -126, 32, -96, 87, 27, 120, -74, 89, 12, -33, 2, 61, -19, 107, -122, 84, 24, 101, 86, -39, -79, -59, -20, 17, -22, -67, -31, -38, 70, 96, 25, 97, -79, 86, 49, 110, -2, -117, -4, 71, -71, 55, 106, 85, -14, 98, 111, -67, -100, 117, -102, -45, 63, 118, -75, 23, 4, -10, 33, 73, 72, 30, 31, 124, -69, -90, 49, 87, -34, -107, 69, 91, 24, -10, -58, 100, 11, 13, -126, -34, 90, -60, -57, -57, -63, -11, 103, 72, 18, 14, 55, 76, 59, 62, 8, -108, 8, 117, -26, 107, 31, -97, 63, -20, -34, 123, 22, 65, 9, 121, -46, 41, 65, 64, -19, 85, -115, 8, -28, 105, 9, 36, -53, 44, 7, 81, -107, 43, -128, 22, -107, -68, 23, -124, -9, -118, -102, -10, -52, -91, 72, 72, 71, 96, -8, -57, 61, -19, -34, -35, -91, 104, -74, 68, 86};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CSGFGWVOJIRMYVXFUNRRKPEJZSYUYWZRWVTHKPDMLXXNBWKYSRKBHGDKAIQZMBGYXBHHDIWRNDQVHZGULVSOBDNAAMQNZCMQNURFWMQUXZTFEAXARFPNJHPESNXICOAVOKCJYATQXHMIQEYZGLIXPCTBSDTOPCBBPYD");
    tmp_msg_1.plan_size = 37559U;
    tmp_msg_1.change_time = 0.245179585297;
    tmp_msg_1.change_sid = 52157U;
    tmp_msg_1.change_sname.assign("QWKSVFJSLDQLCFIGSQGFLYLXULJFTZYRCZPAPGLYNYLXDFKYBMLGDHKMUHSAMHOAMHWNYKNWHUQKRRXEQFDSAJCVKXRRXBXGZRANRKJINPWUCUTPIONDIICQNIEVYBCWWRAEMGHEVZTWKWTVRCGPMTUDKPOLAHVTWOUXLOGDEKPVOUTJJ");
    const char tmp_tmp_msg_1_0[] = {-76, 58, 74, -61, 121, -107, 69, 32, -67, -82, -89, 57, 87, -108, 16, 75, -120, -5, -108, -26, -24, 24, 69, 51, 96, 62, 87, -10, 10, 96, -68, 112, -63, 33, -51, 28, -13, -127, 81, -95, 76, -21, -37, 95, 45, -41, 26, 51, -32, -27, 124, -99, 96, 121, 6, -63, 72};
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
    msg.setTimeStamp(0.3316034405);
    msg.setSource(28173U);
    msg.setSourceEntity(98U);
    msg.setDestination(22001U);
    msg.setDestinationEntity(6U);
    msg.plan_count = 7111U;
    msg.plan_size = 1713439116U;
    msg.change_time = 0.930427618881;
    msg.change_sid = 58338U;
    msg.change_sname.assign("FGOYKEGZCDPVWWLXGVIGLCMLRSRDLQCLMWAGBFZAOPHEJPNTJCAFKNVWWVMYLAOYDECNLTRZDUPXDOUGWBZSLIFXFBFPMUXNQBHUMYTHQMRKCESDEICBDCICFXHSJSODFIUASB");
    const char tmp_msg_0[] = {3, -68, -2, -106, -49, 36, -30, 122, -9, -48, 72, 37, -6, -51, 76, 113, -18, -13, -128, 115, 89, 45, 60, 66, 10, -17, -110, 62, 119, 94, -100, 75, 125, -23, 43, 24, 58, -123, 43, 83, -78, 56, -36, -63, 107, 19, 67, 30, 51, 40, -81, 29, -9, 21, -54, 47, -104, -127, -24, -127, 15, -85, 29, -44, -126, -57, -107, -42, -115, 95, -37, 13, -64, 66, -27, 52, 93, 21, -74, 93, 13, -32, -62, 94, 84, -88, -66, 73, -106, -101, 56, 73, 36, 80, -102, -6, -77, -46, 27, 51, -15, -26, 31, 62, 31, -7, 76, -22, 7, 25, 17, -20, -105, -108, 72, -25, 91, 28, 18, 80, 60, -103, -63, -6, 12, -117, 89, -62, -86, 98, -80, 87, -72, 39, 121, 94, -104, -123, 88, -116, 52, 51, -78, -29, -113, 86, 100, -7, -62, -41, 46, -61, 65, -62, 93, -114, 52, -87, -110, -85, 8, 87, 0, -120, 14, 17, -118, 94, 99, -23, -20, 78, 83, 3, -63, -61, -9, 95, -87, 67, 97, -77, 99, 32};
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
    msg.setTimeStamp(0.699330179992);
    msg.setSource(34539U);
    msg.setSourceEntity(202U);
    msg.setDestination(39519U);
    msg.setDestinationEntity(49U);
    msg.plan_id.assign("MROIKSJHOZRANQYRBF");
    msg.plan_size = 2745U;
    msg.change_time = 0.215810237812;
    msg.change_sid = 24273U;
    msg.change_sname.assign("IYBHKMSNJCOVTCKTSBDSBFJLVPGBPGKX");
    const char tmp_msg_0[] = {124, 20, 13, 11, -119, -40, -79, 80, 100, 98, 87, 10, 114, 5, 110, -68, -122, -111, -45, 39, -127, -65, 118, 60, 49, 119, -4, -108, -95, -111, 37, -84, 119, -40, 89, 46, -119, 34, -17, -93, 117, 85, -65, 50, -5, -96, 56, -59, -12, -90, 9, 90, 67, -1, -105, 101, 20, -95, -96, 19, -66, -111, -60, -16, 63, -2};
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
    msg.setTimeStamp(0.641449177886);
    msg.setSource(41465U);
    msg.setSourceEntity(66U);
    msg.setDestination(24597U);
    msg.setDestinationEntity(176U);
    msg.plan_id.assign("ADYEWRDIEGBNZWP");
    msg.plan_size = 31717U;
    msg.change_time = 0.0328154582186;
    msg.change_sid = 23660U;
    msg.change_sname.assign("DAGXCVBQCUDPPOQUKCTTLLRNCGDHSJQEMVDSFFSUJKQYERJDXSYOYLETEXEBRVVZFVPXOATMSAPMIITIKFBWCRYAKFFWSKRJYGPCZVEJNXLSLHZMOCJJZN");
    const char tmp_msg_0[] = {-123, 9, 42, -19, -120, 75, -120, 85, 113, 40, 75, -77, -77, 10, 118, 83, 82, 27, 97, -58, -9, 93, -4, -71, -98, -75, -121, -55, -83, 107, -12, 80, 6, -88, 2, 76, -4, -83, -73, -75, -31, -120, -5, 33, 94, -108, -75, 89, -61, -102, -12, -7, 76, -79, 21, -75, -5, -40, -12, 78, -121, 73, -62, -72, -48, -61, 113, -1, -120, 35, 123, 91, 28, 84, -53, -13, 104, 31, 108, 53, -89, -12, -117, 94, -26, 44, -116, 43, 77, 17, 9, -110, -77, -102, -117, -68, 84, 12, 54, -11, 58, 62, 72, 83, 66, -106, 26, -120, -61, 77, 122, -16, 81, 110, -65, 30, -118, -89, 62, 49, -101, -96, -97, -20, -13, 43, 28, 18, -127, -113, 17, 92, 104, 72, -97, -1, -76, 124, 51, -20, 63, -80, -113, 27, -10, 76, -94, -118, 8, -82, -55, -127, 106, 0, 35, 122, 83, 87, -7, 92, 1, -61, -20, -69, -16, -84, 95, 45, -28, 82, 110, 98, -123, -34, -127, 72, 69, 96, 86, 87, 29, 12, -95, 22, 121, 103, 60, 115, -3, -28, -1, 99, 25, 18, 123, 40, 18, -51, 55, 83, -98, -112, -92, -118, 124, -25, -64, -13, -8, -46, -59, 114, 58, 101, 19, 47, 95};
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
    msg.setTimeStamp(0.65809687253);
    msg.setSource(62262U);
    msg.setSourceEntity(28U);
    msg.setDestination(13216U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("YGSSRIBWMCQMOXGHWJAIJHVMZUCSDTIPFFSWVVFEMYKPOPMNPBTGKECRGNGQZINCDNXJDYFFCMYVJERTLWLYQHAHTZULPLFWXVZOPMMSKGLZHKMAAFROAQDRUNOVGNUIOXUXEOCAFIZYQLKXGUBCDEFRIQWTWJULPABQDNRZBUQTLRFXRKETL");
    msg.plan_size = 36799U;
    msg.change_time = 0.624738447652;
    msg.change_sid = 22673U;
    msg.change_sname.assign("VMLKFZIJCSKNRQNLOSKPQIGBHDACGOPEPOMUPGKLVCSWZXRPXNQQRYVNITTAAWWOLQSDRYWMKBVHKOULYNXTDDLFUHJJEHYKTPBTNFKKYRELVIUHZPDDVDXNMXMMPCUMISES");
    const char tmp_msg_0[] = {-121, 68, -82, -19, -13, -98, 7, 28, -84, 89, 49, 9, 107, -100, -15, 19, 67, -25, -34, -113, -111, -59, 126, 75, 92, 116, 47, -86, -81, 31, -38, -40, -18, -68, 119, 9, -27, -58, -39, 89, 54, -11, 59, 96, -8, 91, -116, -23, 32, 4, 120, 120, -8, 87, 58, -121, -106, 89, 125, -114, -69, -17, -68, 68, -43, 8, 105, -99, -60, 17, 52, 2, 4, 56, 50, -32, -33, 42, 66, -5, 68, -27, 48, -54, -24, 110};
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
    msg.setTimeStamp(0.322248143554);
    msg.setSource(28082U);
    msg.setSourceEntity(126U);
    msg.setDestination(35241U);
    msg.setDestinationEntity(166U);
    msg.type = 185U;
    msg.op = 126U;
    msg.request_id = 51695U;
    msg.plan_id.assign("MBHYBYXWUIMGIBUEJQLGNOGKWZZXXQLNVCTQVEWEFGTHADLKSYGVWRJFIZDMLHCLSLVCPTEZNIDEQAZWGAPQUJCLRGNOSQDTCNILQIPMAKNQMDXHMFRDCHQH");
    msg.flags = 45782U;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("UFMTSHFQUDAAIOCJVDRNOHNUIPWLQYNIPCPIXCDQGJBKYSVFDKMYDDGPRPPDHVSHOBWREFLNEKKLVLGXPVIJELKSTURKIATTEBFMKITFHQSCZMFAMZXWFSTZWFVTMNOKDEUCDXVTWCHWLZPSEIEXUANITLGCZBOWJINBQHJMOUPKGGZYCXYNAJGZLHRGUPQARXSRUBJRCXYWBEMZHCEWQAYWNAMBKVFOTVZDQJOZMNJYRGUGOBOABSR");
    const char tmp_tmp_msg_0_0[] = {-123, -113, -60, 0, 0, -36, -21, -72, -82, -39, 53, 64, 15, -53, -53, 12, -7, 41, 119, 81, -10, -108, 97, 103, 81, 93, -104, -8, 39, 70, 36, 16, -11, 74, 83, -7, -43, 0, -16, 48, -27, -67, 62, 108, 72, -23, -101, 91, -102, 119, 38, -73, 43, 31, -35, 66, -63, 75, 125, -115, 57, -30, 116, -46, 75, -48, 41, 95, -39, -88, 9, -51, 4, -56, -57, -21, -20, 49, 71, -97, -24, -11, 118, 62, -26, 14, -26, 46, 14, -93, 50, -69, 115, -12, 107, -72, 49, -81, -97, 31, 43, 64, 24, -125, 44, -78, -68, -44, 50, 30, -59, 57, -75, -25, -73, 53, 4};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MERXMKEGJWJGCTFFXJFNBWCCLOMPSHIFUSXXOKSLUBWJZURYEHRQOATPVRTGHYQUWSXVCYTHZGTDGHIYNLZHQDSTOMHBVEDQBVPFRWAMYJYEPLXRAZVMAWGJINJFTZIGFHSDIGOAHQNRBRUEHQWXXKRNPLNACZCBKSUWYDSMCMIOLULBDOGDPQJKWVQNDUIVJAZYOSONNIPJQDKXGPVLQOCZ");

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
    msg.setTimeStamp(0.501789634253);
    msg.setSource(30023U);
    msg.setSourceEntity(138U);
    msg.setDestination(30465U);
    msg.setDestinationEntity(49U);
    msg.type = 64U;
    msg.op = 3U;
    msg.request_id = 36498U;
    msg.plan_id.assign("PPSBZYXRHFIQTIERMAIQDLBVAQNWDYTESTXNUYEVZHH");
    msg.flags = 29719U;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.22320246777;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DOETWMVECRQMCOPEQVFBKYIYQDASSXNTAKLQXMUUJFRXWOPWDOHJNIUEZJEHIILAGNPCVRVBJIRLNFHIGWUFYXVGRHQKDHVELPZYAZVBFAGZSIZCDDDMPMCGPXTQYWYWSC");

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
    msg.setTimeStamp(0.208450440132);
    msg.setSource(8389U);
    msg.setSourceEntity(242U);
    msg.setDestination(65151U);
    msg.setDestinationEntity(24U);
    msg.type = 158U;
    msg.op = 168U;
    msg.request_id = 52009U;
    msg.plan_id.assign("KHEMVIHALWGARXWJXQKGDTUYC");
    msg.flags = 18864U;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 51U;
    tmp_msg_0.flags = 77U;
    tmp_msg_0.description.assign("JQITKWUEXZDZAEJRJAWFVTCATDHGTOSLFAXYNSNTNADBGNGDUIMRO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UOPICBCSWCXSYSUPHBXDAELMOEQAKCLDOUKXSJTMVBNYQUWJRLUJQZMGDRTTMZHRCAXNGAIDFZGFTHFQEJDKPEHYENRIHWFOSNFUSFBVAUCPAY");

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
    msg.setTimeStamp(0.78260097368);
    msg.setSource(63956U);
    msg.setSourceEntity(135U);
    msg.setDestination(31727U);
    msg.setDestinationEntity(26U);
    msg.state = 159U;
    msg.plan_id.assign("QZQXBYWDUIAMFTFBJRZRWRLTKOMWVFNLTDPCSRDLJXNIYZZOWWNICHDPDDPQIARMEAUQBMUJSKJNFEEGSSXERFNLRUPCBLEJFRFMZYVHJPGCAIMMAHYUWDMXJUIECVDCUSUMVOLZUYZGJVPBLYTKOSXATPSXQTQCIIGHOBKKAFYVEBNQWNYGWPHIWXSGLFSZTVACXQEXYJHJIAKORCKXGUHGWDOYHGKVDFZLNNTMNK");
    msg.plan_eta = 431971399;
    msg.plan_progress = 0.887467221021;
    msg.man_id.assign("AWPJMLVDQNRDLXWQ");
    msg.man_type = 6877U;
    msg.man_eta = -501255049;
    msg.last_outcome = 33U;

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
    msg.setTimeStamp(0.505207024294);
    msg.setSource(5660U);
    msg.setSourceEntity(160U);
    msg.setDestination(6947U);
    msg.setDestinationEntity(156U);
    msg.state = 46U;
    msg.plan_id.assign("EHTSALQHATDQCOSCYBBLZIIIOIYCACPADUBMUZZKLNCTOWQNKGCZHBEHEDLLKESFEYZGMHNTJAKLIVVUHMRIPZQPGQCHAMIJDKUFSYHBFOGAPPFUSXJEDNOEQVRQGJRJIGNTOMXAWFMPUVBWHOCLOBVJMRWMKRD");
    msg.plan_eta = -672482787;
    msg.plan_progress = 0.159378762052;
    msg.man_id.assign("XGWNOZRYXZWQYLDBLPKTGUNRJBYKHRIFOOS");
    msg.man_type = 30558U;
    msg.man_eta = 675400939;
    msg.last_outcome = 9U;

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
    msg.setTimeStamp(0.870731701875);
    msg.setSource(63028U);
    msg.setSourceEntity(218U);
    msg.setDestination(37288U);
    msg.setDestinationEntity(120U);
    msg.state = 45U;
    msg.plan_id.assign("RGMZLKUPLCFIFXLVVYGFDTNFDBJEEBICUFHLKARDRZAKBQPOXARACESIHPKZIOWAPMEEEUKNMIJSWGSVDEOJZAAWNY");
    msg.plan_eta = 1269188505;
    msg.plan_progress = 0.181247120418;
    msg.man_id.assign("UESAUWTNQQBPFYBAJTWJZIQTPNXKYLDKPPCGEEPMDOWUHVWVKMIRENIJKMHLSGUEZRAMZQODVDEQJHBIDXITYOWOWSPRSAYQMLWFUVZHXMZKLZACWAOSPSUPYSAOVKANTRSGRNGDPEBXIJKAXQJXIEFNZLGMQYBQFFDNBFDICOW");
    msg.man_type = 35796U;
    msg.man_eta = -460613041;
    msg.last_outcome = 205U;

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
    msg.setTimeStamp(0.882471995658);
    msg.setSource(42919U);
    msg.setSourceEntity(89U);
    msg.setDestination(53429U);
    msg.setDestinationEntity(184U);
    msg.name.assign("LXVVLJPEMRVMRGUPQCSIBHAKTCHZFYADTOSZAIISSUJDLQGZBCHISPWMFYCDPNXBNADEYXGKWJNVKXRMFOFEBKVNRMTXMWEQRVPBJPNTNLMCJQFRUHPJDWUYLFXJDCWJIMHOCEHXWUUPAVIHTQGOYIRDTHHOYZSESNOSFEKSKSFEXZXAUIKBAQGCKJGDDDELQXZWTAYVZBFWTKLNKQYHOUQMJYMVUPGLICT");
    msg.value.assign("UXLQNGREFOWHVDORNXXZXDEWIBTKFMNMYJTHRPHQTAGGEPTMQVAKZFQWQYKKVNRYKBANZDQJHRUAYXUFOPUZRVI");
    msg.type = 134U;
    msg.access = 14U;

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
    msg.setTimeStamp(0.499512707557);
    msg.setSource(15273U);
    msg.setSourceEntity(231U);
    msg.setDestination(32224U);
    msg.setDestinationEntity(156U);
    msg.name.assign("FTAEVATDRLVDWMWYPDQJZJIQBKLYPJENLITZICQZKVYEWBFAGQRWV");
    msg.value.assign("CKQCRKYVMBOAOTENLGLTGBINOLEIXZMOPYTPXRJYSQWAEHPHFTUDDKXTAFUSPQBODZAPPYABKXOOPKNNSVXEVJRHXGGWGINTKNMGIXWENFKTWOTTXUQHFZJMBBHWDJKNAULMEXLQFETQJLDZS");
    msg.type = 244U;
    msg.access = 80U;

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
    msg.setTimeStamp(0.447598684404);
    msg.setSource(13992U);
    msg.setSourceEntity(76U);
    msg.setDestination(11483U);
    msg.setDestinationEntity(26U);
    msg.name.assign("QKIQSZMUJVZQSLLMVAXWMWLTIPRFPJNMDUJ");
    msg.value.assign("GBSCPTJYECVEJIQHSAXSLZJIGMUCSYIOLIXQFUNMLJCPNPHAUMCKERMNRHPNWPTHWSMGKBEVBKXXVEVWDPJBH");
    msg.type = 254U;
    msg.access = 216U;

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
    msg.setTimeStamp(0.788650970715);
    msg.setSource(48847U);
    msg.setSourceEntity(211U);
    msg.setDestination(24306U);
    msg.setDestinationEntity(106U);
    msg.cmd = 220U;
    msg.op = 184U;
    msg.plan_id.assign("ATSPCFRKSZKPCNGNTXCFQQJVXDEJIBTLJDC");
    msg.params.assign("NIKDUJJXQBEGFYYKCQWCZXVDSBRAVQDBUTPHNNDCLJXMJA");

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
    msg.setTimeStamp(0.0639241341941);
    msg.setSource(60519U);
    msg.setSourceEntity(127U);
    msg.setDestination(8652U);
    msg.setDestinationEntity(144U);
    msg.cmd = 251U;
    msg.op = 112U;
    msg.plan_id.assign("XPZWYSNUBJBGLUWIXWJUHIFOPBQLOJVMYDVWTZIOIXTJOPHLARXRHRZKEWRDQUCNCYJSBCVHNTADMNYZNRROVBQWANJZRFXPJZGCWBXXPZOLGVHYAVTOGVQITMEPLEDKUIFLQFVFKBANQR");
    msg.params.assign("HWMIZKDWAPWJPDVPBYJKXFQWMIRABLMJNFDJPUMQEZUXUSKOECNXZHBOJLNXEPHJAOIHVTGXDSQEMSZEYVBUOXTTTGBACLHPUDDKQHBHFEJNBJIXDMTWCUNBJOCTXHBCOVIKHXVDKMGWQNQYALPGMUUORFVEFIRLOTVQENYDZQWUYASP");

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
    msg.setTimeStamp(0.63244845754);
    msg.setSource(18382U);
    msg.setSourceEntity(227U);
    msg.setDestination(57365U);
    msg.setDestinationEntity(107U);
    msg.cmd = 106U;
    msg.op = 116U;
    msg.plan_id.assign("UUENLIXXPUEKOGWUVKLTLEVFYGYEIOGDTNTKOBXSZDNIBQFSLFZFOGPAYGYEQAAJKTJZRXWVUMFCPUHKEJPTSIKOJFDZBWXHYPHMJZEMLMRMDITNUHRFIHCQHWJMSOMAOCYBLQMPEIOFQGJHRFGLOJVXWKZFVZVSPCPDEVDMYGRVINCUBRRUARABTDRKNSZYDQSGIWBHZTCQLVSWKABTJXVMADAQYDPANXXLTYPWCCWOSCQCBXEIHKZUBW");
    msg.params.assign("RHAJCPKOANNQUIMOQHEIXFAHESJCZHFVISJRHVVNYRBBTBRYUXUOXSGCSPWGMHPTWBZFGLJQSYGJGQSHCBVDVTTNOYTWSQFROXHVTSKFEKTAHN");

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
    msg.setTimeStamp(0.0890139088642);
    msg.setSource(48660U);
    msg.setSourceEntity(1U);
    msg.setDestination(16214U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("MSQDXGMQRCKGKKOIRAZHCBKUDGYJQLLUPJHVUNTPKWYOBVTSYCTFEFPKZCDMEZOHTYQOFTBLHIWWSVHTIDLVIWXOAINBMQBBRFSACJPCGOTFWLIJNUVRRVVAQNQGRPWNQFIJRDTJUB");
    msg.op = 251U;
    msg.lat = 0.182709201748;
    msg.lon = 0.326711390913;
    msg.height = 0.46133574821;
    msg.x = 0.437526443796;
    msg.y = 0.556347997738;
    msg.z = 0.594913634212;
    msg.phi = 0.0027677444126;
    msg.theta = 0.537451574334;
    msg.psi = 0.199895453;
    msg.vx = 0.495700732393;
    msg.vy = 0.948835467526;
    msg.vz = 0.118850438748;
    msg.p = 0.321529152308;
    msg.q = 0.441407120422;
    msg.r = 0.490107402924;
    msg.svx = 0.345334327189;
    msg.svy = 0.929309434951;
    msg.svz = 0.74634074223;

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
    msg.setTimeStamp(0.318423403181);
    msg.setSource(60227U);
    msg.setSourceEntity(154U);
    msg.setDestination(48491U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("NCLOTRSYKCDXGSXBICJBVCREBZBQKWFA");
    msg.op = 123U;
    msg.lat = 0.123680073502;
    msg.lon = 0.305229165528;
    msg.height = 0.418544154696;
    msg.x = 0.287694382874;
    msg.y = 0.0920953971738;
    msg.z = 0.220479857288;
    msg.phi = 0.756814588919;
    msg.theta = 0.0033893387164;
    msg.psi = 0.835941309136;
    msg.vx = 0.989078837253;
    msg.vy = 0.550570124205;
    msg.vz = 0.564720356508;
    msg.p = 0.503214986955;
    msg.q = 0.0243372100689;
    msg.r = 0.954523255349;
    msg.svx = 0.608030045427;
    msg.svy = 0.0314978526799;
    msg.svz = 0.931442677068;

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
    msg.setTimeStamp(0.696214330147);
    msg.setSource(34111U);
    msg.setSourceEntity(200U);
    msg.setDestination(14767U);
    msg.setDestinationEntity(46U);
    msg.group_name.assign("CFWXLDPZZHFPGMGHPQURTZOAHMAJVTFVHGTUJJMXHHFNLLHCCBKKKMNQIYMSIDUZDMFKPLPDAEYDYSFKVVYRFXVJPWEAETQSUUZDIZCXQQTNLGIMBAOBXYSYOTRWJLCVRBCUOGUQVPFYG");
    msg.op = 44U;
    msg.lat = 0.436344458935;
    msg.lon = 0.276344988171;
    msg.height = 0.0647956463255;
    msg.x = 0.20380457769;
    msg.y = 0.351819887497;
    msg.z = 0.510196085043;
    msg.phi = 0.348471112162;
    msg.theta = 0.625964704281;
    msg.psi = 0.905659393544;
    msg.vx = 0.831837590116;
    msg.vy = 0.435916270865;
    msg.vz = 0.45081436165;
    msg.p = 0.0547351656537;
    msg.q = 0.0414204948311;
    msg.r = 0.144596726277;
    msg.svx = 0.731875153289;
    msg.svy = 0.383749902078;
    msg.svz = 0.85772098745;

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
    msg.setTimeStamp(0.875862016186);
    msg.setSource(23373U);
    msg.setSourceEntity(150U);
    msg.setDestination(3075U);
    msg.setDestinationEntity(140U);
    msg.plan_id.assign("WAAKLIVTWGIVJYPKBMWDDSEGRYGDSPFIASHTHBIQBKOWMGEHHDDTRBHUSFIMWPXHOUXVPMKCKNEEZLOGXNSWJUMHGQUKVFCYPMYPSJCSFRIGIOIXLAGXJGVXLERVJLHTZNEYBLDQZUXBOTZKZNMDVRCXQMVAJLUUYNFDOZBELMSZFCQAKTNNPCAYPPBKARXQCUIOEURTNHYTOC");
    msg.type = 106U;
    msg.properties = 39U;
    msg.durations.assign("AXKYAHVWDSMZCNEJIKUOTF");
    msg.distances.assign("VKSMNWCNCQSFGKUAVDRFRECATJKLINCZWTGCKTVLCHXYUDWPPHGIORUSLJREOAOOYYYTZEPKMSRLFVJEWMUIDHVFLQFYWYFLQEXAKVXOURZEPSYQIFFYDNMQFANJUJBUBHKLKMZOCOEBZTPTIIMXNLOBHGJJNPVGKSSNBDAAFTCMRQPUHRPSJHHZWMCXCHWZUZXPLDMDXIQGSXVJAWGQIAGKGVTTODDBRYQMNVXEIHZ");
    msg.actions.assign("WPTPIYVIKANNTRJMMCBJZGFVJQPPUIKOXQBHHJCHBNNRXPFDTREGHVOZLAEBPEBQQXDJFLMTYYKRIIOBILCBCTSXJVTNDNYHDKMAYIJPTMSXVAHYVUHUAGHGQQGWLDROFEECLOCLAJOWXNUZFZVNIXKOGBSW");
    msg.fuel.assign("NWMWQIYPQUFPEZULVMDUOVSQFYNPTWQHJUYTXGHVRFENOLKGWFIGTRJMAXGWBHXTDOHYVFCJLNPOJNDVANKIRYWNJZGKMWNSFEROECZHQHRSQSKDVDLOFZKBZMXMD");

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
    msg.setTimeStamp(0.439562386581);
    msg.setSource(23880U);
    msg.setSourceEntity(107U);
    msg.setDestination(26127U);
    msg.setDestinationEntity(99U);
    msg.plan_id.assign("MTPJBJWXURBFHAWVJCXKWLOXNAUXSEFNFRLOPSRDXMBMZCPHQVOMWDRHSYBSZJVGNLDTCTWHWMCGVOIFGOUAG");
    msg.type = 130U;
    msg.properties = 99U;
    msg.durations.assign("WZPLQMQIRWNBCPVUOIHKLLPFVHMFXLEVUGGCSYWHBOCFVJPQVAIQAEINUOGCRWNWSHMHIJGETOKRBWOKQRTTYPTSZBJYSSIGTXEHMIVDDEEOWEQFU");
    msg.distances.assign("EDKNGIUJNTYNATKBSMJRVVHDEGMUVCYVTOIYDPKLMPDVKKCMNMGJLRPOVYTUTBAJRFUSHAMXWDLIMRKOBDVNRFYOZOLLWDRKQZXSZJTQAOWOLCWEKATBINBUHPZRALOJZEFISAXUEGNNFFQGFJIPHVQTAHWJJIGSXUEIJQPLDQMMIYCRNWRFTKXIGA");
    msg.actions.assign("QVTJVVMCGIJLVJKNRIUJIMSFWMHULFXODPFHUCACRELJRUZZGFENATXQOGSWWVYATJNGRYQQZNWFRUGEITVLUAEAJUMXKCSMOSGOVOTBLENWNBALCDBAQLWYRRFXPDCVSBKBPODPXLG");
    msg.fuel.assign("ULRMHCBMWTQBMNLSPNGMKDRLZ");

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
    msg.setTimeStamp(0.747949756062);
    msg.setSource(42306U);
    msg.setSourceEntity(1U);
    msg.setDestination(18080U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("NNRVFBUHOIRUMFPAMXYVNBJJTHQYZLZBQEDMFMRLAKYMDWHWUHYIYESWLZHYIWLTOVPBLELDLASGFFZKSFVVJYCXYGYGJQRVCINEZOHIISEDRWXWOPCATCNQDFBAFMQRGHCUHZCJETKKBGIXTSSUVPZTLVPSBGGDHRVNCQUHRIETSKTBOPGQJOAXDVQSXKXARFEPZKTANJZZWJLRQBOLQDODMFNCYUEUGNMUNKPTSMXKECPCMO");
    msg.type = 1U;
    msg.properties = 170U;
    msg.durations.assign("MXOCIEUTGGRCACPBDSEKNARQPGELDFCDUHKVJWUHVCTDTSOQIBYTWLFRXPNETYGDAAEWQJMKKZGEKCZDUWOSVRREXROMBXIOIVHJHVSOLVQXVVSYWXAQPDYZIULZHIWQWTRSZGJCUPTIFFBJLJBLMMINFAQK");
    msg.distances.assign("FQPKDAHNDJGICOFQWWMXBGLJRRIQSREPGKOPNWVJBUTAOWZVDSUUYCJHJLHTEADHAYJFTAKGQFCZQGUVLNVZMKRLCQZPBGBFDMJLZGSDAZMKCBNONHMUTIPYOTFIBXCJVREXDXSWRXLSABZHTILDXMSQTWVXLENNIEOFHXZQONURHSYFGQERZ");
    msg.actions.assign("XAEVFFOTGVAHOSZARBFSDMUBCOUJJKMSHWIHQTGEYGXUNWHKOFWMSQXITPQQMPVNNWKWLEDPYEVJYYZCJVSJPUWEJBRZYTFUITRRQIBUAXJDKGXEKCGTRVJORCMNILCHPDXZGTJSBSYCGLKZKPBYSDMIVRMZLQWXQSDUNAAKOIWILUTVLFHCEABHONNCDXHXPWLLROLDZJABCFQERAKN");
    msg.fuel.assign("VNJFFAWUHNPCZLHRNDGZOJWPMSXIMUEFBNTCVLHKYJFIXORDZVFEHXCUYGVDBGIBAYBWBBIEZMVQUWJTDNWLMKUPQIXSRFOAJCGLFEFVZAOJSVYKGPPONDMIAHONPUZAZHCLPRJAYKJQKLBXJWKCVNUYNKLWYURRGKRLVTEUGAPZQMWTSQOTMWEDPBMICGTXBFDHYTMSRCTRXIVQILYEEEZHOC");

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
    msg.setTimeStamp(0.698838155942);
    msg.setSource(24779U);
    msg.setSourceEntity(60U);
    msg.setDestination(14896U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.441565189986;
    msg.lon = 0.430161290357;
    msg.depth = 0.609324744658;
    msg.roll = 0.730809842159;
    msg.pitch = 0.0122169582924;
    msg.yaw = 0.422665435883;
    msg.rcp_time = 0.0720132112085;
    msg.sid.assign("XMXLNYYNTVEQGPAXZSLKBPDBIYMSBDBWIKRJSFEWWABWGKBLAVGBDFAREFLORESDPWABOVYSPVKJTNJWFXHDXXRPFPZVNCUGNKILFONKIXKTVFRELCTGHMQIDUJEBVRZQWJAASKQCYAPDHVQHCTYQSPUZRJQGOCRWHTLJZHGXOTMCQFAV");
    msg.s_type = 204U;

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
    msg.setTimeStamp(0.558906191941);
    msg.setSource(14192U);
    msg.setSourceEntity(87U);
    msg.setDestination(54102U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.330295238379;
    msg.lon = 0.66528472001;
    msg.depth = 0.847859812756;
    msg.roll = 0.582316558654;
    msg.pitch = 0.0990519162931;
    msg.yaw = 0.136676971909;
    msg.rcp_time = 0.225549286504;
    msg.sid.assign("WYDKIMZBCYWEIEKKZZCSRY");
    msg.s_type = 161U;

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
    msg.setTimeStamp(0.0331503574889);
    msg.setSource(33931U);
    msg.setSourceEntity(163U);
    msg.setDestination(23220U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.737725592591;
    msg.lon = 0.757920268361;
    msg.depth = 0.582371093245;
    msg.roll = 0.519099234289;
    msg.pitch = 0.664475999399;
    msg.yaw = 0.0752913946654;
    msg.rcp_time = 0.899744627624;
    msg.sid.assign("OVBYBPEHXTERCJAGCOUOUMQZXIKVJLUJFDUERDYXECTANQXWGYPBVFFBENKZFIIAFOGCEPQJBRVMBYOHQDHAYSQTQNJVWPAXLNCPVMCNDHTKCTWTIKMJKKAYGPCTBNOSXOOMVDVIWSHSZPMDDIWFWJRVY");
    msg.s_type = 34U;

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
    msg.setTimeStamp(0.855220569934);
    msg.setSource(57192U);
    msg.setSourceEntity(160U);
    msg.setDestination(3226U);
    msg.setDestinationEntity(176U);
    msg.id.assign("IOFEKIJXMAFXKDFXBVZGWGNZSZBLZCMINCJFZHOKTWUIHOVIZMNKBMWGTPMNATEDNSWHYQXBMYRFVLKAXVFJPZYLGDWEPDTEHRCRLPXYKVXFBUFMGGIMHRQBDRCW");
    msg.sensor_class.assign("BXCTZBTFUFMACQLLDVDFOYSFDBDKRSADXMYPQVVNPAWMUOEXKNEKVKIBCKOGHERSNCNXOLBWTBFGGUCXNDKRGAHLUFXHSIVJWXPZZQJJLIMEPZGWAPHONQUBEXLTIECORHBURTMKUTPKVPFHNZJTIXSCZISUVNUGZRJRJYRGILVQQUR");
    msg.lat = 0.889803477123;
    msg.lon = 0.402020932983;
    msg.alt = 0.279024605267;
    msg.heading = 0.592694540185;
    msg.data.assign("NFXKCLKKCZCLLSZSISWTPDDPGTUNKUFSLVOGXJIMRPVFUZYQQERIUWXRDLPRJWVGMGBOSKHXAJGOJQAYQFVPTTMCPBBAOMBNHORIAOFCLBQFGSXLQNECNDRNWEFEMUMOIAGHDRCAGZXBKAZVKDGOLJPWMHSIEWYFGATQMVMRR");

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
    msg.setTimeStamp(0.351993193987);
    msg.setSource(64418U);
    msg.setSourceEntity(166U);
    msg.setDestination(2314U);
    msg.setDestinationEntity(22U);
    msg.id.assign("ZLYAETRPRRFMMHQXJLXKFGFYDKGLWUZDZUZEHCLCWRDDYHJMJIYJUBXSTYW");
    msg.sensor_class.assign("ARIJIGHOSSANYXMGCDJTPHFXQFESDINGUXSZIMROIGPSYVCMVBGHKOMXMLJFNJUQUXHCRAIWLQRJUQMXFDWG");
    msg.lat = 0.160025313062;
    msg.lon = 0.0285575519093;
    msg.alt = 0.597701073766;
    msg.heading = 0.694558841966;
    msg.data.assign("MXPUBGRKOVGOZMDFRETLCPDPCNWWAHSRYYMNVBQZDZOBSBPHDFVQGSZRQYNTOJEJXDOOXJXNETICLEIMWRIAUNUJYGWKLFLHEMACYVPHBIAHFCRBPGWLDZZTRVVJFIIPRYDXSHJXYEAKWSVNTTXIEZRPEFKSOPEAFDHXZKLAUWSSTJOVZCINGDYTJHAPXQKTACBHQMSLNIGJAGRMMMNUFZUYOKXBGLUFQLKEYKQQWBNLVQTVF");

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
    msg.setTimeStamp(0.306891047092);
    msg.setSource(50571U);
    msg.setSourceEntity(182U);
    msg.setDestination(19768U);
    msg.setDestinationEntity(69U);
    msg.id.assign("FXUTLWFVNXCMEQGOPIAKBNLMZTEHSCRLSMBYHEHPVJBH");
    msg.sensor_class.assign("ILXKZXDWMGLMTVRDDLLFDNPKCTKEJMGBIAUNCYZJSIXTIVDQEIJNHPLJEDFAPVSFNNCQKZQKGPD");
    msg.lat = 0.304162891878;
    msg.lon = 0.0149562190435;
    msg.alt = 0.00946068665593;
    msg.heading = 0.118710184699;
    msg.data.assign("CJOUVUFABUKLDCZFHNKEXFNXSQYOQGRCLYVVUASEIGEAYLMQZFZMOHLTNTPUSWEBFQKLSGMOTZLXMPBLPJEVWEHIGDSAAARNAIHATSKYBXNIQIIJRTCQTXIUCIPLYTMFTCGXOKWVNNXHJFBZPYCV");

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
    msg.setTimeStamp(0.501591858542);
    msg.setSource(5250U);
    msg.setSourceEntity(90U);
    msg.setDestination(48935U);
    msg.setDestinationEntity(91U);
    msg.id.assign("ZCPRDTRYFNATUMSGTGHSRITMPASJRDBSWWINQXNWPMIDKZXJTJXQHRHOPQDXZYLETGJMAQIBJTWEXHVLQFVWYJGKUUFXSQTLLCVIGFRQDTCGFQIJBNGL");

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
    msg.setTimeStamp(0.416621481767);
    msg.setSource(22168U);
    msg.setSourceEntity(164U);
    msg.setDestination(9146U);
    msg.setDestinationEntity(202U);
    msg.id.assign("KWACKMYWQTPMWRVCLJTVMUAKGTEZFTZEGUPYNZSDZOVLNQRSHGFRKNTXNCKEVVYJEZOEFWBGQLBIHBFIZGWMHQABAFQEHSTFGKODNOANYCEJOKBBWUDD");

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
    msg.setTimeStamp(0.73233299981);
    msg.setSource(38563U);
    msg.setSourceEntity(234U);
    msg.setDestination(12386U);
    msg.setDestinationEntity(179U);
    msg.id.assign("ISSIONWJVRHOYBMDCENFIJCMLMWBDSRAPCGKNAGRAGRYYTLCLIPKGVEFZLEMBFHDAIYXOGOJDFWQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JCHFUKJKXAWKLAEQVAPJNQGCGMMXLCW");
    tmp_msg_0.feature_type = 46U;
    tmp_msg_0.rgb_red = 119U;
    tmp_msg_0.rgb_green = 240U;
    tmp_msg_0.rgb_blue = 106U;
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
    msg.setTimeStamp(0.0598712769264);
    msg.setSource(16874U);
    msg.setSourceEntity(199U);
    msg.setDestination(5633U);
    msg.setDestinationEntity(139U);
    msg.id.assign("BMGQKCYPWWTORKWCYYCJVSZVHHENOAWVDZZHDIMNKNCSBIDCKAXFCAGPGWQIXJDVQ");
    msg.feature_type = 120U;
    msg.rgb_red = 43U;
    msg.rgb_green = 33U;
    msg.rgb_blue = 176U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.58882018177;
    tmp_msg_0.lon = 0.969021104772;
    tmp_msg_0.alt = 0.541866141257;
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
    msg.setTimeStamp(0.671621713412);
    msg.setSource(22873U);
    msg.setSourceEntity(77U);
    msg.setDestination(19876U);
    msg.setDestinationEntity(71U);
    msg.id.assign("BYTNNWUHGHZKRFXBSTLYRRZRHHJRJYDMQECXTPBGCAGJGLFSCTNQDSIHNLIGJVKDDAFTIEOFWJWUVMCUAHVGLITJPZZQEYIVWVRCSFDORPTHUEOLFMQKGFWXSKTQKSJIUERLZKLGZLNYPEVLOBQJCOQUGW");
    msg.feature_type = 222U;
    msg.rgb_red = 126U;
    msg.rgb_green = 4U;
    msg.rgb_blue = 223U;

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
    msg.setTimeStamp(0.965725709347);
    msg.setSource(12255U);
    msg.setSourceEntity(10U);
    msg.setDestination(39861U);
    msg.setDestinationEntity(52U);
    msg.id.assign("BCATNCMWHLDYICJADSSYJUBZQBAMGWRONMPMIZVNRXFUCVBECHRKTGFBIAHCBIJKSJSLURXIUGURCEFOTJNRHXFGDLEIEMSUOPIAOREFWVDQRAKHGAFETXAQ");
    msg.feature_type = 156U;
    msg.rgb_red = 84U;
    msg.rgb_green = 30U;
    msg.rgb_blue = 91U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8841963731;
    tmp_msg_0.lon = 0.759891214697;
    tmp_msg_0.alt = 0.941407608009;
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
    msg.setTimeStamp(0.483687784514);
    msg.setSource(28991U);
    msg.setSourceEntity(241U);
    msg.setDestination(44900U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.897487384165;
    msg.lon = 0.94500202964;
    msg.alt = 0.250485499012;

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
    msg.setTimeStamp(0.15693619263);
    msg.setSource(54998U);
    msg.setSourceEntity(222U);
    msg.setDestination(54816U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.422448131086;
    msg.lon = 0.259766471588;
    msg.alt = 0.829704069453;

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
    msg.setTimeStamp(0.336441634186);
    msg.setSource(58027U);
    msg.setSourceEntity(34U);
    msg.setDestination(10426U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.0679178030187;
    msg.lon = 0.645669328618;
    msg.alt = 0.184457224875;

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
    msg.setTimeStamp(0.581897410696);
    msg.setSource(31588U);
    msg.setSourceEntity(134U);
    msg.setDestination(21571U);
    msg.setDestinationEntity(119U);
    msg.type = 156U;
    msg.id.assign("NZCAQIFMBZQWGUXVGUPYPMIOIUAHJIPWTBHLXCTDRQGNSCMNCLELDESSULFOJCZRRRUWDGARBFZRQESICAXNKBOEMNWNVFBGZVVKPKVKXONBDGSLXRFWPOTJLJHYEZXGVJYIRDPDHTTH");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 64U;
    tmp_msg_0.op = 44U;
    tmp_msg_0.request_id = 56796U;
    tmp_msg_0.plan_id.assign("LAHUZDQPZKUSQEKTRMKWCODTRUYGNTZDJUBNNGMULOMKCFIAZFCXIMNKZOXAKHJYGIWS");
    tmp_msg_0.flags = 40148U;
    IMC::CameraZoom tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 88U;
    tmp_tmp_msg_0_0.zoom = 7U;
    tmp_tmp_msg_0_0.action = 244U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("KWSHTIWFFBCZLVUPECXYORUYCZOYNT");
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
    msg.setTimeStamp(0.92845113705);
    msg.setSource(49237U);
    msg.setSourceEntity(207U);
    msg.setDestination(62653U);
    msg.setDestinationEntity(235U);
    msg.type = 83U;
    msg.id.assign("FALUGDLUXHHYSORBQXXLGJEXQIVAVMJBFYFINBIVFIMUWIEICNCPYAJOHXJWNGOVLCDUZJBNKKSYYTWSRGZVBSHEHTPIZZQNDEVDMGBOKGQANULPWPGKFSIBXLQEXUVTFJSCTDCBPCEPOAOOUCNGPYYDATYQCHHVEIZMDAG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GSZXTYCNBAUSIJMUCXMVWFAZQPGDDEMVIXGSPQFRGOHEEHLBKKYICKZLNAFWLKAHUGGQCCLXMPVPRWZZZSBURHGTVKNIWVTJGADTJIHHQONXLWPVIMFFBEMFWQOMSZT");
    tmp_msg_0.predicate.assign("VLRCSKFMDZVIWHMHKNCLRKIDFJLKFBGFTPARHPQSDOBZVNPWLNUNDVUGBWWATGKZJPJGLCASRHBVTMPRNSWORKBRTGFEXXPAMBPMAKMCUQEWJUGFNGYYYFXOLKOSUJWAXCDQZZWOEJHTEMSCEJXUHYYZDVQVOVKPTNHXOEDXHFWXBQSHZYEYZZINMYI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZUBWFANQMCVAQWEEWPZLJXCSUDDDBTAMEYBRMNYOVGDIFKUGMURCIQTJIPWLLWMVAIFWESTWHRGGSXMUBNJNTUXOCFQXQEUJILQDOLTYTANRFDSPCOGFELKELXSKYKCZFAXRQKKBZ");
    tmp_tmp_msg_0_0.attr_type = 65U;
    tmp_tmp_msg_0_0.min.assign("GWSCGLHXACWYMGXXOBTGFZVUWRWFKW");
    tmp_tmp_msg_0_0.max.assign("HRDFOXWSDAWOQVLHOBQVQYGNVQRYIKMKCBSADQXVWUNFUHSRQETLMPQAQLWWYGGRIHAHRAUMISIDTFXHRLKVIWMZNMFJIWQHXGVJVLNACIZXEZKFEMELLNTMFVPHGZDRCBXEHSLUYOBBOYSRXGMGKYVENWYTCDXRKAKCPFZPCPUMJSEIPZTYOTSTEUKSGLPCFHPQODNNBJXZWUUJYJPUYLXOGZKIPD");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.488654499941);
    msg.setSource(52903U);
    msg.setSourceEntity(45U);
    msg.setDestination(14171U);
    msg.setDestinationEntity(206U);
    msg.type = 151U;
    msg.id.assign("XDIWJAEUGMUVZQXKJSBTOROJCBULHINWQBCLPEKBKMGDVFTMRHLJVNCXKWMHCNTNVWOBJGFLTZTPEOOGSLPKDSHKMLYMABBDFOQVRGNSYVJFCCNSNNZDQYWYKBWSH");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 11U;
    tmp_msg_0.list.assign("JOHEVYNBUFEYOUVLAKYHPEAGLPSHFQBXESAXJSLBJRWIJEZWZHIIDVDMYKYKJEUOKQHMBVSGDUFCGFNSOGZLGBUNQFMQOCRTLBIVBSWMZFNBONSVQNTJQPKLEAZSIWEXQWARCAKRXENJXMXVWYTLCUYLCIFHTRXHXTCXIHZMGWYPPJKMNFUCLAZFO");
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
    msg.setTimeStamp(0.964623194088);
    msg.setSource(1821U);
    msg.setSourceEntity(118U);
    msg.setDestination(40688U);
    msg.setDestinationEntity(69U);
    msg.localname.assign("MMGRVOKXCCPFSWGKASPOPQZHEPTYROEYSXVQZIBXBUAEHHQHKDTBULRXGJSGDIRYNXCXPDBXNDGJDXNQLLFCYJUTBNATSKPKZZMSQTHWQJNITZFRPEQYAZDLGAYJDNHENEWMYFNPZFOCYDFEJTILOWTRYOSNNLTOGQVACJVLKMFIVVFBWZSWPKCSAEURMAJAQVISQILRKWAECUCOLZWZBVYP");

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
    msg.setTimeStamp(0.428306992977);
    msg.setSource(39047U);
    msg.setSourceEntity(190U);
    msg.setDestination(64509U);
    msg.setDestinationEntity(60U);
    msg.localname.assign("JWSBVRQXZFOPEXMGRIANRQDKJSLKENTPDYGACOHHGCLZWMCBIXIVLBDLPVCOVSJHAKUNBHWFCCKEEMRYTTCXUNYDODHBRSGCZBNGKFFZFPEOOTUZHXFXWORMMQAQVRNQISRCBZKZQQMHYXYVJUFYYVOUQVDUFNMYIUAZIDWBS");

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
    msg.setTimeStamp(0.349923342827);
    msg.setSource(19296U);
    msg.setSourceEntity(105U);
    msg.setDestination(38445U);
    msg.setDestinationEntity(202U);
    msg.localname.assign("WVLFBTKNXDORZNCDMXREPSPPEQDYQLYXQJIJQJYZYOJHYKWFUVJFHPJAIAWEMFVOKCBHMGLMOSRFXNEBNYHCCTHIIMCZHBSGK");

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
    msg.setTimeStamp(0.646652949747);
    msg.setSource(23847U);
    msg.setSourceEntity(114U);
    msg.setDestination(30384U);
    msg.setDestinationEntity(112U);
    msg.timeline.assign("BVLPHCUSIWYUEDXKBVIYIHAMAKMMQKSHGEKYAWUTOCHYIEKIFBJMFWAERYXXNFDYZWKPMRNSWELXSSSCJMNPDGCGLNAOMBDOVLIAYTMBIXROPJUZJOGUXAQLHQDTJHGIJRJEWSCTNFQHCQFVBPUFUGXQPPGI");
    msg.predicate.assign("XSLXPFIHNLRPASGQMUBJXXQZLWTKVIKEDZUWMBRSSYTTITVDSKRHEOPGJJRSFEQOWFTTDGBUWDJSNKP");
    msg.attributes.assign("UVYIPFCQEMDSVRTAPZIIGHMAYITMUBQYUUNXCZJTPSYNEXOHQVFGHKYVXUAOQONQNPPXCCENLSHUEMYGDXZAJOJHFVTDPGKLZRLNWTZWSIILU");

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
    msg.setTimeStamp(0.547493763668);
    msg.setSource(10268U);
    msg.setSourceEntity(6U);
    msg.setDestination(15129U);
    msg.setDestinationEntity(9U);
    msg.timeline.assign("HYPWYJIRSPNKUQANY");
    msg.predicate.assign("LNYQRMWYQYDSGXFGYHFGIAPOXVTHRDW");
    msg.attributes.assign("QSYGRKSLLERIWEDUVBWC");

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
    msg.setTimeStamp(0.754408515063);
    msg.setSource(39353U);
    msg.setSourceEntity(217U);
    msg.setDestination(30812U);
    msg.setDestinationEntity(180U);
    msg.timeline.assign("MXRXZMJIPNDGBODWLKYVTXOWFNRNTMIHJLQJMWKZFFMCJVFPQTZTCKBAYQDGUMEADADRVCOXNXUTQFCSSYLRZQOSBPXNEQUZPPDBWYNGESMXPKEYDRIGOWNCGAYVRMTFPUKUZDESJACMCHUKQTVLOZRXIIWFJYYRBGLAHIODFJ");
    msg.predicate.assign("MSBZQANQSWPGJECCLTKVHKJBOPNZWMRTLIWULONRHGYLOKMHGWTORADPWYKGYBYDIIFRRZRVNHQWXFQJEQDKMMIDTCGMIJSVOKUCTUVJEDWHUIDXSUFNZUXGCXENYIZFDRXGQVOYTFCLZGOLPTJPFBPANTEIBCXVALPXIEPBBVGWMKYVUHLDEOJMUKODNBRCJAYDTRSZZZQEXMGXFYICMVE");
    msg.attributes.assign("ROYVUVTPGAXEYADKGXIBJDFEPIHOPQCGJXWCEMFRECBATAZAETAOCEODZZXXLVRCQGOSUMWQKXHUOIMMJSTWQQKEZOQSKRBTUAPV");

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
    msg.setTimeStamp(0.342456256621);
    msg.setSource(36034U);
    msg.setSourceEntity(221U);
    msg.setDestination(35501U);
    msg.setDestinationEntity(156U);
    msg.command = 66U;
    msg.goal_id.assign("QDGHQZUVVCNKCABJMNPUKDHTYBPXFQXSTHGCJQZIRR");
    msg.goal_xml.assign("WRDCJMMAFCLBIDHSVTURFBGNZYRIQUEAVFIHIBANRJYKNIASSDBJZEKCOXGOBLMHARUAFECGWAYLHEJCTSUDJMATPJFJZYFEXSRYOMUUBNDJQTPGXJEQGLNWPFWBEXPCPOVYLCRWZVQQQGMOHMWLFZHSXTSGONVSKPVCYHZIZTGRYKPHHYPEXZFTAWKWEGKIKBVICLJMVQRDRZOUGICDBBOUPDNXTVMLTTQWQWDYNUXLDMXENFSUK");

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
    msg.setTimeStamp(0.314753738862);
    msg.setSource(21157U);
    msg.setSourceEntity(162U);
    msg.setDestination(26U);
    msg.setDestinationEntity(5U);
    msg.command = 8U;
    msg.goal_id.assign("YCSNPXXURLZIOMKOLXWALMRQIQGCOPKUPNGRQIYCHOSQJZBIWHSURPJCYLBJPHBNRAYWYSTNWAEBNKPUVQZBLSTPJDGMVOMEDETYUSCHLTWWFHJYNXTKSDZOQAKNUHIDNKDAJTMLWCFVGYQRRCUWDLTDYXCAZNIRSGBTMAJJVEOFAIVIEPTDN");
    msg.goal_xml.assign("SIXFUJIGDYFEGYHOLXGJHNLDZMOSNNQYPMHRBOGIBFPXQMEQVHZDUUPIXPMJYCLZHWISIJLNZEALQFRHRATKSEYXDBMHKILVQVXAIRXNBWHCKXDZUTVOTBOWPAWJNMWKZUUASCEHEJWJPQWGMITYNSPSDODQFLPDEQORFJEALYXKKBNZEBRR");

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
    msg.setTimeStamp(0.861094210571);
    msg.setSource(41786U);
    msg.setSourceEntity(73U);
    msg.setDestination(6451U);
    msg.setDestinationEntity(85U);
    msg.command = 84U;
    msg.goal_id.assign("VNAEWUNRFWEIRTPIQVCMHJVKFXBQHJGJGMRVLCBGSWNQYLPCMHCQUCSUDJVMOLSZLOZBMUKDRVBEYRWG");
    msg.goal_xml.assign("NWXIQPFXYIPHNWGFZOUGHLPSLJRVARXJZMDYEDOKGYBJ");

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
    msg.setTimeStamp(0.751150170418);
    msg.setSource(41530U);
    msg.setSourceEntity(42U);
    msg.setDestination(13846U);
    msg.setDestinationEntity(6U);
    msg.op = 160U;
    msg.goal_id.assign("ORPUIYPXEHBYTMKFKQHMQOHOCJYLTF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WGKWCSTQYCVYDSNQAIXURRVLLVPLXTBKMGRHUDILKRCNPIZEDJTMDCYGEFZQRAXHYSGEMCHTJRQQEWPWKBDAMNFVTATNPIZZWCBRGHYDICHJIOMXOJOPEGIKUAOYMONBUEVVFZYFBWNXWRUITVNWUHEMNUFESJBFGWQYEMZBOABBHXHPLIGDCYQFSCOPQNIGZADDJSDZJGVL");
    tmp_msg_0.predicate.assign("BXLIIOWAAXNWPZKUVWZGRXGRUHTHKFOCRRZHWICHATUDUQFLMQUVABXLLFPOCIZOLYLAEKCHJJWTTETHJPXZQGGKQFVMMQZYEMLRYXKTGDBXVITKVIPLMRBYECSVMNJPBCNYTYBINPPORAFUDCPTFHYGGEICOBOARDMJDVZXQEMADPLESBQDRSHWQNKWFHSBSUASWJSDEZYAUMUXYBZQSLNIYHVJUNNOVJPEOGGFNRDVK");
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
    msg.setTimeStamp(0.212513590465);
    msg.setSource(26175U);
    msg.setSourceEntity(139U);
    msg.setDestination(43316U);
    msg.setDestinationEntity(200U);
    msg.op = 80U;
    msg.goal_id.assign("LHFPFBGZYNWNJMZMMVOJRDPKSDAHTIAYKCPQPEOLEBTWLUCDWQCEDUNTEFXUOFIWMKCQSLGCZQYKHXSQDHDJKUAIZOVQMMFKXBNFPBGOXTRAJVBAIXAOSPYZOMDGXWINZWGIKQDGGLSAREEJOSLMHFSOFQVTCRLVBATBRBYTUZC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UELCNEYKZZZL");
    tmp_msg_0.predicate.assign("EPCREBYSFWBGUCUEIBRFZOMCRLTKVMSKJDNNFJEEMJYAYLRDUQVCLHCIVIRDZJHXWAN");
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
    msg.setTimeStamp(0.00670340379598);
    msg.setSource(34756U);
    msg.setSourceEntity(15U);
    msg.setDestination(56615U);
    msg.setDestinationEntity(187U);
    msg.op = 203U;
    msg.goal_id.assign("TZHHIWEQEBSKLIMIDDQZXOGAAYRJLFGFGSWIPTMMKBUJMRHDRKPIZLCXYPUHOFLJCSIVYBOOTKIQUWJFCXOGRCZDPCTRMEYMTWNZZLXHVERNPGOYWGKUMAOUJBILKGMVVKEOSAKTBFWJHWVJLXDQBLNYCZR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EVXLVLECJDBORVBAGTOHOEDMJLJUJYLRCYHCDQJTNFITPQCISBSBYPCHNHWATORATXLYEJIMAXSVTPQKSDAPJXMRMGFFFZWWQZQBBOKXIKHGHGMEXKXAPYEEKBARVELNGXBZFGUNKTZZQYUNWUXYIZJNPWUSVAOORYFCZNCCIKDDRXLMTHBZKZRGMBREVNSPDVDFSZIDEYQLAJ");
    tmp_msg_0.predicate.assign("MQBIANTMESUWWJXVGOIDKKDSTLERZTNBSFQXPIGBQHBJCUMLMVDZGXHCUONJTMVPWLE");
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
    msg.setTimeStamp(0.793490667982);
    msg.setSource(55959U);
    msg.setSourceEntity(201U);
    msg.setDestination(612U);
    msg.setDestinationEntity(119U);
    msg.name.assign("IOWMSRVTWAWZTCJRLSCPNGDWMYXNRWKEZCOVLQLQRLBFFQYGTUBTKOOVRUVEXAZJQIUCKWPIRVSGQBADIONPTNYEFOWAKACMLYYPSENQQFPRXNDVINHZHJUBMEXGGSPLXYHAOHJHYEELX");
    msg.attr_type = 74U;
    msg.min.assign("VTLAKTOFKUDKHPPOSLLXPQYGYKYMPQBPFQYN");
    msg.max.assign("ZUPHZZGAIZSNJMLFYAU");

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
    msg.setTimeStamp(0.596625038339);
    msg.setSource(32212U);
    msg.setSourceEntity(170U);
    msg.setDestination(62327U);
    msg.setDestinationEntity(190U);
    msg.name.assign("UUUXYECYHFZPULSCRYEYZIQFVDGXNWTJQMTMYSBPILJJBOUTWFRXJIMGORKHKBYXELGPRZOCSWLJXYWYUDAZMUJBOIQWVIQQHPLDBVOVCHRGMIGEYFVEDABZRLCUWIXAFLMADTALAEKJYSDKJWXSAKPXZKKHIVXNE");
    msg.attr_type = 17U;
    msg.min.assign("MRECIRUDEJUFDLIRRZWWUHQNJQTBHQDAAUBOCGHNETSXOVMMVNYQQMRESCWPMOJYETLQHKESLACLJJDZOMOJ");
    msg.max.assign("LBNCDCTJFQYQUTERFGLVRW");

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
    msg.setTimeStamp(0.482861725359);
    msg.setSource(52527U);
    msg.setSourceEntity(47U);
    msg.setDestination(51028U);
    msg.setDestinationEntity(113U);
    msg.name.assign("DOHNPXPXHRSYIEQGCBRBCBHWJGTVEFOUQHENAVSTKYGCTUYDQBERMQGSVFJFKQQGIWOZAPXWDVTHSKLWNIFMUUVQXXFICIKBCHUDMDMHKBZLPNUFZTYROTRAWCFLYAZOKQLYNDKAENJAAZUSPFLQBSPURJXIHVGBPPIWCGPSMJKZVMLJOOU");
    msg.attr_type = 179U;
    msg.min.assign("DVGYGIRQGIXUWCWHZUCNNFAURAYNAMZIVEPJGEYSVJLBNQYAHZVDMNJBNVVADOXYEZNIIWFZBQDODHQRCJCSDBTPMHRZYZJTRWPOFSPEETHCTUZWKMANFIOSWFELUYKROMBQMFFXLHEAMYMBTOCXEDLRILVESZGHDHZHTLUXDNJSQGPASLJKXKTFCBBSQWGQUAONSFGPKCJH");
    msg.max.assign("OWYPUOOEQAJXWSFXSNQDQDJBPMBNXNUDJEOBAAKVUOERHGDYXYFEJEBCKMHLHVRAHAPOGKIKALYFKTWWKJZQHBZMMWLXJCFVFLXDBTTFKNTUDJYQIMVONPBMLAGNGISSDSGMGBESDAAPGWOVDWVTCLYRZNDQSSNMKIYZCMELNVQFHPZQYIIEFAXKROZHJMJCPLTIEUZVIWTQORCTWZRCCWGR");

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
    msg.setTimeStamp(0.369224666872);
    msg.setSource(51503U);
    msg.setSourceEntity(214U);
    msg.setDestination(24110U);
    msg.setDestinationEntity(129U);
    msg.timeline.assign("FJPBWUSMPUVSOUNPGKZJCWALXMTYDQNARKMLTIHWXQLQEXYITNHYAMKREBPRDVWVDGALHKFCGILGXKZRJIJQEU");
    msg.predicate.assign("RSKHEAVFZZTDXBLBTKQXFTLJOLKWSSCPDQOPLVZLITJGHXQHPUFOTPKAMWZGURGZGBSIDCMLHYHXPYPYIBNGEYR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SPVGWBXCBMBILMLJQIBNXSRGVQHVXFXQLITRRJAFKIPVCDIAPQIXCURFJJUHZQOYYSCSWKDTYMUDZFPOTCKUQOOVLCYFZWITZHNEREKSEAAVBZJJUUUNWIGRBUXMHQSBYAAHAPJAEKEIEMEYDAHSUFDZRHFQBQZCLLWNNHOWYOTTQGVZSITMFGHBREMKWVPLGVXPKLXBNGGMYTMGPYDDKXAWXRNLZNJEPOOKPCDDZTHJDFCJTWR");
    tmp_msg_0.attr_type = 106U;
    tmp_msg_0.min.assign("QWVZCTFAOXWOGKYATSSOCBBUYETKBZWQQQXMWDLMAVRBMZKPJXMYSRAFUNSLVEPBUZPUDIVJERDEJTUBMLMLUTIGVACDAPULWAFNKOCMSKFQGYLOQVGNYERFSHXYDHPCRYPDFRGSWXSINUZOYPDLOHFIDHINHBVFLJCSWENJHAFWMPZHYLXTNZREKIVKGFVTATQJRUQACOCKZGRIGCXBPEMZOKJXNWGKI");
    tmp_msg_0.max.assign("LVZWUMYYFSPKCQESGMZDSZUFFCMJNRWIJDNEPSHNAZPTBJFISUGBGMAZUYIDRJOLCEQCSOZCXCREUQGLIT");
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
    msg.setTimeStamp(0.925765502722);
    msg.setSource(29204U);
    msg.setSourceEntity(136U);
    msg.setDestination(42040U);
    msg.setDestinationEntity(31U);
    msg.timeline.assign("SUBFYOEJMIHXIIONBTRBG");
    msg.predicate.assign("KXKFJXQPUGAMDQAAGVNXKWDVMJIMDIRROAMCHABUFZXKARAVWYWDNFDZKCZM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CSMXOWXOLGLYRZJRGVKOXYIZFPWQBNUXWTLCKVDMARFFMFOYSZHQQGYYYIHIUXTMJXVBAICNHXEDYKEUNNGDJJEBWCYQHDECI");
    tmp_msg_0.attr_type = 50U;
    tmp_msg_0.min.assign("XEGFDOPNIYSHJGTSNTMDSBYIPIOMAYQLLMRRFDKSEMJAAERDDOGHHHZAIXRYJICVROLZEFTJOCGKKVMCAPLEGTCZDAUVMYJSMXRVSFWNQMXIPLBFRNZNQZDGIIAIJCBUHKSKOEGQUBWMBOTYLKGEHNWJWPHCWSBZUVZZQXVETDFVUMQHQBPHRACVAFNPYRZQBBUWATVXPOSQFNQUBDXKVGGKJXKXULRFO");
    tmp_msg_0.max.assign("BMKPLVBFEMHANDWKGHXRGIWBIIXQKOZVOBLNEYGAAOERADNYXCYSSQDLNKWHTPTJCJELCNLIZTVMVISFINIEKJOGNYQOJDUBZQKFLCSGQPLJDQZNTWGVBATSOUREERZRBAASTOHYKYKGOZPZFURAJNPUDMLPMUDFIQMHXLNMFWXWAHXYHZRMVIPCWOAVBSGDZQFOHUVEYQQRGHTCFUYREISHXXUMXKUJFWYWEPJSWUMCJCPGJBTVTTSCLPCXDR");
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
    msg.setTimeStamp(0.884596226856);
    msg.setSource(17690U);
    msg.setSourceEntity(33U);
    msg.setDestination(33068U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("RCWTBICPJMJZXRHCSUGXLYZZYIGUNOIEUMTAIHVNYPHDEOKGLBOGPFMKCBUAWDYHXPREPVKKGXWQEDFEUHAGMFGRMHUBPASNRSLSWZFXFSRDPVIJNQVAZOVYWSAKFQMVKHOWXAGEEWZIMQDQMRRUVZBFVTNOJECLFATOFOWJ");
    msg.predicate.assign("LPKQZZVNMQRDTKOVESFUGMCWJRBWPFIEXBZFDNHWVSPGIHHKRFMOLULUAYTCRDMOGXRCEAMBYLANCQMKJZWQACZTOKAXUMHEJHSBGPQDZURZQQTPLGLGIPXLJBWXFFHEVGAZKATHBUNRWYODTNHIUIDEVEGYDYXIUDUIYLOKWWCVSBJQTNXJKOAGPHLPVBSNQXCTUPFMVCEWPEIYNEOJSNDRVRKDRTFGFIXBJJJYLZTBHCCMY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BZOMNXLMFPSOVEUYGMGFWJABPECJQMWNWJIJOECRYNLXYQXNZCDPTOORCOSGDGBWOPUGWYXDEFGGBTVICCAUHQVNTBRNYZMTXMCHSVUDKAAQSBKFJLAHLN");
    tmp_msg_0.attr_type = 163U;
    tmp_msg_0.min.assign("MGBPROVJBPSCVOBTJVVNUEACDOSHUDSTAHAQQEQAMIBUJJOZTY");
    tmp_msg_0.max.assign("TMPDCWXKKETAWFKZAUEDOECJMFQIZUDPPXNBH");
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
    msg.setTimeStamp(0.911512038276);
    msg.setSource(11605U);
    msg.setSourceEntity(147U);
    msg.setDestination(50307U);
    msg.setDestinationEntity(207U);
    msg.reactor.assign("RVHIQIJMTYRYVTNRPYKLLEKVYQDCCQYAWHGSHWYZCZSPRDMINWPSUYAFOGEJOGKGXHCPLZUSHGMZFWFDHVNRDJZWAZJWYROXCAZSCYXSVUUZLF");

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
    msg.setTimeStamp(0.444921710925);
    msg.setSource(60090U);
    msg.setSourceEntity(236U);
    msg.setDestination(14643U);
    msg.setDestinationEntity(64U);
    msg.reactor.assign("LBVPXPEYKMCHQIMSCHEVBVASTOILDDLRALWVMRUHFVCGOGFZAGVQOCURGTEKZUDHUKYEZHCSDBRBQTZEQXWVXYNKZSOWLUBUBJFTFNXIHFZBPIQLYXJFNWODJYPJWXPWRKWCPAOTAPERMDCMANTJGGLQNNMVQKOSWIWQTCUDTIYZCPQRIJFSRZYEAVTACGMXYONBSZO");

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
    msg.setTimeStamp(0.490803201701);
    msg.setSource(14588U);
    msg.setSourceEntity(152U);
    msg.setDestination(13083U);
    msg.setDestinationEntity(64U);
    msg.reactor.assign("EKGWRZOIDFGOWRWVLRGYVYTFXANS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UHEHGKRMPISFUJKLMYOPWSZZGPSKAGZNANVHNY");
    tmp_msg_0.predicate.assign("RYGGPSQRXOHZHLXFJELIEROWHJQVJMEPOOJGYKBDOMDACHAGDFNHUYRYVLWDWKBUXMLPMUETYMXBSOKEXGAFXECRYKQDXNQFIGTAXPKRTTLDFNFNTZITHVGWDFZLZCBAWIJQJPKRYMKCAESUSZUAZGOIZLIFENASZBIPOBPRBURYEVUJSODL");
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
    msg.setTimeStamp(0.679992198659);
    msg.setSource(57409U);
    msg.setSourceEntity(108U);
    msg.setDestination(28305U);
    msg.setDestinationEntity(162U);
    msg.topic.assign("UVTOHJWGTORJWHEVTUELISMCGKEUZFOJEFIUMXCPUPIMYYKYEJRQOPSMBKQITXOPLGMUUSXSDQGNZGHRIAYEYNZUKRBQKMPRTIZPTHPXXSRZCQMQKXLLQHQRLVOVNVXHWBDKCSUPFYZNDDSBXOWYGFRYJDNKHANSPLLHFXCBULYVALABNWKTMMZTVAWCQFWJEJSVAIEBACARGCZHAWNDKGLNZXBNJTWBGWEDH");
    msg.data.assign("WWBNRLPHTVDVLKWCEBIPRTZAKDOYAOJUAXVLUFUJSXSVKMGCQQQKYQNZRRQSJIE");

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
    msg.setTimeStamp(0.343829499559);
    msg.setSource(18034U);
    msg.setSourceEntity(242U);
    msg.setDestination(20509U);
    msg.setDestinationEntity(169U);
    msg.topic.assign("BFLVJUMSFSNWOYRRAEYXFALGDAQVEKMZWFTYOMVTUPKDHROIAXDLGVHGFTJDZZPHLRQTY");
    msg.data.assign("ITGMGGRLACJSHINULQOPAUGKNSRNJLDPVXXEPUYEXSDBUIQUERBUHYZRZABMYWCOCDFBZNFDINLSLUTVVNTAQKBMOTKVJTKWHVEFFEHPWBAZMDFTIXPEHACBJVUFXJWXZJROZYLSSPIDRKKSXMLGBGDAPMHVOTJCTFDROXZWYEWVTQKSHZWCFLURVMFMSIXWBJWPY");

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
    msg.setTimeStamp(0.79482122247);
    msg.setSource(64980U);
    msg.setSourceEntity(126U);
    msg.setDestination(11099U);
    msg.setDestinationEntity(157U);
    msg.topic.assign("LSYCWGIXEYRIDDTZTJCNXFORBKOIOJTMCRAHDJWBCXLBAUEMSEJFXYJPAOCAGXWDYVRKUTZPSUHLRYCFHLKKRPXXFPIXQDCIPMBWVNCNOKDKYFZLMSTQQOATEUHZVJGRVEMCWGJHEJUTISHBS");
    msg.data.assign("WRABIZPDOZJMNIQOHNUZWJZAQFSOVEQSJRJDEURWCHMPKOOQMZPULVTVFMSIYKYDHEXCZKTUNGPVLAVBLVNCTUDHPCKPWFYQOPCVVTKSYFASIMHBGYGQETYRGZWRGOAEETBDRIKWDXNZKGGSJBCMPOVIWUAIIDYLHXTOIEFXFICNLKUQBJYMBNYVAYSBHXLCJNSCJFWHRTPMWAAX");

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
    msg.setTimeStamp(0.956913638332);
    msg.setSource(33250U);
    msg.setSourceEntity(169U);
    msg.setDestination(6178U);
    msg.setDestinationEntity(202U);
    msg.frameid = 185U;
    const char tmp_msg_0[] = {58, -117, -81, -34, -103, -120, -79, 126, 15, 117, -12, 119, 2, -30, 118, 76, -103, 119, -7, 44, -19};
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
    msg.setTimeStamp(0.294136362321);
    msg.setSource(47869U);
    msg.setSourceEntity(170U);
    msg.setDestination(58117U);
    msg.setDestinationEntity(243U);
    msg.frameid = 91U;
    const char tmp_msg_0[] = {9, 125, 68, -119, 68, 55, -75, 37, -93, -81, -26, 106, -3, -53, -7, -3, 121, -3, 78, 63, 37, -39, -111, 11, 72, 18, -66, 79, 36, 122, -48, -3, 12, -63, -36, -60, -44, 39, -32, 67, 50, -16, -92, -38, -11, 61, 16, 16, 12, 121, -106, -82, 31, 42, -32, -23, -40, 109, -10, -10, -21, -42, 112, -39, 3, 26, 58, -34, 7, -37, 44, 96, 49, -24, -93, 9, -109, -47, -80, 11, 1, 20, 71, 124, 99, -4, -40, -108, 44, -99, 97, 40, 45, 34, 90, -62, 93, 42, -37, 27, 88, 110, -71, -68, 15, 93, -97, 90, -26, 87, 28, -30, 75, -65, -103, 77, 24, -43, 118, -22, 8, 100, 117, -17, 113};
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
    msg.setTimeStamp(0.075017070974);
    msg.setSource(48652U);
    msg.setSourceEntity(158U);
    msg.setDestination(31983U);
    msg.setDestinationEntity(17U);
    msg.frameid = 51U;
    const char tmp_msg_0[] = {90, 46, 29, -127, 66, 119, -53, 93, -54, -110, -52, 68, 23, 2, 36, 62, 59, 58, 108, 97, 118, 102, -71, -62, -80, -44, 3, -119, -32, -59, 6, -63, -31, -3, 79, -66, 113, 82, 41, -97, -106, 38, 62, 120, 77, 2, 35, -8, 110, 80, -77, -83, 36, -24, -71, -73, -21, 89, -56, 88, 87, -53, -70, -5, -46, -114, 26, -5, 48, 68, 115, 1, -79, 126, -75, 25, -83, 73, 17, 1, -24, -52, -115, -82, 92, -102, -6, 81, -107, 9, -86, 89, -68, 122, -35, 72, -128, 11, -4, 25, -60, -62, 101, 32, -30, 116, 125, -77, 60, 36, -77, -114, -18, 38, 41, -21, 110, 63, 105, 98, 82, 86, 63, -79, 30, -117, 108, 112, -33, -23, -86, 112, 76, -86, -40, 48, -30, 101, -11, -68, -114, -2, -71, -75, -80, -115, -45, 52, 78, 106, -75, -27, 86, 72, -123, -117, -111, -64, 44, -65, -88, -117, -21, 117, -62, -3, -109, -1, 31, 90, 26, -7, 112, -56, -128, -105, -67, -127, -14, -117, -59, -53, -71, -97, -3, 70, -123, 108, -56, 94, 123, 93, -122, 33, 36, -91, 75, -119, -53, -121, -19, -106, -66, -5, 22, -62, -20, 89, 22, 65, 112, 124, -71, -119, -109, -20, -97, 10, -81, -2, 111, -120, 56, 58, -111, 72, 95, -107, -11, -102, -124, 25, -59, -33, -37, 83, 52, 68, -99, 66, -23, 31, 120, -93, -128, 13, 5, -123, -44, -128, 55};
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
    msg.setTimeStamp(0.812145188656);
    msg.setSource(32747U);
    msg.setSourceEntity(38U);
    msg.setDestination(16043U);
    msg.setDestinationEntity(97U);
    msg.fps = 28U;
    msg.quality = 68U;
    msg.reps = 209U;
    msg.tsize = 21U;

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
    msg.setTimeStamp(0.344919807279);
    msg.setSource(49630U);
    msg.setSourceEntity(147U);
    msg.setDestination(28545U);
    msg.setDestinationEntity(29U);
    msg.fps = 87U;
    msg.quality = 114U;
    msg.reps = 195U;
    msg.tsize = 213U;

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
    msg.setTimeStamp(0.703734664314);
    msg.setSource(62300U);
    msg.setSourceEntity(83U);
    msg.setDestination(7918U);
    msg.setDestinationEntity(250U);
    msg.fps = 191U;
    msg.quality = 75U;
    msg.reps = 220U;
    msg.tsize = 217U;

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
    msg.setTimeStamp(0.5160637451);
    msg.setSource(38960U);
    msg.setSourceEntity(213U);
    msg.setDestination(62227U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.972262049295;
    msg.lon = 0.523825758353;
    msg.depth = 21U;
    msg.speed = 0.320021130321;
    msg.psi = 0.749356370653;

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
    msg.setTimeStamp(0.0533713797848);
    msg.setSource(25769U);
    msg.setSourceEntity(107U);
    msg.setDestination(10479U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.400301340194;
    msg.lon = 0.0242290049585;
    msg.depth = 53U;
    msg.speed = 0.429740354508;
    msg.psi = 0.85509331831;

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
    msg.setTimeStamp(0.376804880874);
    msg.setSource(39656U);
    msg.setSourceEntity(136U);
    msg.setDestination(49033U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.480417909636;
    msg.lon = 0.0638231908716;
    msg.depth = 122U;
    msg.speed = 0.760681959169;
    msg.psi = 0.735330158394;

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
    msg.setTimeStamp(0.471588549005);
    msg.setSource(58746U);
    msg.setSourceEntity(176U);
    msg.setDestination(24964U);
    msg.setDestinationEntity(252U);
    msg.label.assign("OUWABNJFPGLTDWEZJDETPMKOCADXDVZWDFOQYQXBZWZBALTSLUEKXNZOEEBTYKBQXQSKCZUCPCNFUGJSASHYFHJNPGVZPHLMEHGLJPNUIKMIUXKNQPYHIYUQATTLTDEYVIBECIVKMNRGOGBLHJFXRYSCRMIONUWSZQIJEDVXLKCZICHRSPDYRXCWMYXBITM");
    msg.lat = 0.598927602608;
    msg.lon = 0.685125069543;
    msg.z = 0.054176865329;
    msg.z_units = 250U;
    msg.cog = 0.632953951427;
    msg.sog = 0.30585557928;

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
    msg.setTimeStamp(0.564584182297);
    msg.setSource(19217U);
    msg.setSourceEntity(65U);
    msg.setDestination(59365U);
    msg.setDestinationEntity(218U);
    msg.label.assign("BREOKNRJPGCHFTUPXINAJPADTZUSOPAWWUYIXVELNURHZGNTTMWQOFFYQRUDDWDDHFSNUYMUYWVSSIWEYXBUGLMRJQQZVKKOPXIBOMHMZHQRJDOZVMRFLVEHIAGUZVMIMYFFECXVRNTIQCWSKQWXCDPDJXQBOAQEEPKACOJXKUWLB");
    msg.lat = 0.885176661429;
    msg.lon = 0.62792996861;
    msg.z = 0.415470498488;
    msg.z_units = 124U;
    msg.cog = 0.91363793191;
    msg.sog = 0.702650003772;

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
    msg.setTimeStamp(0.540778881472);
    msg.setSource(52713U);
    msg.setSourceEntity(70U);
    msg.setDestination(34924U);
    msg.setDestinationEntity(77U);
    msg.label.assign("LDWEAWKXILPGEIQMIKWXGVASLTSAPYMBFYNOFMGZDCJHYVPRQERXMXCZBIYBTKYROJNUGGCLQAINVKFGXGUYDIHJXNPHVOLXPXLCVDPZHMBWHPXDTZOEZUTESZTFVDBHTRZKLKNVURSBZSLRBXGWCSFPQNIOAJKNFQKUCQJTNQIJUJCCRSVYQLADV");
    msg.lat = 0.167405738798;
    msg.lon = 0.985839327146;
    msg.z = 0.166433499064;
    msg.z_units = 190U;
    msg.cog = 0.0956332444978;
    msg.sog = 0.13201003978;

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
    msg.setTimeStamp(0.478808774126);
    msg.setSource(23575U);
    msg.setSourceEntity(178U);
    msg.setDestination(29952U);
    msg.setDestinationEntity(18U);
    msg.name.assign("BRBSBOAFUXZSWGBJQFPHIOMQRALECCPYXPAJWAXGAXPMYPPZRYNOHEFCFPOWKIDEQQLORKMZTCARCGRKQLHIXLWMPOHNKQZDMIUCLYBWFLTNSEHV");
    msg.value.assign("HSCXRJRZBBTIEIHQECUTKNXDXMJONJSQSMDCIZWUJANIFZPKZGZBQ");

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
    msg.setTimeStamp(0.660216427139);
    msg.setSource(22715U);
    msg.setSourceEntity(108U);
    msg.setDestination(59645U);
    msg.setDestinationEntity(206U);
    msg.name.assign("ZLJSAABWYJMRMHILMOMZPOMHIUEQXTMQMDSAFOWLSAPBGVQJZIKYRXGRKF");
    msg.value.assign("VCPVVYVCLBQZTMOQPCCLTXKAQMWVCWSARHHVJJRDVPQALLOWIQBEFRPDWXSSIFFSZIBTTBAMTEMXMJBNBCNRLQYBJHJZMEZZAZKUSMTYBOTZIQMDYGINNDUDNUDOPEGEHEEFGHJSLXFROJXNOIRXWWAFKPEKNXRUGXUJUCLJGHCRVGUOYSQEWDRRAVLOYWHHIDTTFUSGNNEPMKTFHPKPAKVXCCWGNSGKYKKUDZYLDWBGFAYPAXBUIHZFLQJI");

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
    msg.setTimeStamp(0.344384581919);
    msg.setSource(52611U);
    msg.setSourceEntity(138U);
    msg.setDestination(21118U);
    msg.setDestinationEntity(119U);
    msg.name.assign("UCGRHXZMFXKELARLVYSBIDQTVSTPXBAWJNCPMQRCIHWFOMFNEVOYPOVUXDXEKAYHUOKRQGWDTZNYWBYBULSJGHLHEKEUROGMTFJJPBJZJRZOCDFEEBPKYVFVCXXMAMHJEKACNLTATGOUQSDNQKABPOGERSSAWTIULGHCRWRQIICJIQMLZXTWTFXUXS");
    msg.value.assign("RHBRVSVSFCBOXNLUTGJYOTQPHZCRSAWXMNYLEZEPFKVWLRXHWVZNYLZTJPGQXIKGNXOFHUEIKGJBCQMSNZYLAVBADOOAYWNVFMWJRMIXYHWRTVSSSDAGUQBBJHDEGNLMCK");

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
    msg.setTimeStamp(0.668033290395);
    msg.setSource(6964U);
    msg.setSourceEntity(40U);
    msg.setDestination(6993U);
    msg.setDestinationEntity(123U);
    msg.name.assign("OLIKKAPYMNGLLIVWNKKIIYHOSKXBHRZOYQRGKZQGNHACRDMJJQEMNVSBRETBULWJBHEK");

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
    msg.setTimeStamp(0.689414891529);
    msg.setSource(55364U);
    msg.setSourceEntity(25U);
    msg.setDestination(45259U);
    msg.setDestinationEntity(69U);
    msg.name.assign("LEIBZGWRTWXSQXBZFTJNSMNEEKIUUDEUOPZAJERFSOIOHDEJNYHDNIMYGKUVKNIXUPKFXWFZNMCGOHCTQFNLRLWYQPPGPYBSTYAHGVGBRRKZUQVVYODHMWOYYRQZUPPWMMIYOFVVJSWJLPAZNCOKVPKILCKIMMJRSRPGNFHUTDQCZXVBZEOTLRAHMQXSKHHLJJCGJDFDWXBBCG");

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
    msg.setTimeStamp(0.302979661684);
    msg.setSource(16509U);
    msg.setSourceEntity(176U);
    msg.setDestination(45707U);
    msg.setDestinationEntity(22U);
    msg.name.assign("DPTFSEENXDXMWQVBYWEALTHPRCWPJGMREWGCFDKJCBSBHUYJLEZYNCFAPIQLKASZOGXYHZFTCGRTSUNTDMGEARPCORLLPZRMARYECTKKYJBHOHPYLBQBMTNFIXOHCBVGFOPWKSLGWUSLXXMKZUWQFBQMBVJVJZPSIGOXYCUIJDVNUIAHBEZ");

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
    msg.setTimeStamp(0.395623545589);
    msg.setSource(7358U);
    msg.setSourceEntity(73U);
    msg.setDestination(54012U);
    msg.setDestinationEntity(139U);
    msg.name.assign("IIMLZGRVEDIJKUBTETNEHRARTXXLXXQLNSEMGHCIOBUTNBPRZATYEXCVWUWWITXQFKPMESQKWRQPQTCJZVACBZYORUKCBFGCRFPJKSNAGOGSBLQGPKWNLMQEHOPKANTWFXICMWAJC");
    msg.visibility.assign("EUYGFJVMRDAFJPAILXUPAQQKZXDHSRMOHIHWZMTDADPSQFQTWFWATRAXXMPVYBELQCAHYWDIHKKEOCBROHGNZXARZLSTKUMG");
    msg.scope.assign("YOWDYADNAVVMPFTVYZCLXORRBLCEUQUZPLBUQXMTEJFXDUYYWHHLIMZLWPNLZKPOB");

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
    msg.setTimeStamp(0.679707356795);
    msg.setSource(43877U);
    msg.setSourceEntity(179U);
    msg.setDestination(29017U);
    msg.setDestinationEntity(233U);
    msg.name.assign("KSZDIQDQWDYNWFZIKLVABVQFEZUHHGKDNOXCWERKIHNFMAJ");
    msg.visibility.assign("SEIPOMSTWIHEAZTFSIZXQQDGTHWJOYNIOHCCYZTZWGYDPJDPXIEVUAGPXFMNWQIJDCAKUEAOYSRTHXDIEGFBNKQLBZJWCTQGZLNMWGKUJESHVOMBEYAULJVBYWAUFRUVULJKIPMQKGFNARYQUKXJONJUTBRZNTEVH");
    msg.scope.assign("LZFUIXWMGIPXBDRIBGVAYXIRYGKTDGDAESMBSGURQSRAPVFZAZHJCSAPGJVQGIZFDOIEUF");

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
    msg.setTimeStamp(0.671727204641);
    msg.setSource(22687U);
    msg.setSourceEntity(243U);
    msg.setDestination(3123U);
    msg.setDestinationEntity(3U);
    msg.name.assign("QVQEMNIQYCNJXPSREXSUXLTSJVWOGDDZSFVPWDSZHGPFTJERRNZALZVORLOYBZIWDYYKUJDPFPXQJQORYFMGNETRRQSOLQKTZJYVETFFUACZWPBJUGKVFGYOFGDWERDNXKAWUTAAWSUVOSCIKHMLNUDHYMNYUDUAI");
    msg.visibility.assign("LTMPGDVRPVSJBADETKUMSLHHDTPYIRUMBFKYUAGKKCGCFUWNFPEUBIZLYKXHVKXODYFUCIBAVPNDTLYVBZMJKCWNGUNLAHXGQTUPHHDZNSPDRMWNDELJZEBHNTQRSKYXZXOFIJNDWTJZRSYOZNAQGEZCRQGRIZACEQAXQZLSMTOWHAFLHJCSIFMWGSBIEFJVX");
    msg.scope.assign("CGLDCHMWNIIYKMBHPPQAQVJWU");

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
    msg.setTimeStamp(0.60957894048);
    msg.setSource(56261U);
    msg.setSourceEntity(94U);
    msg.setDestination(23384U);
    msg.setDestinationEntity(180U);
    msg.name.assign("VTLMUXMTXZNVHJYAJMROVAAGMFGNOWRQEMONOWCFCZZVKCMNCIZPSSQQSHZTYLBNPUWLEAYADCQIUERWFLOAXSWQXPUYISWSGCGXHXJUZMWKMHVWIJA");

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
    msg.setTimeStamp(0.190777256351);
    msg.setSource(42993U);
    msg.setSourceEntity(218U);
    msg.setDestination(65375U);
    msg.setDestinationEntity(196U);
    msg.name.assign("DCWQAIUOWOZFDDEXTPAEYNMKALIOZHMKCXICCACIMKTKTVSSEFQYQGOVZPFFPPRSBMMGAHLBHLEIETBWVYRRMNCCRUDABUMGJUPCZUTRGTZONDVFWBRYQWQNUGZONXILHQFNOKHLZMJNQ");

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
    msg.setTimeStamp(0.799611534474);
    msg.setSource(30937U);
    msg.setSourceEntity(222U);
    msg.setDestination(55830U);
    msg.setDestinationEntity(170U);
    msg.name.assign("IFFNTYKILCDTBMNLRDHMPZVYCORICTQPQTDRPCGSUKVPHIJWZRURTGKAJEAKRXIUAUKNLROFVCOSZEHQGJFQAGHXCPAXSOHYLQBFIULJBFTAMQUSBRHZDNYJAXGNIKZVJ");

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
    msg.setTimeStamp(0.94763011508);
    msg.setSource(14014U);
    msg.setSourceEntity(216U);
    msg.setDestination(57895U);
    msg.setDestinationEntity(219U);
    msg.name.assign("BEZIZFJVHUOBBUXJPJMQULLZTCCIELDKWHFOFVJM");

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
    msg.setTimeStamp(0.243786036547);
    msg.setSource(52977U);
    msg.setSourceEntity(56U);
    msg.setDestination(31492U);
    msg.setDestinationEntity(213U);
    msg.name.assign("OCTJHJQDLDNXOVROHXIQZNOFWALEDTVSMONUCDGUJFFCDIHROEXVMXOBWIXULTUFBBCNUWTRWEDQPIERBLDLQCFSKKWYWYAYVTKTKASJMHXRTHKGVPPLKSBHCKAQIHYSWDRNPDAPNFPKXTMZWZFUHZJFNVSQGXZLLUKMAEBERRFT");

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
    msg.setTimeStamp(0.100666372401);
    msg.setSource(59721U);
    msg.setSourceEntity(181U);
    msg.setDestination(58604U);
    msg.setDestinationEntity(99U);
    msg.name.assign("WFWHLTDQEPKPGMDJSXBHIRNNFSJHVGJFYMDZNMGANJDBMKOFRKYYRLPIAZZJQRSZULROVLRUXSUEKCJNKKGEAWPICQYECXOHMAMQMASEJLHBLTSUDRQQYQLLUYCASCTPQIYRFIRWXCLFXOJZIUONTGHUXNDPGAJEBKLTKBOZQJMXYIWWTFWNEGHCMIXVXSIPMGFBDRUGDSDZOVGO");

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
    msg.setTimeStamp(0.828321186052);
    msg.setSource(15948U);
    msg.setSourceEntity(147U);
    msg.setDestination(38628U);
    msg.setDestinationEntity(184U);
    msg.timeout = 448149116U;

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
    msg.setTimeStamp(0.589974084163);
    msg.setSource(21632U);
    msg.setSourceEntity(155U);
    msg.setDestination(30988U);
    msg.setDestinationEntity(14U);
    msg.timeout = 34853409U;

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
    msg.setTimeStamp(0.486972006929);
    msg.setSource(15685U);
    msg.setSourceEntity(128U);
    msg.setDestination(45128U);
    msg.setDestinationEntity(51U);
    msg.timeout = 6612965U;

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
    msg.setTimeStamp(0.488099713275);
    msg.setSource(10638U);
    msg.setSourceEntity(216U);
    msg.setDestination(57456U);
    msg.setDestinationEntity(156U);
    msg.sessid = 1943543001U;

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
    msg.setTimeStamp(0.822306063792);
    msg.setSource(49551U);
    msg.setSourceEntity(153U);
    msg.setDestination(9071U);
    msg.setDestinationEntity(197U);
    msg.sessid = 1563813752U;

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
    msg.setTimeStamp(0.597933876586);
    msg.setSource(41297U);
    msg.setSourceEntity(167U);
    msg.setDestination(27069U);
    msg.setDestinationEntity(237U);
    msg.sessid = 1947487107U;

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
    msg.setTimeStamp(0.461906798164);
    msg.setSource(38679U);
    msg.setSourceEntity(59U);
    msg.setDestination(42709U);
    msg.setDestinationEntity(133U);
    msg.sessid = 3093562982U;
    msg.messages.assign("FUOGWQTCAIXHTVXUHCUIMPRZDXKNBWHIABJECKGRLQDOKAWXPYAFDYIWZQTOKTBFLVPZNYPKLRDGIIMLYRZKXPNROMBAYTOUFWPPLXWSTFBZKHVUXNWNHLGZSQJGTSVJCWXZBXILIQMBHAVOERCQGNKOFHBSTZFVESCNFIUGYLXAOAYA");

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
    msg.setTimeStamp(0.589985285916);
    msg.setSource(57937U);
    msg.setSourceEntity(240U);
    msg.setDestination(18394U);
    msg.setDestinationEntity(243U);
    msg.sessid = 1138941245U;
    msg.messages.assign("YYHVLUJUZIZJRNEUTFRTAKXSWGNQDZPQSBPQDMIABSEALVLLFYXFXEPAVEWMQWRJAKDWTTYCLXOHRETWYFANNJCQOKILWQLJDRGLRXZVUZXJCCHUHBIBKFILZONVCIHNBYRWYSGTDXEICWBPVFBSBWHKGFIMZNJBMLVSKNXPCSYOZTTRHDPPECSGCUQWGMUXKDUNEODOOSQTZGAQFJFKH");

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
    msg.setTimeStamp(0.192764024812);
    msg.setSource(27381U);
    msg.setSourceEntity(174U);
    msg.setDestination(30637U);
    msg.setDestinationEntity(40U);
    msg.sessid = 1422423504U;
    msg.messages.assign("FODKAOZRTPFYNNQIFFADJBLXOGWEUBAECHCMHKKYRUYPSCOXAXYQIWTQWNERGERCSJDGXKTEVNSPCYGLPQIBPMHWTQHGTUXQTMYWFUULJNBVPGXCFMOIQSCRSHKQZNFNSSHAJZTSVZCHKCDOXVVKKEOAYULPXMZPBHMWGODCSIPYYEBTZBXVLIJAD");

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
    msg.setTimeStamp(0.432660857097);
    msg.setSource(18840U);
    msg.setSourceEntity(247U);
    msg.setDestination(37889U);
    msg.setDestinationEntity(97U);
    msg.sessid = 1027508337U;

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
    msg.setTimeStamp(0.12947861518);
    msg.setSource(56687U);
    msg.setSourceEntity(5U);
    msg.setDestination(3183U);
    msg.setDestinationEntity(163U);
    msg.sessid = 2857562157U;

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
    msg.setTimeStamp(0.214259898492);
    msg.setSource(3269U);
    msg.setSourceEntity(69U);
    msg.setDestination(64296U);
    msg.setDestinationEntity(238U);
    msg.sessid = 3469971601U;

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
    msg.setTimeStamp(0.527187071066);
    msg.setSource(15719U);
    msg.setSourceEntity(209U);
    msg.setDestination(40546U);
    msg.setDestinationEntity(195U);
    msg.sessid = 3679731376U;
    msg.status = 253U;

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
    msg.setTimeStamp(0.963123864544);
    msg.setSource(37498U);
    msg.setSourceEntity(243U);
    msg.setDestination(941U);
    msg.setDestinationEntity(6U);
    msg.sessid = 2160816583U;
    msg.status = 129U;

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
    msg.setTimeStamp(0.89931842453);
    msg.setSource(29867U);
    msg.setSourceEntity(244U);
    msg.setDestination(39016U);
    msg.setDestinationEntity(169U);
    msg.sessid = 3557113049U;
    msg.status = 62U;

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
    msg.setTimeStamp(0.0837616848068);
    msg.setSource(24981U);
    msg.setSourceEntity(60U);
    msg.setDestination(16964U);
    msg.setDestinationEntity(206U);
    msg.name.assign("MUSZUGEJAMRFUCGGOAFZXBHCBKXLDHSRIWLDMYBRBUVQEJQTLSTVSPLYWIADNEOKDPTESRBJDHDYEBLXFJIRTRHWJCVBVDAXFNZZNNINZPQOLPIUWHMQOBWXLIEQN");

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
    msg.setTimeStamp(0.375434260094);
    msg.setSource(61572U);
    msg.setSourceEntity(76U);
    msg.setDestination(6353U);
    msg.setDestinationEntity(78U);
    msg.name.assign("WEWHSOBBNWKYHNVLRXXCPFTBFTGJOOEUYDADIJPDQFJOXFVLNNBSWASYIQEEMHHRYKBMOZMIVKZGRPXQEHQJVVILNNCCBBZKAFTLMFMRZOQTUGAZCUOPODYASICMUTKQRARXHAXSWSIRGIHFJQDFWHXOUWZDCKEPZUULWQSTDMRJCMLPPV");

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
    msg.setTimeStamp(0.910090456887);
    msg.setSource(35895U);
    msg.setSourceEntity(90U);
    msg.setDestination(58414U);
    msg.setDestinationEntity(151U);
    msg.name.assign("RAGOPRWGYSWLUKJLRFHGTVYYJIBDYRNJGXGSAAFCJXCYOGSUAMHHTONMXNMMBVLTDWOQIBBVZCUXWTGMLWUJHTHZATOQZQIKIMZPVGYODVSJNULKRNUTXCLFBJJDBPNPADIBMDYCJAQIQOLOHZCQHTUWPRIIESPKCHBCFKSZSUFGESXBTLSNESEKWGXEJKUDKRAZAVOUEMBVPDPHNRZPQXYVERARDDNOQCIEFTCPKZXLWWKQVFMQVFYEYXFZ");

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
    msg.setTimeStamp(0.757223698325);
    msg.setSource(19783U);
    msg.setSourceEntity(148U);
    msg.setDestination(24333U);
    msg.setDestinationEntity(20U);
    msg.name.assign("SFJELSIWDXKAYGIEZMDGXOWMNUVTRGQBPKUMUVHCEHLFTLNANGSMPDUICXZPJKYGATUCNJWKTJVZEBXOPSUHXXJOMJPDJBHMUANQFWWFSWLEBRMZBRVAYUDDSVGOIXCHGMGFWBIQOBVVLHME");

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
    msg.setTimeStamp(0.263857973226);
    msg.setSource(55826U);
    msg.setSourceEntity(192U);
    msg.setDestination(51426U);
    msg.setDestinationEntity(109U);
    msg.name.assign("NVTGHGZYCGOPALMGYQKZVLZSVEPNBHYHXLCKNUFUQDPTLQYMFUPPYOCEDBYIHUSGEVLDJREHADWWLSDFIGJHHINTZTXRVEWMTJSXPWFZOMDJPORMIJUJGNUIWFCIYFACNWABTJJSDAXKUKONSWXGKOQKL");

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
    msg.setTimeStamp(0.507810890288);
    msg.setSource(60749U);
    msg.setSourceEntity(191U);
    msg.setDestination(22886U);
    msg.setDestinationEntity(55U);
    msg.name.assign("NXLGAISEMIYRPBXCMLDYDMEDHQQZATJITRENKQAMBNWCQVAWMWEHKIXZVFUHQJMGKVVEDVSLTVXXYTGPUYIOTYTHYRPKLGBIIFPZSBYUMHODYT");

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
    msg.setTimeStamp(0.745947614602);
    msg.setSource(5875U);
    msg.setSourceEntity(135U);
    msg.setDestination(16665U);
    msg.setDestinationEntity(114U);
    msg.type = 247U;
    msg.error.assign("JCQJWIZUBEQNDRJJSYRGSKURZJZFWPTYCOLMKUWHHYLOQAIOWQLHYDRGHLTBGDXMHKVOQPJZOGWFZXTDRVPBKOCXSIHK");

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
    msg.setTimeStamp(0.146167317622);
    msg.setSource(30536U);
    msg.setSourceEntity(17U);
    msg.setDestination(55215U);
    msg.setDestinationEntity(36U);
    msg.type = 224U;
    msg.error.assign("IDUUQVNVMAPASRIVSWNDUMOYPSIQNPXKKAAOELOBKPCMBJBFWJJMY");

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
    msg.setTimeStamp(0.297095487994);
    msg.setSource(30451U);
    msg.setSourceEntity(3U);
    msg.setDestination(2463U);
    msg.setDestinationEntity(25U);
    msg.type = 76U;
    msg.error.assign("LNYEMQPAHOASJGNNIYBCDPVOZVLCPMSXXNRUUTICDYKFFFCBWIG");

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
    msg.setTimeStamp(0.367884625049);
    msg.setSource(17330U);
    msg.setSourceEntity(219U);
    msg.setDestination(60334U);
    msg.setDestinationEntity(253U);
    msg.seq = 64424U;
    msg.sys_dst.assign("BIVPBRFTCIBTGKTZVJKXPYYJFMXDTZVHZAGJQVSADPDHHJDQTFSMBPYQZSJURCOXEUQSAWVEXDMERQKAGXNOWVRPKGDRFPWLLOHQIJLSOCRIVXWMQRUUNGFALOOISLNOIZAYDBBPUTMSUIFESGOHFTZEYKPYIHXHEEZTJLGFNZAHXETWPJACHDKNYLNWAYUKADRVICGQEC");
    msg.flags = 243U;
    const char tmp_msg_0[] = {-91, 78, -43, 96, 49, -73, 92, -4, -8, -11, -42, -119, -75, 118, -93, -128, -99, -73, -126, 12, -10, 122, 1, 58, -7, -81, 41, -30, 107, 46, 46, 110, 20, 112, 65, -121, 43, 29, -21, 63};
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
    msg.setTimeStamp(0.872826989202);
    msg.setSource(4916U);
    msg.setSourceEntity(92U);
    msg.setDestination(5813U);
    msg.setDestinationEntity(110U);
    msg.seq = 41068U;
    msg.sys_dst.assign("AWDTPCSIQXRDGGVLTRWMZWAICAOXVSWIGJYMKYLHMBATQVSIGZTMRJDWSTEGBUKEQSTINIHADOEGBAUJZMMULQOYYKQ");
    msg.flags = 41U;
    const char tmp_msg_0[] = {27, -86, 64, 80, -48, -17, 64, -13, -82, 40, -63, 50, -26, 21, 60, 65, 35, -38, -79, -123, 51, -109, 23, -18, 34, 123, -101, 12, -82, 55, 64, -3, 40, -80, 48, 123, -83, -126, -23, 18, 15, 64, -126, 50, -113, 88, -76, 18, 41, -36, -26, 117, -102, -43, 108, -31, -10, -111, 82, 29, 60, 18, 99, 33, 75, -34, 72, 21, 32, -119, 45, 98, 114, 22, 58, -29, 109, 31, 10, 15, 55, -17, -19, 33, 73, -4, -54, 28, -126, -49, -85, -62, 86, -82, 69, 41, 91, -107, -123, -121, 0, -67, -58, 46, 53, 69, 4, 13, -40, -83, -125, 110, 44, -82, 39, -58, -37, 124, 78, 59, -61, -54, 102, 50, 19, 70, 92, 17, -87, -109, -85, 20, 77, -69, 120, -128, -54, -120, -54, 81, 79, -46, 83, 82, 90, 26, -19, -18, 34, -95, 104, -76, -65, -22, -119, 27, 126, 86, 9, 126, 2, -121, -93, 58, -81, 62, 34, -85, -116, -71, 0, -113, 68, 120, -106, 19, 12, 96, -59, 50, -65, -95, 71, 38, 70, -116, -124, 103, 92, -49, 110, 46, -99, -31, 61};
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
    msg.setTimeStamp(0.831084695004);
    msg.setSource(57771U);
    msg.setSourceEntity(199U);
    msg.setDestination(58542U);
    msg.setDestinationEntity(44U);
    msg.seq = 60047U;
    msg.sys_dst.assign("YIBHQRCECPMATUGDDYHICGQNQVLMGZAUPXNJZMXQZOSKMSAERBRIYPPNHFXZCQEJAYAMVDSQLONLUBBZFTCYFIYMKAZNVRBHHLJNJDIPTGNLTFABXTBJLSTZFDCLLAUIJ");
    msg.flags = 60U;
    const char tmp_msg_0[] = {-41, -26, -15, 3, -98, 33, -53, -85, -72, -78, -112, -28, -86, 56, 31, 50, 90, 72, -108, 114, -125, -64, 125, -70, -92, 76, 125, 4, -48, 107, 51, -104, 76, 30, -32, -23, -111, 105, 14, -108, 0, -41, 51, 25, 87, 17, 98, 18, -80, 69, 24, 119, -26, 62, -15, -58, 101, 95, -15, 92, -28, -50, 19, -5, 109, 94, 32, 67};
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
    msg.setTimeStamp(0.164429722803);
    msg.setSource(13700U);
    msg.setSourceEntity(189U);
    msg.setDestination(12378U);
    msg.setDestinationEntity(95U);
    msg.sys_src.assign("XSOKPQUVXARTMSDBXQDWIUTZWLISPEHZNHUACSZKLMBUWZEPYCAZXQVBOCQSECMCNGZORJWVSRONMQHEPRFFBXEDHNFTXECIUZDSOJGXQTLXTKAHVTQYUUZGWWVFDQDDSYMFLYAYTZYJVDJRWFYPUIIKLKTNFEVEIBAUIOJFGINCHNMPLPVRJRZDCKNTMBGQOAKV");
    msg.sys_dst.assign("CJPNKUPIFLEHA");
    msg.flags = 250U;
    const char tmp_msg_0[] = {90, 104, 93, 19, -8, 72, 95, -50, -117, 73, -20, 23, 33, 15, -93, -51, -80, -10, -99, -112, 57, 118, -69, -18, 42, 75, -35, 82, -83, 21, -104, 39, -9, -113, 60, 86, -116, 83, -49, 4, -115, -114, -102, 111, -74, 105, -124, -77, 4, 21, 30, -109, -62, 85, 30, 115, -85, -120, 110, -60, -20, -49, -78, 6, -100, -52, 32, 19, -86, -60, -82, 69, 119, 75, -116, 119, 97, 28, -78, 100, -80, -102, 47, -74, 39, 62, -57, -109, -50, -101, 95, -75, 45, 115, -128, 44, 26, -70, 117, 94, -18, 1, -19, -63, -81, -119, 76, -59, 106, -60, 34, 25, 116, -100, -61, -8, -37, -122, -65, 61, -48, -56, -97, -116, -79, -9, -108, -24, 6, -121, -48, 43, 22, -119, 71, -40, 99, -65, -113, 41, -121, -123, -62, -75, 74, 58, -10, 125, -104, 119, 114, 98, 98, 66, -24, -49, -13, 104, 2, 102, -76, 4, -105, -42, 82, -62, -128, 87, -92, 58, 92, -107, -94, 27, -57, -75, 43, 126, 3, -8, -91, -5, -36, -74, -78, -21, -36, 93, -87, -92, 72, -19, 41, 113, -112, 59, -108, -61, -108};
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
    msg.setTimeStamp(0.692440528927);
    msg.setSource(30105U);
    msg.setSourceEntity(24U);
    msg.setDestination(57366U);
    msg.setDestinationEntity(7U);
    msg.sys_src.assign("REYLILFIKTBBFCTVMRFFEJPXGAKZLPKRAJXQQIIQIRCSVKEUSWCVCYLSHQNMCDEJGISJDVWVLRHVAUKMHGZAMNHBPCXFGWNDZDVBZYSQNCONYMUNARBYXOUNBTRKPPFLUUHIWUBFXYVWESXHWQVOQEQARYMHGQQTTLFYYONISDKEBZPWFOCAMLSYNR");
    msg.sys_dst.assign("WAUGNWLHTZMHKEBHCFEKPYPFGCDAGQEABBKTVGJEVFUTESTTHZUILUDXAXMYLRPYQVWUSWXNLKFOOBNRYVFPMVEYQSIXLZQJTADUYYONSVHHTJX");
    msg.flags = 164U;
    const char tmp_msg_0[] = {100, -5, 124, 49, 118, -46, 91, 29, 34, -28, -69, 106, 67, -15, 57, -101, 83, -63, 17, 72, 67, 34, -65, -118, -30, -68, 25, 4, 49, 124, -108, -10, -112, -39, 97, 89, -103, -62, -78, 21, 77, 82, -45, -47, -82, 92, -91, 91, -121, 114, -85, 118, -103, -98, -48, 24, 86, -74, 108, 112, -21, -73, 46, -114, -96, -55, -35, 37, 12, 45, -69, 99, 49, -66, 81, -64, 73, 8, 24, 124, 106, -40, 20, 42, -96, 33, 65, -101, 41, -35, 113, -32, 24, -99, 38, -98, 67, -84, 65, -77, -66, 105, -102, -111, 90, 0, -96, 125, -91, -46, 48, -14, 43, 31, 121, 97, 101, -48, -94, -58, -3, 50, 7, 26, 99, -122, 10, 58, 126, -66, 94, -97, 34, 15, 96, 15, -42, -41, -93, -74, 107, 15, 21, -37, 71, -108, -110, -97, -118, 101, 33, -128, -28, 33, -93, 3, 58, 91, -55, 55, 71, -31, 26, -60, -16, 70, 5, -59, 114, -71, -64, -100};
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
    msg.setTimeStamp(0.748900220606);
    msg.setSource(23140U);
    msg.setSourceEntity(170U);
    msg.setDestination(63651U);
    msg.setDestinationEntity(150U);
    msg.sys_src.assign("HBTWHJREWSIYZJLXHCKMTVPMNFZPEELGCNOVDOAEJPOHTXZAANMSUSCYBGZAYSPWDGRWIDZRZHVFEUIQHFJZWBVDYQIXXAXFJKPSQIOCTTGHVYMNIQU");
    msg.sys_dst.assign("EWMITXFPTISQABOVHVBILQRSXEKYMWBUZIFFIMERYQKDGRPXJMJNHCHHJILHWCCTSZWYPBSAFLNGVMMXZDUBCGTZPIQTTNQFOCYYCLZDTGFPJBRNFHSDDARUZVWPMDLONLZOJSURWKQOFEXAJYVWEIVPJVGLTJHEZPLKUXMADWKKIGOTRNJKHPGNVOLNROUNYRKXMAHYPKXXWJFBWAQQRZDSOSCXFHKBYDQOVIQAAZ");
    msg.flags = 8U;
    const char tmp_msg_0[] = {-98, -124, -103, -106, 124, 50, -31, 86, -74, -17, 109, -126, 117, -102, 4, 98, -80, -57, 99, 0, -32, 109, 100, -92, -77, 84, -100, -13, 13, -18, 108, -57, -124, -10, -40, 81, 85, 77, -32, -67, -20, -120, -53, 86, -79, 82, -88, 5, -39, -98, 122, 110, -96, -29, 104, 21, -5, 122, 1, -52, -111, -101, 110, 72, 68, -54, 93, 33, -93, 27, -76, 106, -78, 13, -31, 51, 109, -73, -78, -44, 33, -101, 42, -124, 106, 41, -109, -73, 0, 47, -36, 74, -71, 11, 34, -55, 95, -14, -24, 99, -4, 67, 103, 58, 1, -100, 42, -58, -115, 9, -54, -42, 121, 8, 23, -33, -42, -13, -65, 7, -12, 67, -21, -111, 16, 49, -9, -114, 22, 85, 110, 64, -15, 84, -17, 117, -94, 76, -27, 53, -57, -74, 7, -57, 97, -80, -6, -33, 22, 70, 95, 17, -80, 35, -50, -15, -116, 11, -10, 46, -4, -63, 58, 20, 3, 100, -125, 107, -82, 89, -105, 85, -36, 12, 29, 40, -38, -17, -54, 122, -60, -78, -28, -83, 107, 76, -75, 49, -1, 18, 99, 67, -44, -7, 45, -3, 25, -17, -1, -12, -82, -61, -127, 54, -76, 19, -115, 103, 41, 76, -26, -6, -120, -9, 96, -67, 48, 20, -49, -22, 38, 1, 99, 75, -31, 102, 102, -43, -70, 51, -112, -44, 73, -24, 90, -38, 57, -118, -10, -120, 123, 64, -82, 52, 48, -52, 109, 124};
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
    msg.setTimeStamp(0.201983850656);
    msg.setSource(38764U);
    msg.setSourceEntity(206U);
    msg.setDestination(33082U);
    msg.setDestinationEntity(17U);
    msg.seq = 45203U;
    msg.value = 137U;
    msg.error.assign("BYDAJTFDXFLFGVJBLJPLBGNLKLEVQHHFIUFSUCQDXEGKEQCHVPZFHYXURXCFYLSBOYVCDCEOCWZDUYBAUKDWKMEARCMIYGWPJSCXELLNRWQMWGZENZJIAXGGYDYBSQKMVHMHTUZQQSNTWBUZNMSATINQ");

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
    msg.setTimeStamp(0.521472776282);
    msg.setSource(28466U);
    msg.setSourceEntity(209U);
    msg.setDestination(38060U);
    msg.setDestinationEntity(245U);
    msg.seq = 53535U;
    msg.value = 135U;
    msg.error.assign("CAYZISZRTXLJQBTOBQEBUDXCOULJPFXMXQMWYHXZNPUOFXJRZTNHLHFSEPFZQIGOYRWWVDKAIYMACMKIDMSR");

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
    msg.setTimeStamp(0.58541435349);
    msg.setSource(49078U);
    msg.setSourceEntity(169U);
    msg.setDestination(17189U);
    msg.setDestinationEntity(117U);
    msg.seq = 2057U;
    msg.value = 241U;
    msg.error.assign("PECNYSDLIXKXBBLBVZYVLMSWQNCQUWMADEKZGZIFUXVVWMLVORGPSMHZQOHONZQAADSIHFXXLKDJCQBYDKZOAQTQNEOHTLFM");

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
    msg.setTimeStamp(0.192990150837);
    msg.setSource(21806U);
    msg.setSourceEntity(119U);
    msg.setDestination(13741U);
    msg.setDestinationEntity(187U);
    msg.seq = 18303U;
    msg.sys.assign("HRXLDDNQBLNCAWYPMUZQXLIQOKSZUCZAZKLWIEIGOCMIZSFPYYVLYYNBKTOJVRAQIAWCTNMXWEGGRJMUMDRBHASTOVUDPGOIBGVFCCFMFRUEXVDUSFPBVZJIQSZWLNTCNIQWNNBPPUNVITXRESJFRFLVGPJXHTBMVMCCACSSHBPNRREAHHYOSBPXKDJZZULXKWDJJEXGOAKQDMKZWTBEJQFHAYLJPKHUGQHYREGOSDTWLTQI");
    msg.value = 0.907467915801;

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
    msg.setTimeStamp(0.231093082613);
    msg.setSource(298U);
    msg.setSourceEntity(164U);
    msg.setDestination(57303U);
    msg.setDestinationEntity(0U);
    msg.seq = 28856U;
    msg.sys.assign("FPVPTBRCTJ");
    msg.value = 0.715618353185;

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
    msg.setTimeStamp(0.963622985424);
    msg.setSource(48078U);
    msg.setSourceEntity(123U);
    msg.setDestination(22865U);
    msg.setDestinationEntity(254U);
    msg.seq = 64788U;
    msg.sys.assign("ZBZICXUKGZEBQ");
    msg.value = 0.567222453327;

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
    msg.setTimeStamp(0.112590076322);
    msg.setSource(25604U);
    msg.setSourceEntity(94U);
    msg.setDestination(32938U);
    msg.setDestinationEntity(155U);
    msg.action = 161U;
    msg.longain = 0.852421564297;
    msg.latgain = 0.552787623804;
    msg.bondthick = 860786743U;
    msg.leadgain = 0.429878586116;
    msg.deconflgain = 0.65590092171;

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
    msg.setTimeStamp(0.735450052311);
    msg.setSource(24574U);
    msg.setSourceEntity(96U);
    msg.setDestination(270U);
    msg.setDestinationEntity(160U);
    msg.action = 138U;
    msg.longain = 0.644416170359;
    msg.latgain = 0.972446166961;
    msg.bondthick = 3720392893U;
    msg.leadgain = 0.334446849909;
    msg.deconflgain = 0.875772564538;

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
    msg.setTimeStamp(0.442828660536);
    msg.setSource(51733U);
    msg.setSourceEntity(238U);
    msg.setDestination(40893U);
    msg.setDestinationEntity(10U);
    msg.action = 226U;
    msg.longain = 0.125706526034;
    msg.latgain = 0.756841339785;
    msg.bondthick = 1220989420U;
    msg.leadgain = 0.610348051742;
    msg.deconflgain = 0.947453788658;

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
    msg.setTimeStamp(0.156835315515);
    msg.setSource(16843U);
    msg.setSourceEntity(131U);
    msg.setDestination(33756U);
    msg.setDestinationEntity(254U);
    msg.err_mean = 0.162890316789;
    msg.dist_min_abs = 0.877958108754;
    msg.dist_min_mean = 0.616392151156;

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
    msg.setTimeStamp(0.891886942414);
    msg.setSource(17764U);
    msg.setSourceEntity(224U);
    msg.setDestination(62809U);
    msg.setDestinationEntity(215U);
    msg.err_mean = 0.491588420295;
    msg.dist_min_abs = 0.0129221200904;
    msg.dist_min_mean = 0.151095774493;

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
    msg.setTimeStamp(0.966902545032);
    msg.setSource(24355U);
    msg.setSourceEntity(6U);
    msg.setDestination(24592U);
    msg.setDestinationEntity(46U);
    msg.err_mean = 0.435322391459;
    msg.dist_min_abs = 0.163093453043;
    msg.dist_min_mean = 0.135139630923;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.278102821454);
    msg.setSource(29398U);
    msg.setSourceEntity(133U);
    msg.setDestination(5133U);
    msg.setDestinationEntity(248U);
    msg.uid = 40U;
    msg.frag_number = 46U;
    msg.num_frags = 73U;
    const char tmp_msg_0[] = {-107, -128, -123, -17, -10, 21, -43, 89, 24, -123, -43, -44, 23, -52, -106, -128, -6, -106, 10, -96, -77, 93, 87, 44, -120, -40, -56, -110, 68, -11, -19, 77, -109, 20, -96, 22, 29, 28, -63, -14, 28, 53, 67, -102, -13, -128, 74, 107, -99, -102, 3, 17, 115, 73, 72, 93, -27, 31, -44, -42, -112, -101, 91, 5, 26, 103, 2, 106, 78, -12, 62, -128, -74, -87, 49, -17, -57, 83, -2, -91, 88, -106, 123, -54, 38, -16, 70, 87, 112, -10, -11, 94, 33, 121, 83, 100, -57, 9, -116, -120, -78, 21, -67, 77, 51, -63, 95, 91, 1, 87, 13, -14, 58, -32, 105, -8, -124, -54, -42, 51, 87, -88, -96, 33, -75, -80, 114, -15, -81, 2, -71, -52, 18, 33, 6, 116, -38, -82, -51, 32, 18, 54, -101, 89, 35, -26, 92, -91, 98, -44, 21, 4, 2, -103, -27, -66, 52, 100, 1, -60, 29, 46, 100, 70, -102, 105, -43, 58, -102, -122, -107, 70, -43, 69, -15, -78, -43, -50, -72, -7, -114, -104, 59, 78, -32, 12, 85, -102, 124, -3, -2, -14, -30, -96, -79, -72, 108, -84, 0, -99, -128, -90, -61, -32};
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
    msg.setTimeStamp(0.955930918226);
    msg.setSource(56427U);
    msg.setSourceEntity(157U);
    msg.setDestination(47905U);
    msg.setDestinationEntity(17U);
    msg.uid = 100U;
    msg.frag_number = 91U;
    msg.num_frags = 143U;
    const char tmp_msg_0[] = {-118, 15, -21, -40, -100, 44, -122, 23, 5, 123, -8, 76, -52, 124, 115, 90, -104, 100, -121, 109, -91, -49, -50, -30, -103, -114, 93, -42, -11, -11, -60, -62, -73, 9, -43, 70, -5, 25, 120, -113, -7, -11, 113, 36, 106, 2, 17, 12, 11, -36, -81, -9, -85, 3, -30, -5, -27, -88, -27, -23, 33, -72, 19, 113, -96, 87, 21, 11, -27, -40, 49, 25, -111, -17, 112, -59, 123, -9, -103, 121, 86, -111, -56, -85, 83, 113, 70, 28, 85, -27, 2, 81, -11, -116, 111, 3, 41, -104, -119, -108, -79, -49, 93, 69, 49, 119, 80, 95, -109, 113, 67, 30, 26, 78, 38, 116, -32, 58, 124, 59, -36, -68, 120, 24, -60, 65, 56, -119, 42, -88, -76, 67, -31, -73, -57, -60, -79, 76, -36, -82, -63, -119, -121, 103, -118, -62, -66, -31, -59, 61, -107, -47, -11, -33, -32, -91, 83, 98, -116, -6, -46, -19, 89, 33, 90, 43, 75, -29, 99, -5, -43, 116, 49, -104, 54, 63, 7, 36, 56, -67, 92, -101, 109, -58};
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
    msg.setTimeStamp(0.925004397457);
    msg.setSource(20067U);
    msg.setSourceEntity(96U);
    msg.setDestination(21482U);
    msg.setDestinationEntity(60U);
    msg.uid = 134U;
    msg.frag_number = 140U;
    msg.num_frags = 98U;
    const char tmp_msg_0[] = {53, 125, -6, -49, -36, 19, -23, 16, -108, -127, -52, 25, 1, 68, 110, -30, -119, 4, 22, -82, -57, 34, 12, 115, -24, -10, -93, -91, -80, 44, -39, 53, -35, -81, -52, 43, 46, 71, -96, -113, 61, 7, -116, -14, -115, 110, -52, 12, 115, 73, 21, -88, -7, -35, 80, -40, 38, 74, -52, -41, 126, 26, -88, -41, -4, -126, 125, 38, 0, -115, 28, 12, 119, 115, 114, -78, -83, 43, -84, 43, -50, 86, 115, 110, 107, -65, -4, -124, -88, 73, 50, 62, 42, 97, 49, 37, 66, 9, 73, 43, 27, 106, -128, -97, 41, 66, -101, -63, 83, 114, -81, 75, 40, 115, 67, -119, -17, -31, -98, -9, -22, 54, 80, -72, 51, -79, -71, -125, -13, 88, 34, -45, -7, -6, 83, -76, -45, 16, 88, -24, -54, 96, 22, -30, -45, -122, -83, -99, -75, -82, 96, -93, 0, 107, 20, -107, -109, 9, 55, -60, -51, -53, 65, 59, -116, 105, 2, -103, -12, 84, 49, 19, 70, 97, 124, 64, -39, -25, 28, -24, 94, 99, 112, 73, -29, -6, 126, 61, 48, -58, -84};
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
    msg.setTimeStamp(0.00839694803827);
    msg.setSource(17196U);
    msg.setSourceEntity(200U);
    msg.setDestination(16305U);
    msg.setDestinationEntity(4U);
    msg.content_type.assign("QRGHCUOEHJMUZYS");
    const char tmp_msg_0[] = {43, 83, 45, 61, 100, 81, 51, -84, -83, 34, -124, 68, -43, -49, 118, 57, 103, -96, -17, 60, -27, -121, -24, 117, 119, -109, -80, -111, 41, -41, -123, 118, -106, -101, -102, 62, 94, -78, -93, 78, -24, -42, 117, -29, 26, -70, -128, -98, 125, 3, -35, 64, 74, 43, -9, -68, 87, 65, -70, -92, -43, -11, -67, -42, -44, -49, 68, -67, -46, -85, 122, 74, -70, -110, -96, 81, 29, 68, -119, 7, -47, 71, -11, 84, -87, -70, -14, -30, -44, 103, -6, -23, 26, 56, -24, 117, 87, -92, -23, 100, 97, -10, 76, -14, -36, -64, 6, 14, 67, -23, 40, 1, -51, 42, 124, -93, 109, 48, -36, -72, 84, -35, -83, -66, 109, -81, -100, 83, 0, 66, -100, 28, 3, 126, -3, -37, 104, 124, -63, -53, 94, -90, 95, 100, -53, 53, -97, 119, 81, 44, -1, 121, -122, 46, 85, -92, -41, -34, -89, -106, 59, -21, -20, -99, -120, -57, 106, 119, 77, 109, 89, 3, 48, 8, 57, -56, 10, 117, 82, 106, -69, 62, 39, -92, 17, -57, 51, -85, -6, -32, 106, -2, -124, -16, 35, -13, -77, -125, -11, -30, -66, -12, 72, -45, 35, 35, 13, -47, -3, 71, -107, -46, -112, 107, 5, -85, -45, -88, 61, 63, 22, -98, 68, -86, -63, -5, -50, -25, -51, -39, -99, -25, -80, -128, 114, 36, -113, -34, 66, 36, -53, -101, -76, 18, 7, 56, 1, -27, -15, -102, -89, 68};
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
    msg.setTimeStamp(0.770042820888);
    msg.setSource(51185U);
    msg.setSourceEntity(228U);
    msg.setDestination(62245U);
    msg.setDestinationEntity(85U);
    msg.content_type.assign("IUZOCSSNPHPIZYHOQDELSAHKWO");
    const char tmp_msg_0[] = {120, 122, -97, 54, -59, 126, -109, -111, 124, -39, 79, -36, -40, -4, 88, 58, -38, 24, -1, -9, 42, -52, 21, -117, -28, 119, -66, 60, 33, 122, 58, 63, 65, -92, -49, -82, 58, 124, -6, 23, 78, 118, -97, -115, -41, -102, -73, 19, -26, -23, -94, -67, 120, 81, 41, 42};
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
    msg.setTimeStamp(0.579501884162);
    msg.setSource(38669U);
    msg.setSourceEntity(214U);
    msg.setDestination(38113U);
    msg.setDestinationEntity(60U);
    msg.content_type.assign("XFDYFNMJNUESQOXRSAAGSISZMOBIIISUOWZPMNIFTMY");
    const char tmp_msg_0[] = {-104, 59, -49, 41, 47, -12, 108, -111, -80, 46, 30, -64, -54, -8, 104, 6, 72, -47, 83, -24, 17, 56, -63, -63, -86, 118, -64, -75, 113, -27, -51, 124, -128, -30, 16, 124, -74, 13, -38, -107, -120, 30, 76, 74, -38, -33, -80, 106, 80, -73, 40, -56, 46, -19, 24, 124, -14, 18, -125, 14, 22, 61, -86, -71, 119, -75, 3, 85, 113, 83, 47, 88, -112, -64, 22, -120, 51, -80, -31, 70, 89, -50, -34, -42, 16, -15, -45, -42, 107, -44, -60, -87, 122, -27, 78, -66, 103, 63, 31, 52, -54, 19, -67, -99, -65, -46, 44, -86, -89, -71, 92, -36, 11, -117, -88, -103, 118, 116, 11, 94, -95, -36, 107, -50, -69, 56, 93, -7, 23, 102, -39, 55, -17, 9, 122, 1, -42, -107, 116, -63, 22, 40, -33, -118, -17, -17, 69, 84, -119, -21, 11, -105, -42, 70, -67, 59, 43, 121, -92, -48, -127, -21, 86, -86, -99, -127, -72, -60, 79, -39, -39, -46, 98, -1, 117, 57, 74, -20, 24, 85, -46, 93, 32, -13, 45, -107, 53, -56, 6, -56, 15, -128, 56, 66, -31, 30};
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
    msg.setTimeStamp(0.394526531253);
    msg.setSource(64982U);
    msg.setSourceEntity(177U);
    msg.setDestination(35535U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.35421981488);
    msg.setSource(19708U);
    msg.setSourceEntity(193U);
    msg.setDestination(24199U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.594192269616);
    msg.setSource(17467U);
    msg.setSourceEntity(222U);
    msg.setDestination(60624U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.410040481113);
    msg.setSource(39881U);
    msg.setSourceEntity(170U);
    msg.setDestination(7124U);
    msg.setDestinationEntity(49U);
    msg.target = 16998U;
    msg.bearing = 0.430217799578;
    msg.elevation = 0.492502489398;

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
    msg.setTimeStamp(0.225603192622);
    msg.setSource(63909U);
    msg.setSourceEntity(53U);
    msg.setDestination(27140U);
    msg.setDestinationEntity(10U);
    msg.target = 21033U;
    msg.bearing = 0.854825038211;
    msg.elevation = 0.0470993077964;

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
    msg.setTimeStamp(0.624960340278);
    msg.setSource(18391U);
    msg.setSourceEntity(78U);
    msg.setDestination(21114U);
    msg.setDestinationEntity(11U);
    msg.target = 36700U;
    msg.bearing = 0.432137669122;
    msg.elevation = 0.0170665257134;

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
    msg.setTimeStamp(0.459023514158);
    msg.setSource(1837U);
    msg.setSourceEntity(199U);
    msg.setDestination(109U);
    msg.setDestinationEntity(82U);
    msg.target = 48782U;
    msg.x = 0.094346201697;
    msg.y = 0.260641800415;
    msg.z = 0.16012052103;

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
    msg.setTimeStamp(0.610663099774);
    msg.setSource(22126U);
    msg.setSourceEntity(19U);
    msg.setDestination(19976U);
    msg.setDestinationEntity(241U);
    msg.target = 63699U;
    msg.x = 0.86645891817;
    msg.y = 0.539620413265;
    msg.z = 0.611580024684;

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
    msg.setTimeStamp(0.33456942209);
    msg.setSource(36792U);
    msg.setSourceEntity(156U);
    msg.setDestination(27642U);
    msg.setDestinationEntity(93U);
    msg.target = 65494U;
    msg.x = 0.649166004794;
    msg.y = 0.34911831737;
    msg.z = 0.100456856089;

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
    msg.setTimeStamp(0.719747505928);
    msg.setSource(64979U);
    msg.setSourceEntity(14U);
    msg.setDestination(55586U);
    msg.setDestinationEntity(241U);
    msg.target = 18599U;
    msg.lat = 0.979153041956;
    msg.lon = 0.925266563178;
    msg.z_units = 62U;
    msg.z = 0.106704477716;

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
    msg.setTimeStamp(0.469327893874);
    msg.setSource(62005U);
    msg.setSourceEntity(23U);
    msg.setDestination(63213U);
    msg.setDestinationEntity(240U);
    msg.target = 764U;
    msg.lat = 0.526151756566;
    msg.lon = 0.137959738252;
    msg.z_units = 194U;
    msg.z = 0.868409186764;

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
    msg.setTimeStamp(0.755432302315);
    msg.setSource(15922U);
    msg.setSourceEntity(170U);
    msg.setDestination(40296U);
    msg.setDestinationEntity(5U);
    msg.target = 60835U;
    msg.lat = 0.653723923534;
    msg.lon = 0.368693464134;
    msg.z_units = 216U;
    msg.z = 0.982316272649;

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

  return test.getReturnValue();
}
