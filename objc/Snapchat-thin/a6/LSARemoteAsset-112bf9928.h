// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSARemoteAsset
// Superclass: NSObject
// Address: 0x112bf9928

@interface LSARemoteAsset

// Property: assetId; attributes: T@"NSString",R,C,N,V_assetId
// Property: assetType; attributes: Tq,R,N,V_assetType
// Property: avatarId; attributes: T@"NSString",R,C,N,V_avatarId
// Property: encryptionKey; attributes: T@"NSData",R,C,N,V_encryptionKey
// Property: encryptionIv; attributes: T@"NSData",R,C,N,V_encryptionIv
// Property: urlString; attributes: T@"NSString",R,C,N,V_urlString
// Property: checksum; attributes: T@"NSString",R,C,N,V_checksum

// -[LSARemoteAsset initWithAssetId:assetType:avatarId:encryptionKey:encryptionIv:urlString:checksum:]
// Type encoding: @72@0:8@16q24@32@40@48@56@64
// Implementation: 0x10adb0448

// -[LSARemoteAsset initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10adb05bc

// -[LSARemoteAsset isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10adb0720

// -[LSARemoteAsset hash]
// Type encoding: Q16@0:8
// Implementation: 0x10adb08f8

// -[LSARemoteAsset copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10adb09d4

// -[LSARemoteAsset description]
// Type encoding: @16@0:8
// Implementation: 0x10adb09f8

// -[LSARemoteAsset encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adb0aa0

// -[LSARemoteAsset assetId]
// Type encoding: @16@0:8
// Implementation: 0x10adb0b64

// -[LSARemoteAsset assetType]
// Type encoding: q16@0:8
// Implementation: 0x10adb0b6c

// -[LSARemoteAsset avatarId]
// Type encoding: @16@0:8
// Implementation: 0x10adb0b74

// -[LSARemoteAsset encryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x10adb0b7c

// -[LSARemoteAsset encryptionIv]
// Type encoding: @16@0:8
// Implementation: 0x10adb0b84

// -[LSARemoteAsset urlString]
// Type encoding: @16@0:8
// Implementation: 0x10adb0b8c

// -[LSARemoteAsset checksum]
// Type encoding: @16@0:8
// Implementation: 0x10adb0b94

// -[LSARemoteAsset .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adb0b9c

// +[LSARemoteAsset lsaRemoteAssetTypeFromAssetType:]
// Type encoding: q24@0:8r^i16
// Implementation: 0x10adb01ac

// +[LSARemoteAsset remoteAssetFromDescriptor:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x10adb01d4

@end
