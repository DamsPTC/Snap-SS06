// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyStoriesViewingSession
// Superclass: NSObject
// Address: 0x112b60a48

@interface SCLegacyStoriesViewingSession

// Property: isReplayMode; attributes: TB,R,N,V_isReplayMode
// Property: viewingType; attributes: Tq,N,V_viewingType
// Property: storiesViewingContext; attributes: TQ,N,V_storiesViewingContext
// Property: sourceViewLocation; attributes: Tq,N,V_sourceViewLocation
// Property: viewLocation; attributes: Tq,N,V_viewLocation
// Property: viewLocationPosition; attributes: TQ,N,V_viewLocationPosition
// Property: liveStoriesCount; attributes: TQ,N,V_liveStoriesCount
// Property: storySessionId; attributes: Tq,N,V_storySessionId
// Property: entryReason; attributes: TQ,N,V_entryReason
// Property: defaultStoryViewingActionContext; attributes: TQ,N,V_defaultStoryViewingActionContext
// Property: totalViewedStoriesCount; attributes: TQ,R,N,V_totalViewedStoriesCount
// Property: currentFriendStoriesViewingSessions; attributes: T@"NSMutableArray",R,N,V_currentFriendStoriesViewingSessions
// Property: isInStoryPlaylistMode; attributes: TB,R,N,V_isInStoryPlaylistMode
// Property: friendNamesInRecentUpdate; attributes: T@"NSArray",R,C,N,V_friendNamesInRecentUpdate
// Property: loadingScreenCount; attributes: TQ,R,N,V_loadingScreenCount
// Property: isFullyViewed; attributes: TB,R,N,V_isFullyViewed
// Property: sortOrderId; attributes: T@"NSString",R,C,N,V_sortOrderId
// Property: isViewingLongform; attributes: TB,R,N,V_isViewingLongform
// Property: playSource; attributes: Tq,R,N,V_playSource
// Property: startingEntryEvent; attributes: Tq,R,N,V_startingEntryEvent
// Property: operaNavigationType; attributes: Tq,R,N,V_operaNavigationType
// Property: storyAnalyticsOptions; attributes: T@"SCCStoryPlayerStoryAnalyticsOptions",R,N,V_storyAnalyticsOptions
// Property: eventAnnouncing; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_eventAnnouncing
// Property: operaPageProvider; attributes: T@"<SCLegacyStoriesOperaPageProvider>",W,N,V_operaPageProvider
// Property: previousFriendStoriesDisplayed; attributes: T@"FriendStories",R,N,V_previousFriendStoriesDisplayed
// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: initialFriendsPlayListCount; attributes: TQ,R,N,V_initialFriendsPlayListCount
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyStoriesViewingSession initWithUserSession:startChatDelegate:storyPlayMode:recentUpdateFriendNameList:viewLocation:sortOrderId:viewingType:storiesViewingContext:viewLocationPosition:storyViewingActionContext:playSource:startingEntryEvent:navigationServices:storySessionId:readReceiptCoordinator:storyAnalyticsOptions:safetyReportScopeExposer:externalLinkSendingService:grapheneRegistry:snapProShareMessageSender:isSavedStorySharingEnabled:boostCoordinator:circumstanceEngine:notificationOSSettingsRetriever:temporaryFileWriter:storiesMediaCoordinator:offPlatformLinkGenerationService:spotlightShareSender:snapchattersSynchronousDataFetcher:storiesUsageLogger:lazyDiscoverFeedEventsController:lazyDiscoverFeedInteractionHistoryManager:]
// Type encoding: @268@0:8@16@24q32@40q48@56q64Q72Q80Q88q96q104@112q120@128@136@144@152@160@168B176@180@188@196@204@212@220@228@236@244@252@260
// Implementation: 0x1072102d8

// -[SCLegacyStoriesViewingSession startSession]
// Type encoding: v16@0:8
// Implementation: 0x107210970

// -[SCLegacyStoriesViewingSession _updateFirstPagePropertyWithTooltipIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107210974

// -[SCLegacyStoriesViewingSession stopSession]
// Type encoding: v16@0:8
// Implementation: 0x107210a28

// -[SCLegacyStoriesViewingSession _pauseSession]
// Type encoding: v16@0:8
// Implementation: 0x107210b54

// -[SCLegacyStoriesViewingSession _logStoryStoryViewSession]
// Type encoding: v16@0:8
// Implementation: 0x107210cc0

// -[SCLegacyStoriesViewingSession _incrementTotalViewedStoriesCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x107210d40

// -[SCLegacyStoriesViewingSession _shouldShowCheetahSwipeLeftInterstitial:]
// Type encoding: B24@0:8@16
// Implementation: 0x107210de8

