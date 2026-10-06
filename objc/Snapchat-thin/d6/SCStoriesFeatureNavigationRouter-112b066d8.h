// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesFeatureNavigationRouter
// Superclass: NSObject
// Address: 0x112b066d8

@interface SCStoriesFeatureNavigationRouter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesFeatureNavigationRouter initWithSharedStoryProfileScopeExposer:customStoriesDataFetcher:customStoriesDataSyncer:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10691cfd0

// -[SCStoriesFeatureNavigationRouter handleNavigationWithNotification:navigationDelegate:featureNavigationRoutingDelegate:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10691d0cc

// -[SCStoriesFeatureNavigationRouter _navigationForSharedStoriesMemberAddedNotificationWithNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10691d1a4

// -[SCStoriesFeatureNavigationRouter _didCompleteSyncWithCustomStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10691d42c

// -[SCStoriesFeatureNavigationRouter _didCompleteFetchWithCustomStory:notification:syncCompletion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10691d468

// -[SCStoriesFeatureNavigationRouter _displaySharedStoryProfileWithCustomStoryMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10691d55c

// -[SCStoriesFeatureNavigationRouter didCompleteSharedStoryProfileScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10691d5cc

// -[SCStoriesFeatureNavigationRouter navigationTypeWithNotification:]
// Type encoding: q24@0:8@16
// Implementation: 0x10691d5ec

// -[SCStoriesFeatureNavigationRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10691d610

@end
