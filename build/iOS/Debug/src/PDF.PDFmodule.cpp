// This file was generated based on PdfJs.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <PDF.LaunchScan.h>
#include <PDF.PDFmodule.h>
#include <PDF.PDFToBase64.h>
#include <PDF.Transform.h>
#include <Uno.Bool.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[6];
static uType* TYPES[3];

namespace g{
namespace PDF{

// public sealed class PDFmodule :21
// {
static void PDFmodule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("PDF");
    ::STRINGS[1] = uString::Const("Transform");
    ::STRINGS[2] = uString::Const("LaunchScan");
    ::STRINGS[3] = uString::Const("PDFToBase64");
    ::STRINGS[4] = uString::Const("hhahahha");
    ::STRINGS[5] = uString::Const("PdfJs.uno");
    ::TYPES[0] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::String_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::PDF::PDFmodule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* PDFmodule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PDFmodule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("PDF.PDFmodule", options);
    type->fp_build_ = PDFmodule_build;
    type->fp_ctor_ = (void*)PDFmodule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public PDFmodule() :27
void PDFmodule__ctor_2_fn(PDFmodule* __this)
{
    __this->ctor_2();
}

// private Uno.Threading.Future<string> LaunchScan(object[] args) :45
void PDFmodule__LaunchScan_fn(PDFmodule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->LaunchScan(args);
}

// public PDFmodule New() :27
void PDFmodule__New2_fn(PDFmodule** __retval)
{
    *__retval = PDFmodule::New2();
}

// private Uno.Threading.Future<string> PDFToBase64(object[] args) :53
void PDFmodule__PDFToBase64_fn(PDFmodule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->PDFToBase64(args);
}

// private Uno.Threading.Future<string> Transform(object[] args) :37
void PDFmodule__Transform_fn(PDFmodule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Transform(args);
}

uSStrong<PDFmodule*> PDFmodule::_instance_;

// public PDFmodule() [instance] :27
void PDFmodule::ctor_2()
{
    ctor_1();

    if (PDFmodule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(PDFmodule::_instance_ = this, ::STRINGS[0/*"PDF"*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[0/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[1/*"Transform"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.FutureFactory<string>*/], (void*)PDFmodule__Transform_fn, this), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[0/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[2/*"LaunchScan"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.FutureFactory<string>*/], (void*)PDFmodule__LaunchScan_fn, this), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[0/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[3/*"PDFToBase64"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.FutureFactory<string>*/], (void*)PDFmodule__PDFToBase64_fn, this), NULL));
}

// private Uno.Threading.Future<string> LaunchScan(object[] args) [instance] :45
::g::Uno::Threading::Future1* PDFmodule::LaunchScan(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[2/*string*/]);
    return ::g::PDF::LaunchScan::New5(path);
}

// private Uno.Threading.Future<string> PDFToBase64(object[] args) [instance] :53
::g::Uno::Threading::Future1* PDFmodule::PDFToBase64(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[2/*string*/]);
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[4/*"hhahahha"*/], 0, ::STRINGS[5/*"PdfJs.uno"*/], 56);
    return ::g::PDF::PDFToBase64::New5(path);
}

// private Uno.Threading.Future<string> Transform(object[] args) [instance] :37
::g::Uno::Threading::Future1* PDFmodule::Transform(uArray* args)
{
    uString* base64 = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[2/*string*/]);
    uString* filepath = uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[2/*string*/]);
    return ::g::PDF::Transform::New5(base64, filepath);
}

// public PDFmodule New() [static] :27
PDFmodule* PDFmodule::New2()
{
    PDFmodule* obj1 = (PDFmodule*)uNew(PDFmodule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}} // ::g::PDF
