// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// Adapted bodies: none
// DeletingLeaf6dac00: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <cstddef>

void operator delete(void*, unsigned __int64) noexcept;

class DeletingLeaf6dac00
{
public:
    DeletingLeaf6dac00();
    virtual ~DeletingLeaf6dac00();  // compared: 0x6dac00

    std::uint8_t padding[0x10];  // 08
};
static_assert(sizeof(DeletingLeaf6dac00) == 0x18, "leaf size");
