// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRealTimeScanClientLogger
// Superclass: NSObject
// Address: 0x112ac5d90

@interface SCRealTimeScanClientLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRealTimeScanClientLogger realTimeScanStateDidChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060dbba4

// -[SCRealTimeScanClientLogger realTimeScanBannerDidDisplayWithFrameId:resultType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060dbba8

// -[SCRealTimeScanClientLogger realTimeScanBannerDidReceiveAction:forFrameId:resultType:]
// Type encoding: v40@0:8Q16@24Q32
// Implementation: 0x1060dbbac

// -[SCRealTimeScanClientLogger realTimeScanDidReceiveClassifierResponseForFrameId:className:score:classifierVersion:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x1060dbbb0

// -[SCRealTimeScanClientLogger realTimeScanWillAttemptDecodeForFrameId:withCodeType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060dbbb4

// -[SCRealTimeScanClientLogger realTimeScanResultDetectedforFrameId:withResultType:withModelKey:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x1060dbbb8

// -[SCRealTimeScanClientLogger realTimeScanDidReceiveDecodeResponseDidSucceed:forFrameId:withCodeType:]
// Type encoding: v36@0:8B16@20Q28
// Implementation: 0x1060dbbbc

// -[SCRealTimeScanClientLogger realTimeScanDidBeginWithStartTimeMs:g2sStartTimeMs:g2sEndTimeMs:startupType:]
// Type encoding: v48@0:8q16q24q32q40
// Implementation: 0x1060dbbc0

@end
