// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppLoginIdentifier
// Superclass: NSObject
// Address: 0x112b1a0e8

@interface SCAppLoginIdentifier


// -[SCAppLoginIdentifier copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106b796b0

// -[SCAppLoginIdentifier hash]
// Type encoding: Q16@0:8
// Implementation: 0x106b796d4

// -[SCAppLoginIdentifier internalInit]
// Type encoding: @16@0:8
// Implementation: 0x106b797d0

// -[SCAppLoginIdentifier isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b79814

// -[SCAppLoginIdentifier matchTivNonce:appleIdentifier:googleIdentifier:passkeyIdentifier:arcpIdentifier:]
// Type encoding: v56@0:8@?16@?24@?32@?40@?48
// Implementation: 0x106b799d4

// -[SCAppLoginIdentifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b79b0c

// +[SCAppLoginIdentifier appleIdentifierWithIdentityToken:nonce:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106b79324

// +[SCAppLoginIdentifier arcpIdentifierWithEmail:phoneNumber:phoneNumberCountryCode:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106b793bc

// +[SCAppLoginIdentifier googleIdentifierWithIdentityToken:nonce:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106b79488

// +[SCAppLoginIdentifier passkeyIdentifierWithUserId:clientDataJson:signature:authenticatorData:selectedCredential:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106b79520

// +[SCAppLoginIdentifier tivNonceWithTivNonce:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b7964c

@end
