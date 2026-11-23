// Source exposure: mixed (community headers; the pinned image listing).
// 0x7270a0 compared function
// 0x7231e0 compared function
// 0x720f60 compared function
// 0x700100 compared function
// 0x6ff530 compared function
// 0x6fe5d0 compared function
// 0x6f6e10 compared function
// 0x6f64b0 compared function
// 0x6f5220 compared function
// 0x6e99e0 compared function
// 0x6e97b0 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x6ff500 ActorProcess::Function6ff500
// Adapted bodies: none
// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x6fe770 ActorProcess::Function6fe770
// Adapted bodies: none
// Source exposure: mixed (community headers; the pinned image listing).
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x6ffef0 ActorProcess::Function6ffef0
// Adapted bodies: none
// Source exposure: mixed (pinned image listings and community declarations).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// ActorProcess: EXE_RTTI
// GetEquippedLeftHand: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// Code origin: existing project getter GetEquippedLeftHand; new methods from the pinned image and CommonLibSSE-NG field declarations.
// Adapted bodies: none
#include "ActorProcess.h"

// Function6e97b0: the non-null path tail-calls its helper; the null path stores kNullHandle.
void ActorProcess::Function6e97b0()
{
    if (middleHigh) {
        External_720580(this);
        return;
    }
    field114 = kNullHandle;
}

// Function6e99e0: forwards the subobject at +0x18 by tail call.
void ActorProcess::Function6e99e0()
{
    External_6e0210(padding);
}

// Float getters: main path first, the default-return path last (two RETs).
float ActorProcess::Function6f5220() const
{
    ProcessState* current = state;
    if (current) return current->float324;
    return kDefaultFloat;
}

float ActorProcess::Function6fe5d0() const
{
    ProcessState* current = state;
    if (current) return current->float134;
    return kDefaultFloat;
}

float ActorProcess::Function700100() const
{
    ProcessState* current = state;
    if (current) return current->float18;
    return 0.0f;
}

void ActorProcess::Function6f64b0(std::uint16_t a_value, std::uint64_t a_bits)
{
    ProcessState* current = state;
    if (!current) return;
    current->word2D8 = a_value;
    state->qword2D0 = a_bits;
}

void ActorProcess::Function6f6e10(const std::uint32_t* a_value, bool a_flag)
{
    ProcessState* current = state;
    if (!current) return;
    current->fieldD8 = *a_value;
    state->byte470 = a_flag ? 1 : 0;
}

void* ActorProcess::Function6ff530()
{
    ProcessState* current = state;
    if (current) return External_71e100(current);
    return nullptr;
}

void ActorProcess::Function6ffef0()
{
    ProcessState* current = state;
    if (!current) return;
    current->word3F8 = -1;
    state->word3FA = -1;
}

// NonNull: GUESS(low); a by-reference pointer test that keeps the null path's test materialized.
static inline bool NonNull(void* const& a_value)
{
    return a_value != nullptr;
}

bool ActorProcess::Function720f60() const
{
    auto* current = reinterpret_cast<const std::uint8_t*>(middleHigh);
    if (!current) return false;
    if (!*reinterpret_cast<void* const*>(current + 0x188)) return false;
    return true;
}

bool ActorProcess::Function7231e0() const
{
    void* current = middleHigh;
    void* nested = current ? *reinterpret_cast<void* const*>(reinterpret_cast<const std::uint8_t*>(current) + 0x60)
                           : current;
    return NonNull(nested);
}

float ActorProcess::Function7270a0() const
{
    auto* current = reinterpret_cast<const std::uint8_t*>(middleHigh);
    if (current) return *reinterpret_cast<const float*>(current + 0x2c8);
    return kDefaultFloat;
}

void ActorProcess::Function6ff500(const std::uint32_t* a_value)
{
    ProcessState* current = state;
    if (current == nullptr) {
        return;
    }
    if (current->field17C != *a_value) {
        return;
    }
    current->field17C = kNullHandle;
}

void ActorProcess::Function6fe770()
{
    ProcessState* current = state;
    if (current == nullptr) {
        return;
    }
    current->handle140 = kNullHandle;
    current->flag158 = 0;
    FinalizeState(current);
}

