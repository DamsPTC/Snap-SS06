// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMixerBaseQueryCoordinator
// Superclass: NSObject
// Address: 0x112af0ce8

@interface SCMixerBaseQueryCoordinator

// Property: isEmpty; attributes: T@"SCFuture",R,N
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: currentQuery; attributes: T@"SCLensExplorerQuery",C,N

// -[SCMixerBaseQueryCoordinator initWithMixerNamespaceServices:dataMapper:dynamicUpdateHandler:dataStore:queryStatusChecker:mixerNamespaceCacheOptimizationEnabled:]
// Type encoding: @60@0:8@16@24@32@40@48B56
// Implementation: 0x1066ef6e8

// -[SCMixerBaseQueryCoordinator isEmpty]
// Type encoding: @16@0:8
// Implementation: 0x1066ef8f0

// -[SCMixerBaseQueryCoordinator handleError:forQueryResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066ef8f8

// -[SCMixerBaseQueryCoordinator handleReceivedMixerNamespaceData:forQueryResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066ef8fc

// -[SCMixerBaseQueryCoordinator handleReceivedMixerFeeds:namespaceData:forQueryResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066efa04

// -[SCMixerBaseQueryCoordinator handleFeedItems:remoteState:forQueryResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066efacc

// -[SCMixerBaseQueryCoordinator reset]
// Type encoding: v16@0:8
// Implementation: 0x1066efcdc

// -[SCMixerBaseQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066efda4

// -[SCMixerBaseQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066efdac

// -[SCMixerBaseQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066efdb4

// -[SCMixerBaseQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066efdbc

// -[SCMixerBaseQueryCoordinator _sendMixerQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066f0118

// -[SCMixerBaseQueryCoordinator _observeMixerService:forQuery:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066f02d0

// -[SCMixerBaseQueryCoordinator _createMixerServiceForQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066f09a0

// -[SCMixerBaseQueryCoordinator _groupIdForQuery:]
// Type encoding: q24@0:8@16
// Implementation: 0x1066f0c34

// -[SCMixerBaseQueryCoordinator _createMixerServiceWithNamespaces:groupId:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1066f0cc4

// -[SCMixerBaseQueryCoordinator _handleMixerNamespaceData:query:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066f0de0

// -[SCMixerBaseQueryCoordinator _handleMixerFeeds:query:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066f0eb0

// -[SCMixerBaseQueryCoordinator _handleMixerFeeds:namespaceData:query:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066f0f20

// -[SCMixerBaseQueryCoordinator _handleMixerError:query:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066f0fcc

// -[SCMixerBaseQueryCoordinator _notifyUpdatingBlocksWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066f10a4

// -[SCMixerBaseQueryCoordinator _queryResultWithQuery:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1066f11d0

// -[SCMixerBaseQueryCoordinator _addPendingUpdatingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1066f124c

// -[SCMixerBaseQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1066f12ec

// -[SCMixerBaseQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066f12f4

// +[SCMixerBaseQueryCoordinator _isBatchRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066f0bc8

// +[SCMixerBaseQueryCoordinator _logStringFromNamespaces:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066f128c

@end
