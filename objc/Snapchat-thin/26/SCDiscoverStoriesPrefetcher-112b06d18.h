// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverStoriesPrefetcher
// Superclass: NSObject
// Address: 0x112b06d18

@interface SCDiscoverStoriesPrefetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverStoriesPrefetcher initWithDiscoverFeedCollection:discoverFeedDataFetcher:grapheneMetricsEmitter:storiesConfigProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106932e54

// -[SCDiscoverStoriesPrefetcher prefetchableDataFromViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106932f20

// -[SCDiscoverStoriesPrefetcher prefetchIfPossibleWithViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069333c4

// -[SCDiscoverStoriesPrefetcher prefetchIfPossibleWithDataModels:numSnapsToPrefetch:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106933510

// -[SCDiscoverStoriesPrefetcher prefetchWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10693378c

// -[SCDiscoverStoriesPrefetcher handlePrefetchWithContext:sectionType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106933830

// -[SCDiscoverStoriesPrefetcher _prefetchSubscriptionSection]
// Type encoding: v16@0:8
// Implementation: 0x106933898

// -[SCDiscoverStoriesPrefetcher _prefetchSubscriptionSectionWithStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069339d4

// -[SCDiscoverStoriesPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106933c7c

@end
