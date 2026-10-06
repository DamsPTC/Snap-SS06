// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBTimestamp
// Superclass: GPBMessage
// Address: 0xae4238

@interface GPBTimestamp

// Property: date; attributes: T@"NSDate",&,N
// Property: timeIntervalSince1970; attributes: Td,N
// Property: seconds; attributes: Tq,D,N
// Property: nanos; attributes: Ti,D,N

// -[GPBTimestamp initWithDate:]
// Type encoding: @24@0:8@16
// Implementation: 0x76ea60

// -[GPBTimestamp initWithTimeIntervalSince1970:]
// Type encoding: @24@0:8d16
// Implementation: 0x76ea88

// -[GPBTimestamp date]
// Type encoding: @16@0:8
// Implementation: 0x76eb30

// -[GPBTimestamp setDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x76eb58

// -[GPBTimestamp timeIntervalSince1970]
// Type encoding: d16@0:8
// Implementation: 0x76eb80

// -[GPBTimestamp setTimeIntervalSince1970:]
// Type encoding: v24@0:8d16
// Implementation: 0x76ebc4

// +[GPBTimestamp descriptor]
// Type encoding: @16@0:8
// Implementation: 0x739c60

@end
