// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedCardRequestSender
// Superclass: NSObject
// Address: 0x112a82c48

@interface SCDiscoverFeedCardRequestSender

// Property: queryCoordinator; attributes: T@"<SCDiscoverFeedQueryCoordinating>",W,N,V_queryCoordinator

// -[SCDiscoverFeedCardRequestSender initWithUnifiedGRPCClientFactory:feedCardConverter:storiesConfigProvider:feedCardGrapheneMetricsEmitter:notificationPool:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105a0b2a0

// -[SCDiscoverFeedCardRequestSender initWithGRPCClientFactory:feedCardConverter:storiesConfigProvider:notificationPool:feedCardGrapheneMetricsEmitter:userSession:queuePerformer:circumstanceEngine:interactionHistoryManager:discoverFeedDataFetcher:adsClientInfoProvider:isBloopsEnabled:snapchattersDataFetcher:storiesGrapheneMetricsEmitter:storiesSnapReadReceiptLogger:adConfigProvider:lazyUserRegistrationInfoProvider:lazyBitmojiAvatarProvider:lazyUserBirthdayProvider:networkConnectivityMonitor:rtusClientCacheManager:dpaConfigProvider:locationProvider:]
// Type encoding: @200@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192
// Implementation: 0x105a0b3d4

// -[SCDiscoverFeedCardRequestSender sendRequestWithStoriesRequest:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105a0b918

// -[SCDiscoverFeedCardRequestSender fetchFeedCardsWithRequest:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105a0bdc4

// -[SCDiscoverFeedCardRequestSender sendBatchStoryLookupWithCompositeStoryIds:requestSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105a0bfd8

// -[SCDiscoverFeedCardRequestSender sendSingleStoryLookupWithCompositeStoryId:requestSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105a0c3d0

// -[SCDiscoverFeedCardRequestSender batchGetFeedCardsByOwnersWithOwnerIds:storyType:limitPerUser:lookbackSeconds:includeReposts:completionQueue:completion:]
// Type encoding: v64@0:8@16i24Q28d36B44@48@?56
// Implementation: 0x105a0c7c8

// -[SCDiscoverFeedCardRequestSender _feedCardsRequestForBatchStoryWithCompositeStoryIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a0cc34

// -[SCDiscoverFeedCardRequestSender _feedCardsRequestWithCompositeStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a0cf9c

// -[SCDiscoverFeedCardRequestSender _feedsRequestForStoriesRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a0d22c

// -[SCDiscoverFeedCardRequestSender _createFeedCardService:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a0dc94

// -[SCDiscoverFeedCardRequestSender _mockedCallOptionsBuilder]
// Type encoding: @16@0:8
// Implementation: 0x105a0de50

// -[SCDiscoverFeedCardRequestSender _callOptionsBuilder]
// Type encoding: @16@0:8
// Implementation: 0x105a0df34

// -[SCDiscoverFeedCardRequestSender _requestLocaleIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105a0e0fc

// -[SCDiscoverFeedCardRequestSender _requestAcceptedLanguagesTag]
// Type encoding: @16@0:8
// Implementation: 0x105a0e148

// -[SCDiscoverFeedCardRequestSender _submitInternalRequestNotificationWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a0e14c

// -[SCDiscoverFeedCardRequestSender _presentStoriesRequestNotificationWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a0e150

// -[SCDiscoverFeedCardRequestSender _logNetworkMetricsWithEndpoint:requestSource:success:responseSize:]
// Type encoding: v44@0:8@16@24B32q36
// Implementation: 0x105a0e1b0

// -[SCDiscoverFeedCardRequestSender sendFeedCardRequestWithStoriesRequest:query:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105a0e238

// -[SCDiscoverFeedCardRequestSender _sendFeedCardRequestWithStoriesRequest:query:parameters:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105a0e320

// -[SCDiscoverFeedCardRequestSender _sendFeedCardRequestWithStoriesRequest:query:parameters:completionQueue:completion:interactionHistoryArray:]
// Type encoding: v64@0:8@16@24@32@40@?48@56
// Implementation: 0x105a0e694

// -[SCDiscoverFeedCardRequestSender _endpointSourceForParameters:]
// Type encoding: q24@0:8@16
// Implementation: 0x105a0f290

// -[SCDiscoverFeedCardRequestSender queryCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x105a0f38c

// -[SCDiscoverFeedCardRequestSender setQueryCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a0f3a4

// -[SCDiscoverFeedCardRequestSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a0f3b0

@end
