// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.Easing.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Fuse.Internal.Statistics.h>
#include <Fuse.Motion.MotionUnit.h>
#include <Fuse.Motion.OverflowType.h>
#include <Fuse.Motion.Simulation.AdapterMultiplier-1.h>
#include <Fuse.Motion.Simulation.AngularAdapter-1.h>
#include <Fuse.Motion.Simulation.BasicBoundedRegion2D.h>
#include <Fuse.Motion.Simulation.BasicBoundedRegion2D.MoveMode.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.EasingMotion-1.h>
#include <Fuse.Motion.Simulation.ElasticForce-1.h>
#include <Fuse.Motion.Simulation.Friction-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Motion.Simulation.SmoothSnap-1.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[8];

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// internal sealed class AdapterMultiplier<T> :94
// {
static void AdapterMultiplier_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof();
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(1/*GetScalar<T>*/, type->T(0), NULL),
        type->T(0),
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(type->T(0), NULL), offsetof(AdapterMultiplier_type, interface0),
        ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(type->T(0), NULL), offsetof(AdapterMultiplier_type, interface1),
        ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/], offsetof(AdapterMultiplier_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Motion::Simulation::AdapterMultiplier, _blender), 0,
        ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Motion::Simulation::AdapterMultiplier, _impl), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Motion::Simulation::AdapterMultiplier, _multiplier), 0);
}

AdapterMultiplier_type* AdapterMultiplier_typeof()
{
    static uSStrong<AdapterMultiplier_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(AdapterMultiplier);
    options.TypeSize = sizeof(AdapterMultiplier_type);
    type = (AdapterMultiplier_type*)uClassType::New("Fuse.Motion.Simulation.AdapterMultiplier`1", options);
    type->fp_build_ = AdapterMultiplier_build;
    type->interface0.fp_Reset = (void(*)(uObject*, void*))AdapterMultiplier__Reset_fn;
    type->interface0.fp_Start = (void(*)(uObject*))AdapterMultiplier__Start_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))AdapterMultiplier__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))AdapterMultiplier__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))AdapterMultiplier__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))AdapterMultiplier__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))AdapterMultiplier__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))AdapterMultiplier__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))AdapterMultiplier__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))AdapterMultiplier__get_IsStatic_fn;
    return type;
}

// public AdapterMultiplier(Fuse.Motion.Simulation.DestinationSimulation<T> impl, double multiplier) :100
void AdapterMultiplier__ctor__fn(AdapterMultiplier* __this, uObject* impl, double* multiplier)
{
    __this->ctor_(impl, *multiplier);
}

// public T get_Destination() :140
void AdapterMultiplier__get_Destination_fn(AdapterMultiplier* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((AdapterMultiplier__Out_fn(__this, (::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(__this->_impl), __types[1]), &ret5), ret5), &ret4), ret4)), void();
}

// public void set_Destination(T value) :141
void AdapterMultiplier__set_Destination_fn(AdapterMultiplier* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(__this->_impl), __types[1]), (AdapterMultiplier__In_fn(__this, value, &ret6), ret6));
}

// private T In(T val) :116
void AdapterMultiplier__In_fn(AdapterMultiplier* __this, void* val, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Fuse::Internal::Blender__ScalarMult_fn(uPtr(__this->_blender), val, uCRef(__this->_multiplier), &ret2), ret2)), void();
}

// public bool get_IsStatic() :108
void AdapterMultiplier__get_IsStatic_fn(AdapterMultiplier* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public AdapterMultiplier New(Fuse.Motion.Simulation.DestinationSimulation<T> impl, double multiplier) :100
void AdapterMultiplier__New1_fn(uType* __type, uObject* impl, double* multiplier, AdapterMultiplier** __retval)
{
    *__retval = AdapterMultiplier::New1(__type, impl, *multiplier);
}

// private T Out(T val) :121
void AdapterMultiplier__Out_fn(AdapterMultiplier* __this, void* val, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Fuse::Internal::Blender__ScalarMult_fn(uPtr(__this->_blender), val, uCRef(1.0 / __this->_multiplier), &ret3), ret3)), void();
}

// public T get_Position() :128
void AdapterMultiplier__get_Position_fn(AdapterMultiplier* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
        __this->__type->Precalced(3/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((AdapterMultiplier__Out_fn(__this, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_impl), __types[1]), &ret8), ret8), &ret7), ret7)), void();
}

// public void set_Position(T value) :129
void AdapterMultiplier__set_Position_fn(AdapterMultiplier* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
        __this->__type->Precalced(3/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_impl), __types[1]), (AdapterMultiplier__In_fn(__this, value, &ret9), ret9));
}

// public void Reset(T value) :144
void AdapterMultiplier__Reset_fn(AdapterMultiplier* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_impl), __types[0]), value);
}

// public void Start() :149
void AdapterMultiplier__Start_fn(AdapterMultiplier* __this)
{
    __this->Start();
}

// public void Update(double elapsed) :111
void AdapterMultiplier__Update_fn(AdapterMultiplier* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public T get_Velocity() :134
void AdapterMultiplier__get_Velocity_fn(AdapterMultiplier* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
        __this->__type->Precalced(3/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((AdapterMultiplier__Out_fn(__this, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(__this->_impl), __types[1]), &ret11), ret11), &ret10), ret10)), void();
}

// public void set_Velocity(T value) :135
void AdapterMultiplier__set_Velocity_fn(AdapterMultiplier* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
        __this->__type->Precalced(3/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(__this->_impl), __types[1]), (AdapterMultiplier__In_fn(__this, value, &ret12), ret12));
}

// public AdapterMultiplier(Fuse.Motion.Simulation.DestinationSimulation<T> impl, double multiplier) [instance] :100
void AdapterMultiplier::ctor_(uObject* impl, double multiplier)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.GetScalar<T>*/),
    };
    _blender = ((::g::Fuse::Internal::ScalarBlender*)::g::Fuse::Internal::BlenderMap::GetScalar(__types[0]));
    _impl = impl;
    _multiplier = multiplier;
}

// public bool get_IsStatic() [instance] :108
bool AdapterMultiplier::IsStatic()
{
    return ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_impl), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]));
}

// public void Start() [instance] :149
void AdapterMultiplier::Start()
{
    uType* __types[] = {
        __type->Precalced(2/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Start(uInterface(uPtr(_impl), __types[0]));
}

// public void Update(double elapsed) [instance] :111
void AdapterMultiplier::Update(double elapsed)
{
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_impl), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]), elapsed);
}

// public AdapterMultiplier New(Fuse.Motion.Simulation.DestinationSimulation<T> impl, double multiplier) [static] :100
AdapterMultiplier* AdapterMultiplier::New1(uType* __type, uObject* impl, double multiplier)
{
    AdapterMultiplier* obj1 = (AdapterMultiplier*)uNew(__type);
    obj1->ctor_(impl, multiplier);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// internal sealed class AngularAdapter<T> :10
// {
static void AngularAdapter_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof();
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(1/*GetScalar<T>*/, type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), NULL),
        type->T(0),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(type->T(0), NULL), offsetof(AngularAdapter_type, interface0),
        ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(type->T(0), NULL), offsetof(AngularAdapter_type, interface1),
        ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/], offsetof(AngularAdapter_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Motion::Simulation::AngularAdapter, _blender), 0,
        ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Motion::Simulation::AngularAdapter, _impl), 0);
}

AngularAdapter_type* AngularAdapter_typeof()
{
    static uSStrong<AngularAdapter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(AngularAdapter);
    options.TypeSize = sizeof(AngularAdapter_type);
    type = (AngularAdapter_type*)uClassType::New("Fuse.Motion.Simulation.AngularAdapter`1", options);
    type->fp_build_ = AngularAdapter_build;
    type->interface0.fp_Reset = (void(*)(uObject*, void*))AngularAdapter__Reset_fn;
    type->interface0.fp_Start = (void(*)(uObject*))AngularAdapter__Start_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))AngularAdapter__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))AngularAdapter__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))AngularAdapter__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))AngularAdapter__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))AngularAdapter__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))AngularAdapter__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))AngularAdapter__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))AngularAdapter__get_IsStatic_fn;
    return type;
}

// public AngularAdapter(Fuse.Motion.Simulation.DestinationSimulation<T> impl) :14
void AngularAdapter__ctor__fn(AngularAdapter* __this, uObject* impl)
{
    __this->ctor_(impl);
}

// public T get_Destination() :52
void AngularAdapter__get_Destination_fn(AngularAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*T*/),
        __this->__type->Precalced(1/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(__this->_impl), __types[1]), &ret7), ret7)), void();
}

// public void set_Destination(T value) :53
void AngularAdapter__set_Destination_fn(AngularAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(__this->_impl), __types[0]), value);
    __this->Wrap();
}

// public bool get_IsStatic() :23
void AngularAdapter__get_IsStatic_fn(AngularAdapter* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public AngularAdapter New(Fuse.Motion.Simulation.DestinationSimulation<T> impl) :14
void AngularAdapter__New1_fn(uType* __type, uObject* impl, AngularAdapter** __retval)
{
    *__retval = AngularAdapter::New1(__type, impl);
}

// public T get_Position() :33
void AngularAdapter__get_Position_fn(AngularAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*T*/),
        __this->__type->Precalced(3/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_impl), __types[1]), &ret8), ret8)), void();
}

// public void set_Position(T value) :34
void AngularAdapter__set_Position_fn(AngularAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_impl), __types[0]), value);
    __this->Wrap();
}

// public void Reset(T value) :60
void AngularAdapter__Reset_fn(AngularAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_impl), __types[0]), value);
}

// public void Start() :65
void AngularAdapter__Start_fn(AngularAdapter* __this)
{
    __this->Start();
}

// public void Update(double elapsed) :26
void AngularAdapter__Update_fn(AngularAdapter* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public T get_Velocity() :43
void AngularAdapter__get_Velocity_fn(AngularAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*T*/),
        __this->__type->Precalced(3/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(__this->_impl), __types[1]), &ret9), ret9)), void();
}

// public void set_Velocity(T value) :44
void AngularAdapter__set_Velocity_fn(AngularAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(__this->_impl), __types[0]), value);
}

// private void Wrap() :74
void AngularAdapter__Wrap_fn(AngularAdapter* __this)
{
    __this->Wrap();
}

// public AngularAdapter(Fuse.Motion.Simulation.DestinationSimulation<T> impl) [instance] :14
void AngularAdapter::ctor_(uObject* impl)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.GetScalar<T>*/),
    };
    _blender = ((::g::Fuse::Internal::ScalarBlender*)::g::Fuse::Internal::BlenderMap::GetScalar(__types[0]));
    _impl = impl;
}

// public bool get_IsStatic() [instance] :23
bool AngularAdapter::IsStatic()
{
    return ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_impl), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]));
}

// public void Start() [instance] :65
void AngularAdapter::Start()
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Start(uInterface(uPtr(_impl), __types[0]));
}

// public void Update(double elapsed) [instance] :26
void AngularAdapter::Update(double elapsed)
{
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_impl), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]), elapsed);
}

