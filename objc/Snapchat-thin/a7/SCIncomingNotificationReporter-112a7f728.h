// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCIncomingNotificationReporter
// Superclass: NSObject
// Address: 0x112a7f728

@interface SCIncomingNotificationReporter


// -[SCIncomingNotificationReporter initWithGrapheneRegistry:watchDetector:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100507fec

// -[SCIncomingNotificationReporter initWithDependencies:watchDetector:uiApplication:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100508078

// -[SCIncomingNotificationReporter reportPushReceived:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a0cb4

// -[SCIncomingNotificationReporter reportPushReceived:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059a0d28

// -[SCIncomingNotificationReporter reportQueuedToDisplay:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a0d94

// -[SCIncomingNotificationReporter reportQueuedToDisplay:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059a0dfc

// -[SCIncomingNotificationReporter reportPushDisplayed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a0e68

// -[SCIncomingNotificationReporter detectAndReportWatchStatusAsync:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a0ed0

// -[SCIncomingNotificationReporter reportPushDisplayDropped:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a10a8

// -[SCIncomingNotificationReporter reportPushDisplayDropped:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059a1110

// -[SCIncomingNotificationReporter reportPushNotificationDisplayedWithoutNseExecution:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a117c

// -[SCIncomingNotificationReporter reportMainAppDecryptionNotAttemptedForNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a1274

// -[SCIncomingNotificationReporter reportMainAppDecryptionSuccessWithLatencyInMs:forNotification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059a12dc

// -[SCIncomingNotificationReporter reportMainAppDecryptionFailureWithErrorMessage:latencyInMs:forNotification:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059a1390

// -[SCIncomingNotificationReporter reportNotifClearedOnAppOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a1484

// -[SCIncomingNotificationReporter reportCounter:withMetricId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059a1548

// -[SCIncomingNotificationReporter _reportTimer:durationInMs:withMetric:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059a1638

// -[SCIncomingNotificationReporter _reportWatchStatus:watchStatus:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059a170c

// -[SCIncomingNotificationReporter reportWatchPairStatus:watchStatus:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059a1774

// -[SCIncomingNotificationReporter reportWatchAppInstallStatus:watchStatus:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059a188c

// -[SCIncomingNotificationReporter _logReporterEvent:withMetricId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059a19a4

// -[SCIncomingNotificationReporter _logReporterEvent:withMetricId:withWatchStatus:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059a19a8

// -[SCIncomingNotificationReporter _addNotificationTypeDimension:forNotification:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059a19ac

// -[SCIncomingNotificationReporter _addApplicationStateDimension:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059a1a38

// -[SCIncomingNotificationReporter _addWatchPairStatusDimension:withWatchStatus:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059a1af4

// -[SCIncomingNotificationReporter _addWatchAppStatusDimension:withWatchStatus:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059a1b74

// -[SCIncomingNotificationReporter _isForeground:]
// Type encoding: B24@0:8q16
// Implementation: 0x1059a1bf4

// -[SCIncomingNotificationReporter _repostedNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059a1c00

// -[SCIncomingNotificationReporter _alreadyProcessedByChat:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059a1c58

// -[SCIncomingNotificationReporter _getWatchPairStatusStr:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059a1cc0

// -[SCIncomingNotificationReporter _getWatchAppStatusStr:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059a1d14

// -[SCIncomingNotificationReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059a1d68

@end
