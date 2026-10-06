// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContentSyncCacheRequestSender
// Superclass: NSObject
// Address: 0x112b06278

@interface SCContentSyncCacheRequestSender


// -[SCContentSyncCacheRequestSender initWithUnifiedGRPCClientFactory:syncCacheGrapheneMetricsEmitter:storiesConfigProvider:discoverFeedDataMutator:currentUserId:networkConnectivityMonitor:locationProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106915b24

// -[SCContentSyncCacheRequestSender _createStoryManagementService:]
// Type encoding: @24@0:8@16
// Implementation: 0x106915d3c

// -[SCContentSyncCacheRequestSender sendCacheSyncRequestWithStories:feedType:shouldTakedown:completionQueue:completion:]
// Type encoding: v52@0:8@16Q24B32@36@?44
// Implementation: 0x106915f64

// -[SCContentSyncCacheRequestSender supportedFeedTypes]
// Type encoding: @16@0:8
// Implementation: 0x10691664c

// -[SCContentSyncCacheRequestSender supportedCorpusTypes]
// Type encoding: @16@0:8
// Implementation: 0x106916674

// -[SCContentSyncCacheRequestSender _processCacheSyncResponse:feedType:stories:shouldTakedown:completionQueue:completion:]
// Type encoding: v60@0:8@16Q24@32B40@44@?52
// Implementation: 0x10691669c

// -[SCContentSyncCacheRequestSender _updateUnviewableSnapsByStoryDedupeFp:downloadDateByStoryDedupeFp:shouldTakedown:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106916ec4

// -[SCContentSyncCacheRequestSender _callOptionBuilder]
// Type encoding: @16@0:8
// Implementation: 0x106916f48

// -[SCContentSyncCacheRequestSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106917008

@end
