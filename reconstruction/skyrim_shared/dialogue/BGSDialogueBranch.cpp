// Source exposure: mixed (community headers; the pinned image listing).
// 0x38cd70 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x38cf10 BGSDialogueBranch::Function38cf10
// Adapted bodies: none
// Source exposure: mixed. Drafted by claude-sonnet-5-5 from the local instruction listing of the
// pinned image, with the class layout from the header beside this file. Names are from CharmedBaryon/CommonLibSSE-NG b93280e (MIT) unless labelled in the header.
#include "BGSDialogueBranch.h"

// TestBit: GUESS(low); a flag-word bit test by bit index, taking the word by value.
inline bool TestBit(std::uint32_t a_flags, std::uint32_t a_bit)
{
    return ((a_flags >> a_bit) & 1) != 0;
}

void BGSDialogueBranch::Function38cf10(TESTopic* a_topic)
{
    startingTopic = a_topic;
}

void BGSDialogueBranch::InitializeData()
{
    flags = 1;
    quest = nullptr;
    startingTopic = nullptr;
}

void BGSDialogueBranch::InitItemImpl()
{
    if (TestBit(formFlags, 3)) {
        return;
    }
    std::uint32_t id = static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(quest));
    AddCompileIndex(id, GetFile(-1));
    TESQuest* q = static_cast<TESQuest*>(LookupByID(id));
    if (q && static_cast<std::uint8_t>(q->formType) == 0x4D) {
        quest = q;
        QuestHelper(quest, type, this);
    } else {
        quest = nullptr;
    }

    id = static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(startingTopic));
    AddCompileIndex(id, GetFile(-1));
    startingTopic = nullptr;
    TESForm* topic = LookupByID(id);
    startingTopic = (topic && static_cast<std::uint8_t>(topic->formType) == 0x4B)
                        ? static_cast<TESTopic*>(topic)
                        : nullptr;
    SetFormFlag(true);
}
