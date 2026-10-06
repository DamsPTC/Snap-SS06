// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaStoryPlayer
// Superclass: NSObject
// Address: 0x112aeb4c8

@interface SCImpalaStoryPlayer

// Property: userSession; attributes: T@"SCUserSession",R,W,N,V_userSession
// Property: navigationServices; attributes: T@"_TtC20SCNavigationServices20SCNavigationServices",R,W,N,V_navigationServices
// Property: delegate; attributes: T@"<SCImpalaStoryPlayerDelegate>",W,N,V_delegate
// Property: presenting; attributes: TB,R,N,GisPresenting
// Property: disablePublisherProfilePresentation; attributes: TB,N,V_disablePublisherProfilePresentation
// Property: disableBusinessProfilePresentation; attributes: TB,N,V_disableBusinessProfilePresentation
// Property: dataModelProcessor; attributes: T@?,C,N,V_dataModelProcessor
// Property: presentingViewController; attributes: T@"UIViewController",W,N,V_presentingViewController
// Property: getPresentingViewController; attributes: T@?,C,N,VgetPresentingViewController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaStoryPlayer playStoryForBusinessProfileHandler:baseView:startWithUnviewed:useCircleTransition:contentViewSource:]
// Type encoding: v48@0:8@16@24B32B36q40
// Implementation: 0x106644520

// -[SCImpalaStoryPlayer initWithUserSession:navigationServices:presentingViewController:circumstanceEngine:storyPlayerPresenterCreator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:creatorSettingsDataFetcher:readReceiptCoordinator:publicStoryDataProvider:adConfigProvider:discoverFeedEventController:optInDataProvider:discoverFeedDataMutator:playableViewModelGenerator:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x1066448e0

// -[SCImpalaStoryPlayer initWithUserSession:navigationServices:circumstanceEngine:storyPlayerPresenterCreator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:creatorSettingsDataFetcher:readReceiptCoordinator:publicStoryDataProvider:adConfigProvider:discoverFeedEventController:playableViewModelGenerator:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x106644c80

// -[SCImpalaStoryPlayer isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x106644f78

// -[SCImpalaStoryPlayer configureOwnedStoryPlaybackJoiningWithMyStoriesDataCoordinator:currentUserId:publicStoryStateObserver:snapProProfilesProvider:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106644f80

// -[SCImpalaStoryPlayer setOwnedStoryJoinedStateHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1066450c8

// -[SCImpalaStoryPlayer playItems:options:callback:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106645298

// -[SCImpalaStoryPlayer playItemsWithItemProvider:baseView:options:callback:currentlyFinishedPlayback:paginatedItems:storyPlayerDependencies:]
// Type encoding: v72@0:8@?16@24@32@?40@?48@56@64
// Implementation: 0x10664545c

// -[SCImpalaStoryPlayer _initializeContentPlaybackScopeOnMainThread:playlistStartingIndex:baseView:options:callback:currentlyFinishedPlayback:overridePlaybackDataProvider:presenter:]
// Type encoding: v80@0:8@16q24@32@40@?48@?56@64@72
// Implementation: 0x1066461cc

// -[SCImpalaStoryPlayer _initializeContentPlaybackScope:playlistStartingIndex:baseView:options:callback:currentlyFinishedPlayback:overridePlaybackDataProvider:presenter:]
// Type encoding: v80@0:8@16q24@32@40@?48@?56@64@72
// Implementation: 0x106646440

// -[SCImpalaStoryPlayer _prepareForContentPlaybackScopeWithDataModels:options:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106646890

// -[SCImpalaStoryPlayer _registerJoinedOwnedStorySnapPlaybackInfos:]
// Type encoding: v24@0:8@16
// Implementation: 0x106646f80

// -[SCImpalaStoryPlayer _onPaginatedItemsUpdate:playlistFetcher:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106647260

// -[SCImpalaStoryPlayer _shouldAttemptJoinedOwnedStoryPlaybackForOptions:]
// Type encoding: B24@0:8@16
// Implementation: 0x106647708

// -[SCImpalaStoryPlayer _ownedStoryRingBusinessProfileIdForNativeInitialProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x106647850

// -[SCImpalaStoryPlayer _ownedStoryMyStoriesDataCoordinatorLazy]
// Type encoding: @16@0:8
// Implementation: 0x1066479a8

// -[SCImpalaStoryPlayer _ownedStoryRingJoinedItemProviderWithBusinessProfileId:baseViewRef:controlProvider:playlistFetcher:]
// Type encoding: @?48@0:8@16@24@?32@?40
// Implementation: 0x106647b04

// -[SCImpalaStoryPlayer _ownedStoryRingNativeInitialItemProviderWithBusinessProfileId:baseViewRef:]
// Type encoding: @?32@0:8@16@24
// Implementation: 0x106647ce4

// -[SCImpalaStoryPlayer _prewarmJoinedOwnedStoryStreamIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x106647eac

// -[SCImpalaStoryPlayer _startJoinedOwnedStoryStreamWhenProfileHandlersReady]
// Type encoding: v16@0:8
// Implementation: 0x106647f30

