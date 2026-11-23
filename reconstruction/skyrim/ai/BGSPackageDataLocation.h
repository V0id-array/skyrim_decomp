// Origin: declarations adapted from labelled pinned community headers and target-specific partial declarations.
// Source exposure: mixed (pinned target listing and sibling hints).
// 0x44e0b0 compared function
// 0x44e0a0 compared function
// 0x44df30 compared function
// BGSPackageDataLocation, BGSPackageDataLocation::GetAsPackageLocation: GUESS(low)
// BGSPackageDataLocation fields: STANDIN GUESS(low)
// Supporting types: STANDIN COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT); slot order from the pinned community headers.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
#pragma once
#include <cstdint>
class PackageLocation; class LocationContext; class WorldLocation;
// Function4a5300: GUESS(low); helper tail-called on the pointer at offset 0x10
class LocationHandle { public: virtual ~LocationHandle() = default; virtual const WorldLocation* AllocateLocation(LocationContext*); virtual PackageLocation* GetAsPackageLocation(); void Function4a5300(); };
// Alternate layout whose package accessor sits in the second virtual slot.
class AltLocationHandle { public: virtual ~AltLocationHandle() = default; virtual PackageLocation* GetAsPackageLocation(); };
class BGSPackageDataLocation {
public: const PackageLocation* GetAsPackageLocation() const;
    const PackageLocation* Function44df30() const;
    // BGSPackageDataLocation::Function44e0a0: GUESS(low); tail-calls a helper on the pointer at 0x10
    void Function44e0a0();
private:
    std::uint8_t pad[0x10];  // 00
    // member10: GUESS(low); the pointer passed to the tail-called helper
    LocationHandle* member10;  // 10
    LocationHandle* pointer;  // 18
};
