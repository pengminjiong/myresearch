
#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/ndnSIM-module.h"

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/ndnSIM-module.h"

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
  nodes.Create (250);
 PointToPointHelper p2p,p2p1,p3p;
p3p.SetChannelAttribute ("Delay", StringValue ("0.0ms"));
p3p.Install (nodes.Get (0), nodes.Get (1));
p3p.Install (nodes.Get (3), nodes.Get (4));
p3p.Install (nodes.Get (5), nodes.Get (6));
p3p.Install (nodes.Get (7), nodes.Get (8));
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

p2p.Install (nodes.Get (0), nodes.Get (220));
p2p.Install (nodes.Get (0), nodes.Get (221));
p2p.Install (nodes.Get (0), nodes.Get (222));
p2p.Install (nodes.Get (0), nodes.Get (223));
p2p.Install (nodes.Get (0), nodes.Get (224));
p2p.Install (nodes.Get (0), nodes.Get (225));
p2p.Install (nodes.Get (0), nodes.Get (226));

//intersection B
p2p.Install (nodes.Get (3), nodes.Get (31));
p2p.Install (nodes.Get (3), nodes.Get (32));
p2p.Install (nodes.Get (3), nodes.Get (33));
p2p.Install (nodes.Get (3), nodes.Get (34));
p2p.Install (nodes.Get (3), nodes.Get (35));
p2p.Install (nodes.Get (3), nodes.Get (36));
p2p.Install (nodes.Get (3), nodes.Get (37));

p2p.Install (nodes.Get (3), nodes.Get (38));
p2p.Install (nodes.Get (3), nodes.Get (39));
p2p.Install (nodes.Get (3), nodes.Get (40));
p2p.Install (nodes.Get (3), nodes.Get (41));
p2p.Install (nodes.Get (3), nodes.Get (42));
p2p.Install (nodes.Get (3), nodes.Get (43));
p2p.Install (nodes.Get (3), nodes.Get (44));
p2p.Install (nodes.Get (3), nodes.Get (45));
p2p.Install (nodes.Get (3), nodes.Get (46));
p2p.Install (nodes.Get (3), nodes.Get (47));

p2p.Install (nodes.Get (3), nodes.Get (48));
p2p.Install (nodes.Get (3), nodes.Get (49));

p2p.Install (nodes.Get (3), nodes.Get (50));
p2p.Install (nodes.Get (3), nodes.Get (51));
p2p.Install (nodes.Get (3), nodes.Get (52));
p2p.Install (nodes.Get (3), nodes.Get (53));
p2p.Install (nodes.Get (3), nodes.Get (54));
p2p.Install (nodes.Get (3), nodes.Get (55));
p2p.Install (nodes.Get (3), nodes.Get (56));
p2p.Install (nodes.Get (3), nodes.Get (57));
p2p.Install (nodes.Get (3), nodes.Get (58));
p2p.Install (nodes.Get (3), nodes.Get (59));
p2p.Install (nodes.Get (3), nodes.Get (60));
p2p.Install (nodes.Get (3), nodes.Get (61));
p2p.Install (nodes.Get (3), nodes.Get (62));
p2p.Install (nodes.Get (3), nodes.Get (63));
p2p.Install (nodes.Get (3), nodes.Get (64));
p2p.Install (nodes.Get (3), nodes.Get (65));
p2p.Install (nodes.Get (3), nodes.Get (66));
p2p.Install (nodes.Get (3), nodes.Get (67));

p2p.Install (nodes.Get (3), nodes.Get (200));
p2p.Install (nodes.Get (3), nodes.Get (201));
p2p.Install (nodes.Get (3), nodes.Get (202));
//intersection C


p2p.Install (nodes.Get (5), nodes.Get (68));
p2p.Install (nodes.Get (5), nodes.Get (69));
p2p.Install (nodes.Get (5), nodes.Get (70));
p2p.Install (nodes.Get (5), nodes.Get (71));
p2p.Install (nodes.Get (5), nodes.Get (72));
p2p.Install (nodes.Get (5), nodes.Get (73));
p2p.Install (nodes.Get (5), nodes.Get (74));

