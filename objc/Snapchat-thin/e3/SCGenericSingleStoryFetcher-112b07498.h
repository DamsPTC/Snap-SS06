// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGenericSingleStoryFetcher
// Superclass: NSObject
// Address: 0x112b07498

@interface SCGenericSingleStoryFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGenericSingleStoryFetcher initWithGenericStoryQueryCoordinator:discoverFeedDataFetcher:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10694a60c

// -[SCGenericSingleStoryFetcher fetchStoryObservableByCompositeId:existingSubject:pageType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10694a6b0

// -[SCGenericSingleStoryFetcher fetchStoryByCompositeId:pageType:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x10694a748

// -[SCGenericSingleStoryFetcher _fetchStoryByCompositeId:pageType:callback:subject:]
// Type encoding: v48@0:8@16q24@?32@40
// Implementation: 0x10694a750

// -[SCGenericSingleStoryFetcher _prepareSCDiscoverFeedStoryForPlayback:subject:compositeStoryId:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x10694a988

// -[SCGenericSingleStoryFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10694aa5c

@end
