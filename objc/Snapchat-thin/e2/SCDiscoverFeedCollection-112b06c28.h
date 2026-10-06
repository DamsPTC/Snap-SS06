// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedCollection
// Superclass: NSObject
// Address: 0x112b06c28

@interface SCDiscoverFeedCollection

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedCollection initWithCachedReadReceiptViewStateProvider:readReceiptCoordinator:circumstanceEngine:longformMediaPrefetcher:storiesMediaCoordinator:lazyDiscoverFeedDataFetcher:debugViewer:streamingURLProvider:currentUserId:adMediaFetcher:snapDocConfigurer:publisherPagePropertiesManager:creatorSettingsFetcher:contentObjectResolver:storiesConfigProvider:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x100bd50bc

// -[SCDiscoverFeedCollection playableViewModelsForStories:]
// Type encoding: @24@0:8@16
// Implementation: 0x10692c8c0

// -[SCDiscoverFeedCollection applicationDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10692c920

// -[SCDiscoverFeedCollection _cleanUpUnusedLongformMedia]
// Type encoding: v16@0:8
// Implementation: 0x10692c924

// -[SCDiscoverFeedCollection playableViewModelForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x10692cb14

// -[SCDiscoverFeedCollection prefetchMediaWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10692cedc

// -[SCDiscoverFeedCollection prefetchMediaForStory:numberOfSnapsToPrefetch:maxNumberOfSnapsToPrefetch:completePrefetchOnFirstSnap:debugInfo:trigger:completion:]
// Type encoding: v68@0:8@16Q24Q32B40@44q52@?60
// Implementation: 0x10692d114

// -[SCDiscoverFeedCollection _prefetchMediaForPublicUserStory:numberOfSnapsToPrefetch:maxNumberOfSnapsToPrefetch:completePrefetchOnFirstSnap:publicUserStory:snapIds:viewStatesBySnapIds:debugInfo:prefetchGroup:]
// Type encoding: v84@0:8@16Q24Q32B40@44@52@60@68@76
// Implementation: 0x10692ddd4

// -[SCDiscoverFeedCollection isDiscoverFeedStoryLoaded:]
// Type encoding: B24@0:8@16
// Implementation: 0x10692e5e0

// -[SCDiscoverFeedCollection cancelPrefetchMediaForStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10692eaf4

// -[SCDiscoverFeedCollection _prefetchMediaForSingleSnapStoryStory:numberOfSnapsToPrefetch:maxNumberOfSnapsToPrefetch:completePrefetchOnFirstSnap:debugInfo:completion:]
// Type encoding: v60@0:8@16Q24Q32B40@44@?52
// Implementation: 0x10692ee9c

// -[SCDiscoverFeedCollection _prefetchMediaForSingleSnapStoryStory:numberOfSnapsToPrefetch:maxNumberOfSnapsToPrefetch:completePrefetchOnFirstSnap:debugInfo:viewStatesBySnapIds:completion:]
// Type encoding: v68@0:8@16Q24Q32B40@44@52@?60
// Implementation: 0x10692f240

// -[SCDiscoverFeedCollection _didPrefetchLongformShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x10692f9b8

// -[SCDiscoverFeedCollection _updatePrefetchedLongformShowsWithShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x10692f9e0

// -[SCDiscoverFeedCollection _hasPrefetchedLongformShow:]
// Type encoding: B24@0:8@16
// Implementation: 0x10692fa34

// -[SCDiscoverFeedCollection .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10692fa94

@end
