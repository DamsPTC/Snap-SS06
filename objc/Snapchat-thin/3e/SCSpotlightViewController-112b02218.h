// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightViewController
// Superclass: UIViewController
// Address: 0x112b02218

@interface SCSpotlightViewController

// Property: navigationHidden; attributes: TB,R,N,GisNavigationHidden,V_navigationHidden
// Property: switchToSpotlightStartTime; attributes: T@"NSNumber",&,N,V_switchToSpotlightStartTime
// Property: switchToSpotlightLatencyReportedInSeconds; attributes: T@"NSNumber",&,N,V_switchToSpotlightLatencyReportedInSeconds
// Property: presentationDelegate; attributes: T@"<SCSpotlightViewControllerPresentationDelegate>",W,N,V_presentationDelegate
// Property: playbackDelegate; attributes: T@"<SCSpotlightPlaybackDelegate>",W,N,V_playbackDelegate
// Property: parentController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_parentController
// Property: sourceBaseView; attributes: T@"UIView",W,N,V_sourceBaseView
// Property: sourcePage; attributes: Tq,N,V_sourcePage
// Property: sourcePageSessionId; attributes: T@"NSString",C,N,V_sourcePageSessionId
// Property: widgetContainer; attributes: T@"SCSubviewUIContainer",&,N,V_widgetContainer
// Property: infoProvider; attributes: T@"<SCSpotlightInfoProviding>",R,N
// Property: subFeedDataFetcher; attributes: T@"<SCSpotlightSubFeedDataFetching>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: pageSessionId; attributes: T@"NSString",R,N
// Property: sectionKey; attributes: T@"SCDiscoverFeedSectionKey",R,N
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N
// Property: headerItem; attributes: T@"SIGHeaderItem",?,R,N,V_headerItem
// Property: footerItem; attributes: T@"SIGFooterItem",?,R,N
// Property: overlayItem; attributes: T@"SCOverlayItem",?,R,N

// -[SCSpotlightViewController addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106855b94

// -[SCSpotlightViewController removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106855ba4

// -[SCSpotlightViewController initWithUserSession:businessProfileId:snapProProfilesProvider:playbackManager:playbackManagerFactory:spotlightQueryCoordinator:discoverFeedQueryCoordinator:headerButtonProvider:storiesGrapheneMetricsEmitter:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedDataMutator:discoverPerformanceLogging:featureSettingsService:userPreferences:storiesConfigProvider:circumstanceEngine:complianceEngine:storiesMixerNetworkRequester:currentPageTracker:pageLoadMetricManager:storiesBadgingServices:widgetServices:spotlightMediaFetcherFactory:spotlightDisplayOrdererFactory:isPresentedInChatFeed:prefersHorizontalNavigation:viewLocation:configuration:creatorsSubmissionScopeExposer:creatorsSubmissionScopeServices:managementScopeExposer:managementScopeServices:storiesMediaCoordinator:feedPageEntryType:userTrackedLogger:notificationScreenAccessor:internalDistributor:discoverFeedExpandedStoryFeedScope:spotlightSubfeedActionLogger:dismissGestureSwipeView:appStartExperimentReader:creatorsSubmissionScopeExposerV2:creatorsSubmissionScopeServicesV2:customAppThemeProvider:]
// Type encoding: @368@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208B216B220q224@232@240@248@256@264@272q280@288@296@304@312@320@328@336@344@352@360
// Implementation: 0x106855bb4

// -[SCSpotlightViewController _shouldRenameSpotlightToReals]
// Type encoding: B16@0:8
// Implementation: 0x106857578

// -[SCSpotlightViewController _spotlightFeedTitle]
// Type encoding: @16@0:8
// Implementation: 0x1068575d0

// -[SCSpotlightViewController _spotlightTabTitle]
// Type encoding: @16@0:8
// Implementation: 0x106857618

// -[SCSpotlightViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x10685764c

// -[SCSpotlightViewController _viewDidMoveToWindow]
// Type encoding: v16@0:8
// Implementation: 0x106857848

// -[SCSpotlightViewController _layoutBackgroundView]
// Type encoding: v16@0:8
// Implementation: 0x106857948

