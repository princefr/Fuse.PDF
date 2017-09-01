// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.2.2/uriparsers/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct SchemeParser;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct SchemeParserResult;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class SchemeParser :201
// {
uType* SchemeParser_typeof();
void SchemeParser__Parse_fn(uString* uriString, int* idx, ::g::Uno::Net::Http::SchemeParserResult* __retval);

struct SchemeParser : uObject
{
    static ::g::Uno::Net::Http::SchemeParserResult Parse(uString* uriString, int* idx);
};
// }

}}}} // ::g::Uno::Net::Http
