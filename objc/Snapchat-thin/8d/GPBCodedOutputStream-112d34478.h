// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBCodedOutputStream
// Superclass: NSObject
// Address: 0x112d34478

@interface GPBCodedOutputStream


// -[GPBCodedOutputStream dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10029a508

// -[GPBCodedOutputStream initWithOutputStream:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bd5ebb8

// -[GPBCodedOutputStream initWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x100297908

// -[GPBCodedOutputStream initWithOutputStream:data:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100297914

// -[GPBCodedOutputStream bytesWritten]
// Type encoding: Q16@0:8
// Implementation: 0x10bd5ec24

// -[GPBCodedOutputStream writeDoubleNoTag:]
// Type encoding: v24@0:8d16
// Implementation: 0x10bd5ec30

// -[GPBCodedOutputStream writeDouble:value:]
// Type encoding: v28@0:8i16d20
// Implementation: 0x10057f050

// -[GPBCodedOutputStream writeFloatNoTag:]
// Type encoding: v20@0:8f16
// Implementation: 0x10bd5ec3c

// -[GPBCodedOutputStream writeFloat:value:]
// Type encoding: v24@0:8i16f20
// Implementation: 0x10bd5ed14

// -[GPBCodedOutputStream writeUInt64NoTag:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10bd5ed54

// -[GPBCodedOutputStream writeUInt64:value:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x100ab6fec

// -[GPBCodedOutputStream writeInt64NoTag:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bd5ed60

// -[GPBCodedOutputStream writeInt64:value:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x1003f5070

// -[GPBCodedOutputStream writeInt32NoTag:]
// Type encoding: v20@0:8i16
// Implementation: 0x10061132c

// -[GPBCodedOutputStream writeInt32:value:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x100298cfc

// -[GPBCodedOutputStream writeFixed64NoTag:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10bd5ed6c

// -[GPBCodedOutputStream writeFixed64:value:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x10059d540

// -[GPBCodedOutputStream writeFixed32NoTag:]
// Type encoding: v20@0:8I16
// Implementation: 0x10bd5ed78

// -[GPBCodedOutputStream writeFixed32:value:]
// Type encoding: v24@0:8i16I20
// Implementation: 0x10bd5ed84

// -[GPBCodedOutputStream writeBoolNoTag:]
// Type encoding: v20@0:8B16
// Implementation: 0x10bd5edbc

// -[GPBCodedOutputStream writeBool:value:]
// Type encoding: v24@0:8i16B20
// Implementation: 0x1003f5790

// -[GPBCodedOutputStream writeStringNoTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x100298818

// -[GPBCodedOutputStream writeString:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x1002987e0

// -[GPBCodedOutputStream writeGroupNoTag:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x10bd5ee04

// -[GPBCodedOutputStream writeGroup:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x10bd5ee3c

// -[GPBCodedOutputStream writeUnknownGroupNoTag:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x10bd5ee84

// -[GPBCodedOutputStream writeUnknownGroup:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x10bd5eebc

// -[GPBCodedOutputStream writeMessageNoTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x100298a84

// -[GPBCodedOutputStream writeMessage:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x100298a4c

// -[GPBCodedOutputStream writeBytesNoTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x100298af8

// -[GPBCodedOutputStream writeBytes:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x100298ac0

// -[GPBCodedOutputStream writeUInt32NoTag:]
// Type encoding: v20@0:8I16
// Implementation: 0x10bd5ef04

// -[GPBCodedOutputStream writeUInt32:value:]
// Type encoding: v24@0:8i16I20
// Implementation: 0x10bd5ef10

// -[GPBCodedOutputStream writeEnumNoTag:]
// Type encoding: v20@0:8i16
// Implementation: 0x10bd5ef44

// -[GPBCodedOutputStream writeEnum:value:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x100298d40

// -[GPBCodedOutputStream writeSFixed32NoTag:]
// Type encoding: v20@0:8i16
// Implementation: 0x10bd5ef50

