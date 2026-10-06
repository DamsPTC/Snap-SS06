// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocationPrivacyReminderNotificationControllerImpl
// Superclass: NSObject
// Address: 0x112af5e28

@interface SCLocationPrivacyReminderNotificationControllerImpl

// Property: userSession; attributes: T@"SCUserSession",R,W,N,V_userSession
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLocationPrivacyReminderNotificationControllerImpl initWithUserSession:locationSharingPreferences:appNotificationProvider:notificationProcessingManager:bitmojiAvatarProvider:bitmojiImageFetcher:mapUserPreferences:unifiedGRPCClientFactory:userTrackedLogger:locationPermissionsManager:circumstanceEngine:mapPersonLocationsProvider:applicationLifecycleEvents:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x100509750

// -[SCLocationPrivacyReminderNotificationControllerImpl handleInAppNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106754f20

// -[SCLocationPrivacyReminderNotificationControllerImpl handleInAppNotificationDismissed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106754fd0

// -[SCLocationPrivacyReminderNotificationControllerImpl showNotificationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106754fd4

// -[SCLocationPrivacyReminderNotificationControllerImpl updateLastMapOpenDate]
// Type encoding: v16@0:8
// Implementation: 0x106755110

// -[SCLocationPrivacyReminderNotificationControllerImpl _handleLocationPreferencesReminderResponseWithRequest:callOptionsBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106755114

// -[SCLocationPrivacyReminderNotificationControllerImpl _handleResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067551d4

// -[SCLocationPrivacyReminderNotificationControllerImpl _showNotificationWithTitle:subtitle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067553f4

// -[SCLocationPrivacyReminderNotificationControllerImpl _setSeenMapLocationPrivacyReminderNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10675564c

// -[SCLocationPrivacyReminderNotificationControllerImpl slippyService]
// Type encoding: @16@0:8
// Implementation: 0x1067556c4

// -[SCLocationPrivacyReminderNotificationControllerImpl _friendsOnMap]
// Type encoding: @16@0:8
// Implementation: 0x106755828

// -[SCLocationPrivacyReminderNotificationControllerImpl _willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x106755950

// -[SCLocationPrivacyReminderNotificationControllerImpl userSession]
// Type encoding: @16@0:8
// Implementation: 0x106755a10

// -[SCLocationPrivacyReminderNotificationControllerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106755a28

@end
