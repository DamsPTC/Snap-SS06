// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCriticalSection
// Superclass: NSObject
// Address: 0x1129df108

@interface SCCriticalSection

// Property: reason; attributes: Tq,N,R,Vreason
// Property: enabled; attributes: TB,N,R,Venabled
// Property: ongoingCriticalSectionCount; attributes: Tq,N,R,VongoingCriticalSectionCount
// Property: description; attributes: T@"NSString",N,R

// -[SCCriticalSection reason]
// Type encoding: q16@0:8
// Implementation: 0x104875afc

// -[SCCriticalSection enabled]
// Type encoding: B16@0:8
// Implementation: 0x104875b0c

// -[SCCriticalSection ongoingCriticalSectionCount]
// Type encoding: q16@0:8
// Implementation: 0x104875b1c

// -[SCCriticalSection initWithReason:enabled:ongoingCriticalSectionCount:]
// Type encoding: @36@0:8q16B24q28
// Implementation: 0x104875b30

// -[SCCriticalSection copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104875c18

// -[SCCriticalSection description]
// Type encoding: @16@0:8
// Implementation: 0x104875c1c

// -[SCCriticalSection init]
// Type encoding: @16@0:8
// Implementation: 0x104875c38

@end
