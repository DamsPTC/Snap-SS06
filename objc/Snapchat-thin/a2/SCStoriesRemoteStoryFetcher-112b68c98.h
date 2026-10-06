// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesRemoteStoryFetcher
// Superclass: NSObject
// Address: 0x112b68c98

@interface SCStoriesRemoteStoryFetcher


// -[SCStoriesRemoteStoryFetcher initWithMixerNetworkRequester:grapheneMetricsEmitter:adConfigProvider:networkConnectivityMonitor:locationProvider:storiesConfigProvider:circumstanceEngine:adRenderDataParser:discoverFeedDataMutator:discoverFeedDataFetcher:contentObjectResolver:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1079e6c38

// -[SCStoriesRemoteStoryFetcher fetchStoriesWithUserIds:ignoreBlockerStories:source:completionQueue:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x1079e6eb8

// -[SCStoriesRemoteStoryFetcher fetchPublicUserStoriesWithUserIds:ignoreBlockerStories:source:completionQueue:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x1079e6f10

// -[SCStoriesRemoteStoryFetcher fetchSpotlightStoriesWithStoryIds:ignoreBlockerStories:source:completionQueue:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x1079e700c

// -[SCStoriesRemoteStoryFetcher _fetchStoriesWithStoryIds:ignoreBlockerStories:lookupSource:source:feedType:compositeStoryIdBuilder:compositeStoryIdParser:completionQueue:completion:]
// Type encoding: v84@0:8@16B24q28@36@44@?52@?60@68@?76
// Implementation: 0x1079e7064

// -[SCStoriesRemoteStoryFetcher _handleFetchedStoryResponse:compositeStoryIdParser:completionQueue:completion:]
// Type encoding: v48@0:8@16@?24@32@?40
// Implementation: 0x1079e742c

// -[SCStoriesRemoteStoryFetcher _batchStoryLookupRequestWithStoryIds:ignoreBlockerStories:feedType:compositeStoryIdBuilder:]
// Type encoding: @44@0:8@16B24@28@?36
// Implementation: 0x1079e7b50

// -[SCStoriesRemoteStoryFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079e7db8

@end
