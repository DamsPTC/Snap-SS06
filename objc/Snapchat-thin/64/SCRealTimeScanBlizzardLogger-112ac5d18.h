// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRealTimeScanBlizzardLogger
// Superclass: NSObject
// Address: 0x112ac5d18

@interface SCRealTimeScanBlizzardLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRealTimeScanBlizzardLogger initWithUserTrackedLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060db4a0

// -[SCRealTimeScanBlizzardLogger realTimeScanStateDidChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060db514

// -[SCRealTimeScanBlizzardLogger realTimeScanBannerDidDisplayWithFrameId:resultType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060db594

// -[SCRealTimeScanBlizzardLogger realTimeScanBannerDidReceiveAction:forFrameId:resultType:]
// Type encoding: v40@0:8Q16@24Q32
// Implementation: 0x1060db658

// -[SCRealTimeScanBlizzardLogger realTimeScanDidReceiveClassifierResponseForFrameId:className:score:classifierVersion:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x1060db754

// -[SCRealTimeScanBlizzardLogger realTimeScanWillAttemptDecodeForFrameId:withCodeType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060db86c

// -[SCRealTimeScanBlizzardLogger realTimeScanResultDetectedforFrameId:withResultType:withModelKey:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x1060db930

// -[SCRealTimeScanBlizzardLogger realTimeScanDidReceiveDecodeResponseDidSucceed:forFrameId:withCodeType:]
// Type encoding: v36@0:8B16@20Q28
// Implementation: 0x1060dba1c

// -[SCRealTimeScanBlizzardLogger realTimeScanDidBeginWithStartTimeMs:g2sStartTimeMs:g2sEndTimeMs:startupType:]
// Type encoding: v48@0:8q16q24q32q40
// Implementation: 0x1060dbaf8

// -[SCRealTimeScanBlizzardLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060dbb98

@end
