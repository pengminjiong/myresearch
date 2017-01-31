
#include "carserver2.h"
#include "ns3/ptr.h"
#include "ns3/log.h"
#include "ns3/simulator.h"
#include "ns3/packet.h"


#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/ndnSIM-module.h"

#include "ns3/ndn-app-face.h"
#include "ns3/ndn-interest.h"
#include "ns3/ndn-data.h"
#include "ns3/point-to-point-module.h"
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
//  this in empty because this applicaiton only works as a publisher , keep this fuction for future dynamcial controll
}

void
CarServerApp3::OnInterest (Ptr<const ndn::Interest> interest)
{
ndn::App::OnInterest (interest);
  
  NS_LOG_DEBUG ("Received Interest packet for " << interest->GetName ());

  
  Ptr<ndn::Data> data = Create<ndn::Data> (Create<Packet> (1024));
  data->SetName (Create<ndn::Name> (interest->GetName ())); // data will have the same name as Interests

  NS_LOG_DEBUG ("Sending Data packet for " << data->GetName ());  

  m_transmittedDatas (data, this, m_face);

  m_face->ReceiveData (data); 

}

void
CarServerApp3::OnData (Ptr<const ndn::Data> contentObject)
{

}

} 
