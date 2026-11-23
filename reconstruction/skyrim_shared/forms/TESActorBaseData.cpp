// Source exposure: mixed (community headers; the pinned image listing).
// 0x1dd490 compared function
// 0x1dd470 compared function
// 0x1dd450 compared function
// 0x1dd430 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x1dd980 TESActorBaseData::Function1dd980
// Adapted bodies: none
// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x1dcb50 TESActorBaseData::Function1dcb50
// Adapted bodies: none
// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x1dcb30 TESActorBaseData::Function1dcb30
// Adapted bodies: none
// Source exposure: mixed. Drafted by claude-sonnet-5-5 from the local instruction listings of the
// pinned image, with the class layout from the header beside this file. Names are from CharmedBaryon/CommonLibSSE-NG b93280e (MIT) unless labelled in the header.
#include "TESActorBaseData.h"

// gDefaultBaseDisposition: GUESS(low); a byte global at 0x20780f8 copied into baseDisposition
extern std::uint8_t gDefaultBaseDisposition;

namespace
{
    // TestBit: GUESS(low); a flag-word bit test by bit index, taking the word by value
    inline bool TestBit(std::uint32_t a_flags, std::uint32_t a_bit)
    {
        return ((a_flags >> a_bit) & 1) != 0;
    }
}

void TESActorBaseData::Function1dcb30(void* a_baseTemplateForm)
{
    baseTemplateForm = a_baseTemplateForm;
}

void TESActorBaseData::Function1dcb50(std::uint16_t a_templateUseFlags)
{
    actorData.templateUseFlags = a_templateUseFlags;
}

void TESActorBaseData::Function1dd980(BGSVoiceType* a_voiceType)
{
    voiceType = a_voiceType;
}

bool TESActorBaseData::GetIsGhost() const
{
    return TestBit(actorData.actorBaseFlags, 29);
}

bool TESActorBaseData::GetInvulnerable() const
{
    return TestBit(actorData.actorBaseFlags, 31);
}

bool TESActorBaseData::Unk_07()
{
    return true;
}

BGSVoiceType* TESActorBaseData::GetVoiceType()
{
    return voiceType;
}

void TESActorBaseData::ClearDataComponent()
{
    factions.Clear();
}

void TESActorBaseData::InitializeDataComponent()
{
    actorData.level = 1;
    actorData.calcLevelMin = 0;
    actorData.actorBaseFlags = 0;
    actorData.magickaOffset = 0;
    actorData.staminaOffset = 0;
    actorData.healthOffset = 0;
    actorData.calcLevelMax = 0;
    actorData.speedMult = 100;
    actorData.baseDisposition = gDefaultBaseDisposition;
    voiceType = nullptr;
    deathItem = nullptr;
    baseTemplateForm = nullptr;
    actorData.templateUseFlags = 0;
    actorData.bleedoutOverride = 0;
    unk38 = 0;
}

void SmallBase430::Function1dd430(std::uint16_t a_value)
{
    field10 = a_value;
    auto* owner = reinterpret_cast<char*>(this) - 0x30;
    if (owner != nullptr) {
        using Fn = void (*)(void*, int);
        auto** vt = *reinterpret_cast<void***>(owner);
        reinterpret_cast<Fn>(vt[10])(owner, 2);
    }
}

void SmallBase430::Function1dd450(std::uint16_t a_value)
{
    field12 = a_value;
    auto* owner = reinterpret_cast<char*>(this) - 0x30;
    if (owner != nullptr) {
        using Fn = void (*)(void*, int);
        auto** vt = *reinterpret_cast<void***>(owner);
        reinterpret_cast<Fn>(vt[10])(owner, 2);
    }
}

void SmallBase430::Function1dd470(std::uint16_t a_value)
{
    field14 = a_value;
    auto* owner = reinterpret_cast<char*>(this) - 0x30;
    if (owner != nullptr) {
        using Fn = void (*)(void*, int);
        auto** vt = *reinterpret_cast<void***>(owner);
        reinterpret_cast<Fn>(vt[10])(owner, 2);
    }
}

void SmallBase430::Function1dd490(std::uint16_t a_value)
{
    field18 = a_value;
    auto* owner = reinterpret_cast<char*>(this) - 0x30;
    if (owner != nullptr) {
        using Fn = void (*)(void*, int);
        auto** vt = *reinterpret_cast<void***>(owner);
        reinterpret_cast<Fn>(vt[10])(owner, 2);
    }
}

// TESActorBaseData::CopyFromTemplateForms: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
void TESActorBaseData::CopyFromTemplateForms()
{
}
