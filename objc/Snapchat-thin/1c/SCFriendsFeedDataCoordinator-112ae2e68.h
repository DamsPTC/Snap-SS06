// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedDataCoordinator
// Superclass: NSObject
// Address: 0x112ae2e68

@interface SCFriendsFeedDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendsFeedDataCoordinator initWithDocObjectContext:friendsFeedNativeDataProvider:friendsFeedNativeMultirecipientDataProvider:personDataCoordinator:storiesDataCoordinatorLazy:remoteStoriesDataProvider:sponsoredSnapAdResponseParser:presenceInfoDataProvider:pinnedConversationsDataCoordinator:addFriendsDataCoordinator:friendsFeedEntryStore:ghostToFeedLogger:friendsFeedReadyLogger:graphene:usernameProvider:messagingExperimentService:storiesReplayManager:dataWiped:userSessionContext:pageLoadMetricManager:discoverFeedDataFetcher:storiesConfigProvider:chatEligibilityProvider:userPreferences:appState:didEnterBackgroundObservable:chatActionHandler:nativeSessionManagerFuture:]
// Type encoding: @240@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232
// Implementation: 0x100bab430

// -[SCFriendsFeedDataCoordinator friendsFeedItems]
// Type encoding: @16@0:8
// Implementation: 0x1064da440

// -[SCFriendsFeedDataCoordinator spotlightOnFriendsFeedStoriesObservable]
// Type encoding: @16@0:8
// Implementation: 0x1064da548

// -[SCFriendsFeedDataCoordinator friendsFeedItemsStreamObservable]
// Type encoding: @16@0:8
// Implementation: 0x1064da550

// -[SCFriendsFeedDataCoordinator friendsFeedItemsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1064da760

// -[SCFriendsFeedDataCoordinator _emitInitialAndUpdateStreamWithObserver:lifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064da788

// -[SCFriendsFeedDataCoordinator purgeAccumulatedFetchContexts]
// Type encoding: v16@0:8
// Implementation: 0x1064da900

// -[SCFriendsFeedDataCoordinator quickAddSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x1064da9fc

// -[SCFriendsFeedDataCoordinator incomingSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x1064dab04

// -[SCFriendsFeedDataCoordinator contactSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x1064dac0c

// -[SCFriendsFeedDataCoordinator contactNonSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x1064dad14

// -[SCFriendsFeedDataCoordinator consumableConversationIdsObservable]
// Type encoding: @16@0:8
// Implementation: 0x100bad33c

// -[SCFriendsFeedDataCoordinator consumableFeedItemsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1064dae1c

// -[SCFriendsFeedDataCoordinator feedIdsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1064dae44

// -[SCFriendsFeedDataCoordinator feedSyncStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x1064dae4c

// -[SCFriendsFeedDataCoordinator sponsoredSnapCountObservable]
// Type encoding: @16@0:8
// Implementation: 0x1064dae74

// -[SCFriendsFeedDataCoordinator notifyViewHasPartiallyAppearedAtLeastOnce]
// Type encoding: v16@0:8
// Implementation: 0x1064db330

// -[SCFriendsFeedDataCoordinator friendsFeedItemForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064db38c

// -[SCFriendsFeedDataCoordinator startListenToPublicStoriesUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1064db5e8

// -[SCFriendsFeedDataCoordinator stopListenToPublicStoriesUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1064db6e0

// -[SCFriendsFeedDataCoordinator dataCoordinatorDidUpdateWithIdentifier:dataRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100c5a368

// -[SCFriendsFeedDataCoordinator _observeDidEnterBackgroundObservable]
// Type encoding: v16@0:8
// Implementation: 0x100bb93c4

// -[SCFriendsFeedDataCoordinator _appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1064db748

// -[SCFriendsFeedDataCoordinator _observeAddFriendsData]
// Type encoding: v16@0:8
// Implementation: 0x1064db80c

// -[SCFriendsFeedDataCoordinator _updateAddFriendsDataAndHandleUpdatesIfNeededWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064db964

// -[SCFriendsFeedDataCoordinator _emitUpdatedFeedSyncStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bf5050

// -[SCFriendsFeedDataCoordinator _subscribeToPlayedStoryIdsObservable]
// Type encoding: v16@0:8
// Implementation: 0x100bb8560

// -[SCFriendsFeedDataCoordinator _updatePlayedStoryIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bbbe34

// -[SCFriendsFeedDataCoordinator startInitialLoad]
// Type encoding: v16@0:8
// Implementation: 0x100bac528

// -[SCFriendsFeedDataCoordinator _startInitialLoad]
// Type encoding: v16@0:8
// Implementation: 0x100bae388

