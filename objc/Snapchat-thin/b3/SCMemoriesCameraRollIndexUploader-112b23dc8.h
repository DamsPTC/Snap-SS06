// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCameraRollIndexUploader
// Superclass: NSObject
// Address: 0x112b23dc8

@interface SCMemoriesCameraRollIndexUploader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesCameraRollIndexUploader _initWithTransactor:performer:coreConfigProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c23360

// -[SCMemoriesCameraRollIndexUploader initWithBoltDataUploader:coreConfigProvider:photoPermissionCoordinator:grapheneRegistry:transactorProvider:performer:snapIndexClientService:localNotificationScheduler:deviceIdentifierProvider:requestHeaderProvider:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x106c201ac

// -[SCMemoriesCameraRollIndexUploader startUploading]
// Type encoding: @16@0:8
// Implementation: 0x106c20424

// -[SCMemoriesCameraRollIndexUploader cancel]
// Type encoding: v16@0:8
// Implementation: 0x106c20804

// -[SCMemoriesCameraRollIndexUploader _canStartUploadingJob]
// Type encoding: @16@0:8
// Implementation: 0x106c2086c

// -[SCMemoriesCameraRollIndexUploader _getBatchIdToUpload]
// Type encoding: @16@0:8
// Implementation: 0x106c20924

// -[SCMemoriesCameraRollIndexUploader _calculateDeltaToUpload:previouslyUploadedBatchId:lastUploadTime:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x106c21150

// -[SCMemoriesCameraRollIndexUploader _uploadDelta:isFullUpload:lastUploadTime:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x106c21584

// -[SCMemoriesCameraRollIndexUploader _uploadLargeDeltaToBolt:isFullUpload:expectedNumItems:numberOfItemsUploaded:]
// Type encoding: @40@0:8@16B24i28Q32
// Implementation: 0x106c21af4

// -[SCMemoriesCameraRollIndexUploader _uploadLargeDeltaToBolt:numberOfItemsUploaded:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106c22308

// -[SCMemoriesCameraRollIndexUploader _uploadDeltaToBackend:boltCameraRollDelta:isFullUpload:expectedNumItems:numberOfItemsUploaded:]
// Type encoding: @48@0:8@16@24B32i36Q40
// Implementation: 0x106c22804

// -[SCMemoriesCameraRollIndexUploader _generateIndexRequest:boltCameraRollDelta:isFullUpload:expectedNumItems:]
// Type encoding: @40@0:8@16@24B32i36
// Implementation: 0x106c22dec

// -[SCMemoriesCameraRollIndexUploader _cameraRollGeneration:boltCameraRollDelta:isFullUpload:expectedNumItems:]
// Type encoding: @40@0:8@16@24B32i36
// Implementation: 0x106c22e60

// -[SCMemoriesCameraRollIndexUploader _uploadDidFinish:previouslyUploadedBatchIdNumber:numberOfItemsUploaded:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x106c22f7c

// -[SCMemoriesCameraRollIndexUploader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c232d0

@end
