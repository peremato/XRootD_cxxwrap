// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlXRootD.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<XrdCl::DirectoryList::ListEntry> : std::false_type { };
  template<> struct DefaultConstructible<XrdCl::DirectoryList::ListEntry> : std::false_type { };
}

// Class generating the wrapper for type XrdCl::DirectoryList::ListEntry
// signature to use in the veto file: XrdCl::DirectoryList::ListEntry
struct JlXrdCl_DirectoryList_ListEntry: public Wrapper {

  JlXrdCl_DirectoryList_ListEntry(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type XrdCl::DirectoryList::ListEntry (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:656:13
    jlcxx::TypeWrapper<XrdCl::DirectoryList::ListEntry>  t = jlModule.add_type<XrdCl::DirectoryList::ListEntry>("XrdCl!DirectoryList!ListEntry");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<XrdCl::DirectoryList::ListEntry>>(new jlcxx::TypeWrapper<XrdCl::DirectoryList::ListEntry>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void XrdCl::DirectoryList::ListEntry::ListEntry(const std::string &, const std::string &, XrdCl::StatInfo *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:662:11
    t.constructor<const std::string &, const std::string &>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<const std::string &, const std::string &, XrdCl::StatInfo *>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for const std::string & XrdCl::DirectoryList::ListEntry::GetHostAddress() (" __HERE__ ")");
    // signature to use in the veto list: const std::string & XrdCl::DirectoryList::ListEntry::GetHostAddress()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:681:30
    t.method("GetHostAddress", static_cast<const std::string & (XrdCl::DirectoryList::ListEntry::*)()  const>(&XrdCl::DirectoryList::ListEntry::GetHostAddress));

    DEBUG_MSG("Adding wrapper for const std::string & XrdCl::DirectoryList::ListEntry::GetName() (" __HERE__ ")");
    // signature to use in the veto list: const std::string & XrdCl::DirectoryList::ListEntry::GetName()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:689:30
    t.method("GetName", static_cast<const std::string & (XrdCl::DirectoryList::ListEntry::*)()  const>(&XrdCl::DirectoryList::ListEntry::GetName));

    DEBUG_MSG("Adding wrapper for XrdCl::StatInfo * XrdCl::DirectoryList::ListEntry::GetStatInfo() (" __HERE__ ")");
    // signature to use in the veto list: XrdCl::StatInfo * XrdCl::DirectoryList::ListEntry::GetStatInfo()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:697:21
    t.method("GetStatInfo", static_cast<XrdCl::StatInfo * (XrdCl::DirectoryList::ListEntry::*)() >(&XrdCl::DirectoryList::ListEntry::GetStatInfo));

    DEBUG_MSG("Adding wrapper for const XrdCl::StatInfo * XrdCl::DirectoryList::ListEntry::GetStatInfo() (" __HERE__ ")");
    // signature to use in the veto list: const XrdCl::StatInfo * XrdCl::DirectoryList::ListEntry::GetStatInfo()
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:705:27
    t.method("GetStatInfo", static_cast<const XrdCl::StatInfo * (XrdCl::DirectoryList::ListEntry::*)()  const>(&XrdCl::DirectoryList::ListEntry::GetStatInfo));

    DEBUG_MSG("Adding wrapper for void XrdCl::DirectoryList::ListEntry::SetStatInfo(XrdCl::StatInfo *) (" __HERE__ ")");
    // signature to use in the veto list: void XrdCl::DirectoryList::ListEntry::SetStatInfo(XrdCl::StatInfo *)
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClXRootDResponses.hh:713:16
    t.method("SetStatInfo", static_cast<void (XrdCl::DirectoryList::ListEntry::*)(XrdCl::StatInfo *) >(&XrdCl::DirectoryList::ListEntry::SetStatInfo));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<XrdCl::DirectoryList::ListEntry>> type_;
};
std::shared_ptr<Wrapper> newJlXrdCl_DirectoryList_ListEntry(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlXrdCl_DirectoryList_ListEntry(module));
}
