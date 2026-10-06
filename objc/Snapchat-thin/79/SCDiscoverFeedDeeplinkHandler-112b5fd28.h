// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedDeeplinkHandler
// Superclass: NSObject
// Address: 0x112b5fd28

@interface SCDiscoverFeedDeeplinkHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: navigationServices; attributes: T@"_TtC20SCNavigationServices20SCNavigationServices",W,N,V_navigationServices
// Property: presentingViewController; attributes: T@"UIViewController",W,N,V_presentingViewController
// Property: adPluginProvider; attributes: T@"SCLazy",&,N,V_adPluginProvider

// -[SCDiscoverFeedDeeplinkHandler initWithUserSession:navigationServices:circumstanceEngine:insertionServices:contextOperaPluginProvider:commerceOperaAttachmentPluginProvider:commerceOperaScreenshopPluginProvider:legacyStoriesTooltipsService:snapchattersSynchronousDataFetcher:contentDelivery:creatorSettingsFetcher:lazyDiscoverFeedEventsController:lazyDiscoverFeedDataFetcher:notificationPool:friendProfileScopeExposer:grapheneRegistry:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:bitmojiImageFetcher:userBlizzardLogger:storiesReadReceiptCoordinator:discoverPublisherPagePropertiesManager:storiesMediaCoordinating:snapchattersDataFetcher:snapchatterPublicInfoFetcher:adConfigProvider:remoteStoriesDataProvider:storiesCachedReadReceiptViewStateProvider:mixerNetworkRequester:impalaLegacyServices:snapDocConfigurer:businessProfilesPresenterScopeExposer:playbackMediaPrefetcher:impalaOperaLayerViewControllerProviderCreator:offPlatformLinkGenerationService:grapheneServices:creatorSettingsMutator:creatorSettingsTracker:legacyLongformMediaUrlProvider:imageDownloader:snapDocMediaResolver:notificationsPermissionRequester:notificationOSSettingsRetriever:networkConnectivityMonitorServices:locationProvider:legacyMediaFetcher:impalaPublicProfilePresentationHandler:lazyDiscoverFeedInteractionHistoryManager:sendToScopeLauncher:discoverFeedDataMutator:discoverFeedNotificationOptInRequestManager:snapVideoFilterFactory:previewVideoProviderServices:deeplinkSendToScopeExposer:sendToScopeExposer:premiumStoryShareSender:premiumStoryConversationResolver:adPluginProvider:adInternalErrorMetricsManager:safetyReportScopeExposer:contentObjectResolver:externalLinkSendingService:safeBrowsingAPI:operaSessionScopeExposer:operaSessionScopeServices:grapheneMetricsEmitter:spotlightRepliesScopeExposer:saveFriendStoryOperaPluginProvider:subscriptionWorkflowStarter:bloopsReportScopeExposer:snapTokenProvider:contentPlaybackScopeExposer:contentProductPlaybackScopeServices:offPlatformShareServices:storiesExperimentServices:storiesMetricServices:repliesViewCountManager:addFriendSheetScopeExposer:addFriendSheetScopeServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:adRenderDataParser:discoverFeedFriendStoriesDataCoordinator:discoverFeedActionHandler:storiesSyncNetworkRequester:countryCodeProvider:discoverBlizzardLogger:pageLauncher:]
// Type encoding: @720@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472@480@488@496@504@512@520@528@536@544@552@560@568@576@584@592@600@608@616@624@632@640@648@656@664@672@680@688@696@704@712
// Implementation: 0x1071ba1f8

