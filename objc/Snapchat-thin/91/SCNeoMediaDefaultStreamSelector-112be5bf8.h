// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaDefaultStreamSelector
// Superclass: NSObject
// Address: 0x112be5bf8

@interface SCNeoMediaDefaultStreamSelector

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoMediaDefaultStreamSelector initWithBandwidthCalculator:]
// Type encoding: @24@0:8@16
// Implementation: 0x10909d578

// -[SCNeoMediaDefaultStreamSelector availableMediaBufferLengthDidChange:availableBufferDuration:forStreamId:]
// Type encoding: v40@0:8Q16d24q32
// Implementation: 0x10909d5f0

// -[SCNeoMediaDefaultStreamSelector didUpdateMediaBufferWithDownloadedBytesSize:latency:]
// Type encoding: v32@0:8Q16d24
// Implementation: 0x10909d630

// -[SCNeoMediaDefaultStreamSelector initializeWithEntries:entriesLength:startingStreamId:]
// Type encoding: v40@0:8r^{SCNeoMediaStreamSelectorEntry=qq}16Q24q32
// Implementation: 0x10909d638

// -[SCNeoMediaDefaultStreamSelector update]
// Type encoding: q16@0:8
// Implementation: 0x10909d738

// -[SCNeoMediaDefaultStreamSelector .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10909d944

@end
