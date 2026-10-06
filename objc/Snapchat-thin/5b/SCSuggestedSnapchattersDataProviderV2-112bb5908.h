// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSuggestedSnapchattersDataProviderV2
// Superclass: NSObject
// Address: 0x112bb5908

@interface SCSuggestedSnapchattersDataProviderV2

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSuggestedSnapchattersDataProviderV2 initWithDocObjectContext:userIdToSnapchatterFetcher:pinnedSuggestedSnapchattersObservable:reliablePinningLogger:findFriendsEligibilityChecker:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x108be5640

// -[SCSuggestedSnapchattersDataProviderV2 suggestedSnapchattersForPage:allowUsingFallback:]
// Type encoding: @24@0:8I16B20
// Implementation: 0x108be58a8

// -[SCSuggestedSnapchattersDataProviderV2 hasSuggestedSnapchattersForPage:allowUsingFallback:]
// Type encoding: B24@0:8I16B20
// Implementation: 0x108be5a40

// -[SCSuggestedSnapchattersDataProviderV2 _getUpdatedSnapchattersFromUserIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x108be5ca0

// -[SCSuggestedSnapchattersDataProviderV2 _getPinnedSuggestionsDirectly]
// Type encoding: @16@0:8
// Implementation: 0x108be5f78

// -[SCSuggestedSnapchattersDataProviderV2 displaySuggestionForPage:]
// Type encoding: @20@0:8I16
// Implementation: 0x108be610c

// -[SCSuggestedSnapchattersDataProviderV2 setDisplaySuggestion:forPage:]
// Type encoding: v28@0:8@16I24
// Implementation: 0x108be62dc

// -[SCSuggestedSnapchattersDataProviderV2 setDisplaySuggestionMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x108be63cc

// -[SCSuggestedSnapchattersDataProviderV2 _mergeSnapchatters:pinnedSuggestedSnapchatters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108be648c

// -[SCSuggestedSnapchattersDataProviderV2 _logTopTenExistingSuggestionsIfAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x108be66dc

// -[SCSuggestedSnapchattersDataProviderV2 _logIfSnapchatterIsPinnedAlready:snapchatterAtTheTop:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108be6770

// -[SCSuggestedSnapchattersDataProviderV2 _loggingWithTotalPinnedSuggestionsCount:prioritizedCount:pinnedCount:]
// Type encoding: v40@0:8Q16Q24Q32
// Implementation: 0x108be6874

// -[SCSuggestedSnapchattersDataProviderV2 _setPinnedSuggstedSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x108be6914

// -[SCSuggestedSnapchattersDataProviderV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108be69d4

@end
