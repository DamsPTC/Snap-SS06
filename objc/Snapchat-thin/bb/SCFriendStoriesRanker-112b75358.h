// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendStoriesRanker
// Superclass: NSObject
// Address: 0x112b75358

@interface SCFriendStoriesRanker


// -[SCFriendStoriesRanker initWithCircumstanceEngine:storiesConfigProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107c00804

// -[SCFriendStoriesRanker reorderFriendStoriesRankedIds:storySummaries:rerankTrigger:interactionHistoryArray:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x107c00994

// -[SCFriendStoriesRanker _performReorderFriendStoriesRankedIds:storySummaries:rerankTrigger:interactionHistoryArray:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x107c00ba4

// -[SCFriendStoriesRanker _friendStoriesScoreFromInteractionHistory:storyInfo:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x107c01314

// -[SCFriendStoriesRanker _filterOriginalFriendStoriesInteractionHistory:]
// Type encoding: @24@0:8@16
// Implementation: 0x107c01510

// -[SCFriendStoriesRanker _logFriendStoriesInfoBeforeAndAfterRerankWithOriginalIds:updatedIds:storyIdToStoryInfo:fpsToHI:storyIdToHI:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x107c018fc

// -[SCFriendStoriesRanker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107c01900

@end
