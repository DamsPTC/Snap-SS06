// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaVideoLayerViewController
// Superclass: SCOperaLayerViewController
// Address: 0x112b72b58

@interface SCOperaVideoLayerViewController

// Property: showSeekableRange; attributes: TB,R,N
// Property: showBufferedRange; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: volumeController; attributes: T@"SCAVPlayerVolumeController",&,N,V_volumeController
// Property: delegateViewForGestures; attributes: T@"UIView",W,N,V_delegateViewForGestures
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: loadingIndicatorDelegate; attributes: T@"<SCOperaLoadingIndicatorDelegate>",W,N,V_loadingIndicatorDelegate

// -[SCOperaVideoLayerViewController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x107b50bfc

// -[SCOperaVideoLayerViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107b50d34

// -[SCOperaVideoLayerViewController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b3d3e4

// -[SCOperaVideoLayerViewController showSeekableRange]
// Type encoding: B16@0:8
// Implementation: 0x107b3d27c

// -[SCOperaVideoLayerViewController showBufferedRange]
// Type encoding: B16@0:8
// Implementation: 0x107b3d330

// -[SCOperaVideoLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:sharedResourceManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107b3d5d4

// -[SCOperaVideoLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:kvoController:mediaDisplayStopwatch:eventAnnouncer:sharedResourceManager:notificationCenter:bandwidthEstimator:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x107b3d704

// -[SCOperaVideoLayerViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107b3dea4

// -[SCOperaVideoLayerViewController viewWillBeginTransitionIn:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b3df10

// -[SCOperaVideoLayerViewController viewDidCancelTransitionIn]
// Type encoding: v16@0:8
// Implementation: 0x107b3e030

// -[SCOperaVideoLayerViewController viewWillBeginTransitionOut]
// Type encoding: v16@0:8
// Implementation: 0x107b3e050

// -[SCOperaVideoLayerViewController viewDidCancelTransitionOut:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b3e12c

// -[SCOperaVideoLayerViewController viewWillFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x107b3e17c

// -[SCOperaVideoLayerViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x107b3e280

// -[SCOperaVideoLayerViewController setLayer:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b3e444

// -[SCOperaVideoLayerViewController setupPlaybackAnalyticsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b3e4d8

// -[SCOperaVideoLayerViewController _createPlaybackTimelineLogger]
// Type encoding: v16@0:8
// Implementation: 0x107b3e554

// -[SCOperaVideoLayerViewController _createStallTrackerIfNecessary:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b3e6d0

// -[SCOperaVideoLayerViewController _updatePlayerView:debugReason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b3e830

// -[SCOperaVideoLayerViewController _getSubtitlesObserver]
// Type encoding: @16@0:8
// Implementation: 0x107b3ea4c

// -[SCOperaVideoLayerViewController _loadPlayerViewIfNecessaryWithDebugReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b3eb74

// -[SCOperaVideoLayerViewController _performPreliminarySeekToMediaStartTimeIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107b3f454

// -[SCOperaVideoLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107b3f6b0

// -[SCOperaVideoLayerViewController _observePlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b3fae0

// -[SCOperaVideoLayerViewController _updatePlayerStatusBasedOnPlayerItemStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b3fb90

// -[SCOperaVideoLayerViewController _restartPlayer:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b3fd9c

// -[SCOperaVideoLayerViewController _startPlayingFromMediaStartTimeForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b3fe34

// -[SCOperaVideoLayerViewController _operaDidRequestToResume:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b400b4

// -[SCOperaVideoLayerViewController _startPlayingItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b40178

// -[SCOperaVideoLayerViewController _videoStartTime]
// Type encoding: d16@0:8
// Implementation: 0x107b403c8

// -[SCOperaVideoLayerViewController _sendVideoStartsPlayingIfNecessary:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107b40454

// -[SCOperaVideoLayerViewController _sendVideoStartEventsIfNecessary:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107b405e0

// -[SCOperaVideoLayerViewController _sendMediaStartsToDisplayIfNecessary:debugReason:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x107b4066c

// -[SCOperaVideoLayerViewController _videoStartsPlayingParams]
// Type encoding: @16@0:8
// Implementation: 0x107b408cc

// -[SCOperaVideoLayerViewController _videoStartsPlayingParamsV2]
// Type encoding: @16@0:8
// Implementation: 0x107b40ecc

// -[SCOperaVideoLayerViewController _shouldReportMediaStartsToDisplayEvent:]
// Type encoding: B20@0:8B16
// Implementation: 0x107b410cc

