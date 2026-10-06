// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesActiveStoryNetworkRequester
// Superclass: NSObject
// Address: 0x112a837d8

@interface SCStoriesActiveStoryNetworkRequester


// -[SCStoriesActiveStoryNetworkRequester initWithRequestMetadataService:requestModifier:userSession:grapheneMetricsEmitter:networkConnectivityMonitor:locationProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105a1a30c

// -[SCStoriesActiveStoryNetworkRequester fetchActiveStoryWithRequestSource:requestOrigin:userIds:completionQueue:completion:]
// Type encoding: v56@0:8q16q24@32@40@?48
// Implementation: 0x105a1a460

// -[SCStoriesActiveStoryNetworkRequester _logNetworkMetricsWithPath:requestSource:success:requestSize:responseSize:]
// Type encoding: v52@0:8@16@24B32q36q44
// Implementation: 0x105a1a4f8

// -[SCStoriesActiveStoryNetworkRequester _sendRequest:requestSource:completionQueue:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x105a1a500

// -[SCStoriesActiveStoryNetworkRequester _createGetActiveStoryStatusRequestWithUserIds:requestOrigin:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x105a1a8c4

// -[SCStoriesActiveStoryNetworkRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a1ac00

@end
