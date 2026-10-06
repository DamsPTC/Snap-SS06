// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSystemTrayNotificationRemover
// Superclass: NSObject
// Address: 0x112a2a818

@interface SCSystemTrayNotificationRemover

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSystemTrayNotificationRemover initWithCircumstanceEngine:]
// Type encoding: @24@0:8@16
// Implementation: 0x105311880

// -[SCSystemTrayNotificationRemover initWithNotificationCenter:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053118f4

// -[SCSystemTrayNotificationRemover removePushNotifications:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053119dc

// -[SCSystemTrayNotificationRemover removePushNotificationsFromConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105311d0c

// -[SCSystemTrayNotificationRemover removePushNotificationsFromConversation:withTypes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105312108

// -[SCSystemTrayNotificationRemover removePushNotificationsForClearingPolicies:]
// Type encoding: v24@0:8@16
// Implementation: 0x105312588

// -[SCSystemTrayNotificationRemover _getConversationIdFromUserInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x105312dcc

// -[SCSystemTrayNotificationRemover _isNotificationFromFriend:]
// Type encoding: B24@0:8@16
// Implementation: 0x105312f78

// -[SCSystemTrayNotificationRemover _logNotificationTypesToBeRemoved:]
// Type encoding: v24@0:8@16
// Implementation: 0x105313000

// -[SCSystemTrayNotificationRemover .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105313118

// +[SCSystemTrayNotificationRemover _shouldClearNotifContainingMultiPolicies:clearingPolicies:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105312928

// +[SCSystemTrayNotificationRemover _shouldClearNotifContainingSinglePolicy:clearingPolicies:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105312a78

@end
