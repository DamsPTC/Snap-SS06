// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingEffectApplyTracker
// Superclass: NSObject
// Address: 0x112bbcd98

@interface SCLensProcessingEffectApplyTracker

// Property: applyDidFinishObservable; attributes: T@"SCObservable",R,N,V_applyDidFinishSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensProcessingEffectApplyTracker init]
// Type encoding: @16@0:8
// Implementation: 0x1006c4df8

// -[SCLensProcessingEffectApplyTracker trackEffectWillApplyWithId:timestamp:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x108cb0d10

// -[SCLensProcessingEffectApplyTracker trackEffectFinishApplingWithId:timestamp:success:]
// Type encoding: @36@0:8@16d24B32
// Implementation: 0x108cb0e60

// -[SCLensProcessingEffectApplyTracker applyEntryForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cb0f88

// -[SCLensProcessingEffectApplyTracker resetRecordForId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cb101c

// -[SCLensProcessingEffectApplyTracker applyDidFinishObservable]
// Type encoding: @16@0:8
// Implementation: 0x108cb107c

// -[SCLensProcessingEffectApplyTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cb1084

@end
