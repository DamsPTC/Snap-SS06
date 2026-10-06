// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAuthorizationManager
// Superclass: NSObject
// Address: 0x112a849a8

@interface SCSpectaclesAuthorizationManager

// Property: delegate; attributes: T@"<SCSpectaclesAuthorizationManagerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesAuthorizationManager initWithUserId:oauth2:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c5b8a0

// -[SCSpectaclesAuthorizationManager startAuthzAuthenticationForDevice:clientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a4c958

// -[SCSpectaclesAuthorizationManager startAccessTokenAuthenticationForClientId:isPreHermosa:scopes:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105a4cb68

// -[SCSpectaclesAuthorizationManager _obtainAccessTokenFromResult:clientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a4cd34

// -[SCSpectaclesAuthorizationManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x105a4cf90

// -[SCSpectaclesAuthorizationManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c5b97c

// -[SCSpectaclesAuthorizationManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a4cfa8

@end
