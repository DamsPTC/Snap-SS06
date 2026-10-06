// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPromiseWithTimeout
// Superclass: SCPromise
// Address: 0x112a2c668

@interface SCPromiseWithTimeout

// Property: timeoutTimer; attributes: T@"SCGCDBlockTimer",&,V_timeoutTimer
// Property: timeToCompletion; attributes: Td,R,V_timeToCompletion

// -[SCPromiseWithTimeout init]
// Type encoding: @16@0:8
// Implementation: 0x10535a358

// -[SCPromiseWithTimeout completeWithValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10535a3c4

// -[SCPromiseWithTimeout completeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10535a470

// -[SCPromiseWithTimeout dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10535a51c

// -[SCPromiseWithTimeout timeOutAfter:withError:onQueue:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x10535a578

// -[SCPromiseWithTimeout timeToCompletion]
// Type encoding: d16@0:8
// Implementation: 0x10535a714

// -[SCPromiseWithTimeout timeoutTimer]
// Type encoding: @16@0:8
// Implementation: 0x10535a724

// -[SCPromiseWithTimeout setTimeoutTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10535a734

// -[SCPromiseWithTimeout .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10535a740

@end
