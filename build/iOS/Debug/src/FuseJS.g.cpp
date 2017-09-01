// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.iOSDevice.h>
#include <Fuse.Node.h>
#include <Fuse.OSVersion.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.JSObjectUtils.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UserEventDispatch.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.ExtractClosure.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Bundle.ReadBufferClosure.h>
#include <FuseJS.Bundle.ReadClosure.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.FileReadCommand.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Latin1Helpers.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.RaiseEvent.h>
#include <FuseJS.UserEvents.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Text.Base64.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[65];
static uType* TYPES[41];

namespace g{
namespace FuseJS{

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// public sealed class Base64 :433
// {
static void Base64_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Base64");
    ::STRINGS[1] = uString::Const("encodeAscii");
    ::STRINGS[2] = uString::Const("decodeAscii");
    ::STRINGS[3] = uString::Const("encodeUtf8");
    ::STRINGS[4] = uString::Const("decodeUtf8");
    ::STRINGS[5] = uString::Const("encodeLatin1");
    ::STRINGS[6] = uString::Const("decodeLatin1");
    ::STRINGS[7] = uString::Const("encodeBuffer");
    ::STRINGS[8] = uString::Const("decodeBuffer");
    ::STRINGS[9] = uString::Const("Requires a base-64 encoded string as first argument");
    ::STRINGS[10] = uString::Const("Requires a base-64 encoded Latin-1 string as argument");
    ::STRINGS[11] = uString::Const("Requires an ArrayBuffer as the first argument.");
    ::STRINGS[12] = uString::Const("Requires 1 argument");
    ::STRINGS[13] = uString::Const("null");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1/*FirstOrDefault<object>*/, uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::FuseJS::Base64::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Base64_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Base64);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Base64", options);
    type->fp_build_ = Base64_build;
    type->fp_ctor_ = (void*)Base64__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Base64() :437
void Base64__ctor_2_fn(Base64* __this)
{
    __this->ctor_2();
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) :569
void Base64__DecodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeAscii(context, args);
}

// private object DecodeBuffer(Fuse.Scripting.Context context, object[] args) :465
void Base64__DecodeBuffer_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeBuffer(context, args);
}

// private object DecodeLatin1(Fuse.Scripting.Context context, object[] args) :507
void Base64__DecodeLatin1_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeLatin1(context, args);
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) :611
void Base64__DecodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeUtf8(context, args);
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) :548
void Base64__EncodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeAscii(context, args);
}

// private object EncodeBuffer(Fuse.Scripting.Context context, object[] args) :488
void Base64__EncodeBuffer_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeBuffer(context, args);
}

// private object EncodeLatin1(Fuse.Scripting.Context context, object[] args) :526
void Base64__EncodeLatin1_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeLatin1(context, args);
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) :590
void Base64__EncodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeUtf8(context, args);
}

// public Base64 New() :437
void Base64__New2_fn(Base64** __retval)
{
    *__retval = Base64::New2();
}

uSStrong<Base64*> Base64::_instance_;

// public Base64() [instance] :437
void Base64::ctor_2()
{
    ctor_1();

    if (Base64::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Base64::_instance_ = this, ::STRINGS[0/*"FuseJS/Base64"*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"encodeAscii"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"decodeAscii"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"encodeUtf8"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeUtf8_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"decodeUtf8"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeUtf8_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[5/*"encodeLatin1"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeLatin1_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"decodeLatin1"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeLatin1_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[7/*"encodeBuffer"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeBuffer_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[8/*"decodeBuffer"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeBuffer_fn, this)));
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :569
uObject* Base64::DecodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Ascii::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object DecodeBuffer(Fuse.Scripting.Context context, object[] args) [instance] :465
uObject* Base64::DecodeBuffer(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uObject* ret2;
    uString* base64Str = uAs<uString*>((::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[2/*Uno.Collections.EnumerableExtensions.FirstOrDefault<object>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[3/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], args)), &ret2), ret2), ::TYPES[1/*string*/]);

    if (::g::Uno::String::op_Equality(base64Str, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[9/*"Requires a ...*/]));

    return ::g::Uno::Text::Base64::GetBytes(base64Str);
}

// private object DecodeLatin1(Fuse.Scripting.Context context, object[] args) [instance] :507
uObject* Base64::DecodeLatin1(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uObject* ret3;
    uString* base64Str = uAs<uString*>((::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[2/*Uno.Collections.EnumerableExtensions.FirstOrDefault<object>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[3/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], args)), &ret3), ret3), ::TYPES[1/*string*/]);

    if (::g::Uno::String::op_Equality(base64Str, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[10/*"Requires a ...*/]));

    return ::g::FuseJS::Latin1Helpers::DecodeLatin1(base64Str);
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :611
uObject* Base64::DecodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Utf8::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :548
uObject* Base64::EncodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Ascii::GetBytes(str));
    }

    return NULL;
}

// private object EncodeBuffer(Fuse.Scripting.Context context, object[] args) [instance] :488
uObject* Base64::EncodeBuffer(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uObject* ret4;
    uArray* buffer = uAs<uArray*>((::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[2/*Uno.Collections.EnumerableExtensions.FirstOrDefault<object>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[3/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], args)), &ret4), ret4), ::TYPES[4/*byte[]*/]);

    if (buffer == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[11/*"Requires an...*/]));

    return ::g::Uno::Text::Base64::GetString(buffer);
}

// private object EncodeLatin1(Fuse.Scripting.Context context, object[] args) [instance] :526
uObject* Base64::EncodeLatin1(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[12/*"Requires 1 ...*/]));

    uString* str = (uPtr(args)->Strong<uObject*>(0) == NULL) ? ::STRINGS[13/*"null"*/] : (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(0)));
    return ::g::FuseJS::Latin1Helpers::EncodeLatin1(str);
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :590
uObject* Base64::EncodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Utf8::GetBytes(str));
    }

    return NULL;
}

