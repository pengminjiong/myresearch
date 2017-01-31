
// this file generates the simulation topology


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
  nodes.Create (8);
  PointToPointHelper p2p,p2p1,p3p;
  p3p.SetChannelAttribute ("Delay", StringValue ("0.0ms")); 
  // the delay  between  aggregation timer and publisher  is 0ms 
  p2p1.SetChannelAttribute ("Delay", StringValue ("10.0ms"));

  p3p.Install (nodes.Get (0), nodes.Get (1));

  p2p.Install (nodes.Get (0), nodes.Get (2));
  p2p.Install (nodes.Get (0), nodes.Get (3));
  p2p1.Install (nodes.Get (2), nodes.Get (4));
  p2p1.Install (nodes.Get (2), nodes.Get (5));
  p2p1.Install (nodes.Get (3), nodes.Get (6));
  p2p1.Install (nodes.Get (3), nodes.Get (7));
  ndn::StackHelper ndnHelper;
  ndnHelper.SetDefaultRoutes (true);
  ndnHelper.SetContentStore ("ns3::ndn::cs::Nocache");
  // no in-network cache in our simualtion  
  ndnHelper.InstallAll ();

  // Installing applications

  ndn::AppHelper consumerHelper ("CarServerApp1");
 // ndn::AppHelper consumerHelper1 ("DumbRequester");
  ndn::AppHelper consumerHelper3 ("DumbRequester1");
  ndn::AppHelper consumerHelper2 ("Controller");
  ApplicationContainer server = consumerHelper.Install (nodes.Get (0));
  ApplicationContainer controller = consumerHelper2.Install (nodes.Get (1));
  ApplicationContainer app1 = consumerHelper3.Install (nodes.Get (4));
  ApplicationContainer app2 = consumerHelper3.Install (nodes.Get (5));
  ApplicationContainer app3 = consumerHelper3.Install (nodes.Get (6));
  ApplicationContainer app4 = consumerHelper3.Install (nodes.Get (7));
  server.Start (Seconds (0.0));
  controller.Start (Seconds (0.0));


  app1.Start (Seconds (0.0));
  app2.Start (Seconds (0.5));
  app3.Start (Seconds (1.5));
  app4.Start (Seconds (2));

  Simulator::Stop (Seconds (70.0));
  // beginners must be carefull, the simulation  time  has many other policies work together.
  Simulator::Run ();
  Simulator::Destroy ();

  return 0;
}
