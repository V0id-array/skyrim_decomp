// Source exposure: mixed (names and declarations from community headers; base classes, sizes and
// 0x346a60 compared function
// 0x346390 compared function
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Script: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// Script::InitItemImpl, Script::GetProcessScripts: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// Script::SetProcessScripts: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>
#include <cstddef>
#include "../skyrim_shared/forms/TESForm.h"

class Script : public TESForm
{
public:
    Script();  // forces the vftable and its scalar deleting destructor
    static bool GetProcessScripts();  // compared: 0x3463a0
    static void SetProcessScripts(bool a_value);  // compared: 0x346390

    std::uint8_t unknown20[0x60];  // 20
};
static_assert(sizeof(Script) == 0x80, "Script size");
