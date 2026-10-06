// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaRemoteVideoView
// Superclass: UIView
// Address: 0x112b73b48

@interface SCOperaRemoteVideoView

// Property: firstFrameImageView; attributes: T@"UIImageView",&,N,V_firstFrameImageView
// Property: controlsView; attributes: T@"SCOperaStandardVideoControlsView",&,N,V_controlsView
// Property: activityIndicator; attributes: T@"SCLoadingIndicatorView",&,N,V_activityIndicator
// Property: screenshot; attributes: T@"UIView",&,N,V_screenshot
// Property: playerView; attributes: T@"SCOperaPlayerView",&,N,V_playerView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaRemoteVideoView initWithFrame:delegate:primaryColor:disableControls:hideControls:showActionMenuButtonEnabled:]
// Type encoding: @76@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56B64B68B72
// Implementation: 0x107b89298

// -[SCOperaRemoteVideoView _setupPlayerView]
// Type encoding: v16@0:8
// Implementation: 0x107b893d0

// -[SCOperaRemoteVideoView _setupCaptionLabel]
// Type encoding: v16@0:8
// Implementation: 0x107b8947c

// -[SCOperaRemoteVideoView updateWithPrimaryColor:showActionMenuButtonEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b89520

// -[SCOperaRemoteVideoView setRotateButtonVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b895ac

// -[SCOperaRemoteVideoView _setupTapGestureRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x107b895e4

// -[SCOperaRemoteVideoView setupControlsViewWithPrimaryColor:hideControls:showActionMenuButtonEnabled:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x107b89638

// -[SCOperaRemoteVideoView setupSpinnerWithPrimaryColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b89724

// -[SCOperaRemoteVideoView setupFirstFrameView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8987c

// -[SCOperaRemoteVideoView setupScreenshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b899d8

// -[SCOperaRemoteVideoView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107b89b08

// -[SCOperaRemoteVideoView _updateScreenshotFrame]
// Type encoding: v16@0:8
// Implementation: 0x107b89f44

// -[SCOperaRemoteVideoView showActivityIndicator:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b8a164

// -[SCOperaRemoteVideoView fadeInControlsWithDuration:completion:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x107b8a1a4

// -[SCOperaRemoteVideoView fadeOutControlsWithDuration:completion:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x107b8a29c

// -[SCOperaRemoteVideoView _didTap]
// Type encoding: v16@0:8
// Implementation: 0x107b8a33c

// -[SCOperaRemoteVideoView gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107b8a378

// -[SCOperaRemoteVideoView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8a380

// -[SCOperaRemoteVideoView mediaViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x107b8a718

// -[SCOperaRemoteVideoView mediaHeightToWidthAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x107b8a7cc

// -[SCOperaRemoteVideoView setAspectRatio:forceLayout:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x107b8a8d8

// -[SCOperaRemoteVideoView firstFrameImageView]
// Type encoding: @16@0:8
// Implementation: 0x107b8a920

// -[SCOperaRemoteVideoView setFirstFrameImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8a930

// -[SCOperaRemoteVideoView controlsView]
// Type encoding: @16@0:8
// Implementation: 0x107b8a970

// -[SCOperaRemoteVideoView setControlsView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8a980

// -[SCOperaRemoteVideoView activityIndicator]
// Type encoding: @16@0:8
// Implementation: 0x107b8a9c0

// -[SCOperaRemoteVideoView setActivityIndicator:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8a9d0

// -[SCOperaRemoteVideoView screenshot]
// Type encoding: @16@0:8
// Implementation: 0x107b8aa10

// -[SCOperaRemoteVideoView setScreenshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8aa20

// -[SCOperaRemoteVideoView playerView]
// Type encoding: @16@0:8
// Implementation: 0x107b8aa60

// -[SCOperaRemoteVideoView setPlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8aa70

// -[SCOperaRemoteVideoView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b8aab0

// +[SCOperaRemoteVideoView viewWithFrame:delegate:primaryColor:disableControls:hideControls:showActionMenuButtonEnabled:]
// Type encoding: @76@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56B64B68B72
// Implementation: 0x107b891a8

@end
