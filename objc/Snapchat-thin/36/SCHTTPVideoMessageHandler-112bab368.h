// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCHTTPVideoMessageHandler
// Superclass: NSObject
// Address: 0x112bab368

@interface SCHTTPVideoMessageHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCHTTPVideoMessageHandler init]
// Type encoding: @16@0:8
// Implementation: 0x108612ec8

// -[SCHTTPVideoMessageHandler clearIncoming]
// Type encoding: v16@0:8
// Implementation: 0x108612f08

// -[SCHTTPVideoMessageHandler appendIncomingBytes:onError:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108612f50

// -[SCHTTPVideoMessageHandler _appendIncomingBytes:length:onError:]
// Type encoding: v40@0:8r^v16Q24@?32
// Implementation: 0x108612fe4

// -[SCHTTPVideoMessageHandler isIncomingReady]
// Type encoding: B16@0:8
// Implementation: 0x1086131d4

// -[SCHTTPVideoMessageHandler getIncomingFrameNumber]
// Type encoding: q16@0:8
// Implementation: 0x108613208

// -[SCHTTPVideoMessageHandler isAudioFrame]
// Type encoding: B16@0:8
// Implementation: 0x10861328c

// -[SCHTTPVideoMessageHandler makeIncomingSampleBuffer:onRelease:onError:]
// Type encoding: ^{opaqueCMSampleBuffer=}40@0:8@16@?24@?32
// Implementation: 0x1086132cc

// -[SCHTTPVideoMessageHandler makeFrameAckMessage:releaseQueue:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x108613b04

// -[SCHTTPVideoMessageHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108613c1c

@end
