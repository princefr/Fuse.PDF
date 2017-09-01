// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Elements.ITreeRenderer.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct NativeViewRenderer;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class NativeViewHost :1561
// {
struct NativeViewHost_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Elements::ITreeRenderer interface16;
};

NativeViewHost_type* NativeViewHost_typeof();
void NativeViewHost__ctor_6_fn(NativeViewHost* __this);
void NativeViewHost__ctor_7_fn(NativeViewHost* __this, int* initialState);
void NativeViewHost__CalcRenderBounds_fn(NativeViewHost* __this, ::g::Fuse::VisualBounds** __retval);
void NativeViewHost__CalcTransform_fn(NativeViewHost* __this, ::g::Uno::Float4x4* __retval);
void NativeViewHost__ClearRoot_fn(NativeViewHost* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle);
void NativeViewHost__DisableOffscreen_fn(NativeViewHost* __this);
void NativeViewHost__DrawWithChildren_fn(NativeViewHost* __this, ::g::Fuse::DrawContext* dc);
void NativeViewHost__EnableOffscreen_fn(NativeViewHost* __this);
void NativeViewHost__FuseElementsITreeRendererBackgroundChanged_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::Drawing::Brush* background);
void NativeViewHost__FuseElementsITreeRendererClipToBoundsChanged_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e, bool* clipToBounds);
void NativeViewHost__FuseElementsITreeRendererHitTestModeChanged_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e, bool* enabled);
void NativeViewHost__FuseElementsITreeRendererIsEnabledChanged_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e, bool* isEnabled);
void NativeViewHost__FuseElementsITreeRendererIsVisibleChanged_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e, bool* isVisible);
void NativeViewHost__FuseElementsITreeRendererMeasure_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* size, bool* __retval);
void NativeViewHost__FuseElementsITreeRendererOpacityChanged_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e, float* opacity);
void NativeViewHost__FuseElementsITreeRendererPlaced_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e);
void NativeViewHost__FuseElementsITreeRendererRooted_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e);
void NativeViewHost__FuseElementsITreeRendererRootingStarted_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e);
void NativeViewHost__FuseElementsITreeRendererTransformChanged_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e);
void NativeViewHost__FuseElementsITreeRendererUnrooted_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e);
void NativeViewHost__FuseElementsITreeRendererZOrderChanged_fn(NativeViewHost* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Collections::List* zorder);
void NativeViewHost__get_IsInGraphicsContext_fn(NativeViewHost* __this, bool* __retval);
void NativeViewHost__New3_fn(NativeViewHost** __retval);
void NativeViewHost__OnInvalidateVisual_fn(NativeViewHost* __this);
void NativeViewHost__OnInvalidateWorldTransform_fn(NativeViewHost* __this, uObject* sender, ::g::Uno::EventArgs* args);
void NativeViewHost__OnRooted_fn(NativeViewHost* __this);
void NativeViewHost__OnUnrooted_fn(NativeViewHost* __this);
void NativeViewHost__PostUpdateTransform_fn(NativeViewHost* __this);
void NativeViewHost__get_RenderToTexture_fn(NativeViewHost* __this, bool* __retval);
void NativeViewHost__set_RenderToTexture_fn(NativeViewHost* __this, bool* value);
void NativeViewHost__SetRoot_fn(NativeViewHost* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle);
void NativeViewHost__get_TreeRenderer_fn(NativeViewHost* __this, uObject** __retval);
void NativeViewHost__UpdateHostViewTransform_fn(NativeViewHost* __this);
void NativeViewHost__get_VisualContext_fn(NativeViewHost* __this, int* __retval);

struct NativeViewHost : ::g::Fuse::Controls::LayoutControl
{
    bool _draw;
    uStrong< ::g::Fuse::Controls::Native::NativeViewRenderer*> _glRenderer;
    bool _isVisible;
    uStrong<uObject*> _nativeRenderer;
    bool _offscreenEnabled;
    uStrong<uObject*> _proxyHost;
    bool _renderToTexture;
    uStrong< ::g::Fuse::Controls::Native::ViewHandle*> _root;
    uStrong<uObject*> _toggeling;
    bool _updateTransform;

    void ctor_6();
    void ctor_7(int initialState);
    ::g::Uno::Float4x4 CalcTransform();
    void ClearRoot(::g::Fuse::Controls::Native::ViewHandle* viewHandle);
    void DisableOffscreen();
    void EnableOffscreen();
    bool IsInGraphicsContext();
    void OnInvalidateWorldTransform(uObject* sender, ::g::Uno::EventArgs* args);
    void PostUpdateTransform();
    bool RenderToTexture();
    void RenderToTexture(bool value);
    void SetRoot(::g::Fuse::Controls::Native::ViewHandle* viewHandle);
    void UpdateHostViewTransform();
    static NativeViewHost* New3();
};
// }

}}} // ::g::Fuse::Controls
