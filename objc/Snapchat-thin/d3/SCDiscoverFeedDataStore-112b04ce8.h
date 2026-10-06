// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedDataStore
// Superclass: NSObject
// Address: 0x112b04ce8

@interface SCDiscoverFeedDataStore

// Property: diskCacheLoadingState; attributes: TQ,N,V_diskCacheLoadingState
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: sectionDataModelsByFeedType; attributes: T@"NSDictionary",R,C,N
// Property: sectionMetadataByFeedType; attributes: T@"NSDictionary",R,C,N
// Property: sections; attributes: T@"NSArray",R,C,N
// Property: feedTypes; attributes: T@"NSArray",R,C,N
// Property: diskCacheLoadingStateObservable; attributes: T@"SCObservable",R,N

// -[SCDiscoverFeedDataStore addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068d3040

// -[SCDiscoverFeedDataStore removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068d3048

// -[SCDiscoverFeedDataStore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068d3050

// -[SCDiscoverFeedDataStore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068d3058

// -[SCDiscoverFeedDataStore initWithDocObjectContext:discoverFeedRanker:interactionHistoryManager:snapReadReceiptCoordinator:creatorSettingsDataTracker:creatorSettingsFetcher:creatorSettingsMutator:circumstanceEngine:networkConnectivityMonitor:storiesConfigProvider:contentFeedRepository:storiesBlizzardLogger:discoverCrashLogger:spotlightUsageTracker:userPreferences:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x1068d3060

// -[SCDiscoverFeedDataStore diskCacheLoadingStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x1068d3758

// -[SCDiscoverFeedDataStore sectionMetadataByFeedType]
// Type encoding: @16@0:8
// Implementation: 0x1068d3780

// -[SCDiscoverFeedDataStore sectionDataModelsByFeedType]
// Type encoding: @16@0:8
// Implementation: 0x1068d38e0

// -[SCDiscoverFeedDataStore feedTypes]
// Type encoding: @16@0:8
// Implementation: 0x1068d3a28

// -[SCDiscoverFeedDataStore feedIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x1068d3b40

// -[SCDiscoverFeedDataStore _defaultFeedIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x1068d3c48

// -[SCDiscoverFeedDataStore _defaultSectionMetadataForFeedIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068d3cb8

// -[SCDiscoverFeedDataStore _setFeedIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068d3f34

// -[SCDiscoverFeedDataStore sections]
// Type encoding: @16@0:8
// Implementation: 0x1068d4078

// -[SCDiscoverFeedDataStore querySectionMetadataWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068d42a8

// -[SCDiscoverFeedDataStore setSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068d457c

// -[SCDiscoverFeedDataStore updateWithSectionMetadata:allFeedTypesToKeep:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1068d4688

// -[SCDiscoverFeedDataStore sectionDataModelForFeedType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1068d4bb8

// -[SCDiscoverFeedDataStore indexForStory:inFeedType:]
// Type encoding: Q32@0:8@16Q24
// Implementation: 0x1068d4d3c

// -[SCDiscoverFeedDataStore indexForStoryDedupeFp:inFeedType:]
// Type encoding: Q32@0:8Q16Q24
// Implementation: 0x1068d4d70

// -[SCDiscoverFeedDataStore loadCachedStoriesForAllFeedTypesWithQuerySource:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068d4f6c

// -[SCDiscoverFeedDataStore fullyViewedPromotedStoriesObservable]
// Type encoding: @16@0:8
// Implementation: 0x1068d50a0

// -[SCDiscoverFeedDataStore _loadCachedStoriesForAllFeedTypesWithQuerySource:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068d50c8

// -[SCDiscoverFeedDataStore loadCachedStoriesForFeedType:querySource:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068d580c

// -[SCDiscoverFeedDataStore _loadCachedStoriesForFeedType:querySource:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068d5974

// -[SCDiscoverFeedDataStore queryStoryDeltaInfoWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068d6164

// -[SCDiscoverFeedDataStore accessDataOnPerformer:completionQueue:completion:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x1068d6518

