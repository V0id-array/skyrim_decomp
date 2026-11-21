// Source exposure: mixed (community headers; compared functions from the pinned image).
// Code origin: original stand-in; the shape comes from the local pinned-image listing and the sized delete argument.
// SPDX-License-Identifier: CC0-1.0
// DeletingLeafdc0240: GUESS(low)
#pragma once

#include <cstdint>
#include <cstddef>

class DeletingLeafdc0240
{
public:
    DeletingLeafdc0240();
    virtual ~DeletingLeafdc0240();  // compared: 0xdc0240
    unsigned char unknown08[0x20];
};
static_assert(sizeof(DeletingLeafdc0240) == 0x28, "size observed from the sized delete argument");
