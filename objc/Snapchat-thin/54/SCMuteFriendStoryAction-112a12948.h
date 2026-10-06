// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMuteFriendStoryAction
// Superclass: NSObject
// Address: 0x112a12948

@interface SCMuteFriendStoryAction

// Property: actionSheetCell; attributes: T@"SIGActionSheetCell",R,N,V_actionSheetCell
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: position; attributes: Tq,R,N,V_position
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton

// -[SCMuteFriendStoryAction initWithFriend:context:snapchatterServices:notificationServices:friendStorySettingMutator:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105036168

// -[SCMuteFriendStoryAction _handleMuteStoryTappedWithActionSheet:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1050364ec

// -[SCMuteFriendStoryAction unMuteStoryWithCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105036878

// -[SCMuteFriendStoryAction muteStoryWithCell:dialog:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1050368f8

// -[SCMuteFriendStoryAction didUpdateFriendStorySettingWithUpdateRequest:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1050369ac

// -[SCMuteFriendStoryAction didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105036c14

// -[SCMuteFriendStoryAction didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105036c18

// -[SCMuteFriendStoryAction _didEndUpdateRequestWithSuccess:isMuteAction:error:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x105036d34

// -[SCMuteFriendStoryAction _didEndUpdateRequest]
// Type encoding: v16@0:8
// Implementation: 0x105036e48

// -[SCMuteFriendStoryAction _updateFriend:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105036fe0

// -[SCMuteFriendStoryAction _presentErrorStatusMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050370d8

// -[SCMuteFriendStoryAction position]
// Type encoding: q16@0:8
// Implementation: 0x105037174

// -[SCMuteFriendStoryAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x10503717c

// -[SCMuteFriendStoryAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x105037184

// -[SCMuteFriendStoryAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10503718c

@end
