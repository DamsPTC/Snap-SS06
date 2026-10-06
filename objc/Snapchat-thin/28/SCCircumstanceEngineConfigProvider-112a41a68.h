// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCircumstanceEngineConfigProvider
// Superclass: NSObject
// Address: 0x112a41a68

@interface SCCircumstanceEngineConfigProvider

// Property: featureSettingsService; attributes: T@"SCLazy",W,N,V_featureSettingsService
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCircumstanceEngineConfigProvider initWithConfigResultProvider:configMetricLogger:experimentLogger:propertyHandlerRegistry:forcedDefaultValueDelegate:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1000fc544

// -[SCCircumstanceEngineConfigProvider intValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: i36@0:8@16i24@28
// Implementation: 0x1002f1010

// -[SCCircumstanceEngineConfigProvider longValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: q40@0:8@16q24@32
// Implementation: 0x100767110

// -[SCCircumstanceEngineConfigProvider floatValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: f36@0:8@16f24@28
// Implementation: 0x10035d944

// -[SCCircumstanceEngineConfigProvider boolValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: B36@0:8@16B24@28
// Implementation: 0x100322784

// -[SCCircumstanceEngineConfigProvider stringValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100323828

// -[SCCircumstanceEngineConfigProvider protoValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10010b7dc

// -[SCCircumstanceEngineConfigProvider stringArrayValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1054e3368

// -[SCCircumstanceEngineConfigProvider _valueForConfigKeySync:expectedValueType:featureProvidedSignals:]
// Type encoding: @36@0:8@16i24@28
// Implementation: 0x10010b870

// -[SCCircumstanceEngineConfigProvider intValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10011aca0

// -[SCCircumstanceEngineConfigProvider longValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054e3478

// -[SCCircumstanceEngineConfigProvider floatValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1005e7548

// -[SCCircumstanceEngineConfigProvider boolValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10011c698

// -[SCCircumstanceEngineConfigProvider stringValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1001068b0

// -[SCCircumstanceEngineConfigProvider manualExposureValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1003a5edc

// -[SCCircumstanceEngineConfigProvider getSystemType]
// Type encoding: q16@0:8
// Implementation: 0x1054e3504

// -[SCCircumstanceEngineConfigProvider getConfigurationState]
// Type encoding: @16@0:8
// Implementation: 0x1054e350c

// -[SCCircumstanceEngineConfigProvider getRealValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054e3530

// -[SCCircumstanceEngineConfigProvider getStringValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054e35bc

// -[SCCircumstanceEngineConfigProvider getBinaryValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004a6120

// -[SCCircumstanceEngineConfigProvider getBooleanValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x100558154

// -[SCCircumstanceEngineConfigProvider getIntegerValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x100566208

// -[SCCircumstanceEngineConfigProvider _optionalConfigResultForConfigKeySync:expectedValueType:featureProvidedSignals:exposeExperiment:]
// Type encoding: @40@0:8@16i24@28B36
// Implementation: 0x100106c6c

// -[SCCircumstanceEngineConfigProvider featureSettingsService]
// Type encoding: @16@0:8
// Implementation: 0x1054e3648

// -[SCCircumstanceEngineConfigProvider setFeatureSettingsService:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003d3cc0

// -[SCCircumstanceEngineConfigProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054e3660

@end
