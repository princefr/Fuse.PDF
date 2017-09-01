// This file was generated based on iOSImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <PDF.PDFToBase64.h>
#include <Uno.Exception.h>
#include <uObjC.Foreign.h>

namespace g{
namespace PDF{

// internal sealed extern class PDFToBase64 :104
// {
static void PDFToBase64_build(uType* type)
{
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* PDFToBase64_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PDFToBase64);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("PDF.PDFToBase64", options);
    type->fp_build_ = PDFToBase64_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public PDFToBase64(string file) :109
void PDFToBase64__ctor_7_fn(PDFToBase64* __this, uString* file)
{
    __this->ctor_7(file);
}

// public PDFToBase64 New(string file) :109
void PDFToBase64__New5_fn(uString* file, PDFToBase64** __retval)
{
    *__retval = PDFToBase64::New5(file);
}

// private void Reject(string reason) :135
void PDFToBase64__Reject1_fn(PDFToBase64* __this, uString* reason)
{
    __this->Reject1(reason);
}

// private void Resolve(string message) :130
void PDFToBase64__Resolve1_fn(PDFToBase64* __this, uString* message)
{
    __this->Resolve1(message);
}

// public PDFToBase64(string file) [instance] :109
void PDFToBase64::ctor_7(uString* file)
{
    ctor_3();
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* file) -> void
        {
            @try {
            
            		    	NSString *documentsDirectory = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
            				NSString *path = [documentsDirectory stringByAppendingPathComponent:file];
            				NSData *zipFileData = [NSData dataWithContentsOfFile:path];
                				NSString *base64String = [zipFileData base64EncodedStringWithOptions:0];
                				[&]() -> void { ::uForeignPool __foreignPool; uCast<PDFToBase64*>((_this).unoObject, PDFToBase64_typeof())->Resolve1(::uObjC::UnoString(base64String)); }();
            
            		    }
            		    @catch (NSException *exception) {
            		    	[&]() -> void { ::uForeignPool __foreignPool; uCast<PDFToBase64*>((_this).unoObject, PDFToBase64_typeof())->Reject1(::uObjC::UnoString(exception.reason)); }();
            		    }
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(file));
        
    }
    
}

// private void Reject(string reason) [instance] :135
void PDFToBase64::Reject1(uString* reason)
{
    Reject(::g::Uno::Exception::New2(reason));
}

// private void Resolve(string message) [instance] :130
void PDFToBase64::Resolve1(uString* message)
{
    ::g::Uno::Threading::Promise__Resolve_fn(this, message);
}

// public PDFToBase64 New(string file) [static] :109
PDFToBase64* PDFToBase64::New5(uString* file)
{
    PDFToBase64* obj1 = (PDFToBase64*)uNew(PDFToBase64_typeof());
    obj1->ctor_7(file);
    return obj1;
}
// }

}} // ::g::PDF
