// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesPairingUserAssociatorHermosa
// Superclass: NSObject
// Address: 0x112b44cf8

@interface SCSpectaclesPairingUserAssociatorHermosa

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesPairingUserAssociatorHermosa initWithSpectaclesProfile:authorizationProvider:fideliusKeyProvider:delegate:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106ef0cf0

// -[SCSpectaclesPairingUserAssociatorHermosa startAssociating]
// Type encoding: v16@0:8
// Implementation: 0x106ef0df0

// -[SCSpectaclesPairingUserAssociatorHermosa _sendClientIdRequest]
// Type encoding: v16@0:8
// Implementation: 0x106ef0df4

// -[SCSpectaclesPairingUserAssociatorHermosa _sendAuthzCode:codeVerifier:redirectUri:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106ef0e48

// -[SCSpectaclesPairingUserAssociatorHermosa _sendAccessTokenForDeviceWithAccessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:]
// Type encoding: v80@0:8@16@24q32@40@48@56@64@72
// Implementation: 0x106ef0e9c

// -[SCSpectaclesPairingUserAssociatorHermosa handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ef0f08

// -[SCSpectaclesPairingUserAssociatorHermosa sendAuthzCodeForDevice:authzCode:codeVerifier:redirectUri:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106ef0fd8

// -[SCSpectaclesPairingUserAssociatorHermosa sendAccessTokenForDevice:accessToken:refreshToken:expirationTimeMs:userId:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x106ef0fe8

// -[SCSpectaclesPairingUserAssociatorHermosa authorizationFailed:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ef10e0

// -[SCSpectaclesPairingUserAssociatorHermosa .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ef1158

@end
