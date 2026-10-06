// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryLogger
// Superclass: NSObject
// Address: 0x112a9d818

@interface SCGalleryLogger

// Property: gallerySessionCounter; attributes: T@"SCGalleryLoggerGallerySessionCounter",R,N,V_gallerySessionCounter_dont_change_ivar_properties
// Property: currentGalleryTab; attributes: TQ,V_currentGalleryTab
// Property: memoriesInitialOpenSourceBeforeBackground; attributes: Tq,N,V_memoriesInitialOpenSourceBeforeBackground
// Property: memoriesSessionIDSubject; attributes: T@"SCBehaviorSubject",&,N,V_memoriesSessionIDSubject
// Property: memoriesStorageQuotaManager; attributes: T@"SCLazy",R,N,V_memoriesStorageQuotaManager
// Property: memSessionId; attributes: T@"NSString",R,N,V_memSessionId
// Property: memTabSessionId; attributes: T@"NSString",R,N,V_memTabSessionId
// Property: notificationId; attributes: T@"NSString",&,N,V_notificationId
// Property: notificationName; attributes: T@"NSString",&,N,V_notificationName
// Property: viewSource; attributes: Tq,N,V_viewSource
// Property: isInSnapFeed; attributes: TB,N,V_isInSnapFeed
// Property: enteredMemoriesWithSnapFeed; attributes: TB,R,N,V_enteredMemoriesWithSnapFeed
// Property: memoriesOpenSource; attributes: Tq,N,V_memoriesOpenSource
// Property: snapFeedExitGesture; attributes: Tq,N,V_snapFeedExitGesture
// Property: totalSnapFeedSnapCount; attributes: Tq,N,V_totalSnapFeedSnapCount
// Property: totalSnapFeedStoryCount; attributes: Tq,N,V_totalSnapFeedStoryCount
// Property: isPaywallDisplayed; attributes: TB,N,V_isPaywallDisplayed
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryLogger gallerySnapSendWithGallerySnap:snapOverlay:entry:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:isInsideStory:smartShared:userContext:memSessionId:snapDocEditorServices:viewSource:memoriesSnapIndexInStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:captureSessionId:]
// Type encoding: @156@0:8@16@24@32q40B48@52B60B64B68B72q76@84@92q100Q108Q116Q124B132B136@140@148
// Implementation: 0x105d6510c

// -[SCGalleryLogger _populateSnapSend:withGallerySnap:snapOverlay:entry:recipientCount:mischiefIds:postToStory:isInsideStory:smartShared:playerVersion:contextMenuSource:correspondentGuids:]
// Type encoding: v100@0:8@16@24@32@40q48@56B64B68B72q76q84@92
// Implementation: 0x105d652b0

// -[SCGalleryLogger geofilterGallerySnapSendWithGallerySnap:snapOverlay:entry:recipientCount:mischiefIds:postToStory:isInsideStory:smartShared:playerVersion:userContext:memoriesSnapIndexInStory:correspondentGuids:]
// Type encoding: @100@0:8@16@24@32q40@48B56B60B64q68q76Q84@92
// Implementation: 0x105d65798

// -[SCGalleryLogger gallerySnapSendWithPHAsset:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:isInsideStory:userContext:memSessionId:memTabSessionId:viewSource:memoriesCRFeaturedStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:]
// Type encoding: @128@0:8@16q24B32@36B44B48B52q56@64@72q80@88Q96Q104B112B116@120
// Implementation: 0x105d65abc

// -[SCGalleryLogger gallerySnapSendWithSnapDocWrapper:snapOverlay:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:isInsideStory:userContext:memSessionId:snapDocEditorServices:viewSource:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:]
// Type encoding: @128@0:8@16@24q32B40@44B52B56B60q64@72@80q88Q96Q104B112B116@120
// Implementation: 0x105d65bc0

