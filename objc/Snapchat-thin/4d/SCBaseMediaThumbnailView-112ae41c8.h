// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBaseMediaThumbnailView
// Superclass: UIView
// Address: 0x112ae41c8

@interface SCBaseMediaThumbnailView

// Property: activityIndicator; attributes: T@"SCLoadingIndicatorView",&,N,V_activityIndicator
// Property: blockingOverlayView; attributes: T@"UIView",&,N,V_blockingOverlayView
// Property: failedToSendLabel; attributes: T@"UILabel",&,N,V_failedToSendLabel
// Property: player; attributes: T@"AVPlayer",&,N,V_player
// Property: tapToLoadLabel; attributes: T@"UILabel",&,N,V_tapToLoadLabel
// Property: failedToLoadLabel; attributes: T@"UILabel",&,N,V_failedToLoadLabel
// Property: storedAnimatedImage; attributes: T@"FLAnimatedImage",&,N,V_storedAnimatedImage
// Property: videoObserveController; attributes: T@"FBKVOController",&,N,V_videoObserveController
// Property: imageView; attributes: T@"FLAnimatedImageView",&,N,V_imageView
// Property: videoOverlayView; attributes: T@"UIImageView",&,N,V_videoOverlayView
// Property: videoView; attributes: T@"SCPlayerView",&,N,V_videoView
// Property: viewModel; attributes: T@"SCBaseMediaThumbnailViewModel",&,N,V_viewModel
// Property: thumbnailSize; attributes: T{CGSize=dd},N,V_thumbnailSize
// Property: parentVC; attributes: T@"UIViewController<SCChatCellBaseGestureDelegate><SCChatCellMessageStateUpdateDelegate>",R,W,N,V_parentVC
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBaseMediaThumbnailView initWithParentVC:delegate:chatMediaFetcher:loadMessageLogger:performer:configProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10650d6d4

// -[SCBaseMediaThumbnailView _initSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10650d880

// -[SCBaseMediaThumbnailView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10650d920

// -[SCBaseMediaThumbnailView _centerYOffsetWithThumbnailHeight:]
// Type encoding: d24@0:8d16
// Implementation: 0x10650d9f4

// -[SCBaseMediaThumbnailView _initImageView]
// Type encoding: v16@0:8
// Implementation: 0x10650da08

// -[SCBaseMediaThumbnailView _initBlockingOverlayView]
// Type encoding: v16@0:8
// Implementation: 0x10650dbcc

// -[SCBaseMediaThumbnailView _initGestures]
// Type encoding: v16@0:8
// Implementation: 0x10650de10

// -[SCBaseMediaThumbnailView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10650de80

// -[SCBaseMediaThumbnailView activityIndicator]
// Type encoding: @16@0:8
// Implementation: 0x10650df20

// -[SCBaseMediaThumbnailView layoutActivityIndicator]
// Type encoding: v16@0:8
// Implementation: 0x10650dfd0

// -[SCBaseMediaThumbnailView tapToLoadLabel]
// Type encoding: @16@0:8
// Implementation: 0x10650e184

// -[SCBaseMediaThumbnailView failedToSendLabel]
// Type encoding: @16@0:8
// Implementation: 0x10650e264

// -[SCBaseMediaThumbnailView failedToLoadLabel]
// Type encoding: @16@0:8
// Implementation: 0x10650e2fc

// -[SCBaseMediaThumbnailView contentUnavailableLabel]
// Type encoding: @16@0:8
// Implementation: 0x10650e394

// -[SCBaseMediaThumbnailView player]
// Type encoding: @16@0:8
// Implementation: 0x10650e42c

// -[SCBaseMediaThumbnailView videoOverlayView]
// Type encoding: @16@0:8
// Implementation: 0x10650e5f0

// -[SCBaseMediaThumbnailView videoView]
// Type encoding: @16@0:8
// Implementation: 0x10650e7f8

// -[SCBaseMediaThumbnailView videoURL]
// Type encoding: @16@0:8
// Implementation: 0x10650ea18

