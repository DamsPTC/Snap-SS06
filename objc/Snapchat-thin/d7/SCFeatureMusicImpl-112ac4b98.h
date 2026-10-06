// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureMusicImpl
// Superclass: SCFeature
// Address: 0x112ac4b98

@interface SCFeatureMusicImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCFeatureMusicDelegate>",W,N,V_delegate
// Property: usageTracker; attributes: T@"<SCFeatureMusicUsageTracker>",W,N,V_usageTracker
// Property: musicPickerSelectionObservable; attributes: T@"SCObservable",R,N,V_musicPickerSelectionObservable
// Property: musicPlaybackEventObservable; attributes: T@"SCObservable",R,N,V_musicPlaybackEventObservable
// Property: musicEditorActiveObservable; attributes: T@"SCObservable",R,N,V_musicEditorActiveSubject
// Property: soundPillIsPresentedObservable; attributes: T@"SCObservable",R,N
// Property: hasActiveContextUnlockMusic; attributes: TB,N,V_hasActiveContextUnlockMusic
// Property: cameraTooltipArbitrator; attributes: T@"<SCFeatureCameraUIArbitrator>",W,N,V_cameraTooltipArbitrator

// -[SCFeatureMusicImpl initWithZoomingFeature:userActionLoggerFeature:speedModeFeature:recipientNameFeature:cameraSnapModelServices:lensProcessingServices:applicationLifecycleEvents:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:featureUpdateEventSubject:objcMusicServices:musicServices:lensPickerServices:cameraHardwareResource:cameraHardwareServicesAPI:cameraConfiguration:directorFeature:musicPickerScopeExposer:musicEditorScopeExposer:scopedCameraType:ctRecommendationFeature:addSoundPillScopeExposer:musicRecentsComposerServices:cameraCreationDelayLogger:circumstanceEngine:secretFeatureCheckingFactoryService:miniCameraActivationStateProvider:isBatchCaptureActivatedObservable:customVolumeServices:audioServices:snapEditorTweaks:systemConfiguration:lensCarouselManager:cameraModeActivationController:legacyCameraTooltipsService:userDataFeedService:musicBlizzardLogger:]
// Type encoding: @312@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160Q168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304
// Implementation: 0x10080b860

// -[SCFeatureMusicImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1060af3c8

// -[SCFeatureMusicImpl isCameraModeActivated]
// Type encoding: B16@0:8
// Implementation: 0x1060af414

// -[SCFeatureMusicImpl cameraModeType]
// Type encoding: i16@0:8
// Implementation: 0x1060af42c

// -[SCFeatureMusicImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x1060af434

// -[SCFeatureMusicImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10080d188

// -[SCFeatureMusicImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10080ca28

// -[SCFeatureMusicImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1060b0634

// -[SCFeatureMusicImpl configureWithTrackId:sourcePageType:startOffsetSeconds:shouldSkipEditor:pickerSessionId:shouldAutoPlay:]
// Type encoding: v56@0:8Q16q24@32B40@44B52
// Implementation: 0x1060b0798

// -[SCFeatureMusicImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x1060b07b8

// -[SCFeatureMusicImpl isMusicUIActive]
// Type encoding: B16@0:8
// Implementation: 0x1060b08c0

// -[SCFeatureMusicImpl isMusicPickerPresented]
// Type encoding: B16@0:8
// Implementation: 0x1060b08f0

// -[SCFeatureMusicImpl presentMusicPickerOrEditorWithCurrentSelectionAndSourcePageType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1060b0900

// -[SCFeatureMusicImpl presentMusicPickerWithSourcePageType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1060b0928

// -[SCFeatureMusicImpl onTimelineVideoTotalDurationChanged]
// Type encoding: v16@0:8
// Implementation: 0x1060b092c

// -[SCFeatureMusicImpl setMusicFeatureEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060b0930

// -[SCFeatureMusicImpl shouldDisableAudioCaptureWhileRecording]
// Type encoding: B16@0:8
// Implementation: 0x1060b0994

// -[SCFeatureMusicImpl shouldSyncVideoAndMusicPlayer]
// Type encoding: B16@0:8
// Implementation: 0x1060b09c4

// -[SCFeatureMusicImpl handleDeepLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b0b20

// -[SCFeatureMusicImpl setReplyConfiguration:cameraViewType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1008d49a4

// -[SCFeatureMusicImpl soundPillIsPresentedObservable]
// Type encoding: @16@0:8
// Implementation: 0x10080d19c

