// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGallerySendItemsTask
// Superclass: NSObject
// Address: 0x112b3a1b8

@interface SCGallerySendItemsTask

// Property: delegate; attributes: T@"<SCGallerySendItemsTaskDelegate>",W,N,V_delegate
// Property: mediaGroups; attributes: T@"NSArray",R,C,N,V_mediaGroups
// Property: cloudFiles; attributes: T@"NSDictionary",R,C,N,V_cloudFiles
// Property: userContext; attributes: Tq,R,N,V_userContext
// Property: shouldNavigateToSpotlight; attributes: T@"NSNumber",&,N,V_shouldNavigateToSpotlight
// Property: isCreatePostFlow; attributes: TB,N,V_isCreatePostFlow
// Property: sendToSessionId; attributes: T@"NSString",C,N,V_sendToSessionId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGallerySendItemsTask initWithSendableMediaGroups:cloudFiles:assetCloudFiles:entryLevelSnapDocMap:snapLevelSnapDocMap:legacyEagerSendTranscoder:musicMediaLoader:sendItemsCounter:shouldShowToast:userContext:userSession:cachingMediaManager:cloudFS:dataObjectContext:encryptedContentManager:galleryEncryptedDatabase:galleryLogger:mergedDataSource:networker:autoSaveMutating:cameraActiveVideoPaths:circumstanceEngine:conversationDestinationParser:customStoriesDataFetcher:customStoriesDataMutator:ephemeralMediaFactory:spotlightNavigationService:memoriesAutosaveMigrator:galleryStorySaver:galleryMediaSender:imageProcessCommandProvider:legacyEphemeralMediaFactory:snapchattersSynchronousDataFetcher:legacyGalleryStorySaver:lensAssetsDeliveryServices:myStoriesDataCoordinator:memoriesStoryMessageSender:previewCameraSourceOverlayService:previewAssetVideoProviderFactory:previewURLVideoProviderFactory:reverseAudioCache:snapchatterPublicInfoFetcher:userTrackedLogger:videoImporter:imageImporter:targetTrajectoryFactory:inviteService:shareYoursClient:snapDocManager:snapVideoFilterScopeExposer:memoriesMediaRetriever:memoriesTranscodingHelper:memoriesCachingMediaHelper:memoriesSnapDocSaveManager:memoriesSaveManager:memoriesExperimentService:memoriesSnapDocTranscodingManager:memoriesSnapDocParser:assetIdToCRFeaturedStory:usernameToSnapchatterFetcher:creativeToolsMemoriesResources:snapDocEditorServices:previewSnapSenderFactory:grapheneRegistry:genAIDreamsService:docObjectContext:dreamsSessionManager:genAiAnalyticsService:previewABProvider:spotlightAutoShareService:sendToMassSnapNotificationService:valdiRuntimeProvider:memoriesTweaksServices:]
// Type encoding: @596@0:8@16@24@32@40@48@56@64@72B80q84@92@100@108@116@124@132@140@148@156@164@172@180@188@196@204@212@220@228@236@244@252@260@268@276@284@292@300@308@316@324@332@340@348@356@364@372@380@388@396@404@412@420@428@436@444@452@460@468@476@484@492@500@508@516@524@532@540@548@556@564@572@580@588
// Implementation: 0x106dceef4

// -[SCGallerySendItemsTask sendToRecipientUsernames:recipientUserIds:massSnapRecipients:storiesPostingConfig:businessIds:mischiefs:additionalText:shouldAutoShareSpotlight:isEligibleForCrossPostingSpotlightToStories:spotlightThumbnailFuture:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64B72B76@80
// Implementation: 0x106dd0330

// -[SCGallerySendItemsTask _sendToSortedRecipients]
// Type encoding: v16@0:8
// Implementation: 0x106dd0680

// -[SCGallerySendItemsTask _fillInCounterForInitialCounts]
// Type encoding: v16@0:8
// Implementation: 0x106dd0eb4

// -[SCGallerySendItemsTask _processOneMessageForChatOrStoryWithClientMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106dd0f20

// -[SCGallerySendItemsTask _processOnePendingMediaGroupForGroupChatOrAttachmentWithClientMessageId:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dd10a8

