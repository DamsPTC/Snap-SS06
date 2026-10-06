// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaGLVideoLayerViewController
// Superclass: SCOperaLayerViewController
// Address: 0x112b3ad98

@interface SCOperaGLVideoLayerViewController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: pinchGestureTarget; attributes: T@"UIView",W,N,V_pinchGestureTarget

// -[SCOperaGLVideoLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:bandwidthEstimator:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106e0f378

// -[SCOperaGLVideoLayerViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x106e0f540

// -[SCOperaGLVideoLayerViewController _updateLayout]
// Type encoding: v16@0:8
// Implementation: 0x106e0faf4

// -[SCOperaGLVideoLayerViewController updateViewWithPreviousLayer:currentLayer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e0fd10

// -[SCOperaGLVideoLayerViewController _rotateTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x106e0fe90

// -[SCOperaGLVideoLayerViewController _updateLayerLayout:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e0ff74

// -[SCOperaGLVideoLayerViewController _configureRotatingViewManipulatorWithMediaSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x106e10270

// -[SCOperaGLVideoLayerViewController _setupBoomboxVisibilityController]
// Type encoding: v16@0:8
// Implementation: 0x106e1033c

// -[SCOperaGLVideoLayerViewController setupPlaybackAnalyticsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e10494

// -[SCOperaGLVideoLayerViewController pause]
// Type encoding: v16@0:8
// Implementation: 0x106e104a8

// -[SCOperaGLVideoLayerViewController resume]
// Type encoding: v16@0:8
// Implementation: 0x106e1050c

// -[SCOperaGLVideoLayerViewController supportedResponsiveLayoutType]
// Type encoding: @16@0:8
// Implementation: 0x106e10578

// -[SCOperaGLVideoLayerViewController viewWillFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x106e1058c

// -[SCOperaGLVideoLayerViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x106e105c4

// -[SCOperaGLVideoLayerViewController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106e10644

// -[SCOperaGLVideoLayerViewController pageabilityForRelativePosition:gestureRecognizer:]
// Type encoding: q32@0:8Q16@24
// Implementation: 0x106e106a4

// -[SCOperaGLVideoLayerViewController shareableMedia]
// Type encoding: @16@0:8
// Implementation: 0x106e106ac

// -[SCOperaGLVideoLayerViewController _requiresNGSMEPlayback]
// Type encoding: B16@0:8
// Implementation: 0x106e10748

// -[SCOperaGLVideoLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106e107c0

// -[SCOperaGLVideoLayerViewController mediaIsBeingPreparedForDisplay]
// Type encoding: B16@0:8
// Implementation: 0x106e10900

// -[SCOperaGLVideoLayerViewController setVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x106e10938

// -[SCOperaGLVideoLayerViewController didReceiveUpdateProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e109b0

// -[SCOperaGLVideoLayerViewController teardown]
// Type encoding: v16@0:8
// Implementation: 0x106e10c20

// -[SCOperaGLVideoLayerViewController currentViewParameters]
// Type encoding: @16@0:8
// Implementation: 0x106e10d00

// -[SCOperaGLVideoLayerViewController _updateViewParamsWithSpectaclesInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e10dc4

// -[SCOperaGLVideoLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x106e10fb0

// -[SCOperaGLVideoLayerViewController didScrollHorizontallyWithOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x106e110fc

// -[SCOperaGLVideoLayerViewController _resetHorizontalPageOffset]
// Type encoding: v16@0:8
// Implementation: 0x106e1110c

// -[SCOperaGLVideoLayerViewController _observeNGSMEPlayer]
// Type encoding: v16@0:8
// Implementation: 0x106e11190

// -[SCOperaGLVideoLayerViewController _handleNGSMEModelChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e11648

// -[SCOperaGLVideoLayerViewController _handleNGSMEStatusChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e116b0

// -[SCOperaGLVideoLayerViewController _unobserveAVPlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e1182c

// -[SCOperaGLVideoLayerViewController _observeAVPlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e118a8

// -[SCOperaGLVideoLayerViewController _observeAVPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e11bf4

// -[SCOperaGLVideoLayerViewController setLastPlaybackError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e11fec

// -[SCOperaGLVideoLayerViewController _playerFailedToPlayToEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e12050

// -[SCOperaGLVideoLayerViewController _sendMediaFailsToDisplayEvent]
// Type encoding: v16@0:8
// Implementation: 0x106e12114

// -[SCOperaGLVideoLayerViewController videoPlaybackSession:didRenderFrameAtTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x106e12180

// -[SCOperaGLVideoLayerViewController _sendMediaStartsToDisplayIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e12248

