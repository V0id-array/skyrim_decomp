// Source exposure: mixed (community headers; the pinned image listing).
// 0x326d30 compared function
// Code origin: original; the listing and community declarations only
// SPDX-License-Identifier: CC0-1.0
// 0x326de0 BGSMusicTrack::IsConditionChunk
// Adapted bodies: none
// Source exposure: mixed (pinned image listing and authorized sibling hints).
// Origin: SIBLING(fo4-private@1b765c70, author-permission)
// InitItem: Sibling source: fo4-private@1b765c70 src/Shared/TESForms/Gameplay/BGSMusicTrack.cpp:33
// TestCanPlay: Sibling source: fo4-private@1b765c70 src/Shared/TESForms/Gameplay/BGSMusicTrack.cpp:21
// BGSMusicTrack, BGSMusicTrack::InitItem, BGSMusicTrack::TestCanPlay: SIBLING(fo4-private@1b765c70, author-permission)
// TESForm, ChangeMap, MusicCondition, Player, musicPlayer, formID, changes, conditions: STANDIN GUESS(low)
// BGSMusicTrack::IsConditionChunk: CRASHLOGGER_PDB(59818@2026.10.24)
#include "BGSMusicTrack.h"

BSIMusicTrackStandIn::BSIMusicTrackStandIn() : trackStatus(0) {}

BGSMusicTrack::BGSMusicTrack() : conditions(nullptr), unk18(0) {}

bool BGSMusicTrack::IsConditionChunk(std::uint32_t a_chunkID) const
{
    return a_chunkID == 0x43544943;
}

extern Player* musicPlayer;
void BGSMusicTrack::InitItem(TESForm* form) { if (conditions) conditions->InitItem(form); }
bool BGSMusicTrack::TestCanPlay() const { if (conditions) { if (musicPlayer) return conditions->IsTrue(musicPlayer, musicPlayer); return false; } return true; }
