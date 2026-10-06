// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSingleSnapStoriesDataProvider
// Superclass: NSObject
// Address: 0x112b68b58

@interface SCSingleSnapStoriesDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSingleSnapStoriesDataProvider init]
// Type encoding: @16@0:8
// Implementation: 0x1079e4740

// -[SCSingleSnapStoriesDataProvider insertSingleSnapStoryWithStoryId:displayName:discoverMetadata:storySnaps:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1079e47a4

// -[SCSingleSnapStoriesDataProvider customStoryPlaybackSequenceByPublicationId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e485c

// -[SCSingleSnapStoriesDataProvider userStoryPlaybackSequenceByStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e4864

// -[SCSingleSnapStoriesDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e486c

// -[SCSingleSnapStoriesDataProvider topicStoryPlaybackSequenceByTopicStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e4874

// -[SCSingleSnapStoriesDataProvider bundleStoryPlaybackSequenceByBundleStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e487c

// -[SCSingleSnapStoriesDataProvider singleSnapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e4884

// -[SCSingleSnapStoriesDataProvider mapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e488c

// -[SCSingleSnapStoriesDataProvider savedStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e4894

// -[SCSingleSnapStoriesDataProvider storiesPlaybackMetadataForStoryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1079e489c

// -[SCSingleSnapStoriesDataProvider triggerPaginationByCompositeId:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079e4a3c

// -[SCSingleSnapStoriesDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079e4a40

@end