// -[SCFeatureMusicImpl enabled]
// Type encoding: B16@0:8
// Implementation: 0x1060b0cf4

// -[SCFeatureMusicImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008a6f20

// -[SCFeatureMusicImpl shortcutEnableIfNecessary:cameraShortcutId:scanSessionId:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1060b0d0c

// -[SCFeatureMusicImpl shortcutDisable]
// Type encoding: v16@0:8
// Implementation: 0x1060b0dac

// -[SCFeatureMusicImpl cameraShortcutFeatureType]
// Type encoding: Q16@0:8
// Implementation: 0x1060b0dd0

// -[SCFeatureMusicImpl cameraShortcutFeatureOption]
// Type encoding: q16@0:8
// Implementation: 0x1060b0dd8

// -[SCFeatureMusicImpl hasPendingContent]
// Type encoding: B16@0:8
// Implementation: 0x1060b0de0

// -[SCFeatureMusicImpl cameraShortcutFeatureName]
// Type encoding: @16@0:8
// Implementation: 0x1060b0de8

// -[SCFeatureMusicImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1060b0df4

// -[SCFeatureMusicImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1060b15a8

// -[SCFeatureMusicImpl _didBeginVideoRecording]
// Type encoding: v16@0:8
// Implementation: 0x1060b15dc

// -[SCFeatureMusicImpl _startAudioPlayer]
// Type encoding: v16@0:8
// Implementation: 0x1060b1638

// -[SCFeatureMusicImpl _setMusicSyncInfoOnCapturer]
// Type encoding: v16@0:8
// Implementation: 0x1060b16bc

// -[SCFeatureMusicImpl _willBeginVideoRecording]
// Type encoding: v16@0:8
// Implementation: 0x1060b1954

// -[SCFeatureMusicImpl _audioPlaybackRate]
// Type encoding: d16@0:8
// Implementation: 0x1060b1d3c

// -[SCFeatureMusicImpl _willFinishRecording:session:recordedVideoFuture:videoSize:placeholderImage:]
// Type encoding: v64@0:8@16@24@32{CGSize=dd}40@56
// Implementation: 0x1060b1d98

// -[SCFeatureMusicImpl _didFailRecording:session:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1060b1db8

// -[SCFeatureMusicImpl _didCancelRecording:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060b1e2c

// -[SCFeatureMusicImpl _willCapturePhoto:sampleMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060b1ea0

// -[SCFeatureMusicImpl _didCapturePhoto:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b1f64

// -[SCFeatureMusicImpl _didAppendVideoSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b1f84

// -[SCFeatureMusicImpl musicAudioPlayerDidSuspend:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060b2038

// -[SCFeatureMusicImpl addSoundPillScopeDidSelectRemoveTrack:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b2058

// -[SCFeatureMusicImpl addSoundPillScope:didSelectAppliedTrack:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060b21a8

// -[SCFeatureMusicImpl addSoundPillScopeDidSelectAddSound:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b21f4

// -[SCFeatureMusicImpl addSoundPillScope:didSelectRecommendedTrack:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060b21fc

// -[SCFeatureMusicImpl _pausePlaybackForPickerV2]
// Type encoding: B16@0:8
// Implementation: 0x1060b2258

// -[SCFeatureMusicImpl _handlePickerDismissalRestoringPlayback:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060b22e4

// -[SCFeatureMusicImpl musicPickerDidUpdateSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b238c

// -[SCFeatureMusicImpl musicPickerDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1060b2438

// -[SCFeatureMusicImpl musicEditorDidConfirmSelection:selectedMusicStickerData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060b2440

// -[SCFeatureMusicImpl musicEditorDidUpdateStartOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x1060b25d4

// -[SCFeatureMusicImpl musicEditorDidTapChangeMusicButton]
// Type encoding: v16@0:8
// Implementation: 0x1060b274c

// -[SCFeatureMusicImpl musicEditorCurrentTimeObservable]
// Type encoding: @16@0:8
// Implementation: 0x1060b2768

// -[SCFeatureMusicImpl musicEditorDidSendPlaybackEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b27c8

// -[SCFeatureMusicImpl shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x1060b27d8

// -[SCFeatureMusicImpl _handleMusicSelection:fromSourcePageType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1060b2984

// -[SCFeatureMusicImpl _isTouchAtPoint:withinSubview:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x1060b298c

// -[SCFeatureMusicImpl setCameraUIVisible:animated:arbitrator:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x1060b2a20

