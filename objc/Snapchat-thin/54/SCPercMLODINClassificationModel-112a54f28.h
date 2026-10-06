// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLODINClassificationModel
// Superclass: NSObject
// Address: 0x112a54f28

@interface SCPercMLODINClassificationModel

// Property: modelKey; attributes: T@"NSString",R,N,V_modelKey
// Property: modelId; attributes: T@"NSString",R,N,V_modelId
// Property: approximateSizeInBytes; attributes: TQ,R,N,V_approximateSizeInBytes
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: labels; attributes: T@"NSDictionary",R,N,V_labels
// Property: loggingDisabled; attributes: TB,N,V_loggingDisabled
// Property: imageWidth; attributes: TQ,R,N,V_imageWidth
// Property: imageHeight; attributes: TQ,R,N,V_imageHeight

// -[SCPercMLODINClassificationModel initWithModelKey:modelId:deliverableModel:odinConfiguration:cacheDirectory:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10567e110

// -[SCPercMLODINClassificationModel dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10567e378

// -[SCPercMLODINClassificationModel _releaseYuvPixelBufferPool]
// Type encoding: v16@0:8
// Implementation: 0x10567e3f0

// -[SCPercMLODINClassificationModel _releaseVImageScaleCbCrTempBuffer]
// Type encoding: v16@0:8
// Implementation: 0x10567e444

// -[SCPercMLODINClassificationModel predictMultiClassificationsWithBatchPixelBuffers:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567e480

// -[SCPercMLODINClassificationModel predictClassificationsWithBatchPixelBuffers:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567eca0

// -[SCPercMLODINClassificationModel runDeepScanWithBatchImages:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567f090

// -[SCPercMLODINClassificationModel runEmbeddingAndCaptionSearchForBatchImages:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567f440

// -[SCPercMLODINClassificationModel predictClassificationsWithBatchImages:imageProcessingConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567f804

// -[SCPercMLODINClassificationModel predictClassificationsWithBatchImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x10567fc24

// -[SCPercMLODINClassificationModel predictAccumulatedClassificationsWithBatchImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x10567fc44

// -[SCPercMLODINClassificationModel supportPixelBufferFastInference]
// Type encoding: B16@0:8
// Implementation: 0x1056800b8

// -[SCPercMLODINClassificationModel cancelInference]
// Type encoding: v16@0:8
// Implementation: 0x1056800c0

// -[SCPercMLODINClassificationModel predictClassificationsWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105680150

// -[SCPercMLODINClassificationModel predictScoresWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1056801f0

// -[SCPercMLODINClassificationModel predictAccumulatedClassificationsWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105680290

// -[SCPercMLODINClassificationModel getMetricWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105680330

// -[SCPercMLODINClassificationModel getRawMetrics]
// Type encoding: @16@0:8
// Implementation: 0x105680514

// -[SCPercMLODINClassificationModel getStatMetricMean:]
// Type encoding: @24@0:8@16
// Implementation: 0x105680820

// -[SCPercMLODINClassificationModel runCoreMLWithPixelBuffer:coreMLProcessingConfig:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x105680968

// -[SCPercMLODINClassificationModel _runCoreMLWithPixelBufferInternal:modelInputVariable:modelOutputVariable:]
// Type encoding: ^{__CVBuffer=}40@0:8^{__CVBuffer=}16@24@32
// Implementation: 0x105681a84

// -[SCPercMLODINClassificationModel cleanupResources]
// Type encoding: v16@0:8
// Implementation: 0x105681fc4

// -[SCPercMLODINClassificationModel reorientImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105682038

// -[SCPercMLODINClassificationModel safeUIImageToCVMat:]
// Type encoding: {pair<cv::Mat, bool>={Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}B}24@0:8@16
// Implementation: 0x1056821dc

// -[SCPercMLODINClassificationModel _calcFocalLength:clockwiseRotation:cameraFieldOfView:]
// Type encoding: f32@0:8r^{Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}16B24f28
// Implementation: 0x1056823c8

// -[SCPercMLODINClassificationModel _scoresForCVMat:clockwiseRotation:cameraFieldOfView:error:]
// Type encoding: @128@0:8{Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}16B112f116^@120
// Implementation: 0x10568246c

// -[SCPercMLODINClassificationModel _multiClassScoresForCVMat:clockwiseRotation:cameraFieldOfView:error:]
// Type encoding: @128@0:8{Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}16B112f116^@120
// Implementation: 0x1056830d4

// -[SCPercMLODINClassificationModel _parseMultiModelClassificationOutput:error:]
// Type encoding: @32@0:8r^v16^@24
// Implementation: 0x1056832cc

// -[SCPercMLODINClassificationModel _formattedMapFromScoresMap:]
// Type encoding: @48@0:8{Map<int, OE::Scan::Label>=IIII^Q{MapAllocator<void *>=^{Arena}}}16
// Implementation: 0x105683444

// -[SCPercMLODINClassificationModel _createClassificationInputFromRgbaImage:clockwiseRotation:cameraFieldOfView:error:]
// Type encoding: {map<std::string, OE::Scan::ScanData, std::less<std::string>, std::allocator<std::pair<const std::string, OE::Scan::ScanData>>>={__tree<std::__value_type<std::string, OE::Scan::ScanData>, std::__map_value_compare<std::string, std::pair<const std::string, OE::Scan::ScanData>, std::less<std::string>>, std::allocator<std::pair<const std::string, OE::Scan::ScanData>>>=^v{?={__tree_end_node<std::__tree_node_base<void *> *>=^v}}{?=Q}}}128@0:8{Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}16B112f116^@120
// Implementation: 0x1056835ac

