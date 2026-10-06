// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightQueryCoordinator
// Superclass: NSObject
// Address: 0x112b06ef8

@interface SCSpotlightQueryCoordinator

// Property: sectionExtensionServices; attributes: T@"SCDiscoverFeedSectionExtensionServices",&,N,V_sectionExtensionServices
// Property: delegate; attributes: T@"<SCDiscoverFeedQueryCoordinatingDelegate>",W,N,V_delegate
// Property: isLoading; attributes: TB,R,N
// Property: currentQuery; attributes: T@"SCSearchQuery",C,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightQueryCoordinator initWithCircumstanceEngine:discoverFeedDataFetcher:discoverFeedDataMutator:queuePerformer:requestSender:responseProcessor:snapchattersDataFetcher:storiesGrapheneMetricsEmitter:sectionsCoordinator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:cachedReadReceiptViewStateProvider:networkRequester:storiesConfigProvider:adConfigProvider:storiesBadgingServices:networkConnectivityMonitor:locationProvider:spotlightMediaFetcherFactory:feedCardGrapheneMetricsEmitter:adRenderDataParser:userPreferences:feedCardRequestSender:interstitialRepository:interstitialResponseProcessor:]
// Type encoding: @216@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208
// Implementation: 0x10694090c

// -[SCSpotlightQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x106940ec0

// -[SCSpotlightQueryCoordinator markCompositeStoryIdAsViewed:forFeedType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106940ec8

// -[SCSpotlightQueryCoordinator signalDeepViewSessionWithFeedType:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069410a4

// -[SCSpotlightQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10694110c

// -[SCSpotlightQueryCoordinator _resultsForQuery:feedTypeEnum:section:updatingBlock:token:]
// Type encoding: v52@0:8@16i24@28@?36@44
// Implementation: 0x106941498

// -[SCSpotlightQueryCoordinator _maybeDebugLogPaginationCancelled:]
// Type encoding: v20@0:8i16
// Implementation: 0x1069417f8

// -[SCSpotlightQueryCoordinator _maybeDebugLogRequestCancelled:hasEnoughStories:unviewedStoriesCount:validCacheInterval:timeSinceTtlCursor:]
// Type encoding: v48@0:8i16B20Q24d32d40
// Implementation: 0x1069417fc

// -[SCSpotlightQueryCoordinator _makeIndependentBadgeCall]
// Type encoding: v16@0:8
// Implementation: 0x106941800

// -[SCSpotlightQueryCoordinator _resultsForPrefetchFromFeedQuery:feedTypeEnum:section:existingDataStoreStories:updatingBlock:token:]
// Type encoding: v60@0:8@16i24@28@36@?44@52
// Implementation: 0x106941878

// -[SCSpotlightQueryCoordinator _resultsForPrefetchFromFeedQuery:feedTypeEnum:section:existingDataStoreStories:unviewedStoriesInDataStore:updatingBlock:token:]
// Type encoding: v68@0:8@16i24@28@36@44@?52@60
// Implementation: 0x106941abc

// -[SCSpotlightQueryCoordinator _getPrependDedupeFpsFromSpotlightMediaFetcherWithUnviewedSet:feedTypeEnum:fetchBlock:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x106942554

// -[SCSpotlightQueryCoordinator _fetchSpotlightStoriesForQuery:feedTypeEnum:section:existingDataStoreStories:prependExistingStoryDedupeFps:updatingBlock:token:]
// Type encoding: v68@0:8@16i24@28@36@44@?52@60
// Implementation: 0x1069428a4

// -[SCSpotlightQueryCoordinator _executeFetchSpotlightStoriesForQuery:storiesRequest:deltaFetchInfo:feedTypeEnum:section:existingDataStoreStories:prependExistingStoryDedupeFps:shouldFetchInterstitial:updatingBlock:token:]
// Type encoding: v88@0:8@16@24@32i40@44@52@60B68@?72@80
// Implementation: 0x106942bb0

