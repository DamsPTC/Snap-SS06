// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingConversation
// Superclass: NSObject
// Address: 0x112c7f1b8

@interface SCNMessagingConversation

// Property: isCampaignConversation; attributes: TB,R,N
// Property: conversationId; attributes: T@"SCNMessagingUUID",&,N,V_conversationId
// Property: title; attributes: T@"NSString",C,N,V_title
// Property: participants; attributes: T@"NSArray",C,N,V_participants
// Property: retentionPolicy; attributes: T@"SCNMessagingConversationRetentionPolicy",&,N,V_retentionPolicy
// Property: conversationType; attributes: Tq,N,V_conversationType
// Property: chatNotificationPreference; attributes: T@"SCNMessagingEnhancedNotificationPreference",&,N,V_chatNotificationPreference
// Property: gameNotificationPreference; attributes: Tq,N,V_gameNotificationPreference
// Property: callingNotificationPreference; attributes: T@"SCNMessagingEnhancedNotificationPreference",&,N,V_callingNotificationPreference
// Property: blockedParticipantExceptions; attributes: T@"NSArray",C,N,V_blockedParticipantExceptions
// Property: nonFriendUserParticipantExceptions; attributes: T@"NSArray",C,N,V_nonFriendUserParticipantExceptions
// Property: joinedTimestampMs; attributes: Tq,N,V_joinedTimestampMs
// Property: sourcePage; attributes: Tq,N,V_sourcePage
// Property: lastSenderUserIds; attributes: T@"NSArray",C,N,V_lastSenderUserIds
// Property: latestReceivedReactionSeenId; attributes: Tq,N,V_latestReceivedReactionSeenId
// Property: createdTimestampMs; attributes: T@"NSNumber",&,N,V_createdTimestampMs
// Property: isFriendLinkPending; attributes: TB,N,V_isFriendLinkPending
// Property: pinnedTimestampMs; attributes: T@"NSNumber",&,N,V_pinnedTimestampMs
// Property: customNotificationSoundId; attributes: T@"NSNumber",&,N,V_customNotificationSoundId
// Property: chatWallpaper; attributes: T@"SCNMessagingChatWallpaper",&,N,V_chatWallpaper
// Property: lockedState; attributes: Tq,N,V_lockedState
// Property: kickedParticipants; attributes: T@"NSArray",C,N,V_kickedParticipants
// Property: streakMetadata; attributes: T@"SCNMessagingStreakMetadata",&,N,V_streakMetadata
// Property: conversationSubType; attributes: T@"NSNumber",&,N,V_conversationSubType
// Property: snapPostOpenViewingPolicy; attributes: Tq,N,V_snapPostOpenViewingPolicy
// Property: pendingDecryptionCount; attributes: T@"NSNumber",&,N,V_pendingDecryptionCount
// Property: initialMutualFriendCount; attributes: T@"NSNumber",&,N,V_initialMutualFriendCount
// Property: streakReminderEnabled; attributes: TB,N,V_streakReminderEnabled
// Property: categoryType; attributes: Tq,N,V_categoryType
// Property: categoryId; attributes: T@"SCNMessagingUUID",&,N,V_categoryId
// Property: isEligibleForInfiniteRetention; attributes: TB,N,V_isEligibleForInfiniteRetention
// Property: isEligibleForSevenDayRetention; attributes: TB,N,V_isEligibleForSevenDayRetention
// Property: metadataFormat; attributes: T@"SCNMessagingConversationMetadataFormat",&,N,V_metadataFormat
// Property: customRingtoneSoundId; attributes: T@"NSNumber",&,N,V_customRingtoneSoundId
// Property: availableRetentionModes; attributes: T@"NSArray",C,N,V_availableRetentionModes
// Property: conversationSubTypeMetadata; attributes: T@"SCNMessagingConversationSubTypeMetadata",&,N,V_conversationSubTypeMetadata
// Property: conversationInvitationMetadata; attributes: T@"SCNMessagingConversationInvitationMetadata",&,N,V_conversationInvitationMetadata
// Property: backoffTimeMs; attributes: T@"NSNumber",&,N,V_backoffTimeMs
// Property: activityData; attributes: T@"SCNMessagingActivityData",&,N,V_activityData
// Property: isPreservedForLegalHold; attributes: TB,N,V_isPreservedForLegalHold
// Property: canCreatePoll; attributes: TB,N,V_canCreatePoll
// Property: groupStoryConsentStatus; attributes: Tq,N,V_groupStoryConsentStatus
// Property: groupStoryMayExist; attributes: TB,N,V_groupStoryMayExist