// public Base64 New() [static] :437
Base64* Base64::New2()
{
    Base64* obj1 = (Base64*)uNew(Base64_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// public sealed class Bundle :694
// {
static void Bundle_build(uType* type)
{
    ::STRINGS[14] = uString::Const("FuseJS/Bundle");
    ::STRINGS[15] = uString::Const("readSync");
    ::STRINGS[16] = uString::Const("read");
    ::STRINGS[17] = uString::Const("extract");
    ::STRINGS[18] = uString::Const("list");
    ::STRINGS[19] = uString::Const("readBuffer");
    ::STRINGS[20] = uString::Const("");
    ::STRINGS[21] = uString::Const("Argument 0 (bundle path) can not be undefined");
    ::STRINGS[22] = uString::Const("Argument 1 (destination path) can not be undefined");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[5] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), ::g::Fuse::Scripting::Array_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), NULL);
    ::TYPES[10] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), ::g::Fuse::Scripting::Array_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[13] = ::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[14] = ::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<bool>*/, ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[15] = type->MakeMethod(0/*Reject<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), NULL);
    ::TYPES[19] = uObject_typeof()->Array();
    ::TYPES[20] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[22] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[23] = type->MakeMethod(0/*Reject<byte[]>*/, ::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[24] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[25] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[26] = ::g::Uno::Exception_typeof();
    ::TYPES[27] = ::g::Uno::Threading::Promise_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[27/*Uno.Threading.Promise`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::FuseJS::Bundle::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Bundle_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Bundle);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Bundle", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->fp_build_ = Bundle_build;
    type->fp_ctor_ = (void*)Bundle__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Bundle() :698
void Bundle__ctor_2_fn(Bundle* __this)
{
    __this->ctor_2();
}

// public static Uno.Threading.Future<string> Extract(object[] args) :813
void Bundle__Extract_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::Extract(args);
}

// public static Uno.Threading.Future<Uno.Collections.IEnumerable<Uno.IO.BundleFile>> GetList([object[] args]) :763
void Bundle__GetList_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::GetList(args);
}

// private static Fuse.Scripting.Array ListConverter(Fuse.Scripting.Context context, Uno.Collections.IEnumerable<Uno.IO.BundleFile> list) :737
void Bundle__ListConverter_fn(::g::Fuse::Scripting::Context* context, uObject* list, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = Bundle::ListConverter(context, list);
}

// public Bundle New() :698
void Bundle__New2_fn(Bundle** __retval)
{
    *__retval = Bundle::New2();
}

// public static Uno.Threading.Future<string> ReadAsync(object[] args) :845
void Bundle__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadAsync(args);
}

// private static Uno.Threading.Future<string> ReadAsync(string filename) :898
void Bundle__ReadAsync1_fn(uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadAsync1(filename);
}

// public static Uno.Threading.Future<byte[]> ReadBuffer(object[] args) :728
void Bundle__ReadBuffer_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadBuffer(args);
}

// private static object ReadSync(Fuse.Scripting.Context c, object[] args) :871
void Bundle__ReadSync_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Bundle::ReadSync(c, args);
}

// public static string ReadSync(string filename) :881
void Bundle__ReadSync1_fn(uString* filename, uString** __retval)
{
    *__retval = Bundle::ReadSync1(filename);
}

// private static Uno.Threading.Future<T> Reject<T>(string reason) :784
void Bundle__Reject_fn(uType* __type, uString* reason, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::Reject(__type, reason);
}

// private static bool TryGetBundleFile(string sourcePath, Uno.IO.BundleFile& bundleFile) :771
void Bundle__TryGetBundleFile_fn(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile, bool* __retval)
{
    *__retval = Bundle::TryGetBundleFile(sourcePath, bundleFile);
}

uSStrong<Bundle*> Bundle::_instance_;

// public Bundle() [instance] :698
void Bundle::ctor_2()
{
    ctor_1();

    if (Bundle::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Bundle::_instance_ = this, ::STRINGS[14/*"FuseJS/Bundle"*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[15/*"readSync"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Bundle__ReadSync_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[5/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[16/*"read"*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.FutureFactory<string>*/], (void*)Bundle__ReadAsync_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<string, Fuse.Scripting.Object>*/], ::STRINGS[17/*"extract"*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.FutureFactory<string>*/], (void*)Bundle__Extract_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[8/*Fuse.Scripting.NativePromise<Uno.Collections.IEnumerable<Uno.IO.BundleFile>, Fuse.Scripting.Array>*/], ::STRINGS[18/*"list"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.FutureFactory<Uno.Collections.IEnumerable<Uno.IO.BundleFile>>*/], (void*)Bundle__GetList_fn), uDelegate::New(::TYPES[10/*Fuse.Scripting.ResultConverter<Uno.Collections.IEnumerable<Uno.IO.BundleFile>, Fuse.Scripting.Array>*/], (void*)Bundle__ListConverter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[11/*Fuse.Scripting.NativePromise<byte[], string>*/], ::STRINGS[19/*"readBuffer"*/], uDelegate::New(::TYPES[12/*Fuse.Scripting.FutureFactory<byte[]>*/], (void*)Bundle__ReadBuffer_fn), NULL));
}

// public static Uno.Threading.Future<string> Extract(object[] args) [static] :813
::g::Uno::Threading::Future1* Bundle::Extract(uArray* args)
{
    uString* ret4;
    uString* ret5;
    bool ret6;
    uString* searchPath = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[13/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<string>*/], args, uCRef<int>(0), ::STRINGS[20/*""*/], &ret4), ret4);
    uString* destinationPath = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[13/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<string>*/], args, uCRef<int>(1), ::STRINGS[20/*""*/], &ret5), ret5);
    bool overwrite = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[14/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<bool>*/], args, uCRef<int>(2), uCRef(false), &ret6), ret6);

    if (::g::Uno::String::op_Equality(searchPath, ::STRINGS[20/*""*/]))
        return (::g::Uno::Threading::Future1*)Bundle::Reject(::TYPES[15/*FuseJS.Bundle.Reject<string>*/], ::STRINGS[21/*"Argument 0 ...*/]);

    if (::g::Uno::String::op_Equality(destinationPath, ::STRINGS[20/*""*/]))
        return (::g::Uno::Threading::Future1*)Bundle::Reject(::TYPES[15/*FuseJS.Bundle.Reject<string>*/], ::STRINGS[22/*"Argument 1 ...*/]);

    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[16/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[17/*Uno.Func<string>*/], (void*)Bundle__ExtractClosure__Invoke_fn, Bundle__ExtractClosure::New1(searchPath, destinationPath, overwrite)));
}

