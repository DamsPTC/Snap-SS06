// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserTwoFAStatus
// Superclass: NSObject
// Address: 0xac9558

@interface SCUserTwoFAStatus

// Property: isSmsTwoFAEnabled; attributes: TB,N,R,VisSmsTwoFAEnabled
// Property: isOtpTwoFAEnabled; attributes: TB,N,R,VisOtpTwoFAEnabled
// Property: description; attributes: T@"NSString",N,R

// -[SCUserTwoFAStatus isSmsTwoFAEnabled]
// Type encoding: B16@0:8
// Implementation: 0x72d20

// -[SCUserTwoFAStatus isOtpTwoFAEnabled]
// Type encoding: B16@0:8
// Implementation: 0x72d30

// -[SCUserTwoFAStatus initWithIsSmsTwoFAEnabled:isOtpTwoFAEnabled:]
// Type encoding: @24@0:8B16B20
// Implementation: 0x72da4

// -[SCUserTwoFAStatus copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x72e68

// -[SCUserTwoFAStatus description]
// Type encoding: @16@0:8
// Implementation: 0x72e6c

// -[SCUserTwoFAStatus init]
// Type encoding: @16@0:8
// Implementation: 0x72e88

@end
