// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaBuffer
// Superclass: NSObject
// Address: 0x112be59c8

@interface SCNeoMediaBuffer

// Property: lastPosition; attributes: TQ,R,N
// Property: chunkSize; attributes: TQ,N

// -[SCNeoMediaBuffer initWithChunkManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x10909b030

// -[SCNeoMediaBuffer initWithInstance:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10909b134

// -[SCNeoMediaBuffer initWithInstruments:]
// Type encoding: @24@0:8@16
// Implementation: 0x10909b19c

// -[SCNeoMediaBuffer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10909b27c

// -[SCNeoMediaBuffer lastPosition]
// Type encoding: Q16@0:8
// Implementation: 0x10909b2ac

// -[SCNeoMediaBuffer chunkSize]
// Type encoding: Q16@0:8
// Implementation: 0x10909b2b4

// -[SCNeoMediaBuffer setChunkSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10909b2c0

// -[SCNeoMediaBuffer appendData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10909b2cc

// -[SCNeoMediaBuffer insertData:atPosition:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10909b314

// -[SCNeoMediaBuffer clear]
// Type encoding: v16@0:8
// Implementation: 0x10909b3d8

// -[SCNeoMediaBuffer setDidReachEndOfFile]
// Type encoding: v16@0:8
// Implementation: 0x10909b3e0

// -[SCNeoMediaBuffer lengthAtPosition:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x10909b3e8

// -[SCNeoMediaBuffer isEndOfFileAtPosition:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10909b3f4

// -[SCNeoMediaBuffer setEndOfFileAtPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10909b41c

// -[SCNeoMediaBuffer containsRange:]
// Type encoding: B32@0:8{_NSRange=QQ}16
// Implementation: 0x10909b430

// -[SCNeoMediaBuffer copyDataInRange:intoBuffer:]
// Type encoding: B40@0:8{_NSRange=QQ}16^v32
// Implementation: 0x10909b440

// -[SCNeoMediaBuffer copyDataAtPosition:intoBuffer:bufferLength:]
// Type encoding: Q40@0:8Q16^v24Q32
// Implementation: 0x10909b454

// -[SCNeoMediaBuffer copyDataInRange:]
// Type encoding: @32@0:8{_NSRange=QQ}16
// Implementation: 0x10909b468

// -[SCNeoMediaBuffer copyDataAtPosition:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10909b4ac

// -[SCNeoMediaBuffer copyDataAtPosition:maxLength:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x10909b4ec

// -[SCNeoMediaBuffer setRetainedDataRange:]
// Type encoding: v32@0:8{_NSRange=QQ}16
// Implementation: 0x10909b530

// -[SCNeoMediaBuffer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10909b554

// -[SCNeoMediaBuffer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10909b55c

@end
