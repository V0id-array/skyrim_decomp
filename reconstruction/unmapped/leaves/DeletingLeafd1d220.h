// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original reconstruction; layout and body written from the listing.
// SPDX-License-Identifier: CC0-1.0
// DeletingLeafd1d220: GUESS(low)
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeafd1d220
{
public:
    DeletingLeafd1d220();
    virtual ~DeletingLeafd1d220() {}  // compared: 0xd1d220 (scalar deleting destructor)

    std::uint8_t padding[0x10];  // 08
};
static_assert(sizeof(DeletingLeafd1d220) == 0x18, "DeletingLeafd1d220 size");
