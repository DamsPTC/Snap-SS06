// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecoverPasswordPhoneEntryBusinessLogic
// Superclass: SCBusinessLogic
// Address: 0x112b18ce8

@interface SCRecoverPasswordPhoneEntryBusinessLogic

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRecoverPasswordPhoneEntryBusinessLogic initWithDelegate:phoneEntry:passwordResetInitiator:usernameOrEmail:logger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106b52dd4

// -[SCRecoverPasswordPhoneEntryBusinessLogic begin]
// Type encoding: v16@0:8
// Implementation: 0x106b52f34

// -[SCRecoverPasswordPhoneEntryBusinessLogic viewModel]
// Type encoding: @16@0:8
// Implementation: 0x106b52f88

// -[SCRecoverPasswordPhoneEntryBusinessLogic handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b52fc0

// -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidSubmitPhoneNumber:withCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106b531cc

// -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidUpdatePhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b53218

// -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidSelectPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b5321c

// -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntrySuggestionPromptDidSelectWithSuggestionType:accept:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106b53254

// -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidSelectRerouteToLogIn:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b53258

// -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidSelectCountryPicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b5325c

// -[SCRecoverPasswordPhoneEntryBusinessLogic phoneEntryDidEndCountryPicker]
// Type encoding: v16@0:8
// Implementation: 0x106b53260

// -[SCRecoverPasswordPhoneEntryBusinessLogic _initiatePasswordReset:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106b53264

// -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetInitiationFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b53834

// -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetChallengedCOS:authSessionPayload:clientNetworkRequestId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106b53898

// -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetInitiationSucceeded:codeSentViaSMS:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106b53968

// -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetEncounteredUsernameChallengeWithMaskedUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b53a18

// -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetEncounteredUserChallengeWithChallengePrompts:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b53ac4

// -[SCRecoverPasswordPhoneEntryBusinessLogic _passwordResetEncounteredMagicCode]
// Type encoding: v16@0:8
// Implementation: 0x106b53b70

// -[SCRecoverPasswordPhoneEntryBusinessLogic _1TLCheckboxToggled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b53bf0

// -[SCRecoverPasswordPhoneEntryBusinessLogic .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b53c30

@end
