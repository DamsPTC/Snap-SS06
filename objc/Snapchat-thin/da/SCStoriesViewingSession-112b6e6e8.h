// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesViewingSession
// Superclass: NSObject
// Address: 0x112b6e6e8

@interface SCStoriesViewingSession

// Property: viewingType; attributes: Tq,N,V_viewingType
// Property: liveStoriesCount; attributes: TQ,N,V_liveStoriesCount
// Property: entryReason; attributes: TQ,N,V_entryReason
// Property: defaultStoryViewingActionContext; attributes: TQ,N,V_defaultStoryViewingActionContext
// Property: currentFriendStoriesViewingSessions; attributes: T@"NSMutableArray",R,N,V_currentFriendStoriesViewingSessions
// Property: lastFriendStoryInteraction; attributes: T@"SCOperaViewInteractionData",R,N,V_lastFriendStoryInteraction
// Property: isTopSnap; attributes: TB,R,N,V_isTopSnap
// Property: loadingScreenCount; attributes: TQ,R,N,V_loadingScreenCount
// Property: isViewingLongform; attributes: TB,R,N,V_isViewingLongform
// Property: playSource; attributes: Tq,R,N,V_playSource
// Property: startingEntryEvent; attributes: Tq,R,N,V_startingEntryEvent
// Property: operaNavigationType; attributes: Tq,R,N,V_operaNavigationType
// Property: mediaPlaybackSessionId; attributes: T@"NSString",R,C,N,V_mediaPlaybackSessionId
// Property: eventAnnouncing; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_eventAnnouncing
// Property: operaPageProvider; attributes: T@"<SCStoriesOperaPageProvider>",W,N,V_operaPageProvider
// Property: previousStoriesPlaybackSequenceDisplayed; attributes: T@"SCStoriesOperaPlaybackSequence",R,N,V_previousStoriesPlaybackSequenceDisplayed
// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: initialFriendsPlayListCount; attributes: TQ,R,N,V_initialFriendsPlayListCount
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesViewingSession didUpdateFriendsPlaylistCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107aa1088

// -[SCStoriesViewingSession startSession]
// Type encoding: v16@0:8
// Implementation: 0x107aa108c

// -[SCStoriesViewingSession stopSession]
// Type encoding: v16@0:8
// Implementation: 0x107aa112c

// -[SCStoriesViewingSession _pauseSession]
// Type encoding: v16@0:8
// Implementation: 0x107aa1270

// -[SCStoriesViewingSession _logStoryStoryViewSession]
// Type encoding: v16@0:8
// Implementation: 0x107aa13dc

// -[SCStoriesViewingSession _incrementTotalViewedStoriesCount]
// Type encoding: v16@0:8
// Implementation: 0x107aa148c

// -[SCStoriesViewingSession _shouldShowCheetahSwipeLeftInterstitial:]
// Type encoding: B24@0:8@16
// Implementation: 0x107aa149c

// -[SCStoriesViewingSession _markCheetahSwipeLeftInterstitialCompleted]
// Type encoding: v16@0:8
// Implementation: 0x107aa1600

// -[SCStoriesViewingSession _extraPropertiesForStorySnap:pageProperties:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107aa1634

// -[SCStoriesViewingSession extraPropertiesForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107aa1904

// -[SCStoriesViewingSession _extraToolTipsPropertiesForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107aa1a50

// -[SCStoriesViewingSession _isFirstChunkWithStorySnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x107aa1c84

// -[SCStoriesViewingSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107aa1dd8

// -[SCStoriesViewingSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107aa23f8

// -[SCStoriesViewingSession _updateViewLocationIfNeeded:withPage:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107aa3c18

// -[SCStoriesViewingSession triggerPaginationIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa3c34

// -[SCStoriesViewingSession viewWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x107aa3c38

// -[SCStoriesViewingSession viewDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x107aa3ce0

// -[SCStoriesViewingSession _startTrackingFriendStoryViewTimeIfNecessaryWithEvent:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa3d48

// -[SCStoriesViewingSession _onCloseViewWithCurrentStorySnap:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107aa3f00

// -[SCStoriesViewingSession _onViewerDidDisappearWithCurrentStorySnap:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107aa40b8

// -[SCStoriesViewingSession _editionDoesDisplaySinceForegroundedApp]
// Type encoding: v16@0:8
// Implementation: 0x107aa4338