// MiddleHighProcessData::unk328, MiddleHighProcessData::unk248, MiddleHighProcessData::unk31E, MiddleHighProcessData::unk31F, MiddleHighProcessData::alphaMult: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// MiddleHighProcessData::scriptRefractPower, MiddleHighProcessData::unk31A, MiddleHighProcessData::unk180, MiddleHighProcessData::forceNextUpdate, MiddleHighProcessData::summonedCreature: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// MiddleHighProcessData::damageRootNode, MiddleHighProcessData::headNode, MiddleHighProcessData::torsoNode, MiddleHighProcessData::unk321, MiddleHighProcessData::faceNodeSkinned: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// MiddleHighProcessData::alwaysHit, MiddleHighProcessData::doNoDamage, MiddleHighProcessData::preventCombat, MiddleHighProcessData::faceAnimationData, MiddleHighProcessData::bleedoutRate: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// MiddleHighProcessData::unk2B0, MiddleHighProcessData::unk2B8, MiddleHighProcessData::bleedoutAttacker, MiddleHighProcessData::unk32A, MiddleHighProcessData::killQueued: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// MiddleHighProcessData::wardState, MiddleHighProcessData::soulTrapped: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// pad000, pad0F4, pad148, pad168, pad178: STANDIN GUESS(low)
// pad188, pad240, pad250, pad2BC, pad2D0: STANDIN GUESS(low)
// pad31B, pad320, pad322, pad326, pad32B: STANDIN GUESS(low)
// Function733f00, Function736230, Function736a30, Function736c00: GUESS(low)
struct ActorProcess::ProcessData
{
    std::uint8_t pad000[0x60];
    void* field60;  // 60, read by Function7231e0
    std::uint8_t pad068[0x84];  // 68
    std::uint32_t bleedoutAttacker;
    MagicSystem::WardState wardState;
    std::uint8_t pad0F4[0x24];
    NiNode* damageRootNode[6];
    std::uint8_t pad148[0x10];
    NiAVObject* headNode;
    NiAVObject* torsoNode;
    std::uint8_t pad168[0x8];
    BSFaceGenNiNode* faceNodeSkinned;
    std::uint8_t pad178[0x8];
    std::uint64_t unk180;
    void* field188;  // 188, tested by Function720f60
    std::uint8_t pad190[0xa8];  // 190
    BSFaceGenAnimationData* faceAnimationData;
    std::uint8_t pad240[0x8];
    std::uint64_t unk248;
    std::uint8_t pad250[0x60];
    float unk2B0;
    float bleedoutRate;
    float unk2B8;
    std::uint8_t pad2BC[0xc];
    float alphaMult;
    float scriptRefractPower;
    std::uint8_t pad2D0[0x4a];
    bool unk31A;
    std::uint8_t pad31B[0x1];
    bool summonedCreature;
    bool forceNextUpdate;
    bool unk31E;
    bool unk31F;
    std::uint8_t pad320[0x1];
    bool unk321;
    std::uint8_t pad322[0x1];
    bool alwaysHit;
    bool doNoDamage;
    bool soulTrapped;
    std::uint8_t pad326[0x2];
    bool unk328;
    bool preventCombat;
    bool unk32A;
    std::uint8_t pad32B[0x6];
    bool killQueued;

    void Function733f00();
    void Function736230();
    void Function736a30();
    void Function736c00();
};

void* ActorProcess::GetEquippedLeftHand() const
{
    return member;
}

void ActorProcess::Function7265a0()
{
    if (middleHigh) {
        middleHigh->unk328 = true;
    }
}

void ActorProcess::Function726fa0(std::uint64_t a_value)
{
    if (middleHigh) {
        middleHigh->unk248 = a_value;
    }
}

std::uint64_t ActorProcess::Function726fc0() const
{
    return middleHigh ? middleHigh->unk248 : 0;
}

void ActorProcess::Function727020(bool a_value)
{
    if (middleHigh) {
        middleHigh->unk31E = a_value;
    }
}

void ActorProcess::Function727060(bool a_value)
{
    if (middleHigh) {
        middleHigh->unk31F = a_value;
    }
}

bool ActorProcess::Function727080() const
{
    return middleHigh && middleHigh->unk31F;
}

void ActorProcess::Function7270d0(float a_value)
{
    if (middleHigh) {
        middleHigh->alphaMult = a_value;
    }
}

float ActorProcess::Function7270f0() const
{
    return middleHigh ? middleHigh->scriptRefractPower : 0.0f;
}

void ActorProcess::Function727110(float a_value)
{
    if (middleHigh) {
        middleHigh->scriptRefractPower = a_value;
    }
}

void ActorProcess::Function7271e0()
{
    if (middleHigh) {
        middleHigh->unk31A = true;
    }
}

std::uint64_t ActorProcess::Function727200() const
{
    return middleHigh ? middleHigh->unk180 : 0;
}

void ActorProcess::Function727220(std::uint64_t a_value)
{
    if (middleHigh) {
        middleHigh->unk180 = a_value;
    }
}

