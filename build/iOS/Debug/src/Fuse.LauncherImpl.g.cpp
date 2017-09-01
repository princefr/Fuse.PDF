// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Bindings.iOSDeviceInterop.h>
#include <Fuse.LauncherImpl.EmailLauncher.h>
#include <Fuse.LauncherImpl.InterAppLauncher.h>
#include <Fuse.LauncherImpl.MapsLauncher.h>
#include <Fuse.LauncherImpl.PhoneLauncher.h>
#include <Fuse.PhoneUriHelper.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
static uString* STRINGS[12];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace LauncherImpl{

// /Users/Ondondaprince/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Email/1.2.1/email/$.uno
// ---------------------------------------------------------------------------------------------------------

// public static class EmailLauncher :17
// {
static void EmailLauncher_build(uType* type)
{
    ::STRINGS[0] = uString::Const("to");
    ::STRINGS[1] = uString::Const("mailto:");
    ::STRINGS[2] = uString::Const("?");
    ::STRINGS[3] = uString::Const("cc=");
    ::STRINGS[4] = uString::Const("&");
    ::STRINGS[5] = uString::Const("bcc=");
    ::STRINGS[6] = uString::Const("subject=");
    ::STRINGS[7] = uString::Const("body=");
}

uClassType* EmailLauncher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LauncherImpl.EmailLauncher", options);
    type->fp_build_ = EmailLauncher_build;
    return type;
}

// public static void LaunchEmail(string to, string carbonCopy, string blindCarbonCopy, string subject, string message) :28
void EmailLauncher__LaunchEmail_fn(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message)
{
    EmailLauncher::LaunchEmail(to, carbonCopy, blindCarbonCopy, subject, message);
}

// public static void LaunchEmail(string to, string carbonCopy, string blindCarbonCopy, string subject, string message) [static] :28
void EmailLauncher::LaunchEmail(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message)
{
    if (::g::Uno::String::op_Equality(to, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"to"*/]));

    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    builder->Append2(::STRINGS[1/*"mailto:"*/]);
    builder->Append2(to);
    builder->Append2(::STRINGS[2/*"?"*/]);

    if (!::g::Uno::String::IsNullOrEmpty(carbonCopy))
    {
        uPtr(builder)->Append2(::STRINGS[3/*"cc="*/]);
        builder->Append2(carbonCopy);
    }

    if (!::g::Uno::String::IsNullOrEmpty(blindCarbonCopy))
    {
        uPtr(builder)->Append2(::STRINGS[4/*"&"*/]);
        builder->Append2(::STRINGS[5/*"bcc="*/]);
        builder->Append2(blindCarbonCopy);
    }

    if (!::g::Uno::String::IsNullOrEmpty(subject))
    {
        uPtr(builder)->Append2(::STRINGS[4/*"&"*/]);
        builder->Append2(::STRINGS[6/*"subject="*/]);
        builder->Append2(::g::Uno::Net::Http::Uri::Encode(subject));
    }

    if (!::g::Uno::String::IsNullOrEmpty(message))
    {
        uPtr(builder)->Append2(::STRINGS[4/*"&"*/]);
        builder->Append2(::STRINGS[7/*"body="*/]);
        builder->Append2(::g::Uno::Net::Http::Uri::Encode(message));
    }

    ::g::Fuse::iOS::Bindings::iOSDeviceInterop::LaunchUriiOS(uPtr(builder)->ToString());
}
// }

// /Users/Ondondaprince/Library/Application Support/Fusetools/Packages/Fuse.Launcher.InterApp/1.2.1/interapp/$.uno
// ---------------------------------------------------------------------------------------------------------------

// public static class InterAppLauncher :17
// {
static void InterAppLauncher_build(uType* type)
{
}

uClassType* InterAppLauncher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LauncherImpl.InterAppLauncher", options);
    type->fp_build_ = InterAppLauncher_build;
    return type;
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) :28
void InterAppLauncher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri)
{
    InterAppLauncher::LaunchUri(uri);
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) [static] :28
void InterAppLauncher::LaunchUri(::g::Uno::Net::Http::Uri* uri)
{
    ::g::Fuse::iOS::Bindings::iOSDeviceInterop::LaunchUriiOS(uPtr(uri)->AbsoluteUri());
}
// }

