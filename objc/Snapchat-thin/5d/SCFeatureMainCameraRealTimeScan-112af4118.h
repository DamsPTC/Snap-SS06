// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureMainCameraRealTimeScan
// Superclass: SCFeature
// Address: 0x112af4118

@interface SCFeatureMainCameraRealTimeScan

// Property: frameCapturer; attributes: T@"<SCScanCapturing>",&,N,V_frameCapturer
// Property: timerFactoryBlock; attributes: T@?,C,N,V_timerFactoryBlock
// Property: activationWorkflow; attributes: T@"SCMainCameraRealTimeScanActivationWorkflow",&,N,V_activationWorkflow
// Property: isInTestMode; attributes: TB,N,V_isInTestMode
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: cameraUIDelegate; attributes: T@"<SCMainCameraScanDelegate>",W,N,V_cameraUIDelegate

// -[SCFeatureMainCameraRealTimeScan initWithFeatureScan:cameraFeatureUpdateEventObservable:cameraHardwareResource:cameraHardwareServicesAPI:appLifecycleManager:applicationLifecycleEvents:performerProvider:realTimeScanScopeExposer:realTimeScanScopeServices:realTimeScanConfiguration:realTimeScanLogger:cameraUIServices:cameraWorkflowDelegate:mainCameraViewControllerLifecycleEvents:mainQueuePerformer:batchCaptureFeature:lensCarouselManager:startupInfoService:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x106738b84

// -[SCFeatureMainCameraRealTimeScan configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106739144

// -[SCFeatureMainCameraRealTimeScan activate]
// Type encoding: v16@0:8
// Implementation: 0x1067391dc

// -[SCFeatureMainCameraRealTimeScan _activateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106739244

// -[SCFeatureMainCameraRealTimeScan _configureObservablesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106739268

// -[SCFeatureMainCameraRealTimeScan _configureRtsAndCameraViewLifecycleObservables]
// Type encoding: v16@0:8
// Implementation: 0x106739360

// -[SCFeatureMainCameraRealTimeScan _handleCameraLifecycleEventUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067395bc

// -[SCFeatureMainCameraRealTimeScan _deactivate]
// Type encoding: v16@0:8
// Implementation: 0x1067396d8

// -[SCFeatureMainCameraRealTimeScan _removeRealTimeScanScope]
// Type encoding: v16@0:8
// Implementation: 0x106739794

// -[SCFeatureMainCameraRealTimeScan realTimeScanDidPresentNotificationUI]
// Type encoding: v16@0:8
// Implementation: 0x1067398cc

// -[SCFeatureMainCameraRealTimeScan realTimeScanDidDismissNotificationUI]
// Type encoding: v16@0:8
// Implementation: 0x106739938

// -[SCFeatureMainCameraRealTimeScan realTimeScanWantsDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106739a5c

// -[SCFeatureMainCameraRealTimeScan realTimeScanWantsScanLaunchWithFrameId:dataSubject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106739a60

// -[SCFeatureMainCameraRealTimeScan didDismissFullscreenModal]
// Type encoding: v16@0:8
// Implementation: 0x106739a70

// -[SCFeatureMainCameraRealTimeScan didDisplayFullscreenModal]
// Type encoding: v16@0:8
// Implementation: 0x106739b28

// -[SCFeatureMainCameraRealTimeScan setAllCameraUIVisible:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106739bdc

// -[SCFeatureMainCameraRealTimeScan setCameraHeaderVisible:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106739c24

// -[SCFeatureMainCameraRealTimeScan setCameraToolbarVisible:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106739c6c

// -[SCFeatureMainCameraRealTimeScan headerItemYOffset]
// Type encoding: d16@0:8
// Implementation: 0x106739cb4

// -[SCFeatureMainCameraRealTimeScan frameCapturer]
// Type encoding: @16@0:8
// Implementation: 0x106739cf8

// -[SCFeatureMainCameraRealTimeScan _configureActivationStateObservables]
// Type encoding: v16@0:8
// Implementation: 0x106739e60

// -[SCFeatureMainCameraRealTimeScan _exposeRealTimeScanScopeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10673a054

// -[SCFeatureMainCameraRealTimeScan _handleActivationStateUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673a390

// -[SCFeatureMainCameraRealTimeScan _toggleFrameObservableForFeatureActivationState:]
// Type encoding: v20@0:8B16
// Implementation: 0x10673a560

// -[SCFeatureMainCameraRealTimeScan _subscribeToFrameUpdatesAndBeginQuery]
// Type encoding: v16@0:8
// Implementation: 0x10673a608

// -[SCFeatureMainCameraRealTimeScan _subscribeToFrameCaptureSessionUpdates]
// Type encoding: v16@0:8
// Implementation: 0x10673a6d8

// -[SCFeatureMainCameraRealTimeScan _unsubscribeFromFrameCaptureSessionUpdates]
// Type encoding: v16@0:8
// Implementation: 0x10673a85c

// -[SCFeatureMainCameraRealTimeScan _didReceiveFrameUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673a890

// -[SCFeatureMainCameraRealTimeScan _unsubscribeFromFrameUpdatesAndEndQuery]
// Type encoding: v16@0:8
// Implementation: 0x10673a8a0

// -[SCFeatureMainCameraRealTimeScan _logBlizzardStartTimeMetricWithRtsStartTime:]
// Type encoding: v24@0:8q16
// Implementation: 0x10673a900

// -[SCFeatureMainCameraRealTimeScan cameraUIDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10673a9e8

// -[SCFeatureMainCameraRealTimeScan setCameraUIDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673aa08

// -[SCFeatureMainCameraRealTimeScan setFrameCapturer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673aa1c

// -[SCFeatureMainCameraRealTimeScan timerFactoryBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10673aa5c

// -[SCFeatureMainCameraRealTimeScan setTimerFactoryBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10673aa6c

// -[SCFeatureMainCameraRealTimeScan activationWorkflow]
// Type encoding: @16@0:8
// Implementation: 0x10673aa78

// -[SCFeatureMainCameraRealTimeScan setActivationWorkflow:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673aa88

// -[SCFeatureMainCameraRealTimeScan isInTestMode]
// Type encoding: B16@0:8
// Implementation: 0x10673aac8

// -[SCFeatureMainCameraRealTimeScan setIsInTestMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x10673aad8

// -[SCFeatureMainCameraRealTimeScan .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10673aae8

// +[SCFeatureMainCameraRealTimeScan _logFeatureActivationStateUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x10673a5b0

@end
