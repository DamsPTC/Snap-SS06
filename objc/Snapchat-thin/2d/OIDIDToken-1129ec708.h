// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: OIDIDToken
// Superclass: NSObject
// Address: 0x1129ec708

@interface OIDIDToken

// Property: header; attributes: T@"NSDictionary",R,N,V_header
// Property: claims; attributes: T@"NSDictionary",R,N,V_claims
// Property: issuer; attributes: T@"NSURL",R,N,V_issuer
// Property: subject; attributes: T@"NSString",R,N,V_subject
// Property: audience; attributes: T@"NSArray",R,N,V_audience
// Property: expiresAt; attributes: T@"NSDate",R,N,V_expiresAt
// Property: issuedAt; attributes: T@"NSDate",R,N,V_issuedAt
// Property: nonce; attributes: T@"NSString",R,N,V_nonce

// -[OIDIDToken initWithIDTokenString:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a31988

// -[OIDIDToken header]
// Type encoding: @16@0:8
// Implementation: 0x104a32188

// -[OIDIDToken claims]
// Type encoding: @16@0:8
// Implementation: 0x104a32190

// -[OIDIDToken issuer]
// Type encoding: @16@0:8
// Implementation: 0x104a32198

// -[OIDIDToken subject]
// Type encoding: @16@0:8
// Implementation: 0x104a321a0

// -[OIDIDToken audience]
// Type encoding: @16@0:8
// Implementation: 0x104a321a8

// -[OIDIDToken expiresAt]
// Type encoding: @16@0:8
// Implementation: 0x104a321b0

// -[OIDIDToken issuedAt]
// Type encoding: @16@0:8
// Implementation: 0x104a321b8

// -[OIDIDToken nonce]
// Type encoding: @16@0:8
// Implementation: 0x104a321c0

// -[OIDIDToken .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a321c8

// +[OIDIDToken fieldMap]
// Type encoding: @16@0:8
// Implementation: 0x104a31b58

// +[OIDIDToken parseJWTSection:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a31fa4

// +[OIDIDToken base64urlNoPaddingDecode:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a3209c

@end