p2p.Install (nodes.Get (5), nodes.Get (75));
p2p.Install (nodes.Get (5), nodes.Get (76));
p2p.Install (nodes.Get (5), nodes.Get (77));
p2p.Install (nodes.Get (5), nodes.Get (78));
p2p.Install (nodes.Get (5), nodes.Get (79));
p2p.Install (nodes.Get (5), nodes.Get (80));


p2p.Install (nodes.Get (5), nodes.Get (111));
p2p.Install (nodes.Get (5), nodes.Get (112));
p2p.Install (nodes.Get (5), nodes.Get (113));
p2p.Install (nodes.Get (5), nodes.Get (114));
p2p.Install (nodes.Get (5), nodes.Get (115));
p2p.Install (nodes.Get (5), nodes.Get (116));
p2p.Install (nodes.Get (5), nodes.Get (117));
p2p.Install (nodes.Get (5), nodes.Get (118));
p2p.Install (nodes.Get (5), nodes.Get (119));
p2p.Install (nodes.Get (5), nodes.Get (120));

//intersection D
p2p.Install (nodes.Get (7), nodes.Get (81));
p2p.Install (nodes.Get (7), nodes.Get (82));
p2p.Install (nodes.Get (7), nodes.Get (83));
p2p.Install (nodes.Get (7), nodes.Get (84));
p2p.Install (nodes.Get (7), nodes.Get (85));
p2p.Install (nodes.Get (7), nodes.Get (86));
p2p.Install (nodes.Get (7), nodes.Get (87));
p2p.Install (nodes.Get (7), nodes.Get (88));
p2p.Install (nodes.Get (7), nodes.Get (89));
p2p.Install (nodes.Get (7), nodes.Get (90));
p2p.Install (nodes.Get (7), nodes.Get (91));
p2p.Install (nodes.Get (7), nodes.Get (92));
p2p.Install (nodes.Get (7), nodes.Get (93));
p2p.Install (nodes.Get (7), nodes.Get (94));
p2p.Install (nodes.Get (7), nodes.Get (95));
p2p.Install (nodes.Get (7), nodes.Get (96));
p2p.Install (nodes.Get (7), nodes.Get (97));
p2p.Install (nodes.Get (7), nodes.Get (98));
p2p.Install (nodes.Get (7), nodes.Get (99));
p2p.Install (nodes.Get (7), nodes.Get (100));
p2p.Install (nodes.Get (7), nodes.Get (101));
p2p.Install (nodes.Get (7), nodes.Get (102));
p2p.Install (nodes.Get (7), nodes.Get (103));
p2p.Install (nodes.Get (7), nodes.Get (104));
p2p.Install (nodes.Get (7), nodes.Get (105));
p2p.Install (nodes.Get (7), nodes.Get (106));
p2p.Install (nodes.Get (7), nodes.Get (107));
p2p.Install (nodes.Get (7), nodes.Get (108));
p2p.Install (nodes.Get (7), nodes.Get (109));
p2p.Install (nodes.Get (7), nodes.Get (110));  

p2p.Install (nodes.Get (7), nodes.Get (210));
  ndn::StackHelper ndnHelper;
  ndnHelper.SetDefaultRoutes (true);
  ndnHelper.SetContentStore ("ns3::ndn::cs::Nocache");
  
ndnHelper.InstallAll ();

  
ndn::AppHelper consumerHelper1 ("CarServerApp1");
ndn::AppHelper consumerHelper2 ("CarServerApp2");
ndn::AppHelper consumerHelper8 ("CarServerApp3");
ndn::AppHelper consumerHelper9 ("CarServerApp4");

ndn::AppHelper consumerHelper3 ("TimerController");

ndn::AppHelper consumerHelper4 ("DumbRequester");
ndn::AppHelper consumerHelper11 ("DumbRequester1");
ndn::AppHelper consumerHelper12 ("DumbRequester2");
ndn::AppHelper consumerHelper13 ("DumbRequester3");

ndn::AppHelper consumerHelper5 ("Controller");

ndn::AppHelper consumerHelper6 ("Controller1");
ndn::AppHelper consumerHelper7 ("Controller2");
ndn::AppHelper consumerHelper10 ("Controller3");

