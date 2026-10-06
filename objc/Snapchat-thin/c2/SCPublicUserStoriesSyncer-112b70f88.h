// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPublicUserStoriesSyncer
// Superclass: NSObject
// Address: 0x112b70f88

@interface SCPublicUserStoriesSyncer


// -[SCPublicUserStoriesSyncer initWithDocObjectContext:performer:mixerRequester:storiesSnapchatterFetcher:circumstanceEngine:grapheneMetricsEmitter:adConfigProvider:networkConnectivityMonitor:locationProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x100939690

// -[SCPublicUserStoriesSyncer fetchPublicUserStoriesWithUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b12a88

// -[SCPublicUserStoriesSyncer _handleBatchStoryLookupResponse:userIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b12c88

// -[SCPublicUserStoriesSyncer _processBatchStoryLookupResponse:userIds:userIdToSnapchatterMap:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b12e30

// -[SCPublicUserStoriesSyncer _batchStoryLookupRequestWithUserIds:ignoreBlockerStories:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107b12f70

// -[SCPublicUserStoriesSyncer _fetchExistingUserIdToSequenceMappingWithUserIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b13264

// -[SCPublicUserStoriesSyncer _requestClientInfo]
// Type encoding: @16@0:8
// Implementation: 0x107b13310

// -[SCPublicUserStoriesSyncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b1331c

@end
