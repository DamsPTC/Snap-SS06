// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLSnapScanSnapcodeDetectionModel
// Superclass: NSObject
// Address: 0x112a54f78

@interface SCPercMLSnapScanSnapcodeDetectionModel

// Property: isInTestMode; attributes: TB,N,V_isInTestMode
// Property: snapcodeTypes; attributes: T@"NSArray",R,N,V_snapcodeTypes
// Property: enableFalseAlarmCheck; attributes: TB,R,N,GisFalseAlarmCheckEnabled,V_enableFalseAlarmCheck
// Property: enableContourEnhancement; attributes: TB,R,N,GisContourEnhancementEnabled,V_enableContourEnhancement
// Property: modelKey; attributes: T@"NSString",R,N,V_modelKey
// Property: modelId; attributes: T@"NSString",R,N,V_modelId
// Property: approximateSizeInBytes; attributes: TQ,R,N,V_approximateSizeInBytes
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPercMLSnapScanSnapcodeDetectionModel initWithModelKey:modelId:deliverableModel:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x1056896ac

// -[SCPercMLSnapScanSnapcodeDetectionModel detectSnapcodesWithBatchImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x10568992c

// -[SCPercMLSnapScanSnapcodeDetectionModel _detectSnapcodesWithBatchImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x105689c58

// -[SCPercMLSnapScanSnapcodeDetectionModel _scanCVMat:error:]
// Type encoding: @120@0:8{Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}16^@112
// Implementation: 0x10568a038

// -[SCPercMLSnapScanSnapcodeDetectionModel _snapScanModelFromDeliverableModel:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x10568aa54

// -[SCPercMLSnapScanSnapcodeDetectionModel _snapcodeTypesFromSnapScanModel:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x10568ab0c

// -[SCPercMLSnapScanSnapcodeDetectionModel approximateSizeInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10568aebc

// -[SCPercMLSnapScanSnapcodeDetectionModel modelKey]
// Type encoding: @16@0:8
// Implementation: 0x10568aec4

// -[SCPercMLSnapScanSnapcodeDetectionModel modelId]
// Type encoding: @16@0:8
// Implementation: 0x10568aecc

// -[SCPercMLSnapScanSnapcodeDetectionModel snapcodeTypes]
// Type encoding: @16@0:8
// Implementation: 0x10568aed4

// -[SCPercMLSnapScanSnapcodeDetectionModel isFalseAlarmCheckEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10568aedc

// -[SCPercMLSnapScanSnapcodeDetectionModel isContourEnhancementEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10568aee4

// -[SCPercMLSnapScanSnapcodeDetectionModel isInTestMode]
// Type encoding: B16@0:8
// Implementation: 0x10568aeec

// -[SCPercMLSnapScanSnapcodeDetectionModel setIsInTestMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x10568aef4

// -[SCPercMLSnapScanSnapcodeDetectionModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10568aefc

// +[SCPercMLSnapScanSnapcodeDetectionModel _snapScanTypeFromProtoType:]
// Type encoding: @20@0:8i16
// Implementation: 0x10568ad70

@end
