// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverPublisherOperaSession
// Superclass: NSObject
// Address: 0x112b6eff8

@interface SCDiscoverPublisherOperaSession

// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverPublisherOperaSession addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac1cdc

// -[SCDiscoverPublisherOperaSession removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac1ce4

// -[SCDiscoverPublisherOperaSession initWithContext:userSession:loggingContext:subscriptionStore:discoverFeedEventsController:discoverFeedDataFetcher:snapDocConfigurer:publisherPagePropertiesManager:cachedViewStateProvider:legacyStoriesTooltipsService:readReceiptCoordinator:videoFilterAdaptor:permissionRequester:notificationOSSettingsRetriever:impalaProfilePresentHandler:storiesGrapheneMetricsEmitter:previewFilterDataProviderCreator:circumstanceEngine:networkConnectivityMonitor:notificationPool:imageDownloader:streamingMediaFetcher:grapheneRegistry:creatorSettingsMutator:creatorSettingsFetcher:creatorSettingsTracker:lazyDiscoverFeedInteractionHistoryManager:sendToScopeLauncher:lazyDiscoverFeedDataMutator:bitmojiImageFetcher:discoverFeedNotificationOptInRequestManager:discoverBlizzardLogger:offPlatformLinkGenerationService:snapVideoFilterFactory:previewURLVideoProvider:safetyReportScopeExposer:externalLinkSendingService:lazyUserTrackedLogger:boostCoordinator:subscriptionWorkflowStarter:offPlatformShareServices:snapDocEditorFactory:previewSnapSenderFactory:contentRemovalDelegate:triggeringSection:storiesConfigProvider:]
// Type encoding: @384@0:8Q16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360q368@376
// Implementation: 0x107ac1cec

// -[SCDiscoverPublisherOperaSession setOperaEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac2524

// -[SCDiscoverPublisherOperaSession currentSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107ac2590

// -[SCDiscoverPublisherOperaSession setLoggingContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac2598

// -[SCDiscoverPublisherOperaSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107ac25a4

// -[SCDiscoverPublisherOperaSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ac27a4

// -[SCDiscoverPublisherOperaSession _forwardEventToCurrentSingleDiscoverPublisherOperaSession:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ac2b6c

// -[SCDiscoverPublisherOperaSession didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ac2b74

// -[SCDiscoverPublisherOperaSession extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107ac2c60

// -[SCDiscoverPublisherOperaSession _addNotifications]
// Type encoding: v16@0:8
// Implementation: 0x107ac2f10

// -[SCDiscoverPublisherOperaSession _viewWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x107ac2f68

// -[SCDiscoverPublisherOperaSession _setupReportSessionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107ac2f90

// -[SCDiscoverPublisherOperaSession _updateCurrentSingleDiscoverPublisherOperaSessionIfNecessaryWithPage:event:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ac3124

// -[SCDiscoverPublisherOperaSession _endCurrentsingleDiscoverPublisherOperaSessionAndAggregateMetrics]
// Type encoding: v16@0:8
// Implementation: 0x107ac34b0

// -[SCDiscoverPublisherOperaSession _singleDiscoverPublisherOperaSessionForStoryPlayableDataModel:openPage:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ac34b8

// -[SCDiscoverPublisherOperaSession _endSession]
// Type encoding: v16@0:8
// Implementation: 0x107ac37a4

// -[SCDiscoverPublisherOperaSession _sendViewLocationUpdateIfNeeded:withPage:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107ac37bc

// -[SCDiscoverPublisherOperaSession operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x107ac38f8

// -[SCDiscoverPublisherOperaSession setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac3910

// -[SCDiscoverPublisherOperaSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x107ac391c

// -[SCDiscoverPublisherOperaSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac3934

// -[SCDiscoverPublisherOperaSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ac3940

// +[SCDiscoverPublisherOperaSession announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107ac1cd0

@end
