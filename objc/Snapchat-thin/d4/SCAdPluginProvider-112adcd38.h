// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPluginProvider
// Superclass: NSObject
// Address: 0x112adcd38

@interface SCAdPluginProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdPluginProvider initWithUserSession:adOperationalLoggingServices:adConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:streamingMediaFetcher:adReportEventTrackerProvider:skAdNetwork:appImpressionTracker:liveLensPreviewLauncher:cameraHardwareServicesAPI:lensLogger:lensDataFetcher:lensDataPrefetcher:circumstanceEngine:messagingExperimentService:friendsFeedLifecyleListener:notificationManager:showcaseLayerVCProvider:valdiRuntimeProvider:sessionViewingHistory:showcaseInteractionHistoryTracker:adEOVTimerProvider:audioSession:locationProvider:userLocationPermissionsManager:networkingClient:dataSourceDependencyBuilderBlock:snapcodeMetadataProvider:memoryPressureState:applicationLifecycleEvents:boostCoordinator:sendToScopeLauncher:conversationDestinationParser:textSender:notificationPool:skOverlayPreloader:skOverlayLifecycleTracker:adTrackEventRepository:adTrackEventRepositoryV2:adWebviewConfigRepository:adTrackFunnelEventTracker:trackSeqNumProvider:adBrowserLifecycleService:adCrashLogger:applicationPreferences:playbackSessionObservableRepository:attachmentPreloader:sharingPresenterProvider:imageSourceProvider:imageFetchingService:lensMetadataStoreProvider:storiesConfigProvider:webBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:adWebviewOperationEventRepository:clearConversationActionHandler:adOperaLayerFactoryProvider:userAdIdProvider:deckHierarchyFactory:userPreferences:browserPrivacyConsentInfoManager:localNotificationScheduler:userInfoAdapter:appStartExperimentReader:webViewRetainer:]
// Type encoding: @552@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@?232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472@480@488@496@504@512@520@528@536@544
// Implementation: 0x10637d968

// -[SCAdPluginProvider createAdPluginWithViewLocation:storySessionId:navigationStyle:]
// Type encoding: @40@0:8q16@24q32
// Implementation: 0x10637e618

// -[SCAdPluginProvider createDiscoverAdPluginWithViewLocation:storySessionId:navigationStyle:initialAd:p2pDataSource:]
// Type encoding: @56@0:8q16@24q32@40@48
// Implementation: 0x10637e6d4

// -[SCAdPluginProvider createStoryAdPluginWithViewLocation:storySessionId:navigationStyle:]
// Type encoding: @40@0:8q16@24q32
// Implementation: 0x10637e7c0

// -[SCAdPluginProvider createMapAdPluginWithStorySessionId:navigationStyle:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10637e87c

// -[SCAdPluginProvider createAdChatFeedPluginWithDataModel:viewLocation:navigationStyle:userId:]
// Type encoding: @48@0:8@16q24q32@40
// Implementation: 0x10637e934

// -[SCAdPluginProvider createAPAdPluginWithDataModel:navigationStyle:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10637ea40

// -[SCAdPluginProvider createPublisherStoriesDeeplinkAdPluginWithStorySessionId:deepLinkId:navigationStyle:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10637ea48

// -[SCAdPluginProvider createStoriesAdPluginWithViewLocation:storySessionId:deepLinkId:navigationStyle:initialAd:p2pDataSource:]
// Type encoding: @64@0:8q16@24@32q40@48@56
// Implementation: 0x10637eb14

// -[SCAdPluginProvider createAdCameraPluginWithViewLocation:]
// Type encoding: @24@0:8q16
// Implementation: 0x10637eb50

// -[SCAdPluginProvider layerViewControllerFactoryPlugin]
// Type encoding: @16@0:8
// Implementation: 0x10637eba8

// -[SCAdPluginProvider webBrowserLayerViewControllerFactoryPlugin]
// Type encoding: @16@0:8
// Implementation: 0x10637ebfc

// -[SCAdPluginProvider _createAdPluginWithViewLocation:navigationStyle:storySessionId:deepLinkId:p2pDataSource:initialAd:groupAdDataSource:]
// Type encoding: @72@0:8q16q24@32@40@48@56@64
// Implementation: 0x10637ed30

// -[SCAdPluginProvider _createAdPluginWithDeepLinkId:p2pDataSource:initialAd:groupAdDataSource:dependencies:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10637ee3c

// -[SCAdPluginProvider _assertDeprecatedApiUsageDetected]
// Type encoding: v16@0:8
// Implementation: 0x10637f1a0

// -[SCAdPluginProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10637f218

@end
