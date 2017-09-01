// This file was generated based on '../../Library/Application Support/Fusetools/Packages/Fuse.Launcher.Email/1.2.1/email/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Email;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Email :150
// {
::g::Fuse::Scripting::NativeModule_type* Email_typeof();
void Email__ctor_2_fn(Email* __this);
void Email__Compose_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Email__New2_fn(Email** __retval);

struct Email : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Email*> _instance_;
    static uSStrong<Email*>& _instance() { return _instance_; }

    void ctor_2();
    static uObject* Compose(::g::Fuse::Scripting::Context* context, uArray* args);
    static Email* New2();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
