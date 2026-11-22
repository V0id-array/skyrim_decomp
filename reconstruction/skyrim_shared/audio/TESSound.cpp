// Source exposure: mixed (community headers; the pinned image listing).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Code origin: original; the listing and community declarations only
// 0x3887e0 TESSound::InitItemImpl
// Adapted bodies: none
// TESSound::InitItemImpl: CRASHLOGGER_PDB(59818@2026.10.24)
// TestBit: GUESS(low); a flag-word bit test by bit index, taking the word by value.
// AddCompileIndex, GetFile, LookupByID: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// SetFormFlag: GUESS(low); a non-virtual helper at 0x1e60b0 taking this and a bool
#include "TESSound.h"

void SetEditorID(const char*, TESSound*);

// TestBit: GUESS(low); a flag-word bit test by bit index, taking the word by value.
inline bool TestBit(std::uint32_t a_flags, std::uint32_t a_bit)
{
    return ((a_flags >> a_bit) & 1) != 0;
}

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
TESSound::TESSound()
{
}

void TESSound::InitItemImpl()
{
    if (!TestBit(formFlags, 3)) {
        std::uint32_t id = static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(unknown30));
        if (id != 0) {
            AddCompileIndex(id, GetFile(-1));
            unknown30 = dynamic_cast<BGSSoundDescriptorForm*>(LookupByID(id));
        }
        SetFormFlag(true);
    }
}

// TODO body: RVA 0x388860, 3 bytes, TESSound::Clone3D.
NiAVObject* TESSound::Clone3D(TESObjectREFR* a_ref)
{
    return nullptr;
}

// TODO body: RVA 0x388880, 9 bytes, TESSound::InitializeData.
void TESSound::InitializeData()
{
    unknown30 = nullptr;
}

// TODO body: RVA 0x388620, 25 bytes, TESSound::SetFormEditorID.
bool TESSound::SetFormEditorID(const char* a_str)
{
    SetEditorID(a_str, this);
    return true;
}

// TODO body: RVA 0x3888d0, 62 bytes, TESSound::~TESSound; compared as the scalar deleting
// destructor. If the target calls a separate destructor, keep only the declaration and delete this
// definition (cookbook rule 18).
TESSound::~TESSound()
{
}
