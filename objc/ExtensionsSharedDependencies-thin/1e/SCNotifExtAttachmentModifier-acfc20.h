// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotifExtAttachmentModifier
// Superclass: NSObject
// Address: 0xacfc20

@interface SCNotifExtAttachmentModifier


// -[SCNotifExtAttachmentModifier initWithProcessingScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x410bf0

// -[SCNotifExtAttachmentModifier initWithNetworkingAPIClient:processingScope:keyValueStore:grapheneLogger:timeProvider:timeoutInMs:]
// Type encoding: @64@0:8@16@24@32@40@48Q56
// Implementation: 0x410d14

// -[SCNotifExtAttachmentModifier addAttachmentWithMutableNotificationContent:attachmentName:attachmentUrlString:additionalHttpHeaders:useCache:cropType:completionHandler:]
// Type encoding: v68@0:8@16@24@32@40B48q52@?60
// Implementation: 0x410e1c

// -[SCNotifExtAttachmentModifier decryptAndAddAttachmentWithMutableNotificationContent:attachmentName:attachmentUrlString:attachmentMediaKey:attachmentMediaIv:additionalHttpHeaders:useCache:completionHandler:]
// Type encoding: v76@0:8@16@24@32@40@48@56B64@?68
// Implementation: 0x410f68

// -[SCNotifExtAttachmentModifier readAndDecryptFromCacheOrDownloadWithNotificationContent:key:imageImageURL:imageKey:imageIv:additionalHttpHeaders:completionHandler:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x41111c

// -[SCNotifExtAttachmentModifier readAndDecryptFromCacheOrDownloadWithNotificationContent:key:imageImageURL:imageKey:imageIv:isWrappedThumbnail:additionalHttpHeaders:completionHandler:]
// Type encoding: v76@0:8@16@24@32@40@48B56@60@?68
// Implementation: 0x411294

// -[SCNotifExtAttachmentModifier _downloadAndAddAttachmentMutableContent:attachmentName:attachmentUrlString:additionalHttpHeaders:saveToCache:cropType:completionHandler:]
// Type encoding: v68@0:8@16@24@32@40B48q52@?60
// Implementation: 0x411994

// -[SCNotifExtAttachmentModifier _decryptAndAddAttachmentMutableContent:attachmentName:attachmentUrlString:attachmentMediaKey:attachmentMediaIv:additionalHttpHeaders:saveToCache:completionHandler:]
// Type encoding: v76@0:8@16@24@32@40@48@56B64@?68
// Implementation: 0x411d40

// -[SCNotifExtAttachmentModifier readFromCacheOrDownloadWithNotificationContent:key:imageImageURL:additionalHttpHeaders:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x4120b8

// -[SCNotifExtAttachmentModifier _downloadDecryptStoreInCacheAndMakeImageWithKey:imageImageURL:imageKey:imageIv:notificationContent:additionalHttpHeaders:completionHandler:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x4121c8

// -[SCNotifExtAttachmentModifier _downloadStoreInCacheAndMakeImageWithKey:imageImageURL:additionalHttpHeaders:notificationContent:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x4125e4

// -[SCNotifExtAttachmentModifier _makeImageWithData:fromCache:notificationContent:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x4128c8

// -[SCNotifExtAttachmentModifier _makeImageWithWrappedData:]
// Type encoding: @24@0:8@16
// Implementation: 0x412a10

// -[SCNotifExtAttachmentModifier _centerCropToSquareImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x412b84

// -[SCNotifExtAttachmentModifier _saveDataToCache:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x412c94

// -[SCNotifExtAttachmentModifier _makeAttachmentWithMutableNotificationContent:attachmentName:data:fromCache:cropType:completionHandler:]
// Type encoding: v60@0:8@16@24@32B40q44@?52
// Implementation: 0x412c9c

// -[SCNotifExtAttachmentModifier _optionsFromImage:cropType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x412e3c

// -[SCNotifExtAttachmentModifier _saveImage:identifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x412f64

// -[SCNotifExtAttachmentModifier _addAttachmentToMutableContent:attachmentName:fileURL:fromCache:options:completionHandler:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x413058

// -[SCNotifExtAttachmentModifier _makeAttachmentWithIdentifier:fileURL:options:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x4132d4

// -[SCNotifExtAttachmentModifier _logGrapheneExtensionAttachmentSuccessLatency:notificationType:fromCache:]
// Type encoding: v36@0:8q16@24B32
// Implementation: 0x413358

// -[SCNotifExtAttachmentModifier _logGrapheneExtensionAttachmentFailureWithNotifType:fromCache:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x4134a0

// -[SCNotifExtAttachmentModifier _logGrapheneUnwrapImageSuccess]
// Type encoding: v16@0:8
// Implementation: 0x4135dc

// -[SCNotifExtAttachmentModifier _logGrapheneUnwrapImageFailureWithException:]
// Type encoding: v24@0:8@16
// Implementation: 0x413638

// -[SCNotifExtAttachmentModifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x41373c

@end
