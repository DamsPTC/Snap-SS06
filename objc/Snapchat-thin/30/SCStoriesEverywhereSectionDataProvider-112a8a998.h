// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesEverywhereSectionDataProvider
// Superclass: NSObject
// Address: 0x112a8a998

@interface SCStoriesEverywhereSectionDataProvider

// Property: backgroundColor; attributes: T@"UIColor",&,N,V_backgroundColor
// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesEverywhereSectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad476c

// -[SCStoriesEverywhereSectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad4774

// -[SCStoriesEverywhereSectionDataProvider initWithFriendStoriesDataCoordinator:replayManager:circumstanceEngine:imageFetchingService:storiesConfigProvider:commandObservable:discoverFeedDataFetcher:snapchattersSynchronousDataFetcher:storiesSnapchatterFetcher:featureSettingsService:bitmojiImageFetcher:bitmojiAvatarProvider:networkConnectivityMonitor:mixedStoriesDataCoordinator:bitmojiSelfieFetcher:pageType:plusFeatureGating:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128q136@144
// Implementation: 0x105ad477c

// -[SCStoriesEverywhereSectionDataProvider setUp]
// Type encoding: v16@0:8
// Implementation: 0x105ad4be8

// -[SCStoriesEverywhereSectionDataProvider tearDown]
// Type encoding: v16@0:8
// Implementation: 0x105ad4e80

// -[SCStoriesEverywhereSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad4f28

// -[SCStoriesEverywhereSectionDataProvider numberOfSections]
// Type encoding: Q16@0:8
// Implementation: 0x105ad4f2c

// -[SCStoriesEverywhereSectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105ad4f34

// -[SCStoriesEverywhereSectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105ad4f3c

// -[SCStoriesEverywhereSectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105ad5000

// -[SCStoriesEverywhereSectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ad51cc

// -[SCStoriesEverywhereSectionDataProvider dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x105ad52bc

// -[SCStoriesEverywhereSectionDataProvider supplementaryViewModels]
// Type encoding: @16@0:8
// Implementation: 0x105ad52c4

// -[SCStoriesEverywhereSectionDataProvider minimumInteritemSpacing]
// Type encoding: d16@0:8
// Implementation: 0x105ad52cc

// -[SCStoriesEverywhereSectionDataProvider startToDisplayStoryWithStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad52d8

// -[SCStoriesEverywhereSectionDataProvider clearAllWithReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x105ad52dc

// -[SCStoriesEverywhereSectionDataProvider expandAllStories]
// Type encoding: v16@0:8
// Implementation: 0x105ad5364

// -[SCStoriesEverywhereSectionDataProvider didUpdateWithFriendStoriesReplayRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad53c4

// -[SCStoriesEverywhereSectionDataProvider didUpdateWithDiscoverFeedFriendStoryDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad5674

// -[SCStoriesEverywhereSectionDataProvider _suspendDataRequestUpdateIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105ad5950

// -[SCStoriesEverywhereSectionDataProvider _handleExpandAllStories]
// Type encoding: v16@0:8
// Implementation: 0x105ad5a68

// -[SCStoriesEverywhereSectionDataProvider sectionCollapseCoordinatorDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105ad5a78

// -[SCStoriesEverywhereSectionDataProvider _handleCollapseStoriesFromPullToRefresh:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ad5b50

// -[SCStoriesEverywhereSectionDataProvider _fetchMixedCarouselStoriesFromPullToRefresh:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ad5b58

// -[SCStoriesEverywhereSectionDataProvider _mixedCarouselRankAndUpdateViewModelsWithViewedStoryWhitelist:lastExpandedUnwatchedStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ad5ce4

// -[SCStoriesEverywhereSectionDataProvider _mixedCarouselRankAndUpdateViewModelsWithStories:viewedStoryWhitelist:lastExpandedUnwatchedStoryId:isIn5Tab:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x105ad5fb8

// -[SCStoriesEverywhereSectionDataProvider _mixedCarouselRankAndUpdateViewModelsWithStories:viewedStoryWhitelist:lastExpandedUnwatchedStoryId:snapchatterByUserId:justViewedStories:isIn5Tab:]
// Type encoding: v60@0:8@16@24@32@40@48B56
// Implementation: 0x105ad6390

// -[SCStoriesEverywhereSectionDataProvider _rankedMixedCarouselStoriesToShow:viewedStoryWhitelist:shouldShowMutedCell:]
// Type encoding: @40@0:8@16@24^B32
// Implementation: 0x105ad6680

// -[SCStoriesEverywhereSectionDataProvider _roundRobinRankedStoriesWithFriendStories:subsStories:fofStories:numFsPerSubs:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x105ad706c

// -[SCStoriesEverywhereSectionDataProvider _createViewModelsWithMixedCarouselStories:snapchatterByUserId:justViewedStories:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105ad7244

// -[SCStoriesEverywhereSectionDataProvider _viewModelDidUpdateAndNotifyWithFromFriendStoriesUpdate:shouldUpdateLoadingState:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105ad8650

// -[SCStoriesEverywhereSectionDataProvider _dataProviderEventDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105ad86d8

// -[SCStoriesEverywhereSectionDataProvider _configureStoryCardCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad87c8

// -[SCStoriesEverywhereSectionDataProvider _prefetchThumbnailsIfNeededForViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad89b8

// -[SCStoriesEverywhereSectionDataProvider _onCommand:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad8e40

// -[SCStoriesEverywhereSectionDataProvider _releasePendingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105ad8f3c

// -[SCStoriesEverywhereSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ad8f7c

// -[SCStoriesEverywhereSectionDataProvider _subscribeToSnoozeFoFStories]
// Type encoding: v16@0:8
// Implementation: 0x105ad9118

// -[SCStoriesEverywhereSectionDataProvider _updateSnoozeFoFStateIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105ad93e4

// -[SCStoriesEverywhereSectionDataProvider _resetLastSnoozedFofTimestampMs]
// Type encoding: v16@0:8
// Implementation: 0x105ad94a8

// -[SCStoriesEverywhereSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105ad94e0

// -[SCStoriesEverywhereSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad94f8

// -[SCStoriesEverywhereSectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x105ad9504

// -[SCStoriesEverywhereSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x105ad950c

// -[SCStoriesEverywhereSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad9514

// -[SCStoriesEverywhereSectionDataProvider backgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x105ad9544

// -[SCStoriesEverywhereSectionDataProvider setBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ad954c

// -[SCStoriesEverywhereSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ad957c

// +[SCStoriesEverywhereSectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105ad4760

@end
