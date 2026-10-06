// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerBaseQueryCoordinator
// Superclass: NSObject
// Address: 0x112af0388

@interface SCLensExplorerBaseQueryCoordinator

// Property: requestProvider; attributes: T@"<SCLensExplorerRequestProviderProtocol>",R,N,V_requestProvider
// Property: responseParser; attributes: T@"<SCLensExplorerResponseParsing>",R,N,V_responseParser
// Property: isEmpty; attributes: T@"SCFuture",R,N
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: currentQuery; attributes: T@"SCLensExplorerQuery",C,N

// -[SCLensExplorerBaseQueryCoordinator initWithRequestManager:requestProvider:responseParser:dynamicUpdateHandler:dataStore:queryStatusChecker:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1066e0ffc

// -[SCLensExplorerBaseQueryCoordinator isEmpty]
// Type encoding: @16@0:8
// Implementation: 0x1066e11fc

// -[SCLensExplorerBaseQueryCoordinator requestForQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066e1204

// -[SCLensExplorerBaseQueryCoordinator handleResponse:forQueryResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066e120c

// -[SCLensExplorerBaseQueryCoordinator handleReceivedResponseFeeds:forQueryResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066e12a4

// -[SCLensExplorerBaseQueryCoordinator handleFeedItems:remoteState:forQueryResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066e12ac

// -[SCLensExplorerBaseQueryCoordinator handleError:forQueryResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066e14dc

// -[SCLensExplorerBaseQueryCoordinator reset]
// Type encoding: v16@0:8
// Implementation: 0x1066e14e4

// -[SCLensExplorerBaseQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066e15c4

// -[SCLensExplorerBaseQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066e15cc

// -[SCLensExplorerBaseQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066e15d4

// -[SCLensExplorerBaseQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066e15dc

// -[SCLensExplorerBaseQueryCoordinator _didUpdateDataStoreWithQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066e1964

// -[SCLensExplorerBaseQueryCoordinator _sendQuery:request:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066e1bc0

// -[SCLensExplorerBaseQueryCoordinator _handleRequestResult:query:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066e1e00

// -[SCLensExplorerBaseQueryCoordinator _notifyUpdatingBlocksWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066e2064

// -[SCLensExplorerBaseQueryCoordinator _queryResultWithQuery:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1066e2188

// -[SCLensExplorerBaseQueryCoordinator _addPendingUpdatingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1066e2204

// -[SCLensExplorerBaseQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1066e2244

// -[SCLensExplorerBaseQueryCoordinator requestProvider]
// Type encoding: @16@0:8
// Implementation: 0x1066e224c

// -[SCLensExplorerBaseQueryCoordinator responseParser]
// Type encoding: @16@0:8
// Implementation: 0x1066e2254

// -[SCLensExplorerBaseQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066e225c

@end
