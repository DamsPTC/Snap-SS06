// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: OIDTokenRequest
// Superclass: NSObject
// Address: 0x1129ec848

@interface OIDTokenRequest

// Property: configuration; attributes: T@"OIDServiceConfiguration",R,N,V_configuration
// Property: grantType; attributes: T@"NSString",R,N,V_grantType
// Property: authorizationCode; attributes: T@"NSString",R,N,V_authorizationCode
// Property: redirectURL; attributes: T@"NSURL",R,N,V_redirectURL
// Property: clientID; attributes: T@"NSString",R,N,V_clientID
// Property: clientSecret; attributes: T@"NSString",R,N,V_clientSecret
// Property: scope; attributes: T@"NSString",R,N,V_scope
// Property: refreshToken; attributes: T@"NSString",R,N,V_refreshToken
// Property: codeVerifier; attributes: T@"NSString",R,N,V_codeVerifier
// Property: additionalParameters; attributes: T@"NSDictionary",R,N,V_additionalParameters
// Property: additionalHeaders; attributes: T@"NSDictionary",R,N,V_additionalHeaders

// -[OIDTokenRequest init]
// Type encoding: @16@0:8
// Implementation: 0x104a33640

// -[OIDTokenRequest initWithConfiguration:grantType:authorizationCode:redirectURL:clientID:clientSecret:scopes:refreshToken:codeVerifier:additionalParameters:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x104a336e4

// -[OIDTokenRequest initWithConfiguration:grantType:authorizationCode:redirectURL:clientID:clientSecret:scope:refreshToken:codeVerifier:additionalParameters:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x104a33718

// -[OIDTokenRequest initWithConfiguration:grantType:authorizationCode:redirectURL:clientID:clientSecret:scopes:refreshToken:codeVerifier:additionalParameters:additionalHeaders:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x104a3374c

// -[OIDTokenRequest initWithConfiguration:grantType:authorizationCode:redirectURL:clientID:clientSecret:scope:refreshToken:codeVerifier:additionalParameters:additionalHeaders:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x104a338f4

// -[OIDTokenRequest copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a33bcc

// -[OIDTokenRequest initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a33bd8

// -[OIDTokenRequest encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a3408c

// -[OIDTokenRequest description]
// Type encoding: @16@0:8
// Implementation: 0x104a3419c

// -[OIDTokenRequest tokenRequestURL]
// Type encoding: @16@0:8
// Implementation: 0x104a34298

// -[OIDTokenRequest tokenRequestBody]
// Type encoding: @16@0:8
// Implementation: 0x104a342a0

// -[OIDTokenRequest URLRequest]
// Type encoding: @16@0:8
// Implementation: 0x104a34390

// -[OIDTokenRequest configuration]
// Type encoding: @16@0:8
// Implementation: 0x104a34768

// -[OIDTokenRequest grantType]
// Type encoding: @16@0:8
// Implementation: 0x104a34770

// -[OIDTokenRequest authorizationCode]
// Type encoding: @16@0:8
// Implementation: 0x104a34778

// -[OIDTokenRequest redirectURL]
// Type encoding: @16@0:8
// Implementation: 0x104a34780

// -[OIDTokenRequest clientID]
// Type encoding: @16@0:8
// Implementation: 0x104a34788

// -[OIDTokenRequest clientSecret]
// Type encoding: @16@0:8
// Implementation: 0x104a34790

// -[OIDTokenRequest scope]
// Type encoding: @16@0:8
// Implementation: 0x104a34798

// -[OIDTokenRequest refreshToken]
// Type encoding: @16@0:8
// Implementation: 0x104a347a0

// -[OIDTokenRequest codeVerifier]
// Type encoding: @16@0:8
// Implementation: 0x104a347a8

// -[OIDTokenRequest additionalParameters]
// Type encoding: @16@0:8
// Implementation: 0x104a347b0

// -[OIDTokenRequest additionalHeaders]
// Type encoding: @16@0:8
// Implementation: 0x104a347b8

// -[OIDTokenRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a347c0

// +[OIDTokenRequest supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a33bd0

@end
