// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArroyoChatLogger
// Superclass: NSObject
// Address: 0x112b5e108

@interface SCArroyoChatLogger


// -[SCArroyoChatLogger initWithUserTrackedLogger:feedPropertyLogger:lazyLensLogger:unlockableViewTracker:grapheneRegistry:circumstanceEngine:snapchattersDataFetcher:conversationDataFetcher:sponsoredSnapAdResponseParser:messagingExperimentService:performanceLogger:currentUserId:sponsoredSnapConversationSeqNumProvider:subscriptionInfoProvider:plusFeatureLogging:editContentDivergenceServices:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x100461928

// -[SCArroyoChatLogger _shouldSkipDirectSnapSendSnapchatterFetch]
// Type encoding: B16@0:8
// Implementation: 0x107094844

// -[SCArroyoChatLogger didCreateConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x107094884

// -[SCArroyoChatLogger didRemoveConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x107094938

// -[SCArroyoChatLogger didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10709493c

// -[SCArroyoChatLogger didSendStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x107094940

// -[SCArroyoChatLogger _snapSendInfoFromResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x107094944

// -[SCArroyoChatLogger _logGallerySnapSendForMemoriesSnapIfNeededWithSnapSendInfo:requiresSnapEditor:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107094a58

// -[SCArroyoChatLogger didSendComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x107094b70

// -[SCArroyoChatLogger didConfirmConversationServerCreation:]
// Type encoding: v24@0:8@16
// Implementation: 0x107094d44

// -[SCArroyoChatLogger didConversationReset:messages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107094d48

// -[SCArroyoChatLogger logSCAChatCreateOneOnOneWithSource:conversationId:recipientUsername:navigationAction:previewSize:cellState:wallpaperSource:]
// Type encoding: v72@0:8q16@24@32q40Q48q56q64
// Implementation: 0x107094d4c

// -[SCArroyoChatLogger logSCAChatCreateOneOnOneWithSource:conversationId:recipientUserId:navigationAction:previewSize:cellState:wallpaperSource:]
// Type encoding: v72@0:8q16@24@32q40Q48q56q64
// Implementation: 0x107094d80

// -[SCArroyoChatLogger logSCAChatCreateGroupWithMischiefId:communityId:navigationAction:source:previewSize:cellState:wallpaperSource:]
// Type encoding: v72@0:8@16@24q32q40Q48q56q64
// Implementation: 0x107094db8

// -[SCArroyoChatLogger _logSCAChatCreateOneOnOneWithSource:conversationId:recipientUsername:recipientUserId:navigationAction:previewSize:cellState:wallpaperSource:]
// Type encoding: v80@0:8q16@24@32@40q48Q56q64q72
// Implementation: 0x107094f24

// -[SCArroyoChatLogger _logSCAChatCreateOneOnOneWithSource:conversationId:recipientUsername:recipientUserId:navigationAction:previewSize:cellState:snapchatter:wallpaperSource:]
// Type encoding: v88@0:8q16@24@32@40q48Q56q64@72q80
// Implementation: 0x107095140

// -[SCArroyoChatLogger _logSCAChatCreateOneOnOneWithSource:conversationId:recipientUsername:recipientUserId:navigationAction:previewSize:cellState:snapchatter:wallpaperSource:friendsFeedMetadata:]
// Type encoding: v96@0:8q16@24@32@40q48Q56q64@72q80@88
// Implementation: 0x107095340

// -[SCArroyoChatLogger _logSCAChatCreateOneOnOneWithSource:conversationId:recipientUsername:recipientUserId:navigationAction:previewSize:cellState:snapchatter:wallpaperSource:friendsFeedMetadata:conversation:]
// Type encoding: v104@0:8q16@24@32@40q48Q56q64@72q80@88@96
// Implementation: 0x10709559c

// -[SCArroyoChatLogger _logCommonSCAChatChatCreate:navigationAction:source:previewSize:cellState:feedMetadata:wallpaperSource:]
// Type encoding: v72@0:8@16q24q32Q40q48@56q64
// Implementation: 0x107095840

// -[SCArroyoChatLogger setChatCreatePillState:reactionPillDisplayed:unreadMessageCount:]
// Type encoding: v32@0:8B16B20q24
// Implementation: 0x107095a84

// -[SCArroyoChatLogger logUnreadMessagePillActionWithPillType:unreadMessageCount:correspondentId:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x107095acc

// -[SCArroyoChatLogger markNextChatViewsAsTriggeredByPillTap]
// Type encoding: v16@0:8
// Implementation: 0x107095b70

// -[SCArroyoChatLogger clearTriggeredByPillTap]
// Type encoding: v16@0:8
// Implementation: 0x107095ba0