// -[SCStoriesViewingSession _teardownForegroundDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x107aa438c

// -[SCStoriesViewingSession hasSessionEnded]
// Type encoding: B16@0:8
// Implementation: 0x107aa43b8

// -[SCStoriesViewingSession _didStartPlayingStorySnap:storiesPlaybackSequence:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa43c0

// -[SCStoriesViewingSession _setupChromeInteractionSession]
// Type encoding: v16@0:8
// Implementation: 0x107aa44d8

// -[SCStoriesViewingSession _handleJoinGroupStoryEventWithPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa4658

// -[SCStoriesViewingSession _handleHideGroupStoryEventWithPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa4790

// -[SCStoriesViewingSession _setupReportSession]
// Type encoding: v16@0:8
// Implementation: 0x107aa48c8

// -[SCStoriesViewingSession _setupSharingSession]
// Type encoding: v16@0:8
// Implementation: 0x107aa4a14

// -[SCStoriesViewingSession _updateOperaNavigationTypeWithParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa4ba0

// -[SCStoriesViewingSession currentFriendStoryViewingSession]
// Type encoding: @16@0:8
// Implementation: 0x107aa4c64

// -[SCStoriesViewingSession currentFriendStoriesAbsoluteIndex]
// Type encoding: Q16@0:8
// Implementation: 0x107aa4cb8

// -[SCStoriesViewingSession currentFriendStoriesRelativeIndex]
// Type encoding: Q16@0:8
// Implementation: 0x107aa4d48

// -[SCStoriesViewingSession _updateCurrentFriendStoryViewingSessionsWithEvent:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa4d70

// -[SCStoriesViewingSession _isMidrollAd:]
// Type encoding: B24@0:8@16
// Implementation: 0x107aa55f4

// -[SCStoriesViewingSession _isMergedMapStoryWithPrevStoriesPlaybackSequence:currentStoriesPlaybackSequence:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107aa5698

// -[SCStoriesViewingSession _removeFriendStoryViewingSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa576c

// -[SCStoriesViewingSession _userDidTakeScreenshotWithPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa57e0

// -[SCStoriesViewingSession _sendViewLocationUpdateIfNeeded:withPage:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107aa5830

// -[SCStoriesViewingSession exitReason]
// Type encoding: q16@0:8
// Implementation: 0x107aa5944

// -[SCStoriesViewingSession lastInteraction]
// Type encoding: @16@0:8
// Implementation: 0x107aa59d8

// -[SCStoriesViewingSession _uniqueViewedStoriesCount]
// Type encoding: Q16@0:8
// Implementation: 0x107aa5a38

// -[SCStoriesViewingSession _uniqueViewedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107aa5a40

// -[SCStoriesViewingSession _totalViewedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107aa5b54

// -[SCStoriesViewingSession totalOpenedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107aa5c68

// -[SCStoriesViewingSession totalViewedAdSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107aa5d7c

// -[SCStoriesViewingSession _playSourceUponOpenOpera]
// Type encoding: q16@0:8
// Implementation: 0x107aa5d84

// -[SCStoriesViewingSession _buildStoryStorySessionLogParameters]
// Type encoding: @16@0:8
// Implementation: 0x107aa5d8c

// -[SCStoriesViewingSession initWithUserSession:startChatDelegate:storiesPlaybackDataProvider:storiesMediaCoordinator:storyPlayMode:viewLocation:viewingType:storyViewingActionContext:playSource:startingEntryEvent:navigationServices:storiesBlizzardLogger:unlockableBlizzardLogger:loggingInfo:unlockableViewTracker:snapchatterFetcher:snapchatterPublicInfoFetcher:discoverFeedEventsController:discoverFeedInteractionHistoryManager:spotlightShareSender:spotlightPlatformAnalyticsCreator:discoverFeedDataFetcher:chromeInteractionSessionBuildingFunc:storiesSharingSessionBuildingFunc:storiesUsageLogger:readReceiptCoordinator:circumstanceEngine:storiesConfigProvider:firstStoryId:grapheneMetricsEmitter:legacyStoriesTooltipsService:safetyReportScopeExposer:externalLinkSendingService:grapheneRegistry:subscriptionWorkflowStarter:boostCoordinator:bloopsReportScopeExposer:temporaryFileWriter:notificationOSSettingsRetriever:offPlatformShareServices:pageType:triggeringSection:contentRemovalDelegate:shareNotificationService:mapContentFilter:contentSharerUserId:contentSharerMischiefId:contentShareId:imageFetchingService:thumbnailCoordinator:searchSessionId:searchQueryId:searchActionId:searchResultRankingId:source:nativeSessionManager:customStoriesDataFetcher:conversationUpdatesPublisher:]
// Type encoding: @480@0:8@16@24@32@40q48q56q64Q72q80q88@96@104@112@120@128@136@144@152@160@168@176@184^?192^?200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328q336q344@352@360@368@376@384@392@400@408@416q424@432@440q448@456@464@472
// Implementation: 0x107aa5ed0

