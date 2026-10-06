// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTwoFAFeatureUIRouteActions
// Superclass: NSObject
// Address: 0x1129f4d08

@interface SCTwoFAFeatureUIRouteActions

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTwoFAFeatureUIRouteActions initWithParentUIContainer:logInServices:loginStateTransitionLogger:twoFALogger:twoFAAlertPresenter:currentPageTracker:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104cef788

// -[SCTwoFAFeatureUIRouteActions showCredentials2FASMSVerificationScreen:twoFAChallenge:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104cef900

// -[SCTwoFAFeatureUIRouteActions showCredentials2FAOTPVerificationScreen:smsEnabled:twoFAChallenge:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x104cefbdc

// -[SCTwoFAFeatureUIRouteActions showCredentialsCOSSMS2FAVerificationScreen:phoneNumber:isSwitchable:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x104cefdd8

// -[SCTwoFAFeatureUIRouteActions showCredentialsCOSOTP2FAVerificationScreen:isSwitchable:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104ceffc8

// -[SCTwoFAFeatureUIRouteActions presentRecoveryCodeUsedAlertWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104cf00b0

// -[SCTwoFAFeatureUIRouteActions .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cf0134

@end
