// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensAsset
// Superclass: NSObject
// Address: 0x112cd1af8

@interface SCLensAsset

// Property: lnsStorageOption; attributes: T@"SCLensAssetStorageOption",R,N
// Property: identifier; attributes: T@"NSString",R,C,N,V_identifier
// Property: url; attributes: T@"NSURL",R,C,N,V_url
// Property: signature; attributes: T@"NSString",R,C,N,V_signature
// Property: checksum; attributes: T@"NSString",R,C,N,V_checksum
// Property: type; attributes: Tq,R,N,V_type
// Property: requestTiming; attributes: Tq,R,N,V_requestTiming
// Property: scale; attributes: Tq,R,N,V_scale
// Property: preloadLimit; attributes: Tq,R,N,V_preloadLimit
// Property: originalFilename; attributes: T@"NSString",R,C,N,V_originalFilename
// Property: encodedBitmoji; attributes: T@"NSString",R,C,N,V_encodedBitmoji
// Property: avatarId; attributes: T@"NSString",R,C,N,V_avatarId
// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: encryptionKey; attributes: T@"NSData",R,C,N,V_encryptionKey
// Property: encryptionIv; attributes: T@"NSData",R,C,N,V_encryptionIv
// Property: storageOptions; attributes: T@"NSArray",R,C,N,V_storageOptions

// -[SCLensAsset checksumForStorageOptionType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b728e30

// -[SCLensAsset lnsStorageOption]
// Type encoding: @16@0:8
// Implementation: 0x10b728f40

// -[SCLensAsset initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7a3da8

// -[SCLensAsset initWithIdentifier:url:signature:checksum:type:requestTiming:scale:preloadLimit:originalFilename:encodedBitmoji:avatarId:userId:encryptionKey:encryptionIv:storageOptions:]
// Type encoding: @136@0:8@16@24@32@40q48q56q64q72@80@88@96@104@112@120@128
// Implementation: 0x100c00608

// -[SCLensAsset copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b7a4010

// -[SCLensAsset encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7a4034

// -[SCLensAsset hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b7a4198

// -[SCLensAsset isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7a428c

// -[SCLensAsset identifier]
// Type encoding: @16@0:8
// Implementation: 0x10b7a444c

// -[SCLensAsset url]
// Type encoding: @16@0:8
// Implementation: 0x10b7a4454

// -[SCLensAsset signature]
// Type encoding: @16@0:8
// Implementation: 0x10b7a445c

// -[SCLensAsset checksum]
// Type encoding: @16@0:8
// Implementation: 0x10b7a4464

// -[SCLensAsset type]
// Type encoding: q16@0:8
// Implementation: 0x10b7a446c

// -[SCLensAsset requestTiming]
// Type encoding: q16@0:8
// Implementation: 0x10b7a4474

// -[SCLensAsset scale]
// Type encoding: q16@0:8
// Implementation: 0x10b7a447c

// -[SCLensAsset preloadLimit]
// Type encoding: q16@0:8
// Implementation: 0x10b7a4484

// -[SCLensAsset originalFilename]
// Type encoding: @16@0:8
// Implementation: 0x10b7a448c

// -[SCLensAsset encodedBitmoji]
// Type encoding: @16@0:8
// Implementation: 0x10b7a4494

// -[SCLensAsset avatarId]
// Type encoding: @16@0:8
// Implementation: 0x10b7a449c

// -[SCLensAsset userId]
// Type encoding: @16@0:8
// Implementation: 0x10b7a44a4

// -[SCLensAsset encryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x10b7a44ac

// -[SCLensAsset encryptionIv]
// Type encoding: @16@0:8
// Implementation: 0x10b7a44b4

// -[SCLensAsset storageOptions]
// Type encoding: @16@0:8
// Implementation: 0x10b7a44bc

// -[SCLensAsset .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7a44c4

@end
