// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCViewControllerAuxViewActionAnimator
// Superclass: NSObject
// Address: 0x112b0f1e8

@interface SCViewControllerAuxViewActionAnimator

// Property: delegate; attributes: T@"<SCViewControllerAuxViewActionAnimatorDelegate>",W,N,V_delegate
// Property: baseView; attributes: T@"UIView",&,N,V_baseView
// Property: darkBackgroundView; attributes: T@"UIView",&,N,V_darkBackgroundView
// Property: destinationFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_destinationFrame
// Property: topInset; attributes: Td,N,V_topInset
// Property: bottomInset; attributes: Td,N,V_bottomInset
// Property: upNextPanRecognizer; attributes: T@"UIPanGestureRecognizer",&,N,V_upNextPanRecognizer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCViewControllerAuxViewActionAnimator initWithParentViewController:childViewController:operaBounds:shouldUseOperaBounds:]
// Type encoding: @68@0:8@16@24{CGRect={CGPoint=dd}{CGSize=dd}}32B64
// Implementation: 0x106a8331c

// -[SCViewControllerAuxViewActionAnimator _operaViewerRestingBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106a83414

// -[SCViewControllerAuxViewActionAnimator _setupPanRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x106a834a4

// -[SCViewControllerAuxViewActionAnimator resetGestureIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106a83530

// -[SCViewControllerAuxViewActionAnimator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106a835b4

// -[SCViewControllerAuxViewActionAnimator gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a83674

// -[SCViewControllerAuxViewActionAnimator gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106a8371c

// -[SCViewControllerAuxViewActionAnimator _didPan:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8379c

// -[SCViewControllerAuxViewActionAnimator _startTransition]
// Type encoding: v16@0:8
// Implementation: 0x106a8381c

// -[SCViewControllerAuxViewActionAnimator _performAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106a838e8

// -[SCViewControllerAuxViewActionAnimator _containerMaskView]
// Type encoding: @16@0:8
// Implementation: 0x106a83a08

// -[SCViewControllerAuxViewActionAnimator _cancelTransition]
// Type encoding: v16@0:8
// Implementation: 0x106a83b28

// -[SCViewControllerAuxViewActionAnimator _canCancelTransitionWithoutAnimation]
// Type encoding: B16@0:8
// Implementation: 0x106a83db0

// -[SCViewControllerAuxViewActionAnimator _animationEnded]
// Type encoding: v16@0:8
// Implementation: 0x106a83e7c

// -[SCViewControllerAuxViewActionAnimator _setupLoadingSpinner]
// Type encoding: v16@0:8
// Implementation: 0x106a83ec8

// -[SCViewControllerAuxViewActionAnimator _clearLoadingSpinner]
// Type encoding: v16@0:8
// Implementation: 0x106a83f24

// -[SCViewControllerAuxViewActionAnimator _animateSlideWithContainerMaskView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a83f4c

// -[SCViewControllerAuxViewActionAnimator _handlePanChangeWithGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a84264

// -[SCViewControllerAuxViewActionAnimator _percentageForValue:fromValue:toValue:]
// Type encoding: d40@0:8d16d24d32
// Implementation: 0x106a84520

// -[SCViewControllerAuxViewActionAnimator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a84544

// -[SCViewControllerAuxViewActionAnimator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8455c

// -[SCViewControllerAuxViewActionAnimator baseView]
// Type encoding: @16@0:8
// Implementation: 0x106a84568

// -[SCViewControllerAuxViewActionAnimator setBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a84570

// -[SCViewControllerAuxViewActionAnimator darkBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x106a845a0

// -[SCViewControllerAuxViewActionAnimator setDarkBackgroundView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a845a8

// -[SCViewControllerAuxViewActionAnimator destinationFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106a845d8

// -[SCViewControllerAuxViewActionAnimator setDestinationFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a845e4

// -[SCViewControllerAuxViewActionAnimator topInset]
// Type encoding: d16@0:8
// Implementation: 0x106a845f0

// -[SCViewControllerAuxViewActionAnimator setTopInset:]
// Type encoding: v24@0:8d16
// Implementation: 0x106a845f8

// -[SCViewControllerAuxViewActionAnimator bottomInset]
// Type encoding: d16@0:8
// Implementation: 0x106a84600

// -[SCViewControllerAuxViewActionAnimator setBottomInset:]
// Type encoding: v24@0:8d16
// Implementation: 0x106a84608

// -[SCViewControllerAuxViewActionAnimator upNextPanRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x106a84610

// -[SCViewControllerAuxViewActionAnimator setUpNextPanRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a84618

// -[SCViewControllerAuxViewActionAnimator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a84648

@end