ApplicationContainer Acar1= consumerHelper4.Install (nodes.Get (10));
ApplicationContainer Acar2= consumerHelper4.Install (nodes.Get (11));
ApplicationContainer Acar3= consumerHelper4.Install (nodes.Get (12));
ApplicationContainer Acar4= consumerHelper4.Install (nodes.Get (13));
ApplicationContainer Acar5= consumerHelper4.Install (nodes.Get (14));
ApplicationContainer Acar6= consumerHelper4.Install (nodes.Get (15));
ApplicationContainer Acar7= consumerHelper4.Install (nodes.Get (16));
ApplicationContainer Acar8= consumerHelper4.Install (nodes.Get (17));
ApplicationContainer Acar9= consumerHelper4.Install (nodes.Get (18));
ApplicationContainer Acar10= consumerHelper4.Install (nodes.Get (19));
ApplicationContainer Acar11= consumerHelper4.Install (nodes.Get (20));
ApplicationContainer Acar12= consumerHelper4.Install (nodes.Get (21));
ApplicationContainer Acar13= consumerHelper4.Install (nodes.Get (22));
ApplicationContainer Acar14= consumerHelper4.Install (nodes.Get (23));
ApplicationContainer Acar15= consumerHelper4.Install (nodes.Get (24));
ApplicationContainer Acar16= consumerHelper4.Install (nodes.Get (25));
ApplicationContainer Acar17= consumerHelper4.Install (nodes.Get (26));
ApplicationContainer Acar18= consumerHelper4.Install (nodes.Get (27));
ApplicationContainer Acar19= consumerHelper4.Install (nodes.Get (28));
ApplicationContainer Acar20= consumerHelper4.Install (nodes.Get (29));
ApplicationContainer Acar21= consumerHelper4.Install (nodes.Get (30));
ApplicationContainer Acar22= consumerHelper4.Install (nodes.Get (220));
ApplicationContainer Acar23= consumerHelper4.Install (nodes.Get (221));
ApplicationContainer Acar24= consumerHelper4.Install (nodes.Get (222));
ApplicationContainer Acar25= consumerHelper4.Install (nodes.Get (223));
ApplicationContainer Acar26= consumerHelper4.Install (nodes.Get (224));
ApplicationContainer Acar27= consumerHelper4.Install (nodes.Get (225));
ApplicationContainer Acar28= consumerHelper4.Install (nodes.Get (226));


ApplicationContainer Bcar1= consumerHelper11.Install (nodes.Get (31));
ApplicationContainer Bcar2= consumerHelper11.Install (nodes.Get (32));
ApplicationContainer Bcar3= consumerHelper11.Install (nodes.Get (33));
ApplicationContainer Bcar4= consumerHelper11.Install (nodes.Get (34));
ApplicationContainer Bcar5= consumerHelper11.Install (nodes.Get (35));
ApplicationContainer Bcar6= consumerHelper11.Install (nodes.Get (36));
ApplicationContainer Bcar7= consumerHelper11.Install (nodes.Get (37));
ApplicationContainer Bcar8= consumerHelper11.Install (nodes.Get (38));
ApplicationContainer Bcar9= consumerHelper11.Install (nodes.Get (39));
ApplicationContainer Bcar10= consumerHelper11.Install (nodes.Get (40));
ApplicationContainer Bcar11= consumerHelper11.Install (nodes.Get (41));
ApplicationContainer Bcar12= consumerHelper11.Install (nodes.Get (42));
ApplicationContainer Bcar13= consumerHelper11.Install (nodes.Get (43));
ApplicationContainer Bcar14= consumerHelper11.Install (nodes.Get (44));
ApplicationContainer Bcar15= consumerHelper11.Install (nodes.Get (45));
ApplicationContainer Bcar16= consumerHelper11.Install (nodes.Get (46));
ApplicationContainer Bcar17= consumerHelper11.Install (nodes.Get (47));
ApplicationContainer Bcar18= consumerHelper11.Install (nodes.Get (48));
ApplicationContainer Bcar19= consumerHelper11.Install (nodes.Get (49));
ApplicationContainer Bcar20= consumerHelper11.Install (nodes.Get (50));
ApplicationContainer Bcar21= consumerHelper11.Install (nodes.Get (51));
ApplicationContainer Bcar22= consumerHelper11.Install (nodes.Get (52));
ApplicationContainer Bcar23= consumerHelper11.Install (nodes.Get (53));
ApplicationContainer Bcar24= consumerHelper11.Install (nodes.Get (54));
ApplicationContainer Bcar25= consumerHelper11.Install (nodes.Get (55));
ApplicationContainer Bcar26= consumerHelper11.Install (nodes.Get (56));
ApplicationContainer Bcar27= consumerHelper11.Install (nodes.Get (57));
ApplicationContainer Bcar28= consumerHelper11.Install (nodes.Get (58));
ApplicationContainer Bcar29= consumerHelper11.Install (nodes.Get (59));
ApplicationContainer Bcar30= consumerHelper11.Install (nodes.Get (60));
ApplicationContainer Bcar31= consumerHelper11.Install (nodes.Get (61));
ApplicationContainer Bcar32= consumerHelper11.Install (nodes.Get (62));
ApplicationContainer Bcar33= consumerHelper11.Install (nodes.Get (63));
ApplicationContainer Bcar34= consumerHelper11.Install (nodes.Get (64));
ApplicationContainer Bcar35= consumerHelper11.Install (nodes.Get (65));
ApplicationContainer Bcar36= consumerHelper11.Install (nodes.Get (66));
ApplicationContainer Bcar37= consumerHelper11.Install (nodes.Get (67));
ApplicationContainer Bcar38= consumerHelper11.Install (nodes.Get (200));
ApplicationContainer Bcar39= consumerHelper11.Install (nodes.Get (201));
ApplicationContainer Bcar40= consumerHelper11.Install (nodes.Get (202));



