
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

  // Creating nodes
  Ptr<Node> node = CreateObject<Node> ();
NodeContainer nodes;
  nodes.Create (53);
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
  ndn::StackHelper ndnHelper;
  ndnHelper.SetDefaultRoutes (true);
  ndnHelper.SetContentStore ("ns3::ndn::cs::Nocache");
  
ndnHelper.InstallAll ();

  
ndn::AppHelper consumerHelper ("CarServerApp1");
ndn::AppHelper consumerHelper1 ("DumbRequester");
ndn::AppHelper consumerHelper3 ("DumbRequester1");
ndn::AppHelper consumerHelper2 ("Controller");
ApplicationContainer server = consumerHelper.Install (nodes.Get (0));
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

server.Start (Seconds (0.0));

app1.Start (Seconds (0.5874));
app2.Start (Seconds (5.2031));
app3.Start (Seconds (6.3287));
app4.Start (Seconds (8.4826));
app5.Start (Seconds (9.4524));
app6.Start (Seconds (11.0506));
app7.Start (Seconds (11.5598));
app8.Start (Seconds (15.5483));
app9.Start (Seconds (15.8673));
app10.Start (Seconds (15.9576));
app11.Start (Seconds (17.6902));
app12.Start (Seconds (18.5402));
app13.Start (Seconds (19.4387));
app14.Start (Seconds (19.5504));
app15.Start (Seconds (20.3829));
app16.Start (Seconds (20.9066));
app17.Start (Seconds (22.7188));
app18.Start (Seconds (23.6289));
app19.Start (Seconds (24.3076));
app20.Start (Seconds (25.0951));
app21.Start (Seconds (26.6834));
app22.Start (Seconds (28.2430));
app23.Start (Seconds (30.1789));
app24.Start (Seconds (30.5342));
app25.Start (Seconds (33.0699));
app26.Start (Seconds (44.8316));
app27.Start (Seconds (46.0614));
app28.Start (Seconds (46.2804));
app29.Start (Seconds (49.1684));
app30.Start (Seconds (51.5984));
app31.Start (Seconds (52.6605));
app32.Start (Seconds (58.1314));
app33.Start (Seconds (58.3127));

  Simulator::Stop (Seconds (60.0));

  Simulator::Run ();
  Simulator::Destroy ();

  return 0;
}