// -[SCSpotlightQueryCoordinator _mockInterstitialInjector]
// Type encoding: @16@0:8
// Implementation: 0x10694391c

// -[SCSpotlightQueryCoordinator _warmInterstitialMediaForFeedType:]
// Type encoding: v20@0:8i16
// Implementation: 0x106943924

// -[SCSpotlightQueryCoordinator _seedMockInterstitialIfRepositoryEmptyForFeedType:]
// Type encoding: v20@0:8i16
// Implementation: 0x106943b94

// -[SCSpotlightQueryCoordinator _processInterstitialForStoriesBatchResponse:feedType:completion:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x106943c98

// -[SCSpotlightQueryCoordinator _updateForResponseFromQuery:existingSections:feedType:response:data:existingDataStoreStories:prependExistingStoryDedupeFps:bloomFilterIdsToSend:retryFailedRequest:updatingBlock:token:]
// Type encoding: v100@0:8@16@24i32@36@44@52@60@68@?76@?84@92
// Implementation: 0x106943f80

// -[SCSpotlightQueryCoordinator _updateForDecodedResponseFromQuery:existingSections:feedType:response:storiesResponse:batchResponse:isBatchQuery:prependExistingStoryDedupeFps:bloomFilterIdsToSend:updatingBlock:token:]
// Type encoding: v96@0:8@16@24i32@36@44@52B60@64@72@?80@88
// Implementation: 0x106944204

// -[SCSpotlightQueryCoordinator _handleFrontierResponse:query:existingSections:feedType:response:storiesResponse:batchResponse:isBatchQuery:prependExistingStoryDedupeFps:bloomFilterIdsToSend:updatingBlock:token:]
// Type encoding: v104@0:8@16@24@32i40@44@52@60B68@72@80@?88@96
// Implementation: 0x106944790

// -[SCSpotlightQueryCoordinator _handleBatchResponse:query:existingSections:feedType:response:prependExistingStoryDedupeFps:bloomFilterIdsToSend:updatingBlock:token:]
// Type encoding: v84@0:8@16@24@32i40@44@52@60@?68@76
// Implementation: 0x106944af4

// -[SCSpotlightQueryCoordinator _handleStoriesResponse:query:feedType:response:bloomFilterIdsToSend:updatingBlock:token:]
// Type encoding: v68@0:8@16@24i32@36@44@?52@60
// Implementation: 0x106944de0

// -[SCSpotlightQueryCoordinator _incrementRequestResultMetricForFeedType:isBatchQuery:httpStatusCode:responseStatusCode:]
// Type encoding: v36@0:8i16B20q24i32
// Implementation: 0x106945054

// -[SCSpotlightQueryCoordinator _handleFrontierNoOpForFeedType:responseStatus:frontierToken:existingSections:bloomFilterIdsToSend:isBatchQuery:httpResponse:updatingBlock:token:]
// Type encoding: v80@0:8i16@20@28@36@44B52@56@?64@72
// Implementation: 0x10694515c

// -[SCSpotlightQueryCoordinator _completeFrontierNoOpForFeedType:isBatchQuery:httpStatusCode:responseStatusCode:bloomFilterIdsToSend:updatingBlock:token:]
// Type encoding: v60@0:8i16B20q24i32@36@?44@52
// Implementation: 0x106945468

// -[SCSpotlightQueryCoordinator _sectionByReplacingFrontierToken:onSection:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106945648

// -[SCSpotlightQueryCoordinator _removeViewedStoryIds:forFeedType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1069457f8

// -[SCSpotlightQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1069458b0

// -[SCSpotlightQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1069458b8

// -[SCSpotlightQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069458c0

// -[SCSpotlightQueryCoordinator _setCurrentQuery:forFeedType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1069458fc

// -[SCSpotlightQueryCoordinator currentQueryForFeedType:]
// Type encoding: @20@0:8i16
// Implementation: 0x106945990

// -[SCSpotlightQueryCoordinator handlePrefetchedStoriesBatchResponse:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106945a20

