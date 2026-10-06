// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConversationFeedDataSource
// Superclass: NSObject
// Address: 0x112a8dc10

@interface SCConversationFeedDataSource

// Property: delegate; attributes: T@"<SCConversationFeedDataSourceDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCConversationFeedDataSource initWithUserSession:userInfoServices:featureSettingsService:friendsFeedDataCoordinator:friendsFeedReadyLogger:ghostToFeedLogger:friendsFeedFirstRenderLatencyLogger:delegate:storiesReplayManager:substituteAnimationStateProvider:snapReplayAnimationStateProvider:sponsoredSnapAdResponseParser:playableCTAProvider:peekAPeekAnimationStateProvider:conversationManager:snapCountDownManager:circumstanceEngine:graphene:friendsFeedGrapheneV2:friendmojiDataProvider:friendmojiPresenter:friendmojiDataCoordinator:creatorSubscriptionsInfoProvider:lastInteractionDataService:contextPostSnapFeedDataFetcher:lensFriendsFeedContextDataFetcher:lensFriendsFeedContextConfigFetcher:friendsFeedActionTextGenerator:friendsFeedIconGenerator:shortcutsDataFetcher:friendsFeedShortcutsLogger:messagingExperimentService:storiesConfigProvider:pageLoadMetricManager:notificationToMessageReadyLogger:feedInitialRenderPublisher:plusFeatureGating:mapContextInFriendsFeedProvider:saturnFriendsFeedProvider:mapPersonLocationsProvider:friendshipFlashbacksDataManager:friendsFeedTracker:simpleSnapchatExperimentConfigProvider:platformUIExperimentsService:streakProvider:recentlyActiveRecordRepository:suggestionInFriendsFeedEnabled:myAIInGroupChatEnabled:renderStyleProvider:nglStudySettings:animationTriggerGatingEnabled:snapCountdownProviderEnabled:]
// Type encoding: @424@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408B416B420
// Implementation: 0x105b50d58

// -[SCConversationFeedDataSource _initSubscriptions]
// Type encoding: v16@0:8
// Implementation: 0x105b529b4

// -[SCConversationFeedDataSource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105b52b60

// -[SCConversationFeedDataSource resumeViewModelUpdates:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b52b94

// -[SCConversationFeedDataSource _resumeFetchFriendsFeedItemsIfNeeded:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b52c80

// -[SCConversationFeedDataSource hasUpdatedViewModels:]
// Type encoding: B20@0:8B16
// Implementation: 0x105b52ce8

// -[SCConversationFeedDataSource hasUpdatedViewModelsObservable:]
// Type encoding: @20@0:8B16
// Implementation: 0x105b52d00

// -[SCConversationFeedDataSource _processNotificationToMessageReadyLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b52d38

// -[SCConversationFeedDataSource quickAddSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x105b52dd4

// -[SCConversationFeedDataSource incomingSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x105b52dfc

// -[SCConversationFeedDataSource contactSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x105b52e24

// -[SCConversationFeedDataSource contactNonSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x105b52e4c

// -[SCConversationFeedDataSource viewModels:]
// Type encoding: @20@0:8B16
// Implementation: 0x105b52e74

// -[SCConversationFeedDataSource setViewModels:updateIsForCommunityFeed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105b52eac

// -[SCConversationFeedDataSource friendsFeedViewModelIndexes]
// Type encoding: @16@0:8
// Implementation: 0x105b52ef0

// -[SCConversationFeedDataSource indexForCellIdentifier:]
// Type encoding: q24@0:8@16
// Implementation: 0x105b52f08

// -[SCConversationFeedDataSource resetFeedConversationsState]
// Type encoding: v16@0:8
// Implementation: 0x105b52f68

// -[SCConversationFeedDataSource resetFeedConversationsStateExcludingConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b530b4

// -[SCConversationFeedDataSource updateForViewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x105b532c4

// -[SCConversationFeedDataSource updateForViewWillPresentFullscreenOverlay]
// Type encoding: v16@0:8
// Implementation: 0x105b53328

// -[SCConversationFeedDataSource updateForViewDidDismissFullscreenOverlay]
// Type encoding: v16@0:8
// Implementation: 0x105b5332c

// -[SCConversationFeedDataSource resetLastFinishedViewingSnap]
// Type encoding: v16@0:8
// Implementation: 0x105b53334

