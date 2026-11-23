// Source exposure: mixed (community headers; the pinned image listing).
// 0x346a60 compared function
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Code origin: original reconstruction from the pinned image listing and community declarations.
// 0x346390 Script::SetProcessScripts
// Adapted bodies: none
#include "Script.h"

// g_scriptProcessScripts: GUESS(low); a mutable global the compared GetProcessScripts reads at 0x207e511
extern bool g_scriptProcessScripts;
// ScriptInitItemHelper: GUESS(low); the target tail-jumps to it with this passed twice, at 0x344770
void ScriptInitItemHelper(Script* a_self, Script* a_other);

Script::Script()
{
}

// Bound by hash: the target's slot body tail-jumps to the helper with `this` twice.
void ScriptInitItemShim(Script* a_self)
{
    ScriptInitItemHelper(a_self, a_self);
}

bool Script::GetProcessScripts()
{
    return g_scriptProcessScripts;
}

void Script::SetProcessScripts(bool a_value)
{
    g_scriptProcessScripts = a_value;
}
