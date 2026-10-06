// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAlwaysOnMediaPickerStateManager
// Superclass: NSObject
// Address: 0x112bf2c68

@interface SCAlwaysOnMediaPickerStateManager

// Property: displayStateObservable; attributes: T@"SCObservable",R,N,V_displayStatePublisher
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAlwaysOnMediaPickerStateManager initWithInLensMediaPickerManager:lensCarouselManager:cameraHardwareResource:resetToggleOnNewLens:imagineLensService:studySettingsProvider:scopedCameraType:]
// Type encoding: @68@0:8@16@24@32B40@44@52Q60
// Implementation: 0x1091abaec

// -[SCAlwaysOnMediaPickerStateManager _updateToNewLensSucceeded:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091ac204

// -[SCAlwaysOnMediaPickerStateManager _didReceiveSelectedLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091ac2c0

// -[SCAlwaysOnMediaPickerStateManager _updateInLensMediaPickerActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091ac304

// -[SCAlwaysOnMediaPickerStateManager _displayState]
// Type encoding: q16@0:8
// Implementation: 0x1091ac324

// -[SCAlwaysOnMediaPickerStateManager _updateDisplayState]
// Type encoding: v16@0:8
// Implementation: 0x1091ac394

// -[SCAlwaysOnMediaPickerStateManager _isMainCamGamesButtonAlwaysEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1091ac404

// -[SCAlwaysOnMediaPickerStateManager _isOnValidLens]
// Type encoding: B16@0:8
// Implementation: 0x1091ac480

// -[SCAlwaysOnMediaPickerStateManager toggleTapped]
// Type encoding: v16@0:8
// Implementation: 0x1091ac534

// -[SCAlwaysOnMediaPickerStateManager displayStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x1091ac630

// -[SCAlwaysOnMediaPickerStateManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091ac638

// +[SCAlwaysOnMediaPickerStateManager isUserInteractableForState:]
// Type encoding: B24@0:8q16
// Implementation: 0x1091ac51c

// +[SCAlwaysOnMediaPickerStateManager requireInitialSetupForState:]
// Type encoding: B24@0:8q16
// Implementation: 0x1091ac528

@end
