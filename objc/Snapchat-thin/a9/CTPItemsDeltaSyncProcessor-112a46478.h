// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPItemsDeltaSyncProcessor
// Superclass: NSObject
// Address: 0x112a46478

@interface CTPItemsDeltaSyncProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPItemsDeltaSyncProcessor initWithNetworkItemsClient:itemsPersistenceService:feedsPersistenceService:forceFullSyncVersionManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100c032e4

// -[CTPItemsDeltaSyncProcessor docObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x10557ddcc

// -[CTPItemsDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x100c13d88

// -[CTPItemsDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x10557de14

// -[CTPItemsDeltaSyncProcessor type]
// Type encoding: @16@0:8
// Implementation: 0x10557e364

// -[CTPItemsDeltaSyncProcessor versionForGroupKey:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10557e38c

// -[CTPItemsDeltaSyncProcessor logoutCleanUpDeltaSyncGroupKeys]
// Type encoding: @16@0:8
// Implementation: 0x10557e410

// -[CTPItemsDeltaSyncProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10557e4e0

// +[CTPItemsDeltaSyncProcessor clientTypeName]
// Type encoding: @16@0:8
// Implementation: 0x100c03434

@end
