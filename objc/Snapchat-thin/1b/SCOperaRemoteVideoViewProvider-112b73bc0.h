// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaRemoteVideoViewProvider
// Superclass: UIViewController
// Address: 0x112b73bc0

@interface SCOperaRemoteVideoViewProvider

// Property: videoID; attributes: T@"NSString",R,N,V_videoID
// Property: delegate; attributes: T@"<SCOperaRemoteVideoControllerDelegate>",W,N,V_delegate
// Property: pageableViewControllerDelegate; attributes: T@"<SCOperaPageableViewControllerDelegate>",W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaRemoteVideoViewProvider updateWithVideoId:videoURL:operaPage:firstFrameImageKey:primaryColor:videoRotationEnabled:showActionMenuButtonEnabled:imageProvider:]
// Type encoding: v72@0:8@16@24@32@40@48B56B60@64
// Implementation: 0x107b8ab90

// -[SCOperaRemoteVideoViewProvider canHandleRoundCorner]
// Type encoding: B16@0:8
// Implementation: 0x107b8ac34

// -[SCOperaRemoteVideoViewProvider didUpdateBottomPageViewProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8ac88

// -[SCOperaRemoteVideoViewProvider isPausedForAttachment]
// Type encoding: B16@0:8
// Implementation: 0x107b8ace8

// -[SCOperaRemoteVideoViewProvider mediaIsBeingPreparedForDisplay]
// Type encoding: B16@0:8
// Implementation: 0x107b8ad3c

// -[SCOperaRemoteVideoViewProvider neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107b8ad90

// -[SCOperaRemoteVideoViewProvider pageabilityForRelativePosition:gestureRecognizer:]
// Type encoding: q32@0:8Q16@24
// Implementation: 0x107b8adf0

// -[SCOperaRemoteVideoViewProvider didTryPagingWhenPagingDisabled:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107b8ae50

// -[SCOperaRemoteVideoViewProvider pageableViewControllerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107b8aea4

// -[SCOperaRemoteVideoViewProvider pause]
// Type encoding: v16@0:8
// Implementation: 0x107b8aef8

// -[SCOperaRemoteVideoViewProvider resume]
// Type encoding: v16@0:8
// Implementation: 0x107b8af4c

// -[SCOperaRemoteVideoViewProvider setPageableViewControllerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8afa0

// -[SCOperaRemoteVideoViewProvider setPausedForAttachment:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b8b000

// -[SCOperaRemoteVideoViewProvider overridePauseStateToPause]
// Type encoding: v16@0:8
// Implementation: 0x107b8b054

// -[SCOperaRemoteVideoViewProvider overridePauseStateToResume]
// Type encoding: v16@0:8
// Implementation: 0x107b8b0a8

// -[SCOperaRemoteVideoViewProvider setVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b8b0fc

// -[SCOperaRemoteVideoViewProvider setMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b8b150

// -[SCOperaRemoteVideoViewProvider start]
// Type encoding: v16@0:8
// Implementation: 0x107b8b1a4

// -[SCOperaRemoteVideoViewProvider stop]
// Type encoding: v16@0:8
// Implementation: 0x107b8b1f8

// -[SCOperaRemoteVideoViewProvider teardown]
// Type encoding: v16@0:8
// Implementation: 0x107b8b24c

// -[SCOperaRemoteVideoViewProvider viewWillBeginTransitionIn:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b8b2a0

// -[SCOperaRemoteVideoViewProvider viewDidCancelTransitionIn]
// Type encoding: v16@0:8
// Implementation: 0x107b8b2f4

// -[SCOperaRemoteVideoViewProvider viewWillBeginTransitionOut]
// Type encoding: v16@0:8
// Implementation: 0x107b8b348

// -[SCOperaRemoteVideoViewProvider viewDidCancelTransitionOut:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b8b39c

// -[SCOperaRemoteVideoViewProvider viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x107b8b3f0

// -[SCOperaRemoteVideoViewProvider viewWillFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x107b8b444

// -[SCOperaRemoteVideoViewProvider viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x107b8b498

// -[SCOperaRemoteVideoViewProvider viewDidPartiallyAppearWithCurrentViewRelativePosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107b8b4ec

// -[SCOperaRemoteVideoViewProvider viewWillFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x107b8b540

// -[SCOperaRemoteVideoViewProvider audioSessionDidBeginInterruption]
// Type encoding: v16@0:8
// Implementation: 0x107b8b594

// -[SCOperaRemoteVideoViewProvider audioSessionDidEndInterruption]
// Type encoding: v16@0:8
// Implementation: 0x107b8b5e8

// -[SCOperaRemoteVideoViewProvider isOverlay]
// Type encoding: B16@0:8
// Implementation: 0x107b8b63c

// -[SCOperaRemoteVideoViewProvider mediaHeightToWidthAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x107b8b690

// -[SCOperaRemoteVideoViewProvider mediaViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x107b8b6e4

// -[SCOperaRemoteVideoViewProvider currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107b8b738

// -[SCOperaRemoteVideoViewProvider duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107b8b78c

// -[SCOperaRemoteVideoViewProvider updateWithScreenshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8b7e0

// -[SCOperaRemoteVideoViewProvider didSetFullscreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b8b840

// -[SCOperaRemoteVideoViewProvider isShowingVideoFrame]
// Type encoding: B16@0:8
// Implementation: 0x107b8b894

// -[SCOperaRemoteVideoViewProvider loadVideo]
// Type encoding: v16@0:8
// Implementation: 0x107b8b89c

// -[SCOperaRemoteVideoViewProvider playVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b8b8f0

// -[SCOperaRemoteVideoViewProvider isPaused]
// Type encoding: B16@0:8
// Implementation: 0x107b8b944

// -[SCOperaRemoteVideoViewProvider setResumeVideoPosition:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b8b998

// -[SCOperaRemoteVideoViewProvider totalVideoDurationSeconds]
// Type encoding: d16@0:8
// Implementation: 0x107b8b9ec

// -[SCOperaRemoteVideoViewProvider videoParameters]
// Type encoding: @16@0:8
// Implementation: 0x107b8ba40

// -[SCOperaRemoteVideoViewProvider rotateVideoBasedOnOrientation]
// Type encoding: v16@0:8
// Implementation: 0x107b8ba94

// -[SCOperaRemoteVideoViewProvider imageSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107b8bae8

// -[SCOperaRemoteVideoViewProvider snapshotFromPlayer]
// Type encoding: @16@0:8
// Implementation: 0x107b8bb3c

// -[SCOperaRemoteVideoViewProvider setupPlaybackAnalyticsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8bb90

// -[SCOperaRemoteVideoViewProvider videoControlsViewCurrentTime:]
// Type encoding: {?=qiIq}24@0:8@16
// Implementation: 0x107b8bbf0

// -[SCOperaRemoteVideoViewProvider videoControlsViewDuration:]
// Type encoding: {?=qiIq}24@0:8@16
// Implementation: 0x107b8bbf4

// -[SCOperaRemoteVideoViewProvider videoID]
// Type encoding: @16@0:8
// Implementation: 0x107b8bbf8

// -[SCOperaRemoteVideoViewProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x107b8bc08

// -[SCOperaRemoteVideoViewProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8bc28

// -[SCOperaRemoteVideoViewProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b8bc3c

// +[SCOperaRemoteVideoViewProvider remoteVideoViewControllerWithConfiguration:operaDependencies:eventAnnouncer:isInline:bandwidthEstimator:]
// Type encoding: @52@0:8@16@24@32B40@44
// Implementation: 0x107b8ab4c

@end
