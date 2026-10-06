// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryOptInNotificationModifier
// Superclass: NSObject
// Address: 0x1000dcab8

@interface SCStoryOptInNotificationModifier

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryOptInNotificationModifier initWithProcessingScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x100060238

// -[SCStoryOptInNotificationModifier initWithExtensionNetworkingAPIClient:processingScope:intentDonatorLazy:avatarLazy:configs:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100060410

// -[SCStoryOptInNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x100060534

// -[SCStoryOptInNotificationModifier bestAttemptContent]
// Type encoding: @16@0:8
// Implementation: 0x1000610c4

// -[SCStoryOptInNotificationModifier _makeAttachment:]
// Type encoding: v24@0:8@16
// Implementation: 0x10006117c

// -[SCStoryOptInNotificationModifier _shouldSendCommunicationNotification]
// Type encoding: B16@0:8
// Implementation: 0x100061264

// -[SCStoryOptInNotificationModifier _isFriendOrPublicUserNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x1000612d0

// -[SCStoryOptInNotificationModifier _isPublisherNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x100061330

// -[SCStoryOptInNotificationModifier _shallAttachThumbnailFromURL:thumbnailImageKey:thumbnailImageIv:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x100061340

// -[SCStoryOptInNotificationModifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1000613a8

@end
