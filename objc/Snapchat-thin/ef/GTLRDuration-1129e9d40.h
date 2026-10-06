// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTLRDuration
// Superclass: NSObject
// Address: 0x1129e9d40

@interface GTLRDuration

// Property: seconds; attributes: Tq,R,N,V_seconds
// Property: nanos; attributes: Ti,R,N,V_nanos
// Property: timeInterval; attributes: Td,R,D,N
// Property: jsonString; attributes: T@"NSString",R,N,V_jsonString

// -[GTLRDuration init]
// Type encoding: @16@0:8
// Implementation: 0x104a0c714

// -[GTLRDuration initWithSeconds:nanos:jsonString:]
// Type encoding: @36@0:8q16i24@28
// Implementation: 0x104a0c724

// -[GTLRDuration timeInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a0c880

// -[GTLRDuration copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a0c8c8

// -[GTLRDuration isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a0c8cc

// -[GTLRDuration hash]
// Type encoding: Q16@0:8
// Implementation: 0x104a0c974

// -[GTLRDuration description]
// Type encoding: @16@0:8
// Implementation: 0x104a0c9a8

// -[GTLRDuration seconds]
// Type encoding: q16@0:8
// Implementation: 0x104a0ca28

// -[GTLRDuration nanos]
// Type encoding: i16@0:8
// Implementation: 0x104a0ca30

// -[GTLRDuration jsonString]
// Type encoding: @16@0:8
// Implementation: 0x104a0ca38

// -[GTLRDuration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a0ca40

// +[GTLRDuration durationWithSeconds:nanos:]
// Type encoding: @28@0:8q16i24
// Implementation: 0x104a0c3d4

// +[GTLRDuration durationWithJSONString:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a0c444

// +[GTLRDuration durationWithTimeInterval:]
// Type encoding: @24@0:8d16
// Implementation: 0x104a0c6b8

@end
