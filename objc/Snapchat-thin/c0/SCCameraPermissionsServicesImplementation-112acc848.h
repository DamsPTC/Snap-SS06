// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraPermissionsServicesImplementation
// Superclass: NSObject
// Address: 0x112acc848

@interface SCCameraPermissionsServicesImplementation

// Property: askingVideoCapturePermissions; attributes: TB,N,V_askingVideoCapturePermissions
// Property: askingAudioPermissions; attributes: TB,N,V_askingAudioPermissions
// Property: warnedMicDisabled; attributes: TB,N,V_warnedMicDisabled
// Property: showingNeedCameraAccessAlertView; attributes: TB,N,V_showingNeedCameraAccessAlertView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraPermissionsServicesImplementation initWithRequester:]
// Type encoding: @24@0:8@16
// Implementation: 0x1008b889c

// -[SCCameraPermissionsServicesImplementation requestMicrophoneWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10612569c

// -[SCCameraPermissionsServicesImplementation promptMicrophonePermissionRequestAlert:dismissHandler:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1061256a4

// -[SCCameraPermissionsServicesImplementation requestCameraWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1061259b4

// -[SCCameraPermissionsServicesImplementation requestAdsTrackingUsage]
// Type encoding: v16@0:8
// Implementation: 0x1061259bc

// -[SCCameraPermissionsServicesImplementation promptCameraPermissionRequestAlert:dismissHandler:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1061259c4

// -[SCCameraPermissionsServicesImplementation presentCameraPermissionOnboardingWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106125c30

// -[SCCameraPermissionsServicesImplementation _presentOnboardingOverlayWithActionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106125f34

// -[SCCameraPermissionsServicesImplementation _dismissOnboardingOverlay]
// Type encoding: v16@0:8
// Implementation: 0x106126068

// -[SCCameraPermissionsServicesImplementation _runCompletionOnMainThread:granted:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x106126118

// -[SCCameraPermissionsServicesImplementation askingAudioPermissions]
// Type encoding: B16@0:8
// Implementation: 0x1061261c0

// -[SCCameraPermissionsServicesImplementation setAskingAudioPermissions:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061261c8

// -[SCCameraPermissionsServicesImplementation askingVideoCapturePermissions]
// Type encoding: B16@0:8
// Implementation: 0x1008b8910

// -[SCCameraPermissionsServicesImplementation setAskingVideoCapturePermissions:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061261d0

// -[SCCameraPermissionsServicesImplementation showingNeedCameraAccessAlertView]
// Type encoding: B16@0:8
// Implementation: 0x1061261d8

// -[SCCameraPermissionsServicesImplementation setShowingNeedCameraAccessAlertView:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061261e0

// -[SCCameraPermissionsServicesImplementation warnedMicDisabled]
// Type encoding: B16@0:8
// Implementation: 0x1061261e8

// -[SCCameraPermissionsServicesImplementation setWarnedMicDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061261f0

// -[SCCameraPermissionsServicesImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061261f8

@end
