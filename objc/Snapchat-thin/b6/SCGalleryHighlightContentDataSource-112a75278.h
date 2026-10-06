// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryHighlightContentDataSource
// Superclass: NSObject
// Address: 0x112a75278

@interface SCGalleryHighlightContentDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryHighlightContentDataSource initWithCircumstanceEngine:grapheneRegistry:cloudSync:encryptedContentManager:memoriesCloudFS:memoriesProfile:memoriesDataObjectContext:keyService:galleryEncryptedDatabase:memoriesCachingMediaHelper:networker:featureSettingsService:userBlizzard:memoriesCRFeaturedStoryManager:memoriesExperimentServices:deviceInfoServices:memoriesFeaturedStoryDataMutator:memoriesSoundSyncFeaturedStoryManager:chatMediaFeaturedStoryManager:docObjectContext:memoriesUserDefaultsManager:memoriesMergedDataSource:gRPCSnapFeedService:memoriesStreamer:mashupStyleClientGenFeaturedStoriesWorkflow:memoriesFeaturedStorySnapGenerator:memoriesSnapRenderer:snapDocDownloadingService:snapDocManager:musicMediaLoader:musicSyncTrackLoader:performer:requestHeaderProvider:]
// Type encoding: @280@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272
// Implementation: 0x100b6b28c

// -[SCGalleryHighlightContentDataSource addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058a4290

// -[SCGalleryHighlightContentDataSource removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058a4298

// -[SCGalleryHighlightContentDataSource observeFeaturedEntriesDataModels]
// Type encoding: @16@0:8
// Implementation: 0x100b6c940

// -[SCGalleryHighlightContentDataSource currentFeaturedEntriesDataModels]
// Type encoding: @16@0:8
// Implementation: 0x1058a42a0

// -[SCGalleryHighlightContentDataSource _deleteExpiredFeaturedEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058a42a8

// -[SCGalleryHighlightContentDataSource updateFeaturedStoriesWithEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058a4424

// -[SCGalleryHighlightContentDataSource observeRegularFeaturedStories]
// Type encoding: @16@0:8
// Implementation: 0x1058a44c0

// -[SCGalleryHighlightContentDataSource _performUpdateFeaturedStoriesWithEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058a44e8

// -[SCGalleryHighlightContentDataSource _updatePriorityValueForFeaturedEntries:externalIdToPriorityMap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058a4874

// -[SCGalleryHighlightContentDataSource prefetchCollectionsWithContext:timeout:completionBlock:]
// Type encoding: v40@0:8Q16d24@?32
// Implementation: 0x1058a4f1c

// -[SCGalleryHighlightContentDataSource forceReRankStories]
// Type encoding: v16@0:8
// Implementation: 0x1058a602c

// -[SCGalleryHighlightContentDataSource resetViewProgressForAllFeaturedStories]
// Type encoding: v16@0:8
// Implementation: 0x1058a608c

// -[SCGalleryHighlightContentDataSource cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:]
// Type encoding: v44@0:8@16Q24B32B36B40
// Implementation: 0x1058a63c0

// -[SCGalleryHighlightContentDataSource _setup]
// Type encoding: v16@0:8
// Implementation: 0x1058a64a4

// -[SCGalleryHighlightContentDataSource _updateWithChatMediaFeaturedStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058a64e0

// -[SCGalleryHighlightContentDataSource _updateWithCRFeaturedStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058a6724

// -[SCGalleryHighlightContentDataSource _convertCRFeaturedStoryIntoSoundSyncFlashbackIfNecessary:featuredEntryDataModelsForCRFtS:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058a69e0

// -[SCGalleryHighlightContentDataSource _cleanupClientGenFeaturedStoriesInLocalDBWithEntrySource:bitMask:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x1058a6e58

// -[SCGalleryHighlightContentDataSource _cleanupClientGenFeaturedStoriesInLocalDBIfAssetsDeleted]
// Type encoding: v16@0:8
// Implementation: 0x1058a7038

// -[SCGalleryHighlightContentDataSource _fireUpdateAndSortFeaturedStories]
// Type encoding: v16@0:8
// Implementation: 0x1058a7208

// -[SCGalleryHighlightContentDataSource _allFeaturedStories]
// Type encoding: @16@0:8
// Implementation: 0x1058a73cc

// -[SCGalleryHighlightContentDataSource _setupOnFeaturedStoryDataSourceUpStream]
// Type encoding: v16@0:8
// Implementation: 0x1058a7460

// -[SCGalleryHighlightContentDataSource _fetchExistingFeaturedStoriesOrWaitUtilNextUpdateWithIsFromSetup:]
// Type encoding: v20@0:8B16
// Implementation: 0x1058a747c

// -[SCGalleryHighlightContentDataSource _fetchNewCollectionsFromServerWithContext:completionBlock:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1058a7544

