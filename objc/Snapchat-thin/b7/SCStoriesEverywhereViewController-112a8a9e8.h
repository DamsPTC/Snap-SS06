// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesEverywhereViewController
// Superclass: UIViewController
// Address: 0x112a8a9e8

@interface SCStoriesEverywhereViewController

// Property: contentCollectionView; attributes: T@"UICollectionView",&,N,V_contentCollectionView
// Property: queryResultController; attributes: T@"SCCollectionViewQueryResultController",&,N,V_queryResultController
// Property: isPresentingUnderChat; attributes: TB,N,V_isPresentingUnderChat
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCStoriesEverywhereViewController getImpressionItemsLoggingDictWithPageSessionId:pageSessionStartTs:pageType:]
// Type encoding: @40@0:8@16d24q32
// Implementation: 0x105ad9eec

// -[SCStoriesEverywhereViewController _updateImpressItemForCollectionViewCell:frame:indexPath:itemPos:date:pageSessionId:pageSessionStartTs:pageType:carouselRowNum:]
// Type encoding: @112@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@56q64@72@80d88q96@104
// Implementation: 0x105ada4f4

// -[SCStoriesEverywhereViewController _impressionViewItemWithIdentifier:frame:date:itemPos:hasVideoThumbnail:tileAutoPlayed:sectionIdentifier:hasReplayOverlay:hasCTA:storyLoggingInfo:pageSessionId:pageSessionStartTs:pageType:carouselRowNum:]
// Type encoding: @136@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@56q64B72B76@80B88B92@96@104d112q120@128
// Implementation: 0x105ada7f4

// -[SCStoriesEverywhereViewController initWithPresentingViewController:circumstanceEngine:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedActionHandler:sectionExtensionServices:storiesPrefetcher:scopeDelegate:storiesEverywhereConfiguration:discoverFeedQueryCoordinator:lazyDiscoverFeedEventsController:friendStoriesReplayManager:commandObservable:asyncQueueProvider:storiesConfigProvider:sectionDataProvider:notificationHandler:eventListenerOverride:readReceiptCoordinator:optInProvider:discoverFeedDataMutator:storiesRankingCoordinator:notificationPool:messagingExperimentService:friendsFeedViewLifecycleListener:loggingServicesEventsAnnouncer:discoverPerformanceLogging:appStartExperimentReader:friendsFeedReadyLogger:genAIDreamsService:]
// Type encoding: @256@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248
// Implementation: 0x105ada9b4

// -[SCStoriesEverywhereViewController loadViewWithFetchStories:fetchStoriesSource:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105adb128

// -[SCStoriesEverywhereViewController _dismissOpera]
// Type encoding: v16@0:8
// Implementation: 0x105adb99c

// -[SCStoriesEverywhereViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105adb9e0

// -[SCStoriesEverywhereViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105adba3c

// -[SCStoriesEverywhereViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105adbaf4

// -[SCStoriesEverywhereViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105adbb3c

// -[SCStoriesEverywhereViewController viewDidPartiallyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x105adbcbc

// -[SCStoriesEverywhereViewController applicationDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x105adbcd4

// -[SCStoriesEverywhereViewController _applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x105adbdd8

// -[SCStoriesEverywhereViewController _setupQueryResultController]
// Type encoding: v16@0:8
// Implementation: 0x105adbe4c

// -[SCStoriesEverywhereViewController _fetchStoriesWithDiskCacheLoadedWithQuerySource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105adc054

// -[SCStoriesEverywhereViewController _fetchStoriesForAllSectionsWithQuerySource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105adc2fc

// -[SCStoriesEverywhereViewController _fetchStoriesForAllSectionsWithQuerySource:sectionExtensionServices:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105adc44c

// -[SCStoriesEverywhereViewController _onBecomeVisible]
// Type encoding: v16@0:8
// Implementation: 0x105adc560

// -[SCStoriesEverywhereViewController _onNoLongerVisible]
// Type encoding: v16@0:8
// Implementation: 0x105adc57c

// -[SCStoriesEverywhereViewController didTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105adc5d4

// -[SCStoriesEverywhereViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105adc714

// -[SCStoriesEverywhereViewController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x105adc71c

// -[SCStoriesEverywhereViewController operaSessionWillBegin]
// Type encoding: v16@0:8
// Implementation: 0x105adc740

// -[SCStoriesEverywhereViewController operaSessionDidBeginWithOperaPresenter:playbackDataProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105adc7b8

// -[SCStoriesEverywhereViewController operaSessionDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x105adc858

// -[SCStoriesEverywhereViewController operaSessionWillReachToEndOfPlaylistWithFeedType:]
// Type encoding: v24@0:8@16
// Implementation: 0x105adc85c

// -[SCStoriesEverywhereViewController didStartToDisplayStoryWithIndexPath:feedType:groupDataModel:actionHandler:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x105adc860

