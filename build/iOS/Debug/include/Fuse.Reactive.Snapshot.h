// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Snapshot;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Snapshot :1674
// {
::g::Fuse::Reactive::Expression_type* Snapshot_typeof();
void Snapshot__get_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression** __retval);
void Snapshot__set_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression* value);
void Snapshot__Subscribe_fn(Snapshot* __this, uObject* context, uObject* listener, uObject** __retval);

struct Snapshot : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _Source;

    ::g::Fuse::Reactive::Expression* Source();
    void Source(::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Reactive
