// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlXRootD.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<XrdCl::OpenInfo> : std::false_type { };
  template<> struct DefaultConstructible<XrdCl::OpenInfo> : std::false_type { };
}

// Class generating the wrapper for type XrdCl::OpenInfo
// signature to use in the veto file: XrdCl::OpenInfo
struct JlXrdCl_OpenInfo: public Wrapper {

  JlXrdCl_OpenInfo(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type XrdCl::OpenInfo (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClXRootDResponses.hh:861:9
    jlcxx::TypeWrapper<XrdCl::OpenInfo>  t = jlModule.add_type<XrdCl::OpenInfo>("XrdCl!OpenInfo");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<XrdCl::OpenInfo>>(new jlcxx::TypeWrapper<XrdCl::OpenInfo>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void XrdCl::OpenInfo::OpenInfo(const uint8_t *, uint64_t, XrdCl::StatInfo *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClXRootDResponses.hh:867:7
    t.constructor<const uint8_t *, uint64_t>(/*finalize=*/true);
    t.constructor<const uint8_t *, uint64_t, XrdCl::StatInfo *>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void XrdCl::OpenInfo::GetFileHandle(uint8_t *) (" __HERE__ ")");
    // signature to use in the veto list: void XrdCl::OpenInfo::GetFileHandle(uint8_t *)
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClXRootDResponses.hh:886:12
    t.method("GetFileHandle", static_cast<void (XrdCl::OpenInfo::*)(uint8_t *)  const>(&XrdCl::OpenInfo::GetFileHandle));

    DEBUG_MSG("Adding wrapper for const XrdCl::StatInfo * XrdCl::OpenInfo::GetStatInfo() (" __HERE__ ")");
    // signature to use in the veto list: const XrdCl::StatInfo * XrdCl::OpenInfo::GetStatInfo()
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClXRootDResponses.hh:894:23
    t.method("GetStatInfo", static_cast<const XrdCl::StatInfo * (XrdCl::OpenInfo::*)()  const>(&XrdCl::OpenInfo::GetStatInfo));

    DEBUG_MSG("Adding wrapper for uint64_t XrdCl::OpenInfo::GetSessionId() (" __HERE__ ")");
    // signature to use in the veto list: uint64_t XrdCl::OpenInfo::GetSessionId()
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClXRootDResponses.hh:902:16
    t.method("GetSessionId", static_cast<uint64_t (XrdCl::OpenInfo::*)()  const>(&XrdCl::OpenInfo::GetSessionId));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<XrdCl::OpenInfo>> type_;
};
std::shared_ptr<Wrapper> newJlXrdCl_OpenInfo(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlXrdCl_OpenInfo(module));
}