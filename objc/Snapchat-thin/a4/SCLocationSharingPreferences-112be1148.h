// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocationSharingPreferences
// Superclass: NSObject
// Address: 0x112be1148

@interface SCLocationSharingPreferences

// Property: sharingAudience; attributes: Tq,R,N,V_sharingAudience
// Property: ghostMode; attributes: TB,R,N,V_ghostMode
// Property: ghostModeExpirationDate; attributes: T@"NSDate",R,C,N,V_ghostModeExpirationDate
// Property: whitelistSharingModeUserIds; attributes: T@"NSArray",R,C,N,V_whitelistSharingModeUserIds
// Property: blacklistSharingModeUserIds; attributes: T@"NSArray",R,C,N,V_blacklistSharingModeUserIds
// Property: onboardedToSimplified; attributes: TB,R,N,V_onboardedToSimplified

// -[SCLocationSharingPreferences initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x100587f18

// -[SCLocationSharingPreferences initWithSharingAudience:ghostMode:ghostModeExpirationDate:whitelistSharingModeUserIds:blacklistSharingModeUserIds:onboardedToSimplified:]
// Type encoding: @56@0:8q16B24@28@36@44B52
// Implementation: 0x109022530

// -[SCLocationSharingPreferences copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x109022630

// -[SCLocationSharingPreferences encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x109022654

// -[SCLocationSharingPreferences hash]
// Type encoding: Q16@0:8
// Implementation: 0x109022704

// -[SCLocationSharingPreferences isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109022798

// -[SCLocationSharingPreferences sharingAudience]
// Type encoding: q16@0:8
// Implementation: 0x100588640

// -[SCLocationSharingPreferences ghostMode]
// Type encoding: B16@0:8
// Implementation: 0x10058d660

// -[SCLocationSharingPreferences ghostModeExpirationDate]
// Type encoding: @16@0:8
// Implementation: 0x109022888

// -[SCLocationSharingPreferences whitelistSharingModeUserIds]
// Type encoding: @16@0:8
// Implementation: 0x109022890

// -[SCLocationSharingPreferences blacklistSharingModeUserIds]
// Type encoding: @16@0:8
// Implementation: 0x109022898

// -[SCLocationSharingPreferences onboardedToSimplified]
// Type encoding: B16@0:8
// Implementation: 0x1090228a0

// -[SCLocationSharingPreferences .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090228a8

@end
