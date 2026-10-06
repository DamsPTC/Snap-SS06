// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScopeGraphMemoryReporter
// Superclass: NSObject
// Address: 0x112a41018

@interface SCScopeGraphMemoryReporter


// -[SCScopeGraphMemoryReporter initWithGraphene:memorySnapshot:deviceMemoryBucket:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1054d69ac

// -[SCScopeGraphMemoryReporter _initWithGraphene:memorySnapshot:deviceMemoryBucket:circumstanceEngine:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1054d6a80

// -[SCScopeGraphMemoryReporter reportAllScopeGraphMappingsBuilt]
// Type encoding: v16@0:8
// Implementation: 0x1054d6cfc

// -[SCScopeGraphMemoryReporter reportBuildDurationForScopeGraphMapping:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1054d6d00

// -[SCScopeGraphMemoryReporter reportBeginForLifecycle:duration:appEventSignals:isOnStartupPath:startupType:]
// Type encoding: v52@0:8@16d24@32B40@44
// Implementation: 0x1054d6d04

// -[SCScopeGraphMemoryReporter reportBeginForEntryPoint:ofType:inLifecycle:duration:appEventSignals:isOnStartupPath:startupType:startupToPage:]
// Type encoding: v76@0:8@16@24@32d40@48B56@60@68
// Implementation: 0x1054d6e40

// -[SCScopeGraphMemoryReporter reportProvideForServiceProvider:duration:isOnStartupPath:startupType:startupToPage:]
// Type encoding: v52@0:8@16d24B32@36@44
// Implementation: 0x1054d6e44

// -[SCScopeGraphMemoryReporter reportBeginInitiatedForEntryPoint:ofType:inLifecycle:afterSeconds:appEventSignals:]
// Type encoding: v56@0:8@16@24@32d40@48
// Implementation: 0x1054d6e48

// -[SCScopeGraphMemoryReporter reportEndForLifecycle:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1054d6e4c

// -[SCScopeGraphMemoryReporter reportEndForEntryPoint:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1054d6f58

// -[SCScopeGraphMemoryReporter reportEndInitiatedForEntryPoint:inLifecycle:afterSeconds:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1054d6f5c

// -[SCScopeGraphMemoryReporter reportPageFaultsForEntryPoint:pageFaults:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1054d6f60

// -[SCScopeGraphMemoryReporter reportPageInsForEntryPoint:pageIns:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1054d6f64

// -[SCScopeGraphMemoryReporter reportOverExposedScope:inLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054d6f68

// -[SCScopeGraphMemoryReporter reportOverRemovedScope:inLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054d6f6c

// -[SCScopeGraphMemoryReporter reportDuplicateLifecycle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054d6f70

// -[SCScopeGraphMemoryReporter reportNilAccessForScopedAccessClass:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054d6f74

// -[SCScopeGraphMemoryReporter reportNeverEndingEntryPoint:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054d6f78

// -[SCScopeGraphMemoryReporter reportTaskEventsInfoErrorWithEntryPoint:pageType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054d6f7c

// -[SCScopeGraphMemoryReporter _didUpdateMemoryUsageStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054d6f80

// -[SCScopeGraphMemoryReporter _updateMemoryTrackerForTrackedLifecycles:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054d7098

// -[SCScopeGraphMemoryReporter _initMemoryTrackerForLifecycle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054d7204

// -[SCScopeGraphMemoryReporter _reportMemoryUsageForLifecycle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054d7280

// -[SCScopeGraphMemoryReporter _shouldTrackLifecycle:]
// Type encoding: B24@0:8@16
// Implementation: 0x1054d73c8

// -[SCScopeGraphMemoryReporter lifecycleAllowlist]
// Type encoding: @16@0:8
// Implementation: 0x1054d7528

// -[SCScopeGraphMemoryReporter _parseScopeFromLifecycle:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054d7594

// -[SCScopeGraphMemoryReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054d7638

@end
