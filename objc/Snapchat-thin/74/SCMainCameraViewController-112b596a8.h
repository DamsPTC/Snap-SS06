// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMainCameraViewController
// Superclass: SCCameraViewController
// Address: 0x112b596a8

@interface SCMainCameraViewController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: waitingUntilVisibleToBeginRecording; attributes: TB,N,V_waitingUntilVisibleToBeginRecording
// Property: isScheduledBeginRecordingFromOtherPage; attributes: TB,N,V_isScheduledBeginRecordingFromOtherPage
// Property: tooltipPriorityResolver; attributes: T@"<SCCameraTooltipPriorityResolving>",&,N,V_tooltipPriorityResolver
// Property: navigationLogger; attributes: T@"<SCNavigationLogging>",R,W,N,V_navigationLogger
// Property: tooltipState; attributes: T@"SCLazy",W,N,V_tooltipState
// Property: memories; attributes: T@"<SCFeatureMemories>",R,N
// Property: snapKit; attributes: T@"<SCFeatureSnapKit>",R,N
// Property: timerMode; attributes: T@"<SCFeatureTimerMode>",R,N
// Property: isCameraViewFullyVisible; attributes: TB,R,N
// Property: isCameraViewPartiallyVisible; attributes: TB,R,N
// Property: addFriendsScopeLauncher; attributes: T@"SCUserFeatureLauncher",&,N,V_addFriendsScopeLauncher
// Property: addFriendsScopeServices; attributes: T@"SCAddFriendsScopeServices",&,N,V_addFriendsScopeServices
// Property: storyOnboardingTooltipManager; attributes: T@"SCLazy",R,N,V_storyOnboardingTooltipManager
// Property: snapKitDeeplinkingServices; attributes: T@"SCSnapKitDeeplinkingServices",R,N,V_snapKitDeeplinkingServices
// Property: mainCameraDeepLinkScopeServices; attributes: T@"SCMainCameraDeepLinkScopeServices",R,N,V_mainCameraDeepLinkScopeServices
// Property: settingsScopeServices; attributes: T@"SCSettingsScopeServices",R,N,V_settingsScopeServices
// Property: simpleContentFetcher; attributes: T@"SCLazy",R,N,V_simpleContentFetcher
// Property: lockScreenCaptureStorageManager; attributes: T@"SCLazy",R,N,V_lockScreenCaptureStorageManager
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: headerItem; attributes: T@"SIGHeaderItem",?,R,N,V_headerItem
// Property: footerItem; attributes: T@"SIGFooterItem",?,R,N
// Property: overlayItem; attributes: T@"SCOverlayItem",?,R,N

// -[SCMainCameraViewController startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10087c438

// -[SCMainCameraViewController stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106fea294

// -[SCMainCameraViewController _updateBottomCornerVisibilityIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c6a06c

// -[SCMainCameraViewController _didChangeRingFlashState:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c6a308

// -[SCMainCameraViewController _didChangeLensesActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c69fd4

// -[SCMainCameraViewController _didChangeCaptureDevicePosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c40168

// -[SCMainCameraViewController settingsLauncher]
// Type encoding: @16@0:8
// Implementation: 0x10687bbec

// -[SCMainCameraViewController _isOrphanedMediaRecoveryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10687bc54

// -[SCMainCameraViewController handleDeepLinkAddFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687bd98

// -[SCMainCameraViewController handleDeepLinkBitmoji:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687bec8

// -[SCMainCameraViewController handleMainCameraDeepLinkWithInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687c174

// -[SCMainCameraViewController mainCameraDeepLinkScopeDidHandleDeepLink:isHandled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10687c2d8

// -[SCMainCameraViewController handleDeepLinkPhoneVerification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687c350

// -[SCMainCameraViewController settingsScopeWantsDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10687c490

// -[SCMainCameraViewController settingsScopeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10687c508

// -[SCMainCameraViewController handleDeepLinkPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687c550

// -[SCMainCameraViewController handleDeepLinkSendTo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687c690

// -[SCMainCameraViewController handleDeepLinkCreativeKitLite:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687c9c8

// -[SCMainCameraViewController handleDeepLinkCreativeKitWeb:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687caa4

// -[SCMainCameraViewController handleDeepLinkCamera:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687ccc0

// -[SCMainCameraViewController handleDeepLinkLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687cefc

// -[SCMainCameraViewController handleDeepLinkOAuth2:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687d500

// -[SCMainCameraViewController handleDeepLinkKit:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687d800

// -[SCMainCameraViewController handleCameraModeDeepLinkWithInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687d890

// -[SCMainCameraViewController handleLockedCameraCaptureExtensionDeepLinkWithInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687da8c

