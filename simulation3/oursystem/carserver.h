
#ifndef CUSTOM_APP_H_
#define CUSTOM_APP_H_

#include "ns3/ndn-app.h"

namespace ns3 {

class CarServerApp1 : public ndn::App
{
public:
  static TypeId
  GetTypeId ();
  
  virtual void
  StartApplication ();

  virtual void
  StopApplication ();

  virtual void
  OnInterest (Ptr<const ndn::Interest> interest);

  virtual void
  OnData (Ptr<const ndn::Data> contentObject);

private:
  void
  SendInterest ();
};

} 

