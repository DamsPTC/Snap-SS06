// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewGenericAssetsRegistryImpl
// Superclass: NSObject
// Address: 0x112a9f988

@interface SCPreviewGenericAssetsRegistryImpl

// Property: genericAssetUpdates; attributes: T@"SCObservable",&,N,V_genericAssetUpdates
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewGenericAssetsRegistryImpl init]
// Type encoding: @16@0:8
// Implementation: 0x105de0eb8

// -[SCPreviewGenericAssetsRegistryImpl genericAssetForAssetType:]
// Type encoding: @24@0:8q16
// Implementation: 0x105de0f64

// -[SCPreviewGenericAssetsRegistryImpl allGenericAssetMedias]
// Type encoding: @16@0:8
// Implementation: 0x105de0fe0

// -[SCPreviewGenericAssetsRegistryImpl allSnapAssetsForGenericAssets]
// Type encoding: @16@0:8
// Implementation: 0x105de101c

// -[SCPreviewGenericAssetsRegistryImpl upsertLocalGenericAsset:assetType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105de1078

// -[SCPreviewGenericAssetsRegistryImpl removeAssetForAssetType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105de117c

// -[SCPreviewGenericAssetsRegistryImpl setSnapAssets:assetCloudFilesByAssetType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105de123c

// -[SCPreviewGenericAssetsRegistryImpl setGenericAssetsForMultiSnapEditingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de13ec

// -[SCPreviewGenericAssetsRegistryImpl genericAssetUpdates]
// Type encoding: @16@0:8
// Implementation: 0x105de1458

// -[SCPreviewGenericAssetsRegistryImpl setGenericAssetUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x105de1460

// -[SCPreviewGenericAssetsRegistryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105de1490

@end
