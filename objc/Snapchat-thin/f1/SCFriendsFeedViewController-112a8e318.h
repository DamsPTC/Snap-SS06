// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedViewController
// Superclass: SCDeckBaseViewController
// Address: 0x112a8e318

@interface SCFriendsFeedViewController

// Property: tableView; attributes: T@"UITableView",&,N,V_tableView
// Property: emptyFeedListPlaceholder; attributes: T@"UILabel",&,N,V_emptyFeedListPlaceholder
// Property: dataSource; attributes: T@"SCConversationFeedDataSource",&,N,V_dataSource
// Property: tapGestureRecognizer; attributes: T@"UITapGestureRecognizer",&,N,V_tapGestureRecognizer
// Property: delayedTapGestureRecognizer; attributes: T@"UITapGestureRecognizer",&,N,V_delayedTapGestureRecognizer
// Property: longPressGestureRecognizer; attributes: T@"UILongPressGestureRecognizer",&,N,V_longPressGestureRecognizer
// Property: doubleTapGestureRecognizer; attributes: T@"UITapGestureRecognizer",&,N,V_doubleTapGestureRecognizer
// Property: panGestureRecognizer; attributes: T@"SCPanningGestureRecognizer",&,N,V_panGestureRecognizer
// Property: topGradientView; attributes: T@"UIImageView",&,N,V_topGradientView
// Property: scrollShadowView; attributes: T@"UIImageView",&,N,V_scrollShadowView
// Property: bottomGradientView; attributes: T@"UIView",&,N,V_bottomGradientView
// Property: lastScrolledYOffset; attributes: Td,N,V_lastScrolledYOffset
// Property: lastYOffsetBeforeScrolling; attributes: Td,N,V_lastYOffsetBeforeScrolling
// Property: viewHasAppeared; attributes: TB,N,V_viewHasAppeared
// Property: selectedUsername; attributes: T@"NSString",C,N,V_selectedUsername
// Property: cardContainerView; attributes: T@"SCCardContainerView",&,N,V_cardContainerView
// Property: applyRoundedCorners; attributes: TB,N,V_applyRoundedCorners
// Property: scrollToTopButton; attributes: T@"SCGrowingButton",&,N,V_scrollToTopButton
// Property: scrollToTopBottomConstraint; attributes: T@"NSLayoutConstraint",&,N,V_scrollToTopBottomConstraint
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: playedStoryIdentifiers; attributes: T@"NSMutableSet",&,N,V_playedStoryIdentifiers
// Property: storiesSourceSection; attributes: TQ,N,V_storiesSourceSection
// Property: numOfStoriesLeftToAutoLoadInFeed; attributes: TQ,N,V_numOfStoriesLeftToAutoLoadInFeed
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: cardGradientView; attributes: T@"SCCardGradientView",?,&,N
// Property: sourceNotification; attributes: T@"SCAppNotification",&,N,V_sourceNotification
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N
// Property: headerItem; attributes: T@"SIGHeaderItem",?,R,N,V_headerItem
// Property: footerItem; attributes: T@"SIGFooterItem",?,R,N
// Property: overlayItem; attributes: T@"SCOverlayItem",?,R,N,V_overlayItem

// -[SCFriendsFeedViewController _initScrollToTopButton]
// Type encoding: v16@0:8
// Implementation: 0x105b7beb0

// -[SCFriendsFeedViewController frameHeight]
// Type encoding: d16@0:8
// Implementation: 0x105b7c328

// -[SCFriendsFeedViewController fadeInScrollToTopButton]
// Type encoding: v16@0:8
// Implementation: 0x105b7c388

// -[SCFriendsFeedViewController fadeOutScrollToTopButton]
// Type encoding: v16@0:8
// Implementation: 0x105b7c464

// -[SCFriendsFeedViewController _didTapScrollToTopButton]
// Type encoding: v16@0:8
// Implementation: 0x105b7c580

// -[SCFriendsFeedViewController _buttonTintColor]
// Type encoding: @16@0:8
// Implementation: 0x105b7c5a8

// -[SCFriendsFeedViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x105b7c66c

// -[SCFriendsFeedViewController getPageName]
// Type encoding: @16@0:8
// Implementation: 0x105b7c688

// -[SCFriendsFeedViewController initWithAddFriendsTakeOverLauncher:applicationLifecycleEvents:sponsoredSnapAdResponseParser:sponsoredSnapAttachmentBuilder:sponsoredSnapFeedImpressionTracker:sponsoredSnapModalOptInTracker:adAttachmentHandlerScopeExposer:adAttachmentHandlerScopeBuilder:adConfigProvider:conversationManager:conversationEventObservable:conversationActionHandler:clearConversationActionHandler:conversationUpdatesPublisher:nativeSessionManager:conversationUpdaterEventPublisher:currentPageTracker:deckTransitionEvents:findFriendsScopeExposer:findFriendsScopeServices:friendsFeedActionTextGenerator:friendsFeedChatMediaPrefetcher:friendsFeedDataCoordinator:friendsFeedFetcher:friendsFeedFirstRenderLatencyLogger:friendsFeedGraphene:friendsFeedGrapheneV2:friendsFeedIconGenerator:friendsFeedInteractionEventsObservable:notificationLifecyleEvents:friendsFeedReadyLogger:ghostToFeedLogger:feedPropertyLogger:inviteContactSectionLogger:grapheneRegistry:groupsDataFetcher:imageDownloader:messagingExperimentService:messagingPlaybackScopeExposer:sponsoredSnapPlaybackScopeExposer:sponsoredSnapPlaybackScopeServices:sponsoredSnapModalScopeExposer:sponsoredSnapFriendsFeedBannerScopeExposer:sponsoredSnapFriendsFeedBannerScopeServices:nativeFeedManager:nativeSessionManagerFuture:nativeCommunityFeedManager:snapchattersDataFetcher:snapchattersDataMutator:snapchattersDataTracker:snapchattersSyncFetcher:blockedSnapchattersSyncDataFetcher:snapPushLogger:storiesMediaCoordinator:storiesMetadataCoordinator:storiesPlaybackProvider:storiesReplayManager:myFriendsScopeExposer:myStoriesDataCoordinator:paginationLogger:createChatScopeExposer:sendToListsEditScopeExposer:headerButtonServices:navigationServices:parentController:footerItem:parentDelegate:startChatDelegate:userSession:userInfoServices:impalaLegacyServices:quickAddLoggerCreator:circumstanceEngine:featureSettingsService:viewLifecycleEventsPublisher:viewLifecycleListener:friendmojiDataProvider:friendmojiPresenter:friendmojiDataCoordinator:readReceiptCoordinator:customStatusBarStyleContextController:friendsFeedLoadingStatusStream:preferences:performerProvider:onDemandResourceDownloader:adPrefetchAdaptor:billboardFeedHeaderPromptScopeExposer:groupProfileScopeExposer:friendProfileScopeExposer:chatScopeExposer:chatScopeServices:friendmojiSettingsScopeExposer:clearConversationsScopeExposer:clearConversationsScopeBuilderServices:cancelMenuActionSheetScopeServices:cancelMenuActionSheetScopeExposer:friendActionSheetScopeExposer:groupActionSheetScopeExposer:callLauncher:contextPostSnapFeedDataFetcher:contextSpotlightDataFetcher:lensFriendsFeedContextDataFetcher:lensFriendsFeedContextConfigFetcher:userTrackedLogger:loadMessageLogger:contactPermissionInfoProvider:contactSyncCTAQualificationProvider:preloadController:uberAvatarScopeServices:uberAvatarScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:fingerDownWarmingServices:adPluginProvider:contextPostSnapFeedScopeExposer:contextPostSnapFeedScopeServices:lensFriendsFeedContextButtonScopeExposer:lensFriendsFeedContextButtonScopeServices:friendsFeedGamingButtonScopeExposer:friendsFeedGamesPresenceButtonScopeServices:clearMenuActionSheetScopeExposer:clearMenuActionSheetScopeBuilderServices:removeConversationAlertScopeExposer:alertDialogUIContainer:externalLinkSendingService:safetyReportScopeExposer:settingsScopeExposer:settingsScopeServices:snapReplayScopeExposer:registrationPerformanceLogger:userSnapContactsPrivacyProvider:chatEligibilityProvider:nfmOnboardingAlertScopeExposer:friendsFeedHeaderScopeServices:friendsFeedHeaderScopeExposer:shortcutsDataFetcher:shortcutsInteractionMutator:shortcutsLogger:conversationIdResolver:callUILaunchingServices:friendsFeedCTAImpressionTracker:lensFriendsFeedContextLogger:lensFriendsFeedContextImpressionTracker:saveFriendStoryOperaPluginProvider:operaSessionScopeExposer:inviteFriendStateTracker:inviteFriendDeepLinkCoordinator:contactsInviter:shortLinkEncodingService:firstRenderHasUnviewedStoriesEventsPublisher:pageLoadMetricManager:discoverDataFetcher:playableViewModelGenerator:cachedReadReceiptProvider:optInDataProvider:bloopsReportScopeExposer:notificationToMessageReadyLogger:storiesEverywhereScopeExposer:storiesEverywhereScopeServices:communitiesFeedSectionScopeExposer:customStoriesDataFetcher:contentPlaybackScopeExposer:contentProductPlaybackScopeServices:storiesConfigProvider:streakRestorePurchaseScopeFactoryServices:friendStoriesDataCoordinator:discoverFeedEventsLogger:discoverFeedInteractionHistoryManager:feedMoreUnreadScopeExposer:feedMoreUnreadProvider:notificationOSSettingsRetriever:offPlatformShareServices:chatPeekProcessor:chatPeekEvents:upNextV2PlaybackSessionExposer:upNextV2PlaybackSessionScopeServices:discoverFeedDataMutator:friendsFeedChatActionHandler:plusFeatureLogger:plusFeatureGating:plusThemeProvider:createCommunitiesNewChatScopeExposer:recentlyActiveRecordRepository:contextualNotificationTriggerEvents:internalDistributor:storiesGrapheneMetricsEmitter:lastInteractionDataService:mapContextInFriendsFeedProvider:saturnFriendsFeedProvider:saturnFriendsFeedImpressionTracker:mapContextInFriendsFeedImpressionTracker:imageFetchingService:spotlightShareSender:spotlightPlatformAnalyticsCreator:mapScopeExposer:pageLauncher:mapPersonLocationsProvider:friendshipFlashbacksDataManager:friendsFeedTracker:callLogUIScopeExposer:callLogUIScopeServices:simpleSnapchatExperimentConfigProvider:platformUIExperimentsService:musicContentRestrictionServices:appStartExperimentReader:streakProvider:publicGroupsScopeExposer:shareNotificationService:userBlizzardLogger:groupJoinPermissionScopeExposer:myAIInGroupChatEnabled:botsOpenRearCameraInChatEnabled:suggestionInFriendsFeedEnabled:crashServices:storiesUsageLogger:renderStyleProvider:avatarFactory:userSegmentsProvider:adConfigProviderV2:creatorSubscriptionsInfoProvider:nglStudySettings:nearMeFactoryServices:gamesFactoryServices:fontLoader:fullMapScopeServices:lazyNetworkConnectivityMonitor:playbackAssetRepositoryFactory:remixOperaPluginProvider:unlockableViewTracker:discoverFeedDataFetcher:snapchatterUserInfoProvider:playbackMediaResolver:offPlatformLinkGenerationService:snapchatterObservableRepository:legacyStoriesTooltipsService:modularSpotlightLauncher:friendingInterstitialPluginService:]
// Type encoding: @1912@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472@480@488@496@504@512@520@528@536@544@552@560@568@576@584@592@600@608@616@624@632@640@648@656@664@672@680@688@696@704@712@720@728@736@744@752@760@768@776@784@792@800@808@816@824@832@840@848@856@864@872@880@888@896@904@912@920@928@936@944@952@960@968@976@984@992@1000@1008@1016@1024@1032@1040@1048@1056@1064@1072@1080@1088@1096@1104@1112@1120@1128@1136@1144@1152@1160@1168@1176@1184@1192@1200@1208@1216@1224@1232@1240@1248@1256@1264@1272@1280@1288@1296@1304@1312@1320@1328@1336@1344@1352@1360@1368@1376@1384@1392@1400@1408@1416@1424@1432@1440@1448@1456@1464@1472@1480@1488@1496@1504@1512@1520@1528@1536@1544@1552@1560@1568@1576@1584@1592@1600@1608@1616@1624@1632@1640@1648@1656@1664@1672@1680@1688@1696@1704@1712@1720@1728@1736@1744@1752@1760@1768@1776@1784@1792@1800@1808@1816@1824@1832@1840@1848@1856@1864@1872@1880@1888@1896@1904
// Implementation: 0x105b7c694

