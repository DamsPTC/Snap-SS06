// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSmartVideoSwipeFilterView
// Superclass: SCSmartSwipeFilterView
// Address: 0x112b90428

@interface SCSmartVideoSwipeFilterView

// Property: videoTracker; attributes: T@"<SCVideoTracker>",R,N,V_videoTracker
// Property: lastFrameTime; attributes: T{?=qiIq},R,N,V_lastFrameTime
// Property: videoAssetNominalFrameRate; attributes: Tf,R,N
// Property: reversedAudioData; attributes: T@"NSData",&,N,V_reversedAudioData
// Property: audioOverrideAsset; attributes: T@"AVAsset",&,N,V_audioOverrideAsset
// Property: didRenderFirstFrame; attributes: TB,R,N,V_didRenderFirstFrame
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: multiSnapV2PlayerHandler; attributes: T@"<SCMultiSnapV2PlayerHandler>",R,N
// Property: currentViewportTransform; attributes: T{CGAffineTransform=dddddd},N
// Property: batchCapturePlayerHandler; attributes: T@"<SCBatchCapturePlayerHandler>",R,N
// Property: timelineVideoPlayerHandler; attributes: T@"<SCTimelineVideoPlayerHandler>",R,N
// Property: playbackMode; attributes: TQ,N,V_playbackMode
// Property: imageProcessCommandsObservable; attributes: T@"SCObservable",R,N,V_imageProcessCommandsObservable
// Property: multiSnapTimeRanges; attributes: T@"NSArray",R,N,V_multiSnapTimeRanges
// Property: NGSMESnap; attributes: T@"SCNGSMESnap",&,N,V_ngsmeSnap
// Property: useBatchCapturePlayback; attributes: TB,N,V_useBatchCapturePlayBack
// Property: isAudioMixed; attributes: TB,N,V_isAudioMixed
// Property: isTranscoding; attributes: TB,N,V_isTranscoding
// Property: isPlaybackVisible; attributes: TB,N,V_isPlaybackVisible
// Property: playbackEventsObservable; attributes: T@"SCObservable",R,N,V_playbackEventsSubject
// Property: mixedAudioTracks; attributes: T@"NSDictionary",R,N

// -[SCSmartVideoSwipeFilterView initWithFrame:filterArranger:commonLoggingParamsBuilder:latencyLogger:videoPlaybackLogger:geoFilterLogger:userInteractionStateLogger:videoPlaybackQuality:spectaclesConfig:rectificationConfig:userSession:renderingSessionFactory:imageProcessCommandProvider:cropBackgroundAnimationImages:cropBackgroundAnimationColors:multiSnapImagePixelSize:isFromGallery:commandMapper:coreCameraLogger:ucoCarouselConfigProvider:lazyLensIconRepository:ngsmePlaybackServices:previewABProvider:audioProcessingServices:videoTrackingServices:unifiedCameraObjectFilterViewFactory:ucoLogger:ucoInteractionTracker:lensCrashLogger:previewConfiguration:previewView:filterViewLayoutGuide:lensCTAHandler:locationProvider:userBlizzardLogger:]
// Type encoding: @319@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56@64@72@80@88Q96{SCSmartSwipeSpectaclesMediaConfig=BBB}104@107@115@123@131@139@147{CGSize=dd}155B171@175@183@191@199@207@215@223@231@239@247@255@263@271@279@287@295@303@311
// Implementation: 0x107f9d200

// -[SCSmartVideoSwipeFilterView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107f9d894

// -[SCSmartVideoSwipeFilterView updateMediaViewScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x107f9d8e4

// -[SCSmartVideoSwipeFilterView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107f9d938

// -[SCSmartVideoSwipeFilterView updateMediaFilterMaskForItem:relativeOffset:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107f9d9d8

// -[SCSmartVideoSwipeFilterView multiSnapV2PlayerHandler]
// Type encoding: @16@0:8
// Implementation: 0x107f9da84

