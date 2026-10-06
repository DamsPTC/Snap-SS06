// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewSnapSender
// Superclass: NSObject
// Address: 0x112afc098

@interface SCPreviewSnapSender

// Property: delegate; attributes: T@"<SCPreviewWorkflowDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewSnapSender initWithConfiguration:conversationParser:discoverSender:userProfileIdProvider:storiesThumbnailCoordinator:circumstanceEngine:snapchatterFetcher:networkConnectivityMonitor:mediaDataIngestor:storiesMediaCoordinator:snapSender:pollsCreationManager:userTrackedBlizzardLogger:memoriesMediaSender:bitmojiMessageSender:premiumStoryShareSender:memoriesExperimentService:snapVideoFilterCoordinator:storyInviteSendingServices:sendToMassSnapNotificationService:spotlightAutoShareService:spotlightTileServices:]
// Type encoding: @192@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184
// Implementation: 0x1067a543c

// -[SCPreviewSnapSender sendEphemeralMediaList:snapSenderDataModel:lensAssetsUploadInfo:lensMetadataFuture:mischiefs:isSendToPagePresentedFromPreview:isSnapEditor:]
// Type encoding: v64@0:8@16@24@32@40@48B56B60
// Implementation: 0x1067a58d4

// -[SCPreviewSnapSender _sendEphemeralMediaList:snapSenderDataModel:lensAssetsUploadInfo:lensMetadataFuture:arroyoConversationIds:mischiefs:destinationInfo:isSendToPagePresentedFromPreview:isSnapEditor:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64B72B76
// Implementation: 0x1067a5e58

// -[SCPreviewSnapSender sendBitmojiShareMessageWithChatMedia:userId:encodedOutfit:toRecipientUsernames:recipientUserIds:mischiefs:additionalText:completion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@?72
// Implementation: 0x1067a6558

// -[SCPreviewSnapSender sendChatMessageWithChatMedia:toRecipientUsernames:recipientUserIds:mischiefs:blizzardEventsForSuccessfulSend:additionalText:commonLoggingParams:completion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@?72
// Implementation: 0x1067a66ec

// -[SCPreviewSnapSender sendChatMessageWithChatMedia:toRecipientUsernames:recipientUserIds:massSnapRecipients:mischiefs:blizzardEventsForSuccessfulSend:additionalText:commonLoggingParams:provenance:timing:completion:]
// Type encoding: v104@0:8@16@24@32@40@48@56@64@72@80@88@?96
// Implementation: 0x1067a6728

// -[SCPreviewSnapSender _sendChatMessageWithChatMedia:conversationIds:massSnapRecipients:blizzardEventsForSuccessfulSend:additionalText:commonLoggingParams:destinationInfo:provenance:timing:completion:]
// Type encoding: v96@0:8@16@24@32@40@48@56@64@72@80@?88
// Implementation: 0x1067a6ba8

// -[SCPreviewSnapSender sendAdShareMedia:toRecipientUsernames:recipientUserIds:mischiefs:loggingParameters:sendToSessionId:additionalText:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1067a6e08

// -[SCPreviewSnapSender _sendAdShareMedia:conversationIds:loggingParameters:sendToSessionId:additionalText:destinationInfo:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x1067a70f4

// -[SCPreviewSnapSender _sendAdShareMedia:conversationIds:additionalText:platformAnalytics:additionalTextPlatformAnalytics:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1067a72a4

// -[SCPreviewSnapSender _statusMessageDisplayHandlerForMedia:]
// Type encoding: @?24@0:8@16
// Implementation: 0x1067a73f0

// -[SCPreviewSnapSender sendDiscoverMedia:toRecipientUsernames:recipientUserIds:snapId:compositeStoryId:mischiefs:loggingParameters:sendToSessionId:additionalText:isForwarded:isBitmojiStory:]
// Type encoding: v96@0:8@16@24@32@40@48@56@64@72@80B88B92
// Implementation: 0x1067a7560

// -[SCPreviewSnapSender _sendDiscoverMedia:snapId:compositeStoryId:conversationIds:loggingParameters:sendToSessionId:additionalText:isForwarded:isBitmojiStory:destinationInfo:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64B72B76@80
// Implementation: 0x1067a7900

// -[SCPreviewSnapSender sendDiscoverShareMedia:snapId:compositeStoryId:isBitmojiStory:conversationIds:additionalText:platformAnalytics:additionalTextPlatformAnalytics:completion:]
// Type encoding: v84@0:8@16@24@32B40@44@52@60@68@?76
// Implementation: 0x1067a7c9c

// -[SCPreviewSnapSender _sendArroyoChatMessageWithChatMedia:conversationIds:massSnapRecipients:shouldShowStatusMessage:additionalText:platformAnalytics:additionalTextPlatformAnalytics:provenance:timing:]
// Type encoding: v84@0:8@16@24@32B40@44@52@60@68@76
// Implementation: 0x1067a7f30

