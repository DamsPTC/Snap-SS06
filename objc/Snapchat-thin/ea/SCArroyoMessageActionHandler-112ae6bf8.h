// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArroyoMessageActionHandler
// Superclass: NSObject
// Address: 0x112ae6bf8

@interface SCArroyoMessageActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCArroyoMessageActionHandler initWithNativeSessionManager:nativeSnapManager:userId:statusMessageSender:mediaStateManager:mediaRequestManager:conversationDataCoordinator:arroyoChatLogger:chatResetDelegate:mediaExtensionCacheHandler:snapchatterDataFetcher:lastSnapConversationIdSubject:finishedViewingSnapConversationIdSubject:lastChatViewSubject:snapStateLifecycleEventsPublisher:polaroidViewTransitionResolver:conversationDataFetcher:messagingExperimentService:contentDelivery:snapCountdownManager:sponsoredSnapAdResponseParser:adPrefetcher:graphene:messageSaveActionEventsPublisher:]
// Type encoding: @208@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200
// Implementation: 0x100496a84

// -[SCArroyoMessageActionHandler nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x106592be4

// -[SCArroyoMessageActionHandler dataCoordinatorDidUpdateWithIdentifier:dataRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106592c2c

// -[SCArroyoMessageActionHandler eraseMessageInConversationId:messageId:source:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x106592cdc

// -[SCArroyoMessageActionHandler markMessagesAsReadForConversationId:chatPageSource:conversationViewModel:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106592d7c

// -[SCArroyoMessageActionHandler markMessagesAsReadForConversationId:chatPageSource:conversationViewModel:upToMessageId:loggedMessageIds:]
// Type encoding: v56@0:8@16q24@32@40@48
// Implementation: 0x106592e20

// -[SCArroyoMessageActionHandler _markMessagesAsReadForConversationId:chatPageSource:conversationViewModel:upToMessageId:loggedMessageIds:]
// Type encoding: v56@0:8@16q24@32@40@48
// Implementation: 0x106592e24

// -[SCArroyoMessageActionHandler exitConversationId:lastReadViewModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106593838

// -[SCArroyoMessageActionHandler exitConversationId:upToMessageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10659389c

// -[SCArroyoMessageActionHandler exitConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106593914

// -[SCArroyoMessageActionHandler _exitConversation:lastMessageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10659391c

// -[SCArroyoMessageActionHandler _updateMessage:update:source:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106593a58

// -[SCArroyoMessageActionHandler _updateMessage:messageId:update:source:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x106593b04

// -[SCArroyoMessageActionHandler _updateMessage:messageId:update:source:completionCallback:failureCallback:]
// Type encoding: v64@0:8@16@24q32q40@?48@?56
// Implementation: 0x106593b88

// -[SCArroyoMessageActionHandler _updateMessage:conversation:update:source:completionCallback:failureCallback:]
// Type encoding: v64@0:8@16@24q32q40@?48@?56
// Implementation: 0x106593dac

// -[SCArroyoMessageActionHandler sendPriorityNotificationInConversationId:messageId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106594194

// -[SCArroyoMessageActionHandler loadMediaForConversationId:messageId:media:isGroupConversation:requestContext:requestSource:completion:]
// Type encoding: v68@0:8@16@24@32B40q44q52@?60
// Implementation: 0x106594230

// -[SCArroyoMessageActionHandler _downloadMediaForConversationId:messageId:message:media:isGroupConversation:requestContext:requestSource:completion:]
// Type encoding: v76@0:8@16@24@32@40B48q52q60@?68
// Implementation: 0x10659441c

// -[SCArroyoMessageActionHandler fetchServerMessageId:conversationId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106594b50

// -[SCArroyoMessageActionHandler _fetchMessageForMessageId:conversationId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106594df8

// -[SCArroyoMessageActionHandler _fetchSponsoredSnapMediaForMessage:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106595010

// -[SCArroyoMessageActionHandler attemptReplayOfSnapsInConversation:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10659531c

