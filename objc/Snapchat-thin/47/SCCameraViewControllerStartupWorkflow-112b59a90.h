// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraViewControllerStartupWorkflow
// Superclass: SCViewControllerStructuredStartupWorkflow
// Address: 0x112b59a90

@interface SCCameraViewControllerStartupWorkflow

// Property: backgroundPerformer; attributes: T@"SCQueuePerformer",&,N,V_backgroundPerformer
// Property: cameraViewIsBeingDismissed; attributes: TB,R,N,V_cameraViewIsBeingDismissed

// -[SCCameraViewControllerStartupWorkflow initWithAppStartExperimentReader:systemScope:cameraViewfinderConfiguration:viewfinderGeometrySnapshotUpdater:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1007eec74

// -[SCCameraViewControllerStartupWorkflow dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10700ab44

// -[SCCameraViewControllerStartupWorkflow performInitialization:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007f34fc

// -[SCCameraViewControllerStartupWorkflow performLoadView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008442fc

// -[SCCameraViewControllerStartupWorkflow addBottomAccessoryContainerViewIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10084897c

// -[SCCameraViewControllerStartupWorkflow performViewDidLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x100850970

// -[SCCameraViewControllerStartupWorkflow createRoundedCornersIfNeededFromViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x100852124

// -[SCCameraViewControllerStartupWorkflow performViewWillAppear:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10087bbd0

// -[SCCameraViewControllerStartupWorkflow performViewWillTransitionToSize:size:withTransitionCoordinator:]
// Type encoding: v48@0:8@16{CGSize=dd}24@40
// Implementation: 0x10700ae14

// -[SCCameraViewControllerStartupWorkflow performViewDidAppear:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1008c5014

// -[SCCameraViewControllerStartupWorkflow performViewDidLayoutSubviews:]
// Type encoding: v24@0:8@16
// Implementation: 0x10085f71c

// -[SCCameraViewControllerStartupWorkflow performViewSafeAreaInsetsDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2efb0

// -[SCCameraViewControllerStartupWorkflow performApplicationWillEnterForeground:notification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10700b438

// -[SCCameraViewControllerStartupWorkflow cameraTimerStyleProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1007f3cd8

// -[SCCameraViewControllerStartupWorkflow enableCameraOverlayIfNeeded:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1008493f8

// -[SCCameraViewControllerStartupWorkflow resetEffectiveScale:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700b43c

// -[SCCameraViewControllerStartupWorkflow setupCaptureVideoPreviewView:]
// Type encoding: v24@0:8@16
// Implementation: 0x100851a3c

// -[SCCameraViewControllerStartupWorkflow resetView:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c29504

// -[SCCameraViewControllerStartupWorkflow resetCameraTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2a804

// -[SCCameraViewControllerStartupWorkflow resetButtons:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008eb2b0

// -[SCCameraViewControllerStartupWorkflow logPageViewAndStartCameraWhenViewAppears:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700b4f4

// -[SCCameraViewControllerStartupWorkflow prepareForCameraViewControllerDismissal]
// Type encoding: v16@0:8
// Implementation: 0x10700b7fc

// -[SCCameraViewControllerStartupWorkflow cameraViewWasDismissed:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700b810

// -[SCCameraViewControllerStartupWorkflow startHandlingVolumeButtonEventsIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008c588c

// -[SCCameraViewControllerStartupWorkflow _startHandlingVolumeButtonEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700b878

// -[SCCameraViewControllerStartupWorkflow shouldHandleVolumeButtonEvents:]
// Type encoding: B24@0:8@16
// Implementation: 0x10700b9d0

// -[SCCameraViewControllerStartupWorkflow startCamera:context:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1008b4eb4

// -[SCCameraViewControllerStartupWorkflow startCamera:devicePosition:context:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10700bb00

// -[SCCameraViewControllerStartupWorkflow startCamera:context:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1008b4ebc

// -[SCCameraViewControllerStartupWorkflow startCamera:devicePosition:context:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x1008b5208

// -[SCCameraViewControllerStartupWorkflow didSetupVideoPreviewAfterStartingCamera:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700bc08

// -[SCCameraViewControllerStartupWorkflow startDeviceMotionUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008ba344

// -[SCCameraViewControllerStartupWorkflow setNavigationItemsHidden:hidden:includingAlwaysShowItems:withOffset:]
// Type encoding: v36@0:8@16B24B28B32
// Implementation: 0x1008c5cdc

// -[SCCameraViewControllerStartupWorkflow setNavigationItemsAlpha:alpha:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1008c5dc0

// -[SCCameraViewControllerStartupWorkflow hidePrivacyView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700bc0c

// -[SCCameraViewControllerStartupWorkflow showPrivacyView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700bc78

// -[SCCameraViewControllerStartupWorkflow _addObservers:]
// Type encoding: v24@0:8@16
// Implementation: 0x100853d30

// -[SCCameraViewControllerStartupWorkflow _resetScreenshotObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008c8bec

// -[SCCameraViewControllerStartupWorkflow _tabBarGradientView:]
// Type encoding: @24@0:8@16
// Implementation: 0x10700bd94

// -[SCCameraViewControllerStartupWorkflow _navBarGradientView:]
// Type encoding: @24@0:8@16
// Implementation: 0x10700bdf0

// -[SCCameraViewControllerStartupWorkflow _resetFlipCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2a95c

// -[SCCameraViewControllerStartupWorkflow cameraSetupAfterStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700be4c

// -[SCCameraViewControllerStartupWorkflow _setNavigationItemsYOffset:offset:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1008c5e60

// -[SCCameraViewControllerStartupWorkflow _recoverContinuousCaptureWithSnapSessionContext:contentLossReason:viewController:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10700beb8

// -[SCCameraViewControllerStartupWorkflow _recoverCameraFeatures:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008c55d4

// -[SCCameraViewControllerStartupWorkflow _recoverCameraFeaturesWhenApplicationBecomesActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008c5728

// -[SCCameraViewControllerStartupWorkflow _disposeRecoveryDeferredUntilActiveObserver]
// Type encoding: v16@0:8
// Implementation: 0x100c79d64

// -[SCCameraViewControllerStartupWorkflow _disposePreviewRecoveryObserver]
// Type encoding: v16@0:8
// Implementation: 0x10700c600

// -[SCCameraViewControllerStartupWorkflow _beginObservingForPreviewRecoveryCancellation:snapRecovery:isDirectorModeRecovery:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10700c640

// -[SCCameraViewControllerStartupWorkflow _configureCameraOverlay:featureCatalog:state:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1008498d4

// -[SCCameraViewControllerStartupWorkflow _initiateStartCamera:cameraResources:cameraStartCompletionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1008b8d2c

// -[SCCameraViewControllerStartupWorkflow backgroundPerformer]
// Type encoding: @16@0:8
// Implementation: 0x10700d004

// -[SCCameraViewControllerStartupWorkflow continuousCaptureRecoveryPerformer]
// Type encoding: @16@0:8
// Implementation: 0x10700d07c

// -[SCCameraViewControllerStartupWorkflow cameraViewIsBeingDismissed]
// Type encoding: B16@0:8
// Implementation: 0x10700d0f4

// -[SCCameraViewControllerStartupWorkflow setBackgroundPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700d104

// -[SCCameraViewControllerStartupWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10700d144

@end
