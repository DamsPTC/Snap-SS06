// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLDefaultModelFactory
// Superclass: NSObject
// Address: 0x112a54c08

@interface SCPercMLDefaultModelFactory

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPercMLDefaultModelFactory initWithLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x105671e58

// -[SCPercMLDefaultModelFactory dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105671f14

// -[SCPercMLDefaultModelFactory cache:willEvictObject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105671f60

// -[SCPercMLDefaultModelFactory modelWithModelKey:handle:deliverableModel:perceptionConfigurationServices:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x105672104

// -[SCPercMLDefaultModelFactory _odinModelWithModelKey:handle:deliverableModel:perceptionConfigurationServices:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x1056722d4

// -[SCPercMLDefaultModelFactory _faceEmbeddingModelWithModelKey:handle:deliverableModel:perceptionConfigurationServices:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x1056724a4

// -[SCPercMLDefaultModelFactory _createODINClassificationModelWithModelKey:handle:deliverableModel:perceptionConfigurationServices:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x1056725a8

// -[SCPercMLDefaultModelFactory _imageClassificationModelWithModelKey:handle:deliverableModel:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x1056727a8

// -[SCPercMLDefaultModelFactory _imageEmbeddingModelWithModelKey:handle:deliverableModel:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x1056729bc

// -[SCPercMLDefaultModelFactory _barcodeDetectionModelWithModelKey:handle:deliverableModel:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x105672bd0

// -[SCPercMLDefaultModelFactory _snapcodeDetectionModelWithModelKey:handle:deliverableModel:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x105672de0

// -[SCPercMLDefaultModelFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105672ff0

@end