// -[SCOperaVideoLayerViewController _setupVideoProgressTapGestureIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107b41100

// -[SCOperaVideoLayerViewController _setupControlsIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107b411e4

// -[SCOperaVideoLayerViewController _updatePlaybackDurationSec]
// Type encoding: v16@0:8
// Implementation: 0x107b41358

// -[SCOperaVideoLayerViewController _informVideoControlsWithUpdatedDurationSecs:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b41484

// -[SCOperaVideoLayerViewController _shouldShowVideoControls]
// Type encoding: B16@0:8
// Implementation: 0x107b41504

// -[SCOperaVideoLayerViewController _hasLongformVideoControls]
// Type encoding: B16@0:8
// Implementation: 0x107b415a8

// -[SCOperaVideoLayerViewController _updateVideoControlsViewPaddingIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107b415e0

// -[SCOperaVideoLayerViewController viewWillFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x107b4172c

// -[SCOperaVideoLayerViewController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x107b41914

// -[SCOperaVideoLayerViewController _stopPlayback]
// Type encoding: v16@0:8
// Implementation: 0x107b419e4

// -[SCOperaVideoLayerViewController _tearDownPlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b41aac

// -[SCOperaVideoLayerViewController _mediaIsBeingPreparedForDisplayImpl]
// Type encoding: B16@0:8
// Implementation: 0x107b41d5c

// -[SCOperaVideoLayerViewController _playerItemReachedEnd:]
// Type encoding: B24@0:8@16
// Implementation: 0x107b41e94

// -[SCOperaVideoLayerViewController setupProgressStateMachine:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b41f20

// -[SCOperaVideoLayerViewController pause]
// Type encoding: v16@0:8
// Implementation: 0x107b41f58

// -[SCOperaVideoLayerViewController internalPauseWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107b41f60

// -[SCOperaVideoLayerViewController setPausedForAttachment:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b420ec

// -[SCOperaVideoLayerViewController _setPausedForAttachment:showBlurView:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x107b42174

// -[SCOperaVideoLayerViewController overridePauseStateToPause]
// Type encoding: v16@0:8
// Implementation: 0x107b42540

// -[SCOperaVideoLayerViewController overridePauseStateToResume]
// Type encoding: v16@0:8
// Implementation: 0x107b42554

// -[SCOperaVideoLayerViewController resume]
// Type encoding: v16@0:8
// Implementation: 0x107b42564

// -[SCOperaVideoLayerViewController _resumeInternal:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b42570

// -[SCOperaVideoLayerViewController overridePlaybackToLastPositionForResume]
// Type encoding: v16@0:8
// Implementation: 0x107b42748

// -[SCOperaVideoLayerViewController _initializePlayerViewIfNeededWithDebugReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b428f8

// -[SCOperaVideoLayerViewController _play:]
// Type encoding: B24@0:8@16
// Implementation: 0x107b42988

// -[SCOperaVideoLayerViewController _handleAssetMismatchIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b42af0

// -[SCOperaVideoLayerViewController _didRequestToPlay]
// Type encoding: v16@0:8
// Implementation: 0x107b4304c

// -[SCOperaVideoLayerViewController mediaIsBeingPreparedForDisplay]
// Type encoding: B16@0:8
// Implementation: 0x107b4316c

// -[SCOperaVideoLayerViewController teardown]
// Type encoding: v16@0:8
// Implementation: 0x107b43258

// -[SCOperaVideoLayerViewController setVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b434c4

// -[SCOperaVideoLayerViewController setMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b435f0

// -[SCOperaVideoLayerViewController fadeVolumeIn:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b436fc

// -[SCOperaVideoLayerViewController fadeVolumeOut:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b43830

// -[SCOperaVideoLayerViewController supportsShareableMediaSnapshot]
// Type encoding: B16@0:8
// Implementation: 0x107b43960

// -[SCOperaVideoLayerViewController shareableMediaSnapshotWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b43968

// -[SCOperaVideoLayerViewController pageabilityForRelativePosition:gestureRecognizer:]
// Type encoding: q32@0:8Q16@24
// Implementation: 0x107b43b48

// -[SCOperaVideoLayerViewController didTryPagingWhenPagingDisabled:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107b43d00

// -[SCOperaVideoLayerViewController didReceiveUpdateProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b43ea4

// -[SCOperaVideoLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x107b448e4

