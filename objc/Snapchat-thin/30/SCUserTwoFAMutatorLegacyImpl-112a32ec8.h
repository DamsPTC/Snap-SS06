// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserTwoFAMutatorLegacyImpl
// Superclass: NSObject
// Address: 0x112a32ec8

@interface SCUserTwoFAMutatorLegacyImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserTwoFAMutatorLegacyImpl initWithTwoFAManager:userNetworkServices:deviceIdManagerLazy:updatesPublisher:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1053e05ec

// -[SCUserTwoFAMutatorLegacyImpl updateTwoFAStatus:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053e06e8

// -[SCUserTwoFAMutatorLegacyImpl forgetAllDevices:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053e0724

// -[SCUserTwoFAMutatorLegacyImpl forgetOneDevice:onComplete:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1053e094c

// -[SCUserTwoFAMutatorLegacyImpl sendSmsTwoFACode:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053e0afc

// -[SCUserTwoFAMutatorLegacyImpl enableSmsTwoFAWithVerificationCode:onComplete:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1053e0c60

// -[SCUserTwoFAMutatorLegacyImpl enableOtpTwoFAWithVerificationCode:otpSecret:onComplete:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1053e0f10

// -[SCUserTwoFAMutatorLegacyImpl disableSmsTwoFA:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053e11d8

// -[SCUserTwoFAMutatorLegacyImpl disableOtpTwoFA:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053e1420

// -[SCUserTwoFAMutatorLegacyImpl generateRecoveryCodeWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053e1668

// -[SCUserTwoFAMutatorLegacyImpl _persistState]
// Type encoding: v16@0:8
// Implementation: 0x1053e17d0

// -[SCUserTwoFAMutatorLegacyImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053e1838

@end
