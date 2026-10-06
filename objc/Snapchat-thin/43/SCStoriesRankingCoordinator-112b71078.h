// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesRankingCoordinator
// Superclass: NSObject
// Address: 0x112b71078

@interface SCStoriesRankingCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesRankingCoordinator initWithDocObjectContext:performer:discoverFeedRanker:interactionHistoryManager:storiesDataCoordinator:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107b161b4

// -[SCStoriesRankingCoordinator reorderFriendStoriesLocallyWithRerankTrigger:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x107b162d8

// -[SCStoriesRankingCoordinator _reorderFriendStoriesLocallyWithStoryIds:rerankTrigger:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x107b16430

// -[SCStoriesRankingCoordinator _reorderFriendStoriesLocallyWithStoryIds:interactionHistoryArray:rerankTrigger:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x107b165e0

// -[SCStoriesRankingCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b167f8

@end
