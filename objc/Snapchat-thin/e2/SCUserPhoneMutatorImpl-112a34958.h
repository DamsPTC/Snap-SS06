// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserPhoneMutatorImpl
// Superclass: NSObject
// Address: 0x112a34958

@interface SCUserPhoneMutatorImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserPhoneMutatorImpl initWithPhoneNumberUpdatesPublisher:tentativePhoneNumberUpdatesPublisher:authenticatedPhoneService:twoFAServices:phoneNumberProvider:tentativePhoneNumberProvider:settingsEventLogger:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1053f99d0

// -[SCUserPhoneMutatorImpl beginUserPhoneMutationWithMobile:countryCode:verificationMethod:isReverifying:isForResend:verificationContext:onComplete:]
// Type encoding: v64@0:8@16@24Q32B40B44Q48@?56
// Implementation: 0x1053f9b4c

// -[SCUserPhoneMutatorImpl finishUserPhoneMutationWithCode:verificationType:onComplete:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x1053f9f34

// -[SCUserPhoneMutatorImpl _updatePhoneNumberSuccess:verifyResponse:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053fa350

// -[SCUserPhoneMutatorImpl _verifyPhoneNumberSuccess:verifyResponse:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053fa47c

// -[SCUserPhoneMutatorImpl _updateOrVerifySuccess:verifyResponse:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053fa5c8

// -[SCUserPhoneMutatorImpl _publishUpdatedPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053fa71c

// -[SCUserPhoneMutatorImpl _publishUpdatedTentativePhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053fa724

// -[SCUserPhoneMutatorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053fa72c

@end
