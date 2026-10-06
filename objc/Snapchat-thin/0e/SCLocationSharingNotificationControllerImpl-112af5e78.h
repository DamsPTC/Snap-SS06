// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocationSharingNotificationControllerImpl
// Superclass: NSObject
// Address: 0x112af5e78

@interface SCLocationSharingNotificationControllerImpl

// Property: userSession; attributes: T@"SCUserSession",R,W,N,V_userSession
// Property: locationSharingPreferences; attributes: T@"SCLazy",R,N,V_locationSharingPreferences
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLocationSharingNotificationControllerImpl initWithUserSession:locationSharingPreferences:featureSettingsService:appNotificationProvider:notificationProcessingManager:bitmojiAvatarProvider:bitmojiImageFetcher:mapUserPreferences:applicationLifecycleEvents:circumstanceEngine:pageLauncher:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x106755ad8

// -[SCLocationSharingNotificationControllerImpl handleInAppNotification:navigationController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106755e04

// -[SCLocationSharingNotificationControllerImpl handleInAppNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106755f1c

// -[SCLocationSharingNotificationControllerImpl handleInAppNotificationDismissed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106755f20

// -[SCLocationSharingNotificationControllerImpl updateLastMapOpenDate]
// Type encoding: v16@0:8
// Implementation: 0x106755f24

// -[SCLocationSharingNotificationControllerImpl showNotificationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1067560c0

// -[SCLocationSharingNotificationControllerImpl _setSeenMapLocationSharingNotificationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106756628

// -[SCLocationSharingNotificationControllerImpl _ensureHasLocationSharingPreferencesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1067566a4

// -[SCLocationSharingNotificationControllerImpl _willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x10675676c

// -[SCLocationSharingNotificationControllerImpl userSession]
// Type encoding: @16@0:8
// Implementation: 0x10675682c

// -[SCLocationSharingNotificationControllerImpl locationSharingPreferences]
// Type encoding: @16@0:8
// Implementation: 0x106756844

// -[SCLocationSharingNotificationControllerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10675684c

@end
