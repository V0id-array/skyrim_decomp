// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original stand-in; shape and size read from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// DeletingLeaf735a50: GUESS(low) STANDIN
// unknown08: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <cstddef>

void operator delete(void*, unsigned __int64) noexcept;

class DeletingLeaf735a50
{
public:
    DeletingLeaf735a50();
    virtual ~DeletingLeaf735a50();  // compared: 0x735a50
    unsigned char unknown08[0x20];  // 08
};
static_assert(sizeof(DeletingLeaf735a50) == 0x28, "size observed from the sized delete argument");
