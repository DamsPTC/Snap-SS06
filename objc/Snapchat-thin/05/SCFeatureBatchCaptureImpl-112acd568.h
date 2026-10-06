// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureBatchCaptureImpl
// Superclass: SCFeature
// Address: 0x112acd568

@interface SCFeatureBatchCaptureImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: appLifecycle; attributes: T@"SCDisposableObserverLifecycle",&,N,V_appLifecycle
// Property: batchCaptureConfiguration; attributes: T@"<SCBatchCaptureConfiguration>",&,N,V_batchCaptureConfiguration
// Property: batchCaptureRecoveryData; attributes: T@"SCCapturedMultiSegmentRecoveryData",&,N,V_batchCaptureRecoveryData
// Property: cameraViewType; attributes: Tq,N,V_cameraViewType
// Property: captureComponent; attributes: T@"<SCFeatureCaptureComponent>",W,N,V_captureComponent
// Property: creationTime; attributes: T@"NSDate",&,N,V_creationTime
// Property: coreCameraLogger; attributes: T@"SCLazy",&,N,V_coreCameraLogger
// Property: managedCapturerState; attributes: T@"SCManagedCapturerState",&,N,V_managedCapturerState
// Property: containerView; attributes: T@"UIView<SCFeatureContainerView>",R,N,V_containerView
// Property: delegate; attributes: T@"<SCFeatureBatchCaptureDelegate>",W,N,V_delegate
// Property: activated; attributes: TB,N,GisActivated,SsetActivated:,V_activated
// Property: isActivatedObservable; attributes: T@"SCObservable",&,N,V_isActivatedBehaviorSubject
// Property: cameraBottomUIArbitrator; attributes: T@"<SCFeatureCameraUIArbitrator>",W,N,V_cameraBottomUIArbitrator
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureBatchCaptureImpl batchCaptureConfiguration:didDeleteSegment:atIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10614138c

// -[SCFeatureBatchCaptureImpl batchCaptureConfiguration:didDeleteSnapAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106141548

// -[SCFeatureBatchCaptureImpl batchCaptureConfiguration:didSplitSnapAtIndexPath:splitTime:]
// Type encoding: v56@0:8@16@24{?=qiIq}32
// Implementation: 0x10614154c

// -[SCFeatureBatchCaptureImpl batchCaptureConfiguration:didAddSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106141550

// -[SCFeatureBatchCaptureImpl batchCaptureConfigurationWillDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061416a8

// -[SCFeatureBatchCaptureImpl batchCaptureConfigurationDidDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061418e8

// -[SCFeatureBatchCaptureImpl _directSnapDiscardFromDiscardLoggingParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x106141940

// -[SCFeatureBatchCaptureImpl _logUserTrackedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106141ad4

// -[SCFeatureBatchCaptureImpl initWithCaptureComponent:cameraSnapModelServices:userSession:multiSnap:userPreferenceTimeProvider:coreCameraLogger:applicationLifecycleEvents:cameraUserActionLogger:cameraActiveVideoPaths:deviceMotionManager:cameraUserBlizzardLogger:cameraHardwareResource:cameraConfiguration:cameraViewType:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:coolRecording:footerItem:locationProvider:cameraModeActivationController:lensPlusSnapDocRecordProvider:]
// Type encoding: @184@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112q120@128@136@144@152@160@168@176
// Implementation: 0x100808eb4

// -[SCFeatureBatchCaptureImpl isCameraModeActivated]
// Type encoding: B16@0:8
// Implementation: 0x10613b9ec

// -[SCFeatureBatchCaptureImpl cameraModeType]
// Type encoding: i16@0:8
// Implementation: 0x10613b9fc

// -[SCFeatureBatchCaptureImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10080b25c

// -[SCFeatureBatchCaptureImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x10613baf8

// -[SCFeatureBatchCaptureImpl shortcutEnableIfNecessary:cameraShortcutId:scanSessionId:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10613bba4

// -[SCFeatureBatchCaptureImpl shortcutDisable]
// Type encoding: v16@0:8
// Implementation: 0x10613bcbc

// -[SCFeatureBatchCaptureImpl cameraShortcutFeatureType]
// Type encoding: Q16@0:8
// Implementation: 0x10613bd48

// -[SCFeatureBatchCaptureImpl cameraShortcutFeatureOption]
// Type encoding: q16@0:8
// Implementation: 0x10613bd50

// -[SCFeatureBatchCaptureImpl hasPendingContent]
// Type encoding: B16@0:8
// Implementation: 0x10613bd58

// -[SCFeatureBatchCaptureImpl cameraShortcutFeatureName]
// Type encoding: @16@0:8
// Implementation: 0x10613bd98

// -[SCFeatureBatchCaptureImpl alertContentEraseWithConfiguration:confirmAction:cancelAction:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10613bda4

// -[SCFeatureBatchCaptureImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10613bf40

// -[SCFeatureBatchCaptureImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10613bf5c

// -[SCFeatureBatchCaptureImpl detailedCameraModeLogInfo]
// Type encoding: @16@0:8
// Implementation: 0x10613c04c

// -[SCFeatureBatchCaptureImpl _createToolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x10613c150