// -[SCFriendsFeedViewController _initTableView]
// Type encoding: v16@0:8
// Implementation: 0x105b81c40

// -[SCFriendsFeedViewController _initTableFooterView]
// Type encoding: v16@0:8
// Implementation: 0x105b81f5c

// -[SCFriendsFeedViewController _initGestureRecognizers]
// Type encoding: v16@0:8
// Implementation: 0x105b82020

// -[SCFriendsFeedViewController _initLazyTableHeaderView]
// Type encoding: v16@0:8
// Implementation: 0x105b822c0

// -[SCFriendsFeedViewController _initSponsoredSnapBanner]
// Type encoding: v16@0:8
// Implementation: 0x105b82698

// -[SCFriendsFeedViewController _observeApplicationLifecycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b829e0

// -[SCFriendsFeedViewController _observeFeedInitialRenderEvent]
// Type encoding: v16@0:8
// Implementation: 0x105b82bdc

// -[SCFriendsFeedViewController _onFeedInitialRender]
// Type encoding: v16@0:8
// Implementation: 0x105b82d08

// -[SCFriendsFeedViewController _subscribeToPublicGroupsJiraInfo]
// Type encoding: v16@0:8
// Implementation: 0x105b82d3c

// -[SCFriendsFeedViewController _updatePublicGroupJiraInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b82d40

// -[SCFriendsFeedViewController _observeConsumableConversationCount]
// Type encoding: v16@0:8
// Implementation: 0x105b82d78

// -[SCFriendsFeedViewController _startAdsPrefetching]
// Type encoding: v16@0:8
// Implementation: 0x105b830cc

// -[SCFriendsFeedViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x105b8310c

// -[SCFriendsFeedViewController initGradientView]
// Type encoding: v16@0:8
// Implementation: 0x105b83240

// -[SCFriendsFeedViewController initTableHeaderView]
// Type encoding: v16@0:8
// Implementation: 0x105b83380

// -[SCFriendsFeedViewController viewWillTransitionToSize:withTransitionCoordinator:]
// Type encoding: v40@0:8{CGSize=dd}16@32
// Implementation: 0x105b83518

// -[SCFriendsFeedViewController initOrderedSections]
// Type encoding: v16@0:8
// Implementation: 0x105b835b0

// -[SCFriendsFeedViewController _initCreateButton]
// Type encoding: v16@0:8
// Implementation: 0x105b83674

// -[SCFriendsFeedViewController _logScrollToTopButtonImpression]
// Type encoding: v16@0:8
// Implementation: 0x105b83950

// -[SCFriendsFeedViewController _logScrollToTopButtonTap]
// Type encoding: v16@0:8
// Implementation: 0x105b839b4

// -[SCFriendsFeedViewController _logMoreUnreadButtonImpression]
// Type encoding: v16@0:8
// Implementation: 0x105b83a18

// -[SCFriendsFeedViewController _logMoreUnreadButtonTap]
// Type encoding: v16@0:8
// Implementation: 0x105b83a7c

// -[SCFriendsFeedViewController _showCTAButton:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b83ae0

// -[SCFriendsFeedViewController _hideCTAButton:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b83ba8

// -[SCFriendsFeedViewController _showMoreUnreadButtonWithCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b83bd0

// -[SCFriendsFeedViewController _onAttachMoreUnreadButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b84068

// -[SCFriendsFeedViewController _setInitialMoreUnreadButtonConstraint]
// Type encoding: v16@0:8
// Implementation: 0x105b84188

// -[SCFriendsFeedViewController _animateMoreUnreadButtonAppearance]
// Type encoding: v16@0:8
// Implementation: 0x105b84430

// -[SCFriendsFeedViewController _updateMoreUnreadButtonIsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b84590

// -[SCFriendsFeedViewController _removeMoreUnreadScope]
// Type encoding: v16@0:8
// Implementation: 0x105b84640

// -[SCFriendsFeedViewController _createShortcutButton]
// Type encoding: @16@0:8
// Implementation: 0x105b846c0

// -[SCFriendsFeedViewController _constraintTableView]
// Type encoding: v16@0:8
// Implementation: 0x105b84978

// -[SCFriendsFeedViewController didMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b84d70

// -[SCFriendsFeedViewController _deactivateTopConstraints]
// Type encoding: v16@0:8
// Implementation: 0x105b84dc8

// -[SCFriendsFeedViewController _setTopConstraints]
// Type encoding: v16@0:8
// Implementation: 0x105b84e1c

// -[SCFriendsFeedViewController _createQuickAddDataSource:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b85134

// -[SCFriendsFeedViewController _createAddedMeDataSource:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b85324

// -[SCFriendsFeedViewController _createContactSnapchatterDataSource]
// Type encoding: @16@0:8
// Implementation: 0x105b854c0

// -[SCFriendsFeedViewController _createContactNonSnapchatterDataSource]
// Type encoding: @16@0:8
// Implementation: 0x105b85638

// -[SCFriendsFeedViewController _pullToRefreshViewConstructingIfNecessary]
// Type encoding: @16@0:8
// Implementation: 0x105b8578c

// -[SCFriendsFeedViewController _activityIndicatorViewConstructingIfNecessary]
// Type encoding: @16@0:8
// Implementation: 0x105b85b78

// -[SCFriendsFeedViewController emptyFeedListPlaceholder]
// Type encoding: @16@0:8
// Implementation: 0x105b85dfc

// -[SCFriendsFeedViewController didSelectShortcut:shortcutType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105b86128

// -[SCFriendsFeedViewController didUpdateShortcutBadges:shortcuts:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b86208

// -[SCFriendsFeedViewController startBatchCameraReply:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b862e4

// -[SCFriendsFeedViewController shouldRevealShortcutsCarousel]
// Type encoding: v16@0:8
// Implementation: 0x105b862e8

