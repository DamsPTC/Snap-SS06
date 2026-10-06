// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapStatusStore
// Superclass: NSObject
// Address: 0x112aaa798

@interface SCMapStatusStore

// Property: allExploreItems; attributes: T@"NSOrderedSet",&,V_allExploreItems
// Property: allMyStatuses; attributes: T@"NSOrderedSet",&,V_allMyStatuses
// Property: exploreItemsByUserId; attributes: T@"NSDictionary",&,V_exploreItemsByUserId
// Property: exploreItemsByItemId; attributes: T@"NSDictionary",&,V_exploreItemsByItemId
// Property: loadingExploreItems; attributes: TB,GisLoadingExploreItems,V_loadingExploreItems
// Property: loadingMyStatuses; attributes: TB,GisLoadingMyStatuses,V_loadingMyStatuses
// Property: lastSuccessfulExploreItemsLoadDate; attributes: T@"NSDate",&,V_lastSuccessfulExploreItemsLoadDate
// Property: lastSuccessfulMyStatusesLoadDate; attributes: T@"NSDate",&,V_lastSuccessfulMyStatusesLoadDate
// Property: notViewedExploreItems; attributes: T@"NSArray",R,C,N
// Property: statusUpdateObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapStatusStore initWithCurrentUserId:mapBitmojiAvatarGenerator:mapPeopleFriendsProvider:mapStatusRPCService:grpcStatusService:mutingService:mapUserPreferences:sharingPreferencesProvider:circumstanceEngine:applicationLifecycleEvents:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105f02fc4

// -[SCMapStatusStore _checkForInitialApplicationState]
// Type encoding: v16@0:8
// Implementation: 0x105f03944

// -[SCMapStatusStore _setIsAppForegrounded:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f039f4

// -[SCMapStatusStore _scheduleInitialPeriodicUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105f03a80

// -[SCMapStatusStore _onApplicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x105f03b1c

// -[SCMapStatusStore _onApplicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x105f03b24

// -[SCMapStatusStore _onApplicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x105f03b2c

// -[SCMapStatusStore reload]
// Type encoding: v16@0:8
// Implementation: 0x105f03b34

// -[SCMapStatusStore reloadExploreItems]
// Type encoding: v16@0:8
// Implementation: 0x105f03b58

// -[SCMapStatusStore reloadMyStatuses]
// Type encoding: v16@0:8
// Implementation: 0x105f03be8

// -[SCMapStatusStore reloadIfOlderThan:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f03c78

// -[SCMapStatusStore _reloadExploreItemsIfOlderThan:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f03cac

// -[SCMapStatusStore _reloadMyStatusesIfOlderThan:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f03d30

// -[SCMapStatusStore hasLoadedExploreItemsAtLeastOnce]
// Type encoding: B16@0:8
// Implementation: 0x105f03db4

// -[SCMapStatusStore hasLoadedMyStatusesAtLeastOnce]
// Type encoding: B16@0:8
// Implementation: 0x105f03de8

// -[SCMapStatusStore exploreItems]
// Type encoding: @16@0:8
// Implementation: 0x105f03e1c

// -[SCMapStatusStore notViewedExploreItems]
// Type encoding: @16@0:8
// Implementation: 0x105f04008

// -[SCMapStatusStore liveStatusesForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f04064

// -[SCMapStatusStore statusForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f041a4

// -[SCMapStatusStore statusGroupForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f042d8

// -[SCMapStatusStore allLiveStatuses]
// Type encoding: @16@0:8
// Implementation: 0x105f0452c

// -[SCMapStatusStore stickerForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f04840

// -[SCMapStatusStore customStickerIDForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f049fc

// -[SCMapStatusStore statusUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f04a40

// -[SCMapStatusStore subscribeOnNextStatusUpdate:]
// Type encoding: @24@0:8@?16
// Implementation: 0x105f04a68

// -[SCMapStatusStore addStatusUpdateObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f04a70

// -[SCMapStatusStore requestPeriodicUpdatesForStatusUpdateObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f04a90

// -[SCMapStatusStore removeRequestedUpdatesForStatusUpdateObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f04b5c

// -[SCMapStatusStore _handleMutedFriendsList:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f04bd8

// -[SCMapStatusStore deleteMyStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f04c10

// -[SCMapStatusStore deleteTravelStatuses:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105f04cb4

// -[SCMapStatusStore isViewedStatusId:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f04dc4

