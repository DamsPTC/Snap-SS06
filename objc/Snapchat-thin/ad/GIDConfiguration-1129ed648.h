// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GIDConfiguration
// Superclass: NSObject
// Address: 0x1129ed648

@interface GIDConfiguration

// Property: clientID; attributes: T@"NSString",R,N,V_clientID
// Property: serverClientID; attributes: T@"NSString",R,N,V_serverClientID
// Property: hostedDomain; attributes: T@"NSString",R,N,V_hostedDomain
// Property: openIDRealm; attributes: T@"NSString",R,N,V_openIDRealm

// -[GIDConfiguration initWithClientID:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a64610

// -[GIDConfiguration initWithClientID:serverClientID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a64620

// -[GIDConfiguration initWithClientID:serverClientID:hostedDomain:openIDRealm:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10097a50c

// -[GIDConfiguration description]
// Type encoding: @16@0:8
// Implementation: 0x104a6462c

// -[GIDConfiguration copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a646b0

// -[GIDConfiguration initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a646bc

// -[GIDConfiguration encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a64804

// -[GIDConfiguration clientID]
// Type encoding: @16@0:8
// Implementation: 0x104a64888

// -[GIDConfiguration serverClientID]
// Type encoding: @16@0:8
// Implementation: 0x104a64890

// -[GIDConfiguration hostedDomain]
// Type encoding: @16@0:8
// Implementation: 0x104a64898

// -[GIDConfiguration openIDRealm]
// Type encoding: @16@0:8
// Implementation: 0x104a648a0

// -[GIDConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a648a8

// +[GIDConfiguration supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a646b4

@end
