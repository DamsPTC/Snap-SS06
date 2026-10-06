// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserLocationPermissionsManager
// Superclass: NSObject
// Address: 0x112a521d8

@interface SCUserLocationPermissionsManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: authorizationStatus; attributes: TQ,R
// Property: coreLocationAuthorizationStatus; attributes: Ti,R
// Property: isLocationAuthorizedForCurrentUser; attributes: TB,R
// Property: locationAccuracy; attributes: TQ,R,N

// -[SCUserLocationPermissionsManager initWithCurrentUserId:devicePermissionsManager:lazyPreferences:applicationLifecycleEvents:userTrackedLogger:locationAuthorizationManager:circumstanceEngine:valdiRuntimeProvider:mapUKUnder18ComplianceChecker:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x100506a54

// -[SCUserLocationPermissionsManager isUnderAgeLocationConsentEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1055ff18c

// -[SCUserLocationPermissionsManager showMHMDSpecificCopy]
// Type encoding: B16@0:8
// Implementation: 0x1055ff204

// -[SCUserLocationPermissionsManager fetchLocationPermissionStatusWithCompletion:onQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10050717c

// -[SCUserLocationPermissionsManager fetchLocationPermissionStatusWithRequestType:completion:onQueue:]
// Type encoding: v40@0:8Q16@?24@32
// Implementation: 0x10050718c

// -[SCUserLocationPermissionsManager requestLocationPermissionWithRequestType:presentationDelegate:handler:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1055ff2e0

// -[SCUserLocationPermissionsManager requestLocationPermissionWithRequestType:promptType:presentationDelegate:handler:]
// Type encoding: v44@0:8Q16i24@28@?36
// Implementation: 0x1055ff2f0

// -[SCUserLocationPermissionsManager requestBackgroundLocationPermissionWithFriendName:presentationDelegate:handler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1055ff46c

// -[SCUserLocationPermissionsManager _requestLocationPermissionForSystemStatus:presentationDelegate:requestType:promptType:friendName:feature:handler:]
// Type encoding: v64@0:8i16@20Q28i36@40@48@?56
// Implementation: 0x1055ff600

// -[SCUserLocationPermissionsManager _dismissDialog:presentationDelegate:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1055ff9c4

// -[SCUserLocationPermissionsManager _promptForLocationPermissionsWithPermissionStatus:systemStatus:presentationDelegate:requestType:promptType:friendName:feature:completionHandler:]
// Type encoding: v72@0:8Q16i24@28Q36i44@48@56@?64
// Implementation: 0x1055ffa58

// -[SCUserLocationPermissionsManager _shouldShowAlwaysLocationPermissionsPromptV2WithRequestType:permissionStatus:presentationDelegate:]
// Type encoding: B40@0:8Q16Q24@32
// Implementation: 0x105600410

// -[SCUserLocationPermissionsManager _presentAlwaysLocationPermissionsPromptWithPresentationDelegate:permissionStatus:promptType:friendName:feature:completionHandler:]
// Type encoding: v60@0:8@16Q24i32@36@44@?52
// Implementation: 0x105600444

// -[SCUserLocationPermissionsManager _alwaysLocationPromptCallbackWithAuthorized:]
// Type encoding: v20@0:8B16
// Implementation: 0x1056007cc

// -[SCUserLocationPermissionsManager _systemPermissionsAcceptCallbackWithCompletionHandler:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x105600820

// -[SCUserLocationPermissionsManager _userPermissionsAcceptCallbackWithCompletionHandler:presentationDelegate:]
// Type encoding: @?32@0:8@?16@24
// Implementation: 0x105600988

// -[SCUserLocationPermissionsManager _showStandardPermissionsPromptWithPresentationDelegate:feature:acceptCallback:cancelCallback:completionHandler:]
// Type encoding: v56@0:8@16@24@?32@?40@?48
// Implementation: 0x105600ba4

// -[SCUserLocationPermissionsManager _showComposerUnderAgePermissionsPromptWithFeature:presentationDelegate:acceptCallback:completionHandler:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x105600d94

// -[SCUserLocationPermissionsManager _showAlertDialogStandardPermissionsPromptWithPresentationDelegate:acceptCallback:cancelCallback:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105600f60

// -[SCUserLocationPermissionsManager _goToSettingsAcceptCallbackWithRequestType:presentationDelegate:completionHandler:]
// Type encoding: @?40@0:8Q16@24@?32
// Implementation: 0x105601194

// -[SCUserLocationPermissionsManager _showGoToSettingsPromptWithPresentationDelegate:requestType:feature:acceptCallback:cancelCallback:completionHandler:]
// Type encoding: v64@0:8@16Q24@32@?40@?48@?56
// Implementation: 0x1056014d0

