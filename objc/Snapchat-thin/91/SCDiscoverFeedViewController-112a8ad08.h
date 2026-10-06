// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedViewController
// Superclass: SCDeckBaseViewController
// Address: 0x112a8ad08

@interface SCDiscoverFeedViewController

// Property: userSession; attributes: T@"SCUserSession",&,N,V_userSession
// Property: userPreferences; attributes: T@"SCLazy",&,N,V_userPreferences
// Property: networkRequester; attributes: T@"SCLazy",&,N,V_networkRequester
// Property: eventAnnouncer; attributes: T@"SCEventListenerAnnouncer",&,N,V_eventAnnouncer
// Property: queryResultController; attributes: T@"SCCollectionViewQueryResultController",&,N,V_queryResultController
// Property: snapTokenProvider; attributes: T@"SCLazy",&,N,V_snapTokenProvider
// Property: imageDownloader; attributes: T@"SCLazy",&,N,V_imageDownloader
// Property: storiesMediaCoordinator; attributes: T@"SCLazy",&,N,V_storiesMediaCoordinator
// Property: friendStoriesDataCoordinator; attributes: T@"SCLazy",&,N,V_friendStoriesDataCoordinator
// Property: myStoriesDataCoordinator; attributes: T@"SCLazy",&,N,V_myStoriesDataCoordinator
// Property: sectionExtensionServices; attributes: T@"SCFuture",&,N,V_sectionExtensionServices
// Property: friendStoriesReplayManager; attributes: T@"SCLazy",&,N,V_friendStoriesReplayManager
// Property: collapseManager; attributes: T@"SCLazy",&,N,V_collapseManager
// Property: loggingEventsController; attributes: T@"SCLazy",&,N,V_loggingEventsController
// Property: discoverFeedDataFetcher; attributes: T@"SCLazy",&,N,V_discoverFeedDataFetcher
// Property: discoverFeedDataMutator; attributes: T@"SCLazy",&,N,V_discoverFeedDataMutator
// Property: readReceiptCoordinator; attributes: T@"SCLazy",&,N,V_readReceiptCoordinator
// Property: cachedViewStateProvider; attributes: T@"SCLazy",&,N,V_cachedViewStateProvider
// Property: storiesDataCoordinator; attributes: T@"SCLazy",&,N,V_storiesDataCoordinator
// Property: discoverFeedPrefetchHandler; attributes: T@"SCLazy",&,N,V_discoverFeedPrefetchHandler
// Property: optInProvider; attributes: T@"SCLazy",&,N,V_optInProvider
// Property: actionHandler; attributes: T@"<SCDiscoverFeedActionHandling><SCEventListener>",&,N,V_actionHandler
// Property: currentPageTracker; attributes: T@"<SCCurrentPageTracker>",&,N,V_currentPageTracker
// Property: discoverFeedView; attributes: T@"SCDiscoverFeedView",&,N,V_discoverFeedView
// Property: grapheneMetricsEmitter; attributes: T@"<SCDiscoverFeedGrapheneMetricsEmitting>",&,N,V_grapheneMetricsEmitter
// Property: storiesGrapheneMetricsEmitter; attributes: T@"<SCStoriesGrapheneMetricsEmitting>",&,N,V_storiesGrapheneMetricsEmitter
// Property: isVisible; attributes: TB,N,V_isVisible
// Property: isPresenting; attributes: TB,N,V_isPresenting
// Property: isFullyPresenting; attributes: TB,N,V_isFullyPresenting
// Property: eventAnnouncerPerformer; attributes: T@"SCQueuePerformer",&,N,V_eventAnnouncerPerformer
// Property: discoverFeedCollection; attributes: T@"<SCDiscoverFeedCollectionPrefetching><SCDiscoverFeedPlayableViewModelGenerating>",&,N,V_discoverFeedCollection
// Property: paginationController; attributes: T@"SCDiscoverFeedPaginationController",&,N,V_paginationController
// Property: networkConnectivityMonitor; attributes: T@"SCLazy",&,N,V_networkConnectivityMonitor
// Property: locationProvider; attributes: T@"SCLazy",&,N,V_locationProvider
// Property: actionHandlerCreator; attributes: T@"<SCDiscoverFeedViewControllerActionHandlerCreating>",W,N,V_actionHandlerCreator
// Property: interactionHistoryManager; attributes: T@"SCLazy",&,N,V_interactionHistoryManager
// Property: discoverFeedManagementActionSheetActionHandler; attributes: T@"SCDiscoverFeedManagementActionSheetActionHandler",&,N,V_discoverFeedManagementActionSheetActionHandler
// Property: discoverFeedManagementTooltip; attributes: T@"SCPreviewTooltipBalloon",&,N,V_discoverFeedManagementTooltip
// Property: notificationPermissionRequest; attributes: T@"<SCNotificationPermissionRequesting>",&,N,V_notificationPermissionRequest
// Property: notificationOSSettingsRetriever; attributes: T@"<SCNotificationOSSettingsRetrieving>",&,N,V_notificationOSSettingsRetriever
// Property: bitmojiAvatarProvider; attributes: T@"SCLazy",&,N,V_bitmojiAvatarProvider
// Property: snapchatterSyncDataFetcher; attributes: T@"SCLazy",&,N,V_snapchatterSyncDataFetcher
// Property: bitmojiImageFetcher; attributes: T@"SCLazy",&,N,V_bitmojiImageFetcher
// Property: impalaProfilePresentHandler; attributes: T@"<SCDiscoverFeedImpalaProfilePresentHandling>",&,N,V_impalaProfilePresentHandler
// Property: snapProServices; attributes: T@"SCSnapProServices",W,N,V_snapProServices
// Property: snapchatterServices; attributes: T@"SCSnapchatterServices",W,N,V_snapchatterServices
// Property: creatorSettingsService; attributes: T@"SCCreatorSettingsService",W,N,V_creatorSettingsService
// Property: impalaProfilePresenter; attributes: T@"<SCImpalaProfilePresenting>",&,N,V_impalaProfilePresenter
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",R,N,V_circumstanceEngine
// Property: grapheneRegistry; attributes: T@"SCLazy",R,N,V_grapheneRegistry
// Property: storiesConfigProvider; attributes: T@"SCLazy",R,N,V_storiesConfigProvider
// Property: feedPageViewQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_feedPageViewQueue
// Property: uniqueStoriesVisibleBySection; attributes: T@"NSDictionary",&,N,V_uniqueStoriesVisibleBySection
// Property: uniqueStoriesVisibleWithThumbnailVisibleBySection; attributes: T@"NSDictionary",&,N,V_uniqueStoriesVisibleWithThumbnailVisibleBySection
// Property: uniqueMyStoriesVisible; attributes: T@"NSSet",&,N,V_uniqueMyStoriesVisible
// Property: uniqueMyStoriesVisibleWithThumbnailVisible; attributes: T@"NSSet",&,N,V_uniqueMyStoriesVisibleWithThumbnailVisible
// Property: scrolledSections; attributes: T@"NSSet",&,N,V_scrolledSections
// Property: visibleSpinnersCountBySection; attributes: T@"NSDictionary",&,N,V_visibleSpinnersCountBySection
// Property: spinnerVisibleOnLeaveBySection; attributes: T@"NSDictionary",&,N,V_spinnerVisibleOnLeaveBySection
// Property: numTotalFriendStoriesViewed; attributes: Tq,N,V_numTotalFriendStoriesViewed
// Property: numTotalNonFriendStoriesViewed; attributes: Tq,N,V_numTotalNonFriendStoriesViewed
// Property: renderedTimestampBySection; attributes: T@"NSMutableDictionary",&,N,V_renderedTimestampBySection
// Property: firstScrollTimestampBySection; attributes: T@"NSMutableDictionary",&,N,V_firstScrollTimestampBySection
// Property: firstViewTimestampBySection; attributes: T@"NSMutableDictionary",&,N,V_firstViewTimestampBySection
// Property: onScrollAnimator; attributes: T@"<SCDiscoverFeedTileOnScrollAnimating>",&,N,V_onScrollAnimator
// Property: isBroccoliEnabled; attributes: TB,N,V_isBroccoliEnabled
// Property: customAppThemeProvider; attributes: T@"SCLazy",&,N,V_customAppThemeProvider
// Property: presentCreatorSubscriptionsBlock; attributes: T@?,C,N,V_presentCreatorSubscriptionsBlock
// Property: featureSettingsService; attributes: T@"SCLazy",&,N,V_featureSettingsService
// Property: storiesSyncNetworkRequester; attributes: T@"SCLazy",&,N,V_storiesSyncNetworkRequester
// Property: enableDiscoverSpinnerLoggingFPV; attributes: TB,N,V_enableDiscoverSpinnerLoggingFPV
// Property: discoverFeedPageEntryActionType; attributes: Tq,N,V_discoverFeedPageEntryActionType
// Property: navigationServices; attributes: T@"_TtC20SCNavigationServices20SCNavigationServices",W,N,V_navigationServices
// Property: headerButtonServices; attributes: T@"_TtC14SCHeaderButton22SCHeaderButtonServices",W,N,V_headerButtonServices
// Property: parentController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_parentController
// Property: customStatusBarStyleContextController; attributes: T@"<SCCustomStatusBarStyleContextController>",W,N,V_customStatusBarStyleContextController
// Property: applicationLifecycleEvents; attributes: T@"<SCApplicationLifecycleEvents>",W,N,V_applicationLifecycleEvents
// Property: trendingTopicDelegate; attributes: T@"<SCDiscoverFeedViewControllerTrendingTopicDelegate>",W,N,V_trendingTopicDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: cardContainerContext; attributes: T@"SCDiscoverCardContainerContentViewControllerContext",&,N,V_cardContainerContext
// Property: contentScrollView; attributes: T@"UIScrollView",R,N
// Property: scrollingDelegate; attributes: T@"<UIScrollViewDelegate>",W,N,V_scrollingDelegate
// Property: storiesContentViewControllerDelegate; attributes: T@"<SCStoriesContentViewControllingDelegate>",W,N,V_storiesContentViewControllerDelegate
// Property: isViewingStory; attributes: TB,R,N

