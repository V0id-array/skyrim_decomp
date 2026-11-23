// Source exposure: mixed (community headers; the pinned image listing).
// 0x2709c0 compared function
// 0x270970 compared function
// 0x270940 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x270920 TESGrass::GetFitToSlope
// Adapted bodies: none
#include "TESGrass.h"

// The constructor is not compared: it is defined so that this unit emits the vftables and with
// them the deleting destructor, as the original unit did. Its body is a minimal stand-in.
TESGrass::TESGrass()
{
}

TESGrass::~TESGrass()
{
}

std::uint8_t TESGrass::GetDensity() const
{
    return data.density;
}

std::uint8_t TESGrass::GetMinSlopeDegrees() const
{
    return data.minSlopeDegrees;
}

std::uint8_t TESGrass::GetMaxSlopeDegrees() const
{
    return data.maxSlopeDegrees;
}

std::uint16_t TESGrass::GetDistanceFromWaterLevel() const
{
    return data.distanceFromWaterLevel;
}

// SetDistanceFromWaterLevel, GetHeightRange, GetColorRange: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
void TESGrass::SetDistanceFromWaterLevel(std::uint16_t a_unitsFromWater)
{
    data.distanceFromWaterLevel = a_unitsFromWater;
}

float TESGrass::GetHeightRange() const
{
    return data.heightRange;
}

float TESGrass::GetColorRange() const
{
    return data.colorRange;
}

TESGrass::GRASS_WATER_STATE TESGrass::GetUnderwaterState() const
{
    return data.underwater;
}

void TESGrass::SetUnderwaterState(GRASS_WATER_STATE a_waterState)
{
    data.underwater = a_waterState;
}

bool TESGrass::GetFitToSlope() const
{
    // The trailing xor keeps the shift 32-bit, preserving the sign-extended byte load.
    return ((static_cast<unsigned>(static_cast<std::int8_t>(data.unk18[4])) >> 2) & 1u) ^ 0u;
}

float TESGrass::Function270940() const
{
    std::uint8_t v = *reinterpret_cast<const std::uint8_t*>(reinterpret_cast<const char*>(this) + 0x5A);
    return static_cast<float>(v) * g_grassScale;
}

float TESGrass::Function270970() const
{
    std::uint8_t v = *reinterpret_cast<const std::uint8_t*>(reinterpret_cast<const char*>(this) + 0x59);
    return static_cast<float>(v) * g_grassScale;
}

bool TESGrass::Function2709c0() const
{
    const volatile std::int8_t& raw = *reinterpret_cast<const volatile std::int8_t*>(
        reinterpret_cast<const char*>(this) + 0x74);
    std::int32_t v = raw;
    std::uint32_t shifted = static_cast<std::uint32_t>(v) >> 1;
    __assume((shifted & 1u) <= 1u);
    return (shifted & 1u) != 0;
}
