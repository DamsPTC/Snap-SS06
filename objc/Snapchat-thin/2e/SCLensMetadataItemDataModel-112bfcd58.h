// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMetadataItemDataModel
// Superclass: SCDocObject
// Address: 0x112bfcd58

@interface SCLensMetadataItemDataModel

// Property: lensId; attributes: T@"NSString",R,C,N,V_lensId
// Property: checksum; attributes: T@"NSData",R,C,N,V_checksum
// Property: expirationTimestamp; attributes: TQ,R,N,V_expirationTimestamp
// Property: namespaceName; attributes: T@"NSString",R,C,N,V_namespaceName
// Property: lensMetadata; attributes: T@"SCLensMetadataDataModel",R,C,N,V_lensMetadata

// -[SCLensMetadataItemDataModel initWithLensId:checksum:expirationTimestamp:namespaceName:lensMetadata:]
// Type encoding: @56@0:8@16@24Q32@40@48
// Implementation: 0x10aec7dd8

// -[SCLensMetadataItemDataModel copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10aec7f10

// -[SCLensMetadataItemDataModel hash]
// Type encoding: Q16@0:8
// Implementation: 0x10aec7f34

// -[SCLensMetadataItemDataModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aec7fdc

// -[SCLensMetadataItemDataModel lensId]
// Type encoding: @16@0:8
// Implementation: 0x10aec80ec

// -[SCLensMetadataItemDataModel checksum]
// Type encoding: @16@0:8
// Implementation: 0x10aec80fc

// -[SCLensMetadataItemDataModel expirationTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x10aec810c

// -[SCLensMetadataItemDataModel namespaceName]
// Type encoding: @16@0:8
// Implementation: 0x10aec811c

// -[SCLensMetadataItemDataModel lensMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10aec812c

// -[SCLensMetadataItemDataModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aec813c

// +[SCLensMetadataItemDataModel table]
// Type encoding: r*16@0:8
// Implementation: 0x10aedbffc

// +[SCLensMetadataItemDataModel immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x10aedc008

// +[SCLensMetadataItemDataModel objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x10aedc244

@end
