// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKLoginManager
// Superclass: NSObject
// Address: 0x1129e4a80

@interface FBSDKLoginManager

// Property: defaultAudience; attributes: TQ,N,VdefaultAudience
// Property: configuration; attributes: T@"FBSDKLoginConfiguration",N,&,Vconfiguration
// Property: requestedPermissions; attributes: T@"NSSet",N,C
// Property: usedSafariSession; attributes: TB,N,VusedSafariSession
// Property: isPerformingLogin; attributes: TB,N,R

// -[FBSDKLoginManager application:openURL:sourceApplication:annotation:]
// Type encoding: B48@0:8@16@24@32@40
// Implementation: 0x1049001b4

// -[FBSDKLoginManager canOpenURL:forApplication:sourceApplication:annotation:]
// Type encoding: B48@0:8@16@24@32@40
// Implementation: 0x10490030c

// -[FBSDKLoginManager applicationDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x104900480

// -[FBSDKLoginManager isAuthenticationURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x104900544

// -[FBSDKLoginManager shouldStopPropagationOfURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x104900788

// -[FBSDKLoginManager defaultAudience]
// Type encoding: Q16@0:8
// Implementation: 0x1048f8e00

// -[FBSDKLoginManager setDefaultAudience:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1048f8e84

// -[FBSDKLoginManager configuration]
// Type encoding: @16@0:8
// Implementation: 0x1048f9064

// -[FBSDKLoginManager setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048f90f8

// -[FBSDKLoginManager requestedPermissions]
// Type encoding: @16@0:8
// Implementation: 0x1048f915c

// -[FBSDKLoginManager setRequestedPermissions:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048f9248

// -[FBSDKLoginManager usedSafariSession]
// Type encoding: B16@0:8
// Implementation: 0x1048f94ec

// -[FBSDKLoginManager setUsedSafariSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x1048f9570

// -[FBSDKLoginManager isPerformingLogin]
// Type encoding: B16@0:8
// Implementation: 0x1048f964c

// -[FBSDKLoginManager initWithDefaultAudience:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1048f9f20

// -[FBSDKLoginManager logInFromViewController:configuration:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1048fa3b4

// -[FBSDKLoginManager logInWithPermissions:fromViewController:handler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1048fab38

// -[FBSDKLoginManager reauthorizeDataAccess:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1048fc330

// -[FBSDKLoginManager logOut]
// Type encoding: v16@0:8
// Implementation: 0x1048fc5cc

// -[FBSDKLoginManager completeAuthenticationWithParameters:expectChallenge:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1048fdbf4

// -[FBSDKLoginManager logInParametersWithConfiguration:loggingToken:authenticationMethod:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1048ff46c

// -[FBSDKLoginManager validateReauthenticationWithAccessToken:loginResult:userTokenNonce:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1048ff944

// -[FBSDKLoginManager getRecentlyGrantedPermissionsFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x1048ffc7c

// -[FBSDKLoginManager getRecentlyDeclinedPermissionsFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x1048ffc88

// -[FBSDKLoginManager storeExpectedNonce:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048ffd50

// -[FBSDKLoginManager init]
// Type encoding: @16@0:8
// Implementation: 0x104900064

// -[FBSDKLoginManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1049000b8

// +[FBSDKLoginManager makeOpener]
// Type encoding: @16@0:8
// Implementation: 0x10490017c

@end
