// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreRegistrationVerificationStateTransition
// Superclass: SCUserVerificationDefaultStateTransition
// Address: 0x1129f77d8

@interface SCPreRegistrationVerificationStateTransition

// Property: verificationFlowMethod; attributes: TQ,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreRegistrationVerificationStateTransition initWithShouldShowPrivacyPolicyOnFirstScreen:]
// Type encoding: @20@0:8B16
// Implementation: 0x104d45c40

// -[SCPreRegistrationVerificationStateTransition nextStateConfigFromState:action:context:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x104d45c90

// -[SCPreRegistrationVerificationStateTransition stateConfigForState:context:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104d45ccc

// -[SCPreRegistrationVerificationStateTransition _privacyPolicyTextOptionForEmailEntry]
// Type encoding: Q16@0:8
// Implementation: 0x104d4607c

// -[SCPreRegistrationVerificationStateTransition _privacyPolicyTextOptionForPhoneEntry]
// Type encoding: Q16@0:8
// Implementation: 0x104d46090

@end