// -[SCSmartVideoSwipeFilterView batchCapturePlayerHandler]
// Type encoding: @16@0:8
// Implementation: 0x107f9da88

// -[SCSmartVideoSwipeFilterView timelineVideoPlayerHandler]
// Type encoding: @16@0:8
// Implementation: 0x107f9da8c

// -[SCSmartVideoSwipeFilterView currentVideoPlaybackRate]
// Type encoding: d16@0:8
// Implementation: 0x107f9da90

// -[SCSmartVideoSwipeFilterView playbackDurationWithPlaybackRatesApplied]
// Type encoding: d16@0:8
// Implementation: 0x107f9db30

// -[SCSmartVideoSwipeFilterView playbackDuration]
// Type encoding: d16@0:8
// Implementation: 0x107f9dd58

// -[SCSmartVideoSwipeFilterView totalContentDuration]
// Type encoding: d16@0:8
// Implementation: 0x107f9dee8

// -[SCSmartVideoSwipeFilterView setVideoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9e008

// -[SCSmartVideoSwipeFilterView setFrameSources:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9e2a8

// -[SCSmartVideoSwipeFilterView setNGSMESnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9e3b0

// -[SCSmartVideoSwipeFilterView _setNGSMESnapModelBasedOnTimelineVideoSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9e404

// -[SCSmartVideoSwipeFilterView hasVideoAsset]
// Type encoding: B16@0:8
// Implementation: 0x107f9e4b8

// -[SCSmartVideoSwipeFilterView videoAsset]
// Type encoding: @16@0:8
// Implementation: 0x107f9e508

// -[SCSmartVideoSwipeFilterView videoAssetNominalFrameRate]
// Type encoding: f16@0:8
// Implementation: 0x107f9e55c

// -[SCSmartVideoSwipeFilterView setReversedAudioData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9e5dc

// -[SCSmartVideoSwipeFilterView setIsAudioMixed:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f9e62c

// -[SCSmartVideoSwipeFilterView mixedAudioTracks]
// Type encoding: @16@0:8
// Implementation: 0x107f9e64c

// -[SCSmartVideoSwipeFilterView setAudioTrack:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f9e6bc

// -[SCSmartVideoSwipeFilterView _updateAllAudioTrackMix]
// Type encoding: v16@0:8
// Implementation: 0x107f9e748

// -[SCSmartVideoSwipeFilterView _updateAudioTrackMixForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9e870

// -[SCSmartVideoSwipeFilterView setAudioOverrideAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9e980

// -[SCSmartVideoSwipeFilterView setMixedAudioAssetTrack:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f9eb14

// -[SCSmartVideoSwipeFilterView setVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x107f9eb3c

// -[SCSmartVideoSwipeFilterView volumeProportionForAudioTrackWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f9eb84

// -[SCSmartVideoSwipeFilterView updateVolumeProportion:forAudioTrackWithKey:]
// Type encoding: v28@0:8f16@20
// Implementation: 0x107f9ec9c

// -[SCSmartVideoSwipeFilterView showVideo]
// Type encoding: v16@0:8
// Implementation: 0x107f9ede0

// -[SCSmartVideoSwipeFilterView stopVideo]
// Type encoding: v16@0:8
// Implementation: 0x107f9f92c

// -[SCSmartVideoSwipeFilterView isVideoPlaying]
// Type encoding: B16@0:8
// Implementation: 0x107f9f978

// -[SCSmartVideoSwipeFilterView pauseVideo]
// Type encoding: v16@0:8
// Implementation: 0x107f9f988

// -[SCSmartVideoSwipeFilterView pauseVideoAndRendering]
// Type encoding: v16@0:8
// Implementation: 0x107f9f99c

// -[SCSmartVideoSwipeFilterView resumeVideo]
// Type encoding: v16@0:8
// Implementation: 0x107f9f9b0

// -[SCSmartVideoSwipeFilterView rewindToBeginningAndResume:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107f9f9c0

// -[SCSmartVideoSwipeFilterView fastForwardToEndAndResume:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107f9fb18

