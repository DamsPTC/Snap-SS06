// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedStoriesReplayManager
// Superclass: NSObject
// Address: 0x112b686a8

@interface SCDiscoverFeedStoriesReplayManager

// Property: delegate; attributes: T@"<SCDiscoverFeedStoriesReplayManagingDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedStoriesReplayManager init]
// Type encoding: @16@0:8
// Implementation: 0x1079d9234

// -[SCDiscoverFeedStoriesReplayManager fetchStoriesRankInfoWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1079d9334

// -[SCDiscoverFeedStoriesReplayManager allStoryIdsPlayedInCurrentSession]
// Type encoding: @16@0:8
// Implementation: 0x1079d94d0

// -[SCDiscoverFeedStoriesReplayManager updateLastExpandedUnwatchedStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079d964c

// -[SCDiscoverFeedStoriesReplayManager startToDisplayStoryWithStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079d9708

// -[SCDiscoverFeedStoriesReplayManager clearAllWithReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x1079d9750

// -[SCDiscoverFeedStoriesReplayManager expandAllStories]
// Type encoding: v16@0:8
// Implementation: 0x1079d9808

// -[SCDiscoverFeedStoriesReplayManager handleFriendStoriesReplayRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079d9834

// -[SCDiscoverFeedStoriesReplayManager addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x1079d9ab0

// -[SCDiscoverFeedStoriesReplayManager removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079d9ab8

// -[SCDiscoverFeedStoriesReplayManager _handleAddStoryDataRequest:storyId:hasUnviewedSnaps:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1079d9ac0

// -[SCDiscoverFeedStoriesReplayManager _handleClearTokensWithDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079d9b44

// -[SCDiscoverFeedStoriesReplayManager _announceEventDataWithRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079d9b90

// -[SCDiscoverFeedStoriesReplayManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x1079d9c48

// -[SCDiscoverFeedStoriesReplayManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079d9c60

// -[SCDiscoverFeedStoriesReplayManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079d9c6c

@end
