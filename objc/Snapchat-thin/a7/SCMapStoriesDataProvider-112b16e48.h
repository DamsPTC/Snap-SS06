// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapStoriesDataProvider
// Superclass: NSObject
// Address: 0x112b16e48

@interface SCMapStoriesDataProvider

// Property: playbackStorySequences; attributes: T@"NSArray",&,N,V_playbackStorySequences
// Property: dataModels; attributes: T@"NSArray",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapStoriesDataProvider initWithPlaybackStorySequences:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b15bd4

// -[SCMapStoriesDataProvider setPlaybackStorySequences:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b15c40

// -[SCMapStoriesDataProvider dataModels]
// Type encoding: @16@0:8
// Implementation: 0x106b15db4

// -[SCMapStoriesDataProvider customStoryPlaybackSequenceByPublicationId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106b15ef4

// -[SCMapStoriesDataProvider userStoryPlaybackSequenceByStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106b15efc

// -[SCMapStoriesDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106b15f04

// -[SCMapStoriesDataProvider topicStoryPlaybackSequenceByTopicStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b15f0c

// -[SCMapStoriesDataProvider singleSnapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b15f14

// -[SCMapStoriesDataProvider bundleStoryPlaybackSequenceByBundleStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b15f1c

// -[SCMapStoriesDataProvider mapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b15f24

// -[SCMapStoriesDataProvider savedStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b15f2c

// -[SCMapStoriesDataProvider storiesPlaybackMetadataForStoryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106b15f34

// -[SCMapStoriesDataProvider triggerPaginationByCompositeId:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b160f0

// -[SCMapStoriesDataProvider playbackStorySequences]
// Type encoding: @16@0:8
// Implementation: 0x106b160f4

// -[SCMapStoriesDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b160fc

@end
