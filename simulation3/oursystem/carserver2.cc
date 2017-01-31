
#include "carserver2.h"
#include "ns3/ptr.h"
#include "ns3/log.h"
#include "ns3/simulator.h"
#include "ns3/packet.h"


#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/ndnSIM-module.h"

#include "ns3/ndn-app-face.h"
#include "ns3/ndn-interest.h"
#include "ns3/ndn-data.h"
#include "ns3/ndn-fib.h"
#include "ns3/random-variable.h"

NS_LOG_COMPONENT_DEFINE ("CarServerApp3");

namespace ns3 {

NS_OBJECT_ENSURE_REGISTERED (CarServerApp3);
Ptr<const ndn::Interest> *interestp3[10];
TypeId
CarServerApp3::GetTypeId ()
{
  static TypeId tid = TypeId ("CarServerApp3")
    .SetParent<ndn::App> ()
    .AddConstructor<CarServerApp3> ()
    ;
  return tid;
}

void
CarServerApp3::StartApplication ()
{
  ndn::App::StartApplication ();

  Ptr<ndn::Name> prefix = Create<ndn::Name> (); 
  prefix->append ("prefix"); 
  prefix->append ("sub2"); 

  Ptr<ndn::Fib> fib = GetNode ()->GetObject<ndn::Fib> ();

  Ptr<ndn::fib::Entry> fibEntry = fib->Add (*prefix, m_face, 0);

}

void
CarServerApp3::StopApplication ()
{
  ndn::App::StopApplication ();
}

void
CarServerApp3::SendInterest ()
{
}

void
CarServerApp3::OnInterest (Ptr<const ndn::Interest> interest)
{
if (interest->GetScope()==1)
{
if(1)
{static int n=0; 

int k=0;
static int c=0;
 interestp3[c]=&interest;
 
 if(c==1)
{

for(k=0;k<=c;k++)
 {
  ndn::App::OnInterest (*(interestp3[k]));

  
  Ptr<ndn::Data> data = Create<ndn::Data> (Create<Packet> (1024));
  data->SetName (Create<ndn::Name> ((*(interestp3[k]))->GetName ())); 


  

  m_transmittedDatas (data, this, m_face);
  m_face->ReceiveData (data);
}

}
c++;
if(c>1)
c=0;
}
}
}

void
CarServerApp3::OnData (Ptr<const ndn::Data> contentObject)
{
}

}
