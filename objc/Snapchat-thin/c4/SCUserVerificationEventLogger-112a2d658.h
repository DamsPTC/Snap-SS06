// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserVerificationEventLogger
// Superclass: NSObject
// Address: 0x112a2d658

@interface SCUserVerificationEventLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserVerificationEventLogger initWithVerificationFeatureLogger:signupTransitionLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10537eaf8

// -[SCUserVerificationEventLogger logEmailBegin]
// Type encoding: v16@0:8
// Implementation: 0x10537ebb0

// -[SCUserVerificationEventLogger logSuggestedEmailSelected]
// Type encoding: v16@0:8
// Implementation: 0x10537ebe0

// -[SCUserVerificationEventLogger logEmailRerouteDialogWithAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x10537ebe8

// -[SCUserVerificationEventLogger logRegistrationUserEmailFail:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537ebf0

// -[SCUserVerificationEventLogger logSubmitEmail]
// Type encoding: v16@0:8
// Implementation: 0x10537ec00

// -[SCUserVerificationEventLogger logEmailSubmitted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537ec3c

// -[SCUserVerificationEventLogger logEmailSubmitFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537ecc4

// -[SCUserVerificationEventLogger logUserSelectsEmailDomain:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537ed20

// -[SCUserVerificationEventLogger logPhoneEntryBegin]
// Type encoding: v16@0:8
// Implementation: 0x10537ed28

// -[SCUserVerificationEventLogger logPhoneNumberAutoFill]
// Type encoding: v16@0:8
// Implementation: 0x10537edc8

// -[SCUserVerificationEventLogger logEmailAutoFill]
// Type encoding: v16@0:8
// Implementation: 0x10537edd4

// -[SCUserVerificationEventLogger logPhoneEntryContinue]
// Type encoding: v16@0:8
// Implementation: 0x10537ede0

// -[SCUserVerificationEventLogger logCountryCodePageView]
// Type encoding: v16@0:8
// Implementation: 0x10537edec

// -[SCUserVerificationEventLogger logSubmitPhoneWithPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537edf8

// -[SCUserVerificationEventLogger logSkipPhoneEntryWithPhoneNumberCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537eed0

// -[SCUserVerificationEventLogger logPhoneSubmissionSuccessWithPhoneNumberCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537eee8

// -[SCUserVerificationEventLogger logPhoneSubmissionFailureWithPhoneNumberCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537ef64

// -[SCUserVerificationEventLogger logSuggestedPhoneNumberDialogWithSuggestionType:accept:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10537ef84

// -[SCUserVerificationEventLogger logPhoneRerouteDialogWithAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x10537ef8c

// -[SCUserVerificationEventLogger logPhoneVerificationStartWithAutofill:]
// Type encoding: v20@0:8B16
// Implementation: 0x10537ef94

// -[SCUserVerificationEventLogger logPhoneVerificationSuccessWithAutofill:]
// Type encoding: v20@0:8B16
// Implementation: 0x10537f030

// -[SCUserVerificationEventLogger logPhoneVerificationFailure]
// Type encoding: v16@0:8
// Implementation: 0x10537f0d4

// -[SCUserVerificationEventLogger logResendCode]
// Type encoding: v16@0:8
// Implementation: 0x10537f114

// -[SCUserVerificationEventLogger logVerificationCodeAutoFill]
// Type encoding: v16@0:8
// Implementation: 0x10537f120

// -[SCUserVerificationEventLogger logPageViewAndReach:]
// Type encoding: v24@0:8q16
// Implementation: 0x10537f12c

// -[SCUserVerificationEventLogger logRegistrationFlowEvent:pageType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10537f134

// -[SCUserVerificationEventLogger logRegistrationUserSuccess:]
// Type encoding: v24@0:8q16
// Implementation: 0x10537f13c

// -[SCUserVerificationEventLogger logInitialPhoneInputWithPhoneNumberCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537f180

// -[SCUserVerificationEventLogger logInterruptionWithState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537f188

// -[SCUserVerificationEventLogger _logInterruptionWithPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x10537f2fc

// -[SCUserVerificationEventLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10537f30c

@end
