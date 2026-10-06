// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GPBCodedOutputStream
// Superclass: NSObject
// Address: 0xae4a80

@interface GPBCodedOutputStream


// -[GPBCodedOutputStream dealloc]
// Type encoding: v16@0:8
// Implementation: 0x73fc20

// -[GPBCodedOutputStream initWithOutputStream:]
// Type encoding: @24@0:8@16
// Implementation: 0x73fc88

// -[GPBCodedOutputStream initWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x73fccc

// -[GPBCodedOutputStream initWithOutputStream:data:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x73fcd8

// -[GPBCodedOutputStream bytesWritten]
// Type encoding: Q16@0:8
// Implementation: 0x73fde4

// -[GPBCodedOutputStream writeDoubleNoTag:]
// Type encoding: v24@0:8d16
// Implementation: 0x73fdf0

// -[GPBCodedOutputStream writeDouble:value:]
// Type encoding: v28@0:8i16d20
// Implementation: 0x73ff78

// -[GPBCodedOutputStream writeFloatNoTag:]
// Type encoding: v20@0:8f16
// Implementation: 0x73ffb8

// -[GPBCodedOutputStream writeFloat:value:]
// Type encoding: v24@0:8i16f20
// Implementation: 0x740090

// -[GPBCodedOutputStream writeUInt64NoTag:]
// Type encoding: v24@0:8Q16
// Implementation: 0x7400d0

// -[GPBCodedOutputStream writeUInt64:value:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x740178

// -[GPBCodedOutputStream writeInt64NoTag:]
// Type encoding: v24@0:8q16
// Implementation: 0x7401ac

// -[GPBCodedOutputStream writeInt64:value:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x7401b8

// -[GPBCodedOutputStream writeInt32NoTag:]
// Type encoding: v20@0:8i16
// Implementation: 0x7401ec

// -[GPBCodedOutputStream writeInt32:value:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x740208

// -[GPBCodedOutputStream writeFixed64NoTag:]
// Type encoding: v24@0:8Q16
// Implementation: 0x74023c

// -[GPBCodedOutputStream writeFixed64:value:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x740248

// -[GPBCodedOutputStream writeFixed32NoTag:]
// Type encoding: v20@0:8I16
// Implementation: 0x740280

// -[GPBCodedOutputStream writeFixed32:value:]
// Type encoding: v24@0:8i16I20
// Implementation: 0x74028c

// -[GPBCodedOutputStream writeBoolNoTag:]
// Type encoding: v20@0:8B16
// Implementation: 0x7402c4

// -[GPBCodedOutputStream writeBool:value:]
// Type encoding: v24@0:8i16B20
// Implementation: 0x74030c

// -[GPBCodedOutputStream writeStringNoTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x740360

// -[GPBCodedOutputStream writeString:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x74052c

// -[GPBCodedOutputStream writeGroupNoTag:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x740564

// -[GPBCodedOutputStream writeGroup:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x74059c

// -[GPBCodedOutputStream writeUnknownGroupNoTag:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x7405e4

// -[GPBCodedOutputStream writeUnknownGroup:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x74061c

// -[GPBCodedOutputStream writeMessageNoTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x740664

// -[GPBCodedOutputStream writeMessage:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x7406a0

// -[GPBCodedOutputStream writeBytesNoTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x7406d8

// -[GPBCodedOutputStream writeBytes:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x740714

// -[GPBCodedOutputStream writeUInt32NoTag:]
// Type encoding: v20@0:8I16
// Implementation: 0x74074c

// -[GPBCodedOutputStream writeUInt32:value:]
// Type encoding: v24@0:8i16I20
// Implementation: 0x740758

// -[GPBCodedOutputStream writeEnumNoTag:]
// Type encoding: v20@0:8i16
// Implementation: 0x74078c

// -[GPBCodedOutputStream writeEnum:value:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x740798

// -[GPBCodedOutputStream writeSFixed32NoTag:]
// Type encoding: v20@0:8i16
// Implementation: 0x7407cc

