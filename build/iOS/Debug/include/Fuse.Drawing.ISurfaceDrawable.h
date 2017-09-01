// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public abstract interface ISurfaceDrawable :3076
// {
uInterfaceType* ISurfaceDrawable_typeof();

struct ISurfaceDrawable
{
    void(*fp_Draw)(uObject*, ::g::Fuse::Drawing::Surface*);
    void(*fp_get_ElementSize)(uObject*, ::g::Uno::Float2*);
    static void Draw(const uInterface& __this, ::g::Fuse::Drawing::Surface* surface) { __this.VTable<ISurfaceDrawable>()->fp_Draw(__this, surface); }
    static ::g::Uno::Float2 ElementSize(const uInterface& __this);
};

}}} // ::g::Fuse::Drawing

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Drawing{

inline ::g::Uno::Float2 ISurfaceDrawable::ElementSize(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<ISurfaceDrawable>()->fp_get_ElementSize(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Drawing
