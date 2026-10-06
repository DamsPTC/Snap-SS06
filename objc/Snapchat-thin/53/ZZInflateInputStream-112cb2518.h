// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ZZInflateInputStream
// Superclass: NSInputStream
// Address: 0x112cb2518

@interface ZZInflateInputStream


// -[ZZInflateInputStream initWithStream:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b71aa24

// -[ZZInflateInputStream streamStatus]
// Type encoding: Q16@0:8
// Implementation: 0x10b71ab08

// -[ZZInflateInputStream streamError]
// Type encoding: @16@0:8
// Implementation: 0x10b71ab18

// -[ZZInflateInputStream open]
// Type encoding: v16@0:8
// Implementation: 0x10b71ab48

// -[ZZInflateInputStream close]
// Type encoding: v16@0:8
// Implementation: 0x10b71ab9c

// -[ZZInflateInputStream read:maxLength:]
// Type encoding: q32@0:8*16Q24
// Implementation: 0x10b71abe4

// -[ZZInflateInputStream getBuffer:length:]
// Type encoding: B32@0:8^*16^Q24
// Implementation: 0x10b71ad0c

// -[ZZInflateInputStream hasBytesAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b71ad14

// -[ZZInflateInputStream .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b71ad1c

// +[ZZInflateInputStream decompressData:withUncompressedSize:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b71a92c

@end