// -[SCGalleryLogger memoriesSnapMetricInfoWithGallerySnap:snapOverlay:entry:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:isInsideStory:storyCount:smartShared:userContext:isStitched:totalDuration:memSessionId:snapDocEditorServices:viewSource:memoriesSnapIndexInStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:captureSessionId:]
// Type encoding: @172@0:8@16@24@32q40B48@52B60B64B68Q72B80q84B92f96@100@108q116Q124Q132Q140B148B152@156@164
// Implementation: 0x105d65d90

// -[SCGalleryLogger memoriesSnapMetricInfoWithPHAsset:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:isInsideStory:storyCount:userContext:memSessionId:memTabSessionId:viewSource:memoriesCRFeaturedStory:importedContentId:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:]
// Type encoding: @144@0:8@16q24B32@36B44B48B52Q56q64@72@80q88@96@104Q112Q120B128B132@136
// Implementation: 0x105d66064

// -[SCGalleryLogger memoriesSnapMetricInfoWithSnapDocWrapper:snapOverlay:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:isInsideStory:storyCount:smartShared:userContext:isStitched:totalDuration:memSessionId:snapDocEditorServices:viewSource:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:]
// Type encoding: @148@0:8@16@24q32B40@44B52B56B60Q64B72q76B84f88@92@100q108Q116Q124B132B136@140
// Implementation: 0x105d661c8

// -[SCGalleryLogger _convertToSnapCommonLoggingFromSnap:snapOverlay:entry:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:isInsideStory:smartShared:storyCount:userContext:memSessionId:snapDocEditorServices:viewSource:memoriesSnapIndexInStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:captureSessionId:]
// Type encoding: @164@0:8@16@24@32q40B48@52B60B64B68B72Q76q84@92@100q108Q116Q124Q132B140B144@148@156
// Implementation: 0x105d663d4

// -[SCGalleryLogger _convertToSnapCommonLoggingFromPHAsset:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:storyCount:isInsideStory:userContext:memSessionId:memTabSessionId:viewSource:memoriesCRFeaturedStory:importedContentId:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:]
// Type encoding: @144@0:8@16q24B32@36B44B48Q52B60q64@72@80q88@96@104Q112Q120B128B132@136
// Implementation: 0x105d671d4

// -[SCGalleryLogger _convertToSnapCommonLoggingFromSnapDocWrapper:snapOverlay:entry:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:isInsideStory:smartShared:storyCount:userContext:memSessionId:snapDocEditorServices:viewSource:memoriesSnapIndexInStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:]
// Type encoding: @156@0:8@16@24@32q40B48@52B60B64B68B72Q76q84@92@100q108Q116Q124Q132B140B144@148
// Implementation: 0x105d67750

// -[SCGalleryLogger createDirectStorySend:recipientCount:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x105d68214

// -[SCGalleryLogger galleryBatchSendWithTotalCount:smartShareCount:meoCount:contextMenuSource:sendToFriend:mischiefIds:postToStory:includeSpotlight:retryCount:latencyMs:failureReason:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:]
// Type encoding: @116@0:8Q16Q24Q32q40B48@52B60B64Q68d76@84Q92Q100B108B112
// Implementation: 0x105d683f4

// -[SCGalleryLogger createStoryStoryPost:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d68570

// -[SCGalleryLogger browseSnapViewWithGallerySnap:snapOverlay:memSessionId:entry:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105d68770

// -[SCGalleryLogger geofilterBrowseSnapViewWithGallerySnap:snapOverlay:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d68b18

// -[SCGalleryLogger _fillParametersInBrowseSnapBase:withSnap:snapOverlay:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d68be0

// -[SCGalleryLogger _mediaTypeWithSnap:snapOverlay:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x105d68ffc

// -[SCGalleryLogger _snapMediaTypeWithSnap:snapOverlay:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x105d69054

// -[SCGalleryLogger _hasCaptionStylingWithSnapOverlay:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d690ac

// -[SCGalleryLogger _contextFilterSelectedSkyTypeWithSnapOverlay:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d692a0

// -[SCGalleryLogger _venueIDWithSnapOverlay:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d69468

// -[SCGalleryLogger destinationsWithSendToFriend:sendToGroup:postToStory:includeSpotlight:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:]
// Type encoding: @56@0:8B16B20B24B28Q32Q40B48B52
// Implementation: 0x105d696f4

