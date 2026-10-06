// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBEnumDescriptor
// Superclass: NSObject
// Address: 0x112d34608

@interface GPBEnumDescriptor

// Property: name; attributes: T@"NSString",R,C,N,Vname_
// Property: enumVerifier; attributes: T^?,R,N,VenumVerifier_
// Property: isClosed; attributes: TB,R,N
// Property: enumNameCount; attributes: TI,R,N

// -[GPBEnumDescriptor initWithName:valueNames:values:count:enumVerifier:flags:]
// Type encoding: @56@0:8@16r*24r^i32I40^?44I52
// Implementation: 0x10010b0cc

// -[GPBEnumDescriptor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10bd61644

// -[GPBEnumDescriptor copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10bd61698

// -[GPBEnumDescriptor isClosed]
// Type encoding: B16@0:8
// Implementation: 0x10bd6169c

// -[GPBEnumDescriptor calcValueNameOffsets]
// Type encoding: v16@0:8
// Implementation: 0x1004fb92c

// -[GPBEnumDescriptor enumNameForValue:]
// Type encoding: @20@0:8i16
// Implementation: 0x10bd616a8

// -[GPBEnumDescriptor getValue:forEnumName:]
// Type encoding: B32@0:8^i16@24
// Implementation: 0x1004fb840

// -[GPBEnumDescriptor getValue:forEnumTextFormatName:]
// Type encoding: B32@0:8^i16@24
// Implementation: 0x10bd616e0

// -[GPBEnumDescriptor textFormatNameForValue:]
// Type encoding: @20@0:8i16
// Implementation: 0x10bd61768

// -[GPBEnumDescriptor enumNameCount]
// Type encoding: I16@0:8
// Implementation: 0x10bd617a0

// -[GPBEnumDescriptor getEnumNameForIndex:]
// Type encoding: @20@0:8I16
// Implementation: 0x10bd617a8

// -[GPBEnumDescriptor getEnumTextFormatNameForIndex:]
// Type encoding: @20@0:8I16
// Implementation: 0x10bd61814

// -[GPBEnumDescriptor name]
// Type encoding: @16@0:8
// Implementation: 0x10bd61938

// -[GPBEnumDescriptor enumVerifier]
// Type encoding: ^?16@0:8
// Implementation: 0x100111890

// +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:flags:]
// Type encoding: @56@0:8@16r*24r^i32I40^?44I52
// Implementation: 0x10010b054

// +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:flags:extraTextFormatInfo:]
// Type encoding: @64@0:8@16r*24r^i32I40^?44I52r*56
// Implementation: 0x10010b030

// +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:]
// Type encoding: @52@0:8@16r*24r^i32I40^?44
// Implementation: 0x10bd61618

// +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:extraTextFormatInfo:]
// Type encoding: @60@0:8@16r*24r^i32I40^?44r*52
// Implementation: 0x10bd61620

@end
