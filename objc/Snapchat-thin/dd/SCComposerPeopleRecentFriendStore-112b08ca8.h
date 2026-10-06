// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPeopleRecentFriendStore
// Superclass: NSObject
// Address: 0x112b08ca8

@interface SCComposerPeopleRecentFriendStore

// Property: recentlyAddedFriendsObservable; attributes: T@"SCBridgeObservable",&,N,V_recentlyAddedFriendsObservable
// Property: recentlyHiddenFriendsObservable; attributes: T@"SCBridgeObservable",&,N,V_recentlyHiddenFriendsObservable
// Property: recentlyIgnoredFriendsObservable; attributes: T@"SCBridgeObservable",&,N,V_recentlyIgnoredFriendsObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerPeopleRecentFriendStore initWithSnapchattersDataFetcher:snapchattersDataTracker:hiddenSuggestionCoordinator:performerProvider:userInfoServices:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106997fb8

// -[SCComposerPeopleRecentFriendStore _initializeData]
// Type encoding: v16@0:8
// Implementation: 0x1069981f4

// -[SCComposerPeopleRecentFriendStore _createLazyPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x106998220

// -[SCComposerPeopleRecentFriendStore _fetchRecentlyIgnoredIncomingFriendsAndPublish]
// Type encoding: v16@0:8
// Implementation: 0x106998314

// -[SCComposerPeopleRecentFriendStore _publishRecentlyIgnoredIncomingFriendsWithSnapchatters:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106998488

// -[SCComposerPeopleRecentFriendStore _fetchRecentlyAddedFriendsAndPublish]
// Type encoding: v16@0:8
// Implementation: 0x106998670

// -[SCComposerPeopleRecentFriendStore _publishRecentlyAddedFriendsWithSnapchatters:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069987e0

// -[SCComposerPeopleRecentFriendStore _fetchRecentlyHiddenSuggestionsAndPublish]
// Type encoding: v16@0:8
// Implementation: 0x106998af4

// -[SCComposerPeopleRecentFriendStore _publishRecentlyHiddenSuggestionsWithSnapchatters:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106998c64

// -[SCComposerPeopleRecentFriendStore didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106998dc4

// -[SCComposerPeopleRecentFriendStore didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106998df0

// -[SCComposerPeopleRecentFriendStore didEndSnapchattersSuggestDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106998df4

// -[SCComposerPeopleRecentFriendStore recentlyAddedFriendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106998f78

// -[SCComposerPeopleRecentFriendStore setRecentlyAddedFriendsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106998f80

// -[SCComposerPeopleRecentFriendStore recentlyHiddenFriendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106998fb0

// -[SCComposerPeopleRecentFriendStore setRecentlyHiddenFriendsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106998fb8

// -[SCComposerPeopleRecentFriendStore recentlyIgnoredFriendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106998fe8

// -[SCComposerPeopleRecentFriendStore setRecentlyIgnoredFriendsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106998ff0

// -[SCComposerPeopleRecentFriendStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106999020

@end
