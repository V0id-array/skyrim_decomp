// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Recipe: reconstruction/recipes/msvc-19.16.27054-o2-root-includes.json
// 0x25d090 BGSArtObject::InitItemImpl
// Adapted bodies: none
#include "BGSArtObject.h"

// TestBit: GUESS(low); a flag-word bit test by bit index, taking the word by value
inline bool TestBit(std::uint32_t a_flags, std::uint32_t a_bit)
{
    return ((a_flags >> a_bit) & 1) != 0;
}

// InitArtObjectMember, MarkArtObject: GUESS(low); callees of InitItemImpl, declared, not defined
void InitArtObjectMember(void* a_member, BGSArtObject* a_object);
void MarkArtObject(BGSArtObject* a_object, bool a_flag);

void BGSArtObject::InitItemImpl()
{
    const std::uint32_t flags = *reinterpret_cast<const std::uint32_t*>(
        reinterpret_cast<const std::uint8_t*>(this) + 0x10);
    if (TestBit(flags, 3)) {
        return;
    }
    InitArtObjectMember(unknown30, this);
    return MarkArtObject(this, true);
}
