// Source exposure: binary-analysis (the shape of the compared function in the pinned image).
// Code origin: original stand-in; no external declaration or body reused
// SPDX-License-Identifier: CC0-1.0
// DeletingLeafeaf260: GUESS(low) STANDIN
// unknown08: GUESS(low) STANDIN
#pragma once

#include <cstdint>

class DeletingLeafeaf260
{
public:
    DeletingLeafeaf260();
    virtual ~DeletingLeafeaf260();  // compared: 0xeaf260
    std::uint8_t unknown08[0x210];  // 08
};
static_assert(sizeof(DeletingLeafeaf260) == 0x218, "size observed from the sized delete argument");
