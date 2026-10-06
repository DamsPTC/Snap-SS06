// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedFriendStoriesDataCoordinator
// Superclass: NSObject
// Address: 0x112b057d8

@interface SCDiscoverFeedFriendStoriesDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedFriendStoriesDataCoordinator initWithSnapchattersDataFetcher:snapchatterPublicInfoFetcher:snapchattersDataTracker:storiesDataCoordinator:customStoriesDataFetcher:friendStorySettingMutator:grapheneMetricsEmitter:circumstanceEngine:userSegmentsProvider:friendStoriesSyncer:currentUserId:blockedSnapchatterFetcher:creatorSettingsFetcher:creatorSettingsTracker:storiesConfigProvider:appLifecycleManager:appStartExperimentReader:creatorSubscriptionsInfoProvider:plusFeatureGating:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x1068fa740

// -[SCDiscoverFeedFriendStoriesDataCoordinator fetchRankedFriendStoriesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1068facfc

// -[SCDiscoverFeedFriendStoriesDataCoordinator fetchFriendStoriesWithIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068fae28

// -[SCDiscoverFeedFriendStoriesDataCoordinator fetchUncachedFriendStoryWithUserId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068faf7c

// -[SCDiscoverFeedFriendStoriesDataCoordinator fetchStoriesSummaryInfoForUnviewedAndUnmutedStories:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x1068fb1b0

// -[SCDiscoverFeedFriendStoriesDataCoordinator addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x1068fb34c

// -[SCDiscoverFeedFriendStoriesDataCoordinator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068fb354

// -[SCDiscoverFeedFriendStoriesDataCoordinator observeFriendStoriesFetching]
// Type encoding: @16@0:8
// Implementation: 0x1068fb35c

// -[SCDiscoverFeedFriendStoriesDataCoordinator observeFriendStoriesPredictedSessionDepth]
// Type encoding: @16@0:8
// Implementation: 0x1068fb3a4

// -[SCDiscoverFeedFriendStoriesDataCoordinator _handleFetchedSummaryInfo:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068fb3ec

// -[SCDiscoverFeedFriendStoriesDataCoordinator _getCreatorSubscriptionsAndHandleFetchedSummaryInfo:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068fb478

// -[SCDiscoverFeedFriendStoriesDataCoordinator _useVectorStarBadge]
// Type encoding: B16@0:8
// Implementation: 0x1068fb638

// -[SCDiscoverFeedFriendStoriesDataCoordinator _handleFetchedSummaryInfo:creatorSubscriptions:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068fb6a8

// -[SCDiscoverFeedFriendStoriesDataCoordinator didUpdateSummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068fbff0

// -[SCDiscoverFeedFriendStoriesDataCoordinator didUpdateCustomStoriesWithPublicationIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068fc038

// -[SCDiscoverFeedFriendStoriesDataCoordinator didUpdatePostableStories]
// Type encoding: v16@0:8
// Implementation: 0x1068fc080

// -[SCDiscoverFeedFriendStoriesDataCoordinator didUpdateFriendStorySettingWithUpdateRequest:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1068fc084

// -[SCDiscoverFeedFriendStoriesDataCoordinator didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068fc0d8

// -[SCDiscoverFeedFriendStoriesDataCoordinator didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1068fc0dc

// -[SCDiscoverFeedFriendStoriesDataCoordinator didEndSnapchattersFetchDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1068fc130

// -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchRankedFriendStoriesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1068fc184

// -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchFriendStoriesWithIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068fc218

// -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchStoriesWithDataRequest:rankedStoriesCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068fc450

// -[SCDiscoverFeedFriendStoriesDataCoordinator _updateEmptyStateWithDataRequest:rankedStoriesCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068fc744

// -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchSummaryInfosWithRankedStoryIds:dataRequest:rankedStoriesCompletion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068fc8a4

// -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchSnapchattersWithRankedStoryIds:summaryInfoMap:dataRequest:rankedStoriesCompletion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1068fca70

// -[SCDiscoverFeedFriendStoriesDataCoordinator _getCreatorSubscriptionsAndMakeFriendStoriesWithRankedStoryIds:summaryInfoMap:snapchatterMap:remoteSnapchatterMap:customStoriesData:friendOfGroupFeedDisplayNamesByPublicationId:dataRequest:rankedStoriesCompletion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@?72
// Implementation: 0x1068fd894

// -[SCDiscoverFeedFriendStoriesDataCoordinator _makeFriendStoriesWithRankedStoryIds:summaryInfoMap:snapchatterMap:remoteSnapchatterMap:customStoriesData:friendOfGroupFeedDisplayNamesByPublicationId:creatorSubscriptions:dataRequest:rankedStoriesCompletion:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@72@?80
// Implementation: 0x1068fdba8

// -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchBlockedSnapchatterForDiscoverFeedFriendStories:viewRestrictedStories:dataRequest:rankedStoriesCompletion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1068fe5ec

// -[SCDiscoverFeedFriendStoriesDataCoordinator _updateWithDiscoverFeedFriendStories:viewRestrictedStories:dataRequest:rankedStoriesCompletion:blockedSnapchatterIds:]
// Type encoding: v56@0:8@16@24@32@?40@48
// Implementation: 0x1068fe828

// -[SCDiscoverFeedFriendStoriesDataCoordinator _announceDataCoordinatorUpdateWithDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068fece4

// -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchStoriesSummaryInfosWithStoryIds:numOfStories:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1068fed1c

// -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchSnapchattersWithStoryIds:summaryInfoMap:numOfStories:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x1068feec8

// -[SCDiscoverFeedFriendStoriesDataCoordinator _filterOutViewedAndMutedFriendStoriesWithStoryIds:summaryInfoMap:snapchatterMap:customStoriesData:numOfStories:completion:]
// Type encoding: v64@0:8@16@24@32@40q48@?56
// Implementation: 0x1068ff510

// -[SCDiscoverFeedFriendStoriesDataCoordinator _hasUniversityCommunityWithCustomStoriesData:]
// Type encoding: B24@0:8@16
// Implementation: 0x1068ff7f4

// -[SCDiscoverFeedFriendStoriesDataCoordinator _runStoriesFetchCompletionBlockInBackgroundIfNecessaryWithStories:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068ff96c

// -[SCDiscoverFeedFriendStoriesDataCoordinator _runStoryFetchCompletionBlockInBackgroundIfNecessaryWithStory:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068ff9c4

// -[SCDiscoverFeedFriendStoriesDataCoordinator _runFetchStoriesSummaryInfoForUnviewedAndUnmutedStories:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068ffa1c

// -[SCDiscoverFeedFriendStoriesDataCoordinator didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068ffa74

// -[SCDiscoverFeedFriendStoriesDataCoordinator _passFriendShipCheckForSnapchatter:contentType:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x1068ffbb0

// -[SCDiscoverFeedFriendStoriesDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068ffce8

@end
