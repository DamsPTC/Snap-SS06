// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedActionHandler
// Superclass: NSObject
// Address: 0x112b65f98

@interface SCDiscoverFeedActionHandler

// Property: operaPresenter; attributes: T@"<SCOperaPresenting>",&,N,V_operaPresenter
// Property: currentPlaylistIdArray; attributes: T@"NSMutableArray",&,N,V_currentPlaylistIdArray
// Property: eventAnnouncer; attributes: T@"SCEventListenerAnnouncer",R,N,V_eventAnnouncer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: virtualSectionConfigurable; attributes: T@"<SCVirtualSectionConfigurable>",W,N,V_virtualSectionConfigurable
// Property: storyPositionProvider; attributes: T@"<SCDiscoverFeedStoryPositionProviding>",&,N,V_storyPositionProvider
// Property: operaViewingHandler; attributes: T@"<SCDiscoverFeedOperaViewingHandling>",W,N,V_operaViewingHandler
// Property: currentPageSessionId; attributes: T@"NSString",C,N,V_currentPageSessionId
// Property: delegate; attributes: T@"<SCDiscoverFeedActionHandlerDelegate>",W,N,V_delegate
// Property: pageType; attributes: Tq,N,V_pageType
// Property: isExpandedStoryFeedController; attributes: TB,N,V_isExpandedStoryFeedController
// Property: shouldHandleAction; attributes: TB,N,V_shouldHandleAction
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N,V_deckContainerFactory

// -[SCDiscoverFeedActionHandler addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107979b88

// -[SCDiscoverFeedActionHandler removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107979b90

// -[SCDiscoverFeedActionHandler initWithUserSession:snapTokenProvider:sectionExtensionServices:friendStoriesReplayManager:storiesMediaCoordinator:storiesDataCoordinator:readReceiptCoordinator:storyPositionProvider:optInDataProvider:discoverFeedEventsController:discoverFeedDataFetcher:discoverFeedDataMutator:pageType:cachedReadReceiptViewStateProvider:playableViewModelGenerator:collectionPrefetcher:operaSessionScopeExposer:storiesGrapheneMetricsEmitter:adConfigProvider:actionHandlersFuture:circumstanceEngine:interactionHistoryManager:promotedStoryStateProvider:promotedStoryLogger:userDocObjectContext:snapchattersSynchronousDataFetcher:grapheneRegistry:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:snapchattersDataFetcher:mixerEndpointManager:userSegmentsProvider:isExpandedStoryFeedController:crashLogger:friendStoriesDataCoordinator:spotlightScopeExposer:spotlightScopeServices:contentProductPlaybackExposer:contentProductPlaybackScopeServices:publicGroupsChatScopeLauncher:storiesConfigProvider:networkConnectivityMonitor:upNextV2PlaybackSessionExposer:upNextV2PlaybackSessionScopeServices:postStoryScopeExposer:postStoryScopeServices:creatorSubscriptionsInfoProvider:plusFeatureGating:]
// Type encoding: @396@0:8@16@24@32@40@48@56@64@72@80@88@96@104q112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264B272@276@284@292@300@308@316@324@332@340@348@356@364@372@380@388
// Implementation: 0x107979b98

// -[SCDiscoverFeedActionHandler setUserStoriesAdPrefetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797aa64

// -[SCDiscoverFeedActionHandler setContentInterstitialAdPrefetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797aa94

// -[SCDiscoverFeedActionHandler setFriendingInterstitialPluginService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797aac4

// -[SCDiscoverFeedActionHandler setDiscoverTileTapContextBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797aaf4

// -[SCDiscoverFeedActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10797ab24

// -[SCDiscoverFeedActionHandler _backPatchSaberActionHandlerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797c3dc

// -[SCDiscoverFeedActionHandler didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797c4e4

// -[SCDiscoverFeedActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10797c4e8

// -[SCDiscoverFeedActionHandler didCompletePostStoryScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797c5f4

// -[SCDiscoverFeedActionHandler _didTapPostStoryReplyWithActionModel:sourceView:showStoryReplyPopUp:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10797c63c

