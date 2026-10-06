// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightPlaybackManager
// Superclass: NSObject
// Address: 0x112b0eec8

@interface SCSpotlightPlaybackManager

// Property: currentlyPlayingStory; attributes: T@"SCDiscoverFeedStory",&,N,V_currentlyPlayingStory
// Property: lastPlayedStory; attributes: T@"SCDiscoverFeedStory",&,N,V_lastPlayedStory
// Property: currentPlaylist; attributes: T@"NSArray",C,N,V_currentPlaylist
// Property: desiredPlaylistReordering; attributes: T@"NSArray",C,N,V_desiredPlaylistReordering
// Property: lastLoopedStory; attributes: T@"NSNumber",&,N,V_lastLoopedStory
// Property: feedPageEntryType; attributes: Tq,N,V_feedPageEntryType
// Property: currentPageSessionId; attributes: T@"NSString",C,N,V_currentPageSessionId
// Property: sectionKeys; attributes: T@"NSArray",R,C,N,V_sectionKeys
// Property: delegate; attributes: T@"<SCSpotlightPlaybackManagerDelegate>",W,N,V_delegate
// Property: metadataAvailableAtStartCount; attributes: T@"NSNumber",R,N,V_metadataAvailableAtStartCount
// Property: mediaAvailableAtStartCount; attributes: T@"NSNumber",R,N,V_mediaAvailableAtStartCount
// Property: storyPlayerModerationData; attributes: T@"SCCStoryPlayerModerationData",C,N,V_storyPlayerModerationData
// Property: currentSectionKeyIndex; attributes: Tq,R,N,V_currentSectionKeyIndex
// Property: currentSectionKey; attributes: T@"SCDiscoverFeedSectionKey",R,N
// Property: eofFeedsObservable; attributes: T@"SCObservable",R,N,V_eofFeedsObservable
// Property: associatedSubfeed; attributes: T@"NSString",&,N,V_associatedSubfeed
// Property: desiredOrderSectionSource; attributes: T@"SCDiscoverFeedSectionKey",R,N
// Property: fallbackSectionIndex; attributes: Tq,R,N,V_fallbackSectionIndex
// Property: pageRefreshCount; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightPlaybackManager initWithUserSession:pageType:operaDismissGestureView:pluginInitializer:playableViewModelGenerator:cachedReadReceiptViewStateProvider:discoverFeedDataFetcher:discoverFeedDataMutator:preferences:storiesConfigProvider:circumstanceEngine:complianceEngine:appStartExperimentReader:pageSessionCoordinator:interactionHistoryManager:readReceiptCoordinator:adConfigProvider:snapchattersSynchronousDataFetcher:grapheneRegistry:operaSessionScopeExposer:operaSessionScopeServices:storiesMixerNetworkRequester:snapchattersDataFetcher:pageLoadMetricManager:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:configuration:sourcePage:prefersHorizontalNavigation:notificationPool:storiesMediaCoordinator:contentDelivery:spotlightMediaFetcherFactory:spotlightDisplayOrdererFactory:spotlightStoriesPrefetcherFactory:dsaExplainerScopeExposer:dsaExplainerScopeServices:networkConnectivityMonitor:locationProvider:spotlightRepliesScopeExposer:adRenderDataParser:spotlightUsageTracker:operaPluginCreator:contentObjectResolver:operaLifecycleObserver:featureSettingsService:interstitialRepository:]
// Type encoding: @388@0:8@16q24@32@?40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224q232B240@244@252@260@268@276@284@292@300@308@316@324@332@340@348@356@364@372@380
// Implementation: 0x106a63c74

// -[SCSpotlightPlaybackManager applicationDidBackground]
// Type encoding: v16@0:8
// Implementation: 0x106a64fcc

// -[SCSpotlightPlaybackManager applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x106a6506c

// -[SCSpotlightPlaybackManager _shouldRefreshMixedFeedOnForegroundAfterTTL]
// Type encoding: B16@0:8
// Implementation: 0x106a650b8

// -[SCSpotlightPlaybackManager _maybePurgeWatchedStoriesOnForeground]
// Type encoding: v16@0:8
// Implementation: 0x106a65134

// -[SCSpotlightPlaybackManager _maybeAdvanceToUnwatchedOnForeground]
// Type encoding: v16@0:8
// Implementation: 0x106a6516c

