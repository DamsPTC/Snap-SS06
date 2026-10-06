// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesNotificationProcessor
// Superclass: NSObject
// Address: 0x112a76088

@interface SCMemoriesNotificationProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesNotificationProcessor initWithFeatureSettingsService:memoriesHighlightDataSource:notificationProcessingManager:systemScopedExtensionStorageServices:memoriesExperimentService:aiSnapsNotificationService:genAIDreamsBadgeService:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100985338

// -[SCMemoriesNotificationProcessor shouldFilterNotification:]
// Type encoding: q24@0:8@16
// Implementation: 0x1058d5f18

// -[SCMemoriesNotificationProcessor processNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058d6024

// -[SCMemoriesNotificationProcessor _tryCloudSyncAndRepost:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058d63b8

// -[SCMemoriesNotificationProcessor _onGenerationIdReady:snapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058d6610

// -[SCMemoriesNotificationProcessor _getNotificationByGenerationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058d67d0

// -[SCMemoriesNotificationProcessor _setNotification:forGenerationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058d6848

// -[SCMemoriesNotificationProcessor _prefetchCollectionsAndRepostNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058d68c4

// -[SCMemoriesNotificationProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058d6a74

@end
