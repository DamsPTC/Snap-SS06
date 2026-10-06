// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLowpassFilter
// Superclass: NSObject
// Address: 0x112a2b8f8

@interface SCLowpassFilter

// Property: x; attributes: Td,R,N,V_x
// Property: y; attributes: Td,R,N,V_y
// Property: z; attributes: Td,R,N,V_z

// -[SCLowpassFilter initWithSampleRate:cutoffFrequency:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x1008ba638

// -[SCLowpassFilter updateSampleRate:cutoffFrequency:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x1008ba6a0

// -[SCLowpassFilter addAcceleration:]
// Type encoding: v40@0:8{?=ddd}16
// Implementation: 0x1008c0820

// -[SCLowpassFilter x]
// Type encoding: d16@0:8
// Implementation: 0x1008c08b4

// -[SCLowpassFilter y]
// Type encoding: d16@0:8
// Implementation: 0x1008c08bc

// -[SCLowpassFilter z]
// Type encoding: d16@0:8
// Implementation: 0x1008c08c4

@end