// -[SCSpotlightPlaybackManager _advanceToNextUnwatchedStoryInCurrentPlaylist]
// Type encoding: v16@0:8
// Implementation: 0x106a651a0

// -[SCSpotlightPlaybackManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106a65420

// -[SCSpotlightPlaybackManager setCurrentlyPlayingStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a65560

// -[SCSpotlightPlaybackManager _refreshContentAvailabilityForPlaylist:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a65610

// -[SCSpotlightPlaybackManager setCurrentPlaylist:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a65b9c

// -[SCSpotlightPlaybackManager desiredOrderSectionSource]
// Type encoding: @16@0:8
// Implementation: 0x106a65ce0

// -[SCSpotlightPlaybackManager setDesiredPlaylistReordering:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a65d08

// -[SCSpotlightPlaybackManager _finishPresentingOperaPresenterIfNeededWithStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a66104

// -[SCSpotlightPlaybackManager currentSectionKey]
// Type encoding: @16@0:8
// Implementation: 0x106a661b8

// -[SCSpotlightPlaybackManager _initialSectionKey]
// Type encoding: @16@0:8
// Implementation: 0x106a66208

// -[SCSpotlightPlaybackManager _forceUpdateCurrentSpotlightDisplayOrdererObservable]
// Type encoding: v16@0:8
// Implementation: 0x106a66254

// -[SCSpotlightPlaybackManager _currentSpotlightDisplayOrdererObservable]
// Type encoding: @16@0:8
// Implementation: 0x106a662e8

// -[SCSpotlightPlaybackManager desiredPlaylistOrderingObservable]
// Type encoding: @16@0:8
// Implementation: 0x106a66858

// -[SCSpotlightPlaybackManager _observeDesiredPlaylistOrdering]
// Type encoding: v16@0:8
// Implementation: 0x106a668ac

// -[SCSpotlightPlaybackManager _observeCurrentSectionForPrefetching]
// Type encoding: v16@0:8
// Implementation: 0x106a66a24

// -[SCSpotlightPlaybackManager _observeSectionEOF]
// Type encoding: v16@0:8
// Implementation: 0x106a66c18

// -[SCSpotlightPlaybackManager operaSpinnerWasVisible]
// Type encoding: B16@0:8
// Implementation: 0x106a66f54

// -[SCSpotlightPlaybackManager hasCurrentOperaPageStartedPlayback]
// Type encoding: B16@0:8
// Implementation: 0x106a66f5c

// -[SCSpotlightPlaybackManager feedSwitcherFeedDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106a66f64

// -[SCSpotlightPlaybackManager feedSwitcherFeedDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x106a66f6c

// -[SCSpotlightPlaybackManager _currentOperaPresenting]
// Type encoding: @16@0:8
// Implementation: 0x106a66f74

// -[SCSpotlightPlaybackManager _usesFriendsFeedDismissalTransition]
// Type encoding: B16@0:8
// Implementation: 0x106a66f8c

// -[SCSpotlightPlaybackManager _currentTransitionAnimator]
// Type encoding: @16@0:8
// Implementation: 0x106a66fb0

// -[SCSpotlightPlaybackManager presentOperaWithBaseView:presentingViewController:entryEvent:interactionContext:viewLocation:pageSessionId:notification:notificationsToPrepend:deepLink:compositeStoryId:discoverFeedStory:]
// Type encoding: v104@0:8@16@24q32q40q48@56@64@72@80@88@96
// Implementation: 0x106a66fec

// -[SCSpotlightPlaybackManager _hasLoadedMetadataForPresentationWithDiscoverFeedStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a679f4

// -[SCSpotlightPlaybackManager _getDiscoverFeedStoryFromCacheOrFetch:discoverFeedStory:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106a67b58

// -[SCSpotlightPlaybackManager _shouldPresentOperaBeforeResolutionWithDeepLink:notification:notificationsToPrepend:compositeStoryId:discoverFeedStory:]
// Type encoding: B56@0:8@16@24@32@40@48
// Implementation: 0x106a67e24

// -[SCSpotlightPlaybackManager _presentOperaBeforeResolutionWithNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a67f50

// -[SCSpotlightPlaybackManager _fulfillPendingPlaylistFetcherWithStories:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106a681d8

// -[SCSpotlightPlaybackManager _resolvedOperaGroupDataModelsForStories:outInitialStory:outInitialGroupDataModel:outDfStories:outPlaylist:outStorySessionId:]
// Type encoding: @64@0:8@16^@24^@32^@40^@48^q56
// Implementation: 0x106a68494

