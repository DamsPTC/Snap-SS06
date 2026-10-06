// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCriticalSectionImpl
// Superclass: NSObject
// Address: 0x112a28ec8

@interface SCCriticalSectionImpl

// Property: criticalSectionObservable; attributes: T@"SCBehaviorSubject",R,N,V_criticalSectionObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCriticalSectionImpl initWithCriticalSectionTimeoutInSeconds:asyncQueueProvider:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x100113848

// -[SCCriticalSectionImpl startCriticalSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x1052f8e90

// -[SCCriticalSectionImpl startCriticalSection:prefersSynchronous:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x1052f8e98

// -[SCCriticalSectionImpl endCriticalSectionWithReason:identicalToken:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1052f906c

// -[SCCriticalSectionImpl criticalSectionObservable]
// Type encoding: @16@0:8
// Implementation: 0x100114668

// -[SCCriticalSectionImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052f91b8

@end