ApplicationContainer Ccar1= consumerHelper12.Install (nodes.Get (68));
ApplicationContainer Ccar2= consumerHelper12.Install (nodes.Get (69));
ApplicationContainer Ccar3= consumerHelper12.Install (nodes.Get (70));
ApplicationContainer Ccar4= consumerHelper12.Install (nodes.Get (71));
ApplicationContainer Ccar5= consumerHelper12.Install (nodes.Get (72));
ApplicationContainer Ccar6= consumerHelper12.Install (nodes.Get (73));
ApplicationContainer Ccar7= consumerHelper12.Install (nodes.Get (74));
ApplicationContainer Ccar8= consumerHelper12.Install (nodes.Get (75));
ApplicationContainer Ccar9= consumerHelper12.Install (nodes.Get (76));
ApplicationContainer Ccar10= consumerHelper12.Install (nodes.Get (77));
ApplicationContainer Ccar11= consumerHelper12.Install (nodes.Get (78));
ApplicationContainer Ccar12= consumerHelper12.Install (nodes.Get (79));
ApplicationContainer Ccar13= consumerHelper12.Install (nodes.Get (80));

ApplicationContainer Ccar14= consumerHelper12.Install (nodes.Get (111));
ApplicationContainer Ccar15= consumerHelper12.Install (nodes.Get (112));
ApplicationContainer Ccar16= consumerHelper12.Install (nodes.Get (113));
ApplicationContainer Ccar17= consumerHelper12.Install (nodes.Get (114));
ApplicationContainer Ccar18= consumerHelper12.Install (nodes.Get (115));
ApplicationContainer Ccar19= consumerHelper12.Install (nodes.Get (116));
ApplicationContainer Ccar20= consumerHelper12.Install (nodes.Get (117));
ApplicationContainer Ccar21= consumerHelper12.Install (nodes.Get (118));
ApplicationContainer Ccar22= consumerHelper12.Install (nodes.Get (119));
ApplicationContainer Ccar23= consumerHelper12.Install (nodes.Get (120));



ApplicationContainer Dcar1= consumerHelper13.Install (nodes.Get (81));
ApplicationContainer Dcar2= consumerHelper13.Install (nodes.Get (82));
ApplicationContainer Dcar3= consumerHelper13.Install (nodes.Get (83));
ApplicationContainer Dcar4= consumerHelper13.Install (nodes.Get (84));
ApplicationContainer Dcar5= consumerHelper13.Install (nodes.Get (85));
ApplicationContainer Dcar6= consumerHelper13.Install (nodes.Get (86));
ApplicationContainer Dcar7= consumerHelper13.Install (nodes.Get (87));

