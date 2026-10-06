// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTwoFAWorkflow
// Superclass: NSObject
// Address: 0x1129f4d58

@interface SCTwoFAWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTwoFAWorkflow initWithContext:router:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104cf01c4

// -[SCTwoFAWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104cf0288

// -[SCTwoFAWorkflow showCredentials2FASMSVerificationScreenWithChallenge:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cf0534

// -[SCTwoFAWorkflow credentials2FAOTPVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x104cf0664

// -[SCTwoFAWorkflow credentials2FAOTPEntryFinishedWithLoginSuccess:recoveryCodeUsed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104cf0690

// -[SCTwoFAWorkflow credentials2FASMSVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x104cf0694

// -[SCTwoFAWorkflow credentials2FASMSEntryFinishedWithLoginSuccess:recoveryCodeUsed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104cf07d0

// -[SCTwoFAWorkflow credentials2FACOSSMS2FASubmitCode:wasAutofilled:rememberDevice:success:failure:]
// Type encoding: v48@0:8@16B24B28@?32@?40
// Implementation: 0x104cf07d4

// -[SCTwoFAWorkflow credentials2FACOSSMS2FAResendCodeWithSuccess:failure:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x104cf0900

// -[SCTwoFAWorkflow credentials2FACOSSMS2FAEntryFinishedWithRecoveryCodeUsed:]
// Type encoding: v20@0:8B16
// Implementation: 0x104cf09fc

// -[SCTwoFAWorkflow credentials2FACOSSMS2FAVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x104cf0a30

// -[SCTwoFAWorkflow credentials2FACOSOTPSubmitCode:wasAutofilled:rememberDevice:success:failure:]
// Type encoding: v48@0:8@16B24B28@?32@?40
// Implementation: 0x104cf0a5c

// -[SCTwoFAWorkflow credentials2FACOSOTPSwitchToSMSWithSuccess:failure:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x104cf0b88

// -[SCTwoFAWorkflow credentials2FACOSOTPEntryFinishedWithRecoveryCodeUsed:]
// Type encoding: v20@0:8B16
// Implementation: 0x104cf0c84

// -[SCTwoFAWorkflow credentials2FACOSOTPVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x104cf0cb8

// -[SCTwoFAWorkflow _showOtpScreenWithChallenge:smsEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104cf0ce4

// -[SCTwoFAWorkflow _showSmsScreenWithChallenge:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cf0d8c

// -[SCTwoFAWorkflow _showCOSSmsScreenWithObfuscatedPhone:isSwitchable:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104cf0e28

// -[SCTwoFAWorkflow _showCOSOtpScreenWithIsSwitchable:]
// Type encoding: v20@0:8B16
// Implementation: 0x104cf0ed0

// -[SCTwoFAWorkflow _twoFAFinishedWithLoginSuccess:recoveryCodeUsed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104cf0f3c

// -[SCTwoFAWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cf10ac

@end
