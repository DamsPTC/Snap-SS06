// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingAssetsWorkflow
// Superclass: NSObject
// Address: 0x112bbb498

@interface SCLensProcessingAssetsWorkflow


// -[SCLensProcessingAssetsWorkflow initWithLensDataFetcher:lensEffectApplicator:assetsUploadManager:assetLogger:circumstanceEngine:dirtyFrameProvider:performer:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x108c8e358

// -[SCLensProcessingAssetsWorkflow fetchAsset:effectId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108c8e4c4

// -[SCLensProcessingAssetsWorkflow cancelAssetsUploadFor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c8e548

// -[SCLensProcessingAssetsWorkflow uploadAsset:effectId:batchId:assetPath:deleteAfterUploading:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x108c8e5a8

// -[SCLensProcessingAssetsWorkflow didFailToSetAssetWith:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c8ed2c

// -[SCLensProcessingAssetsWorkflow didSetAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c8ed30

// -[SCLensProcessingAssetsWorkflow didValidateAssetWithValid:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108c8ed5c

// -[SCLensProcessingAssetsWorkflow _validateAsset:effectId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108c8edbc

// -[SCLensProcessingAssetsWorkflow _deviceDependentManifestAssetForId:effectId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108c8fb14

// -[SCLensProcessingAssetsWorkflow _fetchAsset:effectId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108c8fd4c

// -[SCLensProcessingAssetsWorkflow _arbitraryAssetDownloadEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108c90058

// -[SCLensProcessingAssetsWorkflow _reuseManifestForDeviceDependentAssetEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108c90070

// -[SCLensProcessingAssetsWorkflow _remoteAssetUploadTypeForAsset:]
// Type encoding: Q24@0:8@16
// Implementation: 0x108c90088

// -[SCLensProcessingAssetsWorkflow _lensCompressionTypeForAsset:]
// Type encoding: Q24@0:8@16
// Implementation: 0x108c900ac

// -[SCLensProcessingAssetsWorkflow _isDomainAllowlisted:type:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x108c90104

// -[SCLensProcessingAssetsWorkflow _allowlistedDomains]
// Type encoding: @16@0:8
// Implementation: 0x108c90194

// -[SCLensProcessingAssetsWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c90324

@end
