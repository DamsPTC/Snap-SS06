// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCreatorSettingsSubscriptionRequestProcessor
// Superclass: NSObject
// Address: 0x112a829c8

@interface SCCreatorSettingsSubscriptionRequestProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCreatorSettingsSubscriptionRequestProcessor initWithRequestManager:snapTokenProvider:snapchatterDataMutator:snapchatterDataTracker:userId:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100c67ef4

// -[SCCreatorSettingsSubscriptionRequestProcessor subscribeToSnapchatter:isSubscribing:placementInfo:successHandler:failureHandler:]
// Type encoding: v52@0:8@16B24@28@?36@?44
// Implementation: 0x105a00a28

// -[SCCreatorSettingsSubscriptionRequestProcessor subscribeToPublisher:isSubscribing:successHandler:failureHandler:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x105a00cb4

// -[SCCreatorSettingsSubscriptionRequestProcessor _subscribeToPublisher:isSubscribing:accessToken:successHandler:failureHandler:]
// Type encoding: v52@0:8@16B24@28@?36@?44
// Implementation: 0x105a00f14

// -[SCCreatorSettingsSubscriptionRequestProcessor didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a01098

// -[SCCreatorSettingsSubscriptionRequestProcessor didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105a0109c

// -[SCCreatorSettingsSubscriptionRequestProcessor _sendSnapchatterDataMutatorRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a012f8

// -[SCCreatorSettingsSubscriptionRequestProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a01348

@end
