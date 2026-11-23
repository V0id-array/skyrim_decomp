// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x535330 BGSStoryManagerTreeVisitor::~BGSStoryManagerTreeVisitor
// Adapted bodies: none
#include "BGSStoryManagerTreeVisitor.h"

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
BGSStoryManagerTreeVisitor::BGSStoryManagerTreeVisitor()
{
}

// FunctionCe0ca0, FunctionCe0ed0, FunctionCe0f30: GUESS(low); no public names at the target addresses
void FunctionCe0ca0(std::uint32_t* a_value);
void FunctionCe0ed0(BGSStoryManagerTreeVisitor::Array* a_array);
void FunctionCe0f30(BGSStoryManagerTreeVisitor::Array* a_array);

BGSStoryManagerTreeVisitor::~BGSStoryManagerTreeVisitor()
{
    if (cursorAncestry._data) {
        FunctionCe0ed0(&cursorAncestry);
        cursorAncestry._size = 0;
    }
    FunctionCe0ca0(&cursorAncestry._size);
    FunctionCe0f30(&cursorAncestry);
}
