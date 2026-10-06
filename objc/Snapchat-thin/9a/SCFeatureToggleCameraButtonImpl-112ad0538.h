// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureToggleCameraButtonImpl
// Superclass: SCFeature
// Address: 0x112ad0538

@interface SCFeatureToggleCameraButtonImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCFeatureToggleCameraButtonDelegate>",W,N,V_delegate
// Property: view; attributes: T@"UIView",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureToggleCameraButtonImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10088f39c

// -[SCFeatureToggleCameraButtonImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1061aa860

// -[SCFeatureToggleCameraButtonImpl _didChangeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c3d8a4

// -[SCFeatureToggleCameraButtonImpl _setIsRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061aa894

// -[SCFeatureToggleCameraButtonImpl _updateButtonTapArea:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061aa97c

// -[SCFeatureToggleCameraButtonImpl initWithToggleCameraFeature:selfieSettingsFeature:applicationLifecycleEvents:viewControllerLifecycleEvents:cameraUserActionLogger:deviceMotionManager:cameraHardwareResource:cameraModeLabelsConfig:verticalToolbarConfiguration:cameraViewType:appStartExperimentReader:circumstanceEngine:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80q88@96@104
// Implementation: 0x10088e858

// -[SCFeatureToggleCameraButtonImpl view]
// Type encoding: @16@0:8
// Implementation: 0x1061a9ee4

// -[SCFeatureToggleCameraButtonImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x100891848

// -[SCFeatureToggleCameraButtonImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x100891b20

// -[SCFeatureToggleCameraButtonImpl triggerTap]
// Type encoding: v16@0:8
// Implementation: 0x1061a9f64

// -[SCFeatureToggleCameraButtonImpl animate]
// Type encoding: v16@0:8
// Implementation: 0x1061a9f6c

// -[SCFeatureToggleCameraButtonImpl setHighlighted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a9f70

// -[SCFeatureToggleCameraButtonImpl setHidden:animated:duration:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x1008c7070

// -[SCFeatureToggleCameraButtonImpl _setToggleButtonHidden:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1008c7088

// -[SCFeatureToggleCameraButtonImpl setBackFacing:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c3d8e4

// -[SCFeatureToggleCameraButtonImpl setDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a9fbc

// -[SCFeatureToggleCameraButtonImpl shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x1061a9fc0

// -[SCFeatureToggleCameraButtonImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10088f970

// -[SCFeatureToggleCameraButtonImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1061a9fe0

// -[SCFeatureToggleCameraButtonImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061aa094

// -[SCFeatureToggleCameraButtonImpl startDeviceMotionUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1008ba3b0

// -[SCFeatureToggleCameraButtonImpl stopDeviceMotionUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1061aa0e0

// -[SCFeatureToggleCameraButtonImpl setLensCameraContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061aa178

// -[SCFeatureToggleCameraButtonImpl _hasSingleLensCameraContext]
// Type encoding: B16@0:8
// Implementation: 0x1008c72b0

// -[SCFeatureToggleCameraButtonImpl _viewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x1008c9a14

// -[SCFeatureToggleCameraButtonImpl _isDirectorMode]
// Type encoding: B16@0:8
// Implementation: 0x100891b08

// -[SCFeatureToggleCameraButtonImpl toolbarButtonView]
// Type encoding: @16@0:8
// Implementation: 0x1061aa1b0

// -[SCFeatureToggleCameraButtonImpl _createToolbarItemWithToolbar:]
// Type encoding: @24@0:8@16
// Implementation: 0x100891bac

// -[SCFeatureToggleCameraButtonImpl _didTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061aa334

// -[SCFeatureToggleCameraButtonImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1061aa4b4

// -[SCFeatureToggleCameraButtonImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10089121c

// -[SCFeatureToggleCameraButtonImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061aa4d4

@end
