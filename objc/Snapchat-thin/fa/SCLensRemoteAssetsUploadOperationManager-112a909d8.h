// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteAssetsUploadOperationManager
// Superclass: NSObject
// Address: 0x112a909d8

@interface SCLensRemoteAssetsUploadOperationManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteAssetsUploadOperationManager initWithUploadOperationStore:assetsUploader:assetsStore:logger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105bf0c5c

// -[SCLensRemoteAssetsUploadOperationManager initWithUploadOperationStore:assetsUploader:assetsStore:logger:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105bf0d30

// -[SCLensRemoteAssetsUploadOperationManager registerIfNeededUploadOperationForBatchId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf0ebc

// -[SCLensRemoteAssetsUploadOperationManager removeUploadOperationForBatchId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf0ff8

// -[SCLensRemoteAssetsUploadOperationManager storeUploadOperationForBatchId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf1130

// -[SCLensRemoteAssetsUploadOperationManager uploadOperationForBatchId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf1268

// -[SCLensRemoteAssetsUploadOperationManager stopOwningIfNotStoredUploadOperationForBatchId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf13a4

// -[SCLensRemoteAssetsUploadOperationManager assetsUploaderForUploadOperation:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bf14dc

// -[SCLensRemoteAssetsUploadOperationManager assetsStoreForUploadOperation:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bf14e4

// -[SCLensRemoteAssetsUploadOperationManager assetsLoggerForUploadOperation:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bf14ec

// -[SCLensRemoteAssetsUploadOperationManager _registerIfNeededUploadOperationForBatchId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf14f4

// -[SCLensRemoteAssetsUploadOperationManager _removeUploadOperationForBatchId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf15dc

// -[SCLensRemoteAssetsUploadOperationManager _storeUploadOperationForBatchId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf1900

// -[SCLensRemoteAssetsUploadOperationManager _uploadOperationForBatchId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf1ae8

// -[SCLensRemoteAssetsUploadOperationManager _stopOwningIfNotStoredUploadOperationForBatchId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf1c50

// -[SCLensRemoteAssetsUploadOperationManager _storedUploadOperationWithBatchId:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x105bf1d40

// -[SCLensRemoteAssetsUploadOperationManager _saveInStoreUploadOperation:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf1e40

// -[SCLensRemoteAssetsUploadOperationManager _registerUploadOperation:forBatchId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105bf1f3c

// -[SCLensRemoteAssetsUploadOperationManager _startObservingUploadOperation:forBatchId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105bf1f94

// -[SCLensRemoteAssetsUploadOperationManager _removeUploadOperationFromObservingWithBatchId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bf2410

// -[SCLensRemoteAssetsUploadOperationManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105bf2654

// +[SCLensRemoteAssetsUploadOperationManager _completeWithError:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf2480

// +[SCLensRemoteAssetsUploadOperationManager _errorWithStatusCode:description:subError:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x105bf2498

@end
