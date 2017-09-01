// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Device.h>
#include <UIKit/UIKit.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{

// internal static extern class Device :250
// {
static void Device_build(uType* type)
{
}

uClassType* Device_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Device", options);
    type->fp_build_ = Device_build;
    return type;
}

// private static int GetStatusBarOrientation() :269
void Device__GetStatusBarOrientation_fn(int* __retval)
{
    *__retval = Device::GetStatusBarOrientation();
}

// public static int get_StatusBarOrientation() :259
void Device__get_StatusBarOrientation_fn(int* __retval)
{
    *__retval = Device::StatusBarOrientation();
}

// private static int GetStatusBarOrientation() [static] :269
int Device::GetStatusBarOrientation()
{
    @autoreleasepool
    {
        return (int)[[UIApplication sharedApplication] statusBarOrientation];
    }
    
}

// public static int get_StatusBarOrientation() [static] :259
int Device::StatusBarOrientation()
{
    return Device::GetStatusBarOrientation();
}
// }

}} // ::g::Fuse
