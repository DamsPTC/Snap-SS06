// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersHiddenSuggestionCoordinator
// Superclass: NSObject
// Address: 0x112bb5318

@interface SCSnapchattersHiddenSuggestionCoordinator


// -[SCSnapchattersHiddenSuggestionCoordinator initWithDocObjectContext:preferences:suggestService:currentDateProvider:hiddenSuggestionCache:userIdToSnapchatterFetcher:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x108bd0218

// -[SCSnapchattersHiddenSuggestionCoordinator fetchHiddenSuggestionSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bd03fc

// -[SCSnapchattersHiddenSuggestionCoordinator insertHiddenSuggestedSnapchatter:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd0538

// -[SCSnapchattersHiddenSuggestionCoordinator removeHiddenSuggestedSnapchatter:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd06a0

// -[SCSnapchattersHiddenSuggestionCoordinator cacheHideRequestWithUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd0808

// -[SCSnapchattersHiddenSuggestionCoordinator fetchCachedHiddenSuggestionsWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bd0970

// -[SCSnapchattersHiddenSuggestionCoordinator cachedHiddenSuggestionsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108bd0aa4

// -[SCSnapchattersHiddenSuggestionCoordinator fetchLastHiddenSuggestionPendingFeedbackWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bd0aec

// -[SCSnapchattersHiddenSuggestionCoordinator undoCacheHideRequestWithUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd0c20

// -[SCSnapchattersHiddenSuggestionCoordinator updateFeedbackIndex:forUser:completionQueue:completionHandler:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x108bd0d88

// -[SCSnapchattersHiddenSuggestionCoordinator hideCachedHiddenSuggestionsWithPlacement:completionQueue:completionHandler:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x108bd0efc

// -[SCSnapchattersHiddenSuggestionCoordinator _hideCachedHiddenSuggestionsWithHiddenSuggestions:placement:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x108bd112c

// -[SCSnapchattersHiddenSuggestionCoordinator _getHiddenSuggestionsWithFeedbackCountFromHiddenSuggestions:]
// Type encoding: Q24@0:8@16
// Implementation: 0x108bd1908

// -[SCSnapchattersHiddenSuggestionCoordinator _deleteSuggestedSnapchattersFriendInfo:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd1a14

// -[SCSnapchattersHiddenSuggestionCoordinator snapchattersHiddenSuggestionObserver]
// Type encoding: @16@0:8
// Implementation: 0x108bd1c14

// -[SCSnapchattersHiddenSuggestionCoordinator _fetchHiddenSuggestionWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bd1c88

// -[SCSnapchattersHiddenSuggestionCoordinator _insertHiddenSuggestedFriend:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd1f20

// -[SCSnapchattersHiddenSuggestionCoordinator _insertHiddenSuggestedFriends:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd2000

// -[SCSnapchattersHiddenSuggestionCoordinator _removeHiddenSuggestedFriend:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd23f4

// -[SCSnapchattersHiddenSuggestionCoordinator _processHiddenSuggestedFriendResponse:error:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108bd2580

// -[SCSnapchattersHiddenSuggestionCoordinator _removeExpiredHiddenSuggestedFriend]
// Type encoding: v16@0:8
// Implementation: 0x108bd2d58

// -[SCSnapchattersHiddenSuggestionCoordinator _cacheHideRequestWithUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd2d7c

// -[SCSnapchattersHiddenSuggestionCoordinator _fetchCachedHiddenSuggestionsWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bd2e70

// -[SCSnapchattersHiddenSuggestionCoordinator _fetchLastHiddenSuggestionPendingFeedbackWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bd2f68

// -[SCSnapchattersHiddenSuggestionCoordinator _undoCacheHideRequestWithUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd3060

// -[SCSnapchattersHiddenSuggestionCoordinator _updateFeedbackIndex:forUser:completionQueue:completionHandler:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x108bd3154

// -[SCSnapchattersHiddenSuggestionCoordinator _clearCache]
// Type encoding: v16@0:8
// Implementation: 0x108bd3258

// -[SCSnapchattersHiddenSuggestionCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bd328c

@end
