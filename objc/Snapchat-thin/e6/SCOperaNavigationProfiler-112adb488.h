// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaNavigationProfiler
// Superclass: NSObject
// Address: 0x112adb488

@interface SCOperaNavigationProfiler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaNavigationProfiler initWithNavigationStyle:metricsLogger:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10631b0f0

// -[SCOperaNavigationProfiler navigationIntentReceivedAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10631b17c

// -[SCOperaNavigationProfiler navigationIntentConfirmedAtTime:intentType:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x10631b1a0

// -[SCOperaNavigationProfiler navigationCancelledAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10631b234

// -[SCOperaNavigationProfiler navigationCompleteAtTime:mediaType:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x10631b238

// -[SCOperaNavigationProfiler navigationIntentProceededAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10631b3d8

// -[SCOperaNavigationProfiler _reset]
// Type encoding: v16@0:8
// Implementation: 0x10631b4e8

// -[SCOperaNavigationProfiler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10631b500

// +[SCOperaNavigationProfiler _acceptedNavigationIntentTypes]
// Type encoding: @16@0:8
// Implementation: 0x10631b47c

@end
