// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal abstract interface INativeSurfaceOwner :3108
// {
uInterfaceType* INativeSurfaceOwner_typeof();

struct INativeSurfaceOwner
{
    void(*fp_GetSurface)(uObject*, ::g::Fuse::Drawing::Surface**);
    static ::g::Fuse::Drawing::Surface* GetSurface(const uInterface& __this) { ::g::Fuse::Drawing::Surface* __retval; return __this.VTable<INativeSurfaceOwner>()->fp_GetSurface(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Drawing
