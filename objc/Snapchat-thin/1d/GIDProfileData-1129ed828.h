// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GIDProfileData
// Superclass: NSObject
// Address: 0x1129ed828

@interface GIDProfileData

// Property: email; attributes: T@"NSString",R,N,V_email
// Property: name; attributes: T@"NSString",R,N,V_name
// Property: givenName; attributes: T@"NSString",R,N,V_givenName
// Property: familyName; attributes: T@"NSString",R,N,V_familyName
// Property: hasImage; attributes: TB,R,N

// -[GIDProfileData initWithEmail:name:givenName:familyName:imageURL:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104a68458

// -[GIDProfileData hasImage]
// Type encoding: B16@0:8
// Implementation: 0x104a685a8

// -[GIDProfileData imageURLWithDimension:]
// Type encoding: @24@0:8Q16
// Implementation: 0x104a685b8

// -[GIDProfileData isFIFEAvatarURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a68854

// -[GIDProfileData initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a68944

// -[GIDProfileData encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a68b24

// -[GIDProfileData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a68bbc

// -[GIDProfileData email]
// Type encoding: @16@0:8
// Implementation: 0x104a68bc0

// -[GIDProfileData name]
// Type encoding: @16@0:8
// Implementation: 0x104a68bc8

// -[GIDProfileData givenName]
// Type encoding: @16@0:8
// Implementation: 0x104a68bd0

// -[GIDProfileData familyName]
// Type encoding: @16@0:8
// Implementation: 0x104a68bd8

// -[GIDProfileData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a68be0

// +[GIDProfileData supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a6893c

@end
