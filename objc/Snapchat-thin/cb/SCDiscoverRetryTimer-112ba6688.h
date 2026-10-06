// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverRetryTimer
// Superclass: NSObject
// Address: 0x112ba6688

@interface SCDiscoverRetryTimer


// -[SCDiscoverRetryTimer initWithRetryPolicy:callbackQueue:callbackBlock:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1085319bc

// -[SCDiscoverRetryTimer initWithRetryPolicy:scheduleFirstAttemptAsRetry:callbackQueue:callbackBlock:]
// Type encoding: @44@0:8@16B24@28@?36
// Implementation: 0x1085319cc

// -[SCDiscoverRetryTimer scheduleNextAttempt]
// Type encoding: B16@0:8
// Implementation: 0x108531c1c

// -[SCDiscoverRetryTimer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108531f14

// -[SCDiscoverRetryTimer invalidate]
// Type encoding: v16@0:8
// Implementation: 0x108531f58

// -[SCDiscoverRetryTimer _executeCallback]
// Type encoding: v16@0:8
// Implementation: 0x108531f90

// -[SCDiscoverRetryTimer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108531fa8

@end
