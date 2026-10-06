// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDeviceFeatureAutoSaveManager
// Superclass: NSObject
// Address: 0x112a23f68

@interface SCSpectaclesDeviceFeatureAutoSaveManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesDeviceFeatureAutoSaveManager initWithDevice:photoPermissionCoordinator:devicePreferences:contentStatusObservable:temporaryFileWriter:fileWritingQueue:cameraRollSaver:fetchLimit:]
// Type encoding: @80@0:8@16@24@32@40@48@56@?64@72
// Implementation: 0x105232bcc

// -[SCSpectaclesDeviceFeatureAutoSaveManager activate]
// Type encoding: v16@0:8
// Implementation: 0x105232efc

// -[SCSpectaclesDeviceFeatureAutoSaveManager hasUserSelectedSaveToDestination]
// Type encoding: B16@0:8
// Implementation: 0x105232f30

// -[SCSpectaclesDeviceFeatureAutoSaveManager isSaveToCameraRollEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105232f70

// -[SCSpectaclesDeviceFeatureAutoSaveManager disableSaveToCameraRoll]
// Type encoding: v16@0:8
// Implementation: 0x105233034

// -[SCSpectaclesDeviceFeatureAutoSaveManager tryEnablingSaveToCameraRoll]
// Type encoding: B16@0:8
// Implementation: 0x10523306c

// -[SCSpectaclesDeviceFeatureAutoSaveManager tryEnablingSaveToCameraRollWithPresentingViewController:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105233114

// -[SCSpectaclesDeviceFeatureAutoSaveManager _requestPhotoLibraryPermissionsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1052335e0

// -[SCSpectaclesDeviceFeatureAutoSaveManager _setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105233788

// -[SCSpectaclesDeviceFeatureAutoSaveManager _activateSaveLogic]
// Type encoding: v16@0:8
// Implementation: 0x1052337fc

// -[SCSpectaclesDeviceFeatureAutoSaveManager _deactivateSaveLogic]
// Type encoding: v16@0:8
// Implementation: 0x105233944

// -[SCSpectaclesDeviceFeatureAutoSaveManager _onContentStatusUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105233970

// -[SCSpectaclesDeviceFeatureAutoSaveManager _saveContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105233d00

// -[SCSpectaclesDeviceFeatureAutoSaveManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105234170

// +[SCSpectaclesDeviceFeatureAutoSaveManager shouldManuallyActivateForPreferences:]
// Type encoding: B24@0:8@16
// Implementation: 0x105232b84

@end
