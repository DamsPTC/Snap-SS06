// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: IGListBatchUpdateTransaction
// Superclass: NSObject
// Address: 0x112b89678

@interface IGListBatchUpdateTransaction

// Property: collectionView; attributes: T@"UICollectionView",R,C,N,V_collectionView
// Property: updater; attributes: T@"IGListAdapterUpdater",R,W,N,V_updater
// Property: delegate; attributes: T@"<IGListAdapterUpdaterDelegate>",R,W,N,V_delegate
// Property: config; attributes: T{?=BBBBBq},R,N,V_config
// Property: animated; attributes: TB,R,N,V_animated
// Property: sectionData; attributes: T@"IGListTransitionData",R,C,N,V_sectionData
// Property: applySectionDataBlock; attributes: T@?,R,C,N,V_applySectionDataBlock
// Property: itemUpdateBlocks; attributes: T@"NSArray",R,C,N,V_itemUpdateBlocks
// Property: completionBlocks; attributes: T@"NSArray",R,C,N,V_completionBlocks
// Property: inUpdateItemCollector; attributes: T@"IGListItemUpdatesCollector",R,N,V_inUpdateItemCollector
// Property: inUpdateCompletionBlocks; attributes: T@"NSMutableArray",R,C,N,V_inUpdateCompletionBlocks
// Property: state; attributes: Tq,N,V_state
// Property: mode; attributes: Tq,N,V_mode
// Property: actualCollectionViewUpdates; attributes: T@"IGListBatchUpdateData",&,N,V_actualCollectionViewUpdates
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[IGListBatchUpdateTransaction initWithCollectionViewBlock:updater:delegate:config:animated:sectionDataBlock:applySectionDataBlock:itemUpdateBlocks:completionBlocks:]
// Type encoding: @92@0:8@?16@24@32{?=BBBBBq}40B56@?60@?68@76@84
// Implementation: 0x107e9e6f4

// -[IGListBatchUpdateTransaction begin]
// Type encoding: v16@0:8
// Implementation: 0x107e9e8dc

// -[IGListBatchUpdateTransaction _diff]
// Type encoding: v16@0:8
// Implementation: 0x107e9e930

// -[IGListBatchUpdateTransaction _didDiff:onBackground:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107e9ec4c

// -[IGListBatchUpdateTransaction _applyDiff:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9ef2c

// -[IGListBatchUpdateTransaction _applyDataUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107e9f3fc

// -[IGListBatchUpdateTransaction _applyCollectioViewUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9f590

// -[IGListBatchUpdateTransaction _didPerformBatchUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e9fa1c

// -[IGListBatchUpdateTransaction _executeCompletionAsFinished:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e9faf0

// -[IGListBatchUpdateTransaction _reload]
// Type encoding: v16@0:8
// Implementation: 0x107e9fcac

// -[IGListBatchUpdateTransaction _bail]
// Type encoding: v16@0:8
// Implementation: 0x107e9fdec

// -[IGListBatchUpdateTransaction _finishWithoutUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107e9fe78

// -[IGListBatchUpdateTransaction cancel]
// Type encoding: B16@0:8
// Implementation: 0x107e9ff04

// -[IGListBatchUpdateTransaction insertItemsAtIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9ff20

// -[IGListBatchUpdateTransaction deleteItemsAtIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e9ff90

// -[IGListBatchUpdateTransaction moveItemFromIndexPath:toIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ea0000

// -[IGListBatchUpdateTransaction reloadItemFromIndexPath:toIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ea00ac

// -[IGListBatchUpdateTransaction reloadSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ea0158

// -[IGListBatchUpdateTransaction addCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ea01c8

// -[IGListBatchUpdateTransaction collectionView]
// Type encoding: @16@0:8
// Implementation: 0x107ea0244

// -[IGListBatchUpdateTransaction updater]
// Type encoding: @16@0:8
// Implementation: 0x107ea024c

// -[IGListBatchUpdateTransaction delegate]
// Type encoding: @16@0:8
// Implementation: 0x107ea0264

// -[IGListBatchUpdateTransaction config]
// Type encoding: {?=BBBBBq}16@0:8
// Implementation: 0x107ea027c

// -[IGListBatchUpdateTransaction animated]
// Type encoding: B16@0:8
// Implementation: 0x107ea0288

// -[IGListBatchUpdateTransaction sectionData]
// Type encoding: @16@0:8
// Implementation: 0x107ea0290

// -[IGListBatchUpdateTransaction applySectionDataBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107ea0298

// -[IGListBatchUpdateTransaction itemUpdateBlocks]
// Type encoding: @16@0:8
// Implementation: 0x107ea02a0

// -[IGListBatchUpdateTransaction completionBlocks]
// Type encoding: @16@0:8
// Implementation: 0x107ea02a8

// -[IGListBatchUpdateTransaction inUpdateItemCollector]
// Type encoding: @16@0:8
// Implementation: 0x107ea02b0

// -[IGListBatchUpdateTransaction inUpdateCompletionBlocks]
// Type encoding: @16@0:8
// Implementation: 0x107ea02b8

// -[IGListBatchUpdateTransaction state]
// Type encoding: q16@0:8
// Implementation: 0x107ea02c0

// -[IGListBatchUpdateTransaction setState:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ea02c8

// -[IGListBatchUpdateTransaction mode]
// Type encoding: q16@0:8
// Implementation: 0x107ea02d0

// -[IGListBatchUpdateTransaction setMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ea02d8

// -[IGListBatchUpdateTransaction actualCollectionViewUpdates]
// Type encoding: @16@0:8
// Implementation: 0x107ea02e0

// -[IGListBatchUpdateTransaction setActualCollectionViewUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ea02e8

// -[IGListBatchUpdateTransaction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ea0318

@end