// private void Wrap() [instance] :74
void AngularAdapter::Wrap()
{
    uType* __types[] = {
        __type->Precalced(2/*T*/),
        __type->Precalced(3/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
        __type->Precalced(1/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret2;
    double ret4;
    double pos = (uPtr(_blender)->ToDouble_ex((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_impl), __types[1]), &ret3), ret3), &ret2), ret2);
    double dst = (uPtr(_blender)->ToDouble_ex((::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(_impl), __types[2]), &ret5), ret5), &ret4), ret4);
    double rpos = ::g::Uno::Math::Mod(pos, 6.2831853071795862);
    double rdst = ::g::Uno::Math::Mod(dst, 6.2831853071795862);
    double diff = rpos - rdst;

    if (diff > 3.1415926535897931)
        diff = diff - 6.2831853071795862;
    else if (diff < -3.1415926535897931)
        diff = diff + 6.2831853071795862;

    double npos = dst + diff;
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_impl), __types[1]), (uPtr(_blender)->FromDouble_ex(uCRef(npos), &ret6), ret6));
}

// public AngularAdapter New(Fuse.Motion.Simulation.DestinationSimulation<T> impl) [static] :14
AngularAdapter* AngularAdapter::New1(uType* __type, uObject* impl)
{
    AngularAdapter* obj1 = (AngularAdapter*)uNew(__type);
    obj1->ctor_(impl);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// internal sealed class BasicBoundedRegion2D :185
// {
static void BasicBoundedRegion2D_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Motion::Simulation::Friction_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Motion::Simulation::SmoothSnap_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[7] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(BasicBoundedRegion2D_type, interface0),
        ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/], offsetof(BasicBoundedRegion2D_type, interface1),
        ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/], offsetof(BasicBoundedRegion2D_type, interface2));
    type->SetFields(0,
        ::TYPES[7/*Fuse.Motion.Simulation.DestinationSimulation<float2>*/], offsetof(::g::Fuse::Motion::Simulation::BasicBoundedRegion2D, _destination), 0,
        ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/], offsetof(::g::Fuse::Motion::Simulation::BasicBoundedRegion2D, _friction), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Motion::Simulation::BasicBoundedRegion2D, _maxPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Motion::Simulation::BasicBoundedRegion2D, _minPosition), 0,
        BasicBoundedRegion2D__MoveMode_typeof(), offsetof(::g::Fuse::Motion::Simulation::BasicBoundedRegion2D, _moveMode), 0,
        ::g::Fuse::Motion::OverflowType_typeof(), offsetof(::g::Fuse::Motion::Simulation::BasicBoundedRegion2D, _overflow), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Motion::Simulation::BasicBoundedRegion2D, _overflowExtent), 0,
        ::TYPES[7/*Fuse.Motion.Simulation.DestinationSimulation<float2>*/], offsetof(::g::Fuse::Motion::Simulation::BasicBoundedRegion2D, _snap), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Motion::Simulation::BasicBoundedRegion2D, _velocity), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Motion::Simulation::BasicBoundedRegion2D, _Position), 0);
}

BasicBoundedRegion2D_type* BasicBoundedRegion2D_typeof()
{
    static uSStrong<BasicBoundedRegion2D_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(BasicBoundedRegion2D);
    options.TypeSize = sizeof(BasicBoundedRegion2D_type);
    type = (BasicBoundedRegion2D_type*)uClassType::New("Fuse.Motion.Simulation.BasicBoundedRegion2D", options);
    type->fp_build_ = BasicBoundedRegion2D_build;
    type->fp_ctor_ = (void*)BasicBoundedRegion2D__New1_fn;
    type->interface0.fp_StartUser = (void(*)(uObject*))BasicBoundedRegion2D__StartUser_fn;
    type->interface0.fp_StepUser = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__StepUser_fn;
    type->interface0.fp_EndUser = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__EndUser_fn;
    type->interface0.fp_MoveTo = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__MoveTo_fn;
    type->interface0.fp_Reset = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__Reset_fn;
    type->interface0.fp_get_MaxPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__get_MaxPosition_fn;
    type->interface0.fp_set_MaxPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__set_MaxPosition_fn;
    type->interface0.fp_get_MinPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__get_MinPosition_fn;
    type->interface0.fp_set_MinPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__set_MinPosition_fn;
    type->interface0.fp_get_IsUser = (void(*)(uObject*, bool*))BasicBoundedRegion2D__get_IsUser_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))BasicBoundedRegion2D__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))BasicBoundedRegion2D__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))BasicBoundedRegion2D__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))BasicBoundedRegion2D__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))BasicBoundedRegion2D__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))BasicBoundedRegion2D__get_IsStatic_fn;
    return type;
}

// internal BasicBoundedRegion2D() :215
void BasicBoundedRegion2D__ctor__fn(BasicBoundedRegion2D* __this)
{
    __this->ctor_();
}

// private float2 CalcOver(float2 sp) :511
void BasicBoundedRegion2D__CalcOver_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* sp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcOver(*sp);
}

// internal Fuse.Motion.Simulation.DestinationSimulation<float2> get_DestinationSimulation() :293
void BasicBoundedRegion2D__get_DestinationSimulation_fn(BasicBoundedRegion2D* __this, uObject** __retval)
{
    *__retval = __this->DestinationSimulation();
}

// internal void set_DestinationSimulation(Fuse.Motion.Simulation.DestinationSimulation<float2> value) :294
void BasicBoundedRegion2D__set_DestinationSimulation_fn(BasicBoundedRegion2D* __this, uObject* value)
{
    __this->DestinationSimulation(value);
}

// public void EndUser([float2 velocity]) :275
void BasicBoundedRegion2D__EndUser_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* velocity)
{
    __this->EndUser(*velocity);
}

// internal Fuse.Motion.Simulation.MotionSimulation<float2> get_FrictionSimulation() :354
void BasicBoundedRegion2D__get_FrictionSimulation_fn(BasicBoundedRegion2D* __this, uObject** __retval)
{
    *__retval = __this->FrictionSimulation();
}

// internal void set_FrictionSimulation(Fuse.Motion.Simulation.MotionSimulation<float2> value) :355
void BasicBoundedRegion2D__set_FrictionSimulation_fn(BasicBoundedRegion2D* __this, uObject* value)
{
    __this->FrictionSimulation(value);
}

// public bool get_IsStatic() :313
void BasicBoundedRegion2D__get_IsStatic_fn(BasicBoundedRegion2D* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public bool get_IsUser() :285
void BasicBoundedRegion2D__get_IsUser_fn(BasicBoundedRegion2D* __this, bool* __retval)
{
    *__retval = __this->IsUser();
}

// public float2 get_MaxPosition() :239
void BasicBoundedRegion2D__get_MaxPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MaxPosition();
}

// public void set_MaxPosition(float2 value) :240
void BasicBoundedRegion2D__set_MaxPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->MaxPosition(*value);
}

// public float2 get_MinPosition() :254
void BasicBoundedRegion2D__get_MinPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MinPosition();
}

// public void set_MinPosition(float2 value) :255
void BasicBoundedRegion2D__set_MinPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->MinPosition(*value);
}

// private void MoveDestination(double elapsed) :498
void BasicBoundedRegion2D__MoveDestination_fn(BasicBoundedRegion2D* __this, double* elapsed)
{
    __this->MoveDestination(*elapsed);
}

// private void MoveFriction(double elapsed) :357
void BasicBoundedRegion2D__MoveFriction_fn(BasicBoundedRegion2D* __this, double* elapsed)
{
    __this->MoveFriction(*elapsed);
}

// private bool MoveSnap(double elapsed, [bool X], [bool Y]) :464
void BasicBoundedRegion2D__MoveSnap_fn(BasicBoundedRegion2D* __this, double* elapsed, bool* X, bool* Y, bool* __retval)
{
    *__retval = __this->MoveSnap(*elapsed, *X, *Y);
}

// public void MoveTo(float2 target) :297
void BasicBoundedRegion2D__MoveTo_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* target)
{
    __this->MoveTo(*target);
}

// internal BasicBoundedRegion2D New() :215
void BasicBoundedRegion2D__New1_fn(BasicBoundedRegion2D** __retval)
{
    *__retval = BasicBoundedRegion2D::New1();
}

// public Fuse.Motion.OverflowType get_Overflow() :532
void BasicBoundedRegion2D__get_Overflow_fn(BasicBoundedRegion2D* __this, int* __retval)
{
    *__retval = __this->Overflow();
}

// public void set_Overflow(Fuse.Motion.OverflowType value) :533
void BasicBoundedRegion2D__set_Overflow_fn(BasicBoundedRegion2D* __this, int* value)
{
    __this->Overflow(*value);
}

// public float2 get_OverflowExtent() :261
void BasicBoundedRegion2D__get_OverflowExtent_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->OverflowExtent();
}

// public void set_OverflowExtent(float2 value) :262
void BasicBoundedRegion2D__set_OverflowExtent_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->OverflowExtent(*value);
}

// public generated float2 get_Position() :288
void BasicBoundedRegion2D__get_Position_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public generated void set_Position(float2 value) :288
void BasicBoundedRegion2D__set_Position_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public void Reset(float2 position) :219
void BasicBoundedRegion2D__Reset_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* position)
{
    __this->Reset(*position);
}

// private float2 SnapPosition(float2 prev, float2 next) :384
void BasicBoundedRegion2D__SnapPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* prev, ::g::Uno::Float2* next, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapPosition(*prev, *next);
}

// private void SnapSetPositionVelocity(float2 nextPosition, float2 nextVelocity) :377
void BasicBoundedRegion2D__SnapSetPositionVelocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* nextPosition, ::g::Uno::Float2* nextVelocity)
{
    __this->SnapSetPositionVelocity(*nextPosition, *nextVelocity);
}

// internal Fuse.Motion.Simulation.DestinationSimulation<float2> get_SnapSimulation() :460
void BasicBoundedRegion2D__get_SnapSimulation_fn(BasicBoundedRegion2D* __this, uObject** __retval)
{
    *__retval = __this->SnapSimulation();
}

// internal void set_SnapSimulation(Fuse.Motion.Simulation.DestinationSimulation<float2> value) :461
void BasicBoundedRegion2D__set_SnapSimulation_fn(BasicBoundedRegion2D* __this, uObject* value)
{
    __this->SnapSimulation(value);
}

// private float2 SnapVelocity(float2 position, float2 v) :419
void BasicBoundedRegion2D__SnapVelocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapVelocity(*position, *v);
}

// public void StartUser() :265
void BasicBoundedRegion2D__StartUser_fn(BasicBoundedRegion2D* __this)
{
    __this->StartUser();
}

// public void StepUser(float2 inOffset) :270
void BasicBoundedRegion2D__StepUser_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* inOffset)
{
    __this->StepUser(*inOffset);
}

// public void Update(double elapsed) :316
void BasicBoundedRegion2D__Update_fn(BasicBoundedRegion2D* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public float2 get_Velocity() :342
void BasicBoundedRegion2D__get_Velocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Velocity();
}

// public void set_Velocity(float2 value) :343
void BasicBoundedRegion2D__set_Velocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->Velocity(*value);
}

