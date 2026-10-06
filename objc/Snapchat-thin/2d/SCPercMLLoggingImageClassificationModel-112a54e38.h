// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLLoggingImageClassificationModel
// Superclass: NSObject
// Address: 0x112a54e38

@interface SCPercMLLoggingImageClassificationModel

// Property: labels; attributes: T@"NSDictionary",R,N
// Property: loggingDisabled; attributes: TB,N,V_loggingDisabled
// Property: imageWidth; attributes: TQ,R,N
// Property: imageHeight; attributes: TQ,R,N
// Property: modelKey; attributes: T@"NSString",R,N
// Property: modelId; attributes: T@"NSString",R,N
// Property: approximateSizeInBytes; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPercMLLoggingImageClassificationModel initWithImageClassificationModel:logger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567c378

// -[SCPercMLLoggingImageClassificationModel modelKey]
// Type encoding: @16@0:8
// Implementation: 0x10567c4e4

// -[SCPercMLLoggingImageClassificationModel modelId]
// Type encoding: @16@0:8
// Implementation: 0x10567c4ec

// -[SCPercMLLoggingImageClassificationModel approximateSizeInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10567c4f4

// -[SCPercMLLoggingImageClassificationModel labels]
// Type encoding: @16@0:8
// Implementation: 0x10567c4fc

// -[SCPercMLLoggingImageClassificationModel imageWidth]
// Type encoding: Q16@0:8
// Implementation: 0x10567c504

// -[SCPercMLLoggingImageClassificationModel imageHeight]
// Type encoding: Q16@0:8
// Implementation: 0x10567c50c

// -[SCPercMLLoggingImageClassificationModel supportPixelBufferFastInference]
// Type encoding: B16@0:8
// Implementation: 0x10567c514

// -[SCPercMLLoggingImageClassificationModel cancelInference]
// Type encoding: v16@0:8
// Implementation: 0x10567c51c

// -[SCPercMLLoggingImageClassificationModel getMetricWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10567c524

// -[SCPercMLLoggingImageClassificationModel getRawMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10567c52c

// -[SCPercMLLoggingImageClassificationModel getStatMetricMean:]
// Type encoding: @24@0:8@16
// Implementation: 0x10567c534

// -[SCPercMLLoggingImageClassificationModel predictClassificationsWithBatchImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x10567c53c

// -[SCPercMLLoggingImageClassificationModel predictClassificationsWithBatchImages:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567c544

// -[SCPercMLLoggingImageClassificationModel predictAccumulatedClassificationsWithBatchImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x10567c75c

// -[SCPercMLLoggingImageClassificationModel predictScoresWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10567c954

// -[SCPercMLLoggingImageClassificationModel predictClassificationsWithBatchPixelBuffers:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567c96c

// -[SCPercMLLoggingImageClassificationModel predictMultiClassificationsWithBatchPixelBuffers:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567cb8c

// -[SCPercMLLoggingImageClassificationModel predictClassificationsWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10567cdc0

// -[SCPercMLLoggingImageClassificationModel predictAccumulatedClassificationsWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10567cf34

// -[SCPercMLLoggingImageClassificationModel runDeepScanWithBatchImages:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567d0a8

// -[SCPercMLLoggingImageClassificationModel runEmbeddingAndCaptionSearchForBatchImages:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567d130

// -[SCPercMLLoggingImageClassificationModel runCoreMLWithPixelBuffer:coreMLProcessingConfig:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x10567d1b8

// -[SCPercMLLoggingImageClassificationModel cleanupResources]
// Type encoding: v16@0:8
// Implementation: 0x10567d1c0

// -[SCPercMLLoggingImageClassificationModel _predictClassificationsWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10567d1c8

// -[SCPercMLLoggingImageClassificationModel _predictAccumulatedClassificationsWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10567d55c

// -[SCPercMLLoggingImageClassificationModel _logTaskWithTaskType:latency:status:reason:]
// Type encoding: v48@0:8q16d24q32@40
// Implementation: 0x10567d8f0

// -[SCPercMLLoggingImageClassificationModel loggingDisabled]
// Type encoding: B16@0:8
// Implementation: 0x10567d9fc

// -[SCPercMLLoggingImageClassificationModel setLoggingDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10567da04

// -[SCPercMLLoggingImageClassificationModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10567da0c

@end