// -[SCDiscoverFeedViewController toolTipForDiscoverFeedManagementWithFeatureSettingsService:userSegmentsProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105aed108

// -[SCDiscoverFeedViewController didTapDiscoverFeedManagementButton]
// Type encoding: v16@0:8
// Implementation: 0x105aed254

// -[SCDiscoverFeedViewController removeDiscoverFeedManagementTooltip]
// Type encoding: v16@0:8
// Implementation: 0x105aed408

// -[SCDiscoverFeedViewController _initDiscoverFeedManagementActionSheetActionHandlerAndPresent]
// Type encoding: v16@0:8
// Implementation: 0x105aed4b4

// -[SCDiscoverFeedViewController _impalaShowProfileActionHandlerWithPresentingViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aedc7c

// -[SCDiscoverFeedViewController _impalaPublisherProfileActionHandlerWithPresentingViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aedce8

// -[SCDiscoverFeedViewController _presentPublicUserProfile:snapProProfile:presentingViewController:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105aedd54

// -[SCDiscoverFeedViewController getImpressionItemsLoggingDictWithPageSessionId:pageSessionStartTs:impressionTrigger:]
// Type encoding: @40@0:8@16d24q32
// Implementation: 0x105aec094

// -[SCDiscoverFeedViewController _updateImpressItemForCollectionViewCell:frame:indexPath:itemPos:autoPlayDataSource:date:pageSessionId:pageSessionStartTs:impressionTrigger:]
// Type encoding: @112@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@56q64@72@80@88d96q104
// Implementation: 0x105aec848

// -[SCDiscoverFeedViewController _isAdTileAutoPlayEligible:]
// Type encoding: B24@0:8@16
// Implementation: 0x105aeccb8

// -[SCDiscoverFeedViewController _impressionViewItemWithIdentifier:frame:date:itemPos:hasVideoThumbnail:sectionIdentifier:hasReplayOverlay:hasCTA:storyLoggingInfo:pageSessionId:pageSessionStartTs:impressionTrigger:userId:additionalInfo:tileAutoPlayEligible:autoPlayDataSource:]
// Type encoding: @152@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@56q64B72@76B84B88@92@100d108q116@124@132B140@144
// Implementation: 0x105aecef4

// -[SCDiscoverFeedViewController getStoriesAndThumbnailsVisibleBySectionWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105ae9668

// -[SCDiscoverFeedViewController updateUniqueStoriesAndThumbnailsVisibleBySection:visibleStoriesWithThumbnailBySection:uniqueMyStoriesVisible:uniqueMyStoriesVisibleWithThumbnailVisible:visibleSpinnersCounts:visibleSpinnersOnLeaveBySection:didScroll:scrolledSectionIdentifier:scrollTsMs:]
// Type encoding: v84@0:8@16@24@32@40@48@56B64@68d76
// Implementation: 0x105ae993c

