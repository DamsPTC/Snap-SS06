// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUnlockerAction
// Superclass: NSObject
// Address: 0x112c6c068

@interface SCLensUnlockerAction

// Property: toUnlockAction; attributes: T@"SCLensUnlockAction",R,N
// Property: lensId; attributes: T@"NSString",R,C,N,V_lensId
// Property: expirationDate; attributes: T@"NSDate",R,N,V_expirationDate
// Property: actionType; attributes: TQ,R,N,V_actionType
// Property: unlockType; attributes: TQ,R,N,V_unlockType
// Property: unlockSource; attributes: TQ,R,N,V_unlockSource
// Property: machineReadableCode; attributes: T@"SCMachineReadableCodeResult",R,N,V_machineReadableCode
// Property: lensMetadata; attributes: T@"SCLens",R,N,V_lensMetadata
// Property: snapId; attributes: T@"NSString",R,C,N,V_snapId
// Property: unlockableSnapInfo; attributes: T@"NSString",R,C,N,V_unlockableSnapInfo
// Property: lensCollectionId; attributes: T@"NSString",R,C,N,V_lensCollectionId

// -[SCLensUnlockerAction toUnlockAction]
// Type encoding: @16@0:8
// Implementation: 0x10b0b3b7c

// -[SCLensUnlockerAction initWithLensId:actionType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b0b790c

// -[SCLensUnlockerAction initWithLensMetadata:actionType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b0b7914

// -[SCLensUnlockerAction initWithLensId:actionType:unlockSource:lensCollectionId:]
// Type encoding: @48@0:8@16Q24Q32@40
// Implementation: 0x10b0b79a4

// -[SCLensUnlockerAction initWithLensId:actionType:expirationDate:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x10b0b79b0

// -[SCLensUnlockerAction initWithLensId:actionType:unlockSource:expirationDate:lensCollectionId:]
// Type encoding: @56@0:8@16Q24Q32@40@48
// Implementation: 0x10b0b79c0

// -[SCLensUnlockerAction initWithMachineReadableCode:actionType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b0b79fc

// -[SCLensUnlockerAction initWithLensId:machineReadableCode:actionType:unlockType:unlockSource:expirationDate:snapId:lensCollectionId:unlockableSnapInfo:lensMetadata:]
// Type encoding: @96@0:8@16@24Q32Q40Q48@56@64@72@80@88
// Implementation: 0x10b0b7a38

// -[SCLensUnlockerAction lensId]
// Type encoding: @16@0:8
// Implementation: 0x10b0b7c64

// -[SCLensUnlockerAction expirationDate]
// Type encoding: @16@0:8
// Implementation: 0x10b0b7c6c

// -[SCLensUnlockerAction actionType]
// Type encoding: Q16@0:8
// Implementation: 0x10b0b7c74

// -[SCLensUnlockerAction unlockType]
// Type encoding: Q16@0:8
// Implementation: 0x10b0b7c7c

// -[SCLensUnlockerAction unlockSource]
// Type encoding: Q16@0:8
// Implementation: 0x10b0b7c84

// -[SCLensUnlockerAction machineReadableCode]
// Type encoding: @16@0:8
// Implementation: 0x10b0b7c8c

// -[SCLensUnlockerAction lensMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b0b7c94

// -[SCLensUnlockerAction snapId]
// Type encoding: @16@0:8
// Implementation: 0x10b0b7c9c

// -[SCLensUnlockerAction unlockableSnapInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b0b7ca4

// -[SCLensUnlockerAction lensCollectionId]
// Type encoding: @16@0:8
// Implementation: 0x10b0b7cac

// -[SCLensUnlockerAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0b7cb4

// +[SCLensUnlockerAction _expirationDateForAction:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b0b7bf8

@end