// -[SCGalleryLogger hasGeoFiltersOrGeolensWithSnapOverlay:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d69804

// -[SCGalleryLogger encryptId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d69854

// -[SCGalleryLogger initWithDataObjectContext:graphene:unlockableViewTracker:grapheneRegistry:userTrackedLogger:networkConnectivityMonitor:bandwidthEstimator:profile:thumbnailDebugManager:featureSettingsService:applicationLifecycleEvents:snapDocEditorServices:dreamsSessionService:memoriesSearchDatabase:spectrumLogger:circumstanceEngine:userId:birthdayProvider:simpleContentFetcher:filePathManager:memoriesVisualTagAnalyzer:docObjectContext:memoriesEncryptedDatabase:locationProvider:genAiUnifiedAnalyticsService:memoriesStorageQuotaManager:faceTaggingDataProvider:]
// Type encoding: @232@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224
// Implementation: 0x105d698a4

// -[SCGalleryLogger fireSpectrumRankingSignalsForPreviewSharing:entry:phAsset:crFeaturedStory:postedToStory:recipientCount:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x105d69f9c

// -[SCGalleryLogger _getOffPlatformShareDestination:]
// Type encoding: @24@0:8q16
// Implementation: 0x105d6a91c

// -[SCGalleryLogger fireSpectrumRankingSignalsForCROffPlatformShare:phAsset:destination:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105d6a93c

// -[SCGalleryLogger fireSpectrumRankingSignalsForOffPlatformShare:destination:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105d6ae00

// -[SCGalleryLogger readMemSessionIdSynchronized]
// Type encoding: @16@0:8
// Implementation: 0x105d6b264

// -[SCGalleryLogger logDirectSnapCreateWithGallerySnap:snapOverlay:lagunaConnectivity:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105d6b388

// -[SCGalleryLogger _logGrapheneDirectSnapCreateWithSnapCommonLoggingParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d6b514

// -[SCGalleryLogger fetchVisualTagsMap:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d6b5c8

// -[SCGalleryLogger _fetchVisualTagsMap:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d6b664

// -[SCGalleryLogger _processVisualTagDataNetworkResponse:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105d6b9bc

// -[SCGalleryLogger gallerySessionCounter]
// Type encoding: @16@0:8
// Implementation: 0x105d6bb84

// -[SCGalleryLogger _createNewGallerySessionCounter]
// Type encoding: v16@0:8
// Implementation: 0x105d6bbbc

// -[SCGalleryLogger setMemTabSessionIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d6bc84

// -[SCGalleryLogger _logAndNilGallerySessionCounter]
// Type encoding: v16@0:8
// Implementation: 0x105d6bdb8

// -[SCGalleryLogger _invalidateCurrentMemoriesSession]
// Type encoding: v16@0:8
// Implementation: 0x105d6c170

// -[SCGalleryLogger viewSource]
// Type encoding: q16@0:8
// Implementation: 0x105d6c278

// -[SCGalleryLogger logGalleryInitialState]
// Type encoding: v16@0:8
// Implementation: 0x105d6c2a8

// -[SCGalleryLogger didEnterGallery:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d6c8c0

// -[SCGalleryLogger didExitGallery]
// Type encoding: v16@0:8
// Implementation: 0x105d6cb0c

// -[SCGalleryLogger setMemoriesOpenSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d6cb8c

// -[SCGalleryLogger setEnteredMemoriesWithSnapFeed]
// Type encoding: v16@0:8
// Implementation: 0x105d6cc0c

// -[SCGalleryLogger invalidateMemoriesSessionFromForeground]
// Type encoding: v16@0:8
// Implementation: 0x105d6cc38

// -[SCGalleryLogger enterOnboardingView]
// Type encoding: v16@0:8
// Implementation: 0x105d6ccac

// -[SCGalleryLogger exitOnboardingView]
// Type encoding: v16@0:8
// Implementation: 0x105d6cd14

// -[SCGalleryLogger setCurrentTab:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105d6cd78

