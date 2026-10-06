// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingActiveStoryFetcher
// Superclass: NSObject
// Address: 0x112a49718

@interface SCFriendingActiveStoryFetcher


// -[SCFriendingActiveStoryFetcher initWithSnapchattersObservableRepository:activeStoryStatusFetcher:performerProvider:timeProvider:logger:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1055a986c

// -[SCFriendingActiveStoryFetcher activeStoryInfosForIncomingFriends]
// Type encoding: @16@0:8
// Implementation: 0x1055a9a10

// -[SCFriendingActiveStoryFetcher activeStoryInfosForSuggestionType:]
// Type encoding: @20@0:8I16
// Implementation: 0x1055a9a38

// -[SCFriendingActiveStoryFetcher fetchSuggestedFriendsActiveStoryInfoWithIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1055a9a6c

// -[SCFriendingActiveStoryFetcher fetchActiveStoryStatusForUserIds:requestSource:requestOrigin:completion:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x1055a9b78

// -[SCFriendingActiveStoryFetcher _fullFetchSuggestedFriendsOnAddFriendsPageInPerformerWithIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1055a9ce8

// -[SCFriendingActiveStoryFetcher _fetchActiveStoryInfoWithSuggestedUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055a9d40

// -[SCFriendingActiveStoryFetcher _observeIncomingFriendsObservable]
// Type encoding: v16@0:8
// Implementation: 0x1055a9ebc

// -[SCFriendingActiveStoryFetcher _observeSuggestionsOnAddFriendsObservable]
// Type encoding: v16@0:8
// Implementation: 0x1055aa05c

// -[SCFriendingActiveStoryFetcher _incomingFriendsReceivedInPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055aa1fc

// -[SCFriendingActiveStoryFetcher _fetchActiveStoryInfoWithIncomingFriendsUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055aa274

// -[SCFriendingActiveStoryFetcher _suggestionsReceivedInPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055aa3f0

// -[SCFriendingActiveStoryFetcher _fetchActiveStoryStatusForUserIds:requestSource:requestOrigin:completion:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x1055aa4d0

// -[SCFriendingActiveStoryFetcher _createLazyPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055aa5c8

// -[SCFriendingActiveStoryFetcher _publishNewIncomingFriendsToActiveStoryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055aa6bc

// -[SCFriendingActiveStoryFetcher _publishNewSuggestedFriendsToActiveStoryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055aa73c

// -[SCFriendingActiveStoryFetcher _countWithActiveStoryFromUserIdToActiveStoryInfo:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1055aa7bc

// -[SCFriendingActiveStoryFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055aa824

@end
