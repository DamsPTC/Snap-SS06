// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GIDGoogleUser
// Superclass: NSObject
// Address: 0x1129ed738

@interface GIDGoogleUser

// Property: authSessionDelegate; attributes: T@"<GTMAuthSessionDelegate>",&,N,V_authSessionDelegate
// Property: accessToken; attributes: T@"GIDToken",&,N,V_accessToken
// Property: refreshToken; attributes: T@"GIDToken",&,N,V_refreshToken
// Property: idToken; attributes: T@"GIDToken",&,N,V_idToken
// Property: authState; attributes: T@"OIDAuthState",R,N
// Property: fetcherAuthorizer; attributes: T@"<GTMFetcherAuthorizationProtocol>",&,N,V_fetcherAuthorizer
// Property: emmSupport; attributes: T@"NSString",R,N
// Property: userID; attributes: T@"NSString",R,N
// Property: profile; attributes: T@"GIDProfileData",R,N,V_profile
// Property: grantedScopes; attributes: T@"NSArray",R,N
// Property: configuration; attributes: T@"GIDConfiguration",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[GIDGoogleUser userID]
// Type encoding: @16@0:8
// Implementation: 0x104a661e4

// -[GIDGoogleUser grantedScopes]
// Type encoding: @16@0:8
// Implementation: 0x104a662b0

// -[GIDGoogleUser configuration]
// Type encoding: @16@0:8
// Implementation: 0x104a663b8

// -[GIDGoogleUser refreshTokensIfNeededWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a665ec

// -[GIDGoogleUser authState]
// Type encoding: @16@0:8
// Implementation: 0x104a66ce4

// -[GIDGoogleUser addScopes:presentingViewController:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104a66d28

// -[GIDGoogleUser emmSupport]
// Type encoding: @16@0:8
// Implementation: 0x104a66ebc

// -[GIDGoogleUser initWithAuthState:profileData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a66f60

// -[GIDGoogleUser updateWithTokenResponse:authorizationResponse:profileData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a6708c

// -[GIDGoogleUser updateTokensWithAuthState:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a671d0

// -[GIDGoogleUser hostedDomain]
// Type encoding: @16@0:8
// Implementation: 0x104a67458

// -[GIDGoogleUser didChangeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a67554

// -[GIDGoogleUser initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a67560

// -[GIDGoogleUser encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a676a8

// -[GIDGoogleUser profile]
// Type encoding: @16@0:8
// Implementation: 0x104a67720

// -[GIDGoogleUser accessToken]
// Type encoding: @16@0:8
// Implementation: 0x104a67728

// -[GIDGoogleUser setAccessToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a67730

// -[GIDGoogleUser refreshToken]
// Type encoding: @16@0:8
// Implementation: 0x104a6773c

// -[GIDGoogleUser setRefreshToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a67744

// -[GIDGoogleUser idToken]
// Type encoding: @16@0:8
// Implementation: 0x104a67750

// -[GIDGoogleUser setIdToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a67758

// -[GIDGoogleUser fetcherAuthorizer]
// Type encoding: @16@0:8
// Implementation: 0x104a67764

// -[GIDGoogleUser setFetcherAuthorizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a6776c

// -[GIDGoogleUser authSessionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x104a67778

// -[GIDGoogleUser setAuthSessionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a67780

// -[GIDGoogleUser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a6778c

// +[GIDGoogleUser supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a67558

@end
