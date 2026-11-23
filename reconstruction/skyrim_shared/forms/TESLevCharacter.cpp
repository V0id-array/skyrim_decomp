// Source exposure: mixed (community headers; the pinned image listing).
// 0x271820 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x271830 TESLevCharacter::Function271830
// Adapted bodies: none
// Source exposure: mixed (names and declarations from community headers; the listing of the pinned
// image).
// Adapted bodies: none.
#include "TESLevCharacter.h"

// Body done: RVA 0x2717b0, 64 bytes, TESLevCharacter::InitItemImpl. The flag test guards the
// whole initialisation; the last call is a tail call in the target.
void TESLevCharacter::InitItemImpl()
{
    if (!TestBit(formFlags, 3)) {
        InitLeveledListState(unknown30, this);
        InitModelTextureSwapState(unknown58, this);
        ResetOwnerState(this, true);
    }
}

bool TESLevCharacter::Function271830(std::uint8_t a_value) const
{
    return static_cast<std::uint8_t>(a_value - 0x2B) <= 1;
}

std::uint32_t TESLevCharacter::Function271820() const
{
    return g_levCharValue;
}