// public static Uno.Threading.Future<Uno.Collections.IEnumerable<Uno.IO.BundleFile>> GetList([object[] args]) [static] :763
::g::Uno::Threading::Future1* Bundle::GetList(uArray* args)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[18/*Uno.Threading.Promise<Uno.Collections.IEnumerable<Uno.IO.BundleFile>>*/]);
    uObject* files = ::g::Uno::IO::Bundle::AllFiles();
    ::g::Uno::Threading::Promise__Resolve_fn(p, files);
    return p;
}

// private static Fuse.Scripting.Array ListConverter(Fuse.Scripting.Context context, Uno.Collections.IEnumerable<Uno.IO.BundleFile> list) [static] :737
::g::Fuse::Scripting::Array* Bundle::ListConverter(::g::Fuse::Scripting::Context* context, uObject* list)
{
    ::g::Uno::IO::BundleFile* ret7;
    ::g::Fuse::Scripting::Array* output = uPtr(context)->NewArray(uArray::New(::TYPES[19/*object[]*/], 0));
    int i = 0;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(list), ::TYPES[20/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[21/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::IO::BundleFile* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[22/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret7), ret7);
        uPtr(output)->Item(i++, uPtr(b)->SourcePath());
    }

    return output;
}

// public Bundle New() [static] :698
Bundle* Bundle::New2()
{
    Bundle* obj3 = (Bundle*)uNew(Bundle_typeof());
    obj3->ctor_2();
    return obj3;
}

// public static Uno.Threading.Future<string> ReadAsync(object[] args) [static] :845
::g::Uno::Threading::Future1* Bundle::ReadAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
        return Bundle::ReadAsync1((filename != NULL) ? filename : ::STRINGS[20/*""*/]);
    }

    return Bundle::ReadAsync1(::STRINGS[20/*""*/]);
}

// private static Uno.Threading.Future<string> ReadAsync(string filename) [static] :898
::g::Uno::Threading::Future1* Bundle::ReadAsync1(uString* filename)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[16/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[17/*Uno.Func<string>*/], (void*)Bundle__ReadClosure__Invoke_fn, Bundle__ReadClosure::New1(filename)));
}

// public static Uno.Threading.Future<byte[]> ReadBuffer(object[] args) [static] :728
::g::Uno::Threading::Future1* Bundle::ReadBuffer(uArray* args)
{
    uString* ret8;
    uString* searchPath = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[13/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<string>*/], args, uCRef<int>(0), ::STRINGS[20/*""*/], &ret8), ret8);

    if (::g::Uno::String::op_Equality(searchPath, ::STRINGS[20/*""*/]))
        return (::g::Uno::Threading::Future1*)Bundle::Reject(::TYPES[23/*FuseJS.Bundle.Reject<byte[]>*/], ::STRINGS[21/*"Argument 0 ...*/]);

    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[24/*Uno.Threading.Promise<byte[]>*/], uDelegate::New(::TYPES[25/*Uno.Func<byte[]>*/], (void*)Bundle__ReadBufferClosure__Invoke_fn, Bundle__ReadBufferClosure::New1(searchPath)));
}

// private static object ReadSync(Fuse.Scripting.Context c, object[] args) [static] :871
uObject* Bundle::ReadSync(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
        return Bundle::ReadSync1(filename);
    }

    return ::STRINGS[20/*""*/];
}

// public static string ReadSync(string filename) [static] :881
uString* Bundle::ReadSync1(uString* filename)
{
    try
    {
        ::g::Uno::IO::BundleFile* bundleFile;

        if (Bundle::TryGetBundleFile(filename, &bundleFile))
            return uPtr(bundleFile)->ReadAllText();

        return ::STRINGS[20/*""*/];
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        return ::STRINGS[20/*""*/];
    }
}

// private static Uno.Threading.Future<T> Reject<T>(string reason) [static] :784
::g::Uno::Threading::Future1* Bundle::Reject(uType* __type, uString* reason)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Promise<T>*/),
    };
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    p->Reject(::g::Uno::Exception::New2(reason));
    return p;
}

// private static bool TryGetBundleFile(string sourcePath, Uno.IO.BundleFile& bundleFile) [static] :771
bool Bundle::TryGetBundleFile(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile)
{
    ::g::Uno::IO::BundleFile* ret9;
    *bundleFile = NULL;

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::TYPES[20/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[21/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::IO::BundleFile* bf = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[22/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret9), ret9);

        if (::g::Uno::String::op_Equality(uPtr(bf)->SourcePath(), sourcePath))
        {
            *bundleFile = bf;
            return true;
        }
    }

    return false;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// public sealed class Environment :380
// {
static void Environment_build(uType* type)
{
    ::STRINGS[23] = uString::Const("FuseJS/Environment");
    ::STRINGS[24] = uString::Const("android");
    ::STRINGS[25] = uString::Const("ios");
    ::STRINGS[26] = uString::Const("mobile");
    ::STRINGS[27] = uString::Const("desktop");
    ::STRINGS[28] = uString::Const("preview");
    ::STRINGS[29] = uString::Const("dotnet");
    ::STRINGS[30] = uString::Const("mobileOSVersion");
    ::STRINGS[20] = uString::Const("");
    ::TYPES[28] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[29] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::FuseJS::Environment::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Environment_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Environment);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Environment", options);
    type->fp_build_ = Environment_build;
    type->fp_ctor_ = (void*)Environment__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Environment() :384
void Environment__ctor_2_fn(Environment* __this)
{
    __this->ctor_2();
}

// private static string GetMobileOSVersion() :397
void Environment__GetMobileOSVersion_fn(uString** __retval)
{
    *__retval = Environment::GetMobileOSVersion();
}

// public Environment New() :384
void Environment__New2_fn(Environment** __retval)
{
    *__retval = Environment::New2();
}

uSStrong<Environment*> Environment::_instance_;

// public Environment() [instance] :384
void Environment::ctor_2()
{
    ::g::Fuse::Scripting::NativeProperty* ret2;
    ::g::Fuse::Scripting::NativeProperty* ret3;
    ::g::Fuse::Scripting::NativeProperty* ret4;
    ::g::Fuse::Scripting::NativeProperty* ret5;
    ::g::Fuse::Scripting::NativeProperty* ret6;
    ::g::Fuse::Scripting::NativeProperty* ret7;
    ctor_1();

    if (Environment::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Environment::_instance_ = this, ::STRINGS[23/*"FuseJS/Envi...*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[28/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[24/*"android"*/], uCRef(false), &ret2), ret2));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[28/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[25/*"ios"*/], uCRef(true), &ret3), ret3));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[28/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[26/*"mobile"*/], uCRef(true), &ret4), ret4));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[28/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[27/*"desktop"*/], uCRef(false), &ret5), ret5));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[28/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[28/*"preview"*/], uCRef(false), &ret6), ret6));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[28/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[29/*"dotnet"*/], uCRef(false), &ret7), ret7));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[29/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[30/*"mobileOSVer...*/], uDelegate::New(::TYPES[17/*Uno.Func<string>*/], (void*)Environment__GetMobileOSVersion_fn), NULL, NULL));
}

