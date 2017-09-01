// This file was generated based on iOSImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <PDF.Transform.h>
#include <Uno.Exception.h>
#include <uObjC.Foreign.h>

namespace g{
namespace PDF{

// internal sealed extern class Transform :18
// {
static void Transform_build(uType* type)
{
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* Transform_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Transform);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("PDF.Transform", options);
    type->fp_build_ = Transform_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public Transform(string base64, string directory) :23
void Transform__ctor_7_fn(Transform* __this, uString* base64, uString* directory)
{
    __this->ctor_7(base64, directory);
}

// public Transform New(string base64, string directory) :23
void Transform__New5_fn(uString* base64, uString* directory, Transform** __retval)
{
    *__retval = Transform::New5(base64, directory);
}

// private void Reject(string reason) :49
void Transform__Reject1_fn(Transform* __this, uString* reason)
{
    __this->Reject1(reason);
}

// private void Resolve(string message) :44
void Transform__Resolve1_fn(Transform* __this, uString* message)
{
    __this->Resolve1(message);
}

// public Transform(string base64, string directory) [instance] :23
void Transform::ctor_7(uString* base64, uString* directory)
{
    ctor_3();
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* base64, ::NSString* directory) -> void
        {
            @try {
                		NSString *base64Encoded = base64;
            		 		NSData *data = [[NSData alloc] initWithBase64EncodedString:base64Encoded options:0];
            		 		NSString *documentsDirectory = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
            				NSString *path = [documentsDirectory stringByAppendingPathComponent:directory];
            				[data writeToFile:path atomically:YES];
            				[&]() -> void { ::uForeignPool __foreignPool; uCast<Transform*>((_this).unoObject, Transform_typeof())->Resolve1(::uObjC::UnoString(path)); }();
            		    }
            		    @catch (NSException *exception) {
            		        NSLog(@"%@", exception.reason);
            		        [&]() -> void { ::uForeignPool __foreignPool; uCast<Transform*>((_this).unoObject, Transform_typeof())->Reject1(::uObjC::UnoString(@"Vous devez etre connecter")); }();
            		    }
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(base64), ::uObjC::NativeString(directory));
        
    }
    
}

// private void Reject(string reason) [instance] :49
void Transform::Reject1(uString* reason)
{
    Reject(::g::Uno::Exception::New2(reason));
}

// private void Resolve(string message) [instance] :44
void Transform::Resolve1(uString* message)
{
    ::g::Uno::Threading::Promise__Resolve_fn(this, message);
}

// public Transform New(string base64, string directory) [static] :23
Transform* Transform::New5(uString* base64, uString* directory)
{
    Transform* obj1 = (Transform*)uNew(Transform_typeof());
    obj1->ctor_7(base64, directory);
    return obj1;
}
// }

}} // ::g::PDF
