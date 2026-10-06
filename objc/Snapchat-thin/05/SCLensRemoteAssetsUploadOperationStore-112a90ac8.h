// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteAssetsUploadOperationStore
// Superclass: NSObject
// Address: 0x112a90ac8

@interface SCLensRemoteAssetsUploadOperationStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteAssetsUploadOperationStore initWithDocObjectContext:uploadOperationExpirationTimeInterval:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x105bf3f3c

// -[SCLensRemoteAssetsUploadOperationStore initWithDocObjectContext:uploadOperationExpirationTimeInterval:completionQueue:]
// Type encoding: @40@0:8@16d24@32
// Implementation: 0x105bf3fdc

// -[SCLensRemoteAssetsUploadOperationStore uploadOperationWithClass:forBatchId:error:]
// Type encoding: @40@0:8#16@24^@32
// Implementation: 0x105bf4090

// -[SCLensRemoteAssetsUploadOperationStore storeUploadOperation:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf4240

// -[SCLensRemoteAssetsUploadOperationStore removeUploadOperationForBatchId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf4564

// -[SCLensRemoteAssetsUploadOperationStore isExpiredUploadOperationsExists]
// Type encoding: B16@0:8
// Implementation: 0x105bf4804

// -[SCLensRemoteAssetsUploadOperationStore flushWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105bf4874

// -[SCLensRemoteAssetsUploadOperationStore _completeInQueueWithErrorCode:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x105bf4b8c

// -[SCLensRemoteAssetsUploadOperationStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105bf5190

// +[SCLensRemoteAssetsUploadOperationStore currentTimeInterval]
// Type encoding: d16@0:8
// Implementation: 0x105bf4b40

// +[SCLensRemoteAssetsUploadOperationStore _populateErrorWithCode:error:]
// Type encoding: v32@0:8Q16^@24
// Implementation: 0x105bf4c3c

// +[SCLensRemoteAssetsUploadOperationStore _completeWithErrorCode:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x105bf4c70

// +[SCLensRemoteAssetsUploadOperationStore _completeWithError:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105bf4cdc

// +[SCLensRemoteAssetsUploadOperationStore _errorWithErrorCode:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105bf4cf4

// +[SCLensRemoteAssetsUploadOperationStore _descriptionFromErrorCode:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105bf4d68

// +[SCLensRemoteAssetsUploadOperationStore _lensRemoteAssetsUploadOperationDataFromDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bf4d90

// +[SCLensRemoteAssetsUploadOperationStore _lensRemoteAssetsUploadOperationDataModelFromData:expirationTimestamp:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x105bf4f6c

// +[SCLensRemoteAssetsUploadOperationStore _dataStateFromDataModelState:]
// Type encoding: Q20@0:8c16
// Implementation: 0x105bf5158

// +[SCLensRemoteAssetsUploadOperationStore _dataModelStateFromDataState:]
// Type encoding: c24@0:8Q16
// Implementation: 0x105bf5168

// +[SCLensRemoteAssetsUploadOperationStore _dataModelUploadTypeFromDataUploadType:]
// Type encoding: c24@0:8Q16
// Implementation: 0x105bf5178

// +[SCLensRemoteAssetsUploadOperationStore _dataUploadTypeFromDataModelUploadType:]
// Type encoding: Q20@0:8c16
// Implementation: 0x105bf5184

@end
