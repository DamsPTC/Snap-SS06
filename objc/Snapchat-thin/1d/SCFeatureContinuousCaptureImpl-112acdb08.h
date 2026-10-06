// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureContinuousCaptureImpl
// Superclass: SCFeature
// Address: 0x112acdb08

@interface SCFeatureContinuousCaptureImpl

// Property: totalRecordedDuration; attributes: Td,R,N
// Property: remainingCaptureDuration; attributes: Td,R,N
// Property: maxRecordingDuration; attributes: Td,R,N
// Property: didReachMaxDuration; attributes: TB,R,N
// Property: segmentEventObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureContinuousCaptureImpl initWithUserSession:cameraUserActionLogger:blizzardLogger:featureSettingsService:cameraHardwareServicesAPI:captureComponent:cameraSnapModelServices:handsFreeRecording:cameraHardwareResource:musicFeature:cameraSourceType:cameraNavigationType:cameraModeActivationController:userPreferenceTimeProviderServices:cameraConfiguration:snapEditorTweakServices:appStartExperimentReader:circumstanceEngine:batchCapture:scopedCameraType:lensCarouselManager:cameraUIScopeViewContainer:selfieSettings:applicationLifecycleEvents:mainCameraViewControllerLifecycleEvents:]
// Type encoding: @216@0:8@16@24@32@40@48@56@64@72@80@88q96q104@112@120@128@136@144@152@160Q168@176@184@192@200@208
// Implementation: 0x10615374c

// -[SCFeatureContinuousCaptureImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106153e80

// -[SCFeatureContinuousCaptureImpl beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106153f18

// -[SCFeatureContinuousCaptureImpl _autoEnableHandsFreeForSpotlightCreateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106154118

// -[SCFeatureContinuousCaptureImpl _autoEnableHandsFreeForSnapEditorCreateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106154200

// -[SCFeatureContinuousCaptureImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x1061542bc

// -[SCFeatureContinuousCaptureImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106154304

// -[SCFeatureContinuousCaptureImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10615433c

// -[SCFeatureContinuousCaptureImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x106154340

// -[SCFeatureContinuousCaptureImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x10615434c

// -[SCFeatureContinuousCaptureImpl _createToolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x1061543bc

// -[SCFeatureContinuousCaptureImpl shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x1061549d4

// -[SCFeatureContinuousCaptureImpl processPlayButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106154a68

// -[SCFeatureContinuousCaptureImpl processPauseButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106154a8c

// -[SCFeatureContinuousCaptureImpl handleRecordingDidReachEnd]
// Type encoding: v16@0:8
// Implementation: 0x106154ac0

// -[SCFeatureContinuousCaptureImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x106154ac4

// -[SCFeatureContinuousCaptureImpl totalRecordedDuration]
// Type encoding: d16@0:8
// Implementation: 0x106154ae4

// -[SCFeatureContinuousCaptureImpl segmentEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x106154b24

// -[SCFeatureContinuousCaptureImpl clearSegmentDiscardEvents]
// Type encoding: v16@0:8
// Implementation: 0x106154b54

// -[SCFeatureContinuousCaptureImpl exposeCaptureServiceScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x106154b64

// -[SCFeatureContinuousCaptureImpl removeCaptureServiceScope]
// Type encoding: v16@0:8
// Implementation: 0x106154bbc

// -[SCFeatureContinuousCaptureImpl captureComponent:willCompleteWithStillImageData:discardRelatedData:captureConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106154bf0

// -[SCFeatureContinuousCaptureImpl captureComponent:didCompleteWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106154bf4

// -[SCFeatureContinuousCaptureImpl captureComponent:didCompleteRecoveryWithImage:recoveryData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106154bf8

// -[SCFeatureContinuousCaptureImpl imageCaptureDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x106154bfc

// -[SCFeatureContinuousCaptureImpl videoCaptureWillStartRecordingWithCaptureConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106154c00

// -[SCFeatureContinuousCaptureImpl videoCaptureDidReachUnlimitedMovementThreshold]
// Type encoding: v16@0:8
// Implementation: 0x106154c58

// -[SCFeatureContinuousCaptureImpl captureComponent:willFinishRecordingWithVideoSize:placeholderImage:videoFuture:]
// Type encoding: v56@0:8@16{CGSize=dd}24@40@48
// Implementation: 0x106154c8c