// -[SCSpotlightPlaybackManager _prepareInterstitialAndPresentOperaWithStories:baseView:presentingViewController:entryEvent:interactionContext:pageSessionId:viewLocation:isCachedContent:notification:]
// Type encoding: v84@0:8@16@24@32q40q48@56q64B72@76
// Implementation: 0x106a68d38

// -[SCSpotlightPlaybackManager _presentOperaWithStories:baseView:presentingViewController:entryEvent:interactionContext:pageSessionId:viewLocation:isCachedContent:notification:]
// Type encoding: v84@0:8@16@24@32q40q48@56q64B72@76
// Implementation: 0x106a68fe8

// -[SCSpotlightPlaybackManager _storeAvailableMetadataAndMediaCountAtStartUpIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6b470

// -[SCSpotlightPlaybackManager currentOperaSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106a6b7e0

// -[SCSpotlightPlaybackManager _installPlaybackDebugView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6b7e8

// -[SCSpotlightPlaybackManager _resetDebugPlaybackStateWithDedupeFpsAndRequestBatchRefresh:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6b7ec

// -[SCSpotlightPlaybackManager _generatePlaylistWithStories:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a6b7f0

// -[SCSpotlightPlaybackManager cancelOperaPresentation:interactionType:ignoreOperaRetainTTLInSecond:]
// Type encoding: v32@0:8B16Q20B28
// Implementation: 0x106a6b9b4

// -[SCSpotlightPlaybackManager timeBeforeReturningToCamera]
// Type encoding: d16@0:8
// Implementation: 0x106a6ba84

// -[SCSpotlightPlaybackManager updateDismissBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6ba8c

// -[SCSpotlightPlaybackManager updateDismissBaseViewFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a6bae4

// -[SCSpotlightPlaybackManager isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x106a6bb4c

// -[SCSpotlightPlaybackManager resetDismissalGestureRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x106a6bb88

// -[SCSpotlightPlaybackManager pausePlaybackWithoutOverlay]
// Type encoding: v16@0:8
// Implementation: 0x106a6bbb8

// -[SCSpotlightPlaybackManager resumePlaybackBySwitchingFeed:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a6bbe8

// -[SCSpotlightPlaybackManager resumeOperaDidEndModalDismiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a6bc44

// -[SCSpotlightPlaybackManager pauseOperaDidEndModalPresentation:shouldResetState:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106a6bca0

// -[SCSpotlightPlaybackManager isAtFirstSnapInPlaylist]
// Type encoding: B16@0:8
// Implementation: 0x106a6bd8c

// -[SCSpotlightPlaybackManager _getCurrentStoriesDisplayOrderWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a6bf58

// -[SCSpotlightPlaybackManager _finishPresentingOperaPresenterWithStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6c150

// -[SCSpotlightPlaybackManager _operaCurrentPlaylistExcludingAds]
// Type encoding: @16@0:8
// Implementation: 0x106a6c220

// -[SCSpotlightPlaybackManager _updatePlaylistWithDesiredPlaylistReorderingAndNextStory:switchToDedupeFp:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a6c2a8

// -[SCSpotlightPlaybackManager _filterOutViewedPlaylistItems:dedupeFpToKeep:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a6d6bc

// -[SCSpotlightPlaybackManager _maybeLogGrapheneForDedupedStory:storyType:fromFeedType:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a6d95c

// -[SCSpotlightPlaybackManager _updatePlayableViewModel:withSectionKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a6da10

// -[SCSpotlightPlaybackManager _buildAllGroupDataModelsWithInitialStory:allStories:initialGroupDataModel:playableViewModelGenerator:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106a6dac0

// -[SCSpotlightPlaybackManager _viewStateFilteredStoriesWithStories:dedupeFpToKeep:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a6dbf8

// -[SCSpotlightPlaybackManager _newPaginatedStoriesWithStories:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a6dcd8

// -[SCSpotlightPlaybackManager _updateStaleDedupeFpsFromStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6ded0

// -[SCSpotlightPlaybackManager didStartPlayingPlaylistItemDataModel:groupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a6e098

// -[SCSpotlightPlaybackManager operaPresenterWillBeginPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a6e360

// -[SCSpotlightPlaybackManager updateOperaSize:transitionCoordinator:]
// Type encoding: v40@0:8{CGSize=dd}16@32
// Implementation: 0x106a6e458

