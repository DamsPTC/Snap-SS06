// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedQueryCoordinator
// Superclass: NSObject
// Address: 0x112b06ea8

@interface SCDiscoverFeedQueryCoordinator

// Property: sectionExtensionServices; attributes: T@"SCDiscoverFeedSectionExtensionServices",&,N,V_sectionExtensionServices
// Property: delegate; attributes: T@"<SCDiscoverFeedQueryCoordinatingDelegate>",W,N,V_delegate
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: currentQuery; attributes: T@"SCSearchQuery",C,N,V_currentQuery
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedQueryCoordinator initWithUserSession:snapTokenProvider:friendStoriesDataCoordinator:docObjectContext:storiesSyncNetworkRequester:endpointManager:circumstanceEngine:discoverFeedDataFetcher:discoverFeedDataMutator:discoverFeedDataLoader:discoverFeedEventsController:bitmojiAvatarProvider:discoverFeedRanker:adsClientInfoProvider:bitmojiFriendAvatarProvider:interactionHistoryManager:userRegistrationInfoProvider:snapchattersDataFetcher:storiesGrapheneMetricsEmitter:readReceiptCoordinator:sectionsCoordinator:promotedStoriesLogger:adConfigProvider:discoverPerformanceLogging:userSegmentsProvider:blizzardLogger:crashLogger:pageLoadMetricManager:storiesConfigProvider:networkConnectivityMonitor:rtusClientCacheManager:upNextGrapheneMetricsEmitter:storySyncCacheRequestSender:dpaConfigProvider:adRenderDataParser:spotlightMediaFetcherFactory:cachedReadReceiptViewStateProvider:locationProvider:unifiedGRPCClientFactory:]
// Type encoding: @328@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320
// Implementation: 0x1069357e8

// -[SCDiscoverFeedQueryCoordinator _createFrontierServiceWithFactory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069361a8

// -[SCDiscoverFeedQueryCoordinator _frontierCallOptionsBuilder]
// Type encoding: @16@0:8
// Implementation: 0x106936414

// -[SCDiscoverFeedQueryCoordinator hasPendingBatchRequest]
// Type encoding: B16@0:8
// Implementation: 0x1069364f0

// -[SCDiscoverFeedQueryCoordinator setHasPendingBatchRequest:]
// Type encoding: v20@0:8B16
// Implementation: 0x106936524

// -[SCDiscoverFeedQueryCoordinator _unlockPendingBatchRequestWithQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x106936554

// -[SCDiscoverFeedQueryCoordinator setSectionExtensionServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069365fc

// -[SCDiscoverFeedQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x10693664c

// -[SCDiscoverFeedQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069366f8

// -[SCDiscoverFeedQueryCoordinator _invalidateQueryTimeoutTimer]
// Type encoding: v16@0:8
// Implementation: 0x106936a20

// -[SCDiscoverFeedQueryCoordinator _startQueryTimeoutTimerWithQuery:resultState:updatingBlock:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x106936a4c

// -[SCDiscoverFeedQueryCoordinator _timeoutTimerAssertWithQuery:resultState:updatingBlock:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x106936bf0

// -[SCDiscoverFeedQueryCoordinator _synchronizedCachedContentFetchForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106936bf4

// -[SCDiscoverFeedQueryCoordinator _shouldDebounceRequestFor:]
// Type encoding: B24@0:8@16
// Implementation: 0x106937264

// -[SCDiscoverFeedQueryCoordinator _fetchRemoteFriendAndDFStoriesIfNeededWithQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106937504

// -[SCDiscoverFeedQueryCoordinator _fetchRemoteFriendStoriesWithQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x106937568

// -[SCDiscoverFeedQueryCoordinator _rerankDiscoverStoriesWithQuery:sectionsToRerank:isDebouncedQuery:updatingBlock:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x1069375a0

// -[SCDiscoverFeedQueryCoordinator _fetchRemoteDFStoriesWithQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106937dd0

