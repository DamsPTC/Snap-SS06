// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesPlaybackManagementDataProvider
// Superclass: NSObject
// Address: 0x112b68c48

@interface SCStoriesPlaybackManagementDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesPlaybackManagementDataProvider initWithStoriesDataCoordinator:myStoriesDataCoordinator:friendStoriesPlaybackDataProvider:localSnapProPlaybackDataProvider:snapViewersDataCoordinator:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1079e63f0

// -[SCStoriesPlaybackManagementDataProvider deleteStateWithStoryId:snapComponentId:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x1079e6580

// -[SCStoriesPlaybackManagementDataProvider saveStateWithStoryId:snapComponentId:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x1079e65fc

// -[SCStoriesPlaybackManagementDataProvider postingStateByClientId:]
// Type encoding: q24@0:8@16
// Implementation: 0x1079e6678

// -[SCStoriesPlaybackManagementDataProvider snapIdToSnapViewersObservable]
// Type encoding: @16@0:8
// Implementation: 0x1079e66dc

// -[SCStoriesPlaybackManagementDataProvider queryFriendStorySummaryInfoWithUserId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1079e6724

// -[SCStoriesPlaybackManagementDataProvider friendStoriesPlaybackDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x1079e6890

// -[SCStoriesPlaybackManagementDataProvider localSnapProPlaybackDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x1079e6898

// -[SCStoriesPlaybackManagementDataProvider addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x1079e68a0

// -[SCStoriesPlaybackManagementDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079e68a8

// -[SCStoriesPlaybackManagementDataProvider didUpdateSummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079e68b0

// -[SCStoriesPlaybackManagementDataProvider didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079e68b4

// -[SCStoriesPlaybackManagementDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079e6bd8

@end