// -[SCLegacyStoriesViewingSession _markCheetahSwipeLeftInterstitialCompleted]
// Type encoding: v16@0:8
// Implementation: 0x107210f7c

// -[SCLegacyStoriesViewingSession extraPropertiesForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x107210fc4

// -[SCLegacyStoriesViewingSession _extraToolTipsPropertiesForStories:]
// Type encoding: @24@0:8@16
// Implementation: 0x107211088

// -[SCLegacyStoriesViewingSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107211230

// -[SCLegacyStoriesViewingSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107211624

// -[SCLegacyStoriesViewingSession viewWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1072125ec

// -[SCLegacyStoriesViewingSession viewDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10721268c

// -[SCLegacyStoriesViewingSession _editionDoesDisplaySinceForegroundedApp]
// Type encoding: v16@0:8
// Implementation: 0x1072126d0

// -[SCLegacyStoriesViewingSession _teardownForegroundDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x107212724

// -[SCLegacyStoriesViewingSession hasSessionEnded]
// Type encoding: B16@0:8
// Implementation: 0x107212750

// -[SCLegacyStoriesViewingSession _didStartPlayingStory:friendStories:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107212758

// -[SCLegacyStoriesViewingSession _setupChromeInteractionSession]
// Type encoding: v16@0:8
// Implementation: 0x10721288c

// -[SCLegacyStoriesViewingSession _setupReportSession]
// Type encoding: v16@0:8
// Implementation: 0x1072129ac

// -[SCLegacyStoriesViewingSession _setupSharingSession]
// Type encoding: v16@0:8
// Implementation: 0x107212a70

// -[SCLegacyStoriesViewingSession _setupSubscriptionSession]
// Type encoding: v16@0:8
// Implementation: 0x107212ba8

// -[SCLegacyStoriesViewingSession _updateOperaNavigationTypeWithParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x107212d30

// -[SCLegacyStoriesViewingSession currentFriendStoriesViewingSession]
// Type encoding: @16@0:8
// Implementation: 0x107212df4

// -[SCLegacyStoriesViewingSession currentFriendStoriesAbsoluteIndex]
// Type encoding: Q16@0:8
// Implementation: 0x107212dfc

// -[SCLegacyStoriesViewingSession currentFriendStoriesRelativeIndex]
// Type encoding: Q16@0:8
// Implementation: 0x107212e8c

// -[SCLegacyStoriesViewingSession indexOfStoryRelativeToInitialStory:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107212ec8

// -[SCLegacyStoriesViewingSession _updateCurrentFriendStoriesViewingSessionsWithEvent:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107212f24

// -[SCLegacyStoriesViewingSession _removeFriendStoriesViewingSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x107213348

// -[SCLegacyStoriesViewingSession userDidTakeScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x1072133bc

// -[SCLegacyStoriesViewingSession viewWillEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1072133ec

// -[SCLegacyStoriesViewingSession exitReason]
// Type encoding: q16@0:8
// Implementation: 0x1072133f8

// -[SCLegacyStoriesViewingSession lastInteraction]
// Type encoding: @16@0:8
// Implementation: 0x10721348c

// -[SCLegacyStoriesViewingSession uniqueViewedStoriesCount]
// Type encoding: Q16@0:8
// Implementation: 0x1072134ec

// -[SCLegacyStoriesViewingSession uniqueViewedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x1072134f4

// -[SCLegacyStoriesViewingSession totalViewedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107213608

// -[SCLegacyStoriesViewingSession totalOpenedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x10721371c

// -[SCLegacyStoriesViewingSession _playSourceUponOpenOpera]
// Type encoding: q16@0:8
// Implementation: 0x107213830

// -[SCLegacyStoriesViewingSession viewLocationPosition]
// Type encoding: Q16@0:8
// Implementation: 0x107213894

// -[SCLegacyStoriesViewingSession setEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107213904

// -[SCLegacyStoriesViewingSession setOperaPageProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107213998

// -[SCLegacyStoriesViewingSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1072139f4

// -[SCLegacyStoriesViewingSession setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x107213ab0

// -[SCLegacyStoriesViewingSession extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107213af0

// -[SCLegacyStoriesViewingSession shouldUseExtendedResetToCamera]
// Type encoding: B16@0:8
// Implementation: 0x107213c68

// -[SCLegacyStoriesViewingSession isPromoted]
// Type encoding: B16@0:8
// Implementation: 0x107213c70

// -[SCLegacyStoriesViewingSession isExplorationStory]
// Type encoding: B16@0:8
// Implementation: 0x107213d1c

