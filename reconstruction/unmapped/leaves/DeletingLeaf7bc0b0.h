// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original stand-in; shape and size read from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// DeletingLeaf7bc0b0: GUESS(low) STANDIN
// unknown08: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <cstddef>

void operator delete(void*, unsigned __int64) noexcept;

class DeletingLeaf7bc0b0
{
public:
    DeletingLeaf7bc0b0();
    virtual ~DeletingLeaf7bc0b0();  // compared: 0x7bc0b0
    unsigned char unknown08[0x10];  // 08
};
static_assert(sizeof(DeletingLeaf7bc0b0) == 0x18, "size observed from the sized delete argument");
