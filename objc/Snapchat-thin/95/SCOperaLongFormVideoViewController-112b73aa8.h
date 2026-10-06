// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaLongFormVideoViewController
// Superclass: SCOperaRemoteVideoViewProvider
// Address: 0x112b73aa8

@interface SCOperaLongFormVideoViewController

// Property: delegate; attributes: T@"<SCOperaRemoteVideoControllerDelegate>",W,N,V_delegate
// Property: pageableViewControllerDelegate; attributes: T@"<SCOperaPageableViewControllerDelegate>",W,N,V_pageableViewControllerDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaLongFormVideoViewController initWithVideoId:configuration:operaDependencies:eventAnnouncer:operaPage:isInline:firstFrameImageKey:primaryColor:kvoController:imageProvider:motionManager:bandwidthEstimator:]
// Type encoding: @108@0:8@16@24@32@40@48B56@60@68@76@84@92@100
// Implementation: 0x107b84bcc

// -[SCOperaLongFormVideoViewController updateWithVideoId:videoURL:operaPage:firstFrameImageKey:primaryColor:videoRotationEnabled:showActionMenuButtonEnabled:imageProvider:]
// Type encoding: v72@0:8@16@24@32@40@48B56B60@64
// Implementation: 0x107b84ea4

// -[SCOperaLongFormVideoViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107b85444

// -[SCOperaLongFormVideoViewController didReceiveMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x107b854a4

// -[SCOperaLongFormVideoViewController prefersStatusBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x107b854f4

// -[SCOperaLongFormVideoViewController canHandleRoundCorner]
// Type encoding: B16@0:8
// Implementation: 0x107b854fc

// -[SCOperaLongFormVideoViewController didUpdateBottomPageViewProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b85504

// -[SCOperaLongFormVideoViewController isPausedForAttachment]
// Type encoding: B16@0:8
// Implementation: 0x107b85508

// -[SCOperaLongFormVideoViewController mediaIsBeingPreparedForDisplay]
// Type encoding: B16@0:8
// Implementation: 0x107b85510

// -[SCOperaLongFormVideoViewController setupPlaybackAnalyticsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b85518

// -[SCOperaLongFormVideoViewController pageabilityForRelativePosition:gestureRecognizer:]
// Type encoding: q32@0:8Q16@24
// Implementation: 0x107b85530

// -[SCOperaLongFormVideoViewController pause]
// Type encoding: v16@0:8
// Implementation: 0x107b85538

// -[SCOperaLongFormVideoViewController isPaused]
// Type encoding: B16@0:8
// Implementation: 0x107b85574

// -[SCOperaLongFormVideoViewController resume]
// Type encoding: v16@0:8
// Implementation: 0x107b85584

// -[SCOperaLongFormVideoViewController setPausedForAttachment:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b855ec

// -[SCOperaLongFormVideoViewController setVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b855f0

// -[SCOperaLongFormVideoViewController loadVideo]
// Type encoding: v16@0:8
// Implementation: 0x107b8563c

// -[SCOperaLongFormVideoViewController playVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b8564c

// -[SCOperaLongFormVideoViewController start]
// Type encoding: v16@0:8
// Implementation: 0x107b8565c

// -[SCOperaLongFormVideoViewController stop]
// Type encoding: v16@0:8
// Implementation: 0x107b85660

// -[SCOperaLongFormVideoViewController teardown]
// Type encoding: v16@0:8
// Implementation: 0x107b85664

// -[SCOperaLongFormVideoViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x107b85704

// -[SCOperaLongFormVideoViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b858a4

// -[SCOperaLongFormVideoViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x107b859c8

// -[SCOperaLongFormVideoViewController viewDidPartiallyAppearWithCurrentViewRelativePosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107b85b8c

// -[SCOperaLongFormVideoViewController viewWillFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x107b85b90

// -[SCOperaLongFormVideoViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b85b94

// -[SCOperaLongFormVideoViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b85c38

// -[SCOperaLongFormVideoViewController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x107b85d24

// -[SCOperaLongFormVideoViewController didTapRemoteVideoView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b85e50

// -[SCOperaLongFormVideoViewController fadeInControls]
// Type encoding: v16@0:8
// Implementation: 0x107b85eb4

// -[SCOperaLongFormVideoViewController fadeOutControls]
// Type encoding: v16@0:8
// Implementation: 0x107b85f24

// -[SCOperaLongFormVideoViewController _setupControlsFadeTimer]
// Type encoding: v16@0:8
// Implementation: 0x107b85f78

// -[SCOperaLongFormVideoViewController invalidateControlsFadeTimerAndShowControls]
// Type encoding: v16@0:8
// Implementation: 0x107b86034

// -[SCOperaLongFormVideoViewController isOverlay]
// Type encoding: B16@0:8
// Implementation: 0x107b86088

// -[SCOperaLongFormVideoViewController mediaHeightToWidthAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x107b86090

// -[SCOperaLongFormVideoViewController mediaViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x107b860a0

// -[SCOperaLongFormVideoViewController _observePlaybackLifecycleEvent]
// Type encoding: v16@0:8
// Implementation: 0x107b860b0

// -[SCOperaLongFormVideoViewController _observePlayerItemPresentationSize]
// Type encoding: v16@0:8
// Implementation: 0x107b864b8