// -[SCImpalaStoryPlayer _startJoinedOwnedStoryStreamWithBusinessProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106648278

// -[SCImpalaStoryPlayer _handleJoinedOwnedStoryEmission:sessionToken:publicSourceSettledEmpty:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106648654

// -[SCImpalaStoryPlayer _deliverLatestJoinedStoryItemsIfReadyForBusinessProfileId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066489fc

// -[SCImpalaStoryPlayer _resetJoinedStoryPlaybackSession]
// Type encoding: v16@0:8
// Implementation: 0x106648b78

// -[SCImpalaStoryPlayer _tearDownJoinedStoryStream]
// Type encoding: v16@0:8
// Implementation: 0x106648be0

// -[SCImpalaStoryPlayer dismissWithAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x106648c50

// -[SCImpalaStoryPlayer _announcePageTypeChangeForStoryPlayerLoggingIfNeeded:conentViewSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106648c94

// -[SCImpalaStoryPlayer _pageTypeFromComposerOptions:]
// Type encoding: q24@0:8@16
// Implementation: 0x106648ed8

// -[SCImpalaStoryPlayer playFeedCardsWithPaginatedItems:startingIndex:baseView:options:onFeedCardPlaybackCompleted:]
// Type encoding: v56@0:8@16d24@32@40@?48
// Implementation: 0x106648fa8

// -[SCImpalaStoryPlayer _startStoryPlayerPresenterWithFeedCards:startingIndex:baseView:circumstanceEngine:options:onFeedCardPlaybackCompleted:presenter:]
// Type encoding: v72@0:8@16d24@32@40@48@?56@64
// Implementation: 0x1066492e4

// -[SCImpalaStoryPlayer _onPaginatedFeedCardsUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106649cc8

// -[SCImpalaStoryPlayer storyPlayerPresenterWillBeginDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10664a068

// -[SCImpalaStoryPlayer storyPlayerPresenterWillBeginPresenting:]
// Type encoding: v24@0:8@16
// Implementation: 0x10664a094

// -[SCImpalaStoryPlayer storyPlayerPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10664a100

// -[SCImpalaStoryPlayer storyPlayerPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x10664a13c

// -[SCImpalaStoryPlayer pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10664a1a4

// -[SCImpalaStoryPlayer playStoryForStoryCard:baseView:startWithUnviewed:useCircleTransition:showMetricsFooterBar:contentViewSource:storyAnalyticOptions:callback:]
// Type encoding: v68@0:8@16@24B32B36B40q44@52@?60
// Implementation: 0x10664a1b0

// -[SCImpalaStoryPlayer playStoryForFeedCard:baseView:startWithUnviewed:useCircleTransition:showMetricsFooterBar:contentViewSource:startingSnapId:]
// Type encoding: v60@0:8@16@24B32B36B40q44@52
// Implementation: 0x10664a308

// -[SCImpalaStoryPlayer _startStoryPresenterWithPlaylistFetcher:playbackCompletion:options:callback:baseView:presenter:]
// Type encoding: v64@0:8@16@?24@32@?40@48@56
// Implementation: 0x10664a454

// -[SCImpalaStoryPlayer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10664a828

// -[SCImpalaStoryPlayer presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x10664a874

// -[SCImpalaStoryPlayer setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10664a88c

// -[SCImpalaStoryPlayer getPresentingViewController]
// Type encoding: @?16@0:8
// Implementation: 0x10664a898

// -[SCImpalaStoryPlayer setGetPresentingViewController:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10664a8a0

// -[SCImpalaStoryPlayer userSession]
// Type encoding: @16@0:8
// Implementation: 0x10664a8a8

// -[SCImpalaStoryPlayer navigationServices]
// Type encoding: @16@0:8
// Implementation: 0x10664a8c0

// -[SCImpalaStoryPlayer delegate]
// Type encoding: @16@0:8
// Implementation: 0x10664a8d8

// -[SCImpalaStoryPlayer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10664a8f0

// -[SCImpalaStoryPlayer disablePublisherProfilePresentation]
// Type encoding: B16@0:8
// Implementation: 0x10664a8fc

// -[SCImpalaStoryPlayer setDisablePublisherProfilePresentation:]
// Type encoding: v20@0:8B16
// Implementation: 0x10664a904

// -[SCImpalaStoryPlayer disableBusinessProfilePresentation]
// Type encoding: B16@0:8
// Implementation: 0x10664a90c

// -[SCImpalaStoryPlayer setDisableBusinessProfilePresentation:]
// Type encoding: v20@0:8B16
// Implementation: 0x10664a914

// -[SCImpalaStoryPlayer dataModelProcessor]
// Type encoding: @?16@0:8
// Implementation: 0x10664a91c

// -[SCImpalaStoryPlayer setDataModelProcessor:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10664a924

// -[SCImpalaStoryPlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10664a92c

// +[SCImpalaStoryPlayer _SCDiscoverFeedStoryFromStoryCardItem:requestId:responseTimestamp:position:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32Q40@48
// Implementation: 0x106649b94

@end