// -[SCDiscoverFeedActionHandler _setTransitionModeToUpdateWithTranistionModeDetectionType:baseView:presentingConfig:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10797c748

// -[SCDiscoverFeedActionHandler _updateDiscoverFeedOperaSessionWithLastPlayedDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797c824

// -[SCDiscoverFeedActionHandler _updateReplayStateWithGroupModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797cd04

// -[SCDiscoverFeedActionHandler _handleStartToPlayStoryWithStoryId:hasUnviewedSnaps:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10797d1dc

// -[SCDiscoverFeedActionHandler _operaPresenterFinishTeardown]
// Type encoding: v16@0:8
// Implementation: 0x10797d26c

// -[SCDiscoverFeedActionHandler _updatedDiscoverFeedFriendStorySessionWithGroupDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10797d470

// -[SCDiscoverFeedActionHandler _canPlayStories]
// Type encoding: B16@0:8
// Implementation: 0x10797d52c

// -[SCDiscoverFeedActionHandler _storeNotificationDataWithActionModelParameters:cheetahStory:playFriendStoryActionDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10797d650

// -[SCDiscoverFeedActionHandler _cleanupOpera]
// Type encoding: v16@0:8
// Implementation: 0x10797d794

// -[SCDiscoverFeedActionHandler _friendStoriesSectionIdentifierFromPageType]
// Type encoding: @16@0:8
// Implementation: 0x10797d864

// -[SCDiscoverFeedActionHandler _navigationTypeForFeedType:]
// Type encoding: q20@0:8i16
// Implementation: 0x10797d8a8

// -[SCDiscoverFeedActionHandler _navigationStyleForFeedType:]
// Type encoding: q20@0:8i16
// Implementation: 0x10797d8c0

// -[SCDiscoverFeedActionHandler _isVerticalOperaForFeedType:]
// Type encoding: B20@0:8i16
// Implementation: 0x10797d8d8

// -[SCDiscoverFeedActionHandler _isVerticalVOperaSwipeLeftToAttachmentEnabledForFeedType:]
// Type encoding: B20@0:8i16
// Implementation: 0x10797d95c

// -[SCDiscoverFeedActionHandler _isVerticalVOperaSwipeLeftToContextEnabledForFeedType:]
// Type encoding: B20@0:8i16
// Implementation: 0x10797d974

// -[SCDiscoverFeedActionHandler _friendStoriesViewLocation]
// Type encoding: q16@0:8
// Implementation: 0x10797d98c

// -[SCDiscoverFeedActionHandler _isInStoriesCarouselChatTab]
// Type encoding: B16@0:8
// Implementation: 0x10797d9b0

// -[SCDiscoverFeedActionHandler _friendStoriesPlaybackOverrideDictWithActionModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10797da08

// -[SCDiscoverFeedActionHandler _itemLayoutFromActionModel:]
// Type encoding: q24@0:8@16
// Implementation: 0x10797db54

// -[SCDiscoverFeedActionHandler _firstStoryIdForStoryReplayReplyPopUpDialogWithActionModel:storyId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10797db94

// -[SCDiscoverFeedActionHandler _showStoryDebugViewCallback]
// Type encoding: @?16@0:8
// Implementation: 0x10797dbe0

// -[SCDiscoverFeedActionHandler _handleShowStoryDebugViewWithStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797dcc8

// -[SCDiscoverFeedActionHandler _handleDebugActionWithDebugHtml:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797ddc8

// -[SCDiscoverFeedActionHandler _presentModularSpotlightWithBaseView:initialStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10797df14

// -[SCDiscoverFeedActionHandler _presentPublicGroupChatWithConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797e0c8

// -[SCDiscoverFeedActionHandler didDismissChatWithScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797e1b8

// -[SCDiscoverFeedActionHandler _discoverTileTapPrefetchDedupEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10797e1c0

