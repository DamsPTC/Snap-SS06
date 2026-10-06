// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedPrefetchHandler
// Superclass: NSObject
// Address: 0x112b06cc8

@interface SCDiscoverFeedPrefetchHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedPrefetchHandler initWithPrefetchers:preloadController:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106931ff4

// -[SCDiscoverFeedPrefetchHandler didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069320fc

// -[SCDiscoverFeedPrefetchHandler prefetchVisibleTilesInDiscoverFeedCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106932330

// -[SCDiscoverFeedPrefetchHandler prefetchWithViewModelsBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069323ac

// -[SCDiscoverFeedPrefetchHandler prefetchWithMixedCarouselStoryDataModels:numSnapsToPrefetch:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1069324c4

// -[SCDiscoverFeedPrefetchHandler _prefetchWithViewModelsBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069325e8

// -[SCDiscoverFeedPrefetchHandler _prefetchWithStoryDataModels:numSnapsToPrefetch:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10693279c

// -[SCDiscoverFeedPrefetchHandler stopPrefetching]
// Type encoding: v16@0:8
// Implementation: 0x1069328b8

// -[SCDiscoverFeedPrefetchHandler _handleCarouselSectionScrollWithEventName:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106932990

// -[SCDiscoverFeedPrefetchHandler _handleSuspendedUpdateWithEventName:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106932a90

// -[SCDiscoverFeedPrefetchHandler _handlePrefetchEvent:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106932cac

// -[SCDiscoverFeedPrefetchHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106932dcc

@end
