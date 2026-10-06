// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesEverywhereQueryCoordinator
// Superclass: NSObject
// Address: 0x112b04978

@interface SCStoriesEverywhereQueryCoordinator

// Property: sectionExtensionServices; attributes: T@"SCDiscoverFeedSectionExtensionServices",&,N,V_sectionExtensionServices
// Property: delegate; attributes: T@"<SCDiscoverFeedQueryCoordinatingDelegate>",W,N,V_delegate
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: currentQuery; attributes: T@"SCSearchQuery",C,N,V_currentQuery
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesEverywhereQueryCoordinator initWithUserSession:circumstanceEngine:discoverFeedDataFetcher:discoverFeedDataMutator:discoverFeedDataLoader:snapTokenProvider:interactionHistoryManager:sectionsCoordinator:storiesConfigProvider:endpointManager:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:userRegistrationInfoProvider:snapchattersDataFetcher:userSegmentsProvider:networkConnectivityMonitor:locationProvider:adsClientInfoProvider:readReceiptCoordinator:promotedStoriesLogger:storiesGrapheneMetricsEmitter:discoverFeedEventsController:crashLogger:blizzardLogger:httpRequestModifier:httpMetadataService:rtusClientCacheManager:pageLoadMetricManager:dpaConfigProvider:friendStoriesSyncer:mixedStoriesDataCoordinator:discoverPerformanceLogging:adRenderDataParser:storiesSyncNetworkRequester:]
// Type encoding: @288@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280
// Implementation: 0x1068c51f4

// -[SCStoriesEverywhereQueryCoordinator setSectionExtensionServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068c5ad0

// -[SCStoriesEverywhereQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1068c5b20

// -[SCStoriesEverywhereQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068c5b28

// -[SCStoriesEverywhereQueryCoordinator _triggerUpdatingBlockIfNeeded:query:resultState:error:]
// Type encoding: v48@0:8@?16@24q32@40
// Implementation: 0x1068c5be4

// -[SCStoriesEverywhereQueryCoordinator _triggerUpdatingBlockIfNeededOnPerformer:query:resultState:error:]
// Type encoding: v48@0:8@?16@24q32@40
// Implementation: 0x1068c5d60

// -[SCStoriesEverywhereQueryCoordinator _getSearchQueryResultWithQuery:resultState:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1068c5df8

// -[SCStoriesEverywhereQueryCoordinator _fetchRemoteFriendStoriesWithQuery]
// Type encoding: v16@0:8
// Implementation: 0x1068c5f5c

// -[SCStoriesEverywhereQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1068c5f94

// -[SCStoriesEverywhereQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1068c5f9c

// -[SCStoriesEverywhereQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068c5fa4

// -[SCStoriesEverywhereQueryCoordinator sectionExtensionServices]
// Type encoding: @16@0:8
// Implementation: 0x1068c5fac

// -[SCStoriesEverywhereQueryCoordinator delegate]
// Type encoding: @16@0:8
// Implementation: 0x1068c5fb4

// -[SCStoriesEverywhereQueryCoordinator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068c5fcc

// -[SCStoriesEverywhereQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068c5fd8

// +[SCStoriesEverywhereQueryCoordinator announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1068c5a90

@end
