// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLFastDNNModelFactory
// Superclass: NSObject
// Address: 0x112a54c58

@interface SCPercMLFastDNNModelFactory


// +[SCPercMLFastDNNModelFactory fastDNNModelFromDeliverableModel:error:output:]
// Type encoding: v40@0:8@16^@24^v32
// Implementation: 0x10567376c

// +[SCPercMLFastDNNModelFactory fastDNNModelFromFastDNNDeliverableModel:error:output:]
// Type encoding: v40@0:8@16^@24^v32
// Implementation: 0x10567383c

// +[SCPercMLFastDNNModelFactory _modelWithIdentifier:modelStream:modelParams:options:backend:error:output:]
// Type encoding: v68@0:8@16^v24^v32^v40I48^@52^v60
// Implementation: 0x105673e10

// +[SCPercMLFastDNNModelFactory _populateOptions:fromModel:]
// Type encoding: v32@0:8^v16@24
// Implementation: 0x105674214

// +[SCPercMLFastDNNModelFactory _modelInputOutputsFromNamedTensorDefinitions:output:]
// Type encoding: v32@0:8@16^v24
// Implementation: 0x105674484

// +[SCPercMLFastDNNModelFactory _fastDNNBackendFromBackend:]
// Type encoding: I20@0:8i16
// Implementation: 0x10567488c

@end
