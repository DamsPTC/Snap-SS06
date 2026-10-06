// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOdlvEventLogger
// Superclass: NSObject
// Address: 0x112a2bf88

@interface SCOdlvEventLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOdlvEventLogger initWithStateTransitionMomentLogger:userNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:lastLoginInfoRepository:loginSessionService:deviceInfoProvider:authenticationSessionInfoProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105352210

// -[SCOdlvEventLogger logOdlvLandingPageView]
// Type encoding: v16@0:8
// Implementation: 0x105352410

// -[SCOdlvEventLogger logOdlvRequestOtp:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105352440

// -[SCOdlvEventLogger logOdlvRequestOtpSuccess:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1053524e0

// -[SCOdlvEventLogger logOdlvRequestOtpFailure:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10535255c

// -[SCOdlvEventLogger logOdlvVerifyingPageView]
// Type encoding: v16@0:8
// Implementation: 0x105352588

// -[SCOdlvEventLogger logOdlvUnableToVerify:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1053525b8

// -[SCOdlvEventLogger logOdlvLogin]
// Type encoding: v16@0:8
// Implementation: 0x105352618

// -[SCOdlvEventLogger logOdlvLoginSuccess:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105352654

// -[SCOdlvEventLogger logOdlvLoginFailure:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1053526c8

// -[SCOdlvEventLogger _toOneTimePasscodeTypeFromLoginOdlvOtpType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x1053526f4

// -[SCOdlvEventLogger _logPageview:]
// Type encoding: v24@0:8q16
// Implementation: 0x105352708

// -[SCOdlvEventLogger _logSuccess:otpType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105352798

// -[SCOdlvEventLogger _logFailure:otpType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1053527f8

// -[SCOdlvEventLogger _logGrapheneWithPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x105352858

// -[SCOdlvEventLogger _logFsnJanusRolloutGrapheneWithEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105352978

// -[SCOdlvEventLogger _logBlizzardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105352a94

// -[SCOdlvEventLogger _getCurrentPageFrom:]
// Type encoding: q24@0:8q16
// Implementation: 0x105352bac

// -[SCOdlvEventLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105352bc8

@end