// -[SCPercMLODINClassificationModel _runODIN:cleanup:error:]
// Type encoding: {map<std::string, OE::Scan::ScanData, std::less<std::string>, std::allocator<std::pair<const std::string, OE::Scan::ScanData>>>={__tree<std::__value_type<std::string, OE::Scan::ScanData>, std::__map_value_compare<std::string, std::pair<const std::string, OE::Scan::ScanData>, std::less<std::string>>, std::allocator<std::pair<const std::string, OE::Scan::ScanData>>>=^v{?={__tree_end_node<std::__tree_node_base<void *> *>=^v}}{?=Q}}}36@0:8r^v16B24^@28
// Implementation: 0x105683ac4

// -[SCPercMLODINClassificationModel _createDeepScanInput:imageProcessingConfig:error:]
// Type encoding: {map<std::string, OE::Scan::ScanData, std::less<std::string>, std::allocator<std::pair<const std::string, OE::Scan::ScanData>>>={__tree<std::__value_type<std::string, OE::Scan::ScanData>, std::__map_value_compare<std::string, std::pair<const std::string, OE::Scan::ScanData>, std::less<std::string>>, std::allocator<std::pair<const std::string, OE::Scan::ScanData>>>=^v{?={__tree_end_node<std::__tree_node_base<void *> *>=^v}}{?=Q}}}40@0:8@16@24^@32
// Implementation: 0x105683ef0

// -[SCPercMLODINClassificationModel _createFaceEmbeddingInputFromImage:boundingBox:error:]
// Type encoding: {map<std::string, OE::Scan::ScanData, std::less<std::string>, std::allocator<std::pair<const std::string, OE::Scan::ScanData>>>={__tree<std::__value_type<std::string, OE::Scan::ScanData>, std::__map_value_compare<std::string, std::pair<const std::string, OE::Scan::ScanData>, std::less<std::string>>, std::allocator<std::pair<const std::string, OE::Scan::ScanData>>>=^v{?={__tree_end_node<std::__tree_node_base<void *> *>=^v}}{?=Q}}}40@0:8@16@24^@32
// Implementation: 0x105684770

// -[SCPercMLODINClassificationModel _parseFaceEmbeddingOutput:error:]
// Type encoding: @32@0:8r^v16^@24
// Implementation: 0x105684f4c

// -[SCPercMLODINClassificationModel _extractFaceEmbeddingFromImageOnPerformer:boundingBox:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056854a0

// -[SCPercMLODINClassificationModel extractFaceEmbeddingsFromImages:boundingBoxes:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105685700

// -[SCPercMLODINClassificationModel _parseDeepScanOutput:error:]
// Type encoding: @32@0:8r^v16^@24
// Implementation: 0x105685cb0

// -[SCPercMLODINClassificationModel _parseCLIPWithkNNOutput:error:]
// Type encoding: @32@0:8r^v16^@24
// Implementation: 0x1056861c4

// -[SCPercMLODINClassificationModel _deepScanForUIImage:imageProcessingConfig:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x10568651c

// -[SCPercMLODINClassificationModel _embedImageAndFindCaptionsForUIImage:imageProcessingConfig:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x1056865d8

// -[SCPercMLODINClassificationModel _scoresForUIImage:clockwiseRotation:cameraFieldOfView:error:]
// Type encoding: @40@0:8@16B24f28^@32
// Implementation: 0x105686694

// -[SCPercMLODINClassificationModel _scoresForPixelBufferRef:clockwiseRotation:cameraFieldOfView:error:]
// Type encoding: @40@0:8^{__CVBuffer=}16B24f28^@32
// Implementation: 0x1056869ac

// -[SCPercMLODINClassificationModel _scan]
// Type encoding: ^v16@0:8
// Implementation: 0x105686bcc

// -[SCPercMLODINClassificationModel getOrCreateYUV420PixelBufferPoolForWidth:height:poolSize:]
// Type encoding: ^{__CVPixelBufferPool=}40@0:8Q16Q24Q32
// Implementation: 0x105686d84

// -[SCPercMLODINClassificationModel _getOrCreateVImageScaleCbCrTempBufferWithSourceWidth:sourceHeight:destWidth:destHeight:sourceCbCrBuffer:resultCbCrBuffer:]
// Type encoding: ^v64@0:8Q16Q24Q32Q40r^{vImage_Buffer=^vQQQ}48r^{vImage_Buffer=^vQQQ}56
// Implementation: 0x10568702c

// -[SCPercMLODINClassificationModel modelKey]
// Type encoding: @16@0:8
// Implementation: 0x105687128

// -[SCPercMLODINClassificationModel modelId]
// Type encoding: @16@0:8
// Implementation: 0x105687130

// -[SCPercMLODINClassificationModel labels]
// Type encoding: @16@0:8
// Implementation: 0x105687138

// -[SCPercMLODINClassificationModel imageWidth]
// Type encoding: Q16@0:8
// Implementation: 0x105687140

// -[SCPercMLODINClassificationModel imageHeight]
// Type encoding: Q16@0:8
// Implementation: 0x105687148

// -[SCPercMLODINClassificationModel approximateSizeInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x105687150

// -[SCPercMLODINClassificationModel loggingDisabled]
// Type encoding: B16@0:8
// Implementation: 0x105687158

// -[SCPercMLODINClassificationModel setLoggingDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105687160

// -[SCPercMLODINClassificationModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105687168

// -[SCPercMLODINClassificationModel .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1056871d4

@end
