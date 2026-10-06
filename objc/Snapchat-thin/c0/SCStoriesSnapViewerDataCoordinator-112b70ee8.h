// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapViewerDataCoordinator
// Superclass: NSObject
// Address: 0x112b70ee8

@interface SCStoriesSnapViewerDataCoordinator


// -[SCStoriesSnapViewerDataCoordinator initWithDocObjectContext:mixerRequester:grapheneMetricsEmitter:currentUserId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1008124b0

// -[SCStoriesSnapViewerDataCoordinator fetchViewerInfoWithBatchSnapsByType:liveSpotlightSnapExternalIds:requestSource:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b09fcc

// -[SCStoriesSnapViewerDataCoordinator fetchViewerInfoWithBatchSnapsByType:liveSpotlightSnapExternalIds:requestSource:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107b0a07c

// -[SCStoriesSnapViewerDataCoordinator _handleFetchedViewerInfoFailureWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107b0a2ec

// -[SCStoriesSnapViewerDataCoordinator _handleFetchedViewerInfoWithResponse:liveSpotlightSnapExternalIds:fetchStartTime:completionQueue:completion:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x107b0a3b0

// -[SCStoriesSnapViewerDataCoordinator _logApplyViewerInfoResponse:fetchStartTime:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x107b0a730

// -[SCStoriesSnapViewerDataCoordinator viewersWithSnapId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b0a750

// -[SCStoriesSnapViewerDataCoordinator viewersCount]
// Type encoding: q16@0:8
// Implementation: 0x107b0a758

// -[SCStoriesSnapViewerDataCoordinator allSnapIdToSnapViewers]
// Type encoding: @16@0:8
// Implementation: 0x107b0a760

// -[SCStoriesSnapViewerDataCoordinator snapIdToSnapViewersObservable]
// Type encoding: @16@0:8
// Implementation: 0x107b0a788

// -[SCStoriesSnapViewerDataCoordinator _logLatencyWithFetchStartTime:step:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x107b0a7b0

// -[SCStoriesSnapViewerDataCoordinator removeViewerInfoWithSnapIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b0a824

// -[SCStoriesSnapViewerDataCoordinator _warmupAndObserveSnapViewersOnPerformer]
// Type encoding: v16@0:8
// Implementation: 0x100812768

// -[SCStoriesSnapViewerDataCoordinator _updateCachedSnapViewersBySnapIdWithFetchedSnapViewers:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008128a0

// -[SCStoriesSnapViewerDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b0a9a8

@end