// -[SCFriendsFeedViewController storiesCarouselDidRender]
// Type encoding: v16@0:8
// Implementation: 0x105b862f0

// -[SCFriendsFeedViewController storiesCarouselUpdateOperaIsPresenting:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b86370

// -[SCFriendsFeedViewController billboardHeaderIsDisplaying:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b86468

// -[SCFriendsFeedViewController billboardHeaderDidTap]
// Type encoding: v16@0:8
// Implementation: 0x105b86528

// -[SCFriendsFeedViewController billboardHeaderDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105b86538

// -[SCFriendsFeedViewController billboardHeaderDidTapExtraButton]
// Type encoding: v16@0:8
// Implementation: 0x105b86578

// -[SCFriendsFeedViewController didTapShortcutButton]
// Type encoding: v16@0:8
// Implementation: 0x105b86588

// -[SCFriendsFeedViewController _didTapShortcutButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b86590

// -[SCFriendsFeedViewController _getCommunityId]
// Type encoding: @16@0:8
// Implementation: 0x105b8667c

// -[SCFriendsFeedViewController _launchBatchCameraReplyFlow]
// Type encoding: v16@0:8
// Implementation: 0x105b86804

// -[SCFriendsFeedViewController preparePanningStateWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b86b14

// -[SCFriendsFeedViewController isPlayingSnap]
// Type encoding: B16@0:8
// Implementation: 0x105b86b24

// -[SCFriendsFeedViewController isPlayingStory]
// Type encoding: B16@0:8
// Implementation: 0x105b86b34

// -[SCFriendsFeedViewController isPlayingSnapOrStory]
// Type encoding: B16@0:8
// Implementation: 0x105b86b94

// -[SCFriendsFeedViewController messageActionMenuOpenActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x105b86bcc

// -[SCFriendsFeedViewController cardContainerView]
// Type encoding: @16@0:8
// Implementation: 0x105b86c4c

// -[SCFriendsFeedViewController pushStartChatView]
// Type encoding: v16@0:8
// Implementation: 0x105b86cf8

// -[SCFriendsFeedViewController _pushStartChatViewWithCreateButtonType:communityId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105b86d04

// -[SCFriendsFeedViewController lazyLoadIfViewDidFullyAppearForTheFirstTime]
// Type encoding: v16@0:8
// Implementation: 0x105b86e84

// -[SCFriendsFeedViewController playbackScopeWillBeginPresenting:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b86ef0

// -[SCFriendsFeedViewController playbackScopeDidFinishPresenting:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b86f48

// -[SCFriendsFeedViewController playbackScopeWillBeginDismissing:mediaId:transitionAnimator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b86f4c

// -[SCFriendsFeedViewController playbackScopeDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b870b4

// -[SCFriendsFeedViewController playbackScopeDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b870b8

// -[SCFriendsFeedViewController playbackScopeDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b870bc

// -[SCFriendsFeedViewController _operaPresenterDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x105b87194

// -[SCFriendsFeedViewController playbackScopeUnableToStartPresenting]
// Type encoding: v16@0:8
// Implementation: 0x105b872fc

// -[SCFriendsFeedViewController playbackScopeUnableToContinuePresenting]
// Type encoding: v16@0:8
// Implementation: 0x105b87388

// -[SCFriendsFeedViewController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b873d4

// -[SCFriendsFeedViewController scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105b876d4

// -[SCFriendsFeedViewController scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b8791c

// -[SCFriendsFeedViewController scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x105b87a10

// -[SCFriendsFeedViewController scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b87a14

// -[SCFriendsFeedViewController scrollViewDidEndScrolling:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b87a18

// -[SCFriendsFeedViewController scrollViewDidEndScrollingAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b87c4c

// -[SCFriendsFeedViewController scrollViewDidScrollToTop:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b87ca8

// -[SCFriendsFeedViewController scrollToTop:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b87d04

// -[SCFriendsFeedViewController updateFooterLoadingViewVisibility]
// Type encoding: v16@0:8
// Implementation: 0x105b87d50

// -[SCFriendsFeedViewController _emptyFeedListPlaceHolderVerticalOffset]
// Type encoding: d16@0:8
// Implementation: 0x105b87eb8

// -[SCFriendsFeedViewController updateEmptyFeedListPlaceHolderLabelFrame]
// Type encoding: v16@0:8
// Implementation: 0x105b87ee0

// -[SCFriendsFeedViewController _updateEmptyFeedListPlaceHolderLabelVisibility]
// Type encoding: v16@0:8
// Implementation: 0x105b87f58

// -[SCFriendsFeedViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x105b880ec

// -[SCFriendsFeedViewController supportedInterfaceOrientations]
// Type encoding: Q16@0:8
// Implementation: 0x105b8843c

// -[SCFriendsFeedViewController _updateMoreUnreadButtonWithVisibilityObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b884bc

// -[SCFriendsFeedViewController hasContentBlockingPullDownExpansion]
// Type encoding: B16@0:8
// Implementation: 0x105b88738

// -[SCFriendsFeedViewController _consumableContentCountBelowTheFold]
// Type encoding: Q16@0:8
// Implementation: 0x105b88750

// -[SCFriendsFeedViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105b88928

// -[SCFriendsFeedViewController _didBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x105b88b00

// -[SCFriendsFeedViewController _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x105b88e54

// -[SCFriendsFeedViewController handleFriendRequestNotification]
// Type encoding: B16@0:8
// Implementation: 0x105b8920c

// -[SCFriendsFeedViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b89214

// -[SCFriendsFeedViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b8926c

// -[SCFriendsFeedViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b89314

// -[SCFriendsFeedViewController presentViewController:animated:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x105b89418

// -[SCFriendsFeedViewController viewDidSwipeIn]
// Type encoding: v16@0:8
// Implementation: 0x105b89598

// -[SCFriendsFeedViewController viewDidPartiallyAppear]
// Type encoding: v16@0:8
// Implementation: 0x105b89740

// -[SCFriendsFeedViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x105b897cc

// -[SCFriendsFeedViewController _loadFriendsFeedSublabelVariableFontIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105b89cc8

// -[SCFriendsFeedViewController _tearDownSponsoredSnapModalIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105b89de8

// -[SCFriendsFeedViewController _showSponsoredSnapsModalIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105b89e90

// -[SCFriendsFeedViewController _subscribeToAllCommunityStoryMetadataObservableIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105b8a2ec

// -[SCFriendsFeedViewController _subscribeToCommunitiesObservableWithFeedManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b8a42c

// -[SCFriendsFeedViewController _updateCommunityJoinTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x105b8a690

// -[SCFriendsFeedViewController _startLoggingSessionsWithVisibleViewModels:indexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b8a71c

// -[SCFriendsFeedViewController _endFeedLoggingSessionWithVisibleViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b8a858

// -[SCFriendsFeedViewController _logImpressionsOnFeedDisappearWithVisibleViewModels:indexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b8a91c

// -[SCFriendsFeedViewController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x105b8a980

// -[SCFriendsFeedViewController setSourceNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b8b114

// -[SCFriendsFeedViewController setPreselectedShortcut:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b8b14c

// -[SCFriendsFeedViewController setIsPresentingUnderChat]
// Type encoding: v16@0:8
// Implementation: 0x105b8b15c

// -[SCFriendsFeedViewController didLaunchViaQuickAction]
// Type encoding: v16@0:8
// Implementation: 0x105b8b180

// -[SCFriendsFeedViewController _conversationIdForNotification:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b8b194

// -[SCFriendsFeedViewController _scrollToFirstConsumableContentCell]
// Type encoding: v16@0:8
// Implementation: 0x105b8b220

// -[SCFriendsFeedViewController _didScrollPassTableViewHeader]
// Type encoding: B16@0:8
// Implementation: 0x105b8b428

// -[SCFriendsFeedViewController _isTopOverscrolledWithContentOffset:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x105b8b468

// -[SCFriendsFeedViewController handleUserTriggeredNavigationAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b8b4b8

// -[SCFriendsFeedViewController didTapNewTabToDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105b8b5e8

// -[SCFriendsFeedViewController handleViewHasAppearedIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105b8b5ec

// -[SCFriendsFeedViewController preferredStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x105b8ba50

// -[SCFriendsFeedViewController prefersStatusBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x105b8ba54

// -[SCFriendsFeedViewController preferredScreenEdgesDeferringSystemGestures]
// Type encoding: Q16@0:8
// Implementation: 0x105b8ba5c

// -[SCFriendsFeedViewController _setPreferredScreenEdgesDeferringSystemGesturesToAll:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b8ba78

// -[SCFriendsFeedViewController dataSourceDidUpdateViewModels:updateSource:fetchContexts:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b8ba88

// -[SCFriendsFeedViewController _callStateLoggerDidEnter]
// Type encoding: v16@0:8
// Implementation: 0x105b8bb6c

// -[SCFriendsFeedViewController _enqueueUnthrottleRequest]
// Type encoding: v16@0:8
// Implementation: 0x105b8bd34

// -[SCFriendsFeedViewController dataSourceDidReceiveNewUnreadContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b8bd94

// -[SCFriendsFeedViewController _isFirstFeedCellVisible]
// Type encoding: B16@0:8
// Implementation: 0x105b8be8c

// -[SCFriendsFeedViewController shouldSuppressNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x105b8bfbc

// -[SCFriendsFeedViewController handleNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b8bfec

