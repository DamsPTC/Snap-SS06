// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBackgroundTaskTracker
// Superclass: NSObject
// Address: 0x112a276b8

@interface SCBackgroundTaskTracker


// -[SCBackgroundTaskTracker initWithBlizzardLogger:batteryLogger:networkMonitor:systemScopedAppGroupUserDefaults:applicationLifecycleEvents:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1052d0a0c

// -[SCBackgroundTaskTracker _initWithQueuePerformer:userDefaults:systemScopedAppGroupUserDefaults:dateProvider:skipTrackingInvalidTask:blizzardLogger:batteryLogger:networkMonitor:applicationLifecycleEvents:]
// Type encoding: @84@0:8@16@24@32@40B48@52@60@68@76
// Implementation: 0x1052d0b58

// -[SCBackgroundTaskTracker _updateSuspendTime]
// Type encoding: v16@0:8
// Implementation: 0x1052d10e0

// -[SCBackgroundTaskTracker _updateSuspendTimeAfterTimeInSecond:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052d10e8

// -[SCBackgroundTaskTracker _updateSuspendTimeImmediately]
// Type encoding: v16@0:8
// Implementation: 0x1052d11a4

// -[SCBackgroundTaskTracker _resetSuspendTimeOnAppOpen]
// Type encoding: v16@0:8
// Implementation: 0x1052d140c

// -[SCBackgroundTaskTracker didBackgroundTaskStartWithName:startTimestamp:taskIdentifier:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1052d1438

// -[SCBackgroundTaskTracker didBackgroundTaskEndAtTimestamp:taskIdentifier:endBackgroundTaskBlock:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x1052d17c4

// -[SCBackgroundTaskTracker _updateBackgroundTasksMetricsWhenAppEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052d1b34

// -[SCBackgroundTaskTracker _updateBackgroundTasksMetricsWhenAppEnterForegroundAtTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d1b74

// -[SCBackgroundTaskTracker _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1052d1ec0

// -[SCBackgroundTaskTracker _didEnterBackgroundAtTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d1f00

// -[SCBackgroundTaskTracker _willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052d1ff0

// -[SCBackgroundTaskTracker _startupComplete]
// Type encoding: v16@0:8
// Implementation: 0x1052d2028

// -[SCBackgroundTaskTracker onAppIdle]
// Type encoding: v16@0:8
// Implementation: 0x1052d2064

// -[SCBackgroundTaskTracker _savedBackgroundTasksRunningMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1052d2068

// -[SCBackgroundTaskTracker didReceivedPushNotificationWithIdentifier:type:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052d2be4

// -[SCBackgroundTaskTracker didCompletePushNotificationWithIdentifier:type:withCompletionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1052d2d94

// -[SCBackgroundTaskTracker _didReceivedPushNotificationInBackgroundWithIdentifier:type:timestamp:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1052d2f00

// -[SCBackgroundTaskTracker _didCompletePushNotificationInBackgroundWithIdentifier:type:timestamp:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1052d3304

// -[SCBackgroundTaskTracker didAppWakeupInBackgroundForSystemBackgroundPrefetch]
// Type encoding: v16@0:8
// Implementation: 0x1052d365c

// -[SCBackgroundTaskTracker _didAppWakeupInBackgroundForSystemBackgroundPrefetchAtTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d372c

// -[SCBackgroundTaskTracker _calculateOverallBackgroundTasksRunningDurationForTaskName:endTime:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052d394c

// -[SCBackgroundTaskTracker _calculateOverallBackgroundTaskRunningDurationWithEndTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d3b74

// -[SCBackgroundTaskTracker _resetBackgroundTaskLogging]
// Type encoding: v16@0:8
// Implementation: 0x1052d3c68

// -[SCBackgroundTaskTracker _saveStateWithBackgroundRunningDuration:attributionMap:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1052d3cd0

// -[SCBackgroundTaskTracker _calculateBatteryResouceUsageAndBackgroundActivityAttributionWithEndTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d4090

// -[SCBackgroundTaskTracker _saveStateWithGPSUsageDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d4428

// -[SCBackgroundTaskTracker _saveStateWithCpuUsageDict:sysCpuTime:userCpuTime:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1052d4504

// -[SCBackgroundTaskTracker _saveStateWithNetworkUsageDict:networkUsageAttributionDict:networkUsageAttributionV2Dict:networkRadioOverheadAttributionDict:networkRadioOverheadAttributionV2Dict:networkActivityCountAttributionDict:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x1052d4848

// -[SCBackgroundTaskTracker _clearTimestampsForExtraRunningTimeFromPushNotif]
// Type encoding: v16@0:8
// Implementation: 0x1052d54bc

// -[SCBackgroundTaskTracker _calculateExtraBackgroudPushNotifRunningTimeSincePreviousBgTaskGroupCompleteUntilTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d5568

// -[SCBackgroundTaskTracker _saveStateWithExtraBackgroundPushNotifRunningDuration:]
// Type encoding: v24@0:8q16
// Implementation: 0x1052d56e4

// -[SCBackgroundTaskTracker _calculateOverallVoipPushNotificationRunningDurationWithEndTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d57dc

// -[SCBackgroundTaskTracker _calculateOverallVoipPushNotificationRunningDurationForNotificationType:endTime:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052d59ac

// -[SCBackgroundTaskTracker _saveStateWithVoipPushNotificationBackgroundRunningTimeAttribution:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d5b08

// -[SCBackgroundTaskTracker _calculateFineGrainedBackgroundActivityAttributionWithStartTime:EndTime:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1052d5d70

// -[SCBackgroundTaskTracker _saveStateWithFineGrainedBackgroundActivityAttribution:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d69cc

// -[SCBackgroundTaskTracker _didBackgroundRunningStartAt:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052d6c34

// -[SCBackgroundTaskTracker _didBackgroundRunningFinish]
// Type encoding: v16@0:8
// Implementation: 0x1052d6da0

// -[SCBackgroundTaskTracker _setUpCpuObservation]
// Type encoding: v16@0:8
// Implementation: 0x1052d6dfc

// -[SCBackgroundTaskTracker _tearDownCpuObservation]
// Type encoding: v16@0:8
// Implementation: 0x1052d6e3c

// -[SCBackgroundTaskTracker _createCpuMonitorTimer]
// Type encoding: @16@0:8
// Implementation: 0x1052d6e78

// -[SCBackgroundTaskTracker _didPullCpuUsage:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052d6fa8

// -[SCBackgroundTaskTracker _reportPreviousSavedBackgroundTasksRunningMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1052d70c0

// -[SCBackgroundTaskTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052d7d2c

@end
