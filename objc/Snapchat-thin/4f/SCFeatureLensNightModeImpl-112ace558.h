// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureLensNightModeImpl
// Superclass: SCFeatureCameraModeBase
// Address: 0x112ace558

@interface SCFeatureLensNightModeImpl

// Property: managedCapturerState; attributes: T@"SCManagedCapturerState",&,N,V_managedCapturerState
// Property: containerView; attributes: T@"UIView<SCFeatureContainerView>",W,N,V_containerView
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

// -[SCFeatureLensNightModeImpl initWithCameraConfiguration:cameraUserActionLogger:cameraHardwareResource:deviceCapacityAnalyzer:lensMode:featureUpdateEventSubject:cameraViewType:mainCameraScan:cameraUIServices:contentDeliveryServices:cameraTooltipsService:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:directorModePresenting:nightModeActivationHandler:circumstanceEngine:]
// Type encoding: @152@0:8@16@24@32@40@48@56q64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x10617f17c

// -[SCFeatureLensNightModeImpl onAppDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10617f5e8

// -[SCFeatureLensNightModeImpl onViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x10617f5ec

// -[SCFeatureLensNightModeImpl onViewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10617f6b8

// -[SCFeatureLensNightModeImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10617f700

// -[SCFeatureLensNightModeImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x10617f784

// -[SCFeatureLensNightModeImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617f848

// -[SCFeatureLensNightModeImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10617f85c

// -[SCFeatureLensNightModeImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10617f86c

// -[SCFeatureLensNightModeImpl _createToolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x10617fa14

// -[SCFeatureLensNightModeImpl isCameraModeActivated]
// Type encoding: B16@0:8
// Implementation: 0x10617fd70

// -[SCFeatureLensNightModeImpl cameraModeType]
// Type encoding: i16@0:8
// Implementation: 0x10617fd74

// -[SCFeatureLensNightModeImpl startObservingManagedDeviceCapacityAnalyzerEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617fd7c

// -[SCFeatureLensNightModeImpl stopObservingManagedDeviceCapacityAnalyzerEvent]
// Type encoding: v16@0:8
// Implementation: 0x10618000c

// -[SCFeatureLensNightModeImpl toolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x106180040

// -[SCFeatureLensNightModeImpl onCameraModeReady]
// Type encoding: v16@0:8
// Implementation: 0x106180070

// -[SCFeatureLensNightModeImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061800c4

// -[SCFeatureLensNightModeImpl forwardCameraOverlayTapGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106180208

// -[SCFeatureLensNightModeImpl setCanEnable:]
// Type encoding: v20@0:8B16
// Implementation: 0x106180270

// -[SCFeatureLensNightModeImpl _nightModeIsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106180298

// -[SCFeatureLensNightModeImpl _nightModeButtonDidChangeSelection:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061802ec

// -[SCFeatureLensNightModeImpl _hasNightModeConditions:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061806ac

// -[SCFeatureLensNightModeImpl _shouldSuggestNightMode:]
// Type encoding: B24@0:8@16
// Implementation: 0x106180760

// -[SCFeatureLensNightModeImpl _shouldShowNightModeButton:]
// Type encoding: B24@0:8@16
// Implementation: 0x106180790

// -[SCFeatureLensNightModeImpl _isAutoEnableFlashExperimentActive]
// Type encoding: B16@0:8
// Implementation: 0x106180894

// -[SCFeatureLensNightModeImpl _isFrontFacing:]
// Type encoding: B24@0:8q16
// Implementation: 0x1061808c8

// -[SCFeatureLensNightModeImpl _updateNightModeButtonWithState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061808d4

// -[SCFeatureLensNightModeImpl _hideWithDelayIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106180950

// -[SCFeatureLensNightModeImpl _reset]
// Type encoding: v16@0:8
// Implementation: 0x1061809f0

// -[SCFeatureLensNightModeImpl _didStartRecording]
// Type encoding: v16@0:8
// Implementation: 0x106180ad4

// -[SCFeatureLensNightModeImpl _didEndRecording]
// Type encoding: v16@0:8
// Implementation: 0x106180adc

// -[SCFeatureLensNightModeImpl detailedCameraModeLogInfo]
// Type encoding: @16@0:8
// Implementation: 0x106180ba4

// -[SCFeatureLensNightModeImpl enabled]
// Type encoding: B16@0:8
// Implementation: 0x106180c6c

// -[SCFeatureLensNightModeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106180c70

// -[SCFeatureLensNightModeImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061811f0

// -[SCFeatureLensNightModeImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106181a78

// -[SCFeatureLensNightModeImpl _didChangeCaptureDevicePosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x106181aac

// -[SCFeatureLensNightModeImpl _didChangeARSessionActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x106181b68

// -[SCFeatureLensNightModeImpl _didChangeLowLightCondition:]
// Type encoding: v24@0:8@16
// Implementation: 0x106181bd0

// -[SCFeatureLensNightModeImpl _didChangeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106181bd4

// -[SCFeatureLensNightModeImpl _isLowLightCondition]
// Type encoding: B16@0:8
// Implementation: 0x106181c0c

// -[SCFeatureLensNightModeImpl nightModeActivationObservable]
// Type encoding: @16@0:8
// Implementation: 0x106181c48

// -[SCFeatureLensNightModeImpl managedCapturerState]
// Type encoding: @16@0:8
// Implementation: 0x106181c58

// -[SCFeatureLensNightModeImpl setManagedCapturerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106181c68

// -[SCFeatureLensNightModeImpl containerView]
// Type encoding: @16@0:8
// Implementation: 0x106181ca8

// -[SCFeatureLensNightModeImpl setContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106181cc8

// -[SCFeatureLensNightModeImpl setToolbarItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106181cdc

// -[SCFeatureLensNightModeImpl cameraUserActionLogger]
// Type encoding: @16@0:8
// Implementation: 0x106181d1c

// -[SCFeatureLensNightModeImpl setCameraUserActionLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106181d2c

// -[SCFeatureLensNightModeImpl canEnable]
// Type encoding: B16@0:8
// Implementation: 0x106181d6c

// -[SCFeatureLensNightModeImpl didUserToggleWithinCaptureSession]
// Type encoding: B16@0:8
// Implementation: 0x106181d7c

// -[SCFeatureLensNightModeImpl setDidUserToggleWithinCaptureSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x106181d8c

// -[SCFeatureLensNightModeImpl nightModeButtonTapCount]
// Type encoding: Q16@0:8
// Implementation: 0x106181d9c

// -[SCFeatureLensNightModeImpl setNightModeButtonTapCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106181dac

// -[SCFeatureLensNightModeImpl lastBrightnessValue]
// Type encoding: d16@0:8
// Implementation: 0x106181dbc

// -[SCFeatureLensNightModeImpl setLastBrightnessValue:]
// Type encoding: v24@0:8d16
// Implementation: 0x106181dcc

// -[SCFeatureLensNightModeImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106181ddc

@end
