// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdDataSourceDependencies
// Superclass: NSObject
// Address: 0x112ade048

@interface SCAdDataSourceDependencies

// Property: operaSessionId; attributes: T@"NSNumber",R,N,V_operaSessionId
// Property: adBlizzardLogger; attributes: T@"SCAdLogger",R,N,V_adBlizzardLogger
// Property: initialAd; attributes: T@"SCAdResponse",R,N,V_initialAd
// Property: adTrackerHelper; attributes: T@"<SCAdTrackHelping>",R,N,V_adTrackerHelper
// Property: viewLocation; attributes: Tq,N,V_viewLocation
// Property: sspEnabled; attributes: TB,R,N,V_sspEnabled
// Property: grapheneRegistry; attributes: T@"SCLazy",R,N,V_grapheneRegistry
// Property: applicationPreferences; attributes: T@"SCLazy",R,N,V_applicationPreferences
// Property: userPreferences; attributes: T@"SCLazy",R,N,V_userPreferences
// Property: adConfigProvider; attributes: T@"SCLazy",R,N,V_adConfigProvider
// Property: adConfigProviderV2; attributes: T@"SCLazy",R,N,V_adConfigProviderV2
// Property: adContentDelivery; attributes: T@"SCLazy",R,N,V_adContentDelivery
// Property: adInsertionMetricsManager; attributes: T@"SCLazy",R,N,V_adInsertionMetricsManager
// Property: mediaCoordinator; attributes: T@"SCLazy",R,N,V_mediaCoordinator
// Property: mediaFetcher; attributes: T@"SCLazy",R,N,V_mediaFetcher
// Property: mediaMetricsManager; attributes: T@"SCLazy",R,N,V_mediaMetricsManager
// Property: adOpportunityLogger; attributes: T@"SCLazy",R,N,V_adOpportunityLogger
// Property: adOpportunityLoggerV2; attributes: T@"SCLazy",R,N,V_adOpportunityLoggerV2
// Property: adPodManager; attributes: T@"SCLazy",R,N,V_adPodManager
// Property: promotedStoryStateProvider; attributes: T@"SCLazy",R,N,V_promotedStoryStateProvider
// Property: adProvider; attributes: T@"SCLazy",R,N,V_adProvider
// Property: trackMetricsManager; attributes: T@"SCLazy",R,N,V_trackMetricsManager
// Property: adWebViewPrefetchHintsManager; attributes: T@"SCLazy",R,N,V_adWebViewPrefetchHintsManager
// Property: adWebViewPreloadManager; attributes: T@"SCLazy",R,N,V_adWebViewPreloadManager
// Property: adWebViewAssetPrefetcher; attributes: T@"SCLazy",R,N,V_adWebViewAssetPrefetcher
// Property: discoverFeedDataFetcher; attributes: T@"SCLazy",R,N,V_discoverFeedDataFetcher
// Property: onDemandResourceDownloader; attributes: T@"SCLazy",R,N,V_onDemandResourceDownloader
// Property: imageDownloader; attributes: T@"SCLazy",R,N,V_imageDownloader
// Property: p2pDataSource; attributes: T@"SCLazy",R,N,V_p2pDataSource
// Property: playbackAssetRepository; attributes: T@"SCLazy",R,N,V_playbackAssetRepository
// Property: contentInterstitialRuleTracker; attributes: T@"SCLazy",R,N,V_contentInterstitialRuleTracker
// Property: publicStoriesInsertionRuleTracker; attributes: T@"SCLazy",R,N,V_publicStoriesInsertionRuleTracker
// Property: crossInventoryInsertionRuleTracker; attributes: T@"SCLazy",R,N,V_crossInventoryInsertionRuleTracker
// Property: adPreferencesProvider; attributes: T@"SCLazy",R,N,V_adPreferencesProvider
// Property: publicStoryContentViewHistoryCoordinator; attributes: T@"SCLazy",R,N,V_publicStoryContentViewHistoryCoordinator
// Property: adTracker; attributes: T@"SCLazy",R,N,V_adTracker
// Property: notificationPool; attributes: T@"SCLazy",R,N,V_notificationPool
// Property: operaNavigationStyle; attributes: Tq,R,N,V_operaNavigationStyle
// Property: midRollInsertionManager; attributes: T@"<SCAdInsertionManager>",R,N,V_midRollInsertionManager
// Property: unskippableAdManager; attributes: T@"SCAdUnskippableAdManager",R,N,V_unskippableAdManager
// Property: expandStateManager; attributes: T@"SCStoryAdExpandStateManager",R,N,V_expandStateManager
// Property: networkServices; attributes: T@"SCUserNetworkServices",R,N,V_networkServices
// Property: userSession; attributes: T@"SCUserSession",R,N,V_userSession
// Property: skStoreProductPrefetcher; attributes: T@"SCLazy",R,N,V_skStoreProductPrefetcher
// Property: lifecycleWatermarkMetricsManager; attributes: T@"SCLazy",R,N,V_lifecycleWatermarkMetricsManager
// Property: audioSession; attributes: T@"SCLazy",R,N,V_audioSession
// Property: contextExperimentService; attributes: T@"SCLazy",R,N,V_contextExperimentService
// Property: crashLogger; attributes: T@"SCLazy",R,N,V_crashLogger
// Property: adBrowserLifecycleService; attributes: T@"SCLazy",R,N,V_adBrowserLifecycleService
// Property: impalaLegacyServices; attributes: T@"SCImpalaLegacyServices",R,N,V_impalaLegacyServices
// Property: sharedOperaMediaManager; attributes: T@"SCLazy",R,N,V_sharedOperaMediaManager
// Property: adsOperaParser; attributes: T@"SCLazy",R,N,V_adsOperaParser
// Property: skOverlayPreloader; attributes: T@"SCLazy",R,N,V_skOverlayPreloader
// Property: internalErrorMetricsManager; attributes: T@"SCLazy",R,N,V_internalErrorMetricsManager
// Property: adPlaybackConfig; attributes: T@"_TtC15AdPlaybackScope16AdPlaybackConfig",&,N,V_adPlaybackConfig
// Property: friendStoriesDataCoordinator; attributes: T@"SCLazy",&,N,V_friendStoriesDataCoordinator
// Property: organicEngagementFetcher; attributes: T@"SCLazy",&,N,V_organicEngagementFetcher
// Property: dpaConfigProvider; attributes: T@"SCLazy",R,N,V_dpaConfigProvider
// Property: promotedStoryLogger; attributes: T@"SCLazy",R,N,V_promotedStoryLogger

