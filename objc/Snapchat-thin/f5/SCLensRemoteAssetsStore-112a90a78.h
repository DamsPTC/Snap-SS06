// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteAssetsStore
// Superclass: NSObject
// Address: 0x112a90a78

@interface SCLensRemoteAssetsStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteAssetsStore initWithContentDelivery:dataWriter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105bf2eac

// -[SCLensRemoteAssetsStore storeAsset:forId:withExpirationTimeInterval:completion:]
// Type encoding: v48@0:8@16@24d32@?40
// Implementation: 0x105bf2f50

// -[SCLensRemoteAssetsStore storeAssetSynchronously:forId:error:]
// Type encoding: v40@0:8@16@24^@32
// Implementation: 0x105bf30a0

// -[SCLensRemoteAssetsStore assetExistsWithId:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x105bf3154

// -[SCLensRemoteAssetsStore assetExistsWithId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf3240

// -[SCLensRemoteAssetsStore removeAssetWithId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf33dc

// -[SCLensRemoteAssetsStore assetForId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf34dc

// -[SCLensRemoteAssetsStore _storeAsset:forId:withExpirationTimeInterval:completion:]
// Type encoding: v48@0:8@16@24d32@?40
// Implementation: 0x105bf3580

// -[SCLensRemoteAssetsStore _storeAssetSynchronously:forId:error:]
// Type encoding: v40@0:8@16@24^@32
// Implementation: 0x105bf3728

// -[SCLensRemoteAssetsStore _removeAssetWithId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf3924

// -[SCLensRemoteAssetsStore _assetForId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf3a64

// -[SCLensRemoteAssetsStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105bf3f0c

// +[SCLensRemoteAssetsStore _assetExistsWithStatus:error:]
// Type encoding: B32@0:8q16^@24
// Implementation: 0x105bf38b0

// +[SCLensRemoteAssetsStore _completeWithError:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf3cd4

// +[SCLensRemoteAssetsStore _errorWithErrorCode:shimError:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x105bf3cec

// +[SCLensRemoteAssetsStore _errorWithErrorCode:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105bf3dfc

// +[SCLensRemoteAssetsStore _descriptionFromErrorCode:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105bf3e70

// +[SCLensRemoteAssetsStore _contentKeyWithAssetsId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bf3e98

@end
