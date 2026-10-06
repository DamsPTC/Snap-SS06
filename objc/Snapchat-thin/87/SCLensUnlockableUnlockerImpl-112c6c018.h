// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUnlockableUnlockerImpl
// Superclass: NSObject
// Address: 0x112c6c018

@interface SCLensUnlockableUnlockerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: unlockedLensMetadataObservable; attributes: T@"SCObservable",R,N,VunlockedLensMetadataObservable

// -[SCLensUnlockableUnlockerImpl initWithNetworkManager:unlockManager:localLensCache:dataStoreWriter:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100bc9064

// -[SCLensUnlockableUnlockerImpl initWithNetworkManager:unlockManager:localLensCache:dataStoreWriter:queuePerformer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100bc9138

// -[SCLensUnlockableUnlockerImpl performAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0b63b8

// -[SCLensUnlockableUnlockerImpl performAction:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10b0b6580

// -[SCLensUnlockableUnlockerImpl _performAction:completion:callbackQueue:defaultErrorHandler:]
// Type encoding: v48@0:8@16@?24@32@?40
// Implementation: 0x10b0b692c

// -[SCLensUnlockableUnlockerImpl _performAction:existingLens:startTime:completion:callbackQueue:defaultErrorHandler:]
// Type encoding: v64@0:8@16@24d32@?40@48@?56
// Implementation: 0x10b0b6bfc

// -[SCLensUnlockableUnlockerImpl _requestDidSucceedWithStatusCode:action:metadata:shouldAddToUnlockStore:duration:completion:callbackQueue:]
// Type encoding: v68@0:8q16@24@32B40d44@?52@60
// Implementation: 0x10b0b7438

// -[SCLensUnlockableUnlockerImpl unlockedLensMetadataObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0b78a4

// -[SCLensUnlockableUnlockerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0b78ac

@end
