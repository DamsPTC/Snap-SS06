// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaMetadata
// Superclass: NSObject
// Address: 0x112ca1e98

@interface SCMediaMetadata

// Property: mediaId; attributes: T@"NSString",R,C,N,V_mediaId
// Property: type; attributes: Tq,R,N,V_type
// Property: orientation; attributes: Tq,R,N,V_orientation
// Property: dimensions; attributes: T@"SCMediaDimensions",R,C,N,V_dimensions
// Property: encryptionInfo; attributes: T@"SCMediaEncryptionInfo",R,C,N,V_encryptionInfo
// Property: duration; attributes: T@"SCMediaDuration",R,C,N,V_duration

// -[SCMediaMetadata initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b67c79c

// -[SCMediaMetadata initWithMediaId:type:orientation:dimensions:encryptionInfo:duration:]
// Type encoding: @64@0:8@16q24q32@40@48@56
// Implementation: 0x10b67c8c4

// -[SCMediaMetadata copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b67c9e4

// -[SCMediaMetadata encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67ca08

// -[SCMediaMetadata hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b67cab8

// -[SCMediaMetadata isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b67cb50

// -[SCMediaMetadata mediaId]
// Type encoding: @16@0:8
// Implementation: 0x10b67cc48

// -[SCMediaMetadata type]
// Type encoding: q16@0:8
// Implementation: 0x10b67cc50

// -[SCMediaMetadata orientation]
// Type encoding: q16@0:8
// Implementation: 0x10b67cc58

// -[SCMediaMetadata dimensions]
// Type encoding: @16@0:8
// Implementation: 0x10b67cc60

// -[SCMediaMetadata encryptionInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b67cc68

// -[SCMediaMetadata duration]
// Type encoding: @16@0:8
// Implementation: 0x10b67cc70

// -[SCMediaMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b67cc78

@end
