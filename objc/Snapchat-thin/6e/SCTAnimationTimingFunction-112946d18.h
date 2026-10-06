// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTAnimationTimingFunction
// Superclass: NSObject
// Address: 0x112946d18

@interface SCTAnimationTimingFunction

// Property: controlPoint1; attributes: T{CGPoint=dd},N
// Property: controlPoint2; attributes: T{CGPoint=dd},N
// Property: duration; attributes: Td,N
// Property: mirrored; attributes: TB,N,Vmirrored

// -[SCTAnimationTimingFunction controlPoint1]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x103c1c6f0

// -[SCTAnimationTimingFunction setControlPoint1:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x103c1c718

// -[SCTAnimationTimingFunction controlPoint2]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x103c1c78c

// -[SCTAnimationTimingFunction setControlPoint2:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x103c1c7b4

// -[SCTAnimationTimingFunction duration]
// Type encoding: d16@0:8
// Implementation: 0x103c1c8f4

// -[SCTAnimationTimingFunction setDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x103c1c914

// -[SCTAnimationTimingFunction mirrored]
// Type encoding: B16@0:8
// Implementation: 0x103c1c9bc

// -[SCTAnimationTimingFunction setMirrored:]
// Type encoding: v20@0:8B16
// Implementation: 0x103c1ca40

// -[SCTAnimationTimingFunction initWithControlPoint1:controlPoint2:]
// Type encoding: @48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x103c1cbcc

// -[SCTAnimationTimingFunction valueForX:]
// Type encoding: d24@0:8d16
// Implementation: 0x103c1d004

// -[SCTAnimationTimingFunction init]
// Type encoding: @16@0:8
// Implementation: 0x103c1d190

// +[SCTAnimationTimingFunction timingFunctionWithControlPoint1:controlPoint2:]
// Type encoding: @48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x103c1cdc8

// +[SCTAnimationTimingFunction easeInOutTimingFunction]
// Type encoding: @16@0:8
// Implementation: 0x103c1ce60

// +[SCTAnimationTimingFunction easeInTimingFunction]
// Type encoding: @16@0:8
// Implementation: 0x103c1ce74

// +[SCTAnimationTimingFunction easeOutTimingFunction]
// Type encoding: @16@0:8
// Implementation: 0x103c1ce84

// +[SCTAnimationTimingFunction linearTimingFunction]
// Type encoding: @16@0:8
// Implementation: 0x103c1ce94

@end
