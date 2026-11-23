// Source exposure: mixed (community headers; compared functions from the pinned image).
// 0x535330 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// BGSStoryManagerTreeVisitor, BGSStoryManagerTreeVisitor::~BGSStoryManagerTreeVisitor: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
#pragma once

#include <cstdint>
#include <cstddef>

// cursorAncestry, _data, _size: CRASHLOGGER_PDB(59818@2026.10.24)
class BGSStoryManagerTreeVisitor
{
public:
    BGSStoryManagerTreeVisitor();
    virtual ~BGSStoryManagerTreeVisitor();  // compared: 0x535330

    std::uint8_t pad08[0x18];  // 08
    struct Array
    {
        void* _data;            // 00
        std::uint32_t _capacity;  // 08
        std::uint32_t pad0C;      // 0C
        std::uint32_t _size;      // 10
        std::uint32_t pad14;      // 14
    };
    Array cursorAncestry;      // 20
    std::uint32_t queryID;     // 38
    std::uint32_t pad3C;       // 3C
};
static_assert(sizeof(BGSStoryManagerTreeVisitor) == 0x40, "visitor size");
