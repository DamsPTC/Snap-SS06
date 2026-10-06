// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraPreviewPresenterImpl
// Superclass: NSObject
// Address: 0x112acbee8

@interface SCCameraPreviewPresenterImpl

// Property: previewPresenter; attributes: T@"<SCPreviewPresenter>",&,N
// Property: cameraFeatureCatalog; attributes: T@"<SCLegacyPublicCameraFeatureCatalog>",W,N,V_cameraFeatureCatalog
// Property: isPreviewWarmedUp; attributes: TB,R,N
// Property: cameraPreviewPresenterDelegate; attributes: T@"SCCameraViewController",?,W,N,V_cameraPreviewPresenterDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: cameraPreviewPresenterEventObservable; attributes: T@"SCObservable",R,N
// Property: presentingPreview; attributes: TB,R,N
// Property: presentingPreviewWithLens; attributes: TB,R,N

// -[SCCameraPreviewPresenterImpl initWithUserSession:coreCameraLogger:previewTransitionController:sendflowScopeExposer:grapheneLogger:snapchattersDataFetcher:deviceMotionManager:cameraHardwareServicesAPI:captureDeviceManager:cameraHardwareResource:deviceCapacityAnalyzer:previewFilterDataProviderFactory:cameraConfigurationServices:legacyLensLogger:circumstanceEngine:complianceEngine:appStartExperimentReader:cameraSnapCreationLogger:cameraSnapModelServices:appLifecycleEvent:nightModeServices:lensPreviewConfiguringServices:previewABServices:snapEditorTweakServices:snapEditorScopeExposer:snapEditorScopeServices:lensTinselRegistrator:deckServices:checkInOptionFetcher:contentPostSendUpsellServices:aiLensDataProvider:sendToFeedLogger:miniCameraContainerProvider:mainTabNavigationServices:storyAutoSavingScopeExposer:locationProvider:userLocationPermissionsManager:temporaryFileWriter:friendsFeedLoggingServices:conversationIdServices:lensPlusServices:cameraModeActivationController:lensVenueInfoProvider:snapDocEditorServices:ucoServices:sendFlowScopeBuilderServices:bitmojiLensContextServices:]
// Type encoding: @392@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384
// Implementation: 0x1006c97c0

// -[SCCameraPreviewPresenterImpl cameraPreviewPresenterEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x106105af0

// -[SCCameraPreviewPresenterImpl _isSnapEditorPresented]
// Type encoding: B16@0:8
// Implementation: 0x106105b18

// -[SCCameraPreviewPresenterImpl isPresentingPreviewViewController]
// Type encoding: B16@0:8
// Implementation: 0x106105b78

// -[SCCameraPreviewPresenterImpl presentingPreview]
// Type encoding: B16@0:8
// Implementation: 0x106105bf4

// -[SCCameraPreviewPresenterImpl presentingPreviewWithLens]
// Type encoding: B16@0:8
// Implementation: 0x106105bf8

// -[SCCameraPreviewPresenterImpl willEnterPreview]
// Type encoding: v16@0:8
// Implementation: 0x106105d7c

// -[SCCameraPreviewPresenterImpl logPresentPreview]
// Type encoding: v16@0:8
// Implementation: 0x106105dc8

// -[SCCameraPreviewPresenterImpl presentPreviewForImageFuture:async:imageCaptureConfiguration:managedCapturerState:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x106105e08

// -[SCCameraPreviewPresenterImpl _presentPreviewForImageFuture:async:imageCaptureConfiguration:managedCapturerState:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x106106380

// -[SCCameraPreviewPresenterImpl presentPreviewForVideoFuture:videoCaptureConfiguration:managedCapturerState:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061067d4

// -[SCCameraPreviewPresenterImpl warmupPreview]
// Type encoding: v16@0:8
// Implementation: 0x106107248

// -[SCCameraPreviewPresenterImpl releasePrewarmedPreviewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106107790

// -[SCCameraPreviewPresenterImpl isPreviewWarmedUp]
// Type encoding: B16@0:8
// Implementation: 0x1061078e0

// -[SCCameraPreviewPresenterImpl resetPreviewPresenter]
// Type encoding: v16@0:8
// Implementation: 0x1061078e8

