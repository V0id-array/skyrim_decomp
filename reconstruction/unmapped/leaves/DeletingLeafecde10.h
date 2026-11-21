// Source exposure: binary-analysis (the shape of the compared function in the pinned image).
// Code origin: original stand-in; no external declaration or body reused
// SPDX-License-Identifier: CC0-1.0
// DeletingLeafecde10: GUESS(low) STANDIN
// unknown08: GUESS(low) STANDIN
#pragma once

#include <cstdint>

class DeletingLeafecde10
{
public:
    DeletingLeafecde10();
    virtual ~DeletingLeafecde10();  // compared: 0xecde10
    std::uint8_t unknown08[0x10];  // 08
};
static_assert(sizeof(DeletingLeafecde10) == 0x18, "size observed from the sized delete argument");
