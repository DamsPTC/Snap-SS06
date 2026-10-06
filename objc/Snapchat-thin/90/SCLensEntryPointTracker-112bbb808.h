// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensEntryPointTracker
// Superclass: NSObject
// Address: 0x112bbb808

@interface SCLensEntryPointTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensEntryPointTracker init]
// Type encoding: @16@0:8
// Implementation: 0x108c949b8

// -[SCLensEntryPointTracker pushEntryPoint:forLensWithId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x108c94a24

// -[SCLensEntryPointTracker resetEntryPointsForLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c94af0

// -[SCLensEntryPointTracker popEntryPointForLensWithId:]
// Type encoding: Q24@0:8@16
// Implementation: 0x108c94b58

// -[SCLensEntryPointTracker _updateStack:defaultEntryPoint:newEntryPoint:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x108c94c44

// -[SCLensEntryPointTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c94d18

@end
