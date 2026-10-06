// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedExpandedStoryQueryCoordinator
// Superclass: NSObject
// Address: 0x112b664e8

@interface SCDiscoverFeedExpandedStoryQueryCoordinator

// Property: sectionExtensionServices; attributes: T@"SCDiscoverFeedSectionExtensionServices",&,N,V_sectionExtensionServices
// Property: delegate; attributes: T@"<SCDiscoverFeedQueryCoordinatingDelegate>",W,N,V_delegate
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: currentQuery; attributes: T@"SCSearchQuery",C,N,V_currentQuery
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedExpandedStoryQueryCoordinator initWithUserSession:endpointManager:circumstanceEngine:snapTokenProvider:readReceiptCoordinator:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedDataMutator:adsClientInfoProvider:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:storiesSnapReadReceiptLogger:grapheneRegistry:adConfigProvider:sectionsCoordinator:lazyUserRegistrationInfoProvider:lazyUserBirthdayProvider:promotedStoriesLogger:snapchattersDataFetcher:isBloopsEnabled:storiesConfigProvider:networkConnectivityMonitor:rtusClientCacheManager:unifiedGRPCClientFactory:dpaConfigProvider:adRenderDataParser:notificationPool:storiesGrapheneMetricsEmitter:discoverCrashLogger:locationProvider:]
// Type encoding: @256@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248
// Implementation: 0x1079a12bc

// -[SCDiscoverFeedExpandedStoryQueryCoordinator setSectionExtensionServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079a17f4

// -[SCDiscoverFeedExpandedStoryQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1079a1850

// -[SCDiscoverFeedExpandedStoryQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1079a1858

// -[SCDiscoverFeedExpandedStoryQueryCoordinator _updateContentSectionsWithQuery:resultState:updatingBlock:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1079a19d4

// -[SCDiscoverFeedExpandedStoryQueryCoordinator _updateContentSectionsWithSectionMetadata:query:resultState:updatingBlock:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x1079a1af8

// -[SCDiscoverFeedExpandedStoryQueryCoordinator _fetchRemoteDFStoriesIfNecessaryWithQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1079a1c94

// -[SCDiscoverFeedExpandedStoryQueryCoordinator _fetchRemoteDFStoriesWithQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1079a2120

// -[SCDiscoverFeedExpandedStoryQueryCoordinator _checkValidityOfSectionsAndFetchIfNecessary:streamToken:metaStreamToken:allStreamTokens:query:updatingBlock:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1079a2394

// -[SCDiscoverFeedExpandedStoryQueryCoordinator _fetchRemoteDFStoriesWithQuery:existingSections:streamToken:metaStreamToken:allStreamTokens:updatingBlock:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1079a2768

// -[SCDiscoverFeedExpandedStoryQueryCoordinator _updateForResponseFromQuery:existingSections:updatingBlock:response:data:retryFailedRequest:]
// Type encoding: v64@0:8@16@24@?32@40@48@?56
// Implementation: 0x1079a2cdc

// -[SCDiscoverFeedExpandedStoryQueryCoordinator _handleFailureWithQuery:error:updatingBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1079a2e90

// -[SCDiscoverFeedExpandedStoryQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1079a2f34

// -[SCDiscoverFeedExpandedStoryQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1079a2f3c

// -[SCDiscoverFeedExpandedStoryQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079a2f44

// -[SCDiscoverFeedExpandedStoryQueryCoordinator sectionExtensionServices]
// Type encoding: @16@0:8
// Implementation: 0x1079a2f4c

// -[SCDiscoverFeedExpandedStoryQueryCoordinator delegate]
// Type encoding: @16@0:8
// Implementation: 0x1079a2f54

// -[SCDiscoverFeedExpandedStoryQueryCoordinator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079a2f6c

// -[SCDiscoverFeedExpandedStoryQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079a2f78

@end
