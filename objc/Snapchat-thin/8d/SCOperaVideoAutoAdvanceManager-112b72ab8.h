// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaVideoAutoAdvanceManager
// Superclass: NSObject
// Address: 0x112b72ab8

@interface SCOperaVideoAutoAdvanceManager

// Property: isLooping; attributes: TB,R,N,V_isLooping
// Property: isAutoAdvanceEnabled; attributes: TB,R,N,V_isAutoAdvanceEnabled
// Property: canLoopWhenReachEnd; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaVideoAutoAdvanceManager initWithConfigProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b3c580

// -[SCOperaVideoAutoAdvanceManager canLoopWhenReachEnd]
// Type encoding: B16@0:8
// Implementation: 0x107b3c620

// -[SCOperaVideoAutoAdvanceManager updateWithLayer:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b3c668

// -[SCOperaVideoAutoAdvanceManager updateWithProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b3c74c

// -[SCOperaVideoAutoAdvanceManager incrementCurrentLoopNumberIfEnabled]
// Type encoding: v16@0:8
// Implementation: 0x107b3c80c

// -[SCOperaVideoAutoAdvanceManager resetCurrentLoopCount]
// Type encoding: v16@0:8
// Implementation: 0x107b3c844

// -[SCOperaVideoAutoAdvanceManager reset]
// Type encoding: v16@0:8
// Implementation: 0x107b3c84c

// -[SCOperaVideoAutoAdvanceManager elapsedTimeWithPlayerCurrentTime:mediaDurationSeconds:]
// Type encoding: {?=qiIq}48@0:8{?=qiIq}16d40
// Implementation: 0x107b3c870

// -[SCOperaVideoAutoAdvanceManager currentProgressTimeWithMediaProgressTime:mediaDurationSeconds:]
// Type encoding: d32@0:8d16d24
// Implementation: 0x107b3c8b8

// -[SCOperaVideoAutoAdvanceManager playbackDurationWithMediaDuration:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x107b3c8c8

// -[SCOperaVideoAutoAdvanceManager playbackDurationSecsWithMediaDurationSecs:]
// Type encoding: d24@0:8d16
// Implementation: 0x107b3c8f8

// -[SCOperaVideoAutoAdvanceManager _hasNotReachedMaxLoopNumberIfEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107b3c914

// -[SCOperaVideoAutoAdvanceManager logShakeToReportState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b3c944

// -[SCOperaVideoAutoAdvanceManager isLooping]
// Type encoding: B16@0:8
// Implementation: 0x107b3cae0

// -[SCOperaVideoAutoAdvanceManager isAutoAdvanceEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107b3cae8

// -[SCOperaVideoAutoAdvanceManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b3caf0

@end
