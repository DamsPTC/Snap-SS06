// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAMapSerializable
// Superclass: NSObject
// Address: 0x112d2f478

@interface SCAMapSerializable

// Property: protoDictionary; attributes: T@"NSMutableDictionary",&,V_protoDictionary
// Property: rawDictionary; attributes: T@"NSMutableDictionary",&,V_rawDictionary
// Property: fieldTypeDict; attributes: T@"NSMutableDictionary",&,V_fieldTypeDict
// Property: protoFieldNumberDict; attributes: T@"NSMutableDictionary",&,V_protoFieldNumberDict
// Property: drainNestedObjects; attributes: TB,N,V_drainNestedObjects

// -[SCAMapSerializable init]
// Type encoding: @16@0:8
// Implementation: 0x100114584

// -[SCAMapSerializable initWithDrainNestedObjects:]
// Type encoding: @20@0:8B16
// Implementation: 0x10011458c

// -[SCAMapSerializable copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x100285d64

// -[SCAMapSerializable deepCopy]
// Type encoding: @16@0:8
// Implementation: 0x10bc97f64

// -[SCAMapSerializable _deepCopyDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc98098

// -[SCAMapSerializable _deepCopyValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc981c8

// -[SCAMapSerializable asDictionary]
// Type encoding: @16@0:8
// Implementation: 0x1002858e8

// -[SCAMapSerializable prepareDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x100285a2c

// -[SCAMapSerializable getEventName]
// Type encoding: @16@0:8
// Implementation: 0x100c8dce4

// -[SCAMapSerializable constructFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x10bc983e8

// -[SCAMapSerializable getFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x10bc98548

// -[SCAMapSerializable addToProtoDictionary]
// Type encoding: v16@0:8
// Implementation: 0x10bc98550

// -[SCAMapSerializable toProtoWithBitmapLength:allowedFields:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x1003f2f68

// -[SCAMapSerializable writeToStream:type:protoFieldNumber:value:fieldSetBitmap:]
// Type encoding: v52@0:8@16Q24i32@36*44
// Implementation: 0x1003f3e78

// -[SCAMapSerializable populateBitmap:fieldNumber:]
// Type encoding: v28@0:8*16i24
// Implementation: 0x1003f5044

// -[SCAMapSerializable setField:value:type:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x100116124

// -[SCAMapSerializable setField:fieldNumber:value:type:]
// Type encoding: v48@0:8@16q24@32Q40
// Implementation: 0x10011605c

// -[SCAMapSerializable setField:protoValue:type:jsonValue:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x100212b88

// -[SCAMapSerializable setField:fieldNumber:protoValue:type:jsonValue:]
// Type encoding: v56@0:8@16q24@32Q40@48
// Implementation: 0x100212a70

// -[SCAMapSerializable _isValueNull:]
// Type encoding: B24@0:8@16
// Implementation: 0x1003f44fc

// -[SCAMapSerializable _isValueEnumNull:type:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x100212b5c

// -[SCAMapSerializable toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc98554

// -[SCAMapSerializable compareHelper:target:comparator:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10bc9855c

// -[SCAMapSerializable protoDictionary]
// Type encoding: @16@0:8
// Implementation: 0x10011623c

// -[SCAMapSerializable setProtoDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x100285f64

// -[SCAMapSerializable rawDictionary]
// Type encoding: @16@0:8
// Implementation: 0x100116248

// -[SCAMapSerializable setRawDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x100285f18

// -[SCAMapSerializable fieldTypeDict]
// Type encoding: @16@0:8
// Implementation: 0x100116254

// -[SCAMapSerializable setFieldTypeDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x10028604c

// -[SCAMapSerializable protoFieldNumberDict]
// Type encoding: @16@0:8
// Implementation: 0x100116118

// -[SCAMapSerializable setProtoFieldNumberDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x100286074

// -[SCAMapSerializable drainNestedObjects]
// Type encoding: B16@0:8
// Implementation: 0x10bc9865c

// -[SCAMapSerializable setDrainNestedObjects:]
// Type encoding: v20@0:8B16
// Implementation: 0x10bc98664

// -[SCAMapSerializable .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100286494

@end
