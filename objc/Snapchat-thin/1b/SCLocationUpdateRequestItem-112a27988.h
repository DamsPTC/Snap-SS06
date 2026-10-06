// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocationUpdateRequestItem
// Superclass: NSObject
// Address: 0x112a27988

@interface SCLocationUpdateRequestItem

// Property: startTime; attributes: T@"NSDate",&,N,V_startTime
// Property: appStateWhenRequestStart; attributes: Tq,N,V_appStateWhenRequestStart
// Property: tracingId; attributes: TQ,N,V_tracingId

// -[SCLocationUpdateRequestItem initWithStartTimestamp:appState:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1052dab40

// -[SCLocationUpdateRequestItem startTime]
// Type encoding: @16@0:8
// Implementation: 0x1052dabc4

// -[SCLocationUpdateRequestItem setStartTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052dabcc

// -[SCLocationUpdateRequestItem appStateWhenRequestStart]
// Type encoding: q16@0:8
// Implementation: 0x1052dabfc

// -[SCLocationUpdateRequestItem setAppStateWhenRequestStart:]
// Type encoding: v24@0:8q16
// Implementation: 0x1052dac04

// -[SCLocationUpdateRequestItem tracingId]
// Type encoding: Q16@0:8
// Implementation: 0x1052dac0c

// -[SCLocationUpdateRequestItem setTracingId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1052dac14

// -[SCLocationUpdateRequestItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052dac1c

@end
