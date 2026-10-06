// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteAssetsUploadManager
// Superclass: NSObject
// Address: 0x112a90988

@interface SCLensRemoteAssetsUploadManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteAssetsUploadManager initWithAssetsUploadOperationManager:assetsStore:uploadInfoProvider:encryptor:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105beee9c

// -[SCLensRemoteAssetsUploadManager initWithAssetsUploadOperationManager:assetsStore:uploadInfoProvider:encryptor:performer:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105beef90

// -[SCLensRemoteAssetsUploadManager registerAssetUploadWithInfo:startImmediately:removeOriginalAsset:preEnqueueingBlock:]
// Type encoding: @40@0:8@16B24B28@?32
// Implementation: 0x105bef0e4

// -[SCLensRemoteAssetsUploadManager sendingUploadAssetInfoForBatchId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bef294

// -[SCLensRemoteAssetsUploadManager assetsUploadOperationForBatchId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bef554

// -[SCLensRemoteAssetsUploadManager removeAssetsUploadOperationForBatchId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bef77c

// -[SCLensRemoteAssetsUploadManager stopOwningAssetsUploadForBatchId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bef8d8

// -[SCLensRemoteAssetsUploadManager _registerAssetUploadWithInfo:startImmediately:removeOriginalAsset:traceToken:promise:preEnqueueingBlock:]
// Type encoding: v56@0:8@16B24B28Q32@40@?48
// Implementation: 0x105befa34

// -[SCLensRemoteAssetsUploadManager _removeUploadOperationForBatchId:traceToken:promise:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x105befccc

// -[SCLensRemoteAssetsUploadManager _stopOwningAssetsUploadForBatchId:traceToken:promise:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x105befe28

// -[SCLensRemoteAssetsUploadManager _encryptAssetWithInfo:removeOriginalAsset:error:]
// Type encoding: @36@0:8@16B24^@28
// Implementation: 0x105beff64

// -[SCLensRemoteAssetsUploadManager _uploadOperationForBatchId:traceToken:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x105bf0100

// -[SCLensRemoteAssetsUploadManager _registerIfNeededUploadOperationForBatchId:traceToken:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x105bf0288

// -[SCLensRemoteAssetsUploadManager _uploadInfoWithUploadOperation:batchId:traceToken:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x105bf03fc

// -[SCLensRemoteAssetsUploadManager _onRequestBatchIdForFutureUseWithBatchId:traceToken:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105bf05dc

// -[SCLensRemoteAssetsUploadManager _storeUploadOperationForBatchId:traceToken:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105bf0624

// -[SCLensRemoteAssetsUploadManager _storeAssetSynchronouslyWithAssetData:forAssetUploadInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105bf06d8

// -[SCLensRemoteAssetsUploadManager _storeAssetSynchronouslyWithAssetData:forId:withExpirationTimeInterval:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x105bf0860

// -[SCLensRemoteAssetsUploadManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105bf0bfc

// +[SCLensRemoteAssetsUploadManager _errorWithStatusCode:description:subError:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x105bf0a40

@end
