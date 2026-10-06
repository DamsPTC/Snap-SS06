// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCredentialsCOSSMS2FAVerificationBusinessLogic
// Superclass: SCBusinessLogic
// Address: 0x1129f4c68

@interface SCCredentialsCOSSMS2FAVerificationBusinessLogic

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic initWithCosDelegate:phoneNumber:isSwitchable:resendCode:transitionMomentLogger:twoFALogger:]
// Type encoding: @60@0:8@16@24B32@36@44@52
// Implementation: 0x104cee7e8

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic begin]
// Type encoding: v16@0:8
// Implementation: 0x104cee984

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic viewModel]
// Type encoding: @16@0:8
// Implementation: 0x104cee9d8

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ceea68

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic submitCode:wasAutofilled:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x104ceebd8

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic _submitCodeSucceedWithRecoverCodeUsed:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ceee68

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic _submitCodeFailedWithErrorMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ceef28

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic resendCode:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104ceefbc

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic _resendCodeSucceed]
// Type encoding: v16@0:8
// Implementation: 0x104cef2ec

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic _resendCodeFailedWithErrorMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cef370

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic codeUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cef3cc

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic _descriptionLabelText]
// Type encoding: @16@0:8
// Implementation: 0x104cef3d0

// -[SCCredentialsCOSSMS2FAVerificationBusinessLogic .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cef448

@end
