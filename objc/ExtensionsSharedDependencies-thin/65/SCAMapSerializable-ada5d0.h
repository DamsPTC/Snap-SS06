// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAMapSerializable
// Superclass: NSObject
// Address: 0xada5d0

@interface SCAMapSerializable

// Property: protoDictionary; attributes: T@"NSMutableDictionary",&,V_protoDictionary
// Property: rawDictionary; attributes: T@"NSMutableDictionary",&,V_rawDictionary
// Property: fieldTypeDict; attributes: T@"NSMutableDictionary",&,V_fieldTypeDict
// Property: protoFieldNumberDict; attributes: T@"NSMutableDictionary",&,V_protoFieldNumberDict
// Property: drainNestedObjects; attributes: TB,N,V_drainNestedObjects

// -[SCAMapSerializable init]
// Type encoding: @16@0:8
// Implementation: 0x595bb4

// -[SCAMapSerializable initWithDrainNestedObjects:]
// Type encoding: @20@0:8B16
// Implementation: 0x595bbc

// -[SCAMapSerializable copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x595c90

// -[SCAMapSerializable deepCopy]
// Type encoding: @16@0:8
// Implementation: 0x595da4

// -[SCAMapSerializable _deepCopyDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x595ed8

// -[SCAMapSerializable _deepCopyValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x596008

// -[SCAMapSerializable asDictionary]
// Type encoding: @16@0:8
// Implementation: 0x596228

// -[SCAMapSerializable prepareDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x5962ac

// -[SCAMapSerializable getEventName]
// Type encoding: @16@0:8
// Implementation: 0x5962b0

// -[SCAMapSerializable constructFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x5962b8

// -[SCAMapSerializable getFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x596418

// -[SCAMapSerializable addToProtoDictionary]
// Type encoding: v16@0:8
// Implementation: 0x596420

// -[SCAMapSerializable toProtoWithBitmapLength:allowedFields:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x596424

// -[SCAMapSerializable writeToStream:type:protoFieldNumber:value:fieldSetBitmap:]
// Type encoding: v52@0:8@16Q24i32@36*44
// Implementation: 0x596780

// -[SCAMapSerializable populateBitmap:fieldNumber:]
// Type encoding: v28@0:8*16i24
// Implementation: 0x596e04

// -[SCAMapSerializable setField:value:type:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x596e30

// -[SCAMapSerializable setField:fieldNumber:value:type:]
// Type encoding: v48@0:8@16q24@32Q40
// Implementation: 0x596f48

// -[SCAMapSerializable setField:protoValue:type:jsonValue:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x597004

// -[SCAMapSerializable setField:fieldNumber:protoValue:type:jsonValue:]
// Type encoding: v56@0:8@16q24@32Q40@48
// Implementation: 0x59714c

// -[SCAMapSerializable _isValueNull:]
// Type encoding: B24@0:8@16
// Implementation: 0x597238

// -[SCAMapSerializable _isValueEnumNull:type:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x5972a8

// -[SCAMapSerializable toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x5972d4

// -[SCAMapSerializable compareHelper:target:comparator:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x5972dc

// -[SCAMapSerializable protoDictionary]
// Type encoding: @16@0:8
// Implementation: 0x5973dc

// -[SCAMapSerializable setProtoDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x5973e8

// -[SCAMapSerializable rawDictionary]
// Type encoding: @16@0:8
// Implementation: 0x5973f0

// -[SCAMapSerializable setRawDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x5973fc

// -[SCAMapSerializable fieldTypeDict]
// Type encoding: @16@0:8
// Implementation: 0x597404

// -[SCAMapSerializable setFieldTypeDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x597410

// -[SCAMapSerializable protoFieldNumberDict]
// Type encoding: @16@0:8
// Implementation: 0x597418

// -[SCAMapSerializable setProtoFieldNumberDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x597424

// -[SCAMapSerializable drainNestedObjects]
// Type encoding: B16@0:8
// Implementation: 0x59742c

// -[SCAMapSerializable setDrainNestedObjects:]
// Type encoding: v20@0:8B16
// Implementation: 0x597434

// -[SCAMapSerializable .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x59743c

@end
