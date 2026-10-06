// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureDirectorModeImpl
// Superclass: SCFeature
// Address: 0x1129f9178

@interface SCFeatureDirectorModeImpl

// Property: snapsRecoveryData; attributes: T@"SCCapturedMultiSegmentRecoveryData",&,N,V_snapsRecoveryData
// Property: snapCreationTime; attributes: T@"NSDate",&,N,V_snapCreationTime
// Property: cameraSnapCreationLogger; attributes: T@"SCLazy",W,N,V_cameraSnapCreationLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: mediaConfiguration; attributes: T@"<SCTimelineConfiguration>",&,N,V_mediaConfiguration
// Property: delegate; attributes: T@"<SCFeatureDirectorModeDelegate>",W,N,V_delegate
// Property: activated; attributes: TB,R,N,GisActivated,V_activated
// Property: snapSessionID; attributes: T@"NSString",R,N
// Property: snapSessionContext; attributes: T@"SESnapSessionContext",R,N
// Property: thumbnailsFeature; attributes: T@"<SCFeatureDirectorModeThumbnails>",&,N,V_thumbnailsFeature
// Property: draftMediaConfiguration; attributes: T@"<SCTimelineConfiguration>",R,N,V_draftMediaConfiguration
// Property: draftDelegate; attributes: T@"<SCDirectorModeDraftDelegate>",W,N,V_draftDelegate
// Property: didReachMaxDuration; attributes: TB,R,N
// Property: remainingCaptureDuration; attributes: Td,R,N
// Property: directorModeSource; attributes: Tq,N,V_directorModeSource
// Property: isRecordingForTemplates; attributes: TB,R,N,V_isRecordingForTemplates
// Property: previewPagePreset; attributes: T@"SCDirectorModePreviewPagePreset",R,N,V_previewPagePreset
// Property: segmentTimeRangesObservable; attributes: T@"SCObservable",R,N,V_segmentTimeRangesSubject
// Property: cameraBottomUIArbitrator; attributes: T@"<SCFeatureCameraUIArbitrator>",W,N,V_cameraBottomUIArbitrator

// -[SCFeatureDirectorModeImpl initWithCameraConfiguration:userSession:captureComponent:multiSnap:lensCarouselManager:speedMode:timerMode:afterCaptureActionTracker:cameraSnapModelServices:valdiRuntimeProvider:cameraHardwareResource:cameraHardwareServicesAPI:cameraRequestHandler:cameraUserBlizzardLogger:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:snapVideoFilterFactory:previewAssetVideoProviderFactory:ngsmePlayerFactory:videoImportServices:memoriesTrackingImageProcessCommandScopeExposer:applicationLifecycleEvents:viewControllerLifecycleEvents:cameraActivePathServices:snapRecoveryServices:thumbnailGenerationServices:contentDeliveryServices:cameraTooltipsService:cameraSnapCreationLogger:temporaryFileWriter:cameraUserActionLogger:memoriesExperimentService:ngsmeSnapDocResolver:snapDocManager:snapEditorTweakServices:memoriesDirectorModeDraftScopeExposer:snapPageSource:circumstanceEngine:directorModeMediaProvider:userPreferenceTimeProviderServices:userPreferences:spotlightPostingConfiguration:templateExplorerScopeExposer:templateServices:verticalToolbar:musicExperiments:tinsel:alwaysOnMediaPickerToggleContainerManager:memoriesPickerUtilServices:]
// Type encoding: @408@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296q304@312@320@328@336@344@352@360@368@376@384@392@400
// Implementation: 0x104d67c9c

// -[SCFeatureDirectorModeImpl _subscribeToMediaObservable]
// Type encoding: v16@0:8
// Implementation: 0x104d68904

// -[SCFeatureDirectorModeImpl _importMediaIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x104d68d3c

// -[SCFeatureDirectorModeImpl _assetsMovedToCameraDirectory:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d68e28

// -[SCFeatureDirectorModeImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104d69728

// -[SCFeatureDirectorModeImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d69780

// -[SCFeatureDirectorModeImpl _viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x104d697c0

// -[SCFeatureDirectorModeImpl _viewWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x104d6985c

// -[SCFeatureDirectorModeImpl _viewWillDisappear]
// Type encoding: v16@0:8
// Implementation: 0x104d69a0c

// -[SCFeatureDirectorModeImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d69ab4

// -[SCFeatureDirectorModeImpl isCameraModeActivated]
// Type encoding: B16@0:8
// Implementation: 0x104d69ab8

// -[SCFeatureDirectorModeImpl cameraModeType]
// Type encoding: i16@0:8
// Implementation: 0x104d69ac0

// -[SCFeatureDirectorModeImpl snapSessionID]
// Type encoding: @16@0:8
// Implementation: 0x104d69ac8

// -[SCFeatureDirectorModeImpl remainingCaptureDuration]
// Type encoding: d16@0:8
// Implementation: 0x104d69b0c

// -[SCFeatureDirectorModeImpl snapSessionContext]
// Type encoding: @16@0:8
// Implementation: 0x104d69b88

// -[SCFeatureDirectorModeImpl maxRecordingDuration]
// Type encoding: d16@0:8
// Implementation: 0x104d69c08

// -[SCFeatureDirectorModeImpl didReachMaxDuration]
// Type encoding: B16@0:8
// Implementation: 0x104d69c70

// -[SCFeatureDirectorModeImpl mediaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104d69c90

// -[SCFeatureDirectorModeImpl setDraftDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d69d74

// -[SCFeatureDirectorModeImpl shouldRestoreFromDraft]
// Type encoding: B16@0:8
// Implementation: 0x104d6a268

// -[SCFeatureDirectorModeImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x104d6a280

// -[SCFeatureDirectorModeImpl presentMemoriesPickerWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104d6a3b4

// -[SCFeatureDirectorModeImpl presentDraftsPickerWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104d6a7b8

// -[SCFeatureDirectorModeImpl updateUIWithMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d6a8c4

// -[SCFeatureDirectorModeImpl setMusicSelectionButtonHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d6ab1c

// -[SCFeatureDirectorModeImpl setThumbnailHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d6ab2c

// -[SCFeatureDirectorModeImpl onExitButtonClicked]
// Type encoding: v16@0:8
// Implementation: 0x104d6ab3c

// -[SCFeatureDirectorModeImpl showLimitReachedToast]
// Type encoding: v16@0:8
// Implementation: 0x104d6ab64

// -[SCFeatureDirectorModeImpl hidePreviewLoadingIndicator]
// Type encoding: v16@0:8
// Implementation: 0x104d6aba8

// -[SCFeatureDirectorModeImpl exposeCaptureServiceScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d6ac0c

// -[SCFeatureDirectorModeImpl removeCaptureServiceScope]
// Type encoding: v16@0:8
// Implementation: 0x104d6ac64

// -[SCFeatureDirectorModeImpl captureComponent:willCompleteWithStillImageData:discardRelatedData:captureConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104d6ac98

// -[SCFeatureDirectorModeImpl captureComponent:didCompleteWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d6ac9c

// -[SCFeatureDirectorModeImpl captureComponent:didCompleteRecoveryWithImage:recoveryData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d6aca0

// -[SCFeatureDirectorModeImpl imageCaptureDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x104d6aca4

// -[SCFeatureDirectorModeImpl videoCaptureWillStartRecordingWithCaptureConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d6aca8

// -[SCFeatureDirectorModeImpl videoCaptureDidReachUnlimitedMovementThreshold]
// Type encoding: v16@0:8
// Implementation: 0x104d6ad74

// -[SCFeatureDirectorModeImpl captureComponent:willFinishRecordingWithVideoSize:placeholderImage:videoFuture:]
// Type encoding: v56@0:8@16{CGSize=dd}24@40@48
// Implementation: 0x104d6ada8

// -[SCFeatureDirectorModeImpl videoCaptureDidFinishRecordingWithRecordedVideo:captureConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d6ade4

// -[SCFeatureDirectorModeImpl _addDirectorModeSegmentWithRecordedVideo:captureSessionID:lensSessionID:activeLensID:activeLensMusicTrackMetadata:activeCameraModes:detailedCameraModes:trimmedTimeRange:isGreenScreen:]
// Type encoding: v84@0:8@16@24@32@40@48@56@64@72B80
// Implementation: 0x104d6b004

// -[SCFeatureDirectorModeImpl _asyncAddPlaybackLayersWithTimelineMediaSegments:isCapturedFromCamera:isGreenScreen:completion:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x104d6bd60

