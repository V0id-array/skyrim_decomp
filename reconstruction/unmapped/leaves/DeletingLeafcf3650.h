// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original; reconstructed from the pinned image listing
// DeletingLeafcf3650: GUESS(low)
// unk08, unk10, unk18: GUESS(low); storage names invented for the measured class size
// SPDX-License-Identifier: CC0-1.0
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeafcf3650
{
public:
    DeletingLeafcf3650();
    virtual ~DeletingLeafcf3650();  // compared: 0xcf3650
private:
    std::uint64_t unk08;  // 08
    std::uint64_t unk10;  // 10
    std::uint64_t unk18;  // 18
};
static_assert(sizeof(DeletingLeafcf3650) == 0x20, "DeletingLeafcf3650 size");