// -[SCConversationFeedDataSource resetLastSentSnapWithConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b53374

// -[SCConversationFeedDataSource didSelectShortcutWithShortcutId:shortcutType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105b5337c

// -[SCConversationFeedDataSource _didSelectShortcutWithShortcutId:shortcutType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105b53494

// -[SCConversationFeedDataSource _observeShortcutPluginsForRegistration]
// Type encoding: v16@0:8
// Implementation: 0x105b536cc

// -[SCConversationFeedDataSource _registerShortcutPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b53830

// -[SCConversationFeedDataSource _shouldFetchFriendsFeedItemsForCurrentlySelectedShortcutType:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105b538bc

// -[SCConversationFeedDataSource _observePluginFriendsFeedItemsWithPreviouslySelectedShortcutType:currentlySelectedShortcutType:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x105b53964

// -[SCConversationFeedDataSource _handleShortcutPluginFeedItemUpdate:canRenderFeedEmptyState:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105b53ce0

// -[SCConversationFeedDataSource _unselectShortcut]
// Type encoding: v16@0:8
// Implementation: 0x105b53d7c

// -[SCConversationFeedDataSource _unsetShortcutViewModels]
// Type encoding: v16@0:8
// Implementation: 0x105b53f34

// -[SCConversationFeedDataSource _filterFeedByUpdatedShortcutRecipients:shortcutId:shortcutType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105b53f60

// -[SCConversationFeedDataSource _sortFeedItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b5402c

// -[SCConversationFeedDataSource _updateWithUserBirthday:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b54454

// -[SCConversationFeedDataSource _updateWithDisplayedSubstituteAnimationIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b54534

// -[SCConversationFeedDataSource _updateWithCurrentlyReplayingSnapConversationIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b54608

// -[SCConversationFeedDataSource _updateWithCurrentlyPeekingFeedIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b546dc

// -[SCConversationFeedDataSource updateViewModelsForAppBackground]
// Type encoding: v16@0:8
// Implementation: 0x105b547a8

// -[SCConversationFeedDataSource _updateViewModelsForAppBackground]
// Type encoding: v16@0:8
// Implementation: 0x105b54888

// -[SCConversationFeedDataSource _updateWithActiveSnapCountdowns:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b548d8

// -[SCConversationFeedDataSource _updateWithPlayedStoryIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b549ac

// -[SCConversationFeedDataSource _subscribeToMapBackgroundUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b54a80

// -[SCConversationFeedDataSource _handleMapPersonLocationUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b54bdc

// -[SCConversationFeedDataSource _subscribeToMapFriendContextsUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b54d2c

// -[SCConversationFeedDataSource _handleMapFriendContextUpdatesWithUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b54ea0

// -[SCConversationFeedDataSource _subscribeToSaturnContextUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b54f74

// -[SCConversationFeedDataSource _handleSaturnContextUpdatesWithUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b550f0

// -[SCConversationFeedDataSource _subscribeToLensContextualSuggestionUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b551c4

// -[SCConversationFeedDataSource _handleLensFriendsFeedContextDataFetcherUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b55410

// -[SCConversationFeedDataSource _performSubscribeToInteractionStateUpdatesWithSkipFirstSyncUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b554e8

// -[SCConversationFeedDataSource _subscribeToInteractionStateUpdatesWithSkipFirstSyncUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b555d4

// -[SCConversationFeedDataSource _handleInteractionStateUpdates:skipFirstSyncUpdate:isSync:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x105b557b8

// -[SCConversationFeedDataSource _performUnsubscribeFromInteractionStateUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b558b4

// -[SCConversationFeedDataSource _unsubscribeFromInteractionStateUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b55988

// -[SCConversationFeedDataSource _subcribeToFriendshipFlashbacks]
// Type encoding: v16@0:8
// Implementation: 0x105b55998

// -[SCConversationFeedDataSource _subscribeToRecentlyActiveUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b55b0c

// -[SCConversationFeedDataSource _handleFriendshipFlashbacksUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b55c7c

// -[SCConversationFeedDataSource _performUpdateFriendsFeedViewModelsWithFeedItemUpdate:viewHasChanged:source:updateIsForCommunityFeed:canRenderFeedEmptyState:]
// Type encoding: v44@0:8@16B24@28B36B40
// Implementation: 0x105b55d54

// -[SCConversationFeedDataSource _truncateFeedItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b5610c

