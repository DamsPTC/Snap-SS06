// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusNotificationProcessor
// Superclass: NSObject
// Address: 0x112a7cde8

@interface SCFideliusNotificationProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFideliusNotificationProcessor initWithUserSession:fideliusManager:notificationPayloadDecryptor:circumstanceEngine:logger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10591ef38

// -[SCFideliusNotificationProcessor shouldFilterNotification:]
// Type encoding: q24@0:8@16
// Implementation: 0x10591f0a4

// -[SCFideliusNotificationProcessor processNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10591f0c8

// -[SCFideliusNotificationProcessor _observeNotifications]
// Type encoding: v16@0:8
// Implementation: 0x10591f1d4

// -[SCFideliusNotificationProcessor _ackRetryServiceReadyV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x10591f240

// -[SCFideliusNotificationProcessor _decryptNotification:manager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10591f440

// -[SCFideliusNotificationProcessor _decryptNotificationV2:manager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10591f924

// -[SCFideliusNotificationProcessor _meshNotificationFlowV2:manager:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10591fbd0

// -[SCFideliusNotificationProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10591fd78

@end