// -[SCGalleryHighlightContentDataSource _fetchNewCollectionsFromServerWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1058a7d58

// -[SCGalleryHighlightContentDataSource _waitUntilNextCollectionsUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1058a8170

// -[SCGalleryHighlightContentDataSource _fetchFeaturedEntriesForProfile:removeOutdatedEntriesWithCollections:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058a842c

// -[SCGalleryHighlightContentDataSource _fetchFeaturedEntriesUsingBatchTemporaryEntrySnapFetchForProfile:removeOutdatedEntriesWithCollections:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058a87d8

// -[SCGalleryHighlightContentDataSource _updateSnapFeedSnapLevelPriorities:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058a8ce0

// -[SCGalleryHighlightContentDataSource _getServerGeneratedProcessingInfoFromCollection:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058a8e54

// -[SCGalleryHighlightContentDataSource _snapFeedSnapIdsToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x1058a9370

// -[SCGalleryHighlightContentDataSource _scheduleNewClientGenPipelineOperationsForCollections:fastPathSaveCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058a9484

// -[SCGalleryHighlightContentDataSource _serverGenSnapDocSnapIdsByCollectionIdFromCollections:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058a955c

// -[SCGalleryHighlightContentDataSource _preloadServerGenSnapMediaWithSnapIdsByCollectionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058a9924

// -[SCGalleryHighlightContentDataSource _preloadServerGenSnapMediaWithSnapIdsByCollectionId:orderedCollectionIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058a992c

// -[SCGalleryHighlightContentDataSource _preloadServerGenSnapsSequentially:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058a9d30

// -[SCGalleryHighlightContentDataSource _mixFeaturedStoriesWithCollections:snapLevelPriorities:context:completionBlock:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x1058a9e90

// -[SCGalleryHighlightContentDataSource _findNewCollectionIdsAndRemoveDeletedCollectionsWithCollections:profile:allCollectionIds:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1058aaa40

// -[SCGalleryHighlightContentDataSource _createNewCollectionsWithNewCollectionIds:allCollections:profile:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1058aaf00

// -[SCGalleryHighlightContentDataSource _numFeaturedStoriesInFirstNPositionToPrefetch]
// Type encoding: q16@0:8
// Implementation: 0x1058abe58

// -[SCGalleryHighlightContentDataSource _minNumberOfSnapsToPrefetchForAllFeaturedStories]
// Type encoding: q16@0:8
// Implementation: 0x1058abe84

// -[SCGalleryHighlightContentDataSource _preloadMediaForNewEntryIds:snapFeedSnapIdsToPrefetch:collections:context:completionBlock:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x1058abeb0

// -[SCGalleryHighlightContentDataSource _preDownloadMediaForCurrentSnapAndContinueForSnap:externalId:featuredStoryTemplateName:featuredStoryLoggingInfo:galleryCollectionCategory:numberOfSnapsToPrefetch:snapToSnapDetailMap:snaps:startTime:totalSnapCount:activationDate:expirationDate:infoArray:snapFeedSnapIdsToPrefetch:completionBlock:]
// Type encoding: v136@0:8@16@24@32@40@48q56@64@72@80Q88@96@104@112@120@?128
// Implementation: 0x1058ac86c

// -[SCGalleryHighlightContentDataSource _preloadLensIfNeededForSnapDoc:snapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058acddc

// -[SCGalleryHighlightContentDataSource _forgetPreloadedSoundSyncTrackId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1058ace9c

// -[SCGalleryHighlightContentDataSource _preloadSnapDocMediaForSnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058acee0

// -[SCGalleryHighlightContentDataSource _downloadPreloadMediaForSnap:snapDoc:snapDocKey:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1058ad394

// -[SCGalleryHighlightContentDataSource _claimPreloadedMediaForSnapDoc:snapDocKey:snapId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1058ad680

// -[SCGalleryHighlightContentDataSource _preloadSoundSyncIfNeededForMusicTrack:snapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058ad7e0

// -[SCGalleryHighlightContentDataSource _claimPreloadedMusicAudioAtURL:snapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058ada60

// -[SCGalleryHighlightContentDataSource _preloadMusicAudioIfNeededForSnapDoc:snapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058adb48

// -[SCGalleryHighlightContentDataSource _preloadMediaIfNeededForSnaps:totalSnapCount:galleryCollectionCategory:startTime:externalId:featuredStoryTemplateName:featuredStoryLoggingInfo:snapToSnapDetailMap:numberOfSnapsToPrefetch:activationDate:expirationDate:infoArray:snapFeedSnapIdsToPrefetch:completionBlock:]
// Type encoding: v128@0:8@16Q24@32@40@48@56@64@72q80@88@96@104@112@?120
// Implementation: 0x1058ae3ec

// -[SCGalleryHighlightContentDataSource _preloadMediaIfNeeded:index:numberOfSnapsToPrefetch:completionBlock:]
// Type encoding: v48@0:8@16Q24q32@?40
// Implementation: 0x1058af3e8