// -[SCGallerySendItemsTask _notifyPublicStoryStateIfAbleWith:]
// Type encoding: v24@0:8q16
// Implementation: 0x106dd1428

// -[SCGallerySendItemsTask _storeCaptureSessionId:forMediaId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dd1490

// -[SCGallerySendItemsTask _prepareUploadableChatMediasForGalleryMedias:index:clientMessageId:preparedUploadableChatMedias:completionBlock:]
// Type encoding: v56@0:8@16q24@32@40@?48
// Implementation: 0x106dd1500

// -[SCGallerySendItemsTask _createUploadableChatMediaWithGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dd17f0

// -[SCGallerySendItemsTask _createUploadableChatMediaWithSnapDocWrapper:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dd1b34

// -[SCGallerySendItemsTask _createUploadableChatMediaWithPhotoAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dd1b94

// -[SCGallerySendItemsTask _prepareUploadableChatMediaForGalleryMedia:clientMessageId:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106dd1d84

// -[SCGallerySendItemsTask _getChatMediaSnapMetadataWithCompletion:snapDetailId:overlay:ctItems:lensId:contextClientInfo:completion:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x106dd25fc

// -[SCGallerySendItemsTask _getChatMediaSnapMetadataWithCompletion:snapDetailId:overlay:ctItems:lensId:musicTrackId:contextClientInfo:completion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@?72
// Implementation: 0x106dd2a6c

// -[SCGallerySendItemsTask _freshTranscodeChatVideoForSnap:chatVideo:cloudFile:captureSessionId:useWebP:webPQuality:completionBlock:]
// Type encoding: v68@0:8@16@24@32@40B48d52@?60
// Implementation: 0x106dd3c00

// -[SCGallerySendItemsTask _prepareUploadableChatMedia:withGallerySnap:snapDetail:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106dd3f10

// -[SCGallerySendItemsTask _prepareUploadableChatMediaForSnapDoc:gallerySnap:snapMetadata:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106dd5488

// -[SCGallerySendItemsTask _prepareUploadableChatImageForSnapDoc:gallerySnap:snapMetadata:venueId:image:completionBlock:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x106dd5a48

// -[SCGallerySendItemsTask _prepareUploadableChatVideoForSnapDoc:gallerySnap:snapMetadata:venueId:videoURL:overlayImage:completionBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x106dd5be4

// -[SCGallerySendItemsTask _prepareUploadableChatMedia:withPhotoAsset:memoriesCRFeaturedStory:clientMessageId:completionBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106dd5e68

// -[SCGallerySendItemsTask _gallerySnapDetailForGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dd6cd4

// -[SCGallerySendItemsTask _globalOverlayForEntryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dd6cec

// -[SCGallerySendItemsTask _globalOverlayForSnapId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dd6d80

// -[SCGallerySendItemsTask _globalOverlayForSnapDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dd6e14

// -[SCGallerySendItemsTask _globalOverlayForGalleryMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dd6ef0

// -[SCGallerySendItemsTask _finishPrepareWithUploadableChatVideo:videoURL:rotationOrientation:clientMessageId:captureSessionId:error:completionBlock:]
// Type encoding: v72@0:8@16@24q32@40@48@56@?64
// Implementation: 0x106dd70bc

// -[SCGallerySendItemsTask _createMediaSendTaskWithMediaGroup:uploadableChatMedias:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106dd744c

// -[SCGallerySendItemsTask _createSnapMetricsForGalleryMedia:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:storyCount:isInsideStory:mediaGroup:uploadableChatMedias:isStitched:totalDuration:]
// Type encoding: @88@0:8@16Q24B32@36B44B48q52B60@64@72B80f84
// Implementation: 0x106dd79d8

// -[SCGallerySendItemsTask _createMediaSendTaskWithMediaGroup:clientMessageId:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106dd8188

// -[SCGallerySendItemsTask _createMediaSendTaskWithoutStitchingWithMediaGroup:clientMessageId:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106dd87b8

// -[SCGallerySendItemsTask _createChatMediaFromVideoUrl:firstSnap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106dd8978

// -[SCGallerySendItemsTask _updateChatMediasForArroyoWithMediaGroup:chatMedias:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dd8dc4

// -[SCGallerySendItemsTask _processAndPostOnePendingGalleryMediaForStoryWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106dd8fd4

