// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPeopleFriendStore
// Superclass: NSObject
// Address: 0x112b08ac8

@interface SCComposerPeopleFriendStore

// Property: friendsObservable; attributes: T@"SCBridgeObservable",&,D,N
// Property: bestFriendsObservable; attributes: T@"SCBridgeObservable",?,&,N
// Property: friendCountObservable; attributes: T@"SCBridgeObservable",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerPeopleFriendStore initWithSnapchattersDataFetcher:snapchattersDataMutator:snapchattersDataTracker:snapchatterObservableRepository:circumstanceEngine:placement:plusFeatureGating:emissionPerformer:]
// Type encoding: @80@0:8@16@24@32@40@48q56@64@72
// Implementation: 0x106991a74

// -[SCComposerPeopleFriendStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106991d70

// -[SCComposerPeopleFriendStore getBestFriendsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106991d7c

// -[SCComposerPeopleFriendStore getFriendsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106991e8c

// -[SCComposerPeopleFriendStore getFriendCountWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106992748

// -[SCComposerPeopleFriendStore getFriendByIdWithUserId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106992894

// -[SCComposerPeopleFriendStore addFriendWithRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106992ac8

// -[SCComposerPeopleFriendStore onFriendsUpdatedWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x106992e68

// -[SCComposerPeopleFriendStore _isAddFriendCooldownDialogOn]
// Type encoding: B16@0:8
// Implementation: 0x1069930f4

// -[SCComposerPeopleFriendStore friendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106993384

// -[SCComposerPeopleFriendStore bestFriendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1069933c8

// -[SCComposerPeopleFriendStore friendCountObservable]
// Type encoding: @16@0:8
// Implementation: 0x106993474

// -[SCComposerPeopleFriendStore _friendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106993510

// -[SCComposerPeopleFriendStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069937b0

// +[SCComposerPeopleFriendStore getFriendsCompletionHandlerForCompletion:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x10699310c

@end
