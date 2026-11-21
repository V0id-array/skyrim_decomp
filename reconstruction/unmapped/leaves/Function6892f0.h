// Source exposure: binary-analysis (the shape of the compared function in the pinned image).
// Code origin: original stand-in; no external declaration or body reused.
// SPDX-License-Identifier: CC0-1.0
// Function6892f0, its globals and callee: GUESS(low) STANDIN
// PlayerCharacter::singleton: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
#pragma once

class Function6892f0 {};

class PlayerCharacter
{
public:
    unsigned char unknown00[0xB08];  // 00
    unsigned actorValueBase;  // B08
};
extern "C" PlayerCharacter* playerCharacterSingleton;
extern "C" void* comparisonObject;
extern "C" float comparisonThreshold;

float Function6892f0(void* a_object, float a_value, float a_other);
