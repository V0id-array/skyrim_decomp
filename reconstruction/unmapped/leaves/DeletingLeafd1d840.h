// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original stand-in; shape and size read from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// DeletingLeafd1d840: GUESS(low) STANDIN
// unknown08: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <cstddef>

void operator delete(void*, unsigned __int64) noexcept;

class DeletingLeafd1d840
{
public:
    DeletingLeafd1d840();
    virtual ~DeletingLeafd1d840();  // compared: 0xd1d840
    unsigned char unknown08[0x18];  // 08
};
static_assert(sizeof(DeletingLeafd1d840) == 0x20, "size observed from the sized delete argument");