// internal BasicBoundedRegion2D() [instance] :215
void BasicBoundedRegion2D::ctor_()
{
    _maxPosition = ::g::Uno::Float2__New1(FLT_INF);
    _minPosition = ::g::Uno::Float2__New1(-FLT_INF);
    _overflowExtent = ::g::Uno::Float2__New1(150.0f);
    _friction = (uObject*)((::g::Fuse::Motion::Simulation::Friction*)::g::Fuse::Motion::Simulation::Friction::CreatePoints(::TYPES[4/*Fuse.Motion.Simulation.Friction<float2>*/]));
    _snap = (uObject*)((::g::Fuse::Motion::Simulation::SmoothSnap*)::g::Fuse::Motion::Simulation::SmoothSnap::CreatePoints(::TYPES[5/*Fuse.Motion.Simulation.SmoothSnap<float2>*/]));
    _overflow = 2;
}

// private float2 CalcOver(float2 sp) [instance] :511
::g::Uno::Float2 BasicBoundedRegion2D::CalcOver(::g::Uno::Float2 sp)
{
    ::g::Uno::Float2 min = MinPosition();
    ::g::Uno::Float2 max = MaxPosition();
    ::g::Uno::Float2 over = ::g::Uno::Float2__New1(0.0f);

    if (sp.X < min.X)
        over.X = (sp.X - min.X);
    else if (sp.X > max.X)
        over.X = (sp.X - max.X);

    if (sp.Y < min.Y)
        over.Y = (sp.Y - min.Y);
    else if (sp.Y > max.Y)
        over.Y = (sp.Y - max.Y);

    return over;
}

// internal Fuse.Motion.Simulation.DestinationSimulation<float2> get_DestinationSimulation() [instance] :293
uObject* BasicBoundedRegion2D::DestinationSimulation()
{
    return _destination;
}

// internal void set_DestinationSimulation(Fuse.Motion.Simulation.DestinationSimulation<float2> value) [instance] :294
void BasicBoundedRegion2D::DestinationSimulation(uObject* value)
{
    _destination = value;
}

// public void EndUser([float2 velocity]) [instance] :275
void BasicBoundedRegion2D::EndUser(::g::Uno::Float2 velocity)
{
    if (!IsUser())
        return;

    _velocity = SnapVelocity(Position(), velocity);
    _moveMode = 2;
}

// internal Fuse.Motion.Simulation.MotionSimulation<float2> get_FrictionSimulation() [instance] :354
uObject* BasicBoundedRegion2D::FrictionSimulation()
{
    return _friction;
}

// internal void set_FrictionSimulation(Fuse.Motion.Simulation.MotionSimulation<float2> value) [instance] :355
void BasicBoundedRegion2D::FrictionSimulation(uObject* value)
{
    _friction = value;
}

// public bool get_IsStatic() [instance] :313
bool BasicBoundedRegion2D::IsStatic()
{
    return (_moveMode == 0) || (_moveMode == 1);
}

// public bool get_IsUser() [instance] :285
bool BasicBoundedRegion2D::IsUser()
{
    return _moveMode == 1;
}

// public float2 get_MaxPosition() [instance] :239
::g::Uno::Float2 BasicBoundedRegion2D::MaxPosition()
{
    return _maxPosition;
}

// public void set_MaxPosition(float2 value) [instance] :240
void BasicBoundedRegion2D::MaxPosition(::g::Uno::Float2 value)
{
    ::g::Uno::Float2 ret12;

    if (::g::Uno::Float2__op_Equality(_maxPosition, value))
        return;

    _maxPosition = value;

    if (_moveMode == 4)
        ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_destination), ::TYPES[7/*Fuse.Motion.Simulation.DestinationSimulation<float2>*/]), uCRef(::g::Uno::Math::Clamp3((::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(_destination), ::TYPES[7/*Fuse.Motion.Simulation.DestinationSimulation<float2>*/]), &ret12), ret12), MinPosition(), MaxPosition())));
}

// public float2 get_MinPosition() [instance] :254
::g::Uno::Float2 BasicBoundedRegion2D::MinPosition()
{
    return _minPosition;
}

// public void set_MinPosition(float2 value) [instance] :255
void BasicBoundedRegion2D::MinPosition(::g::Uno::Float2 value)
{
    _minPosition = value;
}

// private void MoveDestination(double elapsed) [instance] :498
void BasicBoundedRegion2D::MoveDestination(double elapsed)
{
    ::g::Uno::Float2 ret2;
    ::g::Uno::Float2 ret3;
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_destination), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(Position()));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_destination), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(Velocity()));
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_destination), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]), elapsed);
    SnapSetPositionVelocity((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_destination), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret2), ret2), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_destination), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret3), ret3));

    if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_destination), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/])))
        _moveMode = 0;
}

// private void MoveFriction(double elapsed) [instance] :357
void BasicBoundedRegion2D::MoveFriction(double elapsed)
{
    ::g::Uno::Float2 ret4;
    ::g::Uno::Float2 ret5;
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_friction), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(_velocity));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_friction), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(Position()));
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_friction), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]), elapsed);
    SnapSetPositionVelocity((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_friction), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret4), ret4), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_friction), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret5), ret5));

    if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_friction), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/])))
    {
        _moveMode = 3;
        return;
    }

    MoveSnap(elapsed, ::g::Uno::Math::Abs1(_velocity.X) < 1e-05f, ::g::Uno::Math::Abs1(_velocity.Y) < 1e-05f);
}

// private bool MoveSnap(double elapsed, [bool X], [bool Y]) [instance] :464
bool BasicBoundedRegion2D::MoveSnap(double elapsed, bool X, bool Y)
{
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float2 ret7;
    ::g::Uno::Float2 ret8;
    ::g::Uno::Float2 ret9;
    ::g::Uno::Float2 ret10;
    ::g::Uno::Float2 over = CalcOver(Position());
    float off = ::g::Uno::Vector::Length(over);

    if (off <= 0.0f)
        return true;

    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_snap), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(Position()));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_snap), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(Velocity()));
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_snap), ::TYPES[7/*Fuse.Motion.Simulation.DestinationSimulation<float2>*/]), uCRef(::g::Uno::Float2__op_Subtraction2(Position(), over)));
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_snap), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]), elapsed);
    Position((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_snap), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret6), ret6));
    ::g::Uno::Float2 nv = Velocity();
    ::g::Uno::Float2 np = Position();

    if (X)
    {
        nv.X = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_snap), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret7), ret7).X;
        np.X = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_snap), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret8), ret8).X;
    }

    if (Y)
    {
        nv.Y = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_snap), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret9), ret9).Y;
        np.Y = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_snap), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret10), ret10).Y;
    }

    Velocity(nv);
    Position(np);
    return ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_snap), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]));
}

// public void MoveTo(float2 target) [instance] :297
void BasicBoundedRegion2D::MoveTo(::g::Uno::Float2 target)
{
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_destination), ::TYPES[7/*Fuse.Motion.Simulation.DestinationSimulation<float2>*/]), uCRef(::g::Uno::Math::Clamp3(target, MinPosition(), MaxPosition())));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_destination), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(Position()));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_destination), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(Velocity()));
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Start(uInterface(uPtr(_destination), ::TYPES[7/*Fuse.Motion.Simulation.DestinationSimulation<float2>*/]));
    _moveMode = 4;
}

// public Fuse.Motion.OverflowType get_Overflow() [instance] :532
int BasicBoundedRegion2D::Overflow()
{
    return _overflow;
}

// public void set_Overflow(Fuse.Motion.OverflowType value) [instance] :533
void BasicBoundedRegion2D::Overflow(int value)
{
    _overflow = value;
}

// public float2 get_OverflowExtent() [instance] :261
::g::Uno::Float2 BasicBoundedRegion2D::OverflowExtent()
{
    return _overflowExtent;
}

// public void set_OverflowExtent(float2 value) [instance] :262
void BasicBoundedRegion2D::OverflowExtent(::g::Uno::Float2 value)
{
    _overflowExtent = value;
}

// public generated float2 get_Position() [instance] :288
::g::Uno::Float2 BasicBoundedRegion2D::Position()
{
    return _Position;
}

// public generated void set_Position(float2 value) [instance] :288
void BasicBoundedRegion2D::Position(::g::Uno::Float2 value)
{
    _Position = value;
}

// public void Reset(float2 position) [instance] :219
void BasicBoundedRegion2D::Reset(::g::Uno::Float2 position)
{
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(_destination), ::TYPES[7/*Fuse.Motion.Simulation.DestinationSimulation<float2>*/]), uCRef(position));
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(_snap), ::TYPES[7/*Fuse.Motion.Simulation.DestinationSimulation<float2>*/]), uCRef(position));
    _moveMode = 0;
}

// private float2 SnapPosition(float2 prev, float2 next) [instance] :384
::g::Uno::Float2 BasicBoundedRegion2D::SnapPosition(::g::Uno::Float2 prev, ::g::Uno::Float2 next)
{
    switch (Overflow())
    {
        case 0:
            return next;
        case 1:
            return ::g::Uno::Math::Clamp3(next, MinPosition(), MaxPosition());
        case 2:
        {
            ::g::Uno::Float2 over = CalcOver(next);

            if ((::g::Uno::Math::Abs1(over.X) + ::g::Uno::Math::Abs1(over.Y)) < 1e-05f)
                return next;

            ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(next, prev);
            ::g::Uno::Float2 f = ::g::Uno::Math::Clamp3(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New1(1.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Math::Abs2(over), _overflowExtent)), ::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__New1(1.0f));
            ::g::Uno::Float2 mod = ::g::Uno::Float2__op_Addition2(prev, ::g::Uno::Float2__op_Multiply2(diff, f));
            ::g::Uno::Float2 modOver = CalcOver(mod);

            if (::g::Uno::Math::Abs1(next.X) < ::g::Uno::Math::Abs1(modOver.X))
                mod.X = next.X;

            if (::g::Uno::Math::Abs1(next.Y) < ::g::Uno::Math::Abs1(modOver.Y))
                mod.Y = next.Y;

            return mod;
        }
    }

    return next;
}

// private void SnapSetPositionVelocity(float2 nextPosition, float2 nextVelocity) [instance] :377
void BasicBoundedRegion2D::SnapSetPositionVelocity(::g::Uno::Float2 nextPosition, ::g::Uno::Float2 nextVelocity)
{
    Velocity(SnapVelocity(nextPosition, nextVelocity));
    Position(SnapPosition(Position(), nextPosition));
}

// internal Fuse.Motion.Simulation.DestinationSimulation<float2> get_SnapSimulation() [instance] :460
uObject* BasicBoundedRegion2D::SnapSimulation()
{
    return _snap;
}

// internal void set_SnapSimulation(Fuse.Motion.Simulation.DestinationSimulation<float2> value) [instance] :461
void BasicBoundedRegion2D::SnapSimulation(uObject* value)
{
    _snap = value;
}

