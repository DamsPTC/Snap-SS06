// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingStreakMetadata
// Superclass: NSObject
// Address: 0x112c81648

@interface SCNMessagingStreakMetadata

// Property: count; attributes: Ti,N,V_count
// Property: expirationTimestampMs; attributes: Tq,N,V_expirationTimestampMs
// Property: expiredStreak; attributes: T@"SCNMessagingExpiredStreakMetadata",&,N,V_expiredStreak
// Property: isFrozen; attributes: TB,N,V_isFrozen

// -[SCNMessagingStreakMetadata initWithCount:expirationTimestampMs:expiredStreak:isFrozen:]
// Type encoding: @40@0:8i16q20@28B36
// Implementation: 0x10b641cdc

// -[SCNMessagingStreakMetadata initWithCount:expirationTimestampMs:isFrozen:]
// Type encoding: @32@0:8i16q20B28
// Implementation: 0x10b641d8c

// -[SCNMessagingStreakMetadata count]
// Type encoding: i16@0:8
// Implementation: 0x10b641d98

// -[SCNMessagingStreakMetadata setCount:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b641da0

// -[SCNMessagingStreakMetadata expirationTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10b641da8

// -[SCNMessagingStreakMetadata setExpirationTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b641db0

// -[SCNMessagingStreakMetadata expiredStreak]
// Type encoding: @16@0:8
// Implementation: 0x10b641db8

// -[SCNMessagingStreakMetadata setExpiredStreak:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641dc0

// -[SCNMessagingStreakMetadata isFrozen]
// Type encoding: B16@0:8
// Implementation: 0x10b641df0

// -[SCNMessagingStreakMetadata setIsFrozen:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b641df8

// -[SCNMessagingStreakMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b641e00

@end
