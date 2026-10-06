// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ZZFileChannelOutput
// Superclass: NSObject
// Address: 0x112cb24c8

@interface ZZFileChannelOutput

// Property: offset; attributes: TI,N,V_offset

// -[ZZFileChannelOutput initWithFileDescriptor:]
// Type encoding: @20@0:8i16
// Implementation: 0x10b71a6bc

// -[ZZFileChannelOutput offset]
// Type encoding: I16@0:8
// Implementation: 0x10b71a704

// -[ZZFileChannelOutput seekToOffset:error:]
// Type encoding: B28@0:8I16o^@20
// Implementation: 0x10b71a724

// -[ZZFileChannelOutput writeData:error:]
// Type encoding: B32@0:8@16o^@24
// Implementation: 0x10b71a7ac

// -[ZZFileChannelOutput truncateAtOffset:error:]
// Type encoding: B28@0:8I16o^@20
// Implementation: 0x10b71a898

// -[ZZFileChannelOutput close]
// Type encoding: v16@0:8
// Implementation: 0x10b71a91c

// -[ZZFileChannelOutput setOffset:]
// Type encoding: v20@0:8I16
// Implementation: 0x10b71a924

@end
