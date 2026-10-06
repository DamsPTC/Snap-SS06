// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerContainersDataStore
// Superclass: NSObject
// Address: 0x112aeee48

@interface SCLensExplorerContainersDataStore

// Property: containersIdentifiers; attributes: T@"SCObservable",R,N,V_sectionIdentifiersSubject
// Property: continuousDataStore; attributes: T@"<SCLensExplorerDataStoreProtocol>",R,N
// Property: remoteState; attributes: T@"SCLensExplorerDataStoreRemoteState",R
// Property: allItems; attributes: T@"SCObservable",R
// Property: dataStoreIdentifier; attributes: T@"NSString",R,N,V_dataStoreIdentifier
// Property: isEmpty; attributes: T@"SCFuture",R,N

// -[SCLensExplorerContainersDataStore initWithStore:dataStoreFactory:sectionsDataStore:originalSectionIdentifier:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1066b685c

// -[SCLensExplorerContainersDataStore continuousDataStore]
// Type encoding: @16@0:8
// Implementation: 0x1066b6aec

// -[SCLensExplorerContainersDataStore isEmpty]
// Type encoding: @16@0:8
// Implementation: 0x1066b6b14

// -[SCLensExplorerContainersDataStore appendItems:remoteState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066b6b1c

// -[SCLensExplorerContainersDataStore updateItems:remoteState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066b6b24

// -[SCLensExplorerContainersDataStore allItems]
// Type encoding: @16@0:8
// Implementation: 0x1066b6c58

// -[SCLensExplorerContainersDataStore remoteState]
// Type encoding: @16@0:8
// Implementation: 0x1066b6c60

// -[SCLensExplorerContainersDataStore _receiveBaseConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066b6c68

// -[SCLensExplorerContainersDataStore _handleUpdateWithItems:remoteState:isAppend:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1066b6c98

// -[SCLensExplorerContainersDataStore _handleContinuationItems:remoteState:isAppend:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1066b75d0

// -[SCLensExplorerContainersDataStore _sectionIdentifierForContainer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066b7688

// -[SCLensExplorerContainersDataStore _remoteStateForContainer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066b771c

// -[SCLensExplorerContainersDataStore _sectionDataSourceForContainer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066b77a8

// -[SCLensExplorerContainersDataStore _loggingIdentifierForContainer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066b7864

// -[SCLensExplorerContainersDataStore _shouldUpdateContainerItemsStoreWithContainer:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066b7918

// -[SCLensExplorerContainersDataStore dataStoreIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1066b79b8

// -[SCLensExplorerContainersDataStore containersIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x1066b79c0

// -[SCLensExplorerContainersDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066b79c8

@end
