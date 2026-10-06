// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesMixerNetworkRequester
// Superclass: NSObject
// Address: 0x112b755d8

@interface SCStoriesMixerNetworkRequester

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesMixerNetworkRequester initWithSessionRequestManager:snapTokenProvider:attestationProvider:endpointManager:grapheneMetricsEmitter:ghostToFriendStoriesMetricsEmitter:ghostToMyStoriesMetricsEmitter:circumstanceEngine:userSegmentsObservable:currentUserId:networkConnectivityMonitor:interactionHistoryManager:featureSettingsService:storiesConfigProvider:rtusClientCacheManager:feedCardRequestSender:notificationPool:preferences:locationProvider:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x107c0df04

// -[SCStoriesMixerNetworkRequester fetchBatchStoryLookupWithSource:requestSource:requestConstructionBlock:completion:]
// Type encoding: v48@0:8q16@24@?32@?40
// Implementation: 0x107c0e35c

// -[SCStoriesMixerNetworkRequester fetchStoryWithSource:requestSource:requestConstructionBlock:completionQueue:completion:]
// Type encoding: v56@0:8q16@24@?32@40@?48
// Implementation: 0x107c0e7a0

// -[SCStoriesMixerNetworkRequester fetchViewerInfoWithBatchSnapsByType:requestSource:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107c0eb5c

// -[SCStoriesMixerNetworkRequester fetchStoriesWithFeedTypes:deltaTokens:lastStreamTokens:bloopsInStoryEnabled:completionQueue:completion:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x107c0eb64

// -[SCStoriesMixerNetworkRequester fetchIndividualStoriesWithSource:requestSource:requestConstructionBlock:completionQueue:completion:]
// Type encoding: v56@0:8q16@24@?32@40@?48
// Implementation: 0x107c0eb6c

// -[SCStoriesMixerNetworkRequester fetchViewHistoryWithRequestSource:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107c0eb74

// -[SCStoriesMixerNetworkRequester uploadPremiumReadReceipts:requestSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107c0eb7c

// -[SCStoriesMixerNetworkRequester batchUploadPremiumReadReceipts:snapReadReceipts:requestSource:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107c0eb84

// -[SCStoriesMixerNetworkRequester fetchSpotlightStatsForSnapIds:requestSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107c0eb8c

// -[SCStoriesMixerNetworkRequester _submitInternalRequestNotificationWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c0eb94

// -[SCStoriesMixerNetworkRequester _presentStoriesRequestNotificationWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c0eb98

// -[SCStoriesMixerNetworkRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107c0ebf8

@end
