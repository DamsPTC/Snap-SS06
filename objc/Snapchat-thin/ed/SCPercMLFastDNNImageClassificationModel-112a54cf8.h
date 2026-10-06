// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLFastDNNImageClassificationModel
// Superclass: NSObject
// Address: 0x112a54cf8

@interface SCPercMLFastDNNImageClassificationModel

// Property: labels; attributes: T@"NSDictionary",R,N,V_labels
// Property: loggingDisabled; attributes: TB,N,V_loggingDisabled
// Property: imageWidth; attributes: TQ,R,N,V_imageWidth
// Property: imageHeight; attributes: TQ,R,N,V_imageHeight
// Property: modelKey; attributes: T@"NSString",R,N,V_modelKey
// Property: modelId; attributes: T@"NSString",R,N,V_modelId
// Property: approximateSizeInBytes; attributes: TQ,R,N,V_approximateSizeInBytes
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPercMLFastDNNImageClassificationModel initWithModelKey:modelId:deliverableModel:logger:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x105675cf8

// -[SCPercMLFastDNNImageClassificationModel predictScoresWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105676054

// -[SCPercMLFastDNNImageClassificationModel predictScoresWithBatchImages:completionQueue:completion:imageProcessingConfig:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x10567605c

// -[SCPercMLFastDNNImageClassificationModel predictClassificationsWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10567624c

// -[SCPercMLFastDNNImageClassificationModel predictAccumulatedClassificationsWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10567647c

// -[SCPercMLFastDNNImageClassificationModel predictScoresWithBatchImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056766ac

// -[SCPercMLFastDNNImageClassificationModel predictScoresWithBatchImages:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056766cc

// -[SCPercMLFastDNNImageClassificationModel predictClassificationsWithBatchImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x105676b48

// -[SCPercMLFastDNNImageClassificationModel predictClassificationsWithBatchImages:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105676b68

// -[SCPercMLFastDNNImageClassificationModel predictClassificationsWithBatchPixelBuffers:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105676f60

// -[SCPercMLFastDNNImageClassificationModel predictAccumulatedClassificationsWithBatchImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x105676fc8

// -[SCPercMLFastDNNImageClassificationModel setLoggingDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1056773a0

// -[SCPercMLFastDNNImageClassificationModel supportPixelBufferFastInference]
// Type encoding: B16@0:8
// Implementation: 0x1056773ac

// -[SCPercMLFastDNNImageClassificationModel cancelInference]
// Type encoding: v16@0:8
// Implementation: 0x1056773b4

// -[SCPercMLFastDNNImageClassificationModel _predictScoresWithBatchImages:completionQueue:completion:imageProcessingConfig:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x1056773b8

// -[SCPercMLFastDNNImageClassificationModel _predictionToScores:]
// Type encoding: @24@0:8^v16
// Implementation: 0x105677680

// -[SCPercMLFastDNNImageClassificationModel _postprocessScores:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056777e8

// -[SCPercMLFastDNNImageClassificationModel _convertScoresToClassifications:]
// Type encoding: @24@0:8@16
// Implementation: 0x105678134

// -[SCPercMLFastDNNImageClassificationModel _accumulatedClassificationsFromBatchScores:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1056782ac

// -[SCPercMLFastDNNImageClassificationModel _batchClassificationsFromBatchScores:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1056786c4

// -[SCPercMLFastDNNImageClassificationModel _labelsFromDeliverableModel:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1056788b8

// -[SCPercMLFastDNNImageClassificationModel _thresholdsFromDeliverableModel:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x105678ab8

// -[SCPercMLFastDNNImageClassificationModel _topNFromDeliverableModel:error:]
// Type encoding: Q32@0:8@16^@24
// Implementation: 0x105678cc0

// -[SCPercMLFastDNNImageClassificationModel _scorePropagationsFromDeliverableModel:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x105678d74

// -[SCPercMLFastDNNImageClassificationModel _executeBatchScoresCompletion:completionQueue:batchScores:error:]
// Type encoding: v48@0:8@?16@24@32@40
// Implementation: 0x1056790fc

// -[SCPercMLFastDNNImageClassificationModel _executeBatchClassificationsCompletion:completionQueue:batchClassifications:error:]
// Type encoding: v48@0:8@?16@24@32@40
// Implementation: 0x1056791e8

// -[SCPercMLFastDNNImageClassificationModel _executeClassificationsCompletion:completionQueue:classifications:error:]
// Type encoding: v48@0:8@?16@24@32@40
// Implementation: 0x1056792d4

// -[SCPercMLFastDNNImageClassificationModel getMetricWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056793c0

// -[SCPercMLFastDNNImageClassificationModel getRawMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1056793c8

// -[SCPercMLFastDNNImageClassificationModel getStatMetricMean:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056793d0

// -[SCPercMLFastDNNImageClassificationModel modelKey]
// Type encoding: @16@0:8
// Implementation: 0x1056793d8

// -[SCPercMLFastDNNImageClassificationModel modelId]
// Type encoding: @16@0:8
// Implementation: 0x1056793e0

// -[SCPercMLFastDNNImageClassificationModel labels]
// Type encoding: @16@0:8
// Implementation: 0x1056793e8

// -[SCPercMLFastDNNImageClassificationModel imageWidth]
// Type encoding: Q16@0:8
// Implementation: 0x1056793f0

// -[SCPercMLFastDNNImageClassificationModel imageHeight]
// Type encoding: Q16@0:8
// Implementation: 0x1056793f8

// -[SCPercMLFastDNNImageClassificationModel approximateSizeInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x105679400

// -[SCPercMLFastDNNImageClassificationModel loggingDisabled]
// Type encoding: B16@0:8
// Implementation: 0x105679408

// -[SCPercMLFastDNNImageClassificationModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105679410

@end
