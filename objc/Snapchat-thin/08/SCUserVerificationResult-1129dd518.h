// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserVerificationResult
// Superclass: NSObject
// Address: 0x1129dd518

@interface SCUserVerificationResult

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCUserVerificationResult description]
// Type encoding: @16@0:8
// Implementation: 0x10485b344

// -[SCUserVerificationResult init]
// Type encoding: @16@0:8
// Implementation: 0x10485b37c

// -[SCUserVerificationResult hash]
// Type encoding: q16@0:8
// Implementation: 0x10485b3c4

// -[SCUserVerificationResult isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10485b8a8

// -[SCUserVerificationResult copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10485b928

// -[SCUserVerificationResult matchPhoneVerify:emailVerify:bothPhoneAndEmailVerified:noneVerify:]
// Type encoding: v48@0:8@?16@?24@?32@?40
// Implementation: 0x10485bb54

// -[SCUserVerificationResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10485bbfc

// +[SCUserVerificationResult phoneVerifyWithPhoneNumber:twoFaStatus:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10485b92c

// +[SCUserVerificationResult emailVerifyWithEmail:]
// Type encoding: @24@0:8@16
// Implementation: 0x10485b98c

// +[SCUserVerificationResult bothPhoneAndEmailVerifiedWithPhoneNumber:phoneTwoFaStatus:email:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10485b9c4

// +[SCUserVerificationResult noneVerify]
// Type encoding: @16@0:8
// Implementation: 0x10485ba48

@end
