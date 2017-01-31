// this application is to dynamically set the aggregation time interval (implementation is finished "simple" ) but no algorithm 
//yet

#include "timercontroller.h"
#include "ns3/ptr.h"
#include "ns3/log.h"
#include "ns3/simulator.h"
#include "ns3/packet.h"
#include "ns3/random-variable.h"
#include "ns3/string.h"

#include "ns3/ndn-app-face.h"
#include "ns3/ndn-interest.h"
#include "ns3/ndn-data.h"
#include "ns3/point-to-point-module.h"
#include "ns3/ndn-fib.h"
#include "ns3/random-variable.h"

NS_LOG_COMPONENT_DEFINE ("TimerController");

namespace ns3 {

NS_OBJECT_ENSURE_REGISTERED (TimerController);

TypeId
TimerController::GetTypeId ()
{
  static TypeId tid = TypeId ("TimerController")
    .SetParent<ndn::App> ()
    .AddConstructor<TimerController> ()

    .AddAttribute ("Prefix", "Requested name",
                   StringValue ("/prefix/timeset"),
                   ndn::MakeNameAccessor (&TimerController::m_name),
                   ndn::MakeNameChecker ())
    ;
  return tid;
}

TimerController::TimerController ()
  : m_isRunning (false)
{
}
static Time t;
static int x=3,y=1;
void
TimerController::StartApplication ()
{
  ndn::App::StartApplication ();
  Ptr<ndn::Name> prefix2 = Create<ndn::Name> (); 
  prefix2->append ("prefix"); 
  prefix2->append ("time"); `

  Ptr<ndn::Fib> fib = GetNode ()->GetObject<ndn::Fib> ();

  Ptr<ndn::fib::Entry> fibEntry = fib->Add (*prefix2, m_face, 0);  
m_isRunning = true;

Simulator::Schedule(Seconds (0.0), &TimerController::TimerSet2,this);
Simulator::Schedule(Seconds (0.0), &TimerController::SendInterest,this);
  t=Simulator::Now ();
}

void
TimerController::StopApplication ()
{
  m_isRunning = false;
  ndn::App::StopApplication ();
}
static int b=1;
Ptr<ndn::Interest> interest2 = Create<ndn::Interest> ();
void TimerController::TimerSet1(void)
{x=25;
t=Seconds(3.5);
if(b)
{

}
if(b==0)
{
b++;}
}
void TimerController::TimerSet2(void){x=15;}
void
TimerController::SendInterest ()
{ 
  if (!m_isRunning) return;
  
  Ptr<ndn::Name> prefix = Create<ndn::Name> (m_name); // another way to create name
  Ptr<ndn::Interest> interest = Create<ndn::Interest> ();
  UniformVariable rand (0,std::numeric_limits<uint32_t>::max ());
interest->SetNonce            (x);  

interest->SetName             (prefix);
  interest->SetInterestLifetime (Seconds (0.2));
interest->SetScope(2); 

  NS_LOG_DEBUG ("Sending Interest packet for " << *prefix);
  


  m_face->ReceiveInterest (interest);
  interest2=interest;
}
static int n=1;
void
TimerController::OnData (Ptr<const ndn::Data> contentObject)
{
NS_LOG_DEBUG ("hah" << n);
n++;
b=0;
}


} 
