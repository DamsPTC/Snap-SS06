// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLVisionBarcodeDetectionModel
// Superclass: NSObject
// Address: 0x112a54fc8

@interface SCPercMLVisionBarcodeDetectionModel

// Property: supportedSymbologies; attributes: T@"NSArray",R,N,V_supportedSymbologies
// Property: modelKey; attributes: T@"NSString",R,N,V_modelKey
// Property: modelId; attributes: T@"NSString",R,N,V_modelId
// Property: approximateSizeInBytes; attributes: TQ,R,N,V_approximateSizeInBytes
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPercMLVisionBarcodeDetectionModel initWithModelKey:modelId:deliverableModel:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x10568af44

// -[SCPercMLVisionBarcodeDetectionModel detectBarcodesWithBatchImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x10568b15c

// -[SCPercMLVisionBarcodeDetectionModel _detectBarcodesWithBatchImages:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10568b494

// -[SCPercMLVisionBarcodeDetectionModel _preprocessImage:]
// Type encoding: ^{CGImage=}24@0:8@16
// Implementation: 0x10568b880

// -[SCPercMLVisionBarcodeDetectionModel _visionModelFromDeliverableModel:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x10568b9b8

// -[SCPercMLVisionBarcodeDetectionModel _vnSupportedSymbologiesFromVisionModel:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x10568ba98

// -[SCPercMLVisionBarcodeDetectionModel _symbologiesFromVNSymbologies:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x10568bce4

// -[SCPercMLVisionBarcodeDetectionModel _executeBatchResultsCompletion:completionQueue:batchResults:error:]
// Type encoding: v48@0:8@?16@24@32@40
// Implementation: 0x10568c448

// -[SCPercMLVisionBarcodeDetectionModel approximateSizeInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10568c534

// -[SCPercMLVisionBarcodeDetectionModel modelKey]
// Type encoding: @16@0:8
// Implementation: 0x10568c53c

// -[SCPercMLVisionBarcodeDetectionModel modelId]
// Type encoding: @16@0:8
// Implementation: 0x10568c544

// -[SCPercMLVisionBarcodeDetectionModel supportedSymbologies]
// Type encoding: @16@0:8
// Implementation: 0x10568c54c

// -[SCPercMLVisionBarcodeDetectionModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10568c554

// +[SCPercMLVisionBarcodeDetectionModel _vnSymbologyFromVisionSymbology:]
// Type encoding: @20@0:8i16
// Implementation: 0x10568be80

// +[SCPercMLVisionBarcodeDetectionModel _symbologyFromVNSymbology:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10568c174

@end
