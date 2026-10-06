// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesBackgroundPrefetcher
// Superclass: NSObject
// Address: 0x112a8b488

@interface SCStoriesBackgroundPrefetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesBackgroundPrefetcher initWithUserSession:storiesDataCoordinator:storiesMediaCoordinator:storiesSyncNetworkRequester:circumstanceEngine:imageFetchingService:storiesConfigProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105b0d870

// -[SCStoriesBackgroundPrefetcher _handleFetchStoriesWithStartTimestamp:prefetchCompletion:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x105b0db34

// -[SCStoriesBackgroundPrefetcher _handleDownloadStoriesWithRankedStoryIds:startTimestamp:prefetchCompletion:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x105b0dc94

// -[SCStoriesBackgroundPrefetcher _handleDownloadStoriesWithPlaybackInfoMap:startTimestamp:viewStateMap:rankedStoryIds:prefetchCompletion:]
// Type encoding: v56@0:8@16d24@32@40@?48
// Implementation: 0x105b0de38

// -[SCStoriesBackgroundPrefetcher _handleStoriesPrefetchWithConfig:startTimestamp:playbackInfoMap:viewStateMap:rankedStoryIds:prefetchCompletion:]
// Type encoding: v64@0:8@16d24@32@40@48@?56
// Implementation: 0x105b0e0e8

// -[SCStoriesBackgroundPrefetcher _handleDownloadStoriesWithPlaybackInfoMap:startTimestamp:viewStateMap:rankedStoryIds:numOfFriendStoriesToDownload:numOfSnapsInEachStoryToDownload:maxNumOfSnapsInEachStoryToDownload:completePrefetch:prefetchCompletion:]
// Type encoding: v84@0:8@16d24@32@40Q48Q56Q64B72@?76
// Implementation: 0x105b0e2e0

// -[SCStoriesBackgroundPrefetcher _handleDownloadStoriesWithFilteredPlaybackInfoMap:startTimestamp:viewStateMap:completePrefetch:prefetchCompletion:]
// Type encoding: v52@0:8@16d24@32B40@?44
// Implementation: 0x105b0e728

// -[SCStoriesBackgroundPrefetcher _handleDownloadStoriesWithFilteredPlaybackInfoMap:startTimestamp:viewStateMap:completePrefetch:summaryData:prefetchCompletion:]
// Type encoding: v60@0:8@16d24@32B40@44@?52
// Implementation: 0x105b0ea0c

// -[SCStoriesBackgroundPrefetcher _downloadThumbnail:storyId:completion:failure:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x105b0f160

// -[SCStoriesBackgroundPrefetcher _storyTypeFromSummaryType:]
// Type encoding: @24@0:8q16
// Implementation: 0x105b0f43c

// -[SCStoriesBackgroundPrefetcher _storyTypeFromPlaybackInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b0f464

// -[SCStoriesBackgroundPrefetcher dataSyncerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105b0f658

// -[SCStoriesBackgroundPrefetcher jobConfig]
// Type encoding: @16@0:8
// Implementation: 0x105b0f664

// -[SCStoriesBackgroundPrefetcher submitOnRegister]
// Type encoding: B16@0:8
// Implementation: 0x105b0f734

// -[SCStoriesBackgroundPrefetcher onSync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105b0f73c

// -[SCStoriesBackgroundPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b0f8c4

@end
