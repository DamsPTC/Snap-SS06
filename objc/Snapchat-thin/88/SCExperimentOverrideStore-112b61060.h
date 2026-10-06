// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExperimentOverrideStore
// Superclass: NSObject
// Address: 0x112b61060

@interface SCExperimentOverrideStore


// -[SCExperimentOverrideStore saveState]
// Type encoding: B16@0:8
// Implementation: 0x10723e998

// -[SCExperimentOverrideStore clear]
// Type encoding: v16@0:8
// Implementation: 0x10723e9a0

// -[SCExperimentOverrideStore setOverrideForStudy:experimentId:params:experimentIds:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10723e9a4

// -[SCExperimentOverrideStore clearOverrideForStudy:]
// Type encoding: v24@0:8@16
// Implementation: 0x10723e9a8

// -[SCExperimentOverrideStore overrideExists:]
// Type encoding: B24@0:8@16
// Implementation: 0x10723e9ac

// -[SCExperimentOverrideStore overrideExists:experimentId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10723e9b4

// -[SCExperimentOverrideStore overrideValid:experimentId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10723e9bc

// -[SCExperimentOverrideStore stringForStudy:forVariable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10723e9c4

// -[SCExperimentOverrideStore boolForStudy:forVariable:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10723e9cc

// -[SCExperimentOverrideStore integerForStudy:forVariable:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x10723e9d4

// -[SCExperimentOverrideStore uIntegerForStudy:forVariable:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x10723e9dc

// -[SCExperimentOverrideStore doubleForStudy:forVariable:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x10723e9e4

// -[SCExperimentOverrideStore floatForStudy:forVariable:]
// Type encoding: f32@0:8@16@24
// Implementation: 0x10723e9ec

// +[SCExperimentOverrideStore shared]
// Type encoding: @16@0:8
// Implementation: 0x10723e990

@end