// -[SCDiscoverFeedActionHandler _playCheetahStoriesWithBaseView:initialCheetahStory:sectionKey:interactionContext:startingEntryEvent:cellSize:tapLocation:actionIdentifier:itemSource:precomputedComposition:]
// Type encoding: v96@0:8@16@24@32q40q48@56@64@72q80@88
// Implementation: 0x10797e1d8

// -[SCDiscoverFeedActionHandler _playCheetahStories:withBaseView:initialCheetahStory:sectionKey:interactionContext:startingEntryEvent:actionIdentifier:itemSource:]
// Type encoding: v80@0:8@16@24@32@40q48q56@64q72
// Implementation: 0x10797e9f4

// -[SCDiscoverFeedActionHandler _precomputedFriendStoryTileTapContextForActionModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10797edd8

// -[SCDiscoverFeedActionHandler _announceAndPlayFriendStoryForActionModel:actionIdentifier:baseView:interactionContext:precomputedContext:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x10797f134

// -[SCDiscoverFeedActionHandler _playFriendStoryWithFirstStory:rankedFriendSummaryData:allFriendStories:allFriendAndNonfriendStories:actionModel:baseView:actionIdentifier:interactionContext:exitOperaOffsetArray:precomputedContext:]
// Type encoding: v96@0:8@16@24@32@40@48@56@64q72@80@88
// Implementation: 0x10797f530

// -[SCDiscoverFeedActionHandler _presentFriendStoriesOperaWithAllStoriesDataModels:friendStoryIds:allNonFriendGroupDataModels:actionModel:firstDisplayGroupDataModel:baseView:rankedFriendSummaryData:upNextDefaultFallbackStories:firstStory:isFromBadging:actionIdentifier:presentingConfig:interactionContext:]
// Type encoding: v116@0:8@16@24@32@40@48@56@64@72@80B88@92@100q108
// Implementation: 0x10797fe4c

// -[SCDiscoverFeedActionHandler _prepareContentProductPlaybackScopeWithViewLocation:initialGroupDataModel:initialStoryId:baseView:allGroupDataModels:storyLoggingFieldsOverrideDict:discoverFeedStories:friendStories:source:layout:firstReplayStoryId:interactionContext:sectionKey:pageType:navigationStyle:isNonFriendStoriesOnlyPlayback:triggeringSection:]
// Type encoding: v148@0:8q16@24@32@40@48@56@64@72q80q88@96q104@112q120q128B136q140
// Implementation: 0x1079802bc

// -[SCDiscoverFeedActionHandler _playTriggeringActionCheetahStory:withBaseView:feedType:source:triggeringItemId:sectionKey:triggeringSection:actionIdentifier:]
// Type encoding: v80@0:8@16@24@32q40@48@56q64@72
// Implementation: 0x10798062c

// -[SCDiscoverFeedActionHandler _playNonMomentsCheetahNotificationStory:withBaseView:storyLoggingFieldsOverrideDict:feedType:actionIdentifier:feedItemSource:triggeringSection:]
// Type encoding: v72@0:8@16@24@32@40@48q56q64
// Implementation: 0x1079809ec

// -[SCDiscoverFeedActionHandler _initOptInAndPlayMixedCarouselStoriesWithActionModel:baseView:showStoryReplyPopUp:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10798112c

// -[SCDiscoverFeedActionHandler _playMixedCarouselStoriesWithActionModel:baseView:showStoryReplyPopUp:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1079813bc

// -[SCDiscoverFeedActionHandler _mixedCarouselStoriesPlaybackOverrideDictWithActionModel:isFromNotification:virtualSectionMapping:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x107982e94

// -[SCDiscoverFeedActionHandler _launchUpNextV2PlaybackSessionScopeWithInitialStories:initialStoryIds:triggeringStoryId:triggeringFeedType:triggeringSource:defaultFallbackStories:]
// Type encoding: v56@0:8@16@24@32i40i44@48
// Implementation: 0x107982ff0

// -[SCDiscoverFeedActionHandler _upNextV2TriggeringSourceWithIsFriendStory:isFromBadging:isFromNotification:feedType:]
// Type encoding: i32@0:8B16B20B24i28
// Implementation: 0x107983324

