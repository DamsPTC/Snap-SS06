// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeDispatchQueue
// Superclass: NSObject
// Address: 0x112c72b98

@interface SCNativeDispatchQueue

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeDispatchQueue initWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x100457d58

// -[SCNativeDispatchQueue submit:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005fb2ec

// -[SCNativeDispatchQueue submitWithDelay:delayMs:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b28e5c0

// -[SCNativeDispatchQueue isCurrentQueueOrTrueOnAndroid]
// Type encoding: B16@0:8
// Implementation: 0x10067c98c

// -[SCNativeDispatchQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b28e67c

@end
