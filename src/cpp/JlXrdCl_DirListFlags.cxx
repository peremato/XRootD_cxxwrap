// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlXRootD.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<XrdCl::DirListFlags> : std::false_type { };
  template<> struct DefaultConstructible<XrdCl::DirListFlags> : std::false_type { };
}

// Class generating the wrapper for type XrdCl::DirListFlags
// signature to use in the veto file: XrdCl::DirListFlags
struct JlXrdCl_DirListFlags: public Wrapper {

  JlXrdCl_DirListFlags(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type XrdCl::DirListFlags (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClFileSystem.hh:153:10
    jlcxx::TypeWrapper<XrdCl::DirListFlags>  t = jlModule.add_type<XrdCl::DirListFlags>("XrdCl!DirListFlags");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<XrdCl::DirListFlags>>(new jlcxx::TypeWrapper<XrdCl::DirListFlags>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<XrdCl::DirListFlags>> type_;
};
std::shared_ptr<Wrapper> newJlXrdCl_DirListFlags(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlXrdCl_DirListFlags(module));
}