// -[SCMainCameraViewController handleDeepLinkMusic:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687e6d8

// -[SCMainCameraViewController handleDeepLinkSelfieSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687e788

// -[SCMainCameraViewController deepLinkableViewControllerFromInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10687e838

// -[SCMainCameraViewController _snapKitOAuthScopeUseImmediateLauncher]
// Type encoding: B16@0:8
// Implementation: 0x10687eac4

// -[SCMainCameraViewController _setPreviewPresenterWithMetaData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687eb48

// -[SCMainCameraViewController _handleDereferedDeeplinkWithInfo:]
// Type encoding: B24@0:8@16
// Implementation: 0x10687ec94

// -[SCMainCameraViewController _presentPreviewWithFutureImageUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687ee3c

// -[SCMainCameraViewController _handleDeepLinkShareToPreviewWithVideoFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687f06c

// -[SCMainCameraViewController _presentPreviewWithFutureVideoUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687f324

// -[SCMainCameraViewController _lensDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10687f570

// -[SCMainCameraViewController addFriendsWorkflowSkipped:]
// Type encoding: v20@0:8B16
// Implementation: 0x10687f5ec

// -[SCMainCameraViewController addFriendsWorkflowCompleted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10687f5f0

// -[SCMainCameraViewController oAuth2PermissionPresenterWorkflowCompleted]
// Type encoding: v16@0:8
// Implementation: 0x10687f670

// -[SCMainCameraViewController initWithStartupWorkflow:lensDataProvider:headerItem:delegate:swipeViewParentDelegate:previewPresenterAdapter:coreCameraLogger:cameraCircumstanceEngine:storyOnboardingTooltipManager:legacyCameraTooltipsService:addFriendsScopeLauncher:addFriendsScopeServices:currentPageTracker:mainCameraDeepLinkScopeServices:snapKitDeeplinkingServices:settingsScopeServices:memoriesNavigationService:cameraSnapModelServices:systemScope:simpleContentFetcher:appInsightsMetadataStorage:circumstanceEngine:simpleSnapchatExperimentConfigProvider:lockScreenCaptureStorageManager:miniCameraContainerProvider:appStartExperimentReader:]
// Type encoding: @224@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216
// Implementation: 0x1007ef130

// -[SCMainCameraViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106fe6c10

// -[SCMainCameraViewController previewPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1008d4b30

// -[SCMainCameraViewController shouldAddTopCardCorners]
// Type encoding: B16@0:8
// Implementation: 0x100853630

// -[SCMainCameraViewController shouldAddBottomCardCorners]
// Type encoding: B16@0:8
// Implementation: 0x10085341c

// -[SCMainCameraViewController memories]
// Type encoding: @16@0:8
// Implementation: 0x106fe6c54

// -[SCMainCameraViewController snapKit]
// Type encoding: @16@0:8
// Implementation: 0x1008d1d74

// -[SCMainCameraViewController timerMode]
// Type encoding: @16@0:8
// Implementation: 0x106fe6cb8

// -[SCMainCameraViewController isCameraViewFullyVisible]
// Type encoding: B16@0:8
// Implementation: 0x10087df94

// -[SCMainCameraViewController isCameraViewPartiallyVisible]
// Type encoding: B16@0:8
// Implementation: 0x1008b51ac

// -[SCMainCameraViewController presentingMemories]
// Type encoding: B16@0:8
// Implementation: 0x106fe6d1c

// -[SCMainCameraViewController setPressingCameraButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fe6d5c

// -[SCMainCameraViewController handlePinchFrom:]
// Type encoding: B24@0:8@16
// Implementation: 0x106fe6dec

// -[SCMainCameraViewController handlePanFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe6f28

// -[SCMainCameraViewController handleTapFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe7054

// -[SCMainCameraViewController setSwipeNavigationEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fe71ec

// -[SCMainCameraViewController processRecordingForLongPress:shouldStartRecording:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106fe7258

// -[SCMainCameraViewController _scheduleStartRecordingFromOtherPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe7684

// -[SCMainCameraViewController _doStartRecordingFromOtherPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe76b8

// -[SCMainCameraViewController _cancelDelayStartRecordingFromOtherPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe7730

// -[SCMainCameraViewController prepareForRecordingWithMethod:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106fe7774

// -[SCMainCameraViewController longPress:]
// Type encoding: B24@0:8@16
// Implementation: 0x106fe77c8

// -[SCMainCameraViewController shouldRecognizeButtonActions]
// Type encoding: B16@0:8
// Implementation: 0x106fe7968

// -[SCMainCameraViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106fe7a0c

// -[SCMainCameraViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106fe7cc0

