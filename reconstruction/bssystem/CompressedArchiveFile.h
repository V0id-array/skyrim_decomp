// Source exposure: mixed (local binary analysis and public names).
// 0xeb9f40 compared function
// 0xeb9f10 compared function
// 0xeb9ef0 compared function
// 0xeb9ec0 compared function
// 0xeb9ea0 compared function
// Origin: {"generator_family":"member-return","generator_version":"2","name_source":{"confidence":"medium","kind":"public","repository":"CharmedBaryon/CommonLibSSE-NG","revision":"b93280e832f263dbef44e44cbe2936622a02f91a","source":"ng-slot"},"template_digest":"1254832e5ca7cdca7f6330a2018dde32919625f6149744dd0138e59a943106d8"}
// Adapted bodies: none. Body synthesized from the bounded leaf template.
// CompressedArchiveFile: EXE_RTTI
// Unk_0A: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// member, padding: GUESS(low); storage names invented for the measured member offset
// Functioneb9f10, fileData: GUESS(low); storage name invented for the measured member offset
// Functioneb9ef0: GUESS(low)
// Virtual slots, fn10/fn18: GUESS(low); stand-ins placed to match the compared slot indices.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
#pragma once
#include <cstdint>
// Unk_0A: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
class CompressedArchiveFile
{
public:
    virtual std::uint32_t Unk_0A() const;  // slot 0
    // Slots 1..5, 7..16: GUESS(low); placeholders for the image's earlier virtuals.
    virtual void vSlot01() = 0;
    virtual void vSlot02() = 0;
    virtual void vSlot03() = 0;
    virtual void vSlot04() = 0;
    virtual void vSlot05() = 0;
    virtual void vSlot06(void* a_value, int a_one) = 0;  // slot 6, tail-called by Functioneb9ea0
    virtual void vSlot07() = 0;
    virtual void vSlot08() = 0;
    virtual void vSlot09() = 0;
    virtual void vSlot10() = 0;
    virtual void vSlot11() = 0;
    virtual void vSlot12() = 0;
    virtual void vSlot13() = 0;
    virtual void vSlot14() = 0;
    virtual void vSlot15() = 0;
    virtual void vSlot16() = 0;
    virtual void vSlot17(int a_zero, unsigned a_value) = 0;  // slot 17, tail-called by Functioneb9ec0

    void Functioneb9ea0(void* a_value);  // compared: 0xeb9ea0
    void Functioneb9ec0(unsigned a_value);  // compared: 0xeb9ec0
    bool Functioneb9f10() const;  // compared: 0xeb9f10
    std::uint32_t Functioneb9ef0() const;  // compared: 0xeb9ef0
    void Functioneb9f40(bool a_flag);  // compared: 0xeb9f40

    std::uint8_t padding[0x8];    // 08
    void*        fn10;            // 10
    void*        fn18;            // 18
    std::uint8_t padding20[0x160];// 20
    void*        fileData;        // 180
    std::uint8_t padding188[0x18]; // 188
    std::uint32_t member;         // 1A0
};
static_assert(sizeof(CompressedArchiveFile) == 0x1a8, "size");
