// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationBestFriendsSoundRepository
// Superclass: NSObject
// Address: 0x112a7fa48

@interface SCNotificationBestFriendsSoundRepository

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNotificationBestFriendsSoundRepository initWithUserId:featureSettingsService:snapchattersDataFetcher:snapchattersDataTracker:userScopedAppGroupUserDefaults:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1059a77b4

// -[SCNotificationBestFriendsSoundRepository didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1059a7980

// -[SCNotificationBestFriendsSoundRepository didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a7ab4

// -[SCNotificationBestFriendsSoundRepository didEndSnapchattersFetchDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1059a7ab8

// -[SCNotificationBestFriendsSoundRepository _fetchAndPersistDataWithPerformer]
// Type encoding: v16@0:8
// Implementation: 0x1059a7be0

// -[SCNotificationBestFriendsSoundRepository _fetchAndPersistData]
// Type encoding: v16@0:8
// Implementation: 0x1059a7cb4

// -[SCNotificationBestFriendsSoundRepository _fetchRankedBestFriendSnapchatters]
// Type encoding: v16@0:8
// Implementation: 0x1059a7cd8

// -[SCNotificationBestFriendsSoundRepository _handleSnapchatterFetchCompletionWithSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059a7e18

// -[SCNotificationBestFriendsSoundRepository _fetchAndObserveSettingsIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1059a8008

// -[SCNotificationBestFriendsSoundRepository _observeSettingsChanges]
// Type encoding: v16@0:8
// Implementation: 0x1059a80fc

// -[SCNotificationBestFriendsSoundRepository _updateSettingsWithSettings:]
// Type encoding: v20@0:8B16
// Implementation: 0x1059a835c

// -[SCNotificationBestFriendsSoundRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059a8364

@end