// -[SCUserLocationPermissionsManager _onAuthorizationStatusChange:]
// Type encoding: v20@0:8i16
// Implementation: 0x100c73a8c

// -[SCUserLocationPermissionsManager hasFeatureRequestedLocationPermission:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056015bc

// -[SCUserLocationPermissionsManager setFeatureHasRequestedLocationPermission:value:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105601678

// -[SCUserLocationPermissionsManager isAuthorizedForFeature:]
// Type encoding: B24@0:8@16
// Implementation: 0x10560175c

// -[SCUserLocationPermissionsManager isLocationAuthorizedForCurrentUserAndFeature:]
// Type encoding: B24@0:8@16
// Implementation: 0x105601810

// -[SCUserLocationPermissionsManager requestAuthorizationForFeature:requestType:presentationDelegate:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x105601868

// -[SCUserLocationPermissionsManager requestAuthorizationForFeature:requestType:promptType:presentationDelegate:completion:]
// Type encoding: v52@0:8@16Q24i32@36@?44
// Implementation: 0x105601878

// -[SCUserLocationPermissionsManager locationAccuracy]
// Type encoding: Q16@0:8
// Implementation: 0x105601b88

// -[SCUserLocationPermissionsManager permissionsUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x1005072c4

// -[SCUserLocationPermissionsManager onLocationAccuracyChange:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100c73d80

// -[SCUserLocationPermissionsManager onLocationError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105601b90

// -[SCUserLocationPermissionsManager onLocationPermissionStatusChange:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105601bd4

// -[SCUserLocationPermissionsManager _authorizationStatusWithSystemStatus:requestType:]
// Type encoding: Q28@0:8i16Q20
// Implementation: 0x105601c18

// -[SCUserLocationPermissionsManager _isFirstTimeAskingGlobally]
// Type encoding: B16@0:8
// Implementation: 0x105601d0c

// -[SCUserLocationPermissionsManager _setIsNotFirstTimeAskingGloballyIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105601d94

// -[SCUserLocationPermissionsManager _isLocationPermissionEnabledForCurrentUser]
// Type encoding: B16@0:8
// Implementation: 0x105601e24

// -[SCUserLocationPermissionsManager _setLocationPermissionEnabledForCurrentUser]
// Type encoding: v16@0:8
// Implementation: 0x105601eb4

// -[SCUserLocationPermissionsManager _canAskForAlwaysPermissions]
// Type encoding: B16@0:8
// Implementation: 0x105601f78

// -[SCUserLocationPermissionsManager _subscribeToLifecycleEvents]
// Type encoding: v16@0:8
// Implementation: 0x105601fc0

// -[SCUserLocationPermissionsManager _appWillForeground]
// Type encoding: v16@0:8
// Implementation: 0x1056020dc

// -[SCUserLocationPermissionsManager _logPermissionPromptResponse:]
// Type encoding: v20@0:8B16
// Implementation: 0x105602124

// -[SCUserLocationPermissionsManager _needsJITConsentForFeature:]
// Type encoding: B24@0:8@16
// Implementation: 0x105602164

// -[SCUserLocationPermissionsManager _persistFeatureAuthorization:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056021c0

// -[SCUserLocationPermissionsManager authorizationStatus]
// Type encoding: Q16@0:8
// Implementation: 0x105602270

// -[SCUserLocationPermissionsManager coreLocationAuthorizationStatus]
// Type encoding: i16@0:8
// Implementation: 0x1056022f0

// -[SCUserLocationPermissionsManager isLocationAuthorizedForCurrentUser]
// Type encoding: B16@0:8
// Implementation: 0x105602350

// -[SCUserLocationPermissionsManager tryToAddUserLocationPermissionStatusToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10560236c

// -[SCUserLocationPermissionsManager promptViewControllerDidRequestSettingsLaunch:shouldOpenSettings:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1056023dc

// -[SCUserLocationPermissionsManager promptViewControllerWantsToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105602550

// -[SCUserLocationPermissionsManager underAgePermissionViewControllerDidAccept]
// Type encoding: v16@0:8
// Implementation: 0x1056025a0

// -[SCUserLocationPermissionsManager underAgePermissionViewControllerDidDeny]
// Type encoding: v16@0:8
// Implementation: 0x105602600

// -[SCUserLocationPermissionsManager _underAgePermissionTrayDismissed]
// Type encoding: v16@0:8
// Implementation: 0x10560266c

// -[SCUserLocationPermissionsManager _cleanupUnderAgePermissionTray]
// Type encoding: v16@0:8
// Implementation: 0x1056026d8

// -[SCUserLocationPermissionsManager tray:positionDidChange:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10560272c

// -[SCUserLocationPermissionsManager tray:heightForPosition:]
// Type encoding: d32@0:8@16Q24
// Implementation: 0x1056027a8

// -[SCUserLocationPermissionsManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105602808

@end
