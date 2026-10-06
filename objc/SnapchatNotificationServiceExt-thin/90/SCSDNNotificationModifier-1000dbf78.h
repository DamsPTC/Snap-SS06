// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSDNNotificationModifier
// Superclass: NSObject
// Address: 0x1000dbf78

@interface SCSDNNotificationModifier

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSDNNotificationModifier initWithProcessingScope:notificationType:suppressionProvider:displayModifierProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100056e00

// -[SCSDNNotificationModifier initWithGrapheneLogger:clientPayload:extensionConfigs:imageLoader:notificationType:decryptedPayload:friendingUserDefaults:suppressionProvider:displayModifierProvider:userScopedAppGroupUserDefaults:eventHolder:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x100056fb8

// -[SCSDNNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x100057224

// -[SCSDNNotificationModifier _finalizeDisplay:donationResult:clientPayload:modifierCallback:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x100057a9c

// -[SCSDNNotificationModifier _getDisplayModifierFuture:clientPayload:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100057bf8

// -[SCSDNNotificationModifier bestAttemptContent]
// Type encoding: @16@0:8
// Implementation: 0x100057d88

// -[SCSDNNotificationModifier _logSDNProcessingSuccessWithNotificationType:]
// Type encoding: v24@0:8@16
// Implementation: 0x100057db0

// -[SCSDNNotificationModifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100057ec0

@end
