// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesNumericComparison
// Superclass: NSObject
// Address: 0x112925988

@interface SCSpectaclesNumericComparison

// Property: eyewearPairing; attributes: T^{EyewearPairing=[3C][32C][8C][16C]},N,V_eyewearPairing

// -[SCSpectaclesNumericComparison init]
// Type encoding: @16@0:8
// Implementation: 0x103aee578

// -[SCSpectaclesNumericComparison dealloc]
// Type encoding: v16@0:8
// Implementation: 0x103aee5f8

// -[SCSpectaclesNumericComparison setVerificationCode:]
// Type encoding: B24@0:8@16
// Implementation: 0x103aee670

// -[SCSpectaclesNumericComparison setSharedSecret:]
// Type encoding: B24@0:8@16
// Implementation: 0x103aee6fc

// -[SCSpectaclesNumericComparison getAppVerificationMessage:appNonce:eyewearUUID:eyewearNonce:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x103aee788

// -[SCSpectaclesNumericComparison checkEyewearVerificationMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x103aee94c

// -[SCSpectaclesNumericComparison eyewearPairing]
// Type encoding: ^{EyewearPairing=[3C][32C][8C][16C]}16@0:8
// Implementation: 0x103aee9d0

// -[SCSpectaclesNumericComparison setEyewearPairing:]
// Type encoding: v24@0:8^{EyewearPairing=[3C][32C][8C][16C]}16
// Implementation: 0x103aee9d8

@end