// private float2 SnapVelocity(float2 position, float2 v) [instance] :419
::g::Uno::Float2 BasicBoundedRegion2D::SnapVelocity(::g::Uno::Float2 position, ::g::Uno::Float2 v)
{
    ::g::Uno::Float2 over = CalcOver(position);

    if ((::g::Uno::Math::Abs1(over.X) + ::g::Uno::Math::Abs1(over.Y)) < 1e-05f)
        return v;

    switch (Overflow())
    {
        case 0:
            return v;
        case 1:
        {
            if (over.X != 0.0f)
                v.X = 0.0f;

            if (over.Y != 0.0f)
                v.Y = 0.0f;

            return v;
        }
        case 2:
        {
            ::g::Uno::Float2 f = ::g::Uno::Math::Clamp3(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New1(1.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Math::Abs2(over), _overflowExtent)), ::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__New1(1.0f));
            ::g::Uno::Float2 mod = ::g::Uno::Float2__op_Multiply2(v, f);

            if (::g::Uno::Math::Sign1(v.X) != ::g::Uno::Math::Sign1(over.X))
                mod.X = v.X;

            if (::g::Uno::Math::Sign1(v.Y) != ::g::Uno::Math::Sign1(over.Y))
                mod.Y = v.Y;

            return mod;
        }
    }

    return v;
}

// public void StartUser() [instance] :265
void BasicBoundedRegion2D::StartUser()
{
    _moveMode = 1;
}

// public void StepUser(float2 inOffset) [instance] :270
void BasicBoundedRegion2D::StepUser(::g::Uno::Float2 inOffset)
{
    Position(SnapPosition(Position(), ::g::Uno::Float2__op_Addition2(inOffset, Position())));
}

// public void Update(double elapsed) [instance] :316
void BasicBoundedRegion2D::Update(double elapsed)
{
    switch (_moveMode)
    {
        case 0:
        case 1:
            return;
        case 2:
        {
            MoveFriction(elapsed);
            break;
        }
        case 3:
        {
            if (MoveSnap(elapsed, true, true))
                _moveMode = 0;

            break;
        }
        case 4:
        {
            MoveDestination(elapsed);
            break;
        }
    }
}

// public float2 get_Velocity() [instance] :342
::g::Uno::Float2 BasicBoundedRegion2D::Velocity()
{
    return _velocity;
}

// public void set_Velocity(float2 value) [instance] :343
void BasicBoundedRegion2D::Velocity(::g::Uno::Float2 value)
{
    _velocity = value;

    if (_moveMode == 0)
        _moveMode = 2;
}

// internal BasicBoundedRegion2D New() [static] :215
BasicBoundedRegion2D* BasicBoundedRegion2D::New1()
{
    BasicBoundedRegion2D* obj1 = (BasicBoundedRegion2D*)uNew(BasicBoundedRegion2D_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// internal abstract interface BoundedRegion2D :164
// {
uInterfaceType* BoundedRegion2D_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Motion.Simulation.BoundedRegion2D", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// internal abstract interface DestinationSimulation<T> :1332
// {
uInterfaceType* DestinationSimulation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Motion.Simulation.DestinationSimulation`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// internal sealed class EasingMotion<T> :547
// {
static void EasingMotion_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported unit type: ");
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), NULL), offsetof(EasingMotion_type, interface0),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), NULL), offsetof(EasingMotion_type, interface1),
        ::g::Fuse::Motion::Simulation::Simulation_typeof(), offsetof(EasingMotion_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _blender), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _duration), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _durationExp), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _easing), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _isDirty), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _isLocked), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _isStatic), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _nominalDistance), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _progress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _progressSpeed), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _transitionRemain), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Motion::Simulation::EasingMotion, _transitionTime), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

EasingMotion_type* EasingMotion_typeof()
{
    static uSStrong<EasingMotion_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(EasingMotion);
    options.TypeSize = sizeof(EasingMotion_type);
    type = (EasingMotion_type*)uClassType::New("Fuse.Motion.Simulation.EasingMotion`1", options);
    type->fp_build_ = EasingMotion_build;
    type->fp_ctor_ = (void*)EasingMotion__New1_fn;
    type->interface0.fp_Reset = (void(*)(uObject*, void*))EasingMotion__Reset_fn;
    type->interface0.fp_Start = (void(*)(uObject*))EasingMotion__Start_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))EasingMotion__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))EasingMotion__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))EasingMotion__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))EasingMotion__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))EasingMotion__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))EasingMotion__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))EasingMotion__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))EasingMotion__get_IsStatic_fn;
    return type;
}

// public generated EasingMotion() :547
void EasingMotion__ctor__fn(EasingMotion* __this)
{
    __this->ctor_();
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateNormalized() :552
void EasingMotion__CreateNormalized_fn(uType* __type, EasingMotion** __retval)
{
    *__retval = EasingMotion::CreateNormalized(__type);
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreatePoints() :566
void EasingMotion__CreatePoints_fn(uType* __type, EasingMotion** __retval)
{
    *__retval = EasingMotion::CreatePoints(__type);
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateRadians() :559
void EasingMotion__CreateRadians_fn(uType* __type, EasingMotion** __retval)
{
    *__retval = EasingMotion::CreateRadians(__type);
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateUnit(Fuse.Motion.MotionUnit unit) :573
void EasingMotion__CreateUnit_fn(uType* __type, int* unit, EasingMotion** __retval)
{
    *__retval = EasingMotion::CreateUnit(__type, *unit);
}

// public T get_Destination() :684
void EasingMotion__get_Destination_fn(EasingMotion* __this, uTRef __retval)
{
    return __retval.Store(__this->_destination()), void();
}

// public void set_Destination(T value) :685
void EasingMotion__set_Destination_fn(EasingMotion* __this, void* value)
{
    double ret21;

    if ((::g::Fuse::Internal::Blender__Distance_fn(uPtr(__this->_blender), __this->_destination(), value, &ret21), ret21) > 9.9999997473787516e-06)
        __this->_isDirty = true;

    __this->_destination() = value;
}

// public float get_Duration() :753
void EasingMotion__get_Duration_fn(EasingMotion* __this, float* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(float value) :754
void EasingMotion__set_Duration_fn(EasingMotion* __this, float* value)
{
    __this->Duration(*value);
}

// public float get_DurationExp() :760
void EasingMotion__get_DurationExp_fn(EasingMotion* __this, float* __retval)
{
    *__retval = __this->DurationExp();
}

// public void set_DurationExp(float value) :761
void EasingMotion__set_DurationExp_fn(EasingMotion* __this, float* value)
{
    __this->DurationExp(*value);
}

// public Fuse.Animations.Easing get_Easing() :595
void EasingMotion__get_Easing_fn(EasingMotion* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :596
void EasingMotion__set_Easing_fn(EasingMotion* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// public bool get_IsStatic() :588
void EasingMotion__get_IsStatic_fn(EasingMotion* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public generated EasingMotion New() :547
void EasingMotion__New1_fn(uType* __type, EasingMotion** __retval)
{
    *__retval = EasingMotion::New1(__type);
}

// public float get_NominalDistance() :767
void EasingMotion__get_NominalDistance_fn(EasingMotion* __this, float* __retval)
{
    *__retval = __this->NominalDistance();
}

// public void set_NominalDistance(float value) :768
void EasingMotion__set_NominalDistance_fn(EasingMotion* __this, float* value)
{
    __this->NominalDistance(*value);
}

// public T get_Position() :660
void EasingMotion__get_Position_fn(EasingMotion* __this, uTRef __retval)
{
    return __retval.Store(__this->_position()), void();
}

// public void set_Position(T value) :661
void EasingMotion__set_Position_fn(EasingMotion* __this, void* value)
{
    double ret22;

    if ((::g::Fuse::Internal::Blender__Distance_fn(uPtr(__this->_blender), __this->_position(), value, &ret22), ret22) > 9.9999997473787516e-06)
        __this->_isDirty = true;

    __this->_position() = value;
}

// public void Reset(T destination) :771
void EasingMotion__Reset_fn(EasingMotion* __this, void* destination)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    __this->_position() = destination;
    __this->_destination() = destination;
    __this->_velocity() = (uPtr(__this->_blender)->get_Zero_ex(&ret2), ret2);
    __this->_isStatic = true;
    __this->_isDirty = false;
}

// public void Start() :693
void EasingMotion__Start_fn(EasingMotion* __this)
{
    __this->Start();
}

// public void Update(double elapsed) :613
void EasingMotion__Update_fn(EasingMotion* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// private void UpdateDestination(bool start) :699
void EasingMotion__UpdateDestination_fn(EasingMotion* __this, bool* start)
{
    __this->UpdateDestination(*start);
}

// public T get_Velocity() :672
void EasingMotion__get_Velocity_fn(EasingMotion* __this, uTRef __retval)
{
    return __retval.Store(__this->_velocity()), void();
}

// public void set_Velocity(T value) :673
void EasingMotion__set_Velocity_fn(EasingMotion* __this, void* value)
{
    double ret23;

    if ((::g::Fuse::Internal::Blender__Distance_fn(uPtr(__this->_blender), __this->_velocity(), value, &ret23), ret23) > 9.9999997473787516e-06)
        __this->_isDirty = true;

    __this->_velocity() = value;
}

// public generated EasingMotion() [instance] :547
void EasingMotion::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _isDirty = true;
    _isStatic = true;
    _easing = ::g::Fuse::Animations::Easing::Linear();
    _progress = 1.0;
    _progressSpeed = 0.0;
    _transitionTime = 1.0;
    _transitionRemain = 0.0;
    _isLocked = true;
    _duration = 0.5f;
    _durationExp = 1.0f;
    _nominalDistance = 1.0f;
}

// public float get_Duration() [instance] :753
float EasingMotion::Duration()
{
    return _duration;
}

// public void set_Duration(float value) [instance] :754
void EasingMotion::Duration(float value)
{
    _duration = value;
}

// public float get_DurationExp() [instance] :760
float EasingMotion::DurationExp()
{
    return _durationExp;
}

// public void set_DurationExp(float value) [instance] :761
void EasingMotion::DurationExp(float value)
{
    _durationExp = value;
}

// public Fuse.Animations.Easing get_Easing() [instance] :595
::g::Fuse::Animations::Easing* EasingMotion::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :596
void EasingMotion::Easing(::g::Fuse::Animations::Easing* value)
{
    _easing = value;
}

// public bool get_IsStatic() [instance] :588
bool EasingMotion::IsStatic()
{
    return _isStatic && !_isDirty;
}

// public float get_NominalDistance() [instance] :767
float EasingMotion::NominalDistance()
{
    return _nominalDistance;
}

// public void set_NominalDistance(float value) [instance] :768
void EasingMotion::NominalDistance(float value)
{
    _nominalDistance = value;
}

// public void Start() [instance] :693
void EasingMotion::Start()
{
    UpdateDestination(true);
}

// public void Update(double elapsed) [instance] :613
void EasingMotion::Update(double elapsed)
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT desiredPosition(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT prevPos(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT desiredVelocity(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (_isDirty)
        UpdateDestination(false);

    _progress = ::g::Uno::Math::Min(1.0, _progress + (_progressSpeed * elapsed));

    if (elapsed >= _transitionRemain)
        _isLocked = true;

    desiredPosition = (uPtr(_blender)->Lerp_ex(_source(), _destination(), uCRef(uPtr(_easing)->Map((double)(float)_progress)), &ret3), ret3);
    prevPos = (uPtr(_blender)->Lerp_ex(_source(), _destination(), uCRef(uPtr(_easing)->Map((double)((float)_progress - 0.001f))), &ret4), ret4);
    desiredVelocity = (uPtr(_blender)->Weight_ex((uPtr(_blender)->Sub_ex(desiredPosition, prevPos, &ret6), ret6), uCRef(999.99993896484375), &ret5), ret5);

    if (_isLocked)
    {
        _position() = desiredPosition;
        _velocity() = desiredVelocity;

        if (_progress >= 1.0)
        {
            _position() = _destination();
            _velocity() = (uPtr(_blender)->get_Zero_ex(&ret7), ret7);
            _isStatic = true;
            _isLocked = true;
            _progress = 1.0;
        }

        return;
    }

    _transitionPosition() = (uPtr(_blender)->Add_ex(_transitionPosition(), (uPtr(_blender)->Weight_ex((EasingMotion__get_Velocity_fn(this, &ret10), ret10), uCRef(elapsed), &ret9), ret9), &ret8), ret8);
    _transitionRemain = (_transitionRemain - elapsed);
    float rtp = (float)(_transitionRemain / _transitionTime);
    float tp = rtp;
    _velocity() = (uPtr(_blender)->Lerp_ex(desiredVelocity, _transitionVelocity(), uCRef((double)tp), &ret11), ret11);
    _position() = (uPtr(_blender)->Lerp_ex(desiredPosition, _transitionPosition(), uCRef((double)tp), &ret12), ret12);
}

// private void UpdateDestination(bool start) [instance] :699
void EasingMotion::UpdateDestination(bool start)
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
    };
    uT ret14(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret17(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret18(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret19(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret20(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret13;
    double ret16;
    _isDirty = false;
    bool shouldLock = (uPtr(_blender)->Length_ex((EasingMotion__get_Velocity_fn(this, &ret14), ret14), &ret13), ret13) < 9.9999997473787516e-06;
    _source() = (EasingMotion__get_Position_fn(this, &ret15), ret15);
    _isStatic = false;
    double dist = (::g::Fuse::Internal::Blender__Distance_fn(uPtr(_blender), _destination(), (EasingMotion__get_Position_fn(this, &ret17), ret17), &ret16), ret16);
    double partial = dist / (double)_nominalDistance;
    double lenDuration = (double)Duration() * ::g::Uno::Math::Pow(partial, (double)_durationExp);

    if (lenDuration < 9.9999997473787516e-06)
    {
        _isStatic = true;
        EasingMotion__set_Position_fn(this, _destination());
        EasingMotion__set_Velocity_fn(this, (uPtr(_blender)->get_Zero_ex(&ret18), ret18));
        return;
    }
    else if ((partial < 1.0) && !shouldLock)
    {
        _progress = (1.0 - partial);
        _progressSpeed = (1.0 / lenDuration);
        _isLocked = false;
    }
    else
    {
        _progress = 0.0;
        _progressSpeed = (1.0 / lenDuration);
        _isLocked = shouldLock;
    }

    _transitionRemain = (_transitionTime = ::g::Uno::Math::Min((double)(Duration() / 2.0f), lenDuration));
    _transitionPosition() = (EasingMotion__get_Position_fn(this, &ret19), ret19);
    _transitionVelocity() = (EasingMotion__get_Velocity_fn(this, &ret20), ret20);
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateNormalized() [static] :552
EasingMotion* EasingMotion::CreateNormalized(uType* __type)
{
    EasingMotion* q = EasingMotion::New1(__type);
    q->NominalDistance(1.0f);
    return q;
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreatePoints() [static] :566
EasingMotion* EasingMotion::CreatePoints(uType* __type)
{
    EasingMotion* q = EasingMotion::New1(__type);
    q->NominalDistance(500.0f);
    return q;
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateRadians() [static] :559
EasingMotion* EasingMotion::CreateRadians(uType* __type)
{
    EasingMotion* q = EasingMotion::New1(__type);
    q->NominalDistance(3.14159274f);
    return q;
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateUnit(Fuse.Motion.MotionUnit unit) [static] :573
EasingMotion* EasingMotion::CreateUnit(uType* __type, int unit)
{
    switch (unit)
    {
        case 0:
            return EasingMotion::CreatePoints(__type);
        case 1:
            return EasingMotion::CreateNormalized(__type);
        case 2:
            return EasingMotion::CreateRadians(__type);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], uBox<int>(::g::Fuse::Motion::MotionUnit_typeof(), unit))));
}

// public generated EasingMotion New() [static] :547
EasingMotion* EasingMotion::New1(uType* __type)
{
    EasingMotion* obj1 = (EasingMotion*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// internal sealed class ElasticForce<T> :792
// {
static void ElasticForce_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported unit type: ");
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), NULL), offsetof(ElasticForce_type, interface0),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), NULL), offsetof(ElasticForce_type, interface1),
        ::g::Fuse::Motion::Simulation::Simulation_typeof(), offsetof(ElasticForce_type, interface2));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, _attractionCurve), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, _attractionForce), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, _blender), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, _damping), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, _energyEps), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, _hasMaxSpeed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, _isStatic), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, _maxSpeed), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, _remainTime), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, _scale), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, timeStep), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::Simulation::ElasticForce, _IsLocked), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

