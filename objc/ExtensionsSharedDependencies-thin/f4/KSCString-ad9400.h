// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: KSCString
// Superclass: NSObject
// Address: 0xad9400

@interface KSCString

// Property: length; attributes: TQ,R,N,V_length
// Property: bytes; attributes: Tr*,R,N,V_bytes

// -[KSCString initWithString:]
// Type encoding: @24@0:8@16
// Implementation: 0x4b4490

// -[KSCString initWithCString:]
// Type encoding: @24@0:8r*16
// Implementation: 0x4b44c4

// -[KSCString initWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x4b450c

// -[KSCString initWithData:length:]
// Type encoding: @32@0:8r*16Q24
// Implementation: 0x4b4564

// -[KSCString dealloc]
// Type encoding: v16@0:8
// Implementation: 0x4b45c8

// -[KSCString length]
// Type encoding: Q16@0:8
// Implementation: 0x4b4610

// -[KSCString bytes]
// Type encoding: r*16@0:8
// Implementation: 0x4b4618

// +[KSCString stringWithString:]
// Type encoding: @24@0:8@16
// Implementation: 0x4b43d0

// +[KSCString stringWithCString:]
// Type encoding: @24@0:8r*16
// Implementation: 0x4b4408

// +[KSCString stringWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x4b442c

// +[KSCString stringWithData:length:]
// Type encoding: @32@0:8r*16Q24
// Implementation: 0x4b4464

@end
