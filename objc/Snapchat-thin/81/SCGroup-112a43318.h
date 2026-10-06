// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroup
// Superclass: NSObject
// Address: 0x112a43318

@interface SCGroup

// Property: groupId; attributes: T@"NSString",R,C,N
// Property: groupName; attributes: T@"NSString",R,C,N
// Property: orderedParticipants; attributes: T@"NSArray",R,C,N
// Property: kickedParticipants; attributes: T@"NSArray",R,C,N
// Property: notificationStatus; attributes: TB,R,N
// Property: mentionNotificationStatus; attributes: TB,R,N
// Property: chatNotificationStatus; attributes: TB,R,N
// Property: areCallNotificationsEnabled; attributes: TB,R,N
// Property: chatMuteEndDate; attributes: T@"NSDate",R,C,N
// Property: callMuteEndDate; attributes: T@"NSDate",R,C,N
// Property: lastInteractionTimestamp; attributes: T@"NSDate",R,C,N
// Property: creationTimestamp; attributes: T@"NSDate",R,C,N
// Property: blockedParticipantExceptions; attributes: T@"NSDictionary",R,C,N
// Property: nonFriendUserParticipantExceptions; attributes: T@"NSDictionary",R,C,N
// Property: lastSenderTimestampByParticipant; attributes: T@"NSDictionary",R,C,N
// Property: isPartial; attributes: TB,R,N
// Property: isCommunity; attributes: TB,R,N
// Property: categoryId; attributes: T@"NSString",R,C,N
// Property: isLocked; attributes: TB,R,N
// Property: shouldShowRetentionSettings; attributes: TB,R,N
// Property: subtypeMetadata; attributes: T@"SCGroupSubtypeMetadata",R,C,N
// Property: hasConversationInvitation; attributes: TB,R,N
// Property: conversationSubType; attributes: T@"NSNumber",R,C,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: groupId; attributes: T@"NSString",R,C,N,V_groupId
// Property: groupName; attributes: T@"NSString",R,C,N,V_groupName
// Property: orderedParticipants; attributes: T@"NSArray",R,C,N,V_orderedParticipants
// Property: kickedParticipants; attributes: T@"NSArray",R,C,N,V_kickedParticipants
// Property: notificationStatus; attributes: TB,R,N,V_notificationStatus
// Property: mentionNotificationStatus; attributes: TB,R,N,V_mentionNotificationStatus
// Property: chatNotificationStatus; attributes: TB,R,N,V_chatNotificationStatus
// Property: areCallNotificationsEnabled; attributes: TB,R,N,V_areCallNotificationsEnabled
// Property: chatMuteEndDate; attributes: T@"NSDate",R,C,N,V_chatMuteEndDate
// Property: callMuteEndDate; attributes: T@"NSDate",R,C,N,V_callMuteEndDate
// Property: lastInteractionTimestamp; attributes: T@"NSDate",R,C,N,V_lastInteractionTimestamp
// Property: creationTimestamp; attributes: T@"NSDate",R,C,N,V_creationTimestamp
// Property: blockedParticipantExceptions; attributes: T@"NSDictionary",R,C,N,V_blockedParticipantExceptions
// Property: nonFriendUserParticipantExceptions; attributes: T@"NSDictionary",R,C,N,V_nonFriendUserParticipantExceptions
// Property: lastSenderTimestampByParticipant; attributes: T@"NSDictionary",R,C,N,V_lastSenderTimestampByParticipant
// Property: isPartial; attributes: TB,R,N,V_isPartial
// Property: isLocked; attributes: TB,R,N,V_isLocked
// Property: isCommunity; attributes: TB,R,N,V_isCommunity
// Property: categoryId; attributes: T@"NSString",R,C,N,V_categoryId
// Property: shouldShowRetentionSettings; attributes: TB,R,N,V_shouldShowRetentionSettings
// Property: subtypeMetadata; attributes: T@"SCGroupSubtypeMetadata",R,C,N,V_subtypeMetadata
// Property: hasConversationInvitation; attributes: TB,R,N,V_hasConversationInvitation
// Property: conversationSubType; attributes: T@"NSNumber",R,C,N,V_conversationSubType

// -[SCGroup recentCompare:]
// Type encoding: q24@0:8@16
// Implementation: 0x105517df8

// -[SCGroup initWithGroupId:groupName:orderedParticipants:kickedParticipants:notificationStatus:mentionNotificationStatus:chatNotificationStatus:areCallNotificationsEnabled:chatMuteEndDate:callMuteEndDate:lastInteractionTimestamp:creationTimestamp:blockedParticipantExceptions:nonFriendUserParticipantExceptions:lastSenderTimestampByParticipant:isPartial:isLocked:isCommunity:categoryId:shouldShowRetentionSettings:subtypeMetadata:hasConversationInvitation:conversationSubType:]
// Type encoding: @164@0:8@16@24@32@40B48B52B56B60@64@72@80@88@96@104@112B120B124B128@132B140@144B152@156
// Implementation: 0x10551a890

// -[SCGroup copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10551ac24

// -[SCGroup hash]
// Type encoding: Q16@0:8
// Implementation: 0x10551ac48

// -[SCGroup isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10551ad8c

// -[SCGroup groupId]
// Type encoding: @16@0:8
// Implementation: 0x10551afe4

// -[SCGroup groupName]
// Type encoding: @16@0:8
// Implementation: 0x10551afec

// -[SCGroup orderedParticipants]
// Type encoding: @16@0:8
// Implementation: 0x10551aff4

// -[SCGroup kickedParticipants]
// Type encoding: @16@0:8
// Implementation: 0x10551affc

// -[SCGroup notificationStatus]
// Type encoding: B16@0:8
// Implementation: 0x10551b004

// -[SCGroup mentionNotificationStatus]
// Type encoding: B16@0:8
// Implementation: 0x10551b00c

// -[SCGroup chatNotificationStatus]
// Type encoding: B16@0:8
// Implementation: 0x10551b014

// -[SCGroup areCallNotificationsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10551b01c

// -[SCGroup chatMuteEndDate]
// Type encoding: @16@0:8
// Implementation: 0x10551b024

// -[SCGroup callMuteEndDate]
// Type encoding: @16@0:8
// Implementation: 0x10551b02c

// -[SCGroup lastInteractionTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x10551b034

// -[SCGroup creationTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x10551b03c

// -[SCGroup blockedParticipantExceptions]
// Type encoding: @16@0:8
// Implementation: 0x10551b044

// -[SCGroup nonFriendUserParticipantExceptions]
// Type encoding: @16@0:8
// Implementation: 0x10551b04c

// -[SCGroup lastSenderTimestampByParticipant]
// Type encoding: @16@0:8
// Implementation: 0x10551b054

// -[SCGroup isPartial]
// Type encoding: B16@0:8
// Implementation: 0x10551b05c

// -[SCGroup isLocked]
// Type encoding: B16@0:8
// Implementation: 0x10551b064

// -[SCGroup isCommunity]
// Type encoding: B16@0:8
// Implementation: 0x10551b06c

// -[SCGroup categoryId]
// Type encoding: @16@0:8
// Implementation: 0x10551b074

// -[SCGroup shouldShowRetentionSettings]
// Type encoding: B16@0:8
// Implementation: 0x10551b07c

// -[SCGroup subtypeMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10551b084

// -[SCGroup hasConversationInvitation]
// Type encoding: B16@0:8
// Implementation: 0x10551b08c

// -[SCGroup conversationSubType]
// Type encoding: @16@0:8
// Implementation: 0x10551b094

// -[SCGroup .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10551b09c

@end
