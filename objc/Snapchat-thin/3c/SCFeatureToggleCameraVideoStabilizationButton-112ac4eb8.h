// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureToggleCameraVideoStabilizationButton
// Superclass: SCFeature
// Address: 0x112ac4eb8

@interface SCFeatureToggleCameraVideoStabilizationButton

// Property: frontCameraStabilizationOn; attributes: T@"NSNumber",R,N,V_frontCameraStabilizationOn
// Property: rearCameraStabilizationOn; attributes: T@"NSNumber",R,N,V_rearCameraStabilizationOn
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureToggleCameraVideoStabilizationButton initWithCameraHardwareServicesAPI:cameraHardwareResource:cameraRequestHandler:renderAgent:cameraUIScope:startupConfiguration:circumstanceEngine:cameraUserActionLogger:featureUpdateEventSubject:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1008b98a0

// -[SCFeatureToggleCameraVideoStabilizationButton enabled]
// Type encoding: B16@0:8
// Implementation: 0x1060c3b0c

// -[SCFeatureToggleCameraVideoStabilizationButton resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1060c3b1c

// -[SCFeatureToggleCameraVideoStabilizationButton usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1060c3b20

// -[SCFeatureToggleCameraVideoStabilizationButton cameraModeType]
// Type encoding: i16@0:8
// Implementation: 0x1060c3b28

// -[SCFeatureToggleCameraVideoStabilizationButton isCameraModeActivated]
// Type encoding: B16@0:8
// Implementation: 0x1060c3b30

// -[SCFeatureToggleCameraVideoStabilizationButton _setStabilizationModeOn:userInitiated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1060c3b40

// -[SCFeatureToggleCameraVideoStabilizationButton _isSelectedStateChangedWhenGoingFromStabilizationOn:toStabilizationOn:]
// Type encoding: B28@0:8B16q20
// Implementation: 0x1060c3c6c

// -[SCFeatureToggleCameraVideoStabilizationButton _updateToolbarIconsForStabilizationOn:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060c3c84

// -[SCFeatureToggleCameraVideoStabilizationButton _setHardwareStabilizationModeOn:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060c3d58

// -[SCFeatureToggleCameraVideoStabilizationButton _toolbarItemTapped]
// Type encoding: v16@0:8
// Implementation: 0x1060c3e5c

// -[SCFeatureToggleCameraVideoStabilizationButton _createToolbarItemIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x1060c3eac

// -[SCFeatureToggleCameraVideoStabilizationButton _hideButtonFromExperimentIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060c40c4

// -[SCFeatureToggleCameraVideoStabilizationButton reset]
// Type encoding: v16@0:8
// Implementation: 0x1060c414c

// -[SCFeatureToggleCameraVideoStabilizationButton configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b9d90

// -[SCFeatureToggleCameraVideoStabilizationButton configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060c4158

// -[SCFeatureToggleCameraVideoStabilizationButton activate]
// Type encoding: v16@0:8
// Implementation: 0x1060c4204

// -[SCFeatureToggleCameraVideoStabilizationButton startObservingCapturerStateUpdate:managedCapturerStateCoordinator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060c467c

// -[SCFeatureToggleCameraVideoStabilizationButton _setStabilizationForIncompatibleMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060c4d0c

// -[SCFeatureToggleCameraVideoStabilizationButton _updateBasedStabilizationStateFromObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060c4d2c

// -[SCFeatureToggleCameraVideoStabilizationButton disableStabilizationModeForIncompatibleMode]
// Type encoding: v16@0:8
// Implementation: 0x1060c4e28

// -[SCFeatureToggleCameraVideoStabilizationButton enableStabilizationModeForIncompatibleMode]
// Type encoding: v16@0:8
// Implementation: 0x1060c4e58

// -[SCFeatureToggleCameraVideoStabilizationButton _setButtonHidden:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1060c4fa8

// -[SCFeatureToggleCameraVideoStabilizationButton _logUserActionForUIItem:isEnabling:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1060c5050

// -[SCFeatureToggleCameraVideoStabilizationButton _handleCapturerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060c512c

// -[SCFeatureToggleCameraVideoStabilizationButton modeEnabledStateChangedObservable]
// Type encoding: @16@0:8
// Implementation: 0x1060c521c

// -[SCFeatureToggleCameraVideoStabilizationButton disableMode]
// Type encoding: v16@0:8
// Implementation: 0x1060c5224

// -[SCFeatureToggleCameraVideoStabilizationButton incompatibleModes]
// Type encoding: @16@0:8
// Implementation: 0x1060c5230

// -[SCFeatureToggleCameraVideoStabilizationButton modeType]
// Type encoding: i16@0:8
// Implementation: 0x1060c523c

// -[SCFeatureToggleCameraVideoStabilizationButton onTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060c5244

// -[SCFeatureToggleCameraVideoStabilizationButton isHidden]
// Type encoding: B16@0:8
// Implementation: 0x1060c5298

// -[SCFeatureToggleCameraVideoStabilizationButton secondaryOnTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060c52a0

// -[SCFeatureToggleCameraVideoStabilizationButton state]
// Type encoding: i16@0:8
// Implementation: 0x1060c52a4

// -[SCFeatureToggleCameraVideoStabilizationButton secondaryButtonState]
// Type encoding: i16@0:8
// Implementation: 0x1060c52b4

// -[SCFeatureToggleCameraVideoStabilizationButton toolbarButtonPositionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060c52bc

// -[SCFeatureToggleCameraVideoStabilizationButton frontCameraStabilizationOn]
// Type encoding: @16@0:8
// Implementation: 0x1008b9dd8

// -[SCFeatureToggleCameraVideoStabilizationButton rearCameraStabilizationOn]
// Type encoding: @16@0:8
// Implementation: 0x1008b9dc8

// -[SCFeatureToggleCameraVideoStabilizationButton .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060c52c0

@end
