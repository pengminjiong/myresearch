
#include "carserver3.h"
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
#include "ns3/point-to-point-module.h"
#include "ns3/ndn-fib.h"
#include "ns3/random-variable.h"

NS_LOG_COMPONENT_DEFINE ("CarServerApp4");

namespace ns3 {

NS_OBJECT_ENSURE_REGISTERED (CarServerApp4);
Ptr<const ndn::Interest> *interestp4[10];
TypeId
CarServerApp4::GetTypeId ()
{
  static TypeId tid = TypeId ("CarServerApp4")
    .SetParent<ndn::App> ()
    .AddConstructor<CarServerApp4> ()
    ;
  return tid;
}

void
CarServerApp4::StartApplication ()
{
  ndn::App::StartApplication ();

  Ptr<ndn::Name> prefix = Create<ndn::Name> (); 
  prefix->append ("prefix"); 
  prefix->append ("sub3"); 

  Ptr<ndn::Fib> fib = GetNode ()->GetObject<ndn::Fib> ();

  Ptr<ndn::fib::Entry> fibEntry = fib->Add (*prefix, m_face, 0);

}

void
CarServerApp4::StopApplication ()
{
  ndn::App::StopApplication ();
}

void
CarServerApp4::SendInterest ()
{
}

void
CarServerApp4::OnInterest (Ptr<const ndn::Interest> interest)
{
if (interest->GetScope()==1)
{
if(1)
{static int n=0; 

int k=0;
static int c=0;
 interestp4[c]=&interest;
 
 if(c==1)
{

for(k=0;k<=c;k++)
 {
  ndn::App::OnInterest (*(interestp4[k]));



  
  Ptr<ndn::Data> data = Create<ndn::Data> (Create<Packet> (1024));
  data->SetName (Create<ndn::Name> ((*(interestp4[k]))->GetName ())); 


  

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
CarServerApp4::OnData (Ptr<const ndn::Data> contentObject)
{

}

} 
