// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCClientFeatureGatingValueRetrieverImpl
// Superclass: NSObject
// Address: 0x112a26538

@interface SCClientFeatureGatingValueRetrieverImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCClientFeatureGatingValueRetrieverImpl initWithDeviceIdentifierProvider:experimentLogger:circumstanceEngine:grapheneRegistry:userDefaults:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10526c86c

// -[SCClientFeatureGatingValueRetrieverImpl registerClientHardcodeABs]
// Type encoding: v16@0:8
// Implementation: 0x10526c9f4

// -[SCClientFeatureGatingValueRetrieverImpl registerClientHardcodeAB:]
// Type encoding: v24@0:8@16
// Implementation: 0x10526caf4

// -[SCClientFeatureGatingValueRetrieverImpl handleAppWillTerminate]
// Type encoding: v16@0:8
// Implementation: 0x10526cc78

// -[SCClientFeatureGatingValueRetrieverImpl registerCOF:internalConfig:betaConfig:prodConfig:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10526ce88

// -[SCClientFeatureGatingValueRetrieverImpl shouldSkipReadingFromCOF:]
// Type encoding: B24@0:8@16
// Implementation: 0x10526cf80

// -[SCClientFeatureGatingValueRetrieverImpl shouldSkipReadingFromStudyExposureName:version:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x10526d004

// -[SCClientFeatureGatingValueRetrieverImpl startUsingCOF:]
// Type encoding: v24@0:8@16
// Implementation: 0x10526d1c4

// -[SCClientFeatureGatingValueRetrieverImpl startUsingStudyExposureName:version:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10526d260

// -[SCClientFeatureGatingValueRetrieverImpl doneUsingCOF:]
// Type encoding: v24@0:8@16
// Implementation: 0x10526d320

// -[SCClientFeatureGatingValueRetrieverImpl doneUsingStudyExposureName:version:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10526d3bc

// -[SCClientFeatureGatingValueRetrieverImpl valueFromCOF:crashDetectionOn:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10526d47c

// -[SCClientFeatureGatingValueRetrieverImpl manualExposureValueFromCOF:crashDetectionOn:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10526d4c8

// -[SCClientFeatureGatingValueRetrieverImpl manualExposureValueFromCOF:userRange:studySeed:studyExposureName:treatments:]
// Type encoding: @64@0:8@16{_NSRange=QQ}24@40@48@56
// Implementation: 0x10526d658

// -[SCClientFeatureGatingValueRetrieverImpl _getConfigForCOF:]
// Type encoding: @24@0:8@16
// Implementation: 0x10526d8d0

// -[SCClientFeatureGatingValueRetrieverImpl _incrementMetric:]
// Type encoding: v24@0:8@16
// Implementation: 0x10526db18

// -[SCClientFeatureGatingValueRetrieverImpl _validateClientAssignmentForCOF:cofExposureValue:clientExposureValue:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10526db88

// -[SCClientFeatureGatingValueRetrieverImpl boolValueForConfigKeySync:defaultValue:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x10526de50

// -[SCClientFeatureGatingValueRetrieverImpl intValueForConfigKeySync:defaultValue:]
// Type encoding: i28@0:8@16i24
// Implementation: 0x10526de9c

// -[SCClientFeatureGatingValueRetrieverImpl longValueForConfigKeySync:defaultValue:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x10526dee8

// -[SCClientFeatureGatingValueRetrieverImpl floatValueForConfigKeySync:defaultValue:]
// Type encoding: f28@0:8@16f24
// Implementation: 0x10526df34

// -[SCClientFeatureGatingValueRetrieverImpl stringValueForConfigKeySync:defaultValue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10526df88

// -[SCClientFeatureGatingValueRetrieverImpl protoValueForConfigKeySync:defaultValue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10526e014

// -[SCClientFeatureGatingValueRetrieverImpl manualExposureValueForConfigKeySync:]
// Type encoding: @24@0:8@16
// Implementation: 0x10526e0a0

// -[SCClientFeatureGatingValueRetrieverImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10526e0a8

@end