// -[SCSpotlightViewController viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x106857a04

// -[SCSpotlightViewController viewWillTransitionToSize:withTransitionCoordinator:]
// Type encoding: v40@0:8{CGSize=dd}16@32
// Implementation: 0x106857c10

// -[SCSpotlightViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x106857cb8

// -[SCSpotlightViewController _isEmptyOperaBaseViewFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106857fb4

// -[SCSpotlightViewController _relayoutEmptyBaseViewBeforePresentingOpera:]
// Type encoding: v24@0:8@16
// Implementation: 0x106857fd4

// -[SCSpotlightViewController _configureHorizontalNavSwipeDownDismissPan]
// Type encoding: v16@0:8
// Implementation: 0x1068580f0

// -[SCSpotlightViewController _handleHorizontalNavSwipeDownDismissPan:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068581a8

// -[SCSpotlightViewController _configurePullToRefreshController]
// Type encoding: v16@0:8
// Implementation: 0x106858584

// -[SCSpotlightViewController _pullToRefreshContainerView]
// Type encoding: @16@0:8
// Implementation: 0x106858670

// -[SCSpotlightViewController _shouldFadeSpotlightBackgroundForOperaDismissal]
// Type encoding: B16@0:8
// Implementation: 0x1068586f0

// -[SCSpotlightViewController _setSpotlightBackgroundVisibleForOperaDismissal:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106858720

// -[SCSpotlightViewController pullToRefreshControllerCanBeginPulling]
// Type encoding: B16@0:8
// Implementation: 0x106858804

// -[SCSpotlightViewController pullToRefreshControllerDidChangeDraggingState:]
// Type encoding: v20@0:8B16
// Implementation: 0x1068588b4

// -[SCSpotlightViewController pullToRefreshControllerDidRequestRefresh]
// Type encoding: v16@0:8
// Implementation: 0x1068588c0

// -[SCSpotlightViewController _resetLatencyMetricsAndRecordFirstFrame]
// Type encoding: v16@0:8
// Implementation: 0x106858918

// -[SCSpotlightViewController _switchToSubfeedIfOperaIsPresented:]
// Type encoding: v24@0:8@16
// Implementation: 0x106858a48

// -[SCSpotlightViewController willMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106858bd0

// -[SCSpotlightViewController didMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106858c4c

// -[SCSpotlightViewController _moveBackgroundViewOverOperaWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x106858cc8

// -[SCSpotlightViewController _restoreBackgroundViewFromOperaWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x106858e18

// -[SCSpotlightViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106858ef4

// -[SCSpotlightViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106859108

// -[SCSpotlightViewController _switchToSubfeedBundle:notification:deepLink:compositeStoryId:animated:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x106859368

// -[SCSpotlightViewController _switchToSubfeed:notification:deepLink:compositeStoryId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106859658

// -[SCSpotlightViewController attachUI:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068597fc

// -[SCSpotlightViewController _dissmissEmptyStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10685991c

// -[SCSpotlightViewController _addFullscreenChildViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685995c

// -[SCSpotlightViewController detachUI:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106859cfc

// -[SCSpotlightViewController _detachChildViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106859dfc

// -[SCSpotlightViewController _currentFeedIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x106859ecc

// -[SCSpotlightViewController subfeedSwitcher:handleUserTriggeredAction:switchedToFeedType:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106859f34

// -[SCSpotlightViewController subfeedSwitcher:didClearBadgeForFeed:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106859f40

// -[SCSpotlightViewController subfeedSwitcher:didShowBadgeForFeed:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106859fc0

// -[SCSpotlightViewController _presentOrResumeSubfeed:notification:deepLink:compositeStoryId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10685a040

// -[SCSpotlightViewController _pauseSubfeed:shouldDetachUI:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10685a5d4

// -[SCSpotlightViewController _attachContainerIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685a6a0

// -[SCSpotlightViewController _detachContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685a748

// -[SCSpotlightViewController _createBundleWithFeedIdentifier:displayName:pageType:sectionKeys:panPolicy:]
// Type encoding: @56@0:8q16@24@32@40@48
// Implementation: 0x10685a7b0

