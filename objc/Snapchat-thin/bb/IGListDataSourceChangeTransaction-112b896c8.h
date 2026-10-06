// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: IGListDataSourceChangeTransaction
// Superclass: NSObject
// Address: 0x112b896c8

@interface IGListDataSourceChangeTransaction

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[IGListDataSourceChangeTransaction initWithChangeBlock:itemUpdateBlocks:completionBlocks:]
// Type encoding: @40@0:8@?16@24@32
// Implementation: 0x107ea049c

// -[IGListDataSourceChangeTransaction state]
// Type encoding: q16@0:8
// Implementation: 0x107ea056c

// -[IGListDataSourceChangeTransaction begin]
// Type encoding: v16@0:8
// Implementation: 0x107ea0574

// -[IGListDataSourceChangeTransaction cancel]
// Type encoding: B16@0:8
// Implementation: 0x107ea07d4

// -[IGListDataSourceChangeTransaction insertItemsAtIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ea07dc

// -[IGListDataSourceChangeTransaction deleteItemsAtIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ea07e0

// -[IGListDataSourceChangeTransaction moveItemFromIndexPath:toIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ea07e4

// -[IGListDataSourceChangeTransaction reloadItemFromIndexPath:toIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ea07e8

// -[IGListDataSourceChangeTransaction reloadSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ea07ec

// -[IGListDataSourceChangeTransaction addCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ea07f0

// -[IGListDataSourceChangeTransaction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ea086c

@end
