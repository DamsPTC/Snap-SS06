// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendMuteConversationAction
// Superclass: NSObject
// Address: 0x112a0ace8

@interface SCFriendMuteConversationAction

// Property: actionSheetCell; attributes: T@"SIGActionSheetCell",R,N
// Property: position; attributes: Tq,R,N,V_position
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendMuteConversationAction initWithFriendUserId:conversationId:muteType:expirationDuration:context:actionHandler:notificationServices:withAccessibilityIdentifier:]
// Type encoding: @80@0:8@16@24q32Q40@48@56@64@72
// Implementation: 0x104f5394c

// -[SCFriendMuteConversationAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x104f53abc

// -[SCFriendMuteConversationAction _handleMessageNotificationsTappedWithActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f53c7c

// -[SCFriendMuteConversationAction _onUpdatedNotificationStatus:notificationOn:actionSheet:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x104f54064

// -[SCFriendMuteConversationAction _didUpdateNotificationSucceed:notificationOn:actionSheet:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x104f54118

// -[SCFriendMuteConversationAction _presentErrorStatusMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f541b4

// -[SCFriendMuteConversationAction position]
// Type encoding: q16@0:8
// Implementation: 0x104f54250

// -[SCFriendMuteConversationAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x104f54258

// -[SCFriendMuteConversationAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f54260

@end
