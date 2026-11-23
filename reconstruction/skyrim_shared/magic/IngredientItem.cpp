// Source exposure: mixed (community headers; the pinned image listing).
// 0x14ef00 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// Recipe: reconstruction/recipes/o2-fpfast.json
// 0x14f510 IngredientItem::GetIngredientSkillUseModifier
// 0x14fd00 IngredientItem::GetData2
// Adapted bodies: none
// Source exposure: mixed (local binary analysis and public names).
// Origin: {"generator_family":"const-return","generator_version":"2","name_source":{"confidence":"medium","kind":"public","repository":"CharmedBaryon/CommonLibSSE-NG","revision":"b93280e832f263dbef44e44cbe2936622a02f91a","source":"ng-slot"},"template_digest":"df32415c55896040a11705484c0f0da5801925ec042c4cc3a23c954179756459"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// IngredientItem: EXE_RTTI
// GetAssociatedSkill: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// member, padding: GUESS(low); storage names invented for the measured member offset
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
#include "IngredientItem.h"
// GetAssociatedSkill: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
std::uint32_t IngredientItem::GetAssociatedSkill() const
{
    return 0x10;
}

// gIngredientSkillUseModifier, gSkillUseModifierIdentity, gIngredientSkillUseModifierFallback: GUESS(low); image globals
extern float gIngredientSkillUseModifier;
extern float gSkillUseModifierIdentity;
extern float gIngredientSkillUseModifierFallback;

float IngredientItem::GetIngredientSkillUseModifier()
{
    return gIngredientSkillUseModifier == gSkillUseModifierIdentity
        ? gIngredientSkillUseModifierFallback
        : gIngredientSkillUseModifier;
}

// 0x14ef00 IngredientItem::Function14ef00
void IngredientItem::Function14ef00(std::uint32_t a_bit)
{
    auto* flags = reinterpret_cast<std::uint16_t*>(reinterpret_cast<std::uint8_t*>(this) + 0x138);
    std::uint32_t bits = *flags;
    bits |= 1u << a_bit;
    *flags = static_cast<std::uint16_t>(bits);
    Slot10(0x80000000u);
}

IngredientData* IngredientItem::GetData2()
{
    return &data;
}
