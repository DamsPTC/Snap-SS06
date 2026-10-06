// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusFeatureBadgingFeatureImpl
// Superclass: NSObject
// Address: 0x112b25498

@interface SCPlusFeatureBadgingFeatureImpl

// Property: provider; attributes: T@"SCLazy",R,N,V_provider
// Property: observable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusFeatureBadgingFeatureImpl initWithPerformer:subscriptionInfoProvider:registrationInfoProvider:gatingStateProvider:impressionValue:cutoffTimestampMsProvider:newToPlusEnabled:newToPlusCutoffTime:supportsCountdowns:]
// Type encoding: @80@0:8@16@24@32@40@48@?56B64d68B76
// Implementation: 0x106c4728c

// -[SCPlusFeatureBadgingFeatureImpl initWithPerformer:subscriptionInfoProvider:registrationInfoProvider:impressionValue:cutoffTimestampMsProvider:newToPlusEnabled:newToPlusCutoffTime:supportsCountdowns:gatingState:currentValueChangedObservable:]
// Type encoding: @88@0:8@16@24@32@40@?48B56d60B68q72@80
// Implementation: 0x106c47598

// -[SCPlusFeatureBadgingFeatureImpl initWithCircumstanceEngine:performer:subscriptionInfoProvider:registrationInfoProvider:gatingStateProvider:impressionValue:cofConfigKey:cofDefaultValue:newToPlusEnabled:newToPlusCutoffTime:]
// Type encoding: @92@0:8@16@24@32@40@48@56@64Q72B80d84
// Implementation: 0x106c4797c

// -[SCPlusFeatureBadgingFeatureImpl initWithCircumstanceEngine:performer:subscriptionInfoProvider:registrationInfoProvider:integratedGatingStateProviders:impressionValue:cofConfigKey:cofDefaultValue:newToPlusEnabled:newToPlusCutoffTime:]
// Type encoding: @92@0:8@16@24@32@40@48@56@64Q72B80d84
// Implementation: 0x106c47aa8

// -[SCPlusFeatureBadgingFeatureImpl initWithPerformer:registrationInfoProvider:gatingStateProvider:impressionValue:cutoffTimestampMsProvider:]
// Type encoding: @56@0:8@16@24@32@40@?48
// Implementation: 0x106c47e44

// -[SCPlusFeatureBadgingFeatureImpl observable]
// Type encoding: @16@0:8
// Implementation: 0x106c4825c

// -[SCPlusFeatureBadgingFeatureImpl clear]
// Type encoding: v16@0:8
// Implementation: 0x106c482a4

// -[SCPlusFeatureBadgingFeatureImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x106c48300

// -[SCPlusFeatureBadgingFeatureImpl _updateImpressionTimestampMs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106c48308

// -[SCPlusFeatureBadgingFeatureImpl provider]
// Type encoding: @16@0:8
// Implementation: 0x106c483f4

// -[SCPlusFeatureBadgingFeatureImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c483fc

@end
