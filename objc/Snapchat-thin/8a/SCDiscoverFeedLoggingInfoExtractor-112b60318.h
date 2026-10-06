// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedLoggingInfoExtractor
// Superclass: NSObject
// Address: 0x112b60318

@interface SCDiscoverFeedLoggingInfoExtractor


// -[SCDiscoverFeedLoggingInfoExtractor initWithViewModel:shouldLogSpotlight:shouldLogDiscover:startingClientId:isCameoStory:shouldLogFriendStory:loggingSourceLocation:snapchattersDataFetcher:circumstanceEngine:]
// Type encoding: @72@0:8@16B24B28@32B40B44Q48@56@64
// Implementation: 0x1071c55ec

// -[SCDiscoverFeedLoggingInfoExtractor addExtraValuesToEventData:playlist:itemLayout:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1071c5844

// -[SCDiscoverFeedLoggingInfoExtractor shouldLogDiscoverEventWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071c59d0

// -[SCDiscoverFeedLoggingInfoExtractor _resolveShouldLogForUserStorySequence:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071c5e08

// -[SCDiscoverFeedLoggingInfoExtractor _shouldCheckFriendshipStatus]
// Type encoding: B16@0:8
// Implementation: 0x1071c600c

// -[SCDiscoverFeedLoggingInfoExtractor _shouldLogBasedOnFriendshipCheckWithUserId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071c6028

// -[SCDiscoverFeedLoggingInfoExtractor storyLoggingInfoWithItemLayout:]
// Type encoding: @24@0:8q16
// Implementation: 0x1071c6130

// -[SCDiscoverFeedLoggingInfoExtractor _storyLoggingInfoFromOperaPlaybackSequence:itemLayout:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1071c6e44

// -[SCDiscoverFeedLoggingInfoExtractor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071c8c18

// +[SCDiscoverFeedLoggingInfoExtractor _snapLoggingInfoForPlaybackSequence:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071c7dfc

// +[SCDiscoverFeedLoggingInfoExtractor storyLoggingInfoFromPlaybackSequence:customStoryMetadata:itemPosition:itemLayout:startingClientId:isLoggingFrom4thTabFriendStorySection:]
// Type encoding: @60@0:8@16@24@32q40@48B56
// Implementation: 0x1071c7fc4

@end
