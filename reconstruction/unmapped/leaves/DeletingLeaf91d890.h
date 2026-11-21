// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original; the pinned image listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// DeletingLeaf91d890: GUESS(low)
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeaf91d890
{
public:
    DeletingLeaf91d890();
    virtual ~DeletingLeaf91d890();  // compared: 0x91d890

    std::uint8_t padding[0x20];  // 08
};
static_assert(sizeof(DeletingLeaf91d890) == 0x28, "DeletingLeaf91d890 size");
