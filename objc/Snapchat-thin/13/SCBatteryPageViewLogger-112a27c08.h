// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatteryPageViewLogger
// Superclass: NSObject
// Address: 0x112a27c08

@interface SCBatteryPageViewLogger

// Property: currentPage; attributes: T@"NSString",&,N,V_currentPage

// -[SCBatteryPageViewLogger initWithBlizzardLogger:applicationLifecycleEvents:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10011afac

// -[SCBatteryPageViewLogger _initWithQueuePerformer:blizzardLogger:applicationLifecycleEvents:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10011b128

// -[SCBatteryPageViewLogger setCurrentPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a18618

// -[SCBatteryPageViewLogger pageViewDidStartWithName:withPageViewStartTime:withPreviousPageName:batteryLevel:thermalState:isCharging:pageViewStartCpuTime:]
// Type encoding: v64@0:8@16d24@32f40@44B52d56
// Implementation: 0x100a14830

// -[SCBatteryPageViewLogger _pageViewDidStartWithName:withPageViewStartTime:withPreviousPageName:batteryLevel:thermalState:isCharging:pageViewStartCpuTime:]
// Type encoding: v64@0:8@16d24@32f40@44B52d56
// Implementation: 0x100a184ec

// -[SCBatteryPageViewLogger pageViewDidEndWithName:withPageViewEndTime:batteryLevel:isCharging:pageViewEndCpuTime:]
// Type encoding: v48@0:8@16d24f32B36d40
// Implementation: 0x1052e7c54

// -[SCBatteryPageViewLogger _pageViewDidEndWithName:withPageViewEndTime:batteryLevel:isCharging:pageViewEndCpuTime:]
// Type encoding: v48@0:8@16d24f32B36d40
// Implementation: 0x1052e7d48

// -[SCBatteryPageViewLogger _logBatteryPageViewMetricsForPage:withBatteryPageViewLoggingItem:cpuUsageDict:gpuUsageDict:cpuHistory:gpuHistory:cameraUsage:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1052e8014

// -[SCBatteryPageViewLogger didCameraStartRunningAtTime:cameraPosition:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x1052e8a14

// -[SCBatteryPageViewLogger didCameraStopRunningAtTime:cameraPosition:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x1052e8b84

// -[SCBatteryPageViewLogger isCameraOpenAtPosition:]
// Type encoding: B24@0:8q16
// Implementation: 0x100a18684

// -[SCBatteryPageViewLogger didBatteryChargingStart]
// Type encoding: v16@0:8
// Implementation: 0x1052e8cf0

// -[SCBatteryPageViewLogger didThermalStateChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e8e40

// -[SCBatteryPageViewLogger didPullCpuUsage:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e8fd0

// -[SCBatteryPageViewLogger didPullCpuTime:atTimestamp:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x1052e9040

// -[SCBatteryPageViewLogger didPullGpuUsage:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e919c

// -[SCBatteryPageViewLogger updatePageCpuUsageAttributionWithPageName:finishedPageViewLoggingItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052e920c

// -[SCBatteryPageViewLogger _didBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c77198

// -[SCBatteryPageViewLogger _updateBackgroundStartPageViewsOnAppActiveAtTimestamp:cpuTime:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x100c78b98

// -[SCBatteryPageViewLogger resetPageViewRecordWhenAppOpen]
// Type encoding: v16@0:8
// Implementation: 0x1052e993c

// -[SCBatteryPageViewLogger handleCameraStopRunningOnAppBackgroundIfNeededAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e99cc

// -[SCBatteryPageViewLogger _willEnterForegroundWithTimestamp:cpuTime:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x1052e9a08

// -[SCBatteryPageViewLogger appSessionPageBatteryAttributionSinceAppOpenUntilAppBackground]
// Type encoding: @16@0:8
// Implementation: 0x1052e9b90

// -[SCBatteryPageViewLogger _appSessionPageBatteryAttributionSinceAppOpenUntilTimestamp:cpuTime:onAppBackground:]
// Type encoding: @36@0:8d16d24B32
// Implementation: 0x1052e9bd8

// -[SCBatteryPageViewLogger _currentTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x100a14b18

// -[SCBatteryPageViewLogger _getCurrentThermalState]
// Type encoding: q16@0:8
// Implementation: 0x1052eaa78

// -[SCBatteryPageViewLogger _appLaunchedToBackground]
// Type encoding: B16@0:8
// Implementation: 0x10011b548

// -[SCBatteryPageViewLogger currentPage]
// Type encoding: @16@0:8
// Implementation: 0x1052eaabc

// -[SCBatteryPageViewLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052eaac4

@end
