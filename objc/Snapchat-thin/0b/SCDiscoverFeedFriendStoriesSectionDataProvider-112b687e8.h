// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedFriendStoriesSectionDataProvider
// Superclass: NSObject
// Address: 0x112b687e8

@interface SCDiscoverFeedFriendStoriesSectionDataProvider

// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedFriendStoriesSectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079dace8

// -[SCDiscoverFeedFriendStoriesSectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079dacf0

// -[SCDiscoverFeedFriendStoriesSectionDataProvider initWithImageDownloader:friendStoriesDataCoordinator:replayManager:badgeTracker:circumstanceEngine:postStoryDataProvider:storiesGrapheneMetricsEmitter:friendSuggestionsDataCoordinator:imageFetchingService:storiesConfigProvider:storiesSnapchatterFetcher:bitmojiSelfieFetcher:featureSettingsService:storiesThumbnailCoordinator:networkConnectivityMonitor:plusFeatureGating:placeCategoryIconResolver:isExpandedViewController:crashLogger:]
// Type encoding: @164@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144B152@156
// Implementation: 0x1079dacf8

// -[SCDiscoverFeedFriendStoriesSectionDataProvider setUp]
// Type encoding: v16@0:8
// Implementation: 0x1079db344

// -[SCDiscoverFeedFriendStoriesSectionDataProvider tearDown]
// Type encoding: v16@0:8
// Implementation: 0x1079db444

// -[SCDiscoverFeedFriendStoriesSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079db4a4

// -[SCDiscoverFeedFriendStoriesSectionDataProvider numberOfSections]
// Type encoding: Q16@0:8
// Implementation: 0x1079db4a8

// -[SCDiscoverFeedFriendStoriesSectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1079db4b0

// -[SCDiscoverFeedFriendStoriesSectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1079db504

// -[SCDiscoverFeedFriendStoriesSectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1079db628

// -[SCDiscoverFeedFriendStoriesSectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079db818

// -[SCDiscoverFeedFriendStoriesSectionDataProvider dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x1079db994

// -[SCDiscoverFeedFriendStoriesSectionDataProvider supplementaryViewModels]
// Type encoding: @16@0:8
// Implementation: 0x1079db99c

// -[SCDiscoverFeedFriendStoriesSectionDataProvider minimumInteritemSpacing]
// Type encoding: d16@0:8
// Implementation: 0x1079db9a4

// -[SCDiscoverFeedFriendStoriesSectionDataProvider startToDisplayStoryWithStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079db9b0

// -[SCDiscoverFeedFriendStoriesSectionDataProvider clearAllWithReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x1079db9b4

// -[SCDiscoverFeedFriendStoriesSectionDataProvider expandAllStories]
// Type encoding: v16@0:8
// Implementation: 0x1079dba3c

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _subscribeToSnoozeFoFStories]
// Type encoding: v16@0:8
// Implementation: 0x1079dba9c

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _updateSnoozeFoFStateIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1079dbd68

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _resetLastSnoozedFofTimestampMs]
// Type encoding: v16@0:8
// Implementation: 0x1079dbe2c

// -[SCDiscoverFeedFriendStoriesSectionDataProvider didUpdateWithFriendStoriesReplayRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079dbe64

// -[SCDiscoverFeedFriendStoriesSectionDataProvider didUpdateWithDiscoverFeedFriendStoryDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079dc114

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _handleUpdateFromFriendStoryDataRequest]
// Type encoding: v16@0:8
// Implementation: 0x1079dc398

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _handleExpandAllStories]
// Type encoding: v16@0:8
// Implementation: 0x1079dc3a0

// -[SCDiscoverFeedFriendStoriesSectionDataProvider sectionCollapseCoordinatorDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1079dc3b0

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _storyCircleLayoutConfigurationWithMainTitleOneLine:]
// Type encoding: @20@0:8B16
// Implementation: 0x1079dc488

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _subscribeToInlineFriendSuggestions]
// Type encoding: v16@0:8
// Implementation: 0x1079dc520

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _onReceivedSuggestionsDataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079dc674

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _handleReceivedSuggestionsDataModelsOnPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079dc780

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _handleCollpaseStoriesFromPullToRefresh:]
// Type encoding: v20@0:8B16
// Implementation: 0x1079dcd98

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _fetchStoriesDataAndPerformViewModelUpdateFromPullToRefresh:]
// Type encoding: v20@0:8B16
// Implementation: 0x1079dcdac

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _rankAndUpdateViewModelsWithQueriedStories:showMutedStories:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1079dcfbc

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _rankAndUpdateViewModelsWithQueriedStories:viewedStoryWhitelist:lastExpandedUnwatchedStoryId:showMutedStories:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1079dd158

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _updateViewModelsWithFriendStories:pseudoUnviewedStoryIdSet:hasHiddenMutedStories:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1079dd580

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _applyChangeWithFriendStories:friendStoriesToDiplay:justViewedStories:sectionViewModel:newViewModels:hasHiddenMutedStories:snapchatterByUserId:]
// Type encoding: v68@0:8@16@24@32@40@48B56@60
// Implementation: 0x1079dd8e8

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _createViewModelsWithFriendStories:fullPlayList:justViewedStories:snapchatterByUserId:cellSizeMultiplier:labelHeightReduction:mainTitleOneLine:layoutConfig:]
// Type encoding: @68@0:8@16@24@32@40f48f52B56@60
// Implementation: 0x1079ddd8c

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _viewModelDidUpdateAndNotify:]
// Type encoding: v20@0:8B16
// Implementation: 0x1079de358

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _dataProviderEventDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1079de3dc

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _myStoriesDataProviderEventDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1079de558

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _configureStoryCardCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079de64c

// -[SCDiscoverFeedFriendStoriesSectionDataProvider _prefetchThumbnailsIfNeededForViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079de84c

// -[SCDiscoverFeedFriendStoriesSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1079decbc

// -[SCDiscoverFeedFriendStoriesSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079decd4

// -[SCDiscoverFeedFriendStoriesSectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x1079dece0

// -[SCDiscoverFeedFriendStoriesSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1079dece8

// -[SCDiscoverFeedFriendStoriesSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079decf0

// -[SCDiscoverFeedFriendStoriesSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079ded20

// +[SCDiscoverFeedFriendStoriesSectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1079dacdc

@end