// /Users/Ondondaprince/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Maps/1.2.1/maps/$.uno
// -------------------------------------------------------------------------------------------------------

// public static class MapsLauncher :17
// {
static void MapsLauncher_build(uType* type)
{
    ::STRINGS[8] = uString::Const(",");
    ::STRINGS[9] = uString::Const("http://maps.apple.com/maps?q=");
    ::STRINGS[10] = uString::Const("&ll=");
    ::STRINGS[11] = uString::Const("&sll=");
    ::TYPES[0] = ::g::Uno::Double_typeof();
}

uClassType* MapsLauncher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LauncherImpl.MapsLauncher", options);
    type->fp_build_ = MapsLauncher_build;
    return type;
}

// public static void LaunchMaps(double latitude, double longitude) :28
void MapsLauncher__LaunchMaps_fn(double* latitude, double* longitude)
{
    MapsLauncher::LaunchMaps(*latitude, *longitude);
}

// public static void LaunchMaps(double latitude, double longitude, string query) :50
void MapsLauncher__LaunchMaps1_fn(double* latitude, double* longitude, uString* query)
{
    MapsLauncher::LaunchMaps1(*latitude, *longitude, query);
}

// public static void LaunchMaps(string query) :41
void MapsLauncher__LaunchMaps2_fn(uString* query)
{
    MapsLauncher::LaunchMaps2(query);
}

// public static void LaunchMaps(double latitude, double longitude) [static] :28
void MapsLauncher::LaunchMaps(double latitude, double longitude)
{
    uString* latlon = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Double::ToString(latitude, ::TYPES[0/*double*/]), ::STRINGS[8/*","*/]), ::g::Uno::Double::ToString(longitude, ::TYPES[0/*double*/]));
    ::g::Fuse::iOS::Bindings::iOSDeviceInterop::LaunchUriiOS(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"http://maps...*/], latlon), ::STRINGS[10/*"&ll="*/]), latlon));
}

// public static void LaunchMaps(double latitude, double longitude, string query) [static] :50
void MapsLauncher::LaunchMaps1(double latitude, double longitude, uString* query)
{
    uString* latlon = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Double::ToString(latitude, ::TYPES[0/*double*/]), ::STRINGS[8/*","*/]), ::g::Uno::Double::ToString(longitude, ::TYPES[0/*double*/]));
    query = ::g::Uno::Net::Http::Uri::Encode(query);
    ::g::Fuse::iOS::Bindings::iOSDeviceInterop::LaunchUriiOS(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"http://maps...*/], query), ::STRINGS[11/*"&sll="*/]), latlon));
}

// public static void LaunchMaps(string query) [static] :41
void MapsLauncher::LaunchMaps2(uString* query)
{
    query = ::g::Uno::Net::Http::Uri::Encode(query);
    ::g::Fuse::iOS::Bindings::iOSDeviceInterop::LaunchUriiOS(::g::Uno::String::op_Addition2(::STRINGS[9/*"http://maps...*/], query));
}
// }

// /Users/Ondondaprince/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Phone/1.2.1/phone/$.uno
// ---------------------------------------------------------------------------------------------------------

// public static class PhoneLauncher :15
// {
static void PhoneLauncher_build(uType* type)
{
}

uClassType* PhoneLauncher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LauncherImpl.PhoneLauncher", options);
    type->fp_build_ = PhoneLauncher_build;
    return type;
}

// public static void LaunchCall(string callString) :17
void PhoneLauncher__LaunchCall_fn(uString* callString)
{
    PhoneLauncher::LaunchCall(callString);
}

// public static void LaunchCall(string callString) [static] :17
void PhoneLauncher::LaunchCall(uString* callString)
{
    uString* uri = ::g::Fuse::PhoneUriHelper::PhoneNumberToUri(callString);
    ::g::Fuse::iOS::Bindings::iOSDeviceInterop::LaunchUriiOS(uri);
}
// }

}}} // ::g::Fuse::LauncherImpl