// -[SCSmartVideoSwipeFilterView isReverseMotionFilterSelected]
// Type encoding: B16@0:8
// Implementation: 0x107f9fc70

// -[SCSmartVideoSwipeFilterView addVideoOverlayView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9fca8

// -[SCSmartVideoSwipeFilterView addVideoPlaybackSessionListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9fcb8

// -[SCSmartVideoSwipeFilterView removeVideoPlaybackSessionListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9fcc8

// -[SCSmartVideoSwipeFilterView setViewportTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x107f9fcd8

// -[SCSmartVideoSwipeFilterView setCropBackgroundAnimating:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f9fd54

// -[SCSmartVideoSwipeFilterView currentFrameSource]
// Type encoding: @16@0:8
// Implementation: 0x107f9fe10

// -[SCSmartVideoSwipeFilterView currentVideoFrameSource]
// Type encoding: @16@0:8
// Implementation: 0x107f9fe30

// -[SCSmartVideoSwipeFilterView selectedSnaps]
// Type encoding: @16@0:8
// Implementation: 0x107f9fe50

// -[SCSmartVideoSwipeFilterView currentSnapIndex]
// Type encoding: q16@0:8
// Implementation: 0x107f9fe80

// -[SCSmartVideoSwipeFilterView enableMultiSnapWithTimeRanges:shouldScaleThumbnails:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107f9fe90

// -[SCSmartVideoSwipeFilterView updateMultiSnapTimeRanges:includesDeletion:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107f9ff70

// -[SCSmartVideoSwipeFilterView enableTrimmingWithTimeRange:shouldScaleThumbnails:]
// Type encoding: v68@0:8{?={?=qiIq}{?=qiIq}}16B64
// Implementation: 0x107fa004c

// -[SCSmartVideoSwipeFilterView disableTrimming]
// Type encoding: v16@0:8
// Implementation: 0x107fa019c

// -[SCSmartVideoSwipeFilterView updateTrimTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x107fa023c

// -[SCSmartVideoSwipeFilterView thumbnailFuturesForAVAsset:atTimes:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107fa0344

// -[SCSmartVideoSwipeFilterView currentPlayingAVAsset]
// Type encoding: @16@0:8
// Implementation: 0x107fa0be4

// -[SCSmartVideoSwipeFilterView currentTimelineVideoAVAsset]
// Type encoding: @16@0:8
// Implementation: 0x107fa0c58

// -[SCSmartVideoSwipeFilterView currentTimelineAssetVideoComposition]
// Type encoding: @16@0:8
// Implementation: 0x107fa0ca0

// -[SCSmartVideoSwipeFilterView currentTimelineVideoSourceRate]
// Type encoding: f16@0:8
// Implementation: 0x107fa0ce8

// -[SCSmartVideoSwipeFilterView setSnapAtIndex:enabled:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x107fa0d30

// -[SCSmartVideoSwipeFilterView seekToStartOfSnapAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fa0dd0

// -[SCSmartVideoSwipeFilterView seekToBeginning]
// Type encoding: v16@0:8
// Implementation: 0x107fa0f88

// -[SCSmartVideoSwipeFilterView stopPlayingAndSeekSmoothlyToSeconds:]
// Type encoding: v24@0:8d16
// Implementation: 0x107fa0f98

// -[SCSmartVideoSwipeFilterView startRunningFromBeginning:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107fa1104

// -[SCSmartVideoSwipeFilterView _updateVideoLoopStartTimestamp]
// Type encoding: v16@0:8
// Implementation: 0x107fa1194

// -[SCSmartVideoSwipeFilterView _nextSnapIndexForSnapAtIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x107fa1248

// -[SCSmartVideoSwipeFilterView videoPlaybackSession:willRenderFrame:atTime:]
// Type encoding: v56@0:8@16^{__CVBuffer=}24{?=qiIq}32
// Implementation: 0x107fa1310

// -[SCSmartVideoSwipeFilterView videoPlaybackSession:didRenderFrameAtTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107fa17f4