// -[SCDiscoverFeedDeeplinkHandler initWithUserSession:navigationServices:circumstanceEngine:insertionServices:contextOperaPluginProvider:commerceOperaPluginProvider:legacyStoriesTooltipsService:snapchattersSynchronousDataFetcher:contentDelivery:creatorSettingsFetcher:lazyDiscoverFeedEventsController:lazyDiscoverFeedDataFetcher:notificationPool:grapheneRegistry:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:bitmojiImageFetcher:userBlizzardLogger:storiesReadReceiptCoordinator:discoverPublisherPagePropertiesManager:storiesMediaCoordinating:snapchattersDataFetcher:adConfigProvider:remoteStoriesDataProvider:storiesCachedReadReceiptViewStateProvider:mixerNetworkRequester:impalaLegacyServices:snapDocConfigurer:businessProfilesPresenterScopeExposer:playbackMediaPrefetcher:impalaOperaLayerViewControllerProviderCreator:offPlatformLinkGenerationService:grapheneServices:creatorSettingsMutator:creatorSettingsTracker:legacyLongformMediaUrlProvider:imageDownloader:snapDocMediaResolver:notificationsPermissionRequester:notificationOSSettingsRetriever:networkConnectivityMonitorServices:locationProvider:legacyMediaFetcher:impalaPublicProfilePresentationHandler:lazyDiscoverFeedInteractionHistoryManager:sendToScopeLauncher:discoverFeedDataMutator:discoverFeedNotificationOptInRequestManager:snapVideoFilterFactory:previewVideoProviderServices:deeplinkSendToScopeExposer:sendToScopeExposer:premiumStoryShareSender:premiumStoryConversationResolver:adPluginProvider:adInternalErrorMetricsManager:safetyReportScopeExposer:contentObjectResolver:externalLinkSendingService:safeBrowsingAPI:operaSessionScopeExposer:operaSessionScopeServices:grapheneMetricsEmitter:bloopsReportScopeExposer:snapTokenProvider:contentPlaybackScopeExposer:contentProductPlaybackScopeServices:offPlatformShareServices:storiesExperimentServices:storiesMetricServices:repliesViewCountManager:addFriendSheetScopeExposer:addFriendSheetScopeServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:adRenderDataParser:discoverFeedFriendStoriesDataCoordinator:discoverFeedActionHandler:storiesSyncNetworkRequester:countryCodeProvider:discoverBlizzardLogger:pageLauncher:]
// Type encoding: @672@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472@480@488@496@504@512@520@528@536@544@552@560@568@576@584@592@600@608@616@624@632@640@648@656@664
// Implementation: 0x1071bb290

// -[SCDiscoverFeedDeeplinkHandler presentDeeplinkURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071bb484

// -[SCDiscoverFeedDeeplinkHandler isPresentingStory]
// Type encoding: B16@0:8
// Implementation: 0x1071bb5ac

// -[SCDiscoverFeedDeeplinkHandler _processPublicStoriesDeepLinkWithURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071bb5b4

// -[SCDiscoverFeedDeeplinkHandler _processFriendStoriesDeepLinkWithURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071bb768

// -[SCDiscoverFeedDeeplinkHandler _processDiscoverStoriesDeeplinkWithURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071bb870

// -[SCDiscoverFeedDeeplinkHandler _processOurStoryDeepLinkWithURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071bb9b0

// -[SCDiscoverFeedDeeplinkHandler _processPublisherStoriesDeepLinkWithURL:additionalInfo:shouldPresentingProfile:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1071bbc50

// -[SCDiscoverFeedDeeplinkHandler operaPresenterWillBeginPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071bbdc0

// -[SCDiscoverFeedDeeplinkHandler operaPresenterDidFinishPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071bbdc4

// -[SCDiscoverFeedDeeplinkHandler operaPresenterWillBeginDismissing:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071bbe20

// -[SCDiscoverFeedDeeplinkHandler operaPresenterDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071bbe24

// -[SCDiscoverFeedDeeplinkHandler operaPresenterWillBeginAnimatingToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071bbe28

// -[SCDiscoverFeedDeeplinkHandler operaPresenterDidFailToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071bbe2c

// -[SCDiscoverFeedDeeplinkHandler operaPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071bbe30

// -[SCDiscoverFeedDeeplinkHandler operaPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071bbf2c

// -[SCDiscoverFeedDeeplinkHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071bbf68

// -[SCDiscoverFeedDeeplinkHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071bbf6c

// -[SCDiscoverFeedDeeplinkHandler navigationServices]
// Type encoding: @16@0:8
// Implementation: 0x1071bbf70

// -[SCDiscoverFeedDeeplinkHandler setNavigationServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071bbf88

// -[SCDiscoverFeedDeeplinkHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x1071bbf94

// -[SCDiscoverFeedDeeplinkHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071bbfac

// -[SCDiscoverFeedDeeplinkHandler adPluginProvider]
// Type encoding: @16@0:8
// Implementation: 0x1071bbfb8

// -[SCDiscoverFeedDeeplinkHandler setAdPluginProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071bbfc0

// -[SCDiscoverFeedDeeplinkHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071bbff0

@end
