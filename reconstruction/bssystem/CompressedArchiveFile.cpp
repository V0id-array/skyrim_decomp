// Source exposure: mixed (community declarations; the pinned image listing).
// 0xeb9f40 compared function
// 0xeb9ec0 compared function
// 0xeb9ea0 compared function
// Code origin: original reconstruction; bodies written from the listing.
// SPDX-License-Identifier: CC0-1.0
// 0xeb9ef0 CompressedArchiveFile::Functioneb9ef0
// 0xeb9f10 CompressedArchiveFile::Functioneb9f10
// Functioneb9ef0, Functioneb9f10, fileData: GUESS(low)
// Adapted bodies: none
#include "CompressedArchiveFile.h"

// Unk_0A: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
std::uint32_t CompressedArchiveFile::Unk_0A() const
{
    return member;
}

// GUESS(low): tail-call wrappers around the image's virtual slots 6 and 17.
void CompressedArchiveFile::Functioneb9ea0(void* a_value)
{
    vSlot06(a_value, 1);
}

void CompressedArchiveFile::Functioneb9ec0(unsigned a_value)
{
    vSlot17(0, a_value);
}

bool CompressedArchiveFile::Functioneb9f10() const
{
    return fileData != nullptr;
}

std::uint32_t CompressedArchiveFile::Functioneb9ef0() const
{
    return member;
}

// GUESS(low): the two stored addresses are relocated by the linker, so stand-in
// functions reproduce the compared stores without claiming the image's callees.
static void archiveNoopA() {}
static void archiveNoopB() {}
// GUESS(low): out-of-unit handler, tail-called from the compared function's flag path.
void archiveFlagHandler();

void CompressedArchiveFile::Functioneb9f40(bool a_flag)
{
    if (a_flag) {
        archiveFlagHandler();
        return;
    }
    fn10 = reinterpret_cast<void*>(&archiveNoopA);
    fn18 = reinterpret_cast<void*>(&archiveNoopB);
}
