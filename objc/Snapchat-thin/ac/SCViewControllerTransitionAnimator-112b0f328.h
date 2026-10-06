// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCViewControllerTransitionAnimator
// Superclass: NSObject
// Address: 0x112b0f328

@interface SCViewControllerTransitionAnimator

// Property: thumbnailTransitionDurationMs; attributes: Ti,N,V_thumbnailTransitionDurationMs
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

// -[SCViewControllerTransitionAnimator initWithParentViewController:childViewController:baseView:topInset:bottomInset:baseViewBehavior:baseViewOrientation:transitionMode:auxViewActionEnabled:operaBounds:configProvider:transitionConfigProvider:]
// Type encoding: @132@0:8@16@24@32d40d48q56q64q72B80{CGRect={CGPoint=dd}{CGSize=dd}}84@116@124
// Implementation: 0x106a8bb50

// -[SCViewControllerTransitionAnimator present:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a8bde4

// -[SCViewControllerTransitionAnimator operaBoundsDidChange:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a8be20

// -[SCViewControllerTransitionAnimator dismiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a8bea8

// -[SCViewControllerTransitionAnimator setBaseViewFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a8c134

// -[SCViewControllerTransitionAnimator updateBaseView:baseViewOrientation:topInset:transitionMode:]
// Type encoding: v48@0:8@16q24d32q40
// Implementation: 0x106a8c194

// -[SCViewControllerTransitionAnimator updateTransitionMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x106a8c230

// -[SCViewControllerTransitionAnimator transitionMode]
// Type encoding: q16@0:8
// Implementation: 0x106a8c23c

// -[SCViewControllerTransitionAnimator updateDismissalAnimationVolumeControl:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a8c244

// -[SCViewControllerTransitionAnimator dismissalSwipeDirection]
// Type encoding: q16@0:8
// Implementation: 0x106a8c294

// -[SCViewControllerTransitionAnimator viewControllerTransitionAnimatorWillBeginPresenting]
// Type encoding: v16@0:8
// Implementation: 0x106a8c29c

// -[SCViewControllerTransitionAnimator viewControllerTransitionAnimatorDidFinishPresenting]
// Type encoding: v16@0:8
// Implementation: 0x106a8c2d0

// -[SCViewControllerTransitionAnimator viewControllerPresentationAnimatorDidCreateBaseViewForDismissal:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8c328

// -[SCViewControllerTransitionAnimator setBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8c36c

// -[SCViewControllerTransitionAnimator resetGestureIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106a8c498

// -[SCViewControllerTransitionAnimator enableFadeTransitionInDismissal:fadingViews:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a8c4c0

// -[SCViewControllerTransitionAnimator disableFadeTransitionInDismissal]
// Type encoding: v16@0:8
// Implementation: 0x106a8c4c8

// -[SCViewControllerTransitionAnimator _setupPresentationAnimator]
// Type encoding: v16@0:8
// Implementation: 0x106a8c4d0

// -[SCViewControllerTransitionAnimator _setupDismissalAnimator]
// Type encoding: v16@0:8
// Implementation: 0x106a8c588

// -[SCViewControllerTransitionAnimator _setupUpNextAnimator]
// Type encoding: v16@0:8
// Implementation: 0x106a8c6f0

// -[SCViewControllerTransitionAnimator _presentationAnimatorWithParentVC:childVC:baseView:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106a8c7f0

// -[SCViewControllerTransitionAnimator _isCircleTransition]
// Type encoding: B16@0:8
// Implementation: 0x106a8c8e0

// -[SCViewControllerTransitionAnimator _onDismissalBaseViewImageReady:baseView:topInset:transitionMode:]
// Type encoding: v48@0:8@16@24d32q40
// Implementation: 0x106a8c8f4

// -[SCViewControllerTransitionAnimator parentVC]
// Type encoding: @16@0:8
// Implementation: 0x106a8caa0

// -[SCViewControllerTransitionAnimator childVC]
// Type encoding: @16@0:8
// Implementation: 0x106a8cab8

// -[SCViewControllerTransitionAnimator setChildVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8cad0

// -[SCViewControllerTransitionAnimator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a8cadc

// -[SCViewControllerTransitionAnimator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8caf4

// -[SCViewControllerTransitionAnimator baseView]
// Type encoding: @16@0:8
// Implementation: 0x106a8cb00

// -[SCViewControllerTransitionAnimator baseViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106a8cb18

// -[SCViewControllerTransitionAnimator volumeController]
// Type encoding: @16@0:8
// Implementation: 0x106a8cb24

// -[SCViewControllerTransitionAnimator setVolumeController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8cb3c

// -[SCViewControllerTransitionAnimator thumbnailTransitionDurationMs]
// Type encoding: i16@0:8
// Implementation: 0x106a8cb48

// -[SCViewControllerTransitionAnimator setThumbnailTransitionDurationMs:]
// Type encoding: v20@0:8i16
// Implementation: 0x106a8cb50

// -[SCViewControllerTransitionAnimator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a8cb58

@end