// private static string GetMobileOSVersion() [static] :397
uString* Environment::GetMobileOSVersion()
{
    return uPtr(::g::Fuse::iOSDevice::OperatingSystemVersion())->ToString();
    return ::STRINGS[20/*""*/];
}

// public Environment New() [static] :384
Environment* Environment::New2()
{
    Environment* obj1 = (Environment*)uNew(Environment_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// private sealed class Bundle.ExtractClosure :903
// {
static void Bundle__ExtractClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::FuseJS::Bundle__ExtractClosure, _destPath), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::FuseJS::Bundle__ExtractClosure, _overwrite), 0,
        ::g::Uno::String_typeof(), offsetof(::g::FuseJS::Bundle__ExtractClosure, _searchPath), 0);
}

uType* Bundle__ExtractClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Bundle__ExtractClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.Bundle.ExtractClosure", options);
    type->fp_build_ = Bundle__ExtractClosure_build;
    return type;
}

// public ExtractClosure(string searchPath, string destinationPath, bool overwriteIfExists) :908
void Bundle__ExtractClosure__ctor__fn(Bundle__ExtractClosure* __this, uString* searchPath, uString* destinationPath, bool* overwriteIfExists)
{
    __this->ctor_(searchPath, destinationPath, *overwriteIfExists);
}

// public string Invoke() :914
void Bundle__ExtractClosure__Invoke_fn(Bundle__ExtractClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ExtractClosure New(string searchPath, string destinationPath, bool overwriteIfExists) :908
void Bundle__ExtractClosure__New1_fn(uString* searchPath, uString* destinationPath, bool* overwriteIfExists, Bundle__ExtractClosure** __retval)
{
    *__retval = Bundle__ExtractClosure::New1(searchPath, destinationPath, *overwriteIfExists);
}

// public ExtractClosure(string searchPath, string destinationPath, bool overwriteIfExists) [instance] :908
void Bundle__ExtractClosure::ctor_(uString* searchPath, uString* destinationPath, bool overwriteIfExists)
{
    _searchPath = searchPath;
    _destPath = destinationPath;
    _overwrite = overwriteIfExists;
}

// public string Invoke() [instance] :914
uString* Bundle__ExtractClosure::Invoke()
{
    ::g::Uno::IO::BundleFile* bfile;

    if (::g::FuseJS::Bundle::TryGetBundleFile(_searchPath, &bfile))
    {
        if (_overwrite || !::g::Uno::IO::File::Exists(_destPath))
        {
            ::g::Uno::IO::Directory::CreateDirectory(::g::Uno::IO::Path::GetDirectoryName(_destPath));
            ::g::Uno::IO::File::WriteAllBytes(_destPath, uPtr(bfile)->ReadAllBytes());
        }
    }

    return _destPath;
}

// public ExtractClosure New(string searchPath, string destinationPath, bool overwriteIfExists) [static] :908
Bundle__ExtractClosure* Bundle__ExtractClosure::New1(uString* searchPath, uString* destinationPath, bool overwriteIfExists)
{
    Bundle__ExtractClosure* obj1 = (Bundle__ExtractClosure*)uNew(Bundle__ExtractClosure_typeof());
    obj1->ctor_(searchPath, destinationPath, overwriteIfExists);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// private sealed class FileReaderImpl.FileReadCommand :981
// {
static void FileReaderImpl__FileReadCommand_build(uType* type)
{
    ::STRINGS[31] = uString::Const("PNG");
    ::STRINGS[32] = uString::Const("png");
    ::STRINGS[33] = uString::Const("jpeg");
    ::STRINGS[34] = uString::Const("data:image/");
    ::STRINGS[35] = uString::Const(";base64,");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::FuseJS::FileReaderImpl__FileReadCommand, _path), 0);
}

uType* FileReaderImpl__FileReadCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FileReaderImpl__FileReadCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.FileReaderImpl.FileReadCommand", options);
    type->fp_build_ = FileReaderImpl__FileReadCommand_build;
    return type;
}

// public FileReadCommand(string path) :984
void FileReaderImpl__FileReadCommand__ctor__fn(FileReaderImpl__FileReadCommand* __this, uString* path)
{
    __this->ctor_(path);
}

// public FileReadCommand New(string path) :984
void FileReaderImpl__FileReadCommand__New1_fn(uString* path, FileReaderImpl__FileReadCommand** __retval)
{
    *__retval = FileReaderImpl__FileReadCommand::New1(path);
}

// public string ReadAsDataURL() :992
void FileReaderImpl__FileReadCommand__ReadAsDataURL_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval)
{
    *__retval = __this->ReadAsDataURL();
}

// public string ReadAsText() :988
void FileReaderImpl__FileReadCommand__ReadAsText_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval)
{
    *__retval = __this->ReadAsText();
}

// public FileReadCommand(string path) [instance] :984
void FileReaderImpl__FileReadCommand::ctor_(uString* path)
{
    _path = path;
}

// public string ReadAsDataURL() [instance] :992
uString* FileReaderImpl__FileReadCommand::ReadAsDataURL()
{
    uArray* file = ::g::Uno::IO::File::ReadAllBytes(_path);
    uString* type = ::g::Uno::String::EndsWith(uPtr(::g::Uno::String::ToUpper(uPtr(_path))), ::STRINGS[31/*"PNG"*/]) ? ::STRINGS[32/*"png"*/] : ::STRINGS[33/*"jpeg"*/];
    uString* base64 = ::g::Uno::Text::Base64::GetString(file);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"data:image/"*/], type), ::STRINGS[35/*";base64,"*/]), base64);
}

// public string ReadAsText() [instance] :988
uString* FileReaderImpl__FileReadCommand::ReadAsText()
{
    return ::g::Uno::IO::File::ReadAllText(_path);
}

