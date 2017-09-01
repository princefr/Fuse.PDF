// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.2.2/source/uno/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public abstract interface IDisposable :3416
// {
uInterfaceType* IDisposable_typeof();

struct IDisposable
{
    void(*fp_Dispose)(uObject*);
    static void Dispose(const uInterface& __this) { __this.VTable<IDisposable>()->fp_Dispose(__this); }
};
// }

}} // ::g::Uno
