// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDocFriendStoriesPrefetcher
// Superclass: NSObject
// Address: 0x112b06db8

@interface SCDocFriendStoriesPrefetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDocFriendStoriesPrefetcher initWithStoriesDataCoordinator:storiesMediaCoordinator:prefetchDecider:currentUserId:networkConnectivityMonitor:storiesConfigProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100bc7944

// -[SCDocFriendStoriesPrefetcher prefetchIfPossibleWithViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x106933de0

// -[SCDocFriendStoriesPrefetcher prefetchIfPossibleWithDataModels:numSnapsToPrefetch:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106933e28

// -[SCDocFriendStoriesPrefetcher prefetchWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106933ff4

// -[SCDocFriendStoriesPrefetcher handlePrefetchWithContext:sectionType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106934038

// -[SCDocFriendStoriesPrefetcher clearPrefetchedCount]
// Type encoding: v16@0:8
// Implementation: 0x1069340ac

// -[SCDocFriendStoriesPrefetcher _prefetchFriendStoriesForSuspendedUIUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1069340b4

// -[SCDocFriendStoriesPrefetcher _prefetchFriendStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10693427c

// -[SCDocFriendStoriesPrefetcher _prefetchFriendStoriesFromPlaybackInfos:viewStateMap:withOrderInFriendStoryIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106934440

// -[SCDocFriendStoriesPrefetcher didUpdateSummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106934a48

// -[SCDocFriendStoriesPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106934b44

@end
