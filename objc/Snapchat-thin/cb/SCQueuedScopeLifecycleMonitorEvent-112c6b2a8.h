// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCQueuedScopeLifecycleMonitorEvent
// Superclass: NSObject
// Address: 0x112c6b2a8

@interface SCQueuedScopeLifecycleMonitorEvent


// -[SCQueuedScopeLifecycleMonitorEvent internalInit]
// Type encoding: @16@0:8
// Implementation: 0x10b0aa890

// -[SCQueuedScopeLifecycleMonitorEvent matchReportScopeGraphMappingBuild:reportAllScopeGraphMappingsBuilt:reportLifecycleBegan:reportEntryPointBeginning:reportEntryPointBegan:reportLifecycleEnded:reportEntryPointEnding:reportEntryPointEnded:reportOverExposedScope:reportOverRemovedScope:reportDuplicatedLifecycle:reportNilAccessForScopedAccessClass:]
// Type encoding: v112@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80@?88@?96@?104
// Implementation: 0x10b0aa8d4

// -[SCQueuedScopeLifecycleMonitorEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0aab6c

// +[SCQueuedScopeLifecycleMonitorEvent reportAllScopeGraphMappingsBuilt]
// Type encoding: @16@0:8
// Implementation: 0x10b0aa170

// +[SCQueuedScopeLifecycleMonitorEvent reportDuplicatedLifecycleWithLifecycleName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0aa1bc

// +[SCQueuedScopeLifecycleMonitorEvent reportEntryPointBeganWithEntryPointName:entryPointType:lifecycleName:duration:appEventSignals:]
// Type encoding: @56@0:8@16@24@32d40@48
// Implementation: 0x10b0aa228

// +[SCQueuedScopeLifecycleMonitorEvent reportEntryPointBeginningWithEntryPointName:entryPointType:lifecycleName:afterSeconds:appEventSignals:]
// Type encoding: @56@0:8@16@24@32d40@48
// Implementation: 0x10b0aa330

// +[SCQueuedScopeLifecycleMonitorEvent reportEntryPointEndedWithEntryPointName:duration:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10b0aa438

// +[SCQueuedScopeLifecycleMonitorEvent reportEntryPointEndingWithEntryPointName:lifecycleName:afterSeconds:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x10b0aa4b4

// +[SCQueuedScopeLifecycleMonitorEvent reportLifecycleBeganWithLifecycleName:duration:appEventSignals:]
// Type encoding: @40@0:8@16d24@32
// Implementation: 0x10b0aa55c

// +[SCQueuedScopeLifecycleMonitorEvent reportLifecycleEndedWithLifecycleName:duration:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10b0aa604

// +[SCQueuedScopeLifecycleMonitorEvent reportNilAccessForScopedAccessClassWithScopedAccessClassName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0aa680

// +[SCQueuedScopeLifecycleMonitorEvent reportOverExposedScopeWithScopeName:lifecycleName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0aa6ec

// +[SCQueuedScopeLifecycleMonitorEvent reportOverRemovedScopeWithScopeName:lifecycleName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0aa784

// +[SCQueuedScopeLifecycleMonitorEvent reportScopeGraphMappingBuildWithMappingName:durationMs:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10b0aa81c

@end
