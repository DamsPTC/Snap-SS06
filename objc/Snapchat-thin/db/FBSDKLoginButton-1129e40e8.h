// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKLoginButton
// Superclass: FBSDKButton
// Address: 0x1129e40e8

@interface FBSDKLoginButton

// Property: defaultAudience; attributes: TQ,N
// Property: delegate; attributes: T@"<FBSDKLoginButtonDelegate>",N,W,Vdelegate
// Property: permissions; attributes: T@"NSArray",N,C
// Property: tooltipBehavior; attributes: TQ,N,VtooltipBehavior
// Property: tooltipColorStyle; attributes: TQ,N,VtooltipColorStyle
// Property: loginTracking; attributes: TQ,N,VloginTracking
// Property: nonce; attributes: T@"NSString",N,C
// Property: messengerPageId; attributes: T@"NSString",N,C
// Property: authType; attributes: T@"NSString",N,C
// Property: codeVerifier; attributes: T@"FBSDKCodeVerifier",N,&,VcodeVerifier
// Property: userID; attributes: T@"NSString",N,C
// Property: userName; attributes: T@"NSString",N,C
// Property: graphRequestFactory; attributes: T@"<FBSDKGraphRequestFactory>",N,&,VgraphRequestFactory
// Property: isAuthenticated; attributes: TB,N,R

// -[FBSDKLoginButton defaultAudience]
// Type encoding: Q16@0:8
// Implementation: 0x1048e8158

// -[FBSDKLoginButton setDefaultAudience:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1048e8270

// -[FBSDKLoginButton delegate]
// Type encoding: @16@0:8
// Implementation: 0x1048e85cc

// -[FBSDKLoginButton setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e8658

// -[FBSDKLoginButton permissions]
// Type encoding: @16@0:8
// Implementation: 0x1048e87fc

// -[FBSDKLoginButton setPermissions:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e8878

// -[FBSDKLoginButton tooltipBehavior]
// Type encoding: Q16@0:8
// Implementation: 0x1048e8938

// -[FBSDKLoginButton setTooltipBehavior:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1048e89bc

// -[FBSDKLoginButton tooltipColorStyle]
// Type encoding: Q16@0:8
// Implementation: 0x1048e8a98

// -[FBSDKLoginButton setTooltipColorStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1048e8b1c

// -[FBSDKLoginButton loginTracking]
// Type encoding: Q16@0:8
// Implementation: 0x1048e8bf8

// -[FBSDKLoginButton setLoginTracking:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1048e8c7c

// -[FBSDKLoginButton nonce]
// Type encoding: @16@0:8
// Implementation: 0x1048e8d58

// -[FBSDKLoginButton setNonce:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e8dec

// -[FBSDKLoginButton messengerPageId]
// Type encoding: @16@0:8
// Implementation: 0x1048e90ec

// -[FBSDKLoginButton setMessengerPageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e9104

// -[FBSDKLoginButton authType]
// Type encoding: @16@0:8
// Implementation: 0x1048e915c

// -[FBSDKLoginButton setAuthType:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e91f0

// -[FBSDKLoginButton codeVerifier]
// Type encoding: @16@0:8
// Implementation: 0x1048e92e8

// -[FBSDKLoginButton setCodeVerifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e9370

// -[FBSDKLoginButton userID]
// Type encoding: @16@0:8
// Implementation: 0x1048e9468

// -[FBSDKLoginButton setUserID:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e9480

// -[FBSDKLoginButton userName]
// Type encoding: @16@0:8
// Implementation: 0x1048e94d8

// -[FBSDKLoginButton setUserName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e95b4

// -[FBSDKLoginButton graphRequestFactory]
// Type encoding: @16@0:8
// Implementation: 0x1048e98f4

// -[FBSDKLoginButton setGraphRequestFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e999c

// -[FBSDKLoginButton isAuthenticated]
// Type encoding: B16@0:8
// Implementation: 0x1048e9aa8

// -[FBSDKLoginButton initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1048ea4c8

// -[FBSDKLoginButton initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1048ea780

// -[FBSDKLoginButton didMoveToWindow]
// Type encoding: v16@0:8
// Implementation: 0x1048eb174

// -[FBSDKLoginButton imageRectForContentRect:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1048eb1c4

// -[FBSDKLoginButton titleRectForContentRect:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1048eb2dc

// -[FBSDKLoginButton layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x1048eb824

// -[FBSDKLoginButton sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x1048ebd30

// -[FBSDKLoginButton accessTokenDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048ec050

// -[FBSDKLoginButton profileDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048ec368

// -[FBSDKLoginButton buttonPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048ece14

// -[FBSDKLoginButton makeLoginConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1048ed6e4

// -[FBSDKLoginButton initializeContent]
// Type encoding: v16@0:8
// Implementation: 0x1048ed8b8

// -[FBSDKLoginButton updateContentForAccessToken]
// Type encoding: v16@0:8
// Implementation: 0x1048edae8

// -[FBSDKLoginButton fetchAndSetContent]
// Type encoding: v16@0:8
// Implementation: 0x1048edd80

// -[FBSDKLoginButton updateContentForUser:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048edee8

// -[FBSDKLoginButton logout]
// Type encoding: v16@0:8
// Implementation: 0x1048edf3c

// -[FBSDKLoginButton .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1048edf98

@end
