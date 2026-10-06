// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedStoryPlaybackDataProvider
// Superclass: NSObject
// Address: 0x112aeb6f8

@interface SCManagedStoryPlaybackDataProvider

// Property: repliesTrayPayload; attributes: T@"SCSpotlightRepliesTrayPageLauncherPayload",&,N,V_repliesTrayPayload
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: shouldUseMyStoryConfigProvider; attributes: TB,N,VshouldUseMyStoryConfigProvider

// -[SCManagedStoryPlaybackDataProvider initWithCircumstanceEngine:]
// Type encoding: @24@0:8@16
// Implementation: 0x10665df1c

// -[SCManagedStoryPlaybackDataProvider storiesPlaybackMetadataForStoryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10665dfb0

// -[SCManagedStoryPlaybackDataProvider userStoryPlaybackSequenceByStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10665e230

// -[SCManagedStoryPlaybackDataProvider customStoryPlaybackSequenceByPublicationId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10665e7d4

// -[SCManagedStoryPlaybackDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10665e7dc

// -[SCManagedStoryPlaybackDataProvider topicStoryPlaybackSequenceByTopicStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10665e914

// -[SCManagedStoryPlaybackDataProvider singleSnapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10665e91c

// -[SCManagedStoryPlaybackDataProvider mapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10665e924

// -[SCManagedStoryPlaybackDataProvider bundleStoryPlaybackSequenceByBundleStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10665e92c

// -[SCManagedStoryPlaybackDataProvider savedStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10665e934

// -[SCManagedStoryPlaybackDataProvider triggerPaginationByCompositeId:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10665ee30

// -[SCManagedStoryPlaybackDataProvider registerSnapPlaybackInfos:withIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10665ee34

// -[SCManagedStoryPlaybackDataProvider singleSnapPlaybackInfoWithIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x10665eeb0

// -[SCManagedStoryPlaybackDataProvider prepareStoriesWithPlaybackOptions:options:viewSource:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10665ef28

// -[SCManagedStoryPlaybackDataProvider clearCommentsPayload]
// Type encoding: v16@0:8
// Implementation: 0x10665f038

// -[SCManagedStoryPlaybackDataProvider prepareViewStatesForPlayback:]
// Type encoding: v24@0:8@16
// Implementation: 0x10665f048

// -[SCManagedStoryPlaybackDataProvider shouldUseMyStoryConfigProvider]
// Type encoding: B16@0:8
// Implementation: 0x10665f078

// -[SCManagedStoryPlaybackDataProvider setShouldUseMyStoryConfigProvider:]
// Type encoding: v20@0:8B16
// Implementation: 0x10665f080

// -[SCManagedStoryPlaybackDataProvider repliesTrayPayload]
// Type encoding: @16@0:8
// Implementation: 0x10665f088

// -[SCManagedStoryPlaybackDataProvider setRepliesTrayPayload:]
// Type encoding: v24@0:8@16
// Implementation: 0x10665f090

// -[SCManagedStoryPlaybackDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10665f0c0

@end
