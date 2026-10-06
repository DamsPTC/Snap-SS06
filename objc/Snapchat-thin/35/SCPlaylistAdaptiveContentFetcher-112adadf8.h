// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaylistAdaptiveContentFetcher
// Superclass: NSObject
// Address: 0x112adadf8

@interface SCPlaylistAdaptiveContentFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlaylistAdaptiveContentFetcher initWithConfigProvider:operaConfigProvider:mediaResolver:snapDocMediaResolver:prefetchProvider:prefetchPluginConfig:playbackMediaPrefetcher:viewSource:queue:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64q72@80
// Implementation: 0x1062f2414

// -[SCPlaylistAdaptiveContentFetcher triggerPrefetchWithPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062f2774

// -[SCPlaylistAdaptiveContentFetcher featureWentOffscreen]
// Type encoding: v16@0:8
// Implementation: 0x1062f2d4c

// -[SCPlaylistAdaptiveContentFetcher prefetchStateForPlaylistItemId:]
// Type encoding: q24@0:8@16
// Implementation: 0x1062f2e20

// -[SCPlaylistAdaptiveContentFetcher _processNewRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062f2eb8

// -[SCPlaylistAdaptiveContentFetcher _submitPendingRequestsWithTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062f3514

// -[SCPlaylistAdaptiveContentFetcher _maxGestureDistanceWithItemType:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1062f4344

// -[SCPlaylistAdaptiveContentFetcher _newRequestContextFromPendingPrefetch:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062f43d8

// -[SCPlaylistAdaptiveContentFetcher _populatePrefetchRequestFromItem:gestureDistance:importanceResult:pendingPrefetch:]
// Type encoding: v48@0:8@16Q24^q32@40
// Implementation: 0x1062f448c

// -[SCPlaylistAdaptiveContentFetcher _handle2DPlaylistTraversalWithPlaylist:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062f46c8

// -[SCPlaylistAdaptiveContentFetcher _populatePendingPrefetchForGroup:startPosition:pendingPrefetches:prefetchSignalsList:importanceList:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1062f4e54

// -[SCPlaylistAdaptiveContentFetcher _processNewRequestsFor2DPrefetch:maxPrefetchCount:reqGenStartTs:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x1062f57ac

// -[SCPlaylistAdaptiveContentFetcher _submitPendingRequestsForGroupPrefetchWithTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062f5e50

// -[SCPlaylistAdaptiveContentFetcher _handleMediaResolverCompletionForPlaylistItem:state:loggingId:itemType:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x1062f6a58

// -[SCPlaylistAdaptiveContentFetcher _cleanupRequestForPlaylistItem:isCancelation:loggingId:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1062f6be4

// -[SCPlaylistAdaptiveContentFetcher _handleMediaResolverCompletionForContentId:state:itemType:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1062f6cd0

// -[SCPlaylistAdaptiveContentFetcher _cleanupRequestForContentId:isCancelation:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1062f6e40

// -[SCPlaylistAdaptiveContentFetcher _cancelAllRequestsIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1062f6eec

// -[SCPlaylistAdaptiveContentFetcher _shouldSkipPrefetchForContent:]
// Type encoding: B24@0:8@16
// Implementation: 0x1062f6fec

// -[SCPlaylistAdaptiveContentFetcher _manifestRequestFromPrefetchRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062f70bc

// -[SCPlaylistAdaptiveContentFetcher _reloadPrefetchConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062f7588

// -[SCPlaylistAdaptiveContentFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062f76a4

@end