ElasticForce_type* ElasticForce_typeof()
{
    static uSStrong<ElasticForce_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ElasticForce);
    options.TypeSize = sizeof(ElasticForce_type);
    type = (ElasticForce_type*)uClassType::New("Fuse.Motion.Simulation.ElasticForce`1", options);
    type->fp_build_ = ElasticForce_build;
    type->interface0.fp_Reset = (void(*)(uObject*, void*))ElasticForce__Reset_fn;
    type->interface0.fp_Start = (void(*)(uObject*))ElasticForce__Start_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))ElasticForce__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))ElasticForce__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))ElasticForce__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))ElasticForce__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))ElasticForce__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))ElasticForce__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))ElasticForce__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))ElasticForce__get_IsStatic_fn;
    return type;
}

// public ElasticForce([float scale]) :841
void ElasticForce__ctor__fn(ElasticForce* __this, float* scale)
{
    __this->ctor_(*scale);
}

// private T get_Attraction() :956
void ElasticForce__get_Attraction_fn(ElasticForce* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uT ret17(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret18(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret19(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret20(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret21(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret22(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT unit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    v = (uPtr(__this->_blender)->Sub_ex((ElasticForce__get_Destination_fn(__this, &ret18), ret18), (ElasticForce__get_Position_fn(__this, &ret19), ret19), &ret17), ret17);
    double dlength;
    unit = (uPtr(__this->_blender)->ToUnit_ex(v, &dlength, &ret20), ret20);
    float length = (float)dlength;

    if (length < __this->_scale)
        return __retval.Store((uPtr(__this->_blender)->get_Zero_ex(&ret21), ret21)), void();

    float p = ::g::Uno::Math::Pow1(length, __this->AttractionCurve());
    return __retval.Store((uPtr(__this->_blender)->Weight_ex(unit, uCRef((double)p), &ret22), ret22)), void();
}

// public float get_AttractionCurve() :890
void ElasticForce__get_AttractionCurve_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->AttractionCurve();
}

// public void set_AttractionCurve(float value) :891
void ElasticForce__set_AttractionCurve_fn(ElasticForce* __this, float* value)
{
    __this->AttractionCurve(*value);
}

// public float get_AttractionForce() :883
void ElasticForce__get_AttractionForce_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->AttractionForce();
}

// public void set_AttractionForce(float value) :884
void ElasticForce__set_AttractionForce_fn(ElasticForce* __this, float* value)
{
    __this->AttractionForce(*value);
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateNormalized() :817
void ElasticForce__CreateNormalized_fn(uType* __type, ElasticForce** __retval)
{
    *__retval = ElasticForce::CreateNormalized(__type);
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreatePoints() :796
void ElasticForce__CreatePoints_fn(uType* __type, ElasticForce** __retval)
{
    *__retval = ElasticForce::CreatePoints(__type);
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateRadians() :806
void ElasticForce__CreateRadians_fn(uType* __type, ElasticForce** __retval)
{
    *__retval = ElasticForce::CreateRadians(__type);
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateUnit(Fuse.Motion.MotionUnit unit) :828
void ElasticForce__CreateUnit_fn(uType* __type, int* unit, ElasticForce** __retval)
{
    *__retval = ElasticForce::CreateUnit(__type, *unit);
}

// public float get_Damping() :897
void ElasticForce__get_Damping_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->Damping();
}

// public void set_Damping(float value) :898
void ElasticForce__set_Damping_fn(ElasticForce* __this, float* value)
{
    __this->Damping(*value);
}

// public T get_Destination() :872
void ElasticForce__get_Destination_fn(ElasticForce* __this, uTRef __retval)
{
    return __retval.Store(__this->_attractionDestination()), void();
}

// public void set_Destination(T value) :873
void ElasticForce__set_Destination_fn(ElasticForce* __this, void* value)
{
    __this->_attractionDestination() = value;
    __this->_isStatic = false;
}

// private float get_Energy() :973
void ElasticForce__get_Energy_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->Energy();
}

// public float get_EnergyEps() :904
void ElasticForce__get_EnergyEps_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->EnergyEps();
}

// public void set_EnergyEps(float value) :905
void ElasticForce__set_EnergyEps_fn(ElasticForce* __this, float* value)
{
    __this->EnergyEps(*value);
}

// public generated bool get_IsLocked() :848
void ElasticForce__get_IsLocked_fn(ElasticForce* __this, bool* __retval)
{
    *__retval = __this->IsLocked();
}

// public generated void set_IsLocked(bool value) :849
void ElasticForce__set_IsLocked_fn(ElasticForce* __this, bool* value)
{
    __this->IsLocked(*value);
}

// public bool get_IsStatic() :928
void ElasticForce__get_IsStatic_fn(ElasticForce* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public void set_IsStatic(bool value) :929
void ElasticForce__set_IsStatic_fn(ElasticForce* __this, bool* value)
{
    __this->IsStatic(*value);
}

// private void Iterate() :976
void ElasticForce__Iterate_fn(ElasticForce* __this)
{
    __this->Iterate();
}

// public float get_MaxSpeed() :912
void ElasticForce__get_MaxSpeed_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->MaxSpeed();
}

// public void set_MaxSpeed(float value) :913
void ElasticForce__set_MaxSpeed_fn(ElasticForce* __this, float* value)
{
    __this->MaxSpeed(*value);
}

// public ElasticForce New([float scale]) :841
void ElasticForce__New1_fn(uType* __type, float* scale, ElasticForce** __retval)
{
    *__retval = ElasticForce::New1(__type, *scale);
}

// public generated T get_Position() :854
void ElasticForce__get_Position_fn(ElasticForce* __this, uTRef __retval)
{
    return __retval.Store(__this->_Position()), void();
}

// public generated void set_Position(T value) :855
void ElasticForce__set_Position_fn(ElasticForce* __this, void* value)
{
    __this->_Position() = value;
}

// public void Reset(T value) :1002
void ElasticForce__Reset_fn(ElasticForce* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uT ret14(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ElasticForce__set_Position_fn(__this, value);
    ElasticForce__set_Destination_fn(__this, value);
    ElasticForce__set_Velocity_fn(__this, (uPtr(__this->_blender)->get_Zero_ex(&ret14), ret14));
    __this->IsStatic(true);
}

// public void Start() :1010
void ElasticForce__Start_fn(ElasticForce* __this)
{
    __this->Start();
}

// public void Update(double elapsed) :941
void ElasticForce__Update_fn(ElasticForce* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public T get_Velocity() :861
void ElasticForce__get_Velocity_fn(ElasticForce* __this, uTRef __retval)
{
    return __retval.Store(__this->_velocity()), void();
}

// public void set_Velocity(T value) :862
void ElasticForce__set_Velocity_fn(ElasticForce* __this, void* value)
{
    __this->_velocity() = value;
    __this->_isStatic = false;
}

// public ElasticForce([float scale]) [instance] :841
void ElasticForce::ctor_(float scale)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _attractionForce = 500.0f;
    _attractionCurve = 0.65f;
    _damping = 10.0f;
    _energyEps = 0.01f;
    timeStep = 0.001;
    _remainTime = 0.0;
    _scale = scale;
}

// public float get_AttractionCurve() [instance] :890
float ElasticForce::AttractionCurve()
{
    return _attractionCurve;
}

// public void set_AttractionCurve(float value) [instance] :891
void ElasticForce::AttractionCurve(float value)
{
    _attractionCurve = value;
}

// public float get_AttractionForce() [instance] :883
float ElasticForce::AttractionForce()
{
    return _attractionForce;
}

// public void set_AttractionForce(float value) [instance] :884
void ElasticForce::AttractionForce(float value)
{
    _attractionForce = value;
}

// public float get_Damping() [instance] :897
float ElasticForce::Damping()
{
    return _damping;
}

// public void set_Damping(float value) [instance] :898
void ElasticForce::Damping(float value)
{
    _damping = value;
}

// private float get_Energy() [instance] :973
float ElasticForce::Energy()
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
    };
    uT ret24(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret26(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret23;
    double ret25;
    return (float)((uPtr(_blender)->Length_ex((ElasticForce__get_Attraction_fn(this, &ret24), ret24), &ret23), ret23) + (uPtr(_blender)->Length_ex((ElasticForce__get_Velocity_fn(this, &ret26), ret26), &ret25), ret25));
}

// public float get_EnergyEps() [instance] :904
float ElasticForce::EnergyEps()
{
    return _energyEps;
}

// public void set_EnergyEps(float value) [instance] :905
void ElasticForce::EnergyEps(float value)
{
    _energyEps = value;
}

// public generated bool get_IsLocked() [instance] :848
bool ElasticForce::IsLocked()
{
    return _IsLocked;
}

// public generated void set_IsLocked(bool value) [instance] :849
void ElasticForce::IsLocked(bool value)
{
    _IsLocked = value;
}

// public bool get_IsStatic() [instance] :928
bool ElasticForce::IsStatic()
{
    return _isStatic;
}

// public void set_IsStatic(bool value) [instance] :929
void ElasticForce::IsStatic(bool value)
{
    if (_isStatic != value)
        _isStatic = value;
}

// private void Iterate() [instance] :976
void ElasticForce::Iterate()
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret13(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT acc(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT unit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT step(__types[0], U_ALLOCA(__types[0]->ValueSize));
    acc = (uPtr(_blender)->Weight_ex((ElasticForce__get_Attraction_fn(this, &ret3), ret3), uCRef((double)(float)((double)AttractionForce() * timeStep)), &ret2), ret2);
    ElasticForce__set_Velocity_fn(this, (uPtr(_blender)->Add_ex((ElasticForce__get_Velocity_fn(this, &ret5), ret5), acc, &ret4), ret4));

    if (_hasMaxSpeed)
    {
        double length;
        unit = (uPtr(_blender)->ToUnit_ex((ElasticForce__get_Velocity_fn(this, &ret7), ret7), &length, &ret6), ret6);

        if (length > (double)_maxSpeed)
            ElasticForce__set_Velocity_fn(this, (uPtr(_blender)->Weight_ex(unit, uCRef((double)_maxSpeed), &ret8), ret8));
    }

    if (!IsLocked())
    {
        step = (uPtr(_blender)->Weight_ex((ElasticForce__get_Velocity_fn(this, &ret10), ret10), uCRef((double)(float)timeStep), &ret9), ret9);
        ElasticForce__set_Position_fn(this, (uPtr(_blender)->Add_ex((ElasticForce__get_Position_fn(this, &ret12), ret12), step, &ret11), ret11));

        if (Energy() < EnergyEps())
        {
            ElasticForce__set_Position_fn(this, (ElasticForce__get_Destination_fn(this, &ret13), ret13));
            IsStatic(true);
        }
    }
}

// public float get_MaxSpeed() [instance] :912
float ElasticForce::MaxSpeed()
{
    return _maxSpeed;
}

// public void set_MaxSpeed(float value) [instance] :913
void ElasticForce::MaxSpeed(float value)
{
    _hasMaxSpeed = true;
    _maxSpeed = value;
}

// public void Start() [instance] :1010
void ElasticForce::Start()
{
}

// public void Update(double elapsed) [instance] :941
void ElasticForce::Update(double elapsed)
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
    };
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret16(__types[0], U_ALLOCA(__types[0]->ValueSize));
    _remainTime = (_remainTime + elapsed);

    while ((_remainTime > 0.0) && !IsStatic())
    {
        Iterate();
        _remainTime = (_remainTime - timeStep);
    }

    if (!IsStatic())
        ElasticForce__set_Velocity_fn(this, (uPtr(_blender)->Weight_ex((ElasticForce__get_Velocity_fn(this, &ret16), ret16), uCRef((double)(float)(1.0 - ::g::Uno::Math::Min(1.0, (double)Damping() * elapsed))), &ret15), ret15));
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateNormalized() [static] :817
ElasticForce* ElasticForce::CreateNormalized(uType* __type)
{
    ElasticForce* a = ElasticForce::New1(__type, 0.0001f);
    a->AttractionForce(50.0f);
    a->Damping(5.0f);
    a->AttractionCurve(0.75f);
    a->EnergyEps(0.0001f);
    a->MaxSpeed(1.0f);
    return a;
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreatePoints() [static] :796
ElasticForce* ElasticForce::CreatePoints(uType* __type)
{
    ElasticForce* a = ElasticForce::New1(__type, 0.01f);
    a->AttractionForce(200.0f);
    a->AttractionCurve(0.65f);
    a->Damping(10.0f);
    a->EnergyEps(0.05f);
    return a;
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateRadians() [static] :806
ElasticForce* ElasticForce::CreateRadians(uType* __type)
{
    ElasticForce* a = ElasticForce::New1(__type, 0.01f);
    a->AttractionForce(200.0f);
    a->Damping(15.0f);
    a->AttractionCurve(0.75f);
    a->EnergyEps(0.01f);
    a->MaxSpeed(6.28318548f);
    return a;
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateUnit(Fuse.Motion.MotionUnit unit) [static] :828
ElasticForce* ElasticForce::CreateUnit(uType* __type, int unit)
{
    switch (unit)
    {
        case 0:
            return ElasticForce::CreatePoints(__type);
        case 1:
            return ElasticForce::CreateNormalized(__type);
        case 2:
            return ElasticForce::CreateRadians(__type);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], uBox<int>(::g::Fuse::Motion::MotionUnit_typeof(), unit))));
}

// public ElasticForce New([float scale]) [static] :841
ElasticForce* ElasticForce::New1(uType* __type, float scale)
{
    ElasticForce* obj1 = (ElasticForce*)uNew(__type);
    obj1->ctor_(scale);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// internal sealed class Friction<T> :1025
// {
static void Friction_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported unit type: ");
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), NULL), offsetof(Friction_type, interface0),
        ::g::Fuse::Motion::Simulation::Simulation_typeof(), offsetof(Friction_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Motion::Simulation::Friction, _blender), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::Friction, _highFluidDeceleration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::Simulation::Friction, _isStatic), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::Friction, _kineticDeceleration), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::Friction, _lowFluidDeceleration), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::Friction, _speedDropout), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

Friction_type* Friction_typeof()
{
    static uSStrong<Friction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Friction);
    options.TypeSize = sizeof(Friction_type);
    type = (Friction_type*)uClassType::New("Fuse.Motion.Simulation.Friction`1", options);
    type->fp_build_ = Friction_build;
    type->fp_ctor_ = (void*)Friction__New1_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, uTRef))Friction__get_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, void*))Friction__set_Position_fn;
    type->interface0.fp_get_Velocity = (void(*)(uObject*, uTRef))Friction__get_Velocity_fn;
    type->interface0.fp_set_Velocity = (void(*)(uObject*, void*))Friction__set_Velocity_fn;
    type->interface1.fp_Update = (void(*)(uObject*, double*))Friction__Update_fn;
    type->interface1.fp_get_IsStatic = (void(*)(uObject*, bool*))Friction__get_IsStatic_fn;
    return type;
}