// -[SCLegacyStoriesViewingSession isReplayMode]
// Type encoding: B16@0:8
// Implementation: 0x107213dc8

// -[SCLegacyStoriesViewingSession viewingType]
// Type encoding: q16@0:8
// Implementation: 0x107213dd0

// -[SCLegacyStoriesViewingSession setViewingType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107213dd8

// -[SCLegacyStoriesViewingSession storiesViewingContext]
// Type encoding: Q16@0:8
// Implementation: 0x107213de0

// -[SCLegacyStoriesViewingSession setStoriesViewingContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107213de8

// -[SCLegacyStoriesViewingSession sourceViewLocation]
// Type encoding: q16@0:8
// Implementation: 0x107213df0

// -[SCLegacyStoriesViewingSession setSourceViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107213df8

// -[SCLegacyStoriesViewingSession viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x107213e00

// -[SCLegacyStoriesViewingSession setViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107213e08

// -[SCLegacyStoriesViewingSession setViewLocationPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107213e10

// -[SCLegacyStoriesViewingSession liveStoriesCount]
// Type encoding: Q16@0:8
// Implementation: 0x107213e18

// -[SCLegacyStoriesViewingSession setLiveStoriesCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107213e20

// -[SCLegacyStoriesViewingSession storySessionId]
// Type encoding: q16@0:8
// Implementation: 0x107213e28

// -[SCLegacyStoriesViewingSession setStorySessionId:]
// Type encoding: v24@0:8q16
// Implementation: 0x107213e30

// -[SCLegacyStoriesViewingSession entryReason]
// Type encoding: Q16@0:8
// Implementation: 0x107213e38

// -[SCLegacyStoriesViewingSession setEntryReason:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107213e40

// -[SCLegacyStoriesViewingSession defaultStoryViewingActionContext]
// Type encoding: Q16@0:8
// Implementation: 0x107213e48

// -[SCLegacyStoriesViewingSession setDefaultStoryViewingActionContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107213e50

// -[SCLegacyStoriesViewingSession totalViewedStoriesCount]
// Type encoding: Q16@0:8
// Implementation: 0x107213e58

// -[SCLegacyStoriesViewingSession currentFriendStoriesViewingSessions]
// Type encoding: @16@0:8
// Implementation: 0x107213e60

// -[SCLegacyStoriesViewingSession isInStoryPlaylistMode]
// Type encoding: B16@0:8
// Implementation: 0x107213e68

// -[SCLegacyStoriesViewingSession friendNamesInRecentUpdate]
// Type encoding: @16@0:8
// Implementation: 0x107213e70

// -[SCLegacyStoriesViewingSession loadingScreenCount]
// Type encoding: Q16@0:8
// Implementation: 0x107213e78

// -[SCLegacyStoriesViewingSession isFullyViewed]
// Type encoding: B16@0:8
// Implementation: 0x107213e80

// -[SCLegacyStoriesViewingSession sortOrderId]
// Type encoding: @16@0:8
// Implementation: 0x107213e88

// -[SCLegacyStoriesViewingSession isViewingLongform]
// Type encoding: B16@0:8
// Implementation: 0x107213e90

// -[SCLegacyStoriesViewingSession playSource]
// Type encoding: q16@0:8
// Implementation: 0x107213e98

// -[SCLegacyStoriesViewingSession startingEntryEvent]
// Type encoding: q16@0:8
// Implementation: 0x107213ea0

// -[SCLegacyStoriesViewingSession operaNavigationType]
// Type encoding: q16@0:8
// Implementation: 0x107213ea8

// -[SCLegacyStoriesViewingSession storyAnalyticsOptions]
// Type encoding: @16@0:8
// Implementation: 0x107213eb0

// -[SCLegacyStoriesViewingSession eventAnnouncing]
// Type encoding: @16@0:8
// Implementation: 0x107213eb8

// -[SCLegacyStoriesViewingSession operaPageProvider]
// Type encoding: @16@0:8
// Implementation: 0x107213ec0

// -[SCLegacyStoriesViewingSession previousFriendStoriesDisplayed]
// Type encoding: @16@0:8
// Implementation: 0x107213ed8

// -[SCLegacyStoriesViewingSession operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x107213ee0

// -[SCLegacyStoriesViewingSession initialFriendsPlayListCount]
// Type encoding: Q16@0:8
// Implementation: 0x107213ef8

// -[SCLegacyStoriesViewingSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x107213f00

// -[SCLegacyStoriesViewingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107213f18

// +[SCLegacyStoriesViewingSession announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107213854

@end
