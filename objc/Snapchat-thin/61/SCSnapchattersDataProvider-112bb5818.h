// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersDataProvider
// Superclass: NSObject
// Address: 0x112bb5818

@interface SCSnapchattersDataProvider


// -[SCSnapchattersDataProvider initWithUserIdToSnapchatterFetcher:usernameToSnapchatterFetcher:snapchattersFetchedResultObserverRepository:suggestedSnapchatterFetcher:userInfoRepository:incomingFriendsTracker:dataFullySyncedTracker:grapheneLogger:preferences:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10043e944

// -[SCSnapchattersDataProvider snapchatterWithUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bdfc64

// -[SCSnapchattersDataProvider snapchattersWithUserIds:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x100bd1f34

// -[SCSnapchattersDataProvider outgoingSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bdfee4

// -[SCSnapchattersDataProvider outgoingSnapchattersWithoutUserWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be00b0

// -[SCSnapchattersDataProvider outgoingSnapchattersForLetterKey:includingMyself:completionQueue:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x108be027c

// -[SCSnapchattersDataProvider mutualFriendSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be0484

// -[SCSnapchattersDataProvider mutualFriendSnapchattersWithIncludingMyself:includingTeamSnapchat:completionQueue:completionHandler:]
// Type encoding: v40@0:8B16B20@24@?32
// Implementation: 0x108be0498

// -[SCSnapchattersDataProvider DONOTUSE_mutualFriendSnapchattersWithIncludingMyself:includingTeamSnapchat:completionQueue:completionHandler:]
// Type encoding: v40@0:8B16B20@24@?32
// Implementation: 0x108be049c

// -[SCSnapchattersDataProvider _mutualFriendSnapchattersWithIncludingMyself:includingTeamSnapchat:completionQueue:completionHandler:]
// Type encoding: v40@0:8B16B20@24@?32
// Implementation: 0x108be04a0

// -[SCSnapchattersDataProvider allIncomingSnapchattersWithShouldBypassSizeLimit:completionQueue:completionHandler:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x108be0684

// -[SCSnapchattersDataProvider rankedIncomingSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be085c

// -[SCSnapchattersDataProvider displayIncomingSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be0a20

// -[SCSnapchattersDataProvider suggestedSnapchattersForSuggestionPage:completionQueue:completionHandler:]
// Type encoding: v36@0:8I16@20@?28
// Implementation: 0x108be0bec

// -[SCSnapchattersDataProvider pendingIncomingSnapchattersCountWithLimit:requireNonEmptyAddSource:unviewedOnly:completionQueue:completionHandler:]
// Type encoding: v48@0:8Q16B24B28@32@?40
// Implementation: 0x108be0dc8

// -[SCSnapchattersDataProvider hasSuggestedSnapchattersForSuggestionPage:completionQueue:completionHandler:]
// Type encoding: v36@0:8I16@20@?28
// Implementation: 0x108be1014

// -[SCSnapchattersDataProvider nonFriendsSuggestedSnapchattersForSuggestionPage:completionQueue:completionHandler:]
// Type encoding: v36@0:8I16@20@?28
// Implementation: 0x108be1264

// -[SCSnapchattersDataProvider contactSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be1560

// -[SCSnapchattersDataProvider googleContactSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be169c

// -[SCSnapchattersDataProvider facebookContactSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be1868

// -[SCSnapchattersDataProvider nonFriendContactSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be1a34

// -[SCSnapchattersDataProvider rankedBestFriendSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be1c00

// -[SCSnapchattersDataProvider rankedExtendedBestFriendSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be1dc4

// -[SCSnapchattersDataProvider recentAndSuggestedFriendSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be1f88

// -[SCSnapchattersDataProvider DONOTUSE_recentAndSuggestedFriendSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be1f8c

// -[SCSnapchattersDataProvider _recentAndSuggestedFriendSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be1f90

// -[SCSnapchattersDataProvider latestIncomingAddedFriendsTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x108be2160

// -[SCSnapchattersDataProvider latestOutgoingAddFriendTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x108be222c

// -[SCSnapchattersDataProvider outgoingFriendsCount]
// Type encoding: Q16@0:8
// Implementation: 0x108be23dc

// -[SCSnapchattersDataProvider mutualFriendsCount]
// Type encoding: Q16@0:8
// Implementation: 0x100bbe6e8

// -[SCSnapchattersDataProvider bestFriendsCount]
// Type encoding: Q16@0:8
// Implementation: 0x108be249c

// -[SCSnapchattersDataProvider _snapchatterWithUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108be24d8

// -[SCSnapchattersDataProvider _snapchattersWithUserIds:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x100bec868

// -[SCSnapchattersDataProvider _outgoingSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be25d0

// -[SCSnapchattersDataProvider _outgoingSnapchattersForLetterKey:includingMyself:completionQueue:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x108be2718

// -[SCSnapchattersDataProvider _onPerformerMutualFriendSnapchattersWithIncludingMyself:includingTeamSnapchat:completionQueue:completionHandler:]
// Type encoding: v40@0:8B16B20@24@?32
// Implementation: 0x108be2968

// -[SCSnapchattersDataProvider _outgoingSnapchattersWithoutUserWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be2be8

// -[SCSnapchattersDataProvider _allIncomingSnapchattersWithShouldBypassSizeLimit:completionQueue:completionHandler:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x108be2de8

// -[SCSnapchattersDataProvider _rankedIncomingSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be2fc4

// -[SCSnapchattersDataProvider _displayIncomingSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be3104

// -[SCSnapchattersDataProvider _suggestedSnapchattersForSuggestionPage:filterBlock:completionQueue:completionHandler:]
// Type encoding: v44@0:8I16@?20@28@?36
// Implementation: 0x108be3318

// -[SCSnapchattersDataProvider _contactSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be3634

// -[SCSnapchattersDataProvider _googleContactSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be3774

// -[SCSnapchattersDataProvider _facebookContactSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be3910

// -[SCSnapchattersDataProvider _nonFriendContactSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be3aac

// -[SCSnapchattersDataProvider _rankedBestFriendSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108be3c24

// -[SCSnapchattersDataProvider _recentAndSuggestedFriendSnapchattersWithCompletionQueue:isStartupGuarded:completionHandler:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x108be3d00

// -[SCSnapchattersDataProvider _recentAndSuggestedFriendSnapchattersWithStartupGuard:]
// Type encoding: @20@0:8B16
// Implementation: 0x108be3de4

// -[SCSnapchattersDataProvider _rankedBestFriendsSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x108be3e94

// -[SCSnapchattersDataProvider _rankedExtendedBestFriendsSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x108be40cc

// -[SCSnapchattersDataProvider _logFetchSuggestionLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x108be4268

// -[SCSnapchattersDataProvider _logSnapchattersFetchWithUserIdsBeforeDataFullySyncedIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x100bf0984

// -[SCSnapchattersDataProvider _logOutgoingSnapchattersFetchBeforeDataFullySyncedIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108be42ac

// -[SCSnapchattersDataProvider _recentSnapchatterPredicate]
// Type encoding: @?16@0:8
// Implementation: 0x108be4324

// -[SCSnapchattersDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108be4480

@end
