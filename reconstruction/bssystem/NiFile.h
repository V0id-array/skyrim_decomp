// Source exposure: mixed (names and declarations from community headers; base classes, sizes and
// 0xeaf630 compared function
// 0xeaf620 compared function
// 0xeaf5c0 compared function
// Code origin: original; the listing and community declarations only
// NiFile::size, file: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); NG types file as std::FILE*, kept as an untyped handle here
// unknown20, unknown28, unknown30, unknown40: GUESS(low); words the compared functions do not read, at their measured offsets
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// NiFile: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT) EXE_RTTI
// NiFile::good: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
// unknown20: GUESS(low)
#pragma once

#include <cstdint>
#include "NiBinaryStream.h"

// FileInfo: GUESS(low); the output record filled by the compared get_info body.
struct FileInfo
{
    std::uint64_t data;    // 00
    std::uint32_t field08;  // 08
    std::uint32_t field0C;  // 0C
    std::uint32_t field10;  // 10
    std::uint32_t field14;  // 14
    std::uint32_t field18;  // 18
};

extern "C" unsigned NiFileGlobalArg;

class NiFile : public NiBinaryStream
{
public:
    virtual bool good() const;  // compared: 0xeaf5b0
    virtual std::uint32_t size() const;  // compared: 0xeadd20
    virtual std::uint32_t Slot18();
    virtual void Slot20();
    virtual void Slot28();
    virtual void Slot30(unsigned a_first, unsigned a_second);
    virtual std::uint32_t Slot38();
    // NiFile::Functioneaf620: GUESS(low); reads the word at 0x30
    std::uint64_t Functioneaf620() const;
    // compared: 0xeaf5c0, 0xeaf630
    void Functioneaf5c0(unsigned a_value);
    void get_info(FileInfo* a_info);

    std::uint32_t field20;  // 20
    std::uint32_t field24;  // 24
    std::uint32_t field28;  // 28
    std::uint32_t field2C;  // 2C
    std::uint64_t unknown30;  // 30
    void* file;  // 38
    std::uint32_t unknown40;  // 40
    // good44: GUESS(low)
    bool good44;  // 44
    std::uint8_t unknown45[0x3];  // 45
};
static_assert(sizeof(NiFile) == 0x48, "NiFile size");
