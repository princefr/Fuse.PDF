// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Attract;}}}
namespace g{namespace Fuse{namespace Animations{struct Attract__Subscription;}}}
namespace g{namespace Fuse{namespace Animations{struct DestinationBehavior;}}}

namespace g{
namespace Fuse{
namespace Animations{

// private sealed class Attract.Subscription :209
// {
struct Attract__Subscription_type : uType
{
    ::g::Fuse::Reactive::IListener interface0;
    ::g::Uno::IDisposable interface1;
};

Attract__Subscription_type* Attract__Subscription_typeof();
void Attract__Subscription__ctor__fn(Attract__Subscription* __this, ::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target);
void Attract__Subscription__CleanSimulation_fn(Attract__Subscription* __this);
void Attract__Subscription__Dispose_fn(Attract__Subscription* __this);
void Attract__Subscription__FuseReactiveIListenerOnNewData_fn(Attract__Subscription* __this, uObject* source, uObject* oValue);
void Attract__Subscription__NeedSim_fn(Attract__Subscription* __this, int* size);
void Attract__Subscription__New1_fn(::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target, Attract__Subscription** __retval);
void Attract__Subscription__OnValueUpdate_fn(Attract__Subscription* __this, uType* __type, void* value);
void Attract__Subscription__OnValueUpdate1_fn(Attract__Subscription* __this, float* value);
void Attract__Subscription__OnValueUpdate2_fn(Attract__Subscription* __this, ::g::Uno::Float2* value);
void Attract__Subscription__OnValueUpdate3_fn(Attract__Subscription* __this, ::g::Uno::Float3* value);
void Attract__Subscription__OnValueUpdate4_fn(Attract__Subscription* __this, ::g::Uno::Float4* value);

struct Attract__Subscription : uObject
{
    uStrong< ::g::Fuse::Animations::Attract*> _attract;
    int _simSize;
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _simulation1;
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _simulation2;
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _simulation3;
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _simulation4;
    uStrong<uObject*> _sourceSub;
    uStrong<uObject*> _target;

    void ctor_(::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target);
    void CleanSimulation();
    void Dispose();
    void NeedSim(int size);
    template<class T>
    void OnValueUpdate(uType* __type, T value) { Attract__Subscription__OnValueUpdate_fn(this, __type, uConstrain(__type->U(0), value)); }
    void OnValueUpdate1(float value);
    void OnValueUpdate2(::g::Uno::Float2 value);
    void OnValueUpdate3(::g::Uno::Float3 value);
    void OnValueUpdate4(::g::Uno::Float4 value);
    static Attract__Subscription* New1(::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target);
};
// }

}}} // ::g::Fuse::Animations
