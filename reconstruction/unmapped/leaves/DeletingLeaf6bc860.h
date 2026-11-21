// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original reconstruction from binary analysis; no external implementation code copied.
// SPDX-License-Identifier: CC0-1.0
// DeletingLeaf6bc860: GUESS(low)
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeaf6bc860
{
public:
    DeletingLeaf6bc860();
    virtual ~DeletingLeaf6bc860();  // compared: 0x6bc860

    // padding: GUESS(low); storage to the allocation size the deleting destructor frees
    std::uint8_t padding[0x10];  // 08
};
static_assert(sizeof(DeletingLeaf6bc860) == 0x18, "deleting leaf size");
