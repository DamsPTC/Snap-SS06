// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCompoundUnlocker
// Superclass: NSObject
// Address: 0x112c6bf78

@interface SCLensCompoundUnlocker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: unlockedLensMetadataObservable; attributes: T@"SCObservable",R,N,VunlockedLensMetadataObservable

// -[SCLensCompoundUnlocker initWithUnlockableUnlocker:scannableUnlocker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100bc925c

// -[SCLensCompoundUnlocker initWithUnlockableUnlocker:scannableUnlocker:unlockFlowType:queuePerformer:]
// Type encoding: @48@0:8@16@24Q32@40
// Implementation: 0x100bc9268

// -[SCLensCompoundUnlocker performAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0b46f8

// -[SCLensCompoundUnlocker performAction:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10b0b48c0

// -[SCLensCompoundUnlocker startCompoundUnlockerFlowForAction:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10b0b4bb0

// -[SCLensCompoundUnlocker unlockedLensMetadataObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0b4e54

// -[SCLensCompoundUnlocker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0b4e5c

@end