// -[SCFeatureMusicImpl _configureWithDeferredTrackIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060b2a30

// -[SCFeatureMusicImpl _setDeferredTrackInfoWithTrackID:startOffsetSeconds:sourcePageType:pickerSessionID:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x1060b2b08

// -[SCFeatureMusicImpl _internalConfigureWithTrackId:sourcePageType:startOffsetSeconds:shouldSkipEditor:pickerSessionId:shouldAutoPlay:ctContext:]
// Type encoding: v64@0:8Q16q24@32B40@44B52@56
// Implementation: 0x1060b2be8

// -[SCFeatureMusicImpl _updateCapturer]
// Type encoding: v16@0:8
// Implementation: 0x1060b32a8

// -[SCFeatureMusicImpl _updateDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060b33dc

// -[SCFeatureMusicImpl _viewControllerVisibilityDidChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060b346c

// -[SCFeatureMusicImpl _isFavoritedSoundsEducationEligibleForUpdateJob:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060b3750

// -[SCFeatureMusicImpl _startFavoritedSoundsEducationForTrackId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b380c

// -[SCFeatureMusicImpl _favoritedSoundsEducationAlbumArtEveryFavoriteEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1060b3980

// -[SCFeatureMusicImpl _shouldStartFavoritedSoundsEducationForSeenTooltip:]
// Type encoding: B20@0:8B16
// Implementation: 0x1060b399c

// -[SCFeatureMusicImpl _isFavoritedSoundsEducationPresentationEligibleToShow]
// Type encoding: B16@0:8
// Implementation: 0x1060b39ac

// -[SCFeatureMusicImpl _favoritedSoundsEducationTooltipDuration]
// Type encoding: d16@0:8
// Implementation: 0x1060b3a70

// -[SCFeatureMusicImpl _discardPendingFavoritedSoundsEducationTooltip]
// Type encoding: v16@0:8
// Implementation: 0x1060b3a8c

// -[SCFeatureMusicImpl _hideFavoritedSoundsEducationTooltip]
// Type encoding: v16@0:8
// Implementation: 0x1060b3ae4

// -[SCFeatureMusicImpl _clearFavoritedSoundsEducationTapRouting]
// Type encoding: v16@0:8
// Implementation: 0x1060b3b5c

// -[SCFeatureMusicImpl _invalidateFavoritedSoundsEducationTimers]
// Type encoding: v16@0:8
// Implementation: 0x1060b3ba8

// -[SCFeatureMusicImpl _cancelFavoritedSoundsEducationTooltipPresentation]
// Type encoding: v16@0:8
// Implementation: 0x1060b3c18

// -[SCFeatureMusicImpl _isFavoritedSoundsEducationTooltipRequestCurrent:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1060b3c70

// -[SCFeatureMusicImpl _showFavoritedSoundsEducationTooltipIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060b3c88

// -[SCFeatureMusicImpl _showFavoritedSoundsEducationAlbumArtImage:button:duration:]
// Type encoding: B40@0:8@16@24d32
// Implementation: 0x1060b3e10

// -[SCFeatureMusicImpl _showScheduledFavoritedSoundsEducationAlbumArtOnlyWithImage:button:duration:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1060b3e64

// -[SCFeatureMusicImpl _showScheduledFavoritedSoundsEducationTooltipWithAlbumArtImage:requestId:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060b3ebc

// -[SCFeatureMusicImpl _scheduleFavoritedSoundsEducationTapRoutingTimerWithDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x1060b4218

// -[SCFeatureMusicImpl _scheduleFavoritedSoundsEducationSeenTimerForRequestId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1060b4364

// -[SCFeatureMusicImpl _markFavoritedSoundsEducationTooltipSeenForRequestId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1060b44ac

// -[SCFeatureMusicImpl _logFavoritedSoundsEducationEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x1060b44f0

// -[SCFeatureMusicImpl _markFavoritedSoundsEducationTooltipSeen]
// Type encoding: v16@0:8
// Implementation: 0x1060b4534

// -[SCFeatureMusicImpl _canUseFavoritedSoundsAlbumArtForRequestId:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1060b45d0

// -[SCFeatureMusicImpl _setPendingFavoritedSoundsAlbumArtImage:requestId:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060b4624

// -[SCFeatureMusicImpl _loadFavoritedSoundsAlbumArtInfo:requestId:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060b4688

// -[SCFeatureMusicImpl _fetchAlbumArtForFavoritedTrackId:requestId:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1060b48b0

