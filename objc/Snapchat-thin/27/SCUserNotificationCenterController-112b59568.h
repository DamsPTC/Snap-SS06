// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserNotificationCenterController
// Superclass: NSObject
// Address: 0x112b59568

@interface SCUserNotificationCenterController


// -[SCUserNotificationCenterController initWithCircumstanceEngine:bitmojiFetchServices:bitmojiSelfieServices:getNotificationEmitterBlock:getSnapchattersDataFectherBlock:]
// Type encoding: @56@0:8@?16@?24@?32@?40@?48
// Implementation: 0x100a07918

// -[SCUserNotificationCenterController clearNotificationDataWithSnapshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe1ed8

// -[SCUserNotificationCenterController snapshotForAppStateChangeClear]
// Type encoding: @16@0:8
// Implementation: 0x100c7ac60

// -[SCUserNotificationCenterController didApplicationStateChange:withCurrentNotifications:snapshot:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x106fe1f00

// -[SCUserNotificationCenterController hideNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe20e4

// -[SCUserNotificationCenterController canDisplayNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x106fe20e8

// -[SCUserNotificationCenterController _shouldDisplayViaNSEWorkaround:]
// Type encoding: B24@0:8@16
// Implementation: 0x106fe2140

// -[SCUserNotificationCenterController displayNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe2274

// -[SCUserNotificationCenterController _displayNotifications:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe227c

// -[SCUserNotificationCenterController _displayNotificationWithUNAttachment:notification:shouldShowBitmoji:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106fe26a0

// -[SCUserNotificationCenterController _getRankedBestFriendsUserIds]
// Type encoding: @16@0:8
// Implementation: 0x106fe2958

// -[SCUserNotificationCenterController _bestFriendSoundEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106fe29b8

// -[SCUserNotificationCenterController _customSoundEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106fe2a10

// -[SCUserNotificationCenterController _displayCommunicationNotificationForRequest:notification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106fe2aac

// -[SCUserNotificationCenterController _modifyNotifRequestToCommNotif:donationType:appNotification:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x106fe2bc0

// -[SCUserNotificationCenterController _getDonationFuture:notification:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x106fe34dc

// -[SCUserNotificationCenterController _applyGroupTemplateForNotification:content:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106fe37c0

// -[SCUserNotificationCenterController enqueueNotificationRequest:notification:avatarType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106fe3b30

// -[SCUserNotificationCenterController _submitNotificationRequestToOS:notification:avatarType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106fe3bb8

// -[SCUserNotificationCenterController _dedupAndSubmitNotificationRequestToOS:notification:avatarType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106fe3ce0

// -[SCUserNotificationCenterController logDisplayNotification:avatarType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106fe4000

// -[SCUserNotificationCenterController _displayNotificationWithBitmojiOnRight:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe40bc

// -[SCUserNotificationCenterController createRequestForNotification:withImage:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fe4428

// -[SCUserNotificationCenterController _attachmentForIdentifier:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x106fe4644

// -[SCUserNotificationCenterController setIntentDonator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe4784

// -[SCUserNotificationCenterController setPlusFeatureGating:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe47b4

// -[SCUserNotificationCenterController setAppGroupUserDefaults:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe47c0

// -[SCUserNotificationCenterController setImageFetchingService:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe47f0

// -[SCUserNotificationCenterController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fe4850

// +[SCUserNotificationCenterController _getBoolFromDict:key:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106fe219c

@end
