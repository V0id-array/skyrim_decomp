// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original stand-in; shape and size read from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// DeletingLeaf769490: GUESS(low) STANDIN
// unknown08: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <cstddef>

void operator delete(void*, unsigned __int64) noexcept;

class DeletingLeaf769490
{
public:
    DeletingLeaf769490();
    virtual ~DeletingLeaf769490();  // compared: 0x769490
    unsigned char unknown08[0x10];  // 08
};
static_assert(sizeof(DeletingLeaf769490) == 0x18, "size observed from the sized delete argument");