// -[SCArroyoMessageActionHandler saveSnapsInConversation:numMessagesToSave:completion:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x10659538c

// -[SCArroyoMessageActionHandler batchToggleSaveInConversation:messageIds:toSaved:source:]
// Type encoding: v44@0:8@16@24B32q36
// Implementation: 0x106595670

// -[SCArroyoMessageActionHandler saveMessagesInConversationId:messageIds:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1065957a8

// -[SCArroyoMessageActionHandler unsaveMessagesInConversationId:messageIds:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1065957b4

// -[SCArroyoMessageActionHandler conversationId:attemptReplayOfSnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065957c0

// -[SCArroyoMessageActionHandler conversationId:finishViewingSnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106595834

// -[SCArroyoMessageActionHandler conversationId:openSnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106595948

// -[SCArroyoMessageActionHandler conversationId:screenCaptureWithType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1065959cc

// -[SCArroyoMessageActionHandler conversationId:screenCaptureWithType:source:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1065959d4

// -[SCArroyoMessageActionHandler _conversation:screenCaptureWithType:source:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106595b08

// -[SCArroyoMessageActionHandler deleteStoryMediaForMessageId:conversationId:analyticsId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106595c1c

// -[SCArroyoMessageActionHandler conversationId:recipientUserId:updateChatNotificationStatus:source:completion:]
// Type encoding: v52@0:8@16@24B32q36@?44
// Implementation: 0x106595d94

// -[SCArroyoMessageActionHandler conversationId:recipientUserId:updateCallingNotificationStatus:source:completion:]
// Type encoding: v52@0:8@16@24B32q36@?44
// Implementation: 0x106595fe8

// -[SCArroyoMessageActionHandler conversationId:recipientUserId:updateTemporaryChatNotificationStatusForMuteDurationMinutes:source:completion:]
// Type encoding: v52@0:8@16@24i32q36@?44
// Implementation: 0x10659623c

// -[SCArroyoMessageActionHandler conversationId:recipientUserId:updateTemporaryCallingNotificationStatusForMuteDurationMinutes:source:completion:]
// Type encoding: v52@0:8@16@24i32q36@?44
// Implementation: 0x1065964b0

// -[SCArroyoMessageActionHandler conversationId:userDidScreenRecordForSnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106596724

// -[SCArroyoMessageActionHandler conversationId:userDidTakeScreenshotForSnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065967d8

// -[SCArroyoMessageActionHandler didShowCompleteDisplayForConversationId:withMessageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10659688c

// -[SCArroyoMessageActionHandler didShowPendingDisplayForConversationId:withMessageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106596b00

// -[SCArroyoMessageActionHandler fetchConversation:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106596d74

// -[SCArroyoMessageActionHandler fetchConversationMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106596fa0

// -[SCArroyoMessageActionHandler fetchConversationSubtypeMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1065971e4

// -[SCArroyoMessageActionHandler _adResponseForConversation:]
// Type encoding: @24@0:8@16
// Implementation: 0x10659739c

// -[SCArroyoMessageActionHandler fetchConversationFromServerById:showInFriendsFeed:isGroup:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x10659743c

// -[SCArroyoMessageActionHandler fetchMessageForConversationId:messageId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1065975b8

// -[SCArroyoMessageActionHandler fetchChatNotificationStatusForConversation:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1065975d0

// -[SCArroyoMessageActionHandler fetchCallingNotificationStatusForConversation:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106597724

// -[SCArroyoMessageActionHandler _notificationChatStatusForConversationId:conversation:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106597878

// -[SCArroyoMessageActionHandler _notificationCallingStatusForConversationId:conversation:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106597918

// -[SCArroyoMessageActionHandler loadMoreMessagesForConversationId:sinceMessageId:retryIfFailed:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1065979b8

// -[SCArroyoMessageActionHandler loadStoryReplyForConversationId:replyMedia:messageId:isGroupConversation:requestContext:requestSource:]
// Type encoding: v60@0:8@16@24@32B40q44q52
// Implementation: 0x106597ac4

