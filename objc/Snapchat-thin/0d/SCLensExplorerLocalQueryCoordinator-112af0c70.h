// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerLocalQueryCoordinator
// Superclass: NSObject
// Address: 0x112af0c70

@interface SCLensExplorerLocalQueryCoordinator

// Property: isFeedsDataHandled; attributes: TB,V_isFeedsDataHandled
// Property: isEmpty; attributes: T@"SCFuture",R,N
// Property: isLoading; attributes: TB,R,N
// Property: currentQuery; attributes: T@"SCLensExplorerQuery",C,N

// -[SCLensExplorerLocalQueryCoordinator initWithQueryCoordinator:feedModelsStorage:dynamicUpdateHandler:sectionId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1066eeafc

// -[SCLensExplorerLocalQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066eebd8

// -[SCLensExplorerLocalQueryCoordinator isEmpty]
// Type encoding: @16@0:8
// Implementation: 0x1066eeea0

// -[SCLensExplorerLocalQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1066eeea8

// -[SCLensExplorerLocalQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066eeeb0

// -[SCLensExplorerLocalQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066eeeb8

// -[SCLensExplorerLocalQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066eeec0

// -[SCLensExplorerLocalQueryCoordinator handleFeedItems:remoteState:forQueryResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066eeec8

// -[SCLensExplorerLocalQueryCoordinator reset]
// Type encoding: v16@0:8
// Implementation: 0x1066eeed0

// -[SCLensExplorerLocalQueryCoordinator _setupCachedItemsObserverForQuery:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066eef08

// -[SCLensExplorerLocalQueryCoordinator _isObservingCachedItems]
// Type encoding: B16@0:8
// Implementation: 0x1066ef14c

// -[SCLensExplorerLocalQueryCoordinator _setCachedItemsObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066ef188

// -[SCLensExplorerLocalQueryCoordinator _cancelCachedItemsObservation]
// Type encoding: v16@0:8
// Implementation: 0x1066ef1e8

// -[SCLensExplorerLocalQueryCoordinator _isCacheDataValidWithFeedModels:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066ef234

// -[SCLensExplorerLocalQueryCoordinator isFeedsDataHandled]
// Type encoding: B16@0:8
// Implementation: 0x1066ef2d0

// -[SCLensExplorerLocalQueryCoordinator setIsFeedsDataHandled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1066ef2dc

// -[SCLensExplorerLocalQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066ef2e4

@end
