// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapBasePersonLocationsProviderV2
// Superclass: NSObject
// Address: 0x112a72028

@interface SCMapBasePersonLocationsProviderV2

// Property: locationsUpdatedCallback; attributes: T@?,C,V_locationsUpdatedCallback
// Property: freshLocationsCallback; attributes: T@?,C,V_freshLocationsCallback
// Property: pendingBestFriendCompletions; attributes: T@"NSMutableArray",&,V_pendingBestFriendCompletions
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: allPersonLocations; attributes: T@"NSSet",R,N
// Property: allPersonLocationClusters; attributes: T@"NSSet",R,N
// Property: hasHadSuccessfulUpdate; attributes: TB,R,N

// -[SCMapBasePersonLocationsProviderV2 initWithUserId:systemScope:friendLocationsDataStore:locationProvider:mapPeopleFriendsProvider:mapStatusStore:friendsFinderRequestService:mapUserPreferences:locationMutingService:valisService:internalPerformerQueue:circumstanceEngine:applicationLifecycleEvents:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x10583d460

// -[SCMapBasePersonLocationsProviderV2 dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10583df00

// -[SCMapBasePersonLocationsProviderV2 _scheduleReload]
// Type encoding: v16@0:8
// Implementation: 0x10583df44

// -[SCMapBasePersonLocationsProviderV2 hasHadSuccessfulUpdate]
// Type encoding: B16@0:8
// Implementation: 0x10583e0cc

// -[SCMapBasePersonLocationsProviderV2 registerPeriodicUpdatesForOwner:]
// Type encoding: v24@0:8@16
// Implementation: 0x10583e100

// -[SCMapBasePersonLocationsProviderV2 unregisterRequestedUpdatesForOwner:]
// Type encoding: v24@0:8@16
// Implementation: 0x10583e1c4

// -[SCMapBasePersonLocationsProviderV2 reload:ifOlderThan:]
// Type encoding: v32@0:8Q16d24
// Implementation: 0x10583e288

// -[SCMapBasePersonLocationsProviderV2 requestPeriodicUpdatesForOwner:]
// Type encoding: @24@0:8@16
// Implementation: 0x10583e2d4

// -[SCMapBasePersonLocationsProviderV2 reloadLocationIfOlderThan:]
// Type encoding: v24@0:8d16
// Implementation: 0x10583e330

// -[SCMapBasePersonLocationsProviderV2 isLastLocationUpdateOlderThan:]
// Type encoding: B24@0:8d16
// Implementation: 0x10583e334

// -[SCMapBasePersonLocationsProviderV2 locationsUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10583e338

// -[SCMapBasePersonLocationsProviderV2 personLocationForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10583e38c

// -[SCMapBasePersonLocationsProviderV2 personLocationClusterForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10583e3ec

// -[SCMapBasePersonLocationsProviderV2 allPersonLocations]
// Type encoding: @16@0:8
// Implementation: 0x10583e44c

// -[SCMapBasePersonLocationsProviderV2 allPersonLocationClusters]
// Type encoding: @16@0:8
// Implementation: 0x10583e4c4

// -[SCMapBasePersonLocationsProviderV2 bestFriendLocationsWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10583e53c

// -[SCMapBasePersonLocationsProviderV2 bestFriendLocationsWithType:maxBestFriendsToProcess:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x10583e548

// -[SCMapBasePersonLocationsProviderV2 sortedFriendLocationsFromCoordinate:maxFriendsToProcess:]
// Type encoding: @40@0:8{CLLocationCoordinate2D=dd}16@32
// Implementation: 0x10583eb44

// -[SCMapBasePersonLocationsProviderV2 bestFriendLocationsWithMaxClustersToProcess:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10583ee9c

// -[SCMapBasePersonLocationsProviderV2 next:]
// Type encoding: v24@0:8@16
// Implementation: 0x10583f444

// -[SCMapBasePersonLocationsProviderV2 complete]
// Type encoding: v16@0:8
// Implementation: 0x10583f448

// -[SCMapBasePersonLocationsProviderV2 _streamStateDidChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x10583f44c

// -[SCMapBasePersonLocationsProviderV2 _updateStreamingStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10583f498

// -[SCMapBasePersonLocationsProviderV2 _startStreamingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10583f694

// -[SCMapBasePersonLocationsProviderV2 _stopStreamingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10583f848

// -[SCMapBasePersonLocationsProviderV2 _handleStreamedClusters:]
// Type encoding: v24@0:8@16
// Implementation: 0x10583f900

// -[SCMapBasePersonLocationsProviderV2 _requiresBestFriendsRefresh]
// Type encoding: B16@0:8
// Implementation: 0x10583f9d0

// -[SCMapBasePersonLocationsProviderV2 _handleBestFriendLoadError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10583facc

// -[SCMapBasePersonLocationsProviderV2 _handleBestFriendsLoaded:expirationDate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10583fc3c

// -[SCMapBasePersonLocationsProviderV2 _processBestFriendCompletions]
// Type encoding: v16@0:8
// Implementation: 0x10583fd20

