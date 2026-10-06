// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKLoginConfiguration
// Superclass: NSObject
// Address: 0x1129e4990

@interface FBSDKLoginConfiguration

// Property: nonce; attributes: T@"NSString",N,R
// Property: tracking; attributes: TQ,N,R,Vtracking
// Property: requestedPermissions; attributes: T@"NSSet",N,R
// Property: messengerPageId; attributes: T@"NSString",N,R
// Property: authType; attributes: T@"NSString",N,R
// Property: codeVerifier; attributes: T@"FBSDKCodeVerifier",N,R,VcodeVerifier

// -[FBSDKLoginConfiguration nonce]
// Type encoding: @16@0:8
// Implementation: 0x1048f62fc

// -[FBSDKLoginConfiguration tracking]
// Type encoding: Q16@0:8
// Implementation: 0x1048f6380

// -[FBSDKLoginConfiguration requestedPermissions]
// Type encoding: @16@0:8
// Implementation: 0x1048f63a0

// -[FBSDKLoginConfiguration messengerPageId]
// Type encoding: @16@0:8
// Implementation: 0x1048f6414

// -[FBSDKLoginConfiguration authType]
// Type encoding: @16@0:8
// Implementation: 0x1048f64a8

// -[FBSDKLoginConfiguration codeVerifier]
// Type encoding: @16@0:8
// Implementation: 0x1048f64e8

// -[FBSDKLoginConfiguration initWithPermissions:tracking:nonce:messengerPageId:]
// Type encoding: @48@0:8@16Q24@32@40
// Implementation: 0x1048f66e8

// -[FBSDKLoginConfiguration initWithPermissions:tracking:nonce:messengerPageId:authType:]
// Type encoding: @56@0:8@16Q24@32@40@48
// Implementation: 0x1048f69c4

// -[FBSDKLoginConfiguration initWithPermissions:tracking:nonce:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x1048f6bc0

// -[FBSDKLoginConfiguration initWithPermissions:tracking:messengerPageId:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x1048f6dcc

// -[FBSDKLoginConfiguration initWithPermissions:tracking:messengerPageId:authType:]
// Type encoding: @48@0:8@16Q24@32@40
// Implementation: 0x1048f70d8

// -[FBSDKLoginConfiguration initWithPermissions:tracking:nonce:messengerPageId:authType:codeVerifier:]
// Type encoding: @64@0:8@16Q24@32@40@48@56
// Implementation: 0x1048f7a60

// -[FBSDKLoginConfiguration initWithPermissions:tracking:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1048f7d1c

// -[FBSDKLoginConfiguration initWithTracking:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1048f7f18

// -[FBSDKLoginConfiguration init]
// Type encoding: @16@0:8
// Implementation: 0x1048f7fdc

// -[FBSDKLoginConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1048f803c

@end
