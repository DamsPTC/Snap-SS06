// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingConversationManager
// Superclass: NSObject
// Address: 0x112bab8b8

@interface SCNMessagingConversationManager


// -[SCNMessagingConversationManager initWithCpp:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x100624140

// -[SCNMessagingConversationManager enterConversation:conversationType:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861d25c

// -[SCNMessagingConversationManager fetchConversationWithMessages:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10861d2f4

// -[SCNMessagingConversationManager fetchConversationWithMessagesPaginated:startingMessageId:numberOfMessages:callback:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10861d394

// -[SCNMessagingConversationManager fetchConversation:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10861d4b4

// -[SCNMessagingConversationManager fetchConversationByParticipants:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10861d558

// -[SCNMessagingConversationManager fetchMessage:messageId:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861d600

// -[SCNMessagingConversationManager fetchMessageByServerId:syncIfNotFound:callback:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10861d6a4

// -[SCNMessagingConversationManager fetchMessagesByServerIds:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10861d770

// -[SCNMessagingConversationManager fetchServerMessageIdentifier:messageId:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861da48

// -[SCNMessagingConversationManager fetchPrefetchableMessagesForConversations:prefetchRequest:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861daec

// -[SCNMessagingConversationManager fetchMessageForQuotedView:messageId:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861dbb4

// -[SCNMessagingConversationManager displayedMessages:lastMessageId:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861dc58

// -[SCNMessagingConversationManager exitConversation:lastMessageId:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861dcf0

// -[SCNMessagingConversationManager mediaMessagesDisplayed:messages:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861dda4

// -[SCNMessagingConversationManager sendMessageWithContent:messageContent:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861e0d8

// -[SCNMessagingConversationManager forwardMessage:destinations:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861e1c4

// -[SCNMessagingConversationManager retrySendMessage:messageId:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861e2b0

// -[SCNMessagingConversationManager cancelMessageSend:messageId:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861e350

// -[SCNMessagingConversationManager updateMessage:messageId:update:callback:]
// Type encoding: v48@0:8@16q24q32@40
// Implementation: 0x10861e3e8

// -[SCNMessagingConversationManager reactToMessage:messageId:reaction:platformAnalytics:callback:]
// Type encoding: v56@0:8@16q24@32@40@48
// Implementation: 0x10861e4a0

// -[SCNMessagingConversationManager removeReaction:messageId:reaction:callback:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x10861e608

// -[SCNMessagingConversationManager removeFailedMessages:messagesToRemove:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861e6ec

// -[SCNMessagingConversationManager createConversation:title:conversationType:sourcePage:callback:]
// Type encoding: v56@0:8@16@24q32q40@48
// Implementation: 0x10861e8f4

// -[SCNMessagingConversationManager removeLocalConversations:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10861e9fc

// -[SCNMessagingConversationManager ensureNetworkConversation:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10861ea98

// -[SCNMessagingConversationManager getOneOnOneConversationIds:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10861eb3c

// -[SCNMessagingConversationManager updateConversationTitle:title:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861ebe4

// -[SCNMessagingConversationManager updateGroupStoryConsent:consent:callback:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10861eca0

// -[SCNMessagingConversationManager inviteParticipants:participants:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861ed40

// -[SCNMessagingConversationManager leaveConversation:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10861ee10

// -[SCNMessagingConversationManager clearConversation:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10861eea8

// -[SCNMessagingConversationManager updateConversationRetentionMode:retentionMode:updateSource:callback:]
// Type encoding: v48@0:8@16q24q32@40
// Implementation: 0x10861ef40

// -[SCNMessagingConversationManager addBlockedParticipantException:participants:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861eff8

// -[SCNMessagingConversationManager addNonFriendParticipantException:participants:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861f0b4

// -[SCNMessagingConversationManager updateChatNotificationSettings:notificationPreference:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861f170

// -[SCNMessagingConversationManager updateCallingNotificationSettings:notificationPreference:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861f208

// -[SCNMessagingConversationManager updateTemporaryMuteChatNotificationSettings:temporaryMuteDurationMinutes:callback:]
// Type encoding: v36@0:8@16i24@28
// Implementation: 0x10861f2a0

