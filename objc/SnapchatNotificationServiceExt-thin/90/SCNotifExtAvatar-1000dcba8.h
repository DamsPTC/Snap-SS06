// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotifExtAvatar
// Superclass: NSObject
// Address: 0x1000dcba8

@interface SCNotifExtAvatar


// -[SCNotifExtAvatar initWithProcessingScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x100063b00

// -[SCNotifExtAvatar initWithAttachmentModifier:processingScope:grapheneLogger:timeProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100063bb8

// -[SCNotifExtAvatar downloadOrReadFromCacheWithNotifContent:imageUrl:avatarType:is3D:completionHandler:]
// Type encoding: v52@0:8@16@24q32B40@?44
// Implementation: 0x100063ce0

// -[SCNotifExtAvatar downloadAndAddBitmojiToMutableNotifContent:overlayIconName:avatarType:is3D:completionHandler:]
// Type encoding: v52@0:8@16@24q32B40@?44
// Implementation: 0x100064044

// -[SCNotifExtAvatar downloadAndAddThumbnailWithBitmojiFallbackToMutableNotifContent:overlayIconName:addOverlayToThumbnailOnly:avatarType:is3D:completionHandler:]
// Type encoding: v56@0:8@16@24B32q36B44@?48
// Implementation: 0x100064124

// -[SCNotifExtAvatar downloadAndAddThumbnailToMutableNotifContent:imageUrl:mediaKey:mediaIv:isWrappedThumbnail:avatarType:is3D:completionHandler:]
// Type encoding: v72@0:8@16@24@32@40B48q52B60@?64
// Implementation: 0x1000643f8

// -[SCNotifExtAvatar downloadAndAddImageToMutableNotifContent:imageUrl:overlayIconName:canUse3DBitmojiUrl:avatarType:is3D:isReaction:completionHandler:]
// Type encoding: v68@0:8@16@24@32B40q44B52B56@?60
// Implementation: 0x10006497c

// -[SCNotifExtAvatar _downloadDecryptAndAddImageToMutableNotifContent:imageUrl:mediaKey:mediaIv:overlayIconName:avatarType:is3D:completionHandler:]
// Type encoding: v76@0:8@16@24@32@40@48q56B64@?68
// Implementation: 0x100064f24

// -[SCNotifExtAvatar addImageToMutableNotificationContent:imageName:overlayIconName:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x100065438

// -[SCNotifExtAvatar _createImageAndAttachToNotification:key:overlayIconName:mutableNotificationContent:]
// Type encoding: B48@0:8@16@24@32@40
// Implementation: 0x1000655c0

// -[SCNotifExtAvatar _attachImageToNotification:withName:mutableNotificationContent:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1000656c8

// -[SCNotifExtAvatar _makeAttachmentWithIdentifier:fileURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10006589c

// -[SCNotifExtAvatar _padImageByPercentageHorizontally:]
// Type encoding: @24@0:8@16
// Implementation: 0x100065924

// -[SCNotifExtAvatar _isUserOnIOS14]
// Type encoding: B16@0:8
// Implementation: 0x100065aa0

// -[SCNotifExtAvatar _logGrapheneExtensionAvatarRequestSuccessLatency:notificationType:avatarType:fromCache:is3D:]
// Type encoding: v48@0:8q16@24q32B40B44
// Implementation: 0x100065ad0

// -[SCNotifExtAvatar _logGrapheneExtensionAvatarRequestFailureWithNotifType:avatarType:fromCache:is3D:]
// Type encoding: v40@0:8@16q24B32B36
// Implementation: 0x100065c44

// -[SCNotifExtAvatar .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100065db4

@end