// public generated Friction() :1025
void Friction__ctor__fn(Friction* __this)
{
    __this->ctor_();
}

// public static Fuse.Motion.Simulation.Friction<T> CreateNormalized() :1048
void Friction__CreateNormalized_fn(uType* __type, Friction** __retval)
{
    *__retval = Friction::CreateNormalized(__type);
}

// public static Fuse.Motion.Simulation.Friction<T> CreatePoints() :1028
void Friction__CreatePoints_fn(uType* __type, Friction** __retval)
{
    *__retval = Friction::CreatePoints(__type);
}

// public static Fuse.Motion.Simulation.Friction<T> CreateRadians() :1038
void Friction__CreateRadians_fn(uType* __type, Friction** __retval)
{
    *__retval = Friction::CreateRadians(__type);
}

// public static Fuse.Motion.Simulation.Friction<T> CreateUnit(Fuse.Motion.MotionUnit unit) :1058
void Friction__CreateUnit_fn(uType* __type, int* unit, Friction** __retval)
{
    *__retval = Friction::CreateUnit(__type, *unit);
}

// public float get_HighFluidDeceleration() :1096
void Friction__get_HighFluidDeceleration_fn(Friction* __this, float* __retval)
{
    *__retval = __this->HighFluidDeceleration();
}

// public void set_HighFluidDeceleration(float value) :1097
void Friction__set_HighFluidDeceleration_fn(Friction* __this, float* value)
{
    __this->HighFluidDeceleration(*value);
}