// -[SCAdDataSourceDependencies initWithOperaSessionId:adBlizzardLogger:initialAd:adTrackerHelper:viewLocation:grapheneRegistry:applicationPreferences:userPreferences:adConfigProvider:adConfigProviderV2:adContentDelivery:adInsertionMetricsManager:mediaFetcher:mediaMetricsManager:adOpportunityLogger:adOpportunityLoggerV2:adPodManager:promotedStoryStateProvider:adProvider:trackMetricsManager:adWebViewPrefetchHintsManager:discoverFeedDataFetcher:onDemandResourceDownloader:p2pDataSource:contentInterstitialRuleTracker:publicStoriesInsertionRuleTracker:crossInventoryInsertionRuleTracker:adPreferencesProvider:publicStoryContentViewHistoryCoordinator:adTracker:notificationPool:operaNavigationStyle:midRollInsertionManager:unskippableAdManager:expandStateManager:networkServices:userSession:mediaCoordinator:playbackAssetRepository:skStoreProductPrefetcher:scAdWebViewPreloadManager:adWebViewAssetPrefetcher:lifecycleWatermarkMetricsManager:audioSession:contextExperimentService:crashLogger:adBrowserLifecycleService:impalaLegacyServices:adsOperaParser:skOverlayPreloader:internalErrorMetricsManager:dpaConfigProvider:promotedStoryLogger:]
// Type encoding: @440@0:8@16@24@32@40q48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256q264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432
// Implementation: 0x1064093a0

// -[SCAdDataSourceDependencies operaSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106409fe4

// -[SCAdDataSourceDependencies adBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x106409fec

// -[SCAdDataSourceDependencies initialAd]
// Type encoding: @16@0:8
// Implementation: 0x106409ff4

// -[SCAdDataSourceDependencies adTrackerHelper]
// Type encoding: @16@0:8
// Implementation: 0x106409ffc

// -[SCAdDataSourceDependencies viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x10640a004

// -[SCAdDataSourceDependencies setViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10640a00c

// -[SCAdDataSourceDependencies sspEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10640a014

// -[SCAdDataSourceDependencies grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x10640a01c

// -[SCAdDataSourceDependencies applicationPreferences]
// Type encoding: @16@0:8
// Implementation: 0x10640a024

// -[SCAdDataSourceDependencies userPreferences]
// Type encoding: @16@0:8
// Implementation: 0x10640a02c

// -[SCAdDataSourceDependencies adConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x10640a034

// -[SCAdDataSourceDependencies adConfigProviderV2]
// Type encoding: @16@0:8
// Implementation: 0x10640a03c

// -[SCAdDataSourceDependencies adContentDelivery]
// Type encoding: @16@0:8
// Implementation: 0x10640a044

// -[SCAdDataSourceDependencies adInsertionMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a04c

// -[SCAdDataSourceDependencies mediaCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x10640a054

// -[SCAdDataSourceDependencies mediaFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10640a05c

// -[SCAdDataSourceDependencies mediaMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a064

// -[SCAdDataSourceDependencies adOpportunityLogger]
// Type encoding: @16@0:8
// Implementation: 0x10640a06c

// -[SCAdDataSourceDependencies adOpportunityLoggerV2]
// Type encoding: @16@0:8
// Implementation: 0x10640a074

