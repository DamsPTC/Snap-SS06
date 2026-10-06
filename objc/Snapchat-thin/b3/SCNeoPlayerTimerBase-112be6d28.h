// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerTimerBase
// Superclass: NSObject
// Address: 0x112be6d28

@interface SCNeoPlayerTimerBase

// Property: timebase; attributes: T^{OpaqueCMTimebase=},R,N,V_timebase
// Property: currentTime; attributes: T{?=qiIq},R,N

// -[SCNeoPlayerTimerBase initWithTimebase:queue:]
// Type encoding: @32@0:8^{OpaqueCMTimebase=}16@24
// Implementation: 0x1090bf2fc

// -[SCNeoPlayerTimerBase dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090bf4fc

// -[SCNeoPlayerTimerBase invalidate]
// Type encoding: v16@0:8
// Implementation: 0x1090bf548

// -[SCNeoPlayerTimerBase scheduleNextEventTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1090bf598

// -[SCNeoPlayerTimerBase currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090bf5d4

// -[SCNeoPlayerTimerBase effectiveRateDidChange]
// Type encoding: v16@0:8
// Implementation: 0x1090bf5dc

// -[SCNeoPlayerTimerBase timeDidJump]
// Type encoding: v16@0:8
// Implementation: 0x1090bf5e0

// -[SCNeoPlayerTimerBase onEvent]
// Type encoding: v16@0:8
// Implementation: 0x1090bf5e4

// -[SCNeoPlayerTimerBase timebase]
// Type encoding: ^{OpaqueCMTimebase=}16@0:8
// Implementation: 0x1090bf5e8

// -[SCNeoPlayerTimerBase .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090bf5f0

@end
