// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureToggleCameraImpl
// Superclass: SCFeature
// Address: 0x112ad0588

@interface SCFeatureToggleCameraImpl

// Property: containerView; attributes: T@"UIView<SCFeatureContainerView>",W,N,V_containerView
// Property: managedCapturerState; attributes: T@"SCManagedCapturerState",&,V_managedCapturerState
// Property: isCameraModeLoading; attributes: TB,N,V_isCameraModeLoading
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCFeatureToggleCameraDelegate>",W,N,V_delegate

// -[SCFeatureToggleCameraImpl initWithCameraHardwareServicesAPI:captureDeviceManager:preferences:applicationLifecycleEvents:viewControllerLifecycleEvents:cameraHardwareResource:cameraFeaturePerformanceFeatureScopedLoggerFactory:cameraViewType:circumstanceEngine:resolutionOptimizationConfig:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64q72@80@88
// Implementation: 0x1061aaa10

// -[SCFeatureToggleCameraImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061aafdc

// -[SCFeatureToggleCameraImpl toggleCameraWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1061ab020

// -[SCFeatureToggleCameraImpl _viewfinderTransitionForSecondaryDevicePositions:]
// Type encoding: q24@0:8Q16
// Implementation: 0x1061ab3d8

// -[SCFeatureToggleCameraImpl _didSetDevicePositionAsynchronouslyWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1061ab438

// -[SCFeatureToggleCameraImpl shortcutEnableIfNecessary:cameraShortcutId:scanSessionId:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1061ab4fc

// -[SCFeatureToggleCameraImpl shortcutDisable]
// Type encoding: v16@0:8
// Implementation: 0x1061ab5c0

// -[SCFeatureToggleCameraImpl cameraShortcutFeatureType]
// Type encoding: Q16@0:8
// Implementation: 0x1061ab5c4

// -[SCFeatureToggleCameraImpl cameraShortcutFeatureOption]
// Type encoding: q16@0:8
// Implementation: 0x1061ab5cc

// -[SCFeatureToggleCameraImpl hasPendingContent]
// Type encoding: B16@0:8
// Implementation: 0x1061ab5d4

// -[SCFeatureToggleCameraImpl cameraShortcutFeatureName]
// Type encoding: @16@0:8
// Implementation: 0x1061ab5dc

// -[SCFeatureToggleCameraImpl _appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1061ab5e8

// -[SCFeatureToggleCameraImpl _viewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1061ab614

// -[SCFeatureToggleCameraImpl _refreshCachedDevicePostitionTimestamp]
// Type encoding: v16@0:8
// Implementation: 0x1061ab640

// -[SCFeatureToggleCameraImpl pendingDependencies]
// Type encoding: @16@0:8
// Implementation: 0x1061ab694

// -[SCFeatureToggleCameraImpl featureName]
// Type encoding: q16@0:8
// Implementation: 0x1061ab70c

// -[SCFeatureToggleCameraImpl loadTimeout]
// Type encoding: q16@0:8
// Implementation: 0x1061ab714

// -[SCFeatureToggleCameraImpl _didLoadDependency:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061ab71c

// -[SCFeatureToggleCameraImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ab768

// -[SCFeatureToggleCameraImpl modeEnabledStateChangedObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061ab77c

// -[SCFeatureToggleCameraImpl disableMode]
// Type encoding: v16@0:8
// Implementation: 0x1061ab784

// -[SCFeatureToggleCameraImpl incompatibleModes]
// Type encoding: @16@0:8
// Implementation: 0x1061ab788

// -[SCFeatureToggleCameraImpl isHidden]
// Type encoding: B16@0:8
// Implementation: 0x1061ab794

// -[SCFeatureToggleCameraImpl modeType]
// Type encoding: i16@0:8
// Implementation: 0x1061ab79c

// -[SCFeatureToggleCameraImpl onTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1061ab7a4

// -[SCFeatureToggleCameraImpl secondaryOnTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1061ab7e4

// -[SCFeatureToggleCameraImpl state]
// Type encoding: i16@0:8
// Implementation: 0x1061ab7e8

// -[SCFeatureToggleCameraImpl secondaryButtonState]
// Type encoding: i16@0:8
// Implementation: 0x1061ab7f0

// -[SCFeatureToggleCameraImpl toolbarButtonPositionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ab7f8

// -[SCFeatureToggleCameraImpl startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ab7fc

// -[SCFeatureToggleCameraImpl _didReceiveMainCameraStreamFromDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061ab9c4

// -[SCFeatureToggleCameraImpl stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x1061aba48

// -[SCFeatureToggleCameraImpl areAllDependenciesLoaded]
// Type encoding: B16@0:8
// Implementation: 0x1061aba7c

// -[SCFeatureToggleCameraImpl setIsCameraModeLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061aba98

// -[SCFeatureToggleCameraImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061abb98

// -[SCFeatureToggleCameraImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1061ac068

// -[SCFeatureToggleCameraImpl _didChangeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ac09c

// -[SCFeatureToggleCameraImpl _sessionDidStartRunning]
// Type encoding: v16@0:8
// Implementation: 0x1061ac0a0

// -[SCFeatureToggleCameraImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1061ac0b4

// -[SCFeatureToggleCameraImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ac0d4

// -[SCFeatureToggleCameraImpl containerView]
// Type encoding: @16@0:8
// Implementation: 0x1061ac0e8

// -[SCFeatureToggleCameraImpl setContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ac108

// -[SCFeatureToggleCameraImpl managedCapturerState]
// Type encoding: @16@0:8
// Implementation: 0x1061ac11c

// -[SCFeatureToggleCameraImpl setManagedCapturerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ac12c

// -[SCFeatureToggleCameraImpl isCameraModeLoading]
// Type encoding: B16@0:8
// Implementation: 0x1061ac138

// -[SCFeatureToggleCameraImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061ac148

@end
