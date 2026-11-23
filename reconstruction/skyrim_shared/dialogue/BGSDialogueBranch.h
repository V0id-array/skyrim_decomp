// Source exposure: mixed (binary-analysis of the pinned image, community-headers).
// 0x38cf10 compared function
// 0x38cd70 compared function
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Bodies adapted from community sources: none; tools/check_origin.py reports none above its threshold at the pinned checkouts.
// BGSDialogueBranch, BGSDialogueBranch::InitializeData, ::flags, ::pad24, ::quest, ::startingTopic: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// TESQuest, TESTopic: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); opaque, only used by pointer
#pragma once

#include <cstdint>

#include "../forms/TESForm.h"

// TESQuest, TESTopic: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); only the base is needed to read formType.
class TESQuest : public TESForm {
};
class TESTopic : public TESForm {
};

class BGSDialogueBranch : public TESForm {
public:
    void InitializeData() override;  // 04
    void InitItemImpl() override;    // 13
    // BGSDialogueBranch::Function38cf10: GUESS(low); stores the topic at 0x30
    void Function38cf10(TESTopic* a_topic);

    static void     AddCompileIndex(std::uint32_t& a_id, TESFile* a_file);
    TESFile*        GetFile(std::int32_t a_idx = -1) const;
    static TESForm* LookupByID(std::uint32_t a_formID);
    void            SetFormFlag(bool a_set);
    static void     QuestHelper(TESForm* a_quest, std::uint32_t a_type, BGSDialogueBranch* a_branch);

    std::uint32_t flags;          // 20
    std::uint32_t pad24;          // 24
    TESQuest*     quest;          // 28
    TESTopic*     startingTopic;  // 30
    std::uint32_t type;           // 38
    std::uint32_t pad3C;          // 3C
};
static_assert(sizeof(BGSDialogueBranch) == 0x40, "layout");
