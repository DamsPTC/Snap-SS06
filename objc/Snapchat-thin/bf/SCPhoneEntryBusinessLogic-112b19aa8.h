// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPhoneEntryBusinessLogic
// Superclass: SCBusinessLogic
// Address: 0x112b19aa8

@interface SCPhoneEntryBusinessLogic

// Property: countryCode; attributes: T@"NSString",R,N,V_countryCode
// Property: delegate; attributes: T@"<SCPhoneEntryDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPhoneEntryBusinessLogic initWithPhoneNumber:phoneNumberFormatter:phoneEntryContext:userInitialInputLogger:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106b6afe4

// -[SCPhoneEntryBusinessLogic setCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b6b1dc

// -[SCPhoneEntryBusinessLogic viewModel]
// Type encoding: @16@0:8
// Implementation: 0x106b6b258

// -[SCPhoneEntryBusinessLogic handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b6b364

// -[SCPhoneEntryBusinessLogic submitPhone]
// Type encoding: v16@0:8
// Implementation: 0x106b6b720

// -[SCPhoneEntryBusinessLogic countryCodePickerExited]
// Type encoding: v16@0:8
// Implementation: 0x106b6b8b8

// -[SCPhoneEntryBusinessLogic countryCodePickerCompletedWithCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b6b8ec

// -[SCPhoneEntryBusinessLogic handlePhoneEntryDidSubmitCompletedWithErrorMessage:errorAction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b6b94c

// -[SCPhoneEntryBusinessLogic _phoneSubmitSucceeded]
// Type encoding: v16@0:8
// Implementation: 0x106b6bb2c

// -[SCPhoneEntryBusinessLogic _phoneSubmitWithVerifiedNumberAndShowRerouteToLoginDiaLog]
// Type encoding: v16@0:8
// Implementation: 0x106b6bb7c

// -[SCPhoneEntryBusinessLogic _phoneSubmitFailedWithPhoneNumberSuggestionInfo:errorMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b6bbcc

// -[SCPhoneEntryBusinessLogic _phoneSubmitFailedWithErrorAction:errorMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b6bc7c

// -[SCPhoneEntryBusinessLogic _phoneSubmitFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b6bd2c

// -[SCPhoneEntryBusinessLogic _phoneSubmitReturnedLoginCode]
// Type encoding: v16@0:8
// Implementation: 0x106b6bd9c

// -[SCPhoneEntryBusinessLogic _getSortedPhoneCountryCodes]
// Type encoding: @16@0:8
// Implementation: 0x106b6bdec

// -[SCPhoneEntryBusinessLogic _handlePhoneDidChange:newPhone:range:]
// Type encoding: v48@0:8@16@24{_NSRange=QQ}32
// Implementation: 0x106b6bec8

// -[SCPhoneEntryBusinessLogic _handleCountryCodeUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b6bf88

// -[SCPhoneEntryBusinessLogic _handleSubmit]
// Type encoding: v16@0:8
// Implementation: 0x106b6c02c

// -[SCPhoneEntryBusinessLogic _handleCountryCodeDidChange:newCountryCode:range:]
// Type encoding: v48@0:8@16@24{_NSRange=QQ}32
// Implementation: 0x106b6c0a0

// -[SCPhoneEntryBusinessLogic _handleUpdatePhoneNumberWithSuggestedPhoneNumber]
// Type encoding: v16@0:8
// Implementation: 0x106b6c1b8

// -[SCPhoneEntryBusinessLogic _handleCancelUpdateSuggestedPhoneNumber]
// Type encoding: v16@0:8
// Implementation: 0x106b6c304

// -[SCPhoneEntryBusinessLogic _handleExitErrorActionDialogToUpdatePhoneNumber]
// Type encoding: v16@0:8
// Implementation: 0x106b6c3a4

// -[SCPhoneEntryBusinessLogic _handleDismissRerouteToLoginDialog]
// Type encoding: v16@0:8
// Implementation: 0x106b6c3f4

// -[SCPhoneEntryBusinessLogic _getFormattedCountryName]
// Type encoding: @16@0:8
// Implementation: 0x106b6c444

// -[SCPhoneEntryBusinessLogic _getFormattedCountryCode]
// Type encoding: @16@0:8
// Implementation: 0x106b6c484

// -[SCPhoneEntryBusinessLogic _getFormattedSuggestedPhoneNumber]
// Type encoding: @16@0:8
// Implementation: 0x106b6c4dc

// -[SCPhoneEntryBusinessLogic _formatCurrentPhoneNumberWithLastValidCountryCode]
// Type encoding: v16@0:8
// Implementation: 0x106b6c548

// -[SCPhoneEntryBusinessLogic _processPhoneNumberFormatResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b6c5a8

// -[SCPhoneEntryBusinessLogic _emitUpdatesToViewModelAndDelegate]
// Type encoding: v16@0:8
// Implementation: 0x106b6c800

// -[SCPhoneEntryBusinessLogic _setupDynamicPhoneLengthLimit]
// Type encoding: v16@0:8
// Implementation: 0x106b6c894

// -[SCPhoneEntryBusinessLogic _logRegistrationUserInitialInputIfNeededWithField:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b6cac8

// -[SCPhoneEntryBusinessLogic delegate]
// Type encoding: @16@0:8
// Implementation: 0x106b6cb50

// -[SCPhoneEntryBusinessLogic setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b6cb70

// -[SCPhoneEntryBusinessLogic countryCode]
// Type encoding: @16@0:8
// Implementation: 0x106b6cb84

// -[SCPhoneEntryBusinessLogic .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b6cb94

@end
