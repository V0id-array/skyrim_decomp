// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original; reconstructed from the pinned image listing
// DeletingLeafd19150: GUESS(low)
// unk08, unk10, unk18: GUESS(low); storage names invented for the measured class size
// SPDX-License-Identifier: CC0-1.0
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeafd19150
{
public:
    DeletingLeafd19150();
    virtual ~DeletingLeafd19150();  // compared: 0xd19150
private:
    std::uint64_t unk08;  // 08
    std::uint64_t unk10;  // 10
    std::uint64_t unk18;  // 18
};
static_assert(sizeof(DeletingLeafd19150) == 0x20, "DeletingLeafd19150 size");
