// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGrapheneReportingScopeLifecycleMonitor
// Superclass: NSObject
// Address: 0x112a25b38

@interface SCGrapheneReportingScopeLifecycleMonitor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGrapheneReportingScopeLifecycleMonitor initWithMetricsReporter:timerFactory:entryPointEndTimeout:]
// Type encoding: @40@0:8@16@?24d32
// Implementation: 0x105260688

// -[SCGrapheneReportingScopeLifecycleMonitor initWithCurrentTime:metricsReporter:timerFactory:entryPointEndTimeout:]
// Type encoding: @48@0:8^?16@24@?32d40
// Implementation: 0x10526069c

// -[SCGrapheneReportingScopeLifecycleMonitor setMemoryUsageMetricsReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105260878

// -[SCGrapheneReportingScopeLifecycleMonitor setMetricsReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10526087c

// -[SCGrapheneReportingScopeLifecycleMonitor setExceptionReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105260880

// -[SCGrapheneReportingScopeLifecycleMonitor setPerformanceMetricsReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105260884

// -[SCGrapheneReportingScopeLifecycleMonitor setStartupInfoService:]
// Type encoding: v24@0:8@16
// Implementation: 0x105260888

// -[SCGrapheneReportingScopeLifecycleMonitor scopeGraphAllMappingsBuilt]
// Type encoding: v16@0:8
// Implementation: 0x1052608b8

// -[SCGrapheneReportingScopeLifecycleMonitor scopeGraphMappingBuildStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052608bc

// -[SCGrapheneReportingScopeLifecycleMonitor scopeGraphMappingBuildEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x105260964

// -[SCGrapheneReportingScopeLifecycleMonitor lifecycleBeginning:]
// Type encoding: v24@0:8@16
// Implementation: 0x105260a1c

// -[SCGrapheneReportingScopeLifecycleMonitor lifecycleBegan:]
// Type encoding: v24@0:8@16
// Implementation: 0x105260af4

// -[SCGrapheneReportingScopeLifecycleMonitor lifecycleEnding:]
// Type encoding: v24@0:8@16
// Implementation: 0x105260c64

// -[SCGrapheneReportingScopeLifecycleMonitor lifecycleEnded:]
// Type encoding: v24@0:8@16
// Implementation: 0x105260d24

// -[SCGrapheneReportingScopeLifecycleMonitor entryPoint:beginningInLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105260e30

// -[SCGrapheneReportingScopeLifecycleMonitor entryPoint:beganInLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105261014

// -[SCGrapheneReportingScopeLifecycleMonitor entryPoint:endingInLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10526134c

// -[SCGrapheneReportingScopeLifecycleMonitor entryPoint:endedInLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052615e4

// -[SCGrapheneReportingScopeLifecycleMonitor services:willBeExposedInLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105261740

// -[SCGrapheneReportingScopeLifecycleMonitor serviceProviderProviding:]
// Type encoding: v24@0:8@16
// Implementation: 0x105261744

// -[SCGrapheneReportingScopeLifecycleMonitor serviceProviderProvided:]
// Type encoding: v24@0:8@16
// Implementation: 0x105261814

// -[SCGrapheneReportingScopeLifecycleMonitor scope:willBeExposedFromLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10526197c

// -[SCGrapheneReportingScopeLifecycleMonitor scope:willBeRemovedFromLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105261980

// -[SCGrapheneReportingScopeLifecycleMonitor plugInScope:loadingPlugInsInLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105261984

// -[SCGrapheneReportingScopeLifecycleMonitor plugInScope:loadedPlugInsInLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105261988

// -[SCGrapheneReportingScopeLifecycleMonitor scope:overExposedInLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10526198c

// -[SCGrapheneReportingScopeLifecycleMonitor scope:overRemovedInLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105261a10

// -[SCGrapheneReportingScopeLifecycleMonitor lifecycleDuplicated:]
// Type encoding: v24@0:8@16
// Implementation: 0x105261a74

// -[SCGrapheneReportingScopeLifecycleMonitor scopedAccess:didAccessValue:]
// Type encoding: v32@0:8#16@24
// Implementation: 0x105261ab4

// -[SCGrapheneReportingScopeLifecycleMonitor handleAppEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105261afc

// -[SCGrapheneReportingScopeLifecycleMonitor _neverEndingEntryPointDetected:]
// Type encoding: v24@0:8@16
// Implementation: 0x105261b58

// -[SCGrapheneReportingScopeLifecycleMonitor _updatePageFaultAndPageInsForEntryPoint:]
// Type encoding: v24@0:8@16
// Implementation: 0x105261b60

// -[SCGrapheneReportingScopeLifecycleMonitor _getStartupToPage]
// Type encoding: @16@0:8
// Implementation: 0x105261c6c

// -[SCGrapheneReportingScopeLifecycleMonitor _getStartupType]
// Type encoding: @16@0:8
// Implementation: 0x105261cc4

// -[SCGrapheneReportingScopeLifecycleMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105261cdc

@end
