// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBoostScrubberControlGesture
// Superclass: UIPanGestureRecognizer
// Address: 0x112b7bb18

@interface SCBoostScrubberControlGesture

// Property: scrubbingDelegate; attributes: T@"<SCBoostScrubberControlGestureDelegate>",W,N,V_scrubbingDelegate
// Property: preventedPanGestureOrNil; attributes: T@"UIGestureRecognizer",W,N,V_preventedPanGestureOrNil
// Property: progressBarView; attributes: T@"UIView",W,N,V_progressBarView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBoostScrubberControlGesture initWithProgressBarView:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107d2ed24

// -[SCBoostScrubberControlGesture handlePan:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d2edec

// -[SCBoostScrubberControlGesture _allowedScrubbingRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x107d2f008

// -[SCBoostScrubberControlGesture gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107d2f08c

// -[SCBoostScrubberControlGesture gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107d2f094

// -[SCBoostScrubberControlGesture gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107d2f154

// -[SCBoostScrubberControlGesture gestureRecognizer:shouldRequireFailureOfGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107d2f15c

// -[SCBoostScrubberControlGesture canPreventGestureRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d2f164

// -[SCBoostScrubberControlGesture canBePreventedByGestureRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d2f16c

// -[SCBoostScrubberControlGesture dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107d2f23c

// -[SCBoostScrubberControlGesture progressBarView]
// Type encoding: @16@0:8
// Implementation: 0x107d2f29c

// -[SCBoostScrubberControlGesture setProgressBarView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d2f2bc

// -[SCBoostScrubberControlGesture scrubbingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107d2f2d0

// -[SCBoostScrubberControlGesture setScrubbingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d2f2f0

// -[SCBoostScrubberControlGesture preventedPanGestureOrNil]
// Type encoding: @16@0:8
// Implementation: 0x107d2f304

// -[SCBoostScrubberControlGesture setPreventedPanGestureOrNil:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d2f324

// -[SCBoostScrubberControlGesture .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d2f338

@end
