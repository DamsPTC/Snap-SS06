// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendPinConversationAction
// Superclass: NSObject
// Address: 0x112a0ad38

@interface SCFriendPinConversationAction

// Property: actionSheetCell; attributes: T@"SIGActionSheetCell",R,N,V_actionSheetCell
// Property: position; attributes: Tq,R,N,V_position
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendPinConversationAction initWithFriendUserId:context:pinnedConversationsServices:conversationServices:conversationIdServices:friendsFeedDataAccess:withAccessibilityIdentifier:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104f542cc

// -[SCFriendPinConversationAction _fetchPinStatusForCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f545e4

// -[SCFriendPinConversationAction _handlePinOrUnpinConversationWithActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5492c

// -[SCFriendPinConversationAction _didUnpinConversationSuccess:identifier:actionSheet:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x104f54d58

// -[SCFriendPinConversationAction _didPinConversationSuccess:actionSheet:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x104f54da4

// -[SCFriendPinConversationAction _makeConversationShowOnFeed:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f55098

// -[SCFriendPinConversationAction position]
// Type encoding: q16@0:8
// Implementation: 0x104f550a0

// -[SCFriendPinConversationAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x104f550a8

// -[SCFriendPinConversationAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x104f550b0

// -[SCFriendPinConversationAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f550b8

@end
