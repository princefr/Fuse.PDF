// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Testing.TestFailedException.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.Testing.UnoTestingHelper.TestFailure.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Testing{

// /usr/local/share/uno/Packages/Fuse.Testing/1.2.1/$.uno
// ------------------------------------------------------

// internal sealed class TestFailedException :11
// {
static void TestFailedException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* TestFailedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(TestFailedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Testing.TestFailedException", options);
    type->fp_build_ = TestFailedException_build;
    return type;
}

// public TestFailedException(string message) :13
void TestFailedException__ctor_3_fn(TestFailedException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public TestFailedException New(string message) :13
void TestFailedException__New4_fn(uString* message, TestFailedException** __retval)
{
    *__retval = TestFailedException::New4(message);
}

// public TestFailedException(string message) [instance] :13
void TestFailedException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public TestFailedException New(string message) [static] :13
TestFailedException* TestFailedException::New4(uString* message)
{
    TestFailedException* obj1 = (TestFailedException*)uNew(TestFailedException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Testing/1.2.1/$.uno
// ------------------------------------------------------

// private sealed class UnoTestingHelper.TestFailure :31
// {
static void UnoTestingHelper__TestFailure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Testing::UnoTestingHelper__TestFailure, _message), 0);
}

uType* UnoTestingHelper__TestFailure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UnoTestingHelper__TestFailure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Testing.UnoTestingHelper.TestFailure", options);
    type->fp_build_ = UnoTestingHelper__TestFailure_build;
    return type;
}

// public TestFailure(string message) :34
void UnoTestingHelper__TestFailure__ctor__fn(UnoTestingHelper__TestFailure* __this, uString* message)
{
    __this->ctor_(message);
}

// public void Fail() :39
void UnoTestingHelper__TestFailure__Fail_fn(UnoTestingHelper__TestFailure* __this)
{
    __this->Fail();
}

// public TestFailure New(string message) :34
void UnoTestingHelper__TestFailure__New1_fn(uString* message, UnoTestingHelper__TestFailure** __retval)
{
    *__retval = UnoTestingHelper__TestFailure::New1(message);
}

// public TestFailure(string message) [instance] :34
void UnoTestingHelper__TestFailure::ctor_(uString* message)
{
    _message = message;
}

// public void Fail() [instance] :39
void UnoTestingHelper__TestFailure::Fail()
{
    U_THROW(::g::Fuse::Testing::TestFailedException::New4(_message));
}

// public TestFailure New(string message) [static] :34
UnoTestingHelper__TestFailure* UnoTestingHelper__TestFailure::New1(uString* message)
{
    UnoTestingHelper__TestFailure* obj1 = (UnoTestingHelper__TestFailure*)uNew(UnoTestingHelper__TestFailure_typeof());
    obj1->ctor_(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Testing/1.2.1/$.uno
// ------------------------------------------------------

// public sealed class UnoTestingHelper :19
// {
static void UnoTestingHelper_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Internal/UnoTestingHelper");
    ::STRINGS[1] = uString::Const("testFailed");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Fuse::Testing::UnoTestingHelper::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* UnoTestingHelper_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UnoTestingHelper);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Testing.UnoTestingHelper", options);
    type->fp_build_ = UnoTestingHelper_build;
    type->fp_ctor_ = (void*)UnoTestingHelper__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public UnoTestingHelper() :22
void UnoTestingHelper__ctor_2_fn(UnoTestingHelper* __this)
{
    __this->ctor_2();
}

// public UnoTestingHelper New() :22
void UnoTestingHelper__New2_fn(UnoTestingHelper** __retval)
{
    *__retval = UnoTestingHelper::New2();
}

// private static object TestFailed(Fuse.Scripting.Context c, object[] args) :45
void UnoTestingHelper__TestFailed_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = UnoTestingHelper::TestFailed(c, args);
}

uSStrong<UnoTestingHelper*> UnoTestingHelper::_instance_;

// public UnoTestingHelper() [instance] :22
void UnoTestingHelper::ctor_2()
{
    ctor_1();

    if (UnoTestingHelper::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(UnoTestingHelper::_instance_ = this, ::STRINGS[0/*"FuseJS/Inte...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"testFailed"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UnoTestingHelper__TestFailed_fn)));
}

// public UnoTestingHelper New() [static] :22
UnoTestingHelper* UnoTestingHelper::New2()
{
    UnoTestingHelper* obj1 = (UnoTestingHelper*)uNew(UnoTestingHelper_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static object TestFailed(Fuse.Scripting.Context c, object[] args) [static] :45
uObject* UnoTestingHelper::TestFailed(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uString* message = ::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(0)));
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)UnoTestingHelper__TestFailure__Fail_fn, UnoTestingHelper__TestFailure::New1(message)));
    return NULL;
}
// }

}}} // ::g::Fuse::Testing
