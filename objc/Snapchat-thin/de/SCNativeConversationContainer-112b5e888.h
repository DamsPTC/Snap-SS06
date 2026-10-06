// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeConversationContainer
// Superclass: NSObject
// Address: 0x112b5e888

@interface SCNativeConversationContainer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: conversation; attributes: T@"SCNMessagingConversation",R,C,N,V_conversation
// Property: messages; attributes: T@"NSArray",R,C,N,V_messages
// Property: hasMoreMessageHistoryToLoad; attributes: TB,R,N,V_hasMoreMessageHistoryToLoad

// -[SCNativeConversationContainer messagesForRendering]
// Type encoding: @16@0:8
// Implementation: 0x1070b34e0

// -[SCNativeConversationContainer messagesDictionary]
// Type encoding: @16@0:8
// Implementation: 0x1070b34e4

// -[SCNativeConversationContainer id]
// Type encoding: @16@0:8
// Implementation: 0x1070b35f8

// -[SCNativeConversationContainer participants]
// Type encoding: @16@0:8
// Implementation: 0x1070b365c

// -[SCNativeConversationContainer kickedParticipants]
// Type encoding: @16@0:8
// Implementation: 0x1070b3708

// -[SCNativeConversationContainer isGroupConversation]
// Type encoding: B16@0:8
// Implementation: 0x1070b37b4

// -[SCNativeConversationContainer isSelfConversation]
// Type encoding: B16@0:8
// Implementation: 0x1070b37f0

// -[SCNativeConversationContainer hasUnreadMessagesForUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1070b3880

// -[SCNativeConversationContainer hasUnreadUnopenedMessagesForUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1070b39bc

// -[SCNativeConversationContainer feedViewedReadUpToMessageIdForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1070b3b14

// -[SCNativeConversationContainer lastCommitedMessageId]
// Type encoding: @16@0:8
// Implementation: 0x1070b3c84

// -[SCNativeConversationContainer messageRetentionInMinutes]
// Type encoding: Q16@0:8
// Implementation: 0x1070b3de4

// -[SCNativeConversationContainer messageRetentionMode]
// Type encoding: q16@0:8
// Implementation: 0x1070b3e20

// -[SCNativeConversationContainer availableRetentionModes]
// Type encoding: @16@0:8
// Implementation: 0x1070b3e5c

// -[SCNativeConversationContainer is24HourRetentionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1070b3ea0

// -[SCNativeConversationContainer recipientUserIdForOneOnOneWithCurrentUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1070b3edc

// -[SCNativeConversationContainer title]
// Type encoding: @16@0:8
// Implementation: 0x1070b3f48

// -[SCNativeConversationContainer hadAnyMessages]
// Type encoding: B16@0:8
// Implementation: 0x1070b3f8c

// -[SCNativeConversationContainer lastInteractionTimestampOfConversationOrMessages]
// Type encoding: @16@0:8
// Implementation: 0x1070b3fcc

// -[SCNativeConversationContainer latestReceivedReactionSeenId]
// Type encoding: @16@0:8
// Implementation: 0x1070b3fd0

// -[SCNativeConversationContainer customNotificationSoundId]
// Type encoding: @16@0:8
// Implementation: 0x1070b4028

// -[SCNativeConversationContainer customRingtoneSoundId]
// Type encoding: @16@0:8
// Implementation: 0x1070b406c

// -[SCNativeConversationContainer chatWallpaper]
// Type encoding: @16@0:8
// Implementation: 0x1070b40b0

// -[SCNativeConversationContainer isLockedConversation]
// Type encoding: B16@0:8
// Implementation: 0x1070b40f4

// -[SCNativeConversationContainer isAckedLockedConversation]
// Type encoding: B16@0:8
// Implementation: 0x1070b4130

// -[SCNativeConversationContainer streakMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1070b416c

// -[SCNativeConversationContainer areSnapsViewableAfterOpening]
// Type encoding: B16@0:8
// Implementation: 0x1070b41b0

// -[SCNativeConversationContainer createdTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x1070b41f0

// -[SCNativeConversationContainer initialMutualFriendCount]
// Type encoding: @16@0:8
// Implementation: 0x1070b4234

// -[SCNativeConversationContainer streakReminderEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1070b4278

// -[SCNativeConversationContainer hasSummarizedUserListsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1070b42b4

// -[SCNativeConversationContainer notificationsMuted]
// Type encoding: B16@0:8
// Implementation: 0x1070b42f0

// -[SCNativeConversationContainer subtype]
// Type encoding: q16@0:8
// Implementation: 0x1070b432c

// -[SCNativeConversationContainer canUserSendMessage]
// Type encoding: B16@0:8
// Implementation: 0x1070b4368

// -[SCNativeConversationContainer initWithConversation:messages:hasMoreMessageHistoryToLoad:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1070beb84

// -[SCNativeConversationContainer copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1070bec38

// -[SCNativeConversationContainer hash]
// Type encoding: Q16@0:8
// Implementation: 0x1070bec5c

// -[SCNativeConversationContainer isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1070becd4

// -[SCNativeConversationContainer conversation]
// Type encoding: @16@0:8
// Implementation: 0x1070bed8c

// -[SCNativeConversationContainer messages]
// Type encoding: @16@0:8
// Implementation: 0x1070bed94

// -[SCNativeConversationContainer hasMoreMessageHistoryToLoad]
// Type encoding: B16@0:8
// Implementation: 0x1070bed9c

// -[SCNativeConversationContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1070beda4

@end
