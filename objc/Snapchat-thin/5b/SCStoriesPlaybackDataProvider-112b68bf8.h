// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesPlaybackDataProvider
// Superclass: NSObject
// Address: 0x112b68bf8

@interface SCStoriesPlaybackDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesPlaybackDataProvider initWithLazyStoriesDataCoordinator:lazyDocObjectContext:snapReadReceiptCoordinator:cachedReadReceiptViewStateProvider:storiesConfigProvider:circumstanceEngine:creatorSubscriptionsInfoProvider:plusFeatureGating:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1079e54dc

// -[SCStoriesPlaybackDataProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1079e58bc

// -[SCStoriesPlaybackDataProvider triggerPaginationByCompositeId:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079e5904

// -[SCStoriesPlaybackDataProvider storiesPlaybackMetadataForStoryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1079e5908

// -[SCStoriesPlaybackDataProvider userStoryPlaybackSequenceByStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e5ab0

// -[SCStoriesPlaybackDataProvider customStoryPlaybackSequenceByPublicationId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e5e30

// -[SCStoriesPlaybackDataProvider customStoryPlaybackSequences]
// Type encoding: @16@0:8
// Implementation: 0x1079e5ff8

// -[SCStoriesPlaybackDataProvider customStoryPlaybackSequenceWithStoryIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e6040

// -[SCStoriesPlaybackDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e60ac

// -[SCStoriesPlaybackDataProvider topicStoryPlaybackSequenceByTopicStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e60b4

// -[SCStoriesPlaybackDataProvider bundleStoryPlaybackSequenceByBundleStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e60bc

// -[SCStoriesPlaybackDataProvider singleSnapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e6200

// -[SCStoriesPlaybackDataProvider mapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e6208

// -[SCStoriesPlaybackDataProvider savedStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e6210

// -[SCStoriesPlaybackDataProvider storyAvailability]
// Type encoding: Q16@0:8
// Implementation: 0x1079e6218

// -[SCStoriesPlaybackDataProvider _storiesPlaybackMetadataWithSnapsInfo:viewStateMap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e6288

// -[SCStoriesPlaybackDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079e636c

@end
