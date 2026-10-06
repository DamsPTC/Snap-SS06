// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapPlaybackAttributes
// Superclass: NSObject
// Address: 0x1129c0da0

@interface SCStoriesSnapPlaybackAttributes

// Property: description; attributes: T@"NSString",N,R

// -[SCStoriesSnapPlaybackAttributes description]
// Type encoding: @16@0:8
// Implementation: 0x1044bae34

// -[SCStoriesSnapPlaybackAttributes init]
// Type encoding: @16@0:8
// Implementation: 0x1044bae68

// -[SCStoriesSnapPlaybackAttributes copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1044baeb0

// -[SCStoriesSnapPlaybackAttributes matchUserStory:customStory:ourStory:topicStory:singleSnapStory:mapStory:savedStory:]
// Type encoding: v72@0:8@?16@?24@?32@?40@?48@?56@?64
// Implementation: 0x1044bb7e4

// -[SCStoriesSnapPlaybackAttributes .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1044bbcf4

// +[SCStoriesSnapPlaybackAttributes userStoryWithUserStoryType:boostMetadata:spotlightEngagementMetadata:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x1044baeb4

// +[SCStoriesSnapPlaybackAttributes customStoryWithType:publicationId:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x1044baf28

// +[SCStoriesSnapPlaybackAttributes ourStoryWithOurStoryId:ourStorySnapId:isSpotlightSnap:spotlightSnapStatus:spotlightEngagementMetadata:]
// Type encoding: @52@0:8@16@24B32q36@44
// Implementation: 0x1044baf84

// +[SCStoriesSnapPlaybackAttributes topicStoryWithSnapId:originalStoryId:sharedStorySubmissionId:topicId:topicStoryId:boostMetadata:spotlightEngagementMetadata:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1044bb04c

// +[SCStoriesSnapPlaybackAttributes singleSnapStoryWithStoryId:compositeStoryId:sharedStorySubmissionId:boostMetadata:spotlightEngagementMetadata:inChatContextParams:isShared:]
// Type encoding: @68@0:8@16@24@32@40@48@56B64
// Implementation: 0x1044bb1e4

// +[SCStoriesSnapPlaybackAttributes mapStoryWithStoryId:userStoryType:isProviderPhotoSnap:localitySubtitle:boostMetadata:spotlightEngagementMetadata:]
// Type encoding: @60@0:8@16q24B32@36@44@52
// Implementation: 0x1044bb31c

// +[SCStoriesSnapPlaybackAttributes savedStoryWithCompositeStoryId:businessId:boostMetadata:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1044bb408

@end
