// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRealTimeScanCompoundLogger
// Superclass: NSObject
// Address: 0x112ac5db8

@interface SCRealTimeScanCompoundLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRealTimeScanCompoundLogger initWithLoggers:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060dbbc4

// -[SCRealTimeScanCompoundLogger realTimeScanStateDidChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060dbc3c

// -[SCRealTimeScanCompoundLogger realTimeScanBannerDidDisplayWithFrameId:resultType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060dbd98

// -[SCRealTimeScanCompoundLogger realTimeScanBannerDidReceiveAction:forFrameId:resultType:]
// Type encoding: v40@0:8Q16@24Q32
// Implementation: 0x1060dbf10

// -[SCRealTimeScanCompoundLogger realTimeScanDidReceiveClassifierResponseForFrameId:className:score:classifierVersion:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x1060dc09c

// -[SCRealTimeScanCompoundLogger realTimeScanWillAttemptDecodeForFrameId:withCodeType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060dc268

// -[SCRealTimeScanCompoundLogger realTimeScanDidReceiveDecodeResponseDidSucceed:forFrameId:withCodeType:]
// Type encoding: v36@0:8B16@20Q28
// Implementation: 0x1060dc3e0

// -[SCRealTimeScanCompoundLogger realTimeScanResultDetectedforFrameId:withResultType:withModelKey:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x1060dc56c

// -[SCRealTimeScanCompoundLogger storePerfMetric:value:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1060dc708

// -[SCRealTimeScanCompoundLogger emitPerfMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1060dc8c0

// -[SCRealTimeScanCompoundLogger realTimeScanDidBeginWithStartTimeMs:g2sStartTimeMs:g2sEndTimeMs:startupType:]
// Type encoding: v48@0:8q16q24q32q40
// Implementation: 0x1060dca14

// -[SCRealTimeScanCompoundLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060dcb98

@end
