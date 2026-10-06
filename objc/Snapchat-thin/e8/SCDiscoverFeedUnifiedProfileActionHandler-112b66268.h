// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedUnifiedProfileActionHandler
// Superclass: NSObject
// Address: 0x112b66268

@interface SCDiscoverFeedUnifiedProfileActionHandler

// Property: delegate; attributes: T@"<SCDiscoverFeedUnifiedProfileActionHandlerDelegate>",W,N,V_delegate
// Property: customStatusBarStyleContextController; attributes: T@"<SCCustomStatusBarStyleContextController>",W,N,V_customStatusBarStyleContextController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCDiscoverFeedUnifiedProfileActionHandler addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107993cbc

// -[SCDiscoverFeedUnifiedProfileActionHandler removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107993cc4

// -[SCDiscoverFeedUnifiedProfileActionHandler initWithUserSession:circumstanceEngine:navigationDelegate:storiesGrapheneMetricsEmitter:impalaProfilePresentHandler:creatorSettingsDataMutator:lazyDiscoverFeedDataMutator:lazyDiscoverFeedInteractionHistoryManager:lazyNotificationOptInRequestManager:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedEventsLogger:lazyBitmojiImageFetcher:lazyBitmojiFriendAvatarProvider:lazyBitmojiAvatarProvider:lazySnapchattersDataFetcher:lazySnapchattersDataMutator:lazySnapchattersDataTracker:lazyAdConfigProvider:adConfigProvider:lazyAdReportPromotedStoryTileEventTrackerProvider:lazyImageDownloader:lazyUserSegmentsProvider:lazyOffPlatformLinkGenerationService:promotedStoryShareScopeExposer:promotedStoryShareScopeServices:promotedStoryReportScopeExposer:promotedStoryReportScopeServices:promotedStoryAdInfoScopeExposer:promotedStoryAdInfoScopeServices:promotedStoryHideScopeExposer:promotedStoryHideScopeServices:shareFriendScopeExposer:safetyReportScopeExposer:deeplinkSendToScopeExposer:adReportScopeExposer:snapTokenProvider:mixerEndpointManager:subscriptionWorkflow:alertPresenterFactory:grapheneRegistry:applicationLifecycleEvents:storiesConfigProvider:networkConnectivityMonitor:dsaExplainerScopeExposer:dsaExplainerScopeServices:contentBlocker:adRenderDataParser:imageFetchingService:customAppThemeProvider:locationProvider:]
// Type encoding: @416@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408
// Implementation: 0x107993ccc

// -[SCDiscoverFeedUnifiedProfileActionHandler _dismissAnyUnifiedProfilePage]
// Type encoding: v16@0:8
// Implementation: 0x1079947f0

// -[SCDiscoverFeedUnifiedProfileActionHandler _appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x107994808

// -[SCDiscoverFeedUnifiedProfileActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10799480c

// -[SCDiscoverFeedUnifiedProfileActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107994c80

// -[SCDiscoverFeedUnifiedProfileActionHandler _presentPromotedStoryActionSheetForStory:sectionKey:triggeringSection:coverImage:]
// Type encoding: B48@0:8@16@24q32@40
// Implementation: 0x107995be0

// -[SCDiscoverFeedUnifiedProfileActionHandler _presentSpotlightActionSheetForStory:sectionKey:triggeringSection:]
// Type encoding: B40@0:8@16@24q32
// Implementation: 0x107995eb4

// -[SCDiscoverFeedUnifiedProfileActionHandler _presentPublisherActionSheetForStory:sectionKey:triggeringSection:presentActionIdentifier:]
// Type encoding: B48@0:8@16@24q32@40
// Implementation: 0x1079960ec

// -[SCDiscoverFeedUnifiedProfileActionHandler _presentPublicUserActionSheetForStory:sectionKey:triggeringSection:]
// Type encoding: B40@0:8@16@24q32
// Implementation: 0x107996850

// -[SCDiscoverFeedUnifiedProfileActionHandler _subscribeStateWithDiscoverFeedStory:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107996ff8

// -[SCDiscoverFeedUnifiedProfileActionHandler _notificationStateWithDiscoverFeedStory:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107997050

// -[SCDiscoverFeedUnifiedProfileActionHandler _handleSubscribeEventForStoryDedupeFp:sectionKey:subscribeStateNum:story:pageType:]
// Type encoding: v56@0:8@16@24@32@40q48
// Implementation: 0x107997074

// -[SCDiscoverFeedUnifiedProfileActionHandler unifiedActionMenuPresenterDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107997318

// -[SCDiscoverFeedUnifiedProfileActionHandler _logSubscribeForStory:sectionKey:subscribeState:pageType:]
// Type encoding: v48@0:8@16@24Q32q40
// Implementation: 0x107997328

// -[SCDiscoverFeedUnifiedProfileActionHandler _logSendForStoryDedupeFp:sectionKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107997824

// -[SCDiscoverFeedUnifiedProfileActionHandler _logHideWithStory:sectionKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107997948

// -[SCDiscoverFeedUnifiedProfileActionHandler _logReportForStoryDedupeFp:sectionKey:reasonId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107997a24

// -[SCDiscoverFeedUnifiedProfileActionHandler _logNotificationForStoryDedupeFp:sectionKey:notificationStateNum:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107997cc0

// -[SCDiscoverFeedUnifiedProfileActionHandler _logViewProfileForStoryDedupeFp:sectionKey:baseView:storyLoggingInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107997e24

// -[SCDiscoverFeedUnifiedProfileActionHandler _logRecommendedAccountsDedupeFp:sectionKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10799822c

// -[SCDiscoverFeedUnifiedProfileActionHandler _logDSAExplainerTapActionWithSectionKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107998534

// -[SCDiscoverFeedUnifiedProfileActionHandler _logBlockUserEventWithStory:sectionKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079985f8

// -[SCDiscoverFeedUnifiedProfileActionHandler _createActionSheetActionHandlerWithStory:sectionKey:subscribeStatusManager:notificationStatusManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1079986d0

// -[SCDiscoverFeedUnifiedProfileActionHandler _makeLongPressActionPayloadForStory:sectionKey:actionIdentifier:triggeringSection:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x1079988c8

// -[SCDiscoverFeedUnifiedProfileActionHandler initializeSubscriptionStatusManager:withStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079988e0

// -[SCDiscoverFeedUnifiedProfileActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x107998954

// -[SCDiscoverFeedUnifiedProfileActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10799896c

// -[SCDiscoverFeedUnifiedProfileActionHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x107998978

// -[SCDiscoverFeedUnifiedProfileActionHandler setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107998990

// -[SCDiscoverFeedUnifiedProfileActionHandler customStatusBarStyleContextController]
// Type encoding: @16@0:8
// Implementation: 0x10799899c

// -[SCDiscoverFeedUnifiedProfileActionHandler setCustomStatusBarStyleContextController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079989b4

// -[SCDiscoverFeedUnifiedProfileActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079989c0

// +[SCDiscoverFeedUnifiedProfileActionHandler announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107993cb0

@end