// -[SCNMessagingConversation conversationSubtype]
// Type encoding: q16@0:8
// Implementation: 0x107d62ac4

// -[SCNMessagingConversation isLockedConversation]
// Type encoding: B16@0:8
// Implementation: 0x107d62a70

// -[SCNMessagingConversation isAckedLockedConversation]
// Type encoding: B16@0:8
// Implementation: 0x107d62aa8

// -[SCNMessagingConversation readRetentionInMinutes]
// Type encoding: Q16@0:8
// Implementation: 0x107d62904

// -[SCNMessagingConversation messageRetentionInMinutes]
// Type encoding: Q16@0:8
// Implementation: 0x107d62954

// -[SCNMessagingConversation messageRetentionMode]
// Type encoding: q16@0:8
// Implementation: 0x107d629c0

// -[SCNMessagingConversation isGroupConversation]
// Type encoding: B16@0:8
// Implementation: 0x107d62738

// -[SCNMessagingConversation recipientUserIdForOneOnOneWithCurrentUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d62754

// -[SCNMessagingConversation hasSummarizedUserListsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107d626f8

// -[SCNMessagingConversation conversationIdString]
// Type encoding: @16@0:8
// Implementation: 0x107d626b4

// -[SCNMessagingConversation isCommunity]
// Type encoding: B16@0:8
// Implementation: 0x107d6263c

// -[SCNMessagingConversation communityId]
// Type encoding: @16@0:8
// Implementation: 0x107d62658

// -[SCNMessagingConversation isCampaignConversation]
// Type encoding: B16@0:8
// Implementation: 0x107d624a8

// -[SCNMessagingConversation isCampaignResponseInteractionDisabled]
// Type encoding: B16@0:8
// Implementation: 0x107d62514

// -[SCNMessagingConversation adResponseBytes]
// Type encoding: @16@0:8
// Implementation: 0x107d62574

// -[SCNMessagingConversation chatHeadline]
// Type encoding: @16@0:8
// Implementation: 0x107d625d8

// -[SCNMessagingConversation copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1070b34bc

// -[SCNMessagingConversation canUserSendMessage]
// Type encoding: B16@0:8
// Implementation: 0x103b09d78

// -[SCNMessagingConversation initWithConversationId:title:participants:retentionPolicy:conversationType:chatNotificationPreference:gameNotificationPreference:callingNotificationPreference:blockedParticipantExceptions:nonFriendUserParticipantExceptions:joinedTimestampMs:sourcePage:lastSenderUserIds:latestReceivedReactionSeenId:createdTimestampMs:isFriendLinkPending:pinnedTimestampMs:customNotificationSoundId:chatWallpaper:lockedState:kickedParticipants:streakMetadata:conversationSubType:snapPostOpenViewingPolicy:pendingDecryptionCount:initialMutualFriendCount:streakReminderEnabled:categoryType:categoryId:isEligibleForInfiniteRetention:isEligibleForSevenDayRetention:metadataFormat:customRingtoneSoundId:availableRetentionModes:conversationSubTypeMetadata:conversationInvitationMetadata:backoffTimeMs:activityData:isPreservedForLegalHold:canCreatePoll:groupStoryConsentStatus:groupStoryMayExist:]
// Type encoding: @324@0:8@16@24@32@40q48@56q64@72@80@88q96q104@112q120@128B136@140@148@156q164@172@180@188q196@204@212B220q224@232B240B244@248@256@264@272@280@288@296B304B308q312B320
// Implementation: 0x1006cf984

