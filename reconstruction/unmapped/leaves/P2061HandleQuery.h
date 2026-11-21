// Source exposure: mixed (binary analysis and cited public declarations).
// Code origin: original; decoded from the pinned image listing.
// Adapted bodies: none
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x69c120 P2061::HandleQuery::Function69c120
// P2061::HandleQuery::Function69c120, kNullHandle, P2061Sub: GUESS(low)
#pragma once

class P2061HandleQuery {};

#include <cstdint>

struct P2061HandleQueryOwner
{
    unsigned char storage[0xF8];
    void* handle;
};

struct P2061HandleQueryResult
{
    std::uint32_t value;
};

extern std::uint32_t kNullHandle;
extern "C" void P2061Sub(void* a_handle);
extern "C" P2061HandleQueryResult* P2061Function(P2061HandleQueryOwner* a_owner, P2061HandleQueryResult* a_out);
