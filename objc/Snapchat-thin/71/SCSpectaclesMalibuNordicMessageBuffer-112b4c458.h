// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesMalibuNordicMessageBuffer
// Superclass: NSObject
// Address: 0x112b4c458

@interface SCSpectaclesMalibuNordicMessageBuffer

// Property: requestBuffer; attributes: T@"NSMutableData",&,N,V_requestBuffer
// Property: delegate; attributes: T@"<SCSpectaclesMalibuMessageBufferDelegate>",W,N,V_delegate

// -[SCSpectaclesMalibuNordicMessageBuffer initWithDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f94b38

// -[SCSpectaclesMalibuNordicMessageBuffer dataWithTlvHeaderPrepended:messageType:]
// Type encoding: @28@0:8@16C24
// Implementation: 0x106f94bc0

// -[SCSpectaclesMalibuNordicMessageBuffer processData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f94c48

// -[SCSpectaclesMalibuNordicMessageBuffer _parseBuffer]
// Type encoding: v16@0:8
// Implementation: 0x106f94cac

// -[SCSpectaclesMalibuNordicMessageBuffer _tlvLength]
// Type encoding: Q16@0:8
// Implementation: 0x106f94dfc

// -[SCSpectaclesMalibuNordicMessageBuffer _tlvType]
// Type encoding: C16@0:8
// Implementation: 0x106f94e44

// -[SCSpectaclesMalibuNordicMessageBuffer requestBuffer]
// Type encoding: @16@0:8
// Implementation: 0x106f94e84

// -[SCSpectaclesMalibuNordicMessageBuffer setRequestBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f94e8c

// -[SCSpectaclesMalibuNordicMessageBuffer delegate]
// Type encoding: @16@0:8
// Implementation: 0x106f94ebc

// -[SCSpectaclesMalibuNordicMessageBuffer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f94ed4

// -[SCSpectaclesMalibuNordicMessageBuffer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f94ee0

@end