// -[SCDiscoverFeedViewController _updateUniqueMyStoriesWithUniqueMyStoriesVisible:uniqueMyStoriesVisibleWithThumbnailVisible:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ae9ab8

// -[SCDiscoverFeedViewController _updateUniqueStoriesVisibleBySectionWithNewDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ae9b30

// -[SCDiscoverFeedViewController _updateUniqueStoriesVisibleWithThumbnailVisibleBySectionWithNewDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ae9d08

// -[SCDiscoverFeedViewController _updateDidScrollBySectionWithSectionIdentifier:scrollTsMs:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105ae9ee0

// -[SCDiscoverFeedViewController _updateVisibleSpinnersCountBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ae9fe8

// -[SCDiscoverFeedViewController _updateSpinnerVisibleOnLeaveBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aea020

// -[SCDiscoverFeedViewController incrementNumTotalStoriesViewedWithGroupDataModel:timestampMs:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105aea058

// -[SCDiscoverFeedViewController _updateFirstViewedTimestamp:viewLocation:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x105aea498

// -[SCDiscoverFeedViewController recordSectionsRenderedTimestampWithSections:sectionConfigurations:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105aea5c8

// -[SCDiscoverFeedViewController _updateRenderedTimestampBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aea7e4

// -[SCDiscoverFeedViewController getFeedPageViewSupplementaryDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aea964

// -[SCDiscoverFeedViewController initWithUserSession:networkRequester:snapTokenProvider:navigationServices:headerButtonServices:storiesDataCoordinator:storiesSyncNetworkRequester:myStoriesDataCoordinator:storiesMediaCoordinator:readReceiptCoordinator:friendStoriesDataCoordinator:storyPlaybackOrderDecider:friendStoriesReplayManager:sectionExtensionServices:discoverFeedActionHandler:discoverFeedSectionHeaderActionHandler:discoverFeedPrefetchHandler:discoverFeedQueryCoordinator:imageDownloader:collapseManager:discoverFeedEventsAnnouncer:lazyDiscoverFeedEventsController:optInProvider:currentPageTracker:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:grapheneMetricsEmitter:storiesGrapheneMetricsEmitter:discoverDataServices:interactionHistoryManager:adPrefetchServices:cachedViewStateProvider:discoverFeedCollectionPrefercher:actionHandlerCreator:deeplinkHandler:impalaProfilePresentHandler:snapchattersSynchronousDataFetcher:endpointManager:storiesSnapReadReceiptLogger:grapheneRegistry:adConfigProvider:userNotTrackedLogger:adEOVTimerProvider:discoverPerformanceLogging:internalDistributor:circumstanceEngine:featureSettingsService:sectionsCoordinator:userSegmentsProvider:snapProServices:snapchatterServices:creatorSettingsService:notificationScreenAccessor:userPreferences:lazyUserRegistrationInfoProvider:lazyUserBirthdayProvider:promotedStoriesLogger:snapchattersDataFetcher:addToStoryCameraScopeExposer:addToStoryCameraScopeBuilder:imageSourceProvider:imageFetchingService:spotlightStoriesPrefetcherFactory:applicationLifecycleEvents:storiesRankingCoordinator:pageLoadMetricManager:storiesConfigProvider:bitmojiImageFetcher:networkConnectivityMonitor:locationProvider:rtusClientCacheManager:unifiedGRPCClientFactory:storiesCachedPropertiesCoordinator:discoverBlizzardLogger:dpaConfigProvider:adRenderDataParser:notificationPool:customAppThemeProvider:collectionViewAutoPlayManager:searchPreTypeNetworkRequester:discoverCrashLogger:creatorSubscriptionsInfoProvider:plusFeatureGating:presentCreatorSubscriptionsBlock:]
// Type encoding: @688@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472@480@488@496@504@512@520@528@536@544@552@560@568@576@584@592@600@608@616@624@632@640@648@656@664@672@?680
// Implementation: 0x105aedecc

// -[SCDiscoverFeedViewController viewDidPartiallyAppear]
// Type encoding: v16@0:8
// Implementation: 0x105aef3dc

// -[SCDiscoverFeedViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x105aef3e0

// -[SCDiscoverFeedViewController viewDidPartiallyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x105aef8f0

// -[SCDiscoverFeedViewController viewDidSwipeIn:]
// Type encoding: v24@0:8q16
// Implementation: 0x105aef9dc

// -[SCDiscoverFeedViewController viewDidSwipeOut]
// Type encoding: v16@0:8
// Implementation: 0x105aefbc0

// -[SCDiscoverFeedViewController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x105aefe34

// -[SCDiscoverFeedViewController _saveStoriesToDiskIfNeededOnAppResignActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x105aefe7c

// -[SCDiscoverFeedViewController handleUserTriggeredNavigationAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x105aefec4

// -[SCDiscoverFeedViewController didTapNewTabToDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105aeffb4

// -[SCDiscoverFeedViewController pausePlayback]
// Type encoding: v16@0:8
// Implementation: 0x105aeffb8

// -[SCDiscoverFeedViewController resumePlayback]
// Type encoding: v16@0:8
// Implementation: 0x105aeffd0

// -[SCDiscoverFeedViewController applicationWillResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aeffe8

// -[SCDiscoverFeedViewController applicationDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af0128

// -[SCDiscoverFeedViewController _resetDiscoverFeedUIIfNecessaryAndLogFPV]
// Type encoding: v16@0:8
// Implementation: 0x105af0268

// -[SCDiscoverFeedViewController applicationDidEnterForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af0350

// -[SCDiscoverFeedViewController applicationDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af0420

// -[SCDiscoverFeedViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x105af05e8

// -[SCDiscoverFeedViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105af0818

// -[SCDiscoverFeedViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105af09c4

// -[SCDiscoverFeedViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105af0e2c

// -[SCDiscoverFeedViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105af0ec0

// -[SCDiscoverFeedViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x105af103c

// -[SCDiscoverFeedViewController viewWillLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x105af1b68

// -[SCDiscoverFeedViewController _isPresentingStory]
// Type encoding: B16@0:8
// Implementation: 0x105af1cdc

// -[SCDiscoverFeedViewController preferredStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x105af1d44

// -[SCDiscoverFeedViewController prefersStatusBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x105af1d7c

// -[SCDiscoverFeedViewController preferredScreenEdgesDeferringSystemGestures]
// Type encoding: Q16@0:8
// Implementation: 0x105af1d84

// -[SCDiscoverFeedViewController setParentController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af1dd4

// -[SCDiscoverFeedViewController shouldPopToRootViewController]
// Type encoding: B16@0:8
// Implementation: 0x105af1e60

