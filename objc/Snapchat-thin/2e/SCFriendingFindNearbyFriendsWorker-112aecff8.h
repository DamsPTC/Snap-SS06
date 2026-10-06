// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingFindNearbyFriendsWorker
// Superclass: NSObject
// Address: 0x112aecff8

@interface SCFriendingFindNearbyFriendsWorker

// Property: delegate; attributes: T@"<SCFriendingFindNearbyFriendsWorkerDelegate>",W,N,V_delegate

// -[SCFriendingFindNearbyFriendsWorker initWithFindFriendsGrpcService:locationProvider:performerProvider:circumstanceEngine:grapheneLogger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10667ad10

// -[SCFriendingFindNearbyFriendsWorker startFindingNearbyFriendsOnNearbyPage]
// Type encoding: v16@0:8
// Implementation: 0x10667aea0

// -[SCFriendingFindNearbyFriendsWorker stopFindingNearbyFriendsOnNearbyPage]
// Type encoding: v16@0:8
// Implementation: 0x10667aec4

// -[SCFriendingFindNearbyFriendsWorker _setupNearbyFriendsPollingOnNearbyPage]
// Type encoding: v16@0:8
// Implementation: 0x10667aec8

// -[SCFriendingFindNearbyFriendsWorker _fetchNearbyFriends:]
// Type encoding: v20@0:8B16
// Implementation: 0x10667b030

// -[SCFriendingFindNearbyFriendsWorker _fetchNearbyFriendsInPerformer:]
// Type encoding: v20@0:8B16
// Implementation: 0x10667b11c

// -[SCFriendingFindNearbyFriendsWorker _handleGetNearbyFriendsResponse:error:startTime:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10667b298

// -[SCFriendingFindNearbyFriendsWorker _requestActiveLocationUpdates]
// Type encoding: v16@0:8
// Implementation: 0x10667b3cc

// -[SCFriendingFindNearbyFriendsWorker _locationProviderDidUpdateLocations]
// Type encoding: v16@0:8
// Implementation: 0x10667b6b4

// -[SCFriendingFindNearbyFriendsWorker startFindingNearbyFriendsInBackground]
// Type encoding: v16@0:8
// Implementation: 0x10667b74c

// -[SCFriendingFindNearbyFriendsWorker stopFindingNearbyFriendsInBackground]
// Type encoding: v16@0:8
// Implementation: 0x10667b770

// -[SCFriendingFindNearbyFriendsWorker _requestLocationInBackground]
// Type encoding: v16@0:8
// Implementation: 0x10667b774

// -[SCFriendingFindNearbyFriendsWorker _setupNearbyFriendsPollingInBackground]
// Type encoding: v16@0:8
// Implementation: 0x10667b90c

// -[SCFriendingFindNearbyFriendsWorker _cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x10667ba74

// -[SCFriendingFindNearbyFriendsWorker dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10667badc

// -[SCFriendingFindNearbyFriendsWorker delegate]
// Type encoding: @16@0:8
// Implementation: 0x10667bb20

// -[SCFriendingFindNearbyFriendsWorker setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10667bb38

// -[SCFriendingFindNearbyFriendsWorker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10667bb44

@end
