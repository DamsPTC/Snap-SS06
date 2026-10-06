// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapInfoFetcher
// Superclass: NSObject
// Address: 0x112b92e58

@interface SCMemoriesSnapInfoFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesSnapInfoFetcher initWithNetworker:dataObjectContext:grapheneRegistry:deviceSamplingProvider:circumstanceEngine:notificationPool:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10801b82c

// -[SCMemoriesSnapInfoFetcher fetchSnapInfoForSnap:requireEdits:forceRemoteFetch:memoriesGrapheneContext:completionQueue:completion:]
// Type encoding: v56@0:8@16B24B28@32@40@?48
// Implementation: 0x10801b9ec

// -[SCMemoriesSnapInfoFetcher bulkFetchSnapInfoForSnaps:requireEdits:forceRemoteFetch:memoriesGrapheneContext:completionQueue:completion:]
// Type encoding: v56@0:8@16B24B28@32@40@?48
// Implementation: 0x10801bfd0

// -[SCMemoriesSnapInfoFetcher fetchAssetUrlForEntryId:assetType:completionQueue:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x10801c3f0

// -[SCMemoriesSnapInfoFetcher fetchEntrySnapDocForEntryId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10801c7c4

// -[SCMemoriesSnapInfoFetcher _processGetEntriesWithResponseData:entryId:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10801cdb4

// -[SCMemoriesSnapInfoFetcher _shouldFetchRemotely:requireEdits:forceRemoteFetch:]
// Type encoding: B32@0:8@16B24B28
// Implementation: 0x10801d294

// -[SCMemoriesSnapInfoFetcher _remoteFetchSnapInfoWithSnaps:requireEdits:forceRemoteFetch:memoriesGrapheneContext:resultHandler:]
// Type encoding: v48@0:8@16B24B28@32@?40
// Implementation: 0x10801d330

// -[SCMemoriesSnapInfoFetcher _checkShowDisplayNoNetworkBanner]
// Type encoding: B16@0:8
// Implementation: 0x10801dec0

// -[SCMemoriesSnapInfoFetcher _processDownloadURLWithResponse:snapIdToSnap:resultHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10801def4

// -[SCMemoriesSnapInfoFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10801e89c

@end