// -[SCSpotlightPlaybackManager operaPresenterDidFinishPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a6e4f4

// -[SCSpotlightPlaybackManager operaPresenterWillBeginDismissing:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a6e56c

// -[SCSpotlightPlaybackManager operaPresenterDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6e640

// -[SCSpotlightPlaybackManager operaPresenterWillBeginAnimatingToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6e6cc

// -[SCSpotlightPlaybackManager operaPresenterDidFailToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6e6d0

// -[SCSpotlightPlaybackManager operaPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6e6e0

// -[SCSpotlightPlaybackManager operaPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6e714

// -[SCSpotlightPlaybackManager _removeStories:currentlyPlayingStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a6e824

// -[SCSpotlightPlaybackManager _removeStories:currentlyPlayingStoryFp:interactionHistory:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a6eb60

// -[SCSpotlightPlaybackManager currentOperaPage]
// Type encoding: @16@0:8
// Implementation: 0x106a6ed4c

// -[SCSpotlightPlaybackManager _resetTiledInterstitialState]
// Type encoding: v16@0:8
// Implementation: 0x106a6ede0

// -[SCSpotlightPlaybackManager _removeTiledInterstitialFromOperaPlaylist]
// Type encoding: v16@0:8
// Implementation: 0x106a6ee48

// -[SCSpotlightPlaybackManager _insertTiledInterstitialAfterCurrentGroupIfDue]
// Type encoding: v16@0:8
// Implementation: 0x106a6ef24

// -[SCSpotlightPlaybackManager operaPresenter:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a6f024

// -[SCSpotlightPlaybackManager operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a6f204

// -[SCSpotlightPlaybackManager _discoverFeedStoryFromGroupDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a6f424

// -[SCSpotlightPlaybackManager _handleStoryAdvancementFrom:toStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a6f560

// -[SCSpotlightPlaybackManager _removeStoriesInDataMutatorWithDedupeFps:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6f874

// -[SCSpotlightPlaybackManager _cleanupOpera]
// Type encoding: v16@0:8
// Implementation: 0x106a6f92c

// -[SCSpotlightPlaybackManager _lastExitTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x106a6f9f4

// -[SCSpotlightPlaybackManager _lastExitStoryDedupeFp]
// Type encoding: @16@0:8
// Implementation: 0x106a6fa74

// -[SCSpotlightPlaybackManager _setLastStoryExitDedupeFp:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a6faf4

// -[SCSpotlightPlaybackManager _shouldRequestMoreStories]
// Type encoding: B16@0:8
// Implementation: 0x106a6fbf0

// -[SCSpotlightPlaybackManager _isCurrentStoryLastInPlaylist:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a6fda4

// -[SCSpotlightPlaybackManager _currentStoryIsEndOfMultistoryPlaylist]
// Type encoding: B16@0:8
// Implementation: 0x106a6fe68

// -[SCSpotlightPlaybackManager setSectionKeys:initialIndex:fallbackSectionIndex:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106a6ff9c

// -[SCSpotlightPlaybackManager _prepareRepositoryBackedInterstitialWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a70038

// -[SCSpotlightPlaybackManager switchToSectionKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a706a4

// -[SCSpotlightPlaybackManager _setCurrentSectionKeyIndex:keepCurrentPlaylist:updateCurrentlyPlayingStory:]
// Type encoding: v32@0:8q16B24B28
// Implementation: 0x106a70a30

// -[SCSpotlightPlaybackManager _firstDedupeFpInSectionWithIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x106a710c0

// -[SCSpotlightPlaybackManager _setOperaToPlayStoryWithDedupeFp:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a71310

// -[SCSpotlightPlaybackManager _handleSection:hasMoreStories:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a715a4

// -[SCSpotlightPlaybackManager _lockInPlaylistForSectionKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a71668

// -[SCSpotlightPlaybackManager didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a71874

// -[SCSpotlightPlaybackManager contextOperaPluginWillPresent:presentationContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a71878

// -[SCSpotlightPlaybackManager contextOperaPluginWillDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7187c

// -[SCSpotlightPlaybackManager contextOperaPluginReplyViewWillPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a71880

// -[SCSpotlightPlaybackManager contextOperaPluginReplyViewDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a71904

// -[SCSpotlightPlaybackManager _presentDebugViewControllerForStoryId:debugHtml:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a71988

