// Source exposure: mixed (names from community headers; bodies from the pinned image listing).
// 0x1c7260 compared function
// Code origin: original; the listing of the pinned image and community declarations only
// SPDX-License-Identifier: CC0-1.0
// BGSStoryManagerNodeBase::~BGSStoryManagerNodeBase: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// Adapted bodies: none
// RVA 0x1c7260, 93 bytes
#include "BGSStoryManagerNodeBase.h"

// TestBit: GUESS(low); a flag-word bit test by bit index, taking the word by value.
inline bool TestBit(std::uint32_t a_flags, std::uint32_t a_bit)
{
    return ((a_flags >> a_bit) & 1) != 0;
}

// RVA 0x536120, 80 bytes
void BGSStoryManagerNodeBase::ClearData()
{
    TESForm::ClearData();
    conditions.Clear();
    if (!IsDataHandlerBusy(TESDataHandler::singleton) && TestBit(formFlags, 3) && parent != nullptr) {
        BranchRemoveChild(parent, this, 0);
    }
}

// RVA 0x1c7260, 93 bytes
// Near-miss: near-miss/0x1c7260.cpp

TESCondition* BGSStoryManagerNodeBase::QConditions()
{
    return &conditions;
}

void BGSStoryManagerNodeBase::InitializeData()
{
    TESForm::InitializeData();
    parent          = nullptr;
    previousSibling = nullptr;
    maxQuests       = 0;
    flags.nodeFlags = 0;
    flags.questFags = 0;
}

// Defined so the compiler emits the vftable and, beside it, the scalar deleting destructor.
BGSStoryManagerNodeBase::BGSStoryManagerNodeBase()
{
}

BGSStoryManagerNodeBase::~BGSStoryManagerNodeBase()
{
    ClearData();
}
