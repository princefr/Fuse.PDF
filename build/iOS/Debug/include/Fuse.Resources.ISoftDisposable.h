// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.2.1/resources/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Resources{

// internal abstract interface ISoftDisposable :271
// {
uInterfaceType* ISoftDisposable_typeof();

struct ISoftDisposable
{
    void(*fp_SoftDispose)(uObject*);
    static void SoftDispose(const uInterface& __this) { __this.VTable<ISoftDisposable>()->fp_SoftDispose(__this); }
};
// }

}}} // ::g::Fuse::Resources
