// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPauseController
// Superclass: NSObject
// Address: 0x11289e200

@interface SCOperaPauseController

// Property: isPausedChangedObservable; attributes: T@,N,R
// Property: shouldShowOverlayChangedObservable; attributes: T@,N,R
// Property: isPaused; attributes: TB,N,R
// Property: shouldShowOverlay; attributes: TB,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCOperaPauseController isPausedChangedObservable]
// Type encoding: @16@0:8
// Implementation: 0x102ccfdc8

// -[SCOperaPauseController shouldShowOverlayChangedObservable]
// Type encoding: @16@0:8
// Implementation: 0x102ccfed0

// -[SCOperaPauseController isPaused]
// Type encoding: B16@0:8
// Implementation: 0x102ccffc4

// -[SCOperaPauseController shouldShowOverlay]
// Type encoding: B16@0:8
// Implementation: 0x102cd0048

// -[SCOperaPauseController pauseWithOverlay:reason:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x102cd01b4

// -[SCOperaPauseController pauseWithOverlay:reason:caller:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x102cd0214

// -[SCOperaPauseController isPausedFor:]
// Type encoding: B24@0:8@16
// Implementation: 0x102cd0408

// -[SCOperaPauseController callersDescriptionFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x102cd0540

// -[SCOperaPauseController resumeWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x102cd06b0

// -[SCOperaPauseController addParentPauseController:]
// Type encoding: v24@0:8@16
// Implementation: 0x102cd070c

// -[SCOperaPauseController reset]
// Type encoding: v16@0:8
// Implementation: 0x102cd07d4

// -[SCOperaPauseController description]
// Type encoding: @16@0:8
// Implementation: 0x102cd0808

// -[SCOperaPauseController init]
// Type encoding: @16@0:8
// Implementation: 0x102cd0a58

// -[SCOperaPauseController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x102cd0b64

@end
