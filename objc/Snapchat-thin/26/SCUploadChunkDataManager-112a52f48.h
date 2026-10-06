// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUploadChunkDataManager
// Superclass: NSObject
// Address: 0x112a52f48

@interface SCUploadChunkDataManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUploadChunkDataManager initWithEncryptor:uploader:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1056198c0

// -[SCUploadChunkDataManager initiateSegmentUploadWithTaskId:segmentData:overlayData:key:iv:stepMetrics:callbackPerformer:successHandler:failureHandler:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@?72@?80
// Implementation: 0x10561998c

// -[SCUploadChunkDataManager continueSegmentUploadWithTaskId:segmentData:segmentIndex:overlayData:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x105619cb8

// -[SCUploadChunkDataManager completeSegmentUploadWithTaskId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105619e40

// -[SCUploadChunkDataManager cancelSegmentUploadWithTaskId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10561a038

// -[SCUploadChunkDataManager uploadWithUploadTaskId:mediaData:overlayData:key:iv:mediaDuration:mediaType:captureSessionId:stepMetrics:callbackPerformer:successHandler:failureHandler:]
// Type encoding: v112@0:8@16@24@32@40@48@56q64@72@80@88@?96@?104
// Implementation: 0x10561a120

// -[SCUploadChunkDataManager startMonitoringUploadProgressWithUploadTaskId:progressHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10561a124

// -[SCUploadChunkDataManager _uploadWithUploadRequest:uploadTaskId:stepMetrics:callbackPerformer:successHandler:failureHandler:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x10561a128

// -[SCUploadChunkDataManager _triggerUploadWithUploadTaskId:stepMetrics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10561a4e0

// -[SCUploadChunkDataManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10561ab5c

@end
