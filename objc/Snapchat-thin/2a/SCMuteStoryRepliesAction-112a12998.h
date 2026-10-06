// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMuteStoryRepliesAction
// Superclass: NSObject
// Address: 0x112a12998

@interface SCMuteStoryRepliesAction

// Property: position; attributes: Tq,R,N,V_position
// Property: actionSheetCell; attributes: T@"UIView",R,N,V_actionSheetCell
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMuteStoryRepliesAction initWithFriend:context:storyReplyMutingService:notificationServices:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105037218

// -[SCMuteStoryRepliesAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x10503746c

// -[SCMuteStoryRepliesAction _loadMuteStateForCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050374bc

// -[SCMuteStoryRepliesAction _applyMutedUsers:toCell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105037688

// -[SCMuteStoryRepliesAction _handleMuteStoryRepliesTappedWithActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050377fc

// -[SCMuteStoryRepliesAction _muteStoryRepliesWithCell:dialog:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105037b88

// -[SCMuteStoryRepliesAction _handleMuteCompletion:cell:dialog:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x105037db0

// -[SCMuteStoryRepliesAction _unmuteStoryRepliesWithCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105037e74

// -[SCMuteStoryRepliesAction _handleUnmuteCompletion:cell:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105038048

// -[SCMuteStoryRepliesAction _presentErrorStatusMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050380d4

// -[SCMuteStoryRepliesAction position]
// Type encoding: q16@0:8
// Implementation: 0x105038170

// -[SCMuteStoryRepliesAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x105038178

// -[SCMuteStoryRepliesAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105038180

@end
