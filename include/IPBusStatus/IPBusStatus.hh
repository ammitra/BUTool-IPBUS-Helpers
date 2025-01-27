#ifndef __IPBUS_STATUS_HH__
#define __IPBUS_STATUS_HH__

#include <IPBusIO/IPBusIO.hh>
#include <BUTool/helpers/StatusDisplay/StatusDisplay.hh>

#ifdef STD_UNORDERED_MAP
#include <unordered_map>
typedef std::unordered_map<std::string, std::string> uMap;
#else 
#include <boost/unordered_map.hpp>
typedef boost::unordered_map<std::string, std::string> uMap;
#endif

class IPBusStatus: public IPBusIO, public BUTool::StatusDisplay {
public:
  IPBusStatus(uhal::HwInterface * const * _hw){SetHWInterface(_hw);};
  ~IPBusStatus(){};
private:
  IPBusStatus();
  void Process(std::string const & singleTable);
};
#endif
