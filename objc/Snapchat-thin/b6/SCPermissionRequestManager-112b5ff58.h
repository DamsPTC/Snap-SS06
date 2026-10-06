// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPermissionRequestManager
// Superclass: NSObject
// Address: 0x112b5ff58

@interface SCPermissionRequestManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPermissionRequestManager initWithAudioSession:userNotTrackedLogger:applicationLifecycleEvents:captureAuthorizationChecker:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1008b8604

// -[SCPermissionRequestManager injectActiveUserSessionScopeDependenciesWithUserSessionContext:adConfigProvider:adTrackingAuthorizationMetricsManager:legacyContactStoreService:locationPermissionsManager:photoPermissionCoordinator:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x10097fb64

// -[SCPermissionRequestManager removeActiveUserSessionScopeDependencies]
// Type encoding: v16@0:8
// Implementation: 0x1071bd764

// -[SCPermissionRequestManager requestContacts:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071bd7c4

// -[SCPermissionRequestManager _requestContactsFromAdditionalServicesPermissions:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071bd8f8

// -[SCPermissionRequestManager _isNewUser]
// Type encoding: B16@0:8
// Implementation: 0x1071bd93c

// -[SCPermissionRequestManager requestAdsTrackingUsage]
// Type encoding: v16@0:8
// Implementation: 0x1071bd944

// -[SCPermissionRequestManager requestCameraWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071bdb38

// -[SCPermissionRequestManager requestNotificationsWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071bde3c

// -[SCPermissionRequestManager registerUserNotificationSettings]
// Type encoding: v16@0:8
// Implementation: 0x1071be140

// -[SCPermissionRequestManager hasAskedOSNotificationPermission]
// Type encoding: B16@0:8
// Implementation: 0x1071be154

// -[SCPermissionRequestManager registerNotification:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071be1c0

// -[SCPermissionRequestManager requestUserLocationWithCompletionHandler:userSession:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1071be38c

// -[SCPermissionRequestManager requestPhotosWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071be5b4

// -[SCPermissionRequestManager checkMicrophonePermission]
// Type encoding: v16@0:8
// Implementation: 0x1071be76c

// -[SCPermissionRequestManager checkMicrophonePermissionWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071be774

// -[SCPermissionRequestManager requestMicrophoneWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071be898

// -[SCPermissionRequestManager openSystemPermissionSettings]
// Type encoding: v16@0:8
// Implementation: 0x1071beafc

// -[SCPermissionRequestManager openSystemNotificationPermissionSettings]
// Type encoding: v16@0:8
// Implementation: 0x1071beb34

// -[SCPermissionRequestManager clearOutstandingPermissionState]
// Type encoding: v16@0:8
// Implementation: 0x1071beb6c

// -[SCPermissionRequestManager _addRequestToQueue:forPermission:withCallback:]
// Type encoding: v40@0:8@?16Q24@?32
// Implementation: 0x1071bebfc

// -[SCPermissionRequestManager _maybeDisplayPrompt]
// Type encoding: v16@0:8
// Implementation: 0x1071bedc0

// -[SCPermissionRequestManager _permissionToPermissionPromptType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x1071bf05c

// -[SCPermissionRequestManager _deepestViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071bf06c

// -[SCPermissionRequestManager _applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1071bf164

// -[SCPermissionRequestManager _applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1071bf170

// -[SCPermissionRequestManager _photoPermissionCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x1071bf1d8

// -[SCPermissionRequestManager permissionsManagerWantsToPresentPermissionsPrompt:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071bf1e0

// -[SCPermissionRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071bf278

@end
