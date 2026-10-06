// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAbnormalExitLogger
// Superclass: NSObject
// Address: 0x112a25e30

@interface SCAbnormalExitLogger


// +[SCAbnormalExitLogger classifyLastSessionWithLastApplicationState:crashLogger:appTerminationType:lastSessionANRCrashed:preferences:isDebugBuild:]
// Type encoding: @60@0:8q16@24@32B40@44@?52
// Implementation: 0x1001c8b80

// +[SCAbnormalExitLogger reportMetricWithLastApplicationState:crashLogger:blizzardCrashLogger:appTerminationType:lastSessionANRCrashed:preferences:metricLogger:isDebugBuild:appInsightsMetadataStorage:memoryUsageMetadataStore:transcodingFlagEnabled:]
// Type encoding: v96@0:8q16@24@32@40B48@52@60@?68@76@84B92
// Implementation: 0x10526639c

// +[SCAbnormalExitLogger reportMetricForResult:lastApplicationState:crashLogger:blizzardCrashLogger:metricLogger:appInsightsMetadataStorage:memoryUsageMetadataStore:transcodingFlagEnabled:]
// Type encoding: v76@0:8@16q24@32@40@48@56@64B72
// Implementation: 0x1001de4e4

// +[SCAbnormalExitLogger _didUpdateOS:preferences:]
// Type encoding: B32@0:8^@16@24
// Implementation: 0x1001c9bd0

// +[SCAbnormalExitLogger _didLastSessionTerminatedNormallyWithDidUpdateOS:isUserUpdatingOrHasUpdatedAppRecently:appTerminationType:previousAppState:preferences:]
// Type encoding: B48@0:8B16B20@24q32@40
// Implementation: 0x1001d56b8

// +[SCAbnormalExitLogger _didMemoryCrashedWithDidTerminateNormally:lastSessionANRCrashed:crashLogger:isDebugBuild:]
// Type encoding: B40@0:8B16B20@24@?32
// Implementation: 0x1001ddfcc

@end
