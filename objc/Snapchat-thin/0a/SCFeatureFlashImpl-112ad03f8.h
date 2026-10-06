// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureFlashImpl
// Superclass: SCFeature
// Address: 0x112ad03f8

@interface SCFeatureFlashImpl

// Property: containerView; attributes: T@"UIView<SCFeatureContainerView>",W,N,V_containerView
// Property: managedCapturerState; attributes: T@"SCManagedCapturerState",&,N,V_managedCapturerState
// Property: canEnable; attributes: TB,N,V_canEnable
// Property: vcLifecycle; attributes: T@"SCDisposableObserverLifecycle",&,N,V_vcLifecycle
// Property: toolbarItem; attributes: T@"SCCameraToolbarItemImpl",&,N,V_toolbarItem
// Property: cameraToolbar; attributes: T@"<SCFeatureCameraToolbar>",W,N,V_cameraToolbar
// Property: cameraUserActionLogger; attributes: T@"SCFeatureReference",&,N,V_cameraUserActionLogger
// Property: flashButtonTapCount; attributes: TQ,N,V_flashButtonTapCount
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureFlashImpl initWithCameraUserActionLogger:cameraHardwareServicesAPI:captureDeviceManager:featureUpdateEventSubject:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1061a2f44

// -[SCFeatureFlashImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a306c

// -[SCFeatureFlashImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1061a3080

// -[SCFeatureFlashImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1061a3090

// -[SCFeatureFlashImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a31b4

// -[SCFeatureFlashImpl _createToolbarItemWithToolbar:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061a3240

// -[SCFeatureFlashImpl setCanEnable:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a3678

// -[SCFeatureFlashImpl _setFlashActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a3688

// -[SCFeatureFlashImpl _shouldHideForState:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061a387c

// -[SCFeatureFlashImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061a38e4

// -[SCFeatureFlashImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061a3928

// -[SCFeatureFlashImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1061a44e4

// -[SCFeatureFlashImpl _didChangeFlashActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a4518

// -[SCFeatureFlashImpl _didChangeFlashSupportedAndTorchSupported:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a454c

// -[SCFeatureFlashImpl _didChangeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a45b0

// -[SCFeatureFlashImpl _didChangeARSessionActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a4668

// -[SCFeatureFlashImpl _didBeginVideoRecording:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061a46cc

// -[SCFeatureFlashImpl _didFinishRecording:session:recordedVideo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061a46d4

// -[SCFeatureFlashImpl _didFailRecording:session:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061a46dc

// -[SCFeatureFlashImpl _didCancelRecording:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061a46e4

// -[SCFeatureFlashImpl modeEnabledStateChangedObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061a46ec

// -[SCFeatureFlashImpl disableMode]
// Type encoding: v16@0:8
// Implementation: 0x1061a46f4

// -[SCFeatureFlashImpl isHidden]
// Type encoding: B16@0:8
// Implementation: 0x1061a46fc

// -[SCFeatureFlashImpl incompatibleModes]
// Type encoding: @16@0:8
// Implementation: 0x1061a4704

// -[SCFeatureFlashImpl modeType]
// Type encoding: i16@0:8
// Implementation: 0x1061a4710

// -[SCFeatureFlashImpl onTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1061a4718

// -[SCFeatureFlashImpl secondaryOnTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1061a4768

// -[SCFeatureFlashImpl state]
// Type encoding: i16@0:8
// Implementation: 0x1061a476c

// -[SCFeatureFlashImpl secondaryButtonState]
// Type encoding: i16@0:8
// Implementation: 0x1061a478c

// -[SCFeatureFlashImpl toolbarButtonPositionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a4794

// -[SCFeatureFlashImpl containerView]
// Type encoding: @16@0:8
// Implementation: 0x1061a4798

// -[SCFeatureFlashImpl setContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a47b8

// -[SCFeatureFlashImpl managedCapturerState]
// Type encoding: @16@0:8
// Implementation: 0x1061a47cc

// -[SCFeatureFlashImpl setManagedCapturerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a47dc

// -[SCFeatureFlashImpl canEnable]
// Type encoding: B16@0:8
// Implementation: 0x1061a481c

// -[SCFeatureFlashImpl vcLifecycle]
// Type encoding: @16@0:8
// Implementation: 0x1061a482c

// -[SCFeatureFlashImpl setVcLifecycle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a483c

// -[SCFeatureFlashImpl toolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x1061a487c

// -[SCFeatureFlashImpl setToolbarItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a488c

// -[SCFeatureFlashImpl cameraToolbar]
// Type encoding: @16@0:8
// Implementation: 0x1061a48cc

// -[SCFeatureFlashImpl setCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a48ec

// -[SCFeatureFlashImpl cameraUserActionLogger]
// Type encoding: @16@0:8
// Implementation: 0x1061a4900

// -[SCFeatureFlashImpl setCameraUserActionLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a4910

// -[SCFeatureFlashImpl flashButtonTapCount]
// Type encoding: Q16@0:8
// Implementation: 0x1061a4950

// -[SCFeatureFlashImpl setFlashButtonTapCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061a4960

// -[SCFeatureFlashImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061a4970

@end