// -[SCDiscoverFeedActionHandler _logPromotedStoryTappedIfNeeded:sectionKey:cellSize:tapLocation:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1079833a8

// -[SCDiscoverFeedActionHandler _announceActionWithActionModel:cheetahStory:sectionKey:interactionContext:actionIdentifier:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x107983534

// -[SCDiscoverFeedActionHandler _feedTypeFromGroupDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107983c54

// -[SCDiscoverFeedActionHandler didTapToPlayStory:sectionKey:baseView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107983d08

// -[SCDiscoverFeedActionHandler didHideStoryWithCreatorId:similarStoryIdFpsArray:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107983d58

// -[SCDiscoverFeedActionHandler didBlockUserWithCreatorId:similarStoryIdFpsArray:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107983e5c

// -[SCDiscoverFeedActionHandler shouldCancelOperaPresentationIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107983f60

// -[SCDiscoverFeedActionHandler didTapToPlayFriendStory:rankedFriendStories:allFriendStories:loggingInfo:itemSource:baseView:exitOperaOffsetArray:]
// Type encoding: v72@0:8@16@24@32@40q48@56@64
// Implementation: 0x107983f68

// -[SCDiscoverFeedActionHandler contextOperaPluginWillPresent:presentationContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079840dc

// -[SCDiscoverFeedActionHandler contextOperaPluginWillDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107984130

// -[SCDiscoverFeedActionHandler operaPresenterWillBeginPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107984134

// -[SCDiscoverFeedActionHandler operaPresenterDidFinishPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107984224

// -[SCDiscoverFeedActionHandler operaPresenterWillBeginDismissing:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079842c4

// -[SCDiscoverFeedActionHandler operaPresenterDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107984978

// -[SCDiscoverFeedActionHandler operaPresenterWillBeginAnimatingToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798497c

// -[SCDiscoverFeedActionHandler operaPresenterDidFailToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107984ab4

// -[SCDiscoverFeedActionHandler operaPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107984ae4

// -[SCDiscoverFeedActionHandler operaPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x107984b7c

// -[SCDiscoverFeedActionHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107984d00

// -[SCDiscoverFeedActionHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107984fac

// -[SCDiscoverFeedActionHandler playbackPresenterDidTearDown:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107985404

// -[SCDiscoverFeedActionHandler playbackPresenter:didBeginPlayingStory:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107985408

// -[SCDiscoverFeedActionHandler playbackPresenter:didFinishPlayingStory:nextStory:playbackScope:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10798540c

// -[SCDiscoverFeedActionHandler playbackPresenterDidCancelDismissing:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107985410

// -[SCDiscoverFeedActionHandler playbackPresenterDidFailToPresent:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107985414

// -[SCDiscoverFeedActionHandler playbackPresenterDidFinishDismissing:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107985418

// -[SCDiscoverFeedActionHandler playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10798541c

// -[SCDiscoverFeedActionHandler playbackPresenterWillBeginAnimatingToDismiss:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107985420

// -[SCDiscoverFeedActionHandler playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107985424

// -[SCDiscoverFeedActionHandler playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107985428

// -[SCDiscoverFeedActionHandler playbackDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798542c

// -[SCDiscoverFeedActionHandler isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x1079854c0

// -[SCDiscoverFeedActionHandler isPresentingOtherViewController]
// Type encoding: B16@0:8
// Implementation: 0x107985640

// -[SCDiscoverFeedActionHandler cancelPresentation]
// Type encoding: v16@0:8
// Implementation: 0x1079857c0

// -[SCDiscoverFeedActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107985958

// -[SCDiscoverFeedActionHandler updateDismissBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107985ac4

// -[SCDiscoverFeedActionHandler dismissWithInteractionType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107985ba4

// -[SCDiscoverFeedActionHandler timeBeforeReturningToCamera]
// Type encoding: d16@0:8
// Implementation: 0x107985bac

