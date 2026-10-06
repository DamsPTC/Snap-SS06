// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBadFrameRateStatsTracker
// Superclass: NSObject
// Address: 0x112be7d18

@interface SCBadFrameRateStatsTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBadFrameRateStatsTracker initWithAppStartExperimentReader:crashServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000adb7c

// -[SCBadFrameRateStatsTracker dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109128f88

// -[SCBadFrameRateStatsTracker processFrameTimestamp:frameTargetTimestamp:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x100c7b0d0

// -[SCBadFrameRateStatsTracker totalBadFrameCount]
// Type encoding: q16@0:8
// Implementation: 0x109128fcc

// -[SCBadFrameRateStatsTracker pauseDisplay]
// Type encoding: v16@0:8
// Implementation: 0x109128fd4

// -[SCBadFrameRateStatsTracker frameDurationBuckets]
// Type encoding: @16@0:8
// Implementation: 0x109128fe0

// -[SCBadFrameRateStatsTracker totalFrameCount]
// Type encoding: q16@0:8
// Implementation: 0x109128ff8

// -[SCBadFrameRateStatsTracker totalBadFrameDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x109129000

// -[SCBadFrameRateStatsTracker hangThresholdMs]
// Type encoding: d16@0:8
// Implementation: 0x109129014

// -[SCBadFrameRateStatsTracker totalHangsCount]
// Type encoding: q16@0:8
// Implementation: 0x109129028

// -[SCBadFrameRateStatsTracker totalHangFrameDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x109129030

// -[SCBadFrameRateStatsTracker _setBadFrameBucket:]
// Type encoding: v24@0:8d16
// Implementation: 0x109129044

// -[SCBadFrameRateStatsTracker _insertTraceSpanWithFrameInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x109129178

// -[SCBadFrameRateStatsTracker _insertJankSpanWithFrameInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x10912922c

// -[SCBadFrameRateStatsTracker _createWatchdogTimerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x100c7b1e4

// -[SCBadFrameRateStatsTracker _cancelWatchdogTimer]
// Type encoding: v16@0:8
// Implementation: 0x10912930c

// -[SCBadFrameRateStatsTracker _checkMainThreadResponsiveness]
// Type encoding: v16@0:8
// Implementation: 0x109129348

// -[SCBadFrameRateStatsTracker _reportHangNonFatalErrorWithHangDuration:timestamp:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1091293cc

// -[SCBadFrameRateStatsTracker _hangNonFatalThreadCaptureOption]
// Type encoding: @16@0:8
// Implementation: 0x1091294b0

// -[SCBadFrameRateStatsTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091294f0

@end