// -[SCSpotlightViewController _currentPresentingVC]
// Type encoding: @16@0:8
// Implementation: 0x10685ac24

// -[SCSpotlightViewController _presentOpera:]
// Type encoding: v20@0:8B16
// Implementation: 0x10685ac94

// -[SCSpotlightViewController _armForegroundOperaPresentationRedrive]
// Type encoding: v16@0:8
// Implementation: 0x10685af9c

// -[SCSpotlightViewController _disarmForegroundOperaPresentationRedrive]
// Type encoding: v16@0:8
// Implementation: 0x10685b180

// -[SCSpotlightViewController _redriveDeferredOperaPresentation]
// Type encoding: v16@0:8
// Implementation: 0x10685b1f4

// -[SCSpotlightViewController presentOperaAgainIfAlreadyPresentingWithClientIds:mediaTypes:userId:displayName:businessProfileId:spotlightDescription:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x10685b248

// -[SCSpotlightViewController presentOperaAgainIfAlreadyPresentingSpotlightWidgetWithClientIds:thumbnail:mediaTypes:userId:displayName:businessProfileId:spotlightDescription:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10685b2e8

// -[SCSpotlightViewController _maybeReinjectRetainedLocalPreview]
// Type encoding: v16@0:8
// Implementation: 0x10685b6a4

// -[SCSpotlightViewController presentOperaAgainIfAlreadyPresentingWithFirstCompositeStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685b744

// -[SCSpotlightViewController configureDeeplinkSubfeedType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685b89c

// -[SCSpotlightViewController _isNotifResumeRaceFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10685ba30

// -[SCSpotlightViewController _isNotifColdPresentLatchFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10685ba88

// -[SCSpotlightViewController _playbackManagerForOperaRepresentation]
// Type encoding: @16@0:8
// Implementation: 0x10685bae0

// -[SCSpotlightViewController _freshPendingNotificationContext]
// Type encoding: @16@0:8
// Implementation: 0x10685bb74

// -[SCSpotlightViewController _clearPendingNotificationContext]
// Type encoding: v16@0:8
// Implementation: 0x10685bbe0

// -[SCSpotlightViewController _shouldReplayPendingNotificationContext]
// Type encoding: B16@0:8
// Implementation: 0x10685bc1c

// -[SCSpotlightViewController _replayPendingNotificationContext]
// Type encoding: v16@0:8
// Implementation: 0x10685bc68

// -[SCSpotlightViewController _presentPendingPlaybackOpera]
// Type encoding: v16@0:8
// Implementation: 0x10685bd0c

// -[SCSpotlightViewController _presentPlaybackOpera:]
// Type encoding: v20@0:8B16
// Implementation: 0x10685bd78

// -[SCSpotlightViewController _handlePageOpenIfNecessaryWhenEnteredAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10685bf6c

// -[SCSpotlightViewController _presentPlaybackOpera:playbackManager:presentingViewController:notification:deepLink:compositeStoryId:]
// Type encoding: v60@0:8B16@20@28@36@44@52
// Implementation: 0x10685bfd0

// -[SCSpotlightViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10685c258

// -[SCSpotlightViewController presentationMode]
// Type encoding: q16@0:8
// Implementation: 0x10685c2c4

// -[SCSpotlightViewController _startNewSessionIfNeeded]
// Type encoding: B16@0:8
// Implementation: 0x10685c2cc

// -[SCSpotlightViewController _cleanupCurrentSession]
// Type encoding: v16@0:8
// Implementation: 0x10685c408

// -[SCSpotlightViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10685c480

// -[SCSpotlightViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10685c520

// -[SCSpotlightViewController beginAppearanceTransition:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10685c960

// -[SCSpotlightViewController endAppearanceTransition]
// Type encoding: v16@0:8
// Implementation: 0x10685c9d4

// -[SCSpotlightViewController _dispatchSaveStoriesToDiskIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10685ca28

// -[SCSpotlightViewController launchCreatorsSubmissionActionSheetWithShouldDelayLaunch:]
// Type encoding: v20@0:8B16
// Implementation: 0x10685cb0c

