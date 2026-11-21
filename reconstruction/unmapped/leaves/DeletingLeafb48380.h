// Source exposure: mixed (binary-analysis of the pinned image; minimal stand-in).
// SPDX-License-Identifier: CC0-1.0
// Code origin: original stand-in from the pinned image listing; no external body reused.
// DeletingLeafb48380: GUESS(low) STANDIN
#pragma once

#include <cstdint>

void operator delete(void*, unsigned __int64) noexcept;

class DeletingLeafb48380
{
public:
    virtual ~DeletingLeafb48380() {}

private:
    // Unknown storage named by offset; only the 0x20 object size is evidenced.
    std::uint64_t unk8;
    std::uint64_t unk10;
    std::uint64_t unk18;
};

static_assert(sizeof(DeletingLeafb48380) == 32, "object size differs from the compared delete");
