// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.2.2/uriparsers/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct QueryParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class QueryParser :161
// {
uType* QueryParser_typeof();
void QueryParser__Parse_fn(uString* uriString, uString* scheme, int* idx, int* startPartIdx, uString** __retval);

struct QueryParser : uObject
{
    static uString* Parse(uString* uriString, uString* scheme, int idx, int* startPartIdx);
};
// }

}}}} // ::g::Uno::Net::Http
