// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProcessedNotificationPersister
// Superclass: NSObject
// Address: 0x1000dd008

@interface SCProcessedNotificationPersister


// -[SCProcessedNotificationPersister initWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x100069cf8

// -[SCProcessedNotificationPersister initWithUserId:sharedExtensionFolder:todayFileName:yesterdayFileName:notifProcessedTodayFile:notifProcessedYesterdayFile:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100069f04

// -[SCProcessedNotificationPersister notificationProcessed:]
// Type encoding: B24@0:8@16
// Implementation: 0x10006a058

// -[SCProcessedNotificationPersister saveProcessedNotificationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10006a0dc

// -[SCProcessedNotificationPersister cleanUpProcessedNotificationsFiles]
// Type encoding: v16@0:8
// Implementation: 0x10006a0f4

// -[SCProcessedNotificationPersister .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10006a28c

@end