// -[SCNMessagingConversation initWithConversationId:participants:retentionPolicy:conversationType:chatNotificationPreference:gameNotificationPreference:callingNotificationPreference:blockedParticipantExceptions:nonFriendUserParticipantExceptions:joinedTimestampMs:sourcePage:lastSenderUserIds:latestReceivedReactionSeenId:isFriendLinkPending:lockedState:kickedParticipants:snapPostOpenViewingPolicy:streakReminderEnabled:categoryType:isEligibleForInfiniteRetention:isEligibleForSevenDayRetention:metadataFormat:isPreservedForLegalHold:canCreatePoll:groupStoryConsentStatus:groupStoryMayExist:]
// Type encoding: @196@0:8@16@24@32q40@48q56@64@72@80q88q96@104q112B120q124@132q140B148q152B160B164@168B176B180q184B192
// Implementation: 0x10b635e68

// -[SCNMessagingConversation conversationId]
// Type encoding: @16@0:8
// Implementation: 0x10b635f4c

// -[SCNMessagingConversation setConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b635f54

// -[SCNMessagingConversation title]
// Type encoding: @16@0:8
// Implementation: 0x10b635f74

// -[SCNMessagingConversation setTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b635f7c

// -[SCNMessagingConversation participants]
// Type encoding: @16@0:8
// Implementation: 0x10b635f84

// -[SCNMessagingConversation setParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b635f8c

// -[SCNMessagingConversation retentionPolicy]
// Type encoding: @16@0:8
// Implementation: 0x10b635f94

// -[SCNMessagingConversation setRetentionPolicy:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b635f9c

// -[SCNMessagingConversation conversationType]
// Type encoding: q16@0:8
// Implementation: 0x1006d23b4

// -[SCNMessagingConversation setConversationType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b635fbc

// -[SCNMessagingConversation chatNotificationPreference]
// Type encoding: @16@0:8
// Implementation: 0x10b635fc4

// -[SCNMessagingConversation setChatNotificationPreference:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b635fcc

// -[SCNMessagingConversation gameNotificationPreference]
// Type encoding: q16@0:8
// Implementation: 0x10b635fec

// -[SCNMessagingConversation setGameNotificationPreference:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b635ff4

// -[SCNMessagingConversation callingNotificationPreference]
// Type encoding: @16@0:8
// Implementation: 0x10b635ffc

// -[SCNMessagingConversation setCallingNotificationPreference:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b636004

// -[SCNMessagingConversation blockedParticipantExceptions]
// Type encoding: @16@0:8
// Implementation: 0x10b636024

// -[SCNMessagingConversation setBlockedParticipantExceptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63602c

// -[SCNMessagingConversation nonFriendUserParticipantExceptions]
// Type encoding: @16@0:8
// Implementation: 0x10b636034

// -[SCNMessagingConversation setNonFriendUserParticipantExceptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63603c

// -[SCNMessagingConversation joinedTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10b636044

// -[SCNMessagingConversation setJoinedTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63604c

// -[SCNMessagingConversation sourcePage]
// Type encoding: q16@0:8
// Implementation: 0x10b636054

// -[SCNMessagingConversation setSourcePage:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63605c

// -[SCNMessagingConversation lastSenderUserIds]
// Type encoding: @16@0:8
// Implementation: 0x10b636064

// -[SCNMessagingConversation setLastSenderUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63606c

// -[SCNMessagingConversation latestReceivedReactionSeenId]
// Type encoding: q16@0:8
// Implementation: 0x10b636074

// -[SCNMessagingConversation setLatestReceivedReactionSeenId:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63607c

// -[SCNMessagingConversation createdTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x10b636084

// -[SCNMessagingConversation setCreatedTimestampMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63608c

// -[SCNMessagingConversation isFriendLinkPending]
// Type encoding: B16@0:8
// Implementation: 0x10b6360ac

// -[SCNMessagingConversation setIsFriendLinkPending:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6360b4

// -[SCNMessagingConversation pinnedTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x10b6360bc

// -[SCNMessagingConversation setPinnedTimestampMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6360c4

// -[SCNMessagingConversation customNotificationSoundId]
// Type encoding: @16@0:8
// Implementation: 0x10b6360e4

// -[SCNMessagingConversation setCustomNotificationSoundId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6360ec

// -[SCNMessagingConversation chatWallpaper]
// Type encoding: @16@0:8
// Implementation: 0x10b63610c

// -[SCNMessagingConversation setChatWallpaper:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b636114

// -[SCNMessagingConversation lockedState]
// Type encoding: q16@0:8
// Implementation: 0x10b636134

// -[SCNMessagingConversation setLockedState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63613c

