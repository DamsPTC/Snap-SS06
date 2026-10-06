// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCIdentityRequestLogger
// Superclass: NSObject
// Address: 0x112a295a8

@interface SCIdentityRequestLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCIdentityRequestLogger initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x105305200

// -[SCIdentityRequestLogger logGrpcRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105305274

// -[SCIdentityRequestLogger logGrpcResponse:status:grpcStatus:latencyMs:]
// Type encoding: v44@0:8@16i24q28q36
// Implementation: 0x10530532c

// -[SCIdentityRequestLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105305500

@end
