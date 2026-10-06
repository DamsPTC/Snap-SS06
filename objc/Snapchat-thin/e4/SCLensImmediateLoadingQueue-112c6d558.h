// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensImmediateLoadingQueue
// Superclass: NSObject
// Address: 0x112c6d558

@interface SCLensImmediateLoadingQueue

// Property: runningOperations; attributes: T@"NSMutableDictionary",R,N,V_runningOperations
// Property: lensDataFetchingStrategy; attributes: T@"<SCLensDataFetchingStrategyProtocol>",R,N,V_lensDataFetchingStrategy
// Property: lock; attributes: T{sc_lock={os_unfair_lock_s=I}},R,N,V_lock
// Property: executeOperationObservable; attributes: T@"SCObservable",R,N,V_willStartOperationSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensImmediateLoadingQueue initWithLensDataFetchingStrategy:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bb8b88

// -[SCLensImmediateLoadingQueue cancel]
// Type encoding: v16@0:8
// Implementation: 0x10b0cfc5c

// -[SCLensImmediateLoadingQueue pause]
// Type encoding: v16@0:8
// Implementation: 0x10b0cfc60

// -[SCLensImmediateLoadingQueue resume]
// Type encoding: v16@0:8
// Implementation: 0x10b0cfc64

// -[SCLensImmediateLoadingQueue addOperation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cfc68

// -[SCLensImmediateLoadingQueue _addedOrRunningOperationWithOperation:settings:isNewOperation:]
// Type encoding: @40@0:8@16@24^B32
// Implementation: 0x10b0cfd24

// -[SCLensImmediateLoadingQueue _startNewOperation:settings:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0cfeac

// -[SCLensImmediateLoadingQueue _boostExistingOperation:duplicateOperation:settings:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b0d00ac

// -[SCLensImmediateLoadingQueue _operationDidFinish:settings:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0d0210

// -[SCLensImmediateLoadingQueue executeOperationObservable]
// Type encoding: @16@0:8
// Implementation: 0x100bbae2c

// -[SCLensImmediateLoadingQueue runningOperations]
// Type encoding: @16@0:8
// Implementation: 0x10b0d02e8

// -[SCLensImmediateLoadingQueue lensDataFetchingStrategy]
// Type encoding: @16@0:8
// Implementation: 0x10b0d02f0

// -[SCLensImmediateLoadingQueue lock]
// Type encoding: {sc_lock={os_unfair_lock_s=I}}16@0:8
// Implementation: 0x10b0d02f8

// -[SCLensImmediateLoadingQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0d0300

@end
