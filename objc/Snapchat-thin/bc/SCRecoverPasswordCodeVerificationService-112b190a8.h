// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecoverPasswordCodeVerificationService
// Superclass: NSObject
// Address: 0x112b190a8

@interface SCRecoverPasswordCodeVerificationService


// -[SCRecoverPasswordCodeVerificationService initWithPhoneReceivingCode:codeSentViaSMS:passwordResetToken:usernameOrEmail:recoverPasswordPhoneService:loginStateTransitionLogger:recoverPasswordLogger:]
// Type encoding: @68@0:8@16B24@28@36@44@52@60
// Implementation: 0x106b5bfc8

// -[SCRecoverPasswordCodeVerificationService verifyCodeWithCode:isAutofill:successBlock:failureBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x106b5c124

// -[SCRecoverPasswordCodeVerificationService requestCodeResendWithSuccessBlock:failureBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x106b5c3a4

// -[SCRecoverPasswordCodeVerificationService _requestPhoneCodeCompletedWithResult:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106b5c578

// -[SCRecoverPasswordCodeVerificationService _verifyPhoneCodeSucceededWithBlock:username:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x106b5c870

// -[SCRecoverPasswordCodeVerificationService _verifyPhoneCodeFailedWithBlock:errorMessage:connectionFailed:]
// Type encoding: v36@0:8@?16@24B32
// Implementation: 0x106b5c8f8

// -[SCRecoverPasswordCodeVerificationService _requestPhoneCodeSucceededWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106b5c984

// -[SCRecoverPasswordCodeVerificationService _requestPhoneCodeFailedWithBlock:errorMessage:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x106b5c9c8

// -[SCRecoverPasswordCodeVerificationService _logPhoneCodeVerificationBegan]
// Type encoding: v16@0:8
// Implementation: 0x106b5ca58

// -[SCRecoverPasswordCodeVerificationService _logPhoneCodeVerificationSucceeded]
// Type encoding: v16@0:8
// Implementation: 0x106b5caa0

// -[SCRecoverPasswordCodeVerificationService _logPhoneCodeRequestBegan]
// Type encoding: v16@0:8
// Implementation: 0x106b5cae4

// -[SCRecoverPasswordCodeVerificationService _logPhoneCodeRequestSucceeded]
// Type encoding: v16@0:8
// Implementation: 0x106b5cb30

// -[SCRecoverPasswordCodeVerificationService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b5cb78

@end
