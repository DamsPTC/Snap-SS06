// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerDataStore
// Superclass: NSObject
// Address: 0x112aeee98

@interface SCLensExplorerDataStore

// Property: remoteState; attributes: T@"SCLensExplorerDataStoreRemoteState",&,V_remoteState
// Property: allItems; attributes: T@"SCObservable",R
// Property: dataStoreIdentifier; attributes: T@"NSString",R,N,V_dataStoreIdentifier
// Property: isEmpty; attributes: T@"SCFuture",R,N

// -[SCLensExplorerDataStore initWithPerformer:itemsStore:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066b7a64

// -[SCLensExplorerDataStore allItems]
// Type encoding: @16@0:8
// Implementation: 0x1066b7b40

// -[SCLensExplorerDataStore isEmpty]
// Type encoding: @16@0:8
// Implementation: 0x1066b7b48

// -[SCLensExplorerDataStore appendItems:remoteState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066b7cc0

// -[SCLensExplorerDataStore removeAllItems]
// Type encoding: v16@0:8
// Implementation: 0x1066b7dd8

// -[SCLensExplorerDataStore updateItems:remoteState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066b7e4c

// -[SCLensExplorerDataStore dataStoreIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1066b7f64

// -[SCLensExplorerDataStore remoteState]
// Type encoding: @16@0:8
// Implementation: 0x1066b7f6c

// -[SCLensExplorerDataStore setRemoteState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066b7f78

// -[SCLensExplorerDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066b7f80

@end