// -[SCFeatureDirectorModeImpl _addPlaybackLayerWithTimelineMediaSegment:isCapturedFromCamera:isGreenScreen:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x104d6c040

// -[SCFeatureDirectorModeImpl _addMediaSegments:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104d6c824

// -[SCFeatureDirectorModeImpl _detailedCameraModesInfoFromActiveCameraModes:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d6f440

// -[SCFeatureDirectorModeImpl _rescaledThumbnailFutureWithImage:scale:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x104d6f528

// -[SCFeatureDirectorModeImpl videoCaptureDidAbortRecording]
// Type encoding: v16@0:8
// Implementation: 0x104d6f740

// -[SCFeatureDirectorModeImpl videoCaptureDidFailRecording]
// Type encoding: v16@0:8
// Implementation: 0x104d6f7b4

// -[SCFeatureDirectorModeImpl videoCaptureDidCancelRecording]
// Type encoding: v16@0:8
// Implementation: 0x104d6f7f4

// -[SCFeatureDirectorModeImpl videoCaptureRecordingTooShort]
// Type encoding: v16@0:8
// Implementation: 0x104d6f834

// -[SCFeatureDirectorModeImpl videoCaptureDidReachEnd]
// Type encoding: v16@0:8
// Implementation: 0x104d6f88c

// -[SCFeatureDirectorModeImpl videoCaptureDidStopRecording]
// Type encoding: v16@0:8
// Implementation: 0x104d6f8c0

// -[SCFeatureDirectorModeImpl videoCaptureDidCompleteRecoveryWithRecoveryData:videoFuture:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d6f900

// -[SCFeatureDirectorModeImpl videoCaptureShouldPrepareRecording]
// Type encoding: B16@0:8
// Implementation: 0x104d6f970

// -[SCFeatureDirectorModeImpl videoCaptureShouldStartRecording]
// Type encoding: B16@0:8
// Implementation: 0x104d6f9b0

// -[SCFeatureDirectorModeImpl videoCaptureShouldEndRecording]
// Type encoding: B16@0:8
// Implementation: 0x104d6f9f0

// -[SCFeatureDirectorModeImpl videoCaptureHasStartedRecording]
// Type encoding: B16@0:8
// Implementation: 0x104d6fa30

// -[SCFeatureDirectorModeImpl setRecordingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104d6fa70

// -[SCFeatureDirectorModeImpl featureDirectorModeThumbnails:didUpdateRuntimeOverlapContribution:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x104d6faac

// -[SCFeatureDirectorModeImpl featureDirectorModeThumbnailsDidTapAddMore:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d6fb64

// -[SCFeatureDirectorModeImpl featureDirectorModeThumbnails:didSelectSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d6fbac

// -[SCFeatureDirectorModeImpl featureDirectorModeThumbnailsDidTapTemplateExplorerButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d6fbb4

// -[SCFeatureDirectorModeImpl memoriesPickerV2DidSelectItemsWithMediaSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d6fcb8

// -[SCFeatureDirectorModeImpl memoriesPickerV2DidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104d7002c

// -[SCFeatureDirectorModeImpl onCameraIconClicked]
// Type encoding: v16@0:8
// Implementation: 0x104d70098

// -[SCFeatureDirectorModeImpl memoriesDirectorModeDraftGridDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104d700f8

// -[SCFeatureDirectorModeImpl templateExplorerDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x104d701e0

// -[SCFeatureDirectorModeImpl templateExplorerDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104d701e4

// -[SCFeatureDirectorModeImpl _dismissTemplateExplorer]
// Type encoding: v16@0:8
// Implementation: 0x104d701e8

// -[SCFeatureDirectorModeImpl timelineConfiguration:didAddSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d70240

// -[SCFeatureDirectorModeImpl timelineConfiguration:didAddSegments:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d70300

// -[SCFeatureDirectorModeImpl timelineConfiguration:didDeleteSegment:atIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104d704c4

// -[SCFeatureDirectorModeImpl timelineConfigurationWillDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d70708

// -[SCFeatureDirectorModeImpl timelineConfigurationDidDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d70924

// -[SCFeatureDirectorModeImpl timelineConfiguration:didUpdateSegmentTrim:atIndex:]
// Type encoding: v80@0:8@16{?={?=qiIq}{?=qiIq}}24q72
// Implementation: 0x104d70b30

