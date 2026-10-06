// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCInAppWarningTakeoverProvider
// Superclass: NSObject
// Address: 0x112a19798

@interface SCInAppWarningTakeoverProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCInAppWarningTakeoverProvider initWithWarningV4ScopeExposer:fstCampaignDataProvider:additionalMetricsData:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1051183c8

// -[SCInAppWarningTakeoverProvider canShowCampaign:]
// Type encoding: B24@0:8@16
// Implementation: 0x105118494

// -[SCInAppWarningTakeoverProvider showCampaign:uiContainer:onComplete:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1051184dc

// -[SCInAppWarningTakeoverProvider _launchWarningV4:campaign:onComplete:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1051184ec

// -[SCInAppWarningTakeoverProvider warningsV4Completed]
// Type encoding: v16@0:8
// Implementation: 0x1051185a8

// -[SCInAppWarningTakeoverProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051185ec

@end
