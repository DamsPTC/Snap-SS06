// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUploadMediaDataManager
// Superclass: NSObject
// Address: 0x112a52f98

@interface SCUploadMediaDataManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUploadMediaDataManager initWithEncryptor:packer:uploader:uploadFromFile:grapheneRegistryLazy:]
// Type encoding: @52@0:8@16@24@32B40@44
// Implementation: 0x10561ac04

// -[SCUploadMediaDataManager uploadWithUploadTaskId:mediaData:overlayData:key:iv:mediaDuration:mediaType:captureSessionId:stepMetrics:callbackPerformer:successHandler:failureHandler:]
// Type encoding: v112@0:8@16@24@32@40@48@56q64@72@80@88@?96@?104
// Implementation: 0x10561ad58

// -[SCUploadMediaDataManager initiateSegmentUploadWithTaskId:segmentData:overlayData:key:iv:stepMetrics:callbackPerformer:successHandler:failureHandler:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@?72@?80
// Implementation: 0x10561b488

// -[SCUploadMediaDataManager continueSegmentUploadWithTaskId:segmentData:segmentIndex:overlayData:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x10561b77c

// -[SCUploadMediaDataManager completeSegmentUploadWithTaskId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10561b818

// -[SCUploadMediaDataManager cancelSegmentUploadWithTaskId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10561b86c

// -[SCUploadMediaDataManager cancelUploadWithUploadTaskId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10561b8f4

// -[SCUploadMediaDataManager startMonitoringUploadProgressWithUploadTaskId:progressHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10561b984

// -[SCUploadMediaDataManager _uploadWithUploadRequest:uploadTaskId:stepMetrics:callbackPerformer:tempFileURL:dataSource:fileFallback:successHandler:failureHandler:]
// Type encoding: v84@0:8@16@24@32@40@48@56B64@?68@?76
// Implementation: 0x10561b98c

// -[SCUploadMediaDataManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10561c09c

@end
