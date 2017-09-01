// This file was generated based on '../../Library/Application Support/Fusetools/Packages/Fuse.Launcher.Phone/1.2.1/phone/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct PhoneUriHelper;}}

namespace g{
namespace Fuse{

// internal static class PhoneUriHelper :123
// {
uClassType* PhoneUriHelper_typeof();
void PhoneUriHelper__PhoneNumberToUri_fn(uString* phoneNumber, uString** __retval);

struct PhoneUriHelper : uObject
{
    static uString* PhoneNumberToUri(uString* phoneNumber);
};
// }

}} // ::g::Fuse