// -[SCSpotlightQueryCoordinator _previousRequestTimeForFeedType:]
// Type encoding: @20@0:8i16
// Implementation: 0x1069460a4

// -[SCSpotlightQueryCoordinator _isPreviousRequestTimeConsideredLoading:]
// Type encoding: B24@0:8@16
// Implementation: 0x106946134

// -[SCSpotlightQueryCoordinator _isLoadingFeedType:]
// Type encoding: B20@0:8i16
// Implementation: 0x106946168

// -[SCSpotlightQueryCoordinator _beginLoadingIfAvailableForFeedType:]
// Type encoding: @20@0:8i16
// Implementation: 0x106946290

// -[SCSpotlightQueryCoordinator _watchdogExpiredForFeedType:token:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x106946614

// -[SCSpotlightQueryCoordinator _endLoadingAndSaveToDisk:forFeedType:token:]
// Type encoding: v32@0:8B16i20@24
// Implementation: 0x106946740

// -[SCSpotlightQueryCoordinator _spotlightOnFriendsFeedPrefetchQuery]
// Type encoding: @16@0:8
// Implementation: 0x1069468b0

// -[SCSpotlightQueryCoordinator _setLastDeepSessionTimestamp:feedType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106946aa0

// -[SCSpotlightQueryCoordinator _getLastDeepSessionTimestampForFeedType:]
// Type encoding: @24@0:8@16
// Implementation: 0x106946b38

// -[SCSpotlightQueryCoordinator _lastDeepSessionTimestampKeyForFeedType:]
// Type encoding: @24@0:8@16
// Implementation: 0x106946bcc

// -[SCSpotlightQueryCoordinator _shortenedQuerySource:]
// Type encoding: @24@0:8@16
// Implementation: 0x106946bfc

// -[SCSpotlightQueryCoordinator _logSendRequestForFeedType:querySource:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x106946cc8

// -[SCSpotlightQueryCoordinator _logDownloadDataSize:feedType:querySource:]
// Type encoding: v36@0:8Q16i24@28
// Implementation: 0x106946d18

// -[SCSpotlightQueryCoordinator _logResponseCountOfStoriesResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106946d70

// -[SCSpotlightQueryCoordinator _logResponseCountOfBatchStoriesResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106946d74

// -[SCSpotlightQueryCoordinator _logMetricsForBatchStoriesResponse:targetFeedType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x106946e70

// -[SCSpotlightQueryCoordinator _logMetricsForStoriesResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106947000

// -[SCSpotlightQueryCoordinator _logResponseStoryCountForStoriesResponse:feedType:isPaginationRequest:]
// Type encoding: v32@0:8@16i24B28
// Implementation: 0x106947090

// -[SCSpotlightQueryCoordinator _viewLocationFromFeedType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106947518

// -[SCSpotlightQueryCoordinator _storyCardIsLongformShow:]
// Type encoding: B24@0:8@16
// Implementation: 0x106947588

// -[SCSpotlightQueryCoordinator _maybeLogPayloadForFailuresInQuery:feedTypeEnum:response:responseData:]
// Type encoding: v44@0:8@16i24@28@36
// Implementation: 0x106947664

// -[SCSpotlightQueryCoordinator _refreshEngagementStatsForStaleStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10694790c

// -[SCSpotlightQueryCoordinator _applyRefreshedEngagementStatsFromResponse:statusCode:storiesBySnapId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106948134

// -[SCSpotlightQueryCoordinator _rebuildStoryWithRefreshedStats:storiesBySnapId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069483c8

// -[SCSpotlightQueryCoordinator sectionExtensionServices]
// Type encoding: @16@0:8
// Implementation: 0x1069488f4

// -[SCSpotlightQueryCoordinator setSectionExtensionServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069488fc

// -[SCSpotlightQueryCoordinator delegate]
// Type encoding: @16@0:8
// Implementation: 0x10694892c

// -[SCSpotlightQueryCoordinator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106948944

// -[SCSpotlightQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106948950

@end
