// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKDomainConfiguration
// Superclass: NSObject
// Address: 0x1129e61a8

@interface FBSDKDomainConfiguration

// Property: timestamp; attributes: T@"NSDate",R,C,N,V_timestamp
// Property: version; attributes: Tq,R,N,V_version
// Property: domainInfo; attributes: T@"NSDictionary",R,C,N,V_domainInfo
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FBSDKDomainConfiguration initWithTimestamp:domainInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104955638

// -[FBSDKDomainConfiguration initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104955934

// -[FBSDKDomainConfiguration encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104955a60

// -[FBSDKDomainConfiguration copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104955abc

// -[FBSDKDomainConfiguration timestamp]
// Type encoding: @16@0:8
// Implementation: 0x104955ac0

// -[FBSDKDomainConfiguration version]
// Type encoding: q16@0:8
// Implementation: 0x104955ac8

// -[FBSDKDomainConfiguration domainInfo]
// Type encoding: @16@0:8
// Implementation: 0x104955ad0

// -[FBSDKDomainConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104955ad8

// +[FBSDKDomainConfiguration setDefaultDomainInfo]
// Type encoding: v16@0:8
// Implementation: 0x1049556e4

// +[FBSDKDomainConfiguration defaultDomainConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1049558e0

// +[FBSDKDomainConfiguration supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x10495592c

@end
