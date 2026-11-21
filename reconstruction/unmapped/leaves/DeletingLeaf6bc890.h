// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original reconstruction from binary analysis; no external implementation code copied.
// SPDX-License-Identifier: CC0-1.0
// DeletingLeaf6bc890: GUESS(low)
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeaf6bc890
{
public:
    DeletingLeaf6bc890();
    virtual ~DeletingLeaf6bc890();  // compared: 0x6bc890

    // padding: GUESS(low); storage to the allocation size the deleting destructor frees
    std::uint8_t padding[0x20];  // 08
};
static_assert(sizeof(DeletingLeaf6bc890) == 0x28, "deleting leaf size");
