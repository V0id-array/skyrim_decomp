// Source exposure: mixed (community headers; the pinned image listing).
// 0x2612d0 compared function
// 0x261290 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x261310 BGSExplosion::Function261310
// Adapted bodies: none
// Source exposure: mixed (community headers and pinned-image analysis).
// Drafted by gpt-6.1-sol, Engineer p105 box3. Adapted bodies: none.
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
#include "BGSExplosion.h"
int BGSExplosion::Function261310()
{
    return GetSoundLevelValue(data.soundLevel);
}

float BGSExplosion::Function261290() const
{
    float value = data.radius;
    if ((data.flags & 1) == 0) {
        value *= gExplosionScale;
    }
    return value;
}

float BGSExplosion::Function2612d0() const
{
    float value = data.imageSpaceRadius;
    if ((data.flags & 1) == 0) {
        value *= gExplosionScale;
    }
    return value;
}
BGSExplosion::BGSExplosion() {}
BGSExplosion::~BGSExplosion() {}
void BGSExplosion::UnClone3D(TESObjectREFR* a_ref)
{
    const auto* explosion = static_cast<const Explosion*>(a_ref);
    // Explosion::Flags::kInWater is bit 5 of the flag word; the test takes the bit index.
    if (!TestBit(static_cast<std::uint32_t>(explosion->flags), 5)) {
        TESObject::UnClone3D(a_ref);
    }
}
void BGSExplosion::InitializeData() { data.soundLevel=1; data.light=nullptr; data.sound1=nullptr; data.sound2=nullptr; data.impactDataSet=nullptr; data.impactPlacedObject=nullptr; data.force=0; data.damage=0; data.radius=0; data.imageSpaceRadius=0; data.verticalOffsetMult=0; data.flags=0; data.spawnProjectile=nullptr; }

