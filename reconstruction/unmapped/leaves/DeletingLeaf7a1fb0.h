// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original stand-in; shape and size read from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// DeletingLeaf7a1fb0: GUESS(low) STANDIN
// unknown08: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <cstddef>

void operator delete(void*, unsigned __int64) noexcept;

class DeletingLeaf7a1fb0
{
public:
    DeletingLeaf7a1fb0();
    virtual ~DeletingLeaf7a1fb0();  // compared: 0x7a1fb0
    unsigned char unknown08[0x18];  // 08
};
static_assert(sizeof(DeletingLeaf7a1fb0) == 0x20, "size observed from the sized delete argument");
