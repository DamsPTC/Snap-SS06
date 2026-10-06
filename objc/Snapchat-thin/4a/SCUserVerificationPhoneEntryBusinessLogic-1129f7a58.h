// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserVerificationPhoneEntryBusinessLogic
// Superclass: SCBusinessLogic
// Address: 0x1129f7a58

@interface SCUserVerificationPhoneEntryBusinessLogic

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserVerificationPhoneEntryBusinessLogic initWithPhoneNumber:delegate:phoneEntry:phoneService:logger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104d4ce08

// -[SCUserVerificationPhoneEntryBusinessLogic begin]
// Type encoding: v16@0:8
// Implementation: 0x104d4cf54

// -[SCUserVerificationPhoneEntryBusinessLogic handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d4cfa4

// -[SCUserVerificationPhoneEntryBusinessLogic _skip]
// Type encoding: v16@0:8
// Implementation: 0x104d4d13c

// -[SCUserVerificationPhoneEntryBusinessLogic _phoneSubmitSucceededWithNumber:phoneVerifyToken:authSessionPayload:needsPhoneVerification:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x104d4d1d4

// -[SCUserVerificationPhoneEntryBusinessLogic _phoneSubmitFailedWithNumber:errorMessage:errorAction:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104d4d2d8

// -[SCUserVerificationPhoneEntryBusinessLogic _magicCodeAdaptorFromErrorAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d4d418

// -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidSubmitPhoneNumber:withCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104d4d554

// -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidUpdatePhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d4db68

// -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidSelectPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d4dc28

// -[SCUserVerificationPhoneEntryBusinessLogic phoneEntrySuggestionPromptDidSelectWithSuggestionType:accept:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104d4dc38

// -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidSelectRerouteToLogIn:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d4dc48

// -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidSelectCountryPicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d4dcd0

// -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidEndCountryPicker]
// Type encoding: v16@0:8
// Implementation: 0x104d4dd28

// -[SCUserVerificationPhoneEntryBusinessLogic _logInitialPhoneInputIfNeededWithNewPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d4dd5c

// -[SCUserVerificationPhoneEntryBusinessLogic .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d4ded0

@end
