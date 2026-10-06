// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKAppEventsConfiguration
// Superclass: NSObject
// Address: 0x1129e5ac8

@interface FBSDKAppEventsConfiguration

// Property: defaultATEStatus; attributes: TQ,R,N,V_defaultATEStatus
// Property: advertiserIDCollectionEnabled; attributes: TB,R,N,V_advertiserIDCollectionEnabled
// Property: eventCollectionEnabled; attributes: TB,R,N,V_eventCollectionEnabled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FBSDKAppEventsConfiguration initWithJSON:]
// Type encoding: @24@0:8@16
// Implementation: 0x104947568

// -[FBSDKAppEventsConfiguration initWithDefaultATEStatus:advertiserIDCollectionEnabled:eventCollectionEnabled:]
// Type encoding: @32@0:8Q16B24B28
// Implementation: 0x1049478a4

// -[FBSDKAppEventsConfiguration initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104947938

// -[FBSDKAppEventsConfiguration encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049479dc

// -[FBSDKAppEventsConfiguration copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104947a4c

// -[FBSDKAppEventsConfiguration defaultATEStatus]
// Type encoding: Q16@0:8
// Implementation: 0x104947a50

// -[FBSDKAppEventsConfiguration advertiserIDCollectionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104947a58

// -[FBSDKAppEventsConfiguration eventCollectionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104947a60

// +[FBSDKAppEventsConfiguration defaultConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104947904

// +[FBSDKAppEventsConfiguration supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104947930

@end
