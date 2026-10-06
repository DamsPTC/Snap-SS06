// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRealtimeMemoryMonitor
// Superclass: NSObject
// Address: 0x112bb3018

@interface SCRealtimeMemoryMonitor

// Property: memoryUsageSnapshot; attributes: T@"SCObservable",R,N

// -[SCRealtimeMemoryMonitor initWithTimeInterval:composerTimeInterval:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x108bba070

// -[SCRealtimeMemoryMonitor memoryUsageSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x108bba12c

// -[SCRealtimeMemoryMonitor startRealtimeTracking]
// Type encoding: v16@0:8
// Implementation: 0x108bba154

// -[SCRealtimeMemoryMonitor stopRealtimeTracking]
// Type encoding: v16@0:8
// Implementation: 0x108bba334

// -[SCRealtimeMemoryMonitor _trackMemoryUsageWithAllowComposerMemoryUsageUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x108bba370

// -[SCRealtimeMemoryMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bba4e4

@end
