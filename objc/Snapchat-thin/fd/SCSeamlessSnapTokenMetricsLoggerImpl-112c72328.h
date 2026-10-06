// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSeamlessSnapTokenMetricsLoggerImpl
// Superclass: NSObject
// Address: 0x112c72328

@interface SCSeamlessSnapTokenMetricsLoggerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSeamlessSnapTokenMetricsLoggerImpl initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x100b418f0

// -[SCSeamlessSnapTokenMetricsLoggerImpl logFetchWithLatencyMs:accessType:isSyncInvocation:]
// Type encoding: v36@0:8d16Q24B32
// Implementation: 0x100b4277c

// -[SCSeamlessSnapTokenMetricsLoggerImpl logErrorWithNSError:latencyMs:accessType:isSyncInvocation:]
// Type encoding: v44@0:8@16d24Q32B40
// Implementation: 0x10b2758fc

// -[SCSeamlessSnapTokenMetricsLoggerImpl logRequestModificationWithLatencyMs:accessType:isSyncInvocation:]
// Type encoding: v36@0:8d16Q24B32
// Implementation: 0x100b42f90

// -[SCSeamlessSnapTokenMetricsLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b275a74

@end
