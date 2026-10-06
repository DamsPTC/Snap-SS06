// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPItemsLoaderDeltaForce
// Superclass: NSObject
// Address: 0x112a46518

@interface CTPItemsLoaderDeltaForce

// Property: loaderType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPItemsLoaderDeltaForce initWithDeltaSyncService:itemsPersistenceService:feedsPersistenceService:networkItemsClient:logger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10557ebe8

// -[CTPItemsLoaderDeltaForce loaderType]
// Type encoding: Q16@0:8
// Implementation: 0x10557ed44

// -[CTPItemsLoaderDeltaForce itemsForFeed:returnCachedFirst:useChecksum:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x10557ed4c

// -[CTPItemsLoaderDeltaForce itemsForFeed:allowRetry:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10557ed54

// -[CTPItemsLoaderDeltaForce continuouslyUpdatingItemsForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x10557f6a8

// -[CTPItemsLoaderDeltaForce _createObservableFromFuture:]
// Type encoding: @24@0:8@16
// Implementation: 0x10557fc60

// -[CTPItemsLoaderDeltaForce _saveFeedDeltaSyncKeyIfNecessary:groupKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10557fe00

// -[CTPItemsLoaderDeltaForce _loadItemsForDeltaSyncKey:feed:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105580060

// -[CTPItemsLoaderDeltaForce _deltaSyncDidFinishForFeed:key:error:subject:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105580388

// -[CTPItemsLoaderDeltaForce _loadSyncedItemsFromCacheForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x10558088c

// -[CTPItemsLoaderDeltaForce _handleFutureItems:error:promise:feed:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105580a78

// -[CTPItemsLoaderDeltaForce _itemsGroupForPersistedItems:feed:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105580b6c

// -[CTPItemsLoaderDeltaForce .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105580cf4

@end
