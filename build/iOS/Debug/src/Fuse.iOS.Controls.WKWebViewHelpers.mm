// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.2.1/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Controls.WKWebViewHelpers.h>
#include <iOS/NoZoomDelegate.h>
#include <ObjC.Object.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <WebKit/WebKit.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// internal static extern class WKWebViewHelpers :42
// {
static void WKWebViewHelpers_build(uType* type)
{
}

uClassType* WKWebViewHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Controls.WKWebViewHelpers", options);
    type->fp_build_ = WKWebViewHelpers_build;
    return type;
}

// public static ObjC.Object CreateWebView(bool zoomEnabled, bool scrollEnabled) :78
void WKWebViewHelpers__CreateWebView_fn(bool* zoomEnabled, bool* scrollEnabled, ::g::ObjC::Object** __retval)
{
    *__retval = WKWebViewHelpers::CreateWebView(*zoomEnabled, *scrollEnabled);
}

// public static void EvalOnWebView(ObjC.Object webview, string js) :54
void WKWebViewHelpers__EvalOnWebView_fn(::g::ObjC::Object* webview, uString* js)
{
    WKWebViewHelpers::EvalOnWebView(webview, js);
}

// public static void EvalOnWebViewWithHandler(ObjC.Object webview, string js, Uno.Action<string> handler) :45
void WKWebViewHelpers__EvalOnWebViewWithHandler_fn(::g::ObjC::Object* webview, uString* js, uDelegate* handler)
{
    WKWebViewHelpers::EvalOnWebViewWithHandler(webview, js, handler);
}

// public static void FreeMemory() :167
void WKWebViewHelpers__FreeMemory_fn()
{
    WKWebViewHelpers::FreeMemory();
}

// public static bool GetCanGoBack(ObjC.Object handle) :125
void WKWebViewHelpers__GetCanGoBack_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetCanGoBack(handle);
}

// public static bool GetCanGoForward(ObjC.Object handle) :139
void WKWebViewHelpers__GetCanGoForward_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetCanGoForward(handle);
}

// public static double GetEstimatedProgress(ObjC.Object handle) :111
void WKWebViewHelpers__GetEstimatedProgress_fn(::g::ObjC::Object* handle, double* __retval)
{
    *__retval = WKWebViewHelpers::GetEstimatedProgress(handle);
}

// public static bool GetIsLoading(ObjC.Object handle) :95
void WKWebViewHelpers__GetIsLoading_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetIsLoading(handle);
}

// public static string GetURL(ObjC.Object handle) :88
void WKWebViewHelpers__GetURL_fn(::g::ObjC::Object* handle, uString** __retval)
{
    *__retval = WKWebViewHelpers::GetURL(handle);
}

// public static void GoBack(ObjC.Object handle) :132
void WKWebViewHelpers__GoBack_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::GoBack(handle);
}

// public static void GoForward(ObjC.Object handle) :146
void WKWebViewHelpers__GoForward_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::GoForward(handle);
}

// public static void LoadHTML(ObjC.Object webview, string html, string baseURL) :61
void WKWebViewHelpers__LoadHTML_fn(::g::ObjC::Object* webview, uString* html, uString* baseURL)
{
    WKWebViewHelpers::LoadHTML(webview, html, baseURL);
}

// public static void LoadURL(ObjC.Object handle, string url) :102
void WKWebViewHelpers__LoadURL_fn(::g::ObjC::Object* handle, uString* url)
{
    WKWebViewHelpers::LoadURL(handle, url);
}

// public static void Reload(ObjC.Object handle) :153
void WKWebViewHelpers__Reload_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::Reload(handle);
}

// public static void SetNavigationDelegate(ObjC.Object webViewHandle, ObjC.Object delegateHandle) :175
void WKWebViewHelpers__SetNavigationDelegate_fn(::g::ObjC::Object* webViewHandle, ::g::ObjC::Object* delegateHandle)
{
    WKWebViewHelpers::SetNavigationDelegate(webViewHandle, delegateHandle);
}

// public static void StopLoading(ObjC.Object handle) :160
void WKWebViewHelpers__StopLoading_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::StopLoading(handle);
}

// public static ObjC.Object CreateWebView(bool zoomEnabled, bool scrollEnabled) [static] :78
::g::ObjC::Object* WKWebViewHelpers::CreateWebView(bool zoomEnabled, bool scrollEnabled)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (bool zoomEnabled, bool scrollEnabled) -> ::id
        {
            WKWebView* wv = [[WKWebView alloc] init];
            wv.scrollView.delegate = zoomEnabled ? NULL : [[NoZoomDelegate alloc] init];
            wv.scrollView.scrollEnabled = scrollEnabled;
            
            return wv;
        } (zoomEnabled, scrollEnabled));
        
    }
    
}