// -[GPBCodedOutputStream writeSFixed32:value:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x10bd5ef5c

// -[GPBCodedOutputStream writeSFixed64NoTag:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bd5ef94

// -[GPBCodedOutputStream writeSFixed64:value:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x10bd5efa0

// -[GPBCodedOutputStream writeSInt32NoTag:]
// Type encoding: v20@0:8i16
// Implementation: 0x10bd5efd8

// -[GPBCodedOutputStream writeSInt32:value:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x10bd5efe8

// -[GPBCodedOutputStream writeSInt64NoTag:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bd5f020

// -[GPBCodedOutputStream writeSInt64:value:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x10bd5f030

// -[GPBCodedOutputStream writeDoubleArray:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x10bd5f068

// -[GPBCodedOutputStream writeFloatArray:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x10bd5f1e8

// -[GPBCodedOutputStream writeUInt64Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x10bd5f368

// -[GPBCodedOutputStream writeInt64Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x1009da010

// -[GPBCodedOutputStream writeInt32Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x100611178

// -[GPBCodedOutputStream writeUInt32Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x10bd5f57c

// -[GPBCodedOutputStream writeFixed64Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x10bd5f738

// -[GPBCodedOutputStream writeFixed32Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x10bd5f8c0

// -[GPBCodedOutputStream writeSInt32Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x10bd5fa48

// -[GPBCodedOutputStream writeSInt64Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x10bd5fc0c

// -[GPBCodedOutputStream writeSFixed64Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x10bd5fdb8

// -[GPBCodedOutputStream writeSFixed32Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x10bd5ff40

// -[GPBCodedOutputStream writeBoolArray:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x10bd600c8

// -[GPBCodedOutputStream writeEnumArray:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x100298d74

// -[GPBCodedOutputStream writeStringArray:values:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x1009da160

// -[GPBCodedOutputStream writeMessageArray:values:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x100298954

// -[GPBCodedOutputStream writeBytesArray:values:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x1009d9f18

// -[GPBCodedOutputStream writeGroupArray:values:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x10bd602c8

// -[GPBCodedOutputStream writeUnknownGroupArray:values:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x10bd603c0

// -[GPBCodedOutputStream writeMessageSetExtension:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x10bd604b8

// -[GPBCodedOutputStream writeRawMessageSetExtension:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x10bd60584

// -[GPBCodedOutputStream flush]
// Type encoding: v16@0:8
// Implementation: 0x10029a4f4

// -[GPBCodedOutputStream writeRawByte:]
// Type encoding: v20@0:8C16
// Implementation: 0x10bd60650

// -[GPBCodedOutputStream writeRawData:]
// Type encoding: v24@0:8@16
// Implementation: 0x100298ba4

// -[GPBCodedOutputStream writeRawPtr:offset:length:]
// Type encoding: v40@0:8r^v16Q24Q32
// Implementation: 0x100298bf0

// -[GPBCodedOutputStream writeTag:format:]
// Type encoding: v24@0:8I16i20
// Implementation: 0x10bd60698

// -[GPBCodedOutputStream writeRawVarint32:]
// Type encoding: v20@0:8i16
// Implementation: 0x10bd606a4

// -[GPBCodedOutputStream writeRawVarintSizeTAs32:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10bd606b0

// -[GPBCodedOutputStream writeRawVarint64:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bd606bc

// -[GPBCodedOutputStream writeRawLittleEndian32:]
// Type encoding: v20@0:8i16
// Implementation: 0x10bd606c8

// -[GPBCodedOutputStream writeRawLittleEndian64:]
// Type encoding: v24@0:8q16
// Implementation: 0x10bd606d4

// +[GPBCodedOutputStream streamWithOutputStream:]
// Type encoding: @24@0:8@16
// Implementation: 0x1003f375c

// +[GPBCodedOutputStream streamWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bd5ebfc

@end
