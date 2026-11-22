// Source exposure: mixed (community headers; the pinned image listing).
// 0x1082bd0 compared function
// 0x1082b90 compared function
// 0x1082b10 compared function
// 0x10829c0 compared function
// Code origin: original; the four bodies are written from the pinned image listing
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// bhkSerializable: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// Unk_2D, Unk_30, Unk_31, SetReferencedObject: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// Stand-in virtuals, hkReferencedObject, SlotPayload, SlotVisitor, Function10825d0: GUESS(low)
#pragma once
#include <cstdint>

struct hkReferencedObject;
struct SlotPayload { std::uint8_t pad00[0x430]; void* field430; };
struct SlotTable;
struct SlotTable {
    std::uint8_t pad00[8];
    std::uint32_t count;  // 08
    std::uint8_t pad0C[4];
    std::uint32_t (*Visit)(SlotTable* a_self, void* a_value, std::uint32_t a_v, std::uint32_t a_zero1, std::uint32_t a_zero2);  // 10
};
struct Unk2DArg { std::uint8_t pad00[0x298]; SlotTable* table; };
void Function10825d0(void* a_obj, hkReferencedObject* a_ref);

class bhkSerializable
{
public:
    virtual ~bhkSerializable();
    virtual void Unk_01();
    virtual void Unk_02();
    virtual void Unk_03();
    virtual void Unk_04();
    virtual void Unk_05();
    virtual void Unk_06();
    virtual void Unk_07();
    virtual void Unk_08();
    virtual void Unk_09();
    virtual void Unk_0A();
    virtual void Unk_0B();
    virtual void Unk_0C();
    virtual void Unk_0D();
    virtual void Unk_0E();
    virtual void Unk_0F();
    virtual void Unk_10();
    virtual void Unk_11();
    virtual void Unk_12();
    virtual void Unk_13();
    virtual void Unk_14();
    virtual void Unk_15();
    virtual void Unk_16();
    virtual void Unk_17();
    virtual void Unk_18();
    virtual void Unk_19();
    virtual void Unk_1A();
    virtual void Unk_1B();
    virtual void Unk_1C();
    virtual void Unk_1D();
    virtual void Unk_1E();
    virtual void Unk_1F();
    virtual void Unk_20();
    virtual void Unk_21();
    virtual void Unk_22();
    virtual void Unk_23();
    virtual void Unk_24();
    virtual void Virt128(bool a_flag);   // 0x128
    virtual void Unk_26();
    virtual SlotPayload* Virt138();      // 0x138
    virtual void Unk_28();  virtual void Unk_29();
    virtual void Virt150();              // 0x150
    virtual void Virt158(bool a_flag);   // 0x158
    virtual std::uint32_t Virt160();  // 0x160
    virtual std::uint32_t Unk_2D(Unk2DArg* a_arg);  // 0x168
    virtual void Unk_46();               // 0x170
    virtual void* Virt178(void* a_out);  // 0x178
    virtual void Unk_30();               // 0x180
    virtual void Unk_31();               // 0x188
    virtual void SetReferencedObject(hkReferencedObject* a_ref);

    std::uint32_t count;             // 08
    std::uint8_t  pad0C[4];          // 0C
    hkReferencedObject* referenced;  // 10
};