// -[SCNMessagingConversationManager updateTemporaryMuteCallingNotificationSettings:temporaryMuteDurationMinutes:callback:]
// Type encoding: v36@0:8@16i24@28
// Implementation: 0x10861f340

// -[SCNMessagingConversationManager updateGameNotificationSettings:notificationPreference:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861f3e0

// -[SCNMessagingConversationManager updateCustomNotificationSound:soundId:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861f478

// -[SCNMessagingConversationManager updateCustomRingtoneSound:soundId:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861f52c

// -[SCNMessagingConversationManager updateChatWallpaper:wallpaper:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861f5e0

// -[SCNMessagingConversationManager listLocalConversations:]
// Type encoding: v24@0:8@16
// Implementation: 0x100624204

// -[SCNMessagingConversationManager syncServerConversation:updateFeedEntry:reason:callback:]
// Type encoding: v44@0:8@16B24q28@36
// Implementation: 0x10861f6c0

// -[SCNMessagingConversationManager batchSyncServerConversation:batchSyncReason:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861f78c

// -[SCNMessagingConversationManager getClientConversationId:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10861fa74

// -[SCNMessagingConversationManager getLocalMediaReferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x10861fb18

// -[SCNMessagingConversationManager sendTypingNotification:typingActivityType:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10861fb9c

// -[SCNMessagingConversationManager queryUserGroupsMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10861fc34

// -[SCNMessagingConversationManager hasUnreadMessage:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10861fcb8

// -[SCNMessagingConversationManager applyMessageOrSyncConversation:conversationType:minVersion:updateFeedEntry:reason:messagePayloadBytes:callback:]
// Type encoding: v68@0:8@16q24q32B40q44@52@60
// Implementation: 0x10861fd5c

// -[SCNMessagingConversationManager attachTranscription:messageId:transcriptionInfo:callback:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x10861fe7c

// -[SCNMessagingConversationManager retrieveMessagesByServerId:serverMessageIds:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10861ff44

// -[SCNMessagingConversationManager kickParticipant:userId:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10862000c

// -[SCNMessagingConversationManager bootstrapDevice:keyVersion:callback:]
// Type encoding: v36@0:8@16i24@28
// Implementation: 0x1086200c8

// -[SCNMessagingConversationManager dismissStreakRestore:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10862016c

// -[SCNMessagingConversationManager clearConversationHistory:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108620204

// -[SCNMessagingConversationManager setSnapPostOpenViewingPolicy:snapPostOpenViewingPolicy:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10862029c

// -[SCNMessagingConversationManager getPendingDecryptionCount:callback:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x108620334

// -[SCNMessagingConversationManager updateColor:colorOption:callback:]
// Type encoding: v36@0:8@16i24@28
// Implementation: 0x1086203d4

// -[SCNMessagingConversationManager getPendingDecryptionMessagesCountByConvId:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108620474

// -[SCNMessagingConversationManager getPendingSendCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x108620518

// -[SCNMessagingConversationManager updateStreakReminderSettings:enableStreakReminder:callback:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10862059c

// -[SCNMessagingConversationManager setStreakFrozenState:isFrozen:callback:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10862063c

// -[SCNMessagingConversationManager fetchMessagesInBundle:bundleId:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1086206dc

// -[SCNMessagingConversationManager editMessage:editedMessageContent:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1086207a4

// -[SCNMessagingConversationManager joinGroupConversation:metadata:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108620890

// -[SCNMessagingConversationManager joinPublicGroup:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108620970

// -[SCNMessagingConversationManager leavePublicGroup:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108620a08

// -[SCNMessagingConversationManager acceptConversationInvitation:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108620aa0

// -[SCNMessagingConversationManager declineConversationInvitation:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108620b38

// -[SCNMessagingConversationManager fetchPlayableMediaMessagesAroundMessage:messageID:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108620bd0

// -[SCNMessagingConversationManager cancelStreamingResponses:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108620c70

// -[SCNMessagingConversationManager getConversation:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108620d08

// -[SCNMessagingConversationManager clearBotConversationContext:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108620dac

// -[SCNMessagingConversationManager updatePollVote:messageId:voteIndex:callback:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x108620e44

// -[SCNMessagingConversationManager getAffinityMessages:messageTypeFilter:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108620f08

// -[SCNMessagingConversationManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100624a24

// -[SCNMessagingConversationManager .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1006240f8

@end
