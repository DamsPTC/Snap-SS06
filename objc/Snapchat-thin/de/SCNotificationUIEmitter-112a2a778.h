// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationUIEmitter
// Superclass: NSObject
// Address: 0x112a2a778

@interface SCNotificationUIEmitter

// Property: notificationDisplayEventObservable; attributes: T@"SCObservable",R,N,V_notificationDisplayEventBehaviorSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNotificationUIEmitter initWithNotificationProcessingManager:crashLogger:notificationProcessingStepEventEmitter:notificationOSSettingsRetriever:application:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1009624f0

// -[SCNotificationUIEmitter submit:clientGeneratedCustomAction:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105310e18

// -[SCNotificationUIEmitter submitLocalInAppNotificationWithTitle:subtitle:pushType:displayDurationSeconds:senderUserId:conversationId:groupConversationId:targetScreen:friendsFeedShortcutType:]
// Type encoding: @88@0:8@16@24q32d40@48@56@64@72@80
// Implementation: 0x10531108c

// -[SCNotificationUIEmitter publishEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053113a8

// -[SCNotificationUIEmitter _displayNotificationMaybe:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053113b0

// -[SCNotificationUIEmitter _displayNotification:presenter:appIsForegrounded:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10531164c

// -[SCNotificationUIEmitter _dropNotification:dueToOSPermission:appIsForegrounded:suppressionReason:]
// Type encoding: v40@0:8@16B24B28q32
// Implementation: 0x1053116c8

// -[SCNotificationUIEmitter notificationDisplayEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x100962630

// -[SCNotificationUIEmitter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105311728

@end