// -[SCStoriesEverywhereViewController didStartToDismissStoryAtIndexPath:actionHandler:shouldSkipDismissBaseViewUpdate:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105adc920

// -[SCStoriesEverywhereViewController didDismissStory]
// Type encoding: v16@0:8
// Implementation: 0x105adccd0

// -[SCStoriesEverywhereViewController didTearDownStory]
// Type encoding: v16@0:8
// Implementation: 0x105adcd4c

// -[SCStoriesEverywhereViewController discoverQueryCoordinator:didReceiveServerResponseForQuery:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105adcdc4

// -[SCStoriesEverywhereViewController discoverQueryCoordinator:didFailForQuery:error:statusCodeToDisplay:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105adcdc8

// -[SCStoriesEverywhereViewController discoverQueryCoordinator:didFinishSavingServerResponseToCacheForQuery:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105adcf94

// -[SCStoriesEverywhereViewController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105adcfa8

// -[SCStoriesEverywhereViewController searchQueryResultControllerShouldReloadFreshResult:]
// Type encoding: B24@0:8@16
// Implementation: 0x105add324

// -[SCStoriesEverywhereViewController presentingViewControllerForSearchQueryResultController:]
// Type encoding: @24@0:8@16
// Implementation: 0x105add334

// -[SCStoriesEverywhereViewController searchQueryResultController:willUpdateResultForQuery:fromQuery:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105add338

// -[SCStoriesEverywhereViewController searchQueryResultControllerDidUpdateQueryResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105add33c

// -[SCStoriesEverywhereViewController searchQueryResultControllerDidSkipUpdateQueryResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105add360

// -[SCStoriesEverywhereViewController _didFinishLoading]
// Type encoding: v16@0:8
// Implementation: 0x105add364

// -[SCStoriesEverywhereViewController _updateViewOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x105add458

// -[SCStoriesEverywhereViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x105add550

// -[SCStoriesEverywhereViewController _onCommand:]
// Type encoding: v24@0:8@16
// Implementation: 0x105add558

// -[SCStoriesEverywhereViewController _handlePullToRefreshWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105add6e8

// -[SCStoriesEverywhereViewController _announceSectionOrder]
// Type encoding: v16@0:8
// Implementation: 0x105add7b4

// -[SCStoriesEverywhereViewController _logImpressionsOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x105add9a4

// -[SCStoriesEverywhereViewController _announceEventOnPerformerWithEventName:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105adda90

// -[SCStoriesEverywhereViewController _announceEvent:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105addbec

// -[SCStoriesEverywhereViewController _resetCarouselSectionsOffset]
// Type encoding: v16@0:8
// Implementation: 0x105addd34

// -[SCStoriesEverywhereViewController _prefetchFirstSnapMediaForVisibleFriendStoriesIfNeccesary]
// Type encoding: v16@0:8
// Implementation: 0x105added4

// -[SCStoriesEverywhereViewController _logFeedPageUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105addf28

// -[SCStoriesEverywhereViewController _saveStoriesToDiskIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105ade0bc

// -[SCStoriesEverywhereViewController _setClientRerankThresholdTimer]
// Type encoding: v16@0:8
// Implementation: 0x105ade100

// -[SCStoriesEverywhereViewController _performClientRerank]
// Type encoding: v16@0:8
// Implementation: 0x105ade26c

// -[SCStoriesEverywhereViewController _handleFriendsFeedFeedPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ade414

// -[SCStoriesEverywhereViewController _logFeedPageOpenEventWithChatFeedSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ade5fc

// -[SCStoriesEverywhereViewController _logFeedPageViewEventWithChatFeedSessionId:chatFeedLoggingDict:hasAdBillboard:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105ade8d8

// -[SCStoriesEverywhereViewController _updateNumStoriesAndThumbnailsVisibleWithUserScrolled:leavingFeed:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105adebfc

// -[SCStoriesEverywhereViewController _logLatencyForStoryCellWillDisplay:]
// Type encoding: v24@0:8@16
// Implementation: 0x105adec24

// -[SCStoriesEverywhereViewController isPresentingUnderChat]
// Type encoding: B16@0:8
// Implementation: 0x105aded34

// -[SCStoriesEverywhereViewController setIsPresentingUnderChat:]
// Type encoding: v20@0:8B16
// Implementation: 0x105aded44

// -[SCStoriesEverywhereViewController contentCollectionView]
// Type encoding: @16@0:8
// Implementation: 0x105aded54

// -[SCStoriesEverywhereViewController setContentCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aded64

// -[SCStoriesEverywhereViewController queryResultController]
// Type encoding: @16@0:8
// Implementation: 0x105adeda4

// -[SCStoriesEverywhereViewController setQueryResultController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105adedb4

// -[SCStoriesEverywhereViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105adedf4

// +[SCStoriesEverywhereViewController announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105adc048

@end