// -[SCMapBasePersonLocationsProviderV2 shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x10583ffbc

// -[SCMapBasePersonLocationsProviderV2 pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10583ffc4

// -[SCMapBasePersonLocationsProviderV2 getFriendLocationsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10583ffd0

// -[SCMapBasePersonLocationsProviderV2 getFreshFriendLocationsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1058400e4

// -[SCMapBasePersonLocationsProviderV2 getBestFriendLocationsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1058401a4

// -[SCMapBasePersonLocationsProviderV2 onFriendLocationsUpdatedWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x105840488

// -[SCMapBasePersonLocationsProviderV2 _composerAllFriendLocations]
// Type encoding: @16@0:8
// Implementation: 0x10584057c

// -[SCMapBasePersonLocationsProviderV2 reload]
// Type encoding: v16@0:8
// Implementation: 0x105840700

// -[SCMapBasePersonLocationsProviderV2 reloadIfOlderThan:]
// Type encoding: v24@0:8d16
// Implementation: 0x10584076c

// -[SCMapBasePersonLocationsProviderV2 isLastUpdateOlderThan:]
// Type encoding: B24@0:8d16
// Implementation: 0x1058407a0

// -[SCMapBasePersonLocationsProviderV2 cancelReload]
// Type encoding: v16@0:8
// Implementation: 0x105840824

// -[SCMapBasePersonLocationsProviderV2 _fetchFriendLocations]
// Type encoding: v16@0:8
// Implementation: 0x105840828

// -[SCMapBasePersonLocationsProviderV2 _loadFullResponseFromClustersResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105840a14

// -[SCMapBasePersonLocationsProviderV2 _updateWithStreamedFriendClusters:clearDataStore:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105840cac

// -[SCMapBasePersonLocationsProviderV2 _updateWithUnaryFriendClusters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105841038

// -[SCMapBasePersonLocationsProviderV2 _reloadFromRawStreamingClusters]
// Type encoding: v16@0:8
// Implementation: 0x105841120

// -[SCMapBasePersonLocationsProviderV2 _logClustersForDebugging:]
// Type encoding: v24@0:8@16
// Implementation: 0x105841194

// -[SCMapBasePersonLocationsProviderV2 _clusterContainingUserId:allClusters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105841198

// -[SCMapBasePersonLocationsProviderV2 _onLocationsChanged]
// Type encoding: v16@0:8
// Implementation: 0x105841344

// -[SCMapBasePersonLocationsProviderV2 _updateDataStoreWithFriendClusters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105841460

// -[SCMapBasePersonLocationsProviderV2 _lastSuccessfulUpdateTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1058419f4

// -[SCMapBasePersonLocationsProviderV2 _setLastSuccessfulUpdateTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x105841a30

// -[SCMapBasePersonLocationsProviderV2 _didUpdateMutedFriendsList:]
// Type encoding: v24@0:8@16
// Implementation: 0x105841a70

// -[SCMapBasePersonLocationsProviderV2 _handleMutedFriendsList:]
// Type encoding: v24@0:8@16
// Implementation: 0x105841b0c

// -[SCMapBasePersonLocationsProviderV2 locationProviderDidUpdateLocation]
// Type encoding: v16@0:8
// Implementation: 0x105841d48

// -[SCMapBasePersonLocationsProviderV2 _updateActiveUserLocation]
// Type encoding: v16@0:8
// Implementation: 0x105841e60

// -[SCMapBasePersonLocationsProviderV2 _mergeNewCurrentUserPersonLocationIntoFriendClusters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105841eec

// -[SCMapBasePersonLocationsProviderV2 _removeUserFromCluster:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105842234

// -[SCMapBasePersonLocationsProviderV2 _addUserToCluster:personToBeAdded:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105842378

// -[SCMapBasePersonLocationsProviderV2 _updatePersonLocationWithCluster:personToBeUpdated:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105842428

// -[SCMapBasePersonLocationsProviderV2 _clusterAfterRemovingUserId:userIdToBeRemoved:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105842664

// -[SCMapBasePersonLocationsProviderV2 _clusterAfterAddingPersonLocation:personToBeAdded:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058428b0

// -[SCMapBasePersonLocationsProviderV2 locationsUpdatedCallback]
// Type encoding: @?16@0:8
// Implementation: 0x105842a44

// -[SCMapBasePersonLocationsProviderV2 setLocationsUpdatedCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105842a50

// -[SCMapBasePersonLocationsProviderV2 freshLocationsCallback]
// Type encoding: @?16@0:8
// Implementation: 0x105842a58

// -[SCMapBasePersonLocationsProviderV2 setFreshLocationsCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105842a64

// -[SCMapBasePersonLocationsProviderV2 pendingBestFriendCompletions]
// Type encoding: @16@0:8
// Implementation: 0x105842a6c

// -[SCMapBasePersonLocationsProviderV2 setPendingBestFriendCompletions:]
// Type encoding: v24@0:8@16
// Implementation: 0x105842a78

// -[SCMapBasePersonLocationsProviderV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105842a80

@end
