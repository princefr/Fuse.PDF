// This file was generated based on '../../Library/Application Support/Fusetools/Packages/Fuse.Launcher.Phone/1.2.1/phone/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LauncherImpl{struct PhoneLauncher;}}}

namespace g{
namespace Fuse{
namespace LauncherImpl{

// public static class PhoneLauncher :15
// {
uClassType* PhoneLauncher_typeof();
void PhoneLauncher__LaunchCall_fn(uString* callString);

struct PhoneLauncher : uObject
{
    static void LaunchCall(uString* callString);
};
// }

}}} // ::g::Fuse::LauncherImpl
