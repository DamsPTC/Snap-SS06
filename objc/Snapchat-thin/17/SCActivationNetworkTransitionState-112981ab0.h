// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCActivationNetworkTransitionState
// Superclass: NSObject
// Address: 0x112981ab0

@interface SCActivationNetworkTransitionState

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCActivationNetworkTransitionState description]
// Type encoding: @16@0:8
// Implementation: 0x10405bab8

// -[SCActivationNetworkTransitionState init]
// Type encoding: @16@0:8
// Implementation: 0x10405bb20

// -[SCActivationNetworkTransitionState hash]
// Type encoding: q16@0:8
// Implementation: 0x10405bb68

// -[SCActivationNetworkTransitionState isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10405bda8

// -[SCActivationNetworkTransitionState copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10405be28

// -[SCActivationNetworkTransitionState matchStarted:requestSubmitted:responseReturned:completed:]
// Type encoding: v48@0:8@?16@?24@?32@?40
// Implementation: 0x10405c06c

// +[SCActivationNetworkTransitionState started]
// Type encoding: @16@0:8
// Implementation: 0x10405be2c

// +[SCActivationNetworkTransitionState requestSubmitted]
// Type encoding: @16@0:8
// Implementation: 0x10405be3c

// +[SCActivationNetworkTransitionState responseReturnedWithStatusCode:protoStatusCode:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x10405be44

// +[SCActivationNetworkTransitionState completed]
// Type encoding: @16@0:8
// Implementation: 0x10405bf44

@end
