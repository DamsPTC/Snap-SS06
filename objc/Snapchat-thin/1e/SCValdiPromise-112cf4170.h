// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiPromise
// Superclass: NSObject
// Address: 0x112cf4170

@interface SCValdiPromise

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiPromise onCompleteWithCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b96835c

// -[SCValdiPromise onCompleteWithCallbackBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b96836c

// -[SCValdiPromise cancel]
// Type encoding: v16@0:8
// Implementation: 0x10b96837c

// -[SCValdiPromise isCancelable]
// Type encoding: B16@0:8
// Implementation: 0x10b968380

// -[SCValdiPromise setPeer:]
// Type encoding: v24@0:8^v16
// Implementation: 0x10b968384

// -[SCValdiPromise getPeer]
// Type encoding: ^v16@0:8
// Implementation: 0x10b968390

// +[SCValdiPromise resolvedPromiseWithValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b96839c

// +[SCValdiPromise rejectedPromiseWithError:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b9683e0

@end
