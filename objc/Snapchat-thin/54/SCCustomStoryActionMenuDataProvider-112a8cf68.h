// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCustomStoryActionMenuDataProvider
// Superclass: NSObject
// Address: 0x112a8cf68

@interface SCCustomStoryActionMenuDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCUnifiedActionMenuDataProviderDelegate>",W,N,V_delegate

// -[SCCustomStoryActionMenuDataProvider initWithPublicationId:options:viewProfileAvailable:customStoriesDataFetcher:customStoriesDataSyncer:currentUserId:snapchattersDataFetcher:circumstanceEngine:]
// Type encoding: @76@0:8@16q24B32@36@44@52@60@68
// Implementation: 0x105b337d8

// -[SCCustomStoryActionMenuDataProvider updateViewModelWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105b3394c

// -[SCCustomStoryActionMenuDataProvider _updateViewModelWithCustomStory:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105b33acc

// -[SCCustomStoryActionMenuDataProvider _updateViewModelWithCustomStory:userIdToSnapchatter:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105b34014

// -[SCCustomStoryActionMenuDataProvider didUpdateCustomStoriesWithPublicationIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b34d6c

// -[SCCustomStoryActionMenuDataProvider didUpdatePostableStories]
// Type encoding: v16@0:8
// Implementation: 0x105b34dc0

// -[SCCustomStoryActionMenuDataProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x105b34dc4

// -[SCCustomStoryActionMenuDataProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b34ddc

// -[SCCustomStoryActionMenuDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b34de8

@end
