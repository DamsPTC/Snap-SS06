// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationAcknowledger
// Superclass: NSObject
// Address: 0x112a2a868

@interface SCNotificationAcknowledger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNotificationAcknowledger initWithAckClient:graphene:notificationOSSettingsRetriever:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105313160

// -[SCNotificationAcknowledger acknowledgeNotificationReceived:source:clientReceiveTimestampMs:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x10531322c

// -[SCNotificationAcknowledger acknowledgeNotificationReceived:clientReceiveTimestampMs:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1053132a8

// -[SCNotificationAcknowledger acknowledgeNotificationDisplayed:isSystem:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105313680

// -[SCNotificationAcknowledger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105313a24

// +[SCNotificationAcknowledger _translateNotificationClientSource:]
// Type encoding: i24@0:8q16
// Implementation: 0x105313a00

@end
