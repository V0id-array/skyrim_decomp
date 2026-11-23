// Source exposure: mixed (pinned image listing and authorized sibling hints).
// 0x326de0 compared function
// 0x326d30 compared function
// Origin: SIBLING(fo4-private@1b765c70, author-permission)
// InitItem: Sibling source: fo4-private@1b765c70 src/Shared/TESForms/Gameplay/BGSMusicTrack.cpp:33
// TestCanPlay: Sibling source: fo4-private@1b765c70 src/Shared/TESForms/Gameplay/BGSMusicTrack.cpp:21
// BGSMusicTrack, BGSMusicTrack::InitItem, BGSMusicTrack::TestCanPlay: SIBLING(fo4-private@1b765c70, author-permission)
// BGSMusicTrack::IsConditionChunk: CRASHLOGGER_PDB(59818@2026.10.24)
// TESForm, ChangeMap, MusicCondition, Player, musicPlayer, formID, changes, conditions: STANDIN GUESS(low)
// BSIMusicTrackStandIn, trackStatus: GUESS(low); base carrying the vftable and the 0x8 field,
// reconstructed so the compared constructor emits the pinned register allocation.
// unk18: STANDIN GUESS(low); occupies the measured tail slot.
#pragma once
#include <cstdint>
class TESForm;
class Player;
class MusicCondition { public: void InitItem(TESForm*); bool IsTrue(Player*, Player*); };

struct BSIMusicTrackStandIn
{
    virtual ~BSIMusicTrackStandIn() = default;
    BSIMusicTrackStandIn();
    std::uint32_t trackStatus;  // 08
};

class BGSMusicTrack : public BSIMusicTrackStandIn
{
public:
    BGSMusicTrack();
    void InitItem(TESForm*);
    bool TestCanPlay() const;
    bool IsConditionChunk(std::uint32_t) const;

    MusicCondition* conditions;  // 10
    std::uint32_t   unk18;       // 18
};
static_assert(sizeof(BGSMusicTrack) == 0x20, "BGSMusicTrack layout");