// public FileReadCommand New(string path) [static] :984
FileReaderImpl__FileReadCommand* FileReaderImpl__FileReadCommand::New1(uString* path)
{
    FileReaderImpl__FileReadCommand* obj1 = (FileReaderImpl__FileReadCommand*)uNew(FileReaderImpl__FileReadCommand_typeof());
    obj1->ctor_(path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// public sealed class FileReaderImpl :979
// {
static void FileReaderImpl_build(uType* type)
{
    ::STRINGS[36] = uString::Const("FuseJS/FileReaderImpl");
    ::STRINGS[37] = uString::Const("readAsDataURL");
    ::STRINGS[38] = uString::Const("readAsText");
    ::TYPES[5] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[16] = ::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[1/*string*/], NULL);
    ::TYPES[17] = ::g::Uno::Func_typeof()->MakeType(::TYPES[1/*string*/], NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::FuseJS::FileReaderImpl::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* FileReaderImpl_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(FileReaderImpl);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.FileReaderImpl", options);
    type->fp_build_ = FileReaderImpl_build;
    type->fp_ctor_ = (void*)FileReaderImpl__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileReaderImpl() :1002
void FileReaderImpl__ctor_2_fn(FileReaderImpl* __this)
{
    __this->ctor_2();
}

// public FileReaderImpl New() :1002
void FileReaderImpl__New2_fn(FileReaderImpl** __retval)
{
    *__retval = FileReaderImpl::New2();
}

// private static Uno.Threading.Future<string> readAsDataURL(object[] args) :1010
void FileReaderImpl__readAsDataURL_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = FileReaderImpl::readAsDataURL(args);
}

// private static Uno.Threading.Future<string> readAsText(object[] args) :1016
void FileReaderImpl__readAsText_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = FileReaderImpl::readAsText(args);
}

uSStrong<FileReaderImpl*> FileReaderImpl::_instance_;

// public FileReaderImpl() [instance] :1002
void FileReaderImpl::ctor_2()
{
    ctor_1();

    if (FileReaderImpl::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(FileReaderImpl::_instance_ = this, ::STRINGS[36/*"FuseJS/File...*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[5/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[37/*"readAsDataURL"*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.FutureFactory<string>*/], (void*)FileReaderImpl__readAsDataURL_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[5/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[38/*"readAsText"*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.FutureFactory<string>*/], (void*)FileReaderImpl__readAsText_fn), NULL));
}

// public FileReaderImpl New() [static] :1002
FileReaderImpl* FileReaderImpl::New2()
{
    FileReaderImpl* obj1 = (FileReaderImpl*)uNew(FileReaderImpl_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Uno.Threading.Future<string> readAsDataURL(object[] args) [static] :1010
::g::Uno::Threading::Future1* FileReaderImpl::readAsDataURL(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[16/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[17/*Uno.Func<string>*/], (void*)FileReaderImpl__FileReadCommand__ReadAsDataURL_fn, FileReaderImpl__FileReadCommand::New1(path)));
}

// private static Uno.Threading.Future<string> readAsText(object[] args) [static] :1016
::g::Uno::Threading::Future1* FileReaderImpl::readAsText(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[16/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[17/*Uno.Func<string>*/], (void*)FileReaderImpl__FileReadCommand__ReadAsText_fn, FileReaderImpl__FileReadCommand::New1(path)));
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// public sealed class Globals :10
// {
static void Globals_build(uType* type)
{
    ::STRINGS[39] = uString::Const("FuseJS/Globals");
    ::STRINGS[38] = uString::Const("readAsText");
    ::STRINGS[40] = uString::Const("Globals.readAsText(): Exactly one argument expected");
    ::STRINGS[41] = uString::Const("Globals.readAsText(): Argument must be string");
    ::STRINGS[42] = uString::Const("Globals.readAsText(): Global resource file '");
    ::STRINGS[43] = uString::Const("' not found");
    ::TYPES[5] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[30] = ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[32] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::FuseJS::Globals::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Globals_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Globals);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Globals", options);
    type->fp_build_ = Globals_build;
    type->fp_ctor_ = (void*)Globals__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Globals() :13
void Globals__ctor_2_fn(Globals* __this)
{
    __this->ctor_2();
}

// private static bool FileSourceAcceptor(object obj) :37
void Globals__FileSourceAcceptor_fn(uObject* obj, bool* __retval)
{
    *__retval = Globals::FileSourceAcceptor(obj);
}

// public Globals New() :13
void Globals__New2_fn(Globals** __retval)
{
    *__retval = Globals::New2();
}

// private static string readAsText(object[] args) :20
void Globals__readAsText_fn(uArray* args, uString** __retval)
{
    *__retval = Globals::readAsText(args);
}

uSStrong<Globals*> Globals::_instance_;

// public Globals() [instance] :13
void Globals::ctor_2()
{
    ctor_1();

    if (Globals::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Globals::_instance_ = this, ::STRINGS[39/*"FuseJS/Glob...*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[5/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[38/*"readAsText"*/], uDelegate::New(::TYPES[30/*Fuse.Scripting.ResultFactory<string>*/], (void*)Globals__readAsText_fn), NULL));
}

// private static bool FileSourceAcceptor(object obj) [static] :37
bool Globals::FileSourceAcceptor(uObject* obj)
{
    return uIs(obj, ::TYPES[31/*Uno.UX.BundleFileSource*/]);
}

// public Globals New() [static] :13
Globals* Globals::New2()
{
    Globals* obj1 = (Globals*)uNew(Globals_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static string readAsText(object[] args) [static] :20
uString* Globals::readAsText(uArray* args)
{
    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[40/*"Globals.rea...*/]));

    uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

    if (args->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[41/*"Globals.rea...*/]));

    uObject* res;

    if (::g::Uno::UX::Resource::TryFindGlobal(key, uDelegate::New(::TYPES[32/*Uno.Predicate<object>*/], (void*)Globals__FileSourceAcceptor_fn), &res))
    {
        ::g::Uno::UX::BundleFileSource* fs = uCast< ::g::Uno::UX::BundleFileSource*>(res, ::TYPES[31/*Uno.UX.BundleFileSource*/]);
        return uPtr(fs)->ReadAllText();
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[42/*"Globals.rea...*/], key), ::STRINGS[43/*"' not found"*/])));
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// internal static class Latin1Helpers :632
// {
static void Latin1Helpers_build(uType* type)
{
    ::STRINGS[44] = uString::Const("The string to be encoded contains characters outside of the Latin1 range.");
    ::TYPES[33] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* Latin1Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseJS.Latin1Helpers", options);
    type->fp_build_ = Latin1Helpers_build;
    return type;
}

