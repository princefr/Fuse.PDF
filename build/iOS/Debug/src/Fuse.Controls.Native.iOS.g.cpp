// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.INativeFocusListener.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.RootInfo.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.TouchPhase.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// internal abstract extern interface INativeFocusListener :147
// {
uInterfaceType* INativeFocusListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.iOS.INativeFocusListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// public abstract extern class LeafView :1197
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View_type, interface1));
    type->SetFields(8);
}

::g::Fuse::Controls::Native::iOS::View_type* LeafView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::iOS::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::iOS::View_type);
    type = (::g::Fuse::Controls::Native::iOS::View_type*)uClassType::New("Fuse.Controls.Native.iOS.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected LeafView(ObjC.Object handle) :1199
void LeafView__ctor_4_fn(LeafView* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_4(handle);
}

// protected LeafView(ObjC.Object handle) [instance] :1199
void LeafView::ctor_4(::g::ObjC::Object* handle)
{
    ctor_3(handle, true, 0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// internal static extern class NativeFocus :153
// {
// static NativeFocus() :153
static void NativeFocus__cctor__fn(uType* __type)
{
    NativeFocus::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/]));
}

static void NativeFocus_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/], (uintptr_t)&::g::Fuse::Controls::Native::iOS::NativeFocus::_listeners_, uFieldFlagsStatic);
}

uClassType* NativeFocus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NativeFocus", options);
    type->fp_build_ = NativeFocus_build;
    type->fp_cctor_ = NativeFocus__cctor__fn;
    return type;
}

// public static void RaiseFocusGained(ObjC.Object handle) :169
void NativeFocus__RaiseFocusGained_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusGained(handle);
}

// public static void RaiseFocusLost(ObjC.Object handle) :177
void NativeFocus__RaiseFocusLost_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusLost(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NativeFocus::_listeners_;

// public static void RaiseFocusGained(ObjC.Object handle) [static] :169
void NativeFocus::RaiseFocusGained(::g::ObjC::Object* handle)
{
    NativeFocus_typeof()->Init();
    bool ret1;
    uObject* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret1), ret1))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusGained(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret2), ret2)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RaiseFocusLost(ObjC.Object handle) [static] :177
void NativeFocus::RaiseFocusLost(::g::ObjC::Object* handle)
{
    NativeFocus_typeof()->Init();
    bool ret3;
    uObject* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret3), ret3))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusLost(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret4), ret4)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// private struct InputDispatch.RootInfo :848
// {
static void InputDispatch__RootInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::InputDispatch__RootInfo, RootVisual), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::InputDispatch__RootInfo, RootView), 0);
}

uStructType* InputDispatch__RootInfo_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(InputDispatch__RootInfo);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Controls.Native.iOS.InputDispatch.RootInfo", options);
    type->fp_build_ = InputDispatch__RootInfo_build;
    return type;
}

// public RootInfo(Fuse.Visual rootVisual, ObjC.Object rootView) :853
void InputDispatch__RootInfo__ctor__fn(InputDispatch__RootInfo* __this, ::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView)
{
    __this->ctor_(rootVisual, rootView);
}

// public RootInfo New(Fuse.Visual rootVisual, ObjC.Object rootView) :853
void InputDispatch__RootInfo__New1_fn(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView, InputDispatch__RootInfo* __retval)
{
    *__retval = InputDispatch__RootInfo__New1(rootVisual, rootView);
}

// public RootInfo(Fuse.Visual rootVisual, ObjC.Object rootView) [instance] :853
void InputDispatch__RootInfo::ctor_(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView)
{
    RootVisual = rootVisual;
    RootView = rootView;
}

// public RootInfo New(Fuse.Visual rootVisual, ObjC.Object rootView) [static] :853
InputDispatch__RootInfo InputDispatch__RootInfo__New1(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView)
{
    InputDispatch__RootInfo obj1;
    obj1.ctor_(rootVisual, rootView);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// internal enum TouchPhase :1427
uEnumType* TouchPhase_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.TouchPhase", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Began", 0LL,
        "Moved", 1LL,
        "Stationary", 2LL,
        "Ended", 3LL,
        "Cancelled", 4LL);
    return type;
}

}}}}} // ::g::Fuse::Controls::Native::iOS
