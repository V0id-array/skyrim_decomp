// Source exposure: mixed (local binary analysis and public names).
// 0x14fd00 compared function
// 0x14f510 compared function
// 0x14ef00 compared function
// Origin: {"generator_family":"const-return","generator_version":"2","name_source":{"confidence":"medium","kind":"public","repository":"CharmedBaryon/CommonLibSSE-NG","revision":"b93280e832f263dbef44e44cbe2936622a02f91a","source":"ng-slot"},"template_digest":"df32415c55896040a11705484c0f0da5801925ec042c4cc3a23c954179756459"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// IngredientItem: EXE_RTTI
// GetAssociatedSkill: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// member, padding: GUESS(low); storage names invented for the measured member offset
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
#pragma once
#include <cstdint>
// IngredientData: GUESS(low); opaque storage returned by GetData2
struct IngredientData { std::uint8_t storage[0x10]; };

// GetAssociatedSkill: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
class IngredientItem
{
public:
    virtual std::uint32_t GetAssociatedSkill() const;
    // IngredientItem::GetIngredientSkillUseModifier: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    float GetIngredientSkillUseModifier();
    // IngredientItem::GetData2: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
    virtual IngredientData* GetData2();
    // Function14ef00: GUESS(low); filler slots keep the tail-called virtual at slot 10
    virtual void Slot02(); virtual void Slot03(); virtual void Slot04(); virtual void Slot05();
    virtual void Slot06(); virtual void Slot07(); virtual void Slot08(); virtual void Slot09();
    virtual void Slot10(std::uint32_t a_value);
    void Function14ef00(std::uint32_t a_bit);

    std::uint8_t pad[0x128];  // 08
    IngredientData data;  // 130
};