// -[SCGalleryLogger setSearchPageMaxHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x105d6cd7c

// -[SCGalleryLogger setMaxHeight:forTab:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x105d6cdb8

// -[SCGalleryLogger _appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x105d6ce1c

// -[SCGalleryLogger _appWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x105d6ce7c

// -[SCGalleryLogger operaViewFinishLoadingForSnap:loadingLatencyInSec:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105d6cf20

// -[SCGalleryLogger operaViewFinishLoadingForPHAsset:memoriesCRFeaturedStory:loadingLatencyInSec:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x105d6d15c

// -[SCGalleryLogger operaPlaybackStallCount:firstStallMediaTime:firstStallDuration:totalStallDuration:currentlyStalled:]
// Type encoding: v52@0:8Q16d24d32d40B48
// Implementation: 0x105d6d30c

// -[SCGalleryLogger operaViewCanBeProgressiveDownload:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d6d49c

// -[SCGalleryLogger operaBrowseSnap:cacheHit:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d6d514

// -[SCGalleryLogger operaFinishViewingSnap:unlockableSnapInfo:isPrivate:timeViewedMillis:pinchToZoomMillis:maxRotationDegree:minRotationDegree:loadingLatencyInSec:isMediaLoaded:pageHeight:contextSessionId:positionIndex:viewSource:]
// Type encoding: v112@0:8@16@24B32q36d44d52d60d68B76d80@88Q96q104
// Implementation: 0x105d6d60c

// -[SCGalleryLogger operaFinishViewingCameraRollItemWithItemId:memoriesCRFeaturedStory:isImage:loadingLatencyInSec:durationInSec:pageHeight:contextSessionId:phAsset:positionIndex:viewSnapPositionIndex:timeViewedMillis:memoriesLivePhotoPlaybackStyle:viewSource:]
// Type encoding: v116@0:8@16@24B32d36d44d52@60@68Q76Q84Q92@100q108
// Implementation: 0x105d6d9dc

// -[SCGalleryLogger startStoryViewSession]
// Type encoding: v16@0:8
// Implementation: 0x105d6e464

// -[SCGalleryLogger endStoryViewSession:itemPosition:numberOfStories:viewSource:]
// Type encoding: v48@0:8@16Q24Q32q40
// Implementation: 0x105d6e55c

// -[SCGalleryLogger endStoryViewSessionWithEntryId:itemPosition:numberOfStories:viewSource:]
// Type encoding: v48@0:8@16Q24Q32q40
// Implementation: 0x105d6e654

// -[SCGalleryLogger endStoryViewSessionWithCRFeaturedStory:itemPosition:numberOfStories:viewSource:]
// Type encoding: v48@0:8@16Q24Q32q40
// Implementation: 0x105d6e7b4

// -[SCGalleryLogger _endStoryViewSessionWithActionTime:entry:itemPosition:numberOfStories:viewSource:]
// Type encoding: v56@0:8@16@24Q32Q40q48
// Implementation: 0x105d6e8ac

// -[SCGalleryLogger _endStoryViewSessionWithActionTime:crFeaturedStory:itemPosition:numberOfStories:viewSource:]
// Type encoding: v56@0:8@16@24Q32Q40q48
// Implementation: 0x105d6e974

// -[SCGalleryLogger _addToSnapFeedViewTimeIfNeeded:viewSource:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105d6edc8

// -[SCGalleryLogger _fireGalleryTrackWithSnap:unlockableSnapInfo:timeViewedMillis:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105d6ede0

// -[SCGalleryLogger _fetchFaceTagCount:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105d6eeec

// -[SCGalleryLogger _logBrowseSnapViewWithSnap:snapOverlay:playerVersion:timeViewedMillis:pinchToZoomMillis:maxRotationDegree:minRotationDegree:loadingLatencyInSec:isMediaLoaded:pageHeight:contextSessionId:memSessionId:positionIndex:viewSource:]
// Type encoding: v124@0:8@16@24q32q40d48d56d64d72B80d84@92@100Q108q116
// Implementation: 0x105d6f1ec

