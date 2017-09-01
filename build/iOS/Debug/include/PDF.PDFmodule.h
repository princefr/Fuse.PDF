// This file was generated based on PdfJs.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace PDF{struct PDFmodule;}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace PDF{

// public sealed class PDFmodule :21
// {
::g::Fuse::Scripting::NativeModule_type* PDFmodule_typeof();
void PDFmodule__ctor_2_fn(PDFmodule* __this);
void PDFmodule__LaunchScan_fn(PDFmodule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void PDFmodule__New2_fn(PDFmodule** __retval);
void PDFmodule__PDFToBase64_fn(PDFmodule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void PDFmodule__Transform_fn(PDFmodule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);

struct PDFmodule : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<PDFmodule*> _instance_;
    static uSStrong<PDFmodule*>& _instance() { return _instance_; }

    void ctor_2();
    ::g::Uno::Threading::Future1* LaunchScan(uArray* args);
    ::g::Uno::Threading::Future1* PDFToBase64(uArray* args);
    ::g::Uno::Threading::Future1* Transform(uArray* args);
    static PDFmodule* New2();
};
// }

}} // ::g::PDF