// -[SCFeatureContinuousCaptureImpl videoCaptureDidFinishRecordingWithRecordedVideo:captureConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106154c90

// -[SCFeatureContinuousCaptureImpl setRecordingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106155094

// -[SCFeatureContinuousCaptureImpl videoCaptureDidAbortRecording]
// Type encoding: v16@0:8
// Implementation: 0x1061550f8

// -[SCFeatureContinuousCaptureImpl videoCaptureDidCancelRecording]
// Type encoding: v16@0:8
// Implementation: 0x1061551d8

// -[SCFeatureContinuousCaptureImpl videoCaptureDidCompleteRecoveryWithRecoveryData:videoFuture:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061552b0

// -[SCFeatureContinuousCaptureImpl videoCaptureDidFailRecording]
// Type encoding: v16@0:8
// Implementation: 0x106155320

// -[SCFeatureContinuousCaptureImpl videoCaptureDidReachEnd]
// Type encoding: v16@0:8
// Implementation: 0x1061553f8

// -[SCFeatureContinuousCaptureImpl videoCaptureDidStopRecording]
// Type encoding: v16@0:8
// Implementation: 0x106155434

// -[SCFeatureContinuousCaptureImpl videoCaptureHasStartedRecording]
// Type encoding: B16@0:8
// Implementation: 0x1061554a8

// -[SCFeatureContinuousCaptureImpl videoCaptureRecordingTooShort]
// Type encoding: v16@0:8
// Implementation: 0x1061554e8

// -[SCFeatureContinuousCaptureImpl videoCaptureShouldEndRecording]
// Type encoding: B16@0:8
// Implementation: 0x106155574

// -[SCFeatureContinuousCaptureImpl videoCaptureShouldPrepareRecording]
// Type encoding: B16@0:8
// Implementation: 0x1061555b4

// -[SCFeatureContinuousCaptureImpl videoCaptureShouldStartRecording]
// Type encoding: B16@0:8
// Implementation: 0x1061555f4

// -[SCFeatureContinuousCaptureImpl didTapDoneButton]
// Type encoding: v16@0:8
// Implementation: 0x106155634

// -[SCFeatureContinuousCaptureImpl didTapUndoButton]
// Type encoding: v16@0:8
// Implementation: 0x10615566c

// -[SCFeatureContinuousCaptureImpl _presentUndoAlertV2]
// Type encoding: v16@0:8
// Implementation: 0x106155694

// -[SCFeatureContinuousCaptureImpl _presentDisableModeAlertWithConfirmAction:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106155ba8

// -[SCFeatureContinuousCaptureImpl _discardLastClip]
// Type encoding: v16@0:8
// Implementation: 0x106155fec

// -[SCFeatureContinuousCaptureImpl _logUnifiedCameraActionWithItem:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061562f0

// -[SCFeatureContinuousCaptureImpl _createDurationTimerView]
// Type encoding: @16@0:8
// Implementation: 0x106156368

// -[SCFeatureContinuousCaptureImpl _transitionToFinishingSessionOnCaptureDidReachEnd]
// Type encoding: v16@0:8
// Implementation: 0x106156518

// -[SCFeatureContinuousCaptureImpl _updateVideoDurationTimerVisibility]
// Type encoding: v16@0:8
// Implementation: 0x10615653c

// -[SCFeatureContinuousCaptureImpl _updateToolbarButtonVisibility]
// Type encoding: v16@0:8
// Implementation: 0x106156684

// -[SCFeatureContinuousCaptureImpl _updateRuntimePinnedToolbarItems]
// Type encoding: v16@0:8
// Implementation: 0x106156748

// -[SCFeatureContinuousCaptureImpl _transitionToHandsFreeCameraModeStateActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10615678c

// -[SCFeatureContinuousCaptureImpl _handleMainCameraViewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1061568e4

// -[SCFeatureContinuousCaptureImpl _handleAppDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1061568ec

// -[SCFeatureContinuousCaptureImpl _deactivateHandsFreeModeIfNeededWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061568f4

// -[SCFeatureContinuousCaptureImpl _transitionToState:oldState:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10615699c