// -[SCSpotlightViewController updateFeedPageEntryType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10685cbdc

// -[SCSpotlightViewController infoProvider]
// Type encoding: @16@0:8
// Implementation: 0x10685cbec

// -[SCSpotlightViewController subFeedDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10685cc1c

// -[SCSpotlightViewController applicationDidBackground]
// Type encoding: v16@0:8
// Implementation: 0x10685cc4c

// -[SCSpotlightViewController applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x10685cd78

// -[SCSpotlightViewController configureWithNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685cf24

// -[SCSpotlightViewController configureWithDeepLinkNotificationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685cf88

// -[SCSpotlightViewController dismissPresentedSpotlightViewController]
// Type encoding: v16@0:8
// Implementation: 0x10685cfc0

// -[SCSpotlightViewController _shouldSuppressNotificationWithType:]
// Type encoding: B24@0:8q16
// Implementation: 0x10685d034

// -[SCSpotlightViewController shouldDiscardNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x10685d084

// -[SCSpotlightViewController shouldDelayNotificationsWhenSpotlightPresented:]
// Type encoding: B24@0:8@16
// Implementation: 0x10685d08c

// -[SCSpotlightViewController _saveStoriesToDiskIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10685d0b8

// -[SCSpotlightViewController setNavigationHidden:animated:trigger:]
// Type encoding: v32@0:8B16B20q24
// Implementation: 0x10685d144

// -[SCSpotlightViewController _setHeaderViewHidden:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10685d184

// -[SCSpotlightViewController _setTitleViewHidden:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10685d358

// -[SCSpotlightViewController playbackManagerCanAllowPlayback:]
// Type encoding: B24@0:8@16
// Implementation: 0x10685d4fc

// -[SCSpotlightViewController playbackManagerDidTriggerPagination:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685d560

// -[SCSpotlightViewController playbackManagerDidTriggerBatchRefresh:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685d634

// -[SCSpotlightViewController playbackManagerDidTriggerRefresh:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685d644

// -[SCSpotlightViewController playbackManagerIsWaitingOnData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685d938

// -[SCSpotlightViewController playbackManagerHasNoLoadedMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685d9e4

// -[SCSpotlightViewController playbackManagerDidFinishRefreshingStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685da6c

// -[SCSpotlightViewController playbackManagerDidLoadInitialData:firstStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10685dab0

// -[SCSpotlightViewController playbackManager:willPresentOperaWithInitialStory:isCachedContent:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10685db88

// -[SCSpotlightViewController playbackManager:didStopPlayingStory:willStartPlayingStory:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10685dd18

// -[SCSpotlightViewController playbackManager:didBeginPlayingStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10685e280

// -[SCSpotlightViewController playbackManagerWillBeginPresentingOpera:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685e838

// -[SCSpotlightViewController playbackManagerWillBeginDismissingOpera:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685e944

// -[SCSpotlightViewController playbackManagerDidCancelDismissingOpera:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685e9d4

// -[SCSpotlightViewController playbackManager:updatingListOfUnviewedStories:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10685e9e0

// -[SCSpotlightViewController latencyMeasurementWithoutBackgroundTimeIncluded]
// Type encoding: d16@0:8
// Implementation: 0x10685e9f4

// -[SCSpotlightViewController latencyMeasurementWithBackgroundTimeIncluded]
// Type encoding: d16@0:8
// Implementation: 0x10685ea34

// -[SCSpotlightViewController _recordSpotlightFirstPaint]
// Type encoding: v16@0:8
// Implementation: 0x10685ea78

// -[SCSpotlightViewController playbackManagerDidTeardown:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685eb18

// -[SCSpotlightViewController _updateOperaSizeWithTransitionCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685ee04

// -[SCSpotlightViewController playbackManagerReachedEndOfPlaylist:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685ef38

// -[SCSpotlightViewController playbackManagerDidDepletePlaylist:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685ef84

// -[SCSpotlightViewController playbackManagerExtendedPlaylist:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685ef98

// -[SCSpotlightViewController playbackManagerReceivedNoNewStoriesInResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685eff8

