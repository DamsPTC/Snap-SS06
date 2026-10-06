// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraViewController
// Superclass: UIViewController
// Address: 0x112b59978

@interface SCCameraViewController

// Property: loggingDelegate; attributes: T@"<SCCameraViewControllerLoggingDelegate>",R,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: scanDelegate; attributes: T@"<SCMainCameraScanDelegate>",R,W,N
// Property: shakeToReportDelegate; attributes: T@"<SCShakeToReportDelegate>",R,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isCameraHardwareRequestHandlerActive; attributes: TB,N,V_isCameraHardwareRequestHandlerActive
// Property: state; attributes: T@"SCCameraViewControllerInternalState",R,N,V_state
// Property: lensCarouselManagerFuture; attributes: T@"SCFuture",R,N,V_lensCarouselManagerFuture
// Property: deeplinkUnlockDeferredBlock; attributes: T@?,C,N,V_deeplinkUnlockDeferredBlock
// Property: pressingCameraButton; attributes: TB,N,V_pressingCameraButton
// Property: deepLinkBitmojiController; attributes: T@"SCDeepLinkBitmojiController",&,N,V_deepLinkBitmojiController
// Property: longPressStartTime; attributes: Td,N,V_longPressStartTime
// Property: snapBackQuickTapDismissTimeout; attributes: Td,N,V_snapBackQuickTapDismissTimeout
// Property: snapBackFasterDismissEnabled; attributes: TB,N,V_snapBackFasterDismissEnabled
// Property: isSnapBackReplyCamera; attributes: TB,N,V_isSnapBackReplyCamera
// Property: isPresentingSnapBackInsetStyle; attributes: TB,R,N
// Property: geofilterCount; attributes: Tq,N,V_geofilterCount
// Property: geolensCount; attributes: Tq,N,V_geolensCount
// Property: defaultCustomStatusBarStyle; attributes: Tq,R,N
// Property: isPreviewWarmedUp; attributes: TB,N,V_isPreviewWarmedUp
// Property: cameraCircumstanceEngine; attributes: T@"SCLazy",R,N,V_cameraCircumstanceEngine
// Property: delegate; attributes: T@"<SCCameraWorkflowDelegate>",W,N,V_delegate
// Property: previewWorkflowDelegate; attributes: T@"<SCPreviewWorkflowDelegate>",W,N,V_previewWorkflowDelegate
// Property: startupWorkflow; attributes: T@"SCCameraViewControllerStartupWorkflow",&,N,V_startupWorkflow
// Property: cameraFeatureCatalog; attributes: T@"<SCLegacyPublicCameraFeatureCatalog>",R,N,V_cameraFeatureCatalog
// Property: snapRecoveryServices; attributes: T@"SCSnapRecoveryServices",R,N,V_snapRecoveryServices
// Property: snapDocManagerServices; attributes: T@"SCSnapDocManagerServices",W,N,V_snapDocManagerServices
// Property: cameraSnapModelServices; attributes: T@"SCCameraSnapModelServices",&,N,V_cameraSnapModelServices
// Property: composerServices; attributes: T@"SCComposerServices",R,N,V_composerServices
// Property: cameraResources; attributes: T@"<SCLegacyCameraResources>",R,N,V_cameraResources
// Property: cameraUIScope; attributes: T@"_TtC15SCCameraUIScope15SCCameraUIScope",R,W,N,V_cameraUIScope
// Property: cameraHardwareServices; attributes: T@"_TtC24SCCameraHardwareServices24SCCameraHardwareServices",R,N,V_cameraHardwareServices
// Property: cameraRequestHandlerServices; attributes: T@"SCCameraRequestHandlerServices",R,N,V_cameraRequestHandlerServices
// Property: cameraDeviceSettingsResolver; attributes: T@"SCLazy",R,N,V_cameraDeviceSettingsResolver
// Property: touchController; attributes: T@"SCLazy",R,W,N,V_touchController
// Property: renderAgent; attributes: T@"SCLazy",R,W,N,V_renderAgent
// Property: renderTarget; attributes: T@"SCLazy",R,W,N,V_renderTarget
// Property: cameraStabilityServices; attributes: T@"SCCameraStabilityServices",R,N,V_cameraStabilityServices
// Property: navigationServices; attributes: T@"_TtC20SCNavigationServices20SCNavigationServices",W,N,V_navigationServices
// Property: coreCameraLogger; attributes: T@"SCLazy",W,N,V_coreCameraLogger
// Property: cameraOpenLogger; attributes: T@"SCLazy",W,N,V_cameraOpenLogger
// Property: cameraUserBlizzardLogger; attributes: T@"SCLazy",W,N,V_cameraUserBlizzardLogger
// Property: nightModeServices; attributes: T@"SCCameraNightModeServices",W,N,V_nightModeServices
// Property: cameraGrapheneLogger; attributes: T@"SCGrapheneCoreCameraMetric2",&,N,V_cameraGrapheneLogger
// Property: permissionStateLogger; attributes: T@"SCLazy",W,N,V_permissionStateLogger
// Property: customStatusBarStyleContextController; attributes: T@"<SCCustomStatusBarStyleContextController>",&,N,V_customStatusBarStyleContextController
// Property: soundEffects; attributes: T@"SCLazy",W,N,V_soundEffects
// Property: currentPageTracker; attributes: T@"<SCCurrentPageTracker>",&,N,V_currentPageTracker
// Property: appTerminationProvider; attributes: T@"SCLazy",R,N,V_appTerminationProvider
// Property: screenshotLogger; attributes: T@"SCLazy",&,N,V_screenshotLogger
// Property: launchDataStore; attributes: T@"SCLazy",W,N,V_launchDataStore
// Property: legacyLensLogger; attributes: T@"SCLazy",&,N,V_legacyLensLogger
// Property: userTrackedLogger; attributes: T@"SCLazy",&,N,V_userTrackedLogger
// Property: audioSession; attributes: T@"SCLazy",&,N,V_audioSession
// Property: timelineDataProvider; attributes: T@"<SCTimelineDataProvider>",W,N,V_timelineDataProvider
// Property: storiesLegacySnapInfoCollector; attributes: T@"SCLazy",&,N,V_storiesLegacySnapInfoCollector
// Property: shortcutContextAction; attributes: T@"SCCameraShortcutContextAction",&,N,V_shortcutContextAction
// Property: applicationLifecycleEvents; attributes: T@"<SCApplicationLifecycleEvents>",&,N,V_applicationLifecycleEvents
// Property: lensCarouselStudySettings; attributes: T@"SCLazy",W,N,V_lensCarouselStudySettings
// Property: arBarAdapter; attributes: T@"SCLazy",W,N,V_arBarAdapter
// Property: locationPermissionsManager; attributes: T@"SCLazy",W,N,V_locationPermissionsManager
// Property: systemConfiguration; attributes: T@"<SCSystemConfiguration>",W,N,V_systemConfiguration
// Property: customVolumeServices; attributes: T@"SCCustomVolumeServices",W,N,V_customVolumeServices
// Property: secretFeatureCheckingServices; attributes: T@"_TtC31SCSecretFeatureCheckingServices31SCSecretFeatureCheckingServices",W,N,V_secretFeatureCheckingServices
// Property: simpleSnapchatExperimentConfigProvider; attributes: T@"SCLazy",W,N,V_simpleSnapchatExperimentConfigProvider
// Property: permissionRequestService; attributes: T@"SCLazy",W,N,V_permissionRequestService
// Property: lensPlusTierService; attributes: T@"SCLazy",&,N,V_lensPlusTierService
// Property: snapEditorTweakServices; attributes: T@"_TtC23SnapEditorTweakServices23SnapEditorTweakServices",&,N,V_snapEditorTweakServices
// Property: cameraModeActivationController; attributes: T@"SCLazy",W,N,V_cameraModeActivationController
// Property: cameraLensesViewControllerManager; attributes: T@"SCLazy",&,N,V_cameraLensesViewControllerManager
// Property: previewPresenterDelegate; attributes: T@"<SCCameraPreviewPresenter>",W,N,V_previewPresenterDelegate
// Property: previewFilterDataProviderFactory; attributes: T@"<SCPreviewFilterDataProviderFactory>",&,N,V_previewFilterDataProviderFactory
// Property: snapchattersDataFetcher; attributes: T@"SCLazy",W,N,V_snapchattersDataFetcher
// Property: cameraBIPAScopeExposer; attributes: T@"SCScopeExposer",W,N,V_cameraBIPAScopeExposer
// Property: cameraBIPAScopeServices; attributes: T@"SCCameraBIPAScopeServices",W,N,V_cameraBIPAScopeServices
// Property: lensDelegate; attributes: T@"<SCCameraViewControllerLensDelegate>",R,W,N
// Property: previewLensesInfoProvider; attributes: T@"<SCLensesPreviewLensesFeaturesInfoProviding>",R,W,N
// Property: cameraLensesInfoProvider; attributes: T@"<SCLensesCameraLensesFeaturesInfoProviding>",R,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: insetPresentationContainerView; attributes: T@"UIView",R,N
// Property: insetPresentationViewfinderView; attributes: T@"UIView",R,N
// Property: insetPresentationViewfinderLayoutGuide; attributes: T@"UILayoutGuide",R,N
// Property: isInsetPresentationCaptureInFlight; attributes: TB,R,N
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCCameraViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x106fedf50