// -[SCAdDataSourceDependencies adPodManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a07c

// -[SCAdDataSourceDependencies promotedStoryStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x10640a084

// -[SCAdDataSourceDependencies adProvider]
// Type encoding: @16@0:8
// Implementation: 0x10640a08c

// -[SCAdDataSourceDependencies trackMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a094

// -[SCAdDataSourceDependencies adWebViewPrefetchHintsManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a09c

// -[SCAdDataSourceDependencies adWebViewPreloadManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a0a4

// -[SCAdDataSourceDependencies adWebViewAssetPrefetcher]
// Type encoding: @16@0:8
// Implementation: 0x10640a0ac

// -[SCAdDataSourceDependencies discoverFeedDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10640a0b4

// -[SCAdDataSourceDependencies onDemandResourceDownloader]
// Type encoding: @16@0:8
// Implementation: 0x10640a0bc

// -[SCAdDataSourceDependencies imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x10640a0c4

// -[SCAdDataSourceDependencies p2pDataSource]
// Type encoding: @16@0:8
// Implementation: 0x10640a0cc

// -[SCAdDataSourceDependencies playbackAssetRepository]
// Type encoding: @16@0:8
// Implementation: 0x10640a0d4

// -[SCAdDataSourceDependencies contentInterstitialRuleTracker]
// Type encoding: @16@0:8
// Implementation: 0x10640a0dc

// -[SCAdDataSourceDependencies publicStoriesInsertionRuleTracker]
// Type encoding: @16@0:8
// Implementation: 0x10640a0e4

// -[SCAdDataSourceDependencies crossInventoryInsertionRuleTracker]
// Type encoding: @16@0:8
// Implementation: 0x10640a0ec

// -[SCAdDataSourceDependencies adPreferencesProvider]
// Type encoding: @16@0:8
// Implementation: 0x10640a0f4

// -[SCAdDataSourceDependencies publicStoryContentViewHistoryCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x10640a0fc

// -[SCAdDataSourceDependencies adTracker]
// Type encoding: @16@0:8
// Implementation: 0x10640a104

// -[SCAdDataSourceDependencies notificationPool]
// Type encoding: @16@0:8
// Implementation: 0x10640a10c

// -[SCAdDataSourceDependencies operaNavigationStyle]
// Type encoding: q16@0:8
// Implementation: 0x10640a114

// -[SCAdDataSourceDependencies midRollInsertionManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a11c

// -[SCAdDataSourceDependencies unskippableAdManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a124

// -[SCAdDataSourceDependencies expandStateManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a12c

// -[SCAdDataSourceDependencies networkServices]
// Type encoding: @16@0:8
// Implementation: 0x10640a134

// -[SCAdDataSourceDependencies userSession]
// Type encoding: @16@0:8
// Implementation: 0x10640a13c

// -[SCAdDataSourceDependencies skStoreProductPrefetcher]
// Type encoding: @16@0:8
// Implementation: 0x10640a144

// -[SCAdDataSourceDependencies lifecycleWatermarkMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a14c

// -[SCAdDataSourceDependencies audioSession]
// Type encoding: @16@0:8
// Implementation: 0x10640a154

// -[SCAdDataSourceDependencies contextExperimentService]
// Type encoding: @16@0:8
// Implementation: 0x10640a15c

// -[SCAdDataSourceDependencies crashLogger]
// Type encoding: @16@0:8
// Implementation: 0x10640a164

// -[SCAdDataSourceDependencies adBrowserLifecycleService]
// Type encoding: @16@0:8
// Implementation: 0x10640a16c

// -[SCAdDataSourceDependencies impalaLegacyServices]
// Type encoding: @16@0:8
// Implementation: 0x10640a174

// -[SCAdDataSourceDependencies sharedOperaMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a17c

// -[SCAdDataSourceDependencies adsOperaParser]
// Type encoding: @16@0:8
// Implementation: 0x10640a184

// -[SCAdDataSourceDependencies skOverlayPreloader]
// Type encoding: @16@0:8
// Implementation: 0x10640a18c

// -[SCAdDataSourceDependencies internalErrorMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10640a194

// -[SCAdDataSourceDependencies adPlaybackConfig]
// Type encoding: @16@0:8
// Implementation: 0x10640a19c

// -[SCAdDataSourceDependencies setAdPlaybackConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640a1a4

// -[SCAdDataSourceDependencies friendStoriesDataCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x10640a1d4

// -[SCAdDataSourceDependencies setFriendStoriesDataCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640a1dc

// -[SCAdDataSourceDependencies organicEngagementFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10640a20c

// -[SCAdDataSourceDependencies setOrganicEngagementFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640a214

// -[SCAdDataSourceDependencies dpaConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x10640a244

// -[SCAdDataSourceDependencies promotedStoryLogger]
// Type encoding: @16@0:8
// Implementation: 0x10640a24c

// -[SCAdDataSourceDependencies .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10640a254

@end
