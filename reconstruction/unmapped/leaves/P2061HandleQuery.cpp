// Source exposure: mixed (binary analysis and cited public declarations).
// Code origin: original; decoded from the pinned image listing.
// Adapted bodies: none
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x69c120 P2061::HandleQuery::Function69c120
#include "P2061HandleQuery.h"

// Return the default handle when the owner has none, otherwise run the query callback.
P2061HandleQueryResult* P2061Function(P2061HandleQueryOwner* a_owner, P2061HandleQueryResult* a_out)
{
    void* handle = a_owner->handle;
    if (handle != nullptr)
    {
        P2061Sub(handle);
        return a_out;
    }
    a_out->value = kNullHandle;
    return a_out;
}
