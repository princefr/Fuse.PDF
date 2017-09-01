// This file was generated based on '.uno/ux11/pdf.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct pdf_FuseControlsWebView_Url_Property;}

namespace g{

// internal sealed class pdf_FuseControlsWebView_Url_Property :1
// {
::g::Uno::UX::Property1_type* pdf_FuseControlsWebView_Url_Property_typeof();
void pdf_FuseControlsWebView_Url_Property__ctor_3_fn(pdf_FuseControlsWebView_Url_Property* __this, ::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector* name);
void pdf_FuseControlsWebView_Url_Property__Get1_fn(pdf_FuseControlsWebView_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void pdf_FuseControlsWebView_Url_Property__New1_fn(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector* name, pdf_FuseControlsWebView_Url_Property** __retval);
void pdf_FuseControlsWebView_Url_Property__get_Object_fn(pdf_FuseControlsWebView_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void pdf_FuseControlsWebView_Url_Property__Set1_fn(pdf_FuseControlsWebView_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void pdf_FuseControlsWebView_Url_Property__get_SupportsOriginSetter_fn(pdf_FuseControlsWebView_Url_Property* __this, bool* __retval);

struct pdf_FuseControlsWebView_Url_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::WebView*> _obj;

    void ctor_3(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector name);
    static pdf_FuseControlsWebView_Url_Property* New1(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
