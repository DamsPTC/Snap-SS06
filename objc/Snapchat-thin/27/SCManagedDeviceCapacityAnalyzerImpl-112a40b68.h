// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedDeviceCapacityAnalyzerImpl
// Superclass: NSObject
// Address: 0x112a40b68

@interface SCManagedDeviceCapacityAnalyzerImpl

// Property: lowLightConditionEnabled; attributes: TB,N,V_lowLightConditionEnabled
// Property: lastBrightness; attributes: Td,R,N,V_lastBrightness
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCManagedDeviceCapacityAnalyzerImpl initWithCameraHardwareResource:captureDeviceManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100352e7c

// -[SCManagedDeviceCapacityAnalyzerImpl addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003530a0

// -[SCManagedDeviceCapacityAnalyzerImpl removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054ce65c

// -[SCManagedDeviceCapacityAnalyzerImpl setLowLightConditionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x100353250

// -[SCManagedDeviceCapacityAnalyzerImpl startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100353408

// -[SCManagedDeviceCapacityAnalyzerImpl stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x1054ce664

// -[SCManagedDeviceCapacityAnalyzerImpl _didReceiveManagedVideoDataSourceEvent:sampleTimestamp:devicePosition:]
// Type encoding: v56@0:8^{opaqueCMSampleBuffer=}16{?=qiIq}24q48
// Implementation: 0x100709e94

// -[SCManagedDeviceCapacityAnalyzerImpl resetExposureAdjustment]
// Type encoding: v16@0:8
// Implementation: 0x100c769f4

// -[SCManagedDeviceCapacityAnalyzerImpl startAnalyzing]
// Type encoding: v16@0:8
// Implementation: 0x100352fc4

// -[SCManagedDeviceCapacityAnalyzerImpl _automaticallyDetectAdjustingExposure:ISOSpeedRating:]
// Type encoding: v28@0:8f16d20
// Implementation: 0x10070a444

// -[SCManagedDeviceCapacityAnalyzerImpl _computeMovingAverageBrightnessWithLatestBrightnessValue:]
// Type encoding: v20@0:8f16
// Implementation: 0x10070a930

// -[SCManagedDeviceCapacityAnalyzerImpl _automaticallyDetectLowLightConditionWithBrightness:maxISOPreset:]
// Type encoding: v28@0:8f16d20
// Implementation: 0x1008ec86c

// -[SCManagedDeviceCapacityAnalyzerImpl _automaticallyDetectLightingConditionWithBrightness:]
// Type encoding: v20@0:8f16
// Implementation: 0x10070a958

// -[SCManagedDeviceCapacityAnalyzerImpl lowLightConditionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1054ce690

// -[SCManagedDeviceCapacityAnalyzerImpl lastBrightness]
// Type encoding: d16@0:8
// Implementation: 0x1054ce698

// -[SCManagedDeviceCapacityAnalyzerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054ce6a0

@end