// -[SCCameraViewController defaultSubProjectName]
// Type encoding: @16@0:8
// Implementation: 0x106fee04c

// -[SCCameraViewController jiraMetaInfo]
// Type encoding: @16@0:8
// Implementation: 0x106fee0cc

// -[SCCameraViewController shakeToReportDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106fedf4c

// -[SCCameraViewController setAllCameraUIVisible:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106fedd88

// -[SCCameraViewController setCameraHeaderVisible:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106feddf4

// -[SCCameraViewController setCameraToolbarVisible:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106feded4

// -[SCCameraViewController scanDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106fedd84

// -[SCCameraViewController presentingViewControllerForMusicFeature:]
// Type encoding: @24@0:8@16
// Implementation: 0x106feda48

// -[SCCameraViewController musicFeature:setVolumeButtonHandlingEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106feda4c

// -[SCCameraViewController musicFeatureDidPresentMusicPicker:style:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106feda54

// -[SCCameraViewController musicFeatureDidDismissMusicPicker:style:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106feda60

// -[SCCameraViewController musicFeatureDidPresentMusicEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106feda6c

// -[SCCameraViewController musicFeatureDidDismissMusicEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fedb5c

// -[SCCameraViewController musicFeature:didUpdateSelection:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106fedc4c

// -[SCCameraViewController shouldBeSilentlyPresentedAndPauseOpera]
// Type encoding: B16@0:8
// Implementation: 0x106feda30

// -[SCCameraViewController addPermissionHandlerNoOpButton]
// Type encoding: v16@0:8
// Implementation: 0x106feca8c

// -[SCCameraViewController addUIAutomationOnlyUsedHelpers]
// Type encoding: v16@0:8
// Implementation: 0x106feca88

// -[SCCameraViewController logCameraOpenStart]
// Type encoding: v16@0:8
// Implementation: 0x1008cb8cc

// -[SCCameraViewController logCameraOpenCameraRunning]
// Type encoding: v16@0:8
// Implementation: 0x1061496d8

// -[SCCameraViewController logCameraOpenPermissionBeingRequested]
// Type encoding: v16@0:8
// Implementation: 0x10614970c

// -[SCCameraViewController scheduleLogForCameraOpenFirstFrameReceivedSuccessfully]
// Type encoding: v16@0:8
// Implementation: 0x106149784

// -[SCCameraViewController logLivePreview]
// Type encoding: v16@0:8
// Implementation: 0x106149840

// -[SCCameraViewController logPageViewOnAppear:]
// Type encoding: v24@0:8q16
// Implementation: 0x10614a8a8

// -[SCCameraViewController logPageViewOnExit:]
// Type encoding: v24@0:8q16
// Implementation: 0x10614a8e0

// -[SCCameraViewController logCameraPageActionEventWithStartX:startY:endX:endY:duration:module:firstUsage:action:creativeKitMetadata:]
// Type encoding: v84@0:8d16d24d32d40d48q56B64q68@76
// Implementation: 0x10614ac54

// -[SCCameraViewController logCameraUserActionForCameraTimerWithGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10614afe0

// -[SCCameraViewController logCameraPermissionState:cameraPermissionGrantedUnexpectedly:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10614b17c

// -[SCCameraViewController _cameraPermissionStateForStatus:]
// Type encoding: q24@0:8q16
// Implementation: 0x10614b2a0

// -[SCCameraViewController loggingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1008cb8c8

// -[SCCameraViewController initWithSystemScope:appStartExperimentReader:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fee5d8

// -[SCCameraViewController initWithStartupWorkflow:delegate:systemScope:appInsightsMetadataStorage:simpleSnapchatExperimentConfigProvider:appStartExperimentReader:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106fee680

// -[SCCameraViewController initWithLensDataProvider:systemScope:appInsightsMetadataStorage:appStartExperimentReader:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106fee750

// -[SCCameraViewController initWithLensDataProvider:startupWorkflow:systemScope:appInsightsMetadataStorage:simpleSnapchatExperimentConfigProvider:appStartExperimentReader:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1007ef578

// -[SCCameraViewController finishInitializationWithCameraResources:snapRecoveryServices:composerServices:publicCameraFeatureCatalog:cameraHardwareServices:touchController:cameraRequestHandlerServices:cameraDeviceSettingsResolver:renderTarget:renderAgent:cameraStabilityServices:appTerminationProvider:captureServiceScopeExposer:cameraBIPAScopeExposer:cameraBIPAScopeServices:featureSettingsService:legacyLensLogger:userTrackedLogger:cameraUIScope:nightModeServices:lensCarouselStudySettings:arBarAdapter:locationPermissionsManager:systemConfiguration:photoPermissionServices:customVolumeServices:secretFeatureCheckingServices:lensCarouselManager:permissionRequestService:lensPlusTierService:notificationPermissionRequester:appStartExperimentReader:cameraModeActivationController:snapEditorTweakServices:modularCallLauncher:]
// Type encoding: v296@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288
// Implementation: 0x1007f24dc

// -[SCCameraViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106fee844

// -[SCCameraViewController currentAllocatedCameraCount]
// Type encoding: i16@0:8
// Implementation: 0x106fee888

// -[SCCameraViewController userSession]
// Type encoding: @16@0:8
// Implementation: 0x106fee890

// -[SCCameraViewController cameraOverlay]
// Type encoding: @16@0:8
// Implementation: 0x10080678c

// -[SCCameraViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x1008cc9e4

// -[SCCameraViewController compatibilityZoomingMode]
// Type encoding: B16@0:8
// Implementation: 0x106fee8a8

// -[SCCameraViewController startImageCaptureSessionWithSessionId:lensIntiatedCapture:initiatedRecording:captureTrigger:]
// Type encoding: v40@0:8@16B24B28Q32
// Implementation: 0x106fee92c

// -[SCCameraViewController startVideoCaptureSessionForLensInitiatedCapture:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ff001c

// -[SCCameraViewController cameraLensesInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ff0ea4

// -[SCCameraViewController cancelSnapCaptureSession]
// Type encoding: v16@0:8
// Implementation: 0x106ff0f08

// -[SCCameraViewController finishSnapCaptureSession]
// Type encoding: v16@0:8
// Implementation: 0x106ff0f40

// -[SCCameraViewController captureSessionIDForLog]
// Type encoding: @16@0:8
// Implementation: 0x106ff0f78

// -[SCCameraViewController setSwipingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ff10c8

// -[SCCameraViewController isBlockingUnifiedCameraSwipe]
// Type encoding: B16@0:8
// Implementation: 0x106ff10d8

// -[SCCameraViewController isSwiping]
// Type encoding: B16@0:8
// Implementation: 0x100c7ffa4

// -[SCCameraViewController recording]
// Type encoding: B16@0:8
// Implementation: 0x106ff10e8

// -[SCCameraViewController preparingRecording]
// Type encoding: B16@0:8
// Implementation: 0x106ff1144

// -[SCCameraViewController initiatedRecording]
// Type encoding: B16@0:8
// Implementation: 0x106ff116c

// -[SCCameraViewController startedRecording]
// Type encoding: B16@0:8
// Implementation: 0x106ff11b8

// -[SCCameraViewController takingPicture]
// Type encoding: B16@0:8
// Implementation: 0x106ff11e0

