// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: IGListReloadTransaction
// Superclass: NSObject
// Address: 0x112b89858

@interface IGListReloadTransaction

// Property: collectionView; attributes: T@"UICollectionView",R,C,N,V_collectionView
// Property: updater; attributes: T@"IGListAdapterUpdater",R,W,N,V_updater
// Property: delegate; attributes: T@"<IGListAdapterUpdaterDelegate>",R,W,N,V_delegate
// Property: reloadBlock; attributes: T@?,R,C,N,V_reloadBlock
// Property: itemUpdateBlocks; attributes: T@"NSArray",R,C,N,V_itemUpdateBlocks
// Property: completionBlocks; attributes: T@"NSArray",R,C,N,V_completionBlocks
// Property: state; attributes: Tq,N,V_state
// Property: inUpdateCompletionBlocks; attributes: T@"NSMutableArray",R,C,N,V_inUpdateCompletionBlocks
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[IGListReloadTransaction initWithCollectionViewBlock:updater:delegate:reloadBlock:itemUpdateBlocks:completionBlocks:]
// Type encoding: @64@0:8@?16@24@32@?40@48@56
// Implementation: 0x107ea1484

// -[IGListReloadTransaction begin]
// Type encoding: v16@0:8
// Implementation: 0x107ea15f4

// -[IGListReloadTransaction _executeCompletionBlocks:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ea194c

// -[IGListReloadTransaction cancel]
// Type encoding: B16@0:8
// Implementation: 0x107ea1b24

// -[IGListReloadTransaction insertItemsAtIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ea1b2c

// -[IGListReloadTransaction deleteItemsAtIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ea1b30

// -[IGListReloadTransaction moveItemFromIndexPath:toIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ea1b34

// -[IGListReloadTransaction reloadItemFromIndexPath:toIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ea1b38

// -[IGListReloadTransaction reloadSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ea1b3c

// -[IGListReloadTransaction addCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ea1b40

// -[IGListReloadTransaction collectionView]
// Type encoding: @16@0:8
// Implementation: 0x107ea1be8

// -[IGListReloadTransaction updater]
// Type encoding: @16@0:8
// Implementation: 0x107ea1bf0

// -[IGListReloadTransaction delegate]
// Type encoding: @16@0:8
// Implementation: 0x107ea1c08

// -[IGListReloadTransaction reloadBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107ea1c20

// -[IGListReloadTransaction itemUpdateBlocks]
// Type encoding: @16@0:8
// Implementation: 0x107ea1c28

// -[IGListReloadTransaction completionBlocks]
// Type encoding: @16@0:8
// Implementation: 0x107ea1c30

// -[IGListReloadTransaction state]
// Type encoding: q16@0:8
// Implementation: 0x107ea1c38

// -[IGListReloadTransaction setState:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ea1c40

// -[IGListReloadTransaction inUpdateCompletionBlocks]
// Type encoding: @16@0:8
// Implementation: 0x107ea1c48

// -[IGListReloadTransaction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ea1c50

@end
