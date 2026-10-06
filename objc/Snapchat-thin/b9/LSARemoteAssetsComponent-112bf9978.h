// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSARemoteAssetsComponent
// Superclass: LSABaseComponent
// Address: 0x112bf9978

@interface LSARemoteAssetsComponent

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSARemoteAssetsComponent setAssetWithPath:lsaAsset:lensId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10adb0bfc

// -[LSARemoteAssetsComponent setAssetUploadStatus:assetId:lensId:assetUrl:assetUploadMetadata:completion:]
// Type encoding: v64@0:8q16@24@32@40@48@?56
// Implementation: 0x10adb0c08

// -[LSARemoteAssetsComponent setInMemoryAssetProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adb0fb8

// -[LSARemoteAssetsComponent addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adb10e0

// -[LSARemoteAssetsComponent removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adb113c

// -[LSARemoteAssetsComponent initWithPerformer:announcerQueuePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10adb114c

// -[LSARemoteAssetsComponent setCoreManager:announcer:configuration:]
// Type encoding: v48@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32@40
// Implementation: 0x10adb1274

// -[LSARemoteAssetsComponent didRequestAsset:lensId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10adb1374

// -[LSARemoteAssetsComponent didRequestAssetUpload:atPath:lensId:deleteAfterUploading:assetType:completion:]
// Type encoding: v60@0:8@16@24@32B40q44@?52
// Implementation: 0x10adb16b4

// -[LSARemoteAssetsComponent didRequestAssetUpload:atPath:encryptionKey:encryptionIv:assetBatchId:lensId:deleteAfterUploading:assetType:completion:]
// Type encoding: v84@0:8@16@24@32@40@48@56B64q68@?76
// Implementation: 0x10adb1884

// -[LSARemoteAssetsComponent _createDelegateWrapperIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10adb1b7c

// -[LSARemoteAssetsComponent _setAssetWithPath:lsaAsset:lensId:isFromInMemoryProvider:completion:]
// Type encoding: v52@0:8@16@24@32B40@?44
// Implementation: 0x10adb1e6c

// -[LSARemoteAssetsComponent _setInMemoryPath:asset:lensId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10adb21b0

// -[LSARemoteAssetsComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adb2468

// -[LSARemoteAssetsComponent .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10adb2510

@end
