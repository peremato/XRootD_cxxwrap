// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlXRootD.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<XrdCl::LocationInfo> : std::false_type { };
  template<> struct DefaultConstructible<XrdCl::LocationInfo> : std::false_type { };
}

// Class generating the wrapper for type XrdCl::LocationInfo
// signature to use in the veto file: XrdCl::LocationInfo
struct JlXrdCl_LocationInfo: public Wrapper {

  JlXrdCl_LocationInfo(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type XrdCl::LocationInfo (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:43:9
    jlcxx::TypeWrapper<XrdCl::LocationInfo>  t = jlModule.add_type<XrdCl::LocationInfo>("XrdCl!LocationInfo");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<XrdCl::LocationInfo>>(new jlcxx::TypeWrapper<XrdCl::LocationInfo>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.method("delete", [](XrdCl::LocationInfo* self){ delete self; });

    DEBUG_MSG("Adding wrapper for uint32_t XrdCl::LocationInfo::GetSize() (" __HERE__ ")");
    // signature to use in the veto list: uint32_t XrdCl::LocationInfo::GetSize()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:152:16
    t.method("GetSize", static_cast<uint32_t (XrdCl::LocationInfo::*)()  const>(&XrdCl::LocationInfo::GetSize));

    DEBUG_MSG("Adding wrapper for XrdCl::LocationInfo::Location & XrdCl::LocationInfo::At(uint32_t) (" __HERE__ ")");
    // signature to use in the veto list: XrdCl::LocationInfo::Location & XrdCl::LocationInfo::At(uint32_t)
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:160:17
    t.method("At", static_cast<XrdCl::LocationInfo::Location & (XrdCl::LocationInfo::*)(uint32_t) >(&XrdCl::LocationInfo::At));

    DEBUG_MSG("Adding wrapper for void XrdCl::LocationInfo::Add(const XrdCl::LocationInfo::Location &) (" __HERE__ ")");
    // signature to use in the veto list: void XrdCl::LocationInfo::Add(const XrdCl::LocationInfo::Location &)
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:200:12
    t.method("Add", static_cast<void (XrdCl::LocationInfo::*)(const XrdCl::LocationInfo::Location &) >(&XrdCl::LocationInfo::Add));

    DEBUG_MSG("Adding wrapper for bool XrdCl::LocationInfo::ParseServerResponse(const char *) (" __HERE__ ")");
    // signature to use in the veto list: bool XrdCl::LocationInfo::ParseServerResponse(const char *)
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:208:12
    t.method("ParseServerResponse", static_cast<bool (XrdCl::LocationInfo::*)(const char *) >(&XrdCl::LocationInfo::ParseServerResponse));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<XrdCl::LocationInfo>> type_;
};
std::shared_ptr<Wrapper> newJlXrdCl_LocationInfo(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlXrdCl_LocationInfo(module));
}
