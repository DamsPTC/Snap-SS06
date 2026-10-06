// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPKmpItemsLoaderDeltaForce
// Superclass: NSObject
// Address: 0x112a465b8

@interface CTPKmpItemsLoaderDeltaForce

// Property: loaderType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPKmpItemsLoaderDeltaForce initWithDeltaSyncService:kmpDataPersistenceService:networkItemsClient:crashLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105581254

// -[CTPKmpItemsLoaderDeltaForce loaderType]
// Type encoding: Q16@0:8
// Implementation: 0x105581388

// -[CTPKmpItemsLoaderDeltaForce itemsForFeed:returnCachedFirst:useChecksum:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x105581390

// -[CTPKmpItemsLoaderDeltaForce _getDeltaSyncKey:groupKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105581784

// -[CTPKmpItemsLoaderDeltaForce continuouslyUpdatingItemsForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x10558197c

// -[CTPKmpItemsLoaderDeltaForce _loadItemsForDeltaSyncKey:feed:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105581988

// -[CTPKmpItemsLoaderDeltaForce _deltaSyncWithKey:feed:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105581cc4

// -[CTPKmpItemsLoaderDeltaForce _getFeedTypeOriginForKey:feed:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105581f08

// -[CTPKmpItemsLoaderDeltaForce _getItemsByFeedType:origin:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055823cc

// -[CTPKmpItemsLoaderDeltaForce _loadSyncedItemsFromCacheForKey:feed:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055826b8

// -[CTPKmpItemsLoaderDeltaForce .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105582e60

@end
