// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProxyNewPasswordChooser
// Superclass: NSObject
// Address: 0x112b19008

@interface SCProxyNewPasswordChooser

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProxyNewPasswordChooser initWithPasswordResetToken:usernameOrEmail:passwordService:loginStateTransitionLogger:recoverPasswordLogger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106b5b5e4

// -[SCProxyNewPasswordChooser checkNewPasswordStrength:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106b5b708

// -[SCProxyNewPasswordChooser _passwordStrengthFromString:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106b5b98c

// -[SCProxyNewPasswordChooser chooseNewPassword:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106b5ba2c

// -[SCProxyNewPasswordChooser _logCheckNewPasswordBegin]
// Type encoding: v16@0:8
// Implementation: 0x106b5bc84

// -[SCProxyNewPasswordChooser _logCheckNewPasswordSuccess]
// Type encoding: v16@0:8
// Implementation: 0x106b5bcc0

// -[SCProxyNewPasswordChooser _logCheckNewPasswordFailure]
// Type encoding: v16@0:8
// Implementation: 0x106b5bcf8

// -[SCProxyNewPasswordChooser _logChooseNewPasswordBegin]
// Type encoding: v16@0:8
// Implementation: 0x106b5bcfc

// -[SCProxyNewPasswordChooser _logChooseNewPasswordSuccess]
// Type encoding: v16@0:8
// Implementation: 0x106b5bd38

// -[SCProxyNewPasswordChooser _logChooseNewPasswordFailure]
// Type encoding: v16@0:8
// Implementation: 0x106b5bd80

// -[SCProxyNewPasswordChooser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b5bd8c

@end
