// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct SimpleVarArgFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct SimpleVarArgFunction__Subscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Argument;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class SimpleVarArgFunction.Subscription :2181
// {
::g::Fuse::Reactive::InnerListener_type* SimpleVarArgFunction__Subscription_typeof();
void SimpleVarArgFunction__Subscription__ctor_1_fn(SimpleVarArgFunction__Subscription* __this, ::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener);
void SimpleVarArgFunction__Subscription__Dispose_fn(SimpleVarArgFunction__Subscription* __this);
void SimpleVarArgFunction__Subscription__New1_fn(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener, SimpleVarArgFunction__Subscription** __retval);
void SimpleVarArgFunction__Subscription__OnNewData_fn(SimpleVarArgFunction__Subscription* __this, uObject* source, uObject* value);
void SimpleVarArgFunction__Subscription__PushData_fn(SimpleVarArgFunction__Subscription* __this);

struct SimpleVarArgFunction__Subscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong<uArray*> _arguments;
    uStrong< ::g::Fuse::Reactive::SimpleVarArgFunction*> _func;
    uStrong<uObject*> _listener;

    void ctor_1(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener);
    void PushData();
    static SimpleVarArgFunction__Subscription* New1(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
