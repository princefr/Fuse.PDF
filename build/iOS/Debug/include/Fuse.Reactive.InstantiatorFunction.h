// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Reactive{struct InstantiatorFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class InstantiatorFunction :2289
// {
::g::Fuse::Reactive::Expression_type* InstantiatorFunction_typeof();
void InstantiatorFunction__Subscribe_fn(InstantiatorFunction* __this, uObject* context, uObject* listener, uObject** __retval);
void InstantiatorFunction__ToString_fn(InstantiatorFunction* __this, uString** __retval);

struct InstantiatorFunction : ::g::Fuse::Reactive::VarArgFunction
{
    ::g::Uno::UX::Selector _item;
    static ::g::Uno::UX::Selector DataIndexName_;
    static ::g::Uno::UX::Selector& DataIndexName() { return InstantiatorFunction_typeof()->Init(), DataIndexName_; }
    static ::g::Uno::UX::Selector OffsetIndexName_;
    static ::g::Uno::UX::Selector& OffsetIndexName() { return InstantiatorFunction_typeof()->Init(), OffsetIndexName_; }
};
// }

}}} // ::g::Fuse::Reactive
