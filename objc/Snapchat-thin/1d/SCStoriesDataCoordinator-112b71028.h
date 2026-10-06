// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesDataCoordinator
// Superclass: NSObject
// Address: 0x112b71028

@interface SCStoriesDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesDataCoordinator initWithDocObjectContext:performer:mixerRequester:snapchattersDataTracker:storiesSnapchatterFetcher:snapReadReceiptLogger:snapReadReceiptCoordinator:circumstanceEngine:grapheneMetricsEmitter:currentUserId:adConfigProvider:storiesSyncNetworkRequester:networkConnectivityMonitor:locationProvider:storiesConfigProvider:storiesCachedPropertiesCoordinator:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x1009390fc

// -[SCStoriesDataCoordinator rankedStoryIdsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107b14314

// -[SCStoriesDataCoordinator rankedMixedCarouselStoryIdsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107b143a8

// -[SCStoriesDataCoordinator storySummariesFilteredByStoryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107b1443c

// -[SCStoriesDataCoordinator friendOfGroupFeedDisplayNamesForPublicationIds:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107b14548

// -[SCStoriesDataCoordinator storySummariesObservableWithObservationQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bae8f0

// -[SCStoriesDataCoordinator storySnapsInfoForStoryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107b14768

// -[SCStoriesDataCoordinator storySnapsInfoForStoryIds:includeViewStates:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x107b14774

// -[SCStoriesDataCoordinator storySnapsInfoForStoryIds:includeViewStates:qualityOfService:completion:]
// Type encoding: v40@0:8@16B24I28@?32
// Implementation: 0x107b14780

// -[SCStoriesDataCoordinator _storySnapsInfoForStoryIds:friendStoryIds:friendPlaybackInfoMap:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107b14e60

// -[SCStoriesDataCoordinator _storySnapsInfoForStoryIds:friendStoryIds:friendPlaybackInfoMap:viewStateMap:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107b1509c

// -[SCStoriesDataCoordinator fetchPublicUserStoriesWithUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b154ec

// -[SCStoriesDataCoordinator deleteCustomStorySnapsWithPublicationId:clientIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b154f4

// -[SCStoriesDataCoordinator deleteStorySnapsWithSnapComponentId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b15634

// -[SCStoriesDataCoordinator deleteExpiredMetadata]
// Type encoding: v16@0:8
// Implementation: 0x107b15734

// -[SCStoriesDataCoordinator updateAllSummaryInfosWithViewStates]
// Type encoding: v16@0:8
// Implementation: 0x10093a8e4

// -[SCStoriesDataCoordinator addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x107b157dc

// -[SCStoriesDataCoordinator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b157e4

// -[SCStoriesDataCoordinator didUpdateSummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b157ec

// -[SCStoriesDataCoordinator didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b157f4

// -[SCStoriesDataCoordinator _updateSummaryInfosWithViewStatesForAll:publicationId:storyUserId:storyId:]
// Type encoding: v44@0:8B16@20@28@36
// Implementation: 0x10093af50

// -[SCStoriesDataCoordinator didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b15a3c

// -[SCStoriesDataCoordinator didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107b15a40

// -[SCStoriesDataCoordinator _onFriendRemoved:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b15e10

// -[SCStoriesDataCoordinator _updateSummaryInfoWithAddingFriendFromStorySuggestion:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b15ebc

// -[SCStoriesDataCoordinator prependStoryToMixedCarouselRankedStoryIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b15f60

// -[SCStoriesDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b160e8

@end
