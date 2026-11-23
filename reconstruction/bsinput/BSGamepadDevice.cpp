// Source exposure: mixed (community headers; the pinned image listing).
// 0xcfc150 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0xcfbd80 BSGamepadDevice::Functioncfbd80
// Adapted bodies: none
// Source exposure: mixed (names and declarations from community headers; the listing of the pinned
// image).
// Adapted bodies: none (write "none" when attempt prints no "origin advice" line;
// otherwise name each adapted body, its upstream file, revision and licence).
#include "BSGamepadDevice.h"

bool BSGamepadDevice::IsEnabled() const
{
    const std::uint8_t* self = reinterpret_cast<const std::uint8_t*>(this);
    const std::uint8_t flag = *reinterpret_cast<const std::uint8_t*>(self + 0xCC);
    const std::uint32_t index = *reinterpret_cast<const std::uint32_t*>(self + 0xC8);
    if (flag == 0 || index == 0xFFFFFFFF) {
        return false;
    }
    return true;
}

float BSGamepadDevice::Functioncfbd80(float a_a, float a_b, float a_c, float a_d, float a_e)
{
    return a_a + ((a_e - a_c) / (a_d - a_c)) * (a_b - a_a);
}

// RVA 0xcfbde0, 3 bytes
void BSGamepadDevice::Unk_0E()
{
}

// RVA 0xcfc180, 3 bytes
bool BSGamepadDevice::Unk_0C()
{
    return false;
}

// RVA 0xcfc1a0, 3 bytes
void BSGamepadDevice::ResetLEDColor()
{
}