// -[SCDiscoverFeedViewController timeBeforeReturningToCamera]
// Type encoding: d16@0:8
// Implementation: 0x105af1e84

// -[SCDiscoverFeedViewController refreshByPullToRefresh]
// Type encoding: v16@0:8
// Implementation: 0x105af1e94

// -[SCDiscoverFeedViewController _refreshByPullToRefresh]
// Type encoding: v16@0:8
// Implementation: 0x105af1e98

// -[SCDiscoverFeedViewController isLoading]
// Type encoding: B16@0:8
// Implementation: 0x105af1ff4

// -[SCDiscoverFeedViewController isViewingStory]
// Type encoding: B16@0:8
// Implementation: 0x105af2004

// -[SCDiscoverFeedViewController navigationBarButtonItems]
// Type encoding: @16@0:8
// Implementation: 0x105af2014

// -[SCDiscoverFeedViewController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af212c

// -[SCDiscoverFeedViewController scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af2268

// -[SCDiscoverFeedViewController scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105af2708

// -[SCDiscoverFeedViewController scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af2904

// -[SCDiscoverFeedViewController scrollViewDidEndScrollingAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af2af8

// -[SCDiscoverFeedViewController collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105af2b80

// -[SCDiscoverFeedViewController _updatePreferredScreenEdgesDeferringSystemGestures]
// Type encoding: v16@0:8
// Implementation: 0x105af2bf0

// -[SCDiscoverFeedViewController scrollToEndDetector:scrollViewWillReachEnd:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105af2bf4

// -[SCDiscoverFeedViewController discoverQueryCoordinator:didFailForQuery:error:statusCodeToDisplay:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105af2e0c

// -[SCDiscoverFeedViewController discoverQueryCoordinator:didReceiveServerResponseForQuery:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105af2efc

// -[SCDiscoverFeedViewController discoverQueryCoordinator:didFinishSavingServerResponseToCacheForQuery:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105af2f00

// -[SCDiscoverFeedViewController sectionPaginationDidUpdateInFlight:forFeedType:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x105af2f14

// -[SCDiscoverFeedViewController searchQueryResultControllerDidDelayReloadFreshResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af2f94

// -[SCDiscoverFeedViewController searchQueryResultControllerDidUpdateQueryResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af3024

// -[SCDiscoverFeedViewController searchQueryResultControllerDidSuspendQueryResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af32c4

// -[SCDiscoverFeedViewController searchQueryResultControllerShouldReloadFreshResult:]
// Type encoding: B24@0:8@16
// Implementation: 0x105af3350

// -[SCDiscoverFeedViewController searchQueryResultController:willUpdateResultForQuery:fromQuery:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105af3360

// -[SCDiscoverFeedViewController presentingViewControllerForSearchQueryResultController:]
// Type encoding: @24@0:8@16
// Implementation: 0x105af3374

// -[SCDiscoverFeedViewController searchQueryResultControllerDidSkipUpdateQueryResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af3378

// -[SCDiscoverFeedViewController firstSectionHeightChangedBy:]
// Type encoding: v24@0:8d16
// Implementation: 0x105af337c

// -[SCDiscoverFeedViewController addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af3380

// -[SCDiscoverFeedViewController removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af3398

// -[SCDiscoverFeedViewController didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af33a8

// -[SCDiscoverFeedViewController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105af33ac

// -[SCDiscoverFeedViewController currentPageSessionId]
// Type encoding: @16@0:8
// Implementation: 0x105af39d8

// -[SCDiscoverFeedViewController setCurrentPageSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af3a9c

// -[SCDiscoverFeedViewController _invalidateContentLongLoadingTimer]
// Type encoding: v16@0:8
// Implementation: 0x105af3b78

// -[SCDiscoverFeedViewController _startContentLongLoadingTimer]
// Type encoding: v16@0:8
// Implementation: 0x105af3bac

// -[SCDiscoverFeedViewController _logInfiniteLoadingEventIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105af3cf0

// -[SCDiscoverFeedViewController didStartToDisplayStoryWithIndexPath:feedType:groupDataModel:actionHandler:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x105af3d9c

// -[SCDiscoverFeedViewController didStartToDismissStoryAtIndexPath:actionHandler:shouldSkipDismissBaseViewUpdate:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105af4038

// -[SCDiscoverFeedViewController didDismissStory]
// Type encoding: v16@0:8
// Implementation: 0x105af44b4

// -[SCDiscoverFeedViewController didTearDownStory]
// Type encoding: v16@0:8
// Implementation: 0x105af45dc

// -[SCDiscoverFeedViewController _handleIsVisibleIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105af4600

// -[SCDiscoverFeedViewController _announceSectionOrder]
// Type encoding: v16@0:8
// Implementation: 0x105af4674

// -[SCDiscoverFeedViewController _expectedItemsInSections:]
// Type encoding: @24@0:8@16
// Implementation: 0x105af49a0

// -[SCDiscoverFeedViewController _viewReadyForQuerySource:contentReadyType:pageSessionId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x105af4ba8

// -[SCDiscoverFeedViewController _logViewReadyIfNeeded:validLoadedSectionTypes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105af4f04

// -[SCDiscoverFeedViewController _handleScrollViewDidScrollWithScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af5064

// -[SCDiscoverFeedViewController _resetScrollStateWithAnimationIfNeededWithQuerySource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af5250

// -[SCDiscoverFeedViewController scrollToTopWithAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x105af5318

// -[SCDiscoverFeedViewController _fetchStoriesForAllSectionsWithQuerySource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af5394

// -[SCDiscoverFeedViewController _fetchStoriesForFeedType:querySource:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105af53a0

// -[SCDiscoverFeedViewController _fetchStoriesForAllSectionsWithQuerySource:feedType:sectionExtensionServices:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x105af5504

// -[SCDiscoverFeedViewController _fetchFreshStoriesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105af56b8

// -[SCDiscoverFeedViewController _prefetchStories]
// Type encoding: v16@0:8
// Implementation: 0x105af5750

// -[SCDiscoverFeedViewController _fetchHeadStories]
// Type encoding: v16@0:8
// Implementation: 0x105af58f0

// -[SCDiscoverFeedViewController _didFinishLoading]
// Type encoding: v16@0:8
// Implementation: 0x105af5a88

// -[SCDiscoverFeedViewController _onDidFinishLoading]
// Type encoding: v16@0:8
// Implementation: 0x105af5b64

