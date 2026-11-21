// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original; reconstructed from the pinned image listing
// DeletingLeafceb160: GUESS(low)
// unk08, unk10, unk18, unk20, unk28, unk30: GUESS(low); storage names invented for the measured class size
// SPDX-License-Identifier: CC0-1.0
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeafceb160
{
public:
    DeletingLeafceb160();
    virtual ~DeletingLeafceb160();  // compared: 0xceb160
private:
    std::uint64_t unk08;  // 08
    std::uint64_t unk10;  // 10
    std::uint64_t unk18;  // 18
    std::uint64_t unk20;  // 20
    std::uint64_t unk28;  // 28
    std::uint64_t unk30;  // 30
};
static_assert(sizeof(DeletingLeafceb160) == 0x38, "DeletingLeafceb160 size");
