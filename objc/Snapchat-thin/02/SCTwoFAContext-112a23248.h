// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTwoFAContext
// Superclass: NSObject
// Address: 0x112a23248

@interface SCTwoFAContext


// -[SCTwoFAContext copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x105218358

// -[SCTwoFAContext hash]
// Type encoding: Q16@0:8
// Implementation: 0x10521837c

// -[SCTwoFAContext internalInit]
// Type encoding: @16@0:8
// Implementation: 0x10521840c

// -[SCTwoFAContext isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x105218450

// -[SCTwoFAContext matchOtpTwoFARequired:smsTwoFARequired:cosTOTP2FARequired:cosSMS2FARequired:]
// Type encoding: v48@0:8@?16@?24@?32@?40
// Implementation: 0x105218550

// -[SCTwoFAContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105218650

// +[SCTwoFAContext cosSMS2FARequiredWithObfuscatedPhone:isSwitchable:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1052181b0

// +[SCTwoFAContext cosTOTP2FARequiredWithIsSwitchable:]
// Type encoding: @20@0:8B16
// Implementation: 0x105218224

// +[SCTwoFAContext otpTwoFARequiredWithChallenge:smsEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105218280

// +[SCTwoFAContext smsTwoFARequiredWithChallenge:]
// Type encoding: @24@0:8@16
// Implementation: 0x1052182ec

@end
