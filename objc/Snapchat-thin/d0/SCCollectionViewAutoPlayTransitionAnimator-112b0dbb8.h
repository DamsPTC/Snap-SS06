// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCollectionViewAutoPlayTransitionAnimator
// Superclass: NSObject
// Address: 0x112b0dbb8

@interface SCCollectionViewAutoPlayTransitionAnimator

// Property: parentVC; attributes: T@"UIViewController",R,W,N,V_parentVC
// Property: childVC; attributes: T@"UIViewController",W,N,V_childVC
// Property: delegate; attributes: T@"<SCViewControllerTransitionAnimatorDelegate>",W,N,V_delegate
// Property: baseViewFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_baseViewFrame
// Property: baseView; attributes: T@"UIView",W,N,V_baseView
// Property: volumeController; attributes: T@"<SCPullToDismissVolumeController>",W,N,V_volumeController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCollectionViewAutoPlayTransitionAnimator initWithParentViewController:baseView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a4b8ac

// -[SCCollectionViewAutoPlayTransitionAnimator present:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a4b940

// -[SCCollectionViewAutoPlayTransitionAnimator dismiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a4bb44

// -[SCCollectionViewAutoPlayTransitionAnimator updateBaseView:baseViewOrientation:topInset:transitionMode:]
// Type encoding: v48@0:8@16q24d32q40
// Implementation: 0x106a4bc1c

// -[SCCollectionViewAutoPlayTransitionAnimator updateTransitionMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x106a4bc20

// -[SCCollectionViewAutoPlayTransitionAnimator transitionMode]
// Type encoding: q16@0:8
// Implementation: 0x106a4bc24

// -[SCCollectionViewAutoPlayTransitionAnimator resetGestureIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106a4bc2c

// -[SCCollectionViewAutoPlayTransitionAnimator enableFadeTransitionInDismissal:fadingViews:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a4bc30

// -[SCCollectionViewAutoPlayTransitionAnimator disableFadeTransitionInDismissal]
// Type encoding: v16@0:8
// Implementation: 0x106a4bc34

// -[SCCollectionViewAutoPlayTransitionAnimator updateDismissalAnimationVolumeControl:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a4bc38

// -[SCCollectionViewAutoPlayTransitionAnimator dismissalSwipeDirection]
// Type encoding: q16@0:8
// Implementation: 0x106a4bc3c

// -[SCCollectionViewAutoPlayTransitionAnimator parentVC]
// Type encoding: @16@0:8
// Implementation: 0x106a4bc44

// -[SCCollectionViewAutoPlayTransitionAnimator childVC]
// Type encoding: @16@0:8
// Implementation: 0x106a4bc5c

// -[SCCollectionViewAutoPlayTransitionAnimator setChildVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a4bc74

// -[SCCollectionViewAutoPlayTransitionAnimator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a4bc80

// -[SCCollectionViewAutoPlayTransitionAnimator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a4bc98

// -[SCCollectionViewAutoPlayTransitionAnimator baseViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106a4bca4

// -[SCCollectionViewAutoPlayTransitionAnimator setBaseViewFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a4bcb0

// -[SCCollectionViewAutoPlayTransitionAnimator baseView]
// Type encoding: @16@0:8
// Implementation: 0x106a4bcbc

// -[SCCollectionViewAutoPlayTransitionAnimator setBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a4bcd4

// -[SCCollectionViewAutoPlayTransitionAnimator volumeController]
// Type encoding: @16@0:8
// Implementation: 0x106a4bce0

// -[SCCollectionViewAutoPlayTransitionAnimator setVolumeController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a4bcf8

// -[SCCollectionViewAutoPlayTransitionAnimator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a4bd04

@end
