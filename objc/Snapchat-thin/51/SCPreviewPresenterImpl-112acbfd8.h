// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewPresenterImpl
// Superclass: NSObject
// Address: 0x112acbfd8

@interface SCPreviewPresenterImpl

// Property: recordingMetadataProvider; attributes: T@"SCRecordingMetadataProvider",&,N,V_recordingMetadataProvider
// Property: lensLogger; attributes: T@"SCLazy",&,N,V_lensLogger
// Property: coreCameraLogger; attributes: T@"SCLazy",&,N,V_coreCameraLogger
// Property: previewLensesInfoProvider; attributes: T@"<SCLensesPreviewLensesFeaturesInfoProviding>",&,N,V_previewLensesInfoProvider
// Property: previewConfiguration; attributes: T@"SCPreviewConfiguration",R,N,V_previewConfiguration
// Property: loggingParams; attributes: T@"SCSnapEditorCommonLoggingParams",&,N,V_loggingParams

// -[SCPreviewPresenterImpl initWithDeviceMotionCaptureFeatureProvider:cameraSnapModelServices:lensLogger:coreCameraLogger:sendflowScopeExposer:snapchattersDataFetcher:deviceMotionManager:cameraHardwareResource:deviceCapacityAnalyzer:previewFilterDataProviderFactory:circumstanceEngine:complianceEngine:appStartExperimentReader:cameraConfiguration:appLifecycleEvent:previewABServices:snapEditorTweakServices:snapEditorScopeExposer:snapEditorScopeServices:lensPreviewConfiguringServices:deckServices:snapSource:checkInOptionFetcher:aiLensDataProvider:miniCameraContainerProvider:locationProvider:userLocationPermissionsManager:temporaryFileWriter:cameraViewType:scopedCameraType:friendsFeedLoggingServices:conversationIdServices:lensPlusTierService:cameraModeActivationController:lensVenueInfoProvider:previewLensesInfoProvider:ucoServices:sendFlowScopeBuilderServices:bitmojiLensContextServices:]
// Type encoding: @328@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176q184@192@200@208@216@224@232q240Q248@256@264@272@280@288@296@304@312@320
// Implementation: 0x1008d5a48

// -[SCPreviewPresenterImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10610d604

// -[SCPreviewPresenterImpl configureWithImageFuture:imageCaptureConfiguration:managedCapturerState:captionManager:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:externalContent:]
// Type encoding: v136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x10610d664

// -[SCPreviewPresenterImpl configureWithImageFuture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10610d8a4

// -[SCPreviewPresenterImpl configureWithVideoFuture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10610d988

// -[SCPreviewPresenterImpl configureWithVideoFuture:videoCaptureConfiguration:managedCapturerState:captionManager:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:externalContent:]
// Type encoding: v136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x10610da18

// -[SCPreviewPresenterImpl configureWithBatchCaptureConfiguration:managedCapturerState:captionManager:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:]
// Type encoding: v120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x10610df1c

// -[SCPreviewPresenterImpl prepareBatchCaptureLoggingWithConfiguration:managedCapturerState:captionManager:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:]
// Type encoding: v120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x10610e2d4

// -[SCPreviewPresenterImpl configureWithDirectorModeVideoConfiguration:managedCapturerState:captionManager:directorModeFeature:snapReplyFeature:remixFeature:lensPreviewActionFeature:directorModeThumbnailsFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:externalContent:]
// Type encoding: v144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x10610e400

// -[SCPreviewPresenterImpl createPreviewViewController:sendflowDelegate:cameraPreviewDelegate:deeplinkMetadata:isWarmup:sendFlowSource:]
// Type encoding: v60@0:8@16@24@32@40B48Q52
// Implementation: 0x10610ec30

// -[SCPreviewPresenterImpl presentPreviewViewController:transitionController:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10610ecf0

// -[SCPreviewPresenterImpl _notifyCameraPreviewDelegateSnapEditorPreviewExposedIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10610f7a8

// -[SCPreviewPresenterImpl _shouldNotifyCameraPreviewDelegateForSnapEditorPreview]
// Type encoding: B16@0:8
// Implementation: 0x10610f9d4

// -[SCPreviewPresenterImpl cameraFlipsWhileRecording]
// Type encoding: q16@0:8
// Implementation: 0x10610fa70

// -[SCPreviewPresenterImpl handsFree]
// Type encoding: B16@0:8
// Implementation: 0x10610fab0

// -[SCPreviewPresenterImpl startRecordingTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x10610fab8

// -[SCPreviewPresenterImpl getSnapPageSource]
// Type encoding: q16@0:8
// Implementation: 0x100c803d8

