

#include "ns3/ndn-app.h"
#include "ns3/ndn-name.h"

namespace ns3 {

class TimerController : public ndn::App
{
public:
  static TypeId
  GetTypeId ();

  TimerController ();
  
  virtual void
  StartApplication ();

  virtual void
  StopApplication ();

  virtual void
  OnData (Ptr<const ndn::Data> contentObject);
  
private:
  void
  SendInterest ();
  void TimerSet1();
  void TimerSet2();
private:
  bool m_isRunning;
  ndn::Name m_name;
};

} 

