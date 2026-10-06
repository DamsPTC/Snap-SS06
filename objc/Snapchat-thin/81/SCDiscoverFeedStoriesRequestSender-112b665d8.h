// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedStoriesRequestSender
// Superclass: NSObject
// Address: 0x112b665d8

@interface SCDiscoverFeedStoriesRequestSender

// Property: queryCoordinator; attributes: T@"<SCDiscoverFeedQueryCoordinating>",W,N,V_queryCoordinator

// -[SCDiscoverFeedStoriesRequestSender initWithUserSession:queuePerformer:endpointManager:circumstanceEngine:snapTokenProvider:interactionHistoryManager:discoverFeedDataFetcher:adsClientInfoProvider:isBloopsEnabled:snapchattersDataFetcher:storiesGrapheneMetricsEmitter:adConfigProvider:lazyUserRegistrationInfoProvider:lazyBitmojiAvatarProvider:storiesConfigProvider:networkConnectivityMonitor:rtusClientCacheManager:dpaConfigProvider:notificationPool:discoverCrashLogger:locationProvider:unifiedGRPCClientFactory:]
// Type encoding: @192@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184
// Implementation: 0x1079a59bc

// -[SCDiscoverFeedStoriesRequestSender sendRequestWithStoriesRequest:query:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1079a6138

// -[SCDiscoverFeedStoriesRequestSender sendRequestWithStoriesRequest:query:completion:parsedCompletion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1079a6140

// -[SCDiscoverFeedStoriesRequestSender _sendRequestWithStoriesRequest:query:parameters:completion:parsedCompletion:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1079a6228

// -[SCDiscoverFeedStoriesRequestSender _waitForLocationWithTimeout:performer:thenCall:]
// Type encoding: v40@0:8d16@24@?32
// Implementation: 0x1079a65c4

// -[SCDiscoverFeedStoriesRequestSender _sendRequestWithStoriesRequest:query:parameters:completion:parsedCompletion:interactionHistoryArray:]
// Type encoding: v64@0:8@16@24@32@?40@?48@56
// Implementation: 0x1079a6a44

// -[SCDiscoverFeedStoriesRequestSender _sendRequestOverFrontierGrpcWithStoriesRequest:useBatchEndpoint:parameters:parsedCompletion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x1079a7058

// -[SCDiscoverFeedStoriesRequestSender _shouldUseFrontierGrpcForParameters:parsedCompletion:]
// Type encoding: B32@0:8@16@?24
// Implementation: 0x1079a7400

// -[SCDiscoverFeedStoriesRequestSender _sendRequestWithStoriesRequest:query:parameters:completion:parsedCompletion:interactionHistoryArray:accessToken:useFrontierGrpc:]
// Type encoding: v76@0:8@16@24@32@?40@?48@56@64B72
// Implementation: 0x1079a74e0

// -[SCDiscoverFeedStoriesRequestSender _sendRequestWithStoriesRequest:query:parameters:completion:parsedCompletion:interactionHistoryArray:accessToken:useFrontierGrpc:retryTimer:]
// Type encoding: v84@0:8@16@24@32@?40@?48@56@64B72@76
// Implementation: 0x1079a77dc

// -[SCDiscoverFeedStoriesRequestSender _processResponse:isBatchEndpoint:completion:parameters:data:error:retryTimer:requestDate:query:path:request:requestId:]
// Type encoding: v108@0:8@16B24@?28@36@44@52@60@68@76@84@92@100
// Implementation: 0x1079a84d0

// -[SCDiscoverFeedStoriesRequestSender _additionalHeadersForParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079a8a7c

// -[SCDiscoverFeedStoriesRequestSender _endpointSourceForParameters:]
// Type encoding: q24@0:8@16
// Implementation: 0x1079a8c94

// -[SCDiscoverFeedStoriesRequestSender _submitInternalRequestNotificationWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079a8d94

// -[SCDiscoverFeedStoriesRequestSender _presentStoriesRequestNotificationWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079a8d98

// -[SCDiscoverFeedStoriesRequestSender _currentCallType]
// Type encoding: @16@0:8
// Implementation: 0x1079a8df8

// -[SCDiscoverFeedStoriesRequestSender _isDiscoverSubfeedWithParameters:]
// Type encoding: B24@0:8@16
// Implementation: 0x1079a8e04

// -[SCDiscoverFeedStoriesRequestSender _maybeDebugLogRequestWithQuery:parameters:useBatchEndpoint:path:additionalHeaders:]
// Type encoding: v52@0:8@16@24B32@36@44
// Implementation: 0x1079a8ec8

// -[SCDiscoverFeedStoriesRequestSender queryCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x1079a8ecc

// -[SCDiscoverFeedStoriesRequestSender setQueryCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079a8ee4

// -[SCDiscoverFeedStoriesRequestSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079a8ef0

@end
