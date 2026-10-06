// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingInlineSuggestionsImpressionLimitManager
// Superclass: NSObject
// Address: 0x112a6fc38

@interface SCFriendingInlineSuggestionsImpressionLimitManager

// Property: hideTimestamp; attributes: Td,N
// Property: impressionCount; attributes: Tq,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: shouldShowInlineSuggestions; attributes: TB,R,N

// -[SCFriendingInlineSuggestionsImpressionLimitManager initWithEventAnnouncer:snapchattersDataTracker:circumstanceEngine:featureSettingsService:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10581bd84

// -[SCFriendingInlineSuggestionsImpressionLimitManager hideTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x10581bee4

// -[SCFriendingInlineSuggestionsImpressionLimitManager setHideTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x10581bf24

// -[SCFriendingInlineSuggestionsImpressionLimitManager impressionCount]
// Type encoding: q16@0:8
// Implementation: 0x10581bf68

// -[SCFriendingInlineSuggestionsImpressionLimitManager setImpressionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10581bfa8

// -[SCFriendingInlineSuggestionsImpressionLimitManager _isValidSuggestion:]
// Type encoding: B24@0:8@16
// Implementation: 0x10581bfe4

// -[SCFriendingInlineSuggestionsImpressionLimitManager _isSnapchatterBeingBlocked:]
// Type encoding: B24@0:8@16
// Implementation: 0x10581c06c

// -[SCFriendingInlineSuggestionsImpressionLimitManager _didReachImpressionLimit]
// Type encoding: B16@0:8
// Implementation: 0x10581c11c

// -[SCFriendingInlineSuggestionsImpressionLimitManager _updateTimestampIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10581c148

// -[SCFriendingInlineSuggestionsImpressionLimitManager _resetDisabledSuggestionsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10581c1cc

// -[SCFriendingInlineSuggestionsImpressionLimitManager _resetImpressionCount]
// Type encoding: v16@0:8
// Implementation: 0x10581c2a8

// -[SCFriendingInlineSuggestionsImpressionLimitManager filteredSnapchatters:]
// Type encoding: @24@0:8@16
// Implementation: 0x10581c2d4

// -[SCFriendingInlineSuggestionsImpressionLimitManager shouldShowInlineSuggestions]
// Type encoding: B16@0:8
// Implementation: 0x10581c56c

// -[SCFriendingInlineSuggestionsImpressionLimitManager didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10581c598

// -[SCFriendingInlineSuggestionsImpressionLimitManager didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10581c71c

// -[SCFriendingInlineSuggestionsImpressionLimitManager didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10581c764

// -[SCFriendingInlineSuggestionsImpressionLimitManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10581c768

@end
