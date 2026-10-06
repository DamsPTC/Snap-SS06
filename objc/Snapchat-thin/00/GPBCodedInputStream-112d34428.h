// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBCodedInputStream
// Superclass: NSObject
// Address: 0x112d34428

@interface GPBCodedInputStream


// -[GPBCodedInputStream initWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x100108f84

// -[GPBCodedInputStream dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10010cf08

// -[GPBCodedInputStream readTag]
// Type encoding: i16@0:8
// Implementation: 0x10bd5e690

// -[GPBCodedInputStream checkLastTagWas:]
// Type encoding: v20@0:8i16
// Implementation: 0x10010cee8

// -[GPBCodedInputStream skipField:]
// Type encoding: B20@0:8i16
// Implementation: 0x10bd5e698

// -[GPBCodedInputStream skipMessage]
// Type encoding: v16@0:8
// Implementation: 0x10bd5e794

// -[GPBCodedInputStream isAtEnd]
// Type encoding: B16@0:8
// Implementation: 0x10bd5e7cc

// -[GPBCodedInputStream position]
// Type encoding: Q16@0:8
// Implementation: 0x10bd5e7f0

// -[GPBCodedInputStream pushLimit:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x10bd5e7f8

// -[GPBCodedInputStream popLimit:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10bd5e840

// -[GPBCodedInputStream readDouble]
// Type encoding: d16@0:8
// Implementation: 0x10bd5e848

// -[GPBCodedInputStream readFloat]
// Type encoding: f16@0:8
// Implementation: 0x10bd5e884

// -[GPBCodedInputStream readUInt64]
// Type encoding: Q16@0:8
// Implementation: 0x10bd5e8c0

// -[GPBCodedInputStream readInt64]
// Type encoding: q16@0:8
// Implementation: 0x10bd5e8c8

// -[GPBCodedInputStream readInt32]
// Type encoding: i16@0:8
// Implementation: 0x10bd5e8d0

// -[GPBCodedInputStream readFixed64]
// Type encoding: Q16@0:8
// Implementation: 0x10bd5e8e8

// -[GPBCodedInputStream readFixed32]
// Type encoding: I16@0:8
// Implementation: 0x10bd5e924

// -[GPBCodedInputStream readBool]
// Type encoding: B16@0:8
// Implementation: 0x10bd5e960

// -[GPBCodedInputStream readString]
// Type encoding: @16@0:8
// Implementation: 0x10bd5e980

// -[GPBCodedInputStream readGroup:message:extensionRegistry:]
// Type encoding: v36@0:8i16@20@28
// Implementation: 0x10bd5e998

// -[GPBCodedInputStream readUnknownGroup:message:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x10bd5ea2c

// -[GPBCodedInputStream readMessage:extensionRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10010c82c

// -[GPBCodedInputStream readMapEntry:extensionRegistry:field:parentMessage:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1003f8e20

// -[GPBCodedInputStream readBytes]
// Type encoding: @16@0:8
// Implementation: 0x10bd5eab8

// -[GPBCodedInputStream readUInt32]
// Type encoding: I16@0:8
// Implementation: 0x10bd5ead0

// -[GPBCodedInputStream readEnum]
// Type encoding: i16@0:8
// Implementation: 0x10bd5eae8

// -[GPBCodedInputStream readSFixed32]
// Type encoding: i16@0:8
// Implementation: 0x10bd5eb00

// -[GPBCodedInputStream readSFixed64]
// Type encoding: q16@0:8
// Implementation: 0x10bd5eb3c

// -[GPBCodedInputStream readSInt32]
// Type encoding: i16@0:8
// Implementation: 0x10bd5eb78

// -[GPBCodedInputStream readSInt64]
// Type encoding: q16@0:8
// Implementation: 0x10bd5eb98

// +[GPBCodedInputStream streamWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bd5e668

@end
