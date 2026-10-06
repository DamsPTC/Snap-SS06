// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVerificationFeatureLogger
// Superclass: NSObject
// Address: 0x112a2d6d0

@interface SCVerificationFeatureLogger


// -[SCVerificationFeatureLogger initWithRegistrationUserNotTrackedLogger:requestManager:loginInfoRepository:unverifiedUserId:verificationFlowContext:]
// Type encoding: @56@0:8@16@24@32@40q48
// Implementation: 0x10537f348

// -[SCVerificationFeatureLogger logRegistrationUserEmailPageviewWithVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x10537f430

// -[SCVerificationFeatureLogger logFeatureEmailCorrectionUse]
// Type encoding: v16@0:8
// Implementation: 0x10537f480

// -[SCVerificationFeatureLogger logRegistrationUserEmailSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537f4bc

// -[SCVerificationFeatureLogger logRegistrationUserEmailFailWithLocalValidationError:emailDomain:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10537f520

// -[SCVerificationFeatureLogger logUserActionOnEmailRerouteDialogWithAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x10537f620

// -[SCVerificationFeatureLogger logUserSetEmail:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537f670

// -[SCVerificationFeatureLogger logResponseChangeEmail:success:emailDomain:]
// Type encoding: v36@0:8q16B24@28
// Implementation: 0x10537f6d4

// -[SCVerificationFeatureLogger logRegistrationUserPhoneAttemptWithVersion:context:attemptCount:phoneNumberCountryCode:]
// Type encoding: v48@0:8q16@24Q32@40
// Implementation: 0x10537f760

// -[SCVerificationFeatureLogger logResponseSetPhone:success:phoneNumberCountryCode:]
// Type encoding: v36@0:8q16B24@28
// Implementation: 0x10537f820

// -[SCVerificationFeatureLogger logRegistrationUserFocusOnCountry:country:withVersion:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10537f8ac

// -[SCVerificationFeatureLogger logRegistrationUserPhonePageviewWithVersion:context:sourcePageType:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x10537f95c

// -[SCVerificationFeatureLogger logRegistrationUserPhoneSkipWithVersion:context:phoneNumberCountryCode:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10537f9e0

// -[SCVerificationFeatureLogger logUserSetPhoneWithPhoneNumberCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537fa94

// -[SCVerificationFeatureLogger logRegistrationUserPhoneVerifyCodeResend:attemptCount:withVersion:]
// Type encoding: v40@0:8@16Q24q32
// Implementation: 0x10537fb40

// -[SCVerificationFeatureLogger logRegistrationUserPhoneAttemptWithCode:withVersion:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10537fbe0

// -[SCVerificationFeatureLogger logRegistrationUserPhoneSuccessWithContext:attemptCount:hasResentCode:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x10537fc68

// -[SCVerificationFeatureLogger logUserVerifyPhone]
// Type encoding: v16@0:8
// Implementation: 0x10537fd14

// -[SCVerificationFeatureLogger logResponseVerifyPhone:success:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x10537fda0

// -[SCVerificationFeatureLogger logUserPhoneVerificationPhoneSuccess:hasResentCode:sourcePageType:]
// Type encoding: v36@0:8Q16B24q28
// Implementation: 0x10537fe00

// -[SCVerificationFeatureLogger logRegistrationUserPhoneFailWithVersion:context:attemptCount:hasResentCode:]
// Type encoding: v44@0:8q16@24Q32B40
// Implementation: 0x10537fe78

// -[SCVerificationFeatureLogger logRegistrationUserSuccess:]
// Type encoding: v24@0:8q16
// Implementation: 0x10537ff24

// -[SCVerificationFeatureLogger logFeatureFieldAutofill:]
// Type encoding: v24@0:8q16
// Implementation: 0x10538002c

// -[SCVerificationFeatureLogger _updateUserSignatureForVerificationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10538007c

// -[SCVerificationFeatureLogger logUserActionOnSuggestedPhoneNumberDialogWithSuggestionType:accept:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1053800c0

// -[SCVerificationFeatureLogger logUserActionOnPhoneRerouteDialogWithAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053801cc

// -[SCVerificationFeatureLogger logUserSelectsEmailDomain:]
// Type encoding: v24@0:8@16
// Implementation: 0x10538021c

// -[SCVerificationFeatureLogger logRegistrationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105380280

// -[SCVerificationFeatureLogger logPageView:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053802e8

// -[SCVerificationFeatureLogger logRegistrationFlowEvent:pageType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105380334

// -[SCVerificationFeatureLogger logInitialPhoneInputWithPhoneNumberCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x105380388

// -[SCVerificationFeatureLogger _setContextForVerificationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053803ec

// -[SCVerificationFeatureLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053804b0

@end