// -[SCCameraViewController hasTakenPicture]
// Type encoding: B16@0:8
// Implementation: 0x106ff1208

// -[SCCameraViewController finishingRecording]
// Type encoding: B16@0:8
// Implementation: 0x106ff1230

// -[SCCameraViewController preparingPreview]
// Type encoding: B16@0:8
// Implementation: 0x106ff1258

// -[SCCameraViewController inCaptureFlow]
// Type encoding: B16@0:8
// Implementation: 0x100c2a6d4

// -[SCCameraViewController inCaptureCountingDown]
// Type encoding: B16@0:8
// Implementation: 0x106ff1280

// -[SCCameraViewController _runtimeViewfinderSizingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1007f8424

// -[SCCameraViewController initialCameraTimerNGSBottomOffset]
// Type encoding: d16@0:8
// Implementation: 0x1007f8240

// -[SCCameraViewController cameraTimerNGSBottomOffset]
// Type encoding: d16@0:8
// Implementation: 0x1008eb73c

// -[SCCameraViewController shouldDisplayHandsFreeTooltip]
// Type encoding: B16@0:8
// Implementation: 0x106ff12a8

// -[SCCameraViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x1008442e8

// -[SCCameraViewController viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10085f708

// -[SCCameraViewController viewSafeAreaInsetsDidChange]
// Type encoding: v16@0:8
// Implementation: 0x100c2ef5c

// -[SCCameraViewController forceReloadViewWillAndDidAppearIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106ff131c

// -[SCCameraViewController notifyUserAfterStartCameraIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106ff1460

// -[SCCameraViewController refreshCameraPermissionUI]
// Type encoding: v16@0:8
// Implementation: 0x106ff1490

// -[SCCameraViewController _resolveCameraPermissionModeWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ff1598

// -[SCCameraViewController cameraPermissionAllowButtonTappedForMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x106ff17cc

// -[SCCameraViewController cameraPermissionDidBecomeCameraReadyShouldStartCamera:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ff1970

// -[SCCameraViewController notifyUserOfMicrophoneUsageIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106ff1a50

// -[SCCameraViewController notifyUserOfContactsUsageIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106ff1ed4

// -[SCCameraViewController notifyUserOfAdsTrackingUsageIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106ff1f68

// -[SCCameraViewController notifyUserOfCameraRollUsageIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106ff1fb0

// -[SCCameraViewController notifyUserOfCameraAndMicrophoneUsageIfNecessary]
// Type encoding: B16@0:8
// Implementation: 0x106ff20b4

// -[SCCameraViewController notifyUserOfDeniedCameraIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106ff23d4

// -[SCCameraViewController _notifyUserOfDeniedCamera]
// Type encoding: v16@0:8
// Implementation: 0x106ff2454

// -[SCCameraViewController notifyUserOfRestrictedCameraIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106ff26a8

// -[SCCameraViewController _notifyUserOfRestrictedCameraIfNecessaryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ff26b0

// -[SCCameraViewController _alertCameraRestrictionOn:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ff284c

// -[SCCameraViewController _alertNoCamera:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ff28c4

// -[SCCameraViewController _alertWithTitle:description:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106ff2968

// -[SCCameraViewController _logNoCamera:authorization:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106ff2bec

// -[SCCameraViewController _hideHeaderTitleRow:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008eba30

// -[SCCameraViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x10085008c

// -[SCCameraViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10087bb74

// -[SCCameraViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008c4f88

// -[SCCameraViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ff2bf0

// -[SCCameraViewController headerProfileButtonCenterX]
// Type encoding: d16@0:8
// Implementation: 0x106ff2df0

// -[SCCameraViewController headerItemYOffset]
// Type encoding: d16@0:8
// Implementation: 0x106ff2dfc

// -[SCCameraViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ff2e08

// -[SCCameraViewController preferredStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x10087c318

// -[SCCameraViewController prefersStatusBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x106ff31cc

// -[SCCameraViewController preferredScreenEdgesDeferringSystemGestures]
// Type encoding: Q16@0:8
// Implementation: 0x106ff3210

// -[SCCameraViewController didReceiveMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x106ff3230

// -[SCCameraViewController viewIsAppearing:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008c4d18

// -[SCCameraViewController viewWillTransitionToSize:withTransitionCoordinator:]
// Type encoding: v40@0:8{CGSize=dd}16@32
// Implementation: 0x106ff32a0

// -[SCCameraViewController _viewportOrientationFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1008c4d78

// -[SCCameraViewController _imageCaptureOrientationFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106ff3370

// -[SCCameraViewController _videoCaptureOrientationFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106ff3394

// -[SCCameraViewController _synchronizeCameraViewportOrientation]
// Type encoding: v16@0:8
// Implementation: 0x106ff33b8

// -[SCCameraViewController _updateCameraHardwareOrientationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1008c4e58

// -[SCCameraViewController _lockInterfaceOrientation:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ff3478

// -[SCCameraViewController supportedInterfaceOrientations]
// Type encoding: Q16@0:8
// Implementation: 0x100c1cae0

// -[SCCameraViewController shouldPopToRootViewController]
// Type encoding: B16@0:8
// Implementation: 0x106ff34e8

// -[SCCameraViewController shouldPopToRootViewControllerLater]
// Type encoding: B16@0:8
// Implementation: 0x106ff356c

// -[SCCameraViewController timeBeforeReturningToCamera]
// Type encoding: d16@0:8
// Implementation: 0x106ff3584

// -[SCCameraViewController backgroundRestorationWindow]
// Type encoding: d16@0:8
// Implementation: 0x106ff35a8

// -[SCCameraViewController shouldPreventOperaBackgroundDismiss]
// Type encoding: B16@0:8
// Implementation: 0x106ff36f0

// -[SCCameraViewController viewControllerPrefersSelfDismiss]
// Type encoding: B16@0:8
// Implementation: 0x106ff36f8

// -[SCCameraViewController viewControllerDismissSelf:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ff3714

// -[SCCameraViewController isInReplyingMode]
// Type encoding: B16@0:8
// Implementation: 0x106ff37b0

// -[SCCameraViewController setReplyWithConfiguration:cameraViewType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106ff37d8

// -[SCCameraViewController _snapSourceFromReplyParameters:]
// Type encoding: q24@0:8@16
// Implementation: 0x106ff3dcc

// -[SCCameraViewController resetReplyConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x106ff3e4c

// -[SCCameraViewController setNoReply]
// Type encoding: v16@0:8
// Implementation: 0x1008d251c

// -[SCCameraViewController setCameraViewType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1008d4aa8

// -[SCCameraViewController viewDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106ff40ec

// -[SCCameraViewController viewWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x106ff4388

// -[SCCameraViewController viewWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x106ff43a0

// -[SCCameraViewController viewDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c78a6c

// -[SCCameraViewController postponedViewDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x106ff44c0

// -[SCCameraViewController handleMediaServicesResetNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ff4500

// -[SCCameraViewController handleMediaServicesLostNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ff4504

// -[SCCameraViewController showRecordedVideoIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106ff4508

// -[SCCameraViewController _logCameraCreationStep:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c79a90

// -[SCCameraViewController lensDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ff4828

// -[SCCameraViewController setNavigationItemsHidden:includingAlwaysShowItems:animated:duration:]
// Type encoding: v36@0:8B16B20B24d28
// Implementation: 0x106ff486c

// -[SCCameraViewController setNavigationItemsHidden:includingAlwaysShowItems:withOffset:animated:duration:]
// Type encoding: v40@0:8B16B20B24B28d32
// Implementation: 0x106ff4878

// -[SCCameraViewController _transitionToRecordingStateWithAnimationDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ff49e4

// -[SCCameraViewController _cancelPendingGesturesForRecordingStart]
// Type encoding: v16@0:8
// Implementation: 0x106ff4b58

// -[SCCameraViewController resetAll]
// Type encoding: v16@0:8
// Implementation: 0x106ff4c40

// -[SCCameraViewController isPressingCameraButtonOrVolumeButton]
// Type encoding: B16@0:8
// Implementation: 0x106ff4d40

// -[SCCameraViewController presentingMemories]
// Type encoding: B16@0:8
// Implementation: 0x106ff4dcc

// -[SCCameraViewController longPressOnCameraTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ff4dd4

