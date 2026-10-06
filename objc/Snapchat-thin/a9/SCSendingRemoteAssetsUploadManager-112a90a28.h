// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendingRemoteAssetsUploadManager
// Superclass: NSObject
// Address: 0x112a90a28

@interface SCSendingRemoteAssetsUploadManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendingRemoteAssetsUploadManager initWithUploadManager:referenceConverter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c0f59c

// -[SCSendingRemoteAssetsUploadManager initWithUploadManager:referenceConverter:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100c0f638

// -[SCSendingRemoteAssetsUploadManager uploadMediaReference:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bf26cc

// -[SCSendingRemoteAssetsUploadManager uploadMethod]
// Type encoding: Q16@0:8
// Implementation: 0x105bf2940

// -[SCSendingRemoteAssetsUploadManager sendCompletedForMediaReference:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bf2948

// -[SCSendingRemoteAssetsUploadManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105bf2e70

// +[SCSendingRemoteAssetsUploadManager _processRemoteAssetUploadOperation:observerLifecycle:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105bf29b0

// +[SCSendingRemoteAssetsUploadManager _subscribeOnAssetUploadOperation:observerLifecycle:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105bf2b54

// +[SCSendingRemoteAssetsUploadManager _lensRemoteAssetsResultWithSendStatus:]
// Type encoding: @24@0:8q16
// Implementation: 0x105bf2d9c

@end
