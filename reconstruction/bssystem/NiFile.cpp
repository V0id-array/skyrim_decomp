// Source exposure: mixed (community headers; the pinned image listing).
// 0xeaf630 compared function
// 0xeaf5c0 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0xeaf620 NiFile::Functioneaf620
// Adapted bodies: none
// Source exposure: mixed (names and declarations from community headers; the listing of the pinned
// image).
// Code origin: original; the listing and community declarations only
// Adapted bodies: none (write "none" when attempt prints no "origin advice" line;
// otherwise name each adapted body, its upstream file, revision and licence).
#include "NiFile.h"

// ftell, fseek: GUESS(low); C runtime calls the listing makes, declared here without the C library header;
// the compare binds each call by position.
extern "C" __declspec(dllimport) long __cdecl ftell(void* a_file);
extern "C" __declspec(dllimport) int __cdecl fseek(void* a_file, long a_offset, int a_origin);

namespace
{
    constexpr int kSeekSet = 0;
    constexpr int kSeekEnd = 2;
}

// TODO body: RVA 0xeaf5b0, 5 bytes, NiFile::good.
bool NiFile::good() const
{
    return good44;
}

// Reads the current position, seeks past the end to measure the stream, then restores the position.
std::uint32_t NiFile::size() const
{
    const long position = ftell(file);
    if (position < 0) {
        return 0;
    }

    fseek(file, 0, kSeekEnd);
    const long end = ftell(file);
    fseek(file, position, kSeekSet);

    if (end < 0) {
        return 0;
    }
    return static_cast<std::uint32_t>(end);
}

// NiFile::Functioneaf620: GUESS(low)
std::uint64_t NiFile::Functioneaf620() const
{
    return unknown30;
}

// RVA 0xeaf5c0: tail-call the vtable slot at 0x30 with the module global as second argument.
void NiFile::Functioneaf5c0(unsigned a_value)
{
    Slot30(a_value, NiFileGlobalArg);
}

// RVA 0xeaf630: fill the caller's record from this object and two virtual queries.
void NiFile::get_info(FileInfo* a_info)
{
    a_info->data = unknown30;
    a_info->field08 = Slot38();
    a_info->field0C = field20;
    a_info->field10 = field24;
    a_info->field14 = field28;
    a_info->field18 = Slot18();
}