// -[SCMainCameraViewController lensesInIdleState]
// Type encoding: B16@0:8
// Implementation: 0x106fe7e68

// -[SCMainCameraViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x1008cac54

// -[SCMainCameraViewController viewDidFullyAppearWithModalPresentedAbove]
// Type encoding: v16@0:8
// Implementation: 0x106fe7ea4

// -[SCMainCameraViewController viewDidPartiallyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106fe7ff0

// -[SCMainCameraViewController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106fe82c0

// -[SCMainCameraViewController viewDidSwipeIn]
// Type encoding: v16@0:8
// Implementation: 0x1008d1d14

// -[SCMainCameraViewController viewDidSwipeOut]
// Type encoding: v16@0:8
// Implementation: 0x106fe869c

// -[SCMainCameraViewController viewDidPartiallyAppear]
// Type encoding: v16@0:8
// Implementation: 0x1008b49d4

// -[SCMainCameraViewController viewDidAppearAtOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x10087de20

// -[SCMainCameraViewController supportedInterfaceOrientations]
// Type encoding: Q16@0:8
// Implementation: 0x100c1caac

// -[SCMainCameraViewController didUpdateCarouselVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c6fcfc

// -[SCMainCameraViewController viewfinderDidDetach:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe86a0

// -[SCMainCameraViewController setRecordingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1008cb558

// -[SCMainCameraViewController onMusicSelectionStartedInDirectorMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fe877c

// -[SCMainCameraViewController _setScrollingLockedForMemories:withLockKey:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106fe87d4

// -[SCMainCameraViewController _stopCameraSoftlyAndPreemptivelyFlushPreviewBuffer:softStopDelay:]
// Type encoding: v24@0:8B16f20
// Implementation: 0x106fe883c

// -[SCMainCameraViewController toggleCameraButtonsVisibility:animated:]
// Type encoding: B24@0:8B16B20
// Implementation: 0x1008c62ec

// -[SCMainCameraViewController didSendSnaps]
// Type encoding: v16@0:8
// Implementation: 0x106fe8870

// -[SCMainCameraViewController didPostStories]
// Type encoding: v16@0:8
// Implementation: 0x106fe8904

// -[SCMainCameraViewController didSaveSnap]
// Type encoding: v16@0:8
// Implementation: 0x106fe8998

// -[SCMainCameraViewController tryToActivateLensAfterUnlockWithActivationLens:lensLaunchData:activationSource:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106fe89cc

// -[SCMainCameraViewController viewDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106fe8a6c

// -[SCMainCameraViewController postponedViewDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x106fe8afc

// -[SCMainCameraViewController forceReloadViewWillAndDidAppearIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10085fc50

// -[SCMainCameraViewController prefersStatusBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x10087c294

// -[SCMainCameraViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10087bac4

// -[SCMainCameraViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008c4f2c

// -[SCMainCameraViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fe8be4

// -[SCMainCameraViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fe8c38

// -[SCMainCameraViewController scrollingToProfileView]
// Type encoding: v16@0:8
// Implementation: 0x106fe8ce4

// -[SCMainCameraViewController cancelledScrollingToProfileView]
// Type encoding: v16@0:8
// Implementation: 0x106fe8ce8

// -[SCMainCameraViewController profileViewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x106fe8d20

// -[SCMainCameraViewController profileViewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106fe8d5c

// -[SCMainCameraViewController canHandleVolumeButtonEvents]
// Type encoding: B16@0:8
// Implementation: 0x106fe8d94

// -[SCMainCameraViewController _updateSnapCountBeforeShowLensesActivationTooltip]
// Type encoding: v16@0:8
// Implementation: 0x106fe8de0

// -[SCMainCameraViewController _showLensesActivationTooltipIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x100c4016c

// -[SCMainCameraViewController markCameraHelpTooltipAsCompletedIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106fe9054

// -[SCMainCameraViewController _hideOnboardingTooltipsWhenPrepareForRecording]
// Type encoding: v16@0:8
// Implementation: 0x106fe9160

// -[SCMainCameraViewController isLensesActivationTooltipVisible]
// Type encoding: B16@0:8
// Implementation: 0x106fe9280

// -[SCMainCameraViewController isCameraHelpTooltipVisible]
// Type encoding: B16@0:8
// Implementation: 0x106fe92dc

// -[SCMainCameraViewController _resetCameraViewType]
// Type encoding: v16@0:8
// Implementation: 0x1008d1d18

// -[SCMainCameraViewController _ringFlashDelegate]
// Type encoding: @16@0:8
// Implementation: 0x100c6a0e0

// -[SCMainCameraViewController _isMainCameraView]
// Type encoding: B16@0:8
// Implementation: 0x10085fc98

