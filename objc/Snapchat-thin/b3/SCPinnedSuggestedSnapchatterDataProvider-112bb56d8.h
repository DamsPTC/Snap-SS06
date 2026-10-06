// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPinnedSuggestedSnapchatterDataProvider
// Superclass: NSObject
// Address: 0x112bb56d8

@interface SCPinnedSuggestedSnapchatterDataProvider

// Property: pinnedSuggestedSnapchattersObservable; attributes: T@"SCObservable",R,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPinnedSuggestedSnapchatterDataProvider initWithDocObjectContext:snapchattersDataTracker:performerProvider:pinningMetadataOfTopSuggestionsObservable:pinningMetadataOfRecentlyJoinersObservable:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1003e29d0

// -[SCPinnedSuggestedSnapchatterDataProvider pinnedSuggestedSnapchattersObservable]
// Type encoding: @16@0:8
// Implementation: 0x1003e3f98

// -[SCPinnedSuggestedSnapchatterDataProvider didEndSnapchattersSuggestDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108bdca28

// -[SCPinnedSuggestedSnapchatterDataProvider didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bdcb8c

// -[SCPinnedSuggestedSnapchatterDataProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108bdcb90

// -[SCPinnedSuggestedSnapchatterDataProvider _refetchPinnedSuggestedSnapchattersIfNeededWithSuggestDataRequestView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bdcb94

// -[SCPinnedSuggestedSnapchatterDataProvider _observePinningMetadataObservablesAndRefetchSuggestionsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108bdcd0c

// -[SCPinnedSuggestedSnapchatterDataProvider _fetchSuggestedSnapachattersFromPinnedMetadataForTopSuggestions:pinningMetadataForRecentlyJoiners:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108bdcf9c

// -[SCPinnedSuggestedSnapchatterDataProvider _orderSnapchatters:byOrderOfUserIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108bdd184

// -[SCPinnedSuggestedSnapchatterDataProvider _userIdsFromMergedPinningMetadataForTopSuggestions:pinningMetadataForRecentlyJoiners:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108bdd274

// -[SCPinnedSuggestedSnapchatterDataProvider _sortMergedPinningMetadataByReceiveTimestamp:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bdd368

// -[SCPinnedSuggestedSnapchatterDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bdd48c

@end