// -[SCFeatureContinuousCaptureImpl _handleStateTransition:oldState:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x106156ad4

// -[SCFeatureContinuousCaptureImpl _updateCameraModeActivationInfo]
// Type encoding: v16@0:8
// Implementation: 0x106156ee4

// -[SCFeatureContinuousCaptureImpl _notifyExternalComponentsWithContinuousCaptureActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10615702c

// -[SCFeatureContinuousCaptureImpl clearVideoSegments]
// Type encoding: v16@0:8
// Implementation: 0x10615745c

// -[SCFeatureContinuousCaptureImpl _configureSnapDocForTimelinePlayback]
// Type encoding: v16@0:8
// Implementation: 0x10615760c

// -[SCFeatureContinuousCaptureImpl _setUpObservers]
// Type encoding: v16@0:8
// Implementation: 0x1061577e4

// -[SCFeatureContinuousCaptureImpl _updateInnerCircleVisibilityWithHandsFreeModeActive:isPreInitialCapture:isLensCarouselActive:animated:]
// Type encoding: v32@0:8B16B20B24B28
// Implementation: 0x106158aac

// -[SCFeatureContinuousCaptureImpl _updateHandsFreeTapToRecordTooltipVisibility]
// Type encoding: v16@0:8
// Implementation: 0x106158b2c

// -[SCFeatureContinuousCaptureImpl _handleSpotlightLensUnlockForActiveLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x106158bf8

// -[SCFeatureContinuousCaptureImpl _updateInterstitialViewVisibilityWithContinuousCaptureState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106158dc0

// -[SCFeatureContinuousCaptureImpl _showInterstitialFooter]
// Type encoding: v16@0:8
// Implementation: 0x106158e24

// -[SCFeatureContinuousCaptureImpl _hideInterstitialFooter]
// Type encoding: v16@0:8
// Implementation: 0x106159144

// -[SCFeatureContinuousCaptureImpl _updateInterstitialClipThumbnailsScrollingToLastClip:]
// Type encoding: v20@0:8B16
// Implementation: 0x106159160

// -[SCFeatureContinuousCaptureImpl _populateFirstFrameThumbnailForSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061591e8

// -[SCFeatureContinuousCaptureImpl _rescaledThumbnailFutureWithImage:scale:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x1061594b4

// -[SCFeatureContinuousCaptureImpl _capturerDidBeginRecordingWithCapturerState:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061596cc

// -[SCFeatureContinuousCaptureImpl _prepareForRecordingWithVideoCaptureConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106159794

// -[SCFeatureContinuousCaptureImpl _addTimelineSegmentToSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061597cc

// -[SCFeatureContinuousCaptureImpl _goToPreviewAfterSnapDocReady]
// Type encoding: v16@0:8
// Implementation: 0x106159b34

// -[SCFeatureContinuousCaptureImpl _goToPreviewWithTimelinePlayback]
// Type encoding: v16@0:8
// Implementation: 0x106159c5c

// -[SCFeatureContinuousCaptureImpl _didAppendVideoSampleBufferAtTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x106159e2c

// -[SCFeatureContinuousCaptureImpl _updateSegmentCaptureProgress]
// Type encoding: v16@0:8
// Implementation: 0x106159f9c

// -[SCFeatureContinuousCaptureImpl _maxRecordingDuration]
// Type encoding: d16@0:8
// Implementation: 0x10615a0e4

// -[SCFeatureContinuousCaptureImpl maxRecordingDuration]
// Type encoding: d16@0:8
// Implementation: 0x10615a184

// -[SCFeatureContinuousCaptureImpl remainingCaptureDuration]
// Type encoding: d16@0:8
// Implementation: 0x10615a188

// -[SCFeatureContinuousCaptureImpl didReachMaxDuration]
// Type encoding: B16@0:8
// Implementation: 0x10615a1f8

// -[SCFeatureContinuousCaptureImpl _snapEditorEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10615a254

// -[SCFeatureContinuousCaptureImpl _captureDurationObservable]
// Type encoding: @16@0:8
// Implementation: 0x10615a29c

// -[SCFeatureContinuousCaptureImpl _isCapturingObservable]
// Type encoding: @16@0:8
// Implementation: 0x10615a2cc

// -[SCFeatureContinuousCaptureImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10615a2fc

@end