// -[SCArroyoMessageActionHandler modifyMessageRetentionPolicyForConversationId:retentionMode:source:completion:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x106597c80

// -[SCArroyoMessageActionHandler modifyCustomNotificationSoundForConversationId:soundId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106598220

// -[SCArroyoMessageActionHandler modifyCustomRingtoneSoundForConversationId:soundId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10659842c

// -[SCArroyoMessageActionHandler modifyCustomColorForConversationId:colorOption:completion:]
// Type encoding: v36@0:8@16I24@?28
// Implementation: 0x106598638

// -[SCArroyoMessageActionHandler modifyStreakReminderEnabledForConversationId:enabled:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x106598814

// -[SCArroyoMessageActionHandler resetStatesInConversation:isFromBackground:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1065989f0

// -[SCArroyoMessageActionHandler resetStatesInConversations:isFromBackground:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106598aa0

// -[SCArroyoMessageActionHandler retryAllFailedMessagesInConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106598b6c

// -[SCArroyoMessageActionHandler retryFailedMessageInConversationId:messageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106598d90

// -[SCArroyoMessageActionHandler _retryFailedBlockMessageId:forConversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106598da0

// -[SCArroyoMessageActionHandler cancelSendMessageForConversationId:messageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065990e0

// -[SCArroyoMessageActionHandler sendSaveToCameraRollMessageInConversation:messageId:messageSender:mediaList:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106599270

// -[SCArroyoMessageActionHandler _sendSaveToCameraRollMessageInConversation:messageId:messageSender:mediaList:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106599414

// -[SCArroyoMessageActionHandler saveMessageInConversationId:messageId:source:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x106599574

// -[SCArroyoMessageActionHandler saveMessageInConversationId:messageId:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1065999dc

// -[SCArroyoMessageActionHandler unsaveMessageInConversationId:messageId:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1065999e4

// -[SCArroyoMessageActionHandler makeLocalConversationShowOnFeedIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106599d54

// -[SCArroyoMessageActionHandler updateMediaStateForConversationId:messageId:mediaLoadState:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106599d58

// -[SCArroyoMessageActionHandler updateConversationSnapPostOpenViewingPolicy:newPolicy:source:completion:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x106599d68

// -[SCArroyoMessageActionHandler _updateMediaLoadState:forMessageId:conversationId:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10659a1a0

// -[SCArroyoMessageActionHandler _updateDownloadStatus:forMessageId:conversationId:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10659a24c

// -[SCArroyoMessageActionHandler _markSnapAsInvalidForConversationId:messageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10659a2c4

// -[SCArroyoMessageActionHandler logMediaViewWithConversationId:messageId:isGroupConversation:mediaViewInfo:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x10659a338

// -[SCArroyoMessageActionHandler _logMediaViewWithConversation:message:isGroupConversation:mediaViewInfo:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x10659a4f4

// -[SCArroyoMessageActionHandler _logMessageEraseMetrics:conversation:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10659a684

// -[SCArroyoMessageActionHandler _fetchConversationMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10659a8f4

// -[SCArroyoMessageActionHandler _messageRetentionInMinutesForConversation:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10659aa54

// -[SCArroyoMessageActionHandler invalidateMediaForConversationId:mediaId:forMessageId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10659aae4

// -[SCArroyoMessageActionHandler clearConversationId:correspondentId:mischiefId:source:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24@32q40@?48@?56
// Implementation: 0x10659aae8

// -[SCArroyoMessageActionHandler _onClearConversationSuccessWithConversationUUID:correspondentId:mischiefId:source:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10659adc0

// -[SCArroyoMessageActionHandler _logClearConversationMetric:correspondentId:mischiefId:source:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10659afd0

// -[SCArroyoMessageActionHandler sendTypingNotification:typingActivityType:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10659b1a0

// -[SCArroyoMessageActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10659b3ac

@end