// -[SCOperaGLVideoLayerViewController _stopVideoAndTearDownSession]
// Type encoding: v16@0:8
// Implementation: 0x106e124f4

// -[SCOperaGLVideoLayerViewController _resetTrackingParams]
// Type encoding: v16@0:8
// Implementation: 0x106e12590

// -[SCOperaGLVideoLayerViewController _startPlaybackIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e125a0

// -[SCOperaGLVideoLayerViewController _resumePlaybackIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e127e4

// -[SCOperaGLVideoLayerViewController _preparePlaybackForFastStartIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e12800

// -[SCOperaGLVideoLayerViewController _startPlayer]
// Type encoding: v16@0:8
// Implementation: 0x106e1285c

// -[SCOperaGLVideoLayerViewController _resumePlayer]
// Type encoding: v16@0:8
// Implementation: 0x106e128e4

// -[SCOperaGLVideoLayerViewController _pausePlayer]
// Type encoding: v16@0:8
// Implementation: 0x106e1296c

// -[SCOperaGLVideoLayerViewController _stopPlaybackIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e129f4

// -[SCOperaGLVideoLayerViewController _setupPlaybackSessionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e12b34

// -[SCOperaGLVideoLayerViewController _setupNGSMEPlayerWithPlaybackPackage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e13544

// -[SCOperaGLVideoLayerViewController isRecyclable]
// Type encoding: B16@0:8
// Implementation: 0x106e1384c

// -[SCOperaGLVideoLayerViewController _resetNGSMEPlayer]
// Type encoding: v16@0:8
// Implementation: 0x106e13864

// -[SCOperaGLVideoLayerViewController _configurePlaybackSessionForAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e13928

// -[SCOperaGLVideoLayerViewController _applyAudioProcessorMixToPlaybackSessionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e13bc4

// -[SCOperaGLVideoLayerViewController _playerForWaveformData:audioProcessorMix:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106e13c3c

// -[SCOperaGLVideoLayerViewController _parseGLRenderOrientationFromTrack:]
// Type encoding: q24@0:8@16
// Implementation: 0x106e13d68

// -[SCOperaGLVideoLayerViewController _teardownPlaybackSession]
// Type encoding: v16@0:8
// Implementation: 0x106e13dac

// -[SCOperaGLVideoLayerViewController _videoAsset]
// Type encoding: @16@0:8
// Implementation: 0x106e13e18

// -[SCOperaGLVideoLayerViewController _audioProcessorMix]
// Type encoding: @16@0:8
// Implementation: 0x106e13ee4

// -[SCOperaGLVideoLayerViewController _reverseAudioData]
// Type encoding: @16@0:8
// Implementation: 0x106e13fcc

// -[SCOperaGLVideoLayerViewController _glCommandsForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e140b4

// -[SCOperaGLVideoLayerViewController playerItemDidReachEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e14144

// -[SCOperaGLVideoLayerViewController setActionMenuEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e141ac

// -[SCOperaGLVideoLayerViewController _setShouldLoop:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e1425c

// -[SCOperaGLVideoLayerViewController _startListeningToMotionManagerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e142b4

// -[SCOperaGLVideoLayerViewController _stopListeningToMotionManagerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e14470

// -[SCOperaGLVideoLayerViewController motionManagerDidUpdateRotation:translation:gravity:]
// Type encoding: v48@0:8d16{CGVector=dd}24d40
// Implementation: 0x106e144c8

// -[SCOperaGLVideoLayerViewController operaRotatingLayerPinchController:didFinishPinchWithScale:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106e1460c

// -[SCOperaGLVideoLayerViewController operaRotatingLayerPinchController:updateTransformWithScale:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106e146e4

// -[SCOperaGLVideoLayerViewController _setupPinchControllerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106e1481c

// -[SCOperaGLVideoLayerViewController setPinchGestureTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e14a94

// -[SCOperaGLVideoLayerViewController movingViewsForFadeTransition]
// Type encoding: @16@0:8
// Implementation: 0x106e14b0c

// -[SCOperaGLVideoLayerViewController fadingViewsForFadeTransition]
// Type encoding: @16@0:8
// Implementation: 0x106e14bb0

// -[SCOperaGLVideoLayerViewController mediaViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106e14bb8

// -[SCOperaGLVideoLayerViewController mediaHeightToWidthAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x106e14bc8

// -[SCOperaGLVideoLayerViewController _contentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106e14c74

// -[SCOperaGLVideoLayerViewController isOverlay]
// Type encoding: B16@0:8
// Implementation: 0x106e14e84

// -[SCOperaGLVideoLayerViewController pinchGestureTarget]
// Type encoding: @16@0:8
// Implementation: 0x106e14e8c

// -[SCOperaGLVideoLayerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e14eac

@end
