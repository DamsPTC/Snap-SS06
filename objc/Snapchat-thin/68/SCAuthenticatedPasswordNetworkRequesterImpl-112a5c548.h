// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuthenticatedPasswordNetworkRequesterImpl
// Superclass: NSObject
// Address: 0x112a5c548

@interface SCAuthenticatedPasswordNetworkRequesterImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAuthenticatedPasswordNetworkRequesterImpl initWithDefaultsAndNetworkServices:passwordHashRepository:userId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1056fc2a0

// -[SCAuthenticatedPasswordNetworkRequesterImpl changePassword:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1056fc36c

// -[SCAuthenticatedPasswordNetworkRequesterImpl _changePassword:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1056fc5ec

// -[SCAuthenticatedPasswordNetworkRequesterImpl _changePasswordWithParameters:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1056fc72c

// -[SCAuthenticatedPasswordNetworkRequesterImpl _changePasswordSuccess:response:responseDictionary:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1056fcaa0

// -[SCAuthenticatedPasswordNetworkRequesterImpl getPasswordStrength:quickCheck:successBlock:failureBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x1056fcbd8

// -[SCAuthenticatedPasswordNetworkRequesterImpl _getpasswordStrengthWithParameters:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1056fcd14

// -[SCAuthenticatedPasswordNetworkRequesterImpl _authURLForEndpoint:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056fd0f0

// -[SCAuthenticatedPasswordNetworkRequesterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056fd190

@end
