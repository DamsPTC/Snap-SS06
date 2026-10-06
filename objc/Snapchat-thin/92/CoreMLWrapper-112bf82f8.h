// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CoreMLWrapper
// Superclass: NSObject
// Address: 0x112bf82f8

@interface CoreMLWrapper

// Property: outputNameSet; attributes: T@"NSSet",&,N,V_outputNameSet
// Property: model; attributes: T@"MLModel",R,N,V_model

// -[CoreMLWrapper initWithContentsOfURL:outputNameSet:hardware:reshapeFrequency:specializationStrategy:error:]
// Type encoding: @64@0:8@16@24q32q40q48^@56
// Implementation: 0x109cd8c0c

// -[CoreMLWrapper initWithModel:outputNameSet:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109cd8dd0

// -[CoreMLWrapper initWithModelFilePath:hardware:reshapeFrequency:specializationStrategy:error:]
// Type encoding: @56@0:8@16q24q32q40^@48
// Implementation: 0x109cd8f60

// -[CoreMLWrapper initWithModelFilePath:outputNameSet:hardware:reshapeFrequency:specializationStrategy:error:]
// Type encoding: @64@0:8@16@24q32q40q48^@56
// Implementation: 0x109cd9004

// -[CoreMLWrapper inputFeatures]
// Type encoding: @16@0:8
// Implementation: 0x109cd9128

// -[CoreMLWrapper outputFeatures]
// Type encoding: @16@0:8
// Implementation: 0x109cd9184

// -[CoreMLWrapper _loadModelWithContentsOfURL:hardware:reshapeFrequency:specializationStrategy:error:]
// Type encoding: @56@0:8@16q24q32q40^@48
// Implementation: 0x109cd92c4

// -[CoreMLWrapper predictionFromFeatures:options:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x109cd96bc

// -[CoreMLWrapper predictionFromTensorDictionary:options:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x109cd98dc

// -[CoreMLWrapper model]
// Type encoding: @16@0:8
// Implementation: 0x109cd9eb0

// -[CoreMLWrapper outputNameSet]
// Type encoding: @16@0:8
// Implementation: 0x109cd9eb8

// -[CoreMLWrapper setOutputNameSet:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd9ec0

// -[CoreMLWrapper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109cd9ef0

// +[CoreMLWrapper _decideComputeUnitsForHardware:]
// Type encoding: q24@0:8q16
// Implementation: 0x109cd90d4

// +[CoreMLWrapper _applyOptimizationHints:reshapeFrequency:specializationStrategy:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x109cd91e0

// +[CoreMLWrapper loadContentsOfURL:outputNameSet:hardware:reshapeFrequency:specializationStrategy:completionHandler:]
// Type encoding: v64@0:8@16@24q32q40q48@?56
// Implementation: 0x109cd944c

// +[CoreMLWrapper compileModelAtPath:toPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x109cd99a4

@end
