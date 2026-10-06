// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteAssetsEncryptor
// Superclass: NSObject
// Address: 0x112a90c08

@interface SCLensRemoteAssetsEncryptor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteAssetsEncryptor initWithFileManager:archiver:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105bf7d38

// -[SCLensRemoteAssetsEncryptor archiveAndEncryptAssetWithPath:encryptionKey:encryptionIv:deleteOriginalAsset:error:]
// Type encoding: @52@0:8@16@24@32B40^@44
// Implementation: 0x105bf7ddc

// -[SCLensRemoteAssetsEncryptor encryptArchivedAssetWithPath:encryptionKey:encryptionIv:deleteOriginalAsset:error:]
// Type encoding: @52@0:8@16@24@32B40^@44
// Implementation: 0x105bf7ee0

// -[SCLensRemoteAssetsEncryptor _encryptAssetData:encryptionKey:encryptionIv:deleteOriginalAsset:assetPath:error:]
// Type encoding: @60@0:8@16@24@32B40@44^@52
// Implementation: 0x105bf7ff8

// -[SCLensRemoteAssetsEncryptor _archiveAssetWithPath:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x105bf80e0

// -[SCLensRemoteAssetsEncryptor _encryptAssetData:encryptionKey:encryptionIv:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x105bf8264

// -[SCLensRemoteAssetsEncryptor _removeAssetWithPath:error:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x105bf83f0

// -[SCLensRemoteAssetsEncryptor _setError:toWrappedWithCheckError:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x105bf84c0

// -[SCLensRemoteAssetsEncryptor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105bf84ec

@end
