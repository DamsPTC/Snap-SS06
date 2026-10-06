// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendFlowMediaSender
// Superclass: NSObject
// Address: 0x112a91c98

@interface SCSendFlowMediaSender

// Property: crossPostHandler; attributes: T@?,C,N,V_crossPostHandler

// -[SCSendFlowMediaSender initWithSendFlowScope:conversationParser:userId:snapSender:textMessageSender:drawerMediaSender:storyReplySender:externalMediaPreparer:storiesServices:friendStoriesNonFriendStoriesCombinedPlaybackDataProvider:usernameProvider:myStoriesDataCoordinator:storiesGrapheneMetricsEmitter:snapchatterFetcher:userBlizzard:sendObservabilityLogger:networkConnectivityMonitor:lazyMediaDataIngestor:lazyStoriesMediaCoordinator:notificationPool:SCStoryPrivacySettingManager:legacyEphemeralMediaFactory:hasPublicProfile:circumstanceEngine:sendToMassSnapNotificationService:pageLauncher:spotlightAutoShareService:spotlightTileServices:massSnapPostSignalService:]
// Type encoding: @244@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184B192@196@204@212@220@228@236
// Implementation: 0x105c1bf54

// -[SCSendFlowMediaSender sendSnapMediaWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c1c658

// -[SCSendFlowMediaSender _sendChatMediaWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c1ca60

// -[SCSendFlowMediaSender _sendSnapMediaWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c1cf50

// -[SCSendFlowMediaSender _sendSnapMediaToConversationIds:metadata:destinationInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105c1d240

// -[SCSendFlowMediaSender _sendChatMediaToConversationIds:metadata:destinationInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105c1d6b0

// -[SCSendFlowMediaSender _updateEphemeralCommonLoggingParameters:destinationInfo:senderData:multiMediaBundleId:fromSendTo:sendToSessionId:isEligibleForCrossPostingSpotlightToStories:]
// Type encoding: v64@0:8@16@24@32@40B48@52B60
// Implementation: 0x105c1dc4c

// -[SCSendFlowMediaSender _sendSnapMediaToChatAndStories:conversationIds:massSnapRecipients:phoneNumbers:destinationInfo:multiMediaBundleId:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x105c1e554

// -[SCSendFlowMediaSender _didSendSnapMediaRecipientsCount:groupCount:metadata:postingStory:storiesConfig:commonLoggingParams:]
// Type encoding: v60@0:8q16q24@32B40@44@52
// Implementation: 0x105c1ee48

// -[SCSendFlowMediaSender _didSendTriggered]
// Type encoding: v16@0:8
// Implementation: 0x105c1f2f4

// -[SCSendFlowMediaSender _didSendCompleteWithSuccess:toChatOnly:toMassSnap:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x105c1f308

// -[SCSendFlowMediaSender _captureEditResendSnapDocIfEligible:conversationIds:postingToChatOnly:toMassSnap:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x105c1f49c

// -[SCSendFlowMediaSender _sendSnapMediaToStories:atIndex:conversationIds:phoneNumbers:messagingLocalMediaReferences:destinationInfo:storyPostingInfo:sendStartTime:multiMediaBundleId:shouldIncludeLocationData:shouldSaveStories:externalContentMetadata:localPlatformData:]
// Type encoding: v112@0:8@16q24@32@40@48@56@64d72@80B88B92@96@104
// Implementation: 0x105c1f6ec

// -[SCSendFlowMediaSender _sendSnapMedia:atIndex:conversationIds:massSnapRecipients:phoneNumbers:messagingLocalMediaReferences:spotlightTileMediaReference:destinationInfo:storyPostingInfo:incidentalAttachments:sendStartTime:multiMediaBundleId:shouldIncludeLocationData:externalContentMetadata:localPlatformData:]
// Type encoding: v132@0:8@16q24@32@40@48@56@64@72@80@88d96@104B112@116@124
// Implementation: 0x105c1fae4

// -[SCSendFlowMediaSender _checkStoryPostingInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c20840

// -[SCSendFlowMediaSender _calculateMessageBehaviorHint:snapDoc:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105c20c74

// -[SCSendFlowMediaSender _insertStorySnapsIntoStoriesWithEphemeralMedia:senderData:creationTimestamp:multiSnapInfo:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x105c20d34

// -[SCSendFlowMediaSender _shouldShowSendingToast]
// Type encoding: B16@0:8
// Implementation: 0x105c21a78

// -[SCSendFlowMediaSender _shouldShowResultToast:]
// Type encoding: B24@0:8@16
// Implementation: 0x105c21a8c

// -[SCSendFlowMediaSender _isPostingToStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x105c21b00

// -[SCSendFlowMediaSender _onlyPostingToSpotlightAndPublicStoryOrSnapMapOrSharedStoryOrMyStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x105c21b8c

// -[SCSendFlowMediaSender _storyFraming]
// Type encoding: @16@0:8
// Implementation: 0x105c21b98

// -[SCSendFlowMediaSender _saveStoryThumbnailDataToThumbnailCoordinatorIfPossible:spotlightCoverTile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c21c14

// -[SCSendFlowMediaSender _snapCreationTimeAtIndex:sendStartTime:]
// Type encoding: d32@0:8q16d24
// Implementation: 0x105c21df4

// -[SCSendFlowMediaSender _ephemeralMediaAtIndex:metadata:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x105c21e08

// -[SCSendFlowMediaSender _snapMultiMediaBundleIdWithMediaList:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c21f98

// -[SCSendFlowMediaSender _lensAssetsUploadInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c22058

// -[SCSendFlowMediaSender _activatePublicStoriesIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c22104

// -[SCSendFlowMediaSender _promptLensReplyParameters]
// Type encoding: @16@0:8
// Implementation: 0x105c222cc

// -[SCSendFlowMediaSender _sendTurnBasedSnapMediaWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c22458

// -[SCSendFlowMediaSender _isTurnBasedOpponentOnlyRecipient:]
// Type encoding: B24@0:8@16
// Implementation: 0x105c227f4

// -[SCSendFlowMediaSender _sendStoryReplyMessageWithPromptLensParameters:externalMedia:conversationId:platformAnalytics:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105c2289c

// -[SCSendFlowMediaSender _chatSendPlatformAnalyticsWithSource:commonLoggingParams:destinationInfo:isForwardMessage:uuid:containsExternalContent:sendUiType:]
// Type encoding: @64@0:8q16@24@32B40@44B52q56
// Implementation: 0x105c22d14

// -[SCSendFlowMediaSender _chatSendMemoriesMetricsInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c22f0c

// -[SCSendFlowMediaSender _chatSendCameraRollCameraMetricsInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c23018

// -[SCSendFlowMediaSender _prepareUploadForChatMedia:trackingId:captureSessionId:conversationIds:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105c230f8

// -[SCSendFlowMediaSender _editResendToastContent]
// Type encoding: @16@0:8
// Implementation: 0x105c232fc

// -[SCSendFlowMediaSender _showEditAndResendToastWithSnapDocData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c235a8

// -[SCSendFlowMediaSender _showStatusMessage:]
// Type encoding: v20@0:8B16
// Implementation: 0x105c23d20

// -[SCSendFlowMediaSender crossPostHandler]
// Type encoding: @?16@0:8
// Implementation: 0x105c23dfc

// -[SCSendFlowMediaSender setCrossPostHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c23e04

// -[SCSendFlowMediaSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c23e0c

@end