// -[SCCameraViewController processRecordingForLongPress:shouldStartRecording:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106ff5484

// -[SCCameraViewController _processStartRecordingWithLongPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ff550c

// -[SCCameraViewController _initiateCapturePipeline]
// Type encoding: v16@0:8
// Implementation: 0x106ff57b8

// -[SCCameraViewController _processLongPressDidEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ff5b24

// -[SCCameraViewController _processLongPressCancelled:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ff5e24

// -[SCCameraViewController _processLongPressDidEndForDirectorMode]
// Type encoding: v16@0:8
// Implementation: 0x106ff6530

// -[SCCameraViewController _presentTimelineLimitReachedAlert]
// Type encoding: v16@0:8
// Implementation: 0x106ff67ec

// -[SCCameraViewController toggleCameraButtonsVisibility:animated:]
// Type encoding: B24@0:8B16B20
// Implementation: 0x1008c6320

// -[SCCameraViewController longPress:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ff6954

// -[SCCameraViewController _shouldResetLongPressGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ff6e6c

// -[SCCameraViewController batchCaptureVideoEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106ff6ed4

// -[SCCameraViewController startCameraWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ff6f80

// -[SCCameraViewController startDeviceMotionUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106ff6fdc

// -[SCCameraViewController featureDoubleTapToToggleCameraDidTriger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ff7014

// -[SCCameraViewController featureDoubleTapToToggleCameraGestureRecognizerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10084c828

// -[SCCameraViewController setRecordingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1008cb5f8

// -[SCCameraViewController prepareForRecordingWithMethod:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ff7098

// -[SCCameraViewController prepareForRecordingWithMethod:hasMinimumRecordingDuration:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x106ff70a0

// -[SCCameraViewController _defaultRecordingDuration]
// Type encoding: d16@0:8
// Implementation: 0x106ff814c

// -[SCCameraViewController _recordingSpeedMultiplier]
// Type encoding: d16@0:8
// Implementation: 0x106ff83b8

// -[SCCameraViewController componentRecordingDelayValue]
// Type encoding: d16@0:8
// Implementation: 0x106ff84a0

// -[SCCameraViewController captureStillImage]
// Type encoding: v16@0:8
// Implementation: 0x106ff8580

// -[SCCameraViewController tryCapturingStillImage]
// Type encoding: v16@0:8
// Implementation: 0x106ff8590

// -[SCCameraViewController featureContainerView:setAllInterfaceElementsHidden:statusBarHidden:animated:duration:]
// Type encoding: v44@0:8@16B24B28B32d36
// Implementation: 0x106ff88ec

// -[SCCameraViewController _updateARBarVisibility:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106ff8bd0

// -[SCCameraViewController onSetHideableViewContainerHidden:animated:duration:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x1008c6728

// -[SCCameraViewController setVolumeButtonHandlingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ff8dfc

// -[SCCameraViewController volumeButtonCaptureShouldHandleVolumeButtonEvents:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ff8eac

// -[SCCameraViewController stopHandlingVolumeButtonEvents]
// Type encoding: v16@0:8
// Implementation: 0x10087e06c

// -[SCCameraViewController abortPressingVolumeButtonAndEndRecording]
// Type encoding: v16@0:8
// Implementation: 0x106ff8f28

// -[SCCameraViewController volumeButtonCaptureHandler:]
// Type encoding: @24@0:8@16
// Implementation: 0x10087e8f8

// -[SCCameraViewController volumeButtonCaptureShouldAllowBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ff914c

// -[SCCameraViewController volumeButtonCaptureShouldAllowEnd:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ff94c4

// -[SCCameraViewController volumeButtonCaptureBegan]
// Type encoding: v16@0:8
// Implementation: 0x106ff96d4

// -[SCCameraViewController volumeButtonCaptureEnded]
// Type encoding: v16@0:8
// Implementation: 0x106ff9a28

// -[SCCameraViewController hideCameraTimer]
// Type encoding: v16@0:8
// Implementation: 0x106ff9f08

// -[SCCameraViewController showCameraTimer]
// Type encoding: v16@0:8
// Implementation: 0x106ff9f4c

// -[SCCameraViewController setCameraViewHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ff9f90

// -[SCCameraViewController replyCameraBackButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x106ffa004

// -[SCCameraViewController allowSwipeToDismissInvokedByGesture:]
// Type encoding: B20@0:8B16
// Implementation: 0x106ffa0cc

// -[SCCameraViewController _exitModularCamera]
// Type encoding: v16@0:8
// Implementation: 0x106ffa244

// -[SCCameraViewController shouldRecognizeButtonActions]
// Type encoding: B16@0:8
// Implementation: 0x106ffa38c

// -[SCCameraViewController interactingWithCamera]
// Type encoding: B16@0:8
// Implementation: 0x106ffa3c4

// -[SCCameraViewController appStartupDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x106ffa408

// -[SCCameraViewController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ffa41c

// -[SCCameraViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106ffab8c

// -[SCCameraViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106ffb0f8

// -[SCCameraViewController gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106ffb578

// -[SCCameraViewController _blockCameraSwipeDismissalIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ffba58

// -[SCCameraViewController resetIsBlockingUnifiedCameraSwipe]
// Type encoding: v16@0:8
// Implementation: 0x106ffbcf4

// -[SCCameraViewController _configureSnapBackDismissWindowIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1008caae8

// -[SCCameraViewController setSnapBackQuickTapDismissTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ffbd04

// -[SCCameraViewController insetPresentationContainerView]
// Type encoding: @16@0:8
// Implementation: 0x106ffbd3c

// -[SCCameraViewController insetPresentationViewfinderView]
// Type encoding: @16@0:8
// Implementation: 0x106ffbd40

// -[SCCameraViewController setSnapBackInsetPresentationLayoutCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ffbd50

// -[SCCameraViewController updateSnapBackInsetPresentationLayoutIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10085fc20

// -[SCCameraViewController insetPresentationViewfinderLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x106ffbd88

// -[SCCameraViewController isInsetPresentationCaptureInFlight]
// Type encoding: B16@0:8
// Implementation: 0x106ffbdcc

// -[SCCameraViewController isPresentingSnapBackInsetStyle]
// Type encoding: B16@0:8
// Implementation: 0x106ffbe10

// -[SCCameraViewController setIsSnapBackReplyCamera:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ffbe20

// -[SCCameraViewController configureQuickTapDismissWindowWithTimeout:fasterDismissEnabled:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x106ffbe30

// -[SCCameraViewController prepareForInsetPresentation]
// Type encoding: v16@0:8
// Implementation: 0x106ffbe5c

// -[SCCameraViewController transitionFromInsetPresentation]
// Type encoding: v16@0:8
// Implementation: 0x106ffbf84

// -[SCCameraViewController performInsetPresentationCapture]
// Type encoding: v16@0:8
// Implementation: 0x106ffc08c

// -[SCCameraViewController beginInsetPresentationVideoCaptureWithRecordingDidBegin:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ffc104

// -[SCCameraViewController endInsetPresentationVideoCapture]
// Type encoding: v16@0:8
// Implementation: 0x106ffc2b4

// -[SCCameraViewController requestInsetPresentationExit]
// Type encoding: v16@0:8
// Implementation: 0x106ffc350

// -[SCCameraViewController _clearSnapBackDismissWindow]
// Type encoding: v16@0:8
// Implementation: 0x106ffc3dc

// -[SCCameraViewController _isSnapBackDismissEligibleInitialTapAtPoint:shouldReceiveTouch:]
// Type encoding: B36@0:8{CGPoint=dd}16B32
// Implementation: 0x106ffc4dc

// -[SCCameraViewController _recordSnapBackInitialTouchIfNeeded:recognizer:point:shouldReceiveTouch:]
// Type encoding: v52@0:8@16@24{CGPoint=dd}32B48
// Implementation: 0x106ffc5fc

// -[SCCameraViewController handlePinchFrom:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ffc764

// -[SCCameraViewController handlePanFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ffc818

// -[SCCameraViewController handleTapFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ffcab0

// -[SCCameraViewController setSwipeNavigationEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ffcfd8

// -[SCCameraViewController cameraNavigationItem]
// Type encoding: @16@0:8
// Implementation: 0x106ffcfdc

// -[SCCameraViewController stopDeviceMotionUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106ffcfe0

// -[SCCameraViewController setCameraCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007ef888

