// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPhoneCodeBusinessLogic
// Superclass: SCBusinessLogic
// Address: 0x112b1c7f8

@interface SCPhoneCodeBusinessLogic

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPhoneCodeBusinessLogic initWithPhoneReceivingCode:initialCodeDeliveryMechanism:phoneCodeVerifier:resendableCode:delegate:shouldShowSwitchToVoiceOption:allowSwitchMinimumFailureCount:]
// Type encoding: @68@0:8@16Q24@32@40@48B56q60
// Implementation: 0x106b82634

// -[SCPhoneCodeBusinessLogic viewModel]
// Type encoding: @16@0:8
// Implementation: 0x106b82798

// -[SCPhoneCodeBusinessLogic _alternateDeliveryMechanism]
// Type encoding: Q16@0:8
// Implementation: 0x106b82870

// -[SCPhoneCodeBusinessLogic handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b82888

// -[SCPhoneCodeBusinessLogic resendCode:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106b82a14

// -[SCPhoneCodeBusinessLogic codeUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b82c88

// -[SCPhoneCodeBusinessLogic submitCode:wasAutofilled:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x106b82ce4

// -[SCPhoneCodeBusinessLogic _promptToSendCodeWithAlternateDeliveryMechanism]
// Type encoding: v16@0:8
// Implementation: 0x106b830f8

// -[SCPhoneCodeBusinessLogic _sendCodeWithAlternateDeliveryMechanism]
// Type encoding: v16@0:8
// Implementation: 0x106b831f4

// -[SCPhoneCodeBusinessLogic _codeResentWithResult:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x106b83224

// -[SCPhoneCodeBusinessLogic _phoneVerificationSucceeded:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106b8338c

// -[SCPhoneCodeBusinessLogic _phoneVerificationFailed:errorMessage:completion:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x106b8339c

// -[SCPhoneCodeBusinessLogic _showSwitchButton]
// Type encoding: B16@0:8
// Implementation: 0x106b834c0

// -[SCPhoneCodeBusinessLogic .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b834f0

@end
