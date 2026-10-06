// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiInAppTakeoverProvider
// Superclass: NSObject
// Address: 0x112a12268

@interface SCBitmojiInAppTakeoverProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiInAppTakeoverProvider initWithCircumstanceEngine:featureSettings:bitmojiAvatarBuilderScopeExposer:avatarProvider:valdiRuntimeProvider:blizzardLogger:cofStore:fstCampaignDataProvider:additionalMetricsData:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10502dd40

// -[SCBitmojiInAppTakeoverProvider canShowCampaign:]
// Type encoding: B24@0:8@16
// Implementation: 0x10502df10

// -[SCBitmojiInAppTakeoverProvider showCampaign:uiContainer:onComplete:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10502df58

// -[SCBitmojiInAppTakeoverProvider _showBitmojiTakeoverView]
// Type encoding: v16@0:8
// Implementation: 0x10502e118

// -[SCBitmojiInAppTakeoverProvider _showBitmojiAvatarBuilderFlow]
// Type encoding: v16@0:8
// Implementation: 0x10502e16c

// -[SCBitmojiInAppTakeoverProvider bitmojiCreateFlowDidCompleteWithAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10502e1b8

// -[SCBitmojiInAppTakeoverProvider acceptClicked]
// Type encoding: v16@0:8
// Implementation: 0x10502e1f8

// -[SCBitmojiInAppTakeoverProvider _dismissTakeoverVCAndStartAvatarBuilder]
// Type encoding: v16@0:8
// Implementation: 0x10502e2ac

// -[SCBitmojiInAppTakeoverProvider cancelClicked]
// Type encoding: v16@0:8
// Implementation: 0x10502e384

// -[SCBitmojiInAppTakeoverProvider _dismissBitmojiTakeoverViewAndEndFlow]
// Type encoding: v16@0:8
// Implementation: 0x10502e438

// -[SCBitmojiInAppTakeoverProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10502e468

@end
