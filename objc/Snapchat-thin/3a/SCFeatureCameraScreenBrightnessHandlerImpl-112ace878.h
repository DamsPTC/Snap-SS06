// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureCameraScreenBrightnessHandlerImpl
// Superclass: SCFeature
// Address: 0x112ace878

@interface SCFeatureCameraScreenBrightnessHandlerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureCameraScreenBrightnessHandlerImpl initWithViewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:cameraHardwareResource:deviceCapacityAnalyzer:nightModeActivationObservable:nightModeConfig:currentPageTracker:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10618b630

// -[SCFeatureCameraScreenBrightnessHandlerImpl shouldOverridePreviewScreenBrightness]
// Type encoding: B16@0:8
// Implementation: 0x10618be5c

// -[SCFeatureCameraScreenBrightnessHandlerImpl targetScreenBrightness]
// Type encoding: d16@0:8
// Implementation: 0x10618be90

// -[SCFeatureCameraScreenBrightnessHandlerImpl originalScreenBrightness]
// Type encoding: d16@0:8
// Implementation: 0x10618bea0

// -[SCFeatureCameraScreenBrightnessHandlerImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10618beb0

// -[SCFeatureCameraScreenBrightnessHandlerImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x10618bef4

// -[SCFeatureCameraScreenBrightnessHandlerImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10618bfec

// -[SCFeatureCameraScreenBrightnessHandlerImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10618bff0

// -[SCFeatureCameraScreenBrightnessHandlerImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10618bff8

// -[SCFeatureCameraScreenBrightnessHandlerImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10618c344

// -[SCFeatureCameraScreenBrightnessHandlerImpl _viewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x10618c378

// -[SCFeatureCameraScreenBrightnessHandlerImpl _viewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10618c448

// -[SCFeatureCameraScreenBrightnessHandlerImpl _mainCameraViewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x10618c478

// -[SCFeatureCameraScreenBrightnessHandlerImpl _mainCameraViewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10618c544

// -[SCFeatureCameraScreenBrightnessHandlerImpl _applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x10618c578

// -[SCFeatureCameraScreenBrightnessHandlerImpl _applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x10618c638

// -[SCFeatureCameraScreenBrightnessHandlerImpl _getTargetScreenBrightnessBasedOnActiveFeatures]
// Type encoding: d16@0:8
// Implementation: 0x10618c640

// -[SCFeatureCameraScreenBrightnessHandlerImpl _turnUpScreenBrightnessIfNeeded:]
// Type encoding: v24@0:8q16
// Implementation: 0x10618c704

// -[SCFeatureCameraScreenBrightnessHandlerImpl _currentScreenBrightness]
// Type encoding: d16@0:8
// Implementation: 0x10618c84c

// -[SCFeatureCameraScreenBrightnessHandlerImpl _nightModeTargetBrightness]
// Type encoding: d16@0:8
// Implementation: 0x10618c898

// -[SCFeatureCameraScreenBrightnessHandlerImpl _currentApplicationState]
// Type encoding: q16@0:8
// Implementation: 0x10618cb48

// -[SCFeatureCameraScreenBrightnessHandlerImpl _restoreScreenBrightnessIfNeeded:]
// Type encoding: v24@0:8q16
// Implementation: 0x10618cb8c

// -[SCFeatureCameraScreenBrightnessHandlerImpl _didChangeRingFlashState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10618cce4

// -[SCFeatureCameraScreenBrightnessHandlerImpl _didChangeNightModeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10618ce08

// -[SCFeatureCameraScreenBrightnessHandlerImpl _setScreenBrightnessToTarget:]
// Type encoding: v24@0:8d16
// Implementation: 0x10618cecc

// -[SCFeatureCameraScreenBrightnessHandlerImpl _setScreenBrightnessToOriginalAndClearSettings:]
// Type encoding: v20@0:8B16
// Implementation: 0x10618cf50

// -[SCFeatureCameraScreenBrightnessHandlerImpl _setScreenBrightnessTo:]
// Type encoding: v24@0:8d16
// Implementation: 0x10618cfac

// -[SCFeatureCameraScreenBrightnessHandlerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10618d054

@end
