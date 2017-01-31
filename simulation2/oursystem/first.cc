
#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/ndnSIM-module.h"

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/ndnSIM-module.h"
#include "ns3/random-variable-stream.h"
#include "ns3/double.h"

using namespace ns3;


int 
main (int argc, char *argv[])
{

Config::SetDefault ("ns3::PointToPointNetDevice::DataRate", StringValue ("10Mbps"));
  Config::SetDefault ("ns3::PointToPointChannel::Delay", StringValue ("50ms"));
  Config::SetDefault ("ns3::DropTailQueue::MaxPackets", StringValue ("2000"));
  CommandLine cmd;
  cmd.Parse (argc, argv);

  Ptr<Node> node = CreateObject<Node> ();
NodeContainer nodes;
  nodes.Create (100);
  PointToPointHelper p2p,p2p1,p3p;
p3p.SetChannelAttribute ("Delay", StringValue ("0.0ms")); 


p3p.Install (nodes.Get (0), nodes.Get (1));

p2p.Install (nodes.Get (0), nodes.Get (2));
p2p.Install (nodes.Get (0), nodes.Get (3));
p2p.Install (nodes.Get (0), nodes.Get (4));
p2p.Install (nodes.Get (0), nodes.Get (5));
p2p.Install (nodes.Get (0), nodes.Get (6));
p2p.Install (nodes.Get (0), nodes.Get (7));
p2p.Install (nodes.Get (0), nodes.Get (8));
p2p.Install (nodes.Get (0), nodes.Get (9));
p2p.Install (nodes.Get (0), nodes.Get (10));
p2p.Install (nodes.Get (0), nodes.Get (11));
p2p.Install (nodes.Get (0), nodes.Get (12));
p2p.Install (nodes.Get (0), nodes.Get (13));
p2p.Install (nodes.Get (0), nodes.Get (14));
p2p.Install (nodes.Get (0), nodes.Get (15));
p2p.Install (nodes.Get (0), nodes.Get (16));
p2p.Install (nodes.Get (0), nodes.Get (17));
p2p.Install (nodes.Get (0), nodes.Get (18));
p2p.Install (nodes.Get (0), nodes.Get (19));
p2p.Install (nodes.Get (0), nodes.Get (20));
p2p.Install (nodes.Get (0), nodes.Get (21));
p2p.Install (nodes.Get (0), nodes.Get (22));
p2p.Install (nodes.Get (0), nodes.Get (23));
p2p.Install (nodes.Get (0), nodes.Get (24));
p2p.Install (nodes.Get (0), nodes.Get (25));
p2p.Install (nodes.Get (0), nodes.Get (26));
p2p.Install (nodes.Get (0), nodes.Get (27));
p2p.Install (nodes.Get (0), nodes.Get (28));
p2p.Install (nodes.Get (0), nodes.Get (29));
p2p.Install (nodes.Get (0), nodes.Get (30));
p2p.Install (nodes.Get (0), nodes.Get (31));
p2p.Install (nodes.Get (0), nodes.Get (32));
p2p.Install (nodes.Get (0), nodes.Get (33));
p2p.Install (nodes.Get (0), nodes.Get (34));
p2p.Install (nodes.Get (0), nodes.Get (35));
p2p.Install (nodes.Get (0), nodes.Get (36));
p2p.Install (nodes.Get (0), nodes.Get (37));
p2p.Install (nodes.Get (0), nodes.Get (38));
p2p.Install (nodes.Get (0), nodes.Get (39));
p2p.Install (nodes.Get (0), nodes.Get (40));
p2p.Install (nodes.Get (0), nodes.Get (41));
p2p.Install (nodes.Get (0), nodes.Get (42));
p2p.Install (nodes.Get (0), nodes.Get (43));
p2p.Install (nodes.Get (0), nodes.Get (44));
p2p.Install (nodes.Get (0), nodes.Get (45));
p2p.Install (nodes.Get (0), nodes.Get (46));
p2p.Install (nodes.Get (0), nodes.Get (47));
p2p.Install (nodes.Get (0), nodes.Get (48));
p2p.Install (nodes.Get (0), nodes.Get (49));
p2p.Install (nodes.Get (0), nodes.Get (50));
p2p.Install (nodes.Get (0), nodes.Get (51));
p2p.Install (nodes.Get (0), nodes.Get (52));
p2p.Install (nodes.Get (0), nodes.Get (53));
p2p.Install (nodes.Get (0), nodes.Get (54));
p2p.Install (nodes.Get (0), nodes.Get (55));
p2p.Install (nodes.Get (0), nodes.Get (56));
p2p.Install (nodes.Get (0), nodes.Get (57));
p2p.Install (nodes.Get (0), nodes.Get (58));
p2p.Install (nodes.Get (0), nodes.Get (59));
p2p.Install (nodes.Get (0), nodes.Get (60));
p2p.Install (nodes.Get (0), nodes.Get (61));
p2p.Install (nodes.Get (0), nodes.Get (62));
p2p.Install (nodes.Get (0), nodes.Get (63));
p2p.Install (nodes.Get (0), nodes.Get (64));
p2p.Install (nodes.Get (0), nodes.Get (65));
p2p.Install (nodes.Get (0), nodes.Get (66));
p2p.Install (nodes.Get (0), nodes.Get (67));
p2p.Install (nodes.Get (0), nodes.Get (68));
p2p.Install (nodes.Get (0), nodes.Get (69));
p2p.Install (nodes.Get (0), nodes.Get (70));
p2p.Install (nodes.Get (0), nodes.Get (71));
p2p.Install (nodes.Get (0), nodes.Get (72));
p2p.Install (nodes.Get (0), nodes.Get (73));
p2p.Install (nodes.Get (0), nodes.Get (74));
p2p.Install (nodes.Get (0), nodes.Get (75));
p2p.Install (nodes.Get (0), nodes.Get (76));
p2p.Install (nodes.Get (0), nodes.Get (77));
p2p.Install (nodes.Get (0), nodes.Get (78));
p2p.Install (nodes.Get (0), nodes.Get (79));
p2p.Install (nodes.Get (0), nodes.Get (80));
p2p.Install (nodes.Get (0), nodes.Get (81));
p2p.Install (nodes.Get (0), nodes.Get (82));
p2p.Install (nodes.Get (0), nodes.Get (83));
p2p.Install (nodes.Get (0), nodes.Get (84));
p2p.Install (nodes.Get (0), nodes.Get (85));
p2p.Install (nodes.Get (0), nodes.Get (86));
p2p.Install (nodes.Get (0), nodes.Get (87));
p2p.Install (nodes.Get (0), nodes.Get (88));
p2p.Install (nodes.Get (0), nodes.Get (89));
p2p.Install (nodes.Get (0), nodes.Get (90));
p2p.Install (nodes.Get (0), nodes.Get (91));
  ndn::StackHelper ndnHelper;
  ndnHelper.SetDefaultRoutes (true);
  ndnHelper.SetContentStore ("ns3::ndn::cs::Nocache");
  
ndnHelper.InstallAll ();

  
ndn::AppHelper consumerHelper ("CarServerApp1");
ndn::AppHelper consumerHelper1 ("DumbRequester");
ndn::AppHelper consumerHelper3 ("DumbRequester1");
ndn::AppHelper consumerHelper2 ("Controller");
ApplicationContainer server = consumerHelper.Install (nodes.Get (0));
ApplicationContainer controller = consumerHelper2.Install (nodes.Get (1));

ApplicationContainer app1 = consumerHelper3.Install (nodes.Get (2));
ApplicationContainer app2 = consumerHelper3.Install (nodes.Get (3));
ApplicationContainer app3 = consumerHelper3.Install (nodes.Get (4));
ApplicationContainer app4 = consumerHelper3.Install (nodes.Get (5));
ApplicationContainer app5 = consumerHelper3.Install (nodes.Get (6));
ApplicationContainer app6 = consumerHelper3.Install (nodes.Get (7));
ApplicationContainer app7 = consumerHelper3.Install (nodes.Get (8));
ApplicationContainer app8 = consumerHelper3.Install (nodes.Get (9));
ApplicationContainer app9 = consumerHelper3.Install (nodes.Get (10));
ApplicationContainer app10 = consumerHelper3.Install (nodes.Get (11));
ApplicationContainer app11 = consumerHelper3.Install (nodes.Get (12));
ApplicationContainer app12 = consumerHelper3.Install (nodes.Get (13));
ApplicationContainer app13 = consumerHelper3.Install (nodes.Get (14));
ApplicationContainer app14 = consumerHelper3.Install (nodes.Get (15));
ApplicationContainer app15 = consumerHelper3.Install (nodes.Get (16));
ApplicationContainer app16 = consumerHelper3.Install (nodes.Get (17));
ApplicationContainer app17 = consumerHelper3.Install (nodes.Get (18));
ApplicationContainer app18 = consumerHelper3.Install (nodes.Get (19));
ApplicationContainer app19 = consumerHelper3.Install (nodes.Get (20));
ApplicationContainer app20 = consumerHelper3.Install (nodes.Get (21));
ApplicationContainer app21 = consumerHelper3.Install (nodes.Get (22));
ApplicationContainer app22 = consumerHelper3.Install (nodes.Get (23));
ApplicationContainer app23 = consumerHelper3.Install (nodes.Get (24));
ApplicationContainer app24 = consumerHelper3.Install (nodes.Get (25));
ApplicationContainer app25 = consumerHelper3.Install (nodes.Get (26));
ApplicationContainer app26 = consumerHelper3.Install (nodes.Get (27));
ApplicationContainer app27 = consumerHelper3.Install (nodes.Get (28));
ApplicationContainer app28 = consumerHelper3.Install (nodes.Get (29));
ApplicationContainer app29 = consumerHelper3.Install (nodes.Get (30));
ApplicationContainer app30 = consumerHelper3.Install (nodes.Get (31));
ApplicationContainer app31 = consumerHelper3.Install (nodes.Get (32));
ApplicationContainer app32 = consumerHelper3.Install (nodes.Get (33));
ApplicationContainer app33 = consumerHelper3.Install (nodes.Get (34));
ApplicationContainer app34 = consumerHelper3.Install (nodes.Get (35));
ApplicationContainer app35 = consumerHelper3.Install (nodes.Get (36));
ApplicationContainer app36 = consumerHelper3.Install (nodes.Get (37));
ApplicationContainer app37 = consumerHelper3.Install (nodes.Get (38));
ApplicationContainer app38 = consumerHelper3.Install (nodes.Get (39));
ApplicationContainer app39 = consumerHelper3.Install (nodes.Get (40));
ApplicationContainer app40 = consumerHelper3.Install (nodes.Get (41));
ApplicationContainer app41 = consumerHelper3.Install (nodes.Get (42));
ApplicationContainer app42 = consumerHelper3.Install (nodes.Get (43));
ApplicationContainer app43 = consumerHelper3.Install (nodes.Get (44));
ApplicationContainer app44 = consumerHelper3.Install (nodes.Get (45));
ApplicationContainer app45 = consumerHelper3.Install (nodes.Get (46));
ApplicationContainer app46 = consumerHelper3.Install (nodes.Get (47));
ApplicationContainer app47 = consumerHelper3.Install (nodes.Get (48));
ApplicationContainer app48 = consumerHelper3.Install (nodes.Get (49));
ApplicationContainer app49 = consumerHelper3.Install (nodes.Get (50));
ApplicationContainer app50 = consumerHelper3.Install (nodes.Get (51));
ApplicationContainer app51 = consumerHelper3.Install (nodes.Get (52));
ApplicationContainer app52 = consumerHelper3.Install (nodes.Get (53));
ApplicationContainer app53 = consumerHelper3.Install (nodes.Get (54));
ApplicationContainer app54 = consumerHelper3.Install (nodes.Get (55));
ApplicationContainer app55 = consumerHelper3.Install (nodes.Get (56));
ApplicationContainer app56 = consumerHelper3.Install (nodes.Get (57));
ApplicationContainer app57 = consumerHelper3.Install (nodes.Get (58));
ApplicationContainer app58 = consumerHelper3.Install (nodes.Get (59));
ApplicationContainer app59 = consumerHelper3.Install (nodes.Get (60));
ApplicationContainer app60 = consumerHelper3.Install (nodes.Get (61));
ApplicationContainer app61 = consumerHelper3.Install (nodes.Get (62));
ApplicationContainer app62 = consumerHelper3.Install (nodes.Get (63));
ApplicationContainer app63 = consumerHelper3.Install (nodes.Get (64));
ApplicationContainer app64 = consumerHelper3.Install (nodes.Get (65));
ApplicationContainer app65 = consumerHelper3.Install (nodes.Get (66));
ApplicationContainer app66 = consumerHelper3.Install (nodes.Get (67));
ApplicationContainer app67 = consumerHelper3.Install (nodes.Get (68));
ApplicationContainer app68 = consumerHelper3.Install (nodes.Get (69));
ApplicationContainer app69 = consumerHelper3.Install (nodes.Get (70));
ApplicationContainer app70 = consumerHelper3.Install (nodes.Get (71));
ApplicationContainer app71 = consumerHelper3.Install (nodes.Get (72));
ApplicationContainer app72 = consumerHelper3.Install (nodes.Get (73));
ApplicationContainer app73 = consumerHelper3.Install (nodes.Get (74));
server.Start (Seconds (0.0));
controller.Start (Seconds (0.0));


app1.Start (Seconds (2.790465));
app2.Start (Seconds (3.287740));
app3.Start (Seconds (4.991719));
app4.Start (Seconds (5.128499));
app5.Start (Seconds (5.756426));
app6.Start (Seconds (8.425822));
app7.Start (Seconds (9.055645));
app8.Start (Seconds (10.248969));
app9.Start (Seconds (10.950587));
app10.Start (Seconds (11.216155));
app11.Start (Seconds (11.970511));
app12.Start (Seconds (12.116803));
app13.Start (Seconds (12.575346));
app14.Start (Seconds (12.864768));
app15.Start (Seconds (12.880973));
app16.Start (Seconds (14.579503));
app17.Start (Seconds (15.666599));
app18.Start (Seconds (17.672833));
app19.Start (Seconds (17.890854));
app20.Start (Seconds (18.728469));
app21.Start (Seconds (18.821274));
app22.Start (Seconds (18.838576));
app23.Start (Seconds (19.931109));
app24.Start (Seconds (22.334799));
app25.Start (Seconds (24.701867));
app26.Start (Seconds (25.348874));
app27.Start (Seconds (25.543259));
app28.Start (Seconds (26.546841));
app29.Start (Seconds (28.654276));
app30.Start (Seconds (28.819303));
app31.Start (Seconds (29.155084));
app32.Start (Seconds (29.978722));
app33.Start (Seconds (30.268337));
app34.Start (Seconds (30.704542));
app35.Start (Seconds (30.777520));
app36.Start (Seconds (32.688099));
app37.Start (Seconds (33.465908));
app38.Start (Seconds (33.487437));
app39.Start (Seconds (34.112642));
app40.Start (Seconds (34.507716));
app41.Start (Seconds (35.622300));
app42.Start (Seconds (35.953321));
app43.Start (Seconds (36.801367));
app44.Start (Seconds (37.507256));
app45.Start (Seconds (39.911093));
app46.Start (Seconds (40.737737));
app47.Start (Seconds (41.248761));
app48.Start (Seconds (41.662637));
app49.Start (Seconds (41.794519));
app50.Start (Seconds (42.963018));
app51.Start (Seconds (43.506649));
app52.Start (Seconds (44.773610));
app53.Start (Seconds (46.646108));
app54.Start (Seconds (47.399616));
app55.Start (Seconds (47.687290));
app56.Start (Seconds (47.759338));
app57.Start (Seconds (48.133052));
app58.Start (Seconds (48.650860));
app59.Start (Seconds (49.001141));
app60.Start (Seconds (49.603619));
app61.Start (Seconds (49.663001));
app62.Start (Seconds (51.767477));
app63.Start (Seconds (51.833148));
app64.Start (Seconds (54.341720));
app65.Start (Seconds (54.753930));
app66.Start (Seconds (54.796737));
app67.Start (Seconds (55.954641));
app68.Start (Seconds (56.147074));
app69.Start (Seconds (56.305034));
app70.Start (Seconds (56.568927));
app71.Start (Seconds (57.055517));
app72.Start (Seconds (58.122739));
app73.Start (Seconds (59.990359));












 

Simulator::Stop (Seconds (60.0));

  Simulator::Run ();
  Simulator::Destroy ();

Simulator::Destroy ();
  return 0;
}
