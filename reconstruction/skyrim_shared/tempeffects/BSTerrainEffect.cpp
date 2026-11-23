// Source exposure: mixed (names from community headers; bodies from the pinned image listing).
// 0x4b8680 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// BSTerrainEffect::Function4b7c50: GUESS(low)
// 0x4b7c50 BSTerrainEffect::Function4b7c50
// Adapted bodies: none
#include "BSTerrainEffect.h"

BSTerrainEffect::BSTerrainEffect() : BSTempEffect(nullptr, 0.0f)
{
}

// Bound by hash: the target's slot-2A body reads the bool at +0x24 from `this`.
bool TerrainSaveLoadShim(const BSTerrainEffect* a)
{
    return *reinterpret_cast<const bool*>(reinterpret_cast<const char*>(a) + 0x24);
}

std::uint32_t BSTerrainEffect::Function4b7c50(const std::uint32_t* a)
{
    if (*a == 0) {
        *reinterpret_cast<std::uint8_t*>(reinterpret_cast<char*>(this) - 0xC) = 0;
    }
    return 0;
}

