// Source exposure: mixed (the pinned image listing and local layout guesses).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0xfa8520 NiPSysBoundUpdateModifier::Functionfa8520
// Adapted bodies: none
#include "NiPSysBoundUpdateModifier.h"

// Functionfa11c0: GUESS(low); declared only, the target setter the body tail-calls
void Functionfa11c0(NiPSysBoundUpdateModifier* a_this, std::uint8_t* a_target);

void NiPSysBoundUpdateModifier::Functionfa8520(std::uint8_t* a_target)
{
    std::uint8_t* previous = *reinterpret_cast<std::uint8_t**>(reinterpret_cast<std::uint8_t*>(this) + 0x20);
    if (previous) {
        previous[0x191] = 0;
    }
    if (a_target) {
        a_target[0x191] = 1;
    }
    Functionfa11c0(this, a_target);
}
