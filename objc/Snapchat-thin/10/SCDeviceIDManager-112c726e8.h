// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeviceIDManager
// Superclass: NSObject
// Address: 0x112c726e8

@interface SCDeviceIDManager

// Property: deviceTokenKey; attributes: T@"NSData",C,V_deviceTokenKey
// Property: deviceTokenVal; attributes: T@"NSData",C,V_deviceTokenVal
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDeviceIDManager init]
// Type encoding: @16@0:8
// Implementation: 0x10b27db24

// -[SCDeviceIDManager _deviceIdentifierExists]
// Type encoding: B16@0:8
// Implementation: 0x10b27db74

// -[SCDeviceIDManager _loadFromKeychain]
// Type encoding: v16@0:8
// Implementation: 0x10b27dbec

// -[SCDeviceIDManager _writeToKeychain]
// Type encoding: v16@0:8
// Implementation: 0x10b27dc88

// -[SCDeviceIDManager getChallengeResponseParametersForChallenge:endpoint:username:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b27dd2c

// -[SCDeviceIDManager storeDeviceIDWithKey:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b27e0f8

// -[SCDeviceIDManager deviceIDParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b27e1c4

// -[SCDeviceIDManager deviceToken]
// Type encoding: @16@0:8
// Implementation: 0x10b27e458

// -[SCDeviceIDManager deviceSignatureWithUsernameOrEmail:timestamp:requestToken:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b27e49c

// -[SCDeviceIDManager deviceTokenIdHash]
// Type encoding: @16@0:8
// Implementation: 0x10b27e5a0

// -[SCDeviceIDManager deviceTokenKey]
// Type encoding: @16@0:8
// Implementation: 0x10b27e728

// -[SCDeviceIDManager setDeviceTokenKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27e734

// -[SCDeviceIDManager deviceTokenVal]
// Type encoding: @16@0:8
// Implementation: 0x10b27e73c

// -[SCDeviceIDManager setDeviceTokenVal:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27e748

// -[SCDeviceIDManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b27e750

// +[SCDeviceIDManager shared]
// Type encoding: @16@0:8
// Implementation: 0x10b27e678

// +[SCDeviceIDManager setPushNotificationDeviceToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27e6f8

@end
