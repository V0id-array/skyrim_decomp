// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original; reconstructed from the pinned image listing
// DeletingLeafbe4090: GUESS(low)
// unk08, unk10, unk18: GUESS(low); storage names invented for the measured class size
// SPDX-License-Identifier: CC0-1.0
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeafbe4090
{
public:
    DeletingLeafbe4090();
    virtual ~DeletingLeafbe4090();  // compared: 0xbe4090
private:
    std::uint64_t unk08;  // 08
    std::uint64_t unk10;  // 10
    std::uint64_t unk18;  // 18
};
static_assert(sizeof(DeletingLeafbe4090) == 0x20, "DeletingLeafbe4090 size");
