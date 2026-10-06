// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppLoginResultDetail
// Superclass: NSObject
// Address: 0x112b1a188

@interface SCAppLoginResultDetail


// -[SCAppLoginResultDetail copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106b7a0e0

// -[SCAppLoginResultDetail hash]
// Type encoding: Q16@0:8
// Implementation: 0x106b7a104

// -[SCAppLoginResultDetail internalInit]
// Type encoding: @16@0:8
// Implementation: 0x106b7a1c8

// -[SCAppLoginResultDetail isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b7a20c

// -[SCAppLoginResultDetail matchSuccess:reactivationRequired:accountLockedError:redirectToRegistration:loginOptionsNeedUpdate:challenged:error:]
// Type encoding: v72@0:8@?16@?24@?32@?40@?48@?56@?64
// Implementation: 0x106b7a364

// -[SCAppLoginResultDetail .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b7a504

// +[SCAppLoginResultDetail accountLockedErrorWithMessage:isAppealable:appealableLockData:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x106b79dac

// +[SCAppLoginResultDetail challengedWithChallengeData:authSessionPayload:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106b79e54

// +[SCAppLoginResultDetail errorWithMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b79eec

// +[SCAppLoginResultDetail loginOptionsNeedUpdateWithLoginOptionsData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b79f58

// +[SCAppLoginResultDetail reactivationRequiredWithStatus:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b79fc4

// +[SCAppLoginResultDetail redirectToRegistration]
// Type encoding: @16@0:8
// Implementation: 0x106b7a030

// +[SCAppLoginResultDetail successWithBootstrapData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b7a07c

@end