// -[SCGalleryLogger _logSnapViewAiFeatureAction:withGalleryEntry:gallerySnap:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x105d6fc1c

// -[SCGalleryLogger _logBrowseStoryView:viewTimeSec:itemPosition:numberOfStories:viewSource:]
// Type encoding: v56@0:8@16d24Q32Q40q48
// Implementation: 0x105d6ffbc

// -[SCGalleryLogger _logBrowseStoryView:viewTimeSec:itemPosition:numberOfStories:numberOfItems:galleryType:entrySource:externalId:clientProccessingType:viewSource:templateId:collageUCOLensId:featuredStoryTemplateName:entry:]
// Type encoding: v120@0:8@16d24Q32Q40Q48i56i60@64@72q80@88@96@104@112
// Implementation: 0x105d7040c

// -[SCGalleryLogger logBoomboxBrowseSnapView:snapOverlay:entryId:viewTimeSec:pageHeight:]
// Type encoding: v56@0:8@16@24@32d40d48
// Implementation: 0x105d7064c

// -[SCGalleryLogger didSaveToGallerySuccess:mediaType:isSpectacles:latencyInSec:]
// Type encoding: v40@0:8B16@20B28d32
// Implementation: 0x105d70878

// -[SCGalleryLogger cancelledCreateStory]
// Type encoding: v16@0:8
// Implementation: 0x105d70a0c

// -[SCGalleryLogger createStoryWithSnaps:contextMenuSourceString:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d70a50

// -[SCGalleryLogger logExitPreviewWithCommonLoggingParams:galleryEntry:gallerySnap:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d70ba0

// -[SCGalleryLogger setTabType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d70df8

// -[SCGalleryLogger logBlizzardSnapFavoriteWithAsset:isFavorite:crFeaturedStory:contextMenuSource:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x105d70e0c

// -[SCGalleryLogger logBlizzardSnapFavoriteWithSnap:entry:isFavorite:contextMenuSource:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x105d71440

// -[SCGalleryLogger setItemAsPrivate:subItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d71984

// -[SCGalleryLogger setItemAsPublic:subItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d71b40

// -[SCGalleryLogger finishPrivateGallerySetup]
// Type encoding: v16@0:8
// Implementation: 0x105d71cf0

// -[SCGalleryLogger finishPrivateGalleryForgetPasscodeFlow:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105d71db4

// -[SCGalleryLogger sendToChatBlizzardEventsWithSnaps:phAssets:conversationId:recipientCount:sendToFriend:mischiefIds:userContext:correspondentGuids:]
// Type encoding: @76@0:8@16@24@32q40B48@52q60@68
// Implementation: 0x105d71eb4

// -[SCGalleryLogger logIfSendFromGalleryWithMessageId:failureReason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d72864

// -[SCGalleryLogger _snapInfosFromSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d72a1c

// -[SCGalleryLogger logGallerySnapSendForPostToStory:snapOverlay:clientId:memSessionId:memTabSessionId:userContext:memoriesCRFeaturedStory:includeSpotlight:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:]
// Type encoding: v100@0:8@16@24@32@40@48q56@64B72Q76Q84B92B96
// Implementation: 0x105d72b78

// -[SCGalleryLogger successfulSendToChatMemoriesSnapMetricInfoOnSnapLevelWithMedia:snapOverlay:entry:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:smartShared:storyCount:isInsideStory:userContext:isStitched:totalDuration:memSessionId:memTabSessionId:viewSource:memoriesCRFeaturedStory:memoriesSnapIndexInStory:importedContentId:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:captureSessionId:]
// Type encoding: @188@0:8@16@24@32q40B48@52B60B64B68Q72B80q84B92f96@100@108q116@124Q132@140Q148Q156B164B168@172@180
// Implementation: 0x105d7372c

// -[SCGalleryLogger successfulSendToChatBlizzardEventsOnSnapLevelWithMedia:snapOverlay:entry:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:smartShared:isInsideStory:userContext:memSessionId:memTabSessionId:viewSource:memoriesCRFeaturedStory:memoriesSnapIndexInStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:captureSessionId:]
// Type encoding: @164@0:8@16@24@32q40B48@52B60B64B68B72q76@84@92q100@108Q116Q124Q132B140B144@148@156
// Implementation: 0x105d73ac0

