// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GCDAsyncReadPacket
// Superclass: NSObject
// Address: 0x112b447f8

@interface GCDAsyncReadPacket


// -[GCDAsyncReadPacket initWithData:startOffset:maxLength:timeout:readLength:terminator:tag:]
// Type encoding: @72@0:8@16Q24Q32d40Q48@56q64
// Implementation: 0x106ece778

// -[GCDAsyncReadPacket ensureCapacityForAdditionalDataOfLength:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ece8bc

// -[GCDAsyncReadPacket optimalReadLengthWithDefault:shouldPreBuffer:]
// Type encoding: Q32@0:8Q16^B24
// Implementation: 0x106ece908

// -[GCDAsyncReadPacket readLengthForNonTermWithHint:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106ece990

// -[GCDAsyncReadPacket readLengthForTermWithHint:shouldPreBuffer:]
// Type encoding: Q32@0:8Q16^B24
// Implementation: 0x106ece9bc

// -[GCDAsyncReadPacket readLengthForTermWithPreBuffer:found:]
// Type encoding: Q32@0:8@16^B24
// Implementation: 0x106ecea28

// -[GCDAsyncReadPacket searchForTermAfterPreBuffering:]
// Type encoding: q24@0:8q16
// Implementation: 0x106ecec34

// -[GCDAsyncReadPacket .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ecece4

@end
