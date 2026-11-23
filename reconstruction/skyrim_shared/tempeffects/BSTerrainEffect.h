// Source exposure: mixed (names and declarations from community headers; base classes, sizes and
// 0x4b8680 compared function
// 0x4b7c50 compared function
// the compared functions from the pinned image).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// BSTerrainEffect: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// BSTerrainEffect::GetManagerHandlesSaveLoad: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// BSTerrainEffect::Function4b7c50: GUESS(low)
// unknown30: GUESS(low)
#pragma once

#include <cstdint>
#include "BSTempEffect.h"

class BSTerrainEffect : public BSTempEffect
{
public:
    BSTerrainEffect();  // forces the vftable and its scalar deleting destructor

    std::uint32_t Function4b7c50(const std::uint32_t* a);

    // TODO members: replace part of the padding with the members the bodies read,
    // keeping every offset and the size check true.
    std::uint8_t unknown30[0x88];  // 30
};
static_assert(sizeof(BSTerrainEffect) == 0xB8, "BSTerrainEffect size");
