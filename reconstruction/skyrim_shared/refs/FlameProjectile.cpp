// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x7eb430 FlameProjectile::Handle3DLoaded
// Adapted bodies: none
// Source exposure: mixed (community headers and pinned-image analysis).
// Drafted by gpt-6.1-sol, Engineer p105 box3. Adapted bodies: none.
#include "FlameProjectile.h"

void FlameProjectile::Handle3DLoaded()
{
    // Clear bits 0, 1, 4 and 5 of the projectile flags, then set bit 3.
    const std::uint32_t value = flags;
    flags = (value & ~std::uint32_t{0x33}) | std::uint32_t{0x8};
}

FlameProjectile::FlameProjectile() { formType=static_cast<FormType>(0x43); timers.expirationTimer=0; timers.coneAngle=0; }
void FlameProjectile::LoadGame(BGSLoadFormBuffer* a_buf) { Projectile::LoadGame(a_buf); BGSLoadGameBuffer_LoadDataEndian(a_buf,&timers.expirationTimer,4,4); return BGSLoadGameBuffer_LoadDataEndian(a_buf,&timers.coneAngle,4,4); }
void FlameProjectile::SaveGame(BGSSaveFormBuffer* a_buf) { Projectile::SaveGame(a_buf); BGSSaveGameBuffer_SaveDataEndian(a_buf,&timers.expirationTimer,4,4,0); BGSSaveGameBuffer_SaveDataEndian(a_buf,&timers.coneAngle,4,4,0); }
std::uint8_t FlameProjectile::Slot164() const { return 1; }

