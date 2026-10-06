// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationExtAcknowledger
// Superclass: NSObject
// Address: 0x1000d40e8

@interface SCNotificationExtAcknowledger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNotificationExtAcknowledger initWithProcessingScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x10002d538

// -[SCNotificationExtAcknowledger initWithTimeProvider:userSession:systemScopedAppGroupUserDefaults:networkingApiClient:eventHolder:ackTimeout:configs:grapheneLogger:]
// Type encoding: @80@0:8@16@24@32@40@48q56@64@72
// Implementation: 0x10002d684

// -[SCNotificationExtAcknowledger didReceiveNotificationRequest:withCompletionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10002d874

// -[SCNotificationExtAcknowledger cleanupOnTimeout]
// Type encoding: v16@0:8
// Implementation: 0x10002dca8

// -[SCNotificationExtAcknowledger _makeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10002de30

// -[SCNotificationExtAcknowledger getPnsRequestParametersWithUserInfo:receivedTimestamp:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10002e494

// -[SCNotificationExtAcknowledger _getReceiveTimeStamp]
// Type encoding: q16@0:8
// Implementation: 0x10002e7a4

// -[SCNotificationExtAcknowledger _logGrapheneExtensionAcknowledgerSuccessLatencyMs:notificationType:appState:]
// Type encoding: v36@0:8q16@24B32
// Implementation: 0x10002e7f0

// -[SCNotificationExtAcknowledger _logGrapheneExtensionAcknowledgerTimeoutLatencyMs:notificationType:appState:]
// Type encoding: v36@0:8q16@24B32
// Implementation: 0x10002e91c

// -[SCNotificationExtAcknowledger _logGrapheneExtensionAcknowledgerFailed:appState:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10002ea48

// -[SCNotificationExtAcknowledger _logGrapheneExtensionAckLoggedOutUser:]
// Type encoding: v24@0:8@16
// Implementation: 0x10002eb68

// -[SCNotificationExtAcknowledger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10002ec64

@end
