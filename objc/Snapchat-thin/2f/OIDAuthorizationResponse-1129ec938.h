// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: OIDAuthorizationResponse
// Superclass: NSObject
// Address: 0x1129ec938

@interface OIDAuthorizationResponse

// Property: request; attributes: T@"OIDAuthorizationRequest",R,N,V_request
// Property: authorizationCode; attributes: T@"NSString",R,N,V_authorizationCode
// Property: state; attributes: T@"NSString",R,N,V_state
// Property: accessToken; attributes: T@"NSString",R,N,V_accessToken
// Property: accessTokenExpirationDate; attributes: T@"NSDate",R,N,V_accessTokenExpirationDate
// Property: tokenType; attributes: T@"NSString",R,N,V_tokenType
// Property: idToken; attributes: T@"NSString",R,N,V_idToken
// Property: scope; attributes: T@"NSString",R,N,V_scope
// Property: additionalParameters; attributes: T@"NSDictionary",R,N,V_additionalParameters

// -[OIDAuthorizationResponse init]
// Type encoding: @16@0:8
// Implementation: 0x104a355c8

// -[OIDAuthorizationResponse initWithRequest:parameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a3566c

// -[OIDAuthorizationResponse copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a35760

// -[OIDAuthorizationResponse initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a3576c

// -[OIDAuthorizationResponse encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a35884

// -[OIDAuthorizationResponse description]
// Type encoding: @16@0:8
// Implementation: 0x104a3591c

// -[OIDAuthorizationResponse tokenExchangeRequest]
// Type encoding: @16@0:8
// Implementation: 0x104a35a10

// -[OIDAuthorizationResponse tokenExchangeRequestWithAdditionalParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a35a1c

// -[OIDAuthorizationResponse tokenExchangeRequestWithAdditionalParameters:additionalHeaders:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a35a24

// -[OIDAuthorizationResponse request]
// Type encoding: @16@0:8
// Implementation: 0x104a35b90

// -[OIDAuthorizationResponse authorizationCode]
// Type encoding: @16@0:8
// Implementation: 0x104a35b98

// -[OIDAuthorizationResponse state]
// Type encoding: @16@0:8
// Implementation: 0x104a35ba0

// -[OIDAuthorizationResponse accessToken]
// Type encoding: @16@0:8
// Implementation: 0x104a35ba8

// -[OIDAuthorizationResponse accessTokenExpirationDate]
// Type encoding: @16@0:8
// Implementation: 0x104a35bb0

// -[OIDAuthorizationResponse tokenType]
// Type encoding: @16@0:8
// Implementation: 0x104a35bb8

// -[OIDAuthorizationResponse idToken]
// Type encoding: @16@0:8
// Implementation: 0x104a35bc0

// -[OIDAuthorizationResponse scope]
// Type encoding: @16@0:8
// Implementation: 0x104a35bc8

// -[OIDAuthorizationResponse additionalParameters]
// Type encoding: @16@0:8
// Implementation: 0x104a35bd0

// -[OIDAuthorizationResponse .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a35bd8

// +[OIDAuthorizationResponse fieldMap]
// Type encoding: @16@0:8
// Implementation: 0x104a352c8

// +[OIDAuthorizationResponse supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a35764

@end