// -[SCGalleryLogger successfulSendToChatBlizzardEventsOnGroupLevelWithMediaGroup:smartSharedSnapCount:userContext:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:]
// Type encoding: @92@0:8@16Q24q32q40B48@52B60B64Q68Q76B84B88
// Implementation: 0x105d74a2c

// -[SCGalleryLogger attemptToPostStoryToStoriesWithMediaGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d74dec

// -[SCGalleryLogger attemptToPostToStoriesFromPreview]
// Type encoding: v16@0:8
// Implementation: 0x105d74fac

// -[SCGalleryLogger attemptToSendToChatFromPreview]
// Type encoding: v16@0:8
// Implementation: 0x105d75044

// -[SCGalleryLogger addEvent:withConversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d750dc

// -[SCGalleryLogger _logSendingBlizzardEvents:failureReason:startTime:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x105d751fc

// -[SCGalleryLogger logGalleryCollectionAction:entry:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105d754b4

// -[SCGalleryLogger logGalleryCollectionSnapClientStart:imageCount:videoCount:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d75614

// -[SCGalleryLogger logGalleryCollectionSnapClientCreate:isGenerated:errorInfo:generatedSnapsCount:totalGenerationsCount:clientExpectedTotalGenerationsCount:imageCount:videoCount:]
// Type encoding: v76@0:8@16B24@28@36Q44Q52@60@68
// Implementation: 0x105d756f8

// -[SCGalleryLogger _constructGalleryCollectionSnapClientEventWithEventDataModel:event:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d75934

// -[SCGalleryLogger importPHAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d75be0

// -[SCGalleryLogger memoriesDataObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x105d75c9c

// -[SCGalleryLogger currentMemoriesTab]
// Type encoding: Q16@0:8
// Implementation: 0x105d75ca4

// -[SCGalleryLogger logGalleryLowDiskAlertWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d75ca8

// -[SCGalleryLogger logSnapTabLoadLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x105d75da4

// -[SCGalleryLogger logStoriesTabLoadLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x105d75e10

// -[SCGalleryLogger logCameraRollTabLoadLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x105d75f04

// -[SCGalleryLogger lensInfoForSnapOverlay:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d75f70

// -[SCGalleryLogger shouldEntryTypeBeDreams:]
// Type encoding: B24@0:8q16
// Implementation: 0x105d75fb8

// -[SCGalleryLogger mediaDownloadEntityRequestCompelte:canceled:latency:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x105d75fd8

// -[SCGalleryLogger retrieveImageWithStep:generationId:latency:]
// Type encoding: v40@0:8Q16@24d32
// Implementation: 0x105d76114

// -[SCGalleryLogger SCAMediaTypeOfItem:subItems:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x105d761d0

// -[SCGalleryLogger _galleryInitialStateMetricWithMetric:connectivityStatus:backupOnCellularEnabled:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x105d763b4

// -[SCGalleryLogger _shouldReportBlizzardEvent:]
// Type encoding: B24@0:8d16
// Implementation: 0x105d76488

// -[SCGalleryLogger logAddLensBannerImpression:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d76494

// -[SCGalleryLogger logBrowseFromCameraRollCameraMediaPickerWithItemIndex:entryId:lensId:lensSource:lensSessionId:mediaType:]
// Type encoding: v64@0:8q16@24@32q40@48q56
// Implementation: 0x105d76508

// -[SCGalleryLogger _logBrowseFromCameraRollCameraMediaPickerWithItemIndex:entryId:lensId:lensSource:lensSessionId:mediaType:]
// Type encoding: v64@0:8q16@24@32q40@48q56
// Implementation: 0x105d76620

// -[SCGalleryLogger dreamsSessionId]
// Type encoding: @16@0:8
// Implementation: 0x105d76780

