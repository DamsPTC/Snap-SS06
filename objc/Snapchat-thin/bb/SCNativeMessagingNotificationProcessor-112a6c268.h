// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeMessagingNotificationProcessor
// Superclass: NSObject
// Address: 0x112a6c268

@interface SCNativeMessagingNotificationProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeMessagingNotificationProcessor initWithNativeSessionManagerFuture:notificationManager:userId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1057e3a3c

// -[SCNativeMessagingNotificationProcessor shouldFilterNotification:]
// Type encoding: q24@0:8@16
// Implementation: 0x1057e3b20

// -[SCNativeMessagingNotificationProcessor shouldFilterNotification:withSystemCompletion:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x1057e3b28

// -[SCNativeMessagingNotificationProcessor _shouldProcessConversation:]
// Type encoding: B24@0:8@16
// Implementation: 0x1057e3d34

// -[SCNativeMessagingNotificationProcessor _processSyncedConversationForServerConvId:notification:systemCompletion:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1057e3f08

// -[SCNativeMessagingNotificationProcessor _syncServerConversation:notification:systemCompletion:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1057e4078

// -[SCNativeMessagingNotificationProcessor _handleSyncServerConversationSuccessForServerConvId:notification:systemCompletion:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1057e4624

// -[SCNativeMessagingNotificationProcessor _handleFetchMessageSuccessForServerConvId:message:notification:systemCompletion:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1057e496c

// -[SCNativeMessagingNotificationProcessor processNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057e4a5c

// -[SCNativeMessagingNotificationProcessor _getClientConversationIdFromServerConvId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057e4a60

// -[SCNativeMessagingNotificationProcessor _repostNotification:clientId:systemCompletion:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1057e4c2c

// -[SCNativeMessagingNotificationProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057e4d80

@end
