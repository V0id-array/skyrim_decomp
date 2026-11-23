// Source exposure: mixed
// 0x31aa50 compared function
// Origin: independently decoded target, anonymous sibling and public declarations.
// BGSCollisionLayer::ClearData: SIBLING(fo4-private@1b765c70, author-permission); adapted to target observations.
// Sibling source: fo4-private@1b765c70 src/Shared/TESForms/Gameplay/BGSCollisionLayer.cpp:143
// BGSCollisionLayer: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e832f263dbef44e44cbe2936622a02f91a, MIT); declarations adapted from include/RE/B/BGSCollisionLayer.h, include/RE/T/TESForm.h, include/RE/T/TESDescription.h and include/RE/B/BSTArray.h.
// names: GUESS(low); names and original signatures are tentative.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
#include "BGSCollisionLayer.h"
void BGSCollisionLayer::ClearData() { collidesWith.Clear(); }


// GetCollidesWithMask: GUESS(low); OR the per-layer bit for every entry of collidesWith.
// The count is read into a 32-bit local, copied to a 64-bit trip count, and 1i64 << idx
// keeps the variable-count shift materialized (cookbook rule 16 family).
std::uint64_t BGSCollisionLayer::GetCollidesWithMask()
{
    unsigned count = collidesWith.size;
    std::uint64_t mask = 0;
    if (!count) return 0;
    std::uint64_t n = count;
    BGSCollisionLayer** p = reinterpret_cast<BGSCollisionLayer**>(collidesWith.data);
    do {
        mask |= 1i64 << (*p++)->collisionIdx;
    } while (--n);
    return mask;
}