// -[SCArroyoChatLogger logChatPageChatCreateView:viewTimeUntilChatStartSec:exitEvent:sectionsAvailable:sectionsFriendsSelected:isGroupChat:isGroupButtonTapped:isGroupNamed:source:createButtonType:]
// Type encoding: v84@0:8d16d24q32@40@48B56B60B64q68Q76
// Implementation: 0x107095bcc

// -[SCArroyoChatLogger _logChatMischiefCreateWithConversation:isCommunity:communityId:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107095d28

// -[SCArroyoChatLogger logSCAChatPageViewOneOnOneWithTime:recipientId:storyViewType:conversationId:exitEvent:conversationSubtype:conversationSubtypeMetadata:chatOpenTimestampMs:chatCloseTimestampMs:chatConversationSessionId:newUnreadChatViewed:newUnreadSnapViewed:]
// Type encoding: v112@0:8d16@24q32@40q48q56@64d72d80@88q96q104
// Implementation: 0x107095e80

// -[SCArroyoChatLogger logSCAChatPageViewGroupWithTime:conversationId:exitEvent:chatConversationSessionId:newUnreadChatViewed:newUnreadSnapViewed:]
// Type encoding: v64@0:8d16@24q32@40q48q56
// Implementation: 0x107096064

// -[SCArroyoChatLogger _logSCAChatPageViewWithEvent:viewTime:cellViewPosition:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x1070961a4

// -[SCArroyoChatLogger _setUnreadViewedOnEvent:chatViewed:snapViewed:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107096230

// -[SCArroyoChatLogger _sponsoredSnapChatPageViewEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x10709628c

// -[SCArroyoChatLogger logSendMessageWithStartEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070963ec

// -[SCArroyoChatLogger logSendMessageWithMessageResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070966a0

// -[SCArroyoChatLogger _logSendMessagePerformanceWithMessageResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x107096df0

// -[SCArroyoChatLogger logChatChatViewWithUnseenMessageContent:createdAt:analyticsMessageId:recipientIds:messageRetentionInMinutes:isGroupConversation:communityId:conversationId:chatPageSource:quotedMessageId:quotedMessageAvailabilityStatus:isReencrypted:messageEncryption:quotedAnalyticsMessageId:reactionIntentId:isEmojiReaction:gallerySource:sponsoredSnapAdResponse:sponsoredSnapServeItemId:]
// Type encoding: v156@0:8@16@24@32@40Q48B56@60@68q76q84q92B100q104@112@120B128q132@140@148
// Implementation: 0x107097094

// -[SCArroyoChatLogger _logChatChatViewWithUnseenMessageContent:createdAt:analyticsMessageId:recipientIds:snapchatters:messageRetentionInMinutes:isGroupConversation:communityId:conversationId:chatPageSource:quotedMessageId:quotedMessageAvailabilityStatus:isReencrypted:messageEncryption:quotedAnalyticsMessageId:reactionIntentId:isEmojiReaction:gallerySource:sponsoredSnapAdResponse:sponsoredSnapServeItemId:]
// Type encoding: v164@0:8@16@24@32@40@48Q56B64@68@76q84q92q100B108q112@120@128B136q140@148@156
// Implementation: 0x107097510

// -[SCArroyoChatLogger _logChatChatViewWithUnseenMessageContent:createdAt:analyticsMessageId:recipientIds:snapchatters:messageRetentionInMinutes:isGroupConversation:communityId:cellPosition:conversationId:chatPageSource:quotedMessageId:quotedMessageAvailabilityStatus:isReencrypted:messageEncryption:quotedAnalyticsMessageId:reactionIntentId:isEmojiReaction:gallerySource:sponsoredSnapAdResponse:sponsoredSnapServeItemId:]
// Type encoding: v172@0:8@16@24@32@40@48Q56B64@68q76@84q92q100q108B116q120@128@136B144q148@156@164
// Implementation: 0x1070978f4

// -[SCArroyoChatLogger logChatChatScreenshotWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x107098c00

// -[SCArroyoChatLogger _logChatChatScreenshotWithResult:cellPosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107098dfc

// -[SCArroyoChatLogger logChatChatReport:reportedUser:messageRetentionInMinutes:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x107098ff4

// -[SCArroyoChatLogger _logChatChatReport:reportedUser:messageRetentionInMinutes:cellPosition:]
// Type encoding: v48@0:8@16@24Q32q40
// Implementation: 0x1070991a8

// -[SCArroyoChatLogger logMediaViewWithMessage:recipientIds:mediaViewInfo:replayCountForCurrentUser:isGroupConversation:communityId:messageRetentionInMinutes:]
// Type encoding: v68@0:8@16@24@32Q40B48@52Q60
// Implementation: 0x107099790

