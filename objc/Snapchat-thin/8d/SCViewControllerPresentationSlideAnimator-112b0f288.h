// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCViewControllerPresentationSlideAnimator
// Superclass: NSObject
// Address: 0x112b0f288

@interface SCViewControllerPresentationSlideAnimator

// Property: delegate; attributes: T@"<SCViewControllerPresentationAnimatorDelegate>",W,N,V_delegate
// Property: baseViewDelegate; attributes: T@"<SCViewControllerPresentationAnimatorBaseViewDelegate>",W,N,V_baseViewDelegate
// Property: darkBackgroundView; attributes: T@"UIView",R,N,V_darkBackgroundView
// Property: baseView; attributes: T@"UIView",R,W,N,V_baseView
// Property: startingFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_startingFrame
// Property: dismissalMask; attributes: T@"CALayer",R,N,V_dismissalMask
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCViewControllerPresentationSlideAnimator initWithParentViewController:childViewController:baseView:baseViewBehavior:baseViewOrientation:caTransactionFlushMode:]
// Type encoding: @64@0:8@16@24@32q40q48q56
// Implementation: 0x106a89740

// -[SCViewControllerPresentationSlideAnimator operaBoundsDidChange:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a897f8

// -[SCViewControllerPresentationSlideAnimator animateTransition:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a89800

// -[SCViewControllerPresentationSlideAnimator updateBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a89bf0

// -[SCViewControllerPresentationSlideAnimator setupAnimationForBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a89bf4

// -[SCViewControllerPresentationSlideAnimator _initDarkBackgroundView]
// Type encoding: v16@0:8
// Implementation: 0x106a89bf8

// -[SCViewControllerPresentationSlideAnimator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a89c64

// -[SCViewControllerPresentationSlideAnimator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a89c7c

// -[SCViewControllerPresentationSlideAnimator baseViewDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106a89c88

// -[SCViewControllerPresentationSlideAnimator setBaseViewDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a89ca0

// -[SCViewControllerPresentationSlideAnimator darkBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x106a89cac

// -[SCViewControllerPresentationSlideAnimator baseView]
// Type encoding: @16@0:8
// Implementation: 0x106a89cb4

// -[SCViewControllerPresentationSlideAnimator startingFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106a89ccc

// -[SCViewControllerPresentationSlideAnimator setStartingFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a89cd8

// -[SCViewControllerPresentationSlideAnimator dismissalMask]
// Type encoding: @16@0:8
// Implementation: 0x106a89ce4

// -[SCViewControllerPresentationSlideAnimator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a89cec

@end
