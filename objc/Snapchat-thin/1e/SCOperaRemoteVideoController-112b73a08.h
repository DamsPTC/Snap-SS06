// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaRemoteVideoController
// Superclass: NSObject
// Address: 0x112b73a08

@interface SCOperaRemoteVideoController

// Property: videoViewModelObserver; attributes: T@"SCObservable",R,N,V_videoViewModelObserver
// Property: shouldShowCaption; attributes: TB,R,N,V_shouldShowCaption
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaRemoteVideoController initWithVideoID:videoURL:configuration:operaDependencies:eventAnnouncer:operaPage:notificationCenter:kvoController:isInline:playerQueueManager:delegate:videoViewModel:remoteVideoProxy:bandwidthEstimator:]
// Type encoding: @124@0:8@16@24@32@40@48@56@64@72B80@84@92@100@108@116
// Implementation: 0x107b7fbd4

// -[SCOperaRemoteVideoController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107b7ffd4

// -[SCOperaRemoteVideoController didReceiveMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x107b80030

// -[SCOperaRemoteVideoController setupPlaybackAnalyticsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8003c

// -[SCOperaRemoteVideoController _observePlaybackEventLifecycle]
// Type encoding: v16@0:8
// Implementation: 0x107b80048

// -[SCOperaRemoteVideoController _observeChangeOfCurrentItem]
// Type encoding: v16@0:8
// Implementation: 0x107b8030c

// -[SCOperaRemoteVideoController _observePlaybackBufferForPlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b80520

// -[SCOperaRemoteVideoController _observeMediaServicesWereLostNotification]
// Type encoding: v16@0:8
// Implementation: 0x107b807f0

// -[SCOperaRemoteVideoController _unobservePlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b809b8

// -[SCOperaRemoteVideoController _didBecomeReady:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b80a84

// -[SCOperaRemoteVideoController _didSetToPlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b80fb0

// -[SCOperaRemoteVideoController _didProgress:progress:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107b81140

// -[SCOperaRemoteVideoController _didPause:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b81208

// -[SCOperaRemoteVideoController _didStall:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8135c

// -[SCOperaRemoteVideoController _didEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b813ec

// -[SCOperaRemoteVideoController _didFail:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b81598

// -[SCOperaRemoteVideoController _playerDidResumeFromStall]
// Type encoding: v16@0:8
// Implementation: 0x107b81824

// -[SCOperaRemoteVideoController _addVideoOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b8184c

// -[SCOperaRemoteVideoController _removeVideoOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b81978

// -[SCOperaRemoteVideoController _addCaptionsOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b819b4

// -[SCOperaRemoteVideoController _removeCaptionsOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b81a80

// -[SCOperaRemoteVideoController legibleOutput:didOutputAttributedStrings:nativeSampleBuffers:forItemTime:]
// Type encoding: v64@0:8@16@24@32{?=qiIq}40
// Implementation: 0x107b81ad4

// -[SCOperaRemoteVideoController state:didChangeTag:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107b81b38

// -[SCOperaRemoteVideoController updateWithAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x107b81ff0

// -[SCOperaRemoteVideoController _updateViewModelForProgress:captions:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x107b81ff8

// -[SCOperaRemoteVideoController _toggleCaption:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b82168

// -[SCOperaRemoteVideoController _updateCaptionBasedOnCurrentDisplayStrategy]
// Type encoding: v16@0:8
// Implementation: 0x107b8247c

// -[SCOperaRemoteVideoController _configureRemoteVideo]
// Type encoding: v16@0:8
// Implementation: 0x107b82680

// -[SCOperaRemoteVideoController _startBufferingVideo]
// Type encoding: v16@0:8
// Implementation: 0x107b82860

// -[SCOperaRemoteVideoController _terminateVideo]
// Type encoding: v16@0:8
// Implementation: 0x107b829c0

// -[SCOperaRemoteVideoController setProgress:forIndex:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x107b82ab0

// -[SCOperaRemoteVideoController _setPlayerItemsFromProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b82b68

// -[SCOperaRemoteVideoController didFetchVideoPropertiesWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b82d90

// -[SCOperaRemoteVideoController _seekToTime:completionHandler:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x107b82e0c

// -[SCOperaRemoteVideoController _seekToTime:tolerance:completionHandler:]
// Type encoding: v56@0:8d16{?=qiIq}24@?48
// Implementation: 0x107b82e48

// -[SCOperaRemoteVideoController seekToTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b83044

// -[SCOperaRemoteVideoController remoteVideoProxyDidAttemptStartup]
// Type encoding: v16@0:8
// Implementation: 0x107b8304c

// -[SCOperaRemoteVideoController _totalVideoDurationSeconds]
// Type encoding: d16@0:8
// Implementation: 0x107b83050

// -[SCOperaRemoteVideoController _numberOfBytesTransferred]
// Type encoding: q16@0:8
// Implementation: 0x107b830e4

// -[SCOperaRemoteVideoController imageSnapshotFromPlayer]
// Type encoding: @16@0:8
// Implementation: 0x107b83278

// -[SCOperaRemoteVideoController toggleVolume:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b83330

// -[SCOperaRemoteVideoController showCaption:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b835a8

// -[SCOperaRemoteVideoController showCaption:saveState:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x107b835b0

// -[SCOperaRemoteVideoController startBuffering]
// Type encoding: v16@0:8
// Implementation: 0x107b835bc

// -[SCOperaRemoteVideoController playVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b835c8

// -[SCOperaRemoteVideoController isPaused]
// Type encoding: B16@0:8
// Implementation: 0x107b836f0

// -[SCOperaRemoteVideoController pauseVideo]
// Type encoding: v16@0:8
// Implementation: 0x107b83744

// -[SCOperaRemoteVideoController isShowingVideoFrame]
// Type encoding: B16@0:8
// Implementation: 0x107b83770

// -[SCOperaRemoteVideoController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x107b83790

// -[SCOperaRemoteVideoController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x107b8393c

// -[SCOperaRemoteVideoController sendEventDidChangeConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x107b83948

// -[SCOperaRemoteVideoController _sendMediaStartsToDisplayIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107b839c0

// -[SCOperaRemoteVideoController videoParameters]
// Type encoding: @16@0:8
// Implementation: 0x107b83ab4

// -[SCOperaRemoteVideoController tearDown]
// Type encoding: v16@0:8
// Implementation: 0x107b83ef4

// -[SCOperaRemoteVideoController videoViewModelObserver]
// Type encoding: @16@0:8
// Implementation: 0x107b83f44

// -[SCOperaRemoteVideoController shouldShowCaption]
// Type encoding: B16@0:8
// Implementation: 0x107b83f4c

// -[SCOperaRemoteVideoController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b83f54

@end
