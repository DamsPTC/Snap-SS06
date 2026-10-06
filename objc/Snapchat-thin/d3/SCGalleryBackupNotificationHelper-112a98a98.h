// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryBackupNotificationHelper
// Superclass: NSObject
// Address: 0x112a98a98

@interface SCGalleryBackupNotificationHelper

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryBackupNotificationHelper initWithCloudSync:galleryDataObjectContext:profile:cachingMediaManager:notificationManager:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105cabcdc

// -[SCGalleryBackupNotificationHelper dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105cabeb4

// -[SCGalleryBackupNotificationHelper _reset]
// Type encoding: v16@0:8
// Implementation: 0x105cabf20

// -[SCGalleryBackupNotificationHelper showBackUpNotificationIfAvailable]
// Type encoding: v16@0:8
// Implementation: 0x105cabf74

// -[SCGalleryBackupNotificationHelper _shouldShowNotification]
// Type encoding: B16@0:8
// Implementation: 0x105cac33c

// -[SCGalleryBackupNotificationHelper _queuePendingSnapsIfAvailable]
// Type encoding: v16@0:8
// Implementation: 0x105cac5e0

// -[SCGalleryBackupNotificationHelper _updatePendingSnaps]
// Type encoding: v16@0:8
// Implementation: 0x105cac70c

// -[SCGalleryBackupNotificationHelper _isGalleryOrStoriesViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x105cac8d4

// -[SCGalleryBackupNotificationHelper _getStackedImageForSnaps:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105cac8dc

// -[SCGalleryBackupNotificationHelper cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:]
// Type encoding: v44@0:8@16Q24B32B36B40
// Implementation: 0x105cacca8

// -[SCGalleryBackupNotificationHelper _createBackupNotificationWithPendingSnapsCount:image:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x105cacea4

// -[SCGalleryBackupNotificationHelper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105cad0cc

@end