// -[SCBaseMediaThumbnailView setMediaViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650ea84

// -[SCBaseMediaThumbnailView _handleFetchedGif:forMedia:error:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10650f0c4

// -[SCBaseMediaThumbnailView _handleFetchedThumbnailImage:forMedia:error:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10650f228

// -[SCBaseMediaThumbnailView _setUpAccessibilityValueForViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650f3a0

// -[SCBaseMediaThumbnailView _mediaLoadFailedAndIsFatal:]
// Type encoding: v20@0:8B16
// Implementation: 0x10650f3a4

// -[SCBaseMediaThumbnailView _renderAnimatedImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650f3f4

// -[SCBaseMediaThumbnailView _renderThumbnailImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650f454

// -[SCBaseMediaThumbnailView _onRenderingDone]
// Type encoding: v16@0:8
// Implementation: 0x10650f4b4

// -[SCBaseMediaThumbnailView _fetchAndAttachVideoOverlay]
// Type encoding: v16@0:8
// Implementation: 0x10650f4d0

// -[SCBaseMediaThumbnailView _handleVideoOverlayImage:forMedia:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10650f64c

// -[SCBaseMediaThumbnailView prepareVideoIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10650f6ec

// -[SCBaseMediaThumbnailView setUpVideo]
// Type encoding: v16@0:8
// Implementation: 0x10650f78c

// -[SCBaseMediaThumbnailView _onSilentVideoAssetGenerated:forVideoURL:mediaId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10650fa4c

// -[SCBaseMediaThumbnailView _handlePlayerItemLoaded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650fcb4

// -[SCBaseMediaThumbnailView _setUpAVPlayerWithAssetAync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10650fe60

// -[SCBaseMediaThumbnailView _replacePlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065101d4

// -[SCBaseMediaThumbnailView _stopObservingPlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065102bc

// -[SCBaseMediaThumbnailView _beginObservingPlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10651030c

// -[SCBaseMediaThumbnailView _setUpSpinners]
// Type encoding: v16@0:8
// Implementation: 0x106510570

// -[SCBaseMediaThumbnailView _handleReadyToDisplay]
// Type encoding: v16@0:8
// Implementation: 0x106510600

// -[SCBaseMediaThumbnailView _setUpCompleteDisplay]
// Type encoding: v16@0:8
// Implementation: 0x106510640

// -[SCBaseMediaThumbnailView _setUpCompleteDisplayWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1065108e0

// -[SCBaseMediaThumbnailView setUpPendingDisplay]
// Type encoding: v16@0:8
// Implementation: 0x106510978

// -[SCBaseMediaThumbnailView contentPopulated]
// Type encoding: B16@0:8
// Implementation: 0x106510d8c

// -[SCBaseMediaThumbnailView _showSpinner]
// Type encoding: v16@0:8
// Implementation: 0x106510e00

// -[SCBaseMediaThumbnailView _hideSpinner]
// Type encoding: v16@0:8
// Implementation: 0x106510e58

// -[SCBaseMediaThumbnailView resetContents]
// Type encoding: v16@0:8
// Implementation: 0x106510eb0

// -[SCBaseMediaThumbnailView resetContentsAndRemovePlayer]
// Type encoding: v16@0:8
// Implementation: 0x10651101c

// -[SCBaseMediaThumbnailView pauseVideo]
// Type encoding: v16@0:8
// Implementation: 0x10651104c

// -[SCBaseMediaThumbnailView resumeVideo]
// Type encoding: v16@0:8
// Implementation: 0x1065110b8

// -[SCBaseMediaThumbnailView _readyToRemoveOverlay]
// Type encoding: B16@0:8
// Implementation: 0x1065111a8

// -[SCBaseMediaThumbnailView hideBlockingOverlayWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1065112a8

// -[SCBaseMediaThumbnailView _updateBlockingOverlay]
// Type encoding: v16@0:8
// Implementation: 0x1065113b0

