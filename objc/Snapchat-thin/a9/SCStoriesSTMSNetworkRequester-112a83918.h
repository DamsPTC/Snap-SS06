// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSTMSNetworkRequester
// Superclass: NSObject
// Address: 0x112a83918

@interface SCStoriesSTMSNetworkRequester

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesSTMSNetworkRequester initWithRequestMetadataService:requestModifier:userSession:grapheneMetricsEmitter:networkConnectivityMonitor:locationProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105a1c2e0

// -[SCStoriesSTMSNetworkRequester fetchActiveStoryWithRequestSource:requestOrigin:userIds:completionQueue:completion:]
// Type encoding: v56@0:8q16q24@32@40@?48
// Implementation: 0x105a1c934

// -[SCStoriesSTMSNetworkRequester setStoryPrivacy:toBlockUserIds:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105a1c9d4

// -[SCStoriesSTMSNetworkRequester boostStories:startTime:endTime:completionQueue:completion:]
// Type encoding: v56@0:8@16d24d32@40@?48
// Implementation: 0x105a1ca7c

// -[SCStoriesSTMSNetworkRequester fetchStoryDraftingSnapsWithQuery:draftingStatus:storyOwner:completionQueue:completion:]
// Type encoding: v52@0:8@16i24@28@36@?44
// Implementation: 0x105a1cb1c

// -[SCStoriesSTMSNetworkRequester deleteStoryDraftingSnapsWithIds:storyOwner:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105a1cbcc

// -[SCStoriesSTMSNetworkRequester updateStoryDraftingSnapsWithGoLiveTimestamps:storyOwner:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105a1cc74

// -[SCStoriesSTMSNetworkRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a1cd1c

@end
