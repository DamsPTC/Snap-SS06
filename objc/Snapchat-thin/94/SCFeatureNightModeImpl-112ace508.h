// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureNightModeImpl
// Superclass: SCFeature
// Address: 0x112ace508

@interface SCFeatureNightModeImpl

// Property: managedCapturerState; attributes: T@"SCManagedCapturerState",&,N,V_managedCapturerState
// Property: containerView; attributes: T@"UIView<SCFeatureContainerView>",W,N,V_containerView
// Property: cameraToolbar; attributes: T@"<SCFeatureCameraToolbar>",W,N,V_cameraToolbar
// Property: toolbarItem; attributes: T@"SCCameraToolbarItemImpl",&,N,V_toolbarItem
// Property: cameraUserActionLogger; attributes: T@"SCFeatureReference",&,N,V_cameraUserActionLogger
// Property: canEnable; attributes: TB,N,V_canEnable
// Property: didUserToggleWithinCaptureSession; attributes: TB,N,V_didUserToggleWithinCaptureSession
// Property: nightModeButtonTapCount; attributes: TQ,N,V_nightModeButtonTapCount
// Property: lastBrightnessValue; attributes: Td,V_lastBrightnessValue
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: nightModeActivationObservable; attributes: T@"SCObservable",R,N,V_nightModeActivationSubject

// -[SCFeatureNightModeImpl initWithApplicationLifecycleEvents:viewControllerLifecycleEvents:cameraUserActionLogger:cameraHardwareResource:deviceCapacityAnalyzer:cameraHardwareServicesAPI:cameraModeLabelsConfig:nightModePerformanceUpgradesEnabled:nightModeActivationHandler:lensCameraModeConfig:circumstanceEngine:]
// Type encoding: @100@0:8@16@24@32@40@48@56@64B72@76@84@92
// Implementation: 0x1008a7e8c

// -[SCFeatureNightModeImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10617d7bc

// -[SCFeatureNightModeImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x10617d800

// -[SCFeatureNightModeImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008a8490

// -[SCFeatureNightModeImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1008a8378

// -[SCFeatureNightModeImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10617d89c

// -[SCFeatureNightModeImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008a84a4

// -[SCFeatureNightModeImpl _createToolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x1008a8630

// -[SCFeatureNightModeImpl isCameraModeActivated]
// Type encoding: B16@0:8
// Implementation: 0x10617db30

// -[SCFeatureNightModeImpl cameraModeType]
// Type encoding: i16@0:8
// Implementation: 0x10617db70

// -[SCFeatureNightModeImpl forwardCameraOverlayTapGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617db78

// -[SCFeatureNightModeImpl _setNightModeSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c40a08

// -[SCFeatureNightModeImpl _isNightModeSelected]
// Type encoding: B16@0:8
// Implementation: 0x100c40964

// -[SCFeatureNightModeImpl _programmaticallySetNightModeSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c409d0

// -[SCFeatureNightModeImpl _setNightModeSelectedForRingFlash:]
// Type encoding: v20@0:8B16
// Implementation: 0x10617dbd8

// -[SCFeatureNightModeImpl setCanEnable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10617dc18

// -[SCFeatureNightModeImpl _appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10617dc54

// -[SCFeatureNightModeImpl _viewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x1008c9a44

// -[SCFeatureNightModeImpl _viewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10617dc58

// -[SCFeatureNightModeImpl startObservingManagedDeviceCapacityAnalyzerEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617dc5c

// -[SCFeatureNightModeImpl stopObservingManagedDeviceCapacityAnalyzerEvent]
// Type encoding: v16@0:8
// Implementation: 0x10617deec

// -[SCFeatureNightModeImpl _nightModeButtonDidChangeSelection:]
// Type encoding: v20@0:8B16
// Implementation: 0x10617df20

// -[SCFeatureNightModeImpl _hasNightModeConditions:]
// Type encoding: B24@0:8@16
// Implementation: 0x1008ca09c

// -[SCFeatureNightModeImpl _shouldSuggestNightMode:]
// Type encoding: B24@0:8@16
// Implementation: 0x1008ca06c

// -[SCFeatureNightModeImpl _shouldShowNightModeButton:]
// Type encoding: B24@0:8@16
// Implementation: 0x1008ad398

// -[SCFeatureNightModeImpl _isAutoEnableFlashExperimentActive]
// Type encoding: B16@0:8
// Implementation: 0x10617e2a8