// -[SCDiscoverFeedDataStore saveSectionsWithMutationBlock:completionQueue:completion:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x1068d66cc

// -[SCDiscoverFeedDataStore appendSectionWithMutationBlock:completionQueue:completion:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x1068d6890

// -[SCDiscoverFeedDataStore amendUpNextDefaultPlaylist:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068d6a54

// -[SCDiscoverFeedDataStore prependStories:forFeedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1068d6bd4

// -[SCDiscoverFeedDataStore appendStories:forFeedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1068d6d08

// -[SCDiscoverFeedDataStore saveStories:forFeedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1068d6e3c

// -[SCDiscoverFeedDataStore updateStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068d6f70

// -[SCDiscoverFeedDataStore updateStories:updateCreatorSettings:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1068d6f78

// -[SCDiscoverFeedDataStore removeStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068d70c0

// -[SCDiscoverFeedDataStore deleteExpiredSnaps]
// Type encoding: v16@0:8
// Implementation: 0x1068d71cc

// -[SCDiscoverFeedDataStore updateStoryWithCreator:isPublisher:isSubscribed:isOptedInNotification:isHidden:]
// Type encoding: v40@0:8@16B24B28B32B36
// Implementation: 0x1068d7b0c

// -[SCDiscoverFeedDataStore removeStories:forFeedType:flushAllImpressions:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x1068d7cf4

// -[SCDiscoverFeedDataStore unsubscribeStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068d7e28

// -[SCDiscoverFeedDataStore removeStoriesByStoriesDedupFp:forFeedType:completionQueue:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x1068d7f50

// -[SCDiscoverFeedDataStore removeStoriesByCreatorId:similarStoryIdFpsArray:feedTypes:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068d80c8

// -[SCDiscoverFeedDataStore removeSubfeedForFeedType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1068d8230

// -[SCDiscoverFeedDataStore replaceStory:withNewStory:inFeedType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1068d8378

// -[SCDiscoverFeedDataStore _replaceStoryOnPerformer:withNewStory:inFeedType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1068d851c

// -[SCDiscoverFeedDataStore storiesCache]
// Type encoding: @16@0:8
// Implementation: 0x1068d8930

// -[SCDiscoverFeedDataStore triggerLoadedStoriesFromDiskIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1068d8958

// -[SCDiscoverFeedDataStore loadStoriesFromDiskWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1068d8ac4

// -[SCDiscoverFeedDataStore _loadStoriesFromClientSQLWithStartTime:completion:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x1068d8c60

// -[SCDiscoverFeedDataStore _loadDBRecordsIntoMemoryWithFeeds:cards:feedCardRanks:preservedStories:startTime:completion:]
// Type encoding: v64@0:8@16@24@32@40d48@?56
// Implementation: 0x1068d9128

// -[SCDiscoverFeedDataStore storyWithCompositeStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068da26c

// -[SCDiscoverFeedDataStore storyWithDedupeFp:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1068da524

// -[SCDiscoverFeedDataStore assertQueuePerformer]
// Type encoding: v16@0:8
// Implementation: 0x1068da66c

// -[SCDiscoverFeedDataStore storyWithDedupeFpOnPerformer:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1068da670

// -[SCDiscoverFeedDataStore storiesWithStoryDedupeFpsOnPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068da6c8

// -[SCDiscoverFeedDataStore allStoriesForFeedTypeOnPerformer:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1068da754

// -[SCDiscoverFeedDataStore allStoriesForFeedTypesOnPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068da870

// -[SCDiscoverFeedDataStore allStoriesOnPerformer]
// Type encoding: @16@0:8
// Implementation: 0x1068daa74

// -[SCDiscoverFeedDataStore updateStoriesOnPerformer:feedType:isFromMetadataPrefetch:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x1068daa7c

// -[SCDiscoverFeedDataStore appendStoriesOnPerformer:feedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1068daad8

// -[SCDiscoverFeedDataStore storyWithDedupeFp:completionQueue:completion:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1068dab2c

// -[SCDiscoverFeedDataStore storiesWithDedupeFps:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068dace4

