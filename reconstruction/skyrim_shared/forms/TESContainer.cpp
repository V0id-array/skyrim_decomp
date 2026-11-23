// Source exposure: mixed (community headers; the pinned image listing).
// 0x1e0a00 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x1e09f0 TESContainer::Function1e09f0
// Adapted bodies: none
// Source exposure: mixed. Drafted by claude-sonnet-5-5 from the local instruction listings of the
// pinned image, with the class layout from the header beside this file. Names are from CharmedBaryon/CommonLibSSE-NG b93280e (MIT) unless labelled in the header.
#include "TESContainer.h"

std::int32_t TESContainer::GetItemCount(TESBoundObject* a_object) const
{
    std::int32_t total = 0;
    for (std::uint32_t i = 0; i < numContainerObjects; ++i) {
        if (containerObjects[i] && containerObjects[i]->obj == a_object) {
            total += containerObjects[i]->count;
        }
    }
    return total;
}

bool TESContainer::Function1e0a00() const
{
    return allowStolenItems;
}

// TESContainer::InitializeDataComponent: COMMUNITY(CharmedBaryon/CommonLibSSE-NG@b93280e, MIT)
void TESContainer::InitializeDataComponent()
{
}

// TESContainer::Function1e09f0: GUESS(low)
void TESContainer::Function1e09f0(bool a_value)
{
    allowStolenItems = a_value;
}
