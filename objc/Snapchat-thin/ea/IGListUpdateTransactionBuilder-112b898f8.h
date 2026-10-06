// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: IGListUpdateTransactionBuilder
// Superclass: NSObject
// Address: 0x112b898f8

@interface IGListUpdateTransactionBuilder

// Property: sectionDataBlock; attributes: T@?,C,N,V_sectionDataBlock
// Property: applySectionDataBlock; attributes: T@?,C,N,V_applySectionDataBlock
// Property: itemUpdateBlocks; attributes: T@"NSMutableArray",R,N,V_itemUpdateBlocks
// Property: animated; attributes: TB,N,V_animated
// Property: reloadBlock; attributes: T@?,C,N,V_reloadBlock
// Property: dataSourceChangeBlock; attributes: T@?,C,N,V_dataSourceChangeBlock
// Property: mode; attributes: Tq,N,V_mode
// Property: collectionViewBlock; attributes: T@?,C,N,V_collectionViewBlock
// Property: completionBlocks; attributes: T@"NSMutableArray",R,N,V_completionBlocks

// -[IGListUpdateTransactionBuilder init]
// Type encoding: @16@0:8
// Implementation: 0x107ea263c

// -[IGListUpdateTransactionBuilder addSectionBatchUpdateAnimated:collectionViewBlock:sectionDataBlock:applySectionDataBlock:completion:]
// Type encoding: v52@0:8B16@?20@?28@?36@?44
// Implementation: 0x107ea26c0

// -[IGListUpdateTransactionBuilder addItemBatchUpdateAnimated:collectionViewBlock:itemUpdates:completion:]
// Type encoding: v44@0:8B16@?20@?28@?36
// Implementation: 0x107ea27dc

// -[IGListUpdateTransactionBuilder addReloadDataWithCollectionViewBlock:reloadBlock:completion:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x107ea2908

// -[IGListUpdateTransactionBuilder addDataSourceChange:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ea29e8

// -[IGListUpdateTransactionBuilder addChangesFromBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ea2a3c

// -[IGListUpdateTransactionBuilder buildWithConfig:delegate:updater:]
// Type encoding: @48@0:8{?=BBBBBq}16@32@40
// Implementation: 0x107ea2ca8

// -[IGListUpdateTransactionBuilder hasChanges]
// Type encoding: B16@0:8
// Implementation: 0x107ea2f04

// -[IGListUpdateTransactionBuilder sectionDataBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107ea2f90

// -[IGListUpdateTransactionBuilder setSectionDataBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ea2f98

// -[IGListUpdateTransactionBuilder applySectionDataBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107ea2fa0

// -[IGListUpdateTransactionBuilder setApplySectionDataBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ea2fa8

// -[IGListUpdateTransactionBuilder itemUpdateBlocks]
// Type encoding: @16@0:8
// Implementation: 0x107ea2fb0

// -[IGListUpdateTransactionBuilder animated]
// Type encoding: B16@0:8
// Implementation: 0x107ea2fb8

// -[IGListUpdateTransactionBuilder setAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ea2fc0

// -[IGListUpdateTransactionBuilder reloadBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107ea2fc8

// -[IGListUpdateTransactionBuilder setReloadBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ea2fd0

// -[IGListUpdateTransactionBuilder dataSourceChangeBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107ea2fd8

// -[IGListUpdateTransactionBuilder setDataSourceChangeBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ea2fe0

// -[IGListUpdateTransactionBuilder mode]
// Type encoding: q16@0:8
// Implementation: 0x107ea2fe8

// -[IGListUpdateTransactionBuilder setMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ea2ff0

// -[IGListUpdateTransactionBuilder collectionViewBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107ea2ff8

// -[IGListUpdateTransactionBuilder setCollectionViewBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ea3000

// -[IGListUpdateTransactionBuilder completionBlocks]
// Type encoding: @16@0:8
// Implementation: 0x107ea3008

// -[IGListUpdateTransactionBuilder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ea3010

@end
