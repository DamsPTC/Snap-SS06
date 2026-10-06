// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatteryNonFatalReporter
// Superclass: NSObject
// Address: 0x112a27b68

@interface SCBatteryNonFatalReporter


// -[SCBatteryNonFatalReporter initWithCrashLogger:blizzardLogger:batteryLogger:appStartExperimentReader:applicationLifecycleEvents:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1052e610c

// -[SCBatteryNonFatalReporter initWithCrashLogger:blizzardLogger:batteryLogger:queuePerformer:thermalState:nonFatalReportingDeviceSamplingPercentage:batteryHotPhoneNonFatalEnabled:logAllThreadsEnabled:highCpuUsageNonFatalEnabled:cpuUsageNormalizeEnabled:highCpuUsageThreshold:cpuPullFrequencyInSecond:movingTimeWindowInSecond:highCpuNonFatalRateLimitInSecond:applicationState:notificationCenter:cpuTimeProvider:deviceSamplingResultProvider:processInfo:currentDevice:applicationLifecycleEvents:]
// Type encoding: @160@0:8@16@24@32@40q48f56B60B64B68B72f76q80q88q96@104@112@?120@?128@136@144@152
// Implementation: 0x1052e637c

// -[SCBatteryNonFatalReporter startObserveThermalStateChange]
// Type encoding: v16@0:8
// Implementation: 0x1052e6874

// -[SCBatteryNonFatalReporter stopObserveThermalStateChange]
// Type encoding: v16@0:8
// Implementation: 0x1052e6898

// -[SCBatteryNonFatalReporter thermalStateDidChange]
// Type encoding: v16@0:8
// Implementation: 0x1052e68b4

// -[SCBatteryNonFatalReporter thermalStateDidChangeToThermal:]
// Type encoding: v24@0:8q16
// Implementation: 0x1052e6950

// -[SCBatteryNonFatalReporter reportBatteryNonFatalHotPhoneErrorWithCurrentThermal:]
// Type encoding: v24@0:8q16
// Implementation: 0x1052e69a8

// -[SCBatteryNonFatalReporter willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052e6ad8

// -[SCBatteryNonFatalReporter _willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052e6b38

// -[SCBatteryNonFatalReporter didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1052e6bb4

// -[SCBatteryNonFatalReporter _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1052e6c14

// -[SCBatteryNonFatalReporter _isAppActive]
// Type encoding: B16@0:8
// Implementation: 0x1052e6c38

// -[SCBatteryNonFatalReporter _appLaunchedToBackground]
// Type encoding: B16@0:8
// Implementation: 0x1052e6c58

// -[SCBatteryNonFatalReporter _isBatteryCharging]
// Type encoding: B16@0:8
// Implementation: 0x1052e6c9c

// -[SCBatteryNonFatalReporter _startMonitoringCpuUsage]
// Type encoding: v16@0:8
// Implementation: 0x1052e6cc0

// -[SCBatteryNonFatalReporter _stopMonitoringCpuUsage]
// Type encoding: v16@0:8
// Implementation: 0x1052e6d00

// -[SCBatteryNonFatalReporter _createCpuMonitorTimer]
// Type encoding: @16@0:8
// Implementation: 0x1052e6d10

// -[SCBatteryNonFatalReporter _teardownCpuMonitorTimer]
// Type encoding: v16@0:8
// Implementation: 0x1052e6e58

// -[SCBatteryNonFatalReporter _resetHighCpuUsageMeasurement]
// Type encoding: v16@0:8
// Implementation: 0x1052e6e94

// -[SCBatteryNonFatalReporter _updateMovingAverageCpuUsage]
// Type encoding: v16@0:8
// Implementation: 0x1052e6ef8

// -[SCBatteryNonFatalReporter _updateMovingAverageCpuUsageWithCpuTimeSampleInMS:clockTimeSampleInMS:currentTime:]
// Type encoding: v40@0:8d16d24@32
// Implementation: 0x1052e6fb0

// -[SCBatteryNonFatalReporter _calculateAverageCpuUsageWithCpuTimeInMS:clockTimeInMS:]
// Type encoding: d32@0:8d16d24
// Implementation: 0x1052e734c

// -[SCBatteryNonFatalReporter _shouldTriggerRateLimitForHighCpuNonFatalReportingWithTimestamp:]
// Type encoding: B24@0:8@16
// Implementation: 0x1052e7394

// -[SCBatteryNonFatalReporter _reportBatteryHighCpuUsageNonFatalErrorWithErrorMessage:timestamp:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052e73f4

// -[SCBatteryNonFatalReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052e7504

@end