// -[SCOperaVideoLayerViewController updateViewWithVerticalPageOffset:relativePosition:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x107b44a04

// -[SCOperaVideoLayerViewController didScrollHorizontallyWithOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b44a88

// -[SCOperaVideoLayerViewController _updateResumeTime]
// Type encoding: v16@0:8
// Implementation: 0x107b44c78

// -[SCOperaVideoLayerViewController _playbackMode]
// Type encoding: q16@0:8
// Implementation: 0x107b44da4

// -[SCOperaVideoLayerViewController currentViewParameters]
// Type encoding: @16@0:8
// Implementation: 0x107b44e3c

// -[SCOperaVideoLayerViewController shareableMedia]
// Type encoding: @16@0:8
// Implementation: 0x107b4543c

// -[SCOperaVideoLayerViewController layerProgressTrackable]
// Type encoding: @16@0:8
// Implementation: 0x107b45ab0

// -[SCOperaVideoLayerViewController videoIsPlaying]
// Type encoding: B16@0:8
// Implementation: 0x107b45ab4

// -[SCOperaVideoLayerViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x107b45af0

// -[SCOperaVideoLayerViewController viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107b45dd4

// -[SCOperaVideoLayerViewController _applyLayerCornerRadiusIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107b45fa8

// -[SCOperaVideoLayerViewController _updateCornerOverlayIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107b46100

// -[SCOperaVideoLayerViewController _addCornerOverlayViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107b461fc

// -[SCOperaVideoLayerViewController _updateCornerOverlayViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107b4627c

// -[SCOperaVideoLayerViewController updateViewWithPreviousLayer:currentLayer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b46558

// -[SCOperaVideoLayerViewController _isVideoLandscape]
// Type encoding: B16@0:8
// Implementation: 0x107b46ac0

// -[SCOperaVideoLayerViewController _contentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107b46af8

// -[SCOperaVideoLayerViewController _attachTimeObserver]
// Type encoding: v16@0:8
// Implementation: 0x107b46ea0

// -[SCOperaVideoLayerViewController _removeTimeObserver]
// Type encoding: v16@0:8
// Implementation: 0x107b471e0

// -[SCOperaVideoLayerViewController _removeMediaServicesObservers]
// Type encoding: v16@0:8
// Implementation: 0x107b472b0

// -[SCOperaVideoLayerViewController _didChangePlaybackTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x107b473cc

// -[SCOperaVideoLayerViewController _firePlaybackEventsIfNecessaryForStartTime:endTime:checkLastEventOnForward:]
// Type encoding: v68@0:8{?=qiIq}16{?=qiIq}40B64
// Implementation: 0x107b47a20

// -[SCOperaVideoLayerViewController _firePlaybackEventIfNecessaryForStartTime:endTime:eventsGroup:checkLastEventOnForward:]
// Type encoding: B76@0:8{?=qiIq}16{?=qiIq}40@64B72
// Implementation: 0x107b47b8c

// -[SCOperaVideoLayerViewController _firePlaybackEventForParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b47d90

// -[SCOperaVideoLayerViewController _seekPointIndexForTime:]
// Type encoding: q40@0:8{?=qiIq}16
// Implementation: 0x107b47df8

// -[SCOperaVideoLayerViewController _currentSeekPointIndexOnSeek:endSeekPointIndex:isForwardSeek:]
// Type encoding: q36@0:8Q16Q24B32
// Implementation: 0x107b47f20

// -[SCOperaVideoLayerViewController _eventParamsForPlaybackEvent:eventTag:startTime:endTime:]
// Type encoding: @80@0:8@16@24{?=qiIq}32{?=qiIq}56
// Implementation: 0x107b47f68

// -[SCOperaVideoLayerViewController mediaViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x107b485fc

// -[SCOperaVideoLayerViewController mediaViewContainerView]
// Type encoding: @16@0:8
// Implementation: 0x107b48660

// -[SCOperaVideoLayerViewController _originalHeightToWidthAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x107b48690

// -[SCOperaVideoLayerViewController mediaHeightToWidthAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x107b48720

// -[SCOperaVideoLayerViewController isOverlay]
// Type encoding: B16@0:8
// Implementation: 0x107b48760

// -[SCOperaVideoLayerViewController playerItemDidReachEnd]
// Type encoding: v16@0:8
// Implementation: 0x107b48768

// -[SCOperaVideoLayerViewController _isAutoLoopEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107b48d64

