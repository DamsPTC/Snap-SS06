// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatchStoriesMixerRequester
// Superclass: NSObject
// Address: 0x112b754e8

@interface SCBatchStoriesMixerRequester

// Property: isNewUser; attributes: TB,V_isNewUser

// -[SCBatchStoriesMixerRequester initWithProtobufRequestManager:endpointManager:userSegmentsObservable:ghostToFriendStoriesMetricsEmitter:ghostToMyStoriesMetricsEmitter:grapheneMetricsEmitter:currentUserId:interactionHistoryManager:circumstanceEngine:networkConnectivityMonitor:featureSettingsService:storiesConfigProvider:rtusClientCacheManager:locationProvider:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x107c0c3e4

// -[SCBatchStoriesMixerRequester fetchStoriesWithFeedTypes:deltaTokens:lastStreamTokens:bloopsInStoryEnabled:completionQueue:completion:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x107c0c864

// -[SCBatchStoriesMixerRequester _fetchStoriesWithFeedTypes:interactionHistoryArray:deltaTokens:lastStreamTokens:bloopsInStoryEnabled:completionQueue:completion:]
// Type encoding: v68@0:8@16@24@32@40B48@52@?60
// Implementation: 0x107c0c8a0

// -[SCBatchStoriesMixerRequester _createRequestWithSnapAccessToken:feedTypes:bloopsInStoryEnabled:deltaTokens:interactionHistoryArray:lastStreamTokens:]
// Type encoding: @60@0:8@16@24B32@36@44@52
// Implementation: 0x107c0cd8c

// -[SCBatchStoriesMixerRequester _appendRealTimeSignalToRequest:mixerEndpointSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107c0d068

// -[SCBatchStoriesMixerRequester _purgeRTUSEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c0d104

// -[SCBatchStoriesMixerRequester _handleUpdatedUserSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c0d148

// -[SCBatchStoriesMixerRequester _logG2FSFetchDeltaInfoWithFeedTypes:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c0d174

// -[SCBatchStoriesMixerRequester _logG2FSCreateRequestWithFeedTypes:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c0d1bc

// -[SCBatchStoriesMixerRequester _logNetworkMetricsWithPath:requestSource:success:requestSize:responseSize:]
// Type encoding: v52@0:8@16@24B32q36q44
// Implementation: 0x107c0d228

// -[SCBatchStoriesMixerRequester _friendStoriesAdditionalHeaders]
// Type encoding: @16@0:8
// Implementation: 0x107c0d230

// -[SCBatchStoriesMixerRequester isNewUser]
// Type encoding: B16@0:8
// Implementation: 0x107c0d238

// -[SCBatchStoriesMixerRequester setIsNewUser:]
// Type encoding: v20@0:8B16
// Implementation: 0x107c0d244

// -[SCBatchStoriesMixerRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107c0d24c

@end
