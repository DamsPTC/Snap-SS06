// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: OIDAuthState
// Superclass: NSObject
// Address: 0x1129eca28

@interface OIDAuthState

// Property: accessToken; attributes: T@"NSString",R,N
// Property: accessTokenExpirationDate; attributes: T@"NSDate",R,N
// Property: idToken; attributes: T@"NSString",R,N
// Property: refreshToken; attributes: T@"NSString",R,N,V_refreshToken
// Property: scope; attributes: T@"NSString",R,N,V_scope
// Property: lastAuthorizationResponse; attributes: T@"OIDAuthorizationResponse",R,N,V_lastAuthorizationResponse
// Property: lastTokenResponse; attributes: T@"OIDTokenResponse",R,N,V_lastTokenResponse
// Property: lastRegistrationResponse; attributes: T@"OIDRegistrationResponse",R,N,V_lastRegistrationResponse
// Property: authorizationError; attributes: T@"NSError",R,N,V_authorizationError
// Property: isAuthorized; attributes: TB,R,N
// Property: stateChangeDelegate; attributes: T@"<OIDAuthStateChangeDelegate>",W,N,V_stateChangeDelegate
// Property: errorDelegate; attributes: T@"<OIDAuthStateErrorDelegate>",W,N,V_errorDelegate

// -[OIDAuthState init]
// Type encoding: @16@0:8
// Implementation: 0x104a36618

// -[OIDAuthState initWithAuthorizationResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a366bc

// -[OIDAuthState initWithAuthorizationResponse:tokenResponse:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a366c4

// -[OIDAuthState initWithRegistrationResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a366cc

// -[OIDAuthState initWithAuthorizationResponse:tokenResponse:registrationResponse:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104a366dc

// -[OIDAuthState description]
// Type encoding: @16@0:8
// Implementation: 0x104a367c8

// -[OIDAuthState initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a36960

// -[OIDAuthState encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a36ad8

// -[OIDAuthState accessToken]
// Type encoding: @16@0:8
// Implementation: 0x104a36bd8

// -[OIDAuthState tokenType]
// Type encoding: @16@0:8
// Implementation: 0x104a36c18

// -[OIDAuthState accessTokenExpirationDate]
// Type encoding: @16@0:8
// Implementation: 0x104a36c58

// -[OIDAuthState idToken]
// Type encoding: @16@0:8
// Implementation: 0x104a36c98

// -[OIDAuthState isAuthorized]
// Type encoding: B16@0:8
// Implementation: 0x104a36cd8

// -[OIDAuthState updateWithRegistrationResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a36d90

// -[OIDAuthState updateWithAuthorizationResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a36e10

// -[OIDAuthState updateWithTokenResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a36f50

// -[OIDAuthState updateWithAuthorizationError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a370a0

// -[OIDAuthState tokenRefreshRequest]
// Type encoding: @16@0:8
// Implementation: 0x104a3710c

// -[OIDAuthState tokenRefreshRequestWithAdditionalParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a37114

// -[OIDAuthState tokenRefreshRequestWithAdditionalParameters:additionalHeaders:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a37278

// -[OIDAuthState tokenRefreshRequestWithAdditionalHeaders:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a373f4

// -[OIDAuthState didChangeState]
// Type encoding: v16@0:8
// Implementation: 0x104a37558

// -[OIDAuthState setNeedsTokenRefresh]
// Type encoding: v16@0:8
// Implementation: 0x104a3758c

// -[OIDAuthState performActionWithFreshTokens:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a37598

// -[OIDAuthState performActionWithFreshTokens:additionalRefreshParameters:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x104a375a0

// -[OIDAuthState performActionWithFreshTokens:additionalRefreshParameters:dispatchQueue:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x104a375ac

// -[OIDAuthState isTokenFresh]
// Type encoding: B16@0:8
// Implementation: 0x104a37bd4

// -[OIDAuthState refreshToken]
// Type encoding: @16@0:8
// Implementation: 0x104a37c68

// -[OIDAuthState scope]
// Type encoding: @16@0:8
// Implementation: 0x104a37c70

// -[OIDAuthState lastAuthorizationResponse]
// Type encoding: @16@0:8
// Implementation: 0x104a37c78

// -[OIDAuthState lastTokenResponse]
// Type encoding: @16@0:8
// Implementation: 0x104a37c80

// -[OIDAuthState lastRegistrationResponse]
// Type encoding: @16@0:8
// Implementation: 0x104a37c88

// -[OIDAuthState authorizationError]
// Type encoding: @16@0:8
// Implementation: 0x104a37c90

// -[OIDAuthState stateChangeDelegate]
// Type encoding: @16@0:8
// Implementation: 0x104a37c98

// -[OIDAuthState setStateChangeDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a37cb0

// -[OIDAuthState errorDelegate]
// Type encoding: @16@0:8
// Implementation: 0x104a37cbc

// -[OIDAuthState setErrorDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a37cd4

// -[OIDAuthState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a37ce0

// +[OIDAuthState authStateByPresentingAuthorizationRequest:presentingViewController:callback:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x104a3485c

// +[OIDAuthState authStateByPresentingAuthorizationRequest:presentingViewController:prefersEphemeralSession:callback:]
// Type encoding: @44@0:8@16@24B32@?36
// Implementation: 0x104a34914

// +[OIDAuthState authStateByPresentingAuthorizationRequest:callback:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x104a349d4

// +[OIDAuthState authStateByPresentingAuthorizationRequest:externalUserAgent:callback:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x104a36340

// +[OIDAuthState supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a36958

@end
