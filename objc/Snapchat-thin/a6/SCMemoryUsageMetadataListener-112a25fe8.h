// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoryUsageMetadataListener
// Superclass: NSObject
// Address: 0x112a25fe8

@interface SCMemoryUsageMetadataListener


// -[SCMemoryUsageMetadataListener initWithObservationQueue:appInsightsMetadataStorage:memoryUsageInfoProvider:metadataStore:appStartExperimentReader:didBecomeActive:didEnterBackground:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1000c9ca0

// -[SCMemoryUsageMetadataListener dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1052670f8

// -[SCMemoryUsageMetadataListener _subscribeOnDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x105267144

// -[SCMemoryUsageMetadataListener _subscribeOnDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x105267270

// -[SCMemoryUsageMetadataListener _subscribeOnMemoryPressureState]
// Type encoding: v16@0:8
// Implementation: 0x1052673b8

// -[SCMemoryUsageMetadataListener _startPeriodicTimerWithIntervalSec:]
// Type encoding: v20@0:8i16
// Implementation: 0x105267564

// -[SCMemoryUsageMetadataListener _writeDevicePhysicalMemory]
// Type encoding: v16@0:8
// Implementation: 0x1052676c8

// -[SCMemoryUsageMetadataListener _writeMemoryUsage]
// Type encoding: v16@0:8
// Implementation: 0x1052677b4

// -[SCMemoryUsageMetadataListener _writeMemoryPressureState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052679e0

// -[SCMemoryUsageMetadataListener _writeAppSessionDuration]
// Type encoding: v16@0:8
// Implementation: 0x105267c9c

// -[SCMemoryUsageMetadataListener .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105267d74

@end
