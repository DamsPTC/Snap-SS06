// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppInstallParameters
// Superclass: NSObject
// Address: 0x11298fe30

@interface SCAppInstallParameters

// Property: appId; attributes: Tq,N,R,VappId
// Property: appName; attributes: T@"NSString",N,R
// Property: customProductPageId; attributes: T@"NSString",N,R
// Property: adNetworkAttribution; attributes: T@"SCAppInstallAdNetworkAttribution",N,R,VadNetworkAttribution
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCAppInstallParameters toStoreParams]
// Type encoding: @16@0:8
// Implementation: 0x1030bee90

// -[SCAppInstallParameters appId]
// Type encoding: q16@0:8
// Implementation: 0x1041ec184

// -[SCAppInstallParameters appName]
// Type encoding: @16@0:8
// Implementation: 0x1041ec194

// -[SCAppInstallParameters customProductPageId]
// Type encoding: @16@0:8
// Implementation: 0x1041ec1a0

// -[SCAppInstallParameters adNetworkAttribution]
// Type encoding: @16@0:8
// Implementation: 0x1041ec204

// -[SCAppInstallParameters initWithAppId:appName:customProductPageId:adNetworkAttribution:]
// Type encoding: @48@0:8q16@24@32@40
// Implementation: 0x1041ec2b8

// -[SCAppInstallParameters hash]
// Type encoding: q16@0:8
// Implementation: 0x1041ec61c

// -[SCAppInstallParameters isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1041ec97c

// -[SCAppInstallParameters copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1041ec9fc

// -[SCAppInstallParameters encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1041ecb6c

// -[SCAppInstallParameters initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1041ecf04

// -[SCAppInstallParameters description]
// Type encoding: @16@0:8
// Implementation: 0x1041ecf2c

// -[SCAppInstallParameters init]
// Type encoding: @16@0:8
// Implementation: 0x1041ed1d8

// -[SCAppInstallParameters .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1041ed254

// +[SCAppInstallParameters fromAdResponse:adSnap:impressionSource:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1030bed40

@end