// -[SCGallerySendItemsTask _sendGenAIAnalyticsIfApplicable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106dd93f0

// -[SCGallerySendItemsTask _createGenAIFeatureActionParamsWithEntry:snap:isAISnapsTab:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106dd98b4

// -[SCGallerySendItemsTask _autoSaveSnap:savingAsDraft:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106dd9ab8

// -[SCGallerySendItemsTask _shouldCreateEphemeralMediaAndNavigateToSpotlight:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dda528

// -[SCGallerySendItemsTask _spotlightWidgetThumbnailFuture]
// Type encoding: @16@0:8
// Implementation: 0x106dda7c8

// -[SCGallerySendItemsTask _shouldNavigateToSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x106dda89c

// -[SCGallerySendItemsTask _wrappedCompletionHandlerForSpotlightNavigation:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x106dda96c

// -[SCGallerySendItemsTask _isFromCameraRollForGalleryMedia:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ddac44

// -[SCGallerySendItemsTask _creationDateForGalleryMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ddad14

// -[SCGallerySendItemsTask _handleOneGalleryMediaEphemeral:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ddae64

// -[SCGallerySendItemsTask _handleMultiGalleryEphemerals:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ddb5b4

// -[SCGallerySendItemsTask _createEphermalMediasForGalleryMedia:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106ddbde4

// -[SCGallerySendItemsTask _fetchLocationForMedia:snapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ddc7cc

// -[SCGallerySendItemsTask _createEphemeralMediaWithPhotoSnap:ephemeralMedia:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106ddc878

// -[SCGallerySendItemsTask _galleryStoreStoryWithSnapDetail:originalPhoto:photoSnapOverlayFormat:ephemeralMediaClientId:photoSnap:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x106dddb8c

// -[SCGallerySendItemsTask _fetchImageForPhotoSnap:snapDetail:resultHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106dddd1c

// -[SCGallerySendItemsTask _logGallerySnapSendForEphemeralMedia:snapDetail:clientId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106dddf5c

// -[SCGallerySendItemsTask _createEphemeralMediaWithSnapDocWrapper:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dde098

// -[SCGallerySendItemsTask _createEphemeralMediaWithSnapDocBasedSnap:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dde1e0

// -[SCGallerySendItemsTask _createEphemeralMediaWithSnap:snapDoc:totalDuration:completionHandler:]
// Type encoding: v44@0:8@16@24f32@?36
// Implementation: 0x106dde2b4

// -[SCGallerySendItemsTask _createEphemeralMediaWithImage:snapDoc:snap:snapDetail:entry:venueId:firstEphemeralMedia:completionHandler:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@?72
// Implementation: 0x106ddeae4

// -[SCGallerySendItemsTask _createEphemeralMediaWithVideoURL:overlayImage:snapDoc:snap:snapDetail:entry:venueId:firstEphemeralMedia:completionHandler:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@72@?80
// Implementation: 0x106dded64

// -[SCGallerySendItemsTask _createEphemeralMediaWithSegmentedVideoURLs:overlayImageData:snapDoc:snap:snapDetail:entry:mediaType:venueId:firstEphemeralMedia:completionHandler:]
// Type encoding: v96@0:8@16@24@32@40@48@56q64@72@80@?88
// Implementation: 0x106ddf210

// -[SCGallerySendItemsTask _createMedialessEphemeralMediaForSnap:snapDetail:entry:mediaType:venueId:duration:]
// Type encoding: @64@0:8@16@24@32q40@48d56
// Implementation: 0x106ddf5a8

// -[SCGallerySendItemsTask _createEphemeralMediaWithVideoSnap:ephemeralMedia:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106ddf9b4

// -[SCGallerySendItemsTask _createEphemeralMediasWithLongVideoSnap:ephemeralMedia:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106de0804

// -[SCGallerySendItemsTask _createEphemeralMediaWithPhotoMemoriesSendPHAsset:ephemeralMedia:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106de0fcc

// -[SCGallerySendItemsTask _createEphemeralMediasWithVideoMemoriesSendPHAsset:ephemeralMedia:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106de1d70

// -[SCGallerySendItemsTask _isPostingToSpotlightOnly]
// Type encoding: B16@0:8
// Implementation: 0x106de20c4