// -[SCDiscoverFeedActionHandler pausePlayback]
// Type encoding: v16@0:8
// Implementation: 0x107985c00

// -[SCDiscoverFeedActionHandler resumePlayback]
// Type encoding: v16@0:8
// Implementation: 0x107985c10

// -[SCDiscoverFeedActionHandler operaModalPresentationDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x107985c20

// -[SCDiscoverFeedActionHandler operaModalDismissalDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x107985c30

// -[SCDiscoverFeedActionHandler removeSpotlightScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x107985c40

// -[SCDiscoverFeedActionHandler removeContentForCreatorId:playlistItemController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107985c88

// -[SCDiscoverFeedActionHandler _operaCurrentPlaylistExcludingAds]
// Type encoding: @16@0:8
// Implementation: 0x107986148

// -[SCDiscoverFeedActionHandler _clearCurrentPlaylist]
// Type encoding: v16@0:8
// Implementation: 0x1079861b4

// -[SCDiscoverFeedActionHandler _updateCurrentPlaylistWithStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079861f0

// -[SCDiscoverFeedActionHandler _isDiscoverSubfeedInForYou:]
// Type encoding: B20@0:8i16
// Implementation: 0x107986238

// -[SCDiscoverFeedActionHandler _clearHovaStoryBadge]
// Type encoding: v16@0:8
// Implementation: 0x107986278

// -[SCDiscoverFeedActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x107986378

// -[SCDiscoverFeedActionHandler deckContainerFactory]
// Type encoding: @16@0:8
// Implementation: 0x107986390

// -[SCDiscoverFeedActionHandler setDeckContainerFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079863a8

// -[SCDiscoverFeedActionHandler storyPositionProvider]
// Type encoding: @16@0:8
// Implementation: 0x1079863b4

// -[SCDiscoverFeedActionHandler setStoryPositionProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079863bc

// -[SCDiscoverFeedActionHandler operaViewingHandler]
// Type encoding: @16@0:8
// Implementation: 0x1079863ec

// -[SCDiscoverFeedActionHandler setOperaViewingHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107986404

// -[SCDiscoverFeedActionHandler currentPageSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107986410

// -[SCDiscoverFeedActionHandler setCurrentPageSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107986418

// -[SCDiscoverFeedActionHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x107986420

// -[SCDiscoverFeedActionHandler setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107986438

// -[SCDiscoverFeedActionHandler shouldHandleAction]
// Type encoding: B16@0:8
// Implementation: 0x107986444

// -[SCDiscoverFeedActionHandler setShouldHandleAction:]
// Type encoding: v20@0:8B16
// Implementation: 0x10798644c

// -[SCDiscoverFeedActionHandler virtualSectionConfigurable]
// Type encoding: @16@0:8
// Implementation: 0x107986454

// -[SCDiscoverFeedActionHandler setVirtualSectionConfigurable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798646c

// -[SCDiscoverFeedActionHandler pageType]
// Type encoding: q16@0:8
// Implementation: 0x107986478

// -[SCDiscoverFeedActionHandler setPageType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107986480

// -[SCDiscoverFeedActionHandler isExpandedStoryFeedController]
// Type encoding: B16@0:8
// Implementation: 0x107986488

// -[SCDiscoverFeedActionHandler setIsExpandedStoryFeedController:]
// Type encoding: v20@0:8B16
// Implementation: 0x107986490

// -[SCDiscoverFeedActionHandler eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x107986498

// -[SCDiscoverFeedActionHandler operaPresenter]
// Type encoding: @16@0:8
// Implementation: 0x1079864a0

// -[SCDiscoverFeedActionHandler setOperaPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079864a8

// -[SCDiscoverFeedActionHandler currentPlaylistIdArray]
// Type encoding: @16@0:8
// Implementation: 0x1079864d8

// -[SCDiscoverFeedActionHandler setCurrentPlaylistIdArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079864e0

// -[SCDiscoverFeedActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107986510

// +[SCDiscoverFeedActionHandler announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107979b7c

@end