// -[SCOperaLongFormVideoViewController _observeViewModelChange]
// Type encoding: v16@0:8
// Implementation: 0x107b866c0

// -[SCOperaLongFormVideoViewController motionManagerDidUpdateRotation:translation:]
// Type encoding: v40@0:8d16{CGVector=dd}24
// Implementation: 0x107b8685c

// -[SCOperaLongFormVideoViewController _updateLayerViewTransformWithRotation:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b86890

// -[SCOperaLongFormVideoViewController _updateRollDegreeWithCurrentRotation:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b869d0

// -[SCOperaLongFormVideoViewController videoControlsView:didEndSeekingWithPlayButtonToggled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b86a3c

// -[SCOperaLongFormVideoViewController videoControlsSeekingProgressDidUpdate:seekingTargetTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107b86a78

// -[SCOperaLongFormVideoViewController videoControlsView:didSeekToTime:reason:seekingToleranceDisabled:]
// Type encoding: v44@0:8@16d24q32B40
// Implementation: 0x107b86a7c

// -[SCOperaLongFormVideoViewController videoControlsView:didToggleCaption:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b86a8c

// -[SCOperaLongFormVideoViewController videoControlsView:didTogglePlay:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b86aa4

// -[SCOperaLongFormVideoViewController videoControlsView:didToggleRotateLeft:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b86ae8

// -[SCOperaLongFormVideoViewController videoControlsView:didToggleControlsVisibility:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b86b34

// -[SCOperaLongFormVideoViewController videoControlsView:didToggleVolume:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b86b38

// -[SCOperaLongFormVideoViewController videoControlsViewDidBeginSeeking:pauseOnSeek:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b86b6c

// -[SCOperaLongFormVideoViewController videoControlsViewDidPressExit:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b86b84

// -[SCOperaLongFormVideoViewController videoControlsViewDidPressShowActionMenuButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b86bb8

// -[SCOperaLongFormVideoViewController videoControlsViewDidPressSendButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b86c24

// -[SCOperaLongFormVideoViewController videoControlsViewCurrentTime:]
// Type encoding: {?=qiIq}24@0:8@16
// Implementation: 0x107b86c28

// -[SCOperaLongFormVideoViewController videoControlsViewDuration:]
// Type encoding: {?=qiIq}24@0:8@16
// Implementation: 0x107b86c2c

// -[SCOperaLongFormVideoViewController currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107b86c30

// -[SCOperaLongFormVideoViewController duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107b86c88

// -[SCOperaLongFormVideoViewController totalVideoDurationSeconds]
// Type encoding: d16@0:8
// Implementation: 0x107b86d00

// -[SCOperaLongFormVideoViewController rotateVideoBasedOnOrientation]
// Type encoding: v16@0:8
// Implementation: 0x107b86d34

// -[SCOperaLongFormVideoViewController supportedInterfaceOrientations]
// Type encoding: Q16@0:8
// Implementation: 0x107b86e70

// -[SCOperaLongFormVideoViewController setTargetOrientation:andRotateView:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x107b86ec0

// -[SCOperaLongFormVideoViewController rotateVideoWithTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x107b87160

// -[SCOperaLongFormVideoViewController didRotateFromInterfaceOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107b873d8

// -[SCOperaLongFormVideoViewController preferredInterfaceOrientationForPresentation]
// Type encoding: q16@0:8
// Implementation: 0x107b8744c

// -[SCOperaLongFormVideoViewController updateWithScreenshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8749c

// -[SCOperaLongFormVideoViewController didSetFullscreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b874ac

// -[SCOperaLongFormVideoViewController setResumeVideoPosition:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b874c8

// -[SCOperaLongFormVideoViewController videoParameters]
// Type encoding: @16@0:8
// Implementation: 0x107b874dc

// -[SCOperaLongFormVideoViewController additionalVideoParamters]
// Type encoding: @16@0:8
// Implementation: 0x107b874ec

// -[SCOperaLongFormVideoViewController imageSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107b877bc

// -[SCOperaLongFormVideoViewController snapshotFromPlayer]
// Type encoding: @16@0:8
// Implementation: 0x107b87aac

// -[SCOperaLongFormVideoViewController isShowingVideoFrame]
// Type encoding: B16@0:8
// Implementation: 0x107b87afc

// -[SCOperaLongFormVideoViewController shouldBeSilentlyPresentedAndPauseOpera]
// Type encoding: B16@0:8
// Implementation: 0x107b87b0c

// -[SCOperaLongFormVideoViewController shouldAlwaysBeSilentlyPresented]
// Type encoding: B16@0:8
// Implementation: 0x107b87b14

// -[SCOperaLongFormVideoViewController videoID]
// Type encoding: @16@0:8
// Implementation: 0x107b87b1c

// -[SCOperaLongFormVideoViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x107b87b2c

// -[SCOperaLongFormVideoViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b87b4c

// -[SCOperaLongFormVideoViewController pageableViewControllerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107b87b60

// -[SCOperaLongFormVideoViewController setPageableViewControllerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b87b80

// -[SCOperaLongFormVideoViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b87b94

// +[SCOperaLongFormVideoViewController remoteVideoViewControllerWithConfiguration:operaDependencies:eventAnnouncer:isInline:bandwidthEstimator:]
// Type encoding: @52@0:8@16@24@32B40@44
// Implementation: 0x107b84a28

@end
