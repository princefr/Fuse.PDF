// This file was generated based on '../../Library/Application Support/Fusetools/Packages/Fuse.Launcher/1.2.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Launcher;}}
namespace g{namespace Uno{namespace Net{namespace Http{struct Uri;}}}}

namespace g{
namespace Fuse{

// public static class Launcher :14
// {
uClassType* Launcher_typeof();
void Launcher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri);

struct Launcher : uObject
{
    static void LaunchUri(::g::Uno::Net::Http::Uri* uri);
};
// }

}} // ::g::Fuse