// -[SCSpotlightPlaybackManager _showStoryDebugViewCallback]
// Type encoding: @?16@0:8
// Implementation: 0x106a7198c

// -[SCSpotlightPlaybackManager discoverFeedDebugViewControllerNeedsToDismiss:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a71994

// -[SCSpotlightPlaybackManager spotlightOperaUserInteractionDidEngage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a71998

// -[SCSpotlightPlaybackManager spotlightOperaUserInteractionDidDisengage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a71a1c

// -[SCSpotlightPlaybackManager tiledInterstitialDidBecomeVisible]
// Type encoding: v16@0:8
// Implementation: 0x106a71aa0

// -[SCSpotlightPlaybackManager tiledInterstitialDidSelectCandidate:unchosenDedupeFps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a71af0

// -[SCSpotlightPlaybackManager tiledInterstitialDidSelectStoryWithDedupeFp:unchosenDedupeFps:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106a71ff4

// -[SCSpotlightPlaybackManager _tiledInterstitialDidSelectStoryWithDedupeFp:unchosenDedupeFps:insertionStrategy:]
// Type encoding: v40@0:8Q16@24q32
// Implementation: 0x106a71ffc

// -[SCSpotlightPlaybackManager removeContentForCreatorId:playlistItemController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a72eb4

// -[SCSpotlightPlaybackManager removeContentForCreatorId:similarStoryIdFpsArray:playlistItemController:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a73078

// -[SCSpotlightPlaybackManager _isRefreshingPlaylist]
// Type encoding: B16@0:8
// Implementation: 0x106a7326c

// -[SCSpotlightPlaybackManager _setRefreshingPlaylist:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a73274

// -[SCSpotlightPlaybackManager refreshStories]
// Type encoding: v16@0:8
// Implementation: 0x106a7327c

// -[SCSpotlightPlaybackManager _refreshStoriesUserInitiated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a73284

// -[SCSpotlightPlaybackManager resetPageRefreshCount]
// Type encoding: v16@0:8
// Implementation: 0x106a73498

// -[SCSpotlightPlaybackManager pageRefreshCount]
// Type encoding: q16@0:8
// Implementation: 0x106a734a0

// -[SCSpotlightPlaybackManager _setCurrentItemToFirstGroupNotInSet:playlistItemController:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106a734a8

// -[SCSpotlightPlaybackManager _purgeViewedContentFromCurrentPlaylist:playlistItemController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a736fc

// -[SCSpotlightPlaybackManager _removeAllStoriesFromCurrentPlaylist:creatorId:similarStoryIdFpArray:playlistItemController:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106a743e8

// -[SCSpotlightPlaybackManager _removeStoriesWithPlaylistGroupIds:playlistItemController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a74918

// -[SCSpotlightPlaybackManager _presentOperaWithStories:isCachedContent:notification:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106a74a98

// -[SCSpotlightPlaybackManager _resetStateWhenExit]
// Type encoding: v16@0:8
// Implementation: 0x106a74b38

// -[SCSpotlightPlaybackManager _loadAdditionalPaginationThreshold]
// Type encoding: v16@0:8
// Implementation: 0x106a74c48

// -[SCSpotlightPlaybackManager _saveAdditionalPaginationThreshold]
// Type encoding: v16@0:8
// Implementation: 0x106a74cf8

// -[SCSpotlightPlaybackManager _updateAdditionalPaginationThreshold]
// Type encoding: v16@0:8
// Implementation: 0x106a74d64

// -[SCSpotlightPlaybackManager _handleSpotlightNotificationsAndGetStoryIdsIfNeeded:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a74e4c

// -[SCSpotlightPlaybackManager _handlePrependingSpotlightNotifications:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a75114

// -[SCSpotlightPlaybackManager _getStoryIdsFromNotificationsToPrepend:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a756c0

// -[SCSpotlightPlaybackManager _loadSpotlightFromNotificationPrefetchWithCompositeStoryId:pushTypeName:pushType:isSdn:]
// Type encoding: @44@0:8@16@24q32B40
// Implementation: 0x106a7596c

// -[SCSpotlightPlaybackManager _fetchSpotlightNotificationsToPrependFromMixer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106a75b9c

// -[SCSpotlightPlaybackManager _cleanupSpotlightNotificationPrefetchDirectoryForNotifs:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a75cf4

// -[SCSpotlightPlaybackManager _handleSpotlightNotification:compositeStoryId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106a75e54

