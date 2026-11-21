// Source exposure: binary-analysis (the shape of the compared function in the pinned image).
// Code origin: original stand-in; no external declaration or body reused.
// SPDX-License-Identifier: CC0-1.0
// 0x6892f0 Function6892f0
// Adapted bodies: none
#include "Function6892f0.h"

#include <cmath>

float GetActorValueStandin(unsigned a_id, unsigned a_index, bool a_match);

float Function6892f0(void* a_object, float a_value, float a_other)
{
    float actorValue = GetActorValueStandin(playerCharacterSingleton->actorValueBase, 24,
                                            a_object == comparisonObject);
    float magnitude = a_other < 0.0f ? -a_other : a_other;
    if (magnitude > comparisonThreshold && actorValue >= 1.0f)
        return a_value;
    return actorValue * a_value;
}