// -[SCConversationFeedDataSource _warmUpViewModelsWithFeedItemUpdate:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b566c8

// -[SCConversationFeedDataSource _fetchFriendsFeedItemsAndUpdateWithFeedItemUpdate:viewHasAppeared:viewHasChanged:shouldLogGhostToFriendsFeed:source:updateIsForCommunityFeed:canRenderFeedEmptyState:dispatchLatency:]
// Type encoding: v60@0:8@16B24B28B32@36B44B48d52
// Implementation: 0x105b56aac

// -[SCConversationFeedDataSource _triggerHapticsIfNeededAndUpdateWithFeedItems:quickAddSnapchatters:incomingSnapchatters:contactSnapchatters:contactNonSnapchatters:renderContent:hasFeedItemsChanged:viewHasAppeared:viewHasChanged:shouldLogGhostToFriendsFeed:source:fetchContexts:trackingIdentifier:updateIsForCommunityFeed:canRenderFeedEmptyState:]
// Type encoding: v112@0:8@16@24@32@40@48@56B64B68B72B76@80@88@96B104B108
// Implementation: 0x105b5726c

// -[SCConversationFeedDataSource _updateViewModelsAndReload:quickAddSnapchatters:incomingSnapchatters:contactSnapchatters:contactNonSnapchatters:shortcutRecipientsWithFeedItems:renderContent:viewHasAppeared:shouldLogGhostToFriendsFeed:hasFeedItemsChanged:viewModelGenerationMs:source:fetchContexts:trackingIdentifier:updateIsForCommunityFeed:canRenderFeedEmptyState:priorWarmupCount:]
// Type encoding: v132@0:8@16@24@32@40@48@56@64B72B76B80d84@92@100@108B116B120Q124
// Implementation: 0x105b57970

// -[SCConversationFeedDataSource _updateViewModelsForWarmup:viewModelGenerationMs:source:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x105b58170

// -[SCConversationFeedDataSource _logViewModelUpdateForSource:isWarmingUp:durationMs:]
// Type encoding: v36@0:8@16B24d28
// Implementation: 0x105b582f4

// -[SCConversationFeedDataSource _logNotificationToMessageReadyForFeedViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b58438

// -[SCConversationFeedDataSource viewModelCoordinatorWantsToReloadViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b58708

// -[SCConversationFeedDataSource refreshViewModelsForViewChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b58780

// -[SCConversationFeedDataSource _enableCommunityViewing]
// Type encoding: B16@0:8
// Implementation: 0x105b5879c

// -[SCConversationFeedDataSource _viewerIsOnCommunityFeed]
// Type encoding: B16@0:8
// Implementation: 0x105b587dc

// -[SCConversationFeedDataSource _communityFeedViewModelCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x105b5880c

// -[SCConversationFeedDataSource _rightButtonViewModelsCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x105b589a0

// -[SCConversationFeedDataSource _allFeedItems]
// Type encoding: @16@0:8
// Implementation: 0x105b58a44

// -[SCConversationFeedDataSource _updateFeedPaginatorsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105b58aac

// -[SCConversationFeedDataSource communityFeedDataPaginator]
// Type encoding: @16@0:8
// Implementation: 0x105b58c44

// -[SCConversationFeedDataSource _refreshViewModelsAfterFriendmojiSettingsChange]
// Type encoding: v16@0:8
// Implementation: 0x105b58c80

// -[SCConversationFeedDataSource _subscribeToFanPassSubscriptionUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b58cbc

// -[SCConversationFeedDataSource _refreshViewModelsAfterFanPassSubscriptionsChange]
// Type encoding: v16@0:8
// Implementation: 0x105b58ffc

// -[SCConversationFeedDataSource _onStreaksUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b59038

// -[SCConversationFeedDataSource _onRecentlyActiveUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b59104

// -[SCConversationFeedDataSource expandPaginationWindow]
// Type encoding: v16@0:8
// Implementation: 0x105b5932c

// -[SCConversationFeedDataSource handleTapViewAllCell]
// Type encoding: v16@0:8
// Implementation: 0x105b5935c

// -[SCConversationFeedDataSource _handleTapViewAllCell]
// Type encoding: v16@0:8
// Implementation: 0x105b59430

// -[SCConversationFeedDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x105b59454

// -[SCConversationFeedDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b5946c

// -[SCConversationFeedDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b59478

@end