// -[SCSpotlightPlaybackManager _prependSavedStoryToPlaylistWithNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a7602c

// -[SCSpotlightPlaybackManager _storiesMediaInfoFromDiscoverFeedStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a763d8

// -[SCSpotlightPlaybackManager _loadDiscoverFeedStoryFromFileWithCompositeStoryId:pushTypeName:isSdn:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106a76494

// -[SCSpotlightPlaybackManager _savePrefetchedMediaToCacheWithMediaInfo:compositeStoryId:pushTypeName:isSdn:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x106a765cc

// -[SCSpotlightPlaybackManager _logGrapheneNotifNsePrefetchStatus:isSdn:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a76958

// -[SCSpotlightPlaybackManager _logMediaStateForFirstStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7697c

// -[SCSpotlightPlaybackManager _loadDataFromExtensionSharedFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a76b8c

// -[SCSpotlightPlaybackManager _discoverFeedStoryFromStoredData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a76c48

// -[SCSpotlightPlaybackManager _logReceivedStoriesForDisplay:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a76e34

// -[SCSpotlightPlaybackManager _logReachedEndOfPlaylistWithShouldPaginate:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a76ee0

// -[SCSpotlightPlaybackManager muteSwitchPlugin:didSetInitialSoundState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106a76f8c

// -[SCSpotlightPlaybackManager _removeStoriesFromDataStoreThatAreNotGettingPlayed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a76fd4

// -[SCSpotlightPlaybackManager _maybeUpdateDataStoreOrderingToMatch:allowPruning:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a771ec

// -[SCSpotlightPlaybackManager _fixStoryItemPositionForAllStoriesInPlaylist:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a7766c

// -[SCSpotlightPlaybackManager _maybeRemoveContentAlreadyInAnotherFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a77808

// -[SCSpotlightPlaybackManager _maybeRemoveContentWithExpiredSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a77ac0

// -[SCSpotlightPlaybackManager storiesToPrependInPlaylist]
// Type encoding: @16@0:8
// Implementation: 0x106a77d44

// -[SCSpotlightPlaybackManager _maybeActivateExplorationFirstPositionProtection:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a77d6c

// -[SCSpotlightPlaybackManager _insertPrependedStoriesToTopOfPlaylist:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a77f88

// -[SCSpotlightPlaybackManager _preserveMostRecentStoryAndFilterOutAllPreviouslyWatchedStories:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a7834c

// -[SCSpotlightPlaybackManager _removeSensitiveContentFromSpotlightIfPresentedOutsideFifthTab:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a7892c

// -[SCSpotlightPlaybackManager _viewLocation]
// Type encoding: @16@0:8
// Implementation: 0x106a78af0

// -[SCSpotlightPlaybackManager _feedTypeString]
// Type encoding: @16@0:8
// Implementation: 0x106a78b38

// -[SCSpotlightPlaybackManager _lockInDedupeFpOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a78b9c

// -[SCSpotlightPlaybackManager debugSpotlightPostNotificationToastMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a78be0

// -[SCSpotlightPlaybackManager createWidgetPlugin]
// Type encoding: @16@0:8
// Implementation: 0x106a78c08

// -[SCSpotlightPlaybackManager injectSpotlightPreviewToPlaylist:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a78c24

// -[SCSpotlightPlaybackManager advanceToNextStory]
// Type encoding: v16@0:8
// Implementation: 0x106a78d34

// -[SCSpotlightPlaybackManager removeSpotlightWidgetPreviewFromPlaylist]
// Type encoding: v16@0:8
// Implementation: 0x106a78d3c

// -[SCSpotlightPlaybackManager _viewStateFlagForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a78dc8

// -[SCSpotlightPlaybackManager _outputFinalPlaylist:originalPlaylist:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a79164

// -[SCSpotlightPlaybackManager _triggeringSectionWithBroadcastViewLocation:notification:]
// Type encoding: q32@0:8q16@24
// Implementation: 0x106a79168

// -[SCSpotlightPlaybackManager _prependedCommentIdsForNotification:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a791c4

// -[SCSpotlightPlaybackManager _dedupeFpEligibleForLastStoryExit:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a793f0

// -[SCSpotlightPlaybackManager _emitFreshnessLogsForPlayingStory:dedupeFp:itemGroupModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a793fc

// -[SCSpotlightPlaybackManager _batchFetchCompositeStoryIdsFromTweak]
// Type encoding: @16@0:8
// Implementation: 0x106a79b28

