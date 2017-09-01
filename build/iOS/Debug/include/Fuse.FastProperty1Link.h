// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastProperty1Link;}}

namespace g{
namespace Fuse{

// internal class FastProperty1Link :6122
// {
uType* FastProperty1Link_typeof();
void FastProperty1Link__ctor__fn(FastProperty1Link* __this, int* p);

struct FastProperty1Link : uObject
{
    uStrong<FastProperty1Link*> Next;
    int Property;

    void ctor_(int p);
};
// }

}} // ::g::Fuse