// -[SCFeatureDirectorModeImpl timelineConfigurationDidUpdateThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d70b34

// -[SCFeatureDirectorModeImpl timelineConfiguration:didUpdateThumbnailsForSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d70b38

// -[SCFeatureDirectorModeImpl timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x104d70b3c

// -[SCFeatureDirectorModeImpl timelineConfigurationDidEnterReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d70b84

// -[SCFeatureDirectorModeImpl timelineConfigurationDidExitReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d70b88

// -[SCFeatureDirectorModeImpl timelineConfigurationDidRestoreToInitialState:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d70cb4

// -[SCFeatureDirectorModeImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d70cb8

// -[SCFeatureDirectorModeImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x104d70f6c

// -[SCFeatureDirectorModeImpl _didAppendVideoSampleBufferAtTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x104d70fa0

// -[SCFeatureDirectorModeImpl shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x104d711f0

// -[SCFeatureDirectorModeImpl _isTouchAtPoint:withinSubview:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x104d712c8

// -[SCFeatureDirectorModeImpl onPreviewButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104d71358

// -[SCFeatureDirectorModeImpl onUndoButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104d713e0

// -[SCFeatureDirectorModeImpl snapsRecoveryData]
// Type encoding: @16@0:8
// Implementation: 0x104d71588

// -[SCFeatureDirectorModeImpl _persistSegmentIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d71628

// -[SCFeatureDirectorModeImpl _setDirectorModeActivated:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d719c4

// -[SCFeatureDirectorModeImpl _setupViews]
// Type encoding: v16@0:8
// Implementation: 0x104d71b00

// -[SCFeatureDirectorModeImpl _installTopContainerAndErrorToastConstraints]
// Type encoding: v16@0:8
// Implementation: 0x104d72158

// -[SCFeatureDirectorModeImpl _setupUndoButton]
// Type encoding: v16@0:8
// Implementation: 0x104d72510

// -[SCFeatureDirectorModeImpl _updateUndoButtonConstraintsWithPickerStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d72a30

// -[SCFeatureDirectorModeImpl _setupMusicButton]
// Type encoding: v16@0:8
// Implementation: 0x104d72ad0

// -[SCFeatureDirectorModeImpl _bottomInset]
// Type encoding: d16@0:8
// Implementation: 0x104d72e18

// -[SCFeatureDirectorModeImpl _onMusicButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104d72ec8

// -[SCFeatureDirectorModeImpl _isCapturingObservable]
// Type encoding: @16@0:8
// Implementation: 0x104d72fcc

// -[SCFeatureDirectorModeImpl _progressObservable]
// Type encoding: @16@0:8
// Implementation: 0x104d7302c

// -[SCFeatureDirectorModeImpl _segmentsObservable]
// Type encoding: @16@0:8
// Implementation: 0x104d7308c

// -[SCFeatureDirectorModeImpl _captureDurationObservable]
// Type encoding: @16@0:8
// Implementation: 0x104d730ec

// -[SCFeatureDirectorModeImpl _previewButtonStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x104d7314c

// -[SCFeatureDirectorModeImpl _toastMessageObservable]
// Type encoding: @16@0:8
// Implementation: 0x104d731ac

// -[SCFeatureDirectorModeImpl _segmentsEndDurationArray]
// Type encoding: @16@0:8
// Implementation: 0x104d7320c

// -[SCFeatureDirectorModeImpl _updateSnapDocLensFromSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d73398

// -[SCFeatureDirectorModeImpl _updateSegmentCaptureProgress]
// Type encoding: v16@0:8
// Implementation: 0x104d73580

// -[SCFeatureDirectorModeImpl _didUpdateDuration]
// Type encoding: v16@0:8
// Implementation: 0x104d737bc

// -[SCFeatureDirectorModeImpl _setRecordingStarted:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d73850

// -[SCFeatureDirectorModeImpl _runMemoriesPickerCompletion]
// Type encoding: v16@0:8
// Implementation: 0x104d738a8

// -[SCFeatureDirectorModeImpl _shouldShowDiscardAlertWhenExiting]
// Type encoding: B16@0:8
// Implementation: 0x104d73920

// -[SCFeatureDirectorModeImpl _showDiscardAlert]
// Type encoding: v16@0:8
// Implementation: 0x104d73948

