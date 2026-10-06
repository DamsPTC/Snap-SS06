// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAudioSessionListenerAnnouncer
// Superclass: NSObject
// Address: 0x112cb5920

@interface SCAudioSessionListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAudioSessionListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x10b740820

// -[SCAudioSessionListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10087e354

// -[SCAudioSessionListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7409fc

// -[SCAudioSessionListenerAnnouncer audioSession:didChangeVolume:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10b740c2c

// -[SCAudioSessionListenerAnnouncer audioSessionDidBeginInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b740d44

// -[SCAudioSessionListenerAnnouncer audioSession:didEndInterruption:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b740e4c

// -[SCAudioSessionListenerAnnouncer audioSessionRouteDidChangeReasonNewDeviceAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b740f5c

// -[SCAudioSessionListenerAnnouncer audioSessionRouteDidChangeReasonOldDeviceUnavailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b741064

// -[SCAudioSessionListenerAnnouncer audioSessionRouteDidChangeReasonCategoryChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b74116c

// -[SCAudioSessionListenerAnnouncer audioSessionRouteDidChangeReasonOverride:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b741274

// -[SCAudioSessionListenerAnnouncer audioSessionMediaServicesWereLost:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b74137c

// -[SCAudioSessionListenerAnnouncer audioSessionMediaServicesWereReset:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b741484

// -[SCAudioSessionListenerAnnouncer audioSession:didChangeProximityMonitoring:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b74158c

// -[SCAudioSessionListenerAnnouncer audioSessionSilenceSecondaryAudioHintTypeDidChangeToStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b74169c

// -[SCAudioSessionListenerAnnouncer audioSessionSilenceSecondaryAudioHintTypeDidChangeToEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7417a4

// -[SCAudioSessionListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7418ac

// -[SCAudioSessionListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1000f5144

@end