// -[SCGalleryLogger logGalleryOperaExitWithViewSource:snapFeedExitSnapPos:snapFeedExitStoryPos:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x105d767e8

// -[SCGalleryLogger _logGalleryOperaExit:snapFeedExitStoryPos:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105d7685c

// -[SCGalleryLogger logScreenshotEventWithMediaType:snapId:galleryCollectionId:galleryCollectionCategory:clientProcessingType:groupName:]
// Type encoding: v64@0:8q16@24@32@40q48@56
// Implementation: 0x105d76960

// -[SCGalleryLogger _userLocation]
// Type encoding: @16@0:8
// Implementation: 0x105d76b20

// -[SCGalleryLogger logGallerySnapSelectWithEntryAction:exitAction:videoCreateSessionId:snapCount:cameraRollCount:imageCount:videoCount:source:]
// Type encoding: v80@0:8q16q24@32q40q48q56q64q72
// Implementation: 0x105d76bc8

// -[SCGalleryLogger logGalleryVideoCreateActionWithType:videoCreateSessionId:lensId:soundId:templateSource:contextSessionId:sessionTimeDuration:imageCount:videoCount:latencyMs:]
// Type encoding: v96@0:8q16@24@32@40q48@56@64@72@80@88
// Implementation: 0x105d76d50

// -[SCGalleryLogger memSessionId]
// Type encoding: @16@0:8
// Implementation: 0x105d77018

// -[SCGalleryLogger memTabSessionId]
// Type encoding: @16@0:8
// Implementation: 0x105d77020

// -[SCGalleryLogger setViewSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d77028

// -[SCGalleryLogger notificationId]
// Type encoding: @16@0:8
// Implementation: 0x105d77030

// -[SCGalleryLogger setNotificationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d77038

// -[SCGalleryLogger notificationName]
// Type encoding: @16@0:8
// Implementation: 0x105d77068

// -[SCGalleryLogger setNotificationName:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d77070

// -[SCGalleryLogger isInSnapFeed]
// Type encoding: B16@0:8
// Implementation: 0x105d770a0

// -[SCGalleryLogger setIsInSnapFeed:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d770a8

// -[SCGalleryLogger enteredMemoriesWithSnapFeed]
// Type encoding: B16@0:8
// Implementation: 0x105d770b0

// -[SCGalleryLogger memoriesOpenSource]
// Type encoding: q16@0:8
// Implementation: 0x105d770b8

// -[SCGalleryLogger memoriesInitialOpenSourceBeforeBackground]
// Type encoding: q16@0:8
// Implementation: 0x105d770c0

// -[SCGalleryLogger setMemoriesInitialOpenSourceBeforeBackground:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d770c8

// -[SCGalleryLogger snapFeedExitGesture]
// Type encoding: q16@0:8
// Implementation: 0x105d770d0

// -[SCGalleryLogger setSnapFeedExitGesture:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d770d8

// -[SCGalleryLogger totalSnapFeedSnapCount]
// Type encoding: q16@0:8
// Implementation: 0x105d770e0

// -[SCGalleryLogger setTotalSnapFeedSnapCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d770e8

// -[SCGalleryLogger totalSnapFeedStoryCount]
// Type encoding: q16@0:8
// Implementation: 0x105d770f0

// -[SCGalleryLogger setTotalSnapFeedStoryCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d770f8

// -[SCGalleryLogger isPaywallDisplayed]
// Type encoding: B16@0:8
// Implementation: 0x105d77100

// -[SCGalleryLogger setIsPaywallDisplayed:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d77108

// -[SCGalleryLogger memoriesSessionIDSubject]
// Type encoding: @16@0:8
// Implementation: 0x105d77110

// -[SCGalleryLogger setMemoriesSessionIDSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d77118

// -[SCGalleryLogger currentGalleryTab]
// Type encoding: Q16@0:8
// Implementation: 0x105d77148

// -[SCGalleryLogger setCurrentGalleryTab:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105d77150

// -[SCGalleryLogger memoriesStorageQuotaManager]
// Type encoding: @16@0:8
// Implementation: 0x105d77158

// -[SCGalleryLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d77160

@end
