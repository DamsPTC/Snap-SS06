// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: OIDServiceConfiguration
// Superclass: NSObject
// Address: 0x1129ec988

@interface OIDServiceConfiguration

// Property: authorizationEndpoint; attributes: T@"NSURL",R,N,V_authorizationEndpoint
// Property: tokenEndpoint; attributes: T@"NSURL",R,N,V_tokenEndpoint
// Property: issuer; attributes: T@"NSURL",R,N,V_issuer
// Property: registrationEndpoint; attributes: T@"NSURL",R,N,V_registrationEndpoint
// Property: endSessionEndpoint; attributes: T@"NSURL",R,N,V_endSessionEndpoint
// Property: discoveryDocument; attributes: T@"OIDServiceDiscovery",R,N,V_discoveryDocument

// -[OIDServiceConfiguration init]
// Type encoding: @16@0:8
// Implementation: 0x104a35c70

// -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:issuer:registrationEndpoint:endSessionEndpoint:discoveryDocument:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10097a6b4

// -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10097a6a0

// -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:registrationEndpoint:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104a35d14

// -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:issuer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104a35d28

// -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:issuer:registrationEndpoint:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104a35d38

// -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:issuer:registrationEndpoint:endSessionEndpoint:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104a35d44

// -[OIDServiceConfiguration initWithDiscoveryDocument:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a35d4c

// -[OIDServiceConfiguration copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a35e44

// -[OIDServiceConfiguration initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a35e50

// -[OIDServiceConfiguration encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a360e4

// -[OIDServiceConfiguration description]
// Type encoding: @16@0:8
// Implementation: 0x104a36190

// -[OIDServiceConfiguration authorizationEndpoint]
// Type encoding: @16@0:8
// Implementation: 0x104a361d4

// -[OIDServiceConfiguration tokenEndpoint]
// Type encoding: @16@0:8
// Implementation: 0x10097a8ac

// -[OIDServiceConfiguration issuer]
// Type encoding: @16@0:8
// Implementation: 0x104a361dc

// -[OIDServiceConfiguration registrationEndpoint]
// Type encoding: @16@0:8
// Implementation: 0x104a361e4

// -[OIDServiceConfiguration endSessionEndpoint]
// Type encoding: @16@0:8
// Implementation: 0x104a361ec

// -[OIDServiceConfiguration discoveryDocument]
// Type encoding: @16@0:8
// Implementation: 0x104a361f4

// -[OIDServiceConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a361fc

// +[OIDServiceConfiguration supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a35e48

@end
