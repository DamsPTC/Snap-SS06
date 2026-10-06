// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesAssetRepositoryImplCpp
// Superclass: NSObject
// Address: 0x112b8d048

@interface SCMemoriesAssetRepositoryImplCpp

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesAssetRepositoryImplCpp _initWithDatabasePath:dispatchQueue:wipe:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x107f6133c

// -[SCMemoriesAssetRepositoryImplCpp initWithTransactor:queue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c0b780

// -[SCMemoriesAssetRepositoryImplCpp initWithTransactorProvider:name:dispatchQueue:wipe:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x100b9bc5c

// -[SCMemoriesAssetRepositoryImplCpp getUploadStatesForAssetIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f60638

// -[SCMemoriesAssetRepositoryImplCpp insertOrIgnoreUploadStateForAsset:uploadState:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x107f60828

// -[SCMemoriesAssetRepositoryImplCpp updateUploadStateForAssetId:uploadState:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x107f60a2c

// -[SCMemoriesAssetRepositoryImplCpp deleteOrIgnoreUploadStateForAssetId:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x107f60bd0

// -[SCMemoriesAssetRepositoryImplCpp getUploadStateForAssetId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f60d4c

// -[SCMemoriesAssetRepositoryImplCpp deleteOrIgnoreUploadStateForAssetId:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107f60f3c

// -[SCMemoriesAssetRepositoryImplCpp insertOrIgnoreUploadStateForAsset:uploadState:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107f61064

// -[SCMemoriesAssetRepositoryImplCpp updateUploadStateForAssetId:uploadState:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107f611b8

// -[SCMemoriesAssetRepositoryImplCpp .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f6130c

@end