// public static string DecodeLatin1(string base64Str) :634
void Latin1Helpers__DecodeLatin1_fn(uString* base64Str, uString** __retval)
{
    *__retval = Latin1Helpers::DecodeLatin1(base64Str);
}

// public static string EncodeLatin1(string str) :647
void Latin1Helpers__EncodeLatin1_fn(uString* str, uString** __retval)
{
    *__retval = Latin1Helpers::EncodeLatin1(str);
}

// public static string DecodeLatin1(string base64Str) [static] :634
uString* Latin1Helpers::DecodeLatin1(uString* base64Str)
{
    uArray* bytes = ::g::Uno::Text::Base64::GetBytes(base64Str);
    int len = uPtr(bytes)->Length();
    uArray* chars = uArray::New(::TYPES[33/*char[]*/], len);

    for (int i = 0; i < len; i++)
        uPtr(chars)->Item<uChar>(i) = (uChar)uPtr(bytes)->Item<uint8_t>(i);

    return uString::CharArray(chars);
}

// public static string EncodeLatin1(string str) [static] :647
uString* Latin1Helpers::EncodeLatin1(uString* str)
{
    uArray* bytes = uArray::New(::TYPES[4/*byte[]*/], uPtr(str)->Length());
    int len = str->Length();

    for (int i = 0; i < len; i++)
    {
        int c = (int)uPtr(str)->Item(i);

        if (c > 255)
            U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[44/*"The string ...*/]));

        uPtr(bytes)->Item<uint8_t>(i) = (uint8_t)c;
    }

    return ::g::Uno::Text::Base64::GetString(bytes);
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// public sealed class Lifecycle :142
// {
static void Lifecycle_build(uType* type)
{
    ::STRINGS[45] = uString::Const("enteringInteractive");
    ::STRINGS[46] = uString::Const("exitedInteractive");
    ::STRINGS[47] = uString::Const("enteringForeground");
    ::STRINGS[48] = uString::Const("enteringBackground");
    ::STRINGS[49] = uString::Const("stateChanged");
    ::STRINGS[50] = uString::Const("FuseJS/Lifecycle");
    ::STRINGS[51] = uString::Const("onEnteringInteractive");
    ::STRINGS[52] = uString::Const("onEnteringForeground");
    ::STRINGS[53] = uString::Const("onEnteringBackground");
    ::STRINGS[54] = uString::Const("onExitedInteractive");
    ::STRINGS[55] = uString::Const("state");
    ::STRINGS[56] = uString::Const("BACKGROUND");
    ::STRINGS[57] = uString::Const("FOREGROUND");
    ::STRINGS[58] = uString::Const("INTERACTIVE");
    ::TYPES[19] = uObject_typeof()->Array();
    ::TYPES[34] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[36] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[37] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        ::TYPES[34/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(::g::FuseJS::Lifecycle, _background), 0,
        ::TYPES[34/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(::g::FuseJS::Lifecycle, _foreground), 0,
        ::TYPES[34/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(::g::FuseJS::Lifecycle, _interactive), 0,
        ::TYPES[34/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(::g::FuseJS::Lifecycle, _state), 0,
        type, (uintptr_t)&::g::FuseJS::Lifecycle::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Lifecycle_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Lifecycle);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Lifecycle", options);
    type->fp_build_ = Lifecycle_build;
    type->fp_ctor_ = (void*)Lifecycle__New3_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Lifecycle() :151
void Lifecycle__ctor_3_fn(Lifecycle* __this)
{
    __this->ctor_3();
}

// private static int Converter(Fuse.Scripting.Context context, int state) :320
void Lifecycle__Converter_fn(::g::Fuse::Scripting::Context* context, int* state, int* __retval)
{
    *__retval = Lifecycle::Converter(context, *state);
}

// private static int GetApplicationStateBackground() :201
void Lifecycle__GetApplicationStateBackground_fn(int* __retval)
{
    *__retval = Lifecycle::GetApplicationStateBackground();
}

// private static int GetApplicationStateForeground() :209
void Lifecycle__GetApplicationStateForeground_fn(int* __retval)
{
    *__retval = Lifecycle::GetApplicationStateForeground();
}

// private static int GetApplicationStateInteractive() :217
void Lifecycle__GetApplicationStateInteractive_fn(int* __retval)
{
    *__retval = Lifecycle::GetApplicationStateInteractive();
}

// private static int GetCurrentState() :233
void Lifecycle__GetCurrentState_fn(int* __retval)
{
    *__retval = Lifecycle::GetCurrentState();
}

// public Lifecycle New() :151
void Lifecycle__New3_fn(Lifecycle** __retval)
{
    *__retval = Lifecycle::New3();
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState newState) :298
void Lifecycle__OnEnteringBackground_fn(Lifecycle* __this, int* newState)
{
    __this->OnEnteringBackground(*newState);
}

// private void OnEnteringForeground(Fuse.Platform.ApplicationState newState) :250
void Lifecycle__OnEnteringForeground_fn(Lifecycle* __this, int* newState)
{
    __this->OnEnteringForeground(*newState);
}

// private void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) :266
void Lifecycle__OnEnteringInteractive_fn(Lifecycle* __this, int* newState)
{
    __this->OnEnteringInteractive(*newState);
}

// private void OnExitedInteractive(Fuse.Platform.ApplicationState newState) :282
void Lifecycle__OnExitedInteractive_fn(Lifecycle* __this, int* newState)
{
    __this->OnExitedInteractive(*newState);
}

// private void OnStateChanged(Fuse.Platform.ApplicationState newState) :315
void Lifecycle__OnStateChanged_fn(Lifecycle* __this, int* newState)
{
    __this->OnStateChanged(*newState);
}

uSStrong<Lifecycle*> Lifecycle::_instance_;

// public Lifecycle() [instance] :151
void Lifecycle::ctor_3()
{
    ctor_2(true, uArray::Init<uObject*>(::TYPES[19/*object[]*/], 5, ::STRINGS[45/*"enteringInt...*/], ::STRINGS[46/*"exitedInter...*/], ::STRINGS[47/*"enteringFor...*/], ::STRINGS[48/*"enteringBac...*/], ::STRINGS[49/*"stateChanged"*/]));

    if (Lifecycle::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Lifecycle::_instance_ = this, ::STRINGS[50/*"FuseJS/Life...*/]);
    ::g::Fuse::Scripting::NativeEvent* onEnteringInteractive = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[51/*"onEnteringI...*/], true);
    ::g::Fuse::Scripting::NativeEvent* onEnteringForeground = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[52/*"onEnteringF...*/], true);
    ::g::Fuse::Scripting::NativeEvent* onEnteringBackground = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[53/*"onEnteringB...*/], true);
    ::g::Fuse::Scripting::NativeEvent* onExitedInteractive = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[54/*"onExitedInt...*/], true);
    On1(::STRINGS[45/*"enteringInt...*/], onEnteringInteractive);
    On1(::STRINGS[47/*"enteringFor...*/], onEnteringForeground);
    On1(::STRINGS[48/*"enteringBac...*/], onEnteringBackground);
    On1(::STRINGS[46/*"exitedInter...*/], onExitedInteractive);
    _state = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[34/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[55/*"state"*/], uDelegate::New(::TYPES[35/*Uno.Func<int>*/], (void*)Lifecycle__GetCurrentState_fn), NULL, uDelegate::New(::TYPES[36/*Fuse.Scripting.ValueConverter<int, int>*/], (void*)Lifecycle__Converter_fn)));
    _background = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[34/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[56/*"BACKGROUND"*/], uDelegate::New(::TYPES[35/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateBackground_fn), NULL, NULL));
    _foreground = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[34/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[57/*"FOREGROUND"*/], uDelegate::New(::TYPES[35/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateForeground_fn), NULL, NULL));
    _interactive = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[34/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[58/*"INTERACTIVE"*/], uDelegate::New(::TYPES[35/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateInteractive_fn), NULL, NULL));
    AddMember(_state);
    AddMember(onEnteringInteractive);
    AddMember(onEnteringForeground);
    AddMember(onEnteringBackground);
    AddMember(onExitedInteractive);
    AddMember(_background);
    AddMember(_foreground);
    AddMember(_interactive);
    ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringForeground_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringInteractive_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnExitedInteractive_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringBackground_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState newState) [instance] :298
