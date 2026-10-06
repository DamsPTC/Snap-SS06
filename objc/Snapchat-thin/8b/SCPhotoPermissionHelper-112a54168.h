// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPhotoPermissionHelper
// Superclass: NSObject
// Address: 0x112a54168

@interface SCPhotoPermissionHelper


// +[SCPhotoPermissionHelper isAuthorizationStatusUndetermined]
// Type encoding: B16@0:8
// Implementation: 0x105664220

// +[SCPhotoPermissionHelper isAuthorizationStatusDenied]
// Type encoding: B16@0:8
// Implementation: 0x105664244

// +[SCPhotoPermissionHelper requestAuthorizationWithUserTrackedLogger:sourcePageType:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x105664288

// +[SCPhotoPermissionHelper promptToChangeSettingsIfPossibleWithAlertTitle:message:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105664438

// +[SCPhotoPermissionHelper promptToChangeSettingsIfPossibleWithAlertTitle:buttonTitle:message:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056644b8

// +[SCPhotoPermissionHelper openSystemPermissionSettings]
// Type encoding: v16@0:8
// Implementation: 0x105664720

// +[SCPhotoPermissionHelper checkCameraAccessWithSuccessBlock:failureBlock:showDeniedAlert:userTrackedLogger:sourcePageType:]
// Type encoding: v52@0:8@?16@?24B32@36q44
// Implementation: 0x105664758

// +[SCPhotoPermissionHelper checkCameraAccessWithSuccessBlock:failureBlock:showDeniedAlert:userTrackedLogger:]
// Type encoding: v44@0:8@?16@?24B32@36
// Implementation: 0x1056649e8

// +[SCPhotoPermissionHelper _presentPhotoAccessDeniedAlert]
// Type encoding: v16@0:8
// Implementation: 0x1056649f0

// +[SCPhotoPermissionHelper logPhotoPermission:userTrackedLogger:photoPermissionAuthorizationStatus:sourcePageType:]
// Type encoding: v44@0:8B16@20q28q36
// Implementation: 0x105664b64

@end