// -[SCDiscoverFeedViewController _paginateIfContentUnderfillsViewport]
// Type encoding: v16@0:8
// Implementation: 0x105af5d3c

// -[SCDiscoverFeedViewController _stopPullToRefresh]
// Type encoding: v16@0:8
// Implementation: 0x105af5d8c

// -[SCDiscoverFeedViewController _clearHovaStoryBadge]
// Type encoding: v16@0:8
// Implementation: 0x105af5e00

// -[SCDiscoverFeedViewController _setNoReOrderThresholdTimer]
// Type encoding: v16@0:8
// Implementation: 0x105af5f78

// -[SCDiscoverFeedViewController _performUpdatesForReOrder]
// Type encoding: v16@0:8
// Implementation: 0x105af612c

// -[SCDiscoverFeedViewController _reorderFriendStoriesLocally]
// Type encoding: v16@0:8
// Implementation: 0x105af6394

// -[SCDiscoverFeedViewController _onFriendStoriesLocalReorderFinished:]
// Type encoding: v20@0:8B16
// Implementation: 0x105af649c

// -[SCDiscoverFeedViewController _reorderDiscoverFeedLocally]
// Type encoding: v16@0:8
// Implementation: 0x105af65cc

// -[SCDiscoverFeedViewController _resetOnScrollAnimator]
// Type encoding: v16@0:8
// Implementation: 0x105af66c0

// -[SCDiscoverFeedViewController _clearViewAllButtonStatesThresholdTimer]
// Type encoding: v16@0:8
// Implementation: 0x105af66f0

// -[SCDiscoverFeedViewController _setupViewAllButtonStatesThresholdTimer]
// Type encoding: v16@0:8
// Implementation: 0x105af6724

// -[SCDiscoverFeedViewController resetViewAllButtonStates]
// Type encoding: v16@0:8
// Implementation: 0x105af6858

// -[SCDiscoverFeedViewController didTapPageLevelDebugButton]
// Type encoding: v16@0:8
// Implementation: 0x105af6890

// -[SCDiscoverFeedViewController viewDidAppearWithDeepLinkInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af6928

// -[SCDiscoverFeedViewController _handleDidStartToDisplayStoryWithIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af69f4

// -[SCDiscoverFeedViewController _startPageView]
// Type encoding: v16@0:8
// Implementation: 0x105af6b48

// -[SCDiscoverFeedViewController operaSessionWillBegin]
// Type encoding: v16@0:8
// Implementation: 0x105af6c3c

// -[SCDiscoverFeedViewController operaSessionDidBeginWithOperaPresenter:playbackDataProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105af6c50

// -[SCDiscoverFeedViewController operaSessionDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x105af6c54

// -[SCDiscoverFeedViewController operaSessionWillReachToEndOfPlaylistWithFeedType:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af6c64

// -[SCDiscoverFeedViewController contentScrollView]
// Type encoding: @16@0:8
// Implementation: 0x105af6d20

// -[SCDiscoverFeedViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x105af6d30

// -[SCDiscoverFeedViewController defaultSubProjectName]
// Type encoding: @16@0:8
// Implementation: 0x105af6d3c

// -[SCDiscoverFeedViewController jiraMetaInfo]
// Type encoding: @16@0:8
// Implementation: 0x105af6d44

// -[SCDiscoverFeedViewController _resumeAllVideoPlaybackIfNeccesary]
// Type encoding: v16@0:8
// Implementation: 0x105af6e20

// -[SCDiscoverFeedViewController _prefetchFirstSnapMediaForVisibleCheetahStoriesIfNeccesary]
// Type encoding: v16@0:8
// Implementation: 0x105af6eb8

// -[SCDiscoverFeedViewController _updateItemLoadedStatus]
// Type encoding: v16@0:8
// Implementation: 0x105af6f2c

// -[SCDiscoverFeedViewController handleNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af6f30

// -[SCDiscoverFeedViewController handleNavigationToStoryId:withRefresh:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105af7118

// -[SCDiscoverFeedViewController _handleNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af74d0

// -[SCDiscoverFeedViewController _handleDiscoverFeedFriendStoryNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af76e4

// -[SCDiscoverFeedViewController _optInNotificationGrapheneIncrementStoryCorpus:metricType:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x105af7a24

// -[SCDiscoverFeedViewController _checkAvailableFriendStoryAndPlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af7a3c

// -[SCDiscoverFeedViewController _fetchUncachedFriendStoryWithNotification:itemSource:triggeringSection:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x105af7e10

// -[SCDiscoverFeedViewController _playFriendStory:friendStories:itemSource:triggerItemId:actionIdentifier:triggeringSection:]
// Type encoding: v64@0:8@16@24q32@40@48q56
// Implementation: 0x105af80b0

// -[SCDiscoverFeedViewController _handleDiscoverFeedStoryNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af81d4

// -[SCDiscoverFeedViewController _lookupStory:feedType:sectionKey:identifier:cheetahStory:]
// Type encoding: v52@0:8@16i24@28@36@44
// Implementation: 0x105af83ac

// -[SCDiscoverFeedViewController _handleStoryLookupSuccessResponseWithStory:feedType:sectionKey:identifier:notification:cheetahStory:]
// Type encoding: v60@0:8@16i24@28@36@44@52
// Implementation: 0x105af8658

// -[SCDiscoverFeedViewController _sendActionModelToActionHandler:fromSourceView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105af8900

// -[SCDiscoverFeedViewController _logFSNotificationOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af891c

// -[SCDiscoverFeedViewController _logFSNotificationOpen:error:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105af8924

// -[SCDiscoverFeedViewController _logNFSNotificationOpen:story:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105af8a60

// -[SCDiscoverFeedViewController _logNFSNotificationOpen:error:story:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x105af8a6c

// -[SCDiscoverFeedViewController _resetCarouselSectionsOffset]
// Type encoding: v16@0:8
// Implementation: 0x105af8c60

// -[SCDiscoverFeedViewController _currentSections]
// Type encoding: @16@0:8
// Implementation: 0x105af8e18

// -[SCDiscoverFeedViewController _createPageSessionIdIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105af8f08

// -[SCDiscoverFeedViewController _logImpressionsOnMainThread:]
// Type encoding: v24@0:8q16
// Implementation: 0x105af8fac

// -[SCDiscoverFeedViewController _handleDiscoverFeedPageOpenWithEnterAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x105af9154

// -[SCDiscoverFeedViewController _announceFeedPageOpenEventWithEnterAction:entryType:currentSections:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x105af92e4

// -[SCDiscoverFeedViewController _handleDiscoverFeedPageView]
// Type encoding: v16@0:8
// Implementation: 0x105af93cc