// -[SCArroyoChatLogger logSCAChatMediaSaveToCameraRollWithConversationId:messageBodyType:messageMediaType:source:is24HourSnap:]
// Type encoding: v52@0:8@16q24q32q40B48
// Implementation: 0x107099c60

// -[SCArroyoChatLogger _scaMessageTypeForMessageBodyType:]
// Type encoding: q24@0:8q16
// Implementation: 0x107099d6c

// -[SCArroyoChatLogger _scaMediaTypeForMessageBodyType:messageMediaType:]
// Type encoding: q32@0:8q16q24
// Implementation: 0x107099d90

// -[SCArroyoChatLogger logSCAChatMediaCardActionWithMediaType:correspondentId:mediaActionType:actionResponse:]
// Type encoding: v48@0:8q16@24@32q40
// Implementation: 0x107099e30

// -[SCArroyoChatLogger logSCAChatMediaCardActionForMapPinID:]
// Type encoding: v24@0:8@16
// Implementation: 0x107099ef4

// -[SCArroyoChatLogger logSCAChatMediaItemSelect:withDrawerViewMode:withDrawerPosition:withEdit:]
// Type encoding: v44@0:8q16q24Q32B40
// Implementation: 0x107099f7c

// -[SCArroyoChatLogger logChatMediaLoadLifeCycle:stepName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10709a040

// -[SCArroyoChatLogger _logChatSnapViewWithMessage:recipientIds:contents:mediaViewInfo:isGroupConversation:cellPosition:source:]
// Type encoding: v68@0:8@16@24@32@40B48q52q60
// Implementation: 0x10709a044

// -[SCArroyoChatLogger _logDirectSnapViewWithMessage:recipientIds:contents:mediaViewInfo:isGroupConversation:communityId:cellPosition:messageRetentionInMinutes:]
// Type encoding: v76@0:8@16@24@32@40B48@52q60Q68
// Implementation: 0x10709a490

// -[SCArroyoChatLogger _logDirectSnapReplayView:recipientIds:contents:mediaViewInfo:isGroupConversation:cellPosition:replayCount:]
// Type encoding: v68@0:8@16@24@32@40B48q52Q60
// Implementation: 0x10709b7f4

// -[SCArroyoChatLogger _logGeofilterDirectSnapViewWithMessage:mediaViewInfo:venueId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10709ba64

// -[SCArroyoChatLogger logDirectSnapScreenshotWithMessage:recipientIds:updateType:isGroupConversation:]
// Type encoding: v44@0:8@16@24q32B40
// Implementation: 0x10709bfb8

// -[SCArroyoChatLogger _logDirectSnapScreenshotWithMessage:recipientIds:updateType:cellPosition:isGroupConversation:]
// Type encoding: v52@0:8@16@24q32q40B48
// Implementation: 0x10709c180

// -[SCArroyoChatLogger _logSnapSendWithMessageSendResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10709c36c

// -[SCArroyoChatLogger logDirectSnapSendWithMessageSendResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10709c440

// -[SCArroyoChatLogger _logDirectSnapSendWithMessageSendResult:snapSendInfo:recipientUserIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10709c5a8

// -[SCArroyoChatLogger _logDirectSnapSendWithMessageSendResult:snapSendInfo:snapchatters:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10709c760

// -[SCArroyoChatLogger _logDirectSnapSendWithMessageSendResult:snapSendInfo:snapchatters:feedCellPosition:conversationId:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x10709c968

// -[SCArroyoChatLogger _logDirectSnapSendWithMessageSendResult:snapSendInfo:snapchatters:feedCellPosition:conversation:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x10709cb84

// -[SCArroyoChatLogger _logDirectSegmentSendIfNeededWithCommonLoggingParams:destinationInfo:allSnapIds:clientMessageId:actionTs:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10709e148

// -[SCArroyoChatLogger logChatChatSendWithMessageSendResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10709e634

// -[SCArroyoChatLogger _logChatChatSendWithMessageSendResult:analyticsDataModel:recipientUserIds:sendMessageAnalytics:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10709e7f0

// -[SCArroyoChatLogger _logChatChatSendWithMessageSendResult:analyticsDataModel:snapchatters:sendMessageAnalytics:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10709e9dc

// -[SCArroyoChatLogger _logChatChatSendWithMessageSendResult:analyticsDataModel:snapchatters:conversation:conversationId:quotedMessage:sendMessageAnalytics:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10709edb8

// -[SCArroyoChatLogger _logChatChatSendWithMessageSendResult:analyticsDataModel:snapchatters:conversation:conversationId:cellPosition:friendsFeedShortcutType:withMapIcon:quotedMessage:sendMessageAnalytics:]
// Type encoding: v96@0:8@16@24@32@40@48q56@64@72@80@88
// Implementation: 0x10709f0b8

