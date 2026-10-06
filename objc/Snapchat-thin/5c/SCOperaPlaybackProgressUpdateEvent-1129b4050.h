// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlaybackProgressUpdateEvent
// Superclass: NSObject
// Address: 0x1129b4050

@interface SCOperaPlaybackProgressUpdateEvent

// Property: stateType; attributes: TQ,N,R,VstateType
// Property: currentProgressTime; attributes: Td,N,R,VcurrentProgressTime
// Property: description; attributes: T@"NSString",N,R

// -[SCOperaPlaybackProgressUpdateEvent stateType]
// Type encoding: Q16@0:8
// Implementation: 0x104442ad8

// -[SCOperaPlaybackProgressUpdateEvent currentProgressTime]
// Type encoding: d16@0:8
// Implementation: 0x104442ae8

// -[SCOperaPlaybackProgressUpdateEvent initWithStateType:currentProgressTime:]
// Type encoding: @32@0:8Q16d24
// Implementation: 0x104442b00

// -[SCOperaPlaybackProgressUpdateEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104442c2c

// -[SCOperaPlaybackProgressUpdateEvent description]
// Type encoding: @16@0:8
// Implementation: 0x104442c30

// -[SCOperaPlaybackProgressUpdateEvent init]
// Type encoding: @16@0:8
// Implementation: 0x104442c4c

@end