// -[SCDiscoverFeedViewController _announceFeedPageViewEvent]
// Type encoding: v16@0:8
// Implementation: 0x105af9424

// -[SCDiscoverFeedViewController _updateAndRetrieveFeedPageViewSupplementaryDictAndAnnounce:visibleStoriesWithThumbnailBySection:uniqueMyStoriesVisible:uniqueMyStoriesVisibleWithThumbnailVisible:visibleSpinnersCounts:visibleSpinnersOnLeaveBySection:sectionConfigurations:entryType:pageOpenTimestampMs:firstTopBarInteractionTsMs:]
// Type encoding: v96@0:8@16@24@32@40@48@56@64q72d80d88
// Implementation: 0x105af9698

// -[SCDiscoverFeedViewController _announceEventOnPerformerWithEventName:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105af991c

// -[SCDiscoverFeedViewController _feedPageEntryTypeFromAction:sourcePage:]
// Type encoding: q32@0:8q16@24
// Implementation: 0x105af9a50

// -[SCDiscoverFeedViewController _subscribeToHeaderButtonEvents]
// Type encoding: v16@0:8
// Implementation: 0x105af9bd0

// -[SCDiscoverFeedViewController _subscribeToCreatorSubscriptionsChanges]
// Type encoding: v16@0:8
// Implementation: 0x105af9ddc

// -[SCDiscoverFeedViewController _handleCreatorSubscriptionsUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105af9fa4

// -[SCDiscoverFeedViewController didAutoScrollToTop]
// Type encoding: v16@0:8
// Implementation: 0x105af9fd4

// -[SCDiscoverFeedViewController updateFeedPageEntryType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105afa1b0

// -[SCDiscoverFeedViewController discoverFeedSectionCreatorDidSelectTrendingTopic:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afa1c0

// -[SCDiscoverFeedViewController discoverFeedSectionCreatorNeedsLayoutUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105afa210

// -[SCDiscoverFeedViewController autoPlayCoordinator:selectCellsToPlayIn:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105afa2ec

// -[SCDiscoverFeedViewController debugMarkAutoPlayCellAtIndexPath:in:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105afa460

// -[SCDiscoverFeedViewController autoPlaySelectCellsToPlayIn:]
// Type encoding: @24@0:8@16
// Implementation: 0x105afa49c

// -[SCDiscoverFeedViewController autoPlayWithFooterTreatmentSelectCellsToPlayIn:]
// Type encoding: @24@0:8@16
// Implementation: 0x105afa770

// -[SCDiscoverFeedViewController autoPlayCoordinator:storyAt:in:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105afad30

// -[SCDiscoverFeedViewController autoPlayCoordinatorMediaPrefetcher:]
// Type encoding: @24@0:8@16
// Implementation: 0x105afaf60

// -[SCDiscoverFeedViewController cardContainerContext]
// Type encoding: @16@0:8
// Implementation: 0x105afaf90

// -[SCDiscoverFeedViewController setCardContainerContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afafa0

// -[SCDiscoverFeedViewController scrollingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105afafe0

// -[SCDiscoverFeedViewController setScrollingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb000

// -[SCDiscoverFeedViewController storiesContentViewControllerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105afb014

// -[SCDiscoverFeedViewController setStoriesContentViewControllerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb034

// -[SCDiscoverFeedViewController actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x105afb048

// -[SCDiscoverFeedViewController setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb058

// -[SCDiscoverFeedViewController actionHandlerCreator]
// Type encoding: @16@0:8
// Implementation: 0x105afb098

// -[SCDiscoverFeedViewController setActionHandlerCreator:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb0b8

// -[SCDiscoverFeedViewController impalaProfilePresentHandler]
// Type encoding: @16@0:8
// Implementation: 0x105afb0cc

// -[SCDiscoverFeedViewController setImpalaProfilePresentHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb0dc

// -[SCDiscoverFeedViewController applicationLifecycleEvents]
// Type encoding: @16@0:8
// Implementation: 0x105afb11c

// -[SCDiscoverFeedViewController setApplicationLifecycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb13c

// -[SCDiscoverFeedViewController paginationController]
// Type encoding: @16@0:8
// Implementation: 0x105afb150

// -[SCDiscoverFeedViewController setPaginationController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb160

// -[SCDiscoverFeedViewController networkConnectivityMonitor]
// Type encoding: @16@0:8
// Implementation: 0x105afb1a0

// -[SCDiscoverFeedViewController setNetworkConnectivityMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb1b0

// -[SCDiscoverFeedViewController locationProvider]
// Type encoding: @16@0:8
// Implementation: 0x105afb1f0

// -[SCDiscoverFeedViewController setLocationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb200

// -[SCDiscoverFeedViewController discoverFeedPageEntryActionType]
// Type encoding: q16@0:8
// Implementation: 0x105afb240

// -[SCDiscoverFeedViewController setDiscoverFeedPageEntryActionType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105afb250

// -[SCDiscoverFeedViewController navigationServices]
// Type encoding: @16@0:8
// Implementation: 0x105afb260

// -[SCDiscoverFeedViewController setNavigationServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb280

// -[SCDiscoverFeedViewController headerButtonServices]
// Type encoding: @16@0:8
// Implementation: 0x105afb294

// -[SCDiscoverFeedViewController setHeaderButtonServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb2b4

// -[SCDiscoverFeedViewController parentController]
// Type encoding: @16@0:8
// Implementation: 0x105afb2c8

// -[SCDiscoverFeedViewController customStatusBarStyleContextController]
// Type encoding: @16@0:8
// Implementation: 0x105afb2e8

// -[SCDiscoverFeedViewController setCustomStatusBarStyleContextController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb308

// -[SCDiscoverFeedViewController trendingTopicDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105afb31c

// -[SCDiscoverFeedViewController setTrendingTopicDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb33c

// -[SCDiscoverFeedViewController userSession]
// Type encoding: @16@0:8
// Implementation: 0x105afb350

// -[SCDiscoverFeedViewController setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb360

// -[SCDiscoverFeedViewController userPreferences]
// Type encoding: @16@0:8
// Implementation: 0x105afb3a0

// -[SCDiscoverFeedViewController setUserPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb3b0

// -[SCDiscoverFeedViewController networkRequester]
// Type encoding: @16@0:8
// Implementation: 0x105afb3f0

// -[SCDiscoverFeedViewController setNetworkRequester:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb400

// -[SCDiscoverFeedViewController eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x105afb440

// -[SCDiscoverFeedViewController setEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb450

