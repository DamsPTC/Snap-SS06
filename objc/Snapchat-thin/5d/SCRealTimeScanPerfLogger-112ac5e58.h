// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRealTimeScanPerfLogger
// Superclass: NSObject
// Address: 0x112ac5e58

@interface SCRealTimeScanPerfLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRealTimeScanPerfLogger init]
// Type encoding: @16@0:8
// Implementation: 0x1060dce2c

// -[SCRealTimeScanPerfLogger storePerfMetric:value:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1060dce98

// -[SCRealTimeScanPerfLogger emitPerfMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1060dcf3c

// -[SCRealTimeScanPerfLogger realTimeScanDidBeginWithStartTimeMs:g2sStartTimeMs:g2sEndTimeMs:startupType:]
// Type encoding: v48@0:8q16q24q32q40
// Implementation: 0x1060dd080

// -[SCRealTimeScanPerfLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060dd084

@end
