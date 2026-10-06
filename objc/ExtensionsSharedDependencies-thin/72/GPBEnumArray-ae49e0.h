// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBEnumArray
// Superclass: NSObject
// Address: 0xae49e0

@interface GPBEnumArray

// Property: count; attributes: TQ,R,N,V_count
// Property: validationFunc; attributes: T^?,R,N,V_validationFunc

// -[GPBEnumArray init]
// Type encoding: @16@0:8
// Implementation: 0x73e13c

// -[GPBEnumArray initWithValueArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x73e144

// -[GPBEnumArray initWithValidationFunction:]
// Type encoding: @24@0:8^?16
// Implementation: 0x73e154

// -[GPBEnumArray initWithValidationFunction:rawValues:count:]
// Type encoding: @40@0:8^?16r^i24Q32
// Implementation: 0x73e1c0

// -[GPBEnumArray initWithValidationFunction:capacity:]
// Type encoding: @32@0:8^?16Q24
// Implementation: 0x73e264

// -[GPBEnumArray copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x73e2a0

// -[GPBEnumArray dealloc]
// Type encoding: v16@0:8
// Implementation: 0x73e2d0

// -[GPBEnumArray isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x73e318

// -[GPBEnumArray hash]
// Type encoding: Q16@0:8
// Implementation: 0x73e394

// -[GPBEnumArray description]
// Type encoding: @16@0:8
// Implementation: 0x73e39c

// -[GPBEnumArray enumerateRawValuesWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x73e460

// -[GPBEnumArray enumerateRawValuesWithOptions:usingBlock:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x73e46c

// -[GPBEnumArray valueAtIndex:]
// Type encoding: i24@0:8Q16
// Implementation: 0x73e524

// -[GPBEnumArray rawValueAtIndex:]
// Type encoding: i24@0:8Q16
// Implementation: 0x73e59c

// -[GPBEnumArray enumerateValuesWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x73e5fc

// -[GPBEnumArray enumerateValuesWithOptions:usingBlock:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x73e608

// -[GPBEnumArray internalResizeToCapacity:]
// Type encoding: v24@0:8Q16
// Implementation: 0x73e714

// -[GPBEnumArray addRawValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x73e788

// -[GPBEnumArray addRawValues:count:]
// Type encoding: v32@0:8r^i16Q24
// Implementation: 0x73e7b0

// -[GPBEnumArray insertRawValue:atIndex:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x73e844

// -[GPBEnumArray replaceValueAtIndex:withRawValue:]
// Type encoding: v28@0:8Q16i24
// Implementation: 0x73e924

// -[GPBEnumArray addRawValuesFromArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x73e990

// -[GPBEnumArray removeValueAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x73e99c

// -[GPBEnumArray removeAll]
// Type encoding: v16@0:8
// Implementation: 0x73ea54

// -[GPBEnumArray exchangeValueAtIndex:withValueAtIndex:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x73ea70

// -[GPBEnumArray addValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x73eb14

// -[GPBEnumArray addValues:count:]
// Type encoding: v32@0:8r^i16Q24
// Implementation: 0x73eb3c

// -[GPBEnumArray insertValue:atIndex:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x73ec50

// -[GPBEnumArray replaceValueAtIndex:withValue:]
// Type encoding: v28@0:8Q16i24
// Implementation: 0x73ed6c

// -[GPBEnumArray count]
// Type encoding: Q16@0:8
// Implementation: 0x73ee20

// -[GPBEnumArray validationFunc]
// Type encoding: ^?16@0:8
// Implementation: 0x73ee28

// +[GPBEnumArray array]
// Type encoding: @16@0:8
// Implementation: 0x73e060

// +[GPBEnumArray arrayWithValidationFunction:]
// Type encoding: @24@0:8^?16
// Implementation: 0x73e07c

// +[GPBEnumArray arrayWithValidationFunction:rawValue:]
// Type encoding: @28@0:8^?16i24
// Implementation: 0x73e0a4

// +[GPBEnumArray arrayWithValueArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x73e0e4

// +[GPBEnumArray arrayWithValidationFunction:capacity:]
// Type encoding: @32@0:8^?16Q24
// Implementation: 0x73e10c

@end