// -[SCPreviewPresenterImpl _shouldDisablePostCaptureScan]
// Type encoding: B16@0:8
// Implementation: 0x1008e37f8

// -[SCPreviewPresenterImpl _isLensGeoVenueEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10610fac0

// -[SCPreviewPresenterImpl setReplyConfiguration:cameraViewType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1008e3c08

// -[SCPreviewPresenterImpl _cameraPresenterSource]
// Type encoding: q16@0:8
// Implementation: 0x1008e4224

// -[SCPreviewPresenterImpl setMultiSnapConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10610fb30

// -[SCPreviewPresenterImpl setMultiSnapConfigurationFuture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10610fbb4

// -[SCPreviewPresenterImpl setHandsFree:activationType:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x10610fbbc

// -[SCPreviewPresenterImpl setLowLightBoostEnabledBeforeCapture:]
// Type encoding: v20@0:8B16
// Implementation: 0x10610fc88

// -[SCPreviewPresenterImpl setIsContinuousCapture:]
// Type encoding: v20@0:8B16
// Implementation: 0x10610fd14

// -[SCPreviewPresenterImpl setTimerModeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10610fda0

// -[SCPreviewPresenterImpl setBatchCaptureModeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10610fdac

// -[SCPreviewPresenterImpl setAddSnapConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10610fe14

// -[SCPreviewPresenterImpl setLevelerModeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10610fe1c

// -[SCPreviewPresenterImpl setTimelineModeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10610feac

// -[SCPreviewPresenterImpl setDirectorModeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10610fef0

// -[SCPreviewPresenterImpl setMediaSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10610ff34

// -[SCPreviewPresenterImpl setMediaAspectRatio:]
// Type encoding: v24@0:8d16
// Implementation: 0x10610ff3c

// -[SCPreviewPresenterImpl setCameraFlipsWhileRecording:]
// Type encoding: v24@0:8q16
// Implementation: 0x100c2aa20

// -[SCPreviewPresenterImpl setSnapPageSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10610ff44

// -[SCPreviewPresenterImpl setCaptureSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10610ff90

// -[SCPreviewPresenterImpl setSnapSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10611003c

// -[SCPreviewPresenterImpl setIsShutterSoundEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611011c

// -[SCPreviewPresenterImpl setFingerDownCaptureEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061101a8

// -[SCPreviewPresenterImpl setCaptureSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061101f8

// -[SCPreviewPresenterImpl setFlashMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x10611027c

// -[SCPreviewPresenterImpl setActiveCameraModes:]
// Type encoding: v24@0:8@16
// Implementation: 0x106110300

// -[SCPreviewPresenterImpl setDetailedCameraModes:]
// Type encoding: v24@0:8@16
// Implementation: 0x106110350

// -[SCPreviewPresenterImpl setFrameHealthChecker:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061103a0

// -[SCPreviewPresenterImpl setPlaceholderImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061103a8

// -[SCPreviewPresenterImpl setStartRecordingTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061103f8

// -[SCPreviewPresenterImpl setDeepLinkMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x106110400

// -[SCPreviewPresenterImpl applySnapRecoveryData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061104bc

// -[SCPreviewPresenterImpl setAudioPresentInVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x106110834

// -[SCPreviewPresenterImpl _setSnapReplyStickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106110888

// -[SCPreviewPresenterImpl setExposureBias:]
// Type encoding: v24@0:8@16
// Implementation: 0x106110bd8

// -[SCPreviewPresenterImpl setRingFlashColor:]
// Type encoding: v24@0:8q16
// Implementation: 0x106110c58

// -[SCPreviewPresenterImpl setRingFlashSize:]
// Type encoding: v24@0:8d16
// Implementation: 0x106110ce4

// -[SCPreviewPresenterImpl setRingFlashAutoEnableTooltipShown:]
// Type encoding: v20@0:8B16
// Implementation: 0x106110d70

// -[SCPreviewPresenterImpl setRingFlashAutoEnable:]
// Type encoding: v20@0:8B16
// Implementation: 0x106110dfc

// -[SCPreviewPresenterImpl setCameraFlipActionDuringCapture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106110e88

// -[SCPreviewPresenterImpl setSpeedModeRecordingSpeed:]
// Type encoding: v24@0:8d16
// Implementation: 0x106110f08

// -[SCPreviewPresenterImpl setCameraShortcutId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106110fa4

// -[SCPreviewPresenterImpl setRingStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x106110ff4

// -[SCPreviewPresenterImpl setLensPosition:]
// Type encoding: v20@0:8f16
// Implementation: 0x106111078

