// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlXRootD.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<XrdCl::AnyObject> : std::false_type { };
  template<> struct DefaultConstructible<XrdCl::AnyObject> : std::false_type { };
}

// Class generating the wrapper for type XrdCl::AnyObject
// signature to use in the veto file: XrdCl::AnyObject
struct JlXrdCl_AnyObject: public Wrapper {

  JlXrdCl_AnyObject(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type XrdCl::AnyObject (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/8520a52585f5eadf78b58f2d486d1abb34f514f1/include/xrootd/XrdCl/XrdClAnyObject.hh:32:9
    jlcxx::TypeWrapper<XrdCl::AnyObject>  t = jlModule.add_type<XrdCl::AnyObject>("XrdCl!AnyObject");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<XrdCl::AnyObject>>(new jlcxx::TypeWrapper<XrdCl::AnyObject>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<XrdCl::AnyObject>> type_;
};
std::shared_ptr<Wrapper> newJlXrdCl_AnyObject(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlXrdCl_AnyObject(module));
}