// -[SCFeatureBatchCaptureImpl _presentAlertDialogWithConfirmAction:cancelAction:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x10613c7a0

// -[SCFeatureBatchCaptureImpl _createButtonIconView]
// Type encoding: @16@0:8
// Implementation: 0x10613ca08

// -[SCFeatureBatchCaptureImpl shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10613ca78

// -[SCFeatureBatchCaptureImpl interruptGestures]
// Type encoding: v16@0:8
// Implementation: 0x10613cb68

// -[SCFeatureBatchCaptureImpl batchCaptureConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10613cb6c

// -[SCFeatureBatchCaptureImpl batchCaptureRecoveryData]
// Type encoding: @16@0:8
// Implementation: 0x10613cc24

// -[SCFeatureBatchCaptureImpl setActivated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10613cc84

// -[SCFeatureBatchCaptureImpl isActivated]
// Type encoding: B16@0:8
// Implementation: 0x100c2c058

// -[SCFeatureBatchCaptureImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x10613cd20

// -[SCFeatureBatchCaptureImpl prepareForRecording]
// Type encoding: v16@0:8
// Implementation: 0x10613cda4

// -[SCFeatureBatchCaptureImpl flashScreenWithScreenShotImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10613cde8

// -[SCFeatureBatchCaptureImpl resetFlashScreen]
// Type encoding: v16@0:8
// Implementation: 0x10613cfac

// -[SCFeatureBatchCaptureImpl shouldShowPreviewButton]
// Type encoding: B16@0:8
// Implementation: 0x1008eb8f8

// -[SCFeatureBatchCaptureImpl setIsCapturing:]
// Type encoding: v20@0:8B16
// Implementation: 0x10613d000

// -[SCFeatureBatchCaptureImpl setCameraShortcutId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10613d044

// -[SCFeatureBatchCaptureImpl _activeBatchCaptureFromInitialConfigIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10080b7a4

// -[SCFeatureBatchCaptureImpl _setBatchCaptureActivated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10613d07c

// -[SCFeatureBatchCaptureImpl _updateSnapDocEditorResetSubscription]
// Type encoding: v16@0:8
// Implementation: 0x10613d1dc

// -[SCFeatureBatchCaptureImpl _setBatchCaptureUIVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10613d35c

// -[SCFeatureBatchCaptureImpl _updateAccentColorIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10613d554

// -[SCFeatureBatchCaptureImpl _setUpObservers]
// Type encoding: v16@0:8
// Implementation: 0x10080b458

// -[SCFeatureBatchCaptureImpl _setToolbarItemVisible:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10613d99c

// -[SCFeatureBatchCaptureImpl _updateToolbarVisibilityWithIsContinuousCaptureOn:isFullScreenLensActive:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10613da24

// -[SCFeatureBatchCaptureImpl _lastSegmentThumbnailFuture]
// Type encoding: @16@0:8
// Implementation: 0x10613da70

// -[SCFeatureBatchCaptureImpl _removeActiveVideoPathsForSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x10613daf0

// -[SCFeatureBatchCaptureImpl _segmentCount]
// Type encoding: Q16@0:8
// Implementation: 0x1008eb914

// -[SCFeatureBatchCaptureImpl _unsavedSegmentCount]
// Type encoding: Q16@0:8
// Implementation: 0x10613dbf4

// -[SCFeatureBatchCaptureImpl _updateLastSegmentThumbnailAndTotalCountAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10613dc3c

// -[SCFeatureBatchCaptureImpl _showLimitReachedAlertIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10613dd3c

// -[SCFeatureBatchCaptureImpl _loadBatchCaptureRecoveryDataAndShowPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x10613e08c

// -[SCFeatureBatchCaptureImpl captureComponent:willCompleteWithStillImageData:discardRelatedData:captureConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10613eb28

// -[SCFeatureBatchCaptureImpl captureComponent:didCompleteWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10613f5b0

// -[SCFeatureBatchCaptureImpl captureComponent:didCompleteRecoveryWithImage:recoveryData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10613f634

// -[SCFeatureBatchCaptureImpl imageCaptureDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x10613f638

// -[SCFeatureBatchCaptureImpl exposeCaptureServiceScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10613f63c

// -[SCFeatureBatchCaptureImpl removeCaptureServiceScope]
// Type encoding: v16@0:8
// Implementation: 0x10613f694

// -[SCFeatureBatchCaptureImpl videoCaptureWillStartRecordingWithCaptureConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10613f6c8

// -[SCFeatureBatchCaptureImpl videoCaptureDidReachUnlimitedMovementThreshold]
// Type encoding: v16@0:8
// Implementation: 0x10613f724

// -[SCFeatureBatchCaptureImpl captureComponent:willFinishRecordingWithVideoSize:placeholderImage:videoFuture:]
// Type encoding: v56@0:8@16{CGSize=dd}24@40@48
// Implementation: 0x10613f758

// -[SCFeatureBatchCaptureImpl videoCaptureDidFinishRecordingWithRecordedVideo:captureConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10613f75c

// -[SCFeatureBatchCaptureImpl videoCaptureDidFailRecording]
// Type encoding: v16@0:8
// Implementation: 0x1061401a8

