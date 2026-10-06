// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationPluginWorkflow
// Superclass: NSObject
// Address: 0x112a7f548

@interface SCNotificationPluginWorkflow


// -[SCNotificationPluginWorkflow initWithPushNotificationEvents:application:notificationProcessingStepEventEmitter:backgroundTaskWrapper:backgroundPrefetchSubject:activeUserSessionScope:pluginManager:notificationAcknowledger:notificationEmitter:grapheneRegistry:nativeHandler:nativeNotifHandlerObservable:watchDetector:cof:appStartExperimentReaderServices:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x10098804c

// -[SCNotificationPluginWorkflow _processNotificationPostNativeProcessing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10599e7c8

// -[SCNotificationPluginWorkflow _handleNativeNotification:displayTypeFromNative:nativeSuppressionReason:completion:]
// Type encoding: v48@0:8@16q24q32@40
// Implementation: 0x10599ea54

// -[SCNotificationPluginWorkflow _discardNativeNotification:completion:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10599eb08

// -[SCNotificationPluginWorkflow _checkIfUserIdMatches:]
// Type encoding: B24@0:8@16
// Implementation: 0x10599ec0c

// -[SCNotificationPluginWorkflow _startNotificationProcessing:source:clientReceiveTimestampMs:systemCompletionHandler:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x10599ed50

// -[SCNotificationPluginWorkflow _processNotificationWithPluginForNotification:source:displayTypeFromNative:nativeSuppressionReason:completion:]
// Type encoding: v56@0:8@16q24q32q40@48
// Implementation: 0x10599ef30

// -[SCNotificationPluginWorkflow _instrumentWrappedSystemCompletionHandler:notificationType:notificationId:completion:]
// Type encoding: v48@0:8Q16@24@32@40
// Implementation: 0x10599f13c

// -[SCNotificationPluginWorkflow _handleNotificationWithPlugin:userInfo:source:displayTypeFromNative:nativeSuppressionReason:completion:]
// Type encoding: v64@0:8@16@24q32q40q48@56
// Implementation: 0x10599f23c

// -[SCNotificationPluginWorkflow _displayNotificationMaybe:notificationId:userInfo:source:displayTypeFromNative:nativeSuppressionReason:]
// Type encoding: v64@0:8@16@24@32q40q48q56
// Implementation: 0x10599f780

// -[SCNotificationPluginWorkflow _suppressNotification:source:platformSuppressingReason:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x10599f8ac

// -[SCNotificationPluginWorkflow _isNotificationAlreadyProcessed:forUserId:pushSource:]
// Type encoding: B40@0:8@16@24q32
// Implementation: 0x10599f938

// -[SCNotificationPluginWorkflow _isNativeHandlerInitialized]
// Type encoding: B16@0:8
// Implementation: 0x10599f9f0

// -[SCNotificationPluginWorkflow _emitNotificationIsSuppressedEvent:suppressionReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10599fa10

// -[SCNotificationPluginWorkflow _startBackgroundTaskForNotificationProcessing:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10599faa4

// -[SCNotificationPluginWorkflow _reportMissingPluginWithNotificationType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10599fbb8

// -[SCNotificationPluginWorkflow _reportWrongUser:]
// Type encoding: v24@0:8@16
// Implementation: 0x10599fc7c

// -[SCNotificationPluginWorkflow _reportProcessingPathGraphene:]
// Type encoding: v24@0:8@16
// Implementation: 0x10599fd40

// -[SCNotificationPluginWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10599fe50

@end
