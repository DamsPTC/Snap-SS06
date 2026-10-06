// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ADLExternalCodecStats
// Superclass: NSObject
// Address: 0x112bacbc8

@interface ADLExternalCodecStats

// Property: status; attributes: Tq,R,N,V_status
// Property: initAttemptCount; attributes: Ti,R,N,V_initAttemptCount
// Property: initAttemptFailure; attributes: Ti,R,N,V_initAttemptFailure
// Property: submitFrameCount; attributes: Ti,R,N,V_submitFrameCount
// Property: submitFrameFailureCount; attributes: Ti,R,N,V_submitFrameFailureCount
// Property: processFrameFailureCount; attributes: Ti,R,N,V_processFrameFailureCount
// Property: avgFrameProcessTimeUs; attributes: Tq,R,N,V_avgFrameProcessTimeUs
// Property: mediaCodecStats; attributes: T@"ADLExternalAndroidCodecStats",R,N,V_mediaCodecStats

// -[ADLExternalCodecStats initWithStatus:initAttemptCount:initAttemptFailure:submitFrameCount:submitFrameFailureCount:processFrameFailureCount:avgFrameProcessTimeUs:mediaCodecStats:]
// Type encoding: @60@0:8q16i24i28i32i36i40q44@52
// Implementation: 0x108946468

// -[ADLExternalCodecStats status]
// Type encoding: q16@0:8
// Implementation: 0x1089465c4

// -[ADLExternalCodecStats initAttemptCount]
// Type encoding: i16@0:8
// Implementation: 0x1089465cc

// -[ADLExternalCodecStats initAttemptFailure]
// Type encoding: i16@0:8
// Implementation: 0x1089465d4

// -[ADLExternalCodecStats submitFrameCount]
// Type encoding: i16@0:8
// Implementation: 0x1089465dc

// -[ADLExternalCodecStats submitFrameFailureCount]
// Type encoding: i16@0:8
// Implementation: 0x1089465e4

// -[ADLExternalCodecStats processFrameFailureCount]
// Type encoding: i16@0:8
// Implementation: 0x1089465ec

// -[ADLExternalCodecStats avgFrameProcessTimeUs]
// Type encoding: q16@0:8
// Implementation: 0x1089465f4

// -[ADLExternalCodecStats mediaCodecStats]
// Type encoding: @16@0:8
// Implementation: 0x1089465fc

// -[ADLExternalCodecStats .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108946604

// +[ADLExternalCodecStats ExternalCodecStatsWithStatus:initAttemptCount:initAttemptFailure:submitFrameCount:submitFrameFailureCount:processFrameFailureCount:avgFrameProcessTimeUs:mediaCodecStats:]
// Type encoding: @60@0:8q16i24i28i32i36i40q44@52
// Implementation: 0x108946524

@end
