// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatteryCPUMonitor
// Superclass: NSObject
// Address: 0x112a277f8

@interface SCBatteryCPUMonitor

// Property: usageListener; attributes: T@?,C,N,V_cpuUsageListener

// -[SCBatteryCPUMonitor initWithFrequency:applicationLifecycleEvents:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x100119450

// -[SCBatteryCPUMonitor initWithApplicationLifecycleEvents:]
// Type encoding: @24@0:8@16
// Implementation: 0x100119444

// -[SCBatteryCPUMonitor setupCpuTimeListener:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10011ad2c

// -[SCBatteryCPUMonitor startMonitoring]
// Type encoding: v16@0:8
// Implementation: 0x10011ad5c

// -[SCBatteryCPUMonitor stopMonitoring]
// Type encoding: v16@0:8
// Implementation: 0x1052d857c

// -[SCBatteryCPUMonitor didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1052d85e8

// -[SCBatteryCPUMonitor willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052d85ec

// -[SCBatteryCPUMonitor cpuUsage]
// Type encoding: d16@0:8
// Implementation: 0x1052d85f0

// -[SCBatteryCPUMonitor _updateEncodedCpuUsage]
// Type encoding: v16@0:8
// Implementation: 0x1052d85fc

// -[SCBatteryCPUMonitor _createcpuMonitorTimer]
// Type encoding: @16@0:8
// Implementation: 0x10011ae04

// -[SCBatteryCPUMonitor _teardownCpuMonitorTimer]
// Type encoding: v16@0:8
// Implementation: 0x1052d875c

// -[SCBatteryCPUMonitor _inAppActive]
// Type encoding: B16@0:8
// Implementation: 0x1052d8788

// -[SCBatteryCPUMonitor _appInBackground]
// Type encoding: B16@0:8
// Implementation: 0x1052d87d0

// -[SCBatteryCPUMonitor usageListener]
// Type encoding: @?16@0:8
// Implementation: 0x1052d8850

// -[SCBatteryCPUMonitor setUsageListener:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10011a164

// -[SCBatteryCPUMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052d8858

@end
