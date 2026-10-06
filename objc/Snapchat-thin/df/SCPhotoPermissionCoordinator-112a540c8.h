// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPhotoPermissionCoordinator
// Superclass: NSObject
// Address: 0x112a540c8

@interface SCPhotoPermissionCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPhotoPermissionCoordinator initWithUserTrackedLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x10566367c

// -[SCPhotoPermissionCoordinator isPhotoPermissionLimited]
// Type encoding: B16@0:8
// Implementation: 0x10566370c

// -[SCPhotoPermissionCoordinator isPhotoPermissionFullAccess]
// Type encoding: B16@0:8
// Implementation: 0x105663734

// -[SCPhotoPermissionCoordinator isPhotoPermissionUndetermined]
// Type encoding: B16@0:8
// Implementation: 0x105663768

// -[SCPhotoPermissionCoordinator requestAuthorizationFromSourcePageType:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x105663774

// -[SCPhotoPermissionCoordinator requestAuthorizationWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056638f4

// -[SCPhotoPermissionCoordinator promptChangeSettingsAlertWithTitle:message:buttonTitle:fromViewController:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105663900

// -[SCPhotoPermissionCoordinator checkAndRequestAuthorizationWithSuccessBlock:failureBlock:showDeniedAlert:]
// Type encoding: v36@0:8@?16@?24B32
// Implementation: 0x1056639ac

// -[SCPhotoPermissionCoordinator openSystemPermissionSettingsForPhotoPermission]
// Type encoding: v16@0:8
// Implementation: 0x1056639c0

// -[SCPhotoPermissionCoordinator photoPermissionObservable]
// Type encoding: @16@0:8
// Implementation: 0x1056639cc

// -[SCPhotoPermissionCoordinator presentLimitedLibraryPickerIfSupportedWithViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056639f4

// -[SCPhotoPermissionCoordinator _handleSettingsCellTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105663e84

// -[SCPhotoPermissionCoordinator _handleMorePhotosCellTap:viewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105663f70

// -[SCPhotoPermissionCoordinator _handleDoneTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056640b8

// -[SCPhotoPermissionCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056640c0

@end