// -[SCGallerySendItemsTask _createEphemeralMediasWithLongVideoSnapFromCameraRoll:ephemeralMedia:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106de2138

// -[SCGallerySendItemsTask _processPendingUrlsForVideoAssetWithCompletionHandler:userSendStartTimestamp:videoAssetOrientation:ephemeralMedia:embeddedMetadata:externalMediaSource:creationTime:]
// Type encoding: v68@0:8@?16d24q32@40@48i56@60
// Implementation: 0x106de2440

// -[SCGallerySendItemsTask _processPendingUrlsForLongSnapSegmentsWithCompletionHandler:longVideoSnap:longVideoSnapDetail:ephemeralMedia:overlayDataToUpload:]
// Type encoding: v56@0:8@?16@24@32@40@48
// Implementation: 0x106de3238

// -[SCGallerySendItemsTask _loadMusicSelectionForSnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106de3c98

// -[SCGallerySendItemsTask _platformAnalyticsWithSnapMetricInfos:clientMessageId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106de3e40

// -[SCGallerySendItemsTask _additionalTextPlatformAnalytics]
// Type encoding: @16@0:8
// Implementation: 0x106de3fa0

// -[SCGallerySendItemsTask _destinationInfo]
// Type encoding: @16@0:8
// Implementation: 0x106de4028

// -[SCGallerySendItemsTask _loadEditorCommonLoggingParamsFromValdiWithSnapDocData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106de4070

// -[SCGallerySendItemsTask _sendAllMediasForArroyoWithClientMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106de42a8

// -[SCGallerySendItemsTask _memoriesMediaChatSendingFormatWithMemoriesSnapMetricInfo:]
// Type encoding: q24@0:8@16
// Implementation: 0x106de4d44

// -[SCGallerySendItemsTask _shouldSendAsSnapsWithMemoriesSnapMetricInfo:]
// Type encoding: B24@0:8@16
// Implementation: 0x106de4d64

// -[SCGallerySendItemsTask _applySendToLoggingParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x106de4f58

// -[SCGallerySendItemsTask _processEphemeralMediaForStory:galleryMedia:creationDate:isFromCameraRoll:completionQueue:completion:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x106de5020

// -[SCGallerySendItemsTask _postStoryWithEphemeralMedia:creationDate:isFromCameraRoll:lensAssetsUploadOperation:storyPostTimestamp:completionHandler:]
// Type encoding: v60@0:8@16@24B32@36@44@?52
// Implementation: 0x106de6a44

// -[SCGallerySendItemsTask didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106de7554

// -[SCGallerySendItemsTask _monitorPostingStateChangeWithClientId:postingState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106de777c

// -[SCGallerySendItemsTask galleryMediaGroupDidSend:didSucceed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106de7858

// -[SCGallerySendItemsTask galleryMediaDidPost:didSucceed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106de7888

// -[SCGallerySendItemsTask galleryMediaDidSendSnap:didSucceed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106de78e8

// -[SCGallerySendItemsTask _ephemeralDidPost:didSucceed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106de7918

// -[SCGallerySendItemsTask _showToastIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106de7b2c

// -[SCGallerySendItemsTask isWidgetEnabledAndPostingToSpotlightOnly]
// Type encoding: B16@0:8
// Implementation: 0x106de7dc8

// -[SCGallerySendItemsTask _showSentToast:]
// Type encoding: v24@0:8@16
// Implementation: 0x106de7dfc

// -[SCGallerySendItemsTask _showSentErrorToast:]
// Type encoding: v24@0:8@16
// Implementation: 0x106de7ecc

// -[SCGallerySendItemsTask _initEndToEndSendingMetrics]
// Type encoding: v16@0:8
// Implementation: 0x106de7f90

// -[SCGallerySendItemsTask _reportEndToEndSendingMetricsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106de8010

// -[SCGallerySendItemsTask _reportEndToEndBlizzardEvent]
// Type encoding: v16@0:8
// Implementation: 0x106de80e8

// -[SCGallerySendItemsTask failureReasonWithPostingState:]
// Type encoding: @24@0:8q16
// Implementation: 0x106de83f0

// -[SCGallerySendItemsTask _storyPostCount]
// Type encoding: Q16@0:8
// Implementation: 0x106de8418

