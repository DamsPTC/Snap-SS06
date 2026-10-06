// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeDispatchQueue
// Superclass: NSObject
// Address: 0xad9cc0

@interface SCNativeDispatchQueue

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeDispatchQueue initWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x585128

// -[SCNativeDispatchQueue submit:]
// Type encoding: v24@0:8@16
// Implementation: 0x58519c

// -[SCNativeDispatchQueue submitWithDelay:delayMs:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x58522c

// -[SCNativeDispatchQueue isCurrentQueueOrTrueOnAndroid]
// Type encoding: B16@0:8
// Implementation: 0x5852e8

// -[SCNativeDispatchQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x5852f0

@end