// -[SCDiscoverFeedQueryCoordinator _fetchFullFeedAndOrFulfillAdsForQuery:cachedStories:isValid:invalidFeedTypes:updatingBlock:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x106937dd8

// -[SCDiscoverFeedQueryCoordinator _fetchRemoteDFStoriesWithQuery:updatingBlock:invalidFeedTypes:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x106938254

// -[SCDiscoverFeedQueryCoordinator _fetchRemoteStoriesWithQuery:updatingBlock:invalidFeedTypes:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x1069383c8

// -[SCDiscoverFeedQueryCoordinator _fetchRemoteFulfillStoryAdsWithQuery:feedType:updatingBlock:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x106938680

// -[SCDiscoverFeedQueryCoordinator _sendFulfillStoryAdsQuery:feedType:updatingBlock:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x1069387c8

// -[SCDiscoverFeedQueryCoordinator _receiveFulfillStoryAdsResponse:error:query:feedType:updatingBlock:]
// Type encoding: v52@0:8@16@24@32i40@?44
// Implementation: 0x106938ffc

// -[SCDiscoverFeedQueryCoordinator _handleFulfillStoryAdsResponse:error:query:feedType:updatingBlock:]
// Type encoding: v52@0:8@16@24@32i40@?44
// Implementation: 0x1069391a0

// -[SCDiscoverFeedQueryCoordinator _reorderAfterFulfillForQuery:feedType:updatingBlock:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x106939638

// -[SCDiscoverFeedQueryCoordinator _publishAfterFulfillForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106939824

// -[SCDiscoverFeedQueryCoordinator _sendQuery:snapToken:updatingBlock:invalidFeedTypes:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x10693996c

// -[SCDiscoverFeedQueryCoordinator _sendQuery:snapToken:interactionsHistory:originalInteractionHistory:updatingBlock:requestId:invalidFeedTypes:]
// Type encoding: v72@0:8@16@24@32@40@?48@56@64
// Implementation: 0x106939cac

// -[SCDiscoverFeedQueryCoordinator _sendQueryBlock:snapToken:updatingBlock:retryTimer:interactionsHistory:originalInteractionHistory:requestId:invalidFeedTypes:]
// Type encoding: v80@0:8@16@24@?32@40@48@56@64@72
// Implementation: 0x10693a060

// -[SCDiscoverFeedQueryCoordinator _sendQueryBlock:snapToken:sequenceInfo:contentTokens:updatingBlock:retryTimer:interactionsHistory:originalInteractionHistory:requestId:invalidFeedTypes:]
// Type encoding: v96@0:8@16@24@32@40@?48@56@64@72@80@88
// Implementation: 0x10693a338

// -[SCDiscoverFeedQueryCoordinator _updateForResponseFromQuery:path:updatingBlock:request:storiesRequest:partialBatchRequestFeedType:response:data:error:startTime:retryTimer:originalInteractionHistory:]
// Type encoding: v108@0:8@16@24@?32@40@48i56@60@68@76d84@92@100
// Implementation: 0x10693adf8

// -[SCDiscoverFeedQueryCoordinator _handleFailureWithQuery:error:updatingBlock:statusCodeToDisplay:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x10693b67c

// -[SCDiscoverFeedQueryCoordinator _handleStoriesBatchResponse:storiesRequest:query:partialBatchRequestFeedType:updatingBlock:withMetricSize:originalInteractionHistory:]
// Type encoding: v68@0:8@16@24@32i40@?44Q52@60
// Implementation: 0x10693b79c

// -[SCDiscoverFeedQueryCoordinator _logPromotedStoriesFetched:]
// Type encoding: v24@0:8@16
// Implementation: 0x10693beec

// -[SCDiscoverFeedQueryCoordinator _logPromotedStoryCardsFetched:]
// Type encoding: v24@0:8@16
// Implementation: 0x10693c020

