// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserReachabilityTakeoverProvider
// Superclass: NSObject
// Address: 0x112a1a8c8

@interface SCUserReachabilityTakeoverProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserReachabilityTakeoverProvider initWithFeatureSettingsService:fstCampaignDataProvider:additionalMetricsData:userReachabilityScopeExposer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1051265a0

// -[SCUserReachabilityTakeoverProvider canShowCampaign:]
// Type encoding: B24@0:8@16
// Implementation: 0x10512669c

// -[SCUserReachabilityTakeoverProvider showCampaign:uiContainer:onComplete:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1051266e4

// -[SCUserReachabilityTakeoverProvider takeoverCompleted]
// Type encoding: v16@0:8
// Implementation: 0x1051267a8

// -[SCUserReachabilityTakeoverProvider _logSeenTimestamp]
// Type encoding: v16@0:8
// Implementation: 0x1051267ec

// -[SCUserReachabilityTakeoverProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105126874

@end
