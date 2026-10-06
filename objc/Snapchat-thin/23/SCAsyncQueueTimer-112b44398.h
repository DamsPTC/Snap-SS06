// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAsyncQueueTimer
// Superclass: NSObject
// Address: 0x112b44398

@interface SCAsyncQueueTimer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAsyncQueueTimer initWithTimeInterval:repeats:block:queue:]
// Type encoding: @44@0:8d16B24@?28@36
// Implementation: 0x106ec4924

// -[SCAsyncQueueTimer isValid]
// Type encoding: B16@0:8
// Implementation: 0x106ec4f28

// -[SCAsyncQueueTimer invalidate]
// Type encoding: v16@0:8
// Implementation: 0x106ec4f38

// -[SCAsyncQueueTimer retainSelf]
// Type encoding: v16@0:8
// Implementation: 0x106ec4f80

// -[SCAsyncQueueTimer repeatWithTimeInterval:queue:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x106ec4fb4

// -[SCAsyncQueueTimer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ec4fcc

// +[SCAsyncQueueTimer scheduledTimerWithTimeInterval:repeats:block:queue:]
// Type encoding: @44@0:8d16B24@?28@36
// Implementation: 0x106ec4b18

// +[SCAsyncQueueTimer scheduledTimerWithTimeInterval:repeats:target:selector:queue:]
// Type encoding: @52@0:8d16B24@28:36@44
// Implementation: 0x106ec4b98

// +[SCAsyncQueueTimer scheduledTimerWithTimeInterval:repeats:weakTarget:selector:queue:]
// Type encoding: @52@0:8d16B24@28:36@44
// Implementation: 0x106ec4d98

@end
