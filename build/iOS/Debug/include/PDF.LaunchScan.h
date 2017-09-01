// This file was generated based on iOSImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.String.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace PDF{struct LaunchScan;}}

namespace g{
namespace PDF{

// internal sealed extern class LaunchScan :59
// {
::g::Uno::Threading::Future_type* LaunchScan_typeof();
void LaunchScan__ctor_7_fn(LaunchScan* __this, uString* file);
void LaunchScan__New5_fn(uString* file, LaunchScan** __retval);
void LaunchScan__Reject1_fn(LaunchScan* __this, uString* reason);
void LaunchScan__Resolve1_fn(LaunchScan* __this, uString* message);

struct LaunchScan : ::g::Uno::Threading::Promise
{
    void ctor_7(uString* file);
    void Reject1(uString* reason);
    void Resolve1(uString* message);
    static LaunchScan* New5(uString* file);
};
// }

}} // ::g::PDF