// -[SCDiscoverFeedViewController queryResultController]
// Type encoding: @16@0:8
// Implementation: 0x105afb490

// -[SCDiscoverFeedViewController setQueryResultController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb4a0

// -[SCDiscoverFeedViewController snapTokenProvider]
// Type encoding: @16@0:8
// Implementation: 0x105afb4e0

// -[SCDiscoverFeedViewController setSnapTokenProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb4f0

// -[SCDiscoverFeedViewController imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x105afb530

// -[SCDiscoverFeedViewController setImageDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb540

// -[SCDiscoverFeedViewController storiesMediaCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x105afb580

// -[SCDiscoverFeedViewController setStoriesMediaCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb590

// -[SCDiscoverFeedViewController friendStoriesDataCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x105afb5d0

// -[SCDiscoverFeedViewController setFriendStoriesDataCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb5e0

// -[SCDiscoverFeedViewController myStoriesDataCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x105afb620

// -[SCDiscoverFeedViewController setMyStoriesDataCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb630

// -[SCDiscoverFeedViewController sectionExtensionServices]
// Type encoding: @16@0:8
// Implementation: 0x105afb670

// -[SCDiscoverFeedViewController setSectionExtensionServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb680

// -[SCDiscoverFeedViewController friendStoriesReplayManager]
// Type encoding: @16@0:8
// Implementation: 0x105afb6c0

// -[SCDiscoverFeedViewController setFriendStoriesReplayManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb6d0

// -[SCDiscoverFeedViewController collapseManager]
// Type encoding: @16@0:8
// Implementation: 0x105afb710

// -[SCDiscoverFeedViewController setCollapseManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb720

// -[SCDiscoverFeedViewController loggingEventsController]
// Type encoding: @16@0:8
// Implementation: 0x105afb760

// -[SCDiscoverFeedViewController setLoggingEventsController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb770

// -[SCDiscoverFeedViewController discoverFeedDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x105afb7b0

// -[SCDiscoverFeedViewController setDiscoverFeedDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb7c0

// -[SCDiscoverFeedViewController discoverFeedDataMutator]
// Type encoding: @16@0:8
// Implementation: 0x105afb800

// -[SCDiscoverFeedViewController setDiscoverFeedDataMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb810

// -[SCDiscoverFeedViewController readReceiptCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x105afb850

// -[SCDiscoverFeedViewController setReadReceiptCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb860

// -[SCDiscoverFeedViewController cachedViewStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x105afb8a0

// -[SCDiscoverFeedViewController setCachedViewStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb8b0

// -[SCDiscoverFeedViewController storiesDataCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x105afb8f0

// -[SCDiscoverFeedViewController setStoriesDataCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb900

// -[SCDiscoverFeedViewController discoverFeedPrefetchHandler]
// Type encoding: @16@0:8
// Implementation: 0x105afb940

// -[SCDiscoverFeedViewController setDiscoverFeedPrefetchHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb950

// -[SCDiscoverFeedViewController optInProvider]
// Type encoding: @16@0:8
// Implementation: 0x105afb990

// -[SCDiscoverFeedViewController setOptInProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb9a0

// -[SCDiscoverFeedViewController currentPageTracker]
// Type encoding: @16@0:8
// Implementation: 0x105afb9e0

// -[SCDiscoverFeedViewController setCurrentPageTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afb9f0

// -[SCDiscoverFeedViewController discoverFeedView]
// Type encoding: @16@0:8
// Implementation: 0x105afba30

// -[SCDiscoverFeedViewController setDiscoverFeedView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afba40

// -[SCDiscoverFeedViewController grapheneMetricsEmitter]
// Type encoding: @16@0:8
// Implementation: 0x105afba80

// -[SCDiscoverFeedViewController setGrapheneMetricsEmitter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afba90

// -[SCDiscoverFeedViewController storiesGrapheneMetricsEmitter]
// Type encoding: @16@0:8
// Implementation: 0x105afbad0

// -[SCDiscoverFeedViewController setStoriesGrapheneMetricsEmitter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbae0

// -[SCDiscoverFeedViewController isVisible]
// Type encoding: B16@0:8
// Implementation: 0x105afbb20

// -[SCDiscoverFeedViewController setIsVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x105afbb30

// -[SCDiscoverFeedViewController isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x105afbb40

// -[SCDiscoverFeedViewController setIsPresenting:]
// Type encoding: v20@0:8B16
// Implementation: 0x105afbb50

// -[SCDiscoverFeedViewController isFullyPresenting]
// Type encoding: B16@0:8
// Implementation: 0x105afbb60

// -[SCDiscoverFeedViewController setIsFullyPresenting:]
// Type encoding: v20@0:8B16
// Implementation: 0x105afbb70

// -[SCDiscoverFeedViewController eventAnnouncerPerformer]
// Type encoding: @16@0:8
// Implementation: 0x105afbb80

// -[SCDiscoverFeedViewController setEventAnnouncerPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbb90

// -[SCDiscoverFeedViewController discoverFeedCollection]
// Type encoding: @16@0:8
// Implementation: 0x105afbbd0

// -[SCDiscoverFeedViewController setDiscoverFeedCollection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbbe0

// -[SCDiscoverFeedViewController interactionHistoryManager]
// Type encoding: @16@0:8
// Implementation: 0x105afbc20

// -[SCDiscoverFeedViewController setInteractionHistoryManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbc30

// -[SCDiscoverFeedViewController discoverFeedManagementActionSheetActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x105afbc70

// -[SCDiscoverFeedViewController setDiscoverFeedManagementActionSheetActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbc80

// -[SCDiscoverFeedViewController discoverFeedManagementTooltip]
// Type encoding: @16@0:8
// Implementation: 0x105afbcc0

// -[SCDiscoverFeedViewController setDiscoverFeedManagementTooltip:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbcd0

// -[SCDiscoverFeedViewController notificationPermissionRequest]
// Type encoding: @16@0:8
// Implementation: 0x105afbd10

// -[SCDiscoverFeedViewController setNotificationPermissionRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbd20

// -[SCDiscoverFeedViewController notificationOSSettingsRetriever]
// Type encoding: @16@0:8
// Implementation: 0x105afbd60

// -[SCDiscoverFeedViewController setNotificationOSSettingsRetriever:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbd70

// -[SCDiscoverFeedViewController bitmojiAvatarProvider]
// Type encoding: @16@0:8
// Implementation: 0x105afbdb0

// -[SCDiscoverFeedViewController setBitmojiAvatarProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbdc0

// -[SCDiscoverFeedViewController snapchatterSyncDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x105afbe00