// -[SCPreviewSnapSender _memoriesMediaChatSendingFormat]
// Type encoding: q16@0:8
// Implementation: 0x1067a8300

// -[SCPreviewSnapSender _shouldSendAsSnaps]
// Type encoding: B16@0:8
// Implementation: 0x1067a8320

// -[SCPreviewSnapSender _storyFraming]
// Type encoding: @16@0:8
// Implementation: 0x1067a835c

// -[SCPreviewSnapSender _userPostedTimestampsWithCount:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1067a84d0

// -[SCPreviewSnapSender postStory:storiesPostingConfig:lensAssetsUploadOperation:lensMetadataFuture:galleryStorySaver:businessIds:captureSessionId:fromPreview:fromSendTo:fromRecommend:isSendToPagePresentedFromPreview:isSnapEditor:snapDocModifyBlock:]
// Type encoding: v100@0:8@16@24@32@40@48@56@64B72B76B80B84B88@?92
// Implementation: 0x1067a85ac

// -[SCPreviewSnapSender postStoryFromMemories:storiesPostingConfig:lensAssetsUploadOperation:galleryStorySaver:businessIds:isSendToPagePresentedFromPreview:isSnapEditor:]
// Type encoding: v64@0:8@16@24@32@40@48B56B60
// Implementation: 0x1067a8878

// -[SCPreviewSnapSender _updateEphemeralCommonLoggingParameters:destinationInfo:storiesPostingConfig:businessIds:mischiefs:fromPreview:fromSendTo:isSendToPagePresentedFromPreview:importedContentId:]
// Type encoding: v76@0:8@16@24@32@40@48B56B60B64@68
// Implementation: 0x1067a8b38

// -[SCPreviewSnapSender _sendMediaWithEphemeralMedia:arroyoConversationIds:phoneNumbers:storiesPostingConfig:businessIds:messagingLocalMediaReferences:destinationInfo:showToastWhenComplete:isSendToPagePresentedFromPreview:snapDocModifyBlock:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64B72B76@?80
// Implementation: 0x1067a8c60

// -[SCPreviewSnapSender _insertStorySnapsIntoStoriesWithEphemeralMedia:creationTimestamp:storiesPostingConfig:businessIds:multiSnapInfo:isEligibleForCrossPostingSpotlightToStories:]
// Type encoding: v60@0:8@16d24@32@40@48B56
// Implementation: 0x1067aa980

// -[SCPreviewSnapSender _saveStoryThumbnailDataToThumbnailCoordinatorIfPossible:spotlightCoverTile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067ab5bc

// -[SCPreviewSnapSender _loadStoryThumbnailDataWithMedia:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1067ab79c

// -[SCPreviewSnapSender _showStatusMessage:toMassSnap:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1067ab90c

// -[SCPreviewSnapSender _showStatusMessageWithTextColor:backgroundColor:success:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1067ab9d4

// -[SCPreviewSnapSender sendQuickGroupChatMedia:conversationId:commonLoggingParams:destinationInfo:provenance:timing:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x1067abaa0

// -[SCPreviewSnapSender postStoryFromDiscover:snapSenderDataModel:lensAssetsUploadInfo:lensMetadataFuture:mischiefs:galleryStorySaver:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x1067abd78

// -[SCPreviewSnapSender _asyncStickerTasksWithEphemeralMedia:storiesPostingConfig:businessIds:showToastWhenComplete:isSendToPagePresentedFromPreview:isSnapEditor:]
// Type encoding: v52@0:8@16@24@32B40B44B48
// Implementation: 0x1067abf60

// -[SCPreviewSnapSender _createPollWithEphemeralMediaList:isSnapEditor:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1067ac1a0

// -[SCPreviewSnapSender _createStoryInviteWithEphemeralMediaList:isSnapEditor:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1067ac758

// -[SCPreviewSnapSender getDestinationInfoWithRecipientUserIds:recipientUsernames:mischiefs:usesDetailedRecipientInfo:completion:]
// Type encoding: v52@0:8@16@24@32B40@?44
// Implementation: 0x1067ace7c

// -[SCPreviewSnapSender _chatSendPlatformAnalyticsWithSource:commonLoggingParams:destinationInfo:contentShareInfo:isForwardMessage:sendToSessionId:uuid:]
// Type encoding: @68@0:8q16@24@32@40B48@52@60
// Implementation: 0x1067ad110

// -[SCPreviewSnapSender _chatSendMemoriesMetricsInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067ad2ec

// -[SCPreviewSnapSender delegate]
// Type encoding: @16@0:8
// Implementation: 0x1067ad408

// -[SCPreviewSnapSender setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067ad420

// -[SCPreviewSnapSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067ad42c

@end
