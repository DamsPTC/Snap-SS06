// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedProfileLoggingService
// Superclass: NSObject
// Address: 0x112b79c28

@interface SCUnifiedProfileLoggingService

// Property: skipOpenCloseLogging; attributes: TB,N,V_skipOpenCloseLogging
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnifiedProfileLoggingService initWithProfileType:sessionId:openningData:grapheneServices:userBlizzardServices:userInfoServices:sourceSessionId:isFlatland:backgroundsFeatureStatusProvider:bitmojiStyle:]
// Type encoding: @92@0:8Q16@24@32@40@48@56@64B72@76q84
// Implementation: 0x107cdf4f0

// -[SCUnifiedProfileLoggingService initWithProfileType:sessionId:openningData:grapheneServices:userBlizzardServices:sourceSessionId:otherUserId:snapchatterServices:userInfoServices:isFlatland:backgroundsFeatureStatusProvider:actionmojiId:circumstanceEngine:bitmojiStyle:]
// Type encoding: @124@0:8Q16@24@32@40@48@56@64@72@80B88@92@100@108q116
// Implementation: 0x107cdf538

// -[SCUnifiedProfileLoggingService logActionWithName:sourcePageType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107cdf834

// -[SCUnifiedProfileLoggingService didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107cdf83c

// -[SCUnifiedProfileLoggingService executeWithGatekeeperCheck:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107cdfcb4

// -[SCUnifiedProfileLoggingService isAllowedToProceedOpenCloseEvents]
// Type encoding: B16@0:8
// Implementation: 0x107cdfcfc

// -[SCUnifiedProfileLoggingService skipOpenCloseLogging]
// Type encoding: B16@0:8
// Implementation: 0x107cdfd0c

// -[SCUnifiedProfileLoggingService setSkipOpenCloseLogging:]
// Type encoding: v20@0:8B16
// Implementation: 0x107cdfd14

// -[SCUnifiedProfileLoggingService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107cdfd1c

@end
