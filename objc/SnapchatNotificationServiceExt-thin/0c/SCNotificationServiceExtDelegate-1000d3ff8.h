// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationServiceExtDelegate
// Superclass: NSObject
// Address: 0x1000d3ff8

@interface SCNotificationServiceExtDelegate

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNotificationServiceExtDelegate initWithProcessingScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x100027de4

// -[SCNotificationServiceExtDelegate initWithModifierProvider:systemScopedAppGroupUserDefaults:userScopedAppGroupUserDefaults:blizzardExtensionLogger:grapheneLogger:eventHolder:configs:supportsSuppression:tracker:decryptedPayloadInProcessingScope:processingScope:badgeOrchestrator:processedNotificationStorage:nativeAnnouncer:nativeHandler:]
// Type encoding: @132@0:8@16@24@32@40@48@56@64B72@76@84@92@100@108@116@124
// Implementation: 0x1000283a4

// -[SCNotificationServiceExtDelegate didReceiveNotificationRequest:withContentHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x100028750

// -[SCNotificationServiceExtDelegate _processUsingNativeWithContentHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100028a90

// -[SCNotificationServiceExtDelegate _handleNotificationOnPlatform]
// Type encoding: v16@0:8
// Implementation: 0x100029104

// -[SCNotificationServiceExtDelegate serviceExtensionTimeWillExpire]
// Type encoding: v16@0:8
// Implementation: 0x10002a2ac

// -[SCNotificationServiceExtDelegate _mutateContentWithClientGeneratedCustomAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10002a3d8

// -[SCNotificationServiceExtDelegate _tagRequestWithNotificationKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10002a440

// -[SCNotificationServiceExtDelegate _tagRequestWithProcessedByExtensionTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x10002a4c8

// -[SCNotificationServiceExtDelegate _appIsInForeground]
// Type encoding: B16@0:8
// Implementation: 0x10002a528

// -[SCNotificationServiceExtDelegate _finish:timedOut:reportToGrapheneOverride:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x10002a570

// -[SCNotificationServiceExtDelegate _finishWithError:timedOut:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10002aa80

// -[SCNotificationServiceExtDelegate _shouldReportToBlizzard]
// Type encoding: B16@0:8
// Implementation: 0x10002aba4

// -[SCNotificationServiceExtDelegate _isSuppressionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10002ac80

// -[SCNotificationServiceExtDelegate _saveNotifExtensionBGRunningTime:]
// Type encoding: v24@0:8q16
// Implementation: 0x10002adec

// -[SCNotificationServiceExtDelegate attachDecryptedPayloadToProcessingScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10002aec8

// -[SCNotificationServiceExtDelegate decryptPayload]
// Type encoding: @16@0:8
// Implementation: 0x10002b0f8

// -[SCNotificationServiceExtDelegate _attachClientPayloadToProcessingScope:notificationType:mutableUserInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10002b510

// -[SCNotificationServiceExtDelegate _logSDNParsingError:notificationType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10002b778

// -[SCNotificationServiceExtDelegate _flushGrapheneMetrics:]
// Type encoding: v20@0:8B16
// Implementation: 0x10002b8e4

// -[SCNotificationServiceExtDelegate retrieveEncryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x10002ba1c

// -[SCNotificationServiceExtDelegate _timeInMsSinceDate:]
// Type encoding: q24@0:8@16
// Implementation: 0x10002ba30

// -[SCNotificationServiceExtDelegate _logGrapheneIsTimedOut:notificationType:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10002baa4

// -[SCNotificationServiceExtDelegate _logGrapheneOutOfBoundLatency:notificationType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10002bbc4

// -[SCNotificationServiceExtDelegate _logGrapheneExtensionTotalDisplayLatencyMs:notificationType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10002bcc0

// -[SCNotificationServiceExtDelegate _logGrapheneExtensionTotalModifierLatencyMs:notificationType:suppressed:]
// Type encoding: v36@0:8q16@24B32
// Implementation: 0x10002bdc8

// -[SCNotificationServiceExtDelegate _logGrapheneExtensionTaskHandlersLatencyMs:notificationType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10002bf20

// -[SCNotificationServiceExtDelegate _logSDNTaskHandlerLatency:notificationType:taskHandlerIdentifier:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10002c050

// -[SCNotificationServiceExtDelegate _logSDNTaskHandlerResult:notificationType:taskHandlerIdentifier:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10002c178

// -[SCNotificationServiceExtDelegate _logGrapheneExtensionBadgeUpdaterHandlersLatencyMs:notificationType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10002c2c0

// -[SCNotificationServiceExtDelegate _logNotificationReceived:]
// Type encoding: v24@0:8@16
// Implementation: 0x10002c3f0

// -[SCNotificationServiceExtDelegate _logFinishedWithErrorNotificationReceived:errorMessage:timedOut:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10002c514

// -[SCNotificationServiceExtDelegate _shouldForceLogGraphene:notificationType:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10002c668

// -[SCNotificationServiceExtDelegate _logProcessedNotificationDbResult:startDate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10002c720

// -[SCNotificationServiceExtDelegate .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10002c934

@end
