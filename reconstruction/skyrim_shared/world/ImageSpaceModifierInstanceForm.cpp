// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Recipe: reconstruction/recipes/msvc-19.16.27054-o2-root-includes.json
// 0x2a3650 ImageSpaceModifierInstanceForm::Unk_25
// Adapted bodies: none
#include "ImageSpaceModifierInstanceForm.h"

// ApplyToInstance: GUESS(low); callee of the compared body, bound by position
bool ApplyToInstance(void* a_instance, float a_strength);  // RVA 0x2a7630

// ImageSpaceModifierInstanceForm::Unk_25: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
bool ImageSpaceModifierInstanceForm::Unk_25()
{
    if (targetInstance) {
        return ApplyToInstance(targetInstance, age);
    }
    return false;
}