// -[SCFriendsFeedDataCoordinator _didClearFeedDbWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064db9e0

// -[SCFriendsFeedDataCoordinator _subscribeToNativeDataUpdates]
// Type encoding: v16@0:8
// Implementation: 0x100bac5e4

// -[SCFriendsFeedDataCoordinator _subscribeToNativeMultirecipientDataUpdates]
// Type encoding: v16@0:8
// Implementation: 0x100bad1ac

// -[SCFriendsFeedDataCoordinator _processNativeDataStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bebdf0

// -[SCFriendsFeedDataCoordinator _processMultirecipientNativeDataStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064dba8c

// -[SCFriendsFeedDataCoordinator _handleUpdatesIfNeededWithUpdateSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bb9e50

// -[SCFriendsFeedDataCoordinator _performHandleUpdatesFromThrottling]
// Type encoding: v16@0:8
// Implementation: 0x100bbb4e0

// -[SCFriendsFeedDataCoordinator _handleThrottableUpdateForUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bba134

// -[SCFriendsFeedDataCoordinator _handleUpdatesForUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bbbf2c

// -[SCFriendsFeedDataCoordinator _fetchFeedMetadataForUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bbc638

// -[SCFriendsFeedDataCoordinator _buildFeedItemsForUpdate:entityDataByFeedId:quickAddSnapchatters:incomingSnapchatters:contactSnapchatters:contactNonSnapchatters:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x100bd32a0

// -[SCFriendsFeedDataCoordinator _shouldAddToConsumableConversationIds:hasConsumableContent:isCampaign:isAppInBackground:countMutedGroupAsConsumableConversation:]
// Type encoding: B40@0:8@16B24B28B32B36
// Implementation: 0x100bf3a28

// -[SCFriendsFeedDataCoordinator _updateFriendsFeedItemsWithFeedItems:consumableConversationIdsList:consumableFeedItemsList:feedIdsList:quickAddSnapchatter:incomingSnapchatters:contactSnapchatters:contactNonSnapchatters:friendsFeedUpdate:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x100bd8bcc

// -[SCFriendsFeedDataCoordinator _shouldDisplayFriendsFeedEntity:activeMessageData:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x100bf3040

// -[SCFriendsFeedDataCoordinator _subscribeToStoriesSummaries]
// Type encoding: v16@0:8
// Implementation: 0x100bae7a0

// -[SCFriendsFeedDataCoordinator _updateStoriesSummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bb9528

// -[SCFriendsFeedDataCoordinator _fetchStoriesForMultipleFeedTypes]
// Type encoding: v16@0:8
// Implementation: 0x1064dbbf4

// -[SCFriendsFeedDataCoordinator _updateStoriesForMultipleFeedTypes:spotlightOnFriendsFeedEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1064dbfb8

// -[SCFriendsFeedDataCoordinator _onUpdatePublicUserStories:publicUserFeedIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064dca08

// -[SCFriendsFeedDataCoordinator _fetchServerBotPublicStoriesForFeedIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bd2f74

// -[SCFriendsFeedDataCoordinator _clearServerBotPublicUserStorySummaries]
// Type encoding: v16@0:8
// Implementation: 0x100bd3128

// -[SCFriendsFeedDataCoordinator _onAdditionalPublicUserStories:publicUserFeedIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064dcc10

// -[SCFriendsFeedDataCoordinator _subscribeToPresenceUpdates]
// Type encoding: v16@0:8
// Implementation: 0x100baeaa0

// -[SCFriendsFeedDataCoordinator _updateActivePresenceInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064dce0c

// -[SCFriendsFeedDataCoordinator _subscribeToEligibilityUpdates]
// Type encoding: v16@0:8
// Implementation: 0x100baeb9c

// -[SCFriendsFeedDataCoordinator _subscribeToPinnedConversationUpdates]
// Type encoding: v16@0:8
// Implementation: 0x100bad4ac

// -[SCFriendsFeedDataCoordinator _updatePinnedTimestampsByFeedId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064dce94

// -[SCFriendsFeedDataCoordinator _logGrapheneFetchIfNecessaryForSubstep:entriesFetched:startTime:friendsFeedUpdate:]
// Type encoding: v48@0:8q16q24d32@40
// Implementation: 0x100bcec84

// -[SCFriendsFeedDataCoordinator _logUpdateForUpdateSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bba2ec

// -[SCFriendsFeedDataCoordinator didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1064dced4

// -[SCFriendsFeedDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064dd078

// +[SCFriendsFeedDataCoordinator dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1064da434

@end
