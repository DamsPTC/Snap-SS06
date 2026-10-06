// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConfigMetricLoggerImpl
// Superclass: NSObject
// Address: 0x112a2b308

@interface SCConfigMetricLoggerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCConfigMetricLoggerImpl initWithConfigMetric:startupCompleteTracker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10010181c

// -[SCConfigMetricLoggerImpl _latestInStartup]
// Type encoding: B16@0:8
// Implementation: 0x100101958

// -[SCConfigMetricLoggerImpl logSingleReadConfig:results:durationMs:cacheHit:]
// Type encoding: v44@0:8@16@24d32B40
// Implementation: 0x10010e1e4

// -[SCConfigMetricLoggerImpl logCOFBulkLoad:]
// Type encoding: v20@0:8i16
// Implementation: 0x100290fb4

// -[SCConfigMetricLoggerImpl logConfigRuleEvaluated:configResult:preloadedNamespaceKey:evaluationOutcome:]
// Type encoding: v44@0:8@16@24i32q36
// Implementation: 0x1001105c8

// -[SCConfigMetricLoggerImpl logPropertyHandlerUnavailable:]
// Type encoding: v20@0:8i16
// Implementation: 0x100337fdc

// -[SCConfigMetricLoggerImpl logStudyExposure:experimentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1001131f8

// -[SCConfigMetricLoggerImpl logCppSingleReadConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1001018ec

// -[SCConfigMetricLoggerImpl logRecoveryWait:timedOut:durationMs:]
// Type encoding: v36@0:8q16B24d28
// Implementation: 0x1053277b0

// -[SCConfigMetricLoggerImpl logRecoveryFinished:recoveryOutcome:durationMs:]
// Type encoding: v40@0:8q16q24d32
// Implementation: 0x105327834

// -[SCConfigMetricLoggerImpl logHeuristicRecoveryStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x105327a04

// -[SCConfigMetricLoggerImpl logConfigRecoveryNetworkMonitorEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x105327ba8

// -[SCConfigMetricLoggerImpl logForegroundPushRecoveryWithRestartBehavior:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105327c00

// -[SCConfigMetricLoggerImpl logRecoveryConfigsAppliedWithSource:applied:rejected:protectedWrite:]
// Type encoding: v36@0:8@16i24i28B32
// Implementation: 0x105327c60

// -[SCConfigMetricLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105327cd8

@end
