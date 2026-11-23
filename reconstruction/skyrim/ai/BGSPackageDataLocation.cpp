// Source exposure: mixed (community headers; the pinned image listing).
// 0x44e0b0 compared function
// 0x44df30 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x44e0a0 BGSPackageDataLocation::Function44e0a0
// Adapted bodies: none
// Source exposure: mixed (pinned target listing and sibling hints).
// Origin: adapted sibling source and target listing.
// BGSPackageDataLocation::GetAsPackageLocation: SIBLING(fo4-private@1b765c70, author-permission)
// Sibling source: fo4-private@1b765c70 src/Shared/AI/BGSPackageData.cpp:82
// BGSPackageDataLocation, BGSPackageDataLocation::GetAsPackageLocation: GUESS(low)
// BGSPackageDataLocation fields: STANDIN GUESS(low)
#include "BGSPackageDataLocation.h"
const PackageLocation* BGSPackageDataLocation::GetAsPackageLocation() const { return pointer ? pointer->GetAsPackageLocation() : nullptr; }

const PackageLocation* BGSPackageDataLocation::Function44df30() const
{
    AltLocationHandle* alt = reinterpret_cast<AltLocationHandle*>(pointer);
    return alt ? alt->GetAsPackageLocation() : nullptr;
}

void BGSPackageDataLocation::Function44e0a0()
{
    member10->Function4a5300();
}
