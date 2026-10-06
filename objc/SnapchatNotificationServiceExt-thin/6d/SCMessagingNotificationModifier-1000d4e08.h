// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagingNotificationModifier
// Superclass: NSObject
// Address: 0x1000d4e08

@interface SCMessagingNotificationModifier

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessagingNotificationModifier initWithProcessingScope:messagingContentTracker:arroyoAdapter:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10003731c

// -[SCMessagingNotificationModifier initWithProcessingScope:multiSenderTemplateModifierProvider:bestFriendsModifierProvider:messagingNotificationCustomSoundModifierProvider:avatarLazy:avatarAdderLazy:messagingContentTracker:intentDonatorLazy:arroyoAdapter:grapheneLogger:configs:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1000376b8

// -[SCMessagingNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x100037920

// -[SCMessagingNotificationModifier bestAttemptContent]
// Type encoding: @16@0:8
// Implementation: 0x10003843c

// -[SCMessagingNotificationModifier _addAvatarAndDonateIntentMaybeWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100038470

// -[SCMessagingNotificationModifier _addDecryptedTextReplyInfo]
// Type encoding: v16@0:8
// Implementation: 0x100038a14

// -[SCMessagingNotificationModifier _addAdditionalAttachmentsMaybeToContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x100038cac

// -[SCMessagingNotificationModifier _shouldSuppressNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x100038f60

// -[SCMessagingNotificationModifier _shouldSendCommunicationNotification]
// Type encoding: B16@0:8
// Implementation: 0x100039044

// -[SCMessagingNotificationModifier _logTextReplyContentAttempt]
// Type encoding: v16@0:8
// Implementation: 0x1000390b0

// -[SCMessagingNotificationModifier _logTextReplyContentSuccess]
// Type encoding: v16@0:8
// Implementation: 0x100039110

// -[SCMessagingNotificationModifier _logTextReplyContentSkipped]
// Type encoding: v16@0:8
// Implementation: 0x100039170

// -[SCMessagingNotificationModifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1000391d0

@end