// -[SCFriendsFeedViewController handleShortcutPreselected:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b8c2a8

// -[SCFriendsFeedViewController setPageLaunchCommand:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b8c2d8

// -[SCFriendsFeedViewController handlePageLaunchCommand:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b8c310

// -[SCFriendsFeedViewController dataSourceSectionForFeedItems:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105b8c328

// -[SCFriendsFeedViewController dataSource:reloadItemsForResult:viewModels:quickAddChanged:addedMeChanged:contactSnapchatterChanged:contactNonSnapchatterChanged:trackingIdentifier:source:updateIsForCommunityFeed:isInitialMainFeedLoad:]
// Type encoding: v80@0:8@16@24@32B40B44B48B52@56@64B72B76
// Implementation: 0x105b8c32c

// -[SCFriendsFeedViewController _reloadItemsForDataSource:result:viewModels:quickAddChanged:addedMeChanged:contactSnapchatterChanged:contactNonSnapchatterChanged:trackingIdentifier:source:updateIsForCommunityFeed:isInitialMainFeedLoad:]
// Type encoding: v80@0:8@16@24@32B40B44B48B52@56@64B72B76
// Implementation: 0x105b8c41c

// -[SCFriendsFeedViewController _updateVisibleTableViewCellsAndReturnBatchUpdatesResult:viewModels:trackingIdentifier:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105b8ccb0

// -[SCFriendsFeedViewController _updateTableViewForDataSource:batchUpdatesResult:viewModels:quickAddChanged:addedMeChanged:contactSnapchatterChanged:contactNonSnapchatterChanged:trackingIdentifier:updateIsForCommunityFeed:]
// Type encoding: v68@0:8@16@24@32B40B44B48B52@56B64
// Implementation: 0x105b8d09c

// -[SCFriendsFeedViewController _finishTableViewUpdateWithWithOffset:indexOffset:]
// Type encoding: v40@0:8{CGPoint=dd}16q32
// Implementation: 0x105b8d2c8

// -[SCFriendsFeedViewController _layoutTableViewAfterUpdateWithOffset:indexOffset:]
// Type encoding: v40@0:8{CGPoint=dd}16q32
// Implementation: 0x105b8d2ec

// -[SCFriendsFeedViewController resumeTableViewUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b8d574

// -[SCFriendsFeedViewController dataSource:reloadInitialItemsWithViewModels:source:updateIsForCommunityFeed:shouldOnlyReloadTable:]
// Type encoding: v48@0:8@16@24@32B40B44
// Implementation: 0x105b8d578

// -[SCFriendsFeedViewController resumeViewModelUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b8d7d8

// -[SCFriendsFeedViewController dataSourceViewHasAppeared:]
// Type encoding: B24@0:8@16
// Implementation: 0x105b8d82c

// -[SCFriendsFeedViewController dataSourceShouldStopViewModelUpdates:]
// Type encoding: B24@0:8@16
// Implementation: 0x105b8d830

// -[SCFriendsFeedViewController _logReloadTableViewWithPrefix:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b8d848

// -[SCFriendsFeedViewController dataSource:didUpdateViewModelsForShortcutRecipientsWithFeedItems:canRenderFeedEmptyState:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105b8d84c

// -[SCFriendsFeedViewController _setShortcutRecipients:canRenderFeedEmptyState:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105b8d858

// -[SCFriendsFeedViewController dataSource:didReceiveUpdatedShortcutRecipients:shortcutType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105b8d92c

// -[SCFriendsFeedViewController _logShortcutInventoryCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b8dbd8

// -[SCFriendsFeedViewController _logShortcutCellsRenderedCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b8dc30

// -[SCFriendsFeedViewController _updateBatchCameraReplyIfNecessaryWithRecipientCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b8dd14

// -[SCFriendsFeedViewController _getShortcutButtonViewModelWithRecipientCount:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105b8dea4

// -[SCFriendsFeedViewController _updateCustomFeedSectionIfNecessary:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b8df14

// -[SCFriendsFeedViewController _displayCustomFeedSectionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105b8df9c

// -[SCFriendsFeedViewController _hideCustomFeedSectionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105b8e034

// -[SCFriendsFeedViewController _getChatIdentifiersForShortcutRecipients:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b8e0c8

// -[SCFriendsFeedViewController _fetchAndSyncFriendsFeedWithConversationIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b8e288

// -[SCFriendsFeedViewController _logFetchAndSyncFeedWithConversationsCount:shortcutType:elapsedTimeMs:success:]
// Type encoding: v44@0:8Q16Q24d32B40
// Implementation: 0x105b8e500

// -[SCFriendsFeedViewController feedCellForIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b8e5bc

// -[SCFriendsFeedViewController _replyParametersWithPageSource:navigationType:context:replyType:replyState:cellViewPosition:]
// Type encoding: @64@0:8q16q24@32q40Q48q56
// Implementation: 0x105b8e784

// -[SCFriendsFeedViewController _showCameraForUserId:isAiChatbot:replyUsername:displayName:pageSource:navigationType:context:replyType:replyState:isMischief:cellViewPosition:]
// Type encoding: v96@0:8@16B24@28@36q44q52@60q68Q76B84q88
// Implementation: 0x105b8e868

// -[SCFriendsFeedViewController dismissCameraScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b8ea54

// -[SCFriendsFeedViewController actionHandler:willStartAction:source:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b8eaac

// -[SCFriendsFeedViewController actionHandler:didEndAction:source:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b8eab0

// -[SCFriendsFeedViewController _removeExistingPostSnapFeedScope]
// Type encoding: v16@0:8
// Implementation: 0x105b8eab4

// -[SCFriendsFeedViewController _shouldReloadSection:snapchattersChanged:sectionVisible:shouldDisplay:]
// Type encoding: B36@0:8@16B24B28B32
// Implementation: 0x105b8eb0c

// -[SCFriendsFeedViewController _reloadDataSource:addFriendsSectionWithQuickAddChanged:addedMeChanged:contactSnapchatterChanged:contactNonSnapchatterChanged:isHidingOldConversations:shouldReloadSections:]
// Type encoding: v48@0:8@16B24B28B32B36B40B44
// Implementation: 0x105b8eb1c

// -[SCFriendsFeedViewController _reloadSnapchatterSectionsWithQuickAddChange:addedMeChange:contactSnapchatterChange:contactNonSnapchatterChange:]
// Type encoding: v32@0:8B16B20B24B28
// Implementation: 0x105b8edb4

// -[SCFriendsFeedViewController _updateSnapchatterSectionsVisibility]
// Type encoding: v16@0:8
// Implementation: 0x105b8ef30

// -[SCFriendsFeedViewController _addSectionToReloadIfNeeded:shouldChange:sectionType:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105b8ef7c

// -[SCFriendsFeedViewController _launchChatCameraScopeWithConfiguration:isAiChatbot:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105b8efe0

// -[SCFriendsFeedViewController _shouldDisplayAddFriendsSectionWithIsHidingOldConversations:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b8f1c0

// -[SCFriendsFeedViewController numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x105b8f3ac

// -[SCFriendsFeedViewController tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x105b8f3bc

// -[SCFriendsFeedViewController _tableView:numberOfRowsInSectionAddedMe:]
// Type encoding: Q32@0:8@16q24
// Implementation: 0x105b8f554

// -[SCFriendsFeedViewController _tableView:numberOfRowsInSectionQuickAdd:]
// Type encoding: Q32@0:8@16q24
// Implementation: 0x105b8f5e4

// -[SCFriendsFeedViewController _tableView:numberOfRowsInSectionContactSnapchtters:]
// Type encoding: Q32@0:8@16q24
// Implementation: 0x105b8f674

// -[SCFriendsFeedViewController _tableView:numberOfRowsInSectionCommunities:]
// Type encoding: Q32@0:8@16q24
// Implementation: 0x105b8f704

// -[SCFriendsFeedViewController _tableView:numberOfRowsInSectionContactNonSnapchatters:]
// Type encoding: Q32@0:8@16q24
// Implementation: 0x105b8f71c

// -[SCFriendsFeedViewController tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105b8f7ac

// -[SCFriendsFeedViewController _tableView:cellForRowAtIndexPathForAddedMe:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105b8fc3c

// -[SCFriendsFeedViewController _tableView:cellForRowAtIndexPathForQuickAdd:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105b8fcc8

// -[SCFriendsFeedViewController _tableView:cellForRowAtIndexPathForContactSnapchatters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105b8fd54

// -[SCFriendsFeedViewController _tableView:cellForRowAtIndexPathForCommunities:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105b8fde0

// -[SCFriendsFeedViewController _tableView:cellForRowAtIndexPathForContactNonSnapchatters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105b8fe10

// -[SCFriendsFeedViewController tableView:willDisplayCell:forRowAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b8fe9c

// -[SCFriendsFeedViewController _logContactSeenWithCell:indexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b902f4

// -[SCFriendsFeedViewController _loadStoryWithStoryId:viewLocation:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105b905c8

// -[SCFriendsFeedViewController _loadFriendStoryPlaybackSequenceWithStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b907d0

// -[SCFriendsFeedViewController _loadFriendStorySnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b90990

// -[SCFriendsFeedViewController tableView:didEndDisplayingCell:forRowAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b90ba4

// -[SCFriendsFeedViewController rowForCell:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105b90f0c

