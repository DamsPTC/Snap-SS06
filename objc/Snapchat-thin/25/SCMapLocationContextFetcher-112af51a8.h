// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapLocationContextFetcher
// Superclass: NSObject
// Address: 0x112af51a8

@interface SCMapLocationContextFetcher

// Property: locationContextGRPCService; attributes: T@"UNISCMLCLocationContext",R,N
// Property: lastLocationContextArray; attributes: T@"NSArray",&,V_lastLocationContextArray

// -[SCMapLocationContextFetcher initWithUnifiedGRPCClientFactory:mutingService:workerQueue:circumstanceEngine:mapNetworkCacheManager:snapchattersDataFetcher:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10674e1b4

// -[SCMapLocationContextFetcher localTimeManager]
// Type encoding: @16@0:8
// Implementation: 0x10674e490

// -[SCMapLocationContextFetcher fetchMapFriendsContextsForFriendIds:ignoreCache:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10674e56c

// -[SCMapLocationContextFetcher _getCachedOrMutedMapFriendsContextsForFriendIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10674e96c

// -[SCMapLocationContextFetcher _handleMapFriendsIconsResponseWithResponse:error:cachedFriendContexts:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10674ed78

// -[SCMapLocationContextFetcher _cacheMapFriendsIconForFriendId:friendIcon:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10674f0d0

// -[SCMapLocationContextFetcher fetchMapLocationContextWithRequest:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10674f174

// -[SCMapLocationContextFetcher _handleLocationContextResponse:error:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10674f440

// -[SCMapLocationContextFetcher fetchMapGroupLocationContextWithRequest:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10674f5a4

// -[SCMapLocationContextFetcher _handleGroupLocationContextFetchResponse:error:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10674f860

// -[SCMapLocationContextFetcher localTimeObservableForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10674fdcc

// -[SCMapLocationContextFetcher locationContextGRPCService]
// Type encoding: @16@0:8
// Implementation: 0x10674fe38

// -[SCMapLocationContextFetcher contextUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10674ff50

// -[SCMapLocationContextFetcher requestPeriodicUpdatesForOwner:friendIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10674ff78

// -[SCMapLocationContextFetcher registerPeriodicUpdatesForOwner:]
// Type encoding: v24@0:8@16
// Implementation: 0x106750054

// -[SCMapLocationContextFetcher unregisterRequestedUpdatesForOwner:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067502a4

// -[SCMapLocationContextFetcher _stopPollingIfNoLongerRequired]
// Type encoding: v16@0:8
// Implementation: 0x10675030c

// -[SCMapLocationContextFetcher _hasAnyPeriodicUpdateReferences]
// Type encoding: B16@0:8
// Implementation: 0x106750340

// -[SCMapLocationContextFetcher _startPollingTimerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106750404

// -[SCMapLocationContextFetcher _timerDidFire]
// Type encoding: v16@0:8
// Implementation: 0x106750594

// -[SCMapLocationContextFetcher _publishLocationContextResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067505d4

// -[SCMapLocationContextFetcher _stopPollingTimer]
// Type encoding: v16@0:8
// Implementation: 0x1067505e4

// -[SCMapLocationContextFetcher _requestLocationContextForFriendIds:wasPreviouslyMuted:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106750610

// -[SCMapLocationContextFetcher _handleMutedFriendsList:]
// Type encoding: v24@0:8@16
// Implementation: 0x10675079c

// -[SCMapLocationContextFetcher _handleResponseWithPreviouslyMutedFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x106750954

// -[SCMapLocationContextFetcher _getLocationContextResponseWithMutedLocationContexts:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067509e4

// -[SCMapLocationContextFetcher lastLocationContextArray]
// Type encoding: @16@0:8
// Implementation: 0x106750b68

// -[SCMapLocationContextFetcher setLastLocationContextArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x106750b74

// -[SCMapLocationContextFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106750b7c

@end