ApplicationContainer Dcar8= consumerHelper13.Install (nodes.Get (88));
ApplicationContainer Dcar9= consumerHelper13.Install (nodes.Get (89));
ApplicationContainer Dcar10= consumerHelper13.Install (nodes.Get (90));
ApplicationContainer Dcar11= consumerHelper13.Install (nodes.Get (91));
ApplicationContainer Dcar12= consumerHelper13.Install (nodes.Get (92));
ApplicationContainer Dcar13= consumerHelper13.Install (nodes.Get (93));
ApplicationContainer Dcar14= consumerHelper13.Install (nodes.Get (94));
ApplicationContainer Dcar15= consumerHelper13.Install (nodes.Get (95));
ApplicationContainer Dcar16= consumerHelper13.Install (nodes.Get (96));
ApplicationContainer Dcar17= consumerHelper13.Install (nodes.Get (97));
ApplicationContainer Dcar18= consumerHelper13.Install (nodes.Get (98));
ApplicationContainer Dcar19= consumerHelper13.Install (nodes.Get (99));
ApplicationContainer Dcar20= consumerHelper13.Install (nodes.Get (100));
ApplicationContainer Dcar21= consumerHelper13.Install (nodes.Get (101));
ApplicationContainer Dcar22= consumerHelper13.Install (nodes.Get (102));
ApplicationContainer Dcar23= consumerHelper13.Install (nodes.Get (103));
ApplicationContainer Dcar24= consumerHelper13.Install (nodes.Get (104));
ApplicationContainer Dcar25= consumerHelper13.Install (nodes.Get (105));
ApplicationContainer Dcar26= consumerHelper13.Install (nodes.Get (106));
ApplicationContainer Dcar27= consumerHelper13.Install (nodes.Get (107));
ApplicationContainer Dcar28= consumerHelper13.Install (nodes.Get (108));
ApplicationContainer Dcar29= consumerHelper13.Install (nodes.Get (109));
ApplicationContainer Dcar30= consumerHelper13.Install (nodes.Get (110));
ApplicationContainer Dcar31= consumerHelper13.Install (nodes.Get (210));




ApplicationContainer carserver1= consumerHelper1.Install (nodes.Get (0));
ApplicationContainer carserver2= consumerHelper2.Install (nodes.Get (3));
ApplicationContainer carserver3= consumerHelper8.Install (nodes.Get (5));
ApplicationContainer carserver4= consumerHelper9.Install (nodes.Get (7));

Acar1.Start(Seconds(1.245123));
Acar2.Start(Seconds(1.919754));
Acar3.Start(Seconds(3.568187));
Acar4.Start(Seconds(3.775014));
Acar5.Start(Seconds(5.863056));
Acar6.Start(Seconds(6.417651));
Acar7.Start(Seconds(6.800512));
Acar8.Start(Seconds(9.529847));
Acar9.Start(Seconds(9.557519));
Acar10.Start(Seconds(11.313294));
Acar11.Start(Seconds(11.750621));
Acar12.Start(Seconds(12.845310));
Acar13.Start(Seconds(13.791148));
Acar14.Start(Seconds(18.051268));
Acar15.Start(Seconds(23.482738));
Acar16.Start(Seconds(30.069002));
Acar17.Start(Seconds(32.243126));
Acar18.Start(Seconds(33.161994));
Acar19.Start(Seconds(38.633028));
Acar20.Start(Seconds(40.371796));
Acar21.Start(Seconds(42.970590));
Acar22.Start(Seconds(43.472698));
Acar23.Start(Seconds(43.927150));
Acar24.Start(Seconds(44.628092));
Acar25.Start(Seconds(48.590492));
Acar26.Start(Seconds(49.342402));
Acar27.Start(Seconds(50.405682));
Acar28.Start(Seconds(55.299134));

