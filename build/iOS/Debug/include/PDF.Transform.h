// This file was generated based on iOSImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.String.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace PDF{struct Transform;}}

namespace g{
namespace PDF{

// internal sealed extern class Transform :18
// {
::g::Uno::Threading::Future_type* Transform_typeof();
void Transform__ctor_7_fn(Transform* __this, uString* base64, uString* directory);
void Transform__New5_fn(uString* base64, uString* directory, Transform** __retval);
void Transform__Reject1_fn(Transform* __this, uString* reason);
void Transform__Resolve1_fn(Transform* __this, uString* message);

struct Transform : ::g::Uno::Threading::Promise
{
    void ctor_7(uString* base64, uString* directory);
    void Reject1(uString* reason);
    void Resolve1(uString* message);
    static Transform* New5(uString* base64, uString* directory);
};
// }

}} // ::g::PDF
