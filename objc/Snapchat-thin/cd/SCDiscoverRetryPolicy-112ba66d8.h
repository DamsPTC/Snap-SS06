// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverRetryPolicy
// Superclass: NSObject
// Address: 0x112ba66d8

@interface SCDiscoverRetryPolicy


// -[SCDiscoverRetryPolicy initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085322a8

// -[SCDiscoverRetryPolicy copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1085324e8

// -[SCDiscoverRetryPolicy encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10853250c

// -[SCDiscoverRetryPolicy hash]
// Type encoding: Q16@0:8
// Implementation: 0x108532640

// -[SCDiscoverRetryPolicy internalInit]
// Type encoding: @16@0:8
// Implementation: 0x10853272c

// -[SCDiscoverRetryPolicy isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108532770

// -[SCDiscoverRetryPolicy matchNoRetry:equallyInterval:arithmeticalBackoff:exponentialBackoff:arithmeticalBackoffWithExponentialJitter:]
// Type encoding: v56@0:8@?16@?24@?32@?40@?48
// Implementation: 0x10853290c

// +[SCDiscoverRetryPolicy arithmeticalBackoffWithExponentialJitterWithRetryInterval:maxRetryCount:]
// Type encoding: @32@0:8d16Q24
// Implementation: 0x1085320b0

// +[SCDiscoverRetryPolicy arithmeticalBackoffWithRetryInterval:maxRetryCount:]
// Type encoding: @32@0:8d16Q24
// Implementation: 0x10853211c

// +[SCDiscoverRetryPolicy equallyIntervalWithRetryInterval:maxRetryCount:]
// Type encoding: @32@0:8d16Q24
// Implementation: 0x108532188

// +[SCDiscoverRetryPolicy exponentialBackoffWithBaseRetryInterval:maxRetryCount:]
// Type encoding: @32@0:8d16Q24
// Implementation: 0x1085321f4

// +[SCDiscoverRetryPolicy noRetry]
// Type encoding: @16@0:8
// Implementation: 0x108532260

@end
