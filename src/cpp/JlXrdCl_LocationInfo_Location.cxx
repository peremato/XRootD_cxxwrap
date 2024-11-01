// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlXRootD.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<XrdCl::LocationInfo::Location> : std::false_type { };
  template<> struct DefaultConstructible<XrdCl::LocationInfo::Location> : std::false_type { };
}

// Class generating the wrapper for type XrdCl::LocationInfo::Location
// signature to use in the veto file: XrdCl::LocationInfo::Location
struct JlXrdCl_LocationInfo_Location: public Wrapper {

  JlXrdCl_LocationInfo_Location(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type XrdCl::LocationInfo::Location (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:69:13
    jlcxx::TypeWrapper<XrdCl::LocationInfo::Location>  t = jlModule.add_type<XrdCl::LocationInfo::Location>("XrdCl!LocationInfo!Location");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<XrdCl::LocationInfo::Location>>(new jlcxx::TypeWrapper<XrdCl::LocationInfo::Location>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void XrdCl::LocationInfo::Location::Location(const std::string &, XrdCl::LocationInfo::LocationType, XrdCl::LocationInfo::AccessType) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:76:11
    t.constructor<const std::string &, XrdCl::LocationInfo::LocationType, XrdCl::LocationInfo::AccessType>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for const std::string & XrdCl::LocationInfo::Location::GetAddress() (" __HERE__ ")");
    // signature to use in the veto list: const std::string & XrdCl::LocationInfo::Location::GetAddress()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:86:30
    t.method("GetAddress", static_cast<const std::string & (XrdCl::LocationInfo::Location::*)()  const>(&XrdCl::LocationInfo::Location::GetAddress));

    DEBUG_MSG("Adding wrapper for XrdCl::LocationInfo::LocationType XrdCl::LocationInfo::Location::GetType() (" __HERE__ ")");
    // signature to use in the veto list: XrdCl::LocationInfo::LocationType XrdCl::LocationInfo::Location::GetType()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:94:24
    t.method("GetType", static_cast<XrdCl::LocationInfo::LocationType (XrdCl::LocationInfo::Location::*)()  const>(&XrdCl::LocationInfo::Location::GetType));

    DEBUG_MSG("Adding wrapper for XrdCl::LocationInfo::AccessType XrdCl::LocationInfo::Location::GetAccessType() (" __HERE__ ")");
    // signature to use in the veto list: XrdCl::LocationInfo::AccessType XrdCl::LocationInfo::Location::GetAccessType()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:102:22
    t.method("GetAccessType", static_cast<XrdCl::LocationInfo::AccessType (XrdCl::LocationInfo::Location::*)()  const>(&XrdCl::LocationInfo::Location::GetAccessType));

    DEBUG_MSG("Adding wrapper for bool XrdCl::LocationInfo::Location::IsServer() (" __HERE__ ")");
    // signature to use in the veto list: bool XrdCl::LocationInfo::Location::IsServer()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:110:16
    t.method("IsServer", static_cast<bool (XrdCl::LocationInfo::Location::*)()  const>(&XrdCl::LocationInfo::Location::IsServer));

    DEBUG_MSG("Adding wrapper for bool XrdCl::LocationInfo::Location::IsManager() (" __HERE__ ")");
    // signature to use in the veto list: bool XrdCl::LocationInfo::Location::IsManager()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:118:16
    t.method("IsManager", static_cast<bool (XrdCl::LocationInfo::Location::*)()  const>(&XrdCl::LocationInfo::Location::IsManager));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<XrdCl::LocationInfo::Location>> type_;
};
std::shared_ptr<Wrapper> newJlXrdCl_LocationInfo_Location(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlXrdCl_LocationInfo_Location(module));
}
