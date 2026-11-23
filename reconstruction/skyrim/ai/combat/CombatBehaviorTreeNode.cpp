// Source exposure: mixed (community headers; the pinned image listing).
// 0x8752f0 compared function
// Code origin: original; written from the local pinned-image listing and the sibling declarations.
// SPDX-License-Identifier: CC0-1.0
// 0x875380 CombatBehaviorTreeNode::Function875380
// Adapted bodies: none
// Source exposure: mixed (target listing, anonymous sibling and unverified names).
// Origin: SIBLING(fo4-private@1b765c70, author-permission)
// Sibling source: fo4-private@1b765c70 src/Game/AI/Combat/CombatBehaviorTreeNode.cpp:61 (CombatBehaviorTreeNode::Update)
// Sibling source: fo4-private@1b765c70 src/Game/AI/Combat/CombatBehaviorTreeNode.cpp:67 (CombatBehaviorTreeNode::Abort)
// CombatBehaviorTreeNode, Update, Abort: GUESS(low)
#include "CombatBehaviorTreeNode.h"

#include <new>

// NodeRaw: GUESS(low); the compared function constructs one in place and returns it.
struct NodeRaw {
    NodeRaw();
    virtual ~NodeRaw();
    std::uint64_t field08;
    std::uint64_t field10;
    std::uint64_t field18;
    std::uint32_t field20;
};
static_assert(sizeof(NodeRaw) == 0x28, "NodeRaw size");
NodeRaw::NodeRaw() : field08(0), field10(0), field18(0), field20(0) {}

NodeRaw* CombatBehaviorTreeNode::Function8752f0(NodeRaw* a_target)
{
    return new (a_target) NodeRaw();
}

void CombatBehaviorTreeNode::Update(CombatBehaviorThread* thread) const { thread->Ascend(); }
void CombatBehaviorTreeNode::Abort(CombatBehaviorThread* thread) const { thread->Ascend(); }

// CombatBehaviorTreeNode::Function875380: GUESS(low); the loaded offset comes from the listing
void* CombatBehaviorTreeNode::Function875380() const
{
    return field08;
}
