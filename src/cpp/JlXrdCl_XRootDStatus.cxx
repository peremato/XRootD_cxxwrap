// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlXRootD.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<XrdCl::XRootDStatus> : std::false_type { };
  template<> struct DefaultConstructible<XrdCl::XRootDStatus> : std::false_type { };
template<> struct SuperType<XrdCl::XRootDStatus> { typedef XrdCl::Status type; };
}

// Class generating the wrapper for type XrdCl::XRootDStatus
// signature to use in the veto file: XrdCl::XRootDStatus
struct JlXrdCl_XRootDStatus: public Wrapper {

  JlXrdCl_XRootDStatus(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type XrdCl::XRootDStatus (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClXRootDResponses.hh:218:9
    jlcxx::TypeWrapper<XrdCl::XRootDStatus>  t = jlModule.add_type<XrdCl::XRootDStatus>("XrdCl!XRootDStatus",
      jlcxx::julia_base_type<XrdCl::Status>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<XrdCl::XRootDStatus>>(new jlcxx::TypeWrapper<XrdCl::XRootDStatus>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void XrdCl::XRootDStatus::XRootDStatus(uint16_t, uint16_t, uint32_t, const std::string &) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClXRootDResponses.hh:224:7
    t.constructor<uint16_t>(/*finalize=*/true);
    t.constructor<uint16_t, uint16_t>(/*finalize=*/true);
    t.constructor<uint16_t, uint16_t, uint32_t>(/*finalize=*/true);
    t.constructor<uint16_t, uint16_t, uint32_t, const std::string &>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void XrdCl::XRootDStatus::XRootDStatus(const XrdCl::Status &, const std::string &) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClXRootDResponses.hh:234:7
    t.constructor<const XrdCl::Status &>(/*finalize=*/true);
    t.constructor<const XrdCl::Status &, const std::string &>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for const std::string & XrdCl::XRootDStatus::GetErrorMessage() (" __HERE__ ")");
    // signature to use in the veto list: const std::string & XrdCl::XRootDStatus::GetErrorMessage()
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClXRootDResponses.hh:242:26
    t.method("GetErrorMessage", static_cast<const std::string & (XrdCl::XRootDStatus::*)()  const>(&XrdCl::XRootDStatus::GetErrorMessage));

    DEBUG_MSG("Adding wrapper for void XrdCl::XRootDStatus::SetErrorMessage(const std::string &) (" __HERE__ ")");
    // signature to use in the veto list: void XrdCl::XRootDStatus::SetErrorMessage(const std::string &)
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClXRootDResponses.hh:250:12
    t.method("SetErrorMessage", static_cast<void (XrdCl::XRootDStatus::*)(const std::string &) >(&XrdCl::XRootDStatus::SetErrorMessage));

    DEBUG_MSG("Adding wrapper for std::string XrdCl::XRootDStatus::ToStr() (" __HERE__ ")");
    // signature to use in the veto list: std::string XrdCl::XRootDStatus::ToStr()
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClXRootDResponses.hh:258:19
    t.method("ToStr", static_cast<std::string (XrdCl::XRootDStatus::*)()  const>(&XrdCl::XRootDStatus::ToStr));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<XrdCl::XRootDStatus>> type_;
};
std::shared_ptr<Wrapper> newJlXrdCl_XRootDStatus(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlXrdCl_XRootDStatus(module));
}