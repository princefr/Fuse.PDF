// This file was generated based on '../../Library/Application Support/Fusetools/Packages/Fuse.Launcher.Maps/1.2.1/maps/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LauncherImpl{struct MapsLauncher;}}}

namespace g{
namespace Fuse{
namespace LauncherImpl{

// public static class MapsLauncher :17
// {
uClassType* MapsLauncher_typeof();
void MapsLauncher__LaunchMaps_fn(double* latitude, double* longitude);
void MapsLauncher__LaunchMaps1_fn(double* latitude, double* longitude, uString* query);
void MapsLauncher__LaunchMaps2_fn(uString* query);

struct MapsLauncher : uObject
{
    static void LaunchMaps(double latitude, double longitude);
    static void LaunchMaps1(double latitude, double longitude, uString* query);
    static void LaunchMaps2(uString* query);
};
// }

}}} // ::g::Fuse::LauncherImpl