// -[GPBCodedOutputStream writeSFixed32:value:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x7407d8

// -[GPBCodedOutputStream writeSFixed64NoTag:]
// Type encoding: v24@0:8q16
// Implementation: 0x740810

// -[GPBCodedOutputStream writeSFixed64:value:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x74081c

// -[GPBCodedOutputStream writeSInt32NoTag:]
// Type encoding: v20@0:8i16
// Implementation: 0x740854

// -[GPBCodedOutputStream writeSInt32:value:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x740864

// -[GPBCodedOutputStream writeSInt64NoTag:]
// Type encoding: v24@0:8q16
// Implementation: 0x74089c

// -[GPBCodedOutputStream writeSInt64:value:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x7408ac

// -[GPBCodedOutputStream writeDoubleArray:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x7408e4

// -[GPBCodedOutputStream writeFloatArray:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x740a80

// -[GPBCodedOutputStream writeUInt64Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x740c00

// -[GPBCodedOutputStream writeInt64Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x740da8

// -[GPBCodedOutputStream writeInt32Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x740f50

// -[GPBCodedOutputStream writeUInt32Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x741118

// -[GPBCodedOutputStream writeFixed64Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x7412d4

// -[GPBCodedOutputStream writeFixed32Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x74145c

// -[GPBCodedOutputStream writeSInt32Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x7415e4

// -[GPBCodedOutputStream writeSInt64Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x7417a8

// -[GPBCodedOutputStream writeSFixed64Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x741954

// -[GPBCodedOutputStream writeSFixed32Array:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x741adc

// -[GPBCodedOutputStream writeBoolArray:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x741c64

// -[GPBCodedOutputStream writeEnumArray:values:tag:]
// Type encoding: v32@0:8i16@20I28
// Implementation: 0x741dec

// -[GPBCodedOutputStream writeStringArray:values:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x741fb4

// -[GPBCodedOutputStream writeMessageArray:values:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x7420ac

// -[GPBCodedOutputStream writeBytesArray:values:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x7421a4

// -[GPBCodedOutputStream writeGroupArray:values:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x74229c

// -[GPBCodedOutputStream writeUnknownGroupArray:values:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x742394

// -[GPBCodedOutputStream writeMessageSetExtension:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x74248c

// -[GPBCodedOutputStream writeRawMessageSetExtension:value:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x742558

// -[GPBCodedOutputStream flush]
// Type encoding: v16@0:8
// Implementation: 0x742624

// -[GPBCodedOutputStream writeRawByte:]
// Type encoding: v20@0:8C16
// Implementation: 0x7426c4

// -[GPBCodedOutputStream writeRawData:]
// Type encoding: v24@0:8@16
// Implementation: 0x74270c

// -[GPBCodedOutputStream writeRawPtr:offset:length:]
// Type encoding: v40@0:8r^v16Q24Q32
// Implementation: 0x742758

// -[GPBCodedOutputStream writeTag:format:]
// Type encoding: v24@0:8I16i20
// Implementation: 0x7428ec

// -[GPBCodedOutputStream writeRawVarint32:]
// Type encoding: v20@0:8i16
// Implementation: 0x7428f8

// -[GPBCodedOutputStream writeRawVarintSizeTAs32:]
// Type encoding: v24@0:8Q16
// Implementation: 0x742904

// -[GPBCodedOutputStream writeRawVarint64:]
// Type encoding: v24@0:8q16
// Implementation: 0x742910

// -[GPBCodedOutputStream writeRawLittleEndian32:]
// Type encoding: v20@0:8i16
// Implementation: 0x74291c

// -[GPBCodedOutputStream writeRawLittleEndian64:]
// Type encoding: v24@0:8q16
// Implementation: 0x742928

// +[GPBCodedOutputStream streamWithOutputStream:]
// Type encoding: @24@0:8@16
// Implementation: 0x73fd64

// +[GPBCodedOutputStream streamWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x73fdbc

@end