// -[SCFeatureBatchCaptureImpl videoCaptureDidCancelRecording]
// Type encoding: v16@0:8
// Implementation: 0x1061401ec

// -[SCFeatureBatchCaptureImpl videoCaptureDidAbortRecording]
// Type encoding: v16@0:8
// Implementation: 0x106140220

// -[SCFeatureBatchCaptureImpl videoCaptureRecordingTooShort]
// Type encoding: v16@0:8
// Implementation: 0x106140254

// -[SCFeatureBatchCaptureImpl videoCaptureDidReachEnd]
// Type encoding: v16@0:8
// Implementation: 0x106140288

// -[SCFeatureBatchCaptureImpl videoCaptureDidStopRecording]
// Type encoding: v16@0:8
// Implementation: 0x1061402bc

// -[SCFeatureBatchCaptureImpl videoCaptureDidCompleteRecoveryWithRecoveryData:videoFuture:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061402f0

// -[SCFeatureBatchCaptureImpl videoCaptureShouldPrepareRecording]
// Type encoding: B16@0:8
// Implementation: 0x106140360

// -[SCFeatureBatchCaptureImpl videoCaptureShouldStartRecording]
// Type encoding: B16@0:8
// Implementation: 0x1061403a0

// -[SCFeatureBatchCaptureImpl videoCaptureShouldEndRecording]
// Type encoding: B16@0:8
// Implementation: 0x1061403e0

// -[SCFeatureBatchCaptureImpl videoCaptureHasStartedRecording]
// Type encoding: B16@0:8
// Implementation: 0x106140420

// -[SCFeatureBatchCaptureImpl setRecordingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106140460

// -[SCFeatureBatchCaptureImpl _cameraMediaOriginWithCapturedLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10614049c

// -[SCFeatureBatchCaptureImpl _getCurrentLocation]
// Type encoding: @16@0:8
// Implementation: 0x106140588

// -[SCFeatureBatchCaptureImpl setCameraUIVisible:animated:arbitrator:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x1061405d8

// -[SCFeatureBatchCaptureImpl batchCaptureOverlayViewControllerDidPressReviewAndEdit:]
// Type encoding: v24@0:8@16
// Implementation: 0x106140840

// -[SCFeatureBatchCaptureImpl batchCaptureOverlayViewController:previewButtonDidBecomeVisible:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1061408c4

// -[SCFeatureBatchCaptureImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106140950

// -[SCFeatureBatchCaptureImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106140c9c

// -[SCFeatureBatchCaptureImpl _didChangeBatchCaptureActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x106140cd0

// -[SCFeatureBatchCaptureImpl _notifyExternalComponentsWithBatchCaptureActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x106140d30

// -[SCFeatureBatchCaptureImpl _didChangeCaptureDevicePosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x106140e68

// -[SCFeatureBatchCaptureImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x106140ea0

// -[SCFeatureBatchCaptureImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10080aea4

// -[SCFeatureBatchCaptureImpl cameraBottomUIArbitrator]
// Type encoding: @16@0:8
// Implementation: 0x106140ec0

// -[SCFeatureBatchCaptureImpl setCameraBottomUIArbitrator:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c5d3f4

// -[SCFeatureBatchCaptureImpl isActivatedObservable]
// Type encoding: @16@0:8
// Implementation: 0x10080b830

// -[SCFeatureBatchCaptureImpl setIsActivatedObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106140ee0

// -[SCFeatureBatchCaptureImpl containerView]
// Type encoding: @16@0:8
// Implementation: 0x106140f20

// -[SCFeatureBatchCaptureImpl appLifecycle]
// Type encoding: @16@0:8
// Implementation: 0x106140f30

// -[SCFeatureBatchCaptureImpl setAppLifecycle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106140f40

// -[SCFeatureBatchCaptureImpl setBatchCaptureConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106140f80

// -[SCFeatureBatchCaptureImpl setBatchCaptureRecoveryData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106140fc0

// -[SCFeatureBatchCaptureImpl cameraViewType]
// Type encoding: q16@0:8
// Implementation: 0x106141000

// -[SCFeatureBatchCaptureImpl setCameraViewType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106141010

// -[SCFeatureBatchCaptureImpl captureComponent]
// Type encoding: @16@0:8
// Implementation: 0x106141020

// -[SCFeatureBatchCaptureImpl setCaptureComponent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106141040

// -[SCFeatureBatchCaptureImpl creationTime]
// Type encoding: @16@0:8
// Implementation: 0x106141054

// -[SCFeatureBatchCaptureImpl setCreationTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x106141064

// -[SCFeatureBatchCaptureImpl coreCameraLogger]
// Type encoding: @16@0:8
// Implementation: 0x1061410a4

// -[SCFeatureBatchCaptureImpl setCoreCameraLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061410b4

// -[SCFeatureBatchCaptureImpl managedCapturerState]
// Type encoding: @16@0:8
// Implementation: 0x1061410f4

// -[SCFeatureBatchCaptureImpl setManagedCapturerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106141104

// -[SCFeatureBatchCaptureImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106141144

@end
