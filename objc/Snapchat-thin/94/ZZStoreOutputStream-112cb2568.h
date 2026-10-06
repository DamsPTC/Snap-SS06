// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ZZStoreOutputStream
// Superclass: NSOutputStream
// Address: 0x112cb2568

@interface ZZStoreOutputStream

// Property: crc32; attributes: TI,R,N,V_crc32
// Property: size; attributes: TI,R,N,V_size

// -[ZZStoreOutputStream initWithChannelOutput:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b71ad6c

// -[ZZStoreOutputStream streamStatus]
// Type encoding: Q16@0:8
// Implementation: 0x10b71ae1c

// -[ZZStoreOutputStream streamError]
// Type encoding: @16@0:8
// Implementation: 0x10b71ae2c

// -[ZZStoreOutputStream open]
// Type encoding: v16@0:8
// Implementation: 0x10b71ae5c

// -[ZZStoreOutputStream close]
// Type encoding: v16@0:8
// Implementation: 0x10b71ae70

// -[ZZStoreOutputStream write:maxLength:]
// Type encoding: q32@0:8r*16Q24
// Implementation: 0x10b71ae84

// -[ZZStoreOutputStream hasSpaceAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b71af78

// -[ZZStoreOutputStream crc32]
// Type encoding: I16@0:8
// Implementation: 0x10b71af80

// -[ZZStoreOutputStream size]
// Type encoding: I16@0:8
// Implementation: 0x10b71af90

// -[ZZStoreOutputStream .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b71afa0

@end
