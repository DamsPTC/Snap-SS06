// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKDeviceLoginManager
// Superclass: NSObject
// Address: 0x1129e3f28

@interface FBSDKDeviceLoginManager

// Property: delegate; attributes: T@"<FBSDKDeviceLoginManagerDelegate>",N,W,Vdelegate
// Property: permissions; attributes: T@"NSArray",N,R
// Property: redirectURL; attributes: T@"NSURL",N,C
// Property: codeInfo; attributes: T@"FBSDKDeviceLoginCodeInfo",N,&,VcodeInfo

// -[FBSDKDeviceLoginManager netService:didNotPublish:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1048e5a7c

// -[FBSDKDeviceLoginManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x1048e0ddc

// -[FBSDKDeviceLoginManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e0e68

// -[FBSDKDeviceLoginManager permissions]
// Type encoding: @16@0:8
// Implementation: 0x1048e100c

// -[FBSDKDeviceLoginManager redirectURL]
// Type encoding: @16@0:8
// Implementation: 0x1048e1064

// -[FBSDKDeviceLoginManager setRedirectURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e1194

// -[FBSDKDeviceLoginManager codeInfo]
// Type encoding: @16@0:8
// Implementation: 0x1048e1328

// -[FBSDKDeviceLoginManager setCodeInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e13bc

// -[FBSDKDeviceLoginManager initWithPermissions:enableSmartLogin:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1048e1898

// -[FBSDKDeviceLoginManager start]
// Type encoding: v16@0:8
// Implementation: 0x1048e3124

// -[FBSDKDeviceLoginManager cancel]
// Type encoding: v16@0:8
// Implementation: 0x1048e331c

// -[FBSDKDeviceLoginManager notifyDelegateWithToken:expirationDate:dataAccessExpirationDate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1048e4668

// -[FBSDKDeviceLoginManager processError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048e47f8

// -[FBSDKDeviceLoginManager schedulePollWithInterval:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1048e57c0

// -[FBSDKDeviceLoginManager init]
// Type encoding: @16@0:8
// Implementation: 0x1048e583c

// -[FBSDKDeviceLoginManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1048e589c

@end
