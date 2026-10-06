// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesGenericMessageSender
// Superclass: NSObject
// Address: 0x112b434e8

@interface SCSpectaclesGenericMessageSender

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesGenericMessageSender initWithConnectionHub:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ea4f34

// -[SCSpectaclesGenericMessageSender sendGenericRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea5090

// -[SCSpectaclesGenericMessageSender genericResponsePublisher]
// Type encoding: @16@0:8
// Implementation: 0x106ea50f8

// -[SCSpectaclesGenericMessageSender registerRequestEncoder:protocol:messageType:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x106ea5100

// -[SCSpectaclesGenericMessageSender registerResponseDecoder:protocol:messageType:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x106ea51f8

// -[SCSpectaclesGenericMessageSender handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea52f0

// -[SCSpectaclesGenericMessageSender responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x106ea55d4

// -[SCSpectaclesGenericMessageSender encodeGenericRequest:protocol:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106ea55dc

// -[SCSpectaclesGenericMessageSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ea56bc

@end