// -[SCFeatureMusicImpl _preparePlayerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060b4aa8

// -[SCFeatureMusicImpl _relinquishAudioSessionToken]
// Type encoding: v16@0:8
// Implementation: 0x1060b4ef0

// -[SCFeatureMusicImpl _updateSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b4f9c

// -[SCFeatureMusicImpl _deleteMusicPlaybackLayer]
// Type encoding: v16@0:8
// Implementation: 0x1060b5228

// -[SCFeatureMusicImpl _createGenericAssetMediaFromSelection:inLegacySnapDocEditor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060b52a8

// -[SCFeatureMusicImpl _replaceExistingMediaWithSelection:inLegacySnapDocEditor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060b564c

// -[SCFeatureMusicImpl _updateExistingStickerMetadataWithSelection:inLegacySnapDocEditor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060b59a0

// -[SCFeatureMusicImpl _updateLegacySnapDocWithMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b5c24

// -[SCFeatureMusicImpl _updateSnapEditorSnapDocWithMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b5f74

// -[SCFeatureMusicImpl _createToolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x1008a6fd4

// -[SCFeatureMusicImpl _favoritedSoundsEducationFavoritesDeepLinkInfo]
// Type encoding: @16@0:8
// Implementation: 0x1060b65c0

// -[SCFeatureMusicImpl _presentCameraToolbarPickerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060b65ec

// -[SCFeatureMusicImpl _presentPickerIfNeededWithSourcePageType:]
// Type encoding: B24@0:8q16
// Implementation: 0x1060b6674

// -[SCFeatureMusicImpl _presentPickerIfNeededWithSourcePageType:deepLinkInfo:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x1060b667c

// -[SCFeatureMusicImpl _dismissPickerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060b6de4

// -[SCFeatureMusicImpl _pickerDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1060b6f10

// -[SCFeatureMusicImpl _updateToolbarItemStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1008a7340

// -[SCFeatureMusicImpl _dismissEditorIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060b6fcc

// -[SCFeatureMusicImpl _presentEditorForCurrentSelectionIfNeededRespectingAutoPlay:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060b7034

// -[SCFeatureMusicImpl _presentEditorForCurrentSelectionIfNeededRespectingAutoPlay:shouldStartPlayback:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1060b7070

// -[SCFeatureMusicImpl _shouldSkipEditorForSoundUnlockWithSourcePageType:]
// Type encoding: B24@0:8q16
// Implementation: 0x1060b7160

// -[SCFeatureMusicImpl _updateEditorForSelection:sourcePageType:shouldAutoPlay:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x1060b71d8

// -[SCFeatureMusicImpl _didAttachEditorViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b7534

// -[SCFeatureMusicImpl _didDetachEditorViewController]
// Type encoding: v16@0:8
// Implementation: 0x1060b7710

// -[SCFeatureMusicImpl _updateEditorViewFrameAnimated:type:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1060b7880

// -[SCFeatureMusicImpl _didActivateLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b828c

// -[SCFeatureMusicImpl _didFinishCapturingWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060b87b0

// -[SCFeatureMusicImpl _updateAudioPlayerSeekTimeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060b8870

// -[SCFeatureMusicImpl _seekToTimeIfNeededWithTotalDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1060b89dc

// -[SCFeatureMusicImpl _updateVolumeButtonHandling]
// Type encoding: v16@0:8
// Implementation: 0x1060b8a68

// -[SCFeatureMusicImpl _isDirectorModeActive]
// Type encoding: B16@0:8
// Implementation: 0x1060b8ab4

// -[SCFeatureMusicImpl _isContinuousCaptureActive]
// Type encoding: B16@0:8
// Implementation: 0x1060b8afc

// -[SCFeatureMusicImpl _movieConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1060b8c20

// -[SCFeatureMusicImpl _isDirectorModeAddSnapActive]
// Type encoding: B16@0:8
// Implementation: 0x1060b8cf4

// -[SCFeatureMusicImpl _addSnapMovieConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1060b8d3c

// -[SCFeatureMusicImpl _createAndEmitPlaybackEventWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1060b8dc4

// -[SCFeatureMusicImpl _currentAutoApplyContextId]
// Type encoding: @16@0:8
// Implementation: 0x1060b8eb8

// -[SCFeatureMusicImpl _selectionShouldAutoPlay:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060b8fdc

// -[SCFeatureMusicImpl _selectionIsNonPickerAutoPlay:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060b8fec

// -[SCFeatureMusicImpl _selectionIsRecommendation:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060b9140