// -[SCFriendsFeedViewController tableView:viewForHeaderInSection:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x105b90f54

// -[SCFriendsFeedViewController _headerViewForFRNDSection:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b91034

// -[SCFriendsFeedViewController _headerViewForSection:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b91038

// -[SCFriendsFeedViewController tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x105b91084

// -[SCFriendsFeedViewController _tableView:heightForCellInLegacyFRNDSection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x105b91268

// -[SCFriendsFeedViewController _tableView:heightForCommunitiesSection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x105b91274

// -[SCFriendsFeedViewController tableView:heightForHeaderInSection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x105b91298

// -[SCFriendsFeedViewController tableView:heightForFooterInSection:]
// Type encoding: d32@0:8@16q24
// Implementation: 0x105b91360

// -[SCFriendsFeedViewController tableView:shouldHighlightRowAtIndexPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105b9138c

// -[SCFriendsFeedViewController _feedCellForConversationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b91394

// -[SCFriendsFeedViewController _sectionIdForFeedItems]
// Type encoding: q16@0:8
// Implementation: 0x105b91598

// -[SCFriendsFeedViewController _visibleIndexPaths]
// Type encoding: @16@0:8
// Implementation: 0x105b915b0

// -[SCFriendsFeedViewController currentlyShowingLoadingView]
// Type encoding: B16@0:8
// Implementation: 0x105b915f4

// -[SCFriendsFeedViewController loadMoreFeedItemsIfCloseToLoadingView]
// Type encoding: v16@0:8
// Implementation: 0x105b916a4

// -[SCFriendsFeedViewController sectionIndexFromSectionType:]
// Type encoding: q24@0:8@16
// Implementation: 0x105b916dc

// -[SCFriendsFeedViewController didPullToRefresh]
// Type encoding: v16@0:8
// Implementation: 0x105b917a8

// -[SCFriendsFeedViewController _newStoriesDidComeIn]
// Type encoding: v16@0:8
// Implementation: 0x105b919ec

// -[SCFriendsFeedViewController pullToRefreshDidFinishWithStartTime:updateIsForCommunityFeed:success:]
// Type encoding: v32@0:8d16B24B28
// Implementation: 0x105b91c58

// -[SCFriendsFeedViewController _pullToRefreshDidFinishWithStartTime:updateIsForCommunityFeed:success:]
// Type encoding: v32@0:8d16B24B28
// Implementation: 0x105b91d48

// -[SCFriendsFeedViewController handleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b91f08

// -[SCFriendsFeedViewController handlePanGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b923b4

// -[SCFriendsFeedViewController _emitOpenChatEventForEdgeSwipeAtLocation:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x105b926b4

// -[SCFriendsFeedViewController _attemptToScrollToPannableCellAtLocation:withVelocity:]
// Type encoding: B48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x105b92888

// -[SCFriendsFeedViewController _attemptToScrollToPannableCellAtIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x105b9296c

// -[SCFriendsFeedViewController handleDoubleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b92b20

// -[SCFriendsFeedViewController handleDelayedTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b92bec

// -[SCFriendsFeedViewController handleLongPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b92d1c

// -[SCFriendsFeedViewController cellAtPoint:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x105b92e64

// -[SCFriendsFeedViewController cancelTapGestureRecognizers]
// Type encoding: v16@0:8
// Implementation: 0x105b92f04

// -[SCFriendsFeedViewController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x105b92f48

// -[SCFriendsFeedViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105b93258

// -[SCFriendsFeedViewController gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105b933ac

// -[SCFriendsFeedViewController cellHandleTapOnChat:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b93404

// -[SCFriendsFeedViewController prepareNextVCWithViewModel:atRow:navigationAction:deepLinkURL:]
// Type encoding: v48@0:8@16Q24q32@40
// Implementation: 0x105b9364c

// -[SCFriendsFeedViewController presentAlertViewIfAppropriateForViewModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x105b93b10

// -[SCFriendsFeedViewController _attemptToBoostSnapDownloadIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b93b14

// -[SCFriendsFeedViewController _presentNFMOnboardingForViewModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x105b93bd0

// -[SCFriendsFeedViewController _isAiChatbotForCell:]
// Type encoding: B24@0:8@16
// Implementation: 0x105b93d84

// -[SCFriendsFeedViewController _replyConfigurationForCell:pageSource:navigationType:isReplyCta:]
// Type encoding: @44@0:8@16q24q32B40
// Implementation: 0x105b93ee4

// -[SCFriendsFeedViewController cellHandleDoubleTapOnChat:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b942d0

// -[SCFriendsFeedViewController cellHandleLongPressOnCell:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b94b6c

// -[SCFriendsFeedViewController _cancelMenuActionSheetScopeForConversationId:isFailed:profileActionData:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x105b95274

// -[SCFriendsFeedViewController _cancelMenuActionSheetScopeForConversationIds:isFailed:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105b95634

// -[SCFriendsFeedViewController cellHandleTapOnBitmoji:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b956b8

// -[SCFriendsFeedViewController cell:didLongPressOnSnapInConversation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b95ac8

// -[SCFriendsFeedViewController handleTapOnSnap:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b95c8c

// -[SCFriendsFeedViewController cellHandleTapOnUnopenedReceivedMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b95c90

// -[SCFriendsFeedViewController _fetchMessageForSponsoredSnap:conversationId:messageId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b9600c

// -[SCFriendsFeedViewController _launchPlaybackForSponsoredSnap:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b9624c

// -[SCFriendsFeedViewController _prepareMediaForMessageCompletionHelperWithCell:friendsFeedCellViewModel:messageId:conversationId:isMessageReadyToDisplay:snapTapLatencyBuilder:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x105b9656c

// -[SCFriendsFeedViewController _cellHandleTapOnUnopenedReceivedSnap:conversationId:isCampaignConversation:snapTapLatencyBuilder:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x105b9670c

// -[SCFriendsFeedViewController _logFriendsFeedSnapTapAttempt:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b96e20

// -[SCFriendsFeedViewController _logFriendsFeedSnapTapFailureReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b96ec8

// -[SCFriendsFeedViewController _logFriendsFeedSnapPresentAttempt]
// Type encoding: v16@0:8
// Implementation: 0x105b96f70

// -[SCFriendsFeedViewController cellShouldInstallReplyButtonTouchDownRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x105b96fd4

// -[SCFriendsFeedViewController cellHandleReplyButtonTouchDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9701c

// -[SCFriendsFeedViewController _beginFingerDownWarmup]
// Type encoding: v16@0:8
// Implementation: 0x105b97020

// -[SCFriendsFeedViewController _commitFingerDownWarmup]
// Type encoding: v16@0:8
// Implementation: 0x105b970cc

// -[SCFriendsFeedViewController _reclaimFingerDownWarmup]
// Type encoding: v16@0:8
// Implementation: 0x105b97150

// -[SCFriendsFeedViewController cellHandleReplyButtonPressed:contextSessionId:isReplyCta:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105b971d4

// -[SCFriendsFeedViewController cellHandleSnapButtonPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b97398

// -[SCFriendsFeedViewController cellHandleCallingButtonPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b97444

// -[SCFriendsFeedViewController cellHandleMissedCallButtonPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b976bc

// -[SCFriendsFeedViewController cellHandleFriendshipFlashbackPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9780c

// -[SCFriendsFeedViewController _moveToCameraFromFeedCell:isReplyCta:navigationType:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x105b97abc

// -[SCFriendsFeedViewController _presentStreakRestoreFromFeedCell:actionModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b97d60

// -[SCFriendsFeedViewController _presentStreakRestoreDirectFlowFromFeedCell:actionModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b97d64

// -[SCFriendsFeedViewController cellHandleStoryIconPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b98030

// -[SCFriendsFeedViewController _launchStoriesPlaybackForCampaign:cell:storyId:storySummaryInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105b98868

// -[SCFriendsFeedViewController _launchSpotlightOnFriendsFeedTapWithStory:cellViewModel:cell:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b98b5c

// -[SCFriendsFeedViewController spotlightDidBeginPlayingStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b99604

// -[SCFriendsFeedViewController updateSpotlightDismissTargetWithPlaybackManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b996b4

// -[SCFriendsFeedViewController removeSpotlightScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b998a4

// -[SCFriendsFeedViewController _presentClearMenuActionSheetScopeForIdentifier:conversationId:recipientSnapchatter:cellViewPosition:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x105b998f8

// -[SCFriendsFeedViewController _presentRemoveConversationAlertForGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b99a1c

// -[SCFriendsFeedViewController cellHandleTapOnClear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b99acc

// -[SCFriendsFeedViewController _clearConversationForSnapchatterWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b99e58

// -[SCFriendsFeedViewController cellHandleLensButtonPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b99eb4

// -[SCFriendsFeedViewController cellHandleStreakRestoreButtonPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9a134

// -[SCFriendsFeedViewController cellHandleCampaignButtonPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9a248

// -[SCFriendsFeedViewController cellHandleGroupJoinPermissionPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9a4fc

// -[SCFriendsFeedViewController didTapViewAllInFriendsFeed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9a714

// -[SCFriendsFeedViewController _openAdAttachment:viewModel:index:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105b9a724

// -[SCFriendsFeedViewController _dismissAdAttachmentHandlerScope]
// Type encoding: v16@0:8
// Implementation: 0x105b9a84c

