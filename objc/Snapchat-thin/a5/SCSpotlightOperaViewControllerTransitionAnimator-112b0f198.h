// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightOperaViewControllerTransitionAnimator
// Superclass: NSObject
// Address: 0x112b0f198

@interface SCSpotlightOperaViewControllerTransitionAnimator

// Property: dismissInteractionType; attributes: TQ,N,V_dismissInteractionType
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: parentVC; attributes: T@"UIViewController",R,W,N,V_parentVC
// Property: childVC; attributes: T@"UIViewController",W,N,V_childVC
// Property: delegate; attributes: T@"<SCViewControllerTransitionAnimatorDelegate>",W,N,V_delegate
// Property: baseViewFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_baseViewFrame
// Property: baseView; attributes: T@"UIView",W,N,V_baseView
// Property: volumeController; attributes: T@"<SCPullToDismissVolumeController>",W,N,V_volumeController

// -[SCSpotlightOperaViewControllerTransitionAnimator initWithParentViewController:dismissGestureRecognizer:baseView:storiesConfigProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106a82624

// -[SCSpotlightOperaViewControllerTransitionAnimator present:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a827e8

// -[SCSpotlightOperaViewControllerTransitionAnimator dismiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a828c8

// -[SCSpotlightOperaViewControllerTransitionAnimator updateDismissalAnimationVolumeControl:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a8293c

// -[SCSpotlightOperaViewControllerTransitionAnimator resetGestureIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106a82940

// -[SCSpotlightOperaViewControllerTransitionAnimator enableFadeTransitionInDismissal:fadingViews:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a82964

// -[SCSpotlightOperaViewControllerTransitionAnimator disableFadeTransitionInDismissal]
// Type encoding: v16@0:8
// Implementation: 0x106a82968

// -[SCSpotlightOperaViewControllerTransitionAnimator updateBaseView:baseViewOrientation:topInset:transitionMode:]
// Type encoding: v48@0:8@16q24d32q40
// Implementation: 0x106a8296c

// -[SCSpotlightOperaViewControllerTransitionAnimator updateTransitionMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x106a82970

// -[SCSpotlightOperaViewControllerTransitionAnimator transitionMode]
// Type encoding: q16@0:8
// Implementation: 0x106a82974

// -[SCSpotlightOperaViewControllerTransitionAnimator dismissalSwipeDirection]
// Type encoding: q16@0:8
// Implementation: 0x106a8297c

// -[SCSpotlightOperaViewControllerTransitionAnimator viewControllerTransitionAnimatorWillBeginPresenting]
// Type encoding: v16@0:8
// Implementation: 0x106a82984

// -[SCSpotlightOperaViewControllerTransitionAnimator viewControllerTransitionAnimatorDidFinishPresenting]
// Type encoding: v16@0:8
// Implementation: 0x106a829b8

// -[SCSpotlightOperaViewControllerTransitionAnimator viewControllerPresentationAnimatorDidCreateBaseViewForDismissal:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a82a10

// -[SCSpotlightOperaViewControllerTransitionAnimator setBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a82a54

// -[SCSpotlightOperaViewControllerTransitionAnimator gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a82b80

// -[SCSpotlightOperaViewControllerTransitionAnimator gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106a82c30

// -[SCSpotlightOperaViewControllerTransitionAnimator _resolveCATransactionFlushMode]
// Type encoding: q16@0:8
// Implementation: 0x106a82de0

// -[SCSpotlightOperaViewControllerTransitionAnimator _setupDismissGestureRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x106a82e50

// -[SCSpotlightOperaViewControllerTransitionAnimator _setupAuxViewAnimatorIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x106a82ee8

// -[SCSpotlightOperaViewControllerTransitionAnimator _dismissDidFinish:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a83048

// -[SCSpotlightOperaViewControllerTransitionAnimator parentVC]
// Type encoding: @16@0:8
// Implementation: 0x106a831e0

// -[SCSpotlightOperaViewControllerTransitionAnimator childVC]
// Type encoding: @16@0:8
// Implementation: 0x106a831f8

// -[SCSpotlightOperaViewControllerTransitionAnimator setChildVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a83210

// -[SCSpotlightOperaViewControllerTransitionAnimator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a8321c

// -[SCSpotlightOperaViewControllerTransitionAnimator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a83234

// -[SCSpotlightOperaViewControllerTransitionAnimator baseViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106a83240

// -[SCSpotlightOperaViewControllerTransitionAnimator setBaseViewFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a8324c

// -[SCSpotlightOperaViewControllerTransitionAnimator baseView]
// Type encoding: @16@0:8
// Implementation: 0x106a83258

// -[SCSpotlightOperaViewControllerTransitionAnimator volumeController]
// Type encoding: @16@0:8
// Implementation: 0x106a83270

// -[SCSpotlightOperaViewControllerTransitionAnimator setVolumeController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a83288

// -[SCSpotlightOperaViewControllerTransitionAnimator dismissInteractionType]
// Type encoding: Q16@0:8
// Implementation: 0x106a83294

// -[SCSpotlightOperaViewControllerTransitionAnimator setDismissInteractionType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106a8329c

// -[SCSpotlightOperaViewControllerTransitionAnimator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a832a4

@end
