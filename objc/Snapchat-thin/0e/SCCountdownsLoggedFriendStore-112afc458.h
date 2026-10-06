// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCountdownsLoggedFriendStore
// Superclass: NSObject
// Address: 0x112afc458

@interface SCCountdownsLoggedFriendStore

// Property: friendsObservable; attributes: T@"SCBridgeObservable",&,N
// Property: bestFriendsObservable; attributes: T@"SCBridgeObservable",?,&,N
// Property: friendCountObservable; attributes: T@"SCBridgeObservable",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCountdownsLoggedFriendStore initWithFriendStore:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067b0dd8

// -[SCCountdownsLoggedFriendStore getFriendsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1067b0e68

// -[SCCountdownsLoggedFriendStore getBestFriendsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1067b0fd4

// -[SCCountdownsLoggedFriendStore getFriendCountWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1067b1140

// -[SCCountdownsLoggedFriendStore addFriendWithRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1067b12ac

// -[SCCountdownsLoggedFriendStore onFriendsUpdatedWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x1067b1408

// -[SCCountdownsLoggedFriendStore friendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1067b14f4

// -[SCCountdownsLoggedFriendStore setFriendsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067b153c

// -[SCCountdownsLoggedFriendStore bestFriendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1067b1588

// -[SCCountdownsLoggedFriendStore setBestFriendsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067b15d0

// -[SCCountdownsLoggedFriendStore friendCountObservable]
// Type encoding: @16@0:8
// Implementation: 0x1067b161c

// -[SCCountdownsLoggedFriendStore setFriendCountObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067b1664

// -[SCCountdownsLoggedFriendStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1067b16b0

// -[SCCountdownsLoggedFriendStore shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x1067b16fc

// -[SCCountdownsLoggedFriendStore respondsToSelector:]
// Type encoding: B24@0:8:16
// Implementation: 0x1067b1740

// -[SCCountdownsLoggedFriendStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067b1760

@end
