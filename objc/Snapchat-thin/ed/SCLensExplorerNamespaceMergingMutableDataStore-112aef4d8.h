// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerNamespaceMergingMutableDataStore
// Superclass: NSObject
// Address: 0x112aef4d8

@interface SCLensExplorerNamespaceMergingMutableDataStore

// Property: auxiliaryItemsObservable; attributes: T@"SCObservable",R,N
// Property: remoteState; attributes: T@"SCLensExplorerDataStoreRemoteState",R
// Property: allItems; attributes: T@"SCObservable",R
// Property: dataStoreIdentifier; attributes: T@"NSString",R,N,V_dataStoreIdentifier
// Property: isEmpty; attributes: T@"SCFuture",R,N
// Property: mergedItems; attributes: T@"SCObservable",R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerNamespaceMergingMutableDataStore initWithBaseDataStore:mergedContainerIdentifier:mergedContainerTitle:renderStrategy:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1066c3cb4

// -[SCLensExplorerNamespaceMergingMutableDataStore remoteState]
// Type encoding: @16@0:8
// Implementation: 0x1066c3e90

// -[SCLensExplorerNamespaceMergingMutableDataStore allItems]
// Type encoding: @16@0:8
// Implementation: 0x1066c3efc

// -[SCLensExplorerNamespaceMergingMutableDataStore mergedItems]
// Type encoding: @16@0:8
// Implementation: 0x1066c3f24

// -[SCLensExplorerNamespaceMergingMutableDataStore isEmpty]
// Type encoding: @16@0:8
// Implementation: 0x1066c3f4c

// -[SCLensExplorerNamespaceMergingMutableDataStore appendItems:remoteState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066c3ff8

// -[SCLensExplorerNamespaceMergingMutableDataStore updateItems:remoteState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066c4224

// -[SCLensExplorerNamespaceMergingMutableDataStore updateMergedNamespaceItems:remoteState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066c4424

// -[SCLensExplorerNamespaceMergingMutableDataStore auxiliaryItemsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1066c4620

// -[SCLensExplorerNamespaceMergingMutableDataStore _computeCurrentOutputsIntoCanonicalItems:mergedItems:baseStoreItems:]
// Type encoding: v40@0:8^@16^@24^@32
// Implementation: 0x1066c4648

// -[SCLensExplorerNamespaceMergingMutableDataStore _emitCurrentStateWithMergedItems:canonicalItems:baseStoreItems:shouldEmitMerged:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1066c49e8

// -[SCLensExplorerNamespaceMergingMutableDataStore _containerItemFromAuxiliaryItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c4af0

// -[SCLensExplorerNamespaceMergingMutableDataStore _dedupedAuxiliaryLensItems]
// Type encoding: @16@0:8
// Implementation: 0x1066c4c80

// -[SCLensExplorerNamespaceMergingMutableDataStore _baseStoreLensIdsFromItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c4ea0

// -[SCLensExplorerNamespaceMergingMutableDataStore _lensItemFromFeedItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c5108

// -[SCLensExplorerNamespaceMergingMutableDataStore _lensItemFromContainerContentItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c5244

// -[SCLensExplorerNamespaceMergingMutableDataStore _containerItemFromFeedItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c5364

// -[SCLensExplorerNamespaceMergingMutableDataStore dataStoreIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1066c5488

// -[SCLensExplorerNamespaceMergingMutableDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066c5490

@end