// -[SCCameraViewController frameMonitor]
// Type encoding: @16@0:8
// Implementation: 0x1008cbc90

// -[SCCameraViewController permissionStateMonitor]
// Type encoding: @16@0:8
// Implementation: 0x106ffd048

// -[SCCameraViewController startCamera:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106ffd0ac

// -[SCCameraViewController stopCamera:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ffd220

// -[SCCameraViewController stopCameraSofty:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ffd414

// -[SCCameraViewController isCameraRunning]
// Type encoding: B16@0:8
// Implementation: 0x106ffd620

// -[SCCameraViewController stopCameraSoftly]
// Type encoding: v16@0:8
// Implementation: 0x106ffd624

// -[SCCameraViewController stopCameraWithSoftDelay:]
// Type encoding: v20@0:8f16
// Implementation: 0x106ffd654

// -[SCCameraViewController _stopCameraSoftlyAndPreemptivelyFlushPreviewBuffer:softStopDelay:]
// Type encoding: v24@0:8B16f20
// Implementation: 0x106ffd690

// -[SCCameraViewController stopCameraImmediately]
// Type encoding: v16@0:8
// Implementation: 0x106ffd7e8

// -[SCCameraViewController prepareCameraViewForDismissal]
// Type encoding: v16@0:8
// Implementation: 0x106ffd8a8

// -[SCCameraViewController isDismissingAtSending]
// Type encoding: B16@0:8
// Implementation: 0x106ffd8b8

// -[SCCameraViewController didCancelFromPreview]
// Type encoding: v16@0:8
// Implementation: 0x106ffd8c8

// -[SCCameraViewController markCameraHelpTooltipAsCompletedIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106ffdd28

// -[SCCameraViewController handleDidCancelFromPreviewCompletion]
// Type encoding: v16@0:8
// Implementation: 0x106ffdd2c

// -[SCCameraViewController didSendSnaps]
// Type encoding: v16@0:8
// Implementation: 0x106ffde68

// -[SCCameraViewController didPostStories]
// Type encoding: v16@0:8
// Implementation: 0x106ffdee0

// -[SCCameraViewController didSaveSnap]
// Type encoding: v16@0:8
// Implementation: 0x106ffdfb4

// -[SCCameraViewController resetAfterSendingSnap]
// Type encoding: v16@0:8
// Implementation: 0x106ffe020

// -[SCCameraViewController startObservingCameraHardwareRequestHandlerUpdates]
// Type encoding: v16@0:8
// Implementation: 0x10087ca9c

// -[SCCameraViewController startObservingCameraPermission]
// Type encoding: v16@0:8
// Implementation: 0x106ffe454

// -[SCCameraViewController setIsCameraHardwareRequestHandlerActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c80ccc

// -[SCCameraViewController startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106ffe638

// -[SCCameraViewController stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106ffee20

// -[SCCameraViewController didChangeRingFlashState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ffee78

// -[SCCameraViewController didChangeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c3d63c

// -[SCCameraViewController willCapturePhoto:sampleMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ffeef0

// -[SCCameraViewController didBeginRecording]
// Type encoding: v16@0:8
// Implementation: 0x106ffeef4

// -[SCCameraViewController _didCancelRecording]
// Type encoding: v16@0:8
// Implementation: 0x106fff0b8

// -[SCCameraViewController _presentPreviewForImage]
// Type encoding: v16@0:8
// Implementation: 0x106fff16c

// -[SCCameraViewController handleLensActivation]
// Type encoding: v16@0:8
// Implementation: 0x106fff39c

// -[SCCameraViewController activateLensBlockAfterUnlockWithActivationLens:lensLaunchData:activationSource:]
// Type encoding: @?40@0:8@16@24q32
// Implementation: 0x106fff3d4

// -[SCCameraViewController tryToActivateLensAfterUnlockWithActivationLens:lensLaunchData:activationSource:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106fff850

// -[SCCameraViewController onMusicSelectionStartedInDirectorMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fff884

// -[SCCameraViewController navigationController:animationControllerForOperation:fromViewController:toViewController:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x106fffba0

// -[SCCameraViewController featureZoomingIsInitiatedRecording:]
// Type encoding: B24@0:8@16
// Implementation: 0x106fffbcc

// -[SCCameraViewController cameraFlipsWhileRecording]
// Type encoding: q16@0:8
// Implementation: 0x106fffbd0

// -[SCCameraViewController _ensureHapticsAllowedDuringRecording]
// Type encoding: v16@0:8
// Implementation: 0x106fffc2c

// -[SCCameraViewController _shouldDisablePreviewAfterCapture]
// Type encoding: B16@0:8
// Implementation: 0x106fffc88

// -[SCCameraViewController _logCameraFlipDuringCapture]
// Type encoding: v16@0:8
// Implementation: 0x106fffcc8

// -[SCCameraViewController _recordCurrentZoomStateForReset]
// Type encoding: v16@0:8
// Implementation: 0x106fffe80

// -[SCCameraViewController activeCameraModes]
// Type encoding: @16@0:8
// Implementation: 0x106ffff4c

// -[SCCameraViewController _detailedCameraModesFromActiveCameraModes:]
// Type encoding: @24@0:8@16
// Implementation: 0x107000564

// -[SCCameraViewController _activeFlashMode]
// Type encoding: q16@0:8
// Implementation: 0x107000d5c

// -[SCCameraViewController _audioSession]
// Type encoding: @16@0:8
// Implementation: 0x107000e6c

// -[SCCameraViewController _setupCameraModeActivationInfoObserver]
// Type encoding: v16@0:8
// Implementation: 0x100806114

// -[SCCameraViewController _setupContinuousCaptureSegmentEventObservable]
// Type encoding: v16@0:8
// Implementation: 0x100806410

// -[SCCameraViewController _handleContinuousCaptureSegmentEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070010ec

// -[SCCameraViewController _continuousCaptureDidRequestPreview]
// Type encoding: v16@0:8
// Implementation: 0x107001604

// -[SCCameraViewController idleTimerManager]
// Type encoding: @16@0:8
// Implementation: 0x107001768

// -[SCCameraViewController _setScreenAutoLockDisabledIfNeeded:]
// Type encoding: v20@0:8B16
// Implementation: 0x1070017c8

// -[SCCameraViewController shouldDisableShakeToReportOnCurrentPage]
// Type encoding: B16@0:8
// Implementation: 0x107001800

// -[SCCameraViewController willStartCensoringScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x107001804

// -[SCCameraViewController willEndCensoringScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x107001818

// -[SCCameraViewController tryToActivateLensFromPushNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700182c

// -[SCCameraViewController isLensActive]
// Type encoding: B16@0:8
// Implementation: 0x107001a64

// -[SCCameraViewController turnLensesOff]
// Type encoding: v16@0:8
// Implementation: 0x107001aac

// -[SCCameraViewController turnLensesOffOnDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107001ab4

// -[SCCameraViewController turnCameraModesOff]
// Type encoding: v16@0:8
// Implementation: 0x107001b00

// -[SCCameraViewController clearAllEffects]
// Type encoding: v16@0:8
// Implementation: 0x107001c5c

// -[SCCameraViewController presentPreviewWithGeneratedVideoURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107001c8c

// -[SCCameraViewController _presentPreviewWithGeneratedVideoFile:]
// Type encoding: B24@0:8@16
// Implementation: 0x107001d2c

// -[SCCameraViewController onDetectCameraViewVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1070020c8

// -[SCCameraViewController didTapMicrophoneNotification]
// Type encoding: v16@0:8
// Implementation: 0x1070020cc

// -[SCCameraViewController featureToggleCamera:willToggleToDevicePosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107002154

// -[SCCameraViewController featureToggleCamera:didToggleToDevicePosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107002214

// -[SCCameraViewController featureToggleCameraIsRecording:]
// Type encoding: B24@0:8@16
// Implementation: 0x1070022e4

// -[SCCameraViewController featureToggleCameraIsTakingPicture:]
// Type encoding: B24@0:8@16
// Implementation: 0x1070022e8

// -[SCCameraViewController exposeCaptureServiceScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070022ec

// -[SCCameraViewController removeCaptureServiceScope]
// Type encoding: v16@0:8
// Implementation: 0x107002344

// -[SCCameraViewController captureComponent:willCompleteWithStillImageData:discardRelatedData:captureConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107002380

