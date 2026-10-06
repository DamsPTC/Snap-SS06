// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTopicPageNetworkRequester
// Superclass: NSObject
// Address: 0x112a822e8

@interface SCTopicPageNetworkRequester

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTopicPageNetworkRequester initWithUserId:httpMetadataService:httpRequestModifier:endpointManager:adConfigProvider:storiesCofExperimentServices:networkConnectivityMonitor:locationProvider:searchDeploymentProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1059e9360

// -[SCTopicPageNetworkRequester fetchSnapsForTopic:topicStoryType:lastStreamToken:isCameosEnabled:suggestiveFilterMode:completion:]
// Type encoding: v60@0:8@16q24@32B40q44@?52
// Implementation: 0x1059e9778

// -[SCTopicPageNetworkRequester _fetchSnapsFromSearchForTopic:topicStoryType:lastStreamToken:isCameosEnabled:suggestiveFilterMode:completion:]
// Type encoding: v60@0:8@16q24@32B40q44@?52
// Implementation: 0x1059e9a30

// -[SCTopicPageNetworkRequester _fetchSnapsForTopic:topicStoryType:lastStreamToken:isCameosEnabled:suggestiveFilterMode:completion:]
// Type encoding: v60@0:8@16q24@32B40q44@?52
// Implementation: 0x1059ea108

// -[SCTopicPageNetworkRequester _processDeltaFetchResponse:topic:requestId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1059ea5ec

// -[SCTopicPageNetworkRequester _processSearchStoryCards:topic:requestId:streamToken:eof:completion:]
// Type encoding: v60@0:8@16@24@32@40B48@?52
// Implementation: 0x1059eacb0

// -[SCTopicPageNetworkRequester _processFetchResponse:topic:requestId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1059eb020

// -[SCTopicPageNetworkRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059eb738

@end
