// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMainCameraRealTimeScanActivationWorkflow
// Superclass: NSObject
// Address: 0x112af42a8

@interface SCMainCameraRealTimeScanActivationWorkflow

// Property: rtsSupported; attributes: TB,N,V_rtsSupported

// -[SCMainCameraRealTimeScanActivationWorkflow initWithRealTimeScanConfiguration:performer:rtsLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10673de20

// -[SCMainCameraRealTimeScanActivationWorkflow beginWithCurrentCapturerState:appLifecycleManager:applicationLifecycleEvents:lensCarouselActiveStateObservable:mainCameraViewControllerLifecycleEvents:cameraFeatureUpdateEventObservable:trayActivationStateObservable:activeLensIdObservable:batchCaptureActivatedObservable:rtsLogger:managedCapturerStateCoordinator:]
// Type encoding: v104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x10673dfb4

// -[SCMainCameraRealTimeScanActivationWorkflow rtsActivationUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10673efc0

// -[SCMainCameraRealTimeScanActivationWorkflow rtsSupported]
// Type encoding: B16@0:8
// Implementation: 0x10673efe8

// -[SCMainCameraRealTimeScanActivationWorkflow setRtsSupported:]
// Type encoding: v20@0:8B16
// Implementation: 0x10673eff0

// -[SCMainCameraRealTimeScanActivationWorkflow _computeIsRtsSupported]
// Type encoding: B16@0:8
// Implementation: 0x10673f134

// -[SCMainCameraRealTimeScanActivationWorkflow _handleScanTrayActiveStateUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x10673f19c

// -[SCMainCameraRealTimeScanActivationWorkflow _handleActiveLensIdUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673f1dc

// -[SCMainCameraRealTimeScanActivationWorkflow _handleLensCarouselActiveStateUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x10673f35c

// -[SCMainCameraRealTimeScanActivationWorkflow _handleCameraLifecycleEventUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673f398

// -[SCMainCameraRealTimeScanActivationWorkflow _handleCameraFeatureUpdateEventUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673f4cc

// -[SCMainCameraRealTimeScanActivationWorkflow _handleBatchCaptureActiveStateUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x10673f578

// -[SCMainCameraRealTimeScanActivationWorkflow _handleAppLifecycleStartupCompletion]
// Type encoding: v16@0:8
// Implementation: 0x10673f5d8

// -[SCMainCameraRealTimeScanActivationWorkflow _subscribeOnAppBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673f608

// -[SCMainCameraRealTimeScanActivationWorkflow _subscribeOnAppEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673f774

// -[SCMainCameraRealTimeScanActivationWorkflow _cameraFeaturesSupportRts]
// Type encoding: B16@0:8
// Implementation: 0x10673f8dc

// -[SCMainCameraRealTimeScanActivationWorkflow _publishIsRtsSupportedForCapturerState:isWillCaptureUpdate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10673f908

// -[SCMainCameraRealTimeScanActivationWorkflow _capturerStateSupportsRts:]
// Type encoding: B24@0:8@16
// Implementation: 0x10673f97c

// -[SCMainCameraRealTimeScanActivationWorkflow _isDevicePositionSupported:]
// Type encoding: B24@0:8q16
// Implementation: 0x10673f9ec

// -[SCMainCameraRealTimeScanActivationWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10673f9f8

@end
