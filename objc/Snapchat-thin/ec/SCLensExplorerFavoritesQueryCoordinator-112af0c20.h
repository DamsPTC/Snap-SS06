// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerFavoritesQueryCoordinator
// Superclass: NSObject
// Address: 0x112af0c20

@interface SCLensExplorerFavoritesQueryCoordinator

// Property: isEmpty; attributes: T@"SCFuture",R,N
// Property: isLoading; attributes: TB,R,N
// Property: currentQuery; attributes: T@"SCLensExplorerQuery",C,N

// -[SCLensExplorerFavoritesQueryCoordinator initWithBaseQueryCoordinator:lensDataStore:lensFavoritesUpdater:favoritesUpdatePerformer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1066ee224

// -[SCLensExplorerFavoritesQueryCoordinator isEmpty]
// Type encoding: @16@0:8
// Implementation: 0x1066ee338

// -[SCLensExplorerFavoritesQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1066ee340

// -[SCLensExplorerFavoritesQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066ee348

// -[SCLensExplorerFavoritesQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066ee350

// -[SCLensExplorerFavoritesQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066ee358

// -[SCLensExplorerFavoritesQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066ee360

// -[SCLensExplorerFavoritesQueryCoordinator handleFeedItems:remoteState:forQueryResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066ee368

// -[SCLensExplorerFavoritesQueryCoordinator reset]
// Type encoding: v16@0:8
// Implementation: 0x1066ee440

// -[SCLensExplorerFavoritesQueryCoordinator _observeFavoritesDataStores]
// Type encoding: v16@0:8
// Implementation: 0x1066ee448

// -[SCLensExplorerFavoritesQueryCoordinator _synchronizeFavoritesData:requestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066ee890

// -[SCLensExplorerFavoritesQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066eea90

@end