// -[SCBaseMediaThumbnailView _showSendingBlockingOverlay]
// Type encoding: v16@0:8
// Implementation: 0x10651140c

// -[SCBaseMediaThumbnailView _showLoadingBlockingOverlay]
// Type encoding: v16@0:8
// Implementation: 0x1065114d4

// -[SCBaseMediaThumbnailView playerItemDidReachEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x106511600

// -[SCBaseMediaThumbnailView resetPlayer]
// Type encoding: v16@0:8
// Implementation: 0x106511838

// -[SCBaseMediaThumbnailView _mediaShouldHandleGestures]
// Type encoding: B16@0:8
// Implementation: 0x106511894

// -[SCBaseMediaThumbnailView gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106511898

// -[SCBaseMediaThumbnailView handleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065118b8

// -[SCBaseMediaThumbnailView _createFullScreenView]
// Type encoding: v16@0:8
// Implementation: 0x10651192c

// -[SCBaseMediaThumbnailView startAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106511ae4

// -[SCBaseMediaThumbnailView stopAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106511af4

// -[SCBaseMediaThumbnailView _thumbnailLabelWithText:]
// Type encoding: @24@0:8@16
// Implementation: 0x106511b04

// -[SCBaseMediaThumbnailView _insertThumbnailLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106511be4

// -[SCBaseMediaThumbnailView gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106511eb0

// -[SCBaseMediaThumbnailView play]
// Type encoding: v16@0:8
// Implementation: 0x106511ef4

// -[SCBaseMediaThumbnailView pause]
// Type encoding: v16@0:8
// Implementation: 0x106511ef8

// -[SCBaseMediaThumbnailView viewModel]
// Type encoding: @16@0:8
// Implementation: 0x106511efc

// -[SCBaseMediaThumbnailView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106511f0c

// -[SCBaseMediaThumbnailView thumbnailSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106511f4c

// -[SCBaseMediaThumbnailView setThumbnailSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x106511f60

// -[SCBaseMediaThumbnailView parentVC]
// Type encoding: @16@0:8
// Implementation: 0x106511f74

// -[SCBaseMediaThumbnailView setActivityIndicator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106511f94

// -[SCBaseMediaThumbnailView blockingOverlayView]
// Type encoding: @16@0:8
// Implementation: 0x106511fd4

// -[SCBaseMediaThumbnailView setBlockingOverlayView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106511fe4

// -[SCBaseMediaThumbnailView setFailedToSendLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106512024

// -[SCBaseMediaThumbnailView setPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106512064

// -[SCBaseMediaThumbnailView setTapToLoadLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065120a4

// -[SCBaseMediaThumbnailView setFailedToLoadLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065120e4

// -[SCBaseMediaThumbnailView storedAnimatedImage]
// Type encoding: @16@0:8
// Implementation: 0x106512124

// -[SCBaseMediaThumbnailView setStoredAnimatedImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106512134

// -[SCBaseMediaThumbnailView videoObserveController]
// Type encoding: @16@0:8
// Implementation: 0x106512174

// -[SCBaseMediaThumbnailView setVideoObserveController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106512184

// -[SCBaseMediaThumbnailView imageView]
// Type encoding: @16@0:8
// Implementation: 0x1065121c4

// -[SCBaseMediaThumbnailView setImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065121d4

// -[SCBaseMediaThumbnailView setVideoOverlayView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106512214

// -[SCBaseMediaThumbnailView setVideoView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106512254

// -[SCBaseMediaThumbnailView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106512294

// +[SCBaseMediaThumbnailView borderColor]
// Type encoding: @16@0:8
// Implementation: 0x106511e74

// +[SCBaseMediaThumbnailView grayChatColor]
// Type encoding: @16@0:8
// Implementation: 0x106511e84

// +[SCBaseMediaThumbnailView labelFont]
// Type encoding: @16@0:8
// Implementation: 0x106511e9c

// +[SCBaseMediaThumbnailView defaultBackgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x106511eac

@end