// -[SCSpotlightPlaybackManager _recordPlaylistItemDataModel:dedupeFp:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a79dc0

// -[SCSpotlightPlaybackManager _feedPageSectionFromSubfeedPageTypeString:]
// Type encoding: q24@0:8@16
// Implementation: 0x106a7a194

// -[SCSpotlightPlaybackManager didTapSpotlightNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7a26c

// -[SCSpotlightPlaybackManager setPendingNotificationIdForLogging:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7a320

// -[SCSpotlightPlaybackManager _logNotificationPlaybackStartIfApplicable]
// Type encoding: v16@0:8
// Implementation: 0x106a7a350

// -[SCSpotlightPlaybackManager _logNotificationPlaybackErrorIfApplicable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7a510

// -[SCSpotlightPlaybackManager didTapSpotlightDeeplink:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7a670

// -[SCSpotlightPlaybackManager _handleSpotlightDeepLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7a780

// -[SCSpotlightPlaybackManager _handleSpotlightLookUpStory:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a7ac98

// -[SCSpotlightPlaybackManager _presentStoryUnavailableNotification]
// Type encoding: v16@0:8
// Implementation: 0x106a7aef4

// -[SCSpotlightPlaybackManager _prependStoriesToPlaylistAndPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7afa8

// -[SCSpotlightPlaybackManager _shouldShowTiledInterstitial]
// Type encoding: B16@0:8
// Implementation: 0x106a7b1e0

// -[SCSpotlightPlaybackManager _resetInterstitialImpressionCountIfTTLExpired]
// Type encoding: v16@0:8
// Implementation: 0x106a7b26c

// -[SCSpotlightPlaybackManager feedPageEntryType]
// Type encoding: q16@0:8
// Implementation: 0x106a7b3fc

// -[SCSpotlightPlaybackManager setFeedPageEntryType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106a7b404

// -[SCSpotlightPlaybackManager currentPageSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106a7b40c

// -[SCSpotlightPlaybackManager setCurrentPageSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7b414

// -[SCSpotlightPlaybackManager sectionKeys]
// Type encoding: @16@0:8
// Implementation: 0x106a7b41c

// -[SCSpotlightPlaybackManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a7b424

// -[SCSpotlightPlaybackManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7b43c

// -[SCSpotlightPlaybackManager metadataAvailableAtStartCount]
// Type encoding: @16@0:8
// Implementation: 0x106a7b448

// -[SCSpotlightPlaybackManager mediaAvailableAtStartCount]
// Type encoding: @16@0:8
// Implementation: 0x106a7b450

// -[SCSpotlightPlaybackManager storyPlayerModerationData]
// Type encoding: @16@0:8
// Implementation: 0x106a7b458

// -[SCSpotlightPlaybackManager setStoryPlayerModerationData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7b460

// -[SCSpotlightPlaybackManager currentPlaylist]
// Type encoding: @16@0:8
// Implementation: 0x106a7b468

// -[SCSpotlightPlaybackManager currentlyPlayingStory]
// Type encoding: @16@0:8
// Implementation: 0x106a7b470

// -[SCSpotlightPlaybackManager currentSectionKeyIndex]
// Type encoding: q16@0:8
// Implementation: 0x106a7b478

// -[SCSpotlightPlaybackManager eofFeedsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106a7b480

// -[SCSpotlightPlaybackManager associatedSubfeed]
// Type encoding: @16@0:8
// Implementation: 0x106a7b488

// -[SCSpotlightPlaybackManager setAssociatedSubfeed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7b490

// -[SCSpotlightPlaybackManager fallbackSectionIndex]
// Type encoding: q16@0:8
// Implementation: 0x106a7b4c0

// -[SCSpotlightPlaybackManager lastPlayedStory]
// Type encoding: @16@0:8
// Implementation: 0x106a7b4c8

// -[SCSpotlightPlaybackManager setLastPlayedStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7b4d0

// -[SCSpotlightPlaybackManager desiredPlaylistReordering]
// Type encoding: @16@0:8
// Implementation: 0x106a7b500

// -[SCSpotlightPlaybackManager lastLoopedStory]
// Type encoding: @16@0:8
// Implementation: 0x106a7b508

// -[SCSpotlightPlaybackManager setLastLoopedStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7b510

// -[SCSpotlightPlaybackManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a7b540

@end
