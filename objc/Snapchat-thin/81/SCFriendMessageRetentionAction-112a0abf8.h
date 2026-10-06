// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendMessageRetentionAction
// Superclass: NSObject
// Address: 0x112a0abf8

@interface SCFriendMessageRetentionAction

// Property: actionSheetCell; attributes: T@"SIGActionSheetCell",R,N,V_actionSheetCell
// Property: position; attributes: Tq,R,N,V_position
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendMessageRetentionAction initWithFriendSnapchatter:context:chatMessageActionHandler:conversationIdResolver:withAccessibilityIdentifier:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104f50fc0

// -[SCFriendMessageRetentionAction _fetchMessageRetentionWithConversationId:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f51404

// -[SCFriendMessageRetentionAction _onFetchedConversation:availableRetentionModes:cell:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x104f51598

// -[SCFriendMessageRetentionAction _setMessageRetentionMode:cell:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104f516d8

// -[SCFriendMessageRetentionAction _handleMessageNotificationsTappedWithActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f51760

// -[SCFriendMessageRetentionAction didStartChangeRetentionPolicy]
// Type encoding: v16@0:8
// Implementation: 0x104f51838

// -[SCFriendMessageRetentionAction didChangeRetentionPolicyWithSuccess:retentionMode:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x104f5186c

// -[SCFriendMessageRetentionAction _didChangeRetentionPolicyWithSuccess:retentionMode:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x104f51960

// -[SCFriendMessageRetentionAction position]
// Type encoding: q16@0:8
// Implementation: 0x104f519ec

// -[SCFriendMessageRetentionAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x104f519f4

// -[SCFriendMessageRetentionAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x104f519fc

// -[SCFriendMessageRetentionAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f51a04

@end