// -[SCCameraPreviewPresenterImpl teardownInFlightRecoveredPreview]
// Type encoding: v16@0:8
// Implementation: 0x1061078f0

// -[SCCameraPreviewPresenterImpl handleNavigationAfterStoryPostedWithReplyConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106107ac4

// -[SCCameraPreviewPresenterImpl presentPreviewForBatchCaptureWithManagedCapturerState:activeCameraModes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061086a4

// -[SCCameraPreviewPresenterImpl _prepareTimelineLoggingWithConfiguration:managedCapturerState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106108d00

// -[SCCameraPreviewPresenterImpl presentPreviewForContinuousCaptureWithManagedCapturerState:activeCameraModes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106109058

// -[SCCameraPreviewPresenterImpl presentPreviewForContinuousCaptureWithTimelineConfiguration:snapSessionID:managedCapturerState:activeCameraModes:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10610929c

// -[SCCameraPreviewPresenterImpl recoverPreviewForContinuousCaptureWithTimelineConfiguration:snapSessionContext:contentLossReason:managedCapturerState:activeCameraModes:]
// Type encoding: v56@0:8@16@24q32@40@48
// Implementation: 0x1061099bc

// -[SCCameraPreviewPresenterImpl vendPreviewPresenterToRelevantFeatures:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008e91a0

// -[SCCameraPreviewPresenterImpl presentPreview]
// Type encoding: v16@0:8
// Implementation: 0x106109edc

// -[SCCameraPreviewPresenterImpl presentSnapEditor]
// Type encoding: v16@0:8
// Implementation: 0x10610a0b4

// -[SCCameraPreviewPresenterImpl presentPreviewForDirectorModeWithManagedCapturerState:activeCameraModes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10610a24c

// -[SCCameraPreviewPresenterImpl preloadSnapEditor]
// Type encoding: v16@0:8
// Implementation: 0x10610aa14

// -[SCCameraPreviewPresenterImpl didComeFromCameraWithoutSendingSnapForCameraVC]
// Type encoding: v16@0:8
// Implementation: 0x10610aae4

// -[SCCameraPreviewPresenterImpl previewPresenter]
// Type encoding: @16@0:8
// Implementation: 0x1008d4bcc

// -[SCCameraPreviewPresenterImpl setPreviewPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10610ab64

// -[SCCameraPreviewPresenterImpl scanCameraShortcutSessionStartWithId:scanSessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10610ad4c

// -[SCCameraPreviewPresenterImpl scanCameraShortcutSessionEnd]
// Type encoding: v16@0:8
// Implementation: 0x10610ae14

// -[SCCameraPreviewPresenterImpl _setTriggeringSectionWithPreviewPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008e42fc

// -[SCCameraPreviewPresenterImpl _setCaptureSourceFromRecordingMethod:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10610aea8

// -[SCCameraPreviewPresenterImpl _presentPreviewForRecordedVideoFuture:videoCaptureConfiguration:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10610aefc

// -[SCCameraPreviewPresenterImpl _presentPreviewForRecordedVideo:videoCaptureConfiguration:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10610b1b0

// -[SCCameraPreviewPresenterImpl _setupMultiSnapConfigurationWithVideo:videoCaptureConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10610b248

// -[SCCameraPreviewPresenterImpl _setCameraModesInfoFromActiveCameraModes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10610b63c

// -[SCCameraPreviewPresenterImpl _sendFlowSource]
// Type encoding: Q16@0:8
// Implementation: 0x10610b764

// -[SCCameraPreviewPresenterImpl _createPreviewWorkflowNavigationHandler]
// Type encoding: @16@0:8
// Implementation: 0x10610b818

// -[SCCameraPreviewPresenterImpl cameraFeatureCatalog]
// Type encoding: @16@0:8
// Implementation: 0x1008d53c4

// -[SCCameraPreviewPresenterImpl setCameraFeatureCatalog:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008d4bb4

// -[SCCameraPreviewPresenterImpl cameraPreviewPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1008d53ac

// -[SCCameraPreviewPresenterImpl setCameraPreviewPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008d4bc0

// -[SCCameraPreviewPresenterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10610b94c

@end
