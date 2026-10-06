// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCThrottleTarget
// Superclass: NSObject
// Address: 0x112c2b5e0

@interface SCThrottleTarget

// Property: target; attributes: T@,W,N,V_target
// Property: selector; attributes: T:,N,V_selector
// Property: throttleTimer; attributes: T@"SCThrottleTimer",W,N,V_throttleTimer

// -[SCThrottleTarget initWithTarget:selector:throttleTimer:]
// Type encoding: @40@0:8@16:24@32
// Implementation: 0x100babf10

// -[SCThrottleTarget onTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af847d8

// -[SCThrottleTarget fire]
// Type encoding: v16@0:8
// Implementation: 0x100bbb034

// -[SCThrottleTarget target]
// Type encoding: @16@0:8
// Implementation: 0x100bbb464

// -[SCThrottleTarget setTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x100babfb4

// -[SCThrottleTarget selector]
// Type encoding: :16@0:8
// Implementation: 0x100bbb47c

// -[SCThrottleTarget setSelector:]
// Type encoding: v24@0:8:16
// Implementation: 0x100bac3f8

// -[SCThrottleTarget throttleTimer]
// Type encoding: @16@0:8
// Implementation: 0x100bbb4c8

// -[SCThrottleTarget setThrottleTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bac400

// -[SCThrottleTarget .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af84810

@end
