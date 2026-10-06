// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBackgroundTaskWrapper
// Superclass: NSObject
// Address: 0x112a27708

@interface SCBackgroundTaskWrapper

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBackgroundTaskWrapper initWithBlizzardLogger:batteryLogger:networkMonitor:systemScopedAppGroupUserDefaults:applicationLifecycleEvents:applicationState:]
// Type encoding: @64@0:8@16@24@32@40@48q56
// Implementation: 0x100673c64

// -[SCBackgroundTaskWrapper initWithInvalidIdentifierIfCreateTaskFailed:skipBackgroundTaskThresholdInSecs:backgroundTaskTracker:applicationState:applicationLifecycleEvents:]
// Type encoding: @52@0:8B16Q20@28q36@44
// Implementation: 0x100673d9c

// -[SCBackgroundTaskWrapper _updateSuspendTime]
// Type encoding: v16@0:8
// Implementation: 0x100673fe8

// -[SCBackgroundTaskWrapper beginBackgroundTaskWithName:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10068c0f4

// -[SCBackgroundTaskWrapper endBackgroundTask:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1008a2134

// -[SCBackgroundTaskWrapper shouldTrackBackgroundTaskRunningDuration]
// Type encoding: B16@0:8
// Implementation: 0x10069d50c

// -[SCBackgroundTaskWrapper didReceivedPushNotificationWithIdentifier:type:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1052d7f70

// -[SCBackgroundTaskWrapper didCompletePushNotificationWithIdentifier:type:withCompletionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1052d7f98

// -[SCBackgroundTaskWrapper didAppWakeupInBackgroundForSystemBackgroundPrefetch]
// Type encoding: v16@0:8
// Implementation: 0x1052d7fa0

// -[SCBackgroundTaskWrapper _scheduleTrackerOnAppIdle]
// Type encoding: v16@0:8
// Implementation: 0x100674108

// -[SCBackgroundTaskWrapper _shouldSkipBackgroundTask]
// Type encoding: B16@0:8
// Implementation: 0x10068c14c

// -[SCBackgroundTaskWrapper _beginBackgroundTaskWhenGroupBackgroundTaskEnabledWithName:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10068c298

// -[SCBackgroundTaskWrapper _endBackgroundTaskWhenGroupBackgroundTaskEnabled:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1008a2158

// -[SCBackgroundTaskWrapper _taskExpiredWhenGroupBackgroundTaskEnabled]
// Type encoding: v16@0:8
// Implementation: 0x1052d8010

// -[SCBackgroundTaskWrapper _reportEndToTrackerWhenGroupBackgroundTaskEnabled:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1008a4cd0

// -[SCBackgroundTaskWrapper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052d8240

@end
