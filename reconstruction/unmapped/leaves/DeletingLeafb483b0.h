// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original; reconstructed from the pinned image listing
// DeletingLeafb483b0: GUESS(low)
// unk08, unk10: GUESS(low); storage names invented for the measured class size
// SPDX-License-Identifier: CC0-1.0
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeafb483b0
{
public:
    DeletingLeafb483b0();
    virtual ~DeletingLeafb483b0();  // compared: 0xb483b0
private:
    std::uint64_t unk08;  // 08
    std::uint64_t unk10;  // 10
};
static_assert(sizeof(DeletingLeafb483b0) == 0x18, "DeletingLeafb483b0 size");