// -[SCPreviewPresenterImpl setBackCameraDeviceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106111104

// -[SCPreviewPresenterImpl setZoomFactorsRange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106111188

// -[SCPreviewPresenterImpl setPreCaptureZoomLevel:]
// Type encoding: v24@0:8d16
// Implementation: 0x106111208

// -[SCPreviewPresenterImpl setZoomLevelGroup:]
// Type encoding: v24@0:8q16
// Implementation: 0x106111294

// -[SCPreviewPresenterImpl setCaptureZoomSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x106111318

// -[SCPreviewPresenterImpl setLockScreenCaptureDeepLinkTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x10611139c

// -[SCPreviewPresenterImpl setAspectRatio4By3ModeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061113ec

// -[SCPreviewPresenterImpl setShouldUseSinglePlayerForPlayback:]
// Type encoding: v20@0:8B16
// Implementation: 0x10611144c

// -[SCPreviewPresenterImpl snapEditorDidDetermineSendRecipientsCount:groupCount:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x106111454

// -[SCPreviewPresenterImpl snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:]
// Type encoding: v52@0:8B16B20@24@32@40B48
// Implementation: 0x10611145c

// -[SCPreviewPresenterImpl _buildSnapEditorScopeBuilderWithSnapDocEditor:cameraViewController:transitionController:preselectedPluginType:quickCutResultConfig:includeQuickCutPlugin:]
// Type encoding: @60@0:8@16@24@32@40@48B56
// Implementation: 0x1061119dc

// -[SCPreviewPresenterImpl _presentSnapEditorWithSnapDocEditor:quickCutConfig:cameraViewController:transitionController:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106112ea0

// -[SCPreviewPresenterImpl setActiveMicrophoneMode:preferredMicrophoneMode:lastPreferredMicrophoneMode:]
// Type encoding: v40@0:8Q16Q24Q32
// Implementation: 0x1061131fc

// -[SCPreviewPresenterImpl _lensSendStepConfigForLensSessionId:swipeId:lensId:snapDocEditor:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106113284

// -[SCPreviewPresenterImpl _isReplyCamera]
// Type encoding: B16@0:8
// Implementation: 0x1061133a0

// -[SCPreviewPresenterImpl _isMusicCameraFromSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x1061133dc

// -[SCPreviewPresenterImpl _isContinuousCaptureFromSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x106113410

// -[SCPreviewPresenterImpl _configureSnapEditorActionBarForPluginConfigs:pluginBlocklist:sendConfig:preselectedDestinations:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106113468

// -[SCPreviewPresenterImpl _setCameraCommonParametersWithCameraMode:active:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x10611397c

// -[SCPreviewPresenterImpl _pvc_mediaAreaInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x106113a38

// -[SCPreviewPresenterImpl _normalizeLegacyMotionFiltersForSnapEditorWithSnapDocEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106113a88

// -[SCPreviewPresenterImpl _normalizeLegacyMotionFiltersForSnapEditorWithSnapDocEditor:segment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106113b48

// -[SCPreviewPresenterImpl _scaleSnapEditorTrackSegmentOutputDurationWithSnapDocEditor:segment:timeScale:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x106114074

// -[SCPreviewPresenterImpl _applySnapEditorPlaybackRate:snapDocEditor:segment:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x1061141f4

// -[SCPreviewPresenterImpl willOpenSnapEditor]
// Type encoding: B16@0:8
// Implementation: 0x1061149cc

// -[SCPreviewPresenterImpl mayOpenSnapEditor]
// Type encoding: B16@0:8
// Implementation: 0x106114ac0

// -[SCPreviewPresenterImpl shouldRemoveSoftTrim]
// Type encoding: B16@0:8
// Implementation: 0x106114bb4

// -[SCPreviewPresenterImpl shouldPresentSnapEditorOnPreviewExit]
// Type encoding: B16@0:8
// Implementation: 0x106114c2c

// -[SCPreviewPresenterImpl _presentPreviewViewController:cameraViewController:transitionController:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106114c34

// -[SCPreviewPresenterImpl _configureCommonWithManagedCapturerState:captionManager:timelineConfiguration:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:setLensConfigurationBasedOnCurrentLens:nightModeServices:externalContent:imageCaptureConfiguration:videoCaptureConfiguration:]
// Type encoding: v148@0:8@16@24@32@40@48@56@64@72@80@88@96@104B112@116@124@132@140
// Implementation: 0x10611527c

// -[SCPreviewPresenterImpl _updateGenAIMediaOrigin:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061163e4

