// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLFastDNNImageInferenceModel
// Superclass: NSObject
// Address: 0x112a54d98

@interface SCPercMLFastDNNImageInferenceModel

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

// -[SCPercMLFastDNNImageInferenceModel initWithModelKey:modelId:fastDNNDeliverableModel:logger:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x105679908

// -[SCPercMLFastDNNImageInferenceModel predictWithImage:error:output:imageProcessingConfig:]
// Type encoding: v48@0:8@16^@24^v32@40
// Implementation: 0x10567a0e4

// -[SCPercMLFastDNNImageInferenceModel _preprocessImage:error:imageProcessingConfig:]
// Type encoding: {Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}40@0:8@16^@24@32
// Implementation: 0x10567aadc

// -[SCPercMLFastDNNImageInferenceModel _preprocessAndConvertImage:rotationNeeded:]
// Type encoding: {Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}28@0:8@16B24
// Implementation: 0x10567ad44

// -[SCPercMLFastDNNImageInferenceModel _rotateMatrixRight:]
// Type encoding: {Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}112@0:8{Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}16
// Implementation: 0x10567b1b0

// -[SCPercMLFastDNNImageInferenceModel _preprocessFromImage:]
// Type encoding: {Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}24@0:8@16
// Implementation: 0x10567b268

// -[SCPercMLFastDNNImageInferenceModel _convertAndNormalizeImage:error:]
// Type encoding: {Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}120@0:8{Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}16^@112
// Implementation: 0x10567b408

// -[SCPercMLFastDNNImageInferenceModel _validateInputDimensions:]
// Type encoding: B24@0:8^{Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}16
// Implementation: 0x10567bba0

// -[SCPercMLFastDNNImageInferenceModel _validateInputTensor:]
// Type encoding: B24@0:8^v16
// Implementation: 0x10567bbcc

// -[SCPercMLFastDNNImageInferenceModel _validateModel:]
// Type encoding: B24@0:8^v16
// Implementation: 0x10567bc2c

// -[SCPercMLFastDNNImageInferenceModel modelKey]
// Type encoding: @16@0:8
// Implementation: 0x10567bcac

// -[SCPercMLFastDNNImageInferenceModel modelId]
// Type encoding: @16@0:8
// Implementation: 0x10567bcb4

// -[SCPercMLFastDNNImageInferenceModel imageWidth]
// Type encoding: Q16@0:8
// Implementation: 0x10567bcbc

// -[SCPercMLFastDNNImageInferenceModel imageHeight]
// Type encoding: Q16@0:8
// Implementation: 0x10567bcc4

// -[SCPercMLFastDNNImageInferenceModel approximateSizeInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10567bccc

// -[SCPercMLFastDNNImageInferenceModel loggingDisabled]
// Type encoding: B16@0:8
// Implementation: 0x10567bcd4

// -[SCPercMLFastDNNImageInferenceModel setLoggingDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10567bcdc

// -[SCPercMLFastDNNImageInferenceModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10567bce4

// -[SCPercMLFastDNNImageInferenceModel .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10567bd9c

@end
