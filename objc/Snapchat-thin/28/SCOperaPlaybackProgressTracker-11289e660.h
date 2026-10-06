// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlaybackProgressTracker
// Superclass: NSObject
// Address: 0x11289e660

@interface SCOperaPlaybackProgressTracker

// Property: totalDuration; attributes: Td,N,VtotalDuration
// Property: playbackUpdatesObservable; attributes: T@,N,&,VplaybackUpdatesObservable
// Property: currentState; attributes: T@"SCOperaPlaybackProgressUpdateEvent",N,R

// -[SCOperaPlaybackProgressTracker next:]
// Type encoding: v24@0:8@16
// Implementation: 0x102cd5694

// -[SCOperaPlaybackProgressTracker complete]
// Type encoding: v16@0:8
// Implementation: 0x102cd571c

// -[SCOperaPlaybackProgressTracker totalDuration]
// Type encoding: d16@0:8
// Implementation: 0x102cd4e70

// -[SCOperaPlaybackProgressTracker setTotalDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x102cd4eb4

// -[SCOperaPlaybackProgressTracker playbackUpdatesObservable]
// Type encoding: @16@0:8
// Implementation: 0x102cd4f04

// -[SCOperaPlaybackProgressTracker setPlaybackUpdatesObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x102cd4f4c

// -[SCOperaPlaybackProgressTracker initWithStateMachine:]
// Type encoding: @24@0:8@16
// Implementation: 0x102cd5178

// -[SCOperaPlaybackProgressTracker currentState]
// Type encoding: @16@0:8
// Implementation: 0x102cd51a8

// -[SCOperaPlaybackProgressTracker changeCurrentProgressTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x102cd5318

// -[SCOperaPlaybackProgressTracker playbackDidChangeRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x102cd5400

// -[SCOperaPlaybackProgressTracker init]
// Type encoding: @16@0:8
// Implementation: 0x102cd5438

// -[SCOperaPlaybackProgressTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x102cd5498

@end
