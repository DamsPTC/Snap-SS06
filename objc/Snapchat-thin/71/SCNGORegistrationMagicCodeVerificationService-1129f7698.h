// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNGORegistrationMagicCodeVerificationService
// Superclass: NSObject
// Address: 0x1129f7698

@interface SCNGORegistrationMagicCodeVerificationService


// -[SCNGORegistrationMagicCodeVerificationService initWithLoginService:loginLogger:networkRequestIdProvider:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x104d43e8c

// -[SCNGORegistrationMagicCodeVerificationService setChannel:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d43f5c

// -[SCNGORegistrationMagicCodeVerificationService setMagicCodeAdaptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d43f8c

// -[SCNGORegistrationMagicCodeVerificationService requestCodeResendWithSuccessBlock:failureBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x104d43fbc

// -[SCNGORegistrationMagicCodeVerificationService verifyCodeWithCode:isAutofill:successBlock:failureBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x104d441b0

// -[SCNGORegistrationMagicCodeVerificationService _verifyCodeSuccess:networkRequestId:successBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104d444ec

// -[SCNGORegistrationMagicCodeVerificationService _verifyCodeFailure:networkRequestId:failureBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104d446b4

// -[SCNGORegistrationMagicCodeVerificationService _emailOrPhone]
// Type encoding: @16@0:8
// Implementation: 0x104d44e60

// -[SCNGORegistrationMagicCodeVerificationService _loginSource]
// Type encoding: q16@0:8
// Implementation: 0x104d45000

// -[SCNGORegistrationMagicCodeVerificationService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d45114

@end
