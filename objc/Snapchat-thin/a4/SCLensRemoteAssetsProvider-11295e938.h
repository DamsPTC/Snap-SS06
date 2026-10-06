// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteAssetsProvider
// Superclass: NSObject
// Address: 0x11295e938

@interface SCLensRemoteAssetsProvider

// Property: delegate; attributes: T@"<SCLensAssetsProviderDelegate>",N,W,Vdelegate

// -[SCLensRemoteAssetsProvider requestRemoteAssetForUpdater:forAsset:forEffectId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x103eaaa34

// -[SCLensRemoteAssetsProvider requestRemoteAssetUploadForUpdater:forAsset:forEffectId:withAssetPath:withAssetBatchId:shouldDeleteAfterUploading:]
// Type encoding: v60@0:8@16@24@32@40@48B56
// Implementation: 0x103eaafe8

// -[SCLensRemoteAssetsProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x103ea9e04

// -[SCLensRemoteAssetsProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x103ea9e4c

// -[SCLensRemoteAssetsProvider initWithAssetsFetcher:removedEffectsObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x103eaa364

// -[SCLensRemoteAssetsProvider init]
// Type encoding: @16@0:8
// Implementation: 0x103eaa3b0

// -[SCLensRemoteAssetsProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103eaa410

@end
