// Source exposure: mixed (binary-analysis of the pinned image; minimal stand-in).
// SPDX-License-Identifier: CC0-1.0
// Code origin: original stand-in from the pinned image listing; no external body reused.
// DeletingLeafe9e320: GUESS(low) STANDIN
#pragma once

#include <cstdint>

void operator delete(void*, unsigned __int64) noexcept;

class DeletingLeafe9e320
{
public:
    virtual ~DeletingLeafe9e320() {}

private:
    // Unknown storage named by offset; only the 0x18 object size is evidenced.
    std::uint64_t unk8;
    std::uint64_t unk10;
};

static_assert(sizeof(DeletingLeafe9e320) == 24, "object size differs from the compared delete");