// -[SCOperaVideoLayerViewController _shouldTriggerAutoLoop:]
// Type encoding: B24@0:8d16
// Implementation: 0x107b48dc4

// -[SCOperaVideoLayerViewController _triggerAutoLoop]
// Type encoding: v16@0:8
// Implementation: 0x107b48e78

// -[SCOperaVideoLayerViewController _shouldLoopWhenReachEnd]
// Type encoding: B16@0:8
// Implementation: 0x107b48f08

// -[SCOperaVideoLayerViewController _elapsedTimeWithPlayerCurrentTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x107b48fc4

// -[SCOperaVideoLayerViewController _changeCurrentProgressTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b49034

// -[SCOperaVideoLayerViewController _observeMediaServicesLostSharedResourceVariable]
// Type encoding: v16@0:8
// Implementation: 0x107b490a0

// -[SCOperaVideoLayerViewController _didReceiveMediaServicesWereLostNotification]
// Type encoding: v16@0:8
// Implementation: 0x107b4931c

// -[SCOperaVideoLayerViewController _didReceiveMediaServicesWereResetNotification]
// Type encoding: v16@0:8
// Implementation: 0x107b49448

// -[SCOperaVideoLayerViewController _setupLoadingIndicatorConfigsWithOperaDependencies:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b49634

// -[SCOperaVideoLayerViewController videoAssetWithoutLoadValues]
// Type encoding: @16@0:8
// Implementation: 0x107b49738

// -[SCOperaVideoLayerViewController videoAsset]
// Type encoding: @16@0:8
// Implementation: 0x107b49740

// -[SCOperaVideoLayerViewController currentVideoAsset]
// Type encoding: @16@0:8
// Implementation: 0x107b49748

// -[SCOperaVideoLayerViewController _videoAssetWithLoadValues:]
// Type encoding: @20@0:8B16
// Implementation: 0x107b49778

// -[SCOperaVideoLayerViewController _videoTrack]
// Type encoding: @16@0:8
// Implementation: 0x107b49b9c

// -[SCOperaVideoLayerViewController _resetVideoAsset:debugReason:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x107b49c34

// -[SCOperaVideoLayerViewController handleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b49d6c

// -[SCOperaVideoLayerViewController _toggleVideoControlsView]
// Type encoding: v16@0:8
// Implementation: 0x107b49dd4

// -[SCOperaVideoLayerViewController pageDidChangeResizingState:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b49ebc

// -[SCOperaVideoLayerViewController _toggleVideoProgressView]
// Type encoding: v16@0:8
// Implementation: 0x107b49edc

// -[SCOperaVideoLayerViewController _updateOverlappedLayersYOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b4a0ec

// -[SCOperaVideoLayerViewController videoControlsView:didToggleVolume:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b4a1e8

// -[SCOperaVideoLayerViewController videoControlsView:didToggleCaption:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b4a260

// -[SCOperaVideoLayerViewController videoControlsView:didToggleRotateLeft:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b4a264

// -[SCOperaVideoLayerViewController videoControlsView:didToggleControlsVisibility:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b4a290

// -[SCOperaVideoLayerViewController videoControlsViewDidPressShowActionMenuButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b4a3e4

// -[SCOperaVideoLayerViewController videoControlsViewDidPressSendButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b4a3e8

// -[SCOperaVideoLayerViewController _setTargetOrientation:andRotateView:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x107b4a454

// -[SCOperaVideoLayerViewController _rotateVideoWithTransform:animated:]
// Type encoding: v68@0:8{CGAffineTransform=dddddd}16B64
// Implementation: 0x107b4a57c

// -[SCOperaVideoLayerViewController videoControlsView:didTogglePlay:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b4ac74

// -[SCOperaVideoLayerViewController videoControlsViewDidBeginSeeking:pauseOnSeek:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b4b01c

// -[SCOperaVideoLayerViewController videoControlsSeekingProgressDidUpdate:seekingTargetTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107b4b0fc

// -[SCOperaVideoLayerViewController videoControlsView:didEndSeekingWithPlayButtonToggled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b4b218

// -[SCOperaVideoLayerViewController videoControlsViewDidPressExit:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b4b414

// -[SCOperaVideoLayerViewController videoControlsView:didSeekToTime:reason:seekingToleranceDisabled:]
// Type encoding: v44@0:8@16d24q32B40
// Implementation: 0x107b4b4b8

// -[SCOperaVideoLayerViewController _seekToTime:reason:seekingToleranceDisabled:]
// Type encoding: v36@0:8d16q24B32
// Implementation: 0x107b4b4c4

