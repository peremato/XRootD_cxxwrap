// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlXRootD.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<XrdCl::QueryCode> : std::false_type { };
  template<> struct DefaultConstructible<XrdCl::QueryCode> : std::false_type { };
}

// Class generating the wrapper for type XrdCl::QueryCode
// signature to use in the veto file: XrdCl::QueryCode
struct JlXrdCl_QueryCode: public Wrapper {

  JlXrdCl_QueryCode(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type XrdCl::QueryCode (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClFileSystem.hh:47:10
    jlcxx::TypeWrapper<XrdCl::QueryCode>  t = jlModule.add_type<XrdCl::QueryCode>("XrdCl!QueryCode");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<XrdCl::QueryCode>>(new jlcxx::TypeWrapper<XrdCl::QueryCode>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<XrdCl::QueryCode>> type_;
};
std::shared_ptr<Wrapper> newJlXrdCl_QueryCode(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlXrdCl_QueryCode(module));
}
