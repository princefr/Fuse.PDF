// This file was generated based on iOSImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Launcher.h>
#include <PDF.LaunchScan.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.InvalidCastException.h>
#include <Uno.Net.Http.Uri.h>
#include <uObjC.Foreign.h>
#include <WebKit/WebKit.h>
static uString* STRINGS[3];
static uType* TYPES[1];

namespace g{
namespace PDF{

// internal sealed extern class LaunchScan :59
// {
static void LaunchScan_build(uType* type)
{
    ::STRINGS[0] = uString::Const("passed here");
    ::STRINGS[1] = uString::Const("iOSImpl.uno");
    ::STRINGS[2] = uString::Const("its not working");
    ::TYPES[0] = ::g::Uno::InvalidCastException_typeof();
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* LaunchScan_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LaunchScan);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("PDF.LaunchScan", options);
    type->fp_build_ = LaunchScan_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public LaunchScan(string file) :65
void LaunchScan__ctor_7_fn(LaunchScan* __this, uString* file)
{
    __this->ctor_7(file);
}

// public LaunchScan New(string file) :65
void LaunchScan__New5_fn(uString* file, LaunchScan** __retval)
{
    *__retval = LaunchScan::New5(file);
}

// private void Reject(string reason) :94
void LaunchScan__Reject1_fn(LaunchScan* __this, uString* reason)
{
    __this->Reject1(reason);
}

// private void Resolve(string message) :82
void LaunchScan__Resolve1_fn(LaunchScan* __this, uString* message)
{
    __this->Resolve1(message);
}

// public LaunchScan(string file) [instance] :65
void LaunchScan::ctor_7(uString* file)
{
    ctor_3();
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* file) -> void
        {
            @try {
            			NSString *documentsDirectory = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
            			NSString *path = [documentsDirectory stringByAppendingPathComponent:file];
            			NSURL *targetURL = [NSURL fileURLWithPath:path];
            			NSString *toDisplay = [targetURL absoluteString];
            			[&]() -> void { ::uForeignPool __foreignPool; uCast<LaunchScan*>((_this).unoObject, LaunchScan_typeof())->Resolve1(::uObjC::UnoString(toDisplay)); }();
            		    }
            		    @catch (NSException *exception) {
            		        NSLog(@"%@", exception.reason);
            		        [&]() -> void { ::uForeignPool __foreignPool; uCast<LaunchScan*>((_this).unoObject, LaunchScan_typeof())->Reject1(::uObjC::UnoString(@"La lecture du fichier a echoué")); }();
            		    }
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(file));
        
    }
    
}

// private void Reject(string reason) [instance] :94
void LaunchScan::Reject1(uString* reason)
{
    Reject(::g::Uno::Exception::New2(reason));
}

// private void Resolve(string message) [instance] :82
void LaunchScan::Resolve1(uString* message)
{
    try
    {
        ::g::Fuse::Launcher::LaunchUri(::g::Uno::Net::Http::Uri::New1(message));
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[0/*"passed here"*/], 0, ::STRINGS[1/*"iOSImpl.uno"*/], 86);
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[0/*Uno.InvalidCastException*/]))
        {
            ::g::Uno::InvalidCastException* e = (::g::Uno::InvalidCastException*)__t.Exception;
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[2/*"its not wor...*/], 0, ::STRINGS[1/*"iOSImpl.uno"*/], 89);
        }
        else throw __t;
    }

    ::g::Uno::Threading::Promise__Resolve_fn(this, message);
}

// public LaunchScan New(string file) [static] :65
LaunchScan* LaunchScan::New5(uString* file)
{
    LaunchScan* obj1 = (LaunchScan*)uNew(LaunchScan_typeof());
    obj1->ctor_7(file);
    return obj1;
}
// }

}} // ::g::PDF