// -[SCCameraViewController captureComponent:didCompleteWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107002568

// -[SCCameraViewController captureComponent:didCompleteRecoveryWithImage:recoveryData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107002610

// -[SCCameraViewController imageCaptureDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x10700282c

// -[SCCameraViewController featureToggleCameraButtonDidTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107002950

// -[SCCameraViewController videoCaptureWillStartRecordingWithCaptureConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107002998

// -[SCCameraViewController videoCaptureDidReachUnlimitedMovementThreshold]
// Type encoding: v16@0:8
// Implementation: 0x10700305c

// -[SCCameraViewController captureComponent:willFinishRecordingWithVideoSize:placeholderImage:videoFuture:]
// Type encoding: v56@0:8@16{CGSize=dd}24@40@48
// Implementation: 0x107003068

// -[SCCameraViewController videoCaptureDidFinishRecordingWithRecordedVideo:captureConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107003204

// -[SCCameraViewController videoCaptureDidAbortRecording]
// Type encoding: v16@0:8
// Implementation: 0x1070037c4

// -[SCCameraViewController videoCaptureDidFailRecording]
// Type encoding: v16@0:8
// Implementation: 0x1070039bc

// -[SCCameraViewController videoCaptureDidCancelRecording]
// Type encoding: v16@0:8
// Implementation: 0x1070039f8

// -[SCCameraViewController videoCaptureRecordingTooShort]
// Type encoding: v16@0:8
// Implementation: 0x107003a2c

// -[SCCameraViewController videoCaptureDidReachEnd]
// Type encoding: v16@0:8
// Implementation: 0x107003b34

// -[SCCameraViewController videoCaptureDidStopRecording]
// Type encoding: v16@0:8
// Implementation: 0x107003c78

// -[SCCameraViewController videoCaptureDidCompleteRecoveryWithRecoveryData:videoFuture:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107003e30

// -[SCCameraViewController videoCaptureShouldPrepareRecording]
// Type encoding: B16@0:8
// Implementation: 0x107003fb8

// -[SCCameraViewController videoCaptureShouldStartRecording]
// Type encoding: B16@0:8
// Implementation: 0x107003fbc

// -[SCCameraViewController videoCaptureShouldEndRecording]
// Type encoding: B16@0:8
// Implementation: 0x107003fc0

// -[SCCameraViewController videoCaptureHasStartedRecording]
// Type encoding: B16@0:8
// Implementation: 0x107004004

// -[SCCameraViewController didRemoveInvalidRecordedVideo]
// Type encoding: v16@0:8
// Implementation: 0x107004008

// -[SCCameraViewController didUpdateCarouselVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c6fde4

// -[SCCameraViewController lensDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1007f9ca0

// -[SCCameraViewController previewLensesInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x1008d53e4

// -[SCCameraViewController featureMultiSnap:willDisplayWithViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10700400c

// -[SCCameraViewController featureMultiSnap:willResetWithViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107004144

// -[SCCameraViewController featureMultiSnap:didRecoverWithMultiSnapConfiguration:startRecordingTimestamp:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10700414c

// -[SCCameraViewController featureCaptionDidTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107004234

// -[SCCameraViewController featureTimerModeWillStartCountingDown:captureTrigger:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107004270

// -[SCCameraViewController featureTimerModeDidFinishCountingDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x107004754

// -[SCCameraViewController featureTimerModeDidAbortCountingDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x107004a90

// -[SCCameraViewController parentViewControllerForCameraFeature]
// Type encoding: @16@0:8
// Implementation: 0x107004cf8

// -[SCCameraViewController featureTimerModeVideoTimerMaxDuration:]
// Type encoding: d24@0:8@16
// Implementation: 0x107004d40

// -[SCCameraViewController featureTimerModeVideoTimerStartOffset:]
// Type encoding: d24@0:8@16
// Implementation: 0x107004e80

// -[SCCameraViewController featureTimerModeWillPresentVideoTimerDurationTray:]
// Type encoding: v24@0:8@16
// Implementation: 0x107004f9c

// -[SCCameraViewController featureTimerModeDidDismissVideoTimerDurationTray:]
// Type encoding: v24@0:8@16
// Implementation: 0x107005030

// -[SCCameraViewController shouldStartRecordingRingAnimationEarly]
// Type encoding: B16@0:8
// Implementation: 0x1070050c4

// -[SCCameraViewController _activeLens]
// Type encoding: @16@0:8
// Implementation: 0x1070050dc

// -[SCCameraViewController _isBatchCaptureActive]
// Type encoding: B16@0:8
// Implementation: 0x107005120

// -[SCCameraViewController _hasBatchCaptureSegments]
// Type encoding: B16@0:8
// Implementation: 0x107005194

// -[SCCameraViewController _shouldShowBatchCaptureAlertWhenExit]
// Type encoding: B16@0:8
// Implementation: 0x107005244

// -[SCCameraViewController _ringFlashWidgetShouldDisablePageNavigation]
// Type encoding: B16@0:8
// Implementation: 0x1070052a4

// -[SCCameraViewController _isSpeedModeActive]
// Type encoding: B16@0:8
// Implementation: 0x107005318

// -[SCCameraViewController _isDirectorMode]
// Type encoding: B16@0:8
// Implementation: 0x10700538c

// -[SCCameraViewController _isHandsFreeCameraModeActive]
// Type encoding: B16@0:8
// Implementation: 0x1070053cc

// -[SCCameraViewController _isContinuousCaptureActive]
// Type encoding: B16@0:8
// Implementation: 0x107005510

// -[SCCameraViewController _shouldUseRegularTimerPipelineForContinuousCaptureResume]
// Type encoding: B16@0:8
// Implementation: 0x107005654

// -[SCCameraViewController _isContinuousCaptureTapToggleEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107005764

// -[SCCameraViewController isCoolRecordingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1070057dc

// -[SCCameraViewController _coolRecordingRingStyle]
// Type encoding: q16@0:8
// Implementation: 0x1070057f4

// -[SCCameraViewController _isMusicFavoritesButtonActive]
// Type encoding: B16@0:8
// Implementation: 0x1070058d4

// -[SCCameraViewController _showBatchCaptureDiscardAlertWhenExit]
// Type encoding: v16@0:8
// Implementation: 0x107005948

// -[SCCameraViewController _showTimelineDiscardAlertWhenExit]
// Type encoding: v16@0:8
// Implementation: 0x107005dd0

// -[SCCameraViewController _showTimelineDraftAddSnapAlert]
// Type encoding: v16@0:8
// Implementation: 0x107006130

// -[SCCameraViewController _captureBitrateLadderConfig]
// Type encoding: @16@0:8
// Implementation: 0x107006624

// -[SCCameraViewController presentViewController:animated:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1070066fc

// -[SCCameraViewController isMainCameraBeingOverlaid]
// Type encoding: B16@0:8
// Implementation: 0x107006784

// -[SCCameraViewController featureDirectorMode:didCaptureVideo:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10700678c

// -[SCCameraViewController featureDirectorModeDidAbortRecording:]
// Type encoding: v24@0:8@16
// Implementation: 0x107006d3c

// -[SCCameraViewController featureDirectorModeDidRecoverFromPreviousSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x107006d40

// -[SCCameraViewController featureDirectorModeDidRequestPresentPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x107006e0c

// -[SCCameraViewController featureDirectorModeExitMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x107006f50

// -[SCCameraViewController featureDirectorModeDidTapMusicButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x107006f54

// -[SCCameraViewController featureDirectorModeWillPresentMemoriesPicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107006fc0

// -[SCCameraViewController featureDirectorModeDidDismissMemoriesPicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107007078

// -[SCCameraViewController featureDirectorModeWillPresentDraftsGrid:]
// Type encoding: v24@0:8@16
// Implementation: 0x107007130

// -[SCCameraViewController featureDirectorModeDidDismissDraftsGrid:]
// Type encoding: v24@0:8@16
// Implementation: 0x107007134

// -[SCCameraViewController previewWorkflowDelegateForDirectorMode:]
// Type encoding: @24@0:8@16
// Implementation: 0x107007138

// -[SCCameraViewController cameraViewInitialFrameForDirectorModePresenting:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x10700713c

// -[SCCameraViewController featureDirectorMode:didUpdateTotalContentDuration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107007550

