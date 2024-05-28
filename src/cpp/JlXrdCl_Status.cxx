// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlXRootD.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<XrdCl::Status> : std::false_type { };
  template<> struct DefaultConstructible<XrdCl::Status> : std::false_type { };
}

// Class generating the wrapper for type XrdCl::Status
// signature to use in the veto file: XrdCl::Status
struct JlXrdCl_Status: public Wrapper {

  JlXrdCl_Status(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type XrdCl::Status (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:114:10
    jlcxx::TypeWrapper<XrdCl::Status>  t = jlModule.add_type<XrdCl::Status>("XrdCl!Status");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<XrdCl::Status>>(new jlcxx::TypeWrapper<XrdCl::Status>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void XrdCl::Status::Status(uint16_t, uint16_t, uint32_t) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:119:5
    t.constructor<uint16_t>(/*finalize=*/true);
    t.constructor<uint16_t, uint16_t>(/*finalize=*/true);
    t.constructor<uint16_t, uint16_t, uint32_t>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for bool XrdCl::Status::IsError() (" __HERE__ ")");
    // signature to use in the veto list: bool XrdCl::Status::IsError()
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:122:10
    t.method("IsError", static_cast<bool (XrdCl::Status::*)()  const>(&XrdCl::Status::IsError));

    DEBUG_MSG("Adding wrapper for bool XrdCl::Status::IsFatal() (" __HERE__ ")");
    // signature to use in the veto list: bool XrdCl::Status::IsFatal()
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:123:10
    t.method("IsFatal", static_cast<bool (XrdCl::Status::*)()  const>(&XrdCl::Status::IsFatal));

    DEBUG_MSG("Adding wrapper for bool XrdCl::Status::IsOK() (" __HERE__ ")");
    // signature to use in the veto list: bool XrdCl::Status::IsOK()
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:124:10
    t.method("IsOK", static_cast<bool (XrdCl::Status::*)()  const>(&XrdCl::Status::IsOK));

    DEBUG_MSG("Adding wrapper for int XrdCl::Status::GetShellCode() (" __HERE__ ")");
    // signature to use in the veto list: int XrdCl::Status::GetShellCode()
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:129:9
    t.method("GetShellCode", static_cast<int (XrdCl::Status::*)()  const>(&XrdCl::Status::GetShellCode));

    DEBUG_MSG("Adding wrapper for bool XrdCl::Status::IsSocketError(uint16_t) (" __HERE__ ")");
    // signature to use in the veto list: bool XrdCl::Status::IsSocketError(uint16_t)
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:136:24
    module_.method("XrdCl!Status!IsSocketError", static_cast<bool (*)(uint16_t) >(&XrdCl::Status::IsSocketError));

    DEBUG_MSG("Adding wrapper for std::string XrdCl::Status::ToString() (" __HERE__ ")");
    // signature to use in the veto list: std::string XrdCl::Status::ToString()
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:144:17
    t.method("ToString", static_cast<std::string (XrdCl::Status::*)()  const>(&XrdCl::Status::ToString));

    DEBUG_MSG("Adding status methods  to provide read access to the field status (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:146:14
    // signature to use in the veto list: XrdCl::Status::status
    t.method("status", [](const XrdCl::Status& a) -> uint16_t { return a.status; });
    t.method("status", [](XrdCl::Status& a) -> uint16_t { return a.status; });
    t.method("status", [](const XrdCl::Status* a) -> uint16_t { return a->status; });
    t.method("status", [](XrdCl::Status* a) -> uint16_t { return a->status; });
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:146:14
    // signature to use in the veto list: XrdCl::Status::status
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding status! methods to provide write access to the field status (" __HERE__ ")");
    t.method("status!", [](XrdCl::Status& a, uint16_t val) -> uint16_t { return a.status = val; });

    DEBUG_MSG("Adding status! methods to provide write access to the field status (" __HERE__ ")");
    t.method("status!", [](XrdCl::Status* a, uint16_t val) -> uint16_t { return a->status = val; });

    DEBUG_MSG("Adding code methods  to provide read access to the field code (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:147:14
    // signature to use in the veto list: XrdCl::Status::code
    t.method("code", [](const XrdCl::Status& a) -> uint16_t { return a.code; });
    t.method("code", [](XrdCl::Status& a) -> uint16_t { return a.code; });
    t.method("code", [](const XrdCl::Status* a) -> uint16_t { return a->code; });
    t.method("code", [](XrdCl::Status* a) -> uint16_t { return a->code; });
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:147:14
    // signature to use in the veto list: XrdCl::Status::code
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding code! methods to provide write access to the field code (" __HERE__ ")");
    t.method("code!", [](XrdCl::Status& a, uint16_t val) -> uint16_t { return a.code = val; });

    DEBUG_MSG("Adding code! methods to provide write access to the field code (" __HERE__ ")");
    t.method("code!", [](XrdCl::Status* a, uint16_t val) -> uint16_t { return a->code = val; });

    DEBUG_MSG("Adding errNo methods  to provide read access to the field errNo (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:148:14
    // signature to use in the veto list: XrdCl::Status::errNo
    t.method("errNo", [](const XrdCl::Status& a) -> uint32_t { return a.errNo; });
    t.method("errNo", [](XrdCl::Status& a) -> uint32_t { return a.errNo; });
    t.method("errNo", [](const XrdCl::Status* a) -> uint32_t { return a->errNo; });
    t.method("errNo", [](XrdCl::Status* a) -> uint32_t { return a->errNo; });
    // defined in /Users/mato/.julia/artifacts/d6b4bfcd1db9f33711a4c083d9d997b32d266141/include/xrootd/XrdCl/XrdClStatus.hh:148:14
    // signature to use in the veto list: XrdCl::Status::errNo
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding errNo! methods to provide write access to the field errNo (" __HERE__ ")");
    t.method("errNo!", [](XrdCl::Status& a, uint32_t val) -> uint32_t { return a.errNo = val; });

    DEBUG_MSG("Adding errNo! methods to provide write access to the field errNo (" __HERE__ ")");
    t.method("errNo!", [](XrdCl::Status* a, uint32_t val) -> uint32_t { return a->errNo = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<XrdCl::Status>> type_;
};
std::shared_ptr<Wrapper> newJlXrdCl_Status(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlXrdCl_Status(module));
}