// public static void EvalOnWebView(ObjC.Object webview, string js) [static] :54
void WKWebViewHelpers::EvalOnWebView(::g::ObjC::Object* webview, uString* js)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* js) -> void
        {
            WKWebView* wv = webview;
            [wv evaluateJavaScript:js completionHandler:nil];
        } (::g::ObjC::Object::GetHandle(webview), ::uObjC::NativeString(js));
        
    }
    
}

// public static void EvalOnWebViewWithHandler(ObjC.Object webview, string js, Uno.Action<string> handler) [static] :45
void WKWebViewHelpers::EvalOnWebViewWithHandler(::g::ObjC::Object* webview, uString* js, uDelegate* handler)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* js, ::uObjC::Function<void, ::NSString*> handler) -> void
        {
            WKWebView* wv = webview;
            [wv evaluateJavaScript:js completionHandler:^(id result, NSError* error) {
            	handler(result);
            }];
        } (::g::ObjC::Object::GetHandle(webview), ::uObjC::NativeString(js), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: handler]));
        
    }
    
}

// public static void FreeMemory() [static] :167
void WKWebViewHelpers::FreeMemory()
{
    @autoreleasepool
    {
        id cache = [NSURLCache sharedURLCache];
        if(cache!=nil)
        	[cache removeAllCachedResponses];
    }
    
}

// public static bool GetCanGoBack(ObjC.Object handle) [static] :125
bool WKWebViewHelpers::GetCanGoBack(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            return wv.canGoBack;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static bool GetCanGoForward(ObjC.Object handle) [static] :139
bool WKWebViewHelpers::GetCanGoForward(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            return wv.canGoForward;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static double GetEstimatedProgress(ObjC.Object handle) [static] :111
double WKWebViewHelpers::GetEstimatedProgress(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> double
        {
            WKWebView* wv = handle;
            return wv.estimatedProgress;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static bool GetIsLoading(ObjC.Object handle) [static] :95
bool WKWebViewHelpers::GetIsLoading(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            return wv.loading;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static string GetURL(ObjC.Object handle) [static] :88
uString* WKWebViewHelpers::GetURL(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            WKWebView* wv = handle;
            return wv.URL.absoluteString;
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// public static void GoBack(ObjC.Object handle) [static] :132
void WKWebViewHelpers::GoBack(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv goBack];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static void GoForward(ObjC.Object handle) [static] :146
void WKWebViewHelpers::GoForward(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv goForward];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static void LoadHTML(ObjC.Object webview, string html, string baseURL) [static] :61
void WKWebViewHelpers::LoadHTML(::g::ObjC::Object* webview, uString* html, uString* baseURL)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* html, ::NSString* baseURL) -> void
        {
            WKWebView* wv = webview;
            [wv loadHTMLString:html baseURL:[NSURL URLWithString:baseURL]];
        } (::g::ObjC::Object::GetHandle(webview), ::uObjC::NativeString(html), ::uObjC::NativeString(baseURL));
        
    }
    
}

// public static void LoadURL(ObjC.Object handle, string url) [static] :102
void WKWebViewHelpers::LoadURL(::g::ObjC::Object* handle, uString* url)
{
    @autoreleasepool
    {
        [] (::id handle, ::NSString* url) -> void
        {
            WKWebView* wv = handle;
            id nsurl = [NSURL URLWithString:url];
            id request = [[NSURLRequest alloc] initWithURL:nsurl];
            [wv loadRequest:request];
        } (::g::ObjC::Object::GetHandle(handle), ::uObjC::NativeString(url));
        
    }
    
}

// public static void Reload(ObjC.Object handle) [static] :153
void WKWebViewHelpers::Reload(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv reload];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static void SetNavigationDelegate(ObjC.Object webViewHandle, ObjC.Object delegateHandle) [static] :175
void WKWebViewHelpers::SetNavigationDelegate(::g::ObjC::Object* webViewHandle, ::g::ObjC::Object* delegateHandle)
{
    @autoreleasepool
    {
        [] (::id webViewHandle, ::id delegateHandle) -> void
        {
            [webViewHandle setNavigationDelegate:delegateHandle];
        } (::g::ObjC::Object::GetHandle(webViewHandle), ::g::ObjC::Object::GetHandle(delegateHandle));
        
    }
    
}

// public static void StopLoading(ObjC.Object handle) [static] :160
void WKWebViewHelpers::StopLoading(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv stopLoading];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}
// }

}}}} // ::g::Fuse::iOS::Controls
