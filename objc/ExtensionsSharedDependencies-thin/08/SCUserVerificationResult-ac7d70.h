// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserVerificationResult
// Superclass: NSObject
// Address: 0xac7d70

@interface SCUserVerificationResult

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCUserVerificationResult description]
// Type encoding: @16@0:8
// Implementation: 0x59cb0

// -[SCUserVerificationResult init]
// Type encoding: @16@0:8
// Implementation: 0x59ce8

// -[SCUserVerificationResult hash]
// Type encoding: q16@0:8
// Implementation: 0x59d30

// -[SCUserVerificationResult isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x5a214

// -[SCUserVerificationResult copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x5a294

// -[SCUserVerificationResult matchPhoneVerify:emailVerify:bothPhoneAndEmailVerified:noneVerify:]
// Type encoding: v48@0:8@?16@?24@?32@?40
// Implementation: 0x5a4c0

// -[SCUserVerificationResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x5a568

// +[SCUserVerificationResult phoneVerifyWithPhoneNumber:twoFaStatus:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x5a298

// +[SCUserVerificationResult emailVerifyWithEmail:]
// Type encoding: @24@0:8@16
// Implementation: 0x5a2f8

// +[SCUserVerificationResult bothPhoneAndEmailVerifiedWithPhoneNumber:phoneTwoFaStatus:email:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x5a330

// +[SCUserVerificationResult noneVerify]
// Type encoding: @16@0:8
// Implementation: 0x5a3b4

@end