// -[SCFriendsFeedViewController _announceTapEventAndUpdateVisibilityWithViewModel:index:actionIdentifier:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x105b9a8a4

// -[SCFriendsFeedViewController _shouldUnselectShortcutWithCellViewModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x105b9a8d8

// -[SCFriendsFeedViewController _unselectShortcutWithCellViewModel:exitEvent:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105b9a968

// -[SCFriendsFeedViewController _setSelectedShortcutType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b9aa44

// -[SCFriendsFeedViewController _registerCommunitiesObservablesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105b9acac

// -[SCFriendsFeedViewController _cleanupCommunitiesData]
// Type encoding: v16@0:8
// Implementation: 0x105b9ae98

// -[SCFriendsFeedViewController _communityMetadatasDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9aef8

// -[SCFriendsFeedViewController _getSessionId]
// Type encoding: @16@0:8
// Implementation: 0x105b9b074

// -[SCFriendsFeedViewController _getShortcutSessionId]
// Type encoding: @16@0:8
// Implementation: 0x105b9b0d4

// -[SCFriendsFeedViewController _emitShortcutEventWithSelectedShortcut:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b9b148

// -[SCFriendsFeedViewController _emitFriendsFeedInteractionEventUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b1d4

// -[SCFriendsFeedViewController adAttachmentHandlerViewWillFullyAppear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b1e4

// -[SCFriendsFeedViewController adAttachmentHandlerDidComplete:result:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b9b1e8

// -[SCFriendsFeedViewController adAttachmentHandlerDidPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b210

// -[SCFriendsFeedViewController adAttachmentHandlerViewDidFullyAppear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b214

// -[SCFriendsFeedViewController adAttachmentHandlerViewDidFullyDisappear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b218

// -[SCFriendsFeedViewController adAttachmentHandlerViewWillFullyDisappear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b21c

// -[SCFriendsFeedViewController presentClearMenuActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b220

// -[SCFriendsFeedViewController clearMenuActionSheetDidDismiss:action:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105b9b298

// -[SCFriendsFeedViewController removeConversationAlertScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b2f0

// -[SCFriendsFeedViewController createChatScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b348

// -[SCFriendsFeedViewController createChatScopeWantsToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b370

// -[SCFriendsFeedViewController createChatScope:wantsToDismissWithNewChat:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b9b3a8

// -[SCFriendsFeedViewController createCommunitiesNewChatPageDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105b9b4e8

// -[SCFriendsFeedViewController createCommunitiesNewChatPageWantsToDismissWithNewChat:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b510

// -[SCFriendsFeedViewController _navigateToChatWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9b678

// -[SCFriendsFeedViewController createChatScope:wantsToDismissForCallWithChatIdentifier:callMediaType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105b9b6f8

// -[SCFriendsFeedViewController _launchCallWithIdentifier:callMediaType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105b9b84c

// -[SCFriendsFeedViewController groupJoinPermissionTrayDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105b9b8b8

// -[SCFriendsFeedViewController didTapCreateButton]
// Type encoding: v16@0:8
// Implementation: 0x105b9b94c

// -[SCFriendsFeedViewController _subscribeToMoreUnreadShortcutsObservable]
// Type encoding: v16@0:8
// Implementation: 0x105b9b9c8

// -[SCFriendsFeedViewController _cleanUpMoreUnreadShortcuts]
// Type encoding: v16@0:8
// Implementation: 0x105b9ba84

// -[SCFriendsFeedViewController _getIsCommunitiesViewingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105b9bba8

// -[SCFriendsFeedViewController _reloadDataMinUpdateCount]
// Type encoding: @16@0:8
// Implementation: 0x105b9bbf0

// -[SCFriendsFeedViewController didTapMoreUnreadButton]
// Type encoding: v16@0:8
// Implementation: 0x105b9bc54

// -[SCFriendsFeedViewController _didQueryFriendStoryLoadingStatusForStoryId:initialPublicStory:summaryData:cell:cellIndexPath:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x105b9bc7c

// -[SCFriendsFeedViewController _presentStoriesWithStoryId:initialPublicStory:storiesSummaryInfo:fromBaseView:playbackDataModels:viewLocationPosition:sourceSection:]
// Type encoding: v72@0:8@16@24@32@40@48Q56Q64
// Implementation: 0x105b9bfcc

// -[SCFriendsFeedViewController _contentSessionScopePresentStoriesWithStoryId:storiesSummaryInfo:fromBaseView:playbackDataModels:viewLocationPosition:sourceSection:]
// Type encoding: v64@0:8@16@24@32@40Q48Q56
// Implementation: 0x105b9c578

// -[SCFriendsFeedViewController _contentSessionScopePresentStoriesWithStoryId:initialPublicStory:storiesSummaryInfo:fromBaseView:friendStoriesPlaybackDataModels:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x105b9ce78

// -[SCFriendsFeedViewController _launchUpNextV2PlaybackSessionScopeWithPlaybackDataProvider:friendStoryId:defaultFallbackStories:subscriptionStory:initialStoryIds:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x105b9d7f0

// -[SCFriendsFeedViewController buildFinalMixedPlaybackDataModelsWithInitialStory:playableDataModelForPublicStory:friendStoriesPlaybackDataModels:defaultFallbackStories:defaultFallbackStoriesDataModels:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105b9dae0

// -[SCFriendsFeedViewController groupProfileDidDimiss:withRequestedFriendshipProfile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b9dbe8

// -[SCFriendsFeedViewController groupProfileDidDismiss:withRequestedChat:deeplinkType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105b9dd10

// -[SCFriendsFeedViewController groupProfileWillDimiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9de38

// -[SCFriendsFeedViewController friendProfileWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x105b9de90

// -[SCFriendsFeedViewController friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9de94

// -[SCFriendsFeedViewController chatScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9def8

// -[SCFriendsFeedViewController _presentGroupProfileWithGroupId:flashbackId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b9df50

// -[SCFriendsFeedViewController _presentFriendProfileWithUserId:actionmojiId:friendshipFlashbackId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b9e060

// -[SCFriendsFeedViewController _presentActionSheetWithUnifiedProfileActionData:pageViewName:saveableSentSnapMessageId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x105b9e214

// -[SCFriendsFeedViewController _presentGroupActionSheet:sourcePageType:hideRecursiveOptions:saveableSentSnapMessageId:]
// Type encoding: v44@0:8@16q24B32@36
// Implementation: 0x105b9e338

// -[SCFriendsFeedViewController _presentFriendActionSheet:sourcePageType:hideRecursiveOptions:nonFriendAddSourceType:saveableSentSnapMessageId:]
// Type encoding: v52@0:8@16q24B32q36@44
// Implementation: 0x105b9e490

// -[SCFriendsFeedViewController operaPresenterWillBeginPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b9e5ac

// -[SCFriendsFeedViewController _markPlayedAsReadIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105b9e684

// -[SCFriendsFeedViewController _markPlayedAsRead]
// Type encoding: v16@0:8
// Implementation: 0x105b9e6a0

// -[SCFriendsFeedViewController operaPresenterDidFinishPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b9e77c

// -[SCFriendsFeedViewController _addToPlayedStoryIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9e808

// -[SCFriendsFeedViewController _friendStoriesPlaylistPlugin]
// Type encoding: @16@0:8
// Implementation: 0x105b9e8e8

// -[SCFriendsFeedViewController operaPresenterWillBeginDismissing:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b9e94c

// -[SCFriendsFeedViewController operaPresenterDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9ed78

// -[SCFriendsFeedViewController operaPresenterWillBeginAnimatingToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9ed7c

// -[SCFriendsFeedViewController operaPresenterDidFailToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9ed80

// -[SCFriendsFeedViewController operaPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9ed84

// -[SCFriendsFeedViewController operaPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b9edd4

// -[SCFriendsFeedViewController operaPresenter:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b9f04c

// -[SCFriendsFeedViewController operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b9f39c

// -[SCFriendsFeedViewController _currentlyDisplayedDocFriendStory]
// Type encoding: @16@0:8
// Implementation: 0x105b9f3a0

// -[SCFriendsFeedViewController _currentlyDisplayedDocAdSnap]
// Type encoding: @16@0:8
// Implementation: 0x105b9f408

// -[SCFriendsFeedViewController _processStoriesSummariesWithSummaryData:includePlayedStories:initialStoryId:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x105b9f470

// -[SCFriendsFeedViewController _processStoriesSummariesWithSummaryData:includePlayedStories:rankedStoryIds:initialStoryId:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x105b9f718

// -[SCFriendsFeedViewController _processStoriesSummariesWithSummaryData:includePlayedStories:orderedStoryIds:initialStoryId:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x105b9f9a8

// -[SCFriendsFeedViewController _getCreatorSubscriptionsAndProcessStoriesWithSummaryData:includePlayedStories:orderedStoryIds:initialStoryId:userIdToSnapchatter:completion:]
// Type encoding: v60@0:8@16B24@28@36@44@?52
// Implementation: 0x105b9fc28

// -[SCFriendsFeedViewController _processStoriesSummariesWithSummaryData:includePlayedStories:orderedStoryIds:initialStoryId:userIdToSnapchatter:creatorSubscriptions:completion:]
// Type encoding: v68@0:8@16B24@28@36@44@52@?60
// Implementation: 0x105b9ffcc