// -[SCDiscoverFeedQueryCoordinator _handleSuccessStoriesResponses:responseTimestamp:allFeedTypesToKeep:partialBatchRequestFeedType:watchedStatesByEpisodeId:metaStreamToken:upNextDefaultPlaylistArray:query:originalInteractionHistory:updatingBlock:]
// Type encoding: v92@0:8@16@24@32i40@44@52@60@68@76@?84
// Implementation: 0x10693c190

// -[SCDiscoverFeedQueryCoordinator _fetchSnapchattersWithResponse:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10693c700

// -[SCDiscoverFeedQueryCoordinator _persistStoriesToDataStoreWithStoriesResponses:responseTimestamp:allFeedTypesToKeep:partialBatchRequestFeedType:watchedStatesByEditionId:snapchatterByUserId:metaStreamToken:upNextDefaultPlaylistArray:query:interactionHistoryArray:updatingBlock:]
// Type encoding: v100@0:8@16@24@32i40@44@52@60@68@76@84@?92
// Implementation: 0x10693c784

// -[SCDiscoverFeedQueryCoordinator _updateDefaultStoriesCacheWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10693d6e8

// -[SCDiscoverFeedQueryCoordinator _saveSectionCompletionWithQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x10693d898

// -[SCDiscoverFeedQueryCoordinator _updateContentSectionsAfterStoriesRequestWithQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10693d900

// -[SCDiscoverFeedQueryCoordinator _handleStoriesResponse:query:originalInteractionHistory:updatingBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10693d968

// -[SCDiscoverFeedQueryCoordinator _syncShowWatchedStateAndHandleStoriesResponse:query:interactionHistoryArray:updatingBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10693dde0

// -[SCDiscoverFeedQueryCoordinator _handleStoriesResponse:watchedStatesByEditionId:snapchatterByUserId:query:interactionHistoryArray:updatingBlock:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x10693e170

// -[SCDiscoverFeedQueryCoordinator _updateMetadataForSubscriptionSection:stories:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10693ead0

// -[SCDiscoverFeedQueryCoordinator _createSectionFromResponse:responseTimestamp:dataAccessor:feedType:query:watchedStatesByEditionId:snapchatterByUserId:interactionHistoryArray:shouldAllowDedupeWithStoriesInDataStore:]
// Type encoding: @80@0:8@16@24@32i40@44@52@60@68B76
// Implementation: 0x10693ecb8

// -[SCDiscoverFeedQueryCoordinator _updateContentSectionsWithQuery:resultState:updatingBlock:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x10693f4c4

// -[SCDiscoverFeedQueryCoordinator _updateContentSectionsWithSectionMetadata:query:resultState:updatingBlock:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x10693f5e8

// -[SCDiscoverFeedQueryCoordinator _maybeModifyIncomingDedupeFps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10693f6bc

// -[SCDiscoverFeedQueryCoordinator _sendSyncCacheWithQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10693f890

// -[SCDiscoverFeedQueryCoordinator _sendCacheSyncRequestWithStories:feedType:updatingBlock:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x10693fd80

// -[SCDiscoverFeedQueryCoordinator _isBatchQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x10693fe94

// -[SCDiscoverFeedQueryCoordinator _getStoriesMetadataOnPerformerToKeep:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10693fe9c

// -[SCDiscoverFeedQueryCoordinator _getStoriesMetadataToKeep:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10693ff64

// -[SCDiscoverFeedQueryCoordinator _maybeMarkLastEmptySubsSectionFetchedDateWithStoriesRequest:storiesBatchResponse:responseTimestamp:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069402e0

// -[SCDiscoverFeedQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1069405e8

// -[SCDiscoverFeedQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1069405f0

// -[SCDiscoverFeedQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069405f8

// -[SCDiscoverFeedQueryCoordinator sectionExtensionServices]
// Type encoding: @16@0:8
// Implementation: 0x106940600

// -[SCDiscoverFeedQueryCoordinator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106940608

// -[SCDiscoverFeedQueryCoordinator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106940620

// -[SCDiscoverFeedQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10694062c

// +[SCDiscoverFeedQueryCoordinator announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1069365f0

@end