// -[SCArroyoChatLogger logChatChatSave:recipientIds:isGroupConversation:messageRetentionInMinutes:source:isSender:]
// Type encoding: v56@0:8@16@24B32Q36q44B52
// Implementation: 0x1070a07c0

// -[SCArroyoChatLogger _logChatChatSaveIfNecessary:analyticsDataModel:cellPosition:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1070a09ac

// -[SCArroyoChatLogger _logChatChatSave:recipientIds:isGroupConversation:messageRetentionInMinutes:cellPosition:source:isSender:]
// Type encoding: v64@0:8@16@24B32Q36q44q52B60
// Implementation: 0x1070a0c6c

// -[SCArroyoChatLogger _logChatChatSave:recipientIds:conversationId:chatId:isGroupConversation:messageRetentionInMinutes:cellPosition:source:isSender:bitmojiReactionCount:emojiReactionCount:snapEraseMode:]
// Type encoding: v104@0:8@16@24@32@40B48Q52q60q68B76Q80Q88q96
// Implementation: 0x1070a0e04

// -[SCArroyoChatLogger logChatChatUnsave:recipientIds:isGroupConversation:source:isSender:]
// Type encoding: v48@0:8@16@24B32q36B44
// Implementation: 0x1070a0fe0

// -[SCArroyoChatLogger _logChatChatUnsave:recipientIds:isGroupConversation:cellPosition:source:isSender:]
// Type encoding: v56@0:8@16@24B32q36q44B52
// Implementation: 0x1070a11b4

// -[SCArroyoChatLogger logChatMediaSendWithMessageSendResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070a13ec

// -[SCArroyoChatLogger logChatChatErase:reaction:recipient:isGroupConversation:type:source:]
// Type encoding: v60@0:8@16@24@32B40q44q52
// Implementation: 0x1070a1694

// -[SCArroyoChatLogger _logChatChatErase:reaction:recipient:isGroupConversation:cellPosition:type:source:]
// Type encoding: v68@0:8@16@24@32B40q44q52q60
// Implementation: 0x1070a18a0

// -[SCArroyoChatLogger logChatChatPrioritySendWithMessage:recipientUserIds:conversationId:isGroupConversation:source:]
// Type encoding: v52@0:8@16@24@32B40q44
// Implementation: 0x1070a1e28

// -[SCArroyoChatLogger logChatEraseModeUpdate:source:correspondentId:isSnapRetentionUpdate:]
// Type encoding: v44@0:8q16q24@32B40
// Implementation: 0x1070a1fd4

// -[SCArroyoChatLogger logChatSnapBatchSave:isGroupConversation:recipientIds:snapCount:]
// Type encoding: v40@0:8@16B24@28i36
// Implementation: 0x1070a20a8

// -[SCArroyoChatLogger logOneOnOneChatNotificationMuteWithCorrespondentGuid:muteAction:source:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1070a217c

// -[SCArroyoChatLogger logOneOnOneCallingWithcorrespondentGuid:muteAction:source:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1070a2244

// -[SCArroyoChatLogger _logSendMessageStoryPostWithSendMessageAttemptId:snapSendInfo:analyticsDataModel:isAsyncRetry:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1070a230c

// -[SCArroyoChatLogger logVoiceNoteCreateWithRecordType:endState:duration:previewCount:]
// Type encoding: v48@0:8q16q24d32q40
// Implementation: 0x1070a2614

// -[SCArroyoChatLogger logSCAChatDirectStoryViewForMemoriesStoryWithMediaId:viewTimeSec:lastInteraction:isLaguna:numberOfSnaps:numberOfSnapsViewed:conversationId:]
// Type encoding: v68@0:8@16d24@32B40q44q52@60
// Implementation: 0x1070a26c8

// -[SCArroyoChatLogger logDWebUpsellStatusDisplayedUnseen:isGroupConversation:conversationId:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1070a27e4

// -[SCArroyoChatLogger logClearConversationWithCorrespondentId:groupId:source:conversationSubtypeMetadata:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x1070a28b8

// -[SCArroyoChatLogger logDeleteStoryMediaForMessageAnalyticsId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070a2a88

// -[SCArroyoChatLogger _fetchCellPositionWithConversationId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1070a2b04

// -[SCArroyoChatLogger _fetchFeedMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1070a2b9c

// -[SCArroyoChatLogger logSCAChatHeaderWithCorrespondentId:isGroupConversation:conversationId:locationAvailable:locationRendered:friendshipFlashbackAvailable:friendshipFlashbackRendered:saturnEventAvailable:saturnEventRendered:]
// Type encoding: v60@0:8@16B24@28B36B40B44B48B52B56
// Implementation: 0x1070a2c34

// -[SCArroyoChatLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1070a2d58

@end