void ActorProcess::Function727240(bool a_value)
{
    if (middleHigh) {
        middleHigh->forceNextUpdate = a_value;
    }
}

bool ActorProcess::Function727260() const
{
    return middleHigh && middleHigh->forceNextUpdate;
}

void ActorProcess::Function727280(bool a_value)
{
    if (middleHigh) {
        middleHigh->summonedCreature = a_value;
    }
}

bool ActorProcess::Function7272a0() const
{
    return middleHigh && middleHigh->summonedCreature;
}

NiNode* ActorProcess::Function727420(std::int32_t a_index) const
{
    return middleHigh ? middleHigh->damageRootNode[a_index] : nullptr;
}

NiAVObject* ActorProcess::Function727440() const
{
    return middleHigh ? middleHigh->headNode : nullptr;
}

NiAVObject* ActorProcess::Function727460() const
{
    return middleHigh ? middleHigh->torsoNode : nullptr;
}

void ActorProcess::Function7274a0(bool a_value)
{
    if (middleHigh) {
        middleHigh->unk321 = a_value;
    }
}

BSFaceGenNiNode* ActorProcess::Function727ae0() const
{
    return middleHigh ? middleHigh->faceNodeSkinned : nullptr;
}

void ActorProcess::Function727b00(BSFaceGenNiNode* a_value)
{
    if (middleHigh) {
        middleHigh->faceNodeSkinned = a_value;
    }
}

bool ActorProcess::Function727cf0() const
{
    return middleHigh && middleHigh->alwaysHit;
}

void ActorProcess::Function727d10(bool a_value)
{
    if (middleHigh) {
        middleHigh->alwaysHit = a_value;
    }
}

bool ActorProcess::Function727d30() const
{
    return middleHigh && middleHigh->doNoDamage;
}

void ActorProcess::Function727d50(bool a_value)
{
    if (middleHigh) {
        middleHigh->doNoDamage = a_value;
    }
}

bool ActorProcess::Function727d70() const
{
    return middleHigh && middleHigh->preventCombat;
}

void ActorProcess::Function727d90(bool a_value)
{
    if (middleHigh) {
        middleHigh->preventCombat = a_value;
    }
}

void ActorProcess::Function727db0(BSFaceGenAnimationData* a_value)
{
    if (middleHigh) {
        middleHigh->faceAnimationData = a_value;
    }
}

void ActorProcess::Function727df0(float a_value)
{
    if (middleHigh) {
        middleHigh->bleedoutRate = a_value;
    }
}

float ActorProcess::Function727e10() const
{
    return middleHigh ? middleHigh->unk2B0 : 0.0f;
}

void ActorProcess::Function727e30(float a_value)
{
    if (middleHigh) {
        middleHigh->unk2B0 = a_value;
    }
}

float ActorProcess::Function727e50() const
{
    return middleHigh ? middleHigh->unk2B8 : 0.0f;
}

void ActorProcess::Function727e70(float a_value)
{
    if (middleHigh) {
        middleHigh->unk2B8 = a_value;
    }
}

void ActorProcess::Function727e90(const std::uint32_t& a_value)
{
    if (middleHigh) {
        middleHigh->bleedoutAttacker = a_value;
    }
}

bool ActorProcess::Function727ee0() const
{
    return middleHigh && middleHigh->unk32A;
}

void ActorProcess::Function727f00(bool a_value)
{
    if (middleHigh) {
        middleHigh->unk32A = a_value;
    }
}

bool ActorProcess::Function727f20() const
{
    return middleHigh && middleHigh->killQueued;
}

void ActorProcess::Function727f40(bool a_value)
{
    if (middleHigh) {
        middleHigh->killQueued = a_value;
    }
}

void ActorProcess::Function727f60(MagicSystem::WardState a_value)
{
    if (middleHigh) {
        middleHigh->wardState = a_value;
    }
}

void ActorProcess::Function7284e0()
{
    if (middleHigh) {
        middleHigh->Function733f00();
    }
}

void ActorProcess::Function728500()
{
    if (middleHigh) {
        middleHigh->Function736230();
    }
}

void ActorProcess::Function728520()
{
    if (middleHigh) {
        middleHigh->Function736a30();
    }
}

void ActorProcess::Function728540()
{
    if (middleHigh) {
        middleHigh->Function736c00();
    }
}

void ActorProcess::Function728560()
{
    if (middleHigh) {
        middleHigh->soulTrapped = true;
    }
}

bool ActorProcess::Function728580() const
{
    return middleHigh && middleHigh->soulTrapped;
}