// -[SCDiscoverFeedDataStore allStoriesInCacheWithDedupeFps:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068daf18

// -[SCDiscoverFeedDataStore storyWithPublisherId:]
// Type encoding: @24@0:8q16
// Implementation: 0x1068db14c

// -[SCDiscoverFeedDataStore storyWithUsername:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068db444

// -[SCDiscoverFeedDataStore storyWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068db748

// -[SCDiscoverFeedDataStore storyWithUserIdOnPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068db89c

// -[SCDiscoverFeedDataStore mostRecentStorySavedForFeedTypeOnPerformer:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1068dba48

// -[SCDiscoverFeedDataStore dedupeWithExistingStoriesForFeedTypeOnPerformer:newStories:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x1068dbb1c

// -[SCDiscoverFeedDataStore storyWithCompositeStoryIdVersionInsensitive:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068dbde4

// -[SCDiscoverFeedDataStore storyWithCompositeStoryIdVersionInsensitiveOnPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068dc0bc

// -[SCDiscoverFeedDataStore allStories]
// Type encoding: @16@0:8
// Implementation: 0x1068dc298

// -[SCDiscoverFeedDataStore allStoriesForFeedType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1068dc40c

// -[SCDiscoverFeedDataStore cachedOrganicCompositeStoryIdsForFeedType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1068dc520

// -[SCDiscoverFeedDataStore cachedUnimpressedPromotedStoryCountForFeedType:impressedDedupeFps:]
// Type encoding: Q32@0:8Q16@24
// Implementation: 0x1068dc798

// -[SCDiscoverFeedDataStore allStoriesForFeedType:completionQueue:completion:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1068dca30

// -[SCDiscoverFeedDataStore allStoriesForFeedType:waitForStoriesToLoad:completionQueue:completion:]
// Type encoding: v44@0:8Q16B24@28@?36
// Implementation: 0x1068dccc4

// -[SCDiscoverFeedDataStore _allStoriesForFeedType:waitForStoriesToLoad:completionQueue:completion:]
// Type encoding: v44@0:8Q16B24@28@?36
// Implementation: 0x1068dce18

// -[SCDiscoverFeedDataStore allStoriesForFeedTypes:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068dd014

// -[SCDiscoverFeedDataStore reorderStoriesLocallyForFeedTypesIfPossible:isDebouncedQuery:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1068dd3d4

// -[SCDiscoverFeedDataStore _reorderStoriesForFeedTypesUnderBarrier:interactionHistoryArray:isDebouncedQuery:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x1068dd580

// -[SCDiscoverFeedDataStore saveStoriesToDiskOnAppResignActive:withNewData:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1068dd6f4

// -[SCDiscoverFeedDataStore clearStoriesCacheWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1068ddabc

// -[SCDiscoverFeedDataStore updateStoriesForFeedType:mutationBlock:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1068ddc2c

// -[SCDiscoverFeedDataStore _updateStoriesForFeedType:mutationBlock:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1068ddd44

// -[SCDiscoverFeedDataStore updateUnviewableSnapsByStoryDedupeFp:downloadDateByStoryDedupeFp:shouldTakedown:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1068dde6c

// -[SCDiscoverFeedDataStore _updateUnviewableSnapsByStoryDedupeFp:downloadDateByStoryDedupeFp:shouldTakedown:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1068ddfb4

// -[SCDiscoverFeedDataStore markDedupeFpIneligibleForPersistenceInMixedFeed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068de66c

// -[SCDiscoverFeedDataStore cacheCurrentPlayingStoryInMixedFeed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068de708

// -[SCDiscoverFeedDataStore prepareToFetchNewDataForQuery:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1068de824

// -[SCDiscoverFeedDataStore didFinishFetchingNewDataForQuery:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1068de9f0

// -[SCDiscoverFeedDataStore prepareForLogout:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1068deb14

// -[SCDiscoverFeedDataStore didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068debf4

// -[SCDiscoverFeedDataStore didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1068dee88

// -[SCDiscoverFeedDataStore _correctStoriesViewedState]
// Type encoding: v16@0:8
// Implementation: 0x1068df0f0

