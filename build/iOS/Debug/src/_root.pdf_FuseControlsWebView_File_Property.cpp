// This file was generated based on '.uno/ux11/pdf.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.pdf_FuseControlsWebView_File_Property.h>
#include <Fuse.Controls.WebView.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class pdf_FuseControlsWebView_File_Property :1
// {
static void pdf_FuseControlsWebView_File_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::WebView_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.WebView*/], offsetof(::g::pdf_FuseControlsWebView_File_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* pdf_FuseControlsWebView_File_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(pdf_FuseControlsWebView_File_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("pdf_FuseControlsWebView_File_Property", options);
    type->fp_build_ = pdf_FuseControlsWebView_File_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))pdf_FuseControlsWebView_File_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))pdf_FuseControlsWebView_File_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))pdf_FuseControlsWebView_File_Property__Set1_fn;
    return type;
}

// public pdf_FuseControlsWebView_File_Property(Fuse.Controls.WebView obj, Uno.UX.Selector name) :4
void pdf_FuseControlsWebView_File_Property__ctor_3_fn(pdf_FuseControlsWebView_File_Property* __this, ::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.FileSource Get(Uno.UX.PropertyObject obj) :6
void pdf_FuseControlsWebView_File_Property__Get1_fn(pdf_FuseControlsWebView_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::WebView*>(obj, ::TYPES[0/*Fuse.Controls.WebView*/]))->File(), void();
}

// public pdf_FuseControlsWebView_File_Property New(Fuse.Controls.WebView obj, Uno.UX.Selector name) :4
void pdf_FuseControlsWebView_File_Property__New1_fn(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector* name, pdf_FuseControlsWebView_File_Property** __retval)
{
    *__retval = pdf_FuseControlsWebView_File_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void pdf_FuseControlsWebView_File_Property__get_Object_fn(pdf_FuseControlsWebView_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.FileSource v, Uno.UX.IPropertyListener origin) :7
void pdf_FuseControlsWebView_File_Property__Set1_fn(pdf_FuseControlsWebView_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::WebView*>(obj, ::TYPES[0/*Fuse.Controls.WebView*/]))->File(v);
}

// public pdf_FuseControlsWebView_File_Property(Fuse.Controls.WebView obj, Uno.UX.Selector name) [instance] :4
void pdf_FuseControlsWebView_File_Property::ctor_3(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public pdf_FuseControlsWebView_File_Property New(Fuse.Controls.WebView obj, Uno.UX.Selector name) [static] :4
pdf_FuseControlsWebView_File_Property* pdf_FuseControlsWebView_File_Property::New1(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector name)
{
    pdf_FuseControlsWebView_File_Property* obj1 = (pdf_FuseControlsWebView_File_Property*)uNew(pdf_FuseControlsWebView_File_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