// -[SCSpotlightViewController playbackManager:didOpenAttachment:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10685f008

// -[SCSpotlightViewController playbackManagerDidCloseAttachment:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685f1f0

// -[SCSpotlightViewController playbackManager:userDidInteract:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10685f24c

// -[SCSpotlightViewController playbackManager:replyViewPresentationDidChange:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10685f2ac

// -[SCSpotlightViewController playbackManager:didSetInitialSoundState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10685f2bc

// -[SCSpotlightViewController playbackManagerPITNReadyAndMediaFetched:]
// Type encoding: v24@0:8@16
// Implementation: 0x10685f2cc

// -[SCSpotlightViewController playbackManager:didUpdateCurrentSectionKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10685f374

// -[SCSpotlightViewController sigFooterViewForPlaybackManagerExtendedTouch:]
// Type encoding: @24@0:8@16
// Implementation: 0x10685f590

// -[SCSpotlightViewController discoverQueryCoordinator:didReceiveServerResponseForQuery:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10685f5f4

// -[SCSpotlightViewController discoverQueryCoordinator:didFailForQuery:error:statusCodeToDisplay:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10685f61c

// -[SCSpotlightViewController isPlayingStory]
// Type encoding: B16@0:8
// Implementation: 0x10685f644

// -[SCSpotlightViewController exit:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10685f680

// -[SCSpotlightViewController backgroundExitBehavior]
// Type encoding: @16@0:8
// Implementation: 0x10685f694

// -[SCSpotlightViewController _currentPlaybackManager]
// Type encoding: @16@0:8
// Implementation: 0x10685f770

// -[SCSpotlightViewController _sectionKeysForPlaybackManager]
// Type encoding: @16@0:8
// Implementation: 0x10685f9bc

// -[SCSpotlightViewController _fallbackSectionIndexForSectionKeys:]
// Type encoding: q24@0:8@16
// Implementation: 0x10685fa44

// -[SCSpotlightViewController _hasPlaybackManager]
// Type encoding: B16@0:8
// Implementation: 0x10685fa78

// -[SCSpotlightViewController _clearPlaybackManager]
// Type encoding: v16@0:8
// Implementation: 0x10685fa90

// -[SCSpotlightViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x10685fac0

// -[SCSpotlightViewController defaultProjectNameV3]
// Type encoding: @16@0:8
// Implementation: 0x10685fac8

// -[SCSpotlightViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x10685fcd8

// -[SCSpotlightViewController defaultSubProjectName]
// Type encoding: @16@0:8
// Implementation: 0x10685fce4

// -[SCSpotlightViewController jiraMetaInfo]
// Type encoding: @16@0:8
// Implementation: 0x10685fd94

// -[SCSpotlightViewController _configureBadgingWithDidOpenFromNotification:]
// Type encoding: v20@0:8B16
// Implementation: 0x10685fe9c

// -[SCSpotlightViewController _handlePageOpen:enterAction:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10686001c

// -[SCSpotlightViewController _SCAFeedPageEntryTypeFromEnterAction:previousPage:]
// Type encoding: q32@0:8q16@24
// Implementation: 0x1068600d0

// -[SCSpotlightViewController _handlePageClose:]
// Type encoding: v24@0:8q16
// Implementation: 0x10686021c

// -[SCSpotlightViewController _announcePageOpen:entryType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x106860294

// -[SCSpotlightViewController _announcePageClose:]
// Type encoding: v24@0:8q16
// Implementation: 0x10686061c

// -[SCSpotlightViewController _logFullScreenContentViewAbandonment:]
// Type encoding: v24@0:8q16
// Implementation: 0x1068607bc

// -[SCSpotlightViewController _logMetadataAndMediaAvailableCount]
// Type encoding: v16@0:8
// Implementation: 0x106860878

// -[SCSpotlightViewController _logAbandonmentReasonIfApplicable:]
// Type encoding: v24@0:8q16
// Implementation: 0x10686098c

// -[SCSpotlightViewController _fullscreenConentViewAbandonmentDictionary]
// Type encoding: @16@0:8
// Implementation: 0x106860a88