// -[SCDiscoverFeedDataStore _updateStoryWatchStateByStoryDedupFp:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1068df640

// -[SCDiscoverFeedDataStore _applyWatchStateMap:forLongformShowStories:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068dfde0

// -[SCDiscoverFeedDataStore _updateViewedStateForStoryDedupToSnapIdsDict:storyDedupToStoryDict:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068e0520

// -[SCDiscoverFeedDataStore _markDiscoverStoriesAsViewed:publisherStoryIdToStoryDict:viewStatesMap:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068e0bb0

// -[SCDiscoverFeedDataStore _applyWatchStates:viewStatesMap:forPublisherStories:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068e0d78

// -[SCDiscoverFeedDataStore _applyWatchState:forPublisherStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068e0fa4

// -[SCDiscoverFeedDataStore _modifiedStoryWithWatchState:viewStateMap:story:publisherStory:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1068e1284

// -[SCDiscoverFeedDataStore _markDiscoverFeedStoriesAsViewed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e1a48

// -[SCDiscoverFeedDataStore setDiskCacheLoadingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1068e1d34

// -[SCDiscoverFeedDataStore _dispatchAnnounceRerankingUpdateWithExtraData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e1e14

// -[SCDiscoverFeedDataStore _announceRerankingUpdateWithExtraData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e1f34

// -[SCDiscoverFeedDataStore _prepareCachedStreamAndSaveToDiskWithStoryDedupeFpDictionary:sectionDataModels:sectionMetadata:feedIdentifiers:stories:preservedStoryStore:loadState:withNewData:]
// Type encoding: v76@0:8@16@24@32@40@48@56Q64B72
// Implementation: 0x1068e1fac

// -[SCDiscoverFeedDataStore _handleCachedData:startTime:completion:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x1068e2fbc

// -[SCDiscoverFeedDataStore _handleCachedFailureWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1068e32f0

// -[SCDiscoverFeedDataStore _dispatchAnnounceDataStoreStoriesUpdateWithEvent:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068e3340

// -[SCDiscoverFeedDataStore _announceDataStoreUpdateWithEvent:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068e3484

// -[SCDiscoverFeedDataStore _announceDataLoadingUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1068e35ac

// -[SCDiscoverFeedDataStore _announceDatastoreLoadedFromDisk]
// Type encoding: v16@0:8
// Implementation: 0x1068e35ec

// -[SCDiscoverFeedDataStore _allStories]
// Type encoding: @16@0:8
// Implementation: 0x1068e3648

// -[SCDiscoverFeedDataStore _setSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e3688

// -[SCDiscoverFeedDataStore _appendSection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e3964

// -[SCDiscoverFeedDataStore _amendUpNextDefaultPlaylist:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e3fb4

// -[SCDiscoverFeedDataStore _prependStories:forFeedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1068e432c

// -[SCDiscoverFeedDataStore _appendStories:forFeedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1068e46b8

// -[SCDiscoverFeedDataStore _saveStories:forFeedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1068e4ba4

// -[SCDiscoverFeedDataStore _saveSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e4ea4

// -[SCDiscoverFeedDataStore _removeStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e5344

// -[SCDiscoverFeedDataStore _removeStoriesInFeedIdentifierMapping:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e5704

// -[SCDiscoverFeedDataStore _storyForCreator:isPublisher:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1068e59b0

// -[SCDiscoverFeedDataStore _removeStoryByCreator:isPublisher:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1068e5c64

// -[SCDiscoverFeedDataStore _removeStoriesByStoriesDedupFp:forFeedType:flushAllImpressions:completionQueue:completion:]
// Type encoding: v52@0:8@16Q24B32@36@?44
// Implementation: 0x1068e5d10

// -[SCDiscoverFeedDataStore _creatorIdByStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068e5e04

// -[SCDiscoverFeedDataStore _removeStoriesByCreatorId:similarStoryIdFpsArray:feedTypes:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068e5e9c