// -[SCFriendsFeedViewController presentingVC]
// Type encoding: @16@0:8
// Implementation: 0x105ba053c

// -[SCFriendsFeedViewController _operaPresentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105ba05bc

// -[SCFriendsFeedViewController _parentViewController]
// Type encoding: @16@0:8
// Implementation: 0x105ba05c0

// -[SCFriendsFeedViewController _pageNameLoggingParentViewController]
// Type encoding: @16@0:8
// Implementation: 0x105ba0624

// -[SCFriendsFeedViewController tableHeaderDidChangeWithOffsetToRetain:]
// Type encoding: v24@0:8d16
// Implementation: 0x105ba0628

// -[SCFriendsFeedViewController showMyContactsVCForView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba080c

// -[SCFriendsFeedViewController openOSContactSettingForView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba0814

// -[SCFriendsFeedViewController _showMyContactsVCWithSecureAccountFlow:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ba084c

// -[SCFriendsFeedViewController tableFooterViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba0aa4

// -[SCFriendsFeedViewController shouldShowContactsCTAFooterForView:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ba0af8

// -[SCFriendsFeedViewController _initFooterGradientIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105ba0bc0

// -[SCFriendsFeedViewController findFriendsWorkflowCompleted]
// Type encoding: v16@0:8
// Implementation: 0x105ba0f70

// -[SCFriendsFeedViewController _createFriendsFeedShouldShowLoadingViewObservable]
// Type encoding: @16@0:8
// Implementation: 0x105ba0fc8

// -[SCFriendsFeedViewController _createCommunityFeedShouldShowLoadingViewObservable]
// Type encoding: @16@0:8
// Implementation: 0x105ba15e8

// -[SCFriendsFeedViewController tableFooterView:loadMoreConversationsIfPossibleForceOnFailed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105ba1b40

// -[SCFriendsFeedViewController _loadMoreConversationsIfPossibleForceOnFailed:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ba1b48

// -[SCFriendsFeedViewController _updateFriendsFeedForVisibleIndexPath:forceOnFailed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105ba1bec

// -[SCFriendsFeedViewController feedCellPanningState:didEndPanningWithIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ba1f18

// -[SCFriendsFeedViewController pannableCellViewVisiblityDidChange:tracking:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105ba1fac

// -[SCFriendsFeedViewController pannableCellViewVisiblityDidChange:tracking:exitMode:]
// Type encoding: v36@0:8d16B24q28
// Implementation: 0x105ba2028

// -[SCFriendsFeedViewController _pannableCellViewVisiblityDidChange:tracking:shouldInvert:]
// Type encoding: v32@0:8d16B24B28
// Implementation: 0x105ba2034

// -[SCFriendsFeedViewController overscrollWithContentOffset:overscrollPercent:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x105ba21fc

// -[SCFriendsFeedViewController didConfirmEnterChatWithSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba2268

// -[SCFriendsFeedViewController didDismissNFMOnboardingScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba23e4

// -[SCFriendsFeedViewController didSelectSettings]
// Type encoding: v16@0:8
// Implementation: 0x105ba243c

// -[SCFriendsFeedViewController settingsScopeWantsDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105ba253c

// -[SCFriendsFeedViewController settingsScopeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105ba2594

// -[SCFriendsFeedViewController didTapOnLensButton]
// Type encoding: v16@0:8
// Implementation: 0x105ba25ec

// -[SCFriendsFeedViewController lensReplyCameraDidCloseWith:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ba25f0

// -[SCFriendsFeedViewController shouldPopToRootViewController]
// Type encoding: B16@0:8
// Implementation: 0x105ba2648

// -[SCFriendsFeedViewController additionalS2RDebugOutput]
// Type encoding: @16@0:8
// Implementation: 0x105ba266c

// -[SCFriendsFeedViewController viewControllerToQueryForPolicy]
// Type encoding: @16@0:8
// Implementation: 0x105ba2808

// -[SCFriendsFeedViewController _shouldFooterBeShorter]
// Type encoding: B16@0:8
// Implementation: 0x105ba2810

// -[SCFriendsFeedViewController configureHeaderItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba2870

// -[SCFriendsFeedViewController _feedManagementTitleAffordance]
// Type encoding: @16@0:8
// Implementation: 0x105ba2ec0

// -[SCFriendsFeedViewController customizeAddFriendsItemIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba2ed8

// -[SCFriendsFeedViewController _profileIsBeingPresented]
// Type encoding: B16@0:8
// Implementation: 0x105ba304c

// -[SCFriendsFeedViewController _storiesCarouselIsPresenting]
// Type encoding: B16@0:8
// Implementation: 0x105ba30b4

// -[SCFriendsFeedViewController _replyStateForCell:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105ba3108

// -[SCFriendsFeedViewController _setupSubscriptions]
// Type encoding: v16@0:8
// Implementation: 0x105ba31bc

// -[SCFriendsFeedViewController _setupPageSubscriptions]
// Type encoding: v16@0:8
// Implementation: 0x105ba33a0

// -[SCFriendsFeedViewController _updatePreviousPage:]
// Type encoding: v20@0:8i16
// Implementation: 0x105ba37d4

// -[SCFriendsFeedViewController _handlePreviousAttributedPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x105ba3818

// -[SCFriendsFeedViewController _setupSponsoredSnapObservation]
// Type encoding: v16@0:8
// Implementation: 0x105ba385c

// -[SCFriendsFeedViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x105ba391c

// -[SCFriendsFeedViewController defaultSubProjectName]
// Type encoding: @16@0:8
// Implementation: 0x105ba39a8

// -[SCFriendsFeedViewController jiraMetaInfo]
// Type encoding: @16@0:8
// Implementation: 0x105ba39c8

// -[SCFriendsFeedViewController _bottomOffsetAdjustment]
// Type encoding: d16@0:8
// Implementation: 0x105ba3b48

// -[SCFriendsFeedViewController replayScopeWillDisplayAlertView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba3bd0

// -[SCFriendsFeedViewController replayScopeDidCompleteWorkflow:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba3bd4

// -[SCFriendsFeedViewController replayScope:didReplaySnapsInConversation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ba3c2c

// -[SCFriendsFeedViewController _newOpenFriendActionMenuHandler]
// Type encoding: @16@0:8
// Implementation: 0x105ba3c40

// -[SCFriendsFeedViewController _newOpenMiniProfileActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x105ba3cac

// -[SCFriendsFeedViewController _newOpenChatActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x105ba3ce4

// -[SCFriendsFeedViewController _newOpenCameraActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x105ba3d24

// -[SCFriendsFeedViewController _endAddFriendsSectionLogging]
// Type encoding: v16@0:8
// Implementation: 0x105ba3d78

// -[SCFriendsFeedViewController _updateAddFriendsSectionsViewAppeared:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ba3e0c

// -[SCFriendsFeedViewController _startChatMediaPrefetcherIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105ba3eb0

// -[SCFriendsFeedViewController _exposeCommunitiesSectionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105ba3eec

// -[SCFriendsFeedViewController _attachCommunitiesSection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba427c

// -[SCFriendsFeedViewController _hideAllFriendingSections]
// Type encoding: v16@0:8
// Implementation: 0x105ba4328

// -[SCFriendsFeedViewController _reloadCommunitiesSectionViewWithUpdatedHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x105ba4354

// -[SCFriendsFeedViewController _detachCommunitiesSection:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105ba43e0

// -[SCFriendsFeedViewController _exposeFullViewShortcut:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105ba4494

// -[SCFriendsFeedViewController _attachFullViewSection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba47f4

// -[SCFriendsFeedViewController _cleanupFullViewSection]
// Type encoding: v16@0:8
// Implementation: 0x105ba4ba0

// -[SCFriendsFeedViewController _heightForFullViewSection]
// Type encoding: d16@0:8
// Implementation: 0x105ba4d20

// -[SCFriendsFeedViewController didDismissForChatWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba4e0c

// -[SCFriendsFeedViewController onLayoutChangedWithUpdatedHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x105ba4e10

// -[SCFriendsFeedViewController captureWorkflowDidDismissWithDidSendSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ba4f0c

// -[SCFriendsFeedViewController dataCoordinatorDidUpdateWithIdentifier:dataRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ba4f94

// -[SCFriendsFeedViewController exit:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105ba5054

// -[SCFriendsFeedViewController backgroundExitBehavior]
// Type encoding: @16@0:8
// Implementation: 0x105ba5068

// -[SCFriendsFeedViewController canHandleNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ba5250

// -[SCFriendsFeedViewController handleQuickAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba5270

// -[SCFriendsFeedViewController traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba52dc

// -[SCFriendsFeedViewController customStatusBarStyleForViewController]
// Type encoding: q16@0:8
// Implementation: 0x105ba5588

// -[SCFriendsFeedViewController didTapOnFeedChatOptions]
// Type encoding: v16@0:8
// Implementation: 0x105ba5590

// -[SCFriendsFeedViewController cancelMenuActionSheetDidDimiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba55a0

// -[SCFriendsFeedViewController groupActionSheetOpenProfileForGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba55f8

// -[SCFriendsFeedViewController groupActionSheetShowCameraForGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba56c0

// -[SCFriendsFeedViewController groupActionSheetDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105ba5794

// -[SCFriendsFeedViewController friendActionSheetOpenProfile:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba5820

