// Source exposure: binary-analysis (the shape of the compared function in the pinned image).
// Code origin: original stand-in; no external declaration or body reused
// SPDX-License-Identifier: CC0-1.0
// DeletingLeafec0160: GUESS(low) STANDIN
// unknown08: GUESS(low) STANDIN
#pragma once

#include <cstdint>

class DeletingLeafec0160
{
public:
    DeletingLeafec0160();
    virtual ~DeletingLeafec0160();  // compared: 0xec0160
    std::uint8_t unknown08[0x28];  // 08
};
static_assert(sizeof(DeletingLeafec0160) == 0x30, "size observed from the sized delete argument");