// -[SCPreviewPresenterImpl _lensPreviewConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x106116690

// -[SCPreviewPresenterImpl _snapSource:]
// Type encoding: q24@0:8q16
// Implementation: 0x1008e4060

// -[SCPreviewPresenterImpl _previewFilterDataProviderForMediaTypeContext:]
// Type encoding: @24@0:8q16
// Implementation: 0x106116b38

// -[SCPreviewPresenterImpl _isMusicApplied]
// Type encoding: B16@0:8
// Implementation: 0x106116b40

// -[SCPreviewPresenterImpl _previewFilterDataProviderForMediaTypeContext:initialInfoStickerData:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x106116ba4

// -[SCPreviewPresenterImpl setCaptureDiscardRelatedData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106116de8

// -[SCPreviewPresenterImpl logDirectSnapCreateForBatchCaptureWithBatchCaptureSessionID:mediaType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106116e40

// -[SCPreviewPresenterImpl logDirectSnapCreateForContinuousCaptureWithCaptureSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x106116f90

// -[SCPreviewPresenterImpl setMusicPickerSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061170b8

// -[SCPreviewPresenterImpl setMusicSourcePageType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061170c0

// -[SCPreviewPresenterImpl setMusicRecommendation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061171bc

// -[SCPreviewPresenterImpl setMusicSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061171c4

// -[SCPreviewPresenterImpl prepareTimelineLoggingWithConfiguration:managedCapturerState:captionManager:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:]
// Type encoding: v120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x1061171cc

// -[SCPreviewPresenterImpl logDirectSnapCreateForTimelineOrDMWithSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061172b8

// -[SCPreviewPresenterImpl logDirectSnapCreateForSingleCaptureIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061175a8

// -[SCPreviewPresenterImpl _isBatchCapture]
// Type encoding: B16@0:8
// Implementation: 0x1061177cc

// -[SCPreviewPresenterImpl _baseMediaMusicSelectionForLensMusicTrackMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x106117848

// -[SCPreviewPresenterImpl _baseMediaMusicSelectionForImportedTimelineSegments:]
// Type encoding: @24@0:8@16
// Implementation: 0x10611787c

// -[SCPreviewPresenterImpl _preloadSendFlowScopeFromPreviewDelegte:sendflowDelegate:cameraPreviewDelegate:deeplinkMetadata:sendFlowSource:]
// Type encoding: v56@0:8@16@24@32@40Q48
// Implementation: 0x1061179b8

// -[SCPreviewPresenterImpl _resetSendFlowIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106117e90

// -[SCPreviewPresenterImpl _configureLensPreviewConfigFieldsWithSessionId:swipeId:lensId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106117f8c

// -[SCPreviewPresenterImpl _createBaseLoggingParamsBuilder]
// Type encoding: @16@0:8
// Implementation: 0x106118154

// -[SCPreviewPresenterImpl _currentCellViewPosition:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106118554

// -[SCPreviewPresenterImpl _lensPlusParamsUpdateCommonLoggingParamsBuilder:isLensUsed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1061188a8

// -[SCPreviewPresenterImpl _snapEditorEditMode]
// Type encoding: @16@0:8
// Implementation: 0x106118bc8

// -[SCPreviewPresenterImpl _spotlightTileBytesFromStoryIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x106118d20

// -[SCPreviewPresenterImpl _sendflowApiStoryIdsToUnifiedProfileStoryTypes:]
// Type encoding: @24@0:8@16
// Implementation: 0x106118eb0

// -[SCPreviewPresenterImpl previewConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1008e3bd8

// -[SCPreviewPresenterImpl loggingParams]
// Type encoding: @16@0:8
// Implementation: 0x1008e3be8

// -[SCPreviewPresenterImpl setLoggingParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x106119014

// -[SCPreviewPresenterImpl recordingMetadataProvider]
// Type encoding: @16@0:8
// Implementation: 0x106119044

// -[SCPreviewPresenterImpl setRecordingMetadataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10611904c

// -[SCPreviewPresenterImpl lensLogger]
// Type encoding: @16@0:8
// Implementation: 0x10611907c

// -[SCPreviewPresenterImpl setLensLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106119084

// -[SCPreviewPresenterImpl coreCameraLogger]
// Type encoding: @16@0:8
// Implementation: 0x1061190b4

// -[SCPreviewPresenterImpl setCoreCameraLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061190bc

// -[SCPreviewPresenterImpl previewLensesInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x1061190ec

// -[SCPreviewPresenterImpl setPreviewLensesInfoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061190f4

// -[SCPreviewPresenterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106119124

@end
