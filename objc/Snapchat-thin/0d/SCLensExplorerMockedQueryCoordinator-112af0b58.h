// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerMockedQueryCoordinator
// Superclass: NSObject
// Address: 0x112af0b58

@interface SCLensExplorerMockedQueryCoordinator

// Property: isEmpty; attributes: T@"SCFuture",R,N
// Property: isLoading; attributes: TB,R,N,VisLoading
// Property: currentQuery; attributes: T@"SCLensExplorerQuery",C,N,VcurrentQuery

// -[SCLensExplorerMockedQueryCoordinator initWithRealQueryCoordinator:queryStatusChecker:dataStore:dynamicUpdateHandler:corrdinatorSectionIdentifier:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1066ed4a8

// -[SCLensExplorerMockedQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066ed658

// -[SCLensExplorerMockedQueryCoordinator handleFeedItems:remoteState:forQueryResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066ed744

// -[SCLensExplorerMockedQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066ed820

// -[SCLensExplorerMockedQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066ed860

// -[SCLensExplorerMockedQueryCoordinator isEmpty]
// Type encoding: @16@0:8
// Implementation: 0x1066ed998

// -[SCLensExplorerMockedQueryCoordinator reset]
// Type encoding: v16@0:8
// Implementation: 0x1066ed9d8

// -[SCLensExplorerMockedQueryCoordinator _updateDataStoreWithRegularLensesForQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066eda08

// -[SCLensExplorerMockedQueryCoordinator _updateDataStoreWithCreatorItems]
// Type encoding: v16@0:8
// Implementation: 0x1066edb44

// -[SCLensExplorerMockedQueryCoordinator _realResultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066edbc4

// -[SCLensExplorerMockedQueryCoordinator _mockedResultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066edbcc

// -[SCLensExplorerMockedQueryCoordinator _shouldOverrideResultsForQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066ede18

// -[SCLensExplorerMockedQueryCoordinator _fallbackToRealCoordinator]
// Type encoding: B16@0:8
// Implementation: 0x1066edf20

// -[SCLensExplorerMockedQueryCoordinator _reloadRealSubscription]
// Type encoding: v16@0:8
// Implementation: 0x1066edf34

// -[SCLensExplorerMockedQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066ee05c

// -[SCLensExplorerMockedQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x1066ee064

// -[SCLensExplorerMockedQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066ee06c

// +[SCLensExplorerMockedQueryCoordinator isAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1066ed73c

@end
