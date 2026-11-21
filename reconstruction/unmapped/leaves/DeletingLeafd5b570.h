// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original; reconstructed from the pinned image listing
// DeletingLeafd5b570: GUESS(low)
// unk08, unk10: GUESS(low); storage names invented for the measured class size
// SPDX-License-Identifier: CC0-1.0
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeafd5b570
{
public:
    DeletingLeafd5b570();
    virtual ~DeletingLeafd5b570();  // compared: 0xd5b570
private:
    std::uint64_t unk08;  // 08
    std::uint64_t unk10;  // 10
};
static_assert(sizeof(DeletingLeafd5b570) == 0x18, "DeletingLeafd5b570 size");
