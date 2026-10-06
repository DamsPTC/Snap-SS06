// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTwoFALogger
// Superclass: NSObject
// Address: 0x1129f4a88

@interface SCTwoFALogger


// -[SCTwoFALogger initWithUserNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:lastLoginInfoRepository:loginSessionService:deviceInfoProvider:authenticationSessionInfoProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104ce9808

// -[SCTwoFALogger logLoginTwoFactorPageview:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ce9a54

// -[SCTwoFALogger logLoginTwoFactorSuccess:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ce9af4

// -[SCTwoFALogger logLoginTwoFactorFailure:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ce9b54

// -[SCTwoFALogger _logBlizzardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce9ba4

// -[SCTwoFALogger _logGrapheneWithPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ce9c54

// -[SCTwoFALogger _logFsnJanusRolloutGrapheneWithEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce9d74

// -[SCTwoFALogger _getCurrentPageFrom:]
// Type encoding: q24@0:8q16
// Implementation: 0x104ce9e90

// -[SCTwoFALogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ce9eac

@end
