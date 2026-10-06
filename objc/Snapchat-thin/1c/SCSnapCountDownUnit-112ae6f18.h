// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapCountDownUnit
// Superclass: NSObject
// Address: 0x112ae6f18

@interface SCSnapCountDownUnit

// Property: paused; attributes: TB,N,V_paused
// Property: lastCountDownTime; attributes: T@"NSDate",&,N,V_lastCountDownTime
// Property: leftTimeInterval; attributes: Td,N,V_leftTimeInterval
// Property: duration; attributes: Td,N,V_duration
// Property: isInfinite; attributes: TB,N,V_isInfinite

// -[SCSnapCountDownUnit initWithStartCountDownTime:duration:isInfinite:timeProvider:]
// Type encoding: @44@0:8@16d24B32@36
// Implementation: 0x1065a1d40

// -[SCSnapCountDownUnit leftTime]
// Type encoding: d16@0:8
// Implementation: 0x1065a1dfc

// -[SCSnapCountDownUnit updateTimeLeft]
// Type encoding: v16@0:8
// Implementation: 0x1065a1e28

// -[SCSnapCountDownUnit secondsPlayed]
// Type encoding: d16@0:8
// Implementation: 0x1065a1ed4

// -[SCSnapCountDownUnit paused]
// Type encoding: B16@0:8
// Implementation: 0x1065a1f40

// -[SCSnapCountDownUnit setPaused:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065a1f48

// -[SCSnapCountDownUnit lastCountDownTime]
// Type encoding: @16@0:8
// Implementation: 0x1065a1f50

// -[SCSnapCountDownUnit setLastCountDownTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a1f58

// -[SCSnapCountDownUnit leftTimeInterval]
// Type encoding: d16@0:8
// Implementation: 0x1065a1f88

// -[SCSnapCountDownUnit setLeftTimeInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x1065a1f90

// -[SCSnapCountDownUnit duration]
// Type encoding: d16@0:8
// Implementation: 0x1065a1f98

// -[SCSnapCountDownUnit setDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x1065a1fa0

// -[SCSnapCountDownUnit isInfinite]
// Type encoding: B16@0:8
// Implementation: 0x1065a1fa8

// -[SCSnapCountDownUnit setIsInfinite:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065a1fb0

// -[SCSnapCountDownUnit .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065a1fb8

@end