// -[SCCameraViewController _resetViewForContinuousCapture]
// Type encoding: v16@0:8
// Implementation: 0x1070075b8

// -[SCCameraViewController featureContextShortcut:didBecomeActiveWithId:snapSource:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10700765c

// -[SCCameraViewController featureBatchCapture:didBecomeActive:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107007714

// -[SCCameraViewController featureBatchCapture:didCaptureImage:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10700776c

// -[SCCameraViewController featureBatchCapture:didCaptureVideo:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1070077ec

// -[SCCameraViewController featureBatchCaptureDidPressReviewAndEdit:]
// Type encoding: v24@0:8@16
// Implementation: 0x107007850

// -[SCCameraViewController featureBatchCapture:previewButtonDidBecomeVisible:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107007990

// -[SCCameraViewController featureBatchCaptureUnsavedSegmentCount:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107007a8c

// -[SCCameraViewController _setupAfterCaptureInBatchMode:mediaType:withError:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x107007acc

// -[SCCameraViewController featureMemoriesWillScrollToGallery:withExitEvent:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107008064

// -[SCCameraViewController featureMemoriesWillScrollToCamera:withExitEvent:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107008068

// -[SCCameraViewController featureMemoriesDidScrollToGallery:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700806c

// -[SCCameraViewController featureMemoriesDidScrollToCamera:]
// Type encoding: v24@0:8@16
// Implementation: 0x107008070

// -[SCCameraViewController _isMainCamera]
// Type encoding: B16@0:8
// Implementation: 0x107008074

// -[SCCameraViewController _isFrontCamera]
// Type encoding: B16@0:8
// Implementation: 0x1070080b4

// -[SCCameraViewController _stopCameraForModalPresentation]
// Type encoding: v16@0:8
// Implementation: 0x107008114

// -[SCCameraViewController _startCameraForModalDismissal]
// Type encoding: v16@0:8
// Implementation: 0x10700817c

// -[SCCameraViewController featureMemoriesPresentMemoriesAddSnapsPicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107008290

// -[SCCameraViewController featureMemoriesPreloadCameraScreenForPresentation]
// Type encoding: v16@0:8
// Implementation: 0x107008294

// -[SCCameraViewController didScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x10700831c

// -[SCCameraViewController previewPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1070083e8

// -[SCCameraViewController isPresentingPreview]
// Type encoding: B16@0:8
// Implementation: 0x10700846c

// -[SCCameraViewController defaultCustomStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x1070084e4

// -[SCCameraViewController customStatusBarStyleForViewController]
// Type encoding: q16@0:8
// Implementation: 0x1070084ec

// -[SCCameraViewController _mediaServicesWereReset]
// Type encoding: v16@0:8
// Implementation: 0x107008524

// -[SCCameraViewController _mediaServicesWereLost]
// Type encoding: v16@0:8
// Implementation: 0x1070087f8

// -[SCCameraViewController _checkRestrictedCamera:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107008a24

// -[SCCameraViewController shouldEnableAutoLayoutOnCameraView]
// Type encoding: B16@0:8
// Implementation: 0x100845ab0

// -[SCCameraViewController shouldApplyBlurEffectOnStatusBar]
// Type encoding: B16@0:8
// Implementation: 0x1008493f0

// -[SCCameraViewController shouldAddBottomCardCorners]
// Type encoding: B16@0:8
// Implementation: 0x107008cc4

// -[SCCameraViewController shouldAddTopCardCorners]
// Type encoding: B16@0:8
// Implementation: 0x107008ccc

// -[SCCameraViewController cornerRadius]
// Type encoding: d16@0:8
// Implementation: 0x100852278

// -[SCCameraViewController _shouldCaptureFromVideoWithDevicePosition:lightingCondition:nightModeEnabled:]
// Type encoding: B36@0:8q16q24B32
// Implementation: 0x107008ce4

// -[SCCameraViewController _shouldPreventSnapIfGalleryPresent]
// Type encoding: B16@0:8
// Implementation: 0x107008ee4

// -[SCCameraViewController _shouldApplySuperResolution]
// Type encoding: B16@0:8
// Implementation: 0x107008eec

// -[SCCameraViewController _isReplyCamera]
// Type encoding: B16@0:8
// Implementation: 0x107008fd0

// -[SCCameraViewController _isHDModeActive]
// Type encoding: B16@0:8
// Implementation: 0x107009014

// -[SCCameraViewController _shouldKeepVideoSizeAsOutputSize]
// Type encoding: B16@0:8
// Implementation: 0x107009088

// -[SCCameraViewController _isCaptureButtonBlockedForLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x107009834

// -[SCCameraViewController _handleBlockedCaptureButtonTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070098c0

// -[SCCameraViewController _isTurnBasedReplyForLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x107009964

// -[SCCameraViewController modularCallUIWillAppearOnCamera]
// Type encoding: v16@0:8
// Implementation: 0x107009a5c

// -[SCCameraViewController presentPreviewAfterModularCallDismissalForRecordedVideo:captureConfiguration:managedCapturerState:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107009ae4

// -[SCCameraViewController _subscribeOnLensCarouselState]
// Type encoding: v16@0:8
// Implementation: 0x100806040

// -[SCCameraViewController _subscribeOnLensCarouselUpdates:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100c6fadc

// -[SCCameraViewController _handleBlockedCaptureOnVolumeButton]
// Type encoding: v16@0:8
// Implementation: 0x107009c94

// -[SCCameraViewController cameraCircumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x1007f3dd8

// -[SCCameraViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x107009cf0

// -[SCCameraViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007ef7e0

// -[SCCameraViewController previewWorkflowDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107009d10

// -[SCCameraViewController setPreviewWorkflowDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100806b90

// -[SCCameraViewController startupWorkflow]
// Type encoding: @16@0:8
// Implementation: 0x10087dea4

// -[SCCameraViewController setStartupWorkflow:]
// Type encoding: v24@0:8@16
// Implementation: 0x107009d30

// -[SCCameraViewController cameraFeatureCatalog]
// Type encoding: @16@0:8
// Implementation: 0x100806510

// -[SCCameraViewController snapRecoveryServices]
// Type encoding: @16@0:8
// Implementation: 0x100c7dd0c

// -[SCCameraViewController snapDocManagerServices]
// Type encoding: @16@0:8
// Implementation: 0x107009d70

// -[SCCameraViewController setSnapDocManagerServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x100806c1c

// -[SCCameraViewController cameraSnapModelServices]
// Type encoding: @16@0:8
// Implementation: 0x107009d90

// -[SCCameraViewController setCameraSnapModelServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007ef7f4

// -[SCCameraViewController composerServices]
// Type encoding: @16@0:8
// Implementation: 0x107009da0

// -[SCCameraViewController cameraResources]
// Type encoding: @16@0:8
// Implementation: 0x1007f2d00

// -[SCCameraViewController cameraUIScope]
// Type encoding: @16@0:8
// Implementation: 0x1007f3b98

// -[SCCameraViewController cameraHardwareServices]
// Type encoding: @16@0:8
// Implementation: 0x100805b28

// -[SCCameraViewController cameraRequestHandlerServices]
// Type encoding: @16@0:8
// Implementation: 0x107009db0

// -[SCCameraViewController cameraDeviceSettingsResolver]
// Type encoding: @16@0:8
// Implementation: 0x1008ba078

// -[SCCameraViewController touchController]
// Type encoding: @16@0:8
// Implementation: 0x107009dc0

// -[SCCameraViewController renderAgent]
// Type encoding: @16@0:8
// Implementation: 0x1008bba84

// -[SCCameraViewController renderTarget]
// Type encoding: @16@0:8
// Implementation: 0x100851f2c

// -[SCCameraViewController cameraStabilityServices]
// Type encoding: @16@0:8
// Implementation: 0x107009de0

// -[SCCameraViewController navigationServices]
// Type encoding: @16@0:8
// Implementation: 0x107009df0

// -[SCCameraViewController setNavigationServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x100806b70

// -[SCCameraViewController coreCameraLogger]
// Type encoding: @16@0:8
// Implementation: 0x107009e10

// -[SCCameraViewController setCoreCameraLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007ef834

// -[SCCameraViewController cameraOpenLogger]
// Type encoding: @16@0:8
// Implementation: 0x1008cbaf0

