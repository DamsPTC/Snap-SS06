// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBillboardStringFetcherImpl
// Superclass: NSObject
// Address: 0x112bae068

@interface SCBillboardStringFetcherImpl

// Property: syncFuture; attributes: T@"SCFuture",&,V_syncFuture
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBillboardStringFetcherImpl initWithDocObjectContext:locale:grapheneRegistry:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108b95e7c

// -[SCBillboardStringFetcherImpl stringWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x108b95f6c

// -[SCBillboardStringFetcherImpl stringWithKey:englishFallback:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108b95f8c

// -[SCBillboardStringFetcherImpl stringFutureWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x108b96068

// -[SCBillboardStringFetcherImpl stringFutureWithKey:englishFallback:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108b96088

// -[SCBillboardStringFetcherImpl stringDictFutureWithKeys:]
// Type encoding: @24@0:8@16
// Implementation: 0x108b96384

// -[SCBillboardStringFetcherImpl stringDictFutureWithKeys:englishFallback:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108b963a4

// -[SCBillboardStringFetcherImpl onSyncWillStart]
// Type encoding: v16@0:8
// Implementation: 0x108b96680

// -[SCBillboardStringFetcherImpl onSyncDidStartWithFuture:]
// Type encoding: v24@0:8@16
// Implementation: 0x108b96760

// -[SCBillboardStringFetcherImpl onSyncDidEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x108b96764

// -[SCBillboardStringFetcherImpl _stringWithKey:locale:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108b967b4

// -[SCBillboardStringFetcherImpl _getStringDictLocally:englishFallback:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108b96c28

// -[SCBillboardStringFetcherImpl _logSyncFutureNil]
// Type encoding: v16@0:8
// Implementation: 0x108b96dd0

// -[SCBillboardStringFetcherImpl _logFetchError:]
// Type encoding: v24@0:8@16
// Implementation: 0x108b96e84

// -[SCBillboardStringFetcherImpl syncFuture]
// Type encoding: @16@0:8
// Implementation: 0x108b96f64

// -[SCBillboardStringFetcherImpl setSyncFuture:]
// Type encoding: v24@0:8@16
// Implementation: 0x108b96f70

// -[SCBillboardStringFetcherImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108b96f78

@end