// -[SCFeatureNightModeImpl _isNightModeToolbarItemHidden]
// Type encoding: B16@0:8
// Implementation: 0x1008a8570

// -[SCFeatureNightModeImpl _isFrontFacing:]
// Type encoding: B24@0:8q16
// Implementation: 0x1008ca150

// -[SCFeatureNightModeImpl _updateNightModeButtonWithState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008ad2e8

// -[SCFeatureNightModeImpl _hideWithDelayIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1008c9fb0

// -[SCFeatureNightModeImpl _reset]
// Type encoding: v16@0:8
// Implementation: 0x10617e2dc

// -[SCFeatureNightModeImpl _didStartRecording]
// Type encoding: v16@0:8
// Implementation: 0x10617e3ec

// -[SCFeatureNightModeImpl _didEndRecording]
// Type encoding: v16@0:8
// Implementation: 0x10617e3f4

// -[SCFeatureNightModeImpl detailedCameraModeLogInfo]
// Type encoding: @16@0:8
// Implementation: 0x10617e4bc

// -[SCFeatureNightModeImpl enabled]
// Type encoding: B16@0:8
// Implementation: 0x10617e4c8

// -[SCFeatureNightModeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10617e508

// -[SCFeatureNightModeImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1008c9ae8

// -[SCFeatureNightModeImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10617ec04

// -[SCFeatureNightModeImpl _didChangeCaptureDevicePosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c40808

// -[SCFeatureNightModeImpl _didChangeARSessionActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617ec38

// -[SCFeatureNightModeImpl _didChangeLowLightCondition:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c6e600

// -[SCFeatureNightModeImpl _didChangeRingFlashState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617eccc

// -[SCFeatureNightModeImpl _isEligibleForRingFlashNightMode:]
// Type encoding: B24@0:8@16
// Implementation: 0x100c40ba8

// -[SCFeatureNightModeImpl _keepOrAutoApplyNightModeForRingFlash:respectUserOptOut:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x100c40b08

// -[SCFeatureNightModeImpl _unwindRingFlashNightModeIfNoLongerEligible:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617eda4

// -[SCFeatureNightModeImpl _shouldApplyNightModeWhenRingFlashEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10617ee20

// -[SCFeatureNightModeImpl _didChangeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c3d9fc

// -[SCFeatureNightModeImpl _isLowLightCondition]
// Type encoding: B16@0:8
// Implementation: 0x1008ad484

// -[SCFeatureNightModeImpl nightModeActivationObservable]
// Type encoding: @16@0:8
// Implementation: 0x10617ee88

// -[SCFeatureNightModeImpl managedCapturerState]
// Type encoding: @16@0:8
// Implementation: 0x10617ee98

// -[SCFeatureNightModeImpl setManagedCapturerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617eea8

// -[SCFeatureNightModeImpl containerView]
// Type encoding: @16@0:8
// Implementation: 0x10617eee8

// -[SCFeatureNightModeImpl setContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617ef08

// -[SCFeatureNightModeImpl cameraToolbar]
// Type encoding: @16@0:8
// Implementation: 0x10617ef1c

// -[SCFeatureNightModeImpl setCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617ef3c

// -[SCFeatureNightModeImpl toolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x10617ef50

// -[SCFeatureNightModeImpl setToolbarItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617ef60

// -[SCFeatureNightModeImpl cameraUserActionLogger]
// Type encoding: @16@0:8
// Implementation: 0x10617efa0

// -[SCFeatureNightModeImpl setCameraUserActionLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617efb0

// -[SCFeatureNightModeImpl canEnable]
// Type encoding: B16@0:8
// Implementation: 0x10617eff0

// -[SCFeatureNightModeImpl didUserToggleWithinCaptureSession]
// Type encoding: B16@0:8
// Implementation: 0x10617f000

// -[SCFeatureNightModeImpl setDidUserToggleWithinCaptureSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x10617f010

// -[SCFeatureNightModeImpl nightModeButtonTapCount]
// Type encoding: Q16@0:8
// Implementation: 0x10617f020

// -[SCFeatureNightModeImpl setNightModeButtonTapCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10617f030

// -[SCFeatureNightModeImpl lastBrightnessValue]
// Type encoding: d16@0:8
// Implementation: 0x10617f040

// -[SCFeatureNightModeImpl setLastBrightnessValue:]
// Type encoding: v24@0:8d16
// Implementation: 0x10617f050

// -[SCFeatureNightModeImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10617f060

@end
