// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotifExtIntentDonator
// Superclass: NSObject
// Address: 0x1000dcb58

@interface SCNotifExtIntentDonator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNotifExtIntentDonator initWithProcessingScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000615f4

// -[SCNotifExtIntentDonator initWithProcessingScope:avatar:configs:grapheneLogger:timeProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1000616cc

// -[SCNotifExtIntentDonator donateIntentWithMutableNotificationContent:isGroupCommNotif:completionHandler:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x100061858

// -[SCNotifExtIntentDonator _oneOnOneDonateIntentWithNotificationContent:showBitmoji:completionHandler:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x100061994

// -[SCNotifExtIntentDonator _groupDonateIntentWithNotificationContent:showBitmoji:completionHandler:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x100061b64

// -[SCNotifExtIntentDonator _donateIntentWithMutableNotificationContent:notificationBitmojiAvatarImage:isGroupNotification:completionHandler:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x100062d28

// -[SCNotifExtIntentDonator _finishDonatingIntentAndCallingCompletionHandlerWithMutableNotificationContent:sendMessageIntent:completionHandler:isGroupNotification:]
// Type encoding: v44@0:8@16@24@?32B40
// Implementation: 0x100063110

// -[SCNotifExtIntentDonator _loadBitmojiInfoForGroupConversationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x100063328

// -[SCNotifExtIntentDonator _logGrapheneExtensionLoadGroupInfoLatency:notificationType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10006354c

// -[SCNotifExtIntentDonator _logGrapheneExtensionOneOnOneIntentDonatorLatency:notificationType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x100063654

// -[SCNotifExtIntentDonator _logGrapheneExtensionGroupIntentDonatorLatency:notificationType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10006375c

// -[SCNotifExtIntentDonator _logGrapheneExtensionGroupSelfieAvatarLoadWithIsMainSelfie:]
// Type encoding: v20@0:8B16
// Implementation: 0x100063864

// -[SCNotifExtIntentDonator _logGrapheneExtensionGroupSelfieAvatarTimeoutWithIsMainSelfie:]
// Type encoding: v20@0:8B16
// Implementation: 0x10006397c

// -[SCNotifExtIntentDonator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100063a94

@end
