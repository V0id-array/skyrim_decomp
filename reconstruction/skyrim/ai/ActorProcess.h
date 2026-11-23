// Source exposure: mixed (pinned image listings and community declarations).
// 0x7270a0 compared function
// 0x7231e0 compared function
// 0x720f60 compared function
// 0x700100 compared function
// 0x6ffef0 compared function
// 0x6ff530 compared function
// 0x6ff500 compared function
// 0x6fe770 compared function
// 0x6fe5d0 compared function
// 0x6f6e10 compared function
// 0x6f64b0 compared function
// 0x6f5220 compared function
// 0x6e99e0 compared function
// 0x6e97b0 compared function
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// ActorProcess: EXE_RTTI
// GetEquippedLeftHand: COMMUNITY(meh321/AddressLibraryDatabase@0379cb6, permission)
// Code origin: project ActorProcess declaration with a partial layout adapted from CommonLibSSE-NG.
// ProcessData, padding, member: STANDIN GUESS(low)
// AIProcess::middleHigh, MagicSystem, MagicSystem::WardState, BSFaceGenAnimationData, BSFaceGenNiNode: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// NiAVObject, NiNode: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// Function7265a0, Function726fa0, Function726fc0, Function727020, Function727060: GUESS(low)
// Function727080, Function7270d0, Function7270f0, Function727110, Function7271e0: GUESS(low)
// Function727200, Function727220, Function727240, Function727260, Function727280: GUESS(low)
// Function7272a0, Function727420, Function727440, Function727460, Function7274a0: GUESS(low)
// Function727ae0, Function727b00, Function727cf0, Function727d10, Function727d30: GUESS(low)
// Function727d50, Function727d70, Function727d90, Function727db0, Function727df0: GUESS(low)
// Function727e10, Function727e30, Function727e50, Function727e70, Function727e90: GUESS(low)
// Function727ee0, Function727f00, Function727f20, Function727f40, Function727f60: GUESS(low)
// Function7284e0, Function728500, Function728520, Function728540, Function728560: GUESS(low)
// Function728580: GUESS(low)
#pragma once

#include <cstdint>

class BSFaceGenAnimationData;
class BSFaceGenNiNode;
class NiAVObject;
class NiNode;
namespace MagicSystem
{
    enum class WardState;
}

// ProcessState: GUESS(low) STANDIN; word fields written by Function6ffef0.
class ProcessState;
// kNullHandle: GUESS(low); global written into the state by Function6fe770.
extern std::uint32_t kNullHandle;
// FinalizeState: GUESS(low); helper at RVA 0x71ea00.
void FinalizeState(ProcessState* a_state);

class ProcessState
{
public:
    std::uint8_t pad00[0x18];  // 00
    float float18;  // 18
    std::uint8_t pad1C[0xBC];  // 1C
    std::uint32_t fieldD8;  // D8
    std::uint8_t padDC[0x58];  // DC
    float float134;  // 134
    std::uint8_t pad138[0x8];  // 138
    std::uint32_t handle140;  // 140
    std::uint8_t pad144[0x14];  // 144
    std::uint8_t flag158;  // 158
    std::uint8_t pad159[0x23];  // 159
    std::uint32_t field17C;  // 17C
    std::uint8_t pad180[0x148];  // 180
    float float2C8;  // 2C8
    std::uint64_t qword2D0;  // 2D0
    std::uint16_t word2D8;  // 2D8
    std::uint8_t pad2DA[0x4A];  // 2DA
    float float324;  // 324
    std::uint8_t pad328[0xD0];  // 328
    std::int16_t word3F8;  // 3F8
    std::int16_t word3FA;  // 3FA
    std::uint8_t pad3FC[0x74];  // 3FC
    std::uint8_t byte470;  // 470
};

class ActorProcess
{
public:
    virtual void* GetEquippedLeftHand() const;
    void Function7265a0();
    void Function726fa0(std::uint64_t a_value);
    std::uint64_t Function726fc0() const;
    void Function727020(bool a_value);
    void Function727060(bool a_value);
    bool Function727080() const;
    void Function7270d0(float a_value);
    float Function7270f0() const;
    void Function727110(float a_value);
    void Function7271e0();
    std::uint64_t Function727200() const;
    void Function727220(std::uint64_t a_value);
    void Function727240(bool a_value);
    bool Function727260() const;
    void Function727280(bool a_value);
    bool Function7272a0() const;
    NiNode* Function727420(std::int32_t a_index) const;
    NiAVObject* Function727440() const;
    NiAVObject* Function727460() const;
    void Function7274a0(bool a_value);
    BSFaceGenNiNode* Function727ae0() const;
    void Function727b00(BSFaceGenNiNode* a_value);
    bool Function727cf0() const;
    void Function727d10(bool a_value);
    bool Function727d30() const;
    void Function727d50(bool a_value);
    bool Function727d70() const;
    void Function727d90(bool a_value);
    void Function727db0(BSFaceGenAnimationData* a_value);
    void Function727df0(float a_value);
    float Function727e10() const;
    void Function727e30(float a_value);
    float Function727e50() const;
    void Function727e70(float a_value);
    void Function727e90(const std::uint32_t& a_value);
    bool Function727ee0() const;
    void Function727f00(bool a_value);
    bool Function727f20() const;
    void Function727f40(bool a_value);
    void Function727f60(MagicSystem::WardState a_value);
    void Function7284e0();
    void Function728500();
    void Function728520();
    void Function728540();
    void Function728560();
    bool Function728580() const;

    struct ProcessData;
    ProcessData* middleHigh;  // 08

    // Compared leaf functions (GUESS(low); bodies from the pinned image listings).
    void Function6e97b0();
    void Function6e99e0();
    float Function6f5220() const;
    void Function6f64b0(std::uint16_t a_value, std::uint64_t a_bits);
    void Function6f6e10(const std::uint32_t* a_value, bool a_flag);
    float Function6fe5d0() const;
    void* Function6ff530();
    void Function6ffef0();
    void Function6fe770();
    void Function6ff500(const std::uint32_t* a_value);
    float Function700100() const;
    bool Function720f60() const;
    bool Function7231e0() const;
    float Function7270a0() const;

    ProcessState* state;  // 10
    std::uint8_t padding[0xd8];  // 18
    void* member;  // F0
    std::uint8_t padF8[0x1c];  // F8
    std::uint32_t field114;  // 114
};

// External callees bound by position in the pinned image (GUESS(low)).
void External_720580(ActorProcess* a_owner);
void External_6e0210(void* a_subobject);
void* External_71e100(ProcessState* a_state);
// Default float constants (GUESS(low)); the image references these by relocation.
extern const float kDefaultFloat;
