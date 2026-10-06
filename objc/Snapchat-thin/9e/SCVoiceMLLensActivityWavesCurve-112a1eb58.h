// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVoiceMLLensActivityWavesCurve
// Superclass: NSObject
// Address: 0x112a1eb58

@interface SCVoiceMLLensActivityWavesCurve

// Property: rollingAverageLevel; attributes: Td,N,V_rollingAverageLevel
// Property: seed; attributes: Td,R,N,V_seed

// -[SCVoiceMLLensActivityWavesCurve initWithMaxAmplitude:delegate:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x10518e504

// -[SCVoiceMLLensActivityWavesCurve yPositionForRelativeX:]
// Type encoding: d24@0:8d16
// Implementation: 0x10518e588

// -[SCVoiceMLLensActivityWavesCurve incrementTick]
// Type encoding: v16@0:8
// Implementation: 0x10518e604

// -[SCVoiceMLLensActivityWavesCurve _respawn]
// Type encoding: v16@0:8
// Implementation: 0x10518e698

// -[SCVoiceMLLensActivityWavesCurve _generateSeed]
// Type encoding: d16@0:8
// Implementation: 0x10518e6f8

// -[SCVoiceMLLensActivityWavesCurve _seedFromAvailableSeed:sortedMergedRanges:]
// Type encoding: d32@0:8d16@24
// Implementation: 0x10518e804

// -[SCVoiceMLLensActivityWavesCurve _totalSizeFromMergedRanges:]
// Type encoding: d24@0:8@16
// Implementation: 0x10518e954

// -[SCVoiceMLLensActivityWavesCurve _mergeOverlappingSortedWindowRanges:]
// Type encoding: @24@0:8@16
// Implementation: 0x10518ea74

// -[SCVoiceMLLensActivityWavesCurve _windowRangesFromContendingSeeds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10518ec18

// -[SCVoiceMLLensActivityWavesCurve rollingAverageLevel]
// Type encoding: d16@0:8
// Implementation: 0x10518edc0

// -[SCVoiceMLLensActivityWavesCurve setRollingAverageLevel:]
// Type encoding: v24@0:8d16
// Implementation: 0x10518edc8

// -[SCVoiceMLLensActivityWavesCurve seed]
// Type encoding: d16@0:8
// Implementation: 0x10518edd0

// -[SCVoiceMLLensActivityWavesCurve .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10518edd8

@end
