// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCredentials2FASMSVerificationBusinessLogic
// Superclass: SCBusinessLogic
// Address: 0x1129f4bc8

@interface SCCredentials2FASMSVerificationBusinessLogic

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCredentials2FASMSVerificationBusinessLogic initWithDelegate:logInService:usernameOrEmail:phoneNumber:twoFAPreAuthToken:unauthenticatedTwoFAService:resendCode:transitionMomentLogger:twoFALogger:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x104cec818

// -[SCCredentials2FASMSVerificationBusinessLogic begin]
// Type encoding: v16@0:8
// Implementation: 0x104ceca94

// -[SCCredentials2FASMSVerificationBusinessLogic viewModel]
// Type encoding: @16@0:8
// Implementation: 0x104cecae8

// -[SCCredentials2FASMSVerificationBusinessLogic handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cecb78

// -[SCCredentials2FASMSVerificationBusinessLogic submitCode:wasAutofilled:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x104cecce8

// -[SCCredentials2FASMSVerificationBusinessLogic resendCode:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104ced144

// -[SCCredentials2FASMSVerificationBusinessLogic codeUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ced3fc

// -[SCCredentials2FASMSVerificationBusinessLogic _descriptionLabelText]
// Type encoding: @16@0:8
// Implementation: 0x104ced400

// -[SCCredentials2FASMSVerificationBusinessLogic _handleLogInSuccessWithLoginSuccess:recoveryCodeUsed:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x104ced478

// -[SCCredentials2FASMSVerificationBusinessLogic _handleLogInFailureWithError:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104ced544

// -[SCCredentials2FASMSVerificationBusinessLogic .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cedba8

@end