void Lifecycle::OnEnteringBackground(int newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[19/*object[]*/], 1, ::STRINGS[48/*"enteringBac...*/]));
}

// private void OnEnteringForeground(Fuse.Platform.ApplicationState newState) [instance] :250
void Lifecycle::OnEnteringForeground(int newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[19/*object[]*/], 1, ::STRINGS[47/*"enteringFor...*/]));
}

// private void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) [instance] :266
void Lifecycle::OnEnteringInteractive(int newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[19/*object[]*/], 1, ::STRINGS[45/*"enteringInt...*/]));
}

// private void OnExitedInteractive(Fuse.Platform.ApplicationState newState) [instance] :282
void Lifecycle::OnExitedInteractive(int newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[19/*object[]*/], 1, ::STRINGS[46/*"exitedInter...*/]));
}

// private void OnStateChanged(Fuse.Platform.ApplicationState newState) [instance] :315
void Lifecycle::OnStateChanged(int newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[19/*object[]*/], 2, ::STRINGS[49/*"stateChanged"*/], uBox<int>(::g::Uno::Int_typeof(), newState)));
}

// private static int Converter(Fuse.Scripting.Context context, int state) [static] :320
int Lifecycle::Converter(::g::Fuse::Scripting::Context* context, int state)
{
    return state;
}

// private static int GetApplicationStateBackground() [static] :201
int Lifecycle::GetApplicationStateBackground()
{
    return 1;
}

// private static int GetApplicationStateForeground() [static] :209
int Lifecycle::GetApplicationStateForeground()
{
    return 2;
}

// private static int GetApplicationStateInteractive() [static] :217
int Lifecycle::GetApplicationStateInteractive()
{
    return 3;
}

// private static int GetCurrentState() [static] :233
int Lifecycle::GetCurrentState()
{
    return ::g::Fuse::Platform::Lifecycle::State();
}

// public Lifecycle New() [static] :151
Lifecycle* Lifecycle::New3()
{
    Lifecycle* obj1 = (Lifecycle*)uNew(Lifecycle_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// internal sealed class RaiseEvent :1033
// {
static void RaiseEvent_build(uType* type)
{
    ::STRINGS[59] = uString::Const("Cannot find message with name: ");
    ::STRINGS[60] = uString::Const("/usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno");
    ::STRINGS[61] = uString::Const("Raise");
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), offsetof(::g::FuseJS::RaiseEvent, Args), 0,
        ::g::Uno::String_typeof(), offsetof(::g::FuseJS::RaiseEvent, Name), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::FuseJS::RaiseEvent, Source), 0);
}

uType* RaiseEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RaiseEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.RaiseEvent", options);
    type->fp_build_ = RaiseEvent_build;
    type->fp_ctor_ = (void*)RaiseEvent__New1_fn;
    return type;
}

// public generated RaiseEvent() :1033
void RaiseEvent__ctor__fn(RaiseEvent* __this)
{
    __this->ctor_();
}

// public generated RaiseEvent New() :1033
void RaiseEvent__New1_fn(RaiseEvent** __retval)
{
    *__retval = RaiseEvent::New1();
}

// public void Raise() :1040
void RaiseEvent__Raise_fn(RaiseEvent* __this)
{
    __this->Raise();
}

// public generated RaiseEvent() [instance] :1033
void RaiseEvent::ctor_()
{
}

// public void Raise() [instance] :1040
void RaiseEvent::Raise()
{
    ::g::Fuse::UserEventDispatch* dispatch = ::g::Fuse::UserEventDispatch::GetByName(::g::Uno::UX::Selector__op_Implicit(Name));

    if (dispatch == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[59/*"Cannot find...*/], Name), this, ::STRINGS[60/*"/usr/local/...*/], 1045, ::STRINGS[61/*"Raise"*/], NULL);
        return;
    }

    uPtr(dispatch)->DirectRaise(Source, Args);
}

// public generated RaiseEvent New() [static] :1033
RaiseEvent* RaiseEvent::New1()
{
    RaiseEvent* obj1 = (RaiseEvent*)uNew(RaiseEvent_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// private sealed class Bundle.ReadBufferClosure :944
// {
static void Bundle__ReadBufferClosure_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::FuseJS::Bundle__ReadBufferClosure, _filename), 0);
}