// public bool get_IsStatic() :1121
void Friction__get_IsStatic_fn(Friction* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public float get_KineticDeceleration() :1082
void Friction__get_KineticDeceleration_fn(Friction* __this, float* __retval)
{
    *__retval = __this->KineticDeceleration();
}

// public void set_KineticDeceleration(float value) :1083
void Friction__set_KineticDeceleration_fn(Friction* __this, float* value)
{
    __this->KineticDeceleration(*value);
}

// public float get_LowFluidDeceleration() :1089
void Friction__get_LowFluidDeceleration_fn(Friction* __this, float* __retval)
{
    *__retval = __this->LowFluidDeceleration();
}

// public void set_LowFluidDeceleration(float value) :1090
void Friction__set_LowFluidDeceleration_fn(Friction* __this, float* value)
{
    __this->LowFluidDeceleration(*value);
}

// public generated Friction New() :1025
void Friction__New1_fn(uType* __type, Friction** __retval)
{
    *__retval = Friction::New1(__type);
}

// public T get_Position() :1114
void Friction__get_Position_fn(Friction* __this, uTRef __retval)
{
    return __retval.Store(__this->_position()), void();
}

// public void set_Position(T value) :1115
void Friction__set_Position_fn(Friction* __this, void* value)
{
    __this->_position() = value;
}

// public float get_SpeedDropout() :1075
void Friction__get_SpeedDropout_fn(Friction* __this, float* __retval)
{
    *__retval = __this->SpeedDropout();
}

// public void set_SpeedDropout(float value) :1076
void Friction__set_SpeedDropout_fn(Friction* __this, float* value)
{
    __this->SpeedDropout(*value);
}

// public void Update(double elapsed) :1124
void Friction__Update_fn(Friction* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public T get_Velocity() :1103
void Friction__get_Velocity_fn(Friction* __this, uTRef __retval)
{
    return __retval.Store(__this->_velocity()), void();
}

// public void set_Velocity(T value) :1104
void Friction__set_Velocity_fn(Friction* __this, void* value)
{
    __this->_velocity() = value;
    __this->_isStatic = false;
}

// public generated Friction() [instance] :1025
void Friction::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _speedDropout = 25.0f;
    _kineticDeceleration = 60.0f;
    _lowFluidDeceleration = 1.5f;
}

// public float get_HighFluidDeceleration() [instance] :1096
float Friction::HighFluidDeceleration()
{
    return _highFluidDeceleration;
}

// public void set_HighFluidDeceleration(float value) [instance] :1097
void Friction::HighFluidDeceleration(float value)
{
    _highFluidDeceleration = value;
}

// public bool get_IsStatic() [instance] :1121
bool Friction::IsStatic()
{
    return _isStatic;
}

// public float get_KineticDeceleration() [instance] :1082
float Friction::KineticDeceleration()
{
    return _kineticDeceleration;
}

// public void set_KineticDeceleration(float value) [instance] :1083
void Friction::KineticDeceleration(float value)
{
    _kineticDeceleration = value;
}

// public float get_LowFluidDeceleration() [instance] :1089
float Friction::LowFluidDeceleration()
{
    return _lowFluidDeceleration;
}

// public void set_LowFluidDeceleration(float value) [instance] :1090
void Friction::LowFluidDeceleration(float value)
{
    _lowFluidDeceleration = value;
}

// public float get_SpeedDropout() [instance] :1075
float Friction::SpeedDropout()
{
    return _speedDropout;
}

// public void set_SpeedDropout(float value) [instance] :1076
void Friction::SpeedDropout(float value)
{
    _speedDropout = value;
}

// public void Update(double elapsed) [instance] :1124
void Friction::Update(double elapsed)
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT step(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret4;
    step = (uPtr(_blender)->Weight_ex(_velocity(), uCRef((double)(float)elapsed), &ret2), ret2);
    _position() = (uPtr(_blender)->Add_ex(_position(), step, &ret3), ret3);
    double linear = (uPtr(_blender)->Length_ex(_velocity(), &ret4), ret4);

    if (linear < (double)_speedDropout)
    {
        _velocity() = (uPtr(_blender)->get_Zero_ex(&ret5), ret5);
        _isStatic = true;
        return;
    }

    double fluid = (double)_kineticDeceleration + (linear * (double)_lowFluidDeceleration);
    linear = linear + (-fluid * (double)(float)elapsed);

    if (linear < (double)_speedDropout)
    {
        _velocity() = (uPtr(_blender)->get_Zero_ex(&ret6), ret6);
        _isStatic = true;
        return;
    }

    _velocity() = (::g::Fuse::Internal::Blender__UnitWeight_fn(uPtr(_blender), _velocity(), uCRef(linear), &ret7), ret7);
}

// public static Fuse.Motion.Simulation.Friction<T> CreateNormalized() [static] :1048
Friction* Friction::CreateNormalized(uType* __type)
{
    Friction* n = Friction::New1(__type);
    n->SpeedDropout(0.05f);
    n->KineticDeceleration(0.12f);
    n->LowFluidDeceleration(1.5f);
    n->HighFluidDeceleration(0.0f);
    return n;
}

// public static Fuse.Motion.Simulation.Friction<T> CreatePoints() [static] :1028
Friction* Friction::CreatePoints(uType* __type)
{
    Friction* n = Friction::New1(__type);
    n->SpeedDropout(25.0f);
    n->KineticDeceleration(60.0f);
    n->LowFluidDeceleration(1.5f);
    n->HighFluidDeceleration(0.0f);
    return n;
}

// public static Fuse.Motion.Simulation.Friction<T> CreateRadians() [static] :1038
Friction* Friction::CreateRadians(uType* __type)
{
    Friction* n = Friction::New1(__type);
    n->SpeedDropout(0.02f);
    n->KineticDeceleration(2.0f);
    n->LowFluidDeceleration(0.8f);
    n->HighFluidDeceleration(0.0f);
    return n;
}

// public static Fuse.Motion.Simulation.Friction<T> CreateUnit(Fuse.Motion.MotionUnit unit) [static] :1058
Friction* Friction::CreateUnit(uType* __type, int unit)
{
    switch (unit)
    {
        case 0:
            return Friction::CreatePoints(__type);
        case 1:
            return Friction::CreateNormalized(__type);
        case 2:
            return Friction::CreateRadians(__type);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], uBox<int>(::g::Fuse::Motion::MotionUnit_typeof(), unit))));
}

// public generated Friction New() [static] :1025
Friction* Friction::New1(uType* __type)
{
    Friction* obj1 = (Friction*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// internal abstract interface MotionSimulation<T> :1326
// {
uInterfaceType* MotionSimulation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Motion.Simulation.MotionSimulation`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// private enum BasicBoundedRegion2D.MoveMode :226
uEnumType* BasicBoundedRegion2D__MoveMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Motion.Simulation.BasicBoundedRegion2D.MoveMode", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Stop", 0LL,
        "User", 1LL,
        "Friction", 2LL,
        "Snap", 3LL,
        "Destination", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// public sealed class PointerVelocity<T> :1172
// {
static void PointerVelocity_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL),
        type->T(0));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::PointerVelocity, _accelFactor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::PointerVelocity, _accelLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::PointerVelocity, _accelThreshold), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Motion::Simulation::PointerVelocity, _blender), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::PointerVelocity, _inSpeedLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::PointerVelocity, _period), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Motion::Simulation::PointerVelocity, _prevTime), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::PointerVelocity, _speedDistanceThreshold), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Motion::Simulation::PointerVelocity, _speedThreshold), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Motion::Simulation::PointerVelocity, _totalDistance), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Motion::Simulation::PointerVelocity, _totalTime), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* PointerVelocity_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(PointerVelocity);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.Simulation.PointerVelocity`1", options);
    type->fp_build_ = PointerVelocity_build;
    type->fp_ctor_ = (void*)PointerVelocity__New1_fn;
    return type;
}

// public generated PointerVelocity() :1172
void PointerVelocity__ctor__fn(PointerVelocity* __this)
{
    __this->ctor_();
}

// public void AddSample(T location, double elapsed, [Fuse.Motion.Simulation.SampleFlags flags]) :1245
void PointerVelocity__AddSample_fn(PointerVelocity* __this, void* location, double* elapsed, int* flags)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT diff(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT unit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT sample(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int flags_ = *flags;
    double elapsed_ = *elapsed;
    diff = (uPtr(__this->_blender)->Sub_ex(location, __this->_currentLocation(), &ret2), ret2);
    double length;
    unit = (uPtr(__this->_blender)->ToUnit_ex(diff, &length, &ret3), ret3);

    if (length < 9.9999997473787516e-06)
        unit = (uPtr(__this->_blender)->get_Zero_ex(&ret4), ret4);

    __this->_totalDistance = (__this->_totalDistance + length);
    __this->_currentLocation() = location;

    if (((flags_ & 2) == 2) && (length < 1.0))
        return;

    if (elapsed_ < 9.9999997473787516e-06)
        return;

    float speed = (float)(length / elapsed_);

    if ((double)speed < __this->_speedThreshold)
    {
        __this->_velocity() = (uPtr(__this->_blender)->get_Zero_ex(&ret5), ret5);
        __this->_totalDistance = 0.0;
        return;
    }

    double tdP = ::g::Uno::Math::Clamp(__this->_totalDistance / (double)__this->_speedDistanceThreshold, 0.0, 1.0);
    speed = ::g::Uno::Math::Min1((float)((double)__this->_inSpeedLimit * tdP), speed);
    float aSpeed = speed;

    if (tdP >= 1.0)
    {
        float accelRange = ::g::Uno::Math::Clamp1(speed, __this->_accelThreshold, __this->_accelLimit) / (__this->_accelLimit - __this->_accelThreshold);
        float accel = accelRange * __this->_accelFactor;
        aSpeed = speed * accel;
    }

    sample = (uPtr(__this->_blender)->Weight_ex(unit, uCRef((double)aSpeed), &ret6), ret6);
    PointerVelocity__ApplySample_fn(__this, sample, uCRef(elapsed_));
}

// public void AddSampleTime(T location, double timestamp, [Fuse.Motion.Simulation.SampleFlags flags]) :1239
void PointerVelocity__AddSampleTime_fn(PointerVelocity* __this, void* location, double* timestamp, int* flags)
{
    double timestamp_ = *timestamp;
    int flags_ = *flags;
    PointerVelocity__AddSample_fn(__this, location, uCRef(timestamp_ - __this->_prevTime), uCRef<int>(flags_));
    __this->_prevTime = timestamp_;
}

// private void ApplySample(T sample, double elapsed) :1287
void PointerVelocity__ApplySample_fn(PointerVelocity* __this, void* sample, double* elapsed)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double elapsed_ = *elapsed;

    if (__this->_totalTime < 9.9999997473787516e-06)
        __this->_velocity() = sample;
    else
    {
        double alpha = ::g::Fuse::Internal::Statistics::ContinuousFilterAlpha(elapsed_, (double)__this->_period);
        __this->_velocity() = (uPtr(__this->_blender)->Lerp_ex(__this->_velocity(), sample, uCRef(alpha), &ret7), ret7);
    }

    __this->_totalTime = (__this->_totalTime + elapsed_);
}

// public T get_CurrentVelocity() :1190
void PointerVelocity__get_CurrentVelocity_fn(PointerVelocity* __this, uTRef __retval)
{
    return __retval.Store(__this->_velocity()), void();
}

// public void set_CurrentVelocity(T value) :1191
void PointerVelocity__set_CurrentVelocity_fn(PointerVelocity* __this, void* value)
{
    __this->_velocity() = value;
}

// public generated PointerVelocity New() :1172
void PointerVelocity__New1_fn(uType* __type, PointerVelocity** __retval)
{
    *__retval = PointerVelocity::New1(__type);
}

// public void Reset(T location0) :1225
void PointerVelocity__Reset_fn(PointerVelocity* __this, void* location0)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    PointerVelocity__Reset1_fn(__this, location0, (uPtr(__this->_blender)->get_Zero_ex(&ret8), ret8), uCRef(0.0));
}

