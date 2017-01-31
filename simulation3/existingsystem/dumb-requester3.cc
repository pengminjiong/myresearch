//// this application is based on the official  example of ndnsim  as  following



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

// dumb-requester.cc

#include "dumb-requester3.h"
#include "ns3/ptr.h"
#include "ns3/log.h"
#include "ns3/simulator.h"
#include "ns3/packet.h"
#include "ns3/random-variable.h"
#include "ns3/string.h"

#include "ns3/ndn-app-face.h"
#include "ns3/ndn-interest.h"
#include "ns3/ndn-data.h"

NS_LOG_COMPONENT_DEFINE ("DumbRequester3");

namespace ns3 {

NS_OBJECT_ENSURE_REGISTERED (DumbRequester3);

// register NS-3 type
TypeId
DumbRequester3::GetTypeId ()
{
  static TypeId tid = TypeId ("DumbRequester3")
    .SetParent<ndn::App> ()
    .AddConstructor<DumbRequester3> ()

    .AddAttribute ("Prefix", "Requested name",
                   StringValue ("/prefix/sub3"),
                   ndn::MakeNameAccessor (&DumbRequester3::m_name),
                   ndn::MakeNameChecker ())
    ;
  return tid;
}

DumbRequester3::DumbRequester3 ()
  : m_isRunning (false)
{
}

// Processing upon start of the application
void
DumbRequester3::StartApplication ()
{
  // initialize ndn::App
  ndn::App::StartApplication ();

  m_isRunning = true;
  Simulator::ScheduleNow (&DumbRequester3::SendInterest, this);
}

// Processing when application is stopped
void
DumbRequester3::StopApplication ()
{
  m_isRunning = false;
  // cleanup ndn::App
  ndn::App::StopApplication ();
}

void
DumbRequester3::SendInterest ()
{
  if (!m_isRunning) return;
  
  /////////////////////////////////////
  // Sending one Interest packet out //
  /////////////////////////////////////
  
  Ptr<ndn::Name> prefix = Create<ndn::Name> (m_name); // another way to create name

  // Create and configure ndn::Interest
  Ptr<ndn::Interest> interest = Create<ndn::Interest> ();
  UniformVariable rand (0,std::numeric_limits<uint32_t>::max ());
  interest->SetNonce            (rand.GetValue ());
  interest->SetName             (prefix);
  interest->SetInterestLifetime (Seconds (100.0));
interest->SetScope(3);
  NS_LOG_DEBUG ("Sending Interest packet for " << *prefix);
  

  // Call trace (for logging purposes)
  m_transmittedInterests (interest, this, m_face);

  // Forward packet to lower (network) layer
  m_face->ReceiveInterest (interest);
//double t[100];
//double i;
//for(i=2;i<=100;i++)

//{
//if(i%2==0)
//t[i]=i*1.54;}
//static double i=0;
//static int j=0;
//if(j==0)
// {j++;i=2;}
//else i=i+2;
  Simulator::Schedule (Seconds (1003.7), &DumbRequester3::SendInterest, this);
}

void
DumbRequester3::OnData (Ptr<const ndn::Data> contentObject)
{
  NS_LOG_DEBUG ("Receiving Data packet for " << contentObject->GetName ());
}


} // namespace ns3
