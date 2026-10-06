// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGrapheneExtensionLogger
// Superclass: NSObject
// Address: 0xad3f00

@interface SCGrapheneExtensionLogger


// -[SCGrapheneExtensionLogger initWithGrapheneExtensionConfiguration:userId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x4215f8

// -[SCGrapheneExtensionLogger increment:value:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x421718

// -[SCGrapheneExtensionLogger addTimer:durationMs:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x421788

// -[SCGrapheneExtensionLogger addHistogram:value:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x4217f8

// -[SCGrapheneExtensionLogger flushMetricsWithCompletionHandler:forceLogging:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x421868

// -[SCGrapheneExtensionLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x421914

@end
