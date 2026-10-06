// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDampedHarmonicSpring
// Superclass: NSObject
// Address: 0x112c6a998

@interface SCDampedHarmonicSpring


// -[SCDampedHarmonicSpring initWithMass:stiffness:dampingCoefficient:]
// Type encoding: @40@0:8d16d24d32
// Implementation: 0x10b0a360c

// -[SCDampedHarmonicSpring initWithDampingRatio:frequencyResponse:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x10b0a3668

// -[SCDampedHarmonicSpring dampingRatio]
// Type encoding: d16@0:8
// Implementation: 0x10b0a36dc

// -[SCDampedHarmonicSpring frequencyResponse]
// Type encoding: d16@0:8
// Implementation: 0x10b0a36f8

// -[SCDampedHarmonicSpring undampedNaturalFrequency]
// Type encoding: d16@0:8
// Implementation: 0x10b0a3718

// -[SCDampedHarmonicSpring dampedNaturalFrequency]
// Type encoding: d16@0:8
// Implementation: 0x10b0a3728

// -[SCDampedHarmonicSpring positionAtTime:initialPosition:initialVelocity:]
// Type encoding: d40@0:8d16d24d32
// Implementation: 0x10b0a3770

// -[SCDampedHarmonicSpring maximumDisplacementFromEquilibrium:]
// Type encoding: d24@0:8d16
// Implementation: 0x10b0a388c

// -[SCDampedHarmonicSpring timingFunctionWithRelativeInitialVelocity:]
// Type encoding: @32@0:8{CGVector=dd}16
// Implementation: 0x10b0a3954

// -[SCDampedHarmonicSpring timingFunctionWithRelativeInitialFloatVelocity:]
// Type encoding: @24@0:8d16
// Implementation: 0x10b0a39b0

// -[SCDampedHarmonicSpring timingFunctionWithInitialVelocity:from:to:]
// Type encoding: @40@0:8d16Nd24d32
// Implementation: 0x10b0a39b8

// -[SCDampedHarmonicSpring timingFunctionWithInitialFloatVelocity:from:to:context:]
// Type encoding: @48@0:8d16Nd24d32@40
// Implementation: 0x10b0a39ec

// -[SCDampedHarmonicSpring timingFunctionWithInitialVelocity:from:to:context:]
// Type encoding: @72@0:8{CGVector=dd}16N{CGPoint=dd}32{CGPoint=dd}48@64
// Implementation: 0x10b0a3a6c

// -[SCDampedHarmonicSpring relativeVelocityForVelocity:from:to:epsilon:]
// Type encoding: d48@0:8d16Nd24d32d40
// Implementation: 0x10b0a3b2c

@end
