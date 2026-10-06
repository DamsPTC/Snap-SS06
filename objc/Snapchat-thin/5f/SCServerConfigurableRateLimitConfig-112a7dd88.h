// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCServerConfigurableRateLimitConfig
// Superclass: NSObject
// Address: 0x112a7dd88

@interface SCServerConfigurableRateLimitConfig

// Property: throttleKey; attributes: T@"NSString",R,N,V_throttleKey
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCServerConfigurableRateLimitConfig initWithThrottleKey:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059518dc

// -[SCServerConfigurableRateLimitConfig throttleInterval]
// Type encoding: d16@0:8
// Implementation: 0x105951ae4

// -[SCServerConfigurableRateLimitConfig _throttleIntervalFromThrottleKey:circumstanceEngine:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x105951b2c

// -[SCServerConfigurableRateLimitConfig throttleKey]
// Type encoding: @16@0:8
// Implementation: 0x105951b5c

// -[SCServerConfigurableRateLimitConfig .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105951b64

@end