// public void Reset(T location0, T velocity0, [double currentTime]) :1230
void PointerVelocity__Reset1_fn(PointerVelocity* __this, void* location0, void* velocity0, double* currentTime)
{
    double currentTime_ = *currentTime;
    __this->_velocity() = velocity0;
    __this->_totalTime = 0.0;
    __this->_startLocation() = (__this->_currentLocation() = location0);
    __this->_totalDistance = 0.0;
    __this->_prevTime = currentTime_;
}

// public generated PointerVelocity() [instance] :1172
void PointerVelocity::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _speedThreshold = 60.0;
    _period = 0.12f;
    _accelThreshold = 1000.0f;
    _accelLimit = 2000.0f;
    _accelFactor = 1.5f;
    _inSpeedLimit = 2000.0f;
    _speedDistanceThreshold = 50.0f;
}

// public generated PointerVelocity New() [static] :1172
PointerVelocity* PointerVelocity::New1(uType* __type)
{
    PointerVelocity* obj1 = (PointerVelocity*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// public enum SampleFlags :1161
uEnumType* SampleFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Motion.Simulation.SampleFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Tentative", 1LL,
        "Release", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// internal abstract interface Simulation :1312
// {
uInterfaceType* Simulation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Motion.Simulation.Simulation", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.2.1/simulation/$.uno
// ----------------------------------------------------------------

// internal sealed class SmoothSnap<T> :1353
// {
static void SmoothSnap_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported unit type: ");
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), NULL), offsetof(SmoothSnap_type, interface0),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), NULL), offsetof(SmoothSnap_type, interface1),
        ::g::Fuse::Motion::Simulation::Simulation_typeof(), offsetof(SmoothSnap_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Motion::Simulation::SmoothSnap, _blender), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::SmoothSnap, _scale), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::SmoothSnap, _speed), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::SmoothSnap, _speedDropoutDistance), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::Simulation::SmoothSnap, _speedMin), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

SmoothSnap_type* SmoothSnap_typeof()
{
    static uSStrong<SmoothSnap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(SmoothSnap);
    options.TypeSize = sizeof(SmoothSnap_type);
    type = (SmoothSnap_type*)uClassType::New("Fuse.Motion.Simulation.SmoothSnap`1", options);
    type->fp_build_ = SmoothSnap_build;
    type->interface0.fp_Reset = (void(*)(uObject*, void*))SmoothSnap__Reset_fn;
    type->interface0.fp_Start = (void(*)(uObject*))SmoothSnap__Start_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))SmoothSnap__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))SmoothSnap__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))SmoothSnap__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))SmoothSnap__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))SmoothSnap__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))SmoothSnap__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))SmoothSnap__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))SmoothSnap__get_IsStatic_fn;
    return type;
}

// public SmoothSnap([float scale]) :1397
void SmoothSnap__ctor__fn(SmoothSnap* __this, float* scale)
{
    __this->ctor_(*scale);
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateNormalized() :1358
void SmoothSnap__CreateNormalized_fn(uType* __type, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::CreateNormalized(__type);
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreatePoints() :1376
void SmoothSnap__CreatePoints_fn(uType* __type, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::CreatePoints(__type);
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateRadians() :1367
void SmoothSnap__CreateRadians_fn(uType* __type, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::CreateRadians(__type);
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateUnit(Fuse.Motion.MotionUnit unit) :1385
void SmoothSnap__CreateUnit_fn(uType* __type, int* unit, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::CreateUnit(__type, *unit);
}

// public generated T get_Destination() :1404
void SmoothSnap__get_Destination_fn(SmoothSnap* __this, uTRef __retval)
{
    return __retval.Store(__this->_Destination()), void();
}

// public generated void set_Destination(T value) :1404
void SmoothSnap__set_Destination_fn(SmoothSnap* __this, void* value)
{
    __this->_Destination() = value;
}

// public bool get_IsStatic() :1453
void SmoothSnap__get_IsStatic_fn(SmoothSnap* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public SmoothSnap New([float scale]) :1397
void SmoothSnap__New1_fn(uType* __type, float* scale, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::New1(__type, *scale);
}

// public generated T get_Position() :1402
void SmoothSnap__get_Position_fn(SmoothSnap* __this, uTRef __retval)
{
    return __retval.Store(__this->_Position()), void();
}

// public generated void set_Position(T value) :1402
void SmoothSnap__set_Position_fn(SmoothSnap* __this, void* value)
{
    __this->_Position() = value;
}

// public void Reset(T destination) :1406
void SmoothSnap__Reset_fn(SmoothSnap* __this, void* destination)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    SmoothSnap__set_Destination_fn(__this, destination);
    SmoothSnap__set_Velocity_fn(__this, (uPtr(__this->_blender)->get_Zero_ex(&ret2), ret2));
    SmoothSnap__set_Position_fn(__this, destination);
}

// public void SetDuration(float t) :1444
void SmoothSnap__SetDuration_fn(SmoothSnap* __this, float* t)
{
    __this->SetDuration(*t);
}

// public float get_Speed() :1431
void SmoothSnap__get_Speed_fn(SmoothSnap* __this, float* __retval)
{
    *__retval = __this->Speed();
}

// public void set_Speed(float value) :1432
void SmoothSnap__set_Speed_fn(SmoothSnap* __this, float* value)
{
    __this->Speed(*value);
}

// public float get_SpeedDropoutDistance() :1424
void SmoothSnap__get_SpeedDropoutDistance_fn(SmoothSnap* __this, float* __retval)
{
    *__retval = __this->SpeedDropoutDistance();
}

// public void set_SpeedDropoutDistance(float value) :1425
void SmoothSnap__set_SpeedDropoutDistance_fn(SmoothSnap* __this, float* value)
{
    __this->SpeedDropoutDistance(*value);
}

// public void Start() :1413
void SmoothSnap__Start_fn(SmoothSnap* __this)
{
    __this->Start();
}

// public void Update(double elapsed) :1459
void SmoothSnap__Update_fn(SmoothSnap* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public generated T get_Velocity() :1403
void SmoothSnap__get_Velocity_fn(SmoothSnap* __this, uTRef __retval)
{
    return __retval.Store(__this->_Velocity()), void();
}

// public generated void set_Velocity(T value) :1403
void SmoothSnap__set_Velocity_fn(SmoothSnap* __this, void* value)
{
    __this->_Velocity() = value;
}

// public SmoothSnap([float scale]) [instance] :1397
void SmoothSnap::ctor_(float scale)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _scale = 1.0f;
    _speedMin = 25.0f;
    _speedDropoutDistance = 100.0f;
    _speed = 600.0f;
    _scale = scale;
}

// public bool get_IsStatic() [instance] :1453
bool SmoothSnap::IsStatic()
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
    };
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret16(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret17(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret14;
    return (uPtr(_blender)->Length_ex((uPtr(_blender)->Sub_ex((SmoothSnap__get_Destination_fn(this, &ret16), ret16), (SmoothSnap__get_Position_fn(this, &ret17), ret17), &ret15), ret15), &ret14), ret14) < (double)_scale;
}

// public void SetDuration(float t) [instance] :1444
void SmoothSnap::SetDuration(float t)
{
    float s = -((t * _speedMin) - (2.0f * _speedDropoutDistance)) / t;
    Speed(::g::Uno::Math::Max1(s, _speedMin));
}

// public float get_Speed() [instance] :1431
float SmoothSnap::Speed()
{
    return _speed;
}

// public void set_Speed(float value) [instance] :1432
void SmoothSnap::Speed(float value)
{
    _speed = value;
}

// public float get_SpeedDropoutDistance() [instance] :1424
float SmoothSnap::SpeedDropoutDistance()
{
    return _speedDropoutDistance;
}

// public void set_SpeedDropoutDistance(float value) [instance] :1425
void SmoothSnap::SpeedDropoutDistance(float value)
{
    _speedDropoutDistance = value;
}

// public void Start() [instance] :1413
void SmoothSnap::Start()
{
}

// public void Update(double elapsed) [instance] :1459
void SmoothSnap::Update(double elapsed)
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret13(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT off(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT offUnit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    off = (uPtr(_blender)->Sub_ex((SmoothSnap__get_Destination_fn(this, &ret4), ret4), (SmoothSnap__get_Position_fn(this, &ret5), ret5), &ret3), ret3);
    double offLen;
    offUnit = (uPtr(_blender)->ToUnit_ex(off, &offLen, &ret6), ret6);
    float useSpeed = Speed();

    if (offLen < (double)_speedDropoutDistance)
        useSpeed = (((float)offLen / _speedDropoutDistance) * (Speed() - _speedMin)) + _speedMin;

    if (offLen < ((double)useSpeed * elapsed))
    {
        SmoothSnap__set_Position_fn(this, (SmoothSnap__get_Destination_fn(this, &ret7), ret7));
        SmoothSnap__set_Velocity_fn(this, (uPtr(_blender)->get_Zero_ex(&ret8), ret8));
        return;
    }

    SmoothSnap__set_Velocity_fn(this, (uPtr(_blender)->Weight_ex(offUnit, uCRef((double)useSpeed), &ret9), ret9));
    SmoothSnap__set_Position_fn(this, (uPtr(_blender)->Add_ex((SmoothSnap__get_Position_fn(this, &ret11), ret11), (uPtr(_blender)->Weight_ex((SmoothSnap__get_Velocity_fn(this, &ret13), ret13), uCRef((double)(float)elapsed), &ret12), ret12), &ret10), ret10));
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateNormalized() [static] :1358
SmoothSnap* SmoothSnap::CreateNormalized(uType* __type)
{
    SmoothSnap* s = SmoothSnap::New1(__type, 1e-05f);
    s->_speedMin = 0.2f;
    s->_speedDropoutDistance = 0.4f;
    s->_speed = 3.5f;
    return s;
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreatePoints() [static] :1376
SmoothSnap* SmoothSnap::CreatePoints(uType* __type)
{
    SmoothSnap* s = SmoothSnap::New1(__type, 1e-05f);
    s->_speedMin = 25.0f;
    s->_speedDropoutDistance = 100.0f;
    s->_speed = 600.0f;
    return s;
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateRadians() [static] :1367
SmoothSnap* SmoothSnap::CreateRadians(uType* __type)
{
    SmoothSnap* s = SmoothSnap::New1(__type, 1e-05f);
    s->_speedMin = 0.628318548f;
    s->_speedDropoutDistance = 1.2566371f;
    s->_speed = 10.995575f;
    return s;
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateUnit(Fuse.Motion.MotionUnit unit) [static] :1385
SmoothSnap* SmoothSnap::CreateUnit(uType* __type, int unit)
{
    switch (unit)
    {
        case 0:
            return SmoothSnap::CreatePoints(__type);
        case 1:
            return SmoothSnap::CreateNormalized(__type);
        case 2:
            return SmoothSnap::CreateRadians(__type);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], uBox<int>(::g::Fuse::Motion::MotionUnit_typeof(), unit))));
}

// public SmoothSnap New([float scale]) [static] :1397
SmoothSnap* SmoothSnap::New1(uType* __type, float scale)
{
    SmoothSnap* obj1 = (SmoothSnap*)uNew(__type);
    obj1->ctor_(scale);
    return obj1;
}
// }

}}}} // ::g::Fuse::Motion::Simulation
