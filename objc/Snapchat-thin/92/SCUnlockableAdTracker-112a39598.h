// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableAdTracker
// Superclass: NSObject
// Address: 0x112a39598

@interface SCUnlockableAdTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnlockableAdTracker initWithUserAgent:networkManager:commonMetricsManager:requestInfoProvider:grapheneRegistry:adConfigProvider:adConfigProviderV2:trackerConfig:spectrumLogger:lifecycleTracker:userBlizzard:shadowDiffPerformer:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x100b8f94c

// -[SCUnlockableAdTracker _submitAdLifecycleAdTrackEvent:requestStartTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10546a598

// -[SCUnlockableAdTracker trackUnlockableAd:]
// Type encoding: v24@0:8@16
// Implementation: 0x10546a7a8

// -[SCUnlockableAdTracker _handleNetworkResponse:responseData:request:trackType:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10546af80

// -[SCUnlockableAdTracker _logUnlockableAdTrackStatusMetric:adType:trackType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10546b19c

// -[SCUnlockableAdTracker trackTypeStringWithType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10546b2f4

// -[SCUnlockableAdTracker _logUnlockableAdTrackRawUserDataMetric:]
// Type encoding: v20@0:8B16
// Implementation: 0x10546b318

// -[SCUnlockableAdTracker _submitTrackRequest:debugViewContext:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10546b3d0

// -[SCUnlockableAdTracker _getAdProductTypeFromAdType:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10546b4bc

// -[SCUnlockableAdTracker _isInventorySpectrumMigrationApplicableWithInventoryType:]
// Type encoding: B24@0:8q16
// Implementation: 0x10546b4f4

// -[SCUnlockableAdTracker protoTrackRequestsForTrackInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10546b660

// -[SCUnlockableAdTracker logUnlockableAdTrackRawUserDataMetricWithFallbackToRawUserData:]
// Type encoding: v20@0:8B16
// Implementation: 0x10546b8dc

// -[SCUnlockableAdTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10546b8e0

@end
