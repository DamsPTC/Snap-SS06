// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCEventTrackingLensUnlocker
// Superclass: NSObject
// Address: 0x112c6bf28

@interface SCEventTrackingLensUnlocker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: unlockedLensMetadataObservable; attributes: T@"SCObservable",R,N,V_unlockedLensMetadataSubject

// -[SCEventTrackingLensUnlocker initWithUnlocker:logger:grapheneLogger:lensPerformerProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100bc937c

// -[SCEventTrackingLensUnlocker performAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0b3f98

// -[SCEventTrackingLensUnlocker performAction:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10b0b41c8

// -[SCEventTrackingLensUnlocker logLensWasUnlockedWithResult:unlockerAction:duration:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x10b0b4320

// -[SCEventTrackingLensUnlocker logGrapheneEventWithResult:unlockerAction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0b4524

// -[SCEventTrackingLensUnlocker _grapheneEventTypeForUnlockType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b0b4688

// -[SCEventTrackingLensUnlocker unlockedLensMetadataObservable]
// Type encoding: @16@0:8
// Implementation: 0x100bc94f0

// -[SCEventTrackingLensUnlocker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0b46a4

@end