// -[SCSmartVideoSwipeFilterView videoPlaybackSessionDidStartRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa1a10

// -[SCSmartVideoSwipeFilterView videoPlaybackSessionDidStopRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa1a20

// -[SCSmartVideoSwipeFilterView videoPlaybackSessionDidPauseRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa1a30

// -[SCSmartVideoSwipeFilterView videoPlaybackSessionDidResumeRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa1a40

// -[SCSmartVideoSwipeFilterView videoPlaybackSessionPlayerItemFailedToSetup:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa1a50

// -[SCSmartVideoSwipeFilterView videoPlaybackSessionPlayerItemStatusFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa1ab0

// -[SCSmartVideoSwipeFilterView cancelRewinding]
// Type encoding: v16@0:8
// Implementation: 0x107fa1afc

// -[SCSmartVideoSwipeFilterView currentPlayingFrameSourceIndex]
// Type encoding: q16@0:8
// Implementation: 0x107fa1b64

// -[SCSmartVideoSwipeFilterView currentPlayingVideoIndex]
// Type encoding: q16@0:8
// Implementation: 0x107fa1bf8

// -[SCSmartVideoSwipeFilterView currentEditingVideoSegmentIndex]
// Type encoding: q16@0:8
// Implementation: 0x107fa1c6c

// -[SCSmartVideoSwipeFilterView setBackgroundCommandWithColors:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa1e64

// -[SCSmartVideoSwipeFilterView _finishStartRunningFromBeginningRequest]
// Type encoding: v16@0:8
// Implementation: 0x107fa1f34

// -[SCSmartVideoSwipeFilterView videoPlaybackSessionWillLoopVideo:currentPlayerTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107fa1f88

// -[SCSmartVideoSwipeFilterView resetOverlayAndPlaybackSessionSpeed]
// Type encoding: v16@0:8
// Implementation: 0x107fa20b8

// -[SCSmartVideoSwipeFilterView _updatePlaybackSpeedForClipLevelEditing]
// Type encoding: v16@0:8
// Implementation: 0x107fa20c8

// -[SCSmartVideoSwipeFilterView _resetOverlayLookAndPlaybackSessionSpeedForRewindToBeginning:fastForwardToEnd:initialFilterSelection:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x107fa2348

// -[SCSmartVideoSwipeFilterView _playerRateAppliedByUser]
// Type encoding: @16@0:8
// Implementation: 0x107fa29c4

// -[SCSmartVideoSwipeFilterView _setupReverseAudioPlayer]
// Type encoding: v16@0:8
// Implementation: 0x107fa2a70

// -[SCSmartVideoSwipeFilterView currentFilterSpeedForType:]
// Type encoding: q24@0:8q16
// Implementation: 0x107fa2ca0

// -[SCSmartVideoSwipeFilterView videoTracker:rewindingTargetNeedToStopRewinding:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107fa2d80

// -[SCSmartVideoSwipeFilterView scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa2d84

// -[SCSmartVideoSwipeFilterView clearStackedFiltersIsMultiSnapCleanUp:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fa2ee0

// -[SCSmartVideoSwipeFilterView removeStackedFilterForType:filterName:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107fa2f14

// -[SCSmartVideoSwipeFilterView replaceFiltersWithState:lastState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fa2f5c

// -[SCSmartVideoSwipeFilterView updateMediaFiltersAndOutputCommandsWithFilterItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa3730

// -[SCSmartVideoSwipeFilterView selectFilterNames:forTypes:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107fa37a0

// -[SCSmartVideoSwipeFilterView scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa39a8

// -[SCSmartVideoSwipeFilterView scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107fa3a30

// -[SCSmartVideoSwipeFilterView scrollToInitSectionAndReloadToIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fa3ac4

// -[SCSmartVideoSwipeFilterView filterViewDidReplaceVisibleFilters]
// Type encoding: v16@0:8
// Implementation: 0x107fa3b14

// -[SCSmartVideoSwipeFilterView _getAudioTrackForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fa3b70

