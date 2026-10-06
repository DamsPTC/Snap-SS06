// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoStructVector
// Superclass: NSObject
// Address: 0x112be6f08

@interface SCNeoStructVector

// Property: bytes; attributes: T^v,R,N
// Property: bytesLength; attributes: TQ,R,N
// Property: size; attributes: TQ,N,V_size
// Property: capacity; attributes: TQ,R,N,V_capacity

// -[SCNeoStructVector initWithStructSize:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1090c30f8

// -[SCNeoStructVector dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090c3140

// -[SCNeoStructVector _reallocAtCapacity:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090c3188

// -[SCNeoStructVector ensureCapacity:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090c31e4

// -[SCNeoStructVector structAtIndex:]
// Type encoding: ^v24@0:8Q16
// Implementation: 0x1090c31f8

// -[SCNeoStructVector _appendWritableStruct]
// Type encoding: ^v16@0:8
// Implementation: 0x1090c324c

// -[SCNeoStructVector appendStruct:]
// Type encoding: v24@0:8r^v16
// Implementation: 0x1090c32a4

// -[SCNeoStructVector appendWritableStruct]
// Type encoding: ^v16@0:8
// Implementation: 0x1090c32cc

// -[SCNeoStructVector bytesLength]
// Type encoding: Q16@0:8
// Implementation: 0x1090c32fc

// -[SCNeoStructVector bytes]
// Type encoding: ^v16@0:8
// Implementation: 0x1090c3308

// -[SCNeoStructVector mutableCopy]
// Type encoding: @16@0:8
// Implementation: 0x1090c3310

// -[SCNeoStructVector setSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090c3388

// -[SCNeoStructVector size]
// Type encoding: Q16@0:8
// Implementation: 0x1090c33d4

// -[SCNeoStructVector capacity]
// Type encoding: Q16@0:8
// Implementation: 0x1090c33dc

@end