// -[SCGalleryHighlightContentDataSource _persistServletCollections:snapIds:snapIdsToServletSnapsMap:titleSnapIds:profile:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1058af574

// -[SCGalleryHighlightContentDataSource _logSyncEventWithTotalLatency:prefetchLatency:snapCount:prefetchSuccessCount:withBackgroundPush:galleryCollectionCategory:externalId:featuredStoryTemplateName:featuredStoryLoggingInfo:failureReason:activationDate:expirationDate:infoArray:]
// Type encoding: v116@0:8d16d24Q32Q40B48@52@60@68@76@84@92@100@108
// Implementation: 0x1058b0688

// -[SCGalleryHighlightContentDataSource _shouldFetchServerCollectionFromSetup:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1058b0aa4

// -[SCGalleryHighlightContentDataSource _shouldFetchServerCollectionBasedOnLastSyncTime:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058b0c14

// -[SCGalleryHighlightContentDataSource _updateLastSyncToNow]
// Type encoding: v16@0:8
// Implementation: 0x1058b0d6c

// -[SCGalleryHighlightContentDataSource _allSnapsExistLocally:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058b0ef0

// -[SCGalleryHighlightContentDataSource _privateOrEncryptedSnapIdsForSnapsUsingBatchFetch:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058b11c0

// -[SCGalleryHighlightContentDataSource setFeaturedStoryToBeHidden:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058b13f8

// -[SCGalleryHighlightContentDataSource _setRegularFeaturedStoryToBeHidden:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058b14d8

// -[SCGalleryHighlightContentDataSource _setCRFeaturedStoryToBeHidden:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058b17e4

// -[SCGalleryHighlightContentDataSource setSeenInCarouselForAllFeaturedStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058b18d4

// -[SCGalleryHighlightContentDataSource _setSeenInCarouselForRegularFeaturedStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058b1b60

// -[SCGalleryHighlightContentDataSource setSnapLevelItemIdViewed:storyId:playbackItemIndex:isFromSnapFeed:viewedSnapLevelItemIdsInCurrentStory:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x1058b1cec

// -[SCGalleryHighlightContentDataSource _entryChangeRequestFromCollection:profile:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058b1fd8

// -[SCGalleryHighlightContentDataSource fetchMemoriesOperaFeaturedStoriesSnapForEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058b29d8

// -[SCGalleryHighlightContentDataSource _fireGrapheneMetricsForFeatureSettingsPrefetchCallback]
// Type encoding: v16@0:8
// Implementation: 0x1058b2a60

// -[SCGalleryHighlightContentDataSource _extractSnapIdsFromServletCollection:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058b2a9c

// -[SCGalleryHighlightContentDataSource _getLocalTemporarySnapsToDeleteInEntry:entrySnaps:collectionIdToResponseSnapIdsMap:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1058b2bdc

// -[SCGalleryHighlightContentDataSource _categorizeLocalTemporaryFeaturedEntries:intoDeletedEntries:newCollectionIds:existingCollections:alreadySyncedCollectionIds:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1058b2de8

// -[SCGalleryHighlightContentDataSource _shouldKeepEntryAfterDeletingTemporarySnaps:entrySnaps:entry:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1058b3424

// -[SCGalleryHighlightContentDataSource _deleteUneditedTemporarySnapsWithoutOriginalSnapsInFeaturedEntryDataModels:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058b351c

// -[SCGalleryHighlightContentDataSource _getLocalTemporarySnapsWithoutOriginalSnapInDataModelSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058b39f4

// -[SCGalleryHighlightContentDataSource _updatedSnapFeedViewedItemIdsForSnapFeaturedStory:viewedItemIdsInCurrentStory:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058b3cb4

// -[SCGalleryHighlightContentDataSource _setSnapFeedSnapIdViewed:featuredStory:viewedSnapLevelItemIdsInCurrentStory:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1058b3fcc

// -[SCGalleryHighlightContentDataSource _setSnapIdViewed:featuredStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058b41dc

// -[SCGalleryHighlightContentDataSource _setAssetIdViewed:featuredStory:playbackItemIndex:isFromSnapFeed:viewedSnapLevelItemIdsInCurrentStory:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x1058b46a4

// -[SCGalleryHighlightContentDataSource hasFeaturedStoryWithCollectionId:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058b4798

// -[SCGalleryHighlightContentDataSource isSavingFeaturedStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058b4908

// -[SCGalleryHighlightContentDataSource willSaveFeaturedStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058b4954

// -[SCGalleryHighlightContentDataSource willSaveFeaturedStory:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058b49e8

// -[SCGalleryHighlightContentDataSource didSaveFeaturedStory:savedStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058b5058

// -[SCGalleryHighlightContentDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058b5188

@end
