// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: OIDAuthorizationRequest
// Superclass: NSObject
// Address: 0x1129ecca8

@interface OIDAuthorizationRequest

// Property: configuration; attributes: T@"OIDServiceConfiguration",R,N,V_configuration
// Property: responseType; attributes: T@"NSString",R,N,V_responseType
// Property: clientID; attributes: T@"NSString",R,N,V_clientID
// Property: clientSecret; attributes: T@"NSString",R,N,V_clientSecret
// Property: scope; attributes: T@"NSString",R,N,V_scope
// Property: redirectURL; attributes: T@"NSURL",R,N,V_redirectURL
// Property: state; attributes: T@"NSString",R,N,V_state
// Property: nonce; attributes: T@"NSString",R,N,V_nonce
// Property: codeVerifier; attributes: T@"NSString",R,N,V_codeVerifier
// Property: codeChallenge; attributes: T@"NSString",R,N,V_codeChallenge
// Property: codeChallengeMethod; attributes: T@"NSString",R,N,V_codeChallengeMethod
// Property: additionalParameters; attributes: T@"NSDictionary",R,N,V_additionalParameters

// -[OIDAuthorizationRequest init]
// Type encoding: @16@0:8
// Implementation: 0x104a3cd38

// -[OIDAuthorizationRequest initWithConfiguration:clientId:clientSecret:scope:redirectURL:responseType:state:nonce:codeVerifier:codeChallenge:codeChallengeMethod:additionalParameters:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x104a3cf3c

// -[OIDAuthorizationRequest initWithConfiguration:clientId:clientSecret:scopes:redirectURL:responseType:additionalParameters:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104a3d224

// -[OIDAuthorizationRequest initWithConfiguration:clientId:scopes:redirectURL:responseType:additionalParameters:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104a3d404

// -[OIDAuthorizationRequest initWithConfiguration:clientId:scopes:redirectURL:responseType:nonce:additionalParameters:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104a3d438

// -[OIDAuthorizationRequest copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a3d600

// -[OIDAuthorizationRequest initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a3d60c

// -[OIDAuthorizationRequest encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a3d984

// -[OIDAuthorizationRequest description]
// Type encoding: @16@0:8
// Implementation: 0x104a3daa8

// -[OIDAuthorizationRequest authorizationRequestURL]
// Type encoding: @16@0:8
// Implementation: 0x104a3dbbc

// -[OIDAuthorizationRequest externalUserAgentRequestURL]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd0c

// -[OIDAuthorizationRequest redirectScheme]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd10

// -[OIDAuthorizationRequest configuration]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd54

// -[OIDAuthorizationRequest responseType]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd5c

// -[OIDAuthorizationRequest clientID]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd64

// -[OIDAuthorizationRequest clientSecret]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd6c

// -[OIDAuthorizationRequest scope]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd74

// -[OIDAuthorizationRequest redirectURL]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd7c

// -[OIDAuthorizationRequest state]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd84

// -[OIDAuthorizationRequest nonce]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd8c

// -[OIDAuthorizationRequest codeVerifier]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd94

// -[OIDAuthorizationRequest codeChallenge]
// Type encoding: @16@0:8
// Implementation: 0x104a3dd9c

// -[OIDAuthorizationRequest codeChallengeMethod]
// Type encoding: @16@0:8
// Implementation: 0x104a3dda4

// -[OIDAuthorizationRequest additionalParameters]
// Type encoding: @16@0:8
// Implementation: 0x104a3ddac

// -[OIDAuthorizationRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a3ddb4

// +[OIDAuthorizationRequest isSupportedResponseType:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a3cddc

// +[OIDAuthorizationRequest supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a3d604

// +[OIDAuthorizationRequest generateCodeVerifier]
// Type encoding: @16@0:8
// Implementation: 0x104a3db3c

// +[OIDAuthorizationRequest generateState]
// Type encoding: @16@0:8
// Implementation: 0x104a3db4c

// +[OIDAuthorizationRequest codeChallengeS256ForVerifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a3db5c

@end
