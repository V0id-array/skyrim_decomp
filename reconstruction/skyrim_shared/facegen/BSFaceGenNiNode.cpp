// Source exposure: mixed (community headers; the pinned image listing).
// 0x43a4c0 compared function
// Code origin: original reconstruction from the pinned image listing; names from the cited community declarations.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x43d080 BSFaceGenNiNode::Function43d080
// Adapted bodies: none
// Function43d080, FaceGenStateHelper: GUESS(low)
// Source exposure: mixed
// Origin: independently decoded target and anonymous sibling; declarations adapted from community headers.
// BSFaceGenNiNode::UpdateDownwardPass: SIBLING(fo4-private@1b765c70, author-permission); adapted to target calls.
// Sibling source: fo4-private@1b765c70 src/Shared/FaceGen/BSFaceGenNiNode.cpp:156
// names: GUESS(low); signatures and helper identities need independent review.
#include "BSFaceGenNiNode.h"

// Function43a4c0: GUESS(low); the state local is deliberately uninitialised (cookbook rule 9).
void BSFaceGenNiNode::Function43a4c0()
{
    bool value;
    FaceGenStateHelperA(&value);
}

void BSFaceGenNiNode::Function43d080()
{
    bool value = true;
    FaceGenStateHelper(&value);
}
void BSFaceGenNiNode::UpdateDownwardPass(NiUpdateData& data, unsigned flagsValue) { if ((flags & 1) == 0) UpdateMorphing(data); NiNode::UpdateDownwardPass(data, flagsValue); }
