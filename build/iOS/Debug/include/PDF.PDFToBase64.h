// This file was generated based on iOSImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.String.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace PDF{struct PDFToBase64;}}

namespace g{
namespace PDF{

// internal sealed extern class PDFToBase64 :104
// {
::g::Uno::Threading::Future_type* PDFToBase64_typeof();
void PDFToBase64__ctor_7_fn(PDFToBase64* __this, uString* file);
void PDFToBase64__New5_fn(uString* file, PDFToBase64** __retval);
void PDFToBase64__Reject1_fn(PDFToBase64* __this, uString* reason);
void PDFToBase64__Resolve1_fn(PDFToBase64* __this, uString* message);

struct PDFToBase64 : ::g::Uno::Threading::Promise
{
    void ctor_7(uString* file);
    void Reject1(uString* reason);
    void Resolve1(uString* message);
    static PDFToBase64* New5(uString* file);
};
// }

}} // ::g::PDF