// -[SCFriendsFeedViewController friendActionSheetShowCameraForSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba5868

// -[SCFriendsFeedViewController friendActionSheetDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba5a94

// -[SCFriendsFeedViewController friendActionSheetOpenMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba5b20

// -[SCFriendsFeedViewController friendActionSheetOpenProfile:withRequestedSnapchatter:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ba5cd4

// -[SCFriendsFeedViewController mapScopeDidEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba5d1c

// -[SCFriendsFeedViewController animationHandlerWantsToResetLastFinishedViewingSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba5dd8

// -[SCFriendsFeedViewController animationHandlerWantsToResetLastSentSnap:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ba5de8

// -[SCFriendsFeedViewController _clearFriendsFeedStoriesBadge]
// Type encoding: v16@0:8
// Implementation: 0x105ba5dfc

// -[SCFriendsFeedViewController _publisherFirstRenderEventsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105ba5e1c

// -[SCFriendsFeedViewController _onFirstRender]
// Type encoding: v16@0:8
// Implementation: 0x105ba5f68

// -[SCFriendsFeedViewController _getFriendsFeedSessionImpressionId]
// Type encoding: @16@0:8
// Implementation: 0x105ba6178

// -[SCFriendsFeedViewController _isFullyVisibleInViewForTableCell:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ba61d8

// -[SCFriendsFeedViewController _hasUnviewedStoriesInVisibleCells]
// Type encoding: B16@0:8
// Implementation: 0x105ba6228

// -[SCFriendsFeedViewController _enableTwilioInvites]
// Type encoding: @16@0:8
// Implementation: 0x105ba6538

// -[SCFriendsFeedViewController _isPlayableType:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ba659c

// -[SCFriendsFeedViewController _storiesCarouselInChatEnabled]
// Type encoding: @16@0:8
// Implementation: 0x105ba66a0

// -[SCFriendsFeedViewController _storyImpressionWithViewModels:cellDidAppear:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105ba6708

// -[SCFriendsFeedViewController playbackPresenterDidTearDown:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ba68ac

// -[SCFriendsFeedViewController playbackPresenterDidFinishDismissing:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ba6908

// -[SCFriendsFeedViewController playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ba690c

// -[SCFriendsFeedViewController playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ba6910

// -[SCFriendsFeedViewController playbackPresenter:didBeginPlayingStory:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ba6914

// -[SCFriendsFeedViewController playbackPresenterStoriesPlugin:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba6918

// -[SCFriendsFeedViewController didTapHeaderItemTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba69c0

// -[SCFriendsFeedViewController streakRestorePurchaseDismissedWithDidRestore:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ba69c4

// -[SCFriendsFeedViewController _currentFeedTableFooterView]
// Type encoding: @16@0:8
// Implementation: 0x105ba69c8

// -[SCFriendsFeedViewController _currentShouldShowLoadingView]
// Type encoding: B16@0:8
// Implementation: 0x105ba6dcc

// -[SCFriendsFeedViewController currentVisibleFriendCells]
// Type encoding: @16@0:8
// Implementation: 0x105ba6e24

// -[SCFriendsFeedViewController friendsFeedPullToRefreshObservable]
// Type encoding: @16@0:8
// Implementation: 0x105ba6f70

// -[SCFriendsFeedViewController friendsFeedVisibleCellsIndicesObservable]
// Type encoding: @16@0:8
// Implementation: 0x105ba7120

// -[SCFriendsFeedViewController _updateFriendsFeedVisibleCellsWithIsVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ba7298

// -[SCFriendsFeedViewController _emitFriendsFeedCellVisibilityEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba758c

// -[SCFriendsFeedViewController _handleHasCustomAppTheme:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba759c

// -[SCFriendsFeedViewController _updateBackgroundImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba7658

// -[SCFriendsFeedViewController _updatePullToRefreshView]
// Type encoding: v16@0:8
// Implementation: 0x105ba76d8

// -[SCFriendsFeedViewController _snapshotView:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ba7750

// -[SCFriendsFeedViewController didDismissModal]
// Type encoding: v16@0:8
// Implementation: 0x105ba78a4

// -[SCFriendsFeedViewController sponsoredSnapPlaybackDidCompleteWithScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba7940

// -[SCFriendsFeedViewController sponsoredSnapPlaybackWillBeginDismissingWithScope:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ba79a0

// -[SCFriendsFeedViewController sponsoredSnapPlaybackWillBeginPresentingWithScope:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ba7b10

// -[SCFriendsFeedViewController _feedCellForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ba7b14

// -[SCFriendsFeedViewController removeContentForCreatorId:playlistItemController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ba7d28

// -[SCFriendsFeedViewController sourceNotification]
// Type encoding: @16@0:8
// Implementation: 0x105ba7d80

// -[SCFriendsFeedViewController headerItem]
// Type encoding: @16@0:8
// Implementation: 0x105ba7d90

// -[SCFriendsFeedViewController overlayItem]
// Type encoding: @16@0:8
// Implementation: 0x105ba7da0

// -[SCFriendsFeedViewController tableView]
// Type encoding: @16@0:8
// Implementation: 0x105ba7db0

// -[SCFriendsFeedViewController setTableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba7dc0

// -[SCFriendsFeedViewController setEmptyFeedListPlaceholder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba7e00

// -[SCFriendsFeedViewController dataSource]
// Type encoding: @16@0:8
// Implementation: 0x105ba7e40

// -[SCFriendsFeedViewController setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba7e50

// -[SCFriendsFeedViewController tapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x105ba7e90

// -[SCFriendsFeedViewController setTapGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba7ea0

// -[SCFriendsFeedViewController delayedTapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x105ba7ee0

// -[SCFriendsFeedViewController setDelayedTapGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba7ef0

// -[SCFriendsFeedViewController longPressGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x105ba7f30

// -[SCFriendsFeedViewController setLongPressGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba7f40

// -[SCFriendsFeedViewController doubleTapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x105ba7f80

// -[SCFriendsFeedViewController setDoubleTapGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba7f90

// -[SCFriendsFeedViewController panGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x105ba7fd0

// -[SCFriendsFeedViewController setPanGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba7fe0

// -[SCFriendsFeedViewController topGradientView]
// Type encoding: @16@0:8
// Implementation: 0x105ba8020

// -[SCFriendsFeedViewController setTopGradientView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba8030

// -[SCFriendsFeedViewController scrollShadowView]
// Type encoding: @16@0:8
// Implementation: 0x105ba8070

// -[SCFriendsFeedViewController setScrollShadowView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba8080

// -[SCFriendsFeedViewController bottomGradientView]
// Type encoding: @16@0:8
// Implementation: 0x105ba80c0

// -[SCFriendsFeedViewController setBottomGradientView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba80d0

// -[SCFriendsFeedViewController lastScrolledYOffset]
// Type encoding: d16@0:8
// Implementation: 0x105ba8110

// -[SCFriendsFeedViewController setLastScrolledYOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x105ba8120

// -[SCFriendsFeedViewController lastYOffsetBeforeScrolling]
// Type encoding: d16@0:8
// Implementation: 0x105ba8130

// -[SCFriendsFeedViewController setLastYOffsetBeforeScrolling:]
// Type encoding: v24@0:8d16
// Implementation: 0x105ba8140

// -[SCFriendsFeedViewController viewHasAppeared]
// Type encoding: B16@0:8
// Implementation: 0x105ba8150

// -[SCFriendsFeedViewController setViewHasAppeared:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ba8160

// -[SCFriendsFeedViewController selectedUsername]
// Type encoding: @16@0:8
// Implementation: 0x105ba8170

// -[SCFriendsFeedViewController setSelectedUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba8180

// -[SCFriendsFeedViewController setCardContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba818c

// -[SCFriendsFeedViewController applyRoundedCorners]
// Type encoding: B16@0:8
// Implementation: 0x105ba81cc

// -[SCFriendsFeedViewController setApplyRoundedCorners:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ba81dc

// -[SCFriendsFeedViewController scrollToTopButton]
// Type encoding: @16@0:8
// Implementation: 0x105ba81ec

// -[SCFriendsFeedViewController setScrollToTopButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba81fc

// -[SCFriendsFeedViewController scrollToTopBottomConstraint]
// Type encoding: @16@0:8
// Implementation: 0x105ba823c

// -[SCFriendsFeedViewController setScrollToTopBottomConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba824c

// -[SCFriendsFeedViewController circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x105ba828c

// -[SCFriendsFeedViewController setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba829c

// -[SCFriendsFeedViewController playedStoryIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x105ba82dc

// -[SCFriendsFeedViewController setPlayedStoryIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ba82ec

// -[SCFriendsFeedViewController storiesSourceSection]
// Type encoding: Q16@0:8
// Implementation: 0x105ba832c

// -[SCFriendsFeedViewController setStoriesSourceSection:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105ba833c

// -[SCFriendsFeedViewController numOfStoriesLeftToAutoLoadInFeed]
// Type encoding: Q16@0:8
// Implementation: 0x105ba834c

// -[SCFriendsFeedViewController setNumOfStoriesLeftToAutoLoadInFeed:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105ba835c

// -[SCFriendsFeedViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ba836c

// +[SCFriendsFeedViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x105b7c680

@end