// -[SCSmartVideoSwipeFilterView _getAudioTrackKeys]
// Type encoding: @16@0:8
// Implementation: 0x107fa3bf8

// -[SCSmartVideoSwipeFilterView _getAudioTracksCount]
// Type encoding: q16@0:8
// Implementation: 0x107fa3c68

// -[SCSmartVideoSwipeFilterView _setAudioTrack:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fa3cd0

// -[SCSmartVideoSwipeFilterView _audioMixProcessingSessionWithAudioAssetTrack:processingWrapper:usageType:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x107fa3d64

// -[SCSmartVideoSwipeFilterView _checkVideoDurationFromAsset:]
// Type encoding: d24@0:8@16
// Implementation: 0x107fa3e18

// -[SCSmartVideoSwipeFilterView _selectSnapAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa3e90

// -[SCSmartVideoSwipeFilterView _seekToSnapAtIndexPath:withLooping:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107fa3e9c

// -[SCSmartVideoSwipeFilterView _shouldUpdateFilterAlphaStatusForType:]
// Type encoding: B24@0:8q16
// Implementation: 0x107fa3f50

// -[SCSmartVideoSwipeFilterView updateMediaFiltersAndCommands]
// Type encoding: v16@0:8
// Implementation: 0x107fa3fc4

// -[SCSmartVideoSwipeFilterView areResourcesDownloadedForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x107fa4054

// -[SCSmartVideoSwipeFilterView _mediaCommandsForCommandConfigurations:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fa416c

// -[SCSmartVideoSwipeFilterView _updateMidCommands]
// Type encoding: v16@0:8
// Implementation: 0x107fa41ec

// -[SCSmartVideoSwipeFilterView _batchCapturePlaybackSession]
// Type encoding: @16@0:8
// Implementation: 0x107fa4314

// -[SCSmartVideoSwipeFilterView _logDidRenderFirstFrame]
// Type encoding: v16@0:8
// Implementation: 0x107fa4384

// -[SCSmartVideoSwipeFilterView _makeRenderSessionCommandManagerWithImageProcessQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa43e0

// -[SCSmartVideoSwipeFilterView _makeUCOCommandGenerationRulesProvider]
// Type encoding: @16@0:8
// Implementation: 0x107fa44a8

// -[SCSmartVideoSwipeFilterView _setFrameSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa4538

// -[SCSmartVideoSwipeFilterView _isBatchCapturePlayback]
// Type encoding: B16@0:8
// Implementation: 0x107fa460c

// -[SCSmartVideoSwipeFilterView _isTimelinePlayback]
// Type encoding: B16@0:8
// Implementation: 0x107fa4624

// -[SCSmartVideoSwipeFilterView _isMultiSnapPlayback]
// Type encoding: B16@0:8
// Implementation: 0x107fa463c

// -[SCSmartVideoSwipeFilterView _makeUnfilteredCommand]
// Type encoding: @16@0:8
// Implementation: 0x107fa4654

// -[SCSmartVideoSwipeFilterView SCImageProcessVideoPlaybackSessionImpl:didChangeFromSource:snapIndex:toSource:snapIndex:]
// Type encoding: v56@0:8@16@24q32@40q48
// Implementation: 0x107fa4664

// -[SCSmartVideoSwipeFilterView SCImageProcessVideoPlaybackSessionImpl:didLoadFrameSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fa4780

// -[SCSmartVideoSwipeFilterView _videoFrameSourceDidLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa4788

// -[SCSmartVideoSwipeFilterView commandManager:didUpdateMappedCommands:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fa4a54

// -[SCSmartVideoSwipeFilterView batchCaptureStopPlayingSnapAtIndexPath:andSeekSmoothlyToTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107fa4c54

// -[SCSmartVideoSwipeFilterView batchCaptureSetSnapEnabled:atIndexPath:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x107fa4c98

// -[SCSmartVideoSwipeFilterView timelinePlaySegmentAtIndex:withLooping:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x107fa4ca4

