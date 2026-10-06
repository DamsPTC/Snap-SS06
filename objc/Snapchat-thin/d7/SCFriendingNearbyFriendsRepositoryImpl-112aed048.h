// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingNearbyFriendsRepositoryImpl
// Superclass: NSObject
// Address: 0x112aed048

@interface SCFriendingNearbyFriendsRepositoryImpl

// Property: nearbySnapchattersObservable; attributes: T@"SCObservable",R,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendingNearbyFriendsRepositoryImpl initWithSnapchattersDataTracker:snapchattersDataFetcher:performerProvider:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10667bbd0

// -[SCFriendingNearbyFriendsRepositoryImpl nearbySnapchattersObservable]
// Type encoding: @16@0:8
// Implementation: 0x10667bd4c

// -[SCFriendingNearbyFriendsRepositoryImpl didReceiveNearbyFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x10667bd74

// -[SCFriendingNearbyFriendsRepositoryImpl clearAddedUserIdsAndCachedNearbyFriends]
// Type encoding: v16@0:8
// Implementation: 0x10667be80

// -[SCFriendingNearbyFriendsRepositoryImpl didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10667bf54

// -[SCFriendingNearbyFriendsRepositoryImpl didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10667c0f8

// -[SCFriendingNearbyFriendsRepositoryImpl _userAddedFriend:]
// Type encoding: v24@0:8@16
// Implementation: 0x10667c0fc

// -[SCFriendingNearbyFriendsRepositoryImpl _clearAddedUserIdsAndCachedNearbyFriends]
// Type encoding: v16@0:8
// Implementation: 0x10667c144

// -[SCFriendingNearbyFriendsRepositoryImpl _didReceiveNearbyFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x10667c174

// -[SCFriendingNearbyFriendsRepositoryImpl _buildNearbySnapchattersWithNearbyFriends:localSnapchatters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10667c318

// -[SCFriendingNearbyFriendsRepositoryImpl _filterAndPublishNearbyFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x10667c694

// -[SCFriendingNearbyFriendsRepositoryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10667c7f0

@end
