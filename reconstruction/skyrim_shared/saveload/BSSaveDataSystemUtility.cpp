// Source exposure: mixed (community headers; the pinned image listing).
// 0x159b080 compared function
// 0x159b040 compared function
// 0x159b000 compared function
// Code origin: original; written from the local pinned-image listing and the community declarations.
// SPDX-License-Identifier: CC0-1.0
// 0x159ab00 BSSaveDataSystemUtility::Function159ab00
// Adapted bodies: none
// Source exposure: mixed (names and declarations from community headers; the listing of the pinned
// image).
// Adapted bodies: none
#include "BSSaveDataSystemUtility.h"

std::uint64_t* BSSaveDataSystemUtility::Unk_0B(std::uint64_t* a_out)
{
    *a_out = 0;
    return a_out;
}

std::uint32_t BSSaveDataSystemUtility::Unk_0A(void* a_obj)
{
    std::uint32_t value = 0;
    LookupValue(a_obj, &value);
    return value;
}

// RVA 0x159a9e0, 3 bytes: returns true.
bool BSSaveDataSystemUtility::Unk_08()
{
    return true;
}

// RVA 0x159a9f0, 3 bytes: returns true.
bool BSSaveDataSystemUtility::Unk_07()
{
    return true;
}

// RVA 0x159aa00, 3 bytes: an empty slot body.
void BSSaveDataSystemUtility::Unk_05()
{
}

static void clearAndRelease(void* a_arg, DataNode** a_node)
{
    (void)a_arg;
    DataNode* node = *a_node;
    *a_node = nullptr;
    if (node != nullptr) {
        node->Release(1);
    }
}

void Function159b000(void* a_arg, DataNode** a_node)
{
    clearAndRelease(a_arg, a_node);
}

void Function159b040(void* a_arg, DataNode** a_node)
{
    clearAndRelease(a_arg, a_node);
}

void Function159b080(void* a_arg, DataNode** a_node)
{
    clearAndRelease(a_arg, a_node);
}

// BSSaveDataSystemUtility::Function159ab00: GUESS(low); the tail-called vtable slot comes from the listing
void BSSaveDataSystemUtility::Function159ab00()
{
    Unk_08();
}
