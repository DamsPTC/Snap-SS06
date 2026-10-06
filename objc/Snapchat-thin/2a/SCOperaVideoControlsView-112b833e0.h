// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaVideoControlsView
// Superclass: UIView
// Address: 0x112b833e0

@interface SCOperaVideoControlsView

// Property: videoControllingDelegate; attributes: T@"<SCOperaVideoViewControllingDelegate>",W,N,V_videoControllingDelegate
// Property: dataSource; attributes: T@"<SCOperaVideoViewControllingDataSource>",W,N,V_dataSource
// Property: allowsTapToSeek; attributes: TB,N,V_allowsTapToSeek
// Property: delegateViewForGestures; attributes: T@"UIView",W,N,V_delegateViewForGestures
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaVideoControlsView seekPointBuffer]
// Type encoding: d16@0:8
// Implementation: 0x107de2614

// -[SCOperaVideoControlsView setupGesture]
// Type encoding: v16@0:8
// Implementation: 0x107de261c

// -[SCOperaVideoControlsView _didTapView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de26bc

// -[SCOperaVideoControlsView _SCOperaFindNextChapterStartTimeSeconds:chapterIntervals:isForwardTap:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x107de2760

// -[SCOperaVideoControlsView updateControlsWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de2970

// -[SCOperaVideoControlsView updateElapsedTimeRightPadding:animated:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x107de2974

// -[SCOperaVideoControlsView updateScrubberTopOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x107de2978

// -[SCOperaVideoControlsView toggleRotateLeftButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x107de297c

// -[SCOperaVideoControlsView togglePlayButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x107de2980

// -[SCOperaVideoControlsView toggleCaptionButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x107de2984

// -[SCOperaVideoControlsView toggleAudioButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x107de2988

// -[SCOperaVideoControlsView setRotateButtonVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x107de298c

// -[SCOperaVideoControlsView seekByTap:]
// Type encoding: v20@0:8B16
// Implementation: 0x107de2990

// -[SCOperaVideoControlsView adjustForTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x107de2b34

// -[SCOperaVideoControlsView setDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x107de2b44

// -[SCOperaVideoControlsView setHalfFillDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x107de2b48

// -[SCOperaVideoControlsView fadeControls]
// Type encoding: v16@0:8
// Implementation: 0x107de2b4c

// -[SCOperaVideoControlsView showControls]
// Type encoding: v16@0:8
// Implementation: 0x107de2b50

// -[SCOperaVideoControlsView hideControls:]
// Type encoding: v20@0:8B16
// Implementation: 0x107de2b54

// -[SCOperaVideoControlsView resetControls]
// Type encoding: v16@0:8
// Implementation: 0x107de2b58

// -[SCOperaVideoControlsView setAllowTapsWhenHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x107de2b5c

// -[SCOperaVideoControlsView controlsVisible]
// Type encoding: B16@0:8
// Implementation: 0x107de2b6c

// -[SCOperaVideoControlsView isPauseButtonON]
// Type encoding: B16@0:8
// Implementation: 0x107de2b74

// -[SCOperaVideoControlsView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107de2b7c

// -[SCOperaVideoControlsView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107de2b84

// -[SCOperaVideoControlsView gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x107de2bf4

// -[SCOperaVideoControlsView videoControllingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107de2c60

// -[SCOperaVideoControlsView setVideoControllingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de2c80

// -[SCOperaVideoControlsView dataSource]
// Type encoding: @16@0:8
// Implementation: 0x107de2c94

// -[SCOperaVideoControlsView setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de2cb4

// -[SCOperaVideoControlsView allowsTapToSeek]
// Type encoding: B16@0:8
// Implementation: 0x107de2cc8

// -[SCOperaVideoControlsView setAllowsTapToSeek:]
// Type encoding: v20@0:8B16
// Implementation: 0x107de2cd8

// -[SCOperaVideoControlsView delegateViewForGestures]
// Type encoding: @16@0:8
// Implementation: 0x107de2ce8

// -[SCOperaVideoControlsView setDelegateViewForGestures:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de2d08

// -[SCOperaVideoControlsView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107de2d1c

@end
