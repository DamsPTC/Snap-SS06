// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSessionStartEvent
// Superclass: NSObject
// Address: 0x112997db0

@interface SCSessionStartEvent

// Property: isRestart; attributes: TB,N,R,VisRestart
// Property: newSessionId; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCSessionStartEvent isRestart]
// Type encoding: B16@0:8
// Implementation: 0x1043059b4

// -[SCSessionStartEvent newSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1043059c4

// -[SCSessionStartEvent initWithIsRestart:newSessionId:]
// Type encoding: @28@0:8B16@20
// Implementation: 0x104305a80

// -[SCSessionStartEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x104305af4

// -[SCSessionStartEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104305b28

// -[SCSessionStartEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104305ba8

// -[SCSessionStartEvent encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104305bac

// -[SCSessionStartEvent initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104305e58

// -[SCSessionStartEvent description]
// Type encoding: @16@0:8
// Implementation: 0x104305e80

// -[SCSessionStartEvent init]
// Type encoding: @16@0:8
// Implementation: 0x104305e9c

// -[SCSessionStartEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104305f18

@end
