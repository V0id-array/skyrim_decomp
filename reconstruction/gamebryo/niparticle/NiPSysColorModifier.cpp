// Source exposure: mixed (pinned image and cited public declarations).
// Code origin: original reconstruction using the cited names and partial base declarations.
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0xfaa2d0 NiPSysColorModifier::LoadBinary
// 0xfaa300 NiPSysColorModifier::LinkObject
// 0xfaa390 NiPSysColorModifier::SaveBinary
// Adapted bodies: the FNV body named by the Sibling source line above.
// Sibling source: momusdigital/fnv_decomp@91e1b6e src/gamebryo2.2/corelibs/niparticle/nipsyscolormodifier.cpp
// LoadBinary: SIBLING(momusdigital/fnv_decomp@91e1b6e, no-licence)
#include "NiPSysColorModifier.h"

void NiPSysColorModifier::LoadBinary(NiStream& stream)
{
    NiPSysModifier::LoadBinary(stream);
    return stream.LoadLinkID();
}

void NiPSysColorModifier::LinkObject(NiStream& stream)
{
    NiPSysModifier::LinkObject(stream);
    return SetLinkedObject(stream.ReadLinkID());
}

void NiPSysColorModifier::SaveBinary(NiStream& stream)
{
    NiPSysModifier::SaveBinary(stream);
    return stream.SaveLinkID(linkedObject);
}
