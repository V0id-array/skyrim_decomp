// Source exposure: mixed (names and declarations from community headers; base classes, sizes and
// 0x159b080 compared function
// 0x159b040 compared function
// 0x159b000 compared function
// 0x159ab00 compared function
// the compared functions from the pinned image).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// BSSaveDataSystemUtility: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// BSSaveDataSystemUtility::Unk_0B, BSSaveDataSystemUtility::Unk_0A: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// unknown08: GUESS(low)
#pragma once

#include <cstdint>

// LookupValue: GUESS(low); the callee at RVA 0xed4a30, bound by the unit's bind-hints.json
bool LookupValue(void* a_obj, std::uint32_t* a_out);
// DataNode, DataNode::Release: GUESS(low); the compared helpers clear a node pointer and
// tail-call slot 0 with argument 1.
class DataNode
{
public:
    virtual void Release(int a_value);
};
void Function159b000(void* a_arg, DataNode** a_node);
void Function159b040(void* a_arg, DataNode** a_node);
void Function159b080(void* a_arg, DataNode** a_node);

class BSSaveDataSystemUtility
{
public:
    virtual std::uint64_t* Unk_0B(std::uint64_t* a_out);  // compared: 0x159af80
    virtual std::uint32_t Unk_0A(void* a_obj);  // compared: 0x159ab30
    // Unk_05, Unk_07, Unk_08: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); the listings of Unk_07 and Unk_08 return a bool, not the void the sheet declares
    virtual void Unk_05();  // compared: 0x159aa00
    virtual bool Unk_07();  // compared: 0x159a9f0
    virtual bool Unk_08();  // compared: 0x159a9e0
    void Function159ab00();  // compared: 0x159ab00

    std::uint8_t unknown08[0x220];  // 08
};
static_assert(sizeof(BSSaveDataSystemUtility) == 0x228, "BSSaveDataSystemUtility size");
