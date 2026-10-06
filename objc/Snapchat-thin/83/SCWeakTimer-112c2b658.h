// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWeakTimer
// Superclass: NSObject
// Address: 0x112c2b658

@interface SCWeakTimer

// Property: fireDate; attributes: T@"NSDate",C,D

// -[SCWeakTimer initWithTimeInterval:target:selector:userInfo:repeats:]
// Type encoding: @52@0:8d16@24:32@40B48
// Implementation: 0x10015daec

// -[SCWeakTimer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10af848cc

// -[SCWeakTimer invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10af84910

// -[SCWeakTimer isValid]
// Type encoding: B16@0:8
// Implementation: 0x10af849c0

// -[SCWeakTimer fireDate]
// Type encoding: @16@0:8
// Implementation: 0x10af84a10

// -[SCWeakTimer setFireDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af84a68

// -[SCWeakTimer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af84ac4

// +[SCWeakTimer scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:]
// Type encoding: @52@0:8d16@24:32@40B48
// Implementation: 0x10015da00

// +[SCWeakTimer scheduledTimerWithTimeInterval:target:selector:repeats:]
// Type encoding: @44@0:8d16@24:32B40
// Implementation: 0x10015d984

@end
