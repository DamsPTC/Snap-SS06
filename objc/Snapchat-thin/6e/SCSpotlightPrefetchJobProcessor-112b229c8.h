// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightPrefetchJobProcessor
// Superclass: NSObject
// Address: 0x112b229c8

@interface SCSpotlightPrefetchJobProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightPrefetchJobProcessor initWithSpotlightStoriesPrefetcherFactory:spotlightQueryCoordinator:discoverFeedDataFetcher:discoverFeedQueryCoordinator:storiesConfigProvider:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106c0438c

// -[SCSpotlightPrefetchJobProcessor processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x106c044e0

// -[SCSpotlightPrefetchJobProcessor prefetchSpotlightIfNecessaryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106c044fc

// -[SCSpotlightPrefetchJobProcessor _prefetchSpotlightIfNecessaryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106c04780

// -[SCSpotlightPrefetchJobProcessor _prefetchSpotlightFeed:numStoriesToPrefetch:completion:]
// Type encoding: v36@0:8i16q20@?28
// Implementation: 0x106c0480c

// -[SCSpotlightPrefetchJobProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c04a94

@end
