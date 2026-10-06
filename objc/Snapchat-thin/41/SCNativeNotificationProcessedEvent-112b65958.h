// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeNotificationProcessedEvent
// Superclass: NSObject
// Address: 0x112b65958

@interface SCNativeNotificationProcessedEvent

// Property: notification; attributes: T@"SCAppNotification",R,C,N,V_notification
// Property: result; attributes: Tq,R,N,V_result
// Property: nativeClientReceiveTimestampMs; attributes: Tq,R,N,V_nativeClientReceiveTimestampMs
// Property: completion; attributes: T@"SCNotificationProcessingCompletion",R,C,N,V_completion

// -[SCNativeNotificationProcessedEvent initWithNotification:result:nativeClientReceiveTimestampMs:completion:]
// Type encoding: @48@0:8@16q24q32@40
// Implementation: 0x10796a62c

// -[SCNativeNotificationProcessedEvent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10796a6ec

// -[SCNativeNotificationProcessedEvent hash]
// Type encoding: Q16@0:8
// Implementation: 0x10796a710

// -[SCNativeNotificationProcessedEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10796a790

// -[SCNativeNotificationProcessedEvent notification]
// Type encoding: @16@0:8
// Implementation: 0x10796a858

// -[SCNativeNotificationProcessedEvent result]
// Type encoding: q16@0:8
// Implementation: 0x10796a860

// -[SCNativeNotificationProcessedEvent nativeClientReceiveTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10796a868

// -[SCNativeNotificationProcessedEvent completion]
// Type encoding: @16@0:8
// Implementation: 0x10796a870

// -[SCNativeNotificationProcessedEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10796a878

@end
