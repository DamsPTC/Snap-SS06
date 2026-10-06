// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPhoneRegistrationPhoneCodeVerifier
// Superclass: NSObject
// Address: 0x1129f76e8

@interface SCPhoneRegistrationPhoneCodeVerifier

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPhoneRegistrationPhoneCodeVerifier initWithPhoneNumber:authenticatedPhoneService:logger:delegate:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104d45168

// -[SCPhoneRegistrationPhoneCodeVerifier verifyPhoneCode:wasAutofilled:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x104d4525c

// -[SCPhoneRegistrationPhoneCodeVerifier _phoneVerificationSucceeded:phoneVerifyToken:authSessionPayload:wasAutofilled:completion:]
// Type encoding: v52@0:8@16@24@32B40@?44
// Implementation: 0x104d45558

// -[SCPhoneRegistrationPhoneCodeVerifier _phoneVerificationFailed:connectionFailure:retryable:completion:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x104d45624

// -[SCPhoneRegistrationPhoneCodeVerifier requestPhoneCodeWithDeliveryMechanism:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x104d456ac

// -[SCPhoneRegistrationPhoneCodeVerifier didAutoFillVerificationCode]
// Type encoding: v16@0:8
// Implementation: 0x104d458b0

// -[SCPhoneRegistrationPhoneCodeVerifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d458b8

@end
