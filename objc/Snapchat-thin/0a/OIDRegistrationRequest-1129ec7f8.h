// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: OIDRegistrationRequest
// Superclass: NSObject
// Address: 0x1129ec7f8

@interface OIDRegistrationRequest

// Property: configuration; attributes: T@"OIDServiceConfiguration",R,N,V_configuration
// Property: initialAccessToken; attributes: T@"NSString",R,N,V_initialAccessToken
// Property: applicationType; attributes: T@"NSString",R,N,V_applicationType
// Property: redirectURIs; attributes: T@"NSArray",R,N,V_redirectURIs
// Property: responseTypes; attributes: T@"NSArray",R,N,V_responseTypes
// Property: grantTypes; attributes: T@"NSArray",R,N,V_grantTypes
// Property: subjectType; attributes: T@"NSString",R,N,V_subjectType
// Property: tokenEndpointAuthenticationMethod; attributes: T@"NSString",R,N,V_tokenEndpointAuthenticationMethod
// Property: additionalParameters; attributes: T@"NSDictionary",R,N,V_additionalParameters

// -[OIDRegistrationRequest init]
// Type encoding: @16@0:8
// Implementation: 0x104a32a90

// -[OIDRegistrationRequest initWithConfiguration:redirectURIs:responseTypes:grantTypes:subjectType:tokenEndpointAuthMethod:additionalParameters:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104a32b34

// -[OIDRegistrationRequest initWithConfiguration:redirectURIs:responseTypes:grantTypes:subjectType:tokenEndpointAuthMethod:initialAccessToken:additionalParameters:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104a32b58

// -[OIDRegistrationRequest copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a32d60

// -[OIDRegistrationRequest initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a32d6c

// -[OIDRegistrationRequest encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a33010

// -[OIDRegistrationRequest description]
// Type encoding: @16@0:8
// Implementation: 0x104a330e8

// -[OIDRegistrationRequest URLRequest]
// Type encoding: @16@0:8
// Implementation: 0x104a331e4

// -[OIDRegistrationRequest JSONString]
// Type encoding: @16@0:8
// Implementation: 0x104a3330c

// -[OIDRegistrationRequest configuration]
// Type encoding: @16@0:8
// Implementation: 0x104a33574

// -[OIDRegistrationRequest initialAccessToken]
// Type encoding: @16@0:8
// Implementation: 0x104a3357c

// -[OIDRegistrationRequest applicationType]
// Type encoding: @16@0:8
// Implementation: 0x104a33584

// -[OIDRegistrationRequest redirectURIs]
// Type encoding: @16@0:8
// Implementation: 0x104a3358c

// -[OIDRegistrationRequest responseTypes]
// Type encoding: @16@0:8
// Implementation: 0x104a33594

// -[OIDRegistrationRequest grantTypes]
// Type encoding: @16@0:8
// Implementation: 0x104a3359c

// -[OIDRegistrationRequest subjectType]
// Type encoding: @16@0:8
// Implementation: 0x104a335a4

// -[OIDRegistrationRequest tokenEndpointAuthenticationMethod]
// Type encoding: @16@0:8
// Implementation: 0x104a335ac

// -[OIDRegistrationRequest additionalParameters]
// Type encoding: @16@0:8
// Implementation: 0x104a335b4

// -[OIDRegistrationRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a335bc

// +[OIDRegistrationRequest supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a32d64

@end