// -[SCFeatureDirectorModeImpl _showDeletDraftAlert]
// Type encoding: v16@0:8
// Implementation: 0x104d73d04

// -[SCFeatureDirectorModeImpl _showUndoSegmentsAlertWithTitle:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104d741bc

// -[SCFeatureDirectorModeImpl _undoLastSegment]
// Type encoding: v16@0:8
// Implementation: 0x104d743d0

// -[SCFeatureDirectorModeImpl _undoImportedSegments]
// Type encoding: v16@0:8
// Implementation: 0x104d74568

// -[SCFeatureDirectorModeImpl _subscribeToObservables]
// Type encoding: v16@0:8
// Implementation: 0x104d74790

// -[SCFeatureDirectorModeImpl snapEditorTemplatesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104d74ee0

// -[SCFeatureDirectorModeImpl _subscribeToSegmentObservables]
// Type encoding: v16@0:8
// Implementation: 0x104d74f28

// -[SCFeatureDirectorModeImpl _subscribeToTimelineConfigurationStatusObservable]
// Type encoding: v16@0:8
// Implementation: 0x104d75078

// -[SCFeatureDirectorModeImpl _isSnapRecoverySupported]
// Type encoding: B16@0:8
// Implementation: 0x104d751e4

// -[SCFeatureDirectorModeImpl _isTemplatesUseCase]
// Type encoding: B16@0:8
// Implementation: 0x104d7524c

// -[SCFeatureDirectorModeImpl _reportCreationStep:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d75274

// -[SCFeatureDirectorModeImpl _reportCreationStep:withImportContentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d75410

// -[SCFeatureDirectorModeImpl _speedModeRecordingSpeedMultiplier]
// Type encoding: d16@0:8
// Implementation: 0x104d754b8

// -[SCFeatureDirectorModeImpl _showOnboardingDialogIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104d75510

// -[SCFeatureDirectorModeImpl cameraModeOnboardingDialogPresenter:presentDialog:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d75744

// -[SCFeatureDirectorModeImpl _presentAlertDialog:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d757c0

// -[SCFeatureDirectorModeImpl _tempFileWriterFilePathForFileName:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d7583c

// -[SCFeatureDirectorModeImpl _isCameraRollImportWithContentManagerEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104d758d8

// -[SCFeatureDirectorModeImpl _setVideoStabilizationEnabledIfApplicable:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d75940

// -[SCFeatureDirectorModeImpl _showLoadingIndicator]
// Type encoding: v16@0:8
// Implementation: 0x104d75a90

// -[SCFeatureDirectorModeImpl _hideLoadingIndicator]
// Type encoding: v16@0:8
// Implementation: 0x104d75c14

// -[SCFeatureDirectorModeImpl _showLoadingIndicatorForPreview]
// Type encoding: v16@0:8
// Implementation: 0x104d75c58

// -[SCFeatureDirectorModeImpl _isSpotlightPostingFlowEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104d75fc8

// -[SCFeatureDirectorModeImpl _isPreviewPresentationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104d76000

// -[SCFeatureDirectorModeImpl _isSpotlightPostingUploadFlowEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104d76044

// -[SCFeatureDirectorModeImpl _presentPreviewScreenIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104d76088

// -[SCFeatureDirectorModeImpl _showMemoriesPickerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104d760d4

// -[SCFeatureDirectorModeImpl _isTemplateExplorerEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104d762e4

// -[SCFeatureDirectorModeImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x104d762ec

// -[SCFeatureDirectorModeImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x104d763a0

// -[SCFeatureDirectorModeImpl detailedCameraModeLogInfo]
// Type encoding: @16@0:8
// Implementation: 0x104d763a4

// -[SCFeatureDirectorModeImpl _logUserTrackedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d7640c

// -[SCFeatureDirectorModeImpl _logUnifiedCameraActionWithItem:]
// Type encoding: v24@0:8q16
// Implementation: 0x104d7647c

// -[SCFeatureDirectorModeImpl _spotlightMediaSourceWithImportedMediaSegment:]
// Type encoding: q24@0:8@16
// Implementation: 0x104d764f4

// -[SCFeatureDirectorModeImpl _spotlightPostingSegmentSource]
// Type encoding: q16@0:8
// Implementation: 0x104d76694

