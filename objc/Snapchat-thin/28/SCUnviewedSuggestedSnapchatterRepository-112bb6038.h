// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnviewedSuggestedSnapchatterRepository
// Superclass: NSObject
// Address: 0x112bb6038

@interface SCUnviewedSuggestedSnapchatterRepository

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: unviewedSuggestedFriendsForAddFriends; attributes: T@"SCObservable",R,N

// -[SCUnviewedSuggestedSnapchatterRepository initWithSnapchattersDataProvider:dataTracker:docObjectContext:performerProvider:circumstanceEngine:userPreferences:pinnedSuggestedSnapchattersObservable:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x108beee80

// -[SCUnviewedSuggestedSnapchatterRepository unviewedSuggestedFriendsForAddFriends]
// Type encoding: @16@0:8
// Implementation: 0x108bef234

// -[SCUnviewedSuggestedSnapchatterRepository didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108bef25c

// -[SCUnviewedSuggestedSnapchatterRepository didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bef260

// -[SCUnviewedSuggestedSnapchatterRepository didEndSnapchattersSuggestDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108bef264

// -[SCUnviewedSuggestedSnapchatterRepository _didReceiveNewPinnedSuggestedSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bef34c

// -[SCUnviewedSuggestedSnapchatterRepository _fetchAddFriendsSuggestionsAndTriggerTimerBadgeIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x108bef418

// -[SCUnviewedSuggestedSnapchatterRepository _didReceiveSuggestions:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108bef58c

// -[SCUnviewedSuggestedSnapchatterRepository _markTopKSuggestionsAsUnviewedFromSnapchatters:topK:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108bef800

// -[SCUnviewedSuggestedSnapchatterRepository _isLocalTimerBadgeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108befcb4

// -[SCUnviewedSuggestedSnapchatterRepository _timerBadgeTTLHours]
// Type encoding: Q16@0:8
// Implementation: 0x108befccc

// -[SCUnviewedSuggestedSnapchatterRepository _topKToBeBadged]
// Type encoding: Q16@0:8
// Implementation: 0x108befcf8

// -[SCUnviewedSuggestedSnapchatterRepository _updateLastLocalTimerBadgeSetIfNewer]
// Type encoding: v16@0:8
// Implementation: 0x108befd24

// -[SCUnviewedSuggestedSnapchatterRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108befe14

@end
