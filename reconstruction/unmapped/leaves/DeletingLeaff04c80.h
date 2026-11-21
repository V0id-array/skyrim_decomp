// Source exposure: binary-analysis (the shape of the compared function in the pinned image).
// Code origin: original stand-in; no external declaration or body reused
// SPDX-License-Identifier: CC0-1.0
// DeletingLeaff04c80: GUESS(low) STANDIN
// unknown08: GUESS(low) STANDIN
#pragma once

#include <cstdint>

class DeletingLeaff04c80
{
public:
    DeletingLeaff04c80();
    virtual ~DeletingLeaff04c80();  // compared: 0xf04c80
    std::uint8_t unknown08[0x120];  // 08
};
static_assert(sizeof(DeletingLeaff04c80) == 0x128, "size observed from the sized delete argument");
