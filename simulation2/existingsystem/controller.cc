
#include "controller.h"
#include "ns3/ptr.h"
#include "ns3/log.h"
#include "ns3/simulator.h"
#include "ns3/packet.h"
#include "ns3/random-variable.h"
#include "ns3/string.h"

#include "ns3/ndn-app-face.h"
#include "ns3/ndn-interest.h"
#include "ns3/ndn-data.h"
#include "ns3/random-variable-stream.h"
#include "ns3/double.h"

NS_LOG_COMPONENT_DEFINE ("Controller");

namespace ns3 {

NS_OBJECT_ENSURE_REGISTERED (Controller);

TypeId
Controller::GetTypeId ()
{
  static TypeId tid = TypeId ("Controller")
    .SetParent<ndn::App> ()
    .AddConstructor<Controller> ()

    .AddAttribute ("Prefix", "Requested name",
                   StringValue ("/prefix/sub"),
                   ndn::MakeNameAccessor (&Controller::m_name),
                   ndn::MakeNameChecker ())
    ;
  return tid;
}

Controller::Controller ()
  : m_isRunning (false)
{
}
static Time t;
void
Controller::StartApplication ()
{
  ndn::App::StartApplication ();

  m_isRunning = true;
  Simulator::ScheduleNow (&Controller::TimerSet,this);
  t=Simulator::Now ();
}

void
Controller::StopApplication ()
{
  m_isRunning = false;
  ndn::App::StopApplication ();
}
static int b=1;
Ptr<ndn::Interest> interest1 = Create<ndn::Interest> ();
void Controller::TimerSet(void)
{t=Seconds(3.5);
if(b)
{Controller::SendInterest ();

Simulator::Schedule (Seconds (2.5), &Controller::TimerSet, this);}
if(b==0)
{Controller::SendInterest ();
b++;}
}
void
Controller::SendInterest ()
{
  if (!m_isRunning) return;
  
  
  Ptr<ndn::Name> prefix = Create<ndn::Name> (m_name); // another way to create name
int x=0;
  Ptr<ndn::Interest> interest = Create<ndn::Interest> ();
  UniformVariable rand (0,std::numeric_limits<uint32_t>::max ());
  interest->SetNonce            (rand.GetValue ());
  interest->SetName             (prefix);
  interest->SetInterestLifetime (Seconds (999.0));
interest->SetScope(1); 
x=interest->GetScope ();
  NS_LOG_DEBUG ("Sending Interest packet for " << *prefix);
 

  m_face->ReceiveInterest (interest);
  interest1=interest;
}
static int n=1;
void
Controller::OnData (Ptr<const ndn::Data> contentObject)
{
NS_LOG_DEBUG ("Set PIT table, messages=" << n);
n++;

b=0;
Controller::TimerSet();
}


} 
