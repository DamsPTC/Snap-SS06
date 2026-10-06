// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMusicPlaybackEvent
// Superclass: NSObject
// Address: 0x1129771b8

@interface SCMusicPlaybackEvent

// Property: eventType; attributes: Tq,N,R,VeventType
// Property: trackId; attributes: TQ,N,R,VtrackId
// Property: trackOffsetMs; attributes: Td,N,R,VtrackOffsetMs
// Property: wallClockTime; attributes: Td,N,R,VwallClockTime
// Property: description; attributes: T@"NSString",N,R

// -[SCMusicPlaybackEvent eventType]
// Type encoding: q16@0:8
// Implementation: 0x103fcc528

// -[SCMusicPlaybackEvent trackId]
// Type encoding: Q16@0:8
// Implementation: 0x103fcc538

// -[SCMusicPlaybackEvent trackOffsetMs]
// Type encoding: d16@0:8
// Implementation: 0x103fcc548

// -[SCMusicPlaybackEvent wallClockTime]
// Type encoding: d16@0:8
// Implementation: 0x103fcc558

// -[SCMusicPlaybackEvent initWithEventType:trackId:trackOffsetMs:wallClockTime:]
// Type encoding: @48@0:8q16Q24d32d40
// Implementation: 0x103fcc570

// -[SCMusicPlaybackEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x103fcc714

// -[SCMusicPlaybackEvent description]
// Type encoding: @16@0:8
// Implementation: 0x103fcc718

// -[SCMusicPlaybackEvent init]
// Type encoding: @16@0:8
// Implementation: 0x103fcc734

@end
