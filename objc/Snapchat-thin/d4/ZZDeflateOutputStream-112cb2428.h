// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ZZDeflateOutputStream
// Superclass: NSOutputStream
// Address: 0x112cb2428

@interface ZZDeflateOutputStream

// Property: crc32; attributes: TI,R,N,V_crc32
// Property: compressedSize; attributes: TI,R,N
// Property: uncompressedSize; attributes: TI,R,N

// -[ZZDeflateOutputStream initWithChannelOutput:compressionLevel:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b719e84

// -[ZZDeflateOutputStream compressedSize]
// Type encoding: I16@0:8
// Implementation: 0x10b719f58

// -[ZZDeflateOutputStream uncompressedSize]
// Type encoding: I16@0:8
// Implementation: 0x10b719f6c

// -[ZZDeflateOutputStream streamStatus]
// Type encoding: Q16@0:8
// Implementation: 0x10b719f80

// -[ZZDeflateOutputStream streamError]
// Type encoding: @16@0:8
// Implementation: 0x10b719f90

// -[ZZDeflateOutputStream open]
// Type encoding: v16@0:8
// Implementation: 0x10b719fc0

// -[ZZDeflateOutputStream close]
// Type encoding: v16@0:8
// Implementation: 0x10b71a020

// -[ZZDeflateOutputStream write:maxLength:]
// Type encoding: q32@0:8r*16Q24
// Implementation: 0x10b71a170

// -[ZZDeflateOutputStream hasSpaceAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b71a2a8

// -[ZZDeflateOutputStream crc32]
// Type encoding: I16@0:8
// Implementation: 0x10b71a2b0

// -[ZZDeflateOutputStream .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b71a2c0

@end
