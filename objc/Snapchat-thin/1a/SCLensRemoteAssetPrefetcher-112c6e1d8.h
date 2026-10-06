// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteAssetPrefetcher
// Superclass: NSObject
// Address: 0x112c6e1d8

@interface SCLensRemoteAssetPrefetcher


// -[SCLensRemoteAssetPrefetcher initWithLensDataFetcher:lensUserProvider:overrideRequestTimingToRequired:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10b0e1844

// -[SCLensRemoteAssetPrefetcher initWithLensDataFetcher:lensUserProvider:overrideRequestTimingToRequired:performer:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x10b0e1914

// -[SCLensRemoteAssetPrefetcher fetchAssetsForLens:fetchSourceType:onFetchAsset:onComplete:]
// Type encoding: v48@0:8@16q24@?32@?40
// Implementation: 0x10b0e19f0

// -[SCLensRemoteAssetPrefetcher fetchAssets:lens:fetchSourceType:onFetchAsset:onComplete:]
// Type encoding: v56@0:8@16@24q32@?40@?48
// Implementation: 0x10b0e1a90

// -[SCLensRemoteAssetPrefetcher _fetchContentForAssets:lens:fetchSourceType:onFetchAsset:onComplete:]
// Type encoding: v56@0:8@16@24q32@?40@?48
// Implementation: 0x10b0e1bd0

// -[SCLensRemoteAssetPrefetcher _fetchContentForAssets:lens:fetchSourceType:dispatchGroup:onFetchAsset:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x10b0e1d88

// -[SCLensRemoteAssetPrefetcher _fetchContentForAsset:lens:fetchSourceType:dispatchGroup:onFetchAsset:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x10b0e1ee0

// -[SCLensRemoteAssetPrefetcher _fetchAsset:lens:fetchSourceType:dispatchGroup:completion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x10b0e2148

// -[SCLensRemoteAssetPrefetcher _assetWithAvatarIDFromAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0e227c

// -[SCLensRemoteAssetPrefetcher _assetWithOverrideRequstTimingIfNeededFromAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0e2420

// -[SCLensRemoteAssetPrefetcher _bitmojiAssetsFromAsset:bitmojiStickers:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0e24bc

// -[SCLensRemoteAssetPrefetcher _avatar3DAssetFromAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0e25f4

// -[SCLensRemoteAssetPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0e2738

@end