// -[SCMainCameraViewController _isMainCameraViewAndBackFacing]
// Type encoding: B16@0:8
// Implementation: 0x106fe9338

// -[SCMainCameraViewController imageCaptureDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x106fe93b8

// -[SCMainCameraViewController headerProfileButtonCenterX]
// Type encoding: d16@0:8
// Implementation: 0x106fe93ec

// -[SCMainCameraViewController headerItemYOffset]
// Type encoding: d16@0:8
// Implementation: 0x106fe93f4

// -[SCMainCameraViewController setCameraViewType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1008d49f8

// -[SCMainCameraViewController featureMemoriesWillScrollToGallery:withExitEvent:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106fe9450

// -[SCMainCameraViewController featureMemoriesWillScrollToCamera:withExitEvent:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106fe95f0

// -[SCMainCameraViewController featureMemoriesDidScrollToGallery:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe9750

// -[SCMainCameraViewController featureMemoriesDidScrollToCamera:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe983c

// -[SCMainCameraViewController _stopCameraForModalPresentation]
// Type encoding: v16@0:8
// Implementation: 0x106fe9900

// -[SCMainCameraViewController _startCameraForModalDismissal]
// Type encoding: v16@0:8
// Implementation: 0x106fe9a18

// -[SCMainCameraViewController featureMemoriesPresentMemoriesAddSnapsPicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe9bd8

// -[SCMainCameraViewController isOnMainCamera]
// Type encoding: B16@0:8
// Implementation: 0x106fe9bdc

// -[SCMainCameraViewController isMainCameraBeingOverlaid]
// Type encoding: B16@0:8
// Implementation: 0x1008d0d98

// -[SCMainCameraViewController configureToolbarExpandCollapseObserver]
// Type encoding: v16@0:8
// Implementation: 0x10087e910

// -[SCMainCameraViewController cameraToolbarWillExpand]
// Type encoding: v16@0:8
// Implementation: 0x106fe9c28

// -[SCMainCameraViewController cameraToolbarWillCollapse]
// Type encoding: v16@0:8
// Implementation: 0x106fe9c30

// -[SCMainCameraViewController _toggleCameraToolbar:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fe9c38

// -[SCMainCameraViewController defaultCustomStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x106fe9c80

// -[SCMainCameraViewController headerItem]
// Type encoding: @16@0:8
// Implementation: 0x100806ce0

// -[SCMainCameraViewController navigationLogger]
// Type encoding: @16@0:8
// Implementation: 0x106fe9c88

// -[SCMainCameraViewController tooltipState]
// Type encoding: @16@0:8
// Implementation: 0x106fe9ca8

// -[SCMainCameraViewController setTooltipState:]
// Type encoding: v24@0:8@16
// Implementation: 0x100806b5c

// -[SCMainCameraViewController addFriendsScopeLauncher]
// Type encoding: @16@0:8
// Implementation: 0x106fe9cc8

// -[SCMainCameraViewController setAddFriendsScopeLauncher:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe9cd8

// -[SCMainCameraViewController addFriendsScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x106fe9d18

// -[SCMainCameraViewController setAddFriendsScopeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe9d28

// -[SCMainCameraViewController storyOnboardingTooltipManager]
// Type encoding: @16@0:8
// Implementation: 0x106fe9d68

// -[SCMainCameraViewController snapKitDeeplinkingServices]
// Type encoding: @16@0:8
// Implementation: 0x106fe9d78

// -[SCMainCameraViewController mainCameraDeepLinkScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x106fe9d88

// -[SCMainCameraViewController settingsScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x106fe9d98

// -[SCMainCameraViewController simpleContentFetcher]
// Type encoding: @16@0:8
// Implementation: 0x106fe9da8

// -[SCMainCameraViewController lockScreenCaptureStorageManager]
// Type encoding: @16@0:8
// Implementation: 0x106fe9db8

// -[SCMainCameraViewController waitingUntilVisibleToBeginRecording]
// Type encoding: B16@0:8
// Implementation: 0x106fe9dc8

// -[SCMainCameraViewController setWaitingUntilVisibleToBeginRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fe9dd8

// -[SCMainCameraViewController isScheduledBeginRecordingFromOtherPage]
// Type encoding: B16@0:8
// Implementation: 0x106fe9de8

// -[SCMainCameraViewController setIsScheduledBeginRecordingFromOtherPage:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fe9df8

// -[SCMainCameraViewController tooltipPriorityResolver]
// Type encoding: @16@0:8
// Implementation: 0x106fe9e08

// -[SCMainCameraViewController setTooltipPriorityResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fe9e18

// -[SCMainCameraViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fe9e58

@end
