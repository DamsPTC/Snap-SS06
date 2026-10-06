// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTopicPagePlaybackDataProvider
// Superclass: NSObject
// Address: 0x112b0f148

@interface SCTopicPagePlaybackDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTopicPagePlaybackDataProvider initWithTopicPlaybackInfoMap:topic:displayName:storiesConfig:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106a820e8

// -[SCTopicPagePlaybackDataProvider updatePlaybackInfoMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a821e8

// -[SCTopicPagePlaybackDataProvider storiesPlaybackMetadataForStoryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106a822c8

// -[SCTopicPagePlaybackDataProvider userStoryPlaybackSequenceByStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a82440

// -[SCTopicPagePlaybackDataProvider customStoryPlaybackSequenceByPublicationId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a82448

// -[SCTopicPagePlaybackDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a82450

// -[SCTopicPagePlaybackDataProvider topicStoryPlaybackSequenceByTopicStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a82458

// -[SCTopicPagePlaybackDataProvider singleSnapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a825b8

// -[SCTopicPagePlaybackDataProvider mapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a825c0

// -[SCTopicPagePlaybackDataProvider savedStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a825c8

// -[SCTopicPagePlaybackDataProvider triggerPaginationByCompositeId:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a825d0

// -[SCTopicPagePlaybackDataProvider bundleStoryPlaybackSequenceByBundleStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a825d4

// -[SCTopicPagePlaybackDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a825dc

@end
