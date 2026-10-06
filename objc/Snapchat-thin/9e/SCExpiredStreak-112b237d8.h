// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExpiredStreak
// Superclass: NSObject
// Address: 0x112b237d8

@interface SCExpiredStreak

// Property: streakCount; attributes: TQ,R,N,V_streakCount
// Property: restorableStreakCount; attributes: TQ,R,N,V_restorableStreakCount
// Property: extendedRestorableStreakCount; attributes: TQ,R,N,V_extendedRestorableStreakCount
// Property: timestampMs; attributes: Tq,R,N,V_timestampMs
// Property: isRestorable; attributes: TB,R,N,V_isRestorable
// Property: isRestorableExtended; attributes: TB,R,N,V_isRestorableExtended
// Property: restoreExpirationTimestampMs; attributes: Tq,R,N,V_restoreExpirationTimestampMs

// -[SCExpiredStreak initWithStreakCount:restorableStreakCount:extendedRestorableStreakCount:timestampMs:isRestorable:isRestorableExtended:restoreExpirationTimestampMs:]
// Type encoding: @64@0:8Q16Q24Q32q40B48B52q56
// Implementation: 0x106c19828

// -[SCExpiredStreak copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106c198a8

// -[SCExpiredStreak hash]
// Type encoding: Q16@0:8
// Implementation: 0x106c198cc

// -[SCExpiredStreak isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106c19950

// -[SCExpiredStreak streakCount]
// Type encoding: Q16@0:8
// Implementation: 0x106c19a38

// -[SCExpiredStreak restorableStreakCount]
// Type encoding: Q16@0:8
// Implementation: 0x106c19a40

// -[SCExpiredStreak extendedRestorableStreakCount]
// Type encoding: Q16@0:8
// Implementation: 0x106c19a48

// -[SCExpiredStreak timestampMs]
// Type encoding: q16@0:8
// Implementation: 0x106c19a50

// -[SCExpiredStreak isRestorable]
// Type encoding: B16@0:8
// Implementation: 0x106c19a58

// -[SCExpiredStreak isRestorableExtended]
// Type encoding: B16@0:8
// Implementation: 0x106c19a60

// -[SCExpiredStreak restoreExpirationTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x106c19a68

@end
