// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFilterSwipeMetadata
// Superclass: NSObject
// Address: 0x112bc0088

@interface SCFilterSwipeMetadata

// Property: viewCount; attributes: Tq,R,N
// Property: totalViewTime; attributes: Td,R,N
// Property: swipeTime; attributes: Td,R,N
// Property: startViewingTime; attributes: T@"SCTimestamp",R,N
// Property: endViewingTime; attributes: T@"SCTimestamp",R,N
// Property: filterInfoValue; attributes: T@"NSNumber",&,N,V_filterInfoValue
// Property: filterScore; attributes: T@"NSNumber",&,N,V_filterScore
// Property: renderTime; attributes: T@"NSDate",&,N,V_renderTime
// Property: filterStreakValue; attributes: Tq,N,V_filterStreakValue
// Property: filterStreakType; attributes: Tq,N,V_filterStreakType
// Property: lastSwipeDirection; attributes: Tq,N,V_lastSwipeDirection
// Property: filterSource; attributes: Tq,N,V_filterSource
// Property: tapCount; attributes: TQ,N,V_tapCount
// Property: swipeId; attributes: T@"NSString",&,N,V_swipeId

// -[SCFilterSwipeMetadata init]
// Type encoding: @16@0:8
// Implementation: 0x108d10380

// -[SCFilterSwipeMetadata startViewingWithSpinning:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d10414

// -[SCFilterSwipeMetadata pauseViewing]
// Type encoding: v16@0:8
// Implementation: 0x108d1047c

// -[SCFilterSwipeMetadata endViewing]
// Type encoding: v16@0:8
// Implementation: 0x108d104f4

// -[SCFilterSwipeMetadata totalViewTime]
// Type encoding: d16@0:8
// Implementation: 0x108d10578

// -[SCFilterSwipeMetadata swipeTime]
// Type encoding: d16@0:8
// Implementation: 0x108d105ac

// -[SCFilterSwipeMetadata startViewingTime]
// Type encoding: @16@0:8
// Implementation: 0x108d10614

// -[SCFilterSwipeMetadata endViewingTime]
// Type encoding: @16@0:8
// Implementation: 0x108d1063c

// -[SCFilterSwipeMetadata viewCount]
// Type encoding: q16@0:8
// Implementation: 0x108d10680

// -[SCFilterSwipeMetadata isViewing]
// Type encoding: B16@0:8
// Implementation: 0x108d10690

// -[SCFilterSwipeMetadata isPaused]
// Type encoding: B16@0:8
// Implementation: 0x108d10698

// -[SCFilterSwipeMetadata isSpinning]
// Type encoding: B16@0:8
// Implementation: 0x108d106a0

// -[SCFilterSwipeMetadata swipeId]
// Type encoding: @16@0:8
// Implementation: 0x108d106a8

// -[SCFilterSwipeMetadata setSwipeId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d106b0

// -[SCFilterSwipeMetadata filterInfoValue]
// Type encoding: @16@0:8
// Implementation: 0x108d106e0

// -[SCFilterSwipeMetadata setFilterInfoValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d106e8

// -[SCFilterSwipeMetadata filterScore]
// Type encoding: @16@0:8
// Implementation: 0x108d10718

// -[SCFilterSwipeMetadata setFilterScore:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d10720

// -[SCFilterSwipeMetadata renderTime]
// Type encoding: @16@0:8
// Implementation: 0x108d10750

// -[SCFilterSwipeMetadata setRenderTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d10758

// -[SCFilterSwipeMetadata filterStreakValue]
// Type encoding: q16@0:8
// Implementation: 0x108d10788

// -[SCFilterSwipeMetadata setFilterStreakValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x108d10790

// -[SCFilterSwipeMetadata filterStreakType]
// Type encoding: q16@0:8
// Implementation: 0x108d10798

// -[SCFilterSwipeMetadata setFilterStreakType:]
// Type encoding: v24@0:8q16
// Implementation: 0x108d107a0

// -[SCFilterSwipeMetadata lastSwipeDirection]
// Type encoding: q16@0:8
// Implementation: 0x108d107a8

// -[SCFilterSwipeMetadata setLastSwipeDirection:]
// Type encoding: v24@0:8q16
// Implementation: 0x108d107b0

// -[SCFilterSwipeMetadata filterSource]
// Type encoding: q16@0:8
// Implementation: 0x108d107b8

// -[SCFilterSwipeMetadata setFilterSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x108d107c0

// -[SCFilterSwipeMetadata tapCount]
// Type encoding: Q16@0:8
// Implementation: 0x108d107c8

// -[SCFilterSwipeMetadata setTapCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108d107d0

// -[SCFilterSwipeMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d107d8

@end
