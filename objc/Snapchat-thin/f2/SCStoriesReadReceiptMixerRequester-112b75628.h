// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesReadReceiptMixerRequester
// Superclass: NSObject
// Address: 0x112b75628

@interface SCStoriesReadReceiptMixerRequester


// -[SCStoriesReadReceiptMixerRequester initWithProtobufRequestManager:grapheneMetricsEmitter:circumstanceEngine:currentUserId:networkConnectivityMonitor:preferences:locationProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x107c0ec88

// -[SCStoriesReadReceiptMixerRequester fetchViewHistoryWithRequestSource:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107c0eeb8

// -[SCStoriesReadReceiptMixerRequester uploadPremiumReadReceipts:requestSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107c0f230

// -[SCStoriesReadReceiptMixerRequester batchUploadPremiumReadReceipts:snapReadReceipts:requestSource:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107c0f624

// -[SCStoriesReadReceiptMixerRequester fetchSpotlightStatsForSnapIds:requestSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107c0fa50

// -[SCStoriesReadReceiptMixerRequester _constructFetchRequestWithAccessToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x107c0feb4

// -[SCStoriesReadReceiptMixerRequester _constructRequestWithPremiumReadReceipts:accessToken:attestationHeaders:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107c10068

// -[SCStoriesReadReceiptMixerRequester _constructRequestWithPremiumReadReceipts:snapReadReceipts:accessToken:attestationHeaders:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107c102d4

// -[SCStoriesReadReceiptMixerRequester _constructSpotlightStatsRequestWithSnapIds:accessToken:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107c10508

// -[SCStoriesReadReceiptMixerRequester _constructAdditionalHeaders:]
// Type encoding: @24@0:8@16
// Implementation: 0x107c1069c

// -[SCStoriesReadReceiptMixerRequester _logNetworkMetricsWithPath:success:requestSize:responseSize:]
// Type encoding: v44@0:8@16B24q28q36
// Implementation: 0x107c10734

// -[SCStoriesReadReceiptMixerRequester _isStatusCodeNonRetryable:]
// Type encoding: B24@0:8q16
// Implementation: 0x107c10750

// -[SCStoriesReadReceiptMixerRequester _shouldBackoffFromRequestForEndpoint:]
// Type encoding: B24@0:8@16
// Implementation: 0x107c10778

// -[SCStoriesReadReceiptMixerRequester _recordNonRetryableErrorTimestampForEndpoint:statusCode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107c1091c

// -[SCStoriesReadReceiptMixerRequester _resetFailureCountForEndpoint:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c10b00

// -[SCStoriesReadReceiptMixerRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107c10c48

@end
