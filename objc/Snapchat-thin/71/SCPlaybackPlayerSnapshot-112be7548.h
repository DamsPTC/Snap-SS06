// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaybackPlayerSnapshot
// Superclass: NSObject
// Address: 0x112be7548

@interface SCPlaybackPlayerSnapshot

// Property: playbackPosition; attributes: Td,R,N,V_playbackPosition
// Property: totalDuration; attributes: Td,R,N,V_totalDuration
// Property: state; attributes: Tq,R,N,V_state

// -[SCPlaybackPlayerSnapshot initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x109113bdc

// -[SCPlaybackPlayerSnapshot initWithPlaybackPosition:totalDuration:state:]
// Type encoding: @40@0:8d16d24q32
// Implementation: 0x109113c78

// -[SCPlaybackPlayerSnapshot copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x109113cd4

// -[SCPlaybackPlayerSnapshot encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x109113cf8

// -[SCPlaybackPlayerSnapshot hash]
// Type encoding: Q16@0:8
// Implementation: 0x109113d6c

// -[SCPlaybackPlayerSnapshot isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109113e10

// -[SCPlaybackPlayerSnapshot playbackPosition]
// Type encoding: d16@0:8
// Implementation: 0x109113f00

// -[SCPlaybackPlayerSnapshot totalDuration]
// Type encoding: d16@0:8
// Implementation: 0x109113f08

// -[SCPlaybackPlayerSnapshot state]
// Type encoding: q16@0:8
// Implementation: 0x109113f10

@end
