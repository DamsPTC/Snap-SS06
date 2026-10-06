// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerDynamicQueryCoordinator
// Superclass: NSObject
// Address: 0x112af1418

@interface SCLensExplorerDynamicQueryCoordinator

// Property: isEmpty; attributes: T@"SCFuture",R,N
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: currentQuery; attributes: T@"SCLensExplorerQuery",C,N,V_currentQuery

// -[SCLensExplorerDynamicQueryCoordinator initWithQueryCoordinatorFactory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066f8aa0

// -[SCLensExplorerDynamicQueryCoordinator isEmpty]
// Type encoding: @16@0:8
// Implementation: 0x1066f8b34

// -[SCLensExplorerDynamicQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066f8b48

// -[SCLensExplorerDynamicQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066f8bb0

// -[SCLensExplorerDynamicQueryCoordinator handleFeedItems:remoteState:forQueryResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066f8c70

// -[SCLensExplorerDynamicQueryCoordinator reset]
// Type encoding: v16@0:8
// Implementation: 0x1066f8c74

// -[SCLensExplorerDynamicQueryCoordinator _coordinatorForQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066f8c78

// -[SCLensExplorerDynamicQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1066f8d84

// -[SCLensExplorerDynamicQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066f8d8c

// -[SCLensExplorerDynamicQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066f8d94

// -[SCLensExplorerDynamicQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066f8d9c

@end
