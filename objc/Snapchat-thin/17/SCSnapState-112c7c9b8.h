// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapState
// Superclass: NSObject
// Address: 0x112c7c9b8

@interface SCSnapState

// Property: viewedTimestamps; attributes: T@"NSDictionary",R,C,N,V_viewedTimestamps
// Property: screenshotState; attributes: T@"NSDictionary",R,C,N,V_screenshotState
// Property: screenCaptureRecordingState; attributes: T@"NSDictionary",R,C,N,V_screenCaptureRecordingState
// Property: replayState; attributes: T@"NSDictionary",R,C,N,V_replayState
// Property: playbackState; attributes: Tq,R,N,V_playbackState
// Property: canBeReplayed; attributes: TB,R,N,V_canBeReplayed

// -[SCSnapState isScreenshotted]
// Type encoding: B16@0:8
// Implementation: 0x1070b68ac

// -[SCSnapState isReplayed]
// Type encoding: B16@0:8
// Implementation: 0x1070b6910

// -[SCSnapState isScreenRecorded]
// Type encoding: B16@0:8
// Implementation: 0x1070b6974

// -[SCSnapState initWithViewedTimestamps:screenshotState:screenCaptureRecordingState:replayState:playbackState:canBeReplayed:]
// Type encoding: @60@0:8@16@24@32@40q48B56
// Implementation: 0x10b62cec8

// -[SCSnapState copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b62cfec

// -[SCSnapState hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b62d010

// -[SCSnapState isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b62d0b0

// -[SCSnapState viewedTimestamps]
// Type encoding: @16@0:8
// Implementation: 0x10b62d1a8

// -[SCSnapState screenshotState]
// Type encoding: @16@0:8
// Implementation: 0x10b62d1b0

// -[SCSnapState screenCaptureRecordingState]
// Type encoding: @16@0:8
// Implementation: 0x10b62d1b8

// -[SCSnapState replayState]
// Type encoding: @16@0:8
// Implementation: 0x10b62d1c0

// -[SCSnapState playbackState]
// Type encoding: q16@0:8
// Implementation: 0x10b62d1c8

// -[SCSnapState canBeReplayed]
// Type encoding: B16@0:8
// Implementation: 0x10b62d1d0

// -[SCSnapState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b62d1d8

@end
