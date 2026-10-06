// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCN2XNotificationData
// Superclass: NSObject
// Address: 0x112b411e8

@interface SCN2XNotificationData

// Property: notificationId; attributes: T@"NSString",R,C,N,V_notificationId
// Property: conversationId; attributes: T@"NSString",R,C,N,V_conversationId
// Property: messageTrackingId; attributes: T@"NSString",R,C,N,V_messageTrackingId
// Property: serverMessageId; attributes: Tq,R,N,V_serverMessageId
// Property: pushType; attributes: Tq,R,N,V_pushType

// -[SCN2XNotificationData initWithNotificationId:conversationId:messageTrackingId:serverMessageId:pushType:]
// Type encoding: @56@0:8@16@24@32q40q48
// Implementation: 0x106e77130

// -[SCN2XNotificationData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106e7721c

// -[SCN2XNotificationData hash]
// Type encoding: Q16@0:8
// Implementation: 0x106e77240

// -[SCN2XNotificationData isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e772cc

// -[SCN2XNotificationData notificationId]
// Type encoding: @16@0:8
// Implementation: 0x106e773ac

// -[SCN2XNotificationData conversationId]
// Type encoding: @16@0:8
// Implementation: 0x106e773b4

// -[SCN2XNotificationData messageTrackingId]
// Type encoding: @16@0:8
// Implementation: 0x106e773bc

// -[SCN2XNotificationData serverMessageId]
// Type encoding: q16@0:8
// Implementation: 0x106e773c4

// -[SCN2XNotificationData pushType]
// Type encoding: q16@0:8
// Implementation: 0x106e773cc

// -[SCN2XNotificationData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e773d4

@end