// -[SCSmartVideoSwipeFilterView timelinePlayDisableLooping]
// Type encoding: v16@0:8
// Implementation: 0x107fa4cfc

// -[SCSmartVideoSwipeFilterView timelineResetVideoAssetWithDeletingSegmentAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fa4d08

// -[SCSmartVideoSwipeFilterView timelineBeginEditing]
// Type encoding: v16@0:8
// Implementation: 0x107fa4d40

// -[SCSmartVideoSwipeFilterView timelineEndEditing]
// Type encoding: v16@0:8
// Implementation: 0x107fa4d70

// -[SCSmartVideoSwipeFilterView batchCaptureUpdateMultiSnapTimeRanges:includesDeletion:forSegmentAtIndex:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x107fa4da0

// -[SCSmartVideoSwipeFilterView batchCaptureDidDeleteSnapAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa4e18

// -[SCSmartVideoSwipeFilterView batchCaptureDidUpdateImageSegmentDuration:atIndex:]
// Type encoding: v48@0:8{?=qiIq}16q40
// Implementation: 0x107fa4f78

// -[SCSmartVideoSwipeFilterView _needsHighFramerate]
// Type encoding: B16@0:8
// Implementation: 0x107fa4fe0

// -[SCSmartVideoSwipeFilterView defaultLensCommand]
// Type encoding: @16@0:8
// Implementation: 0x107fa4ff8

// -[SCSmartVideoSwipeFilterView imageProcessCommandForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fa5008

// -[SCSmartVideoSwipeFilterView playbackMode]
// Type encoding: Q16@0:8
// Implementation: 0x107fa5094

// -[SCSmartVideoSwipeFilterView setPlaybackMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107fa50a4

// -[SCSmartVideoSwipeFilterView imageProcessCommandsObservable]
// Type encoding: @16@0:8
// Implementation: 0x107fa50b4

// -[SCSmartVideoSwipeFilterView NGSMESnap]
// Type encoding: @16@0:8
// Implementation: 0x107fa50c4

// -[SCSmartVideoSwipeFilterView useBatchCapturePlayback]
// Type encoding: B16@0:8
// Implementation: 0x107fa50d4

// -[SCSmartVideoSwipeFilterView setUseBatchCapturePlayback:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fa50e4

// -[SCSmartVideoSwipeFilterView videoPlaybackLogger]
// Type encoding: @16@0:8
// Implementation: 0x107fa50f4

// -[SCSmartVideoSwipeFilterView isAudioMixed]
// Type encoding: B16@0:8
// Implementation: 0x107fa5104

// -[SCSmartVideoSwipeFilterView isTranscoding]
// Type encoding: B16@0:8
// Implementation: 0x107fa5114

// -[SCSmartVideoSwipeFilterView setIsTranscoding:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fa5124

// -[SCSmartVideoSwipeFilterView isPlaybackVisible]
// Type encoding: B16@0:8
// Implementation: 0x107fa5134

// -[SCSmartVideoSwipeFilterView setIsPlaybackVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fa5144

// -[SCSmartVideoSwipeFilterView playbackEventsObservable]
// Type encoding: @16@0:8
// Implementation: 0x107fa5154

// -[SCSmartVideoSwipeFilterView multiSnapTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x107fa5164

// -[SCSmartVideoSwipeFilterView videoTracker]
// Type encoding: @16@0:8
// Implementation: 0x107fa5174

// -[SCSmartVideoSwipeFilterView lastFrameTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107fa5184

// -[SCSmartVideoSwipeFilterView reversedAudioData]
// Type encoding: @16@0:8
// Implementation: 0x107fa51a4

// -[SCSmartVideoSwipeFilterView audioOverrideAsset]
// Type encoding: @16@0:8
// Implementation: 0x107fa51b4

// -[SCSmartVideoSwipeFilterView didRenderFirstFrame]
// Type encoding: B16@0:8
// Implementation: 0x107fa51c4

// -[SCSmartVideoSwipeFilterView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fa51d4

@end
