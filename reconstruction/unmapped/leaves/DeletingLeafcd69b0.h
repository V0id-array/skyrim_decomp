// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original; reconstructed from the pinned image listing
// DeletingLeafcd69b0: GUESS(low)
// unk08, unk10, unk18, unk20, unk28, unk30, unk38: GUESS(low); storage names invented for the measured class size
// SPDX-License-Identifier: CC0-1.0
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeafcd69b0
{
public:
    DeletingLeafcd69b0();
    virtual ~DeletingLeafcd69b0();  // compared: 0xcd69b0
private:
    std::uint64_t unk08;  // 08
    std::uint64_t unk10;  // 10
    std::uint64_t unk18;  // 18
    std::uint64_t unk20;  // 20
    std::uint64_t unk28;  // 28
    std::uint64_t unk30;  // 30
    std::uint64_t unk38;  // 38
};
static_assert(sizeof(DeletingLeafcd69b0) == 0x40, "DeletingLeafcd69b0 size");
