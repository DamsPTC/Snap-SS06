// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreak
// Superclass: NSObject
// Address: 0x112b23828

@interface SCStreak

// Property: streakLength; attributes: TQ,R,N,V_streakLength
// Property: expirationDate; attributes: T@"NSDate",R,C,N,V_expirationDate
// Property: isGroup; attributes: TB,R,N,V_isGroup
// Property: isFrozen; attributes: TB,R,N,V_isFrozen
// Property: expiredStreak; attributes: T@"SCExpiredStreak",R,C,N,V_expiredStreak

// -[SCStreak initWithStreakLength:expirationDate:isGroup:isFrozen:expiredStreak:]
// Type encoding: @48@0:8Q16@24B32B36@40
// Implementation: 0x106c19a70

// -[SCStreak copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106c19b3c

// -[SCStreak hash]
// Type encoding: Q16@0:8
// Implementation: 0x106c19b60

// -[SCStreak isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106c19be4

// -[SCStreak streakLength]
// Type encoding: Q16@0:8
// Implementation: 0x106c19cbc

// -[SCStreak expirationDate]
// Type encoding: @16@0:8
// Implementation: 0x106c19cc4

// -[SCStreak isGroup]
// Type encoding: B16@0:8
// Implementation: 0x106c19ccc

// -[SCStreak isFrozen]
// Type encoding: B16@0:8
// Implementation: 0x106c19cd4

// -[SCStreak expiredStreak]
// Type encoding: @16@0:8
// Implementation: 0x106c19cdc

// -[SCStreak .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c19ce4

@end
