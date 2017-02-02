/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2011-2012 University of California, Los Angeles
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Alexander Afanasyev <alexander.afanasyev@ucla.edu>
 */



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

// register NS-3 type
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
// Processing upon start of the application
void
Controller::StartApplication ()
{
  // initialize ndn::App
  ndn::App::StartApplication ();

  m_isRunning = true;
  Simulator::ScheduleNow (&Controller::TimerSet,this);
  t=Simulator::Now ();
}

// Processing when application is stopped
void
Controller::StopApplication ()
{
  m_isRunning = false;
  // cleanup ndn::App
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
//Simulator::Schedule (Seconds (2.5), &Controller::SendInterest, this);
//Simulator::Schedule (Seconds (5.0), &Controller::SendInterest, this);
//Simulator::Schedule (Seconds (5.0), &Controller::SendInterest, this);
}
void
Controller::SendInterest ()
{
  if (!m_isRunning) return;
  
  /////////////////////////////////////
  // Sending one Interest packet out //
  /////////////////////////////////////
  
  Ptr<ndn::Name> prefix = Create<ndn::Name> (m_name); // another way to create name
int x=0;
  // Create and configure ndn::Interest
  Ptr<ndn::Interest> interest = Create<ndn::Interest> ();
  UniformVariable rand (0,std::numeric_limits<uint32_t>::max ());
  interest->SetNonce            (rand.GetValue ());
 // interest->SetNonce(100);
  interest->SetName             (prefix);
  interest->SetInterestLifetime (Seconds (999.0));
interest->SetScope(1); 
x=interest->GetScope ();
//  NS_LOG_DEBUG ("Sending Interest packet scope= " << x);
  NS_LOG_DEBUG ("Sending Interest packet for " << *prefix);
 

  // Call trace (for logging purposes)
  //m_transmittedInterests (interest, this, m_face);

  // Forward packet to lower (network) layer
  m_face->ReceiveInterest (interest);
  interest1=interest;
  //Simulator::Schedule (Seconds (2.5), &Controller::SendInterest, this);
//Controller::TimerSet();
}
//void Controller::Change(Ptr<const ndn::Interest> interest)
//{return interest;}
static int n=1;
void
Controller::OnData (Ptr<const ndn::Data> contentObject)
{
  //Controller::SendInterest ();
  //NS_LOG_DEBUG ("Set PIT table, messages=" << contentObject->GetName ());
NS_LOG_DEBUG ("Set PIT table, messages=" << n);
n++;

// The values returned by a uniformly distributed random
// variable should always be within the range
//
//     [min, max)  .
//

 // NS_LOG_DEBUG ("Total messages=" << contentObject->GetName ());
b=0;
Controller::TimerSet();
//Controller::SendInterest();
//Simulator::Schedule (Seconds (2.5), &Controller::OnData, this);
// Controller::SendInterest ();
//Controller::SendInterest ();
//  m_transmittedInterests (interest1, this, m_face);
// m_face->ReceiveInterest (interest1);
  // Forward packet to lower (network) layer
  //m_face->ReceiveInterest (interest1);
//m_face->ReceiveInterest (interest);
}


} // namespace ns3
