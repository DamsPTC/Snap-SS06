// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncUploadMediaStep
// Superclass: SCCloudSyncStep
// Address: 0x112b8ade8

@interface SCCloudSyncUploadMediaStep


// -[SCCloudSyncUploadMediaStep initWithCloudFS:networker:logger:progressReporter:memoriesAssetRepository:shouldWriteToAssetRespository:performer:timeProvider:dbTimeoutInSeconds:fileManager:]
// Type encoding: @92@0:8@16@24@32@40@48B56@60@68d76@84
// Implementation: 0x107f13670

// -[SCCloudSyncUploadMediaStep stepName]
// Type encoding: q16@0:8
// Implementation: 0x107f1388c

// -[SCCloudSyncUploadMediaStep runWithStepData:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f13894

// -[SCCloudSyncUploadMediaStep _runUploadMediaStepWithStepData:uploadRequestInfoMap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f13b44

// -[SCCloudSyncUploadMediaStep _handleUploadMedia:uploadRequestInfoMap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f13df0

// -[SCCloudSyncUploadMediaStep _handleUploadResult:stepData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f14250

// -[SCCloudSyncUploadMediaStep _makeUploadRequestWithCommonProps:mediaTranscodingResult:addSnapEntities:uploadRequestInfoMap:backgroundUploadedSnapIds:successHandler:failureHandler:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x107f144dc

// -[SCCloudSyncUploadMediaStep _updateUploadStateInAssetRepository:uploadStateEnum:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107f146e4

// -[SCCloudSyncUploadMediaStep .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f149cc

@end
