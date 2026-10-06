// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKAppEventsState
// Superclass: NSObject
// Address: 0x1129e5c08

@interface FBSDKAppEventsState

// Property: mutableEvents; attributes: T@"NSMutableArray",&,N,V_mutableEvents
// Property: events; attributes: T@"NSArray",R,C,N
// Property: numSkipped; attributes: TQ,R,N,V_numSkipped
// Property: tokenString; attributes: T@"NSString",R,C,N,V_tokenString
// Property: appID; attributes: T@"NSString",R,C,N,V_appID
// Property: allEventsImplicit; attributes: TB,R,N,GareAllEventsImplicit

// -[FBSDKAppEventsState initWithToken:appID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104949564

// -[FBSDKAppEventsState copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104949638

// -[FBSDKAppEventsState initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104949690

// -[FBSDKAppEventsState encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049498d8

// -[FBSDKAppEventsState events]
// Type encoding: @16@0:8
// Implementation: 0x104949980

// -[FBSDKAppEventsState addEventsFromAppEventState:]
// Type encoding: v24@0:8@16
// Implementation: 0x104949998

// -[FBSDKAppEventsState addEvent:isImplicit:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104949a3c

// -[FBSDKAppEventsState extractReceiptData]
// Type encoding: @16@0:8
// Implementation: 0x104949b70

// -[FBSDKAppEventsState areAllEventsImplicit]
// Type encoding: B16@0:8
// Implementation: 0x104949d54

// -[FBSDKAppEventsState isCompatibleWithAppEventsState:]
// Type encoding: B24@0:8@16
// Implementation: 0x104949e84

// -[FBSDKAppEventsState isCompatibleWithTokenString:appID:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x104949f08

// -[FBSDKAppEventsState JSONStringForEventsIncludingImplicitEvents:]
// Type encoding: @20@0:8B16
// Implementation: 0x104949fe8

// -[FBSDKAppEventsState numSkipped]
// Type encoding: Q16@0:8
// Implementation: 0x10494a278

// -[FBSDKAppEventsState tokenString]
// Type encoding: @16@0:8
// Implementation: 0x10494a280

// -[FBSDKAppEventsState appID]
// Type encoding: @16@0:8
// Implementation: 0x10494a288

// -[FBSDKAppEventsState mutableEvents]
// Type encoding: @16@0:8
// Implementation: 0x10494a290

// -[FBSDKAppEventsState setMutableEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494a298

// -[FBSDKAppEventsState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10494a2a4

// +[FBSDKAppEventsState eventProcessors]
// Type encoding: @16@0:8
// Implementation: 0x104949548

// +[FBSDKAppEventsState setEventProcessors:]
// Type encoding: v24@0:8@16
// Implementation: 0x104949554

// +[FBSDKAppEventsState supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104949688

@end