// -[SCNMessagingConversation kickedParticipants]
// Type encoding: @16@0:8
// Implementation: 0x10b636144

// -[SCNMessagingConversation setKickedParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63614c

// -[SCNMessagingConversation streakMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b636154

// -[SCNMessagingConversation setStreakMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63615c

// -[SCNMessagingConversation conversationSubType]
// Type encoding: @16@0:8
// Implementation: 0x10b63617c

// -[SCNMessagingConversation setConversationSubType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b636184

// -[SCNMessagingConversation snapPostOpenViewingPolicy]
// Type encoding: q16@0:8
// Implementation: 0x10b6361a4

// -[SCNMessagingConversation setSnapPostOpenViewingPolicy:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6361ac

// -[SCNMessagingConversation pendingDecryptionCount]
// Type encoding: @16@0:8
// Implementation: 0x10b6361b4

// -[SCNMessagingConversation setPendingDecryptionCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6361bc

// -[SCNMessagingConversation initialMutualFriendCount]
// Type encoding: @16@0:8
// Implementation: 0x10b6361dc

// -[SCNMessagingConversation setInitialMutualFriendCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6361e4

// -[SCNMessagingConversation streakReminderEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b636204

// -[SCNMessagingConversation setStreakReminderEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63620c

// -[SCNMessagingConversation categoryType]
// Type encoding: q16@0:8
// Implementation: 0x10b636214

// -[SCNMessagingConversation setCategoryType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63621c

// -[SCNMessagingConversation categoryId]
// Type encoding: @16@0:8
// Implementation: 0x10b636224

// -[SCNMessagingConversation setCategoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63622c

// -[SCNMessagingConversation isEligibleForInfiniteRetention]
// Type encoding: B16@0:8
// Implementation: 0x10b63624c

// -[SCNMessagingConversation setIsEligibleForInfiniteRetention:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b636254

// -[SCNMessagingConversation isEligibleForSevenDayRetention]
// Type encoding: B16@0:8
// Implementation: 0x10b63625c

// -[SCNMessagingConversation setIsEligibleForSevenDayRetention:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b636264

// -[SCNMessagingConversation metadataFormat]
// Type encoding: @16@0:8
// Implementation: 0x10b63626c

// -[SCNMessagingConversation setMetadataFormat:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b636274

// -[SCNMessagingConversation customRingtoneSoundId]
// Type encoding: @16@0:8
// Implementation: 0x10b636294

// -[SCNMessagingConversation setCustomRingtoneSoundId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63629c

// -[SCNMessagingConversation availableRetentionModes]
// Type encoding: @16@0:8
// Implementation: 0x10b6362bc

// -[SCNMessagingConversation setAvailableRetentionModes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6362c4

// -[SCNMessagingConversation conversationSubTypeMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b6362cc

// -[SCNMessagingConversation setConversationSubTypeMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6362d4

// -[SCNMessagingConversation conversationInvitationMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b6362f4

// -[SCNMessagingConversation setConversationInvitationMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6362fc

// -[SCNMessagingConversation backoffTimeMs]
// Type encoding: @16@0:8
// Implementation: 0x10b63631c

// -[SCNMessagingConversation setBackoffTimeMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b636324

// -[SCNMessagingConversation activityData]
// Type encoding: @16@0:8
// Implementation: 0x10b636344

// -[SCNMessagingConversation setActivityData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63634c

// -[SCNMessagingConversation isPreservedForLegalHold]
// Type encoding: B16@0:8
// Implementation: 0x10b63636c

// -[SCNMessagingConversation setIsPreservedForLegalHold:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b636374

// -[SCNMessagingConversation canCreatePoll]
// Type encoding: B16@0:8
// Implementation: 0x10b63637c

// -[SCNMessagingConversation setCanCreatePoll:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b636384

// -[SCNMessagingConversation groupStoryConsentStatus]
// Type encoding: q16@0:8
// Implementation: 0x10b63638c

// -[SCNMessagingConversation setGroupStoryConsentStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b636394

// -[SCNMessagingConversation groupStoryMayExist]
// Type encoding: B16@0:8
// Implementation: 0x10b63639c

// -[SCNMessagingConversation setGroupStoryMayExist:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6363a4

// -[SCNMessagingConversation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1006d2474

@end