// -[SCDiscoverFeedViewController setSnapchatterSyncDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbe10

// -[SCDiscoverFeedViewController bitmojiImageFetcher]
// Type encoding: @16@0:8
// Implementation: 0x105afbe50

// -[SCDiscoverFeedViewController setBitmojiImageFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbe60

// -[SCDiscoverFeedViewController snapProServices]
// Type encoding: @16@0:8
// Implementation: 0x105afbea0

// -[SCDiscoverFeedViewController setSnapProServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbec0

// -[SCDiscoverFeedViewController snapchatterServices]
// Type encoding: @16@0:8
// Implementation: 0x105afbed4

// -[SCDiscoverFeedViewController setSnapchatterServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbef4

// -[SCDiscoverFeedViewController creatorSettingsService]
// Type encoding: @16@0:8
// Implementation: 0x105afbf08

// -[SCDiscoverFeedViewController setCreatorSettingsService:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbf28

// -[SCDiscoverFeedViewController impalaProfilePresenter]
// Type encoding: @16@0:8
// Implementation: 0x105afbf3c

// -[SCDiscoverFeedViewController setImpalaProfilePresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbf4c

// -[SCDiscoverFeedViewController circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x105afbf8c

// -[SCDiscoverFeedViewController grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x105afbf9c

// -[SCDiscoverFeedViewController storiesConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x105afbfac

// -[SCDiscoverFeedViewController feedPageViewQueue]
// Type encoding: @16@0:8
// Implementation: 0x105afbfbc

// -[SCDiscoverFeedViewController setFeedPageViewQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afbfcc

// -[SCDiscoverFeedViewController uniqueStoriesVisibleBySection]
// Type encoding: @16@0:8
// Implementation: 0x105afc00c

// -[SCDiscoverFeedViewController setUniqueStoriesVisibleBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc01c

// -[SCDiscoverFeedViewController uniqueStoriesVisibleWithThumbnailVisibleBySection]
// Type encoding: @16@0:8
// Implementation: 0x105afc05c

// -[SCDiscoverFeedViewController setUniqueStoriesVisibleWithThumbnailVisibleBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc06c

// -[SCDiscoverFeedViewController uniqueMyStoriesVisible]
// Type encoding: @16@0:8
// Implementation: 0x105afc0ac

// -[SCDiscoverFeedViewController setUniqueMyStoriesVisible:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc0bc

// -[SCDiscoverFeedViewController uniqueMyStoriesVisibleWithThumbnailVisible]
// Type encoding: @16@0:8
// Implementation: 0x105afc0fc

// -[SCDiscoverFeedViewController setUniqueMyStoriesVisibleWithThumbnailVisible:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc10c

// -[SCDiscoverFeedViewController scrolledSections]
// Type encoding: @16@0:8
// Implementation: 0x105afc14c

// -[SCDiscoverFeedViewController setScrolledSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc15c

// -[SCDiscoverFeedViewController visibleSpinnersCountBySection]
// Type encoding: @16@0:8
// Implementation: 0x105afc19c

// -[SCDiscoverFeedViewController setVisibleSpinnersCountBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc1ac

// -[SCDiscoverFeedViewController spinnerVisibleOnLeaveBySection]
// Type encoding: @16@0:8
// Implementation: 0x105afc1ec

// -[SCDiscoverFeedViewController setSpinnerVisibleOnLeaveBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc1fc

// -[SCDiscoverFeedViewController numTotalFriendStoriesViewed]
// Type encoding: q16@0:8
// Implementation: 0x105afc23c

// -[SCDiscoverFeedViewController setNumTotalFriendStoriesViewed:]
// Type encoding: v24@0:8q16
// Implementation: 0x105afc24c

// -[SCDiscoverFeedViewController numTotalNonFriendStoriesViewed]
// Type encoding: q16@0:8
// Implementation: 0x105afc25c

// -[SCDiscoverFeedViewController setNumTotalNonFriendStoriesViewed:]
// Type encoding: v24@0:8q16
// Implementation: 0x105afc26c

// -[SCDiscoverFeedViewController renderedTimestampBySection]
// Type encoding: @16@0:8
// Implementation: 0x105afc27c

// -[SCDiscoverFeedViewController setRenderedTimestampBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc28c

// -[SCDiscoverFeedViewController firstScrollTimestampBySection]
// Type encoding: @16@0:8
// Implementation: 0x105afc2cc

// -[SCDiscoverFeedViewController setFirstScrollTimestampBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc2dc

// -[SCDiscoverFeedViewController firstViewTimestampBySection]
// Type encoding: @16@0:8
// Implementation: 0x105afc31c

// -[SCDiscoverFeedViewController setFirstViewTimestampBySection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc32c

// -[SCDiscoverFeedViewController onScrollAnimator]
// Type encoding: @16@0:8
// Implementation: 0x105afc36c

// -[SCDiscoverFeedViewController setOnScrollAnimator:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc37c

// -[SCDiscoverFeedViewController isBroccoliEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105afc3bc

// -[SCDiscoverFeedViewController setIsBroccoliEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105afc3cc

// -[SCDiscoverFeedViewController customAppThemeProvider]
// Type encoding: @16@0:8
// Implementation: 0x105afc3dc

// -[SCDiscoverFeedViewController setCustomAppThemeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc3ec

// -[SCDiscoverFeedViewController presentCreatorSubscriptionsBlock]
// Type encoding: @?16@0:8
// Implementation: 0x105afc42c

// -[SCDiscoverFeedViewController setPresentCreatorSubscriptionsBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105afc43c

// -[SCDiscoverFeedViewController featureSettingsService]
// Type encoding: @16@0:8
// Implementation: 0x105afc448

// -[SCDiscoverFeedViewController setFeatureSettingsService:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc458

// -[SCDiscoverFeedViewController storiesSyncNetworkRequester]
// Type encoding: @16@0:8
// Implementation: 0x105afc498

// -[SCDiscoverFeedViewController setStoriesSyncNetworkRequester:]
// Type encoding: v24@0:8@16
// Implementation: 0x105afc4a8

// -[SCDiscoverFeedViewController enableDiscoverSpinnerLoggingFPV]
// Type encoding: B16@0:8
// Implementation: 0x105afc4e8

// -[SCDiscoverFeedViewController setEnableDiscoverSpinnerLoggingFPV:]
// Type encoding: v20@0:8B16
// Implementation: 0x105afc4f8

// -[SCDiscoverFeedViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105afc508

// +[SCDiscoverFeedViewController announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105af1dc8

@end
