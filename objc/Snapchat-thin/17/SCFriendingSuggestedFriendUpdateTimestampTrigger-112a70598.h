// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingSuggestedFriendUpdateTimestampTrigger
// Superclass: NSObject
// Address: 0x112a70598

@interface SCFriendingSuggestedFriendUpdateTimestampTrigger


// -[SCFriendingSuggestedFriendUpdateTimestampTrigger initWithCircumstanceEngine:featureSettingsService:snapchatterDataMutator:userStorageServices:timeProvider:performer:appStartExperimentReader:findFriendsEligibilityChecker:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10097d468

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger tryFetchSuggestedFriends]
// Type encoding: v16@0:8
// Implementation: 0x10097df64

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger endFetchSuggestedFriends:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10582d30c

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger clearSuggestedFriendsLastFetchedTimestamps]
// Type encoding: v16@0:8
// Implementation: 0x10582d344

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _warmup]
// Type encoding: v16@0:8
// Implementation: 0x10097d634

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _recoverValuesFromStorage]
// Type encoding: v16@0:8
// Implementation: 0x10097d67c

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _observeSuggestionFetchKey]
// Type encoding: v16@0:8
// Implementation: 0x10097da6c

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _fetchSuggestedFriendUpdatePreferenceKeyChange]
// Type encoding: v16@0:8
// Implementation: 0x10582d460

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _updateNewServerSuggestedFriendsTimestampInMilliSeconds]
// Type encoding: v16@0:8
// Implementation: 0x10098359c

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _tryFetchSuggestedFriends:]
// Type encoding: v24@0:8q16
// Implementation: 0x10098931c

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _isEligibleForFindFriends]
// Type encoding: B16@0:8
// Implementation: 0x100989550

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _isStillFethingSuggestion]
// Type encoding: B16@0:8
// Implementation: 0x1009894b8

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _shouldThrottleSuggestionFetch]
// Type encoding: B16@0:8
// Implementation: 0x10098de80

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _fetchSuggestedFriendsTriggerType]
// Type encoding: q16@0:8
// Implementation: 0x10098e450

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _isLoginOrSignup]
// Type encoding: B16@0:8
// Implementation: 0x10098e4f0

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _shouldFetchOnServerTimestampChanges]
// Type encoding: B16@0:8
// Implementation: 0x10098e510

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _isLastClientFetchSuggestionExpired]
// Type encoding: B16@0:8
// Implementation: 0x10098e520

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _fetchSuggestedFriendsWithTriggerSourceType:triggerType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10582d5b0

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _markIsFetchingSuggestedFriendsFinish]
// Type encoding: v16@0:8
// Implementation: 0x10582d64c

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _updateSuggestedFriendsLocalTimestamps]
// Type encoding: v16@0:8
// Implementation: 0x10582d6bc

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger _updateSuggestedFriendsFetchStartedDate]
// Type encoding: v16@0:8
// Implementation: 0x10582d7d8

// -[SCFriendingSuggestedFriendUpdateTimestampTrigger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10582d854

@end
