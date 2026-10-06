// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedSectionHeaderActionHandler
// Superclass: NSObject
// Address: 0x112b661c8

@interface SCDiscoverFeedSectionHeaderActionHandler

// Property: customStatusBarStyleContextController; attributes: T@"<SCCustomStatusBarStyleContextController>",W,N,V_customStatusBarStyleContextController
// Property: eventAnnouncer; attributes: T@"SCEventListenerAnnouncer",R,N,V_eventAnnouncer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: storyPositionProvider; attributes: T@"<SCDiscoverFeedStoryPositionProviding>",&,N,V_storyPositionProvider
// Property: operaViewingHandler; attributes: T@"<SCDiscoverFeedOperaViewingHandling>",W,N,V_operaViewingHandler
// Property: currentPageSessionId; attributes: T@"NSString",C,N,V_currentPageSessionId
// Property: delegate; attributes: T@"<SCDiscoverFeedActionHandlerDelegate>",W,N,V_delegate
// Property: pageType; attributes: Tq,N,V_pageType
// Property: isExpandedStoryFeedController; attributes: TB,N,V_isExpandedStoryFeedController
// Property: shouldHandleAction; attributes: TB,N,V_shouldHandleAction
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCDiscoverFeedSectionHeaderActionHandler addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10799177c

// -[SCDiscoverFeedSectionHeaderActionHandler removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107991784

// -[SCDiscoverFeedSectionHeaderActionHandler initWithUserSession:discoverFeedActionHandler:eventsController:endpointManager:circumstanceEngine:snapTokenProvider:readReceiptCoordinator:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedDataMutator:snapchattersSynchronousDataFetcher:sectionExtensionServices:storiesPrefetcher:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:storiesSnapReadReceiptLogger:grapheneRegistry:adConfigProvider:sectionsCoordinator:storiesMixerNetworkRequester:lazyUserRegistrationInfoProvider:lazyUserBirthdayProvider:promotedStoriesLogger:snapchattersDataFetcher:addToStoryCameraScopeExposer:addToStoryCameraScopeBuilder:imageDownloader:isBloopsEnabled:imageSourceProvider:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:networkConnectivityMonitor:rtusClientCacheManager:unifiedGRPCClientFactory:dpaConfigProvider:adRenderDataParser:notificationPool:customAppThemeProvider:storiesGrapheneMetricsEmitter:discoverCrashLogger:locationProvider:]
// Type encoding: @352@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344
// Implementation: 0x10799178c

// -[SCDiscoverFeedSectionHeaderActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107991fbc

// -[SCDiscoverFeedSectionHeaderActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107992594

// -[SCDiscoverFeedSectionHeaderActionHandler updateDismissBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079925a0

// -[SCDiscoverFeedSectionHeaderActionHandler timeBeforeReturningToCamera]
// Type encoding: d16@0:8
// Implementation: 0x1079925a4

// -[SCDiscoverFeedSectionHeaderActionHandler pausePlayback]
// Type encoding: v16@0:8
// Implementation: 0x1079925ac

// -[SCDiscoverFeedSectionHeaderActionHandler resumePlayback]
// Type encoding: v16@0:8
// Implementation: 0x1079925b0

// -[SCDiscoverFeedSectionHeaderActionHandler operaModalPresentationDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x1079925b4

// -[SCDiscoverFeedSectionHeaderActionHandler operaModalDismissalDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x1079925b8

// -[SCDiscoverFeedSectionHeaderActionHandler discoverFeedDebugViewControllerNeedsToDismiss:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1079925bc

// -[SCDiscoverFeedSectionHeaderActionHandler captureWorkflowDidDismissWithDidSendSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x1079925f4

// -[SCDiscoverFeedSectionHeaderActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107992620

// -[SCDiscoverFeedSectionHeaderActionHandler didDismissExpandedStoryFeedViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079926a8

// -[SCDiscoverFeedSectionHeaderActionHandler didPressBackButtonOnExpandedStoryFeedViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107992704

// -[SCDiscoverFeedSectionHeaderActionHandler _triggerFeedPageCloseForPresentingViewController]
// Type encoding: v16@0:8
// Implementation: 0x107992708

// -[SCDiscoverFeedSectionHeaderActionHandler _createExpandedViewControllerForFeedType:actionModel:pageType:pageTitle:]
// Type encoding: v44@0:8i16@20Q28@36
// Implementation: 0x107992764

// -[SCDiscoverFeedSectionHeaderActionHandler _showHideAlertForSection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107992954

// -[SCDiscoverFeedSectionHeaderActionHandler _hideSection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107992c34

// -[SCDiscoverFeedSectionHeaderActionHandler _submitHideSectionRequestWithToken:forFeedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107992e34

// -[SCDiscoverFeedSectionHeaderActionHandler _logHideSectionForSection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107992f1c

// -[SCDiscoverFeedSectionHeaderActionHandler _logFeedItemActionWithActionDataModel:actionType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107993004

// -[SCDiscoverFeedSectionHeaderActionHandler _generateAndPresentDebugViewControllerWithDebugInfo:feedType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079930f8

// -[SCDiscoverFeedSectionHeaderActionHandler _presentDebugViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10799328c

// -[SCDiscoverFeedSectionHeaderActionHandler dismissCameraScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079932dc

// -[SCDiscoverFeedSectionHeaderActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x107993324

// -[SCDiscoverFeedSectionHeaderActionHandler storyPositionProvider]
// Type encoding: @16@0:8
// Implementation: 0x10799333c

// -[SCDiscoverFeedSectionHeaderActionHandler setStoryPositionProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107993344

// -[SCDiscoverFeedSectionHeaderActionHandler operaViewingHandler]
// Type encoding: @16@0:8
// Implementation: 0x107993374

// -[SCDiscoverFeedSectionHeaderActionHandler setOperaViewingHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10799338c

// -[SCDiscoverFeedSectionHeaderActionHandler currentPageSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107993398

// -[SCDiscoverFeedSectionHeaderActionHandler setCurrentPageSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079933a0

// -[SCDiscoverFeedSectionHeaderActionHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x1079933a8

// -[SCDiscoverFeedSectionHeaderActionHandler setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079933c0

// -[SCDiscoverFeedSectionHeaderActionHandler shouldHandleAction]
// Type encoding: B16@0:8
// Implementation: 0x1079933cc

// -[SCDiscoverFeedSectionHeaderActionHandler setShouldHandleAction:]
// Type encoding: v20@0:8B16
// Implementation: 0x1079933d4

// -[SCDiscoverFeedSectionHeaderActionHandler pageType]
// Type encoding: q16@0:8
// Implementation: 0x1079933dc

// -[SCDiscoverFeedSectionHeaderActionHandler setPageType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1079933e4

// -[SCDiscoverFeedSectionHeaderActionHandler isExpandedStoryFeedController]
// Type encoding: B16@0:8
// Implementation: 0x1079933ec

// -[SCDiscoverFeedSectionHeaderActionHandler setIsExpandedStoryFeedController:]
// Type encoding: v20@0:8B16
// Implementation: 0x1079933f4

// -[SCDiscoverFeedSectionHeaderActionHandler customStatusBarStyleContextController]
// Type encoding: @16@0:8
// Implementation: 0x1079933fc

// -[SCDiscoverFeedSectionHeaderActionHandler setCustomStatusBarStyleContextController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107993414

// -[SCDiscoverFeedSectionHeaderActionHandler eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x107993420

// -[SCDiscoverFeedSectionHeaderActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107993428

// +[SCDiscoverFeedSectionHeaderActionHandler announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107991770

@end
