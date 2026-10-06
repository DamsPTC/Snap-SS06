// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMicFallbackTracker
// Superclass: NSObject
// Address: 0x112967758

@interface SCMicFallbackTracker

// Property: consecutiveSilentRecordingCount; attributes: Tq,N,R
// Property: activationThresholdReached; attributes: TB,N,R
// Property: shouldPinFallbackMic; attributes: TB,N,R

// -[SCMicFallbackTracker initWithSystemPreferences:configuration:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c26c8c

// -[SCMicFallbackTracker consecutiveSilentRecordingCount]
// Type encoding: q16@0:8
// Implementation: 0x103f2977c

// -[SCMicFallbackTracker activationThresholdReached]
// Type encoding: B16@0:8
// Implementation: 0x103f29898

// -[SCMicFallbackTracker shouldPinFallbackMic]
// Type encoding: B16@0:8
// Implementation: 0x103f29920

// -[SCMicFallbackTracker recordCompletedRecordingWithAudioCaptureEnabled:audioQueueStarted:audioSamplesAppended:audioSignalMetrics:routeInputPortTypeAtEnd:voiceIsolationActive:recordedOnFallbackMic:]
// Type encoding: v56@0:8B16B20q24@32@40B48B52
// Implementation: 0x103f29ff0

// -[SCMicFallbackTracker init]
// Type encoding: @16@0:8
// Implementation: 0x103f2a0d8

// -[SCMicFallbackTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103f2a138

@end
