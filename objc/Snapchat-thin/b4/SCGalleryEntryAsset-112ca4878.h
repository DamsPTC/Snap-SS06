// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryEntryAsset
// Superclass: NSObject
// Address: 0x112ca4878

@interface SCGalleryEntryAsset

// Property: objectID; attributes: T@"NSString",R,C,N,V_objectID
// Property: assetId; attributes: T@"NSString",R,C,N,V_assetId
// Property: assetType; attributes: Ti,R,N,V_assetType
// Property: assetUrl; attributes: T@"NSString",R,C,N,V_assetUrl
// Property: encryptIV; attributes: T@"NSString",R,C,N,V_encryptIV
// Property: encryptKey; attributes: T@"NSString",R,C,N,V_encryptKey
// Property: hasSynced; attributes: TB,R,N,V_hasSynced
// Property: localCreationId; attributes: T@"NSString",R,C,N,V_localCreationId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryEntryAsset initWithObjectID:assetId:assetType:assetUrl:encryptIV:encryptKey:hasSynced:localCreationId:]
// Type encoding: @72@0:8@16@24i32@36@44@52B60@64
// Implementation: 0x10b6ec5d0

// -[SCGalleryEntryAsset copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6ec754

// -[SCGalleryEntryAsset initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6ec778

// -[SCGalleryEntryAsset encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6ec8f0

// -[SCGalleryEntryAsset preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x10b6ec9c8

// -[SCGalleryEntryAsset encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6ec9d0

// -[SCGalleryEntryAsset decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6eca68

// -[SCGalleryEntryAsset setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6ecb74

// -[SCGalleryEntryAsset setBool:forUInt64Key:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x10b6ecc94

// -[SCGalleryEntryAsset setSInt32:forUInt64Key:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x10b6eccb4

// -[SCGalleryEntryAsset isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6eccf4

// -[SCGalleryEntryAsset hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6ecd74

// -[SCGalleryEntryAsset description]
// Type encoding: @16@0:8
// Implementation: 0x10b6ece54

// -[SCGalleryEntryAsset objectID]
// Type encoding: @16@0:8
// Implementation: 0x10b6ed090

// -[SCGalleryEntryAsset assetId]
// Type encoding: @16@0:8
// Implementation: 0x10b6ed098

// -[SCGalleryEntryAsset assetType]
// Type encoding: i16@0:8
// Implementation: 0x10b6ed0a0

// -[SCGalleryEntryAsset assetUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b6ed0a8

// -[SCGalleryEntryAsset encryptIV]
// Type encoding: @16@0:8
// Implementation: 0x10b6ed0b0

// -[SCGalleryEntryAsset encryptKey]
// Type encoding: @16@0:8
// Implementation: 0x10b6ed0b8

// -[SCGalleryEntryAsset hasSynced]
// Type encoding: B16@0:8
// Implementation: 0x10b6ed0c0

// -[SCGalleryEntryAsset localCreationId]
// Type encoding: @16@0:8
// Implementation: 0x10b6ed0c8

// -[SCGalleryEntryAsset .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6ed0d0

// +[SCGalleryEntryAsset observe:dataObjectContext:queue:changeHandler:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10b6e28f0

// +[SCGalleryEntryAsset allKeys]
// Type encoding: @16@0:8
// Implementation: 0x10b6e29a0

// +[SCGalleryEntryAsset galleryEntryAssetWithAssetId:assetType:assetUrl:encryptIV:encryptKey:hasSynced:localCreationId:]
// Type encoding: @64@0:8@16i24@28@36@44B52@56
// Implementation: 0x10b6d1168

// +[SCGalleryEntryAsset fetchGalleryEntryAssetsWithOptions:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6bedb4

// +[SCGalleryEntryAsset countOfGalleryEntryAssetsWithOptions:dataObjectContext:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x10b6bf2d4

// +[SCGalleryEntryAsset fetchGalleryEntryAssetsForEntry:options:error:dataObjectContext:]
// Type encoding: @48@0:8@16@24^@32@40
// Implementation: 0x10b6bf5c4

// +[SCGalleryEntryAsset fetchGalleryEntryAssetsForSyncedEntry:options:error:dataObjectContext:]
// Type encoding: @48@0:8@16@24^@32@40
// Implementation: 0x10b6bfbec

// +[SCGalleryEntryAsset countOfGalleryEntryAssetsForEntry:options:dataObjectContext:]
// Type encoding: Q40@0:8@16@24@32
// Implementation: 0x10b6c0214

// +[SCGalleryEntryAsset countOfGalleryEntryAssetsForSyncedEntry:options:dataObjectContext:]
// Type encoding: Q40@0:8@16@24@32
// Implementation: 0x10b6c065c

// +[SCGalleryEntryAsset fetchGalleryEntryAssetsForEntry:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6c0aa4

// +[SCGalleryEntryAsset fetchGalleryEntryAssetsForSyncedEntry:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6c0ec8

// +[SCGalleryEntryAsset fetchAssetForEntryId:rawAssetType:dataObjectContext:error:]
// Type encoding: @44@0:8@16i24@28^@36
// Implementation: 0x10b6b2f80

// +[SCGalleryEntryAsset fetchUnsyncedGalleryEntryAssetForDataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6b321c

// +[SCGalleryEntryAsset fetchGalleryEntryAssetWithLocalCreationId:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6b3360

// +[SCGalleryEntryAsset fetchGalleryEntryAssetWithAssetId:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6b34c8

// +[SCGalleryEntryAsset parseManagedObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6adca8

// +[SCGalleryEntryAsset fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10b6eccd4

// +[SCGalleryEntryAsset fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x10b6ecce8

@end
