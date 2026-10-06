// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersGrapheneLogger
// Superclass: NSObject
// Address: 0x112bb5b38

@interface SCSnapchattersGrapheneLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapchattersGrapheneLogger initWithGrapheneRegistry:appLifecycleManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1003e4424

// -[SCSnapchattersGrapheneLogger logRemoteSnapchatterMismatchCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108be7c48

// -[SCSnapchattersGrapheneLogger logRemoteSnapchatterNetworkError]
// Type encoding: v16@0:8
// Implementation: 0x108be7c9c

// -[SCSnapchattersGrapheneLogger logFetchedSnapchatterNullError]
// Type encoding: v16@0:8
// Implementation: 0x108be7ce4

// -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterCacheEntriesCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108be7d2c

// -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterUnexpectedUserIdsCount:requestSource:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x108be7d80

// -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterFetchWithType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108be7e4c

// -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterCacheHitCount:requestSource:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x108be7ee8

// -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterFetchedTotalCount:requestSource:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x108be7f8c

// -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterCacheMissCount:requestSource:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x108be8030

// -[SCSnapchattersGrapheneLogger logCachedRemoteSnapchatterRemovedCacheCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108be80d4

// -[SCSnapchattersGrapheneLogger logSuggestionSyncGapPeriod:]
// Type encoding: v24@0:8d16
// Implementation: 0x108be8128

// -[SCSnapchattersGrapheneLogger logSuggestionSyncWithType:result:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x108be817c

// -[SCSnapchattersGrapheneLogger logSuggestionsSyncLatency:fetchRequest:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x108be8264

// -[SCSnapchattersGrapheneLogger logIncomingFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003e47e4

// -[SCSnapchattersGrapheneLogger logStreakErrorsWithTypes:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c55f9c

// -[SCSnapchattersGrapheneLogger logFetchSuggestionLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x108be8398

// -[SCSnapchattersGrapheneLogger logSearchNonFriendsLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x108be83ec

// -[SCSnapchattersGrapheneLogger logFetchContactsLatencyMs:type:includingContactUpload:]
// Type encoding: v36@0:8q16Q24B32
// Implementation: 0x108be8440

// -[SCSnapchattersGrapheneLogger logNullSuggestionFromBackend]
// Type encoding: v16@0:8
// Implementation: 0x108be85d4

// -[SCSnapchattersGrapheneLogger logUserIdToSnapchattersFetchBeforeDataFullySynced]
// Type encoding: v16@0:8
// Implementation: 0x100bf0a08

// -[SCSnapchattersGrapheneLogger logOutgoingSnapchattersFetchBeforeDataFullySynced]
// Type encoding: v16@0:8
// Implementation: 0x108be861c

// -[SCSnapchattersGrapheneLogger logFetchContactsWithContactsPermission:isContactSyncEnabled:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x108be8664

// -[SCSnapchattersGrapheneLogger logEmptyResponseInFindFriendsWithPhoneVerified:contactBookIncluded:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x108be8720

// -[SCSnapchattersGrapheneLogger logErrorInFindFriendsWithErrorCode:]
// Type encoding: v24@0:8q16
// Implementation: 0x108be8860

// -[SCSnapchattersGrapheneLogger logEmptyContactsInFindFriendsWithPhoneVerified:contactBookIncluded:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x108be8988

// -[SCSnapchattersGrapheneLogger logEmptySuggestionsInFindFriendsWithPhoneVerified:contactBookIncluded:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x108be8a04

// -[SCSnapchattersGrapheneLogger logFindFriendsFetchInRegWithPhoneVerified:contactBookIncluded:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x108be8a80

// -[SCSnapchattersGrapheneLogger logFindFriendsContactBookSize:phoneVerified:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x108be8afc

// -[SCSnapchattersGrapheneLogger logFindFriendsContactBookUploaded:]
// Type encoding: v24@0:8q16
// Implementation: 0x108be8c04

// -[SCSnapchattersGrapheneLogger logFindFriendsContactsReceived:]
// Type encoding: v24@0:8q16
// Implementation: 0x108be8ccc

// -[SCSnapchattersGrapheneLogger logMultiAddFriendWithDataRequest:placement:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108be8d94

// -[SCSnapchattersGrapheneLogger logAddFriendWithSource:placement:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108be8ecc

// -[SCSnapchattersGrapheneLogger logFriendsSyncAddedMeReceived:]
// Type encoding: v24@0:8q16
// Implementation: 0x108be8f98

// -[SCSnapchattersGrapheneLogger logFriendsSyncFriendsReceived:]
// Type encoding: v24@0:8q16
// Implementation: 0x100c35470

// -[SCSnapchattersGrapheneLogger logFriendsSyncStaleDroppedWithPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x108be8fec

// -[SCSnapchattersGrapheneLogger logUserScoreRequestWithEndpoint:]
// Type encoding: v24@0:8@16
// Implementation: 0x108be9074

// -[SCSnapchattersGrapheneLogger logUserScoreResponseWithEndpoint:success:statusCode:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x108be9128

// -[SCSnapchattersGrapheneLogger logUserNameCalled]
// Type encoding: v16@0:8
// Implementation: 0x108be929c

// -[SCSnapchattersGrapheneLogger logDeleteProcessType:]
// Type encoding: v24@0:8@16
// Implementation: 0x108be92e0

// -[SCSnapchattersGrapheneLogger _setIncomingFriendsRepository:]
// Type encoding: v24@0:8@16
// Implementation: 0x108be9368

// -[SCSnapchattersGrapheneLogger _logUnviewedIncomingFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x108be94d0

// -[SCSnapchattersGrapheneLogger _findFriendsMetricDimensionsWithMetric:phoneVerified:contactBookIncluded:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x108be95c0

// -[SCSnapchattersGrapheneLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108be96e8

@end
