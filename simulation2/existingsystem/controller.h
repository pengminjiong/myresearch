

#include "ns3/ndn-app.h"
#include "ns3/ndn-name.h"

namespace ns3 {

class Controller : public ndn::App
{
public:
  static TypeId
  GetTypeId ();

  Controller ();
  
  virtual void
  StartApplication ();

  virtual void
  StopApplication ();

  virtual void
  OnData (Ptr<const ndn::Data> contentObject);
  
private:
  void
  SendInterest ();
  void TimerSet();
private:
  bool m_isRunning;
  ndn::Name m_name;
};

} 