// -[SCDiscoverFeedDataStore _removeStories:forFeedType:flushAllImpressions:completionQueue:completion:]
// Type encoding: v52@0:8@16Q24B32@36@?44
// Implementation: 0x1068e62a4

// -[SCDiscoverFeedDataStore _removeStoriesInFeedIdentifierMapping:forFeedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1068e698c

// -[SCDiscoverFeedDataStore _updateUnsubscribedStoriesInDedupeFp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e6bd8

// -[SCDiscoverFeedDataStore _updateStoryDedupeFpsByFeedIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e6f24

// -[SCDiscoverFeedDataStore _updateStoriesByStoryDedupeFp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e6f54

// -[SCDiscoverFeedDataStore _updateStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e6f84

// -[SCDiscoverFeedDataStore _replaceFeedType:withStories:isFromMetadataPrefetch:]
// Type encoding: v36@0:8Q16@24B32
// Implementation: 0x1068e7180

// -[SCDiscoverFeedDataStore _updateStoryForCreator:isPublisher:isSubscribed:isOptedInNotification:]
// Type encoding: v36@0:8@16B24B28B32
// Implementation: 0x1068e73a8

// -[SCDiscoverFeedDataStore _updateWithCachedStream:startTime:completion:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x1068e74c8

// -[SCDiscoverFeedDataStore _updateWithCachedStream:startTime:interactionHistoryArray:completion:]
// Type encoding: v48@0:8@16d24@32@?40
// Implementation: 0x1068e76b8

// -[SCDiscoverFeedDataStore _reorderStoriesForFeedTypes:interactionHistoryArray:isDebouncedQuery:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x1068e81ec

// -[SCDiscoverFeedDataStore _removeFeedIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e8810

// -[SCDiscoverFeedDataStore _creatorSettingsDidUpdateWithCreatorSettings:didSubscribe:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1068e8a58

// -[SCDiscoverFeedDataStore _creatorSettingsUpdateOnPerformerWithCreatorSettings:didSubscribe:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1068e8b70

// -[SCDiscoverFeedDataStore _creatorSettingsDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1068e9250

// -[SCDiscoverFeedDataStore _updateCreatorSettingsWithStory:transactionContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068e957c

// -[SCDiscoverFeedDataStore _updateCreatorSettingsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e9874

// -[SCDiscoverFeedDataStore _updateCreatorSettingsWithStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e98f4

// -[SCDiscoverFeedDataStore _legacyAnnouncerIdentifierWithExtraData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068e9aa4

// -[SCDiscoverFeedDataStore onSnapProSubscriptionEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e9b5c

// -[SCDiscoverFeedDataStore _logTakedownSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068e9cc4

// -[SCDiscoverFeedDataStore _rerankViewedStories]
// Type encoding: v16@0:8
// Implementation: 0x1068e9e7c

// -[SCDiscoverFeedDataStore preserveFreshPromotedStories:forFeedType:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x1068ea14c

// -[SCDiscoverFeedDataStore _preserveFreshPromotedStoriesOnPerformer:forFeedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1068ea2b0

// -[SCDiscoverFeedDataStore _updatePreservedStories]
// Type encoding: v16@0:8
// Implementation: 0x1068ea500

// -[SCDiscoverFeedDataStore _preservedStoriesForFeedIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068ea5a0

// -[SCDiscoverFeedDataStore markLastEmptySubsSectionFetchedDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068ea680

// -[SCDiscoverFeedDataStore _setLastEmptySubsSectionFetchedDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068ea78c

// -[SCDiscoverFeedDataStore _getLastEmptySubsSectionFetchedDate]
// Type encoding: @16@0:8
// Implementation: 0x1068ea80c

// -[SCDiscoverFeedDataStore _lastEmptySubsSectionFetchedDateKey]
// Type encoding: @16@0:8
// Implementation: 0x1068ea884

// -[SCDiscoverFeedDataStore diskCacheLoadingState]
// Type encoding: Q16@0:8
// Implementation: 0x1068ea890

// -[SCDiscoverFeedDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068ea898

// +[SCDiscoverFeedDataStore announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1068d3034

@end
