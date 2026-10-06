// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesMessageBuffer
// Superclass: NSObject
// Address: 0x112b4b918

@interface SCSpectaclesMessageBuffer

// Property: delegate; attributes: T@"<SCSpectaclesMessageBufferDelegate>",W,N,V_delegate

// -[SCSpectaclesMessageBuffer initWithDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f73d54

// -[SCSpectaclesMessageBuffer dataWithTlvHeaderPrepended:messageType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106f73de4

// -[SCSpectaclesMessageBuffer processData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f73e84

// -[SCSpectaclesMessageBuffer parseBuffer]
// Type encoding: v16@0:8
// Implementation: 0x106f73eb0

// -[SCSpectaclesMessageBuffer _tlvLength]
// Type encoding: Q16@0:8
// Implementation: 0x106f73f94

// -[SCSpectaclesMessageBuffer _tlvType]
// Type encoding: Q16@0:8
// Implementation: 0x106f73fb8

// -[SCSpectaclesMessageBuffer delegate]
// Type encoding: @16@0:8
// Implementation: 0x106f73ff8

// -[SCSpectaclesMessageBuffer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f74010

// -[SCSpectaclesMessageBuffer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f7401c

@end