// -[SCGallerySendItemsTask _chatMessageCount]
// Type encoding: Q16@0:8
// Implementation: 0x106de8564

// -[SCGallerySendItemsTask _willSendMediaAsGroupChat]
// Type encoding: B16@0:8
// Implementation: 0x106de85c0

// -[SCGallerySendItemsTask _willSendMediaAsDirectChat]
// Type encoding: B16@0:8
// Implementation: 0x106de85e0

// -[SCGallerySendItemsTask _willSendMediaAsArroyoChat]
// Type encoding: B16@0:8
// Implementation: 0x106de8600

// -[SCGallerySendItemsTask _willSendMediaToMassSnap]
// Type encoding: B16@0:8
// Implementation: 0x106de8620

// -[SCGallerySendItemsTask _willSendToChat]
// Type encoding: B16@0:8
// Implementation: 0x106de8640

// -[SCGallerySendItemsTask _willPostToStories]
// Type encoding: B16@0:8
// Implementation: 0x106de8680

// -[SCGallerySendItemsTask _storyDestinationIncludeSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x106de86c0

// -[SCGallerySendItemsTask _storyDestinationCount]
// Type encoding: q16@0:8
// Implementation: 0x106de8728

// -[SCGallerySendItemsTask _transcodingMediaDestinationInfo]
// Type encoding: @16@0:8
// Implementation: 0x106de875c

// -[SCGallerySendItemsTask _linkToTemporaryMp4FileFromURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x106de87c4

// -[SCGallerySendItemsTask _memoriesCRFeaturedStoryFromGalleryMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x106de88c0

// -[SCGallerySendItemsTask copy]
// Type encoding: @16@0:8
// Implementation: 0x106de898c

// -[SCGallerySendItemsTask _shouldReadMetadataFromImage:]
// Type encoding: B24@0:8@16
// Implementation: 0x106de8cb0

// -[SCGallerySendItemsTask _shouldAutosaveStoryToMemories]
// Type encoding: B16@0:8
// Implementation: 0x106de8d08

// -[SCGallerySendItemsTask _maxImageEdgeLengthForUploadAsset:]
// Type encoding: d24@0:8@16
// Implementation: 0x106de8e1c

// -[SCGallerySendItemsTask delegate]
// Type encoding: @16@0:8
// Implementation: 0x106de8e28

// -[SCGallerySendItemsTask setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106de8e40

// -[SCGallerySendItemsTask mediaGroups]
// Type encoding: @16@0:8
// Implementation: 0x106de8e4c

// -[SCGallerySendItemsTask cloudFiles]
// Type encoding: @16@0:8
// Implementation: 0x106de8e54

// -[SCGallerySendItemsTask userContext]
// Type encoding: q16@0:8
// Implementation: 0x106de8e5c

// -[SCGallerySendItemsTask shouldNavigateToSpotlight]
// Type encoding: @16@0:8
// Implementation: 0x106de8e64

// -[SCGallerySendItemsTask setShouldNavigateToSpotlight:]
// Type encoding: v24@0:8@16
// Implementation: 0x106de8e6c

// -[SCGallerySendItemsTask isCreatePostFlow]
// Type encoding: B16@0:8
// Implementation: 0x106de8e9c

// -[SCGallerySendItemsTask setIsCreatePostFlow:]
// Type encoding: v20@0:8B16
// Implementation: 0x106de8ea4

// -[SCGallerySendItemsTask sendToSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106de8eac

// -[SCGallerySendItemsTask setSendToSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106de8eb4

// -[SCGallerySendItemsTask .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106de8ebc

// +[SCGallerySendItemsTask sendableMediaGroupsWithGalleryItems:gallerySnaps:orderedGallerySnaps:memoriesTweaksServices:sendableMediaGroupsRef:createStatusRef:dataObjectContext:circumstanceEngine:galleryLogger:mergedDataSource:assetIdToCRFeaturedStory:]
// Type encoding: v104@0:8@16@24@32@40^@48^q56@64@72@80@88@96
// Implementation: 0x106dce08c

// +[SCGallerySendItemsTask sharedPerformer]
// Type encoding: @16@0:8
// Implementation: 0x106dd0264

@end