// -[SCFeatureMusicImpl _resetAudioPlayerSeek]
// Type encoding: v16@0:8
// Implementation: 0x1060b9294

// -[SCFeatureMusicImpl _restartAutoplayPlaybackIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060b92f0

// -[SCFeatureMusicImpl _resumeAutoplayPlaybackIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060b92f8

// -[SCFeatureMusicImpl _startAutoplayPlaybackIfNeededResettingSeek:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060b9300

// -[SCFeatureMusicImpl _pauseMusicForBackground]
// Type encoding: v16@0:8
// Implementation: 0x1060b93cc

// -[SCFeatureMusicImpl _recoverMusicUIAfterForegroundIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1060b9408

// -[SCFeatureMusicImpl _updateSoundPillForPickerV2NominatedSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b94ac

// -[SCFeatureMusicImpl _clearSoundPillPickerV2Nomination]
// Type encoding: v16@0:8
// Implementation: 0x1060b94bc

// -[SCFeatureMusicImpl _createSoundPillManager]
// Type encoding: v16@0:8
// Implementation: 0x1060b94cc

// -[SCFeatureMusicImpl _currentCTRecommendationObservable]
// Type encoding: @16@0:8
// Implementation: 0x1060b965c

// -[SCFeatureMusicImpl _setupMusicRecommendationObservation]
// Type encoding: v16@0:8
// Implementation: 0x1060b9a2c

// -[SCFeatureMusicImpl _removeRecommendedSound]
// Type encoding: v16@0:8
// Implementation: 0x1060b9f00

// -[SCFeatureMusicImpl _handleAutoApplyForRecommendation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060b9fd4

// -[SCFeatureMusicImpl _doesRecommendationAutoApplyFollowVolumeRule]
// Type encoding: B16@0:8
// Implementation: 0x1060ba308

// -[SCFeatureMusicImpl _featureDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1060ba38c

// -[SCFeatureMusicImpl _logErrorWithMessage:assertFail:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1060ba3a0

// -[SCFeatureMusicImpl modeEnabledStateChangedObservable]
// Type encoding: @16@0:8
// Implementation: 0x1060ba3a4

// -[SCFeatureMusicImpl disableMode]
// Type encoding: v16@0:8
// Implementation: 0x1060ba3ac

// -[SCFeatureMusicImpl incompatibleModes]
// Type encoding: @16@0:8
// Implementation: 0x1060ba3d0

// -[SCFeatureMusicImpl modeType]
// Type encoding: i16@0:8
// Implementation: 0x1060ba3dc

// -[SCFeatureMusicImpl onTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060ba3e4

// -[SCFeatureMusicImpl isHidden]
// Type encoding: B16@0:8
// Implementation: 0x1060ba420

// -[SCFeatureMusicImpl secondaryOnTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060ba428

// -[SCFeatureMusicImpl state]
// Type encoding: i16@0:8
// Implementation: 0x1060ba42c

// -[SCFeatureMusicImpl secondaryButtonState]
// Type encoding: i16@0:8
// Implementation: 0x1060ba444

// -[SCFeatureMusicImpl toolbarButtonPositionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060ba44c

// -[SCFeatureMusicImpl _cameraShouldOpenSnapEditorWithMediaType:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1060ba450

// -[SCFeatureMusicImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1060ba51c

// -[SCFeatureMusicImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10080d174

// -[SCFeatureMusicImpl usageTracker]
// Type encoding: @16@0:8
// Implementation: 0x1060ba53c

// -[SCFeatureMusicImpl setUsageTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008eb1ac

// -[SCFeatureMusicImpl cameraTooltipArbitrator]
// Type encoding: @16@0:8
// Implementation: 0x1060ba55c

// -[SCFeatureMusicImpl setCameraTooltipArbitrator:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c66b04

// -[SCFeatureMusicImpl musicPickerSelectionObservable]
// Type encoding: @16@0:8
// Implementation: 0x100c62254

// -[SCFeatureMusicImpl musicEditorActiveObservable]
// Type encoding: @16@0:8
// Implementation: 0x1060ba57c

// -[SCFeatureMusicImpl musicPlaybackEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1060ba58c

// -[SCFeatureMusicImpl hasActiveContextUnlockMusic]
// Type encoding: B16@0:8
// Implementation: 0x1060ba59c

// -[SCFeatureMusicImpl setHasActiveContextUnlockMusic:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060ba5ac

// -[SCFeatureMusicImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060ba5bc

@end