Bcar1.Start(Seconds(1.894916));
Bcar2.Start(Seconds(3.155843));
Bcar3.Start(Seconds(6.212615));
Bcar4.Start(Seconds(6.433007));
Bcar5.Start(Seconds(7.373848));
Bcar6.Start(Seconds(7.827451));
Bcar7.Start(Seconds(10.953093));
Bcar8.Start(Seconds(11.528055));
Bcar9.Start(Seconds(13.273978));
Bcar10.Start(Seconds(15.324301));
Bcar11.Start(Seconds(17.556507));
Bcar12.Start(Seconds(17.561662));
Bcar13.Start(Seconds(18.139146));
Bcar14.Start(Seconds(19.236225));
Bcar15.Start(Seconds(19.938288));
Bcar16.Start(Seconds(20.066048));
Bcar17.Start(Seconds(21.784699));
Bcar18.Start(Seconds(23.084577));
Bcar19.Start(Seconds(26.568511));
Bcar20.Start(Seconds(28.853151));
Bcar21.Start(Seconds(32.284132));
Bcar22.Start(Seconds(33.755818));
Bcar23.Start(Seconds(35.704085));
Bcar24.Start(Seconds(38.240301));
Bcar25.Start(Seconds(38.947440));
Bcar26.Start(Seconds(40.761818));
Bcar27.Start(Seconds(42.864300));
Bcar28.Start(Seconds(42.901639));
Bcar29.Start(Seconds(44.437489));
Bcar30.Start(Seconds(45.956511));
Bcar31.Start(Seconds(48.702485));
Bcar32.Start(Seconds(49.183808));
Bcar33.Start(Seconds(50.557762));
Bcar34.Start(Seconds(50.728112));
Bcar35.Start(Seconds(51.271055));
Bcar36.Start(Seconds(51.853818));
Bcar37.Start(Seconds(55.758632));
Bcar38.Start(Seconds(55.976063));
Bcar39.Start(Seconds(58.776145));
Bcar40.Start(Seconds(59.970421));


Ccar1.Start(Seconds(0.474608));
Ccar2.Start(Seconds(6.981992));
Ccar3.Start(Seconds(9.965858));
Ccar4.Start(Seconds(14.906980));
Ccar5.Start(Seconds(14.949404));
Ccar6.Start(Seconds(16.460787));
Ccar7.Start(Seconds(19.924144));
Ccar8.Start(Seconds(21.051429));
Ccar9.Start(Seconds(23.164056));
Ccar10.Start(Seconds(24.621264));
Ccar11.Start(Seconds(27.671262));
Ccar12.Start(Seconds(34.707676));
Ccar13.Start(Seconds(36.470532));
Ccar14.Start(Seconds(38.237240));
Ccar15.Start(Seconds(43.642421));
Ccar16.Start(Seconds(46.797560));
Ccar17.Start(Seconds(47.982632));
Ccar18.Start(Seconds(51.356244));
Ccar19.Start(Seconds(51.564940));
Ccar20.Start(Seconds(54.181284));
Ccar21.Start(Seconds(54.734851));
Ccar22.Start(Seconds(58.315580));
Ccar23.Start(Seconds(58.617092));


Dcar1.Start(Seconds(0.790156));
Dcar2.Start(Seconds(1.622499));
Dcar3.Start(Seconds(3.691543));
Dcar4.Start(Seconds(4.126958));
Dcar5.Start(Seconds(4.448205));
Dcar6.Start(Seconds(7.172073));
Dcar7.Start(Seconds(8.992642));
Dcar8.Start(Seconds(16.091780));
Dcar9.Start(Seconds(17.809664));
Dcar10.Start(Seconds(19.784892));
Dcar11.Start(Seconds(20.618692));
Dcar12.Start(Seconds(27.019293));
Dcar13.Start(Seconds(27.291079));
Dcar14.Start(Seconds(28.679726));
Dcar15.Start(Seconds(29.589100));
Dcar16.Start(Seconds(29.691414));
Dcar17.Start(Seconds(32.475976));
Dcar18.Start(Seconds(35.852130));
Dcar19.Start(Seconds(40.205558));
Dcar20.Start(Seconds(42.165554));
Dcar21.Start(Seconds(42.779874));
Dcar22.Start(Seconds(42.822150));
Dcar23.Start(Seconds(45.739232));
Dcar24.Start(Seconds(46.435890));
Dcar25.Start(Seconds(50.848600));
Dcar26.Start(Seconds(53.072151));
Dcar27.Start(Seconds(53.147851));
Dcar28.Start(Seconds(53.859701));
Dcar29.Start(Seconds(56.428469));
Dcar30.Start(Seconds(56.545074));
Dcar31.Start(Seconds(59.145832));


Simulator::Stop (Seconds (65.0));

  Simulator::Run ();
  Simulator::Destroy ();


  return 0;
}
