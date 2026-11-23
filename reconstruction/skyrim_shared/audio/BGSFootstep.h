// Source exposure: mixed (binary-analysis of the pinned image, community-headers).
// 0x31c770 compared function
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Bodies adapted from community sources: none; tools/check_origin.py reports none above its threshold at the pinned checkouts.
// BGSFootstep, BGSFootstep::~BGSFootstep, BGSFootstep::tag, BGSFootstep::impactSet: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// BSFixedString, BSFixedString::~BSFixedString: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) OBSERVED; a single string pointer, the destructor is declared and not defined and bound by hint to 0xeb1100
// BSFixedString::_data: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) OBSERVED; NG keeps it private
// BGSImpactDataSet: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); opaque, only used by pointer
// BGSFootstep::BGSFootstep: GUESS(low); the implicit constructor, defined only so the unit emits the vftable and the deleting destructor
#pragma once

#include <cstdint>

#include "../forms/TESForm.h"

class BGSImpactDataSet;
class TESFile;

// AddCompileIndex, GetFile, LookupByID: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); NG declares them on TESForm, declared here because TESForm.h has none (header-gap TESForm)
// SetFormFlag: GUESS(low); a non-virtual TESForm helper at 0x1e60b0 called at the end of InitItemImpl (header-gap TESForm)

class BSFixedString {
public:
    ~BSFixedString();

    const char* _data;  // 00
};

class BGSFootstep : public TESForm {
public:
    BGSFootstep();

    void InitializeData() override;  // compared: 0x31c770
    void InitItemImpl() override;    // compared: 0x31ca20

    static void     AddCompileIndex(std::uint32_t& a_id, TESFile* a_file);
    TESFile*        GetFile(std::int32_t a_idx = -1) const;
    static TESForm* LookupByID(std::uint32_t a_formID);
    void            SetFormFlag(bool a_set);

    BSFixedString     tag;        // 20
    BGSImpactDataSet* impactSet;  // 28
};
static_assert(sizeof(BGSFootstep) == 0x30, "layout");

// Stand-ins for the local built by the compared body: GUESS(low). The base has out-of-line
// constructor and destructor; the derived inline constructor sets the vftable and the form type.
class FootstepLocalBase
{
public:
    FootstepLocalBase();
    virtual ~FootstepLocalBase() noexcept;
    std::uint8_t pad08[0x12];  // 08
    std::uint8_t formType;     // 1A
    std::uint8_t pad1B[0x5];   // 1B
};
static_assert(sizeof(FootstepLocalBase) == 0x20, "local base size");
class FootstepLocal : public FootstepLocalBase
{
public:
    FootstepLocal();
};
// GUESS(low): the zeroed 16-byte temporary with a single out-of-line destructor.
class FootstepTempString
{
public:
    ~FootstepTempString() noexcept;
    std::uint64_t data[2];
};
// _mm_storeu_si128: GUESS(low); zero the 16-byte temporary with the SSE unaligned store the listing uses.
#include <intrin.h>
inline void ZeroFootstepTemp(FootstepTempString& a_temp)
{
    _mm_storeu_si128(reinterpret_cast<__m128i*>(&a_temp), _mm_setzero_si128());
}
