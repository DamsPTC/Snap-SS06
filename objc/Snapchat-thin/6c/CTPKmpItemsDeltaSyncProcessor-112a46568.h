// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPKmpItemsDeltaSyncProcessor
// Superclass: NSObject
// Address: 0x112a46568

@interface CTPKmpItemsDeltaSyncProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPKmpItemsDeltaSyncProcessor initWithKmpDeltaForcePersistenceService:forceFullSyncVersionManager:crashLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105580d84

// -[CTPKmpItemsDeltaSyncProcessor type]
// Type encoding: @16@0:8
// Implementation: 0x105580ea4

// -[CTPKmpItemsDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x105580ecc

// -[CTPKmpItemsDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x105580f18

// -[CTPKmpItemsDeltaSyncProcessor versionForGroupKey:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1055810a8

// -[CTPKmpItemsDeltaSyncProcessor logoutCleanUpDeltaSyncGroupKeys]
// Type encoding: @16@0:8
// Implementation: 0x105581130

// -[CTPKmpItemsDeltaSyncProcessor performLogoutCleanUp:transactionContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105581208

// -[CTPKmpItemsDeltaSyncProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10558120c

// +[CTPKmpItemsDeltaSyncProcessor clientTypeName]
// Type encoding: @16@0:8
// Implementation: 0x105580d54

@end
