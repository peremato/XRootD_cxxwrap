// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlXRootD.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<XrdCl::Access> : std::false_type { };
  template<> struct DefaultConstructible<XrdCl::Access> : std::false_type { };
}

// Class generating the wrapper for type XrdCl::Access
// signature to use in the veto file: XrdCl::Access
struct JlXrdCl_Access: public Wrapper {

  JlXrdCl_Access(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type XrdCl::Access (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClFileSystem.hh:116:10
    jlcxx::TypeWrapper<XrdCl::Access>  t = jlModule.add_type<XrdCl::Access>("XrdCl!Access");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<XrdCl::Access>>(new jlcxx::TypeWrapper<XrdCl::Access>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<XrdCl::Access>> type_;
};
std::shared_ptr<Wrapper> newJlXrdCl_Access(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlXrdCl_Access(module));
}