// -[SCOperaVideoLayerViewController seekToMediaStartTimeWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107b4bd84

// -[SCOperaVideoLayerViewController seekToTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b4bea0

// -[SCOperaVideoLayerViewController seekToTime:toleranceBefore:toleranceAfter:completion:]
// Type encoding: v80@0:8d16{?=qiIq}24{?=qiIq}48@?72
// Implementation: 0x107b4bee8

// -[SCOperaVideoLayerViewController setProgress:forIndex:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x107b4c3b0

// -[SCOperaVideoLayerViewController _debugInfo]
// Type encoding: @16@0:8
// Implementation: 0x107b4c3fc

// -[SCOperaVideoLayerViewController videoControlsViewCurrentTime:]
// Type encoding: {?=qiIq}24@0:8@16
// Implementation: 0x107b4c408

// -[SCOperaVideoLayerViewController videoControlsViewDuration:]
// Type encoding: {?=qiIq}24@0:8@16
// Implementation: 0x107b4c428

// -[SCOperaVideoLayerViewController videoControlsViewSeekPoints:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b4c42c

// -[SCOperaVideoLayerViewController _mediaDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107b4c430

// -[SCOperaVideoLayerViewController _mediaDurationSeconds]
// Type encoding: d16@0:8
// Implementation: 0x107b4c534

// -[SCOperaVideoLayerViewController _playbackDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107b4c580

// -[SCOperaVideoLayerViewController _playbackDurationSeconds]
// Type encoding: d16@0:8
// Implementation: 0x107b4c5e8

// -[SCOperaVideoLayerViewController _longformDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107b4c614

// -[SCOperaVideoLayerViewController _generateDefaultSeekPointTimestampsIfNeeded:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b4c6a4

// -[SCOperaVideoLayerViewController _defaultSeekPointsTimeInterval]
// Type encoding: d16@0:8
// Implementation: 0x107b4c814

// -[SCOperaVideoLayerViewController _seekPoints]
// Type encoding: @16@0:8
// Implementation: 0x107b4c8a0

// -[SCOperaVideoLayerViewController _observablePlaybackEventsGroups]
// Type encoding: @16@0:8
// Implementation: 0x107b4cb84

// -[SCOperaVideoLayerViewController _playerDidEncounterError:failureType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107b4cbf4

// -[SCOperaVideoLayerViewController _shouldAttributeErrorToBlockedCodec:]
// Type encoding: B24@0:8@16
// Implementation: 0x107b4d0a8

// -[SCOperaVideoLayerViewController _sendMediaFailsToLoadEvent]
// Type encoding: v16@0:8
// Implementation: 0x107b4d258

// -[SCOperaVideoLayerViewController _sendMediaFailsToDisplayEvent]
// Type encoding: v16@0:8
// Implementation: 0x107b4d2c4

// -[SCOperaVideoLayerViewController _clearPlaybackErrorTrackingParams]
// Type encoding: v16@0:8
// Implementation: 0x107b4d330

// -[SCOperaVideoLayerViewController _playerItemDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b4d354

// -[SCOperaVideoLayerViewController playerDidBecomeReady:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b4d364

// -[SCOperaVideoLayerViewController playerDidEncounterError:failureType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107b4d54c

// -[SCOperaVideoLayerViewController playerTimeControlStatusDidChanged:oldStatus:newStatus:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107b4d550

// -[SCOperaVideoLayerViewController playerRateDidChange:oldRate:newRate:]
// Type encoding: v32@0:8@16f24f28
// Implementation: 0x107b4d7cc

// -[SCOperaVideoLayerViewController playerItem:statusDidChange:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b4d9d0

// -[SCOperaVideoLayerViewController playerBufferStatusDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b4dac0

// -[SCOperaVideoLayerViewController _isBeginningAndCurrentTimeFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107b4dbb4

// -[SCOperaVideoLayerViewController _updateLoadingIndicatorForReason:debugReason:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107b4dbf8

// -[SCOperaVideoLayerViewController _enableLoadingIndicator:reason:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x107b4df68

// -[SCOperaVideoLayerViewController _enableLoadingIndicatorOnLayerView:reason:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x107b4e0b8

// -[SCOperaVideoLayerViewController _showLoadingIndicatorIfNecessaryWithDelayForReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x107b4e158

// -[SCOperaVideoLayerViewController _showLoadingIndicatorIfNecessaryForReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b4e204

