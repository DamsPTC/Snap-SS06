// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: KSCString
// Superclass: NSObject
// Address: 0x112b13568

@interface KSCString

// Property: length; attributes: TQ,R,N,V_length
// Property: bytes; attributes: Tr*,R,N,V_bytes

// -[KSCString initWithString:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af55c0

// -[KSCString initWithCString:]
// Type encoding: @24@0:8r*16
// Implementation: 0x106af55f4

// -[KSCString initWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af563c

// -[KSCString initWithData:length:]
// Type encoding: @32@0:8r*16Q24
// Implementation: 0x106af5694

// -[KSCString dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106af56f8

// -[KSCString length]
// Type encoding: Q16@0:8
// Implementation: 0x106af5740

// -[KSCString bytes]
// Type encoding: r*16@0:8
// Implementation: 0x106af5748

// +[KSCString stringWithString:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af5500

// +[KSCString stringWithCString:]
// Type encoding: @24@0:8r*16
// Implementation: 0x106af5538

// +[KSCString stringWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af555c

// +[KSCString stringWithData:length:]
// Type encoding: @32@0:8r*16Q24
// Implementation: 0x106af5594

@end