// -[SCSpotlightViewController _isFullscreenAbandonmentLoggingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106860f38

// -[SCSpotlightViewController _announcePlaybackStartWithInitialStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106860f58

// -[SCSpotlightViewController _announceEventWithName:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106861804

// -[SCSpotlightViewController _configureHeader:]
// Type encoding: v24@0:8@16
// Implementation: 0x10686188c

// -[SCSpotlightViewController _configureHeaderTrailingButtons:searchButtonDisabled:removeHeaderButtonBackgroundFill:useLeadingTitleHeaderLayout:]
// Type encoding: v36@0:8@16B24B28B32
// Implementation: 0x106861bac

// -[SCSpotlightViewController _addFriendsHeaderButtonItem:shouldHighlightWhite:removeHeaderButtonBackgroundFill:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x106861f3c

// -[SCSpotlightViewController _headerItemTitle]
// Type encoding: @16@0:8
// Implementation: 0x10686200c

// -[SCSpotlightViewController _sendQueryWithQuerySource:]
// Type encoding: v24@0:8@16
// Implementation: 0x106862010

// -[SCSpotlightViewController _sendSpotlightQueryWithQuerySource:]
// Type encoding: v24@0:8@16
// Implementation: 0x106862170

// -[SCSpotlightViewController _logSubfeedActionWithActionType:toFeedType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1068622dc

// -[SCSpotlightViewController _logFeedSwitcherTransistionEndWithDirection:toBundle:shouldLogAction:]
// Type encoding: v36@0:8q16@24B32
// Implementation: 0x106862474

// -[SCSpotlightViewController _subfeedActionLoggerFromContainerPanDirection:]
// Type encoding: q24@0:8q16
// Implementation: 0x106862520

// -[SCSpotlightViewController _handleInteractionHistoryForDynamicRanking:]
// Type encoding: v24@0:8@16
// Implementation: 0x106862538

// -[SCSpotlightViewController handleUserTriggeredNavigationAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x10686283c

// -[SCSpotlightViewController _showRefreshLoadingSpinner]
// Type encoding: v16@0:8
// Implementation: 0x106862960

// -[SCSpotlightViewController _hideRefreshLoadingSpinner]
// Type encoding: v16@0:8
// Implementation: 0x106862bc4

// -[SCSpotlightViewController didTapNewTabToDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106862bd4

// -[SCSpotlightViewController didTapDebugListButton]
// Type encoding: v16@0:8
// Implementation: 0x106862c0c

// -[SCSpotlightViewController _maybeInstallRankerDebugView]
// Type encoding: v16@0:8
// Implementation: 0x106862cd0

// -[SCSpotlightViewController _maybeUpdateDynamicRankerDebugView]
// Type encoding: v16@0:8
// Implementation: 0x106862cd4

// -[SCSpotlightViewController _topicViewerUIContainerWithPresentingViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x106862cd8

// -[SCSpotlightViewController interactiveDismissalDidComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x10686302c

// -[SCSpotlightViewController interactiveDismissalWillBegin:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068630a0

// -[SCSpotlightViewController interactionControllerPercentageDidChange:]
// Type encoding: v24@0:8d16
// Implementation: 0x1068630a4

// -[SCSpotlightViewController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x1068630cc

// -[SCSpotlightViewController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106863208

// -[SCSpotlightViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106863210

// -[SCSpotlightViewController _getBackgroundPopTimer]
// Type encoding: @16@0:8
// Implementation: 0x10686325c

// -[SCSpotlightViewController didTapPostToSpotlight]
// Type encoding: v16@0:8
// Implementation: 0x1068632ac

// -[SCSpotlightViewController _launchPostToSpotlight]
// Type encoding: v16@0:8
// Implementation: 0x1068632f8

// -[SCSpotlightViewController _presentPostToSpotlight]
// Type encoding: v16@0:8
// Implementation: 0x106863430

// -[SCSpotlightViewController _schedulePostToSpotlightButtonTooltipIfRequired]
// Type encoding: v16@0:8
// Implementation: 0x1068635c0

// -[SCSpotlightViewController _shouldPresentPostToSpotlightTooltip]
// Type encoding: B16@0:8
// Implementation: 0x106863684