// -[SCOperaVideoLayerViewController _updatePlaybackControlsTapToSeek]
// Type encoding: v16@0:8
// Implementation: 0x107b4e270

// -[SCOperaVideoLayerViewController _resumeForBufferStatusChangeIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107b4e2d8

// -[SCOperaVideoLayerViewController _playerConfiguration:]
// Type encoding: @20@0:8B16
// Implementation: 0x107b4e45c

// -[SCOperaVideoLayerViewController _player]
// Type encoding: @16@0:8
// Implementation: 0x107b4e628

// -[SCOperaVideoLayerViewController playerDidStall]
// Type encoding: v16@0:8
// Implementation: 0x107b4e678

// -[SCOperaVideoLayerViewController playerDidResumeFromStall]
// Type encoding: v16@0:8
// Implementation: 0x107b4e80c

// -[SCOperaVideoLayerViewController _playerDidBecomeReady]
// Type encoding: v16@0:8
// Implementation: 0x107b4e988

// -[SCOperaVideoLayerViewController _isPlayingDidChangeTo:resetTimerOnStart:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x107b4eb14

// -[SCOperaVideoLayerViewController _updateVideoAssetForSubtitlesIfNecessary:currentAssetKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b4ebac

// -[SCOperaVideoLayerViewController _reportSeekLatencyAfterSubtitleUpdateWithStartTs:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b4ee6c

// -[SCOperaVideoLayerViewController _enableSubtitlesIfNecessary:reason:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x107b4eecc

// -[SCOperaVideoLayerViewController _setSubtitlePositionWithUpdateProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b4f304

// -[SCOperaVideoLayerViewController _removeCaptionsOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b4f6a0

// -[SCOperaVideoLayerViewController _addCaptionsOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b4f6ec

// -[SCOperaVideoLayerViewController legibleOutput:didOutputAttributedStrings:nativeSampleBuffers:forItemTime:]
// Type encoding: v64@0:8@16@24@32{?=qiIq}40
// Implementation: 0x107b4f7d8

// -[SCOperaVideoLayerViewController _updateSubtitlesStyleIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107b4f95c

// -[SCOperaVideoLayerViewController _updateSubtitlesStyle]
// Type encoding: v16@0:8
// Implementation: 0x107b4fcb8

// -[SCOperaVideoLayerViewController _subtitleLayerVideoSizeChanged]
// Type encoding: v16@0:8
// Implementation: 0x107b4fdc4

// -[SCOperaVideoLayerViewController _updateSubtitleLayerScreenSize]
// Type encoding: v16@0:8
// Implementation: 0x107b4fdec

// -[SCOperaVideoLayerViewController _teardownDebugBadge]
// Type encoding: v16@0:8
// Implementation: 0x107b4fea0

// -[SCOperaVideoLayerViewController _refreshDebugBadgeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107b4fea4

// -[SCOperaVideoLayerViewController mediaLog]
// Type encoding: @16@0:8
// Implementation: 0x107b4fea8

// -[SCOperaVideoLayerViewController logShakeToReportState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b4ff94

// -[SCOperaVideoLayerViewController _reportContentDebugInfo]
// Type encoding: v16@0:8
// Implementation: 0x107b502b4

// -[SCOperaVideoLayerViewController _startFrameRateTrackerWithPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b502b8

// -[SCOperaVideoLayerViewController currentPlayerStatus]
// Type encoding: @16@0:8
// Implementation: 0x107b502bc

// -[SCOperaVideoLayerViewController operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b506ac

// -[SCOperaVideoLayerViewController loadingIndicatorDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107b50848

// -[SCOperaVideoLayerViewController setLoadingIndicatorDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b50868

// -[SCOperaVideoLayerViewController delegateViewForGestures]
// Type encoding: @16@0:8
// Implementation: 0x107b5087c

// -[SCOperaVideoLayerViewController setDelegateViewForGestures:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b5089c

// -[SCOperaVideoLayerViewController volumeController]
// Type encoding: @16@0:8
// Implementation: 0x107b508b0

// -[SCOperaVideoLayerViewController setVolumeController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b508c0

// -[SCOperaVideoLayerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b50900

// +[SCOperaVideoLayerViewController layerViewControllerWithConfiguration:layerViewControllerConfiguration:operaDependencies:kvoController:mediaDisplayStopwatch:eventAnnouncer:sharedResourceManager:notificationCenter:bandwidthEstimator:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x107b3d4a8

@end
