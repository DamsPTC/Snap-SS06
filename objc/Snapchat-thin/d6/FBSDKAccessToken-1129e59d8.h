// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKAccessToken
// Superclass: NSObject
// Address: 0x1129e59d8

@interface FBSDKAccessToken

// Property: appID; attributes: T@"NSString",R,C,N,V_appID
// Property: dataAccessExpirationDate; attributes: T@"NSDate",R,C,N,V_dataAccessExpirationDate
// Property: declinedPermissions; attributes: T@"NSSet",R,C,N,V_declinedPermissions
// Property: expiredPermissions; attributes: T@"NSSet",R,C,N,V_expiredPermissions
// Property: expirationDate; attributes: T@"NSDate",R,C,N,V_expirationDate
// Property: permissions; attributes: T@"NSSet",R,C,N,V_permissions
// Property: refreshDate; attributes: T@"NSDate",R,C,N,V_refreshDate
// Property: tokenString; attributes: T@"NSString",R,C,N,V_tokenString
// Property: userID; attributes: T@"NSString",R,C,N,V_userID
// Property: expired; attributes: TB,R,N,GisExpired
// Property: dataAccessExpired; attributes: TB,R,N,GisDataAccessExpired
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FBSDKAccessToken initWithTokenString:permissions:declinedPermissions:expiredPermissions:appID:userID:expirationDate:refreshDate:dataAccessExpirationDate:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10493f660

// -[FBSDKAccessToken hasGranted:]
// Type encoding: B24@0:8@16
// Implementation: 0x10493f93c

// -[FBSDKAccessToken isDataAccessExpired]
// Type encoding: B16@0:8
// Implementation: 0x10493f9a0

// -[FBSDKAccessToken isExpired]
// Type encoding: B16@0:8
// Implementation: 0x10493fa10

// -[FBSDKAccessToken hash]
// Type encoding: Q16@0:8
// Implementation: 0x10493ffdc

// -[FBSDKAccessToken isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1049401a0

// -[FBSDKAccessToken isEqualToAccessToken:]
// Type encoding: B24@0:8@16
// Implementation: 0x104940218

// -[FBSDKAccessToken copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1049406bc

// -[FBSDKAccessToken initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1049406c8

// -[FBSDKAccessToken encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049409f0

// -[FBSDKAccessToken appID]
// Type encoding: @16@0:8
// Implementation: 0x104940bd4

// -[FBSDKAccessToken dataAccessExpirationDate]
// Type encoding: @16@0:8
// Implementation: 0x104940bdc

// -[FBSDKAccessToken declinedPermissions]
// Type encoding: @16@0:8
// Implementation: 0x104940be4

// -[FBSDKAccessToken expiredPermissions]
// Type encoding: @16@0:8
// Implementation: 0x104940bec

// -[FBSDKAccessToken expirationDate]
// Type encoding: @16@0:8
// Implementation: 0x104940bf4

// -[FBSDKAccessToken permissions]
// Type encoding: @16@0:8
// Implementation: 0x104940bfc

// -[FBSDKAccessToken refreshDate]
// Type encoding: @16@0:8
// Implementation: 0x104940c04

// -[FBSDKAccessToken tokenString]
// Type encoding: @16@0:8
// Implementation: 0x104940c0c

// -[FBSDKAccessToken userID]
// Type encoding: @16@0:8
// Implementation: 0x104940c14

// -[FBSDKAccessToken .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104940c1c

// +[FBSDKAccessToken tokenCache]
// Type encoding: @16@0:8
// Implementation: 0x10493fa80

// +[FBSDKAccessToken setTokenCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493fa8c

// +[FBSDKAccessToken resetTokenCache]
// Type encoding: v16@0:8
// Implementation: 0x10493fad8

// +[FBSDKAccessToken currentAccessToken]
// Type encoding: @16@0:8
// Implementation: 0x10493fae8

// +[FBSDKAccessToken tokenString]
// Type encoding: @16@0:8
// Implementation: 0x10493faf4

// +[FBSDKAccessToken setCurrentAccessToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493fb40

// +[FBSDKAccessToken setCurrentAccessToken:shouldDispatchNotif:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10493fb50

// +[FBSDKAccessToken isCurrentAccessTokenActive]
// Type encoding: B16@0:8
// Implementation: 0x10493fd44

// +[FBSDKAccessToken refreshCurrentAccessTokenWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10493fd90

// +[FBSDKAccessToken graphRequestConnectionFactory]
// Type encoding: @16@0:8
// Implementation: 0x10493feac

// +[FBSDKAccessToken setGraphRequestConnectionFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493feb8

// +[FBSDKAccessToken graphRequestPiggybackManager]
// Type encoding: @16@0:8
// Implementation: 0x10493ff04

// +[FBSDKAccessToken setGraphRequestPiggybackManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493ff10

// +[FBSDKAccessToken errorFactory]
// Type encoding: @16@0:8
// Implementation: 0x10493ff20

// +[FBSDKAccessToken setErrorFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493ff2c

// +[FBSDKAccessToken configureWithTokenCache:graphRequestConnectionFactory:graphRequestPiggybackManager:errorFactory:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10493ff3c

// +[FBSDKAccessToken supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x1049406c0

@end
