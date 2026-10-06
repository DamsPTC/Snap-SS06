// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingFindNearbyFriendsInteractor
// Superclass: NSObject
// Address: 0x112aecfa8

@interface SCFriendingFindNearbyFriendsInteractor

// Property: nearbyFriendsEnabledStatusObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendingFindNearbyFriendsInteractor initWithLocationPermissionManager:findNearbyFriendsWorker:applicationLifecycleEvents:nearbyFriendsRepository:circumstanceEngine:grapheneLogger:nearbyFriendsSeenAndAddTracker:blizzardLogger:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x106679c38

// -[SCFriendingFindNearbyFriendsInteractor userEnteredNearbyPage]
// Type encoding: v16@0:8
// Implementation: 0x106679e38

// -[SCFriendingFindNearbyFriendsInteractor userLeftNearbyPage:chatIconClickedCount:profilePageViewCount:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x106679ec8

// -[SCFriendingFindNearbyFriendsInteractor nearbyFriendsEnabledStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x106679ff4

// -[SCFriendingFindNearbyFriendsInteractor onUserToggleNearbyFriends:preciseLocationPromptPresenter:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10667a01c

// -[SCFriendingFindNearbyFriendsInteractor onUserSeenNearbyFriend:index:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10667a16c

// -[SCFriendingFindNearbyFriendsInteractor _checkUserLocationAuthorizationAndAccuracyPermission]
// Type encoding: v16@0:8
// Implementation: 0x10667a1fc

// -[SCFriendingFindNearbyFriendsInteractor _showLocationAccuracyPermissionDialog]
// Type encoding: v16@0:8
// Implementation: 0x10667a2ac

// -[SCFriendingFindNearbyFriendsInteractor _subscribeToAppLifecycleEvents]
// Type encoding: v16@0:8
// Implementation: 0x10667a300

// -[SCFriendingFindNearbyFriendsInteractor _applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x10667a4d8

// -[SCFriendingFindNearbyFriendsInteractor _applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10667a574

// -[SCFriendingFindNearbyFriendsInteractor _subscribeLocationPermissionAuthorizationStatus]
// Type encoding: v16@0:8
// Implementation: 0x10667a5d8

// -[SCFriendingFindNearbyFriendsInteractor _userLocationPermissionStatusUpdated:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10667a83c

// -[SCFriendingFindNearbyFriendsInteractor _locationProviderDidUpdateLocationAccuracy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10667a85c

// -[SCFriendingFindNearbyFriendsInteractor _stopNearbyFeatureTimer]
// Type encoding: v16@0:8
// Implementation: 0x10667a874

// -[SCFriendingFindNearbyFriendsInteractor _startNearbyFeatureTimer]
// Type encoding: v16@0:8
// Implementation: 0x10667a8a0

// -[SCFriendingFindNearbyFriendsInteractor _onNearbyFeatureTimeout]
// Type encoding: v16@0:8
// Implementation: 0x10667a948

// -[SCFriendingFindNearbyFriendsInteractor _turnOffNearbyFeature]
// Type encoding: v16@0:8
// Implementation: 0x10667a984

// -[SCFriendingFindNearbyFriendsInteractor _updateNearbyFriendsEnabledStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x10667a9fc

// -[SCFriendingFindNearbyFriendsInteractor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10667ab50

// -[SCFriendingFindNearbyFriendsInteractor didReceiveNearbyFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x10667ab94

// -[SCFriendingFindNearbyFriendsInteractor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10667ac54

@end
