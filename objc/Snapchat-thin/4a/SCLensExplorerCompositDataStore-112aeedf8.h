// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerCompositDataStore
// Superclass: NSObject
// Address: 0x112aeedf8

@interface SCLensExplorerCompositDataStore

// Property: remoteState; attributes: T@"SCLensExplorerDataStoreRemoteState",R
// Property: allItems; attributes: T@"SCObservable",R
// Property: dataStoreIdentifier; attributes: T@"NSString",R,N,V_dataStoreIdentifier
// Property: isEmpty; attributes: T@"SCFuture",R,N

// -[SCLensExplorerCompositDataStore initWithDataStores:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066b65c8

// -[SCLensExplorerCompositDataStore allItems]
// Type encoding: @16@0:8
// Implementation: 0x1066b665c

// -[SCLensExplorerCompositDataStore isEmpty]
// Type encoding: @16@0:8
// Implementation: 0x1066b66d0

// -[SCLensExplorerCompositDataStore remoteState]
// Type encoding: @16@0:8
// Implementation: 0x1066b6794

// -[SCLensExplorerCompositDataStore appendItems:remoteState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066b681c

// -[SCLensExplorerCompositDataStore updateItems:remoteState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066b6820

// -[SCLensExplorerCompositDataStore dataStoreIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1066b6824

// -[SCLensExplorerCompositDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066b682c

@end
