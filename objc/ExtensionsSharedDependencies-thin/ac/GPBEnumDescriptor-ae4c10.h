// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBEnumDescriptor
// Superclass: NSObject
// Address: 0xae4c10

@interface GPBEnumDescriptor

// Property: name; attributes: T@"NSString",R,C,N,Vname_
// Property: enumVerifier; attributes: T^?,R,N,VenumVerifier_
// Property: isClosed; attributes: TB,R,N
// Property: enumNameCount; attributes: TI,R,N

// -[GPBEnumDescriptor initWithName:valueNames:values:count:enumVerifier:flags:]
// Type encoding: @56@0:8@16r*24r^i32I40^?44I52
// Implementation: 0x7449ec

// -[GPBEnumDescriptor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x744a78

// -[GPBEnumDescriptor copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x744acc

// -[GPBEnumDescriptor isClosed]
// Type encoding: B16@0:8
// Implementation: 0x744ad0

// -[GPBEnumDescriptor calcValueNameOffsets]
// Type encoding: v16@0:8
// Implementation: 0x744adc

// -[GPBEnumDescriptor enumNameForValue:]
// Type encoding: @20@0:8i16
// Implementation: 0x744b60

// -[GPBEnumDescriptor getValue:forEnumName:]
// Type encoding: B32@0:8^i16@24
// Implementation: 0x744b98

// -[GPBEnumDescriptor getValue:forEnumTextFormatName:]
// Type encoding: B32@0:8^i16@24
// Implementation: 0x744c84

// -[GPBEnumDescriptor textFormatNameForValue:]
// Type encoding: @20@0:8i16
// Implementation: 0x744d0c

// -[GPBEnumDescriptor enumNameCount]
// Type encoding: I16@0:8
// Implementation: 0x744d44

// -[GPBEnumDescriptor getEnumNameForIndex:]
// Type encoding: @20@0:8I16
// Implementation: 0x744d4c

// -[GPBEnumDescriptor getEnumTextFormatNameForIndex:]
// Type encoding: @20@0:8I16
// Implementation: 0x744db8

// -[GPBEnumDescriptor name]
// Type encoding: @16@0:8
// Implementation: 0x744edc

// -[GPBEnumDescriptor enumVerifier]
// Type encoding: ^?16@0:8
// Implementation: 0x744ee4

// +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:flags:]
// Type encoding: @56@0:8@16r*24r^i32I40^?44I52
// Implementation: 0x744924

// +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:flags:extraTextFormatInfo:]
// Type encoding: @64@0:8@16r*24r^i32I40^?44I52r*56
// Implementation: 0x74499c

// +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:]
// Type encoding: @52@0:8@16r*24r^i32I40^?44
// Implementation: 0x7449c0

// +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:extraTextFormatInfo:]
// Type encoding: @60@0:8@16r*24r^i32I40^?44r*52
// Implementation: 0x7449c8

@end
