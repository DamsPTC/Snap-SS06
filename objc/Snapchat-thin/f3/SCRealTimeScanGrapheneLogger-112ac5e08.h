// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRealTimeScanGrapheneLogger
// Superclass: NSObject
// Address: 0x112ac5e08

@interface SCRealTimeScanGrapheneLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRealTimeScanGrapheneLogger initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060dcba4

// -[SCRealTimeScanGrapheneLogger realTimeScanWillAttemptDecodeForFrameId:withCodeType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060dcc50

// -[SCRealTimeScanGrapheneLogger realTimeScanDidReceiveDecodeResponseDidSucceed:forFrameId:withCodeType:]
// Type encoding: v36@0:8B16@20Q28
// Implementation: 0x1060dcc94

// -[SCRealTimeScanGrapheneLogger realTimeScanBannerDidDisplayWithFrameId:resultType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060dcce0

// -[SCRealTimeScanGrapheneLogger realTimeScanBannerDidReceiveAction:forFrameId:resultType:]
// Type encoding: v40@0:8Q16@24Q32
// Implementation: 0x1060dcd28

// -[SCRealTimeScanGrapheneLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060dcd80

@end
