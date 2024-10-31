// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlXRootD.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<XrdCl::PageInfo> : std::false_type { };
  template<> struct DefaultConstructible<XrdCl::PageInfo> : std::false_type { };
}

// Class generating the wrapper for type XrdCl::PageInfo
// signature to use in the veto file: XrdCl::PageInfo
struct JlXrdCl_PageInfo: public Wrapper {

  JlXrdCl_PageInfo(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type XrdCl::PageInfo (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:955:10
    jlcxx::TypeWrapper<XrdCl::PageInfo>  t = jlModule.add_type<XrdCl::PageInfo>("XrdCl!PageInfo");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<XrdCl::PageInfo>>(new jlcxx::TypeWrapper<XrdCl::PageInfo>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);




    DEBUG_MSG("Adding wrapper for uint64_t XrdCl::PageInfo::GetOffset() (" __HERE__ ")");
    // signature to use in the veto list: uint64_t XrdCl::PageInfo::GetOffset()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:981:14
    t.method("GetOffset", static_cast<uint64_t (XrdCl::PageInfo::*)()  const>(&XrdCl::PageInfo::GetOffset));

    DEBUG_MSG("Adding wrapper for uint32_t XrdCl::PageInfo::GetLength() (" __HERE__ ")");
    // signature to use in the veto list: uint32_t XrdCl::PageInfo::GetLength()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:986:14
    t.method("GetLength", static_cast<uint32_t (XrdCl::PageInfo::*)()  const>(&XrdCl::PageInfo::GetLength));

    DEBUG_MSG("Adding wrapper for void * XrdCl::PageInfo::GetBuffer() (" __HERE__ ")");
    // signature to use in the veto list: void * XrdCl::PageInfo::GetBuffer()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:991:11
    t.method("GetBuffer", static_cast<void * (XrdCl::PageInfo::*)() >(&XrdCl::PageInfo::GetBuffer));

    DEBUG_MSG("Adding wrapper for std::vector<uint32_t> & XrdCl::PageInfo::GetCksums() (" __HERE__ ")");
    // signature to use in the veto list: std::vector<uint32_t> & XrdCl::PageInfo::GetCksums()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:996:28
    t.method("GetCksums", static_cast<std::vector<uint32_t> & (XrdCl::PageInfo::*)() >(&XrdCl::PageInfo::GetCksums));

    DEBUG_MSG("Adding wrapper for size_t XrdCl::PageInfo::GetNbRepair() (" __HERE__ ")");
    // signature to use in the veto list: size_t XrdCl::PageInfo::GetNbRepair()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:1001:12
    t.method("GetNbRepair", static_cast<size_t (XrdCl::PageInfo::*)() >(&XrdCl::PageInfo::GetNbRepair));

    DEBUG_MSG("Adding wrapper for void XrdCl::PageInfo::SetNbRepair(size_t) (" __HERE__ ")");
    // signature to use in the veto list: void XrdCl::PageInfo::SetNbRepair(size_t)
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:1006:10
    t.method("SetNbRepair", static_cast<void (XrdCl::PageInfo::*)(size_t) >(&XrdCl::PageInfo::SetNbRepair));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<XrdCl::PageInfo>> type_;
};
std::shared_ptr<Wrapper> newJlXrdCl_PageInfo(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlXrdCl_PageInfo(module));
}