// -[SCCameraViewController setCameraOpenLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x100806bf4

// -[SCCameraViewController cameraUserBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x107009e30

// -[SCCameraViewController setCameraUserBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x100806c08

// -[SCCameraViewController nightModeServices]
// Type encoding: @16@0:8
// Implementation: 0x107009e50

// -[SCCameraViewController setNightModeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x107009e70

// -[SCCameraViewController cameraGrapheneLogger]
// Type encoding: @16@0:8
// Implementation: 0x107009e84

// -[SCCameraViewController setCameraGrapheneLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x100806c60

// -[SCCameraViewController permissionStateLogger]
// Type encoding: @16@0:8
// Implementation: 0x107009e94

// -[SCCameraViewController setPermissionStateLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x100806c38

// -[SCCameraViewController customStatusBarStyleContextController]
// Type encoding: @16@0:8
// Implementation: 0x1008d3598

// -[SCCameraViewController setCustomStatusBarStyleContextController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007f14f8

// -[SCCameraViewController soundEffects]
// Type encoding: @16@0:8
// Implementation: 0x107009eb4

// -[SCCameraViewController setSoundEffects:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007f1540

// -[SCCameraViewController currentPageTracker]
// Type encoding: @16@0:8
// Implementation: 0x100c6fdf8

// -[SCCameraViewController setCurrentPageTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007ef848

// -[SCCameraViewController appTerminationProvider]
// Type encoding: @16@0:8
// Implementation: 0x1007f3b68

// -[SCCameraViewController screenshotLogger]
// Type encoding: @16@0:8
// Implementation: 0x107009ed4

// -[SCCameraViewController setScreenshotLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x100806bac

// -[SCCameraViewController launchDataStore]
// Type encoding: @16@0:8
// Implementation: 0x107009ee4

// -[SCCameraViewController setLaunchDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x100806c4c

// -[SCCameraViewController legacyLensLogger]
// Type encoding: @16@0:8
// Implementation: 0x107009f04

// -[SCCameraViewController setLegacyLensLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107009f14

// -[SCCameraViewController userTrackedLogger]
// Type encoding: @16@0:8
// Implementation: 0x1007f3c8c

// -[SCCameraViewController setUserTrackedLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107009f54

// -[SCCameraViewController audioSession]
// Type encoding: @16@0:8
// Implementation: 0x1008496c4

// -[SCCameraViewController setAudioSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007f1554

// -[SCCameraViewController timelineDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x107009f94

// -[SCCameraViewController setTimelineDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107009fb4

// -[SCCameraViewController storiesLegacySnapInfoCollector]
// Type encoding: @16@0:8
// Implementation: 0x100805ae8

// -[SCCameraViewController setStoriesLegacySnapInfoCollector:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007f1698

// -[SCCameraViewController shortcutContextAction]
// Type encoding: @16@0:8
// Implementation: 0x1008c7644

// -[SCCameraViewController setShortcutContextAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x107009fc8

// -[SCCameraViewController applicationLifecycleEvents]
// Type encoding: @16@0:8
// Implementation: 0x1008541a0

// -[SCCameraViewController setApplicationLifecycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a008

// -[SCCameraViewController lensCarouselStudySettings]
// Type encoding: @16@0:8
// Implementation: 0x10700a048

// -[SCCameraViewController setLensCarouselStudySettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a068

// -[SCCameraViewController arBarAdapter]
// Type encoding: @16@0:8
// Implementation: 0x10700a07c

// -[SCCameraViewController setArBarAdapter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a09c

// -[SCCameraViewController locationPermissionsManager]
// Type encoding: @16@0:8
// Implementation: 0x10700a0b0

// -[SCCameraViewController setLocationPermissionsManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a0d0

// -[SCCameraViewController systemConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10700a0e4

// -[SCCameraViewController setSystemConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a104

// -[SCCameraViewController customVolumeServices]
// Type encoding: @16@0:8
// Implementation: 0x10700a118

// -[SCCameraViewController setCustomVolumeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a138

// -[SCCameraViewController secretFeatureCheckingServices]
// Type encoding: @16@0:8
// Implementation: 0x10700a14c

// -[SCCameraViewController setSecretFeatureCheckingServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a16c

// -[SCCameraViewController simpleSnapchatExperimentConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x10700a180

// -[SCCameraViewController setSimpleSnapchatExperimentConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a1a0

// -[SCCameraViewController permissionRequestService]
// Type encoding: @16@0:8
// Implementation: 0x10700a1b4

// -[SCCameraViewController setPermissionRequestService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a1d4

// -[SCCameraViewController lensPlusTierService]
// Type encoding: @16@0:8
// Implementation: 0x10700a1e8

// -[SCCameraViewController setLensPlusTierService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a1f8

// -[SCCameraViewController snapEditorTweakServices]
// Type encoding: @16@0:8
// Implementation: 0x1007f3dc8

// -[SCCameraViewController setSnapEditorTweakServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a238

// -[SCCameraViewController cameraModeActivationController]
// Type encoding: @16@0:8
// Implementation: 0x10700a278

// -[SCCameraViewController setCameraModeActivationController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a298

// -[SCCameraViewController cameraLensesViewControllerManager]
// Type encoding: @16@0:8
// Implementation: 0x1007f9d1c

// -[SCCameraViewController setCameraLensesViewControllerManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007f14b8

// -[SCCameraViewController setPreviewPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a2ac

// -[SCCameraViewController previewFilterDataProviderFactory]
// Type encoding: @16@0:8
// Implementation: 0x10700a2c0

// -[SCCameraViewController setPreviewFilterDataProviderFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x100806ca0

// -[SCCameraViewController snapchattersDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10700a2d0

// -[SCCameraViewController setSnapchattersDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a2f0

// -[SCCameraViewController cameraBIPAScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x10700a304

// -[SCCameraViewController setCameraBIPAScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a324

// -[SCCameraViewController cameraBIPAScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x10700a338

// -[SCCameraViewController setCameraBIPAScopeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a358

// -[SCCameraViewController isCameraHardwareRequestHandlerActive]
// Type encoding: B16@0:8
// Implementation: 0x10700a36c

// -[SCCameraViewController state]
// Type encoding: @16@0:8
// Implementation: 0x1007f3b78

// -[SCCameraViewController lensCarouselManagerFuture]
// Type encoding: @16@0:8
// Implementation: 0x10700a37c

// -[SCCameraViewController deeplinkUnlockDeferredBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10700a38c

// -[SCCameraViewController setDeeplinkUnlockDeferredBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10700a39c

// -[SCCameraViewController pressingCameraButton]
// Type encoding: B16@0:8
// Implementation: 0x100c7ff5c

// -[SCCameraViewController setPressingCameraButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x10700a3a8

// -[SCCameraViewController deepLinkBitmojiController]
// Type encoding: @16@0:8
// Implementation: 0x10700a3b8

// -[SCCameraViewController setDeepLinkBitmojiController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10700a3c8

// -[SCCameraViewController longPressStartTime]
// Type encoding: d16@0:8
// Implementation: 0x10700a408

// -[SCCameraViewController setLongPressStartTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10700a418

// -[SCCameraViewController snapBackQuickTapDismissTimeout]
// Type encoding: d16@0:8
// Implementation: 0x1008cac44

// -[SCCameraViewController snapBackFasterDismissEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10700a428

// -[SCCameraViewController setSnapBackFasterDismissEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10700a438

// -[SCCameraViewController isSnapBackReplyCamera]
// Type encoding: B16@0:8
// Implementation: 0x10700a448

// -[SCCameraViewController geofilterCount]
// Type encoding: q16@0:8
// Implementation: 0x10700a458

// -[SCCameraViewController setGeofilterCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10700a468

// -[SCCameraViewController geolensCount]
// Type encoding: q16@0:8
// Implementation: 0x10700a478

// -[SCCameraViewController setGeolensCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10700a488

// -[SCCameraViewController isPreviewWarmedUp]
// Type encoding: B16@0:8
// Implementation: 0x10700a498

// -[SCCameraViewController setIsPreviewWarmedUp:]
// Type encoding: v20@0:8B16
// Implementation: 0x10700a4a8

// -[SCCameraViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10700a4b8

// +[SCCameraViewController announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106fee5cc

// +[SCCameraViewController cameraPageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106fee8a0

@end