// -[SCStoriesViewingSession setEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa6a64

// -[SCStoriesViewingSession setOperaPageProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa6af8

// -[SCStoriesViewingSession updateOperaConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x107aa6b54

// -[SCStoriesViewingSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa6b7c

// -[SCStoriesViewingSession setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa6d38

// -[SCStoriesViewingSession extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107aa6d78

// -[SCStoriesViewingSession _refreshFriendOfGroupStoryMembershipForStorySnap:pageProperties:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa7158

// -[SCStoriesViewingSession shouldUseExtendedResetToCamera]
// Type encoding: B16@0:8
// Implementation: 0x107aa733c

// -[SCStoriesViewingSession _setupFriendStoryViewTimeFixConfigs]
// Type encoding: v16@0:8
// Implementation: 0x107aa7344

// -[SCStoriesViewingSession viewingType]
// Type encoding: q16@0:8
// Implementation: 0x107aa7394

// -[SCStoriesViewingSession setViewingType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aa739c

// -[SCStoriesViewingSession liveStoriesCount]
// Type encoding: Q16@0:8
// Implementation: 0x107aa73a4

// -[SCStoriesViewingSession setLiveStoriesCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107aa73ac

// -[SCStoriesViewingSession entryReason]
// Type encoding: Q16@0:8
// Implementation: 0x107aa73b4

// -[SCStoriesViewingSession setEntryReason:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107aa73bc

// -[SCStoriesViewingSession defaultStoryViewingActionContext]
// Type encoding: Q16@0:8
// Implementation: 0x107aa73c4

// -[SCStoriesViewingSession setDefaultStoryViewingActionContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107aa73cc

// -[SCStoriesViewingSession currentFriendStoriesViewingSessions]
// Type encoding: @16@0:8
// Implementation: 0x107aa73d4

// -[SCStoriesViewingSession lastFriendStoryInteraction]
// Type encoding: @16@0:8
// Implementation: 0x107aa73dc

// -[SCStoriesViewingSession isTopSnap]
// Type encoding: B16@0:8
// Implementation: 0x107aa73e4

// -[SCStoriesViewingSession loadingScreenCount]
// Type encoding: Q16@0:8
// Implementation: 0x107aa73ec

// -[SCStoriesViewingSession isViewingLongform]
// Type encoding: B16@0:8
// Implementation: 0x107aa73f4

// -[SCStoriesViewingSession playSource]
// Type encoding: q16@0:8
// Implementation: 0x107aa73fc

// -[SCStoriesViewingSession startingEntryEvent]
// Type encoding: q16@0:8
// Implementation: 0x107aa7404

// -[SCStoriesViewingSession operaNavigationType]
// Type encoding: q16@0:8
// Implementation: 0x107aa740c

// -[SCStoriesViewingSession mediaPlaybackSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107aa7414

// -[SCStoriesViewingSession eventAnnouncing]
// Type encoding: @16@0:8
// Implementation: 0x107aa741c

// -[SCStoriesViewingSession operaPageProvider]
// Type encoding: @16@0:8
// Implementation: 0x107aa7424

// -[SCStoriesViewingSession previousStoriesPlaybackSequenceDisplayed]
// Type encoding: @16@0:8
// Implementation: 0x107aa743c

// -[SCStoriesViewingSession operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x107aa7444

// -[SCStoriesViewingSession initialFriendsPlayListCount]
// Type encoding: Q16@0:8
// Implementation: 0x107aa745c

// -[SCStoriesViewingSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x107aa7464

// -[SCStoriesViewingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aa747c

// +[SCStoriesViewingSession announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107aa5e90

@end