// -[SCMapStatusStore _isViewedStatusId:timestamp:]
// Type encoding: B32@0:8@16d24
// Implementation: 0x105f04dcc

// -[SCMapStatusStore statusViewStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f04f5c

// -[SCMapStatusStore markViewedStatusId:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f04f84

// -[SCMapStatusStore flushStatusViewEvents]
// Type encoding: v16@0:8
// Implementation: 0x105f05084

// -[SCMapStatusStore _loadExploreItems]
// Type encoding: v16@0:8
// Implementation: 0x105f05260

// -[SCMapStatusStore _loadMyStatuses]
// Type encoding: v16@0:8
// Implementation: 0x105f053f4

// -[SCMapStatusStore _didFetchExploreItems:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f0558c

// -[SCMapStatusStore _didFetchMyStatuses:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f05b40

// -[SCMapStatusStore _deleteMyStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f05e48

// -[SCMapStatusStore _didDeleteMyStatus:newMyStatuses:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f060d0

// -[SCMapStatusStore _prefetchStickersForStatusGroup:dispatchGroup:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f060dc

// -[SCMapStatusStore _schedulePeriodicUpdateForExploreItemsIfNecessaryWithInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f06590

// -[SCMapStatusStore _schedulePeriodicUpdateForMyStatusesIfNecessaryWithInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f06668

// -[SCMapStatusStore _hasObserversRequiringPeriodicUpdates]
// Type encoding: B16@0:8
// Implementation: 0x105f06740

// -[SCMapStatusStore _sortedExploreItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f06818

// -[SCMapStatusStore _exploreItems:filteredByViewed:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105f068dc

// -[SCMapStatusStore _exploreItems:filteredByViewed:onlyInExplore:ignoreActiveUser:]
// Type encoding: @36@0:8@16B24B28B32
// Implementation: 0x105f068e8

// -[SCMapStatusStore _onLocationSharingPreferencesChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f06f24

// -[SCMapStatusStore _updateExploreItems]
// Type encoding: v16@0:8
// Implementation: 0x105f06f80

// -[SCMapStatusStore _updateMyStatuses]
// Type encoding: v16@0:8
// Implementation: 0x105f07618

// -[SCMapStatusStore _clearViewedState]
// Type encoding: v16@0:8
// Implementation: 0x105f07a04

// -[SCMapStatusStore allExploreItems]
// Type encoding: @16@0:8
// Implementation: 0x105f07a08

// -[SCMapStatusStore setAllExploreItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f07a14

// -[SCMapStatusStore allMyStatuses]
// Type encoding: @16@0:8
// Implementation: 0x105f07a1c

// -[SCMapStatusStore setAllMyStatuses:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f07a28

// -[SCMapStatusStore exploreItemsByUserId]
// Type encoding: @16@0:8
// Implementation: 0x105f07a30

// -[SCMapStatusStore setExploreItemsByUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f07a3c

// -[SCMapStatusStore exploreItemsByItemId]
// Type encoding: @16@0:8
// Implementation: 0x105f07a44

// -[SCMapStatusStore setExploreItemsByItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f07a50

// -[SCMapStatusStore isLoadingExploreItems]
// Type encoding: B16@0:8
// Implementation: 0x105f07a58

// -[SCMapStatusStore setLoadingExploreItems:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f07a64

// -[SCMapStatusStore isLoadingMyStatuses]
// Type encoding: B16@0:8
// Implementation: 0x105f07a6c

// -[SCMapStatusStore setLoadingMyStatuses:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f07a78

// -[SCMapStatusStore lastSuccessfulExploreItemsLoadDate]
// Type encoding: @16@0:8
// Implementation: 0x105f07a80

// -[SCMapStatusStore setLastSuccessfulExploreItemsLoadDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f07a8c

// -[SCMapStatusStore lastSuccessfulMyStatusesLoadDate]
// Type encoding: @16@0:8
// Implementation: 0x105f07a94

// -[SCMapStatusStore setLastSuccessfulMyStatusesLoadDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f07aa0

// -[SCMapStatusStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f07aa8

// +[SCMapStatusStore _isLoadDate:olderThan:]
// Type encoding: B32@0:8@16d24
// Implementation: 0x105f06d64

// +[SCMapStatusStore _statusGroup:hasStoryMoreRecentThanTimestamp:]
// Type encoding: B32@0:8@16d24
// Implementation: 0x105f06de4

@end