// -[SCSpotlightViewController _presentPostToSpotlightTooltip]
// Type encoding: v16@0:8
// Implementation: 0x1068637bc

// -[SCSpotlightViewController _postToSpotlightButtonIcon]
// Type encoding: @16@0:8
// Implementation: 0x1068639d4

// -[SCSpotlightViewController creatorsSpotlightSubmissionDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x1068639f0

// -[SCSpotlightViewController creatorsSpotlightSubmissionV2DidBegin]
// Type encoding: v16@0:8
// Implementation: 0x106863a84

// -[SCSpotlightViewController creatorsSpotlightSubmissionV2DidComplete]
// Type encoding: v16@0:8
// Implementation: 0x106863abc

// -[SCSpotlightViewController spotlightInteractionHistoryDidFinishUpdatingViewState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106863b50

// -[SCSpotlightViewController _debugSpotlightPostNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106863d04

// -[SCSpotlightViewController shouldBeSilentlyPresentedAndPauseOpera]
// Type encoding: B16@0:8
// Implementation: 0x106863d54

// -[SCSpotlightViewController injectSpotlightPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x106863d6c

// -[SCSpotlightViewController preloadModerationStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x106863dbc

// -[SCSpotlightViewController advanceToNextStory]
// Type encoding: v16@0:8
// Implementation: 0x106863e98

// -[SCSpotlightViewController presentLocalPostingStory]
// Type encoding: v16@0:8
// Implementation: 0x106863ec8

// -[SCSpotlightViewController removeLocalPostingStory]
// Type encoding: v16@0:8
// Implementation: 0x106863f48

// -[SCSpotlightViewController didTapHeaderItemTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106864094

// -[SCSpotlightViewController subsFeedEmptyStateDidTapDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106864194

// -[SCSpotlightViewController _dismissEmptyState]
// Type encoding: v16@0:8
// Implementation: 0x106864200

// -[SCSpotlightViewController subsFeedEmptyStateDidLoadSubsContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068642e0

// -[SCSpotlightViewController containerPanGestureShouldStart:]
// Type encoding: B24@0:8@16
// Implementation: 0x1068644dc

// -[SCSpotlightViewController containerPanGesture:didStartPanWithDirection:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1068645e0

// -[SCSpotlightViewController _startTransitionFromBundle:toBundle:direction:completeImmediately:]
// Type encoding: v44@0:8@16@24q32B40
// Implementation: 0x106864748

// -[SCSpotlightViewController _transitionDidEndFromBundle:toBundle:completed:direction:]
// Type encoding: v44@0:8@16@24B32q36
// Implementation: 0x106864ce4

// -[SCSpotlightViewController containerPanGesture:didUpdatePanProgress:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106864eac

// -[SCSpotlightViewController containerPanGestureDidComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x106864ebc

// -[SCSpotlightViewController containerPanGestureDidCancel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106864ecc

// -[SCSpotlightViewController _resetTransition]
// Type encoding: v16@0:8
// Implementation: 0x106864edc

// -[SCSpotlightViewController _setupLensesGamesSubfeedIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x106864ef4

// -[SCSpotlightViewController _isLensesFeedType:]
// Type encoding: B20@0:8i16
// Implementation: 0x1068650a0

// -[SCSpotlightViewController _isGamesFeedEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106865110

// -[SCSpotlightViewController didDismissExpandedStoryFeedViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106865120

// -[SCSpotlightViewController didPressBackButtonOnExpandedStoryFeedViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068651a8

// -[SCSpotlightViewController overridePresentingVC]
// Type encoding: @16@0:8
// Implementation: 0x1068651c4

// -[SCSpotlightViewController _isCurrentSubfeedDiscover]
// Type encoding: B16@0:8
// Implementation: 0x1068651fc

// -[SCSpotlightViewController _switchTitleToFirstItem]
// Type encoding: v16@0:8
// Implementation: 0x1068652ac

// -[SCSpotlightViewController _performSubfeedSwitch:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106865378

// -[SCSpotlightViewController _resetSubfeedsOnExitingSpotlight]
// Type encoding: v16@0:8
// Implementation: 0x1068653f0

