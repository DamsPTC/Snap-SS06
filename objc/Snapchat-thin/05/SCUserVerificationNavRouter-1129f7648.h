// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserVerificationNavRouter
// Superclass: NSObject
// Address: 0x1129f7648

@interface SCUserVerificationNavRouter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserVerificationNavRouter initWithUIContainer:emailService:phoneService:userVerificationEventLogger:webBrowsingScopeExposer:registrationLogger:circumstanceEngine:phoneCodeScopeExposer:phoneCodeScopeServices:countryCodePickerScopeExposer:countryCodePickerScopeServices:codeVerificationScopeExposer:ngoCodeVerificationScopeServices:shouldShowSwitchToVoiceOption:multiSourceCountryProvider:currentPageTracker:]
// Type encoding: @140@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112B120@124@132
// Implementation: 0x104d42530

// -[SCUserVerificationNavRouter showEmailPageWithEmail:viewConfig:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d42894

// -[SCUserVerificationNavRouter showPhoneEntryPageWithRegistrationPhoneNumber:viewConfig:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d42a9c

// -[SCUserVerificationNavRouter showPhoneVerifyPageWithRegistrationPhoneNumber:viewConfig:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d42dd4

// -[SCUserVerificationNavRouter removePhoneVerifyPage]
// Type encoding: v16@0:8
// Implementation: 0x104d42ff4

// -[SCUserVerificationNavRouter showNGOCodeVerificationPage:service:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d4308c

// -[SCUserVerificationNavRouter removeNGOCodeVerificationPage]
// Type encoding: v16@0:8
// Implementation: 0x104d43390

// -[SCUserVerificationNavRouter showExitConfirmationWithDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d4340c

// -[SCUserVerificationNavRouter dismissExitConfirmationIfVisible]
// Type encoding: v16@0:8
// Implementation: 0x104d43500

// -[SCUserVerificationNavRouter showCountryCodePickerWithDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d43540

// -[SCUserVerificationNavRouter removeCountryCodePicker]
// Type encoding: v16@0:8
// Implementation: 0x104d4364c

// -[SCUserVerificationNavRouter showWebBrowserWithUrl:browsingDelegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d436c8

// -[SCUserVerificationNavRouter dismissWebBrowser]
// Type encoding: v16@0:8
// Implementation: 0x104d43790

// -[SCUserVerificationNavRouter _showWebBrowserWithUrl:browsingDelegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d4380c

// -[SCUserVerificationNavRouter _exitConfirmationAlertWithDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d439e0

// -[SCUserVerificationNavRouter _shouldEnablePhoneHint]
// Type encoding: B16@0:8
// Implementation: 0x104d43ca8

// -[SCUserVerificationNavRouter _phonePageCopy]
// Type encoding: @16@0:8
// Implementation: 0x104d43cc0

// -[SCUserVerificationNavRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d43d44

@end
