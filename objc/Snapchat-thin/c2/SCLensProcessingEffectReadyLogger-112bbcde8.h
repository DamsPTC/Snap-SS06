// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingEffectReadyLogger
// Superclass: NSObject
// Address: 0x112bbcde8

@interface SCLensProcessingEffectReadyLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensProcessingEffectReadyLogger initWithLensProcessingGraphene:effectsApplyTracker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1006c4e7c

// -[SCLensProcessingEffectReadyLogger willApplyLensWithId:timestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108cb10b4

// -[SCLensProcessingEffectReadyLogger didApplyLensWithId:timestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108cb110c

// -[SCLensProcessingEffectReadyLogger didFailedApplyLensWithId:timestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108cb11b4

// -[SCLensProcessingEffectReadyLogger _logApplyDelayResult:effectId:effectApplyEntry:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x108cb125c

// -[SCLensProcessingEffectReadyLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cb1384

@end