uType* Bundle__ReadBufferClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Bundle__ReadBufferClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.Bundle.ReadBufferClosure", options);
    type->fp_build_ = Bundle__ReadBufferClosure_build;
    return type;
}

// public ReadBufferClosure(string filename) :948
void Bundle__ReadBufferClosure__ctor__fn(Bundle__ReadBufferClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public byte[] Invoke() :952
void Bundle__ReadBufferClosure__Invoke_fn(Bundle__ReadBufferClosure* __this, uArray** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadBufferClosure New(string filename) :948
void Bundle__ReadBufferClosure__New1_fn(uString* filename, Bundle__ReadBufferClosure** __retval)
{
    *__retval = Bundle__ReadBufferClosure::New1(filename);
}

// public ReadBufferClosure(string filename) [instance] :948
void Bundle__ReadBufferClosure::ctor_(uString* filename)
{
    _filename = filename;
}

// public byte[] Invoke() [instance] :952
uArray* Bundle__ReadBufferClosure::Invoke()
{
    ::g::Uno::IO::BundleFile* bfile;

    if (::g::FuseJS::Bundle::TryGetBundleFile(_filename, &bfile))
        return uPtr(bfile)->ReadAllBytes();

    return uArray::Init<int>(::TYPES[4/*byte[]*/], 0);
}

// public ReadBufferClosure New(string filename) [static] :948
Bundle__ReadBufferClosure* Bundle__ReadBufferClosure::New1(uString* filename)
{
    Bundle__ReadBufferClosure* obj1 = (Bundle__ReadBufferClosure*)uNew(Bundle__ReadBufferClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// private sealed class Bundle.ReadClosure :929
// {
static void Bundle__ReadClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::FuseJS::Bundle__ReadClosure, _filename), 0);
}

uType* Bundle__ReadClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Bundle__ReadClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.Bundle.ReadClosure", options);
    type->fp_build_ = Bundle__ReadClosure_build;
    return type;
}

// public ReadClosure(string filename) :933
void Bundle__ReadClosure__ctor__fn(Bundle__ReadClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public string Invoke() :938
void Bundle__ReadClosure__Invoke_fn(Bundle__ReadClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadClosure New(string filename) :933
void Bundle__ReadClosure__New1_fn(uString* filename, Bundle__ReadClosure** __retval)
{
    *__retval = Bundle__ReadClosure::New1(filename);
}

// public ReadClosure(string filename) [instance] :933
void Bundle__ReadClosure::ctor_(uString* filename)
{
    _filename = filename;
}

// public string Invoke() [instance] :938
uString* Bundle__ReadClosure::Invoke()
{
    return ::g::FuseJS::Bundle::ReadSync1(_filename);
}

// public ReadClosure New(string filename) [static] :933
Bundle__ReadClosure* Bundle__ReadClosure::New1(uString* filename)
{
    Bundle__ReadClosure* obj1 = (Bundle__ReadClosure*)uNew(Bundle__ReadClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno
// ------------------------------------------------

// public sealed class UserEvents :1055
// {
static void UserEvents_build(uType* type)
{
    ::STRINGS[62] = uString::Const("FuseJS/UserEvents");
    ::STRINGS[63] = uString::Const("raise");
    ::STRINGS[64] = uString::Const("The FuseJS/UserEvents `Raise` function is deprecated. Use the `object.raise` on a named event instead.");
    ::STRINGS[60] = uString::Const("/usr/local/share/uno/Packages/FuseJS/1.2.1/$.uno");
    ::STRINGS[61] = uString::Const("Raise");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[38] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[39] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[1/*string*/], uObject_typeof(), NULL);
    ::TYPES[40] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::FuseJS::UserEvents::_instance_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::FuseJS::UserEvents::_warn_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* UserEvents_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UserEvents);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.UserEvents", options);
    type->fp_build_ = UserEvents_build;
    type->fp_ctor_ = (void*)UserEvents__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public UserEvents() :1058
void UserEvents__ctor_2_fn(UserEvents* __this)
{
    __this->ctor_2();
}

// public UserEvents New() :1058
void UserEvents__New2_fn(UserEvents** __retval)
{
    *__retval = UserEvents::New2();
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) :1071
void UserEvents__Raise_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = UserEvents::Raise(context, args);
}

uSStrong<UserEvents*> UserEvents::_instance_;
bool UserEvents::_warn_;

// public UserEvents() [instance] :1058
void UserEvents::ctor_2()
{
    ctor_1();

    if (UserEvents::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(UserEvents::_instance_ = this, ::STRINGS[62/*"FuseJS/User...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[63/*"raise"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserEvents__Raise_fn)));
}

// public UserEvents New() [static] :1058
UserEvents* UserEvents::New2()
{
    UserEvents* obj4 = (UserEvents*)uNew(UserEvents_typeof());
    obj4->ctor_2();
    return obj4;
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) [static] :1071
uObject* UserEvents::Raise(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (!UserEvents::_warn_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[64/*"The FuseJS/...*/], context, ::STRINGS[60/*"/usr/local/...*/], 1076, ::STRINGS[61/*"Raise"*/]);
        UserEvents::_warn_ = true;
    }

    uString* eventName = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    ::g::Uno::Collections::Dictionary* postArgs = NULL;
    ::g::Fuse::Scripting::Object* p = (args->Length() > 1) ? uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[38/*Fuse.Scripting.Object*/]) : NULL;

    if (p != NULL)
    {
        uArray* keys = uPtr(p)->Keys();
        postArgs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[39/*Uno.Collections.Dictionary<string, object>*/]);

        for (int index2 = 0, length3 = uPtr(keys)->Length(); index2 < length3; ++index2)
        {
            uString* key = uPtr(keys)->Strong<uString*>(index2);
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(postArgs), key, uPtr(p)->Item(key));
        }
    }

    ::g::FuseJS::RaiseEvent* re = ::g::FuseJS::RaiseEvent::New1();
    re->Source = NULL;
    re->Name = eventName;
    re->Args = postArgs;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[40/*Uno.Action*/], (void*)::g::FuseJS::RaiseEvent__Raise_fn, re));
    return NULL;
}
// }

}} // ::g::FuseJS
