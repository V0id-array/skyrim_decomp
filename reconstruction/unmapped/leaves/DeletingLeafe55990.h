// Source exposure: mixed (binary-analysis of the pinned image; minimal stand-in).
// SPDX-License-Identifier: CC0-1.0
// Code origin: original stand-in from the pinned image listing; no external body reused.
// DeletingLeafe55990: GUESS(low) STANDIN
#pragma once

#include <cstdint>

void operator delete(void*, unsigned __int64) noexcept;

class DeletingLeafe55990
{
public:
    virtual ~DeletingLeafe55990() {}

private:
    // Unknown storage named by offset; only the 0x18 object size is evidenced.
    std::uint64_t unk8;
    std::uint64_t unk10;
};

static_assert(sizeof(DeletingLeafe55990) == 24, "object size differs from the compared delete");
