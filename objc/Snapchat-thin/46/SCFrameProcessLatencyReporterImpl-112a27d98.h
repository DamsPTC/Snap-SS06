// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFrameProcessLatencyReporterImpl
// Superclass: NSObject
// Address: 0x112a27d98

@interface SCFrameProcessLatencyReporterImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFrameProcessLatencyReporterImpl initWithBlizzardLogger:perfLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000bf678

// -[SCFrameProcessLatencyReporterImpl didBeginRecording]
// Type encoding: v16@0:8
// Implementation: 0x1052ed77c

// -[SCFrameProcessLatencyReporterImpl didStopRecording]
// Type encoding: v16@0:8
// Implementation: 0x1052ed804

// -[SCFrameProcessLatencyReporterImpl didCancelRecording]
// Type encoding: v16@0:8
// Implementation: 0x1052edadc

// -[SCFrameProcessLatencyReporterImpl didProcessFrameBuffer:receivedTime:componentFrameProcessingTimes:]
// Type encoding: v40@0:8d16d24@32
// Implementation: 0x10070af1c

// -[SCFrameProcessLatencyReporterImpl didDropFrameBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1052edb30

// -[SCFrameProcessLatencyReporterImpl didChangeCapturerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052edb70

// -[SCFrameProcessLatencyReporterImpl didChangeUltraWideCameraActiveState:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052edbf8

// -[SCFrameProcessLatencyReporterImpl didUpdateVideoCaptureConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052edc2c

// -[SCFrameProcessLatencyReporterImpl _lowLightStatus:]
// Type encoding: q24@0:8@16
// Implementation: 0x1052edc88

// -[SCFrameProcessLatencyReporterImpl _hasNightModeConditions:]
// Type encoding: B24@0:8@16
// Implementation: 0x1052edcc8

// -[SCFrameProcessLatencyReporterImpl _logStickyVideoPerformanceMetricWithEventName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052edd24

// -[SCFrameProcessLatencyReporterImpl _logGrapheneMetricForStickyVideo]
// Type encoding: v16@0:8
// Implementation: 0x1052edf68

// -[SCFrameProcessLatencyReporterImpl _avgFPS]
// Type encoding: d16@0:8
// Implementation: 0x1052ee034

// -[SCFrameProcessLatencyReporterImpl _avgFrameProcessingTimeSec]
// Type encoding: d16@0:8
// Implementation: 0x1052ee074

// -[SCFrameProcessLatencyReporterImpl _avgFrameTimestampGapMs]
// Type encoding: d16@0:8
// Implementation: 0x1052ee094

// -[SCFrameProcessLatencyReporterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052ee09c

@end
