// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureFrameRateRelaxationImpl
// Superclass: SCFeature
// Address: 0x112acdec8

@interface SCFeatureFrameRateRelaxationImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureFrameRateRelaxationImpl initWithConfiguration:cameraHardwareResource:deviceCapacityAnalyzer:nightModeActivationObservable:cameraDeviceSettingsResolver:cameraViewControllerLifecycleObservable:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1061697f8

// -[SCFeatureFrameRateRelaxationImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106169a30

// -[SCFeatureFrameRateRelaxationImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106169c64

// -[SCFeatureFrameRateRelaxationImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x106169c68

// -[SCFeatureFrameRateRelaxationImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x106169e44

// -[SCFeatureFrameRateRelaxationImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x106169e48

// -[SCFeatureFrameRateRelaxationImpl _seedInitialStateFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x106169e54

// -[SCFeatureFrameRateRelaxationImpl _startObservingState]
// Type encoding: v16@0:8
// Implementation: 0x106169ecc

// -[SCFeatureFrameRateRelaxationImpl _startObservingNightMode]
// Type encoding: v16@0:8
// Implementation: 0x10616a324

// -[SCFeatureFrameRateRelaxationImpl _startObservingCameraPageLifecycle]
// Type encoding: v16@0:8
// Implementation: 0x10616a48c

// -[SCFeatureFrameRateRelaxationImpl _setCameraPageActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10616a7c4

// -[SCFeatureFrameRateRelaxationImpl _didChangeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10616a7f0

// -[SCFeatureFrameRateRelaxationImpl _shouldTransitionLowLightWithBrightness:isCurrentlyLowLight:]
// Type encoding: B24@0:8f16B20
// Implementation: 0x10616a844

// -[SCFeatureFrameRateRelaxationImpl startObservingManagedDeviceCapacityAnalyzerEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10616a868

// -[SCFeatureFrameRateRelaxationImpl _didReceiveBrightness:]
// Type encoding: v20@0:8f16
// Implementation: 0x10616aab4

// -[SCFeatureFrameRateRelaxationImpl stopObservingManagedDeviceCapacityAnalyzerEvent]
// Type encoding: v16@0:8
// Implementation: 0x10616ab14

// -[SCFeatureFrameRateRelaxationImpl _didChangeCaptureDevicePosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x10616ab48

// -[SCFeatureFrameRateRelaxationImpl _didChangeNightModeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10616ab9c

// -[SCFeatureFrameRateRelaxationImpl _reconcileLayersWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x10616abc4

// -[SCFeatureFrameRateRelaxationImpl _reconcileLayer:desiredFloor:forPosition:cameraPageActive:]
// Type encoding: v44@0:8Q16Q24q32B40
// Implementation: 0x10616add8

// -[SCFeatureFrameRateRelaxationImpl _softMapForLayer:floor:position:]
// Type encoding: @40@0:8Q16Q24q32
// Implementation: 0x10616b058

// -[SCFeatureFrameRateRelaxationImpl _layerDescription:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10616b1d0

// -[SCFeatureFrameRateRelaxationImpl didRegisterProviderToken:noFormatFoundError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10616b218

// -[SCFeatureFrameRateRelaxationImpl didUnregisterProviderToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10616b284

// -[SCFeatureFrameRateRelaxationImpl featureNameForToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x10616b2e8

// -[SCFeatureFrameRateRelaxationImpl _layerKeyForToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x10616b364

// -[SCFeatureFrameRateRelaxationImpl _layerValueForLayer:isBack:]
// Type encoding: Q28@0:8Q16B24
// Implementation: 0x10616b4bc

// -[SCFeatureFrameRateRelaxationImpl _devicePositionDescription:]
// Type encoding: @24@0:8q16
// Implementation: 0x10616b524

// -[SCFeatureFrameRateRelaxationImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10616b580

@end
