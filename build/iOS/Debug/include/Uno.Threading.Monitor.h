// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.2.2/source/uno/threading/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Threading{struct Monitor;}}}

namespace g{
namespace Uno{
namespace Threading{

// public static class Monitor :23
// {
uClassType* Monitor_typeof();
void Monitor__Enter_fn(uObject* obj);
void Monitor__Exit_fn(uObject* obj);

struct Monitor : uObject
{
    static void Enter(uObject* obj);
    static void Exit(uObject* obj);
};
// }

}}} // ::g::Uno::Threading
