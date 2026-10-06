// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerMockedFavoritesQueryCoordinator
// Superclass: SCLensExplorerFavoritesQueryCoordinator
// Address: 0x112af0b08

@interface SCLensExplorerMockedFavoritesQueryCoordinator

// Property: isEmpty; attributes: T@"SCFuture",R,N
// Property: isLoading; attributes: TB,R,N,VisLoading
// Property: currentQuery; attributes: T@"SCLensExplorerQuery",C,N,VcurrentQuery

// -[SCLensExplorerMockedFavoritesQueryCoordinator initWithBaseQueryCoordinator:lensDataStore:queryStatusChecker:lensFavoritesUpdater:favoritesMockedObservable:favoritesUpdatePerformer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1066ec9cc

// -[SCLensExplorerMockedFavoritesQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066ecb08

// -[SCLensExplorerMockedFavoritesQueryCoordinator handleFeedItems:remoteState:forQueryResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066ecc98

// -[SCLensExplorerMockedFavoritesQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066ecc9c

// -[SCLensExplorerMockedFavoritesQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066eccac

// -[SCLensExplorerMockedFavoritesQueryCoordinator isEmpty]
// Type encoding: @16@0:8
// Implementation: 0x1066eccbc

// -[SCLensExplorerMockedFavoritesQueryCoordinator reset]
// Type encoding: v16@0:8
// Implementation: 0x1066ecccc

// -[SCLensExplorerMockedFavoritesQueryCoordinator _handleQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066eccdc

// -[SCLensExplorerMockedFavoritesQueryCoordinator _setupFavoritesObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066ece00

// -[SCLensExplorerMockedFavoritesQueryCoordinator _updateDataStoreWithRegularLenses]
// Type encoding: v16@0:8
// Implementation: 0x1066ed3b8

// -[SCLensExplorerMockedFavoritesQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066ed41c

// -[SCLensExplorerMockedFavoritesQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1066ed428

// -[SCLensExplorerMockedFavoritesQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066ed438

// +[SCLensExplorerMockedFavoritesQueryCoordinator isAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1066ecc90

@end
