// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapKitContentLoader
// Superclass: NSObject
// Address: 0x112ae8818

@interface SCSnapKitContentLoader


// -[SCSnapKitContentLoader initWithDeepLinkURL:networkServices:userPreferences:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1065d8a40

// -[SCSnapKitContentLoader loadMainContentFromPayload:isLocal:encryptionKey:encryptionIv:success:failure:]
// Type encoding: v60@0:8@16B24@28@36@?44@?52
// Implementation: 0x1065d8b0c

// -[SCSnapKitContentLoader loadStickerContentFromPayload:isLocal:encryptionKey:encryptionIv:success:failure:]
// Type encoding: v60@0:8@16B24@28@36@?44@?52
// Implementation: 0x1065d8b38

// -[SCSnapKitContentLoader loadCaptionFromPayload:encryptionKey:encryptionIv:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1065d8b64

// -[SCSnapKitContentLoader loadAttachmentURLFromPayload:encryptionKey:encryptionIv:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1065d8cb0

// -[SCSnapKitContentLoader loadAppNameFromMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065d8dfc

// -[SCSnapKitContentLoader loadCameraViewStateFromPayload:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065d8e10

// -[SCSnapKitContentLoader _loadRemoteContentWithPayload:encryptionKey:encryptionIv:success:failure:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1065d8e9c

// -[SCSnapKitContentLoader _loadLocalContentWithPayload:encryptionKey:encryptionIv:success:failure:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1065d9200

// -[SCSnapKitContentLoader _loadRemoteStickersWithPayload:encryptionKey:encryptionIv:success:failure:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1065d9400

// -[SCSnapKitContentLoader _loadLocalStickersWithPayload:encryptionKey:encryptionIv:success:failure:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1065d9810

// -[SCSnapKitContentLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065d9a74

@end
