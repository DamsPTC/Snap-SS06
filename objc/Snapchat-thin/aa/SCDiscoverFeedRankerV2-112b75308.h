// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedRankerV2
// Superclass: NSObject
// Address: 0x112b75308

@interface SCDiscoverFeedRankerV2

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedRankerV2 initWithLazyDiscoverFeedInteractionHistoryManager:storiesConfigProvider:discoverFeedDataMutator:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107bfdc94

// -[SCDiscoverFeedRankerV2 addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bfdec4

// -[SCDiscoverFeedRankerV2 removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bfdecc

// -[SCDiscoverFeedRankerV2 reorderStories:scoringParams:isPullToRefresh:isDebouncedQuery:isLocalReranking:feedType:mostRecentStoryOnDataStoreForCurrentFeedType:preservedStoriesForCurrentFeedType:interactionHistoryArray:]
// Type encoding: @76@0:8@16@24B32B36B40Q44@52@60@68
// Implementation: 0x107bfded4

// -[SCDiscoverFeedRankerV2 _stashAdjacentAdStoriesAfterReRank:mostRecentStoryForCurrentFeedType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107bfec14

// -[SCDiscoverFeedRankerV2 _updatedStoriesByRerankingPromotedStories:withPreservedStories:interactionHistoryDict:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107bfee20

// -[SCDiscoverFeedRankerV2 _insertPromotedStoriesForBrandSuitability:currentStories:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107bff790

// -[SCDiscoverFeedRankerV2 _logCurrentStoriesGarmFlags:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bffb80

// -[SCDiscoverFeedRankerV2 _updatePromotedStoryForSlotRiskTolerance:adjStoriesRisk:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107bffd1c

// -[SCDiscoverFeedRankerV2 _logStoriesIdsBeforeAndAfterRerank:newStories:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bffff0

// -[SCDiscoverFeedRankerV2 _logsAdStoriesBeforeAndAfterRerank:newStories:storyToScore:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107c000bc

// -[SCDiscoverFeedRankerV2 _logOrganicStoriesIdsBeforeAndAfterRerank:newStories:storyToScore:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107c0042c

// -[SCDiscoverFeedRankerV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107c0079c

// +[SCDiscoverFeedRankerV2 announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107bfdeb8

@end
