// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingAsset
// Superclass: NSObject
// Address: 0x112c4bea8

@interface SCLensProcessingAsset

// Property: toLensAsset; attributes: T@"SCLensAsset",R,N
// Property: assetId; attributes: T@"NSString",R,C,N,V_assetId
// Property: assetType; attributes: Tq,R,N,V_assetType
// Property: avatarId; attributes: T@"NSString",R,C,N,V_avatarId
// Property: encryptionKey; attributes: T@"NSData",R,C,N,V_encryptionKey
// Property: encryptionIv; attributes: T@"NSData",R,C,N,V_encryptionIv
// Property: urlString; attributes: T@"NSString",R,C,N,V_urlString
// Property: checksum; attributes: T@"NSString",R,C,N,V_checksum

// -[SCLensProcessingAsset toLensAsset]
// Type encoding: @16@0:8
// Implementation: 0x108c8d5b0

// -[SCLensProcessingAsset initWithAssetId:assetType:avatarId:encryptionKey:encryptionIv:urlString:checksum:]
// Type encoding: @72@0:8@16q24@32@40@48@56@64
// Implementation: 0x10b015b88

// -[SCLensProcessingAsset copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b015cfc

// -[SCLensProcessingAsset hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b015d20

// -[SCLensProcessingAsset isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b015dc8

// -[SCLensProcessingAsset assetId]
// Type encoding: @16@0:8
// Implementation: 0x10b015ee0

// -[SCLensProcessingAsset assetType]
// Type encoding: q16@0:8
// Implementation: 0x10b015ee8

// -[SCLensProcessingAsset avatarId]
// Type encoding: @16@0:8
// Implementation: 0x10b015ef0

// -[SCLensProcessingAsset encryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x10b015ef8

// -[SCLensProcessingAsset encryptionIv]
// Type encoding: @16@0:8
// Implementation: 0x10b015f00

// -[SCLensProcessingAsset urlString]
// Type encoding: @16@0:8
// Implementation: 0x10b015f08

// -[SCLensProcessingAsset checksum]
// Type encoding: @16@0:8
// Implementation: 0x10b015f10

// -[SCLensProcessingAsset .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b015f18

@end
