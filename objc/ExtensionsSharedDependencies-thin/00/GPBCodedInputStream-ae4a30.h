// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBCodedInputStream
// Superclass: NSObject
// Address: 0xae4a30

@interface GPBCodedInputStream


// -[GPBCodedInputStream initWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x73f464

// -[GPBCodedInputStream dealloc]
// Type encoding: v16@0:8
// Implementation: 0x73f4d8

// -[GPBCodedInputStream readTag]
// Type encoding: i16@0:8
// Implementation: 0x73f520

// -[GPBCodedInputStream checkLastTagWas:]
// Type encoding: v20@0:8i16
// Implementation: 0x73f528

// -[GPBCodedInputStream skipField:]
// Type encoding: B20@0:8i16
// Implementation: 0x73f548

// -[GPBCodedInputStream skipMessage]
// Type encoding: v16@0:8
// Implementation: 0x73f644

// -[GPBCodedInputStream isAtEnd]
// Type encoding: B16@0:8
// Implementation: 0x73f67c

// -[GPBCodedInputStream position]
// Type encoding: Q16@0:8
// Implementation: 0x73f6a0

// -[GPBCodedInputStream pushLimit:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x73f6a8

// -[GPBCodedInputStream popLimit:]
// Type encoding: v24@0:8Q16
// Implementation: 0x73f6f0

// -[GPBCodedInputStream readDouble]
// Type encoding: d16@0:8
// Implementation: 0x73f6f8

// -[GPBCodedInputStream readFloat]
// Type encoding: f16@0:8
// Implementation: 0x73f734

// -[GPBCodedInputStream readUInt64]
// Type encoding: Q16@0:8
// Implementation: 0x73f770

// -[GPBCodedInputStream readInt64]
// Type encoding: q16@0:8
// Implementation: 0x73f778

// -[GPBCodedInputStream readInt32]
// Type encoding: i16@0:8
// Implementation: 0x73f780

// -[GPBCodedInputStream readFixed64]
// Type encoding: Q16@0:8
// Implementation: 0x73f798

// -[GPBCodedInputStream readFixed32]
// Type encoding: I16@0:8
// Implementation: 0x73f7d4

// -[GPBCodedInputStream readBool]
// Type encoding: B16@0:8
// Implementation: 0x73f810

// -[GPBCodedInputStream readString]
// Type encoding: @16@0:8
// Implementation: 0x73f830

// -[GPBCodedInputStream readGroup:message:extensionRegistry:]
// Type encoding: v36@0:8i16@20@28
// Implementation: 0x73f848

// -[GPBCodedInputStream readUnknownGroup:message:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x73f8dc

// -[GPBCodedInputStream readMessage:extensionRegistry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x73f968

// -[GPBCodedInputStream readMapEntry:extensionRegistry:field:parentMessage:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x73fa38

// -[GPBCodedInputStream readBytes]
// Type encoding: @16@0:8
// Implementation: 0x73fb20

// -[GPBCodedInputStream readUInt32]
// Type encoding: I16@0:8
// Implementation: 0x73fb38

// -[GPBCodedInputStream readEnum]
// Type encoding: i16@0:8
// Implementation: 0x73fb50

// -[GPBCodedInputStream readSFixed32]
// Type encoding: i16@0:8
// Implementation: 0x73fb68

// -[GPBCodedInputStream readSFixed64]
// Type encoding: q16@0:8
// Implementation: 0x73fba4

// -[GPBCodedInputStream readSInt32]
// Type encoding: i16@0:8
// Implementation: 0x73fbe0

// -[GPBCodedInputStream readSInt64]
// Type encoding: q16@0:8
// Implementation: 0x73fc00

// +[GPBCodedInputStream streamWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x73f43c

@end
