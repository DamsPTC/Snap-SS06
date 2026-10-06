// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRealTimeScanCodeClassificationOperation
// Superclass: SCRealTimeScanBaseOperation
// Address: 0x112a0d3f8

@interface SCRealTimeScanCodeClassificationOperation

// Property: imageId; attributes: T@"NSString",&,N,V_imageId
// Property: imageMetadata; attributes: T@"NSArray",&,N,V_imageMetadata
// Property: classifiedModelTypes; attributes: T@"NSArray",&,N,V_classifiedModelTypes

// -[SCRealTimeScanCodeClassificationOperation initWithScannableData:modelProvider:realTimeScanLogger:realTimeScanConfiguration:odinBenchmarkMode:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x104fa0f60

// -[SCRealTimeScanCodeClassificationOperation start]
// Type encoding: v16@0:8
// Implementation: 0x104fa1114

// -[SCRealTimeScanCodeClassificationOperation cancel]
// Type encoding: v16@0:8
// Implementation: 0x104fa1170

// -[SCRealTimeScanCodeClassificationOperation image]
// Type encoding: @16@0:8
// Implementation: 0x104fa1230

// -[SCRealTimeScanCodeClassificationOperation _analyzeImageWithScannableData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fa126c

// -[SCRealTimeScanCodeClassificationOperation _classifiedClassWithModel:modelFetchStartTime:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x104fa150c

// -[SCRealTimeScanCodeClassificationOperation imageId]
// Type encoding: @16@0:8
// Implementation: 0x104fa1b64

// -[SCRealTimeScanCodeClassificationOperation setImageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fa1b74

// -[SCRealTimeScanCodeClassificationOperation imageMetadata]
// Type encoding: @16@0:8
// Implementation: 0x104fa1bb4

// -[SCRealTimeScanCodeClassificationOperation setImageMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fa1bc4

// -[SCRealTimeScanCodeClassificationOperation classifiedModelTypes]
// Type encoding: @16@0:8
// Implementation: 0x104fa1c04

// -[SCRealTimeScanCodeClassificationOperation setClassifiedModelTypes:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fa1c14

// -[SCRealTimeScanCodeClassificationOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fa1c54

@end
