// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLLoggingSnapcodeDetectionModel
// Superclass: NSObject
// Address: 0x112a54ed8

@interface SCPercMLLoggingSnapcodeDetectionModel

// Property: snapcodeTypes; attributes: T@"NSArray",R,N
// Property: enableFalseAlarmCheck; attributes: TB,R,N,GisFalseAlarmCheckEnabled
// Property: enableContourEnhancement; attributes: TB,R,N,GisContourEnhancementEnabled
// Property: modelKey; attributes: T@"NSString",R,N
// Property: modelId; attributes: T@"NSString",R,N
// Property: approximateSizeInBytes; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPercMLLoggingSnapcodeDetectionModel initWithSnapcodeDetectionModel:logger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10567dd6c

// -[SCPercMLLoggingSnapcodeDetectionModel modelKey]
// Type encoding: @16@0:8
// Implementation: 0x10567de10

// -[SCPercMLLoggingSnapcodeDetectionModel modelId]
// Type encoding: @16@0:8
// Implementation: 0x10567de18

// -[SCPercMLLoggingSnapcodeDetectionModel approximateSizeInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10567de20

// -[SCPercMLLoggingSnapcodeDetectionModel snapcodeTypes]
// Type encoding: @16@0:8
// Implementation: 0x10567de28

// -[SCPercMLLoggingSnapcodeDetectionModel isFalseAlarmCheckEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10567de30

// -[SCPercMLLoggingSnapcodeDetectionModel isContourEnhancementEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10567de38

// -[SCPercMLLoggingSnapcodeDetectionModel detectSnapcodesWithBatchImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x10567de40

// -[SCPercMLLoggingSnapcodeDetectionModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10567e0e0

@end
