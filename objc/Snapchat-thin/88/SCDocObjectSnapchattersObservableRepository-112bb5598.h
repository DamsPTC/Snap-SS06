// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDocObjectSnapchattersObservableRepository
// Superclass: NSObject
// Address: 0x112bb5598

@interface SCDocObjectSnapchattersObservableRepository


// -[SCDocObjectSnapchattersObservableRepository initWithDocObjectContext:currentUserId:snapchattersDataSearcher:userIdToSnapchatterFetcher:snapchattersPublicInfoFetcher:pinnedSuggestedSnapchattersObservable:fetchedResultObserverRepository:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x108bd9fb4

// -[SCDocObjectSnapchattersObservableRepository incomingSnapchatterObservableWithQueue:bypassSizeLimit:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108bda198

// -[SCDocObjectSnapchattersObservableRepository pendingSnapchatterObservableWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bda228

// -[SCDocObjectSnapchattersObservableRepository outgoingSnapchatterObservableWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bda2b0

// -[SCDocObjectSnapchattersObservableRepository outgoingSnapchatterObservableWithoutCurrentUserWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bda338

// -[SCDocObjectSnapchattersObservableRepository mutualFriendsObservableWithQueue:exceptUserIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108bda574

// -[SCDocObjectSnapchattersObservableRepository outgoingSnapchatterObservableWithQueryLimit:queue:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x108bda6b0

// -[SCDocObjectSnapchattersObservableRepository outgoingSnapchatterObservableWithTimestampLowerBound:queue:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x108bda740

// -[SCDocObjectSnapchattersObservableRepository nonFriendContactSnapchatterObservableWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bda7d8

// -[SCDocObjectSnapchattersObservableRepository suggestedSnapchatterObservableForSuggestionPage:queue:]
// Type encoding: @28@0:8I16@20
// Implementation: 0x108bda860

// -[SCDocObjectSnapchattersObservableRepository bestFriendSnapchatterObservableWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bdaa10

// -[SCDocObjectSnapchattersObservableRepository pinnedSuggestedSnapchatterObservable]
// Type encoding: @16@0:8
// Implementation: 0x108bdae34

// -[SCDocObjectSnapchattersObservableRepository nonFriendSnapchatterObservableWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bdae5c

// -[SCDocObjectSnapchattersObservableRepository localOrRemoteSnapchatterObservableWithUserIds:requestSource:queue:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x108bdaee4

// -[SCDocObjectSnapchattersObservableRepository snapchatterObservableWithUserIds:queue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108bdb2e0

// -[SCDocObjectSnapchattersObservableRepository snapchatterObservableWithUserId:queue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108bdb4b8

// -[SCDocObjectSnapchattersObservableRepository pinnedBestFriendSnapchatterObservableWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bdb57c

// -[SCDocObjectSnapchattersObservableRepository _localOrRemoteSnapchatterObservableWithUserIds:requestSource:queue:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x108bdb6d4

// -[SCDocObjectSnapchattersObservableRepository _suggestionUserIdsObservableForSuggestionPage:queue:]
// Type encoding: @28@0:8I16@20
// Implementation: 0x108bdb80c

// -[SCDocObjectSnapchattersObservableRepository _suggestionUserIdsAfterPromoteTopDisplayedSuggestion:suggestionUserIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108bdba24

// -[SCDocObjectSnapchattersObservableRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bdbcb0

@end