// -[SCSpotlightViewController _isDiscoverBundle:]
// Type encoding: B24@0:8@16
// Implementation: 0x1068655d4

// -[SCSpotlightViewController _detachDiscoverContainer]
// Type encoding: v16@0:8
// Implementation: 0x10686563c

// -[SCSpotlightViewController presentOperaAgainIfAlreadyPresentingWithDeepLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x106865778

// -[SCSpotlightViewController viewControllerTransitionAnimatorShouldBeginDismissingWithDirection:gestureRecognizer:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x106865888

// -[SCSpotlightViewController viewControllerTransitionAnimatorDidBeginDismissing]
// Type encoding: v16@0:8
// Implementation: 0x106865898

// -[SCSpotlightViewController viewControllerTransitionAnimatorDidBeginDismissingWithInteraction:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10686589c

// -[SCSpotlightViewController viewControllerTransitionAnimatorDidCancelDismissing]
// Type encoding: v16@0:8
// Implementation: 0x1068658a0

// -[SCSpotlightViewController viewControllerTransitionAnimatorWillBeginAnimatingToDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1068658a4

// -[SCSpotlightViewController viewControllerTransitionAnimatorDidFinishDismissing:]
// Type encoding: v20@0:8B16
// Implementation: 0x1068658a8

// -[SCSpotlightViewController viewControllerTransitionAnimatorShouldBeginAuxViewActionWithDirection:gestureRecognizer:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x1068658ac

// -[SCSpotlightViewController viewControllerTransitionAnimatorWillBeginPresenting]
// Type encoding: v16@0:8
// Implementation: 0x1068658b4

// -[SCSpotlightViewController viewControllerTransitionAnimatorDidFinishPresenting]
// Type encoding: v16@0:8
// Implementation: 0x1068658b8

// -[SCSpotlightViewController pageSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1068658bc

// -[SCSpotlightViewController sectionKey]
// Type encoding: @16@0:8
// Implementation: 0x1068658ec

// -[SCSpotlightViewController headerItem]
// Type encoding: @16@0:8
// Implementation: 0x106865930

// -[SCSpotlightViewController presentationDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106865940

// -[SCSpotlightViewController setPresentationDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106865960

// -[SCSpotlightViewController playbackDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106865974

// -[SCSpotlightViewController setPlaybackDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106865994

// -[SCSpotlightViewController parentController]
// Type encoding: @16@0:8
// Implementation: 0x1068659a8

// -[SCSpotlightViewController setParentController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068659c8

// -[SCSpotlightViewController sourceBaseView]
// Type encoding: @16@0:8
// Implementation: 0x1068659dc

// -[SCSpotlightViewController setSourceBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068659fc

// -[SCSpotlightViewController sourcePage]
// Type encoding: q16@0:8
// Implementation: 0x106865a10

// -[SCSpotlightViewController setSourcePage:]
// Type encoding: v24@0:8q16
// Implementation: 0x106865a20

// -[SCSpotlightViewController sourcePageSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106865a30

// -[SCSpotlightViewController setSourcePageSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106865a40

// -[SCSpotlightViewController widgetContainer]
// Type encoding: @16@0:8
// Implementation: 0x106865a4c

// -[SCSpotlightViewController setWidgetContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106865a5c

// -[SCSpotlightViewController switchToSpotlightStartTime]
// Type encoding: @16@0:8
// Implementation: 0x106865a9c

// -[SCSpotlightViewController setSwitchToSpotlightStartTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x106865aac

// -[SCSpotlightViewController switchToSpotlightLatencyReportedInSeconds]
// Type encoding: @16@0:8
// Implementation: 0x106865aec

// -[SCSpotlightViewController setSwitchToSpotlightLatencyReportedInSeconds:]
// Type encoding: v24@0:8@16
// Implementation: 0x106865afc

// -[SCSpotlightViewController isNavigationHidden]
// Type encoding: B16@0:8
// Implementation: 0x106865b3c

// -[SCSpotlightViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106865b4c

// +[SCSpotlightViewController announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106855b88

@end