// -[SCFeatureDirectorModeImpl _spotlightPostingSnapSourceOrDefault:]
// Type encoding: q24@0:8q16
// Implementation: 0x104d766d4

// -[SCFeatureDirectorModeImpl _spotlightPostingMediaSource:]
// Type encoding: q24@0:8q16
// Implementation: 0x104d76714

// -[SCFeatureDirectorModeImpl _presentPreview]
// Type encoding: v16@0:8
// Implementation: 0x104d7678c

// -[SCFeatureDirectorModeImpl _presentPreviewWithSelectedSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d76794

// -[SCFeatureDirectorModeImpl _exitDirectorMode]
// Type encoding: v16@0:8
// Implementation: 0x104d76824

// -[SCFeatureDirectorModeImpl _exitAndResetFeaturesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104d768b4

// -[SCFeatureDirectorModeImpl _restoreFromDraftMediaConfigurationIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x104d76a04

// -[SCFeatureDirectorModeImpl _prepareForTemplatesRecordingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104d77130

// -[SCFeatureDirectorModeImpl _onTimerModeStateChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x104d7739c

// -[SCFeatureDirectorModeImpl _saveDraftAndExitDirectorModeWithSelectedSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d773dc

// -[SCFeatureDirectorModeImpl _deleteDraftAndExitDirectorMode]
// Type encoding: v16@0:8
// Implementation: 0x104d77464

// -[SCFeatureDirectorModeImpl _logAddSnapTapWithSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d774bc

// -[SCFeatureDirectorModeImpl _updatePreviewButtonFromConfigurationStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d77548

// -[SCFeatureDirectorModeImpl temporaryVideoDatastore]
// Type encoding: @16@0:8
// Implementation: 0x104d7761c

// -[SCFeatureDirectorModeImpl temporaryImageDataStore]
// Type encoding: @16@0:8
// Implementation: 0x104d7769c

// -[SCFeatureDirectorModeImpl setCameraBottomUIArbitrator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d7771c

// -[SCFeatureDirectorModeImpl setCameraUIVisible:animated:arbitrator:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x104d7780c

// -[SCFeatureDirectorModeImpl setMediaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d77874

// -[SCFeatureDirectorModeImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x104d778b4

// -[SCFeatureDirectorModeImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d778d4

// -[SCFeatureDirectorModeImpl isActivated]
// Type encoding: B16@0:8
// Implementation: 0x104d778e8

// -[SCFeatureDirectorModeImpl thumbnailsFeature]
// Type encoding: @16@0:8
// Implementation: 0x104d778f8

// -[SCFeatureDirectorModeImpl setThumbnailsFeature:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d77908

// -[SCFeatureDirectorModeImpl draftMediaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104d77948

// -[SCFeatureDirectorModeImpl draftDelegate]
// Type encoding: @16@0:8
// Implementation: 0x104d77958

// -[SCFeatureDirectorModeImpl directorModeSource]
// Type encoding: q16@0:8
// Implementation: 0x104d77978

// -[SCFeatureDirectorModeImpl setDirectorModeSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x104d77988

// -[SCFeatureDirectorModeImpl cameraBottomUIArbitrator]
// Type encoding: @16@0:8
// Implementation: 0x104d77998

// -[SCFeatureDirectorModeImpl isRecordingForTemplates]
// Type encoding: B16@0:8
// Implementation: 0x104d779b8

// -[SCFeatureDirectorModeImpl previewPagePreset]
// Type encoding: @16@0:8
// Implementation: 0x104d779c8

// -[SCFeatureDirectorModeImpl segmentTimeRangesObservable]
// Type encoding: @16@0:8
// Implementation: 0x104d779d8

// -[SCFeatureDirectorModeImpl setSnapsRecoveryData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d779e8

// -[SCFeatureDirectorModeImpl snapCreationTime]
// Type encoding: @16@0:8
// Implementation: 0x104d77a28

// -[SCFeatureDirectorModeImpl setSnapCreationTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d77a38

// -[SCFeatureDirectorModeImpl cameraSnapCreationLogger]
// Type encoding: @16@0:8
// Implementation: 0x104d77a78

// -[SCFeatureDirectorModeImpl setCameraSnapCreationLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d77a98

// -[SCFeatureDirectorModeImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d77aac

@end
