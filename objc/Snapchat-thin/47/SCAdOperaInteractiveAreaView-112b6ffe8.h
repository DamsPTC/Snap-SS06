// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdOperaInteractiveAreaView
// Superclass: UIView
// Address: 0x112b6ffe8

@interface SCAdOperaInteractiveAreaView

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCAdOperaInteractiveAreaViewDelegate>",W,N,V_delegate
// Property: dataSource; attributes: T@"<SCAdOperaInteractiveAreaViewDataSource>",W,N,V_dataSource

// -[SCAdOperaInteractiveAreaView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107ae8f38

// -[SCAdOperaInteractiveAreaView initWithPanGestureRecognizer:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ae8f90

// -[SCAdOperaInteractiveAreaView hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x107ae902c

// -[SCAdOperaInteractiveAreaView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107ae90d8

// -[SCAdOperaInteractiveAreaView configureWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ae9180

// -[SCAdOperaInteractiveAreaView setDelegateViewForGestures:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ae9214

// -[SCAdOperaInteractiveAreaView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107ae922c

// -[SCAdOperaInteractiveAreaView _setUp]
// Type encoding: v16@0:8
// Implementation: 0x107ae9234

// -[SCAdOperaInteractiveAreaView _didSwipe:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ae957c

// -[SCAdOperaInteractiveAreaView _handlePanGestureRecognizerBegan]
// Type encoding: v16@0:8
// Implementation: 0x107ae9618

// -[SCAdOperaInteractiveAreaView _handlePanGestureRecognizerChanged]
// Type encoding: v16@0:8
// Implementation: 0x107ae9730

// -[SCAdOperaInteractiveAreaView _updateSwipeLeftHintState]
// Type encoding: v16@0:8
// Implementation: 0x107ae9780

// -[SCAdOperaInteractiveAreaView _announceSwipeLeftHintThresholdCrossed:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ae9898

// -[SCAdOperaInteractiveAreaView _handlePanGestureRecognizerEnded]
// Type encoding: v16@0:8
// Implementation: 0x107ae9964

// -[SCAdOperaInteractiveAreaView _handlePanGestureRecognizerCancelled]
// Type encoding: v16@0:8
// Implementation: 0x107ae99d0

// -[SCAdOperaInteractiveAreaView _checkSwipeGestureThreshold]
// Type encoding: v16@0:8
// Implementation: 0x107ae99e8

// -[SCAdOperaInteractiveAreaView _handleSwipeRecognizedWithSpeed:distance:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x107ae9bd4

// -[SCAdOperaInteractiveAreaView _resetPanGestureRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x107ae9c48

// -[SCAdOperaInteractiveAreaView _didSwipeWithSwipeRecognized:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ae9ca0

// -[SCAdOperaInteractiveAreaView _speedFromVelocity:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x107aea118

// -[SCAdOperaInteractiveAreaView _distanceFromTranslation:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x107aea198

// -[SCAdOperaInteractiveAreaView _swipeDirectionFromPanGestureRecognizer:]
// Type encoding: q24@0:8@16
// Implementation: 0x107aea22c

// -[SCAdOperaInteractiveAreaView _edgeInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107aea400

// -[SCAdOperaInteractiveAreaView _isTouchPointWithinInteractiveArea:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x107aea70c

// -[SCAdOperaInteractiveAreaView _swipeDirectionFromHorizontalMovement:verticalMovement:leftAngle:rightAngle:]
// Type encoding: q48@0:8d16d24d32d40
// Implementation: 0x107aea7ac

// -[SCAdOperaInteractiveAreaView _swipeDirectionForSwipeUpFromHorizontalMovement:verticalMovement:leftAngle:rightAngle:]
// Type encoding: q48@0:8d16d24d32d40
// Implementation: 0x107aea844

// -[SCAdOperaInteractiveAreaView _swipeDirectionForSwipeLeftFromHorizontalMovement:verticalMovement:leftAngle:rightAngle:]
// Type encoding: q48@0:8d16d24d32d40
// Implementation: 0x107aea908

// -[SCAdOperaInteractiveAreaView _isOperaAnimating]
// Type encoding: B16@0:8
// Implementation: 0x107aea9cc

// -[SCAdOperaInteractiveAreaView delegate]
// Type encoding: @16@0:8
// Implementation: 0x107aeaa48

// -[SCAdOperaInteractiveAreaView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aeaa68

// -[SCAdOperaInteractiveAreaView dataSource]
// Type encoding: @16@0:8
// Implementation: 0x107aeaa7c

// -[SCAdOperaInteractiveAreaView setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aeaa9c

// -[SCAdOperaInteractiveAreaView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aeaab0

@end
