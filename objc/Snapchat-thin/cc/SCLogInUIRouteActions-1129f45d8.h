// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLogInUIRouteActions
// Superclass: NSObject
// Address: 0x1129f45d8

@interface SCLogInUIRouteActions

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLogInUIRouteActions initWithUIContainer:logInServices:networkConnectivityMonitor:recoverPasswordScopeExposer:privacyPolicyViewFactory:channelVerificationScopeExposer:odlvScopeExposer:twoFAScopeExposer:countryCodePickerScopeExposer:countryCodePickerScopeServices:webBrowsingScopeExposer:inAppAppealScopeExposer:passkeyLoginScopeExposer:transitionMomentLogger:loginLogger:magicCodeLogger:multiSourceCountryProvider:logInInterceptorsCheck:logInRepository:applicationLifecycleEvents:circumstanceEngine:unretryableErrorAlertPresenter:isFromPhoneEmailFirstPage:passkeyLoginEnabled:currentPageTracker:oAuthLoginABRetriever:cos:]
// Type encoding: @228@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184B192@?196@204@212@220
// Implementation: 0x104ce0ebc

// -[SCLogInUIRouteActions showCredentialsEntryScreenV10:usernameOrEmail:phoneNumber:password:reactivationStatus:reactivationAccountIdentifier:enteredPageBefore:]
// Type encoding: v72@0:8@16@24@32@40@48@56^B64
// Implementation: 0x104ce1590

// -[SCLogInUIRouteActions showChannelVerification:verification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ce1a04

// -[SCLogInUIRouteActions removeChannelVerification]
// Type encoding: v16@0:8
// Implementation: 0x104ce1a90

// -[SCLogInUIRouteActions showOdlv:challenge:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ce1ac8

// -[SCLogInUIRouteActions removeOdlv]
// Type encoding: v16@0:8
// Implementation: 0x104ce1b54

// -[SCLogInUIRouteActions showTwoFAVerification:delegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ce1b8c

// -[SCLogInUIRouteActions removeTwoFAVerification]
// Type encoding: v16@0:8
// Implementation: 0x104ce1c18

// -[SCLogInUIRouteActions showWebBrowserWithUrl:browsingDelegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ce1c50

// -[SCLogInUIRouteActions dismissWebBrowser]
// Type encoding: v16@0:8
// Implementation: 0x104ce1e20

// -[SCLogInUIRouteActions showMagicCodeEntryScreenWithAdaptor:usernameOrEmail:optedIn1TL:delegate:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x104ce1e40

// -[SCLogInUIRouteActions removeMagicCodeEntryScreen]
// Type encoding: v16@0:8
// Implementation: 0x104ce1fe8

// -[SCLogInUIRouteActions cancelMagicCodeEntryWithErrorMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce2030

// -[SCLogInUIRouteActions showPasswordRecoveryWithDelegate:usernameOrEmail:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ce20b4

// -[SCLogInUIRouteActions removePasswordRecovery]
// Type encoding: v16@0:8
// Implementation: 0x104ce213c

// -[SCLogInUIRouteActions cancelPasswordRecovery]
// Type encoding: v16@0:8
// Implementation: 0x104ce2174

// -[SCLogInUIRouteActions showAppealWithDelegate:appealableLockData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ce2194

// -[SCLogInUIRouteActions removeInAppAppeal]
// Type encoding: v16@0:8
// Implementation: 0x104ce2240

// -[SCLogInUIRouteActions showCountryCodePickerWithDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce2290

// -[SCLogInUIRouteActions removeCountryCodePicker]
// Type encoding: v16@0:8
// Implementation: 0x104ce23e0

// -[SCLogInUIRouteActions startPasskeyLoginWithDelegate:trigger:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104ce245c

// -[SCLogInUIRouteActions _startPasskeyLoginWithDelegate:trigger:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104ce25cc

// -[SCLogInUIRouteActions removePasskeyLogin]
// Type encoding: v16@0:8
// Implementation: 0x104ce26dc

// -[SCLogInUIRouteActions showCOSChallenge:authSessionPayload:clientRequestId:delegate:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104ce26fc

// -[SCLogInUIRouteActions _createModalUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x104ce27c8

// -[SCLogInUIRouteActions _getPhoneNumberDefaultFormatter]
// Type encoding: @16@0:8
// Implementation: 0x104ce2820

// -[SCLogInUIRouteActions .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ce287c

@end
