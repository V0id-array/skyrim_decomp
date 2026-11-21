// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original reconstruction from binary analysis; no external implementation code copied.
// SPDX-License-Identifier: CC0-1.0
// DeletingLeaf6bc800: GUESS(low)
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeaf6bc800
{
public:
    DeletingLeaf6bc800();
    virtual ~DeletingLeaf6bc800();  // compared: 0x6bc800

    // padding: GUESS(low); storage to the allocation size the deleting destructor frees
    std::uint8_t padding[0x18];  // 08
};
static_assert(sizeof(DeletingLeaf6bc800) == 0x20, "deleting leaf size");
